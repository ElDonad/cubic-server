#include "blocks/Air.hpp"
#include "blocks/Stone.hpp"
#include "blocks/Granite.hpp"
#include "blocks/PolishedGranite.hpp"
#include "blocks/Diorite.hpp"
#include "blocks/PolishedDiorite.hpp"
#include "blocks/Andesite.hpp"
#include "blocks/PolishedAndesite.hpp"
#include "blocks/GrassBlock.hpp"
#include "blocks/Dirt.hpp"
#include "blocks/CoarseDirt.hpp"
#include "blocks/Podzol.hpp"
#include "blocks/Cobblestone.hpp"
#include "blocks/OakPlanks.hpp"
#include "blocks/SprucePlanks.hpp"
#include "blocks/BirchPlanks.hpp"
#include "blocks/JunglePlanks.hpp"
#include "blocks/AcaciaPlanks.hpp"
#include "blocks/DarkOakPlanks.hpp"
#include "blocks/MangrovePlanks.hpp"
#include "blocks/BambooPlanks.hpp"
#include "blocks/BambooMosaic.hpp"
#include "blocks/OakSapling.hpp"
#include "blocks/SpruceSapling.hpp"
#include "blocks/BirchSapling.hpp"
#include "blocks/JungleSapling.hpp"
#include "blocks/AcaciaSapling.hpp"
#include "blocks/DarkOakSapling.hpp"
#include "blocks/MangrovePropagule.hpp"
#include "blocks/Bedrock.hpp"
#include "blocks/Water.hpp"
#include "blocks/Lava.hpp"
#include "blocks/Sand.hpp"
#include "blocks/RedSand.hpp"
#include "blocks/Gravel.hpp"
#include "blocks/GoldOre.hpp"
#include "blocks/DeepslateGoldOre.hpp"
#include "blocks/IronOre.hpp"
#include "blocks/DeepslateIronOre.hpp"
#include "blocks/CoalOre.hpp"
#include "blocks/DeepslateCoalOre.hpp"
#include "blocks/NetherGoldOre.hpp"
#include "blocks/OakLog.hpp"
#include "blocks/SpruceLog.hpp"
#include "blocks/BirchLog.hpp"
#include "blocks/JungleLog.hpp"
#include "blocks/AcaciaLog.hpp"
#include "blocks/DarkOakLog.hpp"
#include "blocks/MangroveLog.hpp"
#include "blocks/MangroveRoots.hpp"
#include "blocks/MuddyMangroveRoots.hpp"
#include "blocks/BambooBlock.hpp"
#include "blocks/StrippedSpruceLog.hpp"
#include "blocks/StrippedBirchLog.hpp"
#include "blocks/StrippedJungleLog.hpp"
#include "blocks/StrippedAcaciaLog.hpp"
#include "blocks/StrippedDarkOakLog.hpp"
#include "blocks/StrippedOakLog.hpp"
#include "blocks/StrippedMangroveLog.hpp"
#include "blocks/StrippedBambooBlock.hpp"
#include "blocks/OakWood.hpp"
#include "blocks/SpruceWood.hpp"
#include "blocks/BirchWood.hpp"
#include "blocks/JungleWood.hpp"
#include "blocks/AcaciaWood.hpp"
#include "blocks/DarkOakWood.hpp"
#include "blocks/MangroveWood.hpp"
#include "blocks/StrippedOakWood.hpp"
#include "blocks/StrippedSpruceWood.hpp"
#include "blocks/StrippedBirchWood.hpp"
#include "blocks/StrippedJungleWood.hpp"
#include "blocks/StrippedAcaciaWood.hpp"
#include "blocks/StrippedDarkOakWood.hpp"
#include "blocks/StrippedMangroveWood.hpp"
#include "blocks/OakLeaves.hpp"
#include "blocks/SpruceLeaves.hpp"
#include "blocks/BirchLeaves.hpp"
#include "blocks/JungleLeaves.hpp"
#include "blocks/AcaciaLeaves.hpp"
#include "blocks/DarkOakLeaves.hpp"
#include "blocks/MangroveLeaves.hpp"
#include "blocks/AzaleaLeaves.hpp"
#include "blocks/FloweringAzaleaLeaves.hpp"
#include "blocks/Sponge.hpp"
#include "blocks/WetSponge.hpp"
#include "blocks/Glass.hpp"
#include "blocks/LapisOre.hpp"
#include "blocks/DeepslateLapisOre.hpp"
#include "blocks/LapisBlock.hpp"
#include "blocks/Dispenser.hpp"
#include "blocks/Sandstone.hpp"
#include "blocks/ChiseledSandstone.hpp"
#include "blocks/CutSandstone.hpp"
#include "blocks/NoteBlock.hpp"
#include "blocks/WhiteBed.hpp"
#include "blocks/OrangeBed.hpp"
#include "blocks/MagentaBed.hpp"
#include "blocks/LightBlueBed.hpp"
#include "blocks/YellowBed.hpp"
#include "blocks/LimeBed.hpp"
#include "blocks/PinkBed.hpp"
#include "blocks/GrayBed.hpp"
#include "blocks/LightGrayBed.hpp"
#include "blocks/CyanBed.hpp"
#include "blocks/PurpleBed.hpp"
#include "blocks/BlueBed.hpp"
#include "blocks/BrownBed.hpp"
#include "blocks/GreenBed.hpp"
#include "blocks/RedBed.hpp"
#include "blocks/BlackBed.hpp"
#include "blocks/PoweredRail.hpp"
#include "blocks/DetectorRail.hpp"
#include "blocks/StickyPiston.hpp"
#include "blocks/Cobweb.hpp"
#include "blocks/Grass.hpp"
#include "blocks/Fern.hpp"
#include "blocks/DeadBush.hpp"
#include "blocks/Seagrass.hpp"
#include "blocks/TallSeagrass.hpp"
#include "blocks/Piston.hpp"
#include "blocks/PistonHead.hpp"
#include "blocks/WhiteWool.hpp"
#include "blocks/OrangeWool.hpp"
#include "blocks/MagentaWool.hpp"
#include "blocks/LightBlueWool.hpp"
#include "blocks/YellowWool.hpp"
#include "blocks/LimeWool.hpp"
#include "blocks/PinkWool.hpp"
#include "blocks/GrayWool.hpp"
#include "blocks/LightGrayWool.hpp"
#include "blocks/CyanWool.hpp"
#include "blocks/PurpleWool.hpp"
#include "blocks/BlueWool.hpp"
#include "blocks/BrownWool.hpp"
#include "blocks/GreenWool.hpp"
#include "blocks/RedWool.hpp"
#include "blocks/BlackWool.hpp"
#include "blocks/MovingPiston.hpp"
#include "blocks/Dandelion.hpp"
#include "blocks/Poppy.hpp"
#include "blocks/BlueOrchid.hpp"
#include "blocks/Allium.hpp"
#include "blocks/AzureBluet.hpp"
#include "blocks/RedTulip.hpp"
#include "blocks/OrangeTulip.hpp"
#include "blocks/WhiteTulip.hpp"
#include "blocks/PinkTulip.hpp"
#include "blocks/OxeyeDaisy.hpp"
#include "blocks/Cornflower.hpp"
#include "blocks/WitherRose.hpp"
#include "blocks/LilyOfTheValley.hpp"
#include "blocks/BrownMushroom.hpp"
#include "blocks/RedMushroom.hpp"
#include "blocks/GoldBlock.hpp"
#include "blocks/IronBlock.hpp"
#include "blocks/Bricks.hpp"
#include "blocks/Tnt.hpp"
#include "blocks/Bookshelf.hpp"
#include "blocks/ChiseledBookshelf.hpp"
#include "blocks/MossyCobblestone.hpp"
#include "blocks/Obsidian.hpp"
#include "blocks/Torch.hpp"
#include "blocks/WallTorch.hpp"
#include "blocks/Fire.hpp"
#include "blocks/SoulFire.hpp"
#include "blocks/Spawner.hpp"
#include "blocks/OakStairs.hpp"
#include "blocks/Chest.hpp"
#include "blocks/RedstoneWire.hpp"
#include "blocks/DiamondOre.hpp"
#include "blocks/DeepslateDiamondOre.hpp"
#include "blocks/DiamondBlock.hpp"
#include "blocks/CraftingTable.hpp"
#include "blocks/Wheat.hpp"
#include "blocks/Farmland.hpp"
#include "blocks/Furnace.hpp"
#include "blocks/OakSign.hpp"
#include "blocks/SpruceSign.hpp"
#include "blocks/BirchSign.hpp"
#include "blocks/AcaciaSign.hpp"
#include "blocks/JungleSign.hpp"
#include "blocks/DarkOakSign.hpp"
#include "blocks/MangroveSign.hpp"
#include "blocks/BambooSign.hpp"
#include "blocks/OakDoor.hpp"
#include "blocks/Ladder.hpp"
#include "blocks/Rail.hpp"
#include "blocks/CobblestoneStairs.hpp"
#include "blocks/OakWallSign.hpp"
#include "blocks/SpruceWallSign.hpp"
#include "blocks/BirchWallSign.hpp"
#include "blocks/AcaciaWallSign.hpp"
#include "blocks/JungleWallSign.hpp"
#include "blocks/DarkOakWallSign.hpp"
#include "blocks/MangroveWallSign.hpp"
#include "blocks/BambooWallSign.hpp"
#include "blocks/OakHangingSign.hpp"
#include "blocks/SpruceHangingSign.hpp"
#include "blocks/BirchHangingSign.hpp"
#include "blocks/AcaciaHangingSign.hpp"
#include "blocks/JungleHangingSign.hpp"
#include "blocks/DarkOakHangingSign.hpp"
#include "blocks/CrimsonHangingSign.hpp"
#include "blocks/WarpedHangingSign.hpp"
#include "blocks/MangroveHangingSign.hpp"
#include "blocks/BambooHangingSign.hpp"
#include "blocks/OakWallHangingSign.hpp"
#include "blocks/SpruceWallHangingSign.hpp"
#include "blocks/BirchWallHangingSign.hpp"
#include "blocks/AcaciaWallHangingSign.hpp"
#include "blocks/JungleWallHangingSign.hpp"
#include "blocks/DarkOakWallHangingSign.hpp"
#include "blocks/MangroveWallHangingSign.hpp"
#include "blocks/CrimsonWallHangingSign.hpp"
#include "blocks/WarpedWallHangingSign.hpp"
#include "blocks/BambooWallHangingSign.hpp"
#include "blocks/Lever.hpp"
#include "blocks/StonePressurePlate.hpp"
#include "blocks/IronDoor.hpp"
#include "blocks/OakPressurePlate.hpp"
#include "blocks/SprucePressurePlate.hpp"
#include "blocks/BirchPressurePlate.hpp"
#include "blocks/JunglePressurePlate.hpp"
#include "blocks/AcaciaPressurePlate.hpp"
#include "blocks/DarkOakPressurePlate.hpp"
#include "blocks/MangrovePressurePlate.hpp"
#include "blocks/BambooPressurePlate.hpp"
#include "blocks/RedstoneOre.hpp"
#include "blocks/DeepslateRedstoneOre.hpp"
#include "blocks/RedstoneTorch.hpp"
#include "blocks/RedstoneWallTorch.hpp"
#include "blocks/StoneButton.hpp"
#include "blocks/Snow.hpp"
#include "blocks/Ice.hpp"
#include "blocks/SnowBlock.hpp"
#include "blocks/Cactus.hpp"
#include "blocks/Clay.hpp"
#include "blocks/SugarCane.hpp"
#include "blocks/Jukebox.hpp"
#include "blocks/OakFence.hpp"
#include "blocks/Pumpkin.hpp"
#include "blocks/Netherrack.hpp"
#include "blocks/SoulSand.hpp"
#include "blocks/SoulSoil.hpp"
#include "blocks/Basalt.hpp"
#include "blocks/PolishedBasalt.hpp"
#include "blocks/SoulTorch.hpp"
#include "blocks/SoulWallTorch.hpp"
#include "blocks/Glowstone.hpp"
#include "blocks/NetherPortal.hpp"
#include "blocks/CarvedPumpkin.hpp"
#include "blocks/JackOLantern.hpp"
#include "blocks/Cake.hpp"
#include "blocks/Repeater.hpp"
#include "blocks/WhiteStainedGlass.hpp"
#include "blocks/OrangeStainedGlass.hpp"
#include "blocks/MagentaStainedGlass.hpp"
#include "blocks/LightBlueStainedGlass.hpp"
#include "blocks/YellowStainedGlass.hpp"
#include "blocks/LimeStainedGlass.hpp"
#include "blocks/PinkStainedGlass.hpp"
#include "blocks/GrayStainedGlass.hpp"
#include "blocks/LightGrayStainedGlass.hpp"
#include "blocks/CyanStainedGlass.hpp"
#include "blocks/PurpleStainedGlass.hpp"
#include "blocks/BlueStainedGlass.hpp"
#include "blocks/BrownStainedGlass.hpp"
#include "blocks/GreenStainedGlass.hpp"
#include "blocks/RedStainedGlass.hpp"
#include "blocks/BlackStainedGlass.hpp"
#include "blocks/OakTrapdoor.hpp"
#include "blocks/SpruceTrapdoor.hpp"
#include "blocks/BirchTrapdoor.hpp"
#include "blocks/JungleTrapdoor.hpp"
#include "blocks/AcaciaTrapdoor.hpp"
#include "blocks/DarkOakTrapdoor.hpp"
#include "blocks/MangroveTrapdoor.hpp"
#include "blocks/BambooTrapdoor.hpp"
#include "blocks/StoneBricks.hpp"
#include "blocks/MossyStoneBricks.hpp"
#include "blocks/CrackedStoneBricks.hpp"
#include "blocks/ChiseledStoneBricks.hpp"
#include "blocks/PackedMud.hpp"
#include "blocks/MudBricks.hpp"
#include "blocks/InfestedStone.hpp"
#include "blocks/InfestedCobblestone.hpp"
#include "blocks/InfestedStoneBricks.hpp"
#include "blocks/InfestedMossyStoneBricks.hpp"
#include "blocks/InfestedCrackedStoneBricks.hpp"
#include "blocks/InfestedChiseledStoneBricks.hpp"
#include "blocks/BrownMushroomBlock.hpp"
#include "blocks/RedMushroomBlock.hpp"
#include "blocks/MushroomStem.hpp"
#include "blocks/IronBars.hpp"
#include "blocks/Chain.hpp"
#include "blocks/GlassPane.hpp"
#include "blocks/Melon.hpp"
#include "blocks/AttachedPumpkinStem.hpp"
#include "blocks/AttachedMelonStem.hpp"
#include "blocks/PumpkinStem.hpp"
#include "blocks/MelonStem.hpp"
#include "blocks/Vine.hpp"
#include "blocks/GlowLichen.hpp"
#include "blocks/OakFenceGate.hpp"
#include "blocks/BrickStairs.hpp"
#include "blocks/StoneBrickStairs.hpp"
#include "blocks/MudBrickStairs.hpp"
#include "blocks/Mycelium.hpp"
#include "blocks/LilyPad.hpp"
#include "blocks/NetherBricks.hpp"
#include "blocks/NetherBrickFence.hpp"
#include "blocks/NetherBrickStairs.hpp"
#include "blocks/NetherWart.hpp"
#include "blocks/EnchantingTable.hpp"
#include "blocks/BrewingStand.hpp"
#include "blocks/Cauldron.hpp"
#include "blocks/WaterCauldron.hpp"
#include "blocks/LavaCauldron.hpp"
#include "blocks/PowderSnowCauldron.hpp"
#include "blocks/EndPortal.hpp"
#include "blocks/EndPortalFrame.hpp"
#include "blocks/EndStone.hpp"
#include "blocks/DragonEgg.hpp"
#include "blocks/RedstoneLamp.hpp"
#include "blocks/Cocoa.hpp"
#include "blocks/SandstoneStairs.hpp"
#include "blocks/EmeraldOre.hpp"
#include "blocks/DeepslateEmeraldOre.hpp"
#include "blocks/EnderChest.hpp"
#include "blocks/TripwireHook.hpp"
#include "blocks/Tripwire.hpp"
#include "blocks/EmeraldBlock.hpp"
#include "blocks/SpruceStairs.hpp"
#include "blocks/BirchStairs.hpp"
#include "blocks/JungleStairs.hpp"
#include "blocks/CommandBlock.hpp"
#include "blocks/Beacon.hpp"
#include "blocks/CobblestoneWall.hpp"
#include "blocks/MossyCobblestoneWall.hpp"
#include "blocks/FlowerPot.hpp"
#include "blocks/PottedOakSapling.hpp"
#include "blocks/PottedSpruceSapling.hpp"
#include "blocks/PottedBirchSapling.hpp"
#include "blocks/PottedJungleSapling.hpp"
#include "blocks/PottedAcaciaSapling.hpp"
#include "blocks/PottedDarkOakSapling.hpp"
#include "blocks/PottedMangrovePropagule.hpp"
#include "blocks/PottedFern.hpp"
#include "blocks/PottedDandelion.hpp"
#include "blocks/PottedPoppy.hpp"
#include "blocks/PottedBlueOrchid.hpp"
#include "blocks/PottedAllium.hpp"
#include "blocks/PottedAzureBluet.hpp"
#include "blocks/PottedRedTulip.hpp"
#include "blocks/PottedOrangeTulip.hpp"
#include "blocks/PottedWhiteTulip.hpp"
#include "blocks/PottedPinkTulip.hpp"
#include "blocks/PottedOxeyeDaisy.hpp"
#include "blocks/PottedCornflower.hpp"
#include "blocks/PottedLilyOfTheValley.hpp"
#include "blocks/PottedWitherRose.hpp"
#include "blocks/PottedRedMushroom.hpp"
#include "blocks/PottedBrownMushroom.hpp"
#include "blocks/PottedDeadBush.hpp"
#include "blocks/PottedCactus.hpp"
#include "blocks/Carrots.hpp"
#include "blocks/Potatoes.hpp"
#include "blocks/OakButton.hpp"
#include "blocks/SpruceButton.hpp"
#include "blocks/BirchButton.hpp"
#include "blocks/JungleButton.hpp"
#include "blocks/AcaciaButton.hpp"
#include "blocks/DarkOakButton.hpp"
#include "blocks/MangroveButton.hpp"
#include "blocks/BambooButton.hpp"
#include "blocks/SkeletonSkull.hpp"
#include "blocks/SkeletonWallSkull.hpp"
#include "blocks/WitherSkeletonSkull.hpp"
#include "blocks/WitherSkeletonWallSkull.hpp"
#include "blocks/ZombieHead.hpp"
#include "blocks/ZombieWallHead.hpp"
#include "blocks/PlayerHead.hpp"
#include "blocks/PlayerWallHead.hpp"
#include "blocks/CreeperHead.hpp"
#include "blocks/CreeperWallHead.hpp"
#include "blocks/DragonHead.hpp"
#include "blocks/DragonWallHead.hpp"
#include "blocks/PiglinHead.hpp"
#include "blocks/PiglinWallHead.hpp"
#include "blocks/Anvil.hpp"
#include "blocks/ChippedAnvil.hpp"
#include "blocks/DamagedAnvil.hpp"
#include "blocks/TrappedChest.hpp"
#include "blocks/LightWeightedPressurePlate.hpp"
#include "blocks/HeavyWeightedPressurePlate.hpp"
#include "blocks/Comparator.hpp"
#include "blocks/DaylightDetector.hpp"
#include "blocks/RedstoneBlock.hpp"
#include "blocks/NetherQuartzOre.hpp"
#include "blocks/Hopper.hpp"
#include "blocks/QuartzBlock.hpp"
#include "blocks/ChiseledQuartzBlock.hpp"
#include "blocks/QuartzPillar.hpp"
#include "blocks/QuartzStairs.hpp"
#include "blocks/ActivatorRail.hpp"
#include "blocks/Dropper.hpp"
#include "blocks/WhiteTerracotta.hpp"
#include "blocks/OrangeTerracotta.hpp"
#include "blocks/MagentaTerracotta.hpp"
#include "blocks/LightBlueTerracotta.hpp"
#include "blocks/YellowTerracotta.hpp"
#include "blocks/LimeTerracotta.hpp"
#include "blocks/PinkTerracotta.hpp"
#include "blocks/GrayTerracotta.hpp"
#include "blocks/LightGrayTerracotta.hpp"
#include "blocks/CyanTerracotta.hpp"
#include "blocks/PurpleTerracotta.hpp"
#include "blocks/BlueTerracotta.hpp"
#include "blocks/BrownTerracotta.hpp"
#include "blocks/GreenTerracotta.hpp"
#include "blocks/RedTerracotta.hpp"
#include "blocks/BlackTerracotta.hpp"
#include "blocks/WhiteStainedGlassPane.hpp"
#include "blocks/OrangeStainedGlassPane.hpp"
#include "blocks/MagentaStainedGlassPane.hpp"
#include "blocks/LightBlueStainedGlassPane.hpp"
#include "blocks/YellowStainedGlassPane.hpp"
#include "blocks/LimeStainedGlassPane.hpp"
#include "blocks/PinkStainedGlassPane.hpp"
#include "blocks/GrayStainedGlassPane.hpp"
#include "blocks/LightGrayStainedGlassPane.hpp"
#include "blocks/CyanStainedGlassPane.hpp"
#include "blocks/PurpleStainedGlassPane.hpp"
#include "blocks/BlueStainedGlassPane.hpp"
#include "blocks/BrownStainedGlassPane.hpp"
#include "blocks/GreenStainedGlassPane.hpp"
#include "blocks/RedStainedGlassPane.hpp"
#include "blocks/BlackStainedGlassPane.hpp"
#include "blocks/AcaciaStairs.hpp"
#include "blocks/DarkOakStairs.hpp"
#include "blocks/MangroveStairs.hpp"
#include "blocks/BambooStairs.hpp"
#include "blocks/BambooMosaicStairs.hpp"
#include "blocks/SlimeBlock.hpp"
#include "blocks/Barrier.hpp"
#include "blocks/Light.hpp"
#include "blocks/IronTrapdoor.hpp"
#include "blocks/Prismarine.hpp"
#include "blocks/PrismarineBricks.hpp"
#include "blocks/DarkPrismarine.hpp"
#include "blocks/PrismarineStairs.hpp"
#include "blocks/PrismarineBrickStairs.hpp"
#include "blocks/DarkPrismarineStairs.hpp"
#include "blocks/PrismarineSlab.hpp"
#include "blocks/PrismarineBrickSlab.hpp"
#include "blocks/DarkPrismarineSlab.hpp"
#include "blocks/SeaLantern.hpp"
#include "blocks/HayBlock.hpp"
#include "blocks/WhiteCarpet.hpp"
#include "blocks/OrangeCarpet.hpp"
#include "blocks/MagentaCarpet.hpp"
#include "blocks/LightBlueCarpet.hpp"
#include "blocks/YellowCarpet.hpp"
#include "blocks/LimeCarpet.hpp"
#include "blocks/PinkCarpet.hpp"
#include "blocks/GrayCarpet.hpp"
#include "blocks/LightGrayCarpet.hpp"
#include "blocks/CyanCarpet.hpp"
#include "blocks/PurpleCarpet.hpp"
#include "blocks/BlueCarpet.hpp"
#include "blocks/BrownCarpet.hpp"
#include "blocks/GreenCarpet.hpp"
#include "blocks/RedCarpet.hpp"
#include "blocks/BlackCarpet.hpp"
#include "blocks/Terracotta.hpp"
#include "blocks/CoalBlock.hpp"
#include "blocks/PackedIce.hpp"
#include "blocks/Sunflower.hpp"
#include "blocks/Lilac.hpp"
#include "blocks/RoseBush.hpp"
#include "blocks/Peony.hpp"
#include "blocks/TallGrass.hpp"
#include "blocks/LargeFern.hpp"
#include "blocks/WhiteBanner.hpp"
#include "blocks/OrangeBanner.hpp"
#include "blocks/MagentaBanner.hpp"
#include "blocks/LightBlueBanner.hpp"
#include "blocks/YellowBanner.hpp"
#include "blocks/LimeBanner.hpp"
#include "blocks/PinkBanner.hpp"
#include "blocks/GrayBanner.hpp"
#include "blocks/LightGrayBanner.hpp"
#include "blocks/CyanBanner.hpp"
#include "blocks/PurpleBanner.hpp"
#include "blocks/BlueBanner.hpp"
#include "blocks/BrownBanner.hpp"
#include "blocks/GreenBanner.hpp"
#include "blocks/RedBanner.hpp"
#include "blocks/BlackBanner.hpp"
#include "blocks/WhiteWallBanner.hpp"
#include "blocks/OrangeWallBanner.hpp"
#include "blocks/MagentaWallBanner.hpp"
#include "blocks/LightBlueWallBanner.hpp"
#include "blocks/YellowWallBanner.hpp"
#include "blocks/LimeWallBanner.hpp"
#include "blocks/PinkWallBanner.hpp"
#include "blocks/GrayWallBanner.hpp"
#include "blocks/LightGrayWallBanner.hpp"
#include "blocks/CyanWallBanner.hpp"
#include "blocks/PurpleWallBanner.hpp"
#include "blocks/BlueWallBanner.hpp"
#include "blocks/BrownWallBanner.hpp"
#include "blocks/GreenWallBanner.hpp"
#include "blocks/RedWallBanner.hpp"
#include "blocks/BlackWallBanner.hpp"
#include "blocks/RedSandstone.hpp"
#include "blocks/ChiseledRedSandstone.hpp"
#include "blocks/CutRedSandstone.hpp"
#include "blocks/RedSandstoneStairs.hpp"
#include "blocks/OakSlab.hpp"
#include "blocks/SpruceSlab.hpp"
#include "blocks/BirchSlab.hpp"
#include "blocks/JungleSlab.hpp"
#include "blocks/AcaciaSlab.hpp"
#include "blocks/DarkOakSlab.hpp"
#include "blocks/MangroveSlab.hpp"
#include "blocks/BambooSlab.hpp"
#include "blocks/BambooMosaicSlab.hpp"
#include "blocks/StoneSlab.hpp"
#include "blocks/SmoothStoneSlab.hpp"
#include "blocks/SandstoneSlab.hpp"
#include "blocks/CutSandstoneSlab.hpp"
#include "blocks/PetrifiedOakSlab.hpp"
#include "blocks/CobblestoneSlab.hpp"
#include "blocks/BrickSlab.hpp"
#include "blocks/StoneBrickSlab.hpp"
#include "blocks/MudBrickSlab.hpp"
#include "blocks/NetherBrickSlab.hpp"
#include "blocks/QuartzSlab.hpp"
#include "blocks/RedSandstoneSlab.hpp"
#include "blocks/CutRedSandstoneSlab.hpp"
#include "blocks/PurpurSlab.hpp"
#include "blocks/SmoothStone.hpp"
#include "blocks/SmoothSandstone.hpp"
#include "blocks/SmoothQuartz.hpp"
#include "blocks/SmoothRedSandstone.hpp"
#include "blocks/SpruceFenceGate.hpp"
#include "blocks/BirchFenceGate.hpp"
#include "blocks/JungleFenceGate.hpp"
#include "blocks/AcaciaFenceGate.hpp"
#include "blocks/DarkOakFenceGate.hpp"
#include "blocks/MangroveFenceGate.hpp"
#include "blocks/BambooFenceGate.hpp"
#include "blocks/SpruceFence.hpp"
#include "blocks/BirchFence.hpp"
#include "blocks/JungleFence.hpp"
#include "blocks/AcaciaFence.hpp"
#include "blocks/DarkOakFence.hpp"
#include "blocks/MangroveFence.hpp"
#include "blocks/BambooFence.hpp"
#include "blocks/SpruceDoor.hpp"
#include "blocks/BirchDoor.hpp"
#include "blocks/JungleDoor.hpp"
#include "blocks/AcaciaDoor.hpp"
#include "blocks/DarkOakDoor.hpp"
#include "blocks/MangroveDoor.hpp"
#include "blocks/BambooDoor.hpp"
#include "blocks/EndRod.hpp"
#include "blocks/ChorusPlant.hpp"
#include "blocks/ChorusFlower.hpp"
#include "blocks/PurpurBlock.hpp"
#include "blocks/PurpurPillar.hpp"
#include "blocks/PurpurStairs.hpp"
#include "blocks/EndStoneBricks.hpp"
#include "blocks/Beetroots.hpp"
#include "blocks/DirtPath.hpp"
#include "blocks/EndGateway.hpp"
#include "blocks/RepeatingCommandBlock.hpp"
#include "blocks/ChainCommandBlock.hpp"
#include "blocks/FrostedIce.hpp"
#include "blocks/MagmaBlock.hpp"
#include "blocks/NetherWartBlock.hpp"
#include "blocks/RedNetherBricks.hpp"
#include "blocks/BoneBlock.hpp"
#include "blocks/StructureVoid.hpp"
#include "blocks/Observer.hpp"
#include "blocks/ShulkerBox.hpp"
#include "blocks/WhiteShulkerBox.hpp"
#include "blocks/OrangeShulkerBox.hpp"
#include "blocks/MagentaShulkerBox.hpp"
#include "blocks/LightBlueShulkerBox.hpp"
#include "blocks/YellowShulkerBox.hpp"
#include "blocks/LimeShulkerBox.hpp"
#include "blocks/PinkShulkerBox.hpp"
#include "blocks/GrayShulkerBox.hpp"
#include "blocks/LightGrayShulkerBox.hpp"
#include "blocks/CyanShulkerBox.hpp"
#include "blocks/PurpleShulkerBox.hpp"
#include "blocks/BlueShulkerBox.hpp"
#include "blocks/BrownShulkerBox.hpp"
#include "blocks/GreenShulkerBox.hpp"
#include "blocks/RedShulkerBox.hpp"
#include "blocks/BlackShulkerBox.hpp"
#include "blocks/WhiteGlazedTerracotta.hpp"
#include "blocks/OrangeGlazedTerracotta.hpp"
#include "blocks/MagentaGlazedTerracotta.hpp"
#include "blocks/LightBlueGlazedTerracotta.hpp"
#include "blocks/YellowGlazedTerracotta.hpp"
#include "blocks/LimeGlazedTerracotta.hpp"
#include "blocks/PinkGlazedTerracotta.hpp"
#include "blocks/GrayGlazedTerracotta.hpp"
#include "blocks/LightGrayGlazedTerracotta.hpp"
#include "blocks/CyanGlazedTerracotta.hpp"
#include "blocks/PurpleGlazedTerracotta.hpp"
#include "blocks/BlueGlazedTerracotta.hpp"
#include "blocks/BrownGlazedTerracotta.hpp"
#include "blocks/GreenGlazedTerracotta.hpp"
#include "blocks/RedGlazedTerracotta.hpp"
#include "blocks/BlackGlazedTerracotta.hpp"
#include "blocks/WhiteConcrete.hpp"
#include "blocks/OrangeConcrete.hpp"
#include "blocks/MagentaConcrete.hpp"
#include "blocks/LightBlueConcrete.hpp"
#include "blocks/YellowConcrete.hpp"
#include "blocks/LimeConcrete.hpp"
#include "blocks/PinkConcrete.hpp"
#include "blocks/GrayConcrete.hpp"
#include "blocks/LightGrayConcrete.hpp"
#include "blocks/CyanConcrete.hpp"
#include "blocks/PurpleConcrete.hpp"
#include "blocks/BlueConcrete.hpp"
#include "blocks/BrownConcrete.hpp"
#include "blocks/GreenConcrete.hpp"
#include "blocks/RedConcrete.hpp"
#include "blocks/BlackConcrete.hpp"
#include "blocks/WhiteConcretePowder.hpp"
#include "blocks/OrangeConcretePowder.hpp"
#include "blocks/MagentaConcretePowder.hpp"
#include "blocks/LightBlueConcretePowder.hpp"
#include "blocks/YellowConcretePowder.hpp"
#include "blocks/LimeConcretePowder.hpp"
#include "blocks/PinkConcretePowder.hpp"
#include "blocks/GrayConcretePowder.hpp"
#include "blocks/LightGrayConcretePowder.hpp"
#include "blocks/CyanConcretePowder.hpp"
#include "blocks/PurpleConcretePowder.hpp"
#include "blocks/BlueConcretePowder.hpp"
#include "blocks/BrownConcretePowder.hpp"
#include "blocks/GreenConcretePowder.hpp"
#include "blocks/RedConcretePowder.hpp"
#include "blocks/BlackConcretePowder.hpp"
#include "blocks/Kelp.hpp"
#include "blocks/KelpPlant.hpp"
#include "blocks/DriedKelpBlock.hpp"
#include "blocks/TurtleEgg.hpp"
#include "blocks/DeadTubeCoralBlock.hpp"
#include "blocks/DeadBrainCoralBlock.hpp"
#include "blocks/DeadBubbleCoralBlock.hpp"
#include "blocks/DeadFireCoralBlock.hpp"
#include "blocks/DeadHornCoralBlock.hpp"
#include "blocks/TubeCoralBlock.hpp"
#include "blocks/BrainCoralBlock.hpp"
#include "blocks/BubbleCoralBlock.hpp"
#include "blocks/FireCoralBlock.hpp"
#include "blocks/HornCoralBlock.hpp"
#include "blocks/DeadTubeCoral.hpp"
#include "blocks/DeadBrainCoral.hpp"
#include "blocks/DeadBubbleCoral.hpp"
#include "blocks/DeadFireCoral.hpp"
#include "blocks/DeadHornCoral.hpp"
#include "blocks/TubeCoral.hpp"
#include "blocks/BrainCoral.hpp"
#include "blocks/BubbleCoral.hpp"
#include "blocks/FireCoral.hpp"
#include "blocks/HornCoral.hpp"
#include "blocks/DeadTubeCoralFan.hpp"
#include "blocks/DeadBrainCoralFan.hpp"
#include "blocks/DeadBubbleCoralFan.hpp"
#include "blocks/DeadFireCoralFan.hpp"
#include "blocks/DeadHornCoralFan.hpp"
#include "blocks/TubeCoralFan.hpp"
#include "blocks/BrainCoralFan.hpp"
#include "blocks/BubbleCoralFan.hpp"
#include "blocks/FireCoralFan.hpp"
#include "blocks/HornCoralFan.hpp"
#include "blocks/DeadTubeCoralWallFan.hpp"
#include "blocks/DeadBrainCoralWallFan.hpp"
#include "blocks/DeadBubbleCoralWallFan.hpp"
#include "blocks/DeadFireCoralWallFan.hpp"
#include "blocks/DeadHornCoralWallFan.hpp"
#include "blocks/TubeCoralWallFan.hpp"
#include "blocks/BrainCoralWallFan.hpp"
#include "blocks/BubbleCoralWallFan.hpp"
#include "blocks/FireCoralWallFan.hpp"
#include "blocks/HornCoralWallFan.hpp"
#include "blocks/SeaPickle.hpp"
#include "blocks/BlueIce.hpp"
#include "blocks/Conduit.hpp"
#include "blocks/BambooSapling.hpp"
#include "blocks/Bamboo.hpp"
#include "blocks/PottedBamboo.hpp"
#include "blocks/VoidAir.hpp"
#include "blocks/CaveAir.hpp"
#include "blocks/BubbleColumn.hpp"
#include "blocks/PolishedGraniteStairs.hpp"
#include "blocks/SmoothRedSandstoneStairs.hpp"
#include "blocks/MossyStoneBrickStairs.hpp"
#include "blocks/PolishedDioriteStairs.hpp"
#include "blocks/MossyCobblestoneStairs.hpp"
#include "blocks/EndStoneBrickStairs.hpp"
#include "blocks/StoneStairs.hpp"
#include "blocks/SmoothSandstoneStairs.hpp"
#include "blocks/SmoothQuartzStairs.hpp"
#include "blocks/GraniteStairs.hpp"
#include "blocks/AndesiteStairs.hpp"
#include "blocks/RedNetherBrickStairs.hpp"
#include "blocks/PolishedAndesiteStairs.hpp"
#include "blocks/DioriteStairs.hpp"
#include "blocks/PolishedGraniteSlab.hpp"
#include "blocks/SmoothRedSandstoneSlab.hpp"
#include "blocks/MossyStoneBrickSlab.hpp"
#include "blocks/PolishedDioriteSlab.hpp"
#include "blocks/MossyCobblestoneSlab.hpp"
#include "blocks/EndStoneBrickSlab.hpp"
#include "blocks/SmoothSandstoneSlab.hpp"
#include "blocks/SmoothQuartzSlab.hpp"
#include "blocks/GraniteSlab.hpp"
#include "blocks/AndesiteSlab.hpp"
#include "blocks/RedNetherBrickSlab.hpp"
#include "blocks/PolishedAndesiteSlab.hpp"
#include "blocks/DioriteSlab.hpp"
#include "blocks/BrickWall.hpp"
#include "blocks/PrismarineWall.hpp"
#include "blocks/RedSandstoneWall.hpp"
#include "blocks/MossyStoneBrickWall.hpp"
#include "blocks/GraniteWall.hpp"
#include "blocks/StoneBrickWall.hpp"
#include "blocks/MudBrickWall.hpp"
#include "blocks/NetherBrickWall.hpp"
#include "blocks/AndesiteWall.hpp"
#include "blocks/RedNetherBrickWall.hpp"
#include "blocks/SandstoneWall.hpp"
#include "blocks/EndStoneBrickWall.hpp"
#include "blocks/DioriteWall.hpp"
#include "blocks/Scaffolding.hpp"
#include "blocks/Loom.hpp"
#include "blocks/Barrel.hpp"
#include "blocks/Smoker.hpp"
#include "blocks/BlastFurnace.hpp"
#include "blocks/CartographyTable.hpp"
#include "blocks/FletchingTable.hpp"
#include "blocks/Grindstone.hpp"
#include "blocks/Lectern.hpp"
#include "blocks/SmithingTable.hpp"
#include "blocks/Stonecutter.hpp"
#include "blocks/Bell.hpp"
#include "blocks/Lantern.hpp"
#include "blocks/SoulLantern.hpp"
#include "blocks/Campfire.hpp"
#include "blocks/SoulCampfire.hpp"
#include "blocks/SweetBerryBush.hpp"
#include "blocks/WarpedStem.hpp"
#include "blocks/StrippedWarpedStem.hpp"
#include "blocks/WarpedHyphae.hpp"
#include "blocks/StrippedWarpedHyphae.hpp"
#include "blocks/WarpedNylium.hpp"
#include "blocks/WarpedFungus.hpp"
#include "blocks/WarpedWartBlock.hpp"
#include "blocks/WarpedRoots.hpp"
#include "blocks/NetherSprouts.hpp"
#include "blocks/CrimsonStem.hpp"
#include "blocks/StrippedCrimsonStem.hpp"
#include "blocks/CrimsonHyphae.hpp"
#include "blocks/StrippedCrimsonHyphae.hpp"
#include "blocks/CrimsonNylium.hpp"
#include "blocks/CrimsonFungus.hpp"
#include "blocks/Shroomlight.hpp"
#include "blocks/WeepingVines.hpp"
#include "blocks/WeepingVinesPlant.hpp"
#include "blocks/TwistingVines.hpp"
#include "blocks/TwistingVinesPlant.hpp"
#include "blocks/CrimsonRoots.hpp"
#include "blocks/CrimsonPlanks.hpp"
#include "blocks/WarpedPlanks.hpp"
#include "blocks/CrimsonSlab.hpp"
#include "blocks/WarpedSlab.hpp"
#include "blocks/CrimsonPressurePlate.hpp"
#include "blocks/WarpedPressurePlate.hpp"
#include "blocks/CrimsonFence.hpp"
#include "blocks/WarpedFence.hpp"
#include "blocks/CrimsonTrapdoor.hpp"
#include "blocks/WarpedTrapdoor.hpp"
#include "blocks/CrimsonFenceGate.hpp"
#include "blocks/WarpedFenceGate.hpp"
#include "blocks/CrimsonStairs.hpp"
#include "blocks/WarpedStairs.hpp"
#include "blocks/CrimsonButton.hpp"
#include "blocks/WarpedButton.hpp"
#include "blocks/CrimsonDoor.hpp"
#include "blocks/WarpedDoor.hpp"
#include "blocks/CrimsonSign.hpp"
#include "blocks/WarpedSign.hpp"
#include "blocks/CrimsonWallSign.hpp"
#include "blocks/WarpedWallSign.hpp"
#include "blocks/StructureBlock.hpp"
#include "blocks/Jigsaw.hpp"
#include "blocks/Composter.hpp"
#include "blocks/Target.hpp"
#include "blocks/BeeNest.hpp"
#include "blocks/Beehive.hpp"
#include "blocks/HoneyBlock.hpp"
#include "blocks/HoneycombBlock.hpp"
#include "blocks/NetheriteBlock.hpp"
#include "blocks/AncientDebris.hpp"
#include "blocks/CryingObsidian.hpp"
#include "blocks/RespawnAnchor.hpp"
#include "blocks/PottedCrimsonFungus.hpp"
#include "blocks/PottedWarpedFungus.hpp"
#include "blocks/PottedCrimsonRoots.hpp"
#include "blocks/PottedWarpedRoots.hpp"
#include "blocks/Lodestone.hpp"
#include "blocks/Blackstone.hpp"
#include "blocks/BlackstoneStairs.hpp"
#include "blocks/BlackstoneWall.hpp"
#include "blocks/BlackstoneSlab.hpp"
#include "blocks/PolishedBlackstone.hpp"
#include "blocks/PolishedBlackstoneBricks.hpp"
#include "blocks/CrackedPolishedBlackstoneBricks.hpp"
#include "blocks/ChiseledPolishedBlackstone.hpp"
#include "blocks/PolishedBlackstoneBrickSlab.hpp"
#include "blocks/PolishedBlackstoneBrickStairs.hpp"
#include "blocks/PolishedBlackstoneBrickWall.hpp"
#include "blocks/GildedBlackstone.hpp"
#include "blocks/PolishedBlackstoneStairs.hpp"
#include "blocks/PolishedBlackstoneSlab.hpp"
#include "blocks/PolishedBlackstonePressurePlate.hpp"
#include "blocks/PolishedBlackstoneButton.hpp"
#include "blocks/PolishedBlackstoneWall.hpp"
#include "blocks/ChiseledNetherBricks.hpp"
#include "blocks/CrackedNetherBricks.hpp"
#include "blocks/QuartzBricks.hpp"
#include "blocks/Candle.hpp"
#include "blocks/WhiteCandle.hpp"
#include "blocks/OrangeCandle.hpp"
#include "blocks/MagentaCandle.hpp"
#include "blocks/LightBlueCandle.hpp"
#include "blocks/YellowCandle.hpp"
#include "blocks/LimeCandle.hpp"
#include "blocks/PinkCandle.hpp"
#include "blocks/GrayCandle.hpp"
#include "blocks/LightGrayCandle.hpp"
#include "blocks/CyanCandle.hpp"
#include "blocks/PurpleCandle.hpp"
#include "blocks/BlueCandle.hpp"
#include "blocks/BrownCandle.hpp"
#include "blocks/GreenCandle.hpp"
#include "blocks/RedCandle.hpp"
#include "blocks/BlackCandle.hpp"
#include "blocks/CandleCake.hpp"
#include "blocks/WhiteCandleCake.hpp"
#include "blocks/OrangeCandleCake.hpp"
#include "blocks/MagentaCandleCake.hpp"
#include "blocks/LightBlueCandleCake.hpp"
#include "blocks/YellowCandleCake.hpp"
#include "blocks/LimeCandleCake.hpp"
#include "blocks/PinkCandleCake.hpp"
#include "blocks/GrayCandleCake.hpp"
#include "blocks/LightGrayCandleCake.hpp"
#include "blocks/CyanCandleCake.hpp"
#include "blocks/PurpleCandleCake.hpp"
#include "blocks/BlueCandleCake.hpp"
#include "blocks/BrownCandleCake.hpp"
#include "blocks/GreenCandleCake.hpp"
#include "blocks/RedCandleCake.hpp"
#include "blocks/BlackCandleCake.hpp"
#include "blocks/AmethystBlock.hpp"
#include "blocks/BuddingAmethyst.hpp"
#include "blocks/AmethystCluster.hpp"
#include "blocks/LargeAmethystBud.hpp"
#include "blocks/MediumAmethystBud.hpp"
#include "blocks/SmallAmethystBud.hpp"
#include "blocks/Tuff.hpp"
#include "blocks/Calcite.hpp"
#include "blocks/TintedGlass.hpp"
#include "blocks/PowderSnow.hpp"
#include "blocks/SculkSensor.hpp"
#include "blocks/Sculk.hpp"
#include "blocks/SculkVein.hpp"
#include "blocks/SculkCatalyst.hpp"
#include "blocks/SculkShrieker.hpp"
#include "blocks/OxidizedCopper.hpp"
#include "blocks/WeatheredCopper.hpp"
#include "blocks/ExposedCopper.hpp"
#include "blocks/CopperBlock.hpp"
#include "blocks/CopperOre.hpp"
#include "blocks/DeepslateCopperOre.hpp"
#include "blocks/OxidizedCutCopper.hpp"
#include "blocks/WeatheredCutCopper.hpp"
#include "blocks/ExposedCutCopper.hpp"
#include "blocks/CutCopper.hpp"
#include "blocks/OxidizedCutCopperStairs.hpp"
#include "blocks/WeatheredCutCopperStairs.hpp"
#include "blocks/ExposedCutCopperStairs.hpp"
#include "blocks/CutCopperStairs.hpp"
#include "blocks/OxidizedCutCopperSlab.hpp"
#include "blocks/WeatheredCutCopperSlab.hpp"
#include "blocks/ExposedCutCopperSlab.hpp"
#include "blocks/CutCopperSlab.hpp"
#include "blocks/WaxedCopperBlock.hpp"
#include "blocks/WaxedWeatheredCopper.hpp"
#include "blocks/WaxedExposedCopper.hpp"
#include "blocks/WaxedOxidizedCopper.hpp"
#include "blocks/WaxedOxidizedCutCopper.hpp"
#include "blocks/WaxedWeatheredCutCopper.hpp"
#include "blocks/WaxedExposedCutCopper.hpp"
#include "blocks/WaxedCutCopper.hpp"
#include "blocks/WaxedOxidizedCutCopperStairs.hpp"
#include "blocks/WaxedWeatheredCutCopperStairs.hpp"
#include "blocks/WaxedExposedCutCopperStairs.hpp"
#include "blocks/WaxedCutCopperStairs.hpp"
#include "blocks/WaxedOxidizedCutCopperSlab.hpp"
#include "blocks/WaxedWeatheredCutCopperSlab.hpp"
#include "blocks/WaxedExposedCutCopperSlab.hpp"
#include "blocks/WaxedCutCopperSlab.hpp"
#include "blocks/LightningRod.hpp"
#include "blocks/PointedDripstone.hpp"
#include "blocks/DripstoneBlock.hpp"
#include "blocks/CaveVines.hpp"
#include "blocks/CaveVinesPlant.hpp"
#include "blocks/SporeBlossom.hpp"
#include "blocks/Azalea.hpp"
#include "blocks/FloweringAzalea.hpp"
#include "blocks/MossCarpet.hpp"
#include "blocks/MossBlock.hpp"
#include "blocks/BigDripleaf.hpp"
#include "blocks/BigDripleafStem.hpp"
#include "blocks/SmallDripleaf.hpp"
#include "blocks/HangingRoots.hpp"
#include "blocks/RootedDirt.hpp"
#include "blocks/Mud.hpp"
#include "blocks/Deepslate.hpp"
#include "blocks/CobbledDeepslate.hpp"
#include "blocks/CobbledDeepslateStairs.hpp"
#include "blocks/CobbledDeepslateSlab.hpp"
#include "blocks/CobbledDeepslateWall.hpp"
#include "blocks/PolishedDeepslate.hpp"
#include "blocks/PolishedDeepslateStairs.hpp"
#include "blocks/PolishedDeepslateSlab.hpp"
#include "blocks/PolishedDeepslateWall.hpp"
#include "blocks/DeepslateTiles.hpp"
#include "blocks/DeepslateTileStairs.hpp"
#include "blocks/DeepslateTileSlab.hpp"
#include "blocks/DeepslateTileWall.hpp"
#include "blocks/DeepslateBricks.hpp"
#include "blocks/DeepslateBrickStairs.hpp"
#include "blocks/DeepslateBrickSlab.hpp"
#include "blocks/DeepslateBrickWall.hpp"
#include "blocks/ChiseledDeepslate.hpp"
#include "blocks/CrackedDeepslateBricks.hpp"
#include "blocks/CrackedDeepslateTiles.hpp"
#include "blocks/InfestedDeepslate.hpp"
#include "blocks/SmoothBasalt.hpp"
#include "blocks/RawIronBlock.hpp"
#include "blocks/RawCopperBlock.hpp"
#include "blocks/RawGoldBlock.hpp"
#include "blocks/PottedAzaleaBush.hpp"
#include "blocks/PottedFloweringAzaleaBush.hpp"
#include "blocks/OchreFroglight.hpp"
#include "blocks/VerdantFroglight.hpp"
#include "blocks/PearlescentFroglight.hpp"
#include "blocks/Frogspawn.hpp"
#include "blocks/ReinforcedDeepslate.hpp"