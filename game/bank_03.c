/* Auto-generated from LADX Disassembly - Bank 0x03 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void PhysicsFlagsForEntity(void);
void HitboxFlagsForEntity(void);
void HealthGroupForEntity(void);
void Options1ForEntity(void);
void Data_003_43EC(void);
void Data_003_473C(void);
void InitialHealthForGroup(void);
void EntityDamagesForGroup(void);
void DestroyedEntityHealthGroupOffsetTable(void);
void ConfigureNewEntity(void);
void ConfigureEntityHealth(void);
void MasterStalfosDefeated(void);
void EntityInitHandler(void);
void Data_003_4924(void);
void EntityInitHorsePiece(void);
void EntityInitMarinAtTalTalHeights(void);
void EntityInitSnake(void);
void EntityInitSideViewPlatformVertical(void);
void EntityInitZol(void);
void EntityInitMarinAtTheShore(void);
void EntityInitBomber(void);
void EntityInitBushCrawler(void);
void EntityInitTarinBeekeeper(void);
void EntityInitTelephone(void);
void EntityInitRichard(void);
void SetMusicTrackIfHasSword(void);
void SetMusicTrack(void);
void EntityInitFinalNightmare(void);
void EntityInitDreamShrineBed(void);
void EntityInitFishermanUnderBridge(void);
void EntityInitKikiTheMonkey(void);
void EntityInitFireballShooter(void);
void EntityInitAntiKirby(void);
void EntityInitMovingBlockMover(void);
void EntityInitDesertLanmola(void);
void EntityInitFloatingItem2(void);
void EntityInitFloatingItem(void);
void SetZPosForFloatingItem(void);
void EntityInitKid71(void);
void EntityInitKid72(void);
void EntityInitMrWrite(void);
void EntityInitBigFairy(void);
void jr_003_4A4D(void);
void jr_003_4A4F(void);
void EntityInitBowWow(void);
void EntityInitOwlEvent(void);
void EntityInitSword(void);
void UnloadEntityIfRoomStatusSet(void);
void EntityInitMarin(void);
void Data_003_4AC6(void);
void EntityInitTarin(void);
void EntityInitMadamMeowMeow(void);
void EntityInitRaftRaftOwner(void);
void EntityInitNpcFacingDown(void);
void EntityInitStoreOwner(void);
void EntityInitWitch(void);
void EntityInitShopOwner(void);
void EntityInitWithRandomDirection(void);
void SetEntityDirection(void);
void EntityInitNoop(void);
void NoopFunction(void);
void EntityInitSouthFaceShrineDoor(void);
void EntityInitLeever(void);
void EntityInitZora(void);
void EntityInitWithRightDirection(void);
void GetColorDungeonRoomStatus(void);
void EntityInitRotoswitchRed(void);
void EntityInitRotoswitchYellow(void);
void EntityInitRotoswitchBlue(void);
void jr_003_4BAD(void);
void jr_003_4BB3(void);
void EntityInitHopper(void);
void EntityInitFlyingHopperBombs(void);
void EntityInitHardHitBeetle(void);
void EntityInitAvalaunch(void);
void EntityInitColorGuardianBlue(void);
void EntityInitColorGuardianRed(void);
void jr_003_4C15(void);
void EntityInitColorDungeonBook(void);
void EntityInitGiantBuzzBlob(void);
void EntityInitEntity25(void);
void EntityInitEntity26(void);
void Entity25Handler(void);
void Entity26Handler(void);
void FireSpriteVariants(void);
void EntityBurningHandler(void);
void Data_003_4CA4(void);
void Data_003_4CA8(void);
void Data_003_4CAC(void);
void Unknown020SpriteVariants(void);
void EntityFallHandler(void);
void jr_003_4D07(void);
void jr_003_4D22(void);
void jr_003_4D29(void);
void jr_003_4D57(void);
void EntityThrownHandler(void);
void Data_003_4E05(void);
void EntityStunnedHandler(void);
void EntityGetLiftedUp(void);
void jr_003_4E72(void);
void EntityRandomSpeedX(void);
void EntityRandomSpeedY(void);
void EntityInitWithRandomSpeed(void);
void EntityInitSparkClockwise(void);
void EntityInitSparkCounterClockwise(void);
void jr_003_4ED0(void);
void EntityInitWizrobe(void);
void EntityInitMoblinSword(void);
void EntityInitSecretSeashell(void);
void func_003_4F12(void);
void EntityInitDiggableBushOrPotDroppable(void);
void SetHiddenDroppableOptions1(void);
void EntityInitKeyDropPoint(void);
void EntityInitTradingItem(void);
void EntityInitWarp(void);
void EntityInitTreeOrPotDroppable(void);
void EntityInitWithShiftedPosition(void);
void EntityShiftPosition(void);
void EntityInitWithShiftedXPosition(void);
void SetDroppableDefaultTimer(void);
void EntityInitWithCountdown(void);
void EntityInitGhini(void);
void MaskedIronMaskSpriteVariants(void);
void UnmaskedIronMaskSpriteVariants(void);
void IronMaskSpeedXValues(void);
void IronMaskSpeedYValues(void);
void IronMaskEntityHandler(void);
void OpenChestTilesGBC(void);
void OpenChestTiles(void);
void ChestToInventoryMappingTable(void);
void ChestRupeeCountHigh(void);
void ChestRupeeCountLow(void);
void EntityInitChestWithItem(void);
void ChestGiveNoneInventoryItem(void);
void MarkRoomCompleted(void);
void GetRoomStatusAddressInHL(void);
void Data_003_5156(void);
void Data_003_515A(void);
void Data_003_515E(void);
void Data_003_5162(void);
void Data_003_5166(void);
void Data_003_516A(void);
void EntityInitPushedBlock(void);
void func_003_51C9(void);
void label_003_51F5(void);
void Unknown011SpriteVariants(void);
void Data_003_523D(void);
void Data_003_5241(void);
void Unknown010SpriteVariants(void);
void PushedBlockEntityHandler(void);
void jr_003_5286(void);
void func_003_52D4(void);
void label_003_52D7(void);
void Entity4BHandler(void);
void LiftableRockEntityHandler(void);
void jr_003_5395(void);
void LiftableRockOutdoorSpriteVariants(void);
void LiftableRockIndoorSpriteVariants(void);
void LiftableRockIntactHandler(void);
void LiftableRockStartSmashingAnimation(void);
void ret_003_5406(void);
void SmashRock(void);
void EntityCheckThrowAtTriggers(void);
void jr_003_5467(void);
void Data_003_5480(void);
void BombRightBeforeExplodingSprite(void);
void Data_003_5488(void);
void Data_003_54C8(void);
void EntityDeathHandler(void);
void jr_003_556F(void);
void jr_003_5599(void);
void DropTableByIndex(void);
void RandomDropChanceTable(void);
void RandomDropChanceTableLowHealth(void);
void DropTableRandom(void);
void SpawnEnemyDrop(void);
void Data_003_56EA(void);
void Data_003_56EE(void);
void Data_003_56F1(void);
void Data_003_5701(void);
void Data_003_5711(void);
void Data_003_5721(void);
void EntityLiftedHandler(void);
void jr_003_5748(void);
void jr_003_5782(void);
void jr_003_5789(void);
void func_003_5795(void);
void label_003_57E6(void);
void OctorokEntityHandler(void);
void OctorokSpriteVariants(void);
void RoamingEnemySpeedXPerDirection(void);
void RoamingEnemySpeedYPerDirection(void);
void EntityVariantForDirection_03(void);
void MoblinEntityHandler(void);
void AnimateRoamingEnemy(void);
void jr_003_588D(void);
void jr_003_5896(void);
void jr_003_58B9(void);
void RoamingEnemyState0Handler(void);
void StopWalkingEnd(void);
void SetEntityVariantForDirection_03(void);
void MoblinSpriteVariants(void);
void MoblinArrowOffsetXPerDirection(void);
void MoblinArrowOffsetYPerDirection(void);
void MoblinArrowSpeedXPerDirection(void);
void MoblinArrowSpeedYPerDirection(void);
void SpawnMoblinArrow(void);
void ret_003_598B(void);
void OctorokRockOffsetXPerDirection(void);
void OctorokRockOffsetYPerDirection(void);
void OctorokRockSpeedXPerDirection(void);
void OctorokRockSpeedYPerDirection(void);
void SpawnOctorokRock(void);
void EntityInitEntity13(void);
void Entity13Handler(void);
void HeartContainerSpriteVariants(void);
void HeartContainerEntityHandler(void);
void HoldEntityAboveLink(void);
void func_003_5A2E(void);
void HeartPieceEntitySprite(void);
void HeartPieceEntityHandler(void);
void HeartPieceState1Handler(void);
void HeartPieceState2Handler(void);
void HeartPieceState3Handler(void);
void HeartPieceState4Handler(void);
void HeartPieceState5Handler(void);
void HeartPieceState6Handler(void);
void HeartPieceState7Handler(void);
void HeartPieceState8Handler(void);
void HeartPieceSpriteVariants(void);
void DrawHeartPiecesInDialog(void);
void HeartPieceState0Handler(void);
void Data_003_5B5B(void);
void GuardianAcornEntityHandler(void);
void PieceOfPowerSpriteVariants(void);
void PieceOfPowerEntityHandler(void);
void jr_003_5B7D(void);
void IronMasksMaskSpriteVariants(void);
void IronMasksMaskEntityHandler(void);
void Data_003_5B95(void);
void Data_003_5B97(void);
void SwordShieldPickableEntityHandler(void);
void SwordShieldPickableState0Handler(void);
void SwordShieldPickableState1Handler(void);
void SwordShieldPickableState2Handler(void);
void SwordShieldPickableState3Handler(void);
void HookshotSpriteData(void);
void label_003_5C49(void);
void KeyDropSpriteTable(void);
void KeyCollectDialogs(void);
void KeyDropPointEntityHandler(void);
void label_003_5CD6(void);
void CheckForEntityFallingDownQuicksandHole(void);
void DroppableHeartSprite(void);
void DroppableHeartEntityHandler(void);
void SleepyToadstoolSprite(void);
void SleepyToadstoolEntityHandler(void);
void SirensInstrument2SpriteVariants(void);
void SirensInstrumentEntityHandler(void);
void Data_003_5D9F(void);
void Data_003_5DBC(void);
void SirensInstrumentState2Handler(void);
void AfterSirensInstrumentD1(void);
void AfterSirensInstrumentD2(void);
void AfterSirensInstrumentD3(void);
void AfterSirensInstrumentD4(void);
void AfterSirensInstrumentNone(void);
void AfterSirensInstrumentD6(void);
void AfterSirensInstrumentD7(void);
void animateSirensInstrumentPickup(void);
void jr_003_5E5B(void);
void ret_003_5E8A(void);
void SirensInstrument1SpriteVariants(void);
void SirensInstrumentState1Handler(void);
void SirensInstrumentState0Handler(void);
void func_003_5ED5(void);
void jr_003_5F01(void);
void InstrumentMusicTable(void);
void func_003_5F0C(void);
void Data_003_5F2F(void);
void Data_003_5F31(void);
void func_003_5F33(void);
void func_003_5FBC(void);
void func_003_5FBF(void);
void DroppableBombsSprite(void);
void DroppableBombsEntityHandler(void);
void DroppableSeashellSprite(void);
void DroppableSeashellEntityHandler(void);
void HidingSlimeKeySprite(void);
void HidingSlimeKeyEntityHandler(void);
void jr_003_604C(void);
void DroppableMagicPowderSprite(void);
void DroppableMagicPowderEntityHandler(void);
void jr_003_606A(void);
void DroppableArrowSprite(void);
void DroppableArrowsEntityHandler(void);
void DroppableDisappearIfNeeded(void);
void DroppableRupeeSprite(void);
void DroppableRupeeEntityHandler(void);
void PickableHandler(void);
void BouncingEntityPhysics(void);
void data_003_6157(void);
void DroppableFairyEntityHandler(void);
void jr_003_619C(void);
void jr_003_61BB(void);
void func_003_61C0(void);
void ret_003_61DD(void);
void DroppableRevealOrReturnIfNeeded(void);
void PickableCanBeCollectedBySwordTable(void);
void PickableHandleGrabbedByItemIfNeeded(void);
void PickableCollectIfNeeded(void);
void PickDroppableMagicPowder(void);
void jr_003_635F(void);
void PickSecretSeashell(void);
void label_003_636D(void);
void IncreaseValueAtHLClampAt99(void);
void PickDroppableArrows(void);
void PickDroppableBombs(void);
void PickSirensInstrument(void);
void HoldPickupInTheAir(void);
void PickHeartContainer(void);
void PickToadstoolOrDungeonKey(void);
void label_003_63D2(void);
void jr_003_63DB(void);
void PickHeartPiece(void);
void Data_003_63EE(void);
void Data_003_63F2(void);
void PickGuardianAcorn(void);
void PickPieceOfPower(void);
void ProcessPowerUp(void);
void MovePickupInTheAir(void);
void PickSword(void);
void GiveInventoryItem(void);
void PickDroppableKey(void);
void jr_003_64A5(void);
void jr_003_64AD(void);
void PickDroppableHeart(void);
void jr_003_64B9(void);
void jr_003_64BC(void);
void PickDroppableRupee(void);
void PickDroppableFairy(void);
void SpawnNewEntity(void);
void SpawnNewEntityInRange(void);
void ConfigureNewEntity_helper(void);
void BombSprite(void);
void ExplosionSpriteRect(void);
void RenderBombExplosion(void);
void ExplosionSpriteVariantFrames(void);
void BombExplosionHandler(void);
void BombExplosionVisuals(void);
void BombEntityHandler(void);
void RenderBomb(void);
void BombObjectPuzzleDestroyingX(void);
void BombObjectPuzzleDestroyingY(void);
void BombedWallObjects(void);
void BombedWallTilesIndexes(void);
void BombedCaveDoorTilesIndexesDMG(void);
void BombedCaveDoorTilesIndexesGBC(void);
void BombedWallCurrentRoomStatus(void);
void BombedWallAdjacentRoomStatus(void);
void BombedWallAdjacentRoomMapPosDiff(void);
void BombedGiantSkullTilesIndexes(void);
void GiantSkullDiffFromPrevPositionX(void);
void GiantSkullDiffFromPrevPositionY(void);
void CheckForBombDestroyableObjectPuzzle(void);
void BombObjectBasicDestroyingX(void);
void BombObjectBasicDestroyingY(void);
void CheckForBombDestroyableObjectBasic(void);
void Data_003_69A2(void);
void MagicRodFireballSpriteVariants(void);
void MagicRodFireballEntityHandler(void);
void OctorokRockSpriteVariants(void);
void OctorokRockEntityHandler(void);
void ArrowEntityHandler(void);
void BombArrowBombSprite(void);
void BombArrowBombXOffsetPerDirection(void);
void BombArrowBombYOffsetPerDirection(void);
void BombArrowHandler(void);
void MoblinArrowEntityHandler(void);
void ArrowRenderAndMove(void);
void EntityBounceOffWallX(void);
void EntityBounceOffWallY(void);
void ArrowSpinningSpriteVariantFrames(void);
void ArrowRockAfterHittingWall(void);
void Data_003_6B73(void);
void Data_003_6B77(void);
void func_003_6B7B(void);
void EntityArrowSpriteVariants(void);
void ReversedDirectionsTable(void);
void Data_003_6BDA(void);
void CheckLinkCollisionWithProjectile(void);
void func_003_6C6B(void);
void CheckLinkCollisionWithEnemy(void);
void func_003_6CC0(void);
void jr_003_6CC9(void);
void jr_003_6CCB(void);
void jr_003_6CCD(void);
void ApplyLinkCollisionWithEnemy(void);
void func_003_6DDF(void);
void setCarryAndReturn(void);
void Data_003_6E0C(void);
void jr_003_6E0E(void);
void DefaultEnemyDamageCollisionHandler(void);
void func_003_6E2B(void);
void label_003_6F04(void);
void jr_003_6F20(void);
void label_003_6F24(void);
void jr_003_6F2A(void);
void func_003_6F5C(void);
void Data_003_6F65(void);
void Data_003_6F69(void);
void jr_003_6F6D(void);
void func_003_6F93(void);
void label_003_6FA7(void);
void jr_003_6FB9(void);
void ConfigureEntityRecoil(void);
void Data_003_6FE4(void);
void EnemyCollidedWithSword(void);
void ApplySwordDamagesToEnemy(void);
void label_003_71C0(void);
void EntityBecomeStunned(void);
void jr_003_7279(void);
void jr_003_7293(void);
void jr_003_729D(void);
void jr_003_72B5(void);
void jr_003_72D8(void);
void jr_003_7304(void);
void jr_003_733E(void);
void jr_003_736D(void);
void jr_003_73AA(void);
void jr_003_73B6(void);
void jr_003_73D0(void);
void jr_003_73D9(void);
void StartIgnoringHitsForEntity(void);
void label_003_73E6(void);
void Data_003_73E7(void);
void func_003_73EB(void);
void jr_003_74BF(void);
void jr_003_74C1(void);
void jr_003_74DC(void);
void label_003_74E1(void);
void Data_003_74E4(void);
void Data_003_74E8(void);
void label_003_74EC(void);
void func_003_7565(void);
void ret_003_7570(void);
void jr_003_7571(void);
void func_003_75A2(void);
void entitiesLoop(void);
void forceCollision(void);
void forceCollisionEnd(void);
void jr_003_76AC(void);
void jr_003_7710(void);
void label_003_7715(void);
void jr_003_7734(void);
void jr_003_7737(void);
void jr_003_775A(void);
void jr_003_7782(void);
void jr_003_7798(void);
void jr_003_779A(void);
void checkNextEntity(void);
void func_003_77A7(void);
void func_003_77D6(void);
void CheckExplosionInteractionWithEntities(void);
void GetVectorTowardsOtherEntity(void);
void EntityCollisionPointsX(void);
void EntityCollisionPointsY(void);
void CollisionsTableFlagPerDirection(void);
void EntityOnConveyorMovementX(void);
void EntityOnConveyorMovementY(void);
void ApplyEntityInteractionWithBackground(void);
void FineCollisionShapes(void);
void ApplyEntityCollisionWithObject(void);
void SwitchBlockLoweredStatePerObject(void);
void ApplySwordIntersectionWithObjects(void);
void jr_003_7D6A(void);
void jr_003_7D6B(void);
void jr_003_7DB0(void);
void jr_003_7DC0(void);
void label_003_7DCD(void);
void jr_003_7DE3(void);
void jr_003_7E03(void);
void label_003_7E05(void);
void label_003_7E09(void);
void func_003_7E0E(void);
void GetVectorTowardsLink(void);
void ApplyVectorTowardsLink(void);
void ApplyVectorTowardsLinkAndReturn(void);
void GetEntityXDistanceToLink_03(void);
void GetEntityYDistanceToLink_03(void);
void GetEntityDirectionToLink_03(void);
void UpdateEntityPosWithSpeed_03(void);
void AddEntitySpeedToPos_03(void);
void AddEntityZSpeedToPos_03(void);
void ReturnIfNonInteractive_03(void);
void ApplyRecoilIfNeeded_03(void);

void PhysicsFlagsForEntity(void) {
  PhysicsFlagsForEntity__00:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__01:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__02:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__03:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__04:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__05:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__06:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__07:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__08:;
    /* data: db 3 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__09:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__0A:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__0B:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__0C:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__0D:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__0E:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__0F:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__10:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__11:;
    /* data: db 8 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__12:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__13:;
    /* data: db 1 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__14:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__15:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__16:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__17:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__18:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__19:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__1A:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__1B:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__1C:;
    /* data: db 1 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__1D:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__1E:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__1F:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__20:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__21:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__22:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__23:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__24:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__25:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__26:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__27:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__28:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__29:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__2A:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__2B:;
    /* data: db 1 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__2C:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__2D:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__2E:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__2F:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__30:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__31:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__32:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__33:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__34:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__35:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__36:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__37:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__38:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__39:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__3A:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__3B:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__3C:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__3D:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__3E:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__3F:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__40:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__41:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__42:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__43:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__44:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__45:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__46:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__47:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__48:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__49:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__4A:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_GRABBABLE | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__4B:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__4C:;
    /* data: db 1 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__4D:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__4E:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__4F:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__50:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__51:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__52:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__53:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__54:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__55:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__56:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__57:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__58:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__59:;
    /* data: db 8 */;
  PhysicsFlagsForEntity__5A:;
    /* data: db 8 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__5B:;
    /* data: db 0 */;
  PhysicsFlagsForEntity__5C:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__5D:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__5E:;
    /* data: db 0 */;
  PhysicsFlagsForEntity__5F:;
    /* data: db 0 */;
  PhysicsFlagsForEntity__60:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__61:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__62:;
    /* data: db 8 */;
  PhysicsFlagsForEntity__63:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__64:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__65:;
    /* data: db 0 */;
  PhysicsFlagsForEntity__66:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__67:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__68:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__69:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__6A:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__6B:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__6C:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__6D:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__6E:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__6F:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__70:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__71:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__72:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__73:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__74:;
    /* data: db 3 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__75:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__76:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__77:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__78:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__79:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__7A:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__7B:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__7C:;
    /* data: db 0 */;
  PhysicsFlagsForEntity__7D:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__7E:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__7F:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__80:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__81:;
    /* data: db 0 */;
  PhysicsFlagsForEntity__82:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__83:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__84:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__85:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__86:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__87:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__88:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__89:;
    /* data: db $C */;
  PhysicsFlagsForEntity__8A:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__8B:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__8C:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__8D:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__8E:;
    /* data: db 8 */;
  PhysicsFlagsForEntity__8F:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__90:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__91:;
    /* data: db 3 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__92:;
    /* data: db 4 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__93:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__94:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__95:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__96:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__97:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__98:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__99:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__9A:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__9B:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__9C:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__9D:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__9E:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__9F:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__A0:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__A1:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__A2:;
    /* data: db 4 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__A3:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__A4:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__A5:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__A6:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__A7:;
    /* data: db $A | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__A8:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__A9:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__AA:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__AB:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__AC:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__AD:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__AE:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__AF:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__B0:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__B1:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__B2:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__B3:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__B4:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__B5:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__B6:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__B7:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__B8:;
    /* data: db 5 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__B9:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__BA:;
    /* data: db 3 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__BB:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__BC:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__BD:;
    /* data: db 3 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__BE:;
    /* data: db 6 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__BF:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__C0:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__C1:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__C2:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__C3:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__C4:;
    /* data: db 8 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__C5:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__C6:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__C7:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__C8:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__C9:;
    /* data: db 1 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__CA:;
    /* data: db 8 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__CB:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__CC:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__CD:;
    /* data: db 5 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__CE:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__CF:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__D0:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__D1:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__D2:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__D3:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__D4:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__D5:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__D6:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__D7:;
    /* data: db 2 */;
  PhysicsFlagsForEntity__D8:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__D9:;
    /* data: db 8 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__DA:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__DB:;
    /* data: db 8 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__DC:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__DD:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__DE:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__DF:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__E0:;
    /* data: db 3 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__E1:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__E2:;
    /* data: db 2 | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__E3:;
    /* data: db 2 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__E4:;
    /* data: db 3 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__E5:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__E6:;
    /* data: db 0 | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__E7:;
    /* data: db 0 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__E8:;
    /* data: db 0 */;
  PhysicsFlagsForEntity__E9:;
    /* data: db 3 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__EA:;
    /* data: db 3 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__EB:;
    /* data: db 3 | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__EC:;
    /* data: db 4 | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__ED:;
    /* data: db 4 | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__EE:;
    /* data: db 4 | ENTITY_PHYSICS_SHADOW | ENTITY_PHYSICS_PROJECTILE_NOCLIP | ENTITY_PHYSICS_GRABBABLE */;
  PhysicsFlagsForEntity__EF:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__F0:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__F1:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__F2:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__F3:;
    /* data: db 4 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_SHADOW */;
  PhysicsFlagsForEntity__F4:;
    /* data: db $C */;
  PhysicsFlagsForEntity__F5:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS | ENTITY_PHYSICS_PROJECTILE_NOCLIP */;
  PhysicsFlagsForEntity__F6:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__F7:;
    /* data: db 2 | ENTITY_PHYSICS_HARMLESS */;
  PhysicsFlagsForEntity__F8:;
    /* data: db 6 */;
  PhysicsFlagsForEntity__F9:;
    /* data: db $C */;
  PhysicsFlagsForEntity__FA:;
    /* data: db 3 | ENTITY_PHYSICS_HARMLESS */;
    HitboxFlagsForEntity(); return;
}

void HitboxFlagsForEntity(void) {
  HitboxFlagsForEntity__00:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__01:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__02:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__03:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__04:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__05:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__06:;
    /* data: db HITFLAGS_COLLISION_BOX_BIG | HITFLAGS_HITBOX_BLOCK */;
  HitboxFlagsForEntity__07:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__08:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__09:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__0A:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__0B:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__0C:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__0D:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__0E:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__0F:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__10:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__11:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_ENEMY */;
  HitboxFlagsForEntity__12:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__13:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__14:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__15:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__16:;
    /* data: db HITFLAGS_COLLISION_BOX_SPARK | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__17:;
    /* data: db HITFLAGS_COLLISION_BOX_SPARK | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__18:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__19:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__1A:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__1B:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__1C:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_SMALL_ENEMY */;
  HitboxFlagsForEntity__1D:;
    /* data: db HITFLAGS_COLLISION_BOX_BIG | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__1E:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__1F:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__20:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__21:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__22:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__23:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__24:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__25:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__26:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__27:;
    /* data: db HITFLAGS_COLLISION_BOX_BIG | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__28:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__29:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__2A:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__2B:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__2C:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__2D:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__2E:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__2F:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__30:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__31:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__32:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__33:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__34:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__35:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__36:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__37:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__38:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__39:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__3A:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__3B:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__3C:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__3D:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__3E:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__3F:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__40:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__41:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__42:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__43:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__44:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__45:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__46:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BLOCK | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__47:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BLOCK | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__48:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BLOCK | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__49:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BLOCK | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__4A:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__4B:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__4C:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__4D:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__4E:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__4F:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__50:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__51:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__52:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__53:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__54:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__55:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__56:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__57:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__58:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__59:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__5A:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_ENEMY */;
  HitboxFlagsForEntity__5B:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__5C:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__5D:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__5E:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__5F:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_MASTER_STALFOS | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__60:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__61:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__62:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__63:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__64:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__65:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__66:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__67:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__68:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__69:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__6A:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__6B:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__6C:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__6D:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__6E:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__6F:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__70:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__71:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__72:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__73:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__74:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__75:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__76:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__77:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__78:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__79:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__7A:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__7B:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__7C:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_ENEMY */;
  HitboxFlagsForEntity__7D:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_SMALL_ENEMY */;
  HitboxFlagsForEntity__7E:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__7F:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__80:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__81:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__82:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BAR */;
  HitboxFlagsForEntity__83:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__84:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__85:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__86:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_FLOATING_PICKUP */;
  HitboxFlagsForEntity__87:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__88:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__89:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_ENEMY */;
  HitboxFlagsForEntity__8A:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BLOCK */;
  HitboxFlagsForEntity__8B:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BLOCK */;
  HitboxFlagsForEntity__8C:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BLOCK | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__8D:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BLOCK | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__8E:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__8F:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__90:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__91:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__92:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__93:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__94:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__95:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__96:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__97:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__98:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__99:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__9A:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__9B:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__9C:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__9D:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_PILLAR | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__9E:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__9F:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__A0:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__A1:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__A2:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__A3:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_SIDE_VIEW_PLATFORM */;
  HitboxFlagsForEntity__A4:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_SIDE_VIEW_PLATFORM */;
  HitboxFlagsForEntity__A5:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_SIDE_VIEW_PLATFORM */;
  HitboxFlagsForEntity__A6:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_SIDE_VIEW_WEIGHTS */;
  HitboxFlagsForEntity__A7:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_PILLAR | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__A8:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__A9:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__AA:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__AB:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__AC:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__AD:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__AE:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__AF:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_PICKUP */;
  HitboxFlagsForEntity__B0:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__B1:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__B2:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__B3:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__B4:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__B5:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__B6:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__B7:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__B8:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__B9:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__BA:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__BB:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__BC:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__BD:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__BE:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__BF:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__C0:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__C1:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC */;
  HitboxFlagsForEntity__C2:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC */;
  HitboxFlagsForEntity__C3:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__C4:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__C5:;
    /* data: db HITFLAGS_COLLISION_BOX_BIG | HITFLAGS_HITBOX_BLOCK */;
  HitboxFlagsForEntity__C6:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__C7:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_NPC */;
  HitboxFlagsForEntity__C8:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__C9:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__CA:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__CB:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__CC:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__CD:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__CE:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__CF:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__D0:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__D1:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__D2:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__D3:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__D4:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__D5:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC */;
  HitboxFlagsForEntity__D6:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_SIDE_VIEW_POT | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__D7:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__D8:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_SIDE_VIEW_PLATFORM */;
  HitboxFlagsForEntity__D9:;
    /* data: db HITFLAGS_COLLISION_BOX_SMALL | HITFLAGS_HITBOX_SIDE_VIEW_PLATFORM */;
  HitboxFlagsForEntity__DA:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__DB:;
    /* data: db HITFLAGS_COLLISION_BOX_BIG | HITFLAGS_HITBOX_BIG_ENEMY */;
  HitboxFlagsForEntity__DC:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__DD:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__DE:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__DF:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__E0:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__E1:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__E2:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__E3:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__E4:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BLOCK | HITFLAGS_IGNORE_HITS */;
  HitboxFlagsForEntity__E5:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_FLOATING_PICKUP */;
  HitboxFlagsForEntity__E6:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__E7:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__E8:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__E9:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__EA:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__EB:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__EC:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__ED:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__EE:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__EF:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__F0:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__F1:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__F2:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__F3:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__F4:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_ENEMY */;
  HitboxFlagsForEntity__F5:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__F6:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__F7:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_ENEMY */;
  HitboxFlagsForEntity__F8:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_ENEMY */;
  HitboxFlagsForEntity__F9:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_BIG_ENEMY */;
  HitboxFlagsForEntity__FA:;
    /* data: db HITFLAGS_COLLISION_BOX_NORMAL | HITFLAGS_HITBOX_NPC | HITFLAGS_IGNORE_HITS */;
    HealthGroupForEntity(); return;
}

void HealthGroupForEntity(void) {
  HealthGroupForEntity__00:;
    /* data: db $00 */;
  HealthGroupForEntity__01:;
    /* data: db $00 */;
  HealthGroupForEntity__02:;
    /* data: db $02 */;
  HealthGroupForEntity__03:;
    /* data: db $00 */;
  HealthGroupForEntity__04:;
    /* data: db $00 */;
  HealthGroupForEntity__05:;
    /* data: db $00 */;
  HealthGroupForEntity__06:;
    /* data: db $00 */;
  HealthGroupForEntity__07:;
    /* data: db $00 */;
  HealthGroupForEntity__08:;
    /* data: db $00 */;
  HealthGroupForEntity__09:;
    /* data: db $00 */;
  HealthGroupForEntity__0A:;
    /* data: db $0D */;
  HealthGroupForEntity__0B:;
    /* data: db $01 */;
  HealthGroupForEntity__0C:;
    /* data: db $0D */;
  HealthGroupForEntity__0D:;
    /* data: db $01 */;
  HealthGroupForEntity__0E:;
    /* data: db $01 */;
  HealthGroupForEntity__0F:;
    /* data: db $08 */;
  HealthGroupForEntity__10:;
    /* data: db $13 */;
  HealthGroupForEntity__11:;
    /* data: db $13 */;
  HealthGroupForEntity__12:;
    /* data: db $13 */;
  HealthGroupForEntity__13:;
    /* data: db $00 */;
  HealthGroupForEntity__14:;
    /* data: db $01 */;
  HealthGroupForEntity__15:;
    /* data: db $06 */;
  HealthGroupForEntity__16:;
    /* data: db $2C */;
  HealthGroupForEntity__17:;
    /* data: db $2C */;
  HealthGroupForEntity__18:;
    /* data: db $0C */;
  HealthGroupForEntity__19:;
    /* data: db $00 */;
  HealthGroupForEntity__1A:;
    /* data: db $2A */;
  HealthGroupForEntity__1B:;
    /* data: db $00 */;
  HealthGroupForEntity__1C:;
    /* data: db $00 */;
  HealthGroupForEntity__1D:;
    /* data: db $00 */;
  HealthGroupForEntity__1E:;
    /* data: db $2A */;
  HealthGroupForEntity__1F:;
    /* data: db $2F */;
  HealthGroupForEntity__20:;
    /* data: db $0B */;
  HealthGroupForEntity__21:;
    /* data: db $0C */;
  HealthGroupForEntity__22:;
    /* data: db $0E */;
  HealthGroupForEntity__23:;
    /* data: db $01 */;
  HealthGroupForEntity__24:;
    /* data: db $01 */;
  HealthGroupForEntity__25:;
    /* data: db $06 */;
  HealthGroupForEntity__26:;
    /* data: db $06 */;
  HealthGroupForEntity__27:;
    /* data: db $09 */;
  HealthGroupForEntity__28:;
    /* data: db $04 */;
  HealthGroupForEntity__29:;
    /* data: db $01 */;
  HealthGroupForEntity__2A:;
    /* data: db $00 */;
  HealthGroupForEntity__2B:;
    /* data: db $0E */;
  HealthGroupForEntity__2C:;
    /* data: db $01 */;
  HealthGroupForEntity__2D:;
    /* data: db $00 */;
  HealthGroupForEntity__2E:;
    /* data: db $00 */;
  HealthGroupForEntity__2F:;
    /* data: db $00 */;
  HealthGroupForEntity__30:;
    /* data: db $00 */;
  HealthGroupForEntity__31:;
    /* data: db $00 */;
  HealthGroupForEntity__32:;
    /* data: db $00 */;
  HealthGroupForEntity__33:;
    /* data: db $00 */;
  HealthGroupForEntity__34:;
    /* data: db $00 */;
  HealthGroupForEntity__35:;
    /* data: db $00 */;
  HealthGroupForEntity__36:;
    /* data: db $00 */;
  HealthGroupForEntity__37:;
    /* data: db $00 */;
  HealthGroupForEntity__38:;
    /* data: db $00 */;
  HealthGroupForEntity__39:;
    /* data: db $00 */;
  HealthGroupForEntity__3A:;
    /* data: db $00 */;
  HealthGroupForEntity__3B:;
    /* data: db $00 */;
  HealthGroupForEntity__3C:;
    /* data: db $00 */;
  HealthGroupForEntity__3D:;
    /* data: db $00 */;
  HealthGroupForEntity__3E:;
    /* data: db $00 */;
  HealthGroupForEntity__3F:;
    /* data: db $00 */;
  HealthGroupForEntity__40:;
    /* data: db $00 */;
  HealthGroupForEntity__41:;
    /* data: db $00 */;
  HealthGroupForEntity__42:;
    /* data: db $00 */;
  HealthGroupForEntity__43:;
    /* data: db $00 */;
  HealthGroupForEntity__44:;
    /* data: db $00 */;
  HealthGroupForEntity__45:;
    /* data: db $00 */;
  HealthGroupForEntity__46:;
    /* data: db $00 */;
  HealthGroupForEntity__47:;
    /* data: db $00 */;
  HealthGroupForEntity__48:;
    /* data: db $00 */;
  HealthGroupForEntity__49:;
    /* data: db $00 */;
  HealthGroupForEntity__4A:;
    /* data: db $00 */;
  HealthGroupForEntity__4B:;
    /* data: db $00 */;
  HealthGroupForEntity__4C:;
    /* data: db $0E */;
  HealthGroupForEntity__4D:;
    /* data: db $00 */;
  HealthGroupForEntity__4E:;
    /* data: db $00 */;
  HealthGroupForEntity__4F:;
    /* data: db $00 */;
  HealthGroupForEntity__50:;
    /* data: db $20 */;
  HealthGroupForEntity__51:;
    /* data: db $13 */;
  HealthGroupForEntity__52:;
    /* data: db $00 */;
  HealthGroupForEntity__53:;
    /* data: db $00 */;
  HealthGroupForEntity__54:;
    /* data: db $00 */;
  HealthGroupForEntity__55:;
    /* data: db $0B */;
  HealthGroupForEntity__56:;
    /* data: db $0B */;
  HealthGroupForEntity__57:;
    /* data: db $30 */;
  HealthGroupForEntity__58:;
    /* data: db $0E */;
  HealthGroupForEntity__59:;
    /* data: db $18 */;
  HealthGroupForEntity__5A:;
    /* data: db $1D */;
  HealthGroupForEntity__5B:;
    /* data: db $1A */;
  HealthGroupForEntity__5C:;
    /* data: db $19 */;
  HealthGroupForEntity__5D:;
    /* data: db $1C */;
  HealthGroupForEntity__5E:;
    /* data: db $10 */;
  HealthGroupForEntity__5F:;
    /* data: db $11 */;
  HealthGroupForEntity__60:;
    /* data: db $12 */;
  HealthGroupForEntity__61:;
    /* data: db $00 */;
  HealthGroupForEntity__62:;
    /* data: db $1F */;
  HealthGroupForEntity__63:;
    /* data: db $1E */;
  HealthGroupForEntity__64:;
    /* data: db $00 */;
  HealthGroupForEntity__65:;
    /* data: db $1B */;
  HealthGroupForEntity__66:;
    /* data: db $22 */;
  HealthGroupForEntity__67:;
    /* data: db $00 */;
  HealthGroupForEntity__68:;
    /* data: db $00 */;
  HealthGroupForEntity__69:;
    /* data: db $00 */;
  HealthGroupForEntity__6A:;
    /* data: db $00 */;
  HealthGroupForEntity__6B:;
    /* data: db $00 */;
  HealthGroupForEntity__6C:;
    /* data: db $00 */;
  HealthGroupForEntity__6D:;
    /* data: db $00 */;
  HealthGroupForEntity__6E:;
    /* data: db $00 */;
  HealthGroupForEntity__6F:;
    /* data: db $00 */;
  HealthGroupForEntity__70:;
    /* data: db $00 */;
  HealthGroupForEntity__71:;
    /* data: db $00 */;
  HealthGroupForEntity__72:;
    /* data: db $00 */;
  HealthGroupForEntity__73:;
    /* data: db $00 */;
  HealthGroupForEntity__74:;
    /* data: db $00 */;
  HealthGroupForEntity__75:;
    /* data: db $00 */;
  HealthGroupForEntity__76:;
    /* data: db $00 */;
  HealthGroupForEntity__77:;
    /* data: db $00 */;
  HealthGroupForEntity__78:;
    /* data: db $00 */;
  HealthGroupForEntity__79:;
    /* data: db $00 */;
  HealthGroupForEntity__7A:;
    /* data: db $21 */;
  HealthGroupForEntity__7B:;
    /* data: db $00 */;
  HealthGroupForEntity__7C:;
    /* data: db $29 */;
  HealthGroupForEntity__7D:;
    /* data: db $00 */;
  HealthGroupForEntity__7E:;
    /* data: db $29 */;
  HealthGroupForEntity__7F:;
    /* data: db $00 */;
  HealthGroupForEntity__80:;
    /* data: db $00 */;
  HealthGroupForEntity__81:;
    /* data: db $13 */;
  HealthGroupForEntity__82:;
    /* data: db $00 */;
  HealthGroupForEntity__83:;
    /* data: db $00 */;
  HealthGroupForEntity__84:;
    /* data: db $00 */;
  HealthGroupForEntity__85:;
    /* data: db $00 */;
  HealthGroupForEntity__86:;
    /* data: db $00 */;
  HealthGroupForEntity__87:;
    /* data: db $13 */;
  HealthGroupForEntity__88:;
    /* data: db $15 */;
  HealthGroupForEntity__89:;
    /* data: db $14 */;
  HealthGroupForEntity__8A:;
    /* data: db $01 */;
  HealthGroupForEntity__8B:;
    /* data: db $01 */;
  HealthGroupForEntity__8C:;
    /* data: db $01 */;
  HealthGroupForEntity__8D:;
    /* data: db $01 */;
  HealthGroupForEntity__8E:;
    /* data: db $13 */;
  HealthGroupForEntity__8F:;
    /* data: db $24 */;
  HealthGroupForEntity__90:;
    /* data: db $2D */;
  HealthGroupForEntity__91:;
    /* data: db $2E */;
  HealthGroupForEntity__92:;
    /* data: db $13 */;
  HealthGroupForEntity__93:;
    /* data: db $25 */;
  HealthGroupForEntity__94:;
    /* data: db $23 */;
  HealthGroupForEntity__95:;
    /* data: db $00 */;
  HealthGroupForEntity__96:;
    /* data: db $00 */;
  HealthGroupForEntity__97:;
    /* data: db $00 */;
  HealthGroupForEntity__98:;
    /* data: db $00 */;
  HealthGroupForEntity__99:;
    /* data: db $00 */;
  HealthGroupForEntity__9A:;
    /* data: db $00 */;
  HealthGroupForEntity__9B:;
    /* data: db $00 */;
  HealthGroupForEntity__9C:;
    /* data: db $00 */;
  HealthGroupForEntity__9D:;
    /* data: db $00 */;
  HealthGroupForEntity__9E:;
    /* data: db $00 */;
  HealthGroupForEntity__9F:;
    /* data: db $00 */;
  HealthGroupForEntity__A0:;
    /* data: db $00 */;
  HealthGroupForEntity__A1:;
    /* data: db $00 */;
  HealthGroupForEntity__A2:;
    /* data: db $00 */;
  HealthGroupForEntity__A3:;
    /* data: db $00 */;
  HealthGroupForEntity__A4:;
    /* data: db $00 */;
  HealthGroupForEntity__A5:;
    /* data: db $00 */;
  HealthGroupForEntity__A6:;
    /* data: db $00 */;
  HealthGroupForEntity__A7:;
    /* data: db $00 */;
  HealthGroupForEntity__A8:;
    /* data: db $00 */;
  HealthGroupForEntity__A9:;
    /* data: db $00 */;
  HealthGroupForEntity__AA:;
    /* data: db $00 */;
  HealthGroupForEntity__AB:;
    /* data: db $00 */;
  HealthGroupForEntity__AC:;
    /* data: db $00 */;
  HealthGroupForEntity__AD:;
    /* data: db $00 */;
  HealthGroupForEntity__AE:;
    /* data: db $00 */;
  HealthGroupForEntity__AF:;
    /* data: db $00 */;
  HealthGroupForEntity__B0:;
    /* data: db $02 */;
  HealthGroupForEntity__B1:;
    /* data: db $00 */;
  HealthGroupForEntity__B2:;
    /* data: db $00 */;
  HealthGroupForEntity__B3:;
    /* data: db $00 */;
  HealthGroupForEntity__B4:;
    /* data: db $00 */;
  HealthGroupForEntity__B5:;
    /* data: db $00 */;
  HealthGroupForEntity__B6:;
    /* data: db $00 */;
  HealthGroupForEntity__B7:;
    /* data: db $00 */;
  HealthGroupForEntity__B8:;
    /* data: db $00 */;
  HealthGroupForEntity__B9:;
    /* data: db $0F */;
  HealthGroupForEntity__BA:;
    /* data: db $2B */;
  HealthGroupForEntity__BB:;
    /* data: db $00 */;
  HealthGroupForEntity__BC:;
    /* data: db $00 */;
  HealthGroupForEntity__BD:;
    /* data: db $00 */;
  HealthGroupForEntity__BE:;
    /* data: db $13 */;
  HealthGroupForEntity__BF:;
    /* data: db $00 */;
  HealthGroupForEntity__C0:;
    /* data: db $00 */;
  HealthGroupForEntity__C1:;
    /* data: db $00 */;
  HealthGroupForEntity__C2:;
    /* data: db $00 */;
  HealthGroupForEntity__C3:;
    /* data: db $00 */;
  HealthGroupForEntity__C4:;
    /* data: db $00 */;
  HealthGroupForEntity__C5:;
    /* data: db $00 */;
  HealthGroupForEntity__C6:;
    /* data: db $01 */;
  HealthGroupForEntity__C7:;
    /* data: db $00 */;
  HealthGroupForEntity__C8:;
    /* data: db $00 */;
  HealthGroupForEntity__C9:;
    /* data: db $00 */;
  HealthGroupForEntity__CA:;
    /* data: db $00 */;
  HealthGroupForEntity__CB:;
    /* data: db $00 */;
  HealthGroupForEntity__CC:;
    /* data: db $00 */;
  HealthGroupForEntity__CD:;
    /* data: db $00 */;
  HealthGroupForEntity__CE:;
    /* data: db $00 */;
  HealthGroupForEntity__CF:;
    /* data: db $00 */;
  HealthGroupForEntity__D0:;
    /* data: db $00 */;
  HealthGroupForEntity__D1:;
    /* data: db $00 */;
  HealthGroupForEntity__D2:;
    /* data: db $00 */;
  HealthGroupForEntity__D3:;
    /* data: db $00 */;
  HealthGroupForEntity__D4:;
    /* data: db $00 */;
  HealthGroupForEntity__D5:;
    /* data: db $00 */;
  HealthGroupForEntity__D6:;
    /* data: db $00 */;
  HealthGroupForEntity__D7:;
    /* data: db $00 */;
  HealthGroupForEntity__D8:;
    /* data: db $00 */;
  HealthGroupForEntity__D9:;
    /* data: db $00 */;
  HealthGroupForEntity__DA:;
    /* data: db $00 */;
  HealthGroupForEntity__DB:;
    /* data: db $00 */;
  HealthGroupForEntity__DC:;
    /* data: db $00 */;
  HealthGroupForEntity__DD:;
    /* data: db $00 */;
  HealthGroupForEntity__DE:;
    /* data: db $00 */;
  HealthGroupForEntity__DF:;
    /* data: db $00 */;
  HealthGroupForEntity__E0:;
    /* data: db $00 */;
  HealthGroupForEntity__E1:;
    /* data: db $00 */;
  HealthGroupForEntity__E2:;
    /* data: db $28 */;
  HealthGroupForEntity__E3:;
    /* data: db $00 */;
  HealthGroupForEntity__E4:;
    /* data: db $13 */;
  HealthGroupForEntity__E5:;
    /* data: db $00 */;
  HealthGroupForEntity__E6:;
    /* data: db $26 */;
  HealthGroupForEntity__E7:;
    /* data: db $00 */;
  HealthGroupForEntity__E8:;
    /* data: db $00 */;
  HealthGroupForEntity__E9:;
    /* data: db $31 */;
  HealthGroupForEntity__EA:;
    /* data: db $31 */;
  HealthGroupForEntity__EB:;
    /* data: db $31 */;
  HealthGroupForEntity__EC:;
    /* data: db $00 */;
  HealthGroupForEntity__ED:;
    /* data: db $00 */;
  HealthGroupForEntity__EE:;
    /* data: db $00 */;
  HealthGroupForEntity__EF:;
    /* data: db $22 */;
  HealthGroupForEntity__F0:;
    /* data: db $22 */;
  HealthGroupForEntity__F1:;
    /* data: db $22 */;
  HealthGroupForEntity__F2:;
    /* data: db $2B */;
  HealthGroupForEntity__F3:;
    /* data: db $00 */;
  HealthGroupForEntity__F4:;
    /* data: db $14 */;
  HealthGroupForEntity__F5:;
    /* data: db $00 */;
  HealthGroupForEntity__F6:;
    /* data: db $22 */;
  HealthGroupForEntity__F7:;
    /* data: db $22 */;
  HealthGroupForEntity__F8:;
    /* data: db $33 */;
  HealthGroupForEntity__F9:;
    /* data: db $14 */;
  HealthGroupForEntity__FA:;
    /* data: db $00 */;
    Options1ForEntity(); return;
}

void Options1ForEntity(void) {
  Options1ForEntity__00:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__01:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__02:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__03:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__04:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__05:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__06:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__07:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__08:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__09:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__0A:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__0B:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__0C:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__0D:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__0E:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__0F:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF */;
  Options1ForEntity__10:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__11:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__12:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__13:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__14:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__15:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__16:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__17:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__18:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__19:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__1A:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__1B:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__1C:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__1D:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__1E:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__1F:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__20:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__21:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__22:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__23:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__24:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__25:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__26:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__27:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__28:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__29:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__2A:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__2B:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__2C:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__2D:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__2E:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__2F:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__30:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__31:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__32:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__33:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__34:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__35:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__36:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__37:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__38:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__39:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__3A:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__3B:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__3C:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__3D:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_SPLASH_IN_WATER|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__3E:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__3F:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__40:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__41:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__42:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__43:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__44:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__45:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__46:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__47:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__48:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__49:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__4A:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__4B:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__4C:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__4D:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__4E:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__4F:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__50:;
    /* data: db ENTITY_OPT1_ALLOW_OUT_OF_BOUNDS|ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__51:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__52:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__53:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__54:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__55:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__56:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__57:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__58:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__59:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__5A:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__5B:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__5C:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__5D:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__5E:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__5F:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__60:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__61:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__62:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__63:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__64:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__65:;
    /* data: db ENTITY_OPT1_IS_BOSS */;
  Options1ForEntity__66:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__67:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__68:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__69:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__6A:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__6B:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__6C:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__6D:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__6E:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__6F:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__70:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__71:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__72:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__73:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__74:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__75:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__76:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__77:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__78:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__79:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__7A:;
    /* data: db ENTITY_OPT1_ALLOW_OUT_OF_BOUNDS */;
  Options1ForEntity__7B:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__7C:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__7D:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__7E:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__7F:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF */;
  Options1ForEntity__80:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__81:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__82:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF */;
  Options1ForEntity__83:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__84:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__85:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__86:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__87:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__88:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__89:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__8A:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__8B:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__8C:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__8D:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__8E:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__8F:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__90:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__91:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__92:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__93:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__94:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__95:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__96:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__97:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__98:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__99:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__9A:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__9B:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__9C:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__9D:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__9E:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__9F:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__A0:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__A1:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__A2:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__A3:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__A4:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__A5:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__A6:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__A7:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__A8:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__A9:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__AA:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__AB:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__AC:;
    /* data: db ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__AD:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_SPLASH_IN_WATER */;
  Options1ForEntity__AE:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__AF:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__B0:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__B1:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__B2:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__B3:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__B4:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__B5:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__B6:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__B7:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__B8:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__B9:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__BA:;
    /* data: db ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__BB:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__BC:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__BD:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__BE:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__BF:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__C0:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__C1:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__C2:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__C3:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__C4:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__C5:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__C6:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__C7:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__C8:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__C9:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__CA:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__CB:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__CC:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__CD:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__CE:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__CF:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__D0:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__D1:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__D2:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__D3:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__D4:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__D5:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL|ENTITY_OPT1_NO_WALL_COLLISION */;
  Options1ForEntity__D6:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__D7:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__D8:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__D9:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__DA:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__DB:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__DC:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__DD:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__DE:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__DF:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__E0:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__E1:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__E2:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__E3:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__E4:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__E5:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__E6:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__E7:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__E8:;
    /* data: db ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__E9:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__EA:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__EB:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__EC:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__ED:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__EE:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__EF:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__F0:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__F1:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__F2:;
    /* data: db ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__F3:;
    /* data: db ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__F4:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__F5:;
    /* data: db ENTITY_OPT1_SWORD_CLINK_OFF|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
  Options1ForEntity__F6:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__F7:;
    /* data: db ENTITY_OPT1_NONE */;
  Options1ForEntity__F8:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_IS_MINI_BOSS */;
  Options1ForEntity__F9:;
    /* data: db ENTITY_OPT1_IS_BOSS|ENTITY_OPT1_NO_GROUND_INTERACTION */;
  Options1ForEntity__FA:;
    /* data: db ENTITY_OPT1_NO_GROUND_INTERACTION|ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL */;
    Data_003_43EC(); return;
}

void Data_003_43EC(void) {
    /* data: db $01, $01, $01, $00, $00, $01, $02, $01, $02, $03, $03, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $00, $00, $02, $02, $02, $02, $03, $03, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $00, $00, $02, $02, $02, $02, $01, $03, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $00, $00, $02, $01, $02, $01, $01, $03, $02, $00, $00, $00, $00 */;
    /* data: db $00, $03, $03, $00, $00, $00, $01, $00, $01, $00, $00, $01, $00, $00, $00, $00 */;
    /* data: db $00, $00, $03, $00, $00, $00, $01, $00, $01, $00, $00, $01, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $02, $03, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $01, $03, $01, $02, $03, $01, $01, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $03, $01, $02, $04, $00, $00, $01, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $01, $01, $01, $01, $03, $01, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $01, $03, $01, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $01, $01, $03, $01, $01, $01, $03, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $02, $01, $02, $02, $02, $03, $03, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $02, $02, $02, $04, $00, $01, $02, $00, $00, $00, $00 */;
    /* data: db $01, $02, $02, $00, $00, $00, $00, $03, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $02, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $02, $02, $02, $02, $02, $00, $02, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $02, $02, $02, $02, $04, $00, $02, $02, $00, $00, $00, $00 */;
    /* data: db $00, $01, $01, $01, $02, $01, $00, $00, $00, $00, $01, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $01, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $01, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $00, $00, $02, $00, $00, $02, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $00, $00, $00, $00, $00, $02, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $00, $02, $00, $00, $01, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $00, $00, $00, $00, $00, $01, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $00, $00, $02, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $02, $02, $00, $00, $02, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $00, $00, $00, $00, $00, $02, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $00, $00, $00, $00, $02, $01, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $02, $01, $02, $00, $01, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $02, $01, $02, $00, $01, $02, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $01, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $01, $02, $01, $00, $03, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $01, $00, $00, $00, $01, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $02, $01, $02, $00, $01, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $02, $01, $02, $00, $01, $02, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $01, $01, $01, $00, $02, $00, $02, $00, $03, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $00, $00, $02, $02, $02, $02, $00, $00, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $00, $00, $02, $00, $00, $05, $02, $03, $03, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $05, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $02, $01, $04, $00, $01, $02, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $02, $04, $00, $02, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $01, $02, $04, $00, $03, $02, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $02, $02, $01, $01, $00, $03, $02, $00, $00, $00, $00 */;
    /* data: db $06, $06, $06, $06, $06, $06, $06, $06, $06, $00, $06, $06, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $06, $00, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $00, $00, $00, $00, $06, $00, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $00, $00, $00, $00, $06, $00, $00, $00, $00, $00, $00 */;
}

void Data_003_473C(void) {
    /* data: db $00, $01, $02, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $02, $01, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $04, $02, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $08, $04, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $10, $08, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $01, $04, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $FF, $02, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $01, $04, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $FF, $18, $FE, $02, $FD, $FF, $00 */;
    /* data: db $00, $FF, $FD, $FE, $00, $00, $02, $00 */;
    /* data: db $00, $01, $04, $FE, $00, $00, $FF, $00 */;
    /* data: db $00, $FF, $02, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $01, $02, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $01, $02, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $01, $02, $40, $00, $00, $FF, $00 */;
    /* data: db $00, $01, $02, $40, $00, $00, $FF, $00 */;
}

void InitialHealthForGroup(void) {
  InitialHealthForGroup__00:;
    /* data: db $01 */;
  InitialHealthForGroup__01:;
    /* data: db $02 */;
  InitialHealthForGroup__02:;
    /* data: db $02 */;
  InitialHealthForGroup__03:;
    /* data: db $04 */;
  InitialHealthForGroup__04:;
    /* data: db $04 */;
  InitialHealthForGroup__05:;
    /* data: db $04 */;
  InitialHealthForGroup__06:;
    /* data: db $04 */;
  InitialHealthForGroup__07:;
    /* data: db $04 */;
  InitialHealthForGroup__08:;
    /* data: db $04 */;
  InitialHealthForGroup__09:;
    /* data: db $04 */;
  InitialHealthForGroup__0A:;
    /* data: db $04 */;
  InitialHealthForGroup__0B:;
    /* data: db $04 */;
  InitialHealthForGroup__0C:;
    /* data: db $04 */;
  InitialHealthForGroup__0D:;
    /* data: db $04 */;
  InitialHealthForGroup__0E:;
    /* data: db $04 */;
  InitialHealthForGroup__0F:;
    /* data: db $04 */;
  InitialHealthForGroup__10:;
    /* data: db $0C */;
  InitialHealthForGroup__11:;
    /* data: db $3F */;
  InitialHealthForGroup__12:;
    /* data: db $08 */;
  InitialHealthForGroup__13:;
    /* data: db $08 */;
  InitialHealthForGroup__14:;
    /* data: db $08 */;
  InitialHealthForGroup__15:;
    /* data: db $0C */;
  InitialHealthForGroup__16:;
    /* data: db $00 */;
  InitialHealthForGroup__17:;
    /* data: db $00 */;
  InitialHealthForGroup__18:;
    /* data: db $04 */;
  InitialHealthForGroup__19:;
    /* data: db $06 */;
  InitialHealthForGroup__1A:;
    /* data: db $08 */;
  InitialHealthForGroup__1B:;
    /* data: db $0A */;
  InitialHealthForGroup__1C:;
    /* data: db $04 */;
  InitialHealthForGroup__1D:;
    /* data: db $14 */;
  InitialHealthForGroup__1E:;
    /* data: db $0A */;
  InitialHealthForGroup__1F:;
    /* data: db $18 */;
  InitialHealthForGroup__20:;
    /* data: db $04 */;
  InitialHealthForGroup__21:;
    /* data: db $02 */;
  InitialHealthForGroup__22:;
    /* data: db $08 */;
  InitialHealthForGroup__23:;
    /* data: db $08 */;
  InitialHealthForGroup__24:;
    /* data: db $02 */;
  InitialHealthForGroup__25:;
    /* data: db $04 */;
  InitialHealthForGroup__26:;
    /* data: db $FF */;
  InitialHealthForGroup__27:;
    /* data: db $00 */;
  InitialHealthForGroup__28:;
    /* data: db $02 */;
  InitialHealthForGroup__29:;
    /* data: db $04 */;
  InitialHealthForGroup__2A:;
    /* data: db $02 */;
  InitialHealthForGroup__2B:;
    /* data: db $03 */;
  InitialHealthForGroup__2C:;
    /* data: db $01 */;
  InitialHealthForGroup__2D:;
    /* data: db $01 */;
  InitialHealthForGroup__2E:;
    /* data: db $08 */;
  InitialHealthForGroup__2F:;
    /* data: db $06 */;
  InitialHealthForGroup__30:;
    /* data: db $02 */;
  InitialHealthForGroup__31:;
    /* data: db $0A */;
  InitialHealthForGroup__32:;
    /* data: db $01 */;
  InitialHealthForGroup__33:;
    /* data: db $08 */;
  InitialHealthForGroup__34:;
    /* data: db $08 */;
    EntityDamagesForGroup(); return;
}

void EntityDamagesForGroup(void) {
  EntityDamagesForGroup__00:;
    /* data: db $04 */;
  EntityDamagesForGroup__01:;
    /* data: db $04 */;
  EntityDamagesForGroup__02:;
    /* data: db $08 */;
  EntityDamagesForGroup__03:;
    /* data: db $08 */;
  EntityDamagesForGroup__04:;
    /* data: db $18 */;
  EntityDamagesForGroup__05:;
    /* data: db $08 */;
  EntityDamagesForGroup__06:;
    /* data: db $04 */;
  EntityDamagesForGroup__07:;
    /* data: db $08 */;
  EntityDamagesForGroup__08:;
    /* data: db $10 */;
  EntityDamagesForGroup__09:;
    /* data: db $08 */;
  EntityDamagesForGroup__0A:;
    /* data: db $10 */;
  EntityDamagesForGroup__0B:;
    /* data: db $08 */;
  EntityDamagesForGroup__0C:;
    /* data: db $08 */;
  EntityDamagesForGroup__0D:;
    /* data: db $04 */;
  EntityDamagesForGroup__0E:;
    /* data: db $08 */;
  EntityDamagesForGroup__0F:;
    /* data: db $08 */;
  EntityDamagesForGroup__10:;
    /* data: db $08 */;
  EntityDamagesForGroup__11:;
    /* data: db $08 */;
  EntityDamagesForGroup__12:;
    /* data: db $08 */;
  EntityDamagesForGroup__13:;
    /* data: db $08 */;
  EntityDamagesForGroup__14:;
    /* data: db $08 */;
  EntityDamagesForGroup__15:;
    /* data: db $0C */;
  EntityDamagesForGroup__16:;
    /* data: db $00 */;
  EntityDamagesForGroup__17:;
    /* data: db $00 */;
  EntityDamagesForGroup__18:;
    /* data: db $08 */;
  EntityDamagesForGroup__19:;
    /* data: db $08 */;
  EntityDamagesForGroup__1A:;
    /* data: db $08 */;
  EntityDamagesForGroup__1B:;
    /* data: db $0C */;
  EntityDamagesForGroup__1C:;
    /* data: db $0C */;
  EntityDamagesForGroup__1D:;
    /* data: db $14 */;
  EntityDamagesForGroup__1E:;
    /* data: db $10 */;
  EntityDamagesForGroup__1F:;
    /* data: db $20 */;
  EntityDamagesForGroup__20:;
    /* data: db $08 */;
  EntityDamagesForGroup__21:;
    /* data: db $08 */;
  EntityDamagesForGroup__22:;
    /* data: db $04 */;
  EntityDamagesForGroup__23:;
    /* data: db $04 */;
  EntityDamagesForGroup__24:;
    /* data: db $04 */;
  EntityDamagesForGroup__25:;
    /* data: db $04 */;
  EntityDamagesForGroup__26:;
    /* data: db $04 */;
  EntityDamagesForGroup__27:;
    /* data: db $00 */;
  EntityDamagesForGroup__28:;
    /* data: db $14 */;
  EntityDamagesForGroup__29:;
    /* data: db $08 */;
  EntityDamagesForGroup__2A:;
    /* data: db $04 */;
  EntityDamagesForGroup__2B:;
    /* data: db $08 */;
  EntityDamagesForGroup__2C:;
    /* data: db $04 */;
  EntityDamagesForGroup__2D:;
    /* data: db $04 */;
  EntityDamagesForGroup__2E:;
    /* data: db $08 */;
  EntityDamagesForGroup__2F:;
    /* data: db $08 */;
  EntityDamagesForGroup__30:;
    /* data: db $04 */;
  EntityDamagesForGroup__31:;
    /* data: db $04 */;
  EntityDamagesForGroup__32:;
    /* data: db $04 */;
  EntityDamagesForGroup__33:;
    /* data: db $08 */;
  EntityDamagesForGroup__34:;
    /* data: db $08 */;
    DestroyedEntityHealthGroupOffsetTable(); return;
}

void DestroyedEntityHealthGroupOffsetTable(void) {
    /* data: db $02, $06, $01, $03, $03, $03, $0D, $08, $0A, $02, $07, $0B, $00, $04, $00, $08 */;
    /* data: db $04, $0E, $0E, $0E, $0E, $0E, $00, $03, $03, $03, $03, $03, $03, $03, $03, $03 */;
    /* data: db $03, $02, $00, $00, $02, $00, $00, $00, $00, $06, $06, $0D, $0E, $00, $09, $03 */;
    /* data: db $06, $00, $02, $0E, $0E */;
}

void ConfigureNewEntity(void) {
    ResetEntity_trampoline();
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.hl = 0xC3E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
  ConfigureNewEntity_attributes:;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4006;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    ConfigureEntityHealth();
    gb.regs.hl = 0x4009;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    ConfigureEntityHitbox(); return;
}

void ConfigureEntityHealth(void) {
    gb_push16(gb.regs.de);
    gb.regs.hl = 0x4009;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC4D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x43DC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.de = gb_pop16();
    return;
}

void MasterStalfosDefeated(void) {
    gb.regs.a = 1;
    gb_write(0xC18F, gb.regs.a);
    UnloadEntityAndReturn(); return;
}

void EntityInitHandler(void) {
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto EntityInitHandler_callEntityInitHandler;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, ROOM_STATUS_EVENT_2_ROOM_STATUS_EVENT_1);
    if (GET_FLAG_Z()) goto EntityInitHandler_roomStatusEnd;
    UnloadEntityAndReturn(); return;
  EntityInitHandler_roomStatusEnd:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x5F);
    if (!GET_FLAG_Z()) goto EntityInitHandler_masterStalfosEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x95);
    if (GET_FLAG_Z()) goto EntityInitHandler_masterStalfosEnd;
    alu_cp8(gb.regs.a, 0x92);
    if (GET_FLAG_Z()) goto EntityInitHandler_masterStalfosEnd;
    alu_cp8(gb.regs.a, 0x84);
    if (GET_FLAG_Z()) goto EntityInitHandler_jr_003_48E2;
    gb.regs.a = gb_read(0xDA39);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) { MasterStalfosDefeated(); return; };
  EntityInitHandler_jr_003_48E2:;
    gb.regs.a = gb_read(0xDA47);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) { MasterStalfosDefeated(); return; };
    gb.regs.a = gb_read(0xDA4A);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) { MasterStalfosDefeated(); return; };
  EntityInitHandler_masterStalfosEnd:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto EntityInitHandler_indoorEnd;
    gb.regs.a = gb_read(0xD478);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto EntityInitHandler_jr_003_490B;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto EntityInitHandler_indoorEnd;
    gb_write(0xC1CF, gb.regs.a);
  EntityInitHandler_indoorEnd:;
    label_27F2();
  EntityInitHandler_jr_003_490B:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1BD, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC1BE, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xC165, gb.regs.a);
  EntityInitHandler_callEntityInitHandler:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
    gb.regs.a = 0;
    GetEntityInitHandler_trampoline();
    /* jp hl - dynamic dispatch */;
    Data_003_4924(); return;
}

void Data_003_4924(void) {
    /* data: db $01, $04 */;
}

void EntityInitHorsePiece(void) {
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4924;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void EntityInitMarinAtTalTalHeights(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void EntityInitSnake(void) {
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x30);
    return;
}

void EntityInitSideViewPlatformVertical(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x65);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_C()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void EntityInitZol(void) {
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    return;
}

void EntityInitMarinAtTheShore(void) {
    gb.regs.hl = 0xDC1C;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    return;
}

void EntityInitBomber(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    GetRandomByte();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    EntityInitBushCrawler(); return;
}

void EntityInitBushCrawler(void) {
    return;
}

void EntityInitTarinBeekeeper(void) {
    EntityShiftPosition();
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void EntityInitTelephone(void) {
    gb.regs.a = 0x33;
    SetMusicTrackIfHasSword(); return;
}

void EntityInitRichard(void) {
    gb.regs.a = gb_read(0xDBC1);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto EntityInitRichard_jr_003_4993;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x58);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
  EntityInitRichard_jr_003_4993:;
    gb.regs.a = 0x40;
    SetMusicTrackIfHasSword(); return;
}

void SetMusicTrackIfHasSword(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDBFA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb.regs.e;
    SetMusicTrack(); return;
}

void SetMusicTrack(void) {
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFB0, gb.regs.a);
    gb_write(0xFFBD, gb.regs.a);
    gb_write(0xFFBF, gb.regs.a);
    return;
}

void EntityInitFinalNightmare(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD499, gb.regs.a);
    label_27F2(); return;
}

void EntityInitDreamShrineBed(void) {
    gb.regs.a = 0x24;
    SetMusicTrack(); return;
}

void EntityInitFishermanUnderBridge(void) {
    gb.regs.a = 0x3A;
    SetMusicTrack(); return;
}

void EntityInitKikiTheMonkey(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC168, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void EntityInitFireballShooter(void) {
    GetRandomByte();
    SetEntitySpriteVariant(); return;
}

void EntityInitAntiKirby(void) {
    GetEntitySlowTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void EntityInitMovingBlockMover(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void EntityInitDesertLanmola(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFB0, gb.regs.a);
    return;
}

void EntityInitFloatingItem2(void) {
    SetZPosForFloatingItem();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    SetEntitySpriteVariant(); return;
}

void EntityInitFloatingItem(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { SetZPosForFloatingItem(); return; };
    gb.regs.a = gb_read(0xDBF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
}

void SetZPosForFloatingItem(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x13);
    return;
}

void EntityInitKid71(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    EntityInitKid72(); return;
}

void EntityInitKid72(void) {
    return;
}

void EntityInitMrWrite(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xD9);
    gb.regs.a = 0x32;
    if (!GET_FLAG_Z()) goto EntityInitMrWrite_jr_4A32;
    gb.regs.a = 0x37;
  EntityInitMrWrite_jr_4A32:;
    jr_003_4A4F(); return;
}

void EntityInitBigFairy(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto EntityInitBigFairy_indoorEnd;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { jr_003_4A4D(); return; };
  EntityInitBigFairy_indoorEnd:;
    gb.regs.a = gb_read(0xC5A9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
}

void jr_003_4A4D(void) {
    gb.regs.a = 0x0C;
    jr_003_4A4F(); return;
}

void jr_003_4A4F(void) {
    SetMusicTrackIfHasSword();
    gb.regs.de = 0xC220;
    gb.regs.hl = 0xC200;
    EntityShiftPosition_shiftBy8(); return;
}

void EntityInitBowWow(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xE2);
    if (!GET_FLAG_Z()) goto EntityInitBowWow_jr_4A6B;
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto EntityInitBowWow_return;
    UnloadEntityAndReturn(); return;
  EntityInitBowWow_jr_4A6B:;
    gb.regs.a = gb_read(0xDBFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
  EntityInitBowWow_return:;
    return;
}

void EntityInitOwlEvent(void) {
    gb.regs.a = gb_read(0xFFF8);
    alu_rra();
    UnloadEntityIfRoomStatusSet(); return;
}

void EntityInitSword(void) {
    gb.regs.a = gb_read(0xFFF8);
    UnloadEntityIfRoomStatusSet(); return;
}

void UnloadEntityIfRoomStatusSet(void) {
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    return;
}

void EntityInitMarin(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xC0);
    if (GET_FLAG_C()) goto EntityInitMarin_checkMarinDebug;
    gb.regs.a = gb_read(0xDC1C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC3C8, gb.regs.a);
    gb.regs.a = 0x2F;
    gb_write(0xFFB1, gb.regs.a);
    gb_write(0xFFB0, gb.regs.a);
    gb_write(0xFFBD, gb.regs.a);
    ResetMusicFadeTimer();
  EntityInitMarin_checkMarinDebug:;
    gb.regs.a = gb_read(3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { EntityInitNpcFacingDown(); return; };
    gb.regs.a = gb_read(0xDBFB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { EntityInitNpcFacingDown(); return; };
    gb.regs.a = gb_read(0xDBFC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto EntityInitMarin_enableTextDebugger;
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDC3D, gb.regs.a);
    return;
  EntityInitMarin_enableTextDebugger:;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x6B);
    return;
}

void Data_003_4AC6(void) {
    /* data: db $FF, $7F, $BE, $0F, $13, $02, $00, $00 */;
}

void EntityInitTarin(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { EntityInitNpcFacingDown(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { EntityInitNpcFacingDown(); return; };
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { EntityInitNpcFacingDown(); return; };
    gb.regs.a = gb_read(0xDC0F);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { EntityInitNpcFacingDown(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) { EntityInitNpcFacingDown(); return; };
    gb.regs.a = gb_read(0xDBF4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { EntityInitNpcFacingDown(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { EntityInitNpcFacingDown(); return; };
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.hl = 0xDD30;
    gb.regs.de = 0x4AC6;
  EntityInitTarin_loop_4B01:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto EntityInitTarin_loop_4B01;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    EntityInitNpcFacingDown(); return;
}

void EntityInitMadamMeowMeow(void) {
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto EntityInitMadamMeowMeow_return;
    gb.regs.a = 0x0E;
    gb_write(0xD368, gb.regs.a);
  EntityInitMadamMeowMeow_return:;
    return;
}

void EntityInitRaftRaftOwner(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { EntityInitNpcFacingDown(); return; };
    gb.regs.a = gb_read(0xD477);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void EntityInitNpcFacingDown(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    EntityInitStoreOwner(); return;
}

void EntityInitStoreOwner(void) {
    gb.regs.a = gb_read(0xDBF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto EntityInitStoreOwner_noShieldEnd;
    gb.regs.a = 0x1C;
    SetMusicTrack();
  EntityInitStoreOwner_noShieldEnd:;
    EntityInitShopOwner_setDirectionLeft(); return;
}

void EntityInitWitch(void) {
    return;
}

void EntityInitShopOwner(void) {
    gb.regs.a = 7;
    SetMusicTrackIfHasSword();
  EntityInitShopOwner_setDirectionLeft:;
    gb.regs.a = 1;
    SetEntityDirection(); return;
}

void EntityInitWithRandomDirection(void) {
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    SetEntityDirection(); return;
}

void SetEntityDirection(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    EntityInitNoop(); return;
}

void EntityInitNoop(void) {
    NoopFunction();
    NoopFunction(); return;
}

void NoopFunction(void) {
    return;
}

void EntityInitSouthFaceShrineDoor(void) {
    gb.regs.a = 3;
    gb_write(0xFFFF, gb.regs.a);
    return;
}

void EntityInitLeever(void) {
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant(); return;
}

void EntityInitZora(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { EntityInitNoop(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xDA);
    if (!GET_FLAG_Z()) { EntityInitNoop(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = gb_read(0xDCB5);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { EntityInitNoop(); return; };
    gb.regs.a = 3;
    SetEntitySpriteVariant(); return;
}

void EntityInitWithRightDirection(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntityDirection(); return;
}

void GetColorDungeonRoomStatus(void) {
    gb.regs.hl = 0xDE88;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    return;
}

void EntityInitRotoswitchRed(void) {
    GetColorDungeonRoomStatus();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { jr_003_4BAD(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void EntityInitRotoswitchYellow(void) {
    GetColorDungeonRoomStatus();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { jr_003_4BAD(); return; };
    gb.regs.a = 4;
    SetEntitySpriteVariant(); return;
}

void EntityInitRotoswitchBlue(void) {
    GetColorDungeonRoomStatus();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_003_4BB3(); return; };
}

void jr_003_4BAD(void) {
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x80);
    jr_003_4BB3(); return;
}

void jr_003_4BB3(void) {
    gb.regs.a = 8;
    SetEntitySpriteVariant(); return;
}

void EntityInitHopper(void) {
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    EntityInitFlyingHopperBombs_setPosZ(); return;
}

void EntityInitFlyingHopperBombs(void) {
    gb.regs.a = 4;
  EntityInitFlyingHopperBombs_setPosZ:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    SetEntitySpriteVariant(); return;
}

void EntityInitHardHitBeetle(void) {
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    EntityInitNoop(); return;
}

void EntityInitAvalaunch(void) {
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    EntityInitNoop(); return;
}

void EntityInitColorGuardianBlue(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { EntityInitNoop(); return; };
    GetColorDungeonRoomStatus();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { EntityInitNoop(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 0x3C;
    jr_003_4C15(); return;
}

void EntityInitColorGuardianRed(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { EntityInitNoop(); return; };
    GetColorDungeonRoomStatus();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { EntityInitNoop(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 0x63;
    jr_003_4C15(); return;
}

void jr_003_4C15(void) {
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    EntityInitNoop(); return;
}

void EntityInitColorDungeonBook(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    EntityInitGiantBuzzBlob(); return;
}

void EntityInitGiantBuzzBlob(void) {
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    EntityInitNoop(); return;
}

void EntityInitEntity25(void) {
    EntityInitEntity26();
    EntityInitEntity26(); return;
}

void EntityInitEntity26(void) {
    Entity25Handler();
    Entity25Handler(); return;
}

void Entity25Handler(void) {
    Entity26Handler();
    Entity26Handler(); return;
}

void Entity26Handler(void) {
    FireSpriteVariants();
    FireSpriteVariants(); return;
}

void FireSpriteVariants(void) {
  FireSpriteVariants_variant0:;
    /* data: db $34, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $34, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  FireSpriteVariants_variant1:;
    /* data: db $34, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $34, OAM_GBC_PAL_4 | OAMF_PAL1 | OAMF_XFLIP */;
    EntityBurningHandler(); return;
}

void EntityBurningHandler(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto EntityBurningHandler_burningEnd;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x47F9;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    ExecuteActiveEntityHandler_trampoline();
    ReturnIfNonInteractive_03_allowInactiveEntity();
    ApplyRecoilIfNeeded_03();
    BouncingEntityPhysics();
    ClearEntitySpeed(); return;
    ClearEntitySpeed();
    return;
  EntityBurningHandler_burningEnd:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto EntityBurningHandler_gibdoEnd;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x1E);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
    ConfigureNewEntity_attributes(); return;
  EntityBurningHandler_gibdoEnd:;
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x1F);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x13);
    return;
}

void Data_003_4CA4(void) {
    /* data: db $00, $00, $04, $00 */;
}

void Data_003_4CA8(void) {
    /* data: db $00, $01, $03, $06 */;
}

void Data_003_4CAC(void) {
    /* data: db $24, $01, $24, $01, $3E, $01 */;
}

void Unknown020SpriteVariants(void) {
  Unknown020SpriteVariants_variant0:;
    /* data: db $1E, $01 */;
    /* data: db $1E, $61 */;
    EntityFallHandler(); return;
}

void EntityFallHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto EntityFallHandler_colorShellEnd;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xE9);
    if (GET_FLAG_Z()) goto EntityFallHandler_animateColorShell;
    alu_cp8(gb.regs.a, 0xEA);
    if (GET_FLAG_Z()) goto EntityFallHandler_animateColorShell;
    alu_cp8(gb.regs.a, 0xEB);
    if (!GET_FLAG_Z()) goto EntityFallHandler_colorShellEnd;
  EntityFallHandler_animateColorShell:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 5;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 6;
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  EntityFallHandler_colorShellEnd:;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_003_4D07(); return; };
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto EntityFallHandler_jr_4CEF;
    gb.regs.hl = 0xD460;
    gb_write(gb.regs.hl, 1);
  EntityFallHandler_jr_4CEF:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xA8);
    if (!GET_FLAG_Z()) goto EntityFallHandler_jr_4D04;
    gb.regs.a = 0x16;
    gb_write(0xDC17, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xDC18, gb.regs.a);
    gb.regs.a = 0x27;
    gb_write(0xDC19, gb.regs.a);
  EntityFallHandler_jr_4D04:;
    UnloadEntityAndReturn(); return;
}

void jr_003_4D07(void) {
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) { jr_003_4D29(); return; };
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto jr_003_4D07_jr_4D19;
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto jr_003_4D07_jr_4D19;
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_Z()) { jr_003_4D22(); return; };
  jr_003_4D07_jr_4D19:;
    SetEntityVariantForDirection_03();
    SetEntityVariantForDirection_03();
    SetEntityVariantForDirection_03();
    jr_003_4D22(); return;
}

void jr_003_4D22(void) {
    ExecuteActiveEntityHandler_trampoline();
    ReturnIfNonInteractive_03_allowInactiveEntity();
    return;
}

void jr_003_4D29(void) {
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4CA4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_003_4D29_jr_4D51;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x486A;
    RenderActiveEntitySpritesPair();
    jr_003_4D57(); return;
  jr_003_4D29_jr_4D51:;
    gb.regs.de = 0x4CAC;
    RenderActiveEntitySprite();
    jr_003_4D57(); return;
}

void jr_003_4D57(void) {
    ReturnIfNonInteractive_03_allowInactiveEntity();
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto jr_003_4D57_jr_4D66;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x18);
  jr_003_4D57_jr_4D66:;
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4CA8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC4B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC4C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = gb.regs.e;
    ApplyVectorTowardsLink();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_03(); return;
}

void EntityThrownHandler(void) {
    ExecuteActiveEntityHandler_trampoline();
    ReturnIfNonInteractive_03_allowInactiveEntity();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    BouncingEntityPhysics();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    BombEntityHandler_BounceOffWalls();
    EntityCheckThrowAtTriggers();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x5C);
    if (!GET_FLAG_Z()) goto EntityThrownHandler_genieEnd;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto EntityThrownHandler_genieEnd;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 7);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto EntityThrownHandler_genie2;
  EntityThrownHandler_genieEnd:;
    gb.regs.a = 0x0B;
    gb_write(0xC19E, gb.regs.a);
    func_003_75A2();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto EntityThrownHandler_return;
    EntityBecomeStunned();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x5C);
    if (!GET_FLAG_Z()) goto EntityThrownHandler_return;
  EntityThrownHandler_genie2:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  EntityThrownHandler_return:;
    return;
}

void Data_003_4E05(void) {
    /* data: db $10, $F0 */;
}

void EntityStunnedHandler(void) {
    ExecuteActiveEntityHandler_trampoline();
    ReturnIfNonInteractive_03_allowInactiveEntity();
    ApplyRecoilIfNeeded_03();
    BouncingEntityPhysics();
    ClearEntitySpeed();
    func_003_6E2B();
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto EntityStunnedHandler_noBraceletB;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { EntityGetLiftedUp(); return; };
    jr_003_4E72(); return;
  EntityStunnedHandler_noBraceletB:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_003_4E72(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_003_4E72(); return; };
}

void EntityGetLiftedUp(void) {
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_4E72(); return; };
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_or8(gb.regs.a, 0x80);
    gb_write(gb.regs.hl, gb.regs.a);
    CheckLinkCollisionWithEnemy();
    gb.regs.e = alu_rl(gb.regs.e);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = alu_rr(gb.regs.e);
    if (!GET_FLAG_C()) { jr_003_4E72(); return; };
    gb.regs.a = 1;
    gb_write(0xC3CF, gb.regs.a);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 7);
    gb.regs.a = 2;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.hl = 0xC490;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 2);
    gb.regs.a = gb_read(0xFF9E);
    gb_write(0xC15D, gb.regs.a);
    EntityLiftedHandler(); return;
}

void jr_003_4E72(void) {
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_003_4E72_jr_4E85;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  jr_003_4E72_jr_4E85:;
    alu_cp8(gb.regs.a, 0x38);
    if (!GET_FLAG_C()) return;
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4E05;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    AddEntitySpeedToPos_03();
    ClearEntitySpeed(); return;
}

void EntityRandomSpeedX(void) {
    /* data: db 12, 12, -12, -12 */;
}

void EntityRandomSpeedY(void) {
    /* data: db 12, -12, 12, -12 */;
}

void EntityInitWithRandomSpeed(void) {
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4A5B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4A5F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void EntityInitSparkClockwise(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    gb.regs.a = 3;
    jr_003_4ED0(); return;
}

void EntityInitSparkCounterClockwise(void) {
    gb.regs.a = 0xFD;
    jr_003_4ED0(); return;
}

void jr_003_4ED0(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void EntityInitWizrobe(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    return;
}

void EntityInitMoblinSword(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb.regs.a = 0;
    if (!GET_FLAG_Z()) goto EntityInitMoblinSword_jr_4EEC;
    gb.regs.a = 3;
  EntityInitMoblinSword_jr_4EEC:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.hl);
    SetEntityVariantForDirection_03();
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void EntityInitSecretSeashell(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xA4);
    if (GET_FLAG_Z()) goto EntityInitSecretSeashell_treeSeashell;
    alu_cp8(gb.regs.a, 0xD2);
    if (!GET_FLAG_Z()) goto EntityInitSecretSeashell_treeSeashellEnd;
  EntityInitSecretSeashell_treeSeashell:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    EntityInitWithShiftedPosition();
  EntityInitSecretSeashell_treeSeashellEnd:;
    SetHiddenDroppableOptions1(); return;
}

void func_003_4F12(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { SetHiddenDroppableOptions1(); return; };
}

void EntityInitDiggableBushOrPotDroppable(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    SetHiddenDroppableOptions1(); return;
}

void SetHiddenDroppableOptions1(void) {
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, ENTITY_OPT1_NO_GROUND_INTERACTION_ENTITY_OPT1_NO_WALL_COLLISION);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void EntityInitKeyDropPoint(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xF8);
    if (!GET_FLAG_Z()) goto EntityInitKeyDropPoint_jr_4F44;
    gb.regs.a = gb_read(0xFFF8);
    alu_bit(4, gb.regs.a);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    alu_bit(5, gb.regs.a);
    if (GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
  EntityInitKeyDropPoint_jr_4F44:;
    alu_cp8(gb.regs.a, 0x7A);
    if (!GET_FLAG_Z()) goto EntityInitKeyDropPoint_jr_4F54;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = 4;
    SetEntitySpriteVariant(); return;
  EntityInitKeyDropPoint_jr_4F54:;
    alu_cp8(gb.regs.a, 0x7C);
    if (!GET_FLAG_Z()) goto EntityInitKeyDropPoint_ret_4F67;
    gb.regs.a = gb_read(0xDA1E);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
  EntityInitKeyDropPoint_ret_4F67:;
    return;
}

void EntityInitTradingItem(void) {
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) { EntityInitWithShiftedPosition(); return; };
    return;
}

void EntityInitWarp(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    IncrementEntityState();
    EntityInitWithShiftedPosition(); return;
}

void EntityInitTreeOrPotDroppable(void) {
    func_003_4F12();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { SetDroppableDefaultTimer(); return; };
}

void EntityInitWithShiftedPosition(void) {
    EntityShiftPosition();
    EntityShiftPosition(); return;
}

void EntityShiftPosition(void) {
    gb.regs.de = 0xC220;
    gb.regs.hl = 0xC200;
    _shiftBy8();
    gb.regs.de = 0xC230;
    gb.regs.hl = 0xC210;
  EntityShiftPosition_shiftBy8:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_rla();
    gb.regs.l = gb.regs.e;
    gb.regs.h = gb.regs.d;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_rra();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void EntityInitWithShiftedXPosition(void) {
    gb.regs.de = 0xC220;
    gb.regs.hl = 0xC200;
    EntityShiftPosition_shiftBy8(); return;
}

void SetDroppableDefaultTimer(void) {
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    return;
}

void EntityInitWithCountdown(void) {
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0xA0);
    return;
}

void EntityInitGhini(void) {
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x12);
    if (!GET_FLAG_Z()) goto EntityInitGhini_hiding;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    return;
  EntityInitGhini_hiding:;
    IncrementEntityState(); return;
}

void MaskedIronMaskSpriteVariants(void) {
  MaskedIronMaskSpriteVariants_variant0:;
    /* data: db $60, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  MaskedIronMaskSpriteVariants_variant1:;
    /* data: db $62, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $60, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  MaskedIronMaskSpriteVariants_variant2:;
    /* data: db $64, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  MaskedIronMaskSpriteVariants_variant3:;
    /* data: db $66, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  MaskedIronMaskSpriteVariants_variant4:;
    /* data: db $68, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  MaskedIronMaskSpriteVariants_variant5:;
    /* data: db $6C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  MaskedIronMaskSpriteVariants_variant6:;
    /* data: db $6A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  MaskedIronMaskSpriteVariants_variant7:;
    /* data: db $6E, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    UnmaskedIronMaskSpriteVariants(); return;
}

void UnmaskedIronMaskSpriteVariants(void) {
  UnmaskedIronMaskSpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  UnmaskedIronMaskSpriteVariants_variant1:;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    IronMaskSpeedXValues(); return;
}

void IronMaskSpeedXValues(void) {
    /* data: db $0C, $F4, $00, $00 */;
}

void IronMaskSpeedYValues(void) {
    /* data: db $00, $00, $F4, $0C */;
}

void IronMaskEntityHandler(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto IronMaskEntityHandler_masked;
    gb.regs.de = 0x4BB4;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_03();
    ApplyRecoilIfNeeded_03();
    DefaultEnemyDamageCollisionHandler();
    UpdateEntityPosWithSpeed_03();
    ApplyEntityInteractionWithBackground();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto IronMaskEntityHandler_changeDirectionEnd;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4BBC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4BC0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  IronMaskEntityHandler_changeDirectionEnd:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
  IronMaskEntityHandler_masked:;
    gb.regs.de = 0x4B94;
    AnimateRoamingEnemy();
    return;
}

void OpenChestTilesGBC(void) {
    /* data: db $62, $70, $63, $71 */;
}

void OpenChestTiles(void) {
    /* data: db $62, $70, $62, $70 */;
}

void ChestToInventoryMappingTable(void) {
    /* data: db INVENTORY_POWER_BRACELET */;
    /* data: db INVENTORY_SHIELD */;
    /* data: db INVENTORY_BOW */;
    /* data: db INVENTORY_HOOKSHOT */;
    /* data: db INVENTORY_MAGIC_ROD */;
    /* data: db INVENTORY_PEGASUS_BOOTS */;
    /* data: db INVENTORY_OCARINA */;
    /* data: db INVENTORY_ROCS_FEATHER */;
    /* data: db INVENTORY_SHOVEL */;
    /* data: db INVENTORY_MAGIC_POWDER */;
    /* data: db INVENTORY_BOMBS */;
    /* data: db INVENTORY_SWORD */;
}

void ChestRupeeCountHigh(void) {
    /* data: db HIGH( 50), HIGH( 20), HIGH(100), HIGH(200), HIGH(500) */;
}

void ChestRupeeCountLow(void) {
    /* data: db LOW(  50), LOW(  20), LOW( 100), LOW( 200), LOW( 500) */;
}

void EntityInitChestWithItem(void) {
    gb.regs.a = 0x2A;
    gb_write(0xC111, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.de = 0x4C1F;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto EntityInitChestWithItem_jr_5081;
    gb.regs.de = 0x4C23;
  EntityInitChestWithItem_jr_5081:;
    gb.regs.b = 0xA1;
    func_003_51C9();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFC);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.d = gb.regs.b;
    alu_cp8(gb.regs.a, 0x11);
    if (!GET_FLAG_Z()) goto EntityInitChestWithItem_jr_50AC;
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xC501);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x38);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  EntityInitChestWithItem_jr_50AC:;
    gb.regs.e = gb.regs.a;
    alu_cp8(gb.regs.a, 0x21);
    if (!GET_FLAG_C()) { MarkRoomCompleted(); return; };
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { label_003_636D(); return; };
    if (!GET_FLAG_Z()) goto EntityInitChestWithItem_jr_50B9;
    label_003_636D(); return;
  EntityInitChestWithItem_jr_50B9:;
    alu_cp8(gb.regs.a, 0x1B);
    if (GET_FLAG_C()) goto EntityInitChestWithItem_jr_50D8;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto EntityInitChestWithItem_jr_50D8;
    gb.regs.hl = 0x4C1D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC38, gb.regs.a);
    gb.regs.hl = 0x4C18;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC37, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xC3CE, gb.regs.a);
    MarkRoomCompleted(); return;
  EntityInitChestWithItem_jr_50D8:;
    alu_cp8(gb.regs.a, 0x16);
    if (GET_FLAG_C()) goto EntityInitChestWithItem_jr_50EF;
    alu_cp8(gb.regs.a, 0x1B);
    if (!GET_FLAG_C()) goto EntityInitChestWithItem_jr_50EF;
    gb.regs.a = alu_sub8(gb.regs.a, 0x16);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xDC74;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    SynchronizeDungeonsItemFlags_trampoline();
    MarkRoomCompleted(); return;
  EntityInitChestWithItem_jr_50EF:;
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) { ChestGiveNoneInventoryItem(); return; };
    gb.regs.a = gb_read(0xFFE8);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto EntityInitChestWithItem_shieldEnd;
    gb.regs.hl = 0xDBF0;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  EntityInitChestWithItem_shieldEnd:;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto EntityInitChestWithItem_powerBraceletEnd;
    gb.regs.a = gb_read(0xDBEF);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto EntityInitChestWithItem_powerBraceletEnd;
    gb.regs.hl = 0xDBEF;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  EntityInitChestWithItem_powerBraceletEnd:;
    gb.regs.a = gb_read(0xFFE8);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto EntityInitChestWithItem_bombsEnd;
    gb.regs.hl = 0xDBF9;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    alu_daa();
    gb_write(gb.regs.hl, gb.regs.a);
  EntityInitChestWithItem_bombsEnd:;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4C27;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.d = gb_read(gb.regs.hl);
    GiveInventoryItem();
    MarkRoomCompleted(); return;
}

void ChestGiveNoneInventoryItem(void) {
    gb.regs.hl = wInventoryItems_BButtonSlot;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    MarkRoomCompleted(); return;
}

void MarkRoomCompleted(void) {
    GetRoomStatusAddressInHL();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    return;
}

void GetRoomStatusAddressInHL(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto GetRoomStatusAddressInHL_colorDungeonEnd;
    gb.regs.d = 0;
    gb.regs.hl = 0xDE88;
    goto GetRoomStatusAddressInHL_done;
  GetRoomStatusAddressInHL_colorDungeonEnd:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto GetRoomStatusAddressInHL_done;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto GetRoomStatusAddressInHL_done;
    gb.regs.d = alu_inc8(gb.regs.d);
  GetRoomStatusAddressInHL_done:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    return;
}

void Data_003_5156(void) {
    /* data: db $6A, $7A, $6B, $7B */;
}

void Data_003_515A(void) {
    /* data: db $10, $12, $11, $13 */;
}

void Data_003_515E(void) {
    /* data: db $F8, $F9, $FA, $FB */;
}

void Data_003_5162(void) {
    /* data: db $0E, $1E, $0F, $1F */;
}

void Data_003_5166(void) {
    /* data: db $68, $77, $69, $4B */;
}

void Data_003_516A(void) {
    /* data: db $76, $76, $76, $76 */;
}

void EntityInitPushedBlock(void) {
    GetEntityDirectionToLink_03();
    gb.regs.d = 0;
    gb.regs.hl = 0x523D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5241;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    PushedBlockEntityHandler();
    ApplyEntityInteractionWithBackground();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto EntityInitPushedBlock_jr_5198;
    UnloadEntityAndReturn(); return;
  EntityInitPushedBlock_jr_5198:;
    gb.regs.a = 0x11;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.de = 0x5166;
    gb.regs.b = 0xC6;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x77);
    if (!GET_FLAG_Z()) goto EntityInitPushedBlock_jr_51B3;
    gb.regs.a = gb_read(0xDE81);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto EntityInitPushedBlock_jr_51B3;
    gb.regs.de = 0x516A;
    gb.regs.b = 3;
  EntityInitPushedBlock_jr_51B3:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { func_003_51C9(); return; };
    gb.regs.de = 0x515A;
    gb.regs.b = 0x0D;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xC7);
    if (!GET_FLAG_Z()) { func_003_51C9(); return; };
    gb.regs.de = 0x5156;
    gb.regs.b = 0xBE;
    func_003_51C9(); return;
}

void func_003_51C9(void) {
    gb_push16(gb.regs.de);
    gb.regs.a = gb.regs.b;
    gb_push16(gb.regs.af);
    gb.regs.b = 0;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0F);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 7);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 3;
    BackupObjectInRAM2();
    label_003_51F5(); return;
}

void label_003_51F5(void) {
    label_2887();
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_003_51F5_ret_5234;
    gb_push16(gb.regs.bc);
    gb.regs.a = 3;
    func_91D();
    gb.regs.bc = gb_pop16();
  label_003_51F5_ret_5234:;
    return;
}

void Unknown011SpriteVariants(void) {
  Unknown011SpriteVariants_variant0:;
    /* data: db $6E, OAM_GBC_PAL_7 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
  Unknown011SpriteVariants_variant1:;
    /* data: db $F8, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $FA, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    Data_003_523D(); return;
}

void Data_003_523D(void) {
    /* data: db $F8, $08, $00, $00 */;
}

void Data_003_5241(void) {
    /* data: db $00, $00, $08, $F8 */;
}

void Unknown010SpriteVariants(void) {
  Unknown010SpriteVariants_variant0:;
    /* data: db $7E, OAM_GBC_PAL_7 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    PushedBlockEntityHandler(); return;
}

void PushedBlockEntityHandler(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x4E0D;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto PushedBlockEntityHandler_render;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x77);
    if (!GET_FLAG_Z()) goto PushedBlockEntityHandler_render;
    gb.regs.de = 0x4E1D;
  PushedBlockEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_03();
    UpdateEntityPosWithSpeed_03();
    func_003_52D4();
    CheckLinkCollisionWithEnemy_collisionEvenInTheAir();
    if (!GET_FLAG_C()) goto PushedBlockEntityHandler_jr_5276;
    CopyLinkFinalPositionToPosition();
    gb.regs.a = 3;
    gb_write(0xC144, gb.regs.a);
  PushedBlockEntityHandler_jr_5276:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xC7);
    if (GET_FLAG_Z()) goto PushedBlockEntityHandler_jr_5282;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_5286(); return; };
  PushedBlockEntityHandler_jr_5282:;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    jr_003_5286(); return;
}

void jr_003_5286(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x21);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    ApplyEntityInteractionWithBackground();
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) return;
    UnloadEntity();
    gb.regs.de = 0x5162;
    gb.regs.b = 0xC4;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_003_5286_jr_52B5;
    gb.regs.de = 0x515E;
    gb.regs.b = 0xA6;
  jr_003_5286_jr_52B5:;
    func_003_51C9();
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto jr_003_5286_jr_52D1;
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) return;
    ApplyEntityInteractionWithBackground();
    gb.regs.a = gb_read(0xC503);
    alu_cp8(gb.regs.a, 0xA7);
    if (GET_FLAG_Z()) goto jr_003_5286_jr_52D1;
    alu_cp8(gb.regs.a, 0xA6);
    if (!GET_FLAG_Z()) return;
  jr_003_5286_jr_52D1:;
    MarkTriggerAsResolved(); return;
}

void func_003_52D4(void) {
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
    label_003_52D7(); return;
}

void label_003_52D7(void) {
    loop_start: ;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) goto label_003_52D7_jr_531E;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto label_003_52D7_jr_531E;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto label_003_52D7_jr_531E;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto label_003_52D7_jr_531E;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto label_003_52D7_jr_531E;
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb_push16(gb.regs.de);
    gb.regs.a = 8;
    ConfigureEntityRecoil();
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
  label_003_52D7_jr_531E:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { goto loop_start; };
    return;
}

void Entity4BHandler(void) {
    gb.regs.d = 3;
    LiftableRockEntityHandler(); return;
}

void LiftableRockEntityHandler(void) {
    gb.regs.a = gb.regs.c;
    gb_write(0xC50C, gb.regs.a);
    GetEntityPrivateCountdown1();
    gb_write(0xFFD7, gb.regs.a);
    if (GET_FLAG_Z()) { LiftableRockIntactHandler(); return; };
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_003_5395(); return; };
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LiftableRockEntityHandler_spawnFairyEnd;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto LiftableRockEntityHandler_spawnFairyEnd;
    gb.regs.a = 0x2F;
    SpawnNewEntity();
    if (GET_FLAG_C()) goto LiftableRockEntityHandler_spawnFairyEnd;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x80);
  LiftableRockEntityHandler_spawnFairyEnd:;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LiftableRockEntityHandler_marinReactionEnd;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1E);
    if (GET_FLAG_Z()) goto LiftableRockEntityHandler_insideHouse;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto LiftableRockEntityHandler_marinReactionEnd;
  LiftableRockEntityHandler_insideHouse:;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LiftableRockEntityHandler_marinReactionEnd;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto LiftableRockEntityHandler_marinReaction2;
    /* call_open_dialog Dialog028 */;
    UnloadEntityAndReturn(); return;
  LiftableRockEntityHandler_marinReaction2:;
    /* call_open_dialog Dialog199 */;
  LiftableRockEntityHandler_marinReactionEnd:;
    UnloadEntityAndReturn(); return;
}

void jr_003_5395(void) {
    label_3935(); return;
}

void LiftableRockOutdoorSpriteVariants(void) {
  LiftableRockOutdoorSpriteVariants_variant0:;
    /* data: db $F0, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $F2, OAM_GBC_PAL_7 | OAMF_PAL1 */;
  LiftableRockOutdoorSpriteVariants_variant1:;
    /* data: db $F4, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $F6, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    LiftableRockIndoorSpriteVariants(); return;
}

void LiftableRockIndoorSpriteVariants(void) {
  LiftableRockIndoorSpriteVariants_variant0:;
    /* data: db $F0, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $F2, OAM_GBC_PAL_6 | OAMF_PAL1 */;
  LiftableRockIndoorSpriteVariants_variant1:;
    /* data: db $F4, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $F6, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    LiftableRockIntactHandler(); return;
}

void LiftableRockIntactHandler(void) {
    gb.regs.de = 0x4F70;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LiftableRockIntactHandler_render;
    gb.regs.de = 0x4F78;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LiftableRockIntactHandler_isNotIndoor;
    gb.regs.de = 0x4F78;
    goto LiftableRockIntactHandler_render;
  LiftableRockIntactHandler_isNotIndoor:;
    gb.regs.de = 0x4F70;
  LiftableRockIntactHandler_render:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_03();
    gb.regs.a = 0x0B;
    gb_write(0xC19E, gb.regs.a);
    func_003_75A2();
    BouncingEntityPhysics();
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { ret_003_5406(); return; };
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { LiftableRockStartSmashingAnimation(); return; };
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_003_5406(); return; };
    EntityCheckThrowAtTriggers();
    LiftableRockStartSmashingAnimation(); return;
}

void LiftableRockStartSmashingAnimation(void) {
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 5);
    gb.regs.e = 0x1F;
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto LiftableRockStartSmashingAnimation_grassSound;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto LiftableRockStartSmashingAnimation_grassSound;
    gb_write(gb.regs.hl, 9);
    gb.regs.e = 0x0F;
  LiftableRockStartSmashingAnimation_grassSound:;
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
    ret_003_5406(); return;
}

void ret_003_5406(void) {
    return;
}

void SmashRock(void) {
    gb.regs.a = 5;
    SpawnNewEntity();
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xFFDA;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0F);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC4);
    gb.regs.a = 9;
    gb_write(0xFFF4, gb.regs.a);
    UnloadEntityAndReturn(); return;
}

void EntityCheckThrowAtTriggers(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) { jr_003_5467(); return; };
    gb.regs.a = gb_read(0xC503);
    alu_cp8(gb.regs.a, 0xA0);
    if (GET_FLAG_Z()) goto EntityCheckThrowAtTriggers_jr_5455;
    gb.regs.a = gb_read(0xC50D);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) return;
  EntityCheckThrowAtTriggers_jr_5455:;
    gb.regs.a = 0x30;
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = 0x19;
    gb_write(0xFFDF, gb.regs.a);
    SpawnChestWithItemAndRestoreBank3();
    MarkTriggerAsResolved(); return;
}

void jr_003_5467(void) {
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC50D);
    alu_cp8(gb.regs.a, 0x35);
    if (GET_FLAG_C()) return;
    alu_cp8(gb.regs.a, 0x3D);
    if (GET_FLAG_C()) goto jr_003_5467_jr_547D;
    gb.regs.a = gb_read(0xC503);
    alu_cp8(gb.regs.a, 0x35);
    if (GET_FLAG_C()) return;
    alu_cp8(gb.regs.a, 0x3D);
    if (!GET_FLAG_C()) return;
  jr_003_5467_jr_547D:;
    MarkTriggerAsResolved(); return;
}

void Data_003_5480(void) {
    /* data: db $32, $01, $32, $61 */;
}

void BombRightBeforeExplodingSprite(void) {
  BombRightBeforeExplodingSprite_variant0:;
    /* data: db $30, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $30, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    Data_003_5488(); return;
}

void Data_003_5488(void) {
    /* data: db $00, $00, $3C, $01, $00, $08, $3C, $21, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $00, $00, $3A, $01, $00, $08, $3A, $21, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $FA, $FA, $3A, $01, $FA, $02, $3A, $21, $06, $06, $3A, $01, $06, $0E, $3A, $21 */;
    /* data: db $04, $FC, $30, $01, $04, $04, $30, $21, $FC, $04, $30, $01, $FC, $0C, $30, $21 */;
}

void Data_003_54C8(void) {
    /* data: db $00, $00, $3A, $01, $00, $08, $3A, $21, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $F8, $F8, $3A, $01, $F8, $00, $3A, $21, $08, $08, $3A, $01, $08, $10, $3A, $21 */;
    /* data: db $08, $F8, $3A, $01, $08, $00, $3A, $21, $F8, $08, $3A, $01, $F8, $10, $3A, $21 */;
    /* data: db $F8, $F8, $10, $02, $F8, $00, $12, $02, $F8, $08, $12, $22, $F8, $10, $10, $22 */;
    /* data: db $08, $F8, $10, $42, $08, $00, $12, $42, $08, $08, $12, $62, $08, $10, $10, $62 */;
}

void EntityDeathHandler(void) {
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { ExecuteActiveEntityHandler(); return; };
    if (GET_FLAG_Z()) goto EntityDeathHandler_dying;
    ExecuteActiveEntityHandler(); return;
  EntityDeathHandler_dying:;
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { DidKillEnemy(); return; };
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC4A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x5488;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto EntityDeathHandler_jr_003_553C;
    gb.regs.hl = 0x54C8;
  EntityDeathHandler_jr_003_553C:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { jr_003_556F(); return; };
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) goto EntityDeathHandler_jr_003_5555;
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC4A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto EntityDeathHandler_powerRecoil;
  EntityDeathHandler_jr_003_5555:;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    goto EntityDeathHandler_renderEnd;
  EntityDeathHandler_powerRecoil:;
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
    goto EntityDeathHandler_renderEnd;
  EntityDeathHandler_renderEnd:;
    ReturnIfNonInteractive_03();
    ApplyRecoilIfNeeded_03();
    return;
}

void jr_003_556F(void) {
    ExecuteActiveEntityHandler_trampoline();
    ReturnIfNonInteractive_03_allowInactiveEntity();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_5599(); return; };
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x1F);
    gb.regs.a = gb_read(0xDCB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_003_556F_jr_5594;
    gb.regs.a = gb_read(0xD47C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_003_556F_jr_5594;
    gb.regs.a = 0x12;
    gb_write(0xFFF3, gb.regs.a);
  jr_003_556F_jr_5594:;
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x13);
    jr_003_5599(); return;
}

void jr_003_5599(void) {
    ApplyRecoilIfNeeded_03();
    return;
}

void DropTableByIndex(void) {
    /* data: db ENTITY_DROPPABLE_RUPEE */;
    /* data: db ENTITY_DROPPABLE_RUPEE */;
    /* data: db ENTITY_DROPPABLE_HEART */;
    /* data: db ENTITY_DROPPABLE_HEART */;
    /* data: db ENTITY_DROPPABLE_ARROWS */;
    /* data: db ENTITY_DROPPABLE_HEART */;
    /* data: db ENTITY_NONE */;
    /* data: db ENTITY_NONE */;
    /* data: db ENTITY_DROPPABLE_FAIRY */;
    /* data: db ENTITY_DROPPABLE_ARROWS */;
    /* data: db ENTITY_DROPPABLE_BOMBS */;
    /* data: db ENTITY_DROPPABLE_RUPEE */;
    /* data: db ENTITY_DROPPABLE_FAIRY */;
    /* data: db ENTITY_DROPPABLE_FAIRY */;
}

void RandomDropChanceTable(void) {
    /* data: db DROP_CHANCE_25_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_0_PERCENT */;
    /* data: db DROP_CHANCE_25_PERCENT */;
    /* data: db DROP_CHANCE_25_PERCENT */;
    /* data: db DROP_CHANCE_25_PERCENT */;
    /* data: db DROP_CHANCE_25_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_0_PERCENT */;
    /* data: db DROP_CHANCE_0_PERCENT */;
    /* data: db DROP_CHANCE_0_PERCENT */;
    /* data: db DROP_CHANCE_25_PERCENT */;
    /* data: db DROP_CHANCE_0_PERCENT */;
}

void RandomDropChanceTableLowHealth(void) {
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_0_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_0_PERCENT */;
    /* data: db DROP_CHANCE_0_PERCENT */;
    /* data: db DROP_CHANCE_0_PERCENT */;
    /* data: db DROP_CHANCE_50_PERCENT */;
    /* data: db DROP_CHANCE_0_PERCENT */;
}

void DropTableRandom(void) {
    /* data: db ENTITY_DROPPABLE_RUPEE */;
    /* data: db ENTITY_DROPPABLE_HEART */;
    /* data: db ENTITY_DROPPABLE_BOMBS */;
    /* data: db ENTITY_DROPPABLE_FAIRY */;
    /* data: db ENTITY_DROPPABLE_RUPEE */;
    /* data: db ENTITY_DROPPABLE_HEART */;
    /* data: db ENTITY_DROPPABLE_BOMBS */;
    /* data: db ENTITY_DROPPABLE_ARROWS */;
}

void SpawnEnemyDrop(void) {
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x23);
    if (!GET_FLAG_Z()) goto SpawnEnemyDrop_likeLikeEnd;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SpawnEnemyDrop_likeLikeEnd;
    gb.regs.a = 0x31;
    goto SpawnEnemyDrop_dropEntity;
  SpawnEnemyDrop_likeLikeEnd:;
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SpawnEnemyDrop_dropEntity;
    gb.regs.a = gb_read(0xD471);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD471, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_C()) goto SpawnEnemyDrop_noGuardianAcornDrop;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD471, gb.regs.a);
    gb.regs.a = gb_read(0xC1BE);
    gb.regs.hl = 0xD47C;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFF9;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto SpawnEnemyDrop_noGuardianAcornDrop;
    gb.regs.a = 0x34;
    goto SpawnEnemyDrop_dropEntity;
  SpawnEnemyDrop_noGuardianAcornDrop:;
    gb.regs.hl = 0xC4D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.d = gb.regs.b;
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0x43DC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0x1E;
    gb.regs.a = gb_read(0xDC03);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_C()) goto SpawnEnemyDrop_pieceOfPowerDrop;
    gb.regs.d = 0x23;
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_C()) goto SpawnEnemyDrop_pieceOfPowerDrop;
    gb.regs.d = 0x28;
  SpawnEnemyDrop_pieceOfPowerDrop:;
    gb.regs.hl = 0xD415;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, gb.regs.d);
    if (GET_FLAG_C()) goto SpawnEnemyDrop_noPieceOfPowerDrop;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xC1BE);
    gb.regs.hl = 0xFFF9;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xD47C;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto SpawnEnemyDrop_noPieceOfPowerDrop;
    gb.regs.a = 0x33;
    goto SpawnEnemyDrop_dropEntity;
  SpawnEnemyDrop_noPieceOfPowerDrop:;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = RandomDropChanceTable__1;
    gb.regs.a = gb_read(0xC163);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SpawnEnemyDrop_dropRandomEntity;
    gb.regs.hl = RandomDropChanceTableLowHealth__1;
  SpawnEnemyDrop_dropRandomEntity:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0x5195;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto SpawnEnemyDrop_dropEntity;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x51C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
  SpawnEnemyDrop_dropEntity:;
    SpawnNewEntity();
    if (GET_FLAG_C()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SpawnEnemyDrop_isSideScrolling;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) goto SpawnEnemyDrop_noSpriteUpdate;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_Z()) goto SpawnEnemyDrop_noSpriteUpdate;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
  SpawnEnemyDrop_noSpriteUpdate:;
    alu_cp8(gb.regs.a, 0x3C);
    if (!GET_FLAG_Z()) goto SpawnEnemyDrop_slimeKeyEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x58);
    if (GET_FLAG_Z()) goto SpawnEnemyDrop_moveKeyTowardsLink;
    alu_cp8(gb.regs.a, 0x5A);
    if (!GET_FLAG_Z()) goto SpawnEnemyDrop_slimeKeyEnd;
  SpawnEnemyDrop_moveKeyTowardsLink:;
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.de);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink();
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
  SpawnEnemyDrop_slimeKeyEnd:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    goto SpawnEnemyDrop_applyDefaultPosZ;
  SpawnEnemyDrop_isSideScrolling:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xEC);
  SpawnEnemyDrop_applyDefaultPosZ:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void Data_003_56EA(void) {
    /* data: db $01, $08, $08, $10 */;
}

void Data_003_56EE(void) {
    /* data: db $01, $04, $04 */;
}

void Data_003_56F1(void) {
  Data_003_56F1_right:;
    /* data: db $0A, $37, $37, $37 */;
  Data_003_56F1_left:;
    /* data: db $01, $39, $39, $39 */;
  Data_003_56F1_up:;
    /* data: db $01, $3B, $3B, $3B */;
  Data_003_56F1_down:;
    /* data: db $01, $3D, $3D, $3D */;
    Data_003_5701(); return;
}

void Data_003_5701(void) {
  Data_003_5701_right:;
    /* data: db $01, $10, $10, $08 */;
  Data_003_5701_left:;
    /* data: db $00, $F0, $F0, $F8 */;
  Data_003_5701_up:;
    /* data: db $00, $00, $00, $00 */;
  Data_003_5701_down:;
    /* data: db $00, $FF, $FF, $FF */;
    Data_003_5711(); return;
}

void Data_003_5711(void) {
  Data_003_5711_right:;
    /* data: db $FF, $00, $00, $00 */;
  Data_003_5711_left:;
    /* data: db $00, $00, $00, $00 */;
  Data_003_5711_up:;
    /* data: db $00, $00, $00, $00 */;
  Data_003_5711_down:;
    /* data: db $00, $00, $00, $08 */;
    Data_003_5721(); return;
}

void Data_003_5721(void) {
    /* data: db $00, $00, $00, $08 */;
    /* data: db $0E, $00, $00, $08 */;
    /* data: db $0E, $00, $00, $08 */;
    /* data: db $0E, $00, $00, $00 */;
    /* data: db $0E */;
}

void EntityLiftedHandler(void) {
    gb.regs.a = gb_read(0xFFEB);
    gb_write(0xC5A8, gb.regs.a);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto EntityLiftedHandler_jr_5745;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    RenderBomb();
    jr_003_5748(); return;
  EntityLiftedHandler_jr_5745:;
    ExecuteActiveEntityHandler_trampoline();
    jr_003_5748(); return;
}

void jr_003_5748(void) {
    gb.regs.hl = 0xC490;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_003_5789(); return; };
    gb.regs.a = gb_read(0xC15D);
    gb_write(0xFF9E, gb.regs.a);
    gb_push16(gb.regs.hl);
    GetEntityTransitionCountdown();
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_5789(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0x56EA;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto jr_003_5748_jr_577F;
    gb.regs.a = gb_read(0xDBEF);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto jr_003_5748_jr_577F;
    gb.regs.a = gb_read(0xDCB7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_003_5748_jr_577F;
    gb.regs.a = gb_read(0xD47C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_003_5782(); return; };
  jr_003_5748_jr_577F:;
    gb.regs.hl = 0x56EE;
    jr_003_5782(); return;
}

void jr_003_5782(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_003_5789(); return;
}

void jr_003_5789(void) {
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto jr_003_5789_jr_578F;
    gb.regs.e = alu_inc8(gb.regs.e);
  jr_003_5789_jr_578F:;
    func_003_5795();
    label_003_57E6(); return;
}

void func_003_5795(void) {
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x56F1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC15C, gb.regs.a);
    gb.regs.hl = 0x5701;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5711;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC13B;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_003_5795_jr_57D7;
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x5721;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  func_003_5795_jr_57D7:;
    gb.regs.hl = 0x5721;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFA2;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void label_003_57E6(void) {
    label_397B(); return;
}

void OctorokEntityHandler(void) {
    gb.regs.de = 0x53DB;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto OctorokEntityHandler_creditsEnd;
    gb.regs.a = 0x30;
    gb_write(0xFFF5, gb.regs.a);
  OctorokEntityHandler_creditsEnd:;
    AnimateRoamingEnemy();
    return;
}

void OctorokSpriteVariants(void) {
  OctorokSpriteVariants_variant0:;
    /* data: db $30, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $30, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  OctorokSpriteVariants_variant1:;
    /* data: db $32, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $32, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  OctorokSpriteVariants_variant2:;
    /* data: db $30, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $30, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  OctorokSpriteVariants_variant3:;
    /* data: db $32, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $32, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  OctorokSpriteVariants_variant4:;
    /* data: db $34, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $36, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  OctorokSpriteVariants_variant5:;
    /* data: db $38, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $3A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  OctorokSpriteVariants_variant6:;
    /* data: db $36, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $34, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  OctorokSpriteVariants_variant7:;
    /* data: db $3A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $38, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    RoamingEnemySpeedXPerDirection(); return;
}

void RoamingEnemySpeedXPerDirection(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void RoamingEnemySpeedYPerDirection(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void EntityVariantForDirection_03(void) {
  EntityVariantForDirection_03_right:;
    /* data: db 6 */;
  EntityVariantForDirection_03_left:;
    /* data: db 4 */;
  EntityVariantForDirection_03_up:;
    /* data: db 2 */;
  EntityVariantForDirection_03_down:;
    /* data: db 0 */;
    MoblinEntityHandler(); return;
}

void MoblinEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x15);
    if (!GET_FLAG_Z()) goto MoblinEntityHandler_hideoutEnd;
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
  MoblinEntityHandler_hideoutEnd:;
    gb.regs.a = gb.regs.c;
    gb_write(0xD353, gb.regs.a);
    gb.regs.de = 0x5502;
    AnimateRoamingEnemy(); return;
}

void AnimateRoamingEnemy(void) {
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_03();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AnimateRoamingEnemy_recoilEnd;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 1;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF0, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
  AnimateRoamingEnemy_recoilEnd:;
    ApplyRecoilIfNeeded_03();
    DefaultEnemyDamageCollisionHandler();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { RoamingEnemyState0Handler(); return; };
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_003_5896(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto AnimateRoamingEnemy_projectileEnd;
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto AnimateRoamingEnemy_projectileEnd;
    GetEntityDirectionToLink_03();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto AnimateRoamingEnemy_projectileEnd;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_Z()) goto AnimateRoamingEnemy_projectileEnd;
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { jr_003_588D(); return; };
    SpawnMoblinArrow();
  AnimateRoamingEnemy_projectileEnd:;
    ApplyEntityInteractionWithBackground();
    return;
}

void jr_003_588D(void) {
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    SpawnOctorokRock(); return;
}

void jr_003_5896(void) {
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto jr_003_5896_jr_58B6;
    GetEntityDirectionToLink_03();
    jr_003_58B9(); return;
  jr_003_5896_jr_58B6:;
    GetRandomByte();
    jr_003_58B9(); return;
}

void jr_003_58B9(void) {
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x53FB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x53FF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void RoamingEnemyState0Handler(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto RoamingEnemyState0Handler_collided;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { StopWalkingEnd(); return; };
  RoamingEnemyState0Handler_collided:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    ClearEntitySpeed();
    StopWalkingEnd(); return;
}

void StopWalkingEnd(void) {
    UpdateEntityPosWithSpeed_03();
    ApplyEntityInteractionWithBackground();
    SetEntityVariantForDirection_03(); return;
}

void SetEntityVariantForDirection_03(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5403;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    SetEntitySpriteVariant(); return;
}

void MoblinSpriteVariants(void) {
  MoblinSpriteVariants_variant0:;
    /* data: db $60, OAM_GBC_PAL_3 */;
    /* data: db $62, OAM_GBC_PAL_3 */;
  MoblinSpriteVariants_variant1:;
    /* data: db $62, OAM_GBC_PAL_3 | OAMF_XFLIP */;
    /* data: db $60, OAM_GBC_PAL_3 | OAMF_XFLIP */;
  MoblinSpriteVariants_variant2:;
    /* data: db $64, OAM_GBC_PAL_3 */;
    /* data: db $66, OAM_GBC_PAL_3 */;
  MoblinSpriteVariants_variant3:;
    /* data: db $66, OAM_GBC_PAL_3 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_3 | OAMF_XFLIP */;
  MoblinSpriteVariants_variant4:;
    /* data: db $68, OAM_GBC_PAL_3 */;
    /* data: db $6A, OAM_GBC_PAL_3 */;
  MoblinSpriteVariants_variant5:;
    /* data: db $6C, OAM_GBC_PAL_3 */;
    /* data: db $6E, OAM_GBC_PAL_3 */;
  MoblinSpriteVariants_variant6:;
    /* data: db $6A, OAM_GBC_PAL_3 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_3 | OAMF_XFLIP */;
  MoblinSpriteVariants_variant7:;
    /* data: db $6E, OAM_GBC_PAL_3 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_3 | OAMF_XFLIP */;
    MoblinArrowOffsetXPerDirection(); return;
}

void MoblinArrowOffsetXPerDirection(void) {
    /* data: db $08, $F8, $04, $FC */;
}

void MoblinArrowOffsetYPerDirection(void) {
    /* data: db $FC, $FC, $F8, $00 */;
}

void MoblinArrowSpeedXPerDirection(void) {
    /* data: db $20, $E0, $00, $00 */;
}

void MoblinArrowSpeedYPerDirection(void) {
    /* data: db $00, $00, $E0, $20 */;
}

void SpawnMoblinArrow(void) {
    gb.regs.a = 0x0C;
    SpawnNewEntity();
    if (GET_FLAG_C()) { ret_003_598B(); return; };
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x5522;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5526;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x552A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x552E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    ret_003_598B(); return;
}

void ret_003_598B(void) {
    return;
}

void OctorokRockOffsetXPerDirection(void) {
    /* data: db $08, $F8 */;
}

void OctorokRockOffsetYPerDirection(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void OctorokRockSpeedXPerDirection(void) {
    /* data: db $20, $E0 */;
}

void OctorokRockSpeedYPerDirection(void) {
    /* data: db $00, $00, $E0, $20 */;
}

void SpawnOctorokRock(void) {
    gb.regs.a = 0x0A;
    SpawnNewEntity();
    if (GET_FLAG_C()) goto SpawnOctorokRock_return;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x557C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x557E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5582;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5584;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
  SpawnOctorokRock_return:;
    return;
}

void EntityInitEntity13(void) {
    return;
}

void Entity13Handler(void) {
    HeartContainerSpriteVariants();
    HeartContainerSpriteVariants(); return;
}

void HeartContainerSpriteVariants(void) {
  HeartContainerSpriteVariants_variant0:;
    /* data: db $AA, $14 */;
    /* data: db $AA, $34 */;
    HeartContainerEntityHandler(); return;
}

void HeartContainerEntityHandler(void) {
    gb.regs.de = 0x55D0;
    RenderActiveEntitySpritesPair();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { PickableHandler(); return; };
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) { HoldEntityAboveLink(); return; };
    gb.regs.a = 0x18;
    gb_write(0xD368, gb.regs.a);
    gb.regs.hl = 0xDC03;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xDC3B;
    gb_write(gb.regs.hl, 0xFF);
    GetRoomStatusAddressInHL();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.hl = 0xDAE3;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto HeartContainerEntityHandler_inEaglesTower;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto HeartContainerEntityHandler_skipSecondRoomFlags;
    gb.regs.hl = 0xDA1B;
  HeartContainerEntityHandler_inEaglesTower:;
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
  HeartContainerEntityHandler_skipSecondRoomFlags:;
    UnloadEntityAndReturn(); return;
}

void HoldEntityAboveLink(void) {
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    func_003_5A2E(); return;
}

void func_003_5A2E(void) {
    gb.regs.a = 0x6C;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC16A, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    gb_write(0xC121, gb.regs.a);
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    return;
}

void HeartPieceEntitySprite(void) {
    /* data: db $AC, OAM_GBC_PAL_2 */;
    /* data: db $AC, OAM_GBC_PAL_2 | OAMF_XFLIP */;
}

void HeartPieceEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: HeartPieceState0Handler(); return;
        case 0x01: HeartPieceState1Handler(); return;
        case 0x02: HeartPieceState2Handler(); return;
        case 0x03: HeartPieceState3Handler(); return;
        case 0x04: HeartPieceState4Handler(); return;
        case 0x05: HeartPieceState5Handler(); return;
        case 0x06: HeartPieceState6Handler(); return;
        case 0x07: HeartPieceState7Handler(); return;
        case 0x08: HeartPieceState8Handler(); return;
    }
}

void HeartPieceState1Handler(void) {
    HoldEntityAboveLink();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    IncrementEntityState(); return;
}

void HeartPieceState2Handler(void) {
    gb.regs.a = 3;
    gb_write(0xFF90, gb.regs.a);
    IncrementEntityState(); return;
}

void HeartPieceState3Handler(void) {
    gb.regs.a = 4;
    gb_write(0xFF90, gb.regs.a);
    IncrementEntityState(); return;
}

void HeartPieceState4Handler(void) {
    /* call_open_dialog Dialog04F */;
    IncrementEntityState();
    gb.regs.a = 1;
    gb_write(0xC1AB, gb.regs.a);
    return;
}

void HeartPieceState5Handler(void) {
    HoldEntityAboveLink();
    gb.regs.de = 0x5639;
    RenderActiveEntitySpritesPair();
    DrawHeartPiecesInDialog();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) { IncrementEntityState(); return; };
    alu_cp8(gb.regs.a, 0x38);
    if (!GET_FLAG_Z()) goto HeartPieceState5Handler_ret_5ABA;
    gb.regs.a = gb_read(0xDC04);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xDC04, gb.regs.a);
  HeartPieceState5Handler_ret_5ABA:;
    return;
}

void HeartPieceState6Handler(void) {
    HoldEntityAboveLink();
    gb.regs.de = 0x5639;
    RenderActiveEntitySpritesPair();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1AB, gb.regs.a);
    DrawHeartPiecesInDialog();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC04);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto HeartPieceState6Handler_jr_5AED;
    gb.regs.a = 0x19;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC04, gb.regs.a);
    gb.regs.hl = 0xDC3B;
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xDC03;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog050 */;
  HeartPieceState6Handler_jr_5AED:;
    IncrementEntityState(); return;
}

void HeartPieceState7Handler(void) {
    HoldEntityAboveLink();
    gb.regs.de = 0x5639;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 5;
    gb_write(0xFF90, gb.regs.a);
    IncrementEntityState(); return;
}

void HeartPieceState8Handler(void) {
    gb.regs.a = 6;
    gb_write(0xFF90, gb.regs.a);
    UnloadEntity();
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    MarkRoomCompleted(); return;
}

void HeartPieceSpriteVariants(void) {
  HeartPieceSpriteVariants_variant0:;
    /* data: db $9A, OAM_GBC_PAL_2 */;
    /* data: db $9A, OAM_GBC_PAL_2 | OAMF_XFLIP */;
  HeartPieceSpriteVariants_variant1:;
    /* data: db $9C, OAM_GBC_PAL_2 */;
    /* data: db $9A, OAM_GBC_PAL_2 | OAMF_XFLIP */;
  HeartPieceSpriteVariants_variant2:;
    /* data: db $9E, OAM_GBC_PAL_2 */;
    /* data: db $9A, OAM_GBC_PAL_2 | OAMF_XFLIP */;
  HeartPieceSpriteVariants_variant3:;
    /* data: db $9E, OAM_GBC_PAL_2 */;
    /* data: db $9C, OAM_GBC_PAL_2 | OAMF_XFLIP */;
  HeartPieceSpriteVariants_variant4:;
    /* data: db $9E, OAM_GBC_PAL_2 */;
    /* data: db $9E, OAM_GBC_PAL_2 | OAMF_XFLIP */;
    DrawHeartPiecesInDialog(); return;
}

void DrawHeartPiecesInDialog(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC170);
    alu_cp8(gb.regs.a, 0x21);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb.regs.a = 0x23;
    if (GET_FLAG_Z()) goto DrawHeartPiecesInDialog_positionSprite;
    gb.regs.a = 0x6B;
  DrawHeartPiecesInDialog_positionSprite:;
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xDC04);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = 0x8E;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.de = 0x56DD;
    RenderActiveEntitySpritesPair(); return;
}

void HeartPieceState0Handler(void) {
    gb.regs.de = 0x5639;
    RenderActiveEntitySpritesPair();
    PickableHandler(); return;
}

void Data_003_5B5B(void) {
    /* data: db $AE, $14 */;
}

void GuardianAcornEntityHandler(void) {
    gb.regs.de = 0x5B5B;
    RenderActiveEntitySprite();
    jr_003_5B7D(); return;
}

void PieceOfPowerSpriteVariants(void) {
  PieceOfPowerSpriteVariants_variant0:;
    /* data: db $14, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $14, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  PieceOfPowerSpriteVariants_variant1:;
    /* data: db $14, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $14, OAM_GBC_PAL_4 | OAMF_PAL1 | OAMF_XFLIP */;
    PieceOfPowerEntityHandler(); return;
}

void PieceOfPowerEntityHandler(void) {
    gb.regs.de = 0x5725;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    jr_003_5B7D(); return;
}

void jr_003_5B7D(void) {
    PickableHandler(); return;
}

void IronMasksMaskSpriteVariants(void) {
  IronMasksMaskSpriteVariants_variant0:;
    /* data: db $74, $00 */;
    /* data: db $76, $00 */;
  IronMasksMaskSpriteVariants_variant1:;
    /* data: db $76, $20 */;
    /* data: db $74, $20 */;
    IronMasksMaskEntityHandler(); return;
}

void IronMasksMaskEntityHandler(void) {
    gb.regs.de = 0x573F;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_03();
    PickableHandleGrabbedByItemIfNeeded();
    return;
}

void Data_003_5B95(void) {
    /* data: db $86, $17 */;
}

void Data_003_5B97(void) {
    /* data: db $84, $17 */;
}

void SwordShieldPickableEntityHandler(void) {
    gb.regs.de = 0x5B95;
    gb.regs.a = gb_read(0xDBFA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SwordShieldPickableEntityHandler_jr_5BAC;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.de = 0x5B97;
  SwordShieldPickableEntityHandler_jr_5BAC:;
    RenderActiveEntitySprite();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: SwordShieldPickableState0Handler(); return;
        case 0x01: SwordShieldPickableState1Handler(); return;
        case 0x02: SwordShieldPickableState2Handler(); return;
        case 0x03: SwordShieldPickableState3Handler(); return;
    }
}

void SwordShieldPickableState0Handler(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { PickableHandler(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto SwordShieldPickableState0Handler_playSwordFanfare;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog09B */;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  SwordShieldPickableState0Handler_playSwordFanfare:;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto SwordShieldPickableState0Handler_holdItemAboveLink;
    gb.regs.a = 0x31;
    gb_write(0xD368, gb.regs.a);
    gb.regs.a = 5;
    gb_write(0xFFB0, gb.regs.a);
    gb_write(0xFFBF, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x52);
    IncrementEntityState();
  SwordShieldPickableState0Handler_holdItemAboveLink:;
    HoldEntityAboveLink(); return;
}

void SwordShieldPickableState1Handler(void) {
    HoldEntityAboveLink();
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 0x20;
    gb_write(0xC121, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFF4, gb.regs.a);
    IncrementEntityState(); return;
}

void SwordShieldPickableState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 0;
    SetEntitySpriteVariant();
    IncrementEntityState(); return;
}

void SwordShieldPickableState3Handler(void) {
    HoldEntityAboveLink();
    gb.regs.a = 0x6B;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SwordShieldPickableState3Handler_continueToRaiseSword;
    gb_write(0xC167, gb.regs.a);
    gb.regs.d = 1;
    GiveInventoryItem();
    gb.regs.a = 1;
    gb_write(0xDBFA, gb.regs.a);
    MarkRoomCompleted();
    UnloadEntityAndReturn(); return;
  SwordShieldPickableState3Handler_continueToRaiseSword:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_Z()) goto SwordShieldPickableState3Handler_return;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    CheckLinkCollisionWithProjectile_showSwordPokeVfx();
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
  SwordShieldPickableState3Handler_return:;
    return;
}

void HookshotSpriteData(void) {
    /* data: db $8A, $14 */;
}

void label_003_5C49(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.de = 0x57EF;
    RenderActiveEntitySprite();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { PickableHandler(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto label_003_5C49_skipUpdateSpeedY;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog093 */;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  label_003_5C49_skipUpdateSpeedY:;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) { HoldEntityAboveLink(); return; };
    if (!GET_FLAG_Z()) goto label_003_5C49_decSpeedX;
    gb.regs.d = 6;
    GiveInventoryItem();
    MarkRoomCompleted();
    UnloadEntityAndReturn(); return;
  label_003_5C49_decSpeedX:;
    HoldEntityAboveLink(); return;
}

void KeyDropSpriteTable(void) {
    /* data: db $CA, $17 */;
    /* data: db $C0, $17 */;
    /* data: db $C2, $14 */;
    /* data: db $C4, $17 */;
    /* data: db $C6, $14 */;
    /* data: db $CA, $17 */;
}

void KeyCollectDialogs(void) {
  KeyCollectDialogs__0:;
    /* db_dialog_low Dialog000 */;
  KeyCollectDialogs__1:;
    /* db_dialog_low Dialog0A3 */;
  KeyCollectDialogs__2:;
    /* db_dialog_low Dialog0A4 */;
  KeyCollectDialogs__3:;
    /* db_dialog_low Dialog0A5 */;
  KeyCollectDialogs__4:;
    /* db_dialog_low Dialog000 */;
    KeyDropPointEntityHandler(); return;
}

void KeyDropPointEntityHandler(void) {
    CheckForEntityFallingDownQuicksandHole();
    if (!GET_FLAG_C()) goto KeyDropPointEntityHandler_jr_5C99;
    gb.regs.hl = 0xD983;
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xDAAD;
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
    return;
  KeyDropPointEntityHandler_jr_5C99:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { label_003_5C49(); return; };
    gb.regs.de = 0x5826;
    RenderActiveEntitySprite();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { label_003_5CD6(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto KeyDropPointEntityHandler_jr_5CCD;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5832;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    OpenDialogInTable0();
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xDBBD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    MarkRoomCompleted();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  KeyDropPointEntityHandler_jr_5CCD:;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) { HoldEntityAboveLink(); return; };
    UnloadEntityAndReturn(); return;
    if (!GET_FLAG_Z()) goto KeyDropPointEntityHandler_jr_5CD3;
    UnloadEntityAndReturn(); return;
  KeyDropPointEntityHandler_jr_5CD3:;
    HoldEntityAboveLink(); return;
}

void label_003_5CD6(void) {
    ReturnIfNonInteractive_03();
    PickableHandleGrabbedByItemIfNeeded();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_003_5CD6_jr_5CE7;
    PickableCollectIfNeeded();
  label_003_5CD6_jr_5CE7:;
    BouncingEntityPhysics(); return;
}

void CheckForEntityFallingDownQuicksandHole(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckForEntityFallingDownQuicksandHole_jr_5D34;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xCE);
    if (!GET_FLAG_Z()) goto CheckForEntityFallingDownQuicksandHole_jr_5D34;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 0x48);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto CheckForEntityFallingDownQuicksandHole_jr_5D34;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto CheckForEntityFallingDownQuicksandHole_jr_5D34;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckForEntityFallingDownQuicksandHole_jr_5D34;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto CheckForEntityFallingDownQuicksandHole_jr_5D34;
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC4B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC4C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x48);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x2F);
    gb.regs.a = 0x18;
    gb_write(0xFFF2, gb.regs.a);
    alu_scf();
    return;
  CheckForEntityFallingDownQuicksandHole_jr_5D34:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void DroppableHeartSprite(void) {
    /* data: db $A8, OAM_GBC_PAL_4 | OAMF_PAL1 */;
}

void DroppableHeartEntityHandler(void) {
    DroppableRevealOrReturnIfNeeded();
    DroppableDisappearIfNeeded();
    gb.regs.de = 0x58E9;
    RenderActiveEntitySprite();
    PickableHandler(); return;
}

void SleepyToadstoolSprite(void) {
    /* data: db $5E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void SleepyToadstoolEntityHandler(void) {
    gb.regs.hl = 0xDBF7;
    gb.regs.a = gb_read(0xDBF8);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.de = 0x58FA;
    RenderActiveEntitySpritesPair();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { PickableHandler(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto SleepyToadstoolEntityHandler_jr_5D6C;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog00F */;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  SleepyToadstoolEntityHandler_jr_5D6C:;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) { HoldEntityAboveLink(); return; };
    if (!GET_FLAG_Z()) goto SleepyToadstoolEntityHandler_jr_5D80;
    gb.regs.a = 0x0A;
    gb_write(0xFFA5, gb.regs.a);
    gb.regs.d = 0x0C;
    GiveInventoryItem();
    gb.regs.a = 1;
    gb_write(0xDBF7, gb.regs.a);
    UnloadEntityAndReturn(); return;
  SleepyToadstoolEntityHandler_jr_5D80:;
    HoldEntityAboveLink(); return;
}

void SirensInstrument2SpriteVariants(void) {
  SirensInstrument2SpriteVariants_variant0:;
    /* data: db $70, $01 */;
    /* data: db $72, $01 */;
  SirensInstrument2SpriteVariants_variant1:;
    /* data: db $74, $01 */;
    /* data: db $76, $01 */;
  SirensInstrument2SpriteVariants_variant2:;
    /* data: db $78, $01 */;
    /* data: db $7A, $01 */;
  SirensInstrument2SpriteVariants_variant3:;
    /* data: db $7C, $01 */;
    /* data: db $7E, $01 */;
    SirensInstrumentEntityHandler(); return;
}

void SirensInstrumentEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: SirensInstrumentState0Handler(); return;
        case 0x01: SirensInstrumentState1Handler(); return;
        case 0x02: SirensInstrumentState2Handler(); return;
    }
}

void Data_003_5D9F(void) {
    /* data: db $E4, $E4, $E4, $E4, $90, $90, $90, $90, $40, $40, $40, $40, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void Data_003_5DBC(void) {
    /* data: db $1C, $1C, $1C, $1C, $1C, $1C, $1C, $1C, $1C, $1C, $1C, $1C, $1C, $1C, $1C, $1C */;
    /* data: db $08, $08, $08, $08, $04, $04, $04, $04, $00, $00, $00, $00, $00 */;
}

void SirensInstrumentState2Handler(void) {
    func_006_783C_trampoline();
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) { animateSirensInstrumentPickup(); return; };
    UnloadEntity();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    disableMovementInTransition();
    gb.regs.a = gb_read(0xFFF7);
    switch(gb.regs.a) {
        case 0x00: AfterSirensInstrumentD1(); return;
        case 0x01: AfterSirensInstrumentD2(); return;
        case 0x02: AfterSirensInstrumentD3(); return;
        case 0x03: AfterSirensInstrumentD4(); return;
        case 0x04: AfterSirensInstrumentNone(); return;
        case 0x05: AfterSirensInstrumentD6(); return;
        case 0x06: AfterSirensInstrumentD7(); return;
        case 0x07: AfterSirensInstrumentNone(); return;
    }
}

void AfterSirensInstrumentD1(void) {
    gb.regs.a = 0x80;
    gb_write(0xDBFE, gb.regs.a);
    return;
}

void AfterSirensInstrumentD2(void) {
    gb.regs.a = 2;
    gb_write(0xDBF4, gb.regs.a);
    return;
}

void AfterSirensInstrumentD3(void) {
    return;
}

void AfterSirensInstrumentD4(void) {
    gb.regs.a = 2;
    gb_write(0xDC21, gb.regs.a);
    AfterSirensInstrumentNone(); return;
}

void AfterSirensInstrumentNone(void) {
    return;
}

void AfterSirensInstrumentD6(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC1C, gb.regs.a);
    return;
}

void AfterSirensInstrumentD7(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC23, gb.regs.a);
    return;
}

void animateSirensInstrumentPickup(void) {
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) { ret_003_5E8A(); return; };
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x19);
    if (!GET_FLAG_C()) { ret_003_5E8A(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_003_5E5B(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto animateSirensInstrumentPickup_jr_5E45;
    gb.regs.a = 0x2C;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  animateSirensInstrumentPickup_jr_5E45:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_Z()) { jr_003_5E5B(); return; };
    gb.regs.a = 0x9F;
    SpawnNewEntity();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    jr_003_5E5B(); return;
}

void jr_003_5E5B(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_003_5E5B_jr_5E76;
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.de);
    gb.regs.a = 3;
    func_020_6D0E_trampoline();
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
    ret_003_5E8A(); return;
  jr_003_5E5B_jr_5E76:;
    gb.regs.hl = 0x5D9F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x5DBC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    ret_003_5E8A(); return;
}

void ret_003_5E8A(void) {
    return;
}

void SirensInstrument1SpriteVariants(void) {
  SirensInstrument1SpriteVariants_variant0:;
    /* data: db $6C, $00 */;
    /* data: db $FF, $FF */;
  SirensInstrument1SpriteVariants_variant1:;
    /* data: db $6C, $00 */;
    /* data: db $6E, $00 */;
    SirensInstrumentState1Handler(); return;
}

void SirensInstrumentState1Handler(void) {
    gb.regs.de = 0x5A29;
    RenderActiveEntitySpritesPair();
    UpdateEntityPosWithSpeed_03();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    return;
}

void SirensInstrumentState0Handler(void) {
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto SirensInstrumentState0Handler_jr_5EAE;
    gb.regs.a = 3;
    cycleInstrumentItemColor_trampoline();
  SirensInstrumentState0Handler_jr_5EAE:;
    gb.regs.a = gb.regs.c;
    gb_write(0xD481, gb.regs.a);
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xFFF1, gb.regs.a);
    label_394D();
    gb.regs.de = 0x593A;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_003_5ED5(); return;
        case 0x01: func_003_5F0C(); return;
        case 0x02: func_003_5F33(); return;
        case 0x03: func_003_5FBC(); return;
        case 0x04: func_003_5FBF(); return;
    }
}

void func_003_5ED5(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { PickableHandler(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto func_003_5ED5_jr_5EFE;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    IncrementEntityState();
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    OpenDialogInTable1();
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xDC0D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRoomStatusAddressInHL();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_003_5ED5_jr_5EFE:;
    gb.regs.a = alu_dec8(gb.regs.a);
    HoldEntityAboveLink(); return;
    if (!GET_FLAG_Z()) { jr_003_5F01(); return; };
}

void jr_003_5F01(void) {
    HoldEntityAboveLink(); return;
}

void InstrumentMusicTable(void) {
    /* data: db MUSIC_INSTRUMENT_FULL_MOON_CELLO */;
    /* data: db MUSIC_INSTRUMENT_CONCH_HORN */;
    /* data: db MUSIC_INSTRUMENT_SEA_LILYS_BELL */;
    /* data: db MUSIC_INSTRUMENT_SURF_HARP */;
    /* data: db MUSIC_INSTRUMENT_WIND_MARIMBA */;
    /* data: db MUSIC_INSTRUMENT_CORAL_TRIANGLE */;
    /* data: db MUSIC_INSTRUMENT_ORGAN_OF_EVENING_CALM */;
    /* data: db MUSIC_INSTRUMENT_THUNDER_DRUM */;
}

void func_003_5F0C(void) {
    gb.regs.a = gb_read(0xD369);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_003_5F0C_jr_5F2C;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_003_5F0C_jr_5F2C;
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5AA5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD368, gb.regs.a);
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
  func_003_5F0C_jr_5F2C:;
    HoldEntityAboveLink(); return;
}

void Data_003_5F2F(void) {
    /* data: db $0A, $FA */;
}

void Data_003_5F31(void) {
    /* data: db $04, $FC */;
}

void func_003_5F33(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_003_5F33_jr_5F5F;
    gb.regs.a = 0x2B;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0x39;
    SpawnNewEntity();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState(); return;
  func_003_5F33_jr_5F5F:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto func_003_5F33_jr_5FB9;
    gb_write(gb.regs.hl, 0x17);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = 0x39;
    SpawnNewEntity();
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x5F2F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5F31;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0xF8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xFD);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x38);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
  func_003_5F33_jr_5FB9:;
    func_003_5FBC(); return;
}

void func_003_5FBC(void) {
    HoldEntityAboveLink(); return;
}

void func_003_5FBF(void) {
    return;
}

void DroppableBombsSprite(void) {
    /* data: db $80, OAM_GBC_PAL_5 | OAMF_PAL1 */;
}

void DroppableBombsEntityHandler(void) {
    DroppableRevealOrReturnIfNeeded();
    DroppableDisappearIfNeeded();
    gb.regs.de = 0x5B74;
    RenderActiveEntitySprite();
    PickableHandler(); return;
}

void DroppableSeashellSprite(void) {
    /* data: db $9E, OAM_GBC_PAL_4 | OAMF_PAL1 */;
}

void DroppableSeashellEntityHandler(void) {
    gb.regs.a = gb_read(0xDBFA);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xE3);
    if (!GET_FLAG_Z()) goto DroppableSeashellEntityHandler_jr_5FEF;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
  DroppableSeashellEntityHandler_jr_5FEF:;
    DroppableRevealOrReturnIfNeeded();
    gb.regs.de = 0x5B85;
    RenderActiveEntitySprite();
    PickableHandler(); return;
}

void HidingSlimeKeySprite(void) {
    /* data: db $CA, OAM_GBC_PAL_4 | OAMF_PAL1 */;
}

void HidingSlimeKeyEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    DroppableRevealOrReturnIfNeeded();
    gb.regs.de = 0x5BAB;
    RenderActiveEntitySprite();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { PickableHandler(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { jr_003_604C(); return; };
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto HidingSlimeKeyEntityHandler_jr_6029;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xC6);
    if (!GET_FLAG_Z()) goto HidingSlimeKeyEntityHandler_jr_6029;
    gb.regs.a = 5;
    gb_write(0xDBC1, gb.regs.a);
  HidingSlimeKeyEntityHandler_jr_6029:;
    gb.regs.hl = 0xDBC1;
    IncreaseValueAtHLClampAt99();
    MarkRoomCompleted();
    gb.regs.hl = 0xFFF8;
    gb_write(gb.regs.hl, alu_res(4, gb_read(gb.regs.hl)));
    /* ld_dialog_low e, Dialog0A2 */;
    gb.regs.a = gb_read(0xDBC1);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto HidingSlimeKeyEntityHandler_openDialog;
    /* ld_dialog_low e, Dialog0E8 */;
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto HidingSlimeKeyEntityHandler_openDialog;
    gb.regs.e = alu_inc8(gb.regs.e);
  HidingSlimeKeyEntityHandler_openDialog:;
    gb.regs.a = gb.regs.e;
    OpenDialogInTable0();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_003_604C(); return;
}

void jr_003_604C(void) {
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) { HoldEntityAboveLink(); return; };
    UnloadEntityAndReturn(); return;
    if (!GET_FLAG_Z()) goto jr_003_604C_jr_6052;
    UnloadEntityAndReturn(); return;
  jr_003_604C_jr_6052:;
    HoldEntityAboveLink(); return;
}

void DroppableMagicPowderSprite(void) {
    /* data: db $8E, OAM_GBC_PAL_6 | OAMF_PAL1 */;
}

void DroppableMagicPowderEntityHandler(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DroppableMagicPowderEntityHandler_jr_6063;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { jr_003_606A(); return; };
  DroppableMagicPowderEntityHandler_jr_6063:;
    gb.regs.a = gb_read(0xDBF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
}

void jr_003_606A(void) {
    DroppableRevealOrReturnIfNeeded();
    DroppableDisappearIfNeeded();
    gb.regs.de = 0x5C08;
    RenderActiveEntitySprite();
    PickableHandler(); return;
}

void DroppableArrowSprite(void) {
    /* data: db $2A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $2A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
}

void DroppableArrowsEntityHandler(void) {
    DroppableRevealOrReturnIfNeeded();
    DroppableDisappearIfNeeded();
    gb.regs.de = 0x5C2B;
    RenderActiveEntitySpritesPair();
    PickableHandler(); return;
}

void DroppableDisappearIfNeeded(void) {
    GetEntitySlowTransitionCountdown();
    alu_cp8(gb.regs.a, 0x1C);
    if (!GET_FLAG_C()) return;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_dec8(gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void DroppableRupeeSprite(void) {
    /* data: db $A6, OAM_GBC_PAL_5 | OAMF_PAL1 */;
}

void DroppableRupeeEntityHandler(void) {
    DroppableRevealOrReturnIfNeeded();
    DroppableDisappearIfNeeded();
    gb.regs.de = 0x5C4F;
    RenderActiveEntitySprite();
    PickableHandler(); return;
}

void PickableHandler(void) {
    ReturnIfNonInteractive_03();
    PickableHandleGrabbedByItemIfNeeded();
    PickableCollectIfNeeded();
    BouncingEntityPhysics(); return;
}

void BouncingEntityPhysics(void) {
    UpdateEntityPosWithSpeed_03();
    func_003_6B7B();
    ApplyEntityInteractionWithBackground();
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BouncingEntityPhysics_sidescrollingEnd;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto BouncingEntityPhysics_return;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cp8(gb.regs.a, 0xF8);
    if (GET_FLAG_C()) goto BouncingEntityPhysics_makeBouncingNoise;
    goto BouncingEntityPhysics_shallowWaterEnd;
  BouncingEntityPhysics_sidescrollingEnd:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto BouncingEntityPhysics_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto BouncingEntityPhysics_shallowWaterEnd;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cpl();
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_C()) goto BouncingEntityPhysics_makeBouncingNoise;
  BouncingEntityPhysics_shallowWaterEnd:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = gb_pop16();
    goto BouncingEntityPhysics_makeBouncingNoiseEnd;
  BouncingEntityPhysics_makeBouncingNoise:;
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) goto BouncingEntityPhysics_keyEnd;
    gb.regs.a = 0x17;
    gb_write(0xFFF4, gb.regs.a);
    goto BouncingEntityPhysics_bombEnd;
  BouncingEntityPhysics_keyEnd:;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto BouncingEntityPhysics_bombEnd;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BouncingEntityPhysics_bombEnd;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto BouncingEntityPhysics_bombEnd;
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
  BouncingEntityPhysics_bombEnd:;
    gb.regs.hl = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  BouncingEntityPhysics_makeBouncingNoiseEnd:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto BouncingEntityPhysics_clearXSpeedEnd;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  BouncingEntityPhysics_clearXSpeedEnd:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BouncingEntityPhysics_return;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto BouncingEntityPhysics_clearYSpeedEnd;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  BouncingEntityPhysics_clearYSpeedEnd:;
    gb_write(gb.regs.hl, gb.regs.a);
  BouncingEntityPhysics_return:;
    return;
}

void data_003_6157(void) {
    /* data: db $20, $21, $20, $01 */;
}

void DroppableFairyEntityHandler(void) {
    DroppableRevealOrReturnIfNeeded();
    DroppableDisappearIfNeeded();
    gb.regs.de = 0x5D19;
    RenderActiveEntitySprite();
    ReturnIfNonInteractive_03();
    PickableHandleGrabbedByItemIfNeeded();
    PickableCollectIfNeeded();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rlca();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_03();
    func_003_61C0();
    ApplyEntityInteractionWithBackground();
    GetEntityXDistanceToLink_03();
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto DroppableFairyEntityHandler_jr_618C;
  DroppableFairyEntityHandler_jr_618C:;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { jr_003_619C(); return; };
    GetEntityYDistanceToLink_03();
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto DroppableFairyEntityHandler_jr_6198;
  DroppableFairyEntityHandler_jr_6198:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { jr_003_61BB(); return; };
}

void jr_003_619C(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x30);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void jr_003_61BB(void) {
    gb.regs.a = 9;
    ApplyVectorTowardsLinkAndReturn(); return;
}

void func_003_61C0(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_003_61DD(); return; };
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { ret_003_61DD(); return; };
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_003_61C0_jr_61D6;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    ret_003_61DD(); return;
  func_003_61C0_jr_61D6:;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_003_61C0_jr_61DC;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  func_003_61C0_jr_61DC:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    ret_003_61DD(); return;
}

void ret_003_61DD(void) {
    return;
}

void DroppableRevealOrReturnIfNeeded(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_return;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_remainInvisible;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_checkPegasusBootsCollision;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x3D);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_skipNotActiveIfIndoors;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_remainInvisible;
  DroppableRevealOrReturnIfNeeded_skipNotActiveIfIndoors:;
    func_003_7E0E();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x2D);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_activeIfOnShortGrass;
    alu_cp8(gb.regs.a, 0x3D);
    if (!GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_activeIfOnShortGrassEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xDA);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_activeIfOnShortGrassEnd;
    alu_cp8(gb.regs.a, 0xA5);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_activeIfOnShortGrassEnd;
    alu_cp8(gb.regs.a, 0x74);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_activeIfOnShortGrassEnd;
    alu_cp8(gb.regs.a, 0x3A);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_activeIfOnShortGrassEnd;
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_activeIfOnShortGrassEnd;
    alu_cp8(gb.regs.a, 0xB2);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_activeIfOnShortGrassEnd;
  DroppableRevealOrReturnIfNeeded_activeIfOnShortGrass:;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_setOptionsAndReveal;
    goto DroppableRevealOrReturnIfNeeded_activeIfOnShovelHole;
  DroppableRevealOrReturnIfNeeded_activeIfOnShortGrassEnd:;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
  DroppableRevealOrReturnIfNeeded_activeIfOnShovelHole:;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xCC);
    if (!GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_remainInvisible;
  DroppableRevealOrReturnIfNeeded_setOptionsAndReveal:;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_SPLASH_IN_WATER_ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL);
    goto DroppableRevealOrReturnIfNeeded_reveal;
  DroppableRevealOrReturnIfNeeded_checkPegasusBootsCollision:;
    gb.regs.a = gb_read(0xC157);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_remainInvisible;
    gb.regs.a = gb_read(0xC178);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DroppableRevealOrReturnIfNeeded_remainInvisible;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.hl = 0xC179;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto DroppableRevealOrReturnIfNeeded_remainInvisible;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.hl = 0xC17A;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto DroppableRevealOrReturnIfNeeded_remainInvisible;
  DroppableRevealOrReturnIfNeeded_reveal:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x18);
    gb.regs.a = 0x0C;
    GetVectorTowardsLink();
    gb.regs.a = gb_read(0xFFD8);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
  DroppableRevealOrReturnIfNeeded_remainInvisible:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  DroppableRevealOrReturnIfNeeded_return:;
    return;
}

void PickableCanBeCollectedBySwordTable(void) {
    /* data: db TRUE */;
    /* data: db TRUE */;
    /* data: db FALSE */;
    /* data: db FALSE */;
    /* data: db TRUE */;
    /* data: db FALSE */;
    /* data: db TRUE */;
    /* data: db TRUE */;
    /* data: db FALSE */;
    /* data: db FALSE */;
    /* data: db TRUE */;
    /* data: db TRUE */;
    /* data: db FALSE */;
    /* data: db FALSE */;
    /* data: db TRUE */;
    /* data: db FALSE */;
    /* data: db FALSE */;
}

void PickableHandleGrabbedByItemIfNeeded(void) {
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PickableHandleGrabbedByItemIfNeeded_return;
    gb.regs.de = gb_pop16();
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { PickableCollectIfNeeded_collect(); return; };
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto PickableHandleGrabbedByItemIfNeeded_snapToBoomerangOrHookshot;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { PickableCollectIfNeeded_collect(); return; };
  PickableHandleGrabbedByItemIfNeeded_snapToBoomerangOrHookshot:;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  PickableHandleGrabbedByItemIfNeeded_return:;
    return;
}

void PickableCollectIfNeeded(void) {
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) { PickableHandleGrabbedByItemIfNeeded_return(); return; };
    gb.regs.a = gb_read(0xFFEB);
    gb.regs.a = alu_sub8(gb.regs.a, 0x2D);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5E60;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PickableCollectIfNeeded_cannotBeCollectedBySword;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.hl);
    gb_write(gb.regs.hl, gb.regs.b);
    func_003_6E2B();
    gb.regs.hl = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
  PickableCollectIfNeeded_cannotBeCollectedBySword:;
    func_003_6C6B();
    if (!GET_FLAG_C()) { PickableHandleGrabbedByItemIfNeeded_return(); return; };
  PickableCollectIfNeeded_collect:;
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    DidKillEnemy_label_3F78();
    gb.regs.a = gb_read(0xFFEB);
    gb.regs.a = alu_sub8(gb.regs.a, 0x2D);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto PickableCollectIfNeeded_heartOrRupeeEnd;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x14);
    goto PickableCollectIfNeeded_sfxEnd;
  PickableCollectIfNeeded_heartOrRupeeEnd:;
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 1);
  PickableCollectIfNeeded_sfxEnd:;
    switch(gb.regs.a) {
        case 0x00: PickDroppableHeart(); return;
        case 0x01: PickDroppableRupee(); return;
        case 0x02: PickDroppableFairy(); return;
        case 0x03: PickDroppableKey(); return;
        case 0x04: PickSword(); return;
        case 0x05: return;
        case 0x06: PickPieceOfPower(); return;
        case 0x07: PickGuardianAcorn(); return;
        case 0x08: PickHeartPiece(); return;
        case 0x09: PickHeartContainer(); return;
        case 0x0A: PickDroppableArrows(); return;
        case 0x0B: PickDroppableBombs(); return;
        case 0x0C: PickSirensInstrument(); return;
        case 0x0D: PickToadstoolOrDungeonKey(); return;
        case 0x0E: PickDroppableMagicPowder(); return;
        case 0x0F: PickToadstoolOrDungeonKey(); return;
        case 0x10: PickSecretSeashell(); return;
    }
}

void PickDroppableMagicPowder(void) {
    gb.regs.a = 0x0B;
    gb_write(0xFFA5, gb.regs.a);
    gb.regs.d = 0x0C;
    GiveInventoryItem();
    gb.regs.hl = 0xDC1E;
    gb.regs.de = 0xDBF8;
    jr_003_635F(); return;
}

void jr_003_635F(void) {
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) goto jr_003_635F_return;
    gb.regs.a = alu_add8(gb.regs.a, 1);
    alu_daa();
    gb_write(gb.regs.de, gb.regs.a);
  jr_003_635F_return:;
    return;
}

void PickSecretSeashell(void) {
    /* call_open_dialog Dialog0EF */;
}

void label_003_636D(void) {
    MarkRoomCompleted();
    gb.regs.hl = 0xDBBB;
    IncreaseValueAtHLClampAt99(); return;
}

void IncreaseValueAtHLClampAt99(void) {
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x99);
    if (GET_FLAG_Z()) goto IncreaseValueAtHLClampAt99_ret_637C;
    gb.regs.a = alu_add8(gb.regs.a, 1);
    alu_daa();
    gb_write(gb.regs.hl, gb.regs.a);
  IncreaseValueAtHLClampAt99_ret_637C:;
    return;
}

void PickDroppableArrows(void) {
    gb.regs.hl = 0xDC20;
    gb.regs.de = 0xDBF1;
    jr_003_635F(); return;
}

void PickDroppableBombs(void) {
    gb.regs.d = 2;
    GiveInventoryItem();
    gb.regs.hl = 0xDC1F;
    gb.regs.de = 0xDBF9;
    jr_003_635F(); return;
}

void PickSirensInstrument(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD46C, gb.regs.a);
    gb_write(0xC3CB, gb.regs.a);
    gb.regs.a = 0x1B;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    HoldPickupInTheAir(); return;
}

void HoldPickupInTheAir(void) {
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFF98, gb.regs.a);
    MovePickupInTheAir();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    label_003_63D2(); return;
}

void PickHeartContainer(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD47C, gb.regs.a);
    gb.regs.a = 0x25;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xD46C, gb.regs.a);
    GetEntityTransitionCountdown();
    gb.regs.a = 0x70;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xC111, gb.regs.a);
    jr_003_63DB(); return;
}

void PickToadstoolOrDungeonKey(void) {
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
    label_003_63D2(); return;
    gb.regs.a = 1;
    gb_write(0xFFF2, gb.regs.a);
    label_003_63D2(); return;
}

void label_003_63D2(void) {
    GetEntityTransitionCountdown();
    gb.regs.a = 0x68;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xC111, gb.regs.a);
    jr_003_63DB(); return;
}

void jr_003_63DB(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
    ResetSpinAttack(); return;
}

void PickHeartPiece(void) {
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
    IncrementEntityState();
    jr_003_63DB(); return;
}

void Data_003_63EE(void) {
    /* data: db $E4,      $14,       $E4,       $14 */;
}

void Data_003_63F2(void) {
    /* data: db $D4,      $D4,       $04,       $04 */;
}

void PickGuardianAcorn(void) {
    gb.regs.a = 2;
    gb.regs.e = 5;
    ProcessPowerUp(); return;
}

void PickPieceOfPower(void) {
    gb.regs.a = 1;
    gb.regs.e = 1;
    ProcessPowerUp(); return;
}

void ProcessPowerUp(void) {
    gb_write(0xD47C, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(0xC1A9, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xC1AA, gb.regs.a);
    gb_write(0xC111, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD47A, gb.regs.a);
    gb.regs.a = 0x27;
    gb_write(0xD368, gb.regs.a);
    gb.regs.a = 0x49;
    gb_write(0xFFBD, gb.regs.a);
    gb_write(0xFFBF, gb.regs.a);
    MovePickupInTheAir(); return;
}

void MovePickupInTheAir(void) {
    gb.regs.e = 3;
    gb.regs.d = 0;
  MovePickupInTheAir_movePickupHigher:;
    /* TODO: :  */;
    gb_push16(gb.regs.de);
    gb.regs.hl = 0x63EE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0x63F2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 7;
    AddTranscientVfx();
    gb.regs.hl = 0xC520;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x22);
    gb.regs.hl = 0xC590;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto MovePickupInTheAir_movePickupHigher;
  MovePickupInTheAir_return:;
    /* TODO: :  */;
    return;
}

void PickSword(void) {
    gb.regs.a = gb_read(0xDBFA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto PickSword_jr_6468;
    gb.regs.a = 0x0F;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    HoldPickupInTheAir();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    gb.regs.a = 0xFF;
    gb_write(0xFFBF, gb.regs.a);
    return;
  PickSword_jr_6468:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDBF0, gb.regs.a);
    gb.regs.d = 4;
    GiveInventoryItem(); return;
}

void GiveInventoryItem(void) {
    gb.regs.hl = wInventoryItems_BButtonSlot;
    gb.regs.e = 0x0C;
  GiveInventoryItem_checkInventorySlot:;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, gb.regs.d);
    if (GET_FLAG_Z()) goto GiveInventoryItem_return;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto GiveInventoryItem_checkInventorySlot;
    gb.regs.hl = wInventoryItems_BButtonSlot;
  GiveInventoryItem_checkInventorySlotEmpty:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GiveInventoryItem_inventorySlotFull;
    gb_write(gb.regs.hl, gb.regs.d);
    return;
  GiveInventoryItem_inventorySlotFull:;
    gb.regs.hl++;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto GiveInventoryItem_checkInventorySlotEmpty;
  GiveInventoryItem_return:;
    return;
}

void PickDroppableKey(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_003_64A5(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x7C);
    if (!GET_FLAG_Z()) goto PickDroppableKey_jr_64A0;
    gb.regs.hl = 0xDA1E;
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
  PickDroppableKey_jr_64A0:;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_003_64AD(); return; };
}

void jr_003_64A5(void) {
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
    label_003_63D2(); return;
}

void jr_003_64AD(void) {
    MarkRoomCompleted();
    gb.regs.hl = 0xDC78;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    SynchronizeDungeonsItemFlags_trampoline(); return;
}

void PickDroppableHeart(void) {
    gb.regs.a = 8;
    jr_003_64B9(); return;
}

void jr_003_64B9(void) {
    gb.regs.hl = 0xDC3B;
    jr_003_64BC(); return;
}

void jr_003_64BC(void) {
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void PickDroppableRupee(void) {
    gb.regs.a = 1;
    gb.regs.hl = 0xDC38;
    jr_003_64BC(); return;
}

void PickDroppableFairy(void) {
    gb.regs.a = 0x30;
    jr_003_64B9(); return;
}

void SpawnNewEntity(void) {
    gb.regs.e = 0x0F;
    SpawnNewEntityInRange(); return;
}

void SpawnNewEntityInRange(void) {
    gb_push16(gb.regs.af);
    gb.regs.d = 0;
  SpawnNewEntityInRange_loop:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SpawnNewEntityInRange_entitySlotIsAvailable;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto SpawnNewEntityInRange_loop;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_scf();
    return;
  SpawnNewEntityInRange_entitySlotIsAvailable:;
    gb_write(gb.regs.hl, 5);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFDA, gb.regs.a);
    ConfigureNewEntity_helper();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC220;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC220;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC230;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC230;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_scf();
    alu_ccf();
    return;
}

void ConfigureNewEntity_helper(void) {
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.de);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    ConfigureNewEntity();
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
    return;
}

void BombSprite(void) {
    /* data: db $80, OAM_GBC_PAL_5 | OAMF_PAL1 */;
}

void ExplosionSpriteRect(void) {
  ExplosionSpriteRect_variant0:;
    /* data: db -8, -8, $32, OAM_GBC_PAL_1 | OAMF_PAL0, -8,  0, $32, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db -8,  8, $32, OAM_GBC_PAL_1 | OAMF_PAL0, -8, 16, $32, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db 8, -8, $32, OAM_GBC_PAL_1 | OAMF_PAL0,  8,  0, $32, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db 8,  8, $32, OAM_GBC_PAL_1 | OAMF_PAL0,  8, 16, $32, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  ExplosionSpriteRect_variant1:;
    /* data: db -8, -8, $10, OAM_GBC_PAL_2 | OAMF_PAL0,                          -8,  0, $12, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db -8,  8, $12, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP,             -8, 16, $10, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db 8, -8, $10, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP,              8,  0, $12, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db 8,  8, $12, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP, 8, 16, $10, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
  ExplosionSpriteRect_variant2:;
    /* data: db -4, -4, $30, OAM_GBC_PAL_1 | OAMF_PAL1, -4,  4, $30, OAM_GBC_PAL_1 | OAMF_PAL1 | OAMF_XFLIP */;
    /* data: db -4,  4, $30, OAM_GBC_PAL_1 | OAMF_PAL1, -4, 12, $30, OAM_GBC_PAL_1 | OAMF_PAL1 | OAMF_XFLIP */;
    /* data: db 4, -4, $30, OAM_GBC_PAL_1 | OAMF_PAL1,  4,  4, $30, OAM_GBC_PAL_1 | OAMF_PAL1 | OAMF_XFLIP */;
    /* data: db 4,  4, $30, OAM_GBC_PAL_1 | OAMF_PAL1,  4, 12, $30, OAM_GBC_PAL_1 | OAMF_PAL1 | OAMF_XFLIP */;
  ExplosionSpriteRect_variant3:;
    /* data: db -4, -4, $30, OAM_GBC_PAL_1 | OAMF_PAL0, -4,  4, $30, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db -4,  4, $30, OAM_GBC_PAL_1 | OAMF_PAL0, -4, 12, $30, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db 4, -4, $30, OAM_GBC_PAL_1 | OAMF_PAL0,  4,  4, $30, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db 4,  4, $30, OAM_GBC_PAL_1 | OAMF_PAL0,  4, 12, $30, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    RenderBombExplosion(); return;
}

void RenderBombExplosion(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x60C5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect(); return;
}

void ExplosionSpriteVariantFrames(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $01, $01, $01, $01, $01, $01, $01, $01 */;
    /* data: db $02, $02, $02, $02, $03, $03, $03, $03 */;
}

void BombExplosionHandler(void) {
    BombExplosionVisuals();
    ReturnIfNonInteractive_03();
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BombExplosionHandler_stayLoaded;
    UnloadEntityAndReturn(); return;
  BombExplosionHandler_stayLoaded:;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x4C);
    gb.regs.a = gb.regs.e;
    if (GET_FLAG_Z()) goto BombExplosionHandler_ret;
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_C()) goto BombExplosionHandler_checkForDestroyableObjectEnd;
    alu_cp8(gb.regs.a, 0x17);
    if (!GET_FLAG_C()) goto BombExplosionHandler_checkForDestroyableObjectEnd;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb_push16(gb.regs.de);
    CheckForBombDestroyableObjectBasic();
    gb.regs.de = gb_pop16();
    CheckForBombDestroyableObjectPuzzle();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  BombExplosionHandler_checkForDestroyableObjectEnd:;
    alu_cp8(gb.regs.a, 0x12);
    if (!GET_FLAG_Z()) goto BombExplosionHandler_ret;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BombExplosionHandler_enemyBomb;
    CheckExplosionInteractionWithEntities();
    goto BombExplosionHandler_enemyBombEnd;
  BombExplosionHandler_enemyBomb:;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto BombExplosionHandler_enemyBombEnd;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto BombExplosionHandler_enemyBombEnd;
    ApplyLinkCollisionWithEnemy();
    gb.regs.hl = 0xFF9A;
    gb_write(gb.regs.hl, alu_sla(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xFF9B;
    gb_write(gb.regs.hl, alu_sla(gb_read(gb.regs.hl)));
  BombExplosionHandler_enemyBombEnd:;
    gb.regs.a = 4;
    gb_write(0xC502, gb.regs.a);
  BombExplosionHandler_ret:;
    return;
}

void BombExplosionVisuals(void) {
    GetEntityTransitionCountdown();
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x615D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    RenderBombExplosion();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BombExplosionVisuals_ret;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.e = 0xE4;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BombExplosionVisuals_bgFlashing;
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto BombExplosionVisuals_bgFlashing;
    gb.regs.e = 0x84;
  BombExplosionVisuals_bgFlashing:;
    gb.regs.hl = 0xDC3F;
    gb_write(gb.regs.hl, gb.regs.e);
  BombExplosionVisuals_ret:;
    return;
  BombExplosionVisuals_smallExplosion:;
    gb.regs.de = 0x506E;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_03();
    return;
}

void BombEntityHandler(void) {
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_C()) { UnloadEntity(); return; };
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_C()) { BombExplosionHandler(); return; };
    if (!GET_FLAG_Z()) goto BombEntityHandler_notExploding;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    PlayBombExplosionSfx();
  BombEntityHandler_notExploding:;
    gb.regs.hl = 0xC14E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cp8(gb.regs.a, 0x22);
    if (GET_FLAG_C()) { BombExplosionVisuals_smallExplosion(); return; };
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_Z()) goto BombEntityHandler_skipStartFlashing;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
  BombEntityHandler_skipStartFlashing:;
    RenderBomb();
    CheckForEntityFallingDownQuicksandHole();
    ReturnIfNonInteractive_03();
    BouncingEntityPhysics();
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    GetEntityPrivateCountdown1();
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto BombEntityHandler_BounceOffWalls;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto BombEntityHandler_checkAButtonSlot;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto BombEntityHandler_liftUp;
    goto BombEntityHandler_BounceOffWalls;
  BombEntityHandler_checkAButtonSlot:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto BombEntityHandler_BounceOffWalls;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto BombEntityHandler_BounceOffWalls;
  BombEntityHandler_liftUp:;
    EntityGetLiftedUp();
  BombEntityHandler_BounceOffWalls:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto BombEntityHandler_noCollisionX;
    EntityBounceOffWallX();
  BombEntityHandler_noCollisionX:;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) return;
    EntityBounceOffWallY(); return;
}

void RenderBomb(void) {
    gb.regs.hl = 0xFFEC;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.de = 0x60C3;
    RenderActiveEntitySprite();
    CopyEntityPositionToActivePosition(); return;
}

void BombObjectPuzzleDestroyingX(void) {
    /* data: db $F8, $08, $18 */;
    /* data: db $F8, $08, $18 */;
    /* data: db $F8, $08, $18 */;
}

void BombObjectPuzzleDestroyingY(void) {
    /* data: db $F8, $F8, $F8 */;
    /* data: db $08, $08, $08 */;
    /* data: db $18, $18, $18 */;
    /* data: db $48, $48, $00, $90, $00, $70, $38, $38 */;
}

void BombedWallObjects(void) {
    /* data: db OBJECT_BOMBED_PASSAGE_VERTICAL */;
    /* data: db OBJECT_BOMBED_PASSAGE_VERTICAL */;
    /* data: db OBJECT_BOMBED_PASSAGE_HORIZONTAL */;
    /* data: db OBJECT_BOMBED_PASSAGE_HORIZONTAL */;
}

void BombedWallTilesIndexes(void) {
    /* data: db $72, $72, $73, $73, $04, $04, $04, $04 */;
    /* data: db $69, $79, $69, $79, $04, $04, $04, $04 */;
}

void BombedCaveDoorTilesIndexesDMG(void) {
    /* data: db $64, $66, $65, $67 */;
}

void BombedCaveDoorTilesIndexesGBC(void) {
    /* data: db $64, $66, $64, $66 */;
}

void BombedWallCurrentRoomStatus(void) {
    /* data: db ROOM_STATUS_DOOR_OPEN_UP */;
    /* data: db ROOM_STATUS_DOOR_OPEN_DOWN */;
    /* data: db ROOM_STATUS_DOOR_OPEN_LEFT */;
    /* data: db ROOM_STATUS_DOOR_OPEN_RIGHT */;
}

void BombedWallAdjacentRoomStatus(void) {
    /* data: db ROOM_STATUS_DOOR_OPEN_DOWN */;
    /* data: db ROOM_STATUS_DOOR_OPEN_UP */;
    /* data: db ROOM_STATUS_DOOR_OPEN_RIGHT */;
    /* data: db ROOM_STATUS_DOOR_OPEN_LEFT */;
}

void BombedWallAdjacentRoomMapPosDiff(void) {
    /* data: db -$08, $08, -$01, $01 */;
}

void BombedGiantSkullTilesIndexes(void) {
    /* data: db $72, $73, $73, $72 */;
    /* data: db $00, $00, $00, $00 */;
}

void GiantSkullDiffFromPrevPositionX(void) {
    /* data: db $00, $10, $F0, $10 */;
}

void GiantSkullDiffFromPrevPositionY(void) {
    /* data: db $00, $00, $10, $00 */;
}

void CheckForBombDestroyableObjectPuzzle(void) {
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckForBombDestroyableObjectPuzzle_return;
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.hl = 0x62BC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.hl = 0x62C5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.a = gb.regs.h;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb.regs.c;
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFAF, gb.regs.a);
    gb.regs.e = gb.regs.a;
    alu_cp8(gb.regs.a, 0xBB);
    if (GET_FLAG_C()) goto CheckForBombDestroyableObjectPuzzle_giantSkullEnd;
    alu_cp8(gb.regs.a, 0xBF);
    if (!GET_FLAG_C()) goto CheckForBombDestroyableObjectPuzzle_giantSkullEnd;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckForBombDestroyableObjectPuzzle_giantSkullEnd;
    gb.regs.a = 2;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = 3;
    Spawn2x2RubbleEntities_trampoline();
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, 0xEE);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 9;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl--, gb.regs.a);
    gb.regs.a = 0x83;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x83;
    BackupObjectInRAM2();
    gb.regs.hl--;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.l = gb.regs.a;
    gb.regs.a = 9;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 0x83;
    BackupObjectInRAM2();
    gb.regs.hl--;
    gb.regs.a = 0x83;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.c = 3;
    gb.regs.b = 0;
  CheckForBombDestroyableObjectPuzzle_loop:;
    _updateRoomStatusAndDrawRockyGround();
    gb.regs.hl = 0x6306;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFCE;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x630A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFCD;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto CheckForBombDestroyableObjectPuzzle_loop;
    goto CheckForBombDestroyableObjectPuzzle_popBCAndReturn;
  CheckForBombDestroyableObjectPuzzle_updateRoomStatusAndDrawRockyGround:;
    gb.regs.de = 0x62FE;
    goto CheckForBombDestroyableObjectPuzzle_updateRoomStatusAndDraw;
  CheckForBombDestroyableObjectPuzzle_giantSkullEnd:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    GetObjectPhysicsFlags_trampoline();
    gb.regs.a = alu_sub8(gb.regs.a, 0x99);
    if (GET_FLAG_C()) goto CheckForBombDestroyableObjectPuzzle_popBCAndReturn;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto CheckForBombDestroyableObjectPuzzle_popBCAndReturn;
    gb.regs.c = gb.regs.a;
    gb.regs.a = 2;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckForBombDestroyableObjectPuzzle_indoorsBombableDoor;
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = 0xE1;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 0x83;
    BackupObjectInRAM2();
    gb.regs.de = 0x62EA;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckForBombDestroyableObjectPuzzle_updateRoomStatusAndDraw;
    gb.regs.de = 0x62EE;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckForBombDestroyableObjectPuzzle_isNotGBC;
    gb.regs.de = 0x62EE;
    goto CheckForBombDestroyableObjectPuzzle_updateRoomStatusAndDraw;
  CheckForBombDestroyableObjectPuzzle_isNotGBC:;
    gb.regs.de = 0x62EA;
  CheckForBombDestroyableObjectPuzzle_updateRoomStatusAndDraw:;
    gb_push16(gb.regs.de);
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    label_003_51F5(); return;
  CheckForBombDestroyableObjectPuzzle_indoorsBombableDoor:;
    gb.regs.hl = 0xD9B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto CheckForBombDestroyableObjectPuzzle_colorDungeonEnd;
    gb.regs.hl = 0xDE88;
    goto CheckForBombDestroyableObjectPuzzle_setRoomStatus;
  CheckForBombDestroyableObjectPuzzle_colorDungeonEnd:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto CheckForBombDestroyableObjectPuzzle_setRoomStatus;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto CheckForBombDestroyableObjectPuzzle_setRoomStatus;
    gb.regs.d = alu_inc8(gb.regs.d);
  CheckForBombDestroyableObjectPuzzle_setRoomStatus:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = 0x62F2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    gb.regs.hl = 0x62FA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xDC56);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    GetRoomStatusAddressForMapPosition_trampoline();
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = 0x62F6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = 0x62D6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, 2);
    alu_rla();
    alu_rla();
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x62DA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = gb_pop16();
    gb_push16(gb.regs.hl);
    label_003_51F5(); return;
  CheckForBombDestroyableObjectPuzzle_popBCAndReturn:;
    gb.regs.bc = gb_pop16();
  CheckForBombDestroyableObjectPuzzle_return:;
    return;
}

void BombObjectBasicDestroyingX(void) {
    /* data: db $F8, $08, $18 */;
    /* data: db $F8, $08, $18 */;
    /* data: db $F8, $08, $18 */;
}

void BombObjectBasicDestroyingY(void) {
    /* data: db $F8, $F8, $F8 */;
    /* data: db $08, $08, $08 */;
    /* data: db $18, $18, $18 */;
}

void CheckForBombDestroyableObjectBasic(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0x64A2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x64AB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb.regs.h;
    alu_cp8(gb.regs.a, 0xD7);
    if (!GET_FLAG_Z()) goto CheckForBombDestroyableObjectBasic_return;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFAF, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckForBombDestroyableObjectBasic_indoor;
    gb_write(0xFFE9, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto CheckForBombDestroyableObjectBasic_bombedGrassOrBush;
    alu_cp8(gb.regs.a, 0xD3);
    if (GET_FLAG_Z()) goto CheckForBombDestroyableObjectBasic_bombedGrassOrBush;
    alu_cp8(gb.regs.a, 0x5C);
    if (GET_FLAG_Z()) goto CheckForBombDestroyableObjectBasic_bombedGrassOrBush;
    goto CheckForBombDestroyableObjectBasic_return;
  CheckForBombDestroyableObjectBasic_indoor:;
    alu_cp8(gb.regs.a, 0xA9);
    if (!GET_FLAG_Z()) goto CheckForBombDestroyableObjectBasic_return;
    gb.regs.hl = 0xD9B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto CheckForBombDestroyableObjectBasic_colorDungeonEnd;
    gb.regs.hl = 0xDE88;
    goto CheckForBombDestroyableObjectBasic_setRoomStatus;
  CheckForBombDestroyableObjectBasic_colorDungeonEnd:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto CheckForBombDestroyableObjectBasic_setRoomStatus;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto CheckForBombDestroyableObjectBasic_setRoomStatus;
    gb.regs.b = alu_inc8(gb.regs.b);
  CheckForBombDestroyableObjectBasic_setRoomStatus:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x40);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
  CheckForBombDestroyableObjectBasic_bombedGrassOrBush:;
    RevealObjectUnderObject_trampoline();
    gb.regs.a = 5;
    SpawnNewEntity();
    if (GET_FLAG_C()) goto CheckForBombDestroyableObjectBasic_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC19B, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFE9);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto CheckForBombDestroyableObjectBasic_makeInvisibleEnd;
    gb.regs.a = 0xFF;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
  CheckForBombDestroyableObjectBasic_makeInvisibleEnd:;
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    LiftableRockStartSmashingAnimation();
  CheckForBombDestroyableObjectBasic_return:;
    gb.regs.bc = gb_pop16();
    return;
}

void Data_003_69A2(void) {
    /* data: db $6C, $74, $6D, $75, $00, $00, $00, $00 */;
}

void MagicRodFireballSpriteVariants(void) {
  MagicRodFireballSpriteVariants_variant0:;
    /* data: db $36, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $36, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  MagicRodFireballSpriteVariants_variant1:;
    /* data: db $36, OAM_GBC_PAL_2 | OAMF_PAL1 */;
    /* data: db $36, OAM_GBC_PAL_2 | OAMF_PAL1 | OAMF_XFLIP */;
    MagicRodFireballEntityHandler(); return;
}

void MagicRodFireballEntityHandler(void) {
    gb.regs.hl = 0xC14D;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x0A;
    gb_write(0xC19E, gb.regs.a);
    func_003_75A2();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) goto MagicRodFireballEntityHandler_beforeHittingWall;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (GET_FLAG_Z()) { UnloadEntity(); return; };
    gb.regs.de = 0x47F9;
    RenderActiveEntitySpritesPair(); return;
  MagicRodFireballEntityHandler_beforeHittingWall:;
    gb.regs.de = 0x6561;
    ArrowRenderAndMove_skipLoadingSprites();
    ReturnIfNonInteractive_03();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xFFAF);
    if (GET_FLAG_Z()) goto MagicRodFireballEntityHandler_outdoors;
    alu_cp8(gb.regs.a, 0x8A);
    if (GET_FLAG_Z()) goto MagicRodFireballEntityHandler_burnObject;
    goto MagicRodFireballEntityHandler_return;
  MagicRodFireballEntityHandler_outdoors:;
    alu_cp8(gb.regs.a, 0xD3);
    if (GET_FLAG_Z()) goto MagicRodFireballEntityHandler_burnObject;
    alu_cp8(gb.regs.a, 0x5C);
    if (!GET_FLAG_Z()) goto MagicRodFireballEntityHandler_return;
  MagicRodFireballEntityHandler_burnObject:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    RevealObjectUnderObject_trampoline();
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 8;
    AddTranscientVfx();
    gb.regs.a = 0x13;
    gb_write(0xFFF4, gb.regs.a);
  MagicRodFireballEntityHandler_return:;
    return;
}

void OctorokRockSpriteVariants(void) {
  OctorokRockSpriteVariants_variant0:;
    /* data: db $6C, $01 */;
    /* data: db $6C, $21 */;
  OctorokRockSpriteVariants_variant1:;
    /* data: db $5C, $01 */;
    /* data: db $5C, $21 */;
    OctorokRockEntityHandler(); return;
}

void OctorokRockEntityHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto OctorokRockEntityHandler_jr_6A2E;
    CheckLinkCollisionWithProjectile();
  OctorokRockEntityHandler_jr_6A2E:;
    gb.regs.de = 0x65CE;
    ArrowRenderAndMove_skipLoadingSprites(); return;
}

void ArrowEntityHandler(void) {
    gb.regs.hl = 0xC14D;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { BombArrowHandler(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ArrowRenderAndMove(); return; };
    gb.regs.a = 5;
    gb_write(0xC19E, gb.regs.a);
    func_003_75A2();
    ArrowRenderAndMove();
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    alu_cp8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xC0);
    if (!GET_FLAG_Z()) return;
    MarkTriggerAsResolved();
    UnloadEntityAndReturn(); return;
}

void BombArrowBombSprite(void) {
    /* data: db $80, OAM_GBC_PAL_5 | OAMF_PAL1 */;
}

void BombArrowBombXOffsetPerDirection(void) {
    /* data: db +4, -4, 0, 0 */;
}

void BombArrowBombYOffsetPerDirection(void) {
    /* data: db -2, -2, -6, +4 */;
}

void BombArrowHandler(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto BombArrowHandler_beforeExploding;
    gb.regs.a = 2;
    SpawnNewEntity();
    if (GET_FLAG_C()) goto BombArrowHandler_unloadAndReturn;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x17);
    PlayBombExplosionSfx();
  BombArrowHandler_unloadAndReturn:;
    UnloadEntityAndReturn(); return;
  BombArrowHandler_beforeExploding:;
    gb.regs.a = gb_read(0xFFF1);
    gb_push16(gb.regs.af);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.hl = 0x6613;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x6617;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x6611;
    RenderActiveEntitySprite();
    CopyEntityPositionToActivePosition();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x677D;
    RenderActiveEntitySpritesPair();
    gb.regs.a = 0x0C;
    gb_write(0xC19E, gb.regs.a);
    func_003_75A2();
    ArrowRenderAndMove_skipRendering(); return;
}

void MoblinArrowEntityHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ArrowRenderAndMove(); return; };
    CheckLinkCollisionWithProjectile();
    ArrowRenderAndMove(); return;
}

void ArrowRenderAndMove(void) {
    gb.regs.de = 0x677D;
  ArrowRenderAndMove_skipLoadingSprites:;
    RenderActiveEntitySpritesPair();
  ArrowRenderAndMove_skipRendering:;
    ReturnIfNonInteractive_03();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ArrowRockAfterHittingWall(); return; };
    UpdateEntityPosWithSpeed_03();
    ApplySwordIntersectionWithObjects();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { EntityBounceOffWallX_return(); return; };
    GetEntityTransitionCountdown();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ArrowRenderAndMove_fireballEnd;
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x30);
    return;
  ArrowRenderAndMove_fireballEnd:;
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) goto ArrowRenderAndMove_skipSound;
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
  ArrowRenderAndMove_skipSound:;
    AlertSwordMoblins();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto ArrowRenderAndMove_enemyProjectileBounce;
    _playerArrowBounceY();
    gb.regs.hl = 0xC240;
  ArrowRenderAndMove_playerArrowBounce:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  ArrowRenderAndMove_playerArrowBounceY:;
    gb.regs.hl = 0xC250;
    goto ArrowRenderAndMove_playerArrowBounce;
  ArrowRenderAndMove_enemyProjectileBounce:;
    EntityBounceOffWallY();
    EntityBounceOffWallX(); return;
}

void EntityBounceOffWallX(void) {
    gb.regs.hl = 0xC240;
  EntityBounceOffWallX_updateSpeed:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  EntityBounceOffWallX_return:;
    return;
}

void EntityBounceOffWallY(void) {
    gb.regs.hl = 0xC250;
    EntityBounceOffWallX_updateSpeed(); return;
}

void ArrowSpinningSpriteVariantFrames(void) {
    /* data: db DIRECTION_RIGHT, DIRECTION_DOWN, DIRECTION_LEFT, DIRECTION_UP */;
}

void ArrowRockAfterHittingWall(void) {
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { UnloadEntityAndReturn(); return; };
    if (!GET_FLAG_Z()) goto ArrowRockAfterHittingWall_unloadEnd;
    UnloadEntityAndReturn(); return;
  ArrowRockAfterHittingWall_unloadEnd:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto ArrowRockAfterHittingWall_spinningEnd;
    GetEntityTransitionCountdown();
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x66EE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
  ArrowRockAfterHittingWall_spinningEnd:;
    UpdateEntityPosWithSpeed_03();
    func_003_6B7B(); return;
}

void Data_003_6B73(void) {
    /* data: db $02, $01, $02, $02 */;
}

void Data_003_6B77(void) {
    /* data: db $40, $08, $40, $40 */;
}

void func_003_6B7B(void) {
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_003_6B7B_sideScrolling;
    AddEntityZSpeedToPos_03();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  func_003_6B7B_sideScrolling:;
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_003_6B7B_updateXSpeedEnd;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_003_6B7B_updateXSpeedEnd;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_003_6B7B_updateXSpeedEnd;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_003_6B7B_positiveDifferenceX;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_003_6B7B_positiveDifferenceX:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_003_6B7B_updateXSpeedEnd:;
    gb.regs.hl = 0x6B73;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6B77;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_003_6B7B_return;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  func_003_6B7B_return:;
    return;
}

void EntityArrowSpriteVariants(void) {
  EntityArrowSpriteVariants_variant0:;
    /* data: db $2E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $2C, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  EntityArrowSpriteVariants_variant1:;
    /* data: db $2C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $2E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  EntityArrowSpriteVariants_variant2:;
    /* data: db $2A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $2A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  EntityArrowSpriteVariants_variant3:;
    /* data: db $2A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $2A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    ReversedDirectionsTable(); return;
}

void ReversedDirectionsTable(void) {
  ReversedDirectionsTable_right:;
    /* data: db DIRECTION_LEFT */;
  ReversedDirectionsTable_left:;
    /* data: db DIRECTION_RIGHT */;
  ReversedDirectionsTable_up:;
    /* data: db DIRECTION_DOWN */;
  ReversedDirectionsTable_down:;
    /* data: db DIRECTION_UP */;
    Data_003_6BDA(); return;
}

void Data_003_6BDA(void) {
  Data_003_6BDA_right:;
    /* data: db $02 */;
  Data_003_6BDA_left:;
    /* data: db $0A */;
  Data_003_6BDA_up:;
    /* data: db $0E */;
  Data_003_6BDA_down:;
    /* data: db $06 */;
    CheckLinkCollisionWithProjectile(); return;
}

void CheckLinkCollisionWithProjectile(void) {
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto CheckLinkCollisionWithProjectile_return;
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckLinkCollisionWithProjectile_return;
    gb.regs.hl = 0xFFEE;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 6);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) goto CheckLinkCollisionWithProjectile_return;
    gb.regs.hl = 0xFFEC;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 6);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) goto CheckLinkCollisionWithProjectile_return;
    gb.regs.a = gb_read(0xC15B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckLinkCollisionWithProjectile_shieldEnd;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x2B);
    if (!GET_FLAG_Z()) goto CheckLinkCollisionWithProjectile_laserBeamEnd;
    gb.regs.a = gb_read(0xDBF0);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto CheckLinkCollisionWithProjectile_shieldEnd;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6BDA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) goto CheckLinkCollisionWithProjectile_shieldEnd;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
  CheckLinkCollisionWithProjectile_showSwordPokeVfx:;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 5;
    AddTranscientVfx(); return;
  CheckLinkCollisionWithProjectile_laserBeamEnd:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x678D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto CheckLinkCollisionWithProjectile_shieldEnd;
    gb.regs.a = 0x16;
    gb_write(0xFFF2, gb.regs.a);
  CheckLinkCollisionWithProjectile_jr_003_6C54:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
  CheckLinkCollisionWithProjectile_return:;
    return;
  CheckLinkCollisionWithProjectile_shieldEnd:;
    func_003_6CC0();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x2B);
    if (GET_FLAG_Z()) goto CheckLinkCollisionWithProjectile_jr_003_6C68;
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto CheckLinkCollisionWithProjectile_jr_003_6C54;
  CheckLinkCollisionWithProjectile_jr_003_6C68:;
    UnloadEntityAndReturn(); return;
}

void func_003_6C6B(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    alu_rra();
    if (!GET_FLAG_C()) { jr_003_6CCB(); return; };
}

void CheckLinkCollisionWithEnemy(void) {
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { CheckLinkCollisionWithProjectile_return(); return; };
  CheckLinkCollisionWithEnemy_collisionEvenInTheAir:;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { CheckLinkCollisionWithProjectile_return(); return; };
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto CheckLinkCollisionWithEnemy_jr_6C98;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  CheckLinkCollisionWithEnemy_jr_6C98:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.af);
    gb.regs.hl++;
    gb.regs.a = 4;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { jr_003_6CCB(); return; };
    gb.regs.hl++;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto CheckLinkCollisionWithEnemy_jr_6CB5;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  CheckLinkCollisionWithEnemy_jr_6CB5:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.af);
    gb.regs.hl++;
    gb.regs.a = 4;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { jr_003_6CCB(); return; };
}

void func_003_6CC0(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_003_6CCD(); return; };
}

void jr_003_6CC9(void) {
    alu_scf();
    return;
}

void jr_003_6CCB(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void jr_003_6CCD(void) {
    gb.regs.a = gb_read(0xFF9D);
    gb.regs.a = alu_sub8(gb.regs.a, 0x4E);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) { jr_003_6CC9(); return; };
}

void ApplyLinkCollisionWithEnemy(void) {
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xAC);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_cheepCheepEnd;
    GetEntityYDistanceToLink_03();
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_goombaEnd;
    IncrementEntityState();
    gb_write(gb.regs.hl, 5);
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = 0xF0;
    gb_write(0xFF9B, gb.regs.a);
    ClearEntitySpeed();
    gb.regs.a = 0x0E;
    gb_write(0xFFF3, gb.regs.a);
    return;
  ApplyLinkCollisionWithEnemy_cheepCheepEnd:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x9F);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_goombaEnd;
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_goombaEnd;
    gb.regs.a = gb_read(0xFFB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_jr_003_6D1B;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_jr_003_6D15;
    gb.regs.a = gb_read(0xFFA3);
    gb.regs.a = alu_xor8(gb.regs.a, 0x80);
    goto ApplyLinkCollisionWithEnemy_jr_003_6D17;
  ApplyLinkCollisionWithEnemy_jr_003_6D15:;
    gb.regs.a = gb_read(0xFF9B);
  ApplyLinkCollisionWithEnemy_jr_003_6D17:;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_goombaEnd;
  ApplyLinkCollisionWithEnemy_jr_003_6D1B:;
    gb.regs.a = 2;
    gb_write(0xFFB7, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = 0x0E;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_jr_003_6D38;
    gb.regs.a = 0x10;
    gb_write(0xFFA3, gb.regs.a);
    return;
  ApplyLinkCollisionWithEnemy_jr_003_6D38:;
    gb.regs.a = 0xF0;
    gb_write(0xFF9B, gb.regs.a);
    return;
  ApplyLinkCollisionWithEnemy_goombaEnd:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x1C);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_gelEnd;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    return;
  ApplyLinkCollisionWithEnemy_gelEnd:;
    alu_cp8(gb.regs.a, 0x8E);
    if (GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_jr_6D5D;
    alu_cp8(gb.regs.a, 0x82);
    if (GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_jr_6D5D;
    gb.regs.a = gb_read(0xC13E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { setCarryAndReturn(); return; };
  ApplyLinkCollisionWithEnemy_jr_6D5D:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xE4);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_jr_6D73;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_jr_6D73;
    IncrementEntityState();
    gb_write(gb.regs.hl, 8);
    gb.regs.a = 3;
    gb_write(0xFFF3, gb.regs.a);
    return;
  ApplyLinkCollisionWithEnemy_jr_6D73:;
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.hl = 0xC1C6;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC166;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC1A9;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { setCarryAndReturn(); return; };
    gb.regs.a = 3;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.hl = 0xC4D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.d = gb.regs.b;
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0x43DC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xDCB7);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_takeHalfDamages;
    gb.regs.a = gb_read(0xD47C);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_damageModifiersEnd;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_takeHalfDamages;
    gb.regs.e = 0;
  ApplyLinkCollisionWithEnemy_takeHalfDamages:;
    gb.regs.e = alu_srl(gb.regs.e);
  ApplyLinkCollisionWithEnemy_damageModifiersEnd:;
    gb.regs.a = gb_read(0xDC3C);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xDC6F, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD471, gb.regs.a);
    gb.regs.a = gb_read(0xD47C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { func_003_6DDF(); return; };
    gb.regs.hl = 0xD47A;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) { func_003_6DDF(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD47C, gb.regs.a);
    gb.regs.a = gb_read(0xC1BE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_003_6DDF(); return; };
    gb.regs.a = gb_read(0xFFB0);
    alu_cp8(gb.regs.a, 0x22);
    if (GET_FLAG_Z()) goto ApplyLinkCollisionWithEnemy_jr_6DDD;
    gb_write(0xD368, gb.regs.a);
  ApplyLinkCollisionWithEnemy_jr_6DDD:;
    gb_write(0xFFBF, gb.regs.a);
    func_003_6DDF(); return;
}

void func_003_6DDF(void) {
    ResetPegasusBoots();
    gb.regs.a = 0x10;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = gb_read(0xFFEB);
    gb.regs.e = 0x18;
    alu_cp8(gb.regs.a, 0x82);
    if (GET_FLAG_Z()) { label_003_6FA7(); return; };
    alu_cp8(gb.regs.a, 0x5A);
    if (!GET_FLAG_Z()) goto func_003_6DDF_facadeEnd;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
  func_003_6DDF_facadeEnd:;
    alu_cp8(gb.regs.a, 0x59);
    gb.regs.a = 0x14;
    if (!GET_FLAG_Z()) goto func_003_6DDF_moldormEnd;
    gb.regs.a = 0x18;
  func_003_6DDF_moldormEnd:;
    func_003_7565();
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_6E0E(); return; };
}

void setCarryAndReturn(void) {
    alu_scf();
    return;
}

void Data_003_6E0C(void) {
    /* data: db $0C, $F4 */;
}

void jr_003_6E0E(void) {
    gb.regs.a = gb_read(0xFF9C);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { setCarryAndReturn(); return; };
    GetEntityXDistanceToLink_03();
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6E0C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = 0xF4;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9C, gb.regs.a);
    alu_scf();
    return;
}

void DefaultEnemyDamageCollisionHandler(void) {
    func_003_6C6B();
    func_003_6E2B(); return;
}

void func_003_6E2B(void) {
    gb.regs.a = gb_read(0xC140);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { label_003_73E6(); return; };
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_003_6E2B_jr_6E40;
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_C()) { label_003_73E6(); return; };
  func_003_6E2B_jr_6E40:;
    gb.regs.a = gb_read(0xC1AC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_003_6E2B_jr_6E4B;
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, gb.regs.c);
    if (GET_FLAG_Z()) { label_003_73E6(); return; };
  func_003_6E2B_jr_6E4B:;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_003_73E6(); return; };
    gb.regs.de = 0xFFEE;
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC140;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto func_003_6E2B_jr_6E6E;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_003_6E2B_jr_6E6E:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.af);
    gb.regs.hl++;
    gb.regs.a = gb_read(0xC141);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { label_003_73E6(); return; };
    gb.regs.hl++;
    gb_push16(gb.regs.hl);
    gb.regs.de = 0xFFEC;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC142;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto func_003_6E2B_jr_6E8E;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_003_6E2B_jr_6E8E:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.af);
    gb.regs.hl++;
    gb.regs.a = gb_read(0xC143);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { label_003_73E6(); return; };
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { PickableCollectIfNeeded_collect(); return; };
    gb.regs.a = gb_read(0xC5B0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { EnemyCollidedWithSword(); return; };
    gb.regs.a = gb_read(0xC14A);
    gb_write(0xFFE9, gb.regs.a);
    ResetPegasusBoots();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xE2);
    if (!GET_FLAG_Z()) goto func_003_6E2B_flameShooterEnd;
    gb.regs.a = gb_read(0xDBF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 4;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xC13E, gb.regs.a);
    IncrementEntityState(); return;
  func_003_6E2B_flameShooterEnd:;
    alu_cp8(gb.regs.a, 0x55);
    if (!GET_FLAG_Z()) goto func_003_6E2B_bouncingBombiteEnd;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { func_003_6F93(); return; };
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 8);
    return;
  func_003_6E2B_bouncingBombiteEnd:;
    alu_cp8(gb.regs.a, 0x51);
    if (!GET_FLAG_Z()) { jr_003_6F20(); return; };
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) { func_003_6F93(); return; };
}

void label_003_6F04(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    func_003_6F5C();
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.a = 1;
    gb_write(0xC160, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    EnemyCollidedWithSword_label_003_713B(); return;
}

void jr_003_6F20(void) {
    alu_cp8(gb.regs.a, 0x58);
    if (!GET_FLAG_Z()) { jr_003_6F2A(); return; };
}

void label_003_6F24(void) {
    func_003_6F93();
    CheckLinkCollisionWithProjectile_jr_003_6C54(); return;
}

void jr_003_6F2A(void) {
    alu_cp8(gb.regs.a, 0x2C);
    if (!GET_FLAG_Z()) { jr_003_6F6D(); return; };
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { func_003_6F5C(); return; };
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6F65;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6F69;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    func_003_6F5C(); return;
}

void func_003_6F5C(void) {
    func_003_6F93();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void Data_003_6F65(void) {
  Data_003_6F65_right:;
    /* data: db 16 */;
  Data_003_6F65_left:;
    /* data: db -16 */;
  Data_003_6F65_up:;
    /* data: db 0 */;
  Data_003_6F65_down:;
    /* data: db 0 */;
    Data_003_6F69(); return;
}

void Data_003_6F69(void) {
  Data_003_6F69_right:;
    /* data: db 0 */;
  Data_003_6F69_left:;
    /* data: db 0 */;
  Data_003_6F69_up:;
    /* data: db -16 */;
  Data_003_6F69_down:;
    /* data: db 16 */;
    jr_003_6F6D(); return;
}

void jr_003_6F6D(void) {
    alu_cp8(gb.regs.a, 0x9C);
    if (GET_FLAG_Z()) goto jr_003_6F6D_starOrAntiFairy;
    alu_cp8(gb.regs.a, 0x15);
    if (!GET_FLAG_Z()) goto jr_003_6F6D_starOrAntiFairyEnd;
  jr_003_6F6D_starOrAntiFairy:;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_003_6F6D_jr_003_6F81;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    goto jr_003_6F6D_jr_003_6F85;
  jr_003_6F6D_jr_003_6F81:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  jr_003_6F6D_jr_003_6F85:;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    func_003_6F93();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  jr_003_6F6D_starOrAntiFairyEnd:;
    alu_cp8(gb.regs.a, 0x5A);
    if (GET_FLAG_Z()) { label_003_6F24(); return; };
}

void func_003_6F93(void) {
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
    ResetPegasusBoots();
    gb.regs.a = 0x0C;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x82);
    if (!GET_FLAG_Z()) { jr_003_6FB9(); return; };
    gb.regs.e = 0x10;
    label_003_6FA7(); return;
}

void label_003_6FA7(void) {
    gb_push16(gb.regs.de);
    GetEntityXDistanceToLink_03();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.a = gb.regs.e;
    if (GET_FLAG_Z()) goto label_003_6FA7_jr_6FB3;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  label_003_6FA7_jr_6FB3:;
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    return;
}

void jr_003_6FB9(void) {
    gb.regs.a = 0x12;
    func_003_7565();
    gb.regs.hl = 0xFFE9;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = 8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { ConfigureEntityRecoil(); return; };
    gb.regs.a = 0x20;
    ConfigureEntityRecoil(); return;
}

void ConfigureEntityRecoil(void) {
    GetVectorTowardsLink();
    gb.regs.a = gb_read(0xFFD7);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC3F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    StartIgnoringHitsForEntity(); return;
}

void Data_003_6FE4(void) {
  Data_003_6FE4_right:;
    /* data: db $00 */;
  Data_003_6FE4_left:;
    /* data: db $01 */;
  Data_003_6FE4_up:;
    /* data: db $02 */;
  Data_003_6FE4_down:;
    /* data: db $03 */;
    EnemyCollidedWithSword(); return;
}

void EnemyCollidedWithSword(void) {
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xE2);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0xE6);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_defaultSwordCollision;
    gb.regs.a = gb_read(0xD499);
    switch(gb.regs.a) {
        case 0x00: NoopFunction(); return;
        case 0x01: goto EnemyCollidedWithSword_finalNightmareForm2Collisions;
        case 0x02: goto EnemyCollidedWithSword_finalNightmareForm3Collisions;
        case 0x03: goto EnemyCollidedWithSword_finalNightmareDefaultCollisions;
        case 0x04: goto EnemyCollidedWithSword_finalNightmareDefaultCollisions;
        case 0x05: goto EnemyCollidedWithSword_standardSwordCollision;
    }
  EnemyCollidedWithSword_finalNightmareForm2Collisions:;
    IncrementEntityState();
    gb_write(gb.regs.hl, 6);
    return;
  EnemyCollidedWithSword_finalNightmareForm3Collisions:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xC121);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_usingSpinAttack;
    gb.regs.a = gb_read(0xC16A);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) return;
  EnemyCollidedWithSword_usingSpinAttack:;
    IncrementEntityState(); return;
  EnemyCollidedWithSword_finalNightmareDefaultCollisions:;
    gb.regs.a = gb_read(0xFFEB);
  EnemyCollidedWithSword_defaultSwordCollision:;
    alu_cp8(gb.regs.a, 0xB9);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_buzzBlobEnd;
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_buzzBlobEnd;
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    gb.regs.a = 0x40;
    gb_write(0xD464, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC16A, gb.regs.a);
    gb_write(0xC121, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(0xFFF4, gb.regs.a);
    ApplyLinkCollisionWithEnemy(); return;
  EnemyCollidedWithSword_buzzBlobEnd:;
  EnemyCollidedWithSword_standardSwordCollision:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x55);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_bouncingBombiteEnd;
    gb.regs.a = 0x30;
    GetVectorTowardsLink();
    gb.regs.a = gb_read(0xFFD7);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 8);
    return;
  EnemyCollidedWithSword_bouncingBombiteEnd:;
    alu_cp8(gb.regs.a, 0x65);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_anglerFishEnd;
    func_003_6DDF();
    gb.regs.a = 8;
    gb_write(0xC13E, gb.regs.a);
    goto EnemyCollidedWithSword_slimeEyeEnd;
  EnemyCollidedWithSword_anglerFishEnd:;
    alu_cp8(gb.regs.a, 0x5B);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_slimeEyeEnd;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_003_6DDF(); return; };
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_jr_003_70A9;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_jr_003_709D;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto EnemyCollidedWithSword_continueDefaultCollision;
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
    return;
  EnemyCollidedWithSword_jr_003_709D:;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto EnemyCollidedWithSword_jr_003_70AC;
    func_003_6DDF();
    goto EnemyCollidedWithSword_continueDefaultCollision;
  EnemyCollidedWithSword_jr_003_70A9:;
    func_003_6DDF(); return;
  EnemyCollidedWithSword_jr_003_70AC:;
    gb.regs.a = 4;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x10;
    func_003_7565();
    goto EnemyCollidedWithSword_continueDefaultCollision;
  EnemyCollidedWithSword_slimeEyeEnd:;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto EnemyCollidedWithSword_continueDefaultCollision;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x51);
    if (GET_FLAG_Z()) { label_003_6F04(); return; };
    alu_cp8(gb.regs.a, 0x5C);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_genieEnd;
    gb.regs.a = gb_read(0xDCB7);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto EnemyCollidedWithSword_genieJarExtraRecoil;
    gb.regs.a = gb_read(0xD47C);
    alu_cp8(gb.regs.a, 1);
    gb.regs.a = 0x20;
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_genieJarStandardRecoil;
  EnemyCollidedWithSword_genieJarExtraRecoil:;
    gb.regs.a = 0x30;
  EnemyCollidedWithSword_genieJarStandardRecoil:;
    ConfigureEntityRecoil();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  EnemyCollidedWithSword_genieEnd:;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC1AC, gb.regs.a);
    label_D07();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC3F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    func_003_6DDF(); return;
  EnemyCollidedWithSword_continueDefaultCollision:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x8E);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_cueBallEnd;
    ResetPegasusBoots();
    goto EnemyCollidedWithSword_jr_003_714D;
  EnemyCollidedWithSword_cueBallEnd:;
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_ironMaskEnd;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_ironMaskEnd;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6FE4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto EnemyCollidedWithSword_jr_003_714D;
    ResetPegasusBoots();
    gb.regs.a = 0x10;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x10;
    func_003_7565();
    gb.regs.a = 0x10;
    ConfigureEntityRecoil();
  EnemyCollidedWithSword_label_003_713B:;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    label_D15(); return;
  EnemyCollidedWithSword_ironMaskEnd:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x15);
    if (GET_FLAG_Z()) { label_003_73E6(); return; };
  EnemyCollidedWithSword_jr_003_714D:;
    gb.regs.a = 1;
    gb_write(0xC160, gb.regs.a);
    gb.regs.a = gb_read(0xC16A);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_jr_003_715E;
    gb.regs.a = 0x0C;
    gb_write(0xC16D, gb.regs.a);
  EnemyCollidedWithSword_jr_003_715E:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    gb.regs.a = 0x30;
    ConfigureEntityRecoil();
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 9);
    gb.regs.a = gb_read(0xDCB7);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto EnemyCollidedWithSword_powerRecoil;
    gb.regs.a = gb_read(0xD47C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ApplySwordDamagesToEnemy(); return; };
  EnemyCollidedWithSword_powerRecoil:;
    ApplySwordDamagesToEnemy();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC4A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = 0x11;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto EnemyCollidedWithSword_dyingEnd;
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x40);
  EnemyCollidedWithSword_dyingEnd:;
    return;
}

void ApplySwordDamagesToEnemy(void) {
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC1AC, gb.regs.a);
    gb.regs.a = gb_read(0xDCB7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ApplySwordDamagesToEnemy_wearingRedTunic;
    gb.regs.a = gb_read(0xD47C);
    gb.regs.a = alu_and8(gb.regs.a, 1);
  ApplySwordDamagesToEnemy_wearingRedTunic:;
    gb.regs.hl = 0xC121;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14A;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = gb_read(0xDBFA);
    if (GET_FLAG_Z()) goto ApplySwordDamagesToEnemy_useStandardSwordLevel;
    gb.regs.a = alu_inc8(gb.regs.a);
  ApplySwordDamagesToEnemy_useStandardSwordLevel:;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC19E, gb.regs.a);
    label_003_71C0(); return;
}

void label_003_71C0(void) {
    gb.regs.hl = 0xC4D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0x43EC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC19E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xC19E);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x473C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xE6);
    if (!GET_FLAG_Z()) goto label_003_71C0_jr_7215;
    gb.regs.a = gb_read(0xD499);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto label_003_71C0_jr_7215;
    gb.regs.a = gb_read(0xC14A);
    gb_push16(gb.regs.af);
    func_003_6DDF();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_003_71C0_jr_7215;
    gb.regs.a = gb_read(0xC121);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_003_71C0_jr_7215;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
  label_003_71C0_jr_7215:;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 3);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto label_003_71C0_jr_7228;
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 7);
  label_003_71C0_jr_7228:;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x6C);
    if (!GET_FLAG_Z()) goto label_003_71C0_jr_7235;
    gb.regs.a = 0x13;
    gb_write(0xFFF3, gb.regs.a);
  label_003_71C0_jr_7235:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, 0xF0);
    if (GET_FLAG_C()) { jr_003_72B5(); return; };
    alu_cp8(gb.regs.a, 0xFE);
    if (!GET_FLAG_Z()) goto label_003_71C0_jr_7260;
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x12);
    StartIgnoringHitsForEntity();
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_IS_BOSS);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  label_003_71C0_jr_7260:;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_003_7279(); return; };
    StartIgnoringHitsForEntity();
    EntityBecomeStunned(); return;
}

void EntityBecomeStunned(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 6);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void jr_003_7279(void) {
    alu_cp8(gb.regs.a, 0xFD);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xF8);
    if (GET_FLAG_Z()) goto jr_003_7279_jr_7289;
    alu_cp8(gb.regs.a, 0xB9);
    if (!GET_FLAG_Z()) { jr_003_7293(); return; };
  jr_003_7279_jr_7289:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_003_729D(); return;
}

void jr_003_7293(void) {
    gb_write(gb.regs.hl, 0x2F);
    ConfigureNewEntity();
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    jr_003_729D(); return;
}

void jr_003_729D(void) {
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx(); return;
}

void jr_003_72B5(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    if (GET_FLAG_C()) goto jr_003_72B5_jr_72C2;
    if (!GET_FLAG_Z()) { jr_003_73B6(); return; };
  jr_003_72B5_jr_72C2:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) { jr_003_733E(); return; };
    alu_bit(2, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_7304(); return; };
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
    jr_003_72D8(); return;
}

void jr_003_72D8(void) {
    loop_start: ;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, gb.regs.c);
    if (GET_FLAG_Z()) goto jr_003_72D8_jr_72EE;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto jr_003_72D8_jr_72EE;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_003_7304(); return; };
  jr_003_72D8_jr_72EE:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb.regs.a = gb_read(0xDC57);
    gb_push16(gb.regs.af);
    gb.regs.a = 3;
    SwitchBank();
    label_27F2();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xDC57, gb.regs.a);
    jr_003_7304(); return;
}

void jr_003_7304(void) {
    gb.regs.a = 3;
    gb_write(0xC5A7, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    /* ld_dialog_low e, Dialog0B7 */;
    alu_cp8(gb.regs.a, 0x5A);
    if (GET_FLAG_Z()) goto jr_003_7304_openBossDefeatedDialog;
    /* ld_dialog_low e, Dialog0B9 */;
    alu_cp8(gb.regs.a, 0x63);
    if (GET_FLAG_Z()) goto jr_003_7304_openDialogAtBottom;
    /* ld_dialog_low e, Dialog0BD */;
    alu_cp8(gb.regs.a, 0x62);
    if (!GET_FLAG_Z()) { jr_003_733E(); return; };
  jr_003_7304_openBossDefeatedDialog:;
    gb.regs.a = gb.regs.e;
    OpenDialogInTable0();
    gb.regs.a = 0x5E;
    gb_write(0xD368, gb.regs.a);
    jr_003_733E(); return;
  jr_003_7304_openDialogAtBottom:;
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x10;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = gb.regs.e;
    OpenDialogInTable0();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    jr_003_733E(); return;
}

void jr_003_733E(void) {
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x2F);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_003_733E_jr_7361;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_003_733E_jr_7361:;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x12);
    if (!GET_FLAG_Z()) { jr_003_73B6(); return; };
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
    jr_003_736D(); return;
}

void jr_003_736D(void) {
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, gb.regs.c);
    if (GET_FLAG_Z()) { jr_003_73AA(); return; };
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto jr_003_736D_jr_737E;
    alu_cp8(gb.regs.a, 0x11);
    if (!GET_FLAG_Z()) { jr_003_73AA(); return; };
  jr_003_736D_jr_737E:;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_73AA(); return; };
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_003_73AA(); return; };
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x1F);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x73E7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    jr_003_73AA(); return;
}

void jr_003_73AA(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_003_736D(); return; };
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x2E);
    jr_003_73B6(); return;
}

void jr_003_73B6(void) {
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, 0xE6);
    if (!GET_FLAG_Z()) goto jr_003_73B6_jr_73CC;
    gb.regs.a = gb_read(0xD499);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_003_73D0(); return; };
    jr_003_73D9(); return;
  jr_003_73B6_jr_73CC:;
    alu_cp8(gb.regs.a, 0x59);
    if (!GET_FLAG_Z()) { jr_003_73D9(); return; };
}

void jr_003_73D0(void) {
    gb_write(gb.regs.hl, 0x28);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC8);
    return;
}

void jr_003_73D9(void) {
    gb_write(gb.regs.hl, 0x18);
    StartIgnoringHitsForEntity(); return;
}

void StartIgnoringHitsForEntity(void) {
    gb.regs.hl = 0xC4A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0A);
    label_003_73E6(); return;
}

void label_003_73E6(void) {
    return;
}

void Data_003_73E7(void) {
    /* data: db $2D, $2E, $38, $37 */;
}

void func_003_73EB(void) {
    gb.regs.hl = 0xC1AC;
    gb.regs.a = gb_read(0xC13E);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFB6;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC121;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { label_003_74E1(); return; };
    gb.regs.a = gb_read(0xC140);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { label_003_74E1(); return; };
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { label_003_74E1(); return; };
    gb.regs.de = 0xFFEE;
    gb.regs.hl = 0xD581;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC140;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto func_003_73EB_jr_7422;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_003_73EB_jr_7422:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.af);
    gb.regs.hl++;
    gb.regs.a = gb_read(0xC141);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { label_003_74E1(); return; };
    gb.regs.hl++;
    gb.regs.de = 0xFFEC;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC142;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto func_003_73EB_jr_7440;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_003_73EB_jr_7440:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.af);
    gb.regs.hl++;
    gb.regs.a = gb_read(0xC143);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { label_003_74E1(); return; };
    ResetPegasusBoots();
    gb.regs.a = 8;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x12;
    func_003_7565();
    gb.regs.a = 0x18;
    GetVectorTowardsLink();
    gb.regs.a = gb_read(0xFFD7);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC3F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    StartIgnoringHitsForEntity();
    gb_write(gb.regs.hl, 8);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    AlertSwordMoblins();
    gb.regs.hl = 0xC121;
    gb.regs.a = gb_read(0xC16A);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto func_003_73EB_jr_748B;
    gb.regs.a = 0x0C;
    gb_write(0xC16D, gb.regs.a);
  func_003_73EB_jr_748B:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xBE);
    if (!GET_FLAG_Z()) { jr_003_74C1(); return; };
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xD485);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { jr_003_74BF(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_003_73EB_jr_74B5;
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_003_73EB_jr_74B5;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_003_7571(); return; };
    gb.regs.a = 0x20;
    gb_write(0xC13E, gb.regs.a);
    func_003_7565();
    jr_003_74DC(); return;
  func_003_73EB_jr_74B5:;
    gb.regs.a = 0x10;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x20;
    func_003_7565();
    jr_003_74BF(); return;
}

void jr_003_74BF(void) {
    jr_003_74DC(); return;
}

void jr_003_74C1(void) {
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x74E4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC140);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0x74E8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC142);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD8, gb.regs.a);
    label_D15();
    jr_003_74DC(); return;
}

void jr_003_74DC(void) {
    gb.regs.a = 0x0C;
    gb_write(0xFFB6, gb.regs.a);
    return;
}

void label_003_74E1(void) {
    label_003_74EC(); return;
}

void Data_003_74E4(void) {
  Data_003_74E4_right:;
    /* data: db $00 */;
  Data_003_74E4_left:;
    /* data: db $F0 */;
  Data_003_74E4_up:;
    /* data: db $F8 */;
  Data_003_74E4_down:;
    /* data: db $FC */;
    Data_003_74E8(); return;
}

void Data_003_74E8(void) {
  Data_003_74E8_right:;
    /* data: db $FC */;
  Data_003_74E8_left:;
    /* data: db $FC */;
  Data_003_74E8_up:;
    /* data: db $F0 */;
  Data_003_74E8_down:;
    /* data: db $00 */;
    label_003_74EC(); return;
}

void label_003_74EC(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    alu_rra();
    if (!GET_FLAG_C()) { ret_003_7570(); return; };
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.de = 0xFFEE;
    gb.regs.hl = 0xD581;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto label_003_74EC_jr_7511;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  label_003_74EC_jr_7511:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.af);
    gb.regs.hl++;
    gb.regs.a = 4;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { ret_003_7570(); return; };
    gb.regs.hl++;
    gb.regs.de = 0xFFEC;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xFFD9;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto label_003_74EC_jr_752D;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  label_003_74EC_jr_752D:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.af);
    gb.regs.hl++;
    gb.regs.a = 5;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { ret_003_7570(); return; };
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_003_7570(); return; };
    ApplyLinkCollisionWithEnemy();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xBE);
    if (!GET_FLAG_Z()) { ret_003_7570(); return; };
    gb.regs.a = gb_read(0xD485);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_003_7570(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { ret_003_7570(); return; };
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { ret_003_7570(); return; };
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { jr_003_7571(); return; };
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0xA0);
    gb.regs.a = 0x20;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x30;
    func_003_7565(); return;
}

void func_003_7565(void) {
    GetVectorTowardsLink();
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFF9A, gb.regs.a);
    ret_003_7570(); return;
}

void ret_003_7570(void) {
    return;
}

void jr_003_7571(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x22);
    if (GET_FLAG_C()) { ret_003_7570(); return; };
    gb.regs.a = 0x0A;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x30;
    if (GET_FLAG_Z()) goto jr_003_7571_jr_758B;
    gb.regs.a = 0xD0;
  jr_003_7571_jr_758B:;
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFF2, gb.regs.a);
    return;
    gb.regs.a = 0x20;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x20;
    func_003_7565(); return;
}

void func_003_75A2(void) {
    gb.regs.e = 0x0F;
    gb.regs.d = 0;
    entitiesLoop(); return;
}

void entitiesLoop(void) {
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, gb.regs.c);
    if (GET_FLAG_Z()) { checkNextEntity(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { checkNextEntity(); return; };
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) { checkNextEntity(); return; };
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) { checkNextEntity(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { checkNextEntity(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { checkNextEntity(); return; };
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { checkNextEntity(); return; };
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x55);
    if (!GET_FLAG_Z()) goto entitiesLoop_selfBombiteEnd;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, gb.regs.b);
  entitiesLoop_selfBombiteEnd:;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x55);
    if (!GET_FLAG_Z()) goto entitiesLoop_bombiteEnd;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    checkNextEntity(); return;
  entitiesLoop_bombiteEnd:;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { label_003_7715(); return; };
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { forceCollisionEnd(); return; };
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xE6);
    if (!GET_FLAG_Z()) goto entitiesLoop_finalNightmareEnd;
    gb.regs.a = gb_read(0xD499);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto entitiesLoop_finalNightmareEnd;
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { forceCollision(); return; };
  entitiesLoop_finalNightmareEnd:;
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { forceCollisionEnd(); return; };
}

void forceCollision(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    jr_003_7737(); return;
}

void forceCollisionEnd(void) {
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_003_76AC(); return; };
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xCA);
    if (!GET_FLAG_Z()) goto forceCollisionEnd_jr_7680;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_76AC(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  forceCollisionEnd_jr_7680:;
    alu_cp8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) { jr_003_76AC(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_76AC(); return; };
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_76AC(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x7F);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = 3;
    gb_write(0xDC57, gb.regs.a);
    label_27F2();
    gb.regs.a = 0x18;
    gb_write(0xDC57, gb.regs.a);
    jr_003_76AC(); return;
}

void jr_003_76AC(void) {
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { checkNextEntity(); return; };
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { checkNextEntity(); return; };
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_Z()) { jr_003_7710(); return; };
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_003_7710(); return; };
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_7710(); return; };
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { forceCollision(); return; };
    gb_write(gb.regs.hl, 1);
    gb_push16(gb.regs.de);
    gb.regs.a = 0x32;
    SpawnNewEntity();
    if (GET_FLAG_C()) goto jr_003_76AC_jr_770D;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_003_76AC_jr_770D:;
    gb.regs.de = gb_pop16();
    jr_003_7737(); return;
}

void jr_003_7710(void) {
    func_003_77A7();
    jr_003_7737(); return;
}

void label_003_7715(void) {
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto label_003_7715_jr_771F;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_003_7734(); return; };
  label_003_7715_jr_771F:;
    GetEntityTransitionCountdown();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { jr_003_7737(); return; };
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_003_7734(); return;
}

void jr_003_7734(void) {
    checkNextEntity(); return;
}

void jr_003_7737(void) {
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) { jr_003_775A(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_003_779A(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_003_779A(); return; };
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto jr_003_7737_jr_7751;
    gb_push16(gb.regs.de);
    LiftableRockStartSmashingAnimation();
    gb.regs.de = gb_pop16();
    checkNextEntity(); return;
  jr_003_7737_jr_7751:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_003_7782(); return; };
}

void jr_003_775A(void) {
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { checkNextEntity(); return; };
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    jr_003_779A(); return;
}

void jr_003_7782(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_779A(); return; };
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto jr_003_7782_jr_7795;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_7798(); return; };
  jr_003_7782_jr_7795:;
    UnloadEntity();
    jr_003_7798(); return;
}

void jr_003_7798(void) {
    checkNextEntity(); return;
}

void jr_003_779A(void) {
    GetEntityTransitionCountdown();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    checkNextEntity(); return;
}

void checkNextEntity(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { entitiesLoop(); return; };
    return;
}

void func_003_77A7(void) {
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto func_003_77A7_jr_77B8;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_003_77A7_jr_77B8;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 3);
    return;
  func_003_77A7_jr_77B8:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC3F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb_push16(gb.regs.de);
    func_003_77D6();
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
    return;
}

void func_003_77D6(void) {
    label_003_71C0(); return;
}

void CheckExplosionInteractionWithEntities(void) {
    gb.regs.e = 0x0F;
    gb.regs.d = 0;
  CheckExplosionInteractionWithEntities_loop:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) goto CheckExplosionInteractionWithEntities_noDamage;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x60);
    if (!GET_FLAG_Z()) goto CheckExplosionInteractionWithEntities_noDamage;
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto CheckExplosionInteractionWithEntities_noDamage;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto CheckExplosionInteractionWithEntities_noDamage;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto CheckExplosionInteractionWithEntities_noDamage;
    gb.regs.a = 7;
    gb_write(0xC19E, gb.regs.a);
    func_003_77A7();
    gb.regs.a = 0x30;
    GetVectorTowardsOtherEntity();
    gb.regs.hl = 0xC400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl, gb.regs.a);
  CheckExplosionInteractionWithEntities_noDamage:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto CheckExplosionInteractionWithEntities_loop;
    return;
}

void GetVectorTowardsOtherEntity(void) {
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF99, gb.regs.a);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    GetVectorTowardsLink();
    gb.regs.de = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    return;
}

void EntityCollisionPointsX(void) {
    /* data: db 13,  02,  08,  08 */;
    /* data: db 10,  06,  08,  08 */;
    /* data: db 16, -01,  08,  08 */;
    /* data: db 13,  02,  08,  08 */;
}

void EntityCollisionPointsY(void) {
    /* data: db 08,  08,  02,  13 */;
    /* data: db 08,  08,  06,  10 */;
    /* data: db 08,  08, -01,  16 */;
    /* data: db 08,  08,  02,  13 */;
}

void CollisionsTableFlagPerDirection(void) {
    /* data: db $01, $02, $04, $08 */;
}

void EntityOnConveyorMovementX(void) {
    /* data: db 0,  0, -1, +1, +1, -1, +1, -1 */;
}

void EntityOnConveyorMovementY(void) {
    /* data: db +1, -1,  0,  0, +1, +1, -1, -1 */;
}

void ApplyEntityInteractionWithBackground(void) {
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb_write(0xC503, gb.regs.a);
    gb_write(0xC50D, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_negativeZ;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
  ApplyEntityInteractionWithBackground_negativeZ:;
    gb.regs.hl = 0xC4F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(4, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    func_003_7E0E();
    goto ApplyEntityInteractionWithBackground_skipTouchedDeepWater;
  ApplyEntityInteractionWithBackground_touchedDeepWater:;
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xCC);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_setGroundStatus;
    alu_cp8(gb.regs.a, 0xA0);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_setGroundStatus;
    alu_cp8(gb.regs.a, 0xD5);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_setGroundStatus;
    alu_cp8(gb.regs.a, 0x6D);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_setGroundStatus;
    alu_cp8(gb.regs.a, 0xC1);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_setGroundStatus;
    UnloadEntity();
    goto ApplyEntityInteractionWithBackground_createWaterSplash;
  ApplyEntityInteractionWithBackground_skipTouchedDeepWater:;
    gb.regs.e = 1;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x67);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_setGroundStatus;
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_touchedDeepWater;
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_touchedDeepWater;
    alu_cp8(gb.regs.a, 0xB0);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_setGroundStatus;
    gb.regs.e = alu_inc8(gb.regs.e);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_setGroundStatus;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_setGroundStatusEnd;
    gb.regs.e = alu_inc8(gb.regs.e);
  ApplyEntityInteractionWithBackground_setGroundStatus:;
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
  ApplyEntityInteractionWithBackground_setGroundStatusEnd:;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_createWaterSplashEnd;
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_createWaterSplashEnd;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_createWaterSplashEnd;
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_createWaterSplashEnd;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_sidescrolling;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_createWaterSplashEnd;
    alu_cp8(gb.regs.a, 0xE7);
    if (!GET_FLAG_C()) goto ApplyEntityInteractionWithBackground_createWaterSplashEnd;
    goto ApplyEntityInteractionWithBackground_sidescrollingEnd;
  ApplyEntityInteractionWithBackground_sidescrolling:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xAC);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_sidescrollingEnd;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_sidescrollingEnd;
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
  ApplyEntityInteractionWithBackground_sidescrollingEnd:;
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_createWaterSplashEnd;
  ApplyEntityInteractionWithBackground_createWaterSplash:;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 1;
    AddTranscientVfx();
  ApplyEntityInteractionWithBackground_createWaterSplashEnd:;
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xF1);
    if (GET_FLAG_C()) goto ApplyEntityInteractionWithBackground_conveyorEnd;
    gb.regs.a = alu_sub8(gb.regs.a, 0xF1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_conveyorMovementEnd;
    gb.regs.hl = 0x7429;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x7431;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  ApplyEntityInteractionWithBackground_conveyorMovementEnd:;
    goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
  ApplyEntityInteractionWithBackground_conveyorEnd:;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x61);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_onPit;
    gb.regs.a = gb_read(0xFFDA);
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_onPit;
    alu_cp8(gb.regs.a, 0x51);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
  ApplyEntityInteractionWithBackground_onPit:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x6D);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    alu_cp8(gb.regs.a, 0xD5);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    alu_cp8(gb.regs.a, 0x36);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    alu_cp8(gb.regs.a, 0xC1);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_fall;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x61);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
  ApplyEntityInteractionWithBackground_fall:;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.hl = 0xC4B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC4C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x6F);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    gb_write(gb.regs.hl, 0x48);
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_interactWithGroundEnd;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x2F);
    gb.regs.a = 0x18;
    gb_write(0xFFF2, gb.regs.a);
  ApplyEntityInteractionWithBackground_interactWithGroundEnd:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x6D);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC503, gb.regs.a);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_collisionXEnd;
    gb.regs.de = 0;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_positiveX;
    gb.regs.e = alu_inc8(gb.regs.e);
  ApplyEntityInteractionWithBackground_positiveX:;
    ApplyEntityCollisionWithObject();
    if (GET_FLAG_C()) goto ApplyEntityInteractionWithBackground_collisionXEnd;
    gb.regs.a = gb_read(0xFFAF);
    gb_write(0xC503, gb.regs.a);
    gb.regs.a = gb_read(0xFFBE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_collisionXEnd;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(gb.regs.hl, gb.regs.a);
  ApplyEntityInteractionWithBackground_collisionXEnd:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_return;
    gb.regs.de = 2;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_negativeY;
    gb.regs.e = alu_inc8(gb.regs.e);
  ApplyEntityInteractionWithBackground_negativeY:;
    ApplyEntityCollisionWithObject();
    if (GET_FLAG_C()) goto ApplyEntityInteractionWithBackground_return;
    gb.regs.a = gb_read(0xFFAF);
    gb_write(0xC50D, gb.regs.a);
    gb.regs.a = gb_read(0xFFBE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityInteractionWithBackground_return;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(gb.regs.hl, gb.regs.a);
  ApplyEntityInteractionWithBackground_return:;
    return;
}

void FineCollisionShapes(void) {
  FineCollisionShapes__7C:;
    /* data: db 1, 0 */;
    /* data: db 1, 0 */;
  FineCollisionShapes__7D:;
    /* data: db 0, 1 */;
    /* data: db 0, 1 */;
  FineCollisionShapes__7E:;
    /* data: db 1, 1 */;
    /* data: db 0, 0 */;
  FineCollisionShapes__7F:;
    /* data: db 0, 0 */;
    /* data: db 1, 1 */;
  FineCollisionShapes__80:;
    /* data: db 1, 0 */;
    /* data: db 1, 0 */;
  FineCollisionShapes__81:;
    /* data: db 0, 1 */;
    /* data: db 0, 1 */;
  FineCollisionShapes__82:;
    /* data: db 1, 1 */;
    /* data: db 0, 0 */;
  FineCollisionShapes__83:;
    /* data: db 0, 0 */;
    /* data: db 1, 1 */;
  FineCollisionShapes__84:;
    /* data: db 0, 1 */;
    /* data: db 1, 1 */;
  FineCollisionShapes__85:;
    /* data: db 1, 0 */;
    /* data: db 1, 1 */;
  FineCollisionShapes__86:;
    /* data: db 1, 1 */;
    /* data: db 0, 1 */;
  FineCollisionShapes__87:;
    /* data: db 1, 1 */;
    /* data: db 1, 0 */;
  FineCollisionShapes__88:;
    /* data: db 1, 0 */;
    /* data: db 0, 0 */;
  FineCollisionShapes__89:;
    /* data: db 0, 1 */;
    /* data: db 0, 0 */;
  FineCollisionShapes__8A:;
    /* data: db 0, 0 */;
    /* data: db 1, 0 */;
  FineCollisionShapes__8B:;
    /* data: db 0, 0 */;
    /* data: db 0, 1 */;
  FineCollisionShapes__8C:;
    /* data: db 0, 1 */;
    /* data: db 1, 0 */;
  FineCollisionShapes__8D:;
    /* data: db 1, 0 */;
    /* data: db 0, 1 */;
    ApplyEntityCollisionWithObject(); return;
}

void ApplyEntityCollisionWithObject(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.c = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0x7405;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_jr_7B0E;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_jr_7AF9;
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_jr_7B0E;
  ApplyEntityCollisionWithObject_jr_7AF9:;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.c);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_positiveZ;
    gb.regs.c = 0;
  ApplyEntityCollisionWithObject_positiveZ:;
    gb.regs.c = alu_srl(gb.regs.c);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    goto ApplyEntityCollisionWithObject_jr_7B13;
  ApplyEntityCollisionWithObject_jr_7B0E:;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
  ApplyEntityCollisionWithObject_jr_7B13:;
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.c = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0x7415;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFDC, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xFFD8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0xD7C6;
    gb.regs.a = gb.regs.h;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.h = gb.regs.a;
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFAF, gb.regs.a);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_isHookshottable;
    gb_push16(gb.regs.de);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    GetObjectPhysicsFlagsAndRestoreBank3();
    gb.regs.de = gb_pop16();
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xCC);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_waterEntity;
    alu_cp8(gb.regs.a, 0x99);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_waterEntityEnd;
  ApplyEntityCollisionWithObject_waterEntity:;
    gb.regs.a = gb_read(0xFFDA);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
    goto ApplyEntityCollisionWithObject_doesCollide;
  ApplyEntityCollisionWithObject_waterEntityEnd:;
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_pit;
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_pit;
    alu_cp8(gb.regs.a, 0x51);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_pitEnd;
  ApplyEntityCollisionWithObject_pit:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_doesCollide;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x59);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_doesCollide;
    goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
  ApplyEntityCollisionWithObject_pitEnd:;
    alu_cp8(gb.regs.a, 0x7C);
    if (GET_FLAG_C()) goto ApplyEntityCollisionWithObject_fineCollisionEnd;
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_C()) goto ApplyEntityCollisionWithObject_fineCollisionEnd;
    alu_cp8(gb.regs.a, 0x80);
    gb.regs.a = gb_read(0xFFEB);
    if (GET_FLAG_C()) goto ApplyEntityCollisionWithObject_openDoor;
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
    goto ApplyEntityCollisionWithObject_fineCollision;
  ApplyEntityCollisionWithObject_openDoor:;
    alu_cp8(gb.regs.a, 0x16);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCollisionsTableFlagsAndReturn;
    alu_cp8(gb.regs.a, 0x17);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCollisionsTableFlagsAndReturn;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCollisionsTableFlagsAndReturn;
  ApplyEntityCollisionWithObject_fineCollision:;
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.a = alu_sub8(gb.regs.a, 0x7C);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x7622;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFDB);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFDC);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.de = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
  ApplyEntityCollisionWithObject_fineCollisionEnd:;
    gb.regs.a = gb_read(0xFFDA);
    alu_cp8(gb.regs.a, 0xD0);
    if (GET_FLAG_C()) goto ApplyEntityCollisionWithObject_ledgeEnd;
    alu_cp8(gb.regs.a, 0xD4);
    if (!GET_FLAG_C()) goto ApplyEntityCollisionWithObject_ledgeEnd;
    gb.regs.a = alu_sub8(gb.regs.a, 0xD0);
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_jr_7C1A;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_doesCollide;
    gb.regs.hl = 0xC4F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_doesCollide;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_jr_7C28;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_jr_7C17;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_jr_7C28;
  ApplyEntityCollisionWithObject_jr_7C17:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    goto ApplyEntityCollisionWithObject_jr_7C28;
  ApplyEntityCollisionWithObject_jr_7C1A:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_doesCollide;
    gb.regs.hl = 0xC4F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  ApplyEntityCollisionWithObject_jr_7C28:;
    goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
  ApplyEntityCollisionWithObject_ledgeEnd:;
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCollisionsTableFlagsAndReturn;
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_C()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto ApplyEntityCollisionWithObject_doesCollide;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_hookshotEnd;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_hookshotEnd;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_hookshotOnSwitchBlockEnd;
    gb.regs.a = gb_read(0xD7AE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
  ApplyEntityCollisionWithObject_hookshotOnSwitchBlockEnd:;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xDB);
    if (GET_FLAG_C()) goto ApplyEntityCollisionWithObject_setCollisionsTableFlagsAndReturn;
    alu_cp8(gb.regs.a, 0xDD);
    if (!GET_FLAG_C()) goto ApplyEntityCollisionWithObject_setCollisionsTableFlagsAndReturn;
    gb_push16(gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 0xDB);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x7855;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xD7B0);
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
  ApplyEntityCollisionWithObject_doesCollide:;
    gb.regs.a = gb_read(0xFFDA);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_hookshotEnd;
  ApplyEntityCollisionWithObject_isHookshottable:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_hookshotEnd;
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x26);
    if (GET_FLAG_C()) goto ApplyEntityCollisionWithObject_hookshotClearEnd;
    UnloadEntity();
  ApplyEntityCollisionWithObject_hookshotClearEnd:;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
  ApplyEntityCollisionWithObject_hookshotEnd:;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ApplyEntityCollisionWithObject_setCarryFlagAndReturn;
  ApplyEntityCollisionWithObject_setCollisionsTableFlagsAndReturn:;
    gb.regs.hl = 0x7425;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
  ApplyEntityCollisionWithObject_setCarryFlagAndReturn:;
    alu_scf();
    return;
}

void SwitchBlockLoweredStatePerObject(void) {
    /* data: db $00, $02 */;
}

void ApplySwordIntersectionWithObjects(void) {
    gb.regs.de = 0;
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFDC, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    gb.regs.c = gb.regs.a;
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.b = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.a = gb.regs.h;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.h = gb.regs.a;
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFAF, gb.regs.a);
    alu_cp8(gb.regs.a, 0xAC);
    if (GET_FLAG_Z()) { jr_003_7E03(); return; };
    alu_cp8(gb.regs.a, 0xAB);
    if (!GET_FLAG_Z()) { jr_003_7D6B(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplySwordIntersectionWithObjects_jr_7CFD;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDE7E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_7E03(); return; };
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_003_7E03(); return; };
  ApplySwordIntersectionWithObjects_jr_7CFD:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { jr_003_7D6B(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_003_7D6B(); return; };
    gb_push16(gb.regs.hl);
    gb.regs.a = 0x12;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = 8;
    SpawnNewEntity();
    if (GET_FLAG_C()) { jr_003_7D6A(); return; };
    gb.regs.hl = gb_pop16();
    gb.regs.a = 0xAC;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xDE80, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.d = gb.regs.h;
    gb.regs.e = gb.regs.l;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.d);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xC1A2;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xC3CD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplySwordIntersectionWithObjects_jr_7D63;
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(0xC3CD, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplySwordIntersectionWithObjects_jr_7D63;
    gb.regs.a = 0x40;
    gb_write(0xDE7E, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xDE7F, gb.regs.a);
  ApplySwordIntersectionWithObjects_jr_7D63:;
    gb.regs.de = 0x69A2;
    gb_push16(gb.regs.de);
    label_003_51F5(); return;
}

void jr_003_7D6A(void) {
    gb.regs.hl = gb_pop16();
    jr_003_7D6B(); return;
}

void jr_003_7D6B(void) {
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    GetObjectPhysicsFlagsAndRestoreBank3();
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_003_7E03(); return; };
    gb_write(0xFFDA, gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { label_003_7E05(); return; };
    alu_cp8(gb.regs.a, 0xD0);
    if (GET_FLAG_C()) { jr_003_7DC0(); return; };
    alu_cp8(gb.regs.a, 0xD4);
    if (!GET_FLAG_C()) { jr_003_7DC0(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 0xD0);
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { jr_003_7DB0(); return; };
    gb.regs.hl = 0xC4F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_003_7DE3(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_003_7E03(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_003_7D6B_jr_7DAC;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_003_7E03(); return; };
  jr_003_7D6B_jr_7DAC:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    jr_003_7E03(); return;
}

void jr_003_7DB0(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_003_7DE3(); return; };
    gb.regs.hl = 0xC4F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_003_7E03(); return;
}

void jr_003_7DC0(void) {
    alu_cp8(gb.regs.a, 0x7C);
    if (GET_FLAG_C()) { label_003_7DCD(); return; };
    alu_cp8(gb.regs.a, 0x90);
    if (GET_FLAG_C()) { jr_003_7E03(); return; };
    if (!GET_FLAG_C()) { label_003_7DCD(); return; };
    jr_003_7E03(); return;
}

void label_003_7DCD(void) {
    gb.regs.a = gb_read(0xFFDA);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_C()) { jr_003_7E03(); return; };
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) { jr_003_7E03(); return; };
    alu_cp8(gb.regs.a, 0x51);
    if (GET_FLAG_Z()) { jr_003_7E03(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) { jr_003_7DE3(); return; };
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_003_7E03(); return; };
}

void jr_003_7DE3(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_003_7DE3_jr_7DF3;
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) return;
  jr_003_7DE3_jr_7DF3:;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_scf();
    return;
}

void jr_003_7E03(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void label_003_7E05(void) {
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 1);
    label_003_7E09(); return;
}

void label_003_7E09(void) {
    if (GET_FLAG_Z()) { jr_003_7DE3(); return; };
    UnloadEntityAndReturn(); return;
}

void func_003_7E0E(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 1);
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 7);
    gb_write(0xFFDC, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.a = gb.regs.h;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.h = gb.regs.a;
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFAF, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    GetObjectPhysicsFlagsAndRestoreBank3();
    gb_write(0xFFDA, gb.regs.a);
    return;
}

void GetVectorTowardsLink(void) {
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GetVectorTowardsLink_cancelAndReturn;
    GetEntityYDistanceToLink_03();
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetVectorTowardsLink_absoluteY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetVectorTowardsLink_absoluteY:;
    gb_write(0xFFE3, gb.regs.a);
    GetEntityXDistanceToLink_03();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetVectorTowardsLink_absoluteX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetVectorTowardsLink_absoluteX:;
    gb_write(0xFFE4, gb.regs.a);
    gb.regs.e = 0;
    gb.regs.hl = 0xFFE3;
    gb.regs.a = gb_read(0xFFE4);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) goto GetVectorTowardsLink_noSwap1;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFE3);
    gb_write(0xFFE4, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFFE3, gb.regs.a);
  GetVectorTowardsLink_noSwap1:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE2, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.d = gb.regs.a;
  GetVectorTowardsLink_divideLoop:;
    gb.regs.a = gb_read(0xFFE2);
    gb.regs.hl = 0xFFE3;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) goto GetVectorTowardsLink_incResult;
    gb.regs.hl = 0xFFE4;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) goto GetVectorTowardsLink_decCounter;
  GetVectorTowardsLink_incResult:;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFD7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  GetVectorTowardsLink_decCounter:;
    gb_write(0xFFE2, gb.regs.a);
    gb.regs.d = alu_dec8(gb.regs.d);
    if (!GET_FLAG_Z()) goto GetVectorTowardsLink_divideLoop;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GetVectorTowardsLink_noSwap2;
    gb.regs.a = gb_read(0xFFD7);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFFD8, gb.regs.a);
  GetVectorTowardsLink_noSwap2:;
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    if (!GET_FLAG_Z()) goto GetVectorTowardsLink_positiveResultY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
  GetVectorTowardsLink_positiveResultY:;
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    if (GET_FLAG_Z()) goto GetVectorTowardsLink_positiveResultX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
  GetVectorTowardsLink_positiveResultX:;
    return;
  GetVectorTowardsLink_cancelAndReturn:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    return;
}

void ApplyVectorTowardsLink(void) {
    ApplyVectorTowardsLinkAndReturn();
    ApplyVectorTowardsLinkAndReturn(); return;
}

void ApplyVectorTowardsLinkAndReturn(void) {
    GetVectorTowardsLink();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void GetEntityXDistanceToLink_03(void) {
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityXDistanceToLink_03_positive;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityXDistanceToLink_03_positive:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityYDistanceToLink_03(void) {
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto GetEntityYDistanceToLink_03_negative;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityYDistanceToLink_03_negative:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityDirectionToLink_03(void) {
    GetEntityXDistanceToLink_03();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_03_positiveX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_03_positiveX:;
    gb_push16(gb.regs.af);
    GetEntityYDistanceToLink_03();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_03_positiveY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_03_positiveY:;
    gb.regs.de = gb_pop16();
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto GetEntityDirectionToLink_03_vertical;
    gb.regs.a = gb_read(0xFFD7);
    goto GetEntityDirectionToLink_03_verticalEnd;
  GetEntityDirectionToLink_03_vertical:;
    gb.regs.a = gb_read(0xFFD8);
  GetEntityDirectionToLink_03_verticalEnd:;
    gb.regs.e = gb.regs.a;
    return;
}

void UpdateEntityPosWithSpeed_03(void) {
    AddEntitySpeedToPos_03();
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.c = gb.regs.a;
    AddEntitySpeedToPos_03();
    gb.regs.bc = gb_pop16();
    return;
}

void AddEntitySpeedToPos_03(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_03_return;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC260;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC200;
  AddEntitySpeedToPos_03_updatePosition:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_03_positive;
    gb.regs.e = 0xF0;
  AddEntitySpeedToPos_03_positive:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  AddEntitySpeedToPos_03_return:;
    return;
}

void AddEntityZSpeedToPos_03(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { AddEntitySpeedToPos_03_return(); return; };
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC330;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC310;
    AddEntitySpeedToPos_03_updatePosition(); return;
}

void ReturnIfNonInteractive_03(void) {
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_03_skip;
  ReturnIfNonInteractive_03_allowInactiveEntity:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_03_skip;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_03_creditsEnd;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_03_skip;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_03_skip;
  ReturnIfNonInteractive_03_creditsEnd:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC1A8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_03_skip;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_03_return;
  ReturnIfNonInteractive_03_skip:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ReturnIfNonInteractive_03_return:;
    return;
}

void ApplyRecoilIfNeeded_03(void) {
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    label_3E8E();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC3F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    UpdateEntityPosWithSpeed_03();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto ApplyRecoilIfNeeded_03_restoreOriginalSpeed;
    ApplyEntityInteractionWithBackground();
  ApplyRecoilIfNeeded_03_restoreOriginalSpeed:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    StopEntityRecoilOnCollision();
    return;
}
