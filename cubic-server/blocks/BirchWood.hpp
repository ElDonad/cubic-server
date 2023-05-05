#include <cstdint>
namespace Blocks {
    typedef int32_t BlockId;

    namespace BirchWood {
        namespace Properties {
            enum class Axis {
                X,
                Y,
                Z
            };
        }
        BlockId toProtocol(Properties::Axis axis);
    }

}
