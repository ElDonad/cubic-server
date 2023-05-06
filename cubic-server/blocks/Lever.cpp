#include "Lever.hpp"
namespace Blocks {
namespace Lever {
BlockId toProtocol(Properties::Face face, Properties::Facing facing, Properties::Powered powered) {
    switch (face) {
    case Properties::Face::FLOOR:
        switch (facing) {
        case Properties::Facing::NORTH:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5462;
            case Properties::Powered::FALSE:
                return 5463;
            default:
                return 0;
            }
        case Properties::Facing::SOUTH:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5464;
            case Properties::Powered::FALSE:
                return 5465;
            default:
                return 0;
            }
        case Properties::Facing::WEST:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5466;
            case Properties::Powered::FALSE:
                return 5467;
            default:
                return 0;
            }
        case Properties::Facing::EAST:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5468;
            case Properties::Powered::FALSE:
                return 5469;
            default:
                return 0;
            }
        default:
            return 0;
        }
    case Properties::Face::WALL:
        switch (facing) {
        case Properties::Facing::NORTH:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5470;
            case Properties::Powered::FALSE:
                return 5471;
            default:
                return 0;
            }
        case Properties::Facing::SOUTH:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5472;
            case Properties::Powered::FALSE:
                return 5473;
            default:
                return 0;
            }
        case Properties::Facing::WEST:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5474;
            case Properties::Powered::FALSE:
                return 5475;
            default:
                return 0;
            }
        case Properties::Facing::EAST:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5476;
            case Properties::Powered::FALSE:
                return 5477;
            default:
                return 0;
            }
        default:
            return 0;
        }
    case Properties::Face::CEILING:
        switch (facing) {
        case Properties::Facing::NORTH:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5478;
            case Properties::Powered::FALSE:
                return 5479;
            default:
                return 0;
            }
        case Properties::Facing::SOUTH:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5480;
            case Properties::Powered::FALSE:
                return 5481;
            default:
                return 0;
            }
        case Properties::Facing::WEST:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5482;
            case Properties::Powered::FALSE:
                return 5483;
            default:
                return 0;
            }
        case Properties::Facing::EAST:
            switch (powered) {
            case Properties::Powered::TRUE:
                return 5484;
            case Properties::Powered::FALSE:
                return 5485;
            default:
                return 0;
            }
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
