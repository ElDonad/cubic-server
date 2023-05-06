#include "DarkOakWood.hpp"
namespace Blocks {
    namespace DarkOakWood {
        BlockId toProtocol(Properties::Axis axis) {
            switch (axis) {
            case Properties::Axis::X:
                return 187;
            case Properties::Axis::Y:
                return 188;
            case Properties::Axis::Z:
                return 189;
            default:
                return 0;
            }
            return 0;
        }
    }

}
