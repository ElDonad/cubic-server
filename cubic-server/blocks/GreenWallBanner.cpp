#include "GreenWallBanner.hpp"
namespace Blocks {
    namespace GreenWallBanner {
        BlockId toProtocol(Properties::Facing facing) {
            switch (facing) {
            case Properties::Facing::NORTH:
                return 10590;
            case Properties::Facing::SOUTH:
                return 10591;
            case Properties::Facing::WEST:
                return 10592;
            case Properties::Facing::EAST:
                return 10593;
            default:
                return 0;
            }
            return 0;
        }
    }

}
