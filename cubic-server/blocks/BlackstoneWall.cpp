#include "BlackstoneWall.hpp"
namespace Blocks {
namespace BlackstoneWall {
BlockId toProtocol(Properties::East east, Properties::North north, Properties::South south, Properties::Up up, Properties::Waterlogged waterlogged, Properties::West west)
{
    switch (east) {
    case Properties::East::NONE:
        switch (north) {
        case Properties::North::NONE:
            switch (south) {
            case Properties::South::NONE:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18913;
                        case Properties::West::LOW:
                            return 18914;
                        case Properties::West::TALL:
                            return 18915;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18916;
                        case Properties::West::LOW:
                            return 18917;
                        case Properties::West::TALL:
                            return 18918;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18919;
                        case Properties::West::LOW:
                            return 18920;
                        case Properties::West::TALL:
                            return 18921;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18922;
                        case Properties::West::LOW:
                            return 18923;
                        case Properties::West::TALL:
                            return 18924;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::LOW:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18925;
                        case Properties::West::LOW:
                            return 18926;
                        case Properties::West::TALL:
                            return 18927;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18928;
                        case Properties::West::LOW:
                            return 18929;
                        case Properties::West::TALL:
                            return 18930;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18931;
                        case Properties::West::LOW:
                            return 18932;
                        case Properties::West::TALL:
                            return 18933;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18934;
                        case Properties::West::LOW:
                            return 18935;
                        case Properties::West::TALL:
                            return 18936;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::TALL:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18937;
                        case Properties::West::LOW:
                            return 18938;
                        case Properties::West::TALL:
                            return 18939;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18940;
                        case Properties::West::LOW:
                            return 18941;
                        case Properties::West::TALL:
                            return 18942;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18943;
                        case Properties::West::LOW:
                            return 18944;
                        case Properties::West::TALL:
                            return 18945;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18946;
                        case Properties::West::LOW:
                            return 18947;
                        case Properties::West::TALL:
                            return 18948;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            default:
                return 0;
            }
        case Properties::North::LOW:
            switch (south) {
            case Properties::South::NONE:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18949;
                        case Properties::West::LOW:
                            return 18950;
                        case Properties::West::TALL:
                            return 18951;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18952;
                        case Properties::West::LOW:
                            return 18953;
                        case Properties::West::TALL:
                            return 18954;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18955;
                        case Properties::West::LOW:
                            return 18956;
                        case Properties::West::TALL:
                            return 18957;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18958;
                        case Properties::West::LOW:
                            return 18959;
                        case Properties::West::TALL:
                            return 18960;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::LOW:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18961;
                        case Properties::West::LOW:
                            return 18962;
                        case Properties::West::TALL:
                            return 18963;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18964;
                        case Properties::West::LOW:
                            return 18965;
                        case Properties::West::TALL:
                            return 18966;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18967;
                        case Properties::West::LOW:
                            return 18968;
                        case Properties::West::TALL:
                            return 18969;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18970;
                        case Properties::West::LOW:
                            return 18971;
                        case Properties::West::TALL:
                            return 18972;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::TALL:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18973;
                        case Properties::West::LOW:
                            return 18974;
                        case Properties::West::TALL:
                            return 18975;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18976;
                        case Properties::West::LOW:
                            return 18977;
                        case Properties::West::TALL:
                            return 18978;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18979;
                        case Properties::West::LOW:
                            return 18980;
                        case Properties::West::TALL:
                            return 18981;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18982;
                        case Properties::West::LOW:
                            return 18983;
                        case Properties::West::TALL:
                            return 18984;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            default:
                return 0;
            }
        case Properties::North::TALL:
            switch (south) {
            case Properties::South::NONE:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18985;
                        case Properties::West::LOW:
                            return 18986;
                        case Properties::West::TALL:
                            return 18987;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18988;
                        case Properties::West::LOW:
                            return 18989;
                        case Properties::West::TALL:
                            return 18990;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18991;
                        case Properties::West::LOW:
                            return 18992;
                        case Properties::West::TALL:
                            return 18993;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18994;
                        case Properties::West::LOW:
                            return 18995;
                        case Properties::West::TALL:
                            return 18996;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::LOW:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 18997;
                        case Properties::West::LOW:
                            return 18998;
                        case Properties::West::TALL:
                            return 18999;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19000;
                        case Properties::West::LOW:
                            return 19001;
                        case Properties::West::TALL:
                            return 19002;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19003;
                        case Properties::West::LOW:
                            return 19004;
                        case Properties::West::TALL:
                            return 19005;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19006;
                        case Properties::West::LOW:
                            return 19007;
                        case Properties::West::TALL:
                            return 19008;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::TALL:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19009;
                        case Properties::West::LOW:
                            return 19010;
                        case Properties::West::TALL:
                            return 19011;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19012;
                        case Properties::West::LOW:
                            return 19013;
                        case Properties::West::TALL:
                            return 19014;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19015;
                        case Properties::West::LOW:
                            return 19016;
                        case Properties::West::TALL:
                            return 19017;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19018;
                        case Properties::West::LOW:
                            return 19019;
                        case Properties::West::TALL:
                            return 19020;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            default:
                return 0;
            }
        default:
            return 0;
        }
    case Properties::East::LOW:
        switch (north) {
        case Properties::North::NONE:
            switch (south) {
            case Properties::South::NONE:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19021;
                        case Properties::West::LOW:
                            return 19022;
                        case Properties::West::TALL:
                            return 19023;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19024;
                        case Properties::West::LOW:
                            return 19025;
                        case Properties::West::TALL:
                            return 19026;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19027;
                        case Properties::West::LOW:
                            return 19028;
                        case Properties::West::TALL:
                            return 19029;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19030;
                        case Properties::West::LOW:
                            return 19031;
                        case Properties::West::TALL:
                            return 19032;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::LOW:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19033;
                        case Properties::West::LOW:
                            return 19034;
                        case Properties::West::TALL:
                            return 19035;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19036;
                        case Properties::West::LOW:
                            return 19037;
                        case Properties::West::TALL:
                            return 19038;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19039;
                        case Properties::West::LOW:
                            return 19040;
                        case Properties::West::TALL:
                            return 19041;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19042;
                        case Properties::West::LOW:
                            return 19043;
                        case Properties::West::TALL:
                            return 19044;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::TALL:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19045;
                        case Properties::West::LOW:
                            return 19046;
                        case Properties::West::TALL:
                            return 19047;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19048;
                        case Properties::West::LOW:
                            return 19049;
                        case Properties::West::TALL:
                            return 19050;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19051;
                        case Properties::West::LOW:
                            return 19052;
                        case Properties::West::TALL:
                            return 19053;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19054;
                        case Properties::West::LOW:
                            return 19055;
                        case Properties::West::TALL:
                            return 19056;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            default:
                return 0;
            }
        case Properties::North::LOW:
            switch (south) {
            case Properties::South::NONE:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19057;
                        case Properties::West::LOW:
                            return 19058;
                        case Properties::West::TALL:
                            return 19059;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19060;
                        case Properties::West::LOW:
                            return 19061;
                        case Properties::West::TALL:
                            return 19062;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19063;
                        case Properties::West::LOW:
                            return 19064;
                        case Properties::West::TALL:
                            return 19065;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19066;
                        case Properties::West::LOW:
                            return 19067;
                        case Properties::West::TALL:
                            return 19068;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::LOW:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19069;
                        case Properties::West::LOW:
                            return 19070;
                        case Properties::West::TALL:
                            return 19071;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19072;
                        case Properties::West::LOW:
                            return 19073;
                        case Properties::West::TALL:
                            return 19074;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19075;
                        case Properties::West::LOW:
                            return 19076;
                        case Properties::West::TALL:
                            return 19077;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19078;
                        case Properties::West::LOW:
                            return 19079;
                        case Properties::West::TALL:
                            return 19080;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::TALL:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19081;
                        case Properties::West::LOW:
                            return 19082;
                        case Properties::West::TALL:
                            return 19083;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19084;
                        case Properties::West::LOW:
                            return 19085;
                        case Properties::West::TALL:
                            return 19086;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19087;
                        case Properties::West::LOW:
                            return 19088;
                        case Properties::West::TALL:
                            return 19089;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19090;
                        case Properties::West::LOW:
                            return 19091;
                        case Properties::West::TALL:
                            return 19092;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            default:
                return 0;
            }
        case Properties::North::TALL:
            switch (south) {
            case Properties::South::NONE:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19093;
                        case Properties::West::LOW:
                            return 19094;
                        case Properties::West::TALL:
                            return 19095;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19096;
                        case Properties::West::LOW:
                            return 19097;
                        case Properties::West::TALL:
                            return 19098;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19099;
                        case Properties::West::LOW:
                            return 19100;
                        case Properties::West::TALL:
                            return 19101;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19102;
                        case Properties::West::LOW:
                            return 19103;
                        case Properties::West::TALL:
                            return 19104;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::LOW:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19105;
                        case Properties::West::LOW:
                            return 19106;
                        case Properties::West::TALL:
                            return 19107;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19108;
                        case Properties::West::LOW:
                            return 19109;
                        case Properties::West::TALL:
                            return 19110;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19111;
                        case Properties::West::LOW:
                            return 19112;
                        case Properties::West::TALL:
                            return 19113;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19114;
                        case Properties::West::LOW:
                            return 19115;
                        case Properties::West::TALL:
                            return 19116;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::TALL:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19117;
                        case Properties::West::LOW:
                            return 19118;
                        case Properties::West::TALL:
                            return 19119;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19120;
                        case Properties::West::LOW:
                            return 19121;
                        case Properties::West::TALL:
                            return 19122;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19123;
                        case Properties::West::LOW:
                            return 19124;
                        case Properties::West::TALL:
                            return 19125;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19126;
                        case Properties::West::LOW:
                            return 19127;
                        case Properties::West::TALL:
                            return 19128;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            default:
                return 0;
            }
        default:
            return 0;
        }
    case Properties::East::TALL:
        switch (north) {
        case Properties::North::NONE:
            switch (south) {
            case Properties::South::NONE:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19129;
                        case Properties::West::LOW:
                            return 19130;
                        case Properties::West::TALL:
                            return 19131;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19132;
                        case Properties::West::LOW:
                            return 19133;
                        case Properties::West::TALL:
                            return 19134;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19135;
                        case Properties::West::LOW:
                            return 19136;
                        case Properties::West::TALL:
                            return 19137;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19138;
                        case Properties::West::LOW:
                            return 19139;
                        case Properties::West::TALL:
                            return 19140;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::LOW:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19141;
                        case Properties::West::LOW:
                            return 19142;
                        case Properties::West::TALL:
                            return 19143;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19144;
                        case Properties::West::LOW:
                            return 19145;
                        case Properties::West::TALL:
                            return 19146;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19147;
                        case Properties::West::LOW:
                            return 19148;
                        case Properties::West::TALL:
                            return 19149;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19150;
                        case Properties::West::LOW:
                            return 19151;
                        case Properties::West::TALL:
                            return 19152;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::TALL:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19153;
                        case Properties::West::LOW:
                            return 19154;
                        case Properties::West::TALL:
                            return 19155;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19156;
                        case Properties::West::LOW:
                            return 19157;
                        case Properties::West::TALL:
                            return 19158;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19159;
                        case Properties::West::LOW:
                            return 19160;
                        case Properties::West::TALL:
                            return 19161;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19162;
                        case Properties::West::LOW:
                            return 19163;
                        case Properties::West::TALL:
                            return 19164;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            default:
                return 0;
            }
        case Properties::North::LOW:
            switch (south) {
            case Properties::South::NONE:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19165;
                        case Properties::West::LOW:
                            return 19166;
                        case Properties::West::TALL:
                            return 19167;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19168;
                        case Properties::West::LOW:
                            return 19169;
                        case Properties::West::TALL:
                            return 19170;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19171;
                        case Properties::West::LOW:
                            return 19172;
                        case Properties::West::TALL:
                            return 19173;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19174;
                        case Properties::West::LOW:
                            return 19175;
                        case Properties::West::TALL:
                            return 19176;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::LOW:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19177;
                        case Properties::West::LOW:
                            return 19178;
                        case Properties::West::TALL:
                            return 19179;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19180;
                        case Properties::West::LOW:
                            return 19181;
                        case Properties::West::TALL:
                            return 19182;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19183;
                        case Properties::West::LOW:
                            return 19184;
                        case Properties::West::TALL:
                            return 19185;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19186;
                        case Properties::West::LOW:
                            return 19187;
                        case Properties::West::TALL:
                            return 19188;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::TALL:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19189;
                        case Properties::West::LOW:
                            return 19190;
                        case Properties::West::TALL:
                            return 19191;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19192;
                        case Properties::West::LOW:
                            return 19193;
                        case Properties::West::TALL:
                            return 19194;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19195;
                        case Properties::West::LOW:
                            return 19196;
                        case Properties::West::TALL:
                            return 19197;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19198;
                        case Properties::West::LOW:
                            return 19199;
                        case Properties::West::TALL:
                            return 19200;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            default:
                return 0;
            }
        case Properties::North::TALL:
            switch (south) {
            case Properties::South::NONE:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19201;
                        case Properties::West::LOW:
                            return 19202;
                        case Properties::West::TALL:
                            return 19203;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19204;
                        case Properties::West::LOW:
                            return 19205;
                        case Properties::West::TALL:
                            return 19206;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19207;
                        case Properties::West::LOW:
                            return 19208;
                        case Properties::West::TALL:
                            return 19209;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19210;
                        case Properties::West::LOW:
                            return 19211;
                        case Properties::West::TALL:
                            return 19212;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::LOW:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19213;
                        case Properties::West::LOW:
                            return 19214;
                        case Properties::West::TALL:
                            return 19215;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19216;
                        case Properties::West::LOW:
                            return 19217;
                        case Properties::West::TALL:
                            return 19218;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19219;
                        case Properties::West::LOW:
                            return 19220;
                        case Properties::West::TALL:
                            return 19221;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19222;
                        case Properties::West::LOW:
                            return 19223;
                        case Properties::West::TALL:
                            return 19224;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
            case Properties::South::TALL:
                switch (up) {
                case Properties::Up::TRUE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19225;
                        case Properties::West::LOW:
                            return 19226;
                        case Properties::West::TALL:
                            return 19227;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19228;
                        case Properties::West::LOW:
                            return 19229;
                        case Properties::West::TALL:
                            return 19230;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                case Properties::Up::FALSE:
                    switch (waterlogged) {
                    case Properties::Waterlogged::TRUE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19231;
                        case Properties::West::LOW:
                            return 19232;
                        case Properties::West::TALL:
                            return 19233;
                        default:
                            return 0;
                        }
                    case Properties::Waterlogged::FALSE:
                        switch (west) {
                        case Properties::West::NONE:
                            return 19234;
                        case Properties::West::LOW:
                            return 19235;
                        case Properties::West::TALL:
                            return 19236;
                        default:
                            return 0;
                        }
                    default:
                        return 0;
                    }
                default:
                    return 0;
                }
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
