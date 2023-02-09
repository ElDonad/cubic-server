#include <string>
#include <cstdint>

typedef uint16_t Block;

namespace Blocks {
    namespace AcaciaButton {
        namespace Properties {
            enum class Face {
                FLOOR,
                WALL,
                CEILING,
            };

            enum class Facing {
                NORTH,
                SOUTH,
                WEST,
                EAST,
            };

            enum class Powered {
                TRUE,
                FALSE,
            };
        }
        constexpr Block toProtocol(Properties::Face face, Properties::Facing facing, Properties::Powered powered) {
            switch (face) {
            case Properties::Face::FLOOR:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7035;
                    case Properties::Powered::FALSE:
                        return 7036;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7037;
                    case Properties::Powered::FALSE:
                        return 7038;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7039;
                    case Properties::Powered::FALSE:
                        return 7040;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7041;
                    case Properties::Powered::FALSE:
                        return 7042;
                    }
                }
            case Properties::Face::WALL:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7043;
                    case Properties::Powered::FALSE:
                        return 7044;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7045;
                    case Properties::Powered::FALSE:
                        return 7046;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7047;
                    case Properties::Powered::FALSE:
                        return 7048;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7049;
                    case Properties::Powered::FALSE:
                        return 7050;
                    }
                }
            case Properties::Face::CEILING:
                switch (facing) {
                case Properties::Facing::NORTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7051;
                    case Properties::Powered::FALSE:
                        return 7052;
                    }
                case Properties::Facing::SOUTH:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7053;
                    case Properties::Powered::FALSE:
                        return 7054;
                    }
                case Properties::Facing::WEST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7055;
                    case Properties::Powered::FALSE:
                        return 7056;
                    }
                case Properties::Facing::EAST:
                    switch (powered) {
                    case Properties::Powered::TRUE:
                        return 7057;
                    case Properties::Powered::FALSE:
                        return 7058;
                    }
                }
            }
        }
    }

    std::string toName(Block id) {
        switch (id) {
        case 7035:
        case 7036:
        case 7037:
        case 7038:
        case 7039:
        case 7040:
        case 7041:
        case 7042:
        case 7043:
        case 7044:
        case 7045:
        case 7046:
        case 7047:
        case 7048:
        case 7049:
        case 7050:
        case 7051:
        case 7052:
        case 7053:
        case 7054:
        case 7055:
        case 7056:
        case 7057:
        case 7058:
            return "minecraft::acacia_button";
        }
        return nullptr;
    }
}