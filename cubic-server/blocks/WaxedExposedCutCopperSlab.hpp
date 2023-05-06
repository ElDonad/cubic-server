#include <cstdint>
namespace Blocks {
typedef int32_t BlockId;

namespace WaxedExposedCutCopperSlab {
namespace Properties {
enum class Type {
    TOP,
    BOTTOM,
    DOUBLE
};
enum class Waterlogged {
    TRUE,
    FALSE
};
}
BlockId toProtocol(Properties::Type type, Properties::Waterlogged waterlogged);
}

}
