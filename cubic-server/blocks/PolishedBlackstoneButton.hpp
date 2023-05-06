#include <cstdint>
namespace Blocks {
typedef int32_t BlockId;

namespace PolishedBlackstoneButton {
namespace Properties {
enum class Face {
    FLOOR,
    WALL,
    CEILING
};
enum class Facing {
    NORTH,
    SOUTH,
    WEST,
    EAST
};
enum class Powered {
    TRUE,
    FALSE
};
}
BlockId toProtocol(Properties::Face face, Properties::Facing facing, Properties::Powered powered);
}

}
