#include <cstdint>
namespace Blocks {
typedef int32_t BlockId;

namespace Composter {
namespace Properties {
enum class Level {
    ZERO,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT
};
}
BlockId toProtocol(Properties::Level level);
}

}
