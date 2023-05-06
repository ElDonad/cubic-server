#include <cstdint>
namespace Blocks {
typedef int32_t BlockId;

namespace DamagedAnvil {
namespace Properties {
enum class Facing {
    NORTH,
    SOUTH,
    WEST,
    EAST
};
}
BlockId toProtocol(Properties::Facing facing);
}

}
