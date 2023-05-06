#include "StrippedSpruceWood.hpp"
namespace Blocks {
    namespace StrippedSpruceWood {
        BlockId toProtocol(Properties::Axis axis) {
            switch (axis) {
            case Properties::Axis::X:
                return 196;
            case Properties::Axis::Y:
                return 197;
            case Properties::Axis::Z:
                return 198;
            default:
                return 0;
            }
            return 0;
        }
    }

}
