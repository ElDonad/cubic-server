#include "LightBlueCandle.hpp"
namespace Blocks {
    namespace LightBlueCandle {
        BlockId toProtocol(Properties::Candles candles, Properties::Lit lit, Properties::Waterlogged waterlogged) {
            switch (candles) {
            case Properties::Candles::ONE:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20161;
                    case Properties::Waterlogged::FALSE:
                        return 20162;
                    default:
                        return 0;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20163;
                    case Properties::Waterlogged::FALSE:
                        return 20164;
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::Candles::TWO:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20165;
                    case Properties::Waterlogged::FALSE:
                        return 20166;
                    default:
                        return 0;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20167;
                    case Properties::Waterlogged::FALSE:
                        return 20168;
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::Candles::THREE:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20169;
                    case Properties::Waterlogged::FALSE:
                        return 20170;
                    default:
                        return 0;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20171;
                    case Properties::Waterlogged::FALSE:
                        return 20172;
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::Candles::FOUR:
                switch (lit) {
                case Properties::Lit::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20173;
                    case Properties::Waterlogged::FALSE:
                        return 20174;
                    default:
                        return 0;
                    }
                case Properties::Lit::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        return 20175;
                    case Properties::Waterlogged::FALSE:
                        return 20176;
                    default:
                        return 0;
                    }
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
