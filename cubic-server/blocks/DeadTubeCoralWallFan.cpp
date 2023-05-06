#include "DeadTubeCoralWallFan.hpp"
namespace Blocks {
    namespace DeadTubeCoralWallFan {
        BlockId toProtocol(Properties::Facing facing, Properties::Waterlogged waterlogged) {
            switch (facing) {
            case Properties::Facing::NORTH:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 12225;
                case Properties::Waterlogged::FALSE:
                    return 12226;
                default:
                    return 0;
                }
            case Properties::Facing::SOUTH:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 12227;
                case Properties::Waterlogged::FALSE:
                    return 12228;
                default:
                    return 0;
                }
            case Properties::Facing::WEST:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 12229;
                case Properties::Waterlogged::FALSE:
                    return 12230;
                default:
                    return 0;
                }
            case Properties::Facing::EAST:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 12231;
                case Properties::Waterlogged::FALSE:
                    return 12232;
                default:
                    return 0;
                }
            default:
                return 0;
            }
            return 0;
        }
    }

}
