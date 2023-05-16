#include "WorldGroup.hpp"
#include "World.hpp"
#include "Dimension.hpp"
#include "Player.hpp"
#include "protocol/ClientPackets.hpp"

#include "ScoreboardSystem.hpp"
#include "Scoreboard.hpp"

namespace Scoreboard {
    Scoreboard::Scoreboard(const ScoreboardSystem &system, const WorldGroup &worldGroup):
        _system(system),
        _worldGroup(worldGroup)
    {
        this->_displaySlots.fill(nullptr);
    }

    const WorldGroup &Scoreboard::getWorldGroup(void) const noexcept
    {
        return (this->_worldGroup);
    }

    bool Scoreboard::isObjective(const std::string &name) const noexcept
    {
        return (this->_objectives.contains(name));
    }

    const Objective::Objective &Scoreboard::getObjective(const std::string &name) const
    {
        return (*this->_objectives.at(name));
    }

    const std::unordered_map<std::string, std::shared_ptr<Objective::Objective>> &Scoreboard::getObjectives(void) const noexcept
    {
        return (this->_objectives);
    }

    bool Scoreboard::addObjective(const std::string &name, const std::string &criteria)
    {
        if (this->_objectives.contains(name))
            return (false);
        if (!this->_system.hasObjectiveCriteria(criteria))
            return (false);
        this->_objectives[name] = std::make_unique<Objective::Objective>(*this, name, criteria);
        this->_objectivesByCriteria[criteria][name] = this->_objectives[name];
        this->sendAddObjective(*this->_objectives[name]);
        return (true);
    }

    bool Scoreboard::addObjective(const std::string &name, const std::string &criteria, std::string &displayName)
    {
        if (this->_objectives.contains(name))
            return (false);
        if (!this->_system.hasObjectiveCriteria(criteria))
            return (false);
        this->_objectives[name] = std::make_unique<Objective::Objective>(*this, name, criteria, displayName);
        this->_objectivesByCriteria[criteria][name] = this->_objectives[name];
        this->sendAddObjective(*this->_objectives[name]);
        return (true);
    }

    bool Scoreboard::removeObjective(const std::string &name)
    {
        if (!this->_objectives.contains(name))
            return (false);
        this->sendRemoveObjective(*this->_objectives[name]);
        this->_objectivesByCriteria[this->_objectives[name]->getCriteria()].erase(name);
        this->_objectives.erase(name);
        return (true);
    }

    void Scoreboard::displayObjective(DisplaySlot slot, Objective::Objective *objective) noexcept
    {
        this->_displaySlots[slot] = objective;
        this->sendDisplayObjective(slot, objective);
    }

    void Scoreboard::addToObjectivebyCriteria(const std::string &criteria, const std::string &entity, int32_t value)
    {
        for (auto &[name, objective] : this->_objectivesByCriteria[criteria])
            objective->addScore(entity, value);
    }

    void Scoreboard::setToObjectivebyCriteria(const std::string &criteria, const std::string &entity, int32_t value)
    {
        for (auto &[name, objective] : this->_objectivesByCriteria[criteria])
            objective->setScore(entity, value);
    }

    bool Scoreboard::isTeam(const std::string &name) const noexcept
    {
        return (this->_teams.contains(name));
    }

    const Team::Team &Scoreboard::getTeam(const std::string &name) const
    {
        return (*this->_teams.at(name));
    }

    const std::unordered_map<std::string, std::unique_ptr<Team::Team>> &Scoreboard::getTeams(void) const noexcept
    {
        return (this->_teams);
    }

    bool Scoreboard::addTeam(const std::string &name)
    {
        if (this->_teams.contains(name))
            return (false);
        this->_teams[name] = std::make_unique<Team::Team>(*this, name);
        this->sendAddTeam(*this->_teams[name]);
        return (true);
    }

    bool Scoreboard::removeTeam(const std::string &name)
    {
        if (!this->_teams.contains(name))
            return (false);
        this->sendRemoveTeam(*this->_teams[name]);
        this->_teams.erase(name);
        return (true);
    }

    void Scoreboard::sendAddObjective(const Objective::Objective &objective) const
    {
        const protocol::UpdateObjectives update{
            objective.getName(),
            0,
            objective.getDisplayName(),
            static_cast<protocol::UpdateObjectives::Type>(objective.getRenderType())
        };

        for (const auto &[_, world] : this->_worldGroup.getWorlds()) {
            for (const auto &[_, dimension] : world->getDimensions()) {
                for (const auto &player : dimension->getPlayers()) {
                    player->sendUpdateObjective(update);
                }
            }
        }
    }

    void Scoreboard::sendRemoveObjective(const Objective::Objective &objective) const
    {
        const protocol::UpdateObjectives update{
            objective.getName(),
            1,
            "",
            protocol::UpdateObjectives::Type::Integers
        };

        for (const auto &[_, world] : this->_worldGroup.getWorlds()) {
            for (const auto &[_, dimension] : world->getDimensions()) {
                for (const auto &player : dimension->getPlayers()) {
                    player->sendUpdateObjective(update);
                }
            }
        }
    }

    void Scoreboard::sendDisplayObjective(DisplaySlot slot, const Objective::Objective *objective) const
    {
        std::string name = "";

        if (objective)
            name = objective->getName();

        const protocol::DisplaySlot display{
            static_cast<uint8_t>(slot),
            name
        };
        for (const auto &[_, world] : this->_worldGroup.getWorlds()) {
            for (const auto &[_, dimension] : world->getDimensions()) {
                for (const auto &player : dimension->getPlayers()) {
                    player->sendDisplayObjective(display);
                }
            }
        }
    }

    void Scoreboard::sendAddTeam(const Team::Team &team) const
    {
        uint8_t friendlyFlags = 0x00000000;

        if (team.isAllowingFriendlyFire())
            friendlyFlags += 0x00000001;
        if (team.isSeeingFriendlyInvisibles())
            friendlyFlags += 0x00000010;

        const protocol::UpdateTeams update{
            team.getName(),
            0,
            team.getDisplayName(),
            friendlyFlags,
            Team::NametagVisibility::getProtocolFlag(team.getNametagVisibility()),
            Team::CollisionRule::getProtocolFlag(team.getCollisionRule()),
            team.getColor(),
            team.getPrefix(),
            team.getSuffix(),
            0,
            {}
        };
        for (const auto &[_, world] : this->_worldGroup.getWorlds()) {
            for (const auto &[_, dimension] : world->getDimensions()) {
                for (const auto &player : dimension->getPlayers()) {
                    player->sendUpdateTeams(update);
                }
            }
        }
    }
    
    void Scoreboard::sendRemoveTeam(const Team::Team &team) const
    {
        const protocol::UpdateTeams update{
            team.getName(),
            1,
            team.getDisplayName(),
            0,
            "",
            "",
            team.getColor(),
            "",
            "",
            0,
            {}
        };
        for (const auto &[_, world] : this->_worldGroup.getWorlds()) {
            for (const auto &[_, dimension] : world->getDimensions()) {
                for (const auto &player : dimension->getPlayers()) {
                    player->sendUpdateTeams(update);
                }
            }
        }
    }
};

