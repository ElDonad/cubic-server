#ifndef PROTOCOL_WINDOW_CRAFTING_HPP
#define PROTOCOL_WINDOW_CRAFTING_HPP

#include "Player.hpp"
#include "protocol/container/Container.hpp"
#include <cstdint>

constexpr const int16_t CRAFTINGTABLE_CRAFTED_ITEM_SIZE = 1;
constexpr const int16_t CRAFTINGTABLE_CRAFTING_GRID_3X3 = 9;
constexpr const int16_t CRAFTINGTABLE_INVENTORY_SIZE = 27;
constexpr const int16_t CRAFTINGTABLE_HOTBAR_SIZE = 9;
constexpr const int16_t CRAFTINGTABLE_CRAFTED_ITEM_OFFSET = 0;
constexpr const int16_t CRAFTINGTABLE_CRAFTING_GRID_OFFSET = CRAFTINGTABLE_CRAFTED_ITEM_SIZE;
constexpr const int16_t CRAFTINGTABLE_INVENTORY_OFFSET = CRAFTINGTABLE_CRAFTED_ITEM_SIZE + CRAFTINGTABLE_CRAFTING_GRID_3X3;
constexpr const int16_t CRAFTINGTABLE_HOTBAR_OFFSET = CRAFTINGTABLE_CRAFTED_ITEM_SIZE + CRAFTINGTABLE_CRAFTING_GRID_3X3 + CRAFTINGTABLE_INVENTORY_SIZE;

namespace protocol::container {
// Note that this is different from inventory items stored in a player.dat file.
// This may help: https://gist.github.com/459a1691c3dd751db160
class CraftingTable : public Container {
public:
    explicit CraftingTable(Player &player);
    virtual ~CraftingTable() = default;

    protocol::Slot &at(int16_t index) override;
    const protocol::Slot &at(int16_t index) const override;
    NODISCARD constexpr inline uint64_t size() const override
    {
        return CRAFTINGTABLE_CRAFTED_ITEM_SIZE + CRAFTINGTABLE_CRAFTING_GRID_3X3 + CRAFTINGTABLE_INVENTORY_SIZE + CRAFTINGTABLE_HOTBAR_SIZE;
    }
    void insert(protocol::Slot &slot) override;
    bool canInsert(const protocol::Slot &slot) override;

    void onClick(std::shared_ptr<Player> player, int16_t index, uint8_t buttonId, uint8_t mode, const std::vector<protocol::ClickContainer::SlotWithIndex> &updates) override;

    NODISCARD constexpr inline protocol::Slot &craftedItem() { return _craftedItem; }
    NODISCARD constexpr inline std::array<protocol::Slot, CRAFTINGTABLE_CRAFTING_GRID_3X3> &craftingGrid() { return _craftingGrid; }
    NODISCARD constexpr inline std::array<protocol::Slot, CRAFTINGTABLE_INVENTORY_SIZE> &playerInventory() { return _playerInventory; }
    NODISCARD constexpr inline std::array<protocol::Slot, CRAFTINGTABLE_HOTBAR_SIZE> &hotbar() { return _hotbar; }

    NODISCARD constexpr inline const protocol::Slot &craftedItem() const { return _craftedItem; }
    NODISCARD constexpr inline const std::array<protocol::Slot, CRAFTINGTABLE_CRAFTING_GRID_3X3> &craftingGrid() const { return _craftingGrid; }
    NODISCARD constexpr inline const std::array<protocol::Slot, CRAFTINGTABLE_INVENTORY_SIZE> &playerInventory() const { return _playerInventory; }
    NODISCARD constexpr inline const std::array<protocol::Slot, CRAFTINGTABLE_HOTBAR_SIZE> &hotbar() const { return _hotbar; }

private:
    protocol::Slot _craftedItem;
    std::array<protocol::Slot, CRAFTINGTABLE_CRAFTING_GRID_3X3> _craftingGrid;
    std::array<protocol::Slot, CRAFTINGTABLE_INVENTORY_SIZE> &_playerInventory;
    std::array<protocol::Slot, CRAFTINGTABLE_HOTBAR_SIZE> &_hotbar;
    protocol::Slot &_offhand;
};

} // namespace protocol::window

#endif // PROTOCOL_WINDOW_CRAFTING_HPP
