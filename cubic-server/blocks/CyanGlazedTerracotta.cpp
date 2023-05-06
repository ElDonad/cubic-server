#include "CyanGlazedTerracotta.hpp"
namespace Blocks {
namespace CyanGlazedTerracotta {
BlockId toProtocol(Properties::Facing facing) {
    switch (facing) {
    case Properties::Facing::NORTH:
        return 12075;
    case Properties::Facing::SOUTH:
        return 12076;
    case Properties::Facing::WEST:
        return 12077;
    case Properties::Facing::EAST:
        return 12078;
    default:
        return 0;
    }
    return 0;
}
}

}
