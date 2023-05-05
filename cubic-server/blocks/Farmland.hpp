#include <cstdint>
namespace Blocks {
    typedef int32_t BlockId;

    namespace Farmland {
        namespace Properties {
            enum class Moisture {
                ZERO,
                ONE,
                TWO,
                THREE,
                FOUR,
                FIVE,
                SIX,
                SEVEN
            };
        }
        BlockId toProtocol(Properties::Moisture moisture);
    }

}
