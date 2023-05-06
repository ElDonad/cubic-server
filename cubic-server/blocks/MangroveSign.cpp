#include "MangroveSign.hpp"
namespace Blocks {
    namespace MangroveSign {
        BlockId toProtocol(Properties::Rotation rotation, Properties::Waterlogged waterlogged) {
            switch (rotation) {
            case Properties::Rotation::ZERO:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4442;
                case Properties::Waterlogged::FALSE:
                    return 4443;
                default:
                    return 0;
                }
            case Properties::Rotation::ONE:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4444;
                case Properties::Waterlogged::FALSE:
                    return 4445;
                default:
                    return 0;
                }
            case Properties::Rotation::TWO:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4446;
                case Properties::Waterlogged::FALSE:
                    return 4447;
                default:
                    return 0;
                }
            case Properties::Rotation::THREE:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4448;
                case Properties::Waterlogged::FALSE:
                    return 4449;
                default:
                    return 0;
                }
            case Properties::Rotation::FOUR:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4450;
                case Properties::Waterlogged::FALSE:
                    return 4451;
                default:
                    return 0;
                }
            case Properties::Rotation::FIVE:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4452;
                case Properties::Waterlogged::FALSE:
                    return 4453;
                default:
                    return 0;
                }
            case Properties::Rotation::SIX:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4454;
                case Properties::Waterlogged::FALSE:
                    return 4455;
                default:
                    return 0;
                }
            case Properties::Rotation::SEVEN:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4456;
                case Properties::Waterlogged::FALSE:
                    return 4457;
                default:
                    return 0;
                }
            case Properties::Rotation::EIGHT:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4458;
                case Properties::Waterlogged::FALSE:
                    return 4459;
                default:
                    return 0;
                }
            case Properties::Rotation::NINE:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4460;
                case Properties::Waterlogged::FALSE:
                    return 4461;
                default:
                    return 0;
                }
            case Properties::Rotation::TEN:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4462;
                case Properties::Waterlogged::FALSE:
                    return 4463;
                default:
                    return 0;
                }
            case Properties::Rotation::ELEVEN:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4464;
                case Properties::Waterlogged::FALSE:
                    return 4465;
                default:
                    return 0;
                }
            case Properties::Rotation::TWELVE:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4466;
                case Properties::Waterlogged::FALSE:
                    return 4467;
                default:
                    return 0;
                }
            case Properties::Rotation::THIRTEEN:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4468;
                case Properties::Waterlogged::FALSE:
                    return 4469;
                default:
                    return 0;
                }
            case Properties::Rotation::FOURTEEN:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4470;
                case Properties::Waterlogged::FALSE:
                    return 4471;
                default:
                    return 0;
                }
            case Properties::Rotation::FIFTEEN:
                switch (waterlogged) {
                case Properties::Waterlogged::TRUE:
                    return 4472;
                case Properties::Waterlogged::FALSE:
                    return 4473;
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
