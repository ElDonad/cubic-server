#include "RedNetherBrickSlab.hpp"
namespace Blocks {
namespace RedNetherBrickSlab {
BlockId toProtocol(Properties::Type type, Properties::Waterlogged waterlogged)
{
    switch (type) {
    case Properties::Type::TOP:
        switch (waterlogged) {
        case Properties::Waterlogged::TRUE:
            return 13514;
        case Properties::Waterlogged::FALSE:
            return 13515;
        default:
            return 0;
        }
    case Properties::Type::BOTTOM:
        switch (waterlogged) {
        case Properties::Waterlogged::TRUE:
            return 13516;
        case Properties::Waterlogged::FALSE:
            return 13517;
        default:
            return 0;
        }
    case Properties::Type::DOUBLE:
        switch (waterlogged) {
        case Properties::Waterlogged::TRUE:
            return 13518;
        case Properties::Waterlogged::FALSE:
            return 13519;
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
