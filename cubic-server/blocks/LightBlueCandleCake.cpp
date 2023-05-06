#include "LightBlueCandleCake.hpp"
namespace Blocks {
namespace LightBlueCandleCake {
BlockId toProtocol(Properties::Lit lit) {
    switch (lit) {
    case Properties::Lit::TRUE:
        return 20377;
    case Properties::Lit::FALSE:
        return 20378;
    default:
        return 0;
    }
    return 0;
}
}

}
