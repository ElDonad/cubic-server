#include "DarkPrismarineSlab.hpp"
namespace Blocks {
    namespace DarkPrismarineSlab {
        BlockId toProtocol(Properties::Type type, Properties::Waterlogged waterlogged) {
            switch (type) {
            case Properties::Type::TOP:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 10241;
                case Properties::Waterlogged::FALSE:
                    return 10242;
                default:
                    return 0;
                }
            case Properties::Type::BOTTOM:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 10243;
                case Properties::Waterlogged::FALSE:
                    return 10244;
                default:
                    return 0;
                }
            case Properties::Type::DOUBLE:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 10245;
                case Properties::Waterlogged::FALSE:
                    return 10246;
                default:
                    return 0;
                }
            default:
                return 0;
            }
            return 0;
        }
    }

}
