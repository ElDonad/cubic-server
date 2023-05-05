#include <cstdint>
namespace Blocks {
    typedef int32_t BlockId;

    namespace TurtleEgg {
        namespace Properties {
            enum class Eggs {
                ONE,
                TWO,
                THREE,
                FOUR
            };
            enum class Hatch {
                ZERO,
                ONE,
                TWO
            };
        }
        BlockId toProtocol(Properties::Eggs eggs, Properties::Hatch hatch);
    }

}
