#include <cstdint>
#include <string>
#include <iostream>
#include <sstream>

#include "Player.hpp"
#include "Server.hpp"
#include "protocol/ClientPackets.hpp"
#include <cstdint>
#include "World.hpp"
#include "world_storage/globalPalette_TEMP.hpp"

Player::Player(Client *cli, std::shared_ptr<Dimension> dim, u128 uuid, const std::string &username):
    _cli(cli),
    Entity(dim),
    _uuid(uuid),
    _username(username),
    _keepAliveId(0),
    _keepAliveIgnored(0),
    _gamemode(0),
    _keepAliveClock(200, std::bind(&Player::_processKeepAlive, this)) // 5 seconds for keep-alives
{
    _log = logging::Logger::get_instance();
    _keepAliveClock.start();
    _heldItem = 0;

    // Generate uuid string
    std::stringstream uuidsstr;
    std::string uuidstr;

    uuidsstr << std::hex << this->getUuid().most << this->getUuid().least;
    uuidstr = uuidsstr.str();
    uuidstr.insert(8, "-");
    uuidstr.insert(13, "-");
    uuidstr.insert(18, "-");
    uuidstr.insert(23, "-");
    this->_uuidString = uuidstr;
}

void Player::tick()
{
    _keepAliveClock.tick();

    bool updatePos = false;
    bool updateRot = false;
    int16_t deltaX = 0;
    int16_t deltaY = 0;
    int16_t deltaZ = 0;

    if (_pos != _lastPos) {
        updatePos = true;
        deltaX = static_cast<int16_t>((this->_pos.x * 32.0 - this->_lastPos.x * 32.0) * 128.0);
        deltaY = static_cast<int16_t>((this->_pos.y * 32.0 - this->_lastPos.y * 32.0) * 128.0);
        deltaZ = static_cast<int16_t>((this->_pos.z * 32.0 - this->_lastPos.z * 32.0) * 128.0);
        _lastPos = _pos;
    }
    if (_rot != _lastRot) {
        updateRot = true;
        _lastRot = _rot;
    }
    if (updatePos && updateRot) {
        for (auto i : this->getDimension()->getPlayerList()) {
            if (i->getId() == this->getId())
                continue;
            i->sendUpdateEntityPositionAndRotation({
                this->getId(),
                deltaX,
                deltaY,
                deltaZ,
                this->_rot.x,
                this->_rot.y,
                true
            });
            i->sendHeadRotation({
                this->getId(),
                _rot.x
            });
        }
    } else if (updatePos && !updateRot) {
        for (auto i : this->getDimension()->getPlayerList()) {
            if (i->getId() == this->getId())
                continue;
            i->sendUpdateEntityPosition({
                this->getId(),
                deltaX,
                deltaY,
                deltaZ,
                true
            });
        }
    } else if (!updatePos && updateRot) {
        for (auto i : this->getDimension()->getPlayerList()) {
            if (i->getId() == this->getId())
                continue;
            i->sendUpdateEntityRotation({
                this->getId(),
                this->_rot.x,
                this->_rot.y,
                true
            });
            i->sendHeadRotation({
                this->getId(),
                _rot.x
            });
        }
    }

    if (_pos.y < -100)
        sendSynchronizePosition({_pos.x, -58, _pos.z});
}

Client *Player::getClient() const
{
    return _cli;
}

const std::string &Player::getUsername() const
{
    return _username;
}

const u128 &Player::getUuid() const
{
    return _uuid;
}

uint16_t Player::getHeldItem() const
{
    return this->_heldItem;
}

const std::string &Player::getUuidString() const
{
    return this->_uuidString;
}

uint8_t Player::getGamemode() const
{
    return _gamemode;
}

void Player::setGamemode(uint8_t gamemode)
{
    _gamemode = gamemode;
}

void Player::disconnect(const chat::Message &reason)
{
    nlohmann::json json;

    // TODO: test this, cause I don't know if the translate key is the correct one
    json["translate"] = "chat.type.text";
    json["with"] = nlohmann::json::array({
        {"text", this->_username},
        {reason.toJson()}
    });

    auto pck = protocol::createPlayDisconnect({
        json.dump()
    });
    this->_cli->_sendData(*pck);
    this->_cli->_is_running = false;
    LDEBUG("Sent a disconnect play packet");
}

#pragma region ClientBound

long Player::keepAliveId() const
{
    return _keepAliveId;
}

void Player::setKeepAliveId(long id)
{
    _keepAliveId = id;
}

void Player::setKeepAliveIgnored(uint8_t ign)
{
    _keepAliveIgnored = ign;
}

uint8_t Player::keepAliveIgnored() const {
    return _keepAliveIgnored;
}

void Player::playSoundEffect(SoundsList sound, protocol::FloatingPosition position, SoundCategory category)
{
    auto pck = protocol::createSoundEffect({
        (int32_t) sound,
        (int32_t) category,
        // https://wiki.vg/Data_types#Fixed-point_numbers
        static_cast<int32_t>(position.x * 32.0),
        static_cast<int32_t>(position.y * 32.0),
        static_cast<int32_t>(position.z * 32.0),
        0.5, // TODO: get the right volume
        1.0, // TODO: get the right pitch
        0 // TODO: get the right seed
    });
    this->_cli->_sendData(*pck);
    LDEBUG("Sent a sound effect packet");
}

void Player::playSoundEffect(SoundsList sound, const Entity *entity, SoundCategory category)
{
    auto pck = protocol::createEntitySoundEffect({
        (int32_t) sound,
        (int32_t) category,
        entity->getId(),
        1.0, // TODO: get the right volume
        1.0, // TODO: get the right pitch
        1 // TODO: get the right seed
    });
    this->_cli->_sendData(*pck);
    LDEBUG("Sent a entity sound effect packet");
}

void Player::playCustomSound(std::string sound, protocol::FloatingPosition position, SoundCategory category)
{
    auto pck = protocol::createCustomSoundEffect({
        sound,
        (int32_t) category,
        // https://wiki.vg/Data_types#Fixed-point_numbers
        static_cast<int32_t>(position.x * 32.0),
        static_cast<int32_t>(position.y * 32.0),
        static_cast<int32_t>(position.z * 32.0),
        0.5, // TODO: get the right volume
        1.0, // TODO: get the right pitch
        0 // TODO: get the right seed
    });
    this->_cli->_sendData(*pck);
    LDEBUG("Sent a custom sound effect packet");
}

void Player::stopSound(uint8_t flags, SoundCategory category, std::string sound)
{
    auto pck = protocol::createStopSound({
        flags,
        (int32_t) category,
        sound
    });
    this->_cli->_sendData(*pck);
    LDEBUG("Sent a stop sound packet");
}

void Player::sendBlockUpdate(const protocol::BlockUpdate &packet)
{
    auto pck = protocol::createBlockUpdate(packet);
    this->_cli->_sendData(*pck);

    LINFO("Sent a block update at (" + std::to_string(packet.location.x) + ", " + std::to_string(packet.location.y) + ", " + std::to_string(packet.location.z) + ") = " + std::to_string(packet.block_id) + " to " + this->getUsername());
}

void Player::sendLoginPlay(const protocol::LoginPlay &packet)
{
    auto pck = protocol::createLoginPlay(packet);
    _cli->_sendData(*pck);
    LDEBUG("Sent a login play");
    // Send all chunks around the player
    // TODO: send chunk closer to the player first
    sendChunkAndLightUpdate(0, 0);
    for (int32_t x = -4; x < 4; x++) {
        for (int32_t z = -4; z < 4; z++) {
            if (x == 0 && z == 0)
                continue;
            sendChunkAndLightUpdate(x, z);
        }
    }
    sendSynchronizePosition({8.5, 65, 8.5});
    // for (auto &player : this->_player->getDimension()->getPlayerList())
    //     player->sendSynchronizePosition({0, -58, 0});
    // this->_player->sendChunkAndLightUpdate(0, 0);
    _dim->addEntity(this);
    LDEBUG("Added entity player to dimension");
    getDimension()->getWorld()->sendPlayerInfoAddPlayer(this);
    getDimension()->spawnPlayer(this);

    // Send login message
    chat::Message connectionMsg = chat::Message("", {
        .color = "yellow",
        .translate = "multiplayer.player.joined",
        .with = std::vector<chat::Message>({
            chat::Message(
                this->getUsername(),
                {
                    .insertion = this->getUsername(),
                },
                chat::message::ClickEvent(
                    chat::message::ClickEvent::Action::SuggestCommand,
                    "/tell " + this->getUsername() + " "
                ),
                chat::message::HoverEvent(
                    chat::message::HoverEvent::Action::ShowEntity,
                    "{\"type\": \"minecraft:player\", \"id\": \"" + this->getUuidString() + "\", \"name\": \"" + this->getUsername() + "\"}"
                )
            )
        })
    });

    this->getDimension()->getWorld()->getChat()->sendSystemMessage(
        connectionMsg,
        false,
        this->getDimension()->getWorld()->getWorldGroup()
    );
    // for (auto &player : this->_player->getDimension()->getPlayerList())
    //     player->sendTeleportEntity(this->_player->getId(), {0, -58, 0});
}

void Player::sendPlayerInfo(const protocol::PlayerInfo &data)
{
    LDEBUG("Sending PlayerInfo. Currently there is: " + std::to_string(data.numberOfPlayers) + " players");
    auto pck = protocol::createPlayerInfo(data);
    this->_cli->_sendData(*pck);

    LDEBUG("Sent a Player Info packet");
}

void Player::sendSpawnPlayer(const protocol::SpawnPlayer &data)
{
    auto pck = protocol::createSpawnPlayer(data);
    this->_cli->_sendData(*pck);

    LDEBUG("Sent a Spawn Player packet on coords: " + std::to_string(data.x) + " " + std::to_string(data.y) + " " + std::to_string(data.z));
}

void Player::sendUpdateTime(const protocol::UpdateTime &data)
{
    auto pck = protocol::createUpdateTime(data);
    this->_cli->_sendData(*pck);

    LDEBUG("Sent an Update Time packet");
}

void Player::sendChatMessageResponse(const protocol::PlayerChatMessage &packet)
{
    // auto pck = protocol::createPlayerChatMessage(packet);
    // this->_cli->_sendData(*pck);

    // LDEBUG("Sent a chat message response");
}

void Player::sendSystemChatMessage(const protocol::SystemChatMessage &packet)
{
    std::string temp = "{\"style\":{\"color\":\"red\"},\"translate\":\"multiplayer.player.left\",\"with\":[{\"insertion\":\"Trompette2\",\"clickEvent\":{\"action\":\"suggest_command\",\"value\":\"/tell Trompette2 \"},\"hoverEvent\":{\"action\":\"show_entity\",\"contents\":{\"type\":\"minecraft:player\",\"id\":\"e02c083d-1c61-3b49-b7ea-4d47e2b9698a\",\"name\":{\"text\":\"Trompette2\"}}},\"text\":\"Trompette2\"}]}";
    auto pck = protocol::createSystemChatMessage(packet);
    // auto pck = protocol::createPlayerChatMessage(packet);
    // auto pck = protocol::createSystemChatMessage({
    //     temp,
    //     false
    // });
    this->_cli->_sendData(*pck);

    LDEBUG("Sent a system chat message to " + this->getUsername());
    LDEBUG("template: ");
    LDEBUG(temp);
    LDEBUG("message: ");
    LDEBUG(packet.JSONData);
}

void Player::sendWorldEvent(const protocol::WorldEvent &packet)
{
    auto pck = protocol::createWorldEvent(packet);
    this->_cli->_sendData(*pck);

    LDEBUG("Sent a world event");
}

void Player::sendKeepAlive(long id)
{
    auto pck = protocol::createKeepAlive(id);
    this->_cli->_sendData(*pck);
    LDEBUG("Sent a keep alive packet");
}

void Player::sendUpdateEntityPosition(const protocol::UpdateEntityPosition &data)
{
    auto pck = protocol::createUpdateEntityPosition(data);
    this->_cli->_sendData(*pck);
    LDEBUG("Sent an entity position packet");
}

void Player::sendUpdateEntityPositionAndRotation(const protocol::UpdateEntityPositionRotation &data)
{
    auto pck = protocol::createUpdateEntityPositionRotation(data);
    this->_cli->_sendData(*pck);
    LDEBUG("Sent an entity position and rotation packet");
}

void Player::sendUpdateEntityRotation(const protocol::UpdateEntityRotation &data)
{
    auto pck = protocol::createUpdateEntityRotation(data);
    this->_cli->_sendData(*pck);
    LDEBUG("Sent an entity rotation packet");
}

void Player::sendHeadRotation(const protocol::HeadRotation &data)
{
    auto pck = protocol::createHeadRotation(data);
    this->_cli->_sendData(*pck);
    LDEBUG("Sent an entity head rotation packet");
}

void Player::sendSynchronizePosition(Vector3<double> pos)
{
    auto pck = protocol::createSynchronizePlayerPosition({
        pos.x,
        pos.y,
        pos.z,
        0,
        0,
        0x08 | 0x10,
        0,
        true,

    });
    this->_cli->_sendData(*pck);
    this->forceSetPosition(pos);
    LDEBUG("Synchronized player position");

    for (auto i : this->getDimension()->getPlayerList()) {
        if (i->getId() == this->getId())
            continue;
        i->sendTeleportEntity(this->getId(), pos);
    }
}

void Player::sendChunkAndLightUpdate(int32_t x, int32_t z)
{
    auto chunk = this->_dim->getLevel().getChunkColumn({x, z});
    auto heightMap = chunk.getHeightMap();

    std::vector<nbt::Base *> motionBlocking;
    std::vector<nbt::Base *> worldSurface;

    // HeightMap preparation
    for (auto &it : heightMap.motionBlocking)
        motionBlocking.push_back(&it);
    for (auto &it : heightMap.worldSurface)
        worldSurface.push_back(&it);

    auto motionBlockingList = new nbt::List("MOTION_BLOCKING", motionBlocking);
    auto worldSurfaceList = new nbt::List("WORLD_SURFACE", worldSurface);

    auto packet = protocol::createChunkDataAndLightUpdate({
        x,
        z,
        nbt::Compound("", {
            motionBlockingList,
            worldSurfaceList
        }),
        chunk,
        {}, // TODO: BlockEntities
        true,
        {}, // TODO: Sky light mask
        {}, // TODO: Block light mask
        {}, // TODO: empty sky light mask
        {}, // TODO: empty block light mask
        {}, // TODO: sky light
        {}  // TODO: block light
    });
    this->_cli->_sendData(*packet);

    LDEBUG("Sent a chunk data and light update packet (" + std::to_string(x) + ", " + std::to_string(z) + ")");
    delete motionBlockingList;
    delete worldSurfaceList;
}

void Player::sendRemoveEntities(const std::vector<int32_t> &entities)
{
    auto pck = protocol::createRemoveEntities({entities});
    this->_cli->_sendData(*pck);
    LDEBUG("Sent a Remove Entities packet");
}

void Player::sendSwingArm(bool main_hand, int32_t swinger_id)
{
    auto pck = protocol::createEntityAnimation(
        main_hand ? protocol::EntityAnimationID::SwingMainArm : protocol::EntityAnimationID::SwingOffHand,
        swinger_id
    );
    _cli->_sendData(*pck);
}

void Player::sendTeleportEntity(int32_t id, const Vector3<double> &pos)
{
    auto pck = protocol::createTeleportEntity({
        id,
        pos.x,
        pos.y,
        pos.z
    });
    _cli->_sendData(*pck);
    LDEBUG("Sent a Teleport Entity");
}

void Player::sendPlayerAbilities(const protocol::PlayerAbilitiesClient &packet)
{
    auto pck = protocol::createPlayerAbilities(packet);
    _cli->_sendData(*pck);
    LDEBUG("Sent a Player Abilities packet");
}

#pragma endregion
#pragma region ServerBound

void Player::_onConfirmTeleportation(const std::shared_ptr<protocol::ConfirmTeleportation> &pck)
{
    LDEBUG("Got a Confirm Teleportation");
}

void Player::_onQueryBlockEntityTag(const std::shared_ptr<protocol::QueryBlockEntityTag> &pck)
{
    LDEBUG("Got a Query Block Entity Tag");
}

void Player::_onChangeDifficulty(const std::shared_ptr<protocol::ChangeDifficulty> &pck)
{
    LDEBUG("Got a Change difficulty");
}

// Receive a chat message from the client, transmit it to the chat system.
void Player::_onChatMessage(const std::shared_ptr<protocol::ChatMessage> &pck)
{
    // TODO: verify that the message is valid (signature, etc.)
    _dim->getWorld()->getChat()->sendPlayerMessage(pck->message, this);
    _log->debug("Got a Chat Message");
}

void Player::_onClientCommand(const std::shared_ptr<protocol::ClientCommand> &pck)
{
    LDEBUG("Got a Client Command");
}

void Player::_onClientInformation(const std::shared_ptr<protocol::ClientInformation> &pck)
{
    LDEBUG("Got a Client Information");
}

void Player::_onCommandSuggestionRequest(const std::shared_ptr<protocol::CommandSuggestionRequest> &pck)
{
    LDEBUG("Got a Command Suggestion Request");
}

void Player::_onClickContainerButton(const std::shared_ptr<protocol::ClickContainerButton> &pck)
{
    LDEBUG("Got a Click Container Button");
}

void Player::_onCloseContainerRequest(const std::shared_ptr<protocol::CloseContainerRequest> &pck)
{
    LDEBUG("Got a Close Container Request");
}

void Player::_onPluginMessage(const std::shared_ptr<protocol::PluginMessage> &pck)
{
    LDEBUG("Got a Plugin Message");
    if (pck->channel == "minecraft:brand") {
        LDEBUG("Got a branding request");
        auto pck = protocol::createPluginMessageResponse({
            "minecraft:brand",
            std::vector<uint8_t>({0x05, 0x43, 0x75, 0x62, 0x69, 0x63}) // 43 75 62 69 63 | "Cubic" in hex
        });
        _cli->_sendData(*pck);
        return;
    }
}

void Player::_onEditBook(const std::shared_ptr<protocol::EditBook> &pck)
{
    LDEBUG("Got a Edit Book");
}

void Player::_onQueryEntityTag(const std::shared_ptr<protocol::QueryEntityTag> &pck)
{
    LDEBUG("Got a Query Entity Tag");
}

void Player::_onInteract(const std::shared_ptr<protocol::Interact> &pck)
{
    LDEBUG("Got a Interact");
}

void Player::_onJigsawGenerate(const std::shared_ptr<protocol::JigsawGenerate> &pck)
{
    LDEBUG("Got a Jigsaw Generate");
}

void Player::_onKeepAliveResponse(const std::shared_ptr<protocol::KeepAliveResponse> &pck)
{
    if (pck->keep_alive_id != _keepAliveId) {
        LERROR("Got a Keep Alive Response with a wrong ID: " + std::to_string(pck->keep_alive_id) + " (expected " + std::to_string(_keepAliveId) + ")");
        this->disconnect("Wrong Keep Alive ID");
        return;
    }

    _keepAliveId = 0;
    LDEBUG("Got a Keep Alive Response");
}

void Player::_onLockDifficulty(const std::shared_ptr<protocol::LockDifficulty> &pck)
{
    LDEBUG("Got a Lock Difficulty");
}

void Player::_onSetPlayerPosition(const std::shared_ptr<protocol::SetPlayerPosition> &pck)
{
    LDEBUG("Got a Set Player Position (" + std::to_string(pck->x) + ", " + std::to_string(pck->feet_y) + ", " + std::to_string(pck->z) + ")");
    this->setPosition(pck->x, pck->feet_y, pck->z);
}

void Player::_onSetPlayerPositionAndRotation(const std::shared_ptr<protocol::SetPlayerPositionAndRotation> &pck)
{
    LDEBUG("Got a Set Player Position And Rotation (" + std::to_string(pck->x) + ", " + std::to_string(pck->feet_y) + ", " + std::to_string(pck->z) + ")");
    this->setPosition(pck->x, pck->feet_y, pck->z);
    float yaw_tmp = pck->yaw;
    while (yaw_tmp < 0)
        yaw_tmp += 360;
    while (yaw_tmp > 360)
        yaw_tmp -= 360;
    this->setRotation(yaw_tmp, pck->pitch/1.5);
}

void Player::_onSetPlayerRotation(const std::shared_ptr<protocol::SetPlayerRotation> &pck)
{
    LDEBUG("Got a Set Player Rotation");
    this->setRotation(pck->yaw, pck->pitch/1.5);
}

void Player::_onSetPlayerOnGround(const std::shared_ptr<protocol::SetPlayerOnGround> &pck)
{
    LDEBUG("Got a Set Player On Ground");
}

void Player::_onMoveVehicle(const std::shared_ptr<protocol::MoveVehicle> &pck)
{
    LDEBUG("Got a Move Vehicle");
}

void Player::_onPaddleBoat(const std::shared_ptr<protocol::PaddleBoat> &pck)
{
    LDEBUG("Got a Paddle Boat");
}

void Player::_onPickItem(const std::shared_ptr<protocol::PickItem> &pck)
{
    LDEBUG("Got a Pick Item");
}

void Player::_onPlaceRecipe(const std::shared_ptr<protocol::PlaceRecipe> &pck)
{
    LDEBUG("Got a Place Recipe");
}

void Player::_onPlayerAbilities(const std::shared_ptr<protocol::PlayerAbilities> &pck)
{
    this->_isFlying = pck->flags & protocol::PlayerAbilitiesFlags::Flying;
    uint8_t flags = this->_isFlying ? protocol::PlayerAbilitiesFlags::Flying : 0x00;
    flags |= protocol::PlayerAbilitiesFlags::Invulnerable | protocol::PlayerAbilitiesFlags::AllowFlying| protocol::PlayerAbilitiesFlags::CreativeMode;
    this->sendPlayerAbilities({
        flags,
        0.05f,
        0.1f
    });
    LDEBUG("Got a Player Abilities");
}

void Player::_onPlayerAction(const std::shared_ptr<protocol::PlayerAction> &pck)
{
    // LINFO("Got a Player Action " + std::to_string(pck->status) + " at (" + std::to_string(pck->location.x) + ", " + std::to_string(pck->location.y) + ", " + std::to_string(pck->location.z) + ")");
    LDEBUG("Got a Player Action and player is in gamemode " + std::to_string(this->getGamemode()) + " and status is " + std::to_string(pck->status));
    if (pck->status == 0 && this->getGamemode() == 1) {
        this->getDimension()->blockUpdate(pck->location, 0);
    } else if (pck->status == 2) {
        this->getDimension()->blockUpdate(pck->location, 0);
    }
}

void Player::_onPlayerCommand(const std::shared_ptr<protocol::PlayerCommand> &pck)
{
    LDEBUG("Got a Player Command");
}

void Player::_onPlayerInput(const std::shared_ptr<protocol::PlayerInput> &pck)
{
    LDEBUG("Got a Player Input");
}

void Player::_onPong(const std::shared_ptr<protocol::Pong> &pck)
{
    LDEBUG("Got a Pong");
}

void Player::_onChangeRecipeBookSettings(const std::shared_ptr<protocol::ChangeRecipeBookSettings> &pck)
{
    LDEBUG("Got a Change Recipe Book Settings");
}

void Player::_onSetSeenRecipe(const std::shared_ptr<protocol::SetSeenRecipe> &pck)
{
    LDEBUG("Got a Set Seen Recipe");
}

void Player::_onRenameItem(const std::shared_ptr<protocol::RenameItem> &pck)
{
    LDEBUG("Got a Rename Item");
}

void Player::_onResourcePack(const std::shared_ptr<protocol::ResourcePack> &pck)
{
    LDEBUG("Got a Resource Pack");
}

void Player::_onSeenAdvancements(const std::shared_ptr<protocol::SeenAdvancements> &pck)
{
    LDEBUG("Got a Seen Advancements");
}

void Player::_onSelectTrade(const std::shared_ptr<protocol::SelectTrade> &pck)
{
    LDEBUG("Got a Select Trade");
}

void Player::_onSetBeaconEffect(const std::shared_ptr<protocol::SetBeaconEffect> &pck)
{
    LDEBUG("Got a Set Beacon Effect");
}

void Player::_onSetHeldItem(const std::shared_ptr<protocol::SetHeldItem> &pck)
{
    this->_heldItem = pck->slot;
    LDEBUG("Got a Set Held Item");
}

void Player::_onProgramCommandBlock(const std::shared_ptr<protocol::ProgramCommandBlock> &pck)
{
    LDEBUG("Got a Program Command Block");
}

void Player::_onProgramCommandBlockMinecart(const std::shared_ptr<protocol::ProgramCommandBlockMinecart> &pck)
{
    LDEBUG("Got a Program Command Block Minecart");
}

void Player::_onProgramJigsawBlock(const std::shared_ptr<protocol::ProgramJigsawBlock> &pck)
{
    LDEBUG("Got a Program Jigsaw Block");
}

void Player::_onProgramStructureBlock(const std::shared_ptr<protocol::ProgramStructureBlock> &pck)
{
    LDEBUG("Got a Program Structure Block");
}

void Player::_onUpdateSign(const std::shared_ptr<protocol::UpdateSign> &pck)
{
    LDEBUG("Got a Update Sign");
}

void Player::_onSwingArm(const std::shared_ptr<protocol::SwingArm> &pck)
{
    LDEBUG("Got a Swing Arm");
    for (auto i : this->getDimension()->getPlayerList()) {
        if (i->getId() == this->getId())
            continue;
        i->sendSwingArm(pck->hand == 0, this->getId());
    }
}

void Player::_onTeleportToEntity(const std::shared_ptr<protocol::TeleportToEntity> &pck)
{
    LDEBUG("Got a Teleport To Entity");
}

void Player::_onUseItemOn(const std::shared_ptr<protocol::UseItemOn> &pck)
{
    LDEBUG("Got a Use Item On (" + std::to_string(pck->location.x) + ", " + std::to_string(pck->location.y) + ", " + std::to_string(pck->location.z) + ") -> " + std::to_string(this->_heldItem));
    switch (pck->face)
    {
        case 0: pck->location.y--; break;
        case 1: pck->location.y++; break;
        case 2: pck->location.z--; break;
        case 3: pck->location.z++; break;
        case 4: pck->location.x--; break;
        case 5: pck->location.x++; break;
    }
    switch (this->_heldItem) {
        case 0: this->getDimension()->blockUpdate(pck->location, world_storage::getGlobalPaletteIdFromBlockName("minecraft:grass_block")); break;
        case 1: this->getDimension()->blockUpdate(pck->location, world_storage::getGlobalPaletteIdFromBlockName("minecraft:dirt")); break;
        case 2: this->getDimension()->blockUpdate(pck->location, world_storage::getGlobalPaletteIdFromBlockName("minecraft:bedrock")); break;
        case 3: this->getDimension()->blockUpdate(pck->location, world_storage::getGlobalPaletteIdFromBlockName("minecraft:oak_log")); break;
        case 4: this->getDimension()->blockUpdate(pck->location, world_storage::getGlobalPaletteIdFromBlockName("minecraft:oak_leaves")); break;
        case 5: this->getDimension()->blockUpdate(pck->location, world_storage::getGlobalPaletteIdFromBlockName("minecraft:glass")); break;
        case 6: this->getDimension()->blockUpdate(pck->location, world_storage::getGlobalPaletteIdFromBlockName("minecraft:cobblestone")); break;
        case 7: this->getDimension()->blockUpdate(pck->location, world_storage::getGlobalPaletteIdFromBlockName("minecraft:pink_terracotta")); break;
        case 8: this->getDimension()->blockUpdate(pck->location, world_storage::getGlobalPaletteIdFromBlockName("minecraft:purple_carpet")); break;
    }
}

void Player::_onUseItem(const std::shared_ptr<protocol::UseItem> &pck)
{
    LDEBUG("Got a Use Item");
}

#pragma endregion Serverbound

void Player::_processKeepAlive()
{
    long id = std::chrono::system_clock::now().time_since_epoch().count();
    if (this->keepAliveId() != 0) {
        this->setKeepAliveIgnored(this->keepAliveIgnored() + 1);
        if (this->_keepAliveClock.tickRate() * this->keepAliveIgnored() >= 6000)
            this->disconnect("Timed out from keep alive LOL");
        return;
    }
    this->setKeepAliveId(id);
    this->sendKeepAlive(id);
}
