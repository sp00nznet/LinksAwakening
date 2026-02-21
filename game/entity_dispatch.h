/* Entity behavior handler dispatch table
   Generated from ROM bank 32 EntityHandlersTable at $4000.
   Each behavior ID maps to a handler function in a specific bank. */
#ifndef ENTITY_DISPATCH_H
#define ENTITY_DISPATCH_H

#include "gb_runtime.h"

/* Entity handler function declarations - organized by bank */

/* Bank 3 */
extern void ArrowEntityHandler(void);
extern void BombEntityHandler(void);
extern void MagicRodFireballEntityHandler(void);
extern void LiftableRockEntityHandler(void);
extern void PushedBlockEntityHandler(void);
extern void OctorokEntityHandler(void);
extern void OctorokRockEntityHandler(void);
extern void MoblinEntityHandler(void);
extern void MoblinArrowEntityHandler(void);
extern void Entity13Handler(void);
extern void IronMaskEntityHandler(void);
extern void Entity25Handler(void);
extern void DroppableHeartEntityHandler(void);
extern void DroppableRupeeEntityHandler(void);
extern void DroppableFairyEntityHandler(void);
extern void KeyDropPointEntityHandler(void);
extern void SwordShieldPickableEntityHandler(void);
extern void IronMasksMaskEntityHandler(void);
extern void PieceOfPowerEntityHandler(void);
extern void GuardianAcornEntityHandler(void);
extern void HeartPieceEntityHandler(void);
extern void HeartContainerEntityHandler(void);
extern void DroppableArrowsEntityHandler(void);
extern void DroppableBombsEntityHandler(void);
extern void SirensInstrumentEntityHandler(void);
extern void SleepyToadstoolEntityHandler(void);
extern void DroppableMagicPowderEntityHandler(void);
extern void HidingSlimeKeyEntityHandler(void);
extern void DroppableSeashellEntityHandler(void);
extern void Entity4BHandler(void);
extern void DroppableEntityHandler(void);

/* Bank 4 */
extern void HidingGhiniEntityHandler(void);
extern void GiantGhiniEntityHandler(void);
extern void MiniMoldormEntityHandler(void);
extern void LaserEntityHandler(void);
extern void ShopOwnerEntityHandler(void);
extern void Disabled4EEntityHandler(void);
extern void TrendyGameOwnerEntityHandler(void);
extern void KnightEntityHandler(void);
extern void TractorDeviceEntityHandler(void);
extern void FishermanFishingGameEntityHandler(void);
extern void BouncingBombiteEntityHandler(void);
extern void TimerBombiteEntityHandler(void);
extern void PairoddEntityHandler(void);
extern void PairoddProjectileEntityHandler(void);
extern void MoldormEntityHandler(void);
extern void FacadeEntityHandler(void);
extern void SlimeEyeEntityHandler(void);
extern void GenieEntityHandler(void);
extern void LeeverEntityHandler(void);

/* Bank 5 */
extern void MarinEntityHandler(void);
extern void TarinEntityHandler(void);
extern void WitchEntityHandler(void);
extern void SlimeEelEntityHandler(void);
extern void GhomaEntityHandler(void);
extern void DodongoSnakeEntityHandler(void);
extern void HotHeadEntityHandler(void);
extern void EvilEagleEntityHandler(void);
extern void AnglerFishEntityHandler(void);
extern void Entity67Handler(void);
extern void EntityRaftOwnerHandler(void);
extern void CuccoEntityHandler(void);
extern void BowWowEntityHandler(void);
extern void MusicalNoteEntityHandler(void);
extern void AnimalD0EntityHandler(void);

/* Bank 6 */
extern void TektiteEntityHandler(void);
extern void ArmosStatueEntityHandler(void);
extern void AntiFairyEntityHandler(void);
extern void SparkClockwiseEntityHandler(void);
extern void PolsVoiceEntityHandler(void);
extern void KeeseEntityHandler(void);
extern void StalfosAggressiveEntityHandler(void);
extern void ZolEntityHandler(void);
extern void GelEntityHandler(void);
extern void GibdoEntityHandler(void);
extern void HardHatBeetleEntityHandler(void);
extern void WizrobeEntityHandler(void);
extern void WizrobeProjectileEntityHandler(void);
extern void LikeLikeEntityHandler(void);
extern void SpikeTrapEntityHandler(void);
extern void BooBuddyEntityHandler(void);
extern void GrandpaUlriraEntityHandler(void);
extern void YipYipEntityHandler(void);
extern void MadamMeowMeowEntityHandler(void);
extern void CrowEntityHandler(void);
extern void CrazyTracyEntityHandler(void);
extern void GiantGopongaFlowerEntityHandler(void);
extern void GopongaProjectileEntityHandler(void);
extern void GopongaFlowerEntityHandler(void);
extern void TelephoneEntityHandler(void);
extern void RollingBonesEntityHandler(void);
extern void RollingBonesBarEntityHandler(void);
extern void BigFairyEntityHandler(void);
extern void MrWriteBirdEntityHandler(void);
extern void FloatingItemEntityHandler(void);
extern void DesertLanmolaEntityHandler(void);
extern void ArmosKnightEntityHandler(void);
extern void HinoxEntityHandler(void);
extern void RaisableBlockShiftedRightEntityHandler(void);
extern void RaisableBlockShiftedDownEntityHandler(void);
extern void CueBallEntityHandler(void);
extern void ThreeOfAKindEntityHandler(void);
extern void AntiKirbyEntityHandler(void);
extern void SmasherEntityHandler(void);
extern void MadBomberEntityHandler(void);
extern void RichardEntityHandler(void);
extern void ButterflyEntityHandler(void);
extern void Kid70EntityHandler(void);
extern void Kid71EntityHandler(void);
extern void FloatingItem2EntityHandler(void);
extern void OwlEventEntityHandler(void);

/* Bank 7 */
extern void ChestWithItemEntityHandler(void);
extern void MoblinSwordEntityHandler(void);
extern void SpikedBeetleEntityHandler(void);
extern void GoombaEntityHandler(void);
extern void PeaHatEntityHandler(void);
extern void SnakeEntityHandler(void);
extern void SideViewPlatformHorizontalEntityHandler(void);
extern void SideViewPlatformEntityHandler(void);
extern void SideViewWeightsEntityHandler(void);
extern void SmashablePillarEntityHandler(void);
extern void WreckingBallEntityHandler(void);
extern void BlooperEntityHandler(void);
extern void KikiTheMonkeyEntityHandler(void);
extern void WingedOctorokEntityHandler(void);
extern void TradingItemEntityHandler(void);
extern void PincerEntityHandler(void);
extern void HoleFillerEntityHandler(void);
extern void HoneycombEntityHandler(void);
extern void TarinBeekeeperEntityHandler(void);
extern void BearEntityHandler(void);
extern void PapahlEntityHandler(void);
extern void MermaidEntityHandler(void);
extern void FishermanUnderBridgeEntityHandler(void);
extern void BushCrawlerEntityHandler(void);
extern void KanaletBombableWallEntityHandler(void);
extern void HorsePieceEntityHandler(void);
extern void WaterTektiteEntityHandler(void);
extern void FlyingTilesEntityHandler(void);
extern void HidingZolEntityHandler(void);
extern void StarEntityHandler(void);
extern void FireballShooterEntityHandler(void);
extern void MasterStalfosEntityHandler(void);

/* Bank 21 (0x15) */
extern void StalfosEvasiveEntityHandler(void);
extern void SeashellMansionTreesEntityHandler(void);
extern void YarnaTalkingBonesEntityHandler(void);
extern void BouldersEntityHandler(void);
extern void MovingBlockLeftTopEntityHandler(void);
extern void MovingBlockLeftBottomEntityHandler(void);
extern void MovingBlockBottomLeftEntityHandler(void);
extern void MovingBlockBottomRightEntityHandler(void);
extern void CrystalSwitchEntityHandler(void);
extern void HookshotBridgeHandler(void);
extern void BeetleSpawnerEntityHandler(void);
extern void DreamShrineBedEntityHandler(void);
extern void UrchinEntityHandler(void);
extern void SandCrabEntityHandler(void);
extern void FishEntityHandler(void);
extern void BookEntityHandler(void);
extern void MonkeyEntityHandler(void);
extern void WitchRatEntityHandler(void);
extern void FlameShooterEntityHandler(void);
extern void PokeyEntityHandler(void);
extern void MoblinKingEntityHandler(void);
extern void FinalNightmareEntityHandler(void);
extern void KanaletCastleGateSwitchEntityHandler(void);
extern void AnimalD1EntityHandler(void);

/* Bank 23 (0x17) */
extern void EndingOwlStairClimbingEntityHandler(void);

/* Bank 24 (0x18) */
extern void HookshotChainEntityHandler(void);
extern void MagicPowderSprinkleEntityHandler(void);
extern void OwlStatueEntityHandler(void);
extern void SouthFaceShrineDoorEntityHandler(void);
extern void MovingBlockMoverEntityHandler(void);
extern void TextDebuggerEntityHandler(void);
extern void TurtleRockHeadEntityHandler(void);
extern void PapahlsWifeEntityHandler(void);
extern void GrandmaUlriraEntityHandler(void);
extern void MrWriteEntityHandler(void);
extern void BuzzBlobEntityHandler(void);
extern void BomberEntityHandler(void);
extern void GrimCreeperEntityHandler(void);
extern void VireEntityHandler(void);
extern void BlainoEntityHandler(void);
extern void ZombieEntityHandler(void);
extern void MazeSignpostEntityHandler(void);
extern void MarinAtTheShoreEntityHandler(void);
extern void MarinAtTalTalHeightsEntityHandler(void);
extern void MamuAndFrogsEntityHandler(void);
extern void WalrusEntityHandler(void);
extern void ManboAndFishesEntityHandler(void);
extern void BunnyCallingMarinEntityHandler(void);
extern void MadBatterEntityHandler(void);
extern void ZoraEntityHandler(void);
extern void MermaidStatueEntityHandler(void);
extern void AnimalD2EntityHandler(void);
extern void BunnyD3EntityHandler(void);

/* Bank 25 (0x19) */
extern void BoomerangEntityHandler(void);
extern void WarpEntityHandler(void);
extern void MimicEntityHandler(void);
extern void MaskedMimicGoriyaEntityHandler(void);
extern void RichardFrogEntityHandler(void);
extern void DivableWaterEntityHandler(void);
extern void CheepCheepHorizontalEntityHandler(void);
extern void CheepCheepJumpingEntityHandler(void);
extern void LiftableStatueEntityHandler(void);
extern void DogEntityHandler(void);
extern void BananasSchuleSaleEntityHandler(void);
extern void SeashellMansionEntityHandler(void);
extern void GhostEntityHandler(void);
extern void RoosterEntityHandler(void);
extern void SideViewPotEntityHandler(void);
extern void ThwimpEntityHandler(void);
extern void ThwompEntityHandler(void);
extern void ThwompRammableEntityHandler(void);
extern void PodobooEntityHandler(void);
extern void GiantBubbleEntityHandler(void);
extern void FlyingRoosterEventsEntityHandler(void);
extern void EggSongEventEntityHandler(void);
extern void SwordBeamEntityHandler(void);

/* Dispatch entity handler based on behavior ID.
   This implements the 'jp hl' dynamic dispatch in ExecuteActiveEntityHandler.
   The behavior ID is already in FFEB, and the bank/address have been looked up
   from the ROM table. We dispatch directly by behavior ID for efficiency. */
static inline void dispatch_entity_handler(uint8_t behavior) {
    switch (behavior) {
        case 0x00: gb_call_bank(3, ArrowEntityHandler); return;
        case 0x01: gb_call_bank(25, BoomerangEntityHandler); return;
        case 0x02: gb_call_bank(3, BombEntityHandler); return;
        case 0x03: gb_call_bank(24, HookshotChainEntityHandler); return;
        case 0x04: gb_call_bank(3, MagicRodFireballEntityHandler); return;
        case 0x05: gb_call_bank(3, LiftableRockEntityHandler); return;
        case 0x06: gb_call_bank(3, PushedBlockEntityHandler); return;
        case 0x07: gb_call_bank(7, ChestWithItemEntityHandler); return;
        case 0x08: gb_call_bank(24, MagicPowderSprinkleEntityHandler); return;
        case 0x09: gb_call_bank(3, OctorokEntityHandler); return;
        case 0x0A: gb_call_bank(3, OctorokRockEntityHandler); return;
        case 0x0B: gb_call_bank(3, MoblinEntityHandler); return;
        case 0x0C: gb_call_bank(3, MoblinArrowEntityHandler); return;
        case 0x0D: gb_call_bank(6, TektiteEntityHandler); return;
        case 0x0E: gb_call_bank(4, LeeverEntityHandler); return;
        case 0x0F: gb_call_bank(6, ArmosStatueEntityHandler); return;
        case 0x10: gb_call_bank(4, HidingGhiniEntityHandler); return;
        case 0x11: gb_call_bank(4, GiantGhiniEntityHandler); return;
        case 0x12: gb_call_bank(4, HidingGhiniEntityHandler); return; /* GhiniEntityHandler = same addr */
        case 0x13: gb_call_bank(3, Entity13Handler); return;
        case 0x14: gb_call_bank(7, MoblinSwordEntityHandler); return;
        case 0x15: gb_call_bank(6, AntiFairyEntityHandler); return;
        case 0x16: gb_call_bank(6, SparkClockwiseEntityHandler); return;
        case 0x17: gb_call_bank(6, SparkClockwiseEntityHandler); return; /* SparkCounterClockwise = same addr */
        case 0x18: gb_call_bank(6, PolsVoiceEntityHandler); return;
        case 0x19: gb_call_bank(6, KeeseEntityHandler); return;
        case 0x1A: gb_call_bank(6, StalfosAggressiveEntityHandler); return;
        case 0x1B: gb_call_bank(6, ZolEntityHandler); return;
        case 0x1C: gb_call_bank(6, GelEntityHandler); return;
        case 0x1D: return; /* NULL entry */
        case 0x1E: gb_call_bank(21, StalfosEvasiveEntityHandler); return;
        case 0x1F: gb_call_bank(6, GibdoEntityHandler); return;
        case 0x20: gb_call_bank(6, HardHatBeetleEntityHandler); return;
        case 0x21: gb_call_bank(6, WizrobeEntityHandler); return;
        case 0x22: gb_call_bank(6, WizrobeProjectileEntityHandler); return;
        case 0x23: gb_call_bank(6, LikeLikeEntityHandler); return;
        case 0x24: gb_call_bank(3, IronMaskEntityHandler); return;
        case 0x25: gb_call_bank(3, Entity25Handler); return;
        case 0x26: gb_call_bank(3, Entity25Handler); return; /* Entity26 = same addr */
        case 0x27: gb_call_bank(6, SpikeTrapEntityHandler); return;
        case 0x28: gb_call_bank(25, MimicEntityHandler); return;
        case 0x29: gb_call_bank(4, MiniMoldormEntityHandler); return;
        case 0x2A: gb_call_bank(4, LaserEntityHandler); return;
        case 0x2B: gb_call_bank(21, LaserBeamEntityHandler); return;
        case 0x2C: gb_call_bank(7, SpikedBeetleEntityHandler); return;
        case 0x2D: gb_call_bank(3, DroppableHeartEntityHandler); return;
        case 0x2E: gb_call_bank(3, DroppableRupeeEntityHandler); return;
        case 0x2F: gb_call_bank(3, DroppableFairyEntityHandler); return;
        case 0x30: gb_call_bank(3, KeyDropPointEntityHandler); return;
        case 0x31: gb_call_bank(3, SwordShieldPickableEntityHandler); return;
        case 0x32: gb_call_bank(3, IronMasksMaskEntityHandler); return;
        case 0x33: gb_call_bank(3, PieceOfPowerEntityHandler); return;
        case 0x34: gb_call_bank(3, GuardianAcornEntityHandler); return;
        case 0x35: gb_call_bank(3, HeartPieceEntityHandler); return;
        case 0x36: gb_call_bank(3, HeartContainerEntityHandler); return;
        case 0x37: gb_call_bank(3, DroppableArrowsEntityHandler); return;
        case 0x38: gb_call_bank(3, DroppableBombsEntityHandler); return;
        case 0x39: gb_call_bank(3, SirensInstrumentEntityHandler); return;
        case 0x3A: gb_call_bank(3, SleepyToadstoolEntityHandler); return;
        case 0x3B: gb_call_bank(3, DroppableMagicPowderEntityHandler); return;
        case 0x3C: gb_call_bank(3, HidingSlimeKeyEntityHandler); return;
        case 0x3D: gb_call_bank(3, DroppableSeashellEntityHandler); return;
        case 0x3E: gb_call_bank(5, MarinEntityHandler); return;
        case 0x3F: gb_call_bank(5, TarinEntityHandler); return;
        case 0x40: gb_call_bank(5, WitchEntityHandler); return;
        case 0x41: gb_call_bank(6, OwlEventEntityHandler); return;
        case 0x42: gb_call_bank(24, OwlStatueEntityHandler); return;
        case 0x43: gb_call_bank(21, SeashellMansionTreesEntityHandler); return;
        case 0x44: gb_call_bank(21, YarnaTalkingBonesEntityHandler); return;
        case 0x45: gb_call_bank(21, BouldersEntityHandler); return;
        case 0x46: gb_call_bank(21, MovingBlockLeftTopEntityHandler); return;
        case 0x47: gb_call_bank(21, MovingBlockLeftBottomEntityHandler); return;
        case 0x48: gb_call_bank(21, MovingBlockBottomLeftEntityHandler); return;
        case 0x49: gb_call_bank(21, MovingBlockBottomRightEntityHandler); return;
        /* 0x4A: Color Dungeon (bank 54) - not transpiled */
        case 0x4B: gb_call_bank(3, Entity4BHandler); return;
        case 0x4C: return; /* NULL entry */
        case 0x4D: gb_call_bank(4, ShopOwnerEntityHandler); return;
        case 0x4E: gb_call_bank(4, Disabled4EEntityHandler); return;
        case 0x4F: gb_call_bank(4, TrendyGameOwnerEntityHandler); return;
        case 0x50: gb_call_bank(6, BooBuddyEntityHandler); return;
        case 0x51: gb_call_bank(4, KnightEntityHandler); return;
        case 0x52: gb_call_bank(4, TractorDeviceEntityHandler); return;
        case 0x53: gb_call_bank(4, TractorDeviceEntityHandler); return; /* ReversedTractorDevice = same addr */
        case 0x54: gb_call_bank(4, FishermanFishingGameEntityHandler); return;
        case 0x55: gb_call_bank(4, BouncingBombiteEntityHandler); return;
        case 0x56: gb_call_bank(4, TimerBombiteEntityHandler); return;
        case 0x57: gb_call_bank(4, PairoddEntityHandler); return;
        case 0x58: gb_call_bank(4, PairoddProjectileEntityHandler); return;
        case 0x59: gb_call_bank(4, MoldormEntityHandler); return;
        case 0x5A: gb_call_bank(4, FacadeEntityHandler); return;
        case 0x5B: gb_call_bank(4, SlimeEyeEntityHandler); return;
        case 0x5C: gb_call_bank(4, GenieEntityHandler); return;
        case 0x5D: gb_call_bank(5, SlimeEelEntityHandler); return;
        case 0x5E: gb_call_bank(5, GhomaEntityHandler); return;
        case 0x5F: gb_call_bank(7, MasterStalfosEntityHandler); return;
        case 0x60: gb_call_bank(5, DodongoSnakeEntityHandler); return;
        case 0x61: gb_call_bank(25, WarpEntityHandler); return;
        case 0x62: gb_call_bank(5, HotHeadEntityHandler); return;
        case 0x63: gb_call_bank(5, EvilEagleEntityHandler); return;
        case 0x64: gb_call_bank(24, SouthFaceShrineDoorEntityHandler); return;
        case 0x65: gb_call_bank(5, AnglerFishEntityHandler); return;
        case 0x66: gb_call_bank(21, CrystalSwitchEntityHandler); return;
        case 0x67: gb_call_bank(5, Entity67Handler); return;
        case 0x68: gb_call_bank(21, HookshotBridgeHandler); return;
        case 0x69: gb_call_bank(24, MovingBlockMoverEntityHandler); return;
        case 0x6A: gb_call_bank(5, EntityRaftOwnerHandler); return;
        case 0x6B: gb_call_bank(24, TextDebuggerEntityHandler); return;
        case 0x6C: gb_call_bank(5, CuccoEntityHandler); return;
        case 0x6D: gb_call_bank(5, BowWowEntityHandler); return;
        case 0x6E: gb_call_bank(6, ButterflyEntityHandler); return;
        case 0x6F: gb_call_bank(25, DogEntityHandler); return;
        case 0x70: gb_call_bank(6, Kid70EntityHandler); return;
        case 0x71: gb_call_bank(6, Kid71EntityHandler); return;
        case 0x72: gb_call_bank(6, Kid71EntityHandler); return; /* Kid72 = same addr */
        case 0x73: gb_call_bank(6, Kid70EntityHandler); return; /* Kid73 = same addr */
        case 0x74: gb_call_bank(24, PapahlsWifeEntityHandler); return;
        case 0x75: gb_call_bank(24, GrandmaUlriraEntityHandler); return;
        case 0x76: gb_call_bank(24, MrWriteEntityHandler); return;
        case 0x77: gb_call_bank(6, GrandpaUlriraEntityHandler); return;
        case 0x78: gb_call_bank(6, YipYipEntityHandler); return;
        case 0x79: gb_call_bank(6, MadamMeowMeowEntityHandler); return;
        case 0x7A: gb_call_bank(6, CrowEntityHandler); return;
        case 0x7B: gb_call_bank(6, CrazyTracyEntityHandler); return;
        case 0x7C: gb_call_bank(6, GiantGopongaFlowerEntityHandler); return;
        case 0x7D: gb_call_bank(6, GopongaProjectileEntityHandler); return;
        case 0x7E: gb_call_bank(6, GopongaFlowerEntityHandler); return;
        case 0x7F: gb_call_bank(24, TurtleRockHeadEntityHandler); return;
        case 0x80: gb_call_bank(6, TelephoneEntityHandler); return;
        case 0x81: gb_call_bank(6, RollingBonesEntityHandler); return;
        case 0x82: gb_call_bank(6, RollingBonesBarEntityHandler); return;
        case 0x83: gb_call_bank(21, DreamShrineBedEntityHandler); return;
        case 0x84: gb_call_bank(6, BigFairyEntityHandler); return;
        case 0x85: gb_call_bank(6, MrWriteBirdEntityHandler); return;
        case 0x86: gb_call_bank(6, FloatingItemEntityHandler); return;
        case 0x87: gb_call_bank(6, DesertLanmolaEntityHandler); return;
        case 0x88: gb_call_bank(6, ArmosKnightEntityHandler); return;
        case 0x89: gb_call_bank(6, HinoxEntityHandler); return;
        /* 0x8A-0x8B: Color Dungeon (bank 54) - not transpiled */
        case 0x8C: gb_call_bank(6, RaisableBlockShiftedRightEntityHandler); return;
        case 0x8D: gb_call_bank(6, RaisableBlockShiftedDownEntityHandler); return;
        case 0x8E: gb_call_bank(6, CueBallEntityHandler); return;
        case 0x8F: gb_call_bank(25, MaskedMimicGoriyaEntityHandler); return;
        case 0x90: gb_call_bank(6, ThreeOfAKindEntityHandler); return;
        case 0x91: gb_call_bank(6, AntiKirbyEntityHandler); return;
        case 0x92: gb_call_bank(6, SmasherEntityHandler); return;
        case 0x93: gb_call_bank(6, MadBomberEntityHandler); return;
        case 0x94: gb_call_bank(7, KanaletBombableWallEntityHandler); return;
        case 0x95: gb_call_bank(6, RichardEntityHandler); return;
        case 0x96: gb_call_bank(25, RichardFrogEntityHandler); return;
        case 0x97: gb_call_bank(25, DivableWaterEntityHandler); return;
        case 0x98: gb_call_bank(7, HorsePieceEntityHandler); return;
        case 0x99: gb_call_bank(7, WaterTektiteEntityHandler); return;
        case 0x9A: gb_call_bank(7, FlyingTilesEntityHandler); return;
        case 0x9B: gb_call_bank(7, HidingZolEntityHandler); return;
        case 0x9C: gb_call_bank(7, StarEntityHandler); return;
        case 0x9D: gb_call_bank(25, LiftableStatueEntityHandler); return;
        case 0x9E: gb_call_bank(7, FireballShooterEntityHandler); return;
        case 0x9F: gb_call_bank(7, GoombaEntityHandler); return;
        case 0xA0: gb_call_bank(7, PeaHatEntityHandler); return;
        case 0xA1: gb_call_bank(7, SnakeEntityHandler); return;
        /* 0xA2: Color Dungeon (bank 54) - not transpiled */
        case 0xA3: gb_call_bank(7, SideViewPlatformHorizontalEntityHandler); return;
        case 0xA4: gb_call_bank(7, SideViewPlatformHorizontalEntityHandler); return; /* Vertical = same addr */
        case 0xA5: gb_call_bank(7, SideViewPlatformEntityHandler); return;
        case 0xA6: gb_call_bank(7, SideViewWeightsEntityHandler); return;
        case 0xA7: gb_call_bank(7, SmashablePillarEntityHandler); return;
        case 0xA8: gb_call_bank(7, WreckingBallEntityHandler); return;
        case 0xA9: gb_call_bank(7, BlooperEntityHandler); return;
        case 0xAA: gb_call_bank(25, CheepCheepHorizontalEntityHandler); return;
        case 0xAB: gb_call_bank(25, CheepCheepHorizontalEntityHandler); return; /* Vertical = same addr */
        case 0xAC: gb_call_bank(25, CheepCheepJumpingEntityHandler); return;
        case 0xAD: gb_call_bank(7, KikiTheMonkeyEntityHandler); return;
        case 0xAE: gb_call_bank(7, WingedOctorokEntityHandler); return;
        case 0xAF: gb_call_bank(7, TradingItemEntityHandler); return;
        case 0xB0: gb_call_bank(7, PincerEntityHandler); return;
        case 0xB1: gb_call_bank(7, HoleFillerEntityHandler); return;
        case 0xB2: gb_call_bank(21, BeetleSpawnerEntityHandler); return;
        case 0xB3: gb_call_bank(7, HoneycombEntityHandler); return;
        case 0xB4: gb_call_bank(7, TarinBeekeeperEntityHandler); return;
        case 0xB5: gb_call_bank(7, BearEntityHandler); return;
        case 0xB6: gb_call_bank(7, PapahlEntityHandler); return;
        case 0xB7: gb_call_bank(7, MermaidEntityHandler); return;
        case 0xB8: gb_call_bank(7, FishermanUnderBridgeEntityHandler); return;
        case 0xB9: gb_call_bank(24, BuzzBlobEntityHandler); return;
        case 0xBA: gb_call_bank(24, BomberEntityHandler); return;
        case 0xBB: gb_call_bank(7, BushCrawlerEntityHandler); return;
        case 0xBC: gb_call_bank(24, GrimCreeperEntityHandler); return;
        case 0xBD: gb_call_bank(24, VireEntityHandler); return;
        case 0xBE: gb_call_bank(24, BlainoEntityHandler); return;
        case 0xBF: gb_call_bank(24, ZombieEntityHandler); return;
        case 0xC0: gb_call_bank(24, MazeSignpostEntityHandler); return;
        case 0xC1: gb_call_bank(24, MarinAtTheShoreEntityHandler); return;
        case 0xC2: gb_call_bank(24, MarinAtTalTalHeightsEntityHandler); return;
        case 0xC3: gb_call_bank(24, MamuAndFrogsEntityHandler); return;
        case 0xC4: gb_call_bank(24, WalrusEntityHandler); return;
        case 0xC5: gb_call_bank(21, UrchinEntityHandler); return;
        case 0xC6: gb_call_bank(21, SandCrabEntityHandler); return;
        case 0xC7: gb_call_bank(24, ManboAndFishesEntityHandler); return;
        case 0xC8: gb_call_bank(24, BunnyCallingMarinEntityHandler); return;
        case 0xC9: gb_call_bank(5, MusicalNoteEntityHandler); return;
        case 0xCA: gb_call_bank(24, MadBatterEntityHandler); return;
        case 0xCB: gb_call_bank(24, ZoraEntityHandler); return;
        case 0xCC: gb_call_bank(21, FishEntityHandler); return;
        case 0xCD: gb_call_bank(25, BananasSchuleSaleEntityHandler); return;
        case 0xCE: gb_call_bank(24, MermaidStatueEntityHandler); return;
        case 0xCF: gb_call_bank(25, SeashellMansionEntityHandler); return;
        case 0xD0: gb_call_bank(5, AnimalD0EntityHandler); return;
        case 0xD1: gb_call_bank(21, AnimalD1EntityHandler); return;
        case 0xD2: gb_call_bank(24, AnimalD2EntityHandler); return;
        case 0xD3: gb_call_bank(24, BunnyD3EntityHandler); return;
        case 0xD4: gb_call_bank(25, GhostEntityHandler); return;
        case 0xD5: gb_call_bank(25, RoosterEntityHandler); return;
        case 0xD6: gb_call_bank(25, SideViewPotEntityHandler); return;
        case 0xD7: gb_call_bank(25, ThwimpEntityHandler); return;
        case 0xD8: gb_call_bank(25, ThwompEntityHandler); return;
        case 0xD9: gb_call_bank(25, ThwompRammableEntityHandler); return;
        case 0xDA: gb_call_bank(25, PodobooEntityHandler); return;
        case 0xDB: gb_call_bank(25, GiantBubbleEntityHandler); return;
        case 0xDC: gb_call_bank(25, FlyingRoosterEventsEntityHandler); return;
        case 0xDD: gb_call_bank(21, BookEntityHandler); return;
        case 0xDE: gb_call_bank(25, EggSongEventEntityHandler); return;
        case 0xDF: gb_call_bank(25, SwordBeamEntityHandler); return;
        case 0xE0: gb_call_bank(21, MonkeyEntityHandler); return;
        case 0xE1: gb_call_bank(21, WitchRatEntityHandler); return;
        case 0xE2: gb_call_bank(21, FlameShooterEntityHandler); return;
        case 0xE3: gb_call_bank(21, PokeyEntityHandler); return;
        case 0xE4: gb_call_bank(21, MoblinKingEntityHandler); return;
        case 0xE5: gb_call_bank(6, FloatingItem2EntityHandler); return;
        case 0xE6: gb_call_bank(21, FinalNightmareEntityHandler); return;
        case 0xE7: gb_call_bank(21, KanaletCastleGateSwitchEntityHandler); return;
        case 0xE8: gb_call_bank(23, EndingOwlStairClimbingEntityHandler); return;
        /* 0xE9-0xFA: Color Dungeon entities (bank 54) - not transpiled */
        default: return; /* Unknown or Color Dungeon behavior - skip */
    }
}

/* Also need LaserBeamEntityHandler from bank 21 */
extern void LaserBeamEntityHandler(void);

#endif /* ENTITY_DISPATCH_H */
