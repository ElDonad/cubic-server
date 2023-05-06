#include "DeepslateBrickSlab.hpp"
namespace Blocks {
namespace DeepslateBrickSlab {
BlockId toProtocol(Properties::Type type, Properties::Waterlogged waterlogged) {
    switch (type) {
    case Properties::Type::TOP:
        switch (waterlogged) {
        case Properties::Waterlogged::TRUE:
            return 22879;
        case Properties::Waterlogged::FALSE:
            return 22880;
        default:
            return 0;
        }
    case Properties::Type::BOTTOM:
        switch (waterlogged) {
        case Properties::Waterlogged::TRUE:
            return 22881;
        case Properties::Waterlogged::FALSE:
            return 22882;
        default:
            return 0;
        }
    case Properties::Type::DOUBLE:
        switch (waterlogged) {
        case Properties::Waterlogged::TRUE:
            return 22883;
        case Properties::Waterlogged::FALSE:
            return 22884;
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
