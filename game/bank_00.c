/* Auto-generated from LADX Disassembly - Bank 0x00 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void LoadPieceOfHeartMeterTiles1(void);
void LoadPieceOfHeartMeterTiles2(void);
void ClearPieceOfHeartMeterTiles1(void);
void ClearPieceOfHeartMeterTiles2(void);
void CopyTilesToPieceOfHeartMeter(void);
void Start(void);
void Init(void);
void RenderLoop(void);
void IntroSeaScreenSections(void);
void IntroBeachScreenSections(void);
void InterruptLCDStatus(void);
void InterruptSerial(void);
void LoadRequestedGfx(void);
void BlockUpdateAnimationStageTable(void);
void InterruptVBlank(void);
void PhotoAlbumVBlankHandler(void);
void LoadTiles(void);
void LoadOverworldBGTiles(void);
void LoadEntityTiles(void);
void UpdateEntityTilesB(void);
void LoadInventorySirenInstruments(void);
void TilesGfxSource(void);
void TilesDestination(void);
void LoadBGTilesCommands8ToD(void);
void SwitchBank(void);
void SwitchAdjustedBank(void);
void ReloadSavedBank(void);
void LoadDungeonMinimapTiles(void);
void PlayAudioStep(void);
void func_020_6A30_trampoline(void);
void RestoreBankAndReturn(void);
void func_020_6AC1_trampoline(void);
void UpdateIntroSeaBGPalettes_trampoline(void);
void ClearFileMenuBG_trampoline(void);
void LoadFileMenuBG_trampoline(void);
void CopyLinkTunicPalette_trampoline(void);
void LoadBank1AndReturn(void);
void func_91D(void);
void RestoreStackedBankAndReturn(void);
void func_020_6D0E_trampoline(void);
void func_983(void);
void func_999(void);
void CheckPushedTombStone_trampoline(void);
void GetEntityInitHandler_trampoline(void);
void func_020_4874_trampoline(void);
void func_020_4954_trampoline(void);
void ReplaceObjects56and57_trampoline(void);
void CopyDataToVRAM_noDMA(void);
void CopyDataToVRAM(void);
void CopyColorDungeonSymbols(void);
void func_036_505F_trampoline(void);
void func_036_4F9B_trampoline(void);
void func_A5F(void);
void func_003_5A2E_trampoline(void);
void func_036_4F68_trampoline(void);
void func_020_6D52_trampoline(void);
void func_036_4BE8_trampoline(void);
void func_A9B(void);
void Spawn2x2RubbleEntities_trampoline(void);
void RestoreStackedBank(void);
void ChangeBGColumnPaletteAndExecuteDrawCommands(void);
void func_036_703E_trampoline(void);
void cycleInstrumentItemColor_trampoline(void);
void func_036_4A77_trampoline(void);
void GetOwlStatueDialogId_trampoline(void);
void SpawnPhotographer_trampoline(void);
void LoadPhotoBgMap_trampoline(void);
void AdjustBankNumberForGBC(void);
void CopyObjectsAttributesToWRAM2(void);
void BackupObjectInRAM2(void);
void CopyData_trampoline(void);
void CopyBGMapFromBank(void);
void CopyToBGMap0(void);
void func_BB5(void);
void LoadBaseTiles_trampoline(void);
void func_BC5(void);
void Farcall(void);
void Farcall_trampoline(void);
void UpdateLinkWalkingAnimation_trampoline(void);
void GetEntitySlowTransitionCountdown(void);
void GetEntityPrivateCountdown1(void);
void GetEntityTransitionCountdown(void);
void IsZero(void);
void CreateTradingItemEntity(void);
void PlayWrongAnswerJingle(void);
void ReadTileValueFromAsciiTable(void);
void ReadTileValueFromDiacriticsTable(void);
void ReadValueInDialogsBank(void);
void CopySirenInstrumentTiles(void);
void PlayBombExplosionSfx(void);
void AlertSwordMoblins(void);
void DecrementEntityIgnoreHitsCountdown(void);
void MarkTriggerAsResolved(void);
void ApplyMapFadeOutTransitionWithNoise(void);
void ApplyMapFadeOutTransition(void);
void ApplyMapFadeOutTransitionWithSound(void);
void playNoiseStairs(void);
void disableMovementInTransition(void);
void ResetSpinAttack(void);
void ResetPegasusBoots(void);
void CopyLinkFinalPositionToPosition(void);
void AddTranscientVfx(void);
void label_D07(void);
void label_D15(void);
void SelectRoomTilesets(void);
void ExecuteGameplayHandler(void);
void presentSaveScreenIfNeeded(void);
void jumpToGameplayHandler(void);
void FaceShrineMuralHandler(void);
void PeachPictureHandler(void);
void MarinBeachHandler(void);
void WorldMapHandler(void);
void FileSaveHandler(void);
void IntroHandler(void);
void AnimateEntitiesAndRestoreBank17(void);
void AnimateEntitiesAndRestoreBank(void);
void AnimateEntitiesAndRestoreBank01(void);
void AnimateEntitiesAndRestoreBank02(void);
void FileSelectionHandler(void);
void FileCreationHandler(void);
void FileDeletionHandler(void);
void FileCopyHandler(void);
void WorldHandler(void);
void InventoryHandler(void);
void PhotoAlbumHandler(void);
void PhotoPictureHandler(void);
void WorldInteractiveHandler(void);
void label_1012(void);
void returnFromGameplayHandler(void);
void DialogForItem(void);
void ApplyGotItem(void);
void InitGotItemSequence(void);
void label_114F(void);
void LinkMotionTeleportUpHandler(void);
void LinkMotionPassOutHandler(void);
void LinkMotionDefaultHandler(void);
void CheckItemsToUse(void);
void UseItem(void);
void UseShield(void);
void UseShovel(void);
void UseHookshot(void);
void label_1321(void);
void SetShieldVals(void);
void func_020_4B4A_trampoline(void);
void PlaceBomb(void);
void UsePowerBracelet(void);
void UseBoomerang(void);
void PlayerProjectileOffsetXPerDirection(void);
void PlayerProjectileOffsetYPerDirection(void);
void PlayerProjectileSpeedXPerDirection(void);
void PlayerProjectileSpeedYPerDirection(void);
void data_13AD(void);
void data_13B5(void);
void ShootArrow(void);
void label_140F(void);
void SpawnPlayerProjectile(void);
void UseMagicPowder(void);
void PegasusBootsJumpBoostXTable(void);
void PegasusBootsJumpBoostYTable(void);
void UseRocsFeather(void);
void SwordRandomSfxTable(void);
void UseSword(void);
void label_1562(void);
void func_157C(void);
void SwordCollisionMapX(void);
void SwordCollisionMapY(void);
void CheckStaticSwordCollision_trampoline(void);
void CheckStaticSwordCollision(void);
void label_1629(void);
void label_1637(void);
void label_1653(void);
void LinkDirectionToSwordCollisionRangeX(void);
void LinkDirectionToSwordCollisionRangeY(void);
void CheckItemsSwordCollision(void);
void XPositionIncrementPegasusRunning(void);
void YPositionIncrementPegasusRunning(void);
void UsePegasusBoots(void);
void DisplayTransientVfxForLinkRunning(void);
void ClearLinkPositionIncrement(void);
void ApplyLinkMotionState(void);
void func_1819(void);
void func_1828(void);
void LinkMotionMapFadeOutHandler(void);
void SetSpawnLocation(void);
void label_19DA(void);
void LinkMotionMapFadeInHandler(void);
void func_1A22(void);
void func_1A39(void);
void UpdateLinkWalkingAnimation(void);
void AnimateMarinBeachTiles(void);
void AnimateTiles(void);
void AnimateCounterTilesGroup(void);
void LoadAnimatedTilesFrameAtOffset(void);
void AnimateTideTilesGroup(void);
void AnimateVillageTilesGroup(void);
void AnimateWaterDungeonTilesGroup(void);
void AnimateSlowWaterfallTilesGroup(void);
void AnimateTilesSlowSpeed(void);
void AnimatedTilesDataOffsets(void);
void AnimateDungeon1TilesGroup(void);
void LoadAnimatedTilesFrame(void);
void AnimateUndergroundTilesGroup(void);
void AnimateLavaTilesGroup(void);
void AnimateDungeon2TilesGroup(void);
void label_1CB8(void);
void AnimateWarpTilesGroup(void);
void AnimateTilesMediumSpeed(void);
void AnimateWaterCurrentsTilesGroup(void);
void AnimateTilesFastSpeed(void);
void AnimateWaterfallTilesGroup(void);
void IncrementAnimatedTilesDataOffset(void);
void AnimateLightBeamTilesGroup(void);
void AnimateBubblesTilesGroup(void);
void AnimateWeatherVaneTilesGroup(void);
void AnimateCrystalBlockTilesGroup(void);
void AnimatePhotoTilesGroup(void);
void CopyLinkTilesPair(void);
void SkipTilesGroupAnimation(void);
void DrawLinkSprite(void);
void DrawLinkSpriteAndReturn(void);
void label_1D8C(void);
void label_1D95(void);
void label_1D9F(void);
void label_1DA1(void);
void label_1DD2(void);
void label_1DDB(void);
void label_1DE5(void);
void label_1DE7(void);
void AnimateTiles_return(void);
void ReplaceMarinTiles(void);
void ReplaceTradingItemTiles(void);
void ReplaceMagicPowderTilesByToadstool(void);
void ReplaceDialogTilesByInstruments(void);
void ReplaceEndCreditsTiles(void);
void ReplaceTiles_08(void);
void ReplaceToadstoolTilesByMagicPowder(void);
void ReplaceSlimeKeyTilesByGoldenLeaf(void);
void ReplaceTilesPairAndDrawLinkSprite(void);
void ReplaceTilesButtonPressed(void);
void ReplaceTiles_04(void);
void SwitchBlockTransitionTilesTable(void);
void SwitchBlockState0TilesTable(void);
void SwitchBlockState1TilesTable(void);
void UpdateSwitchBlockTiles(void);
void Copy4TilesAndDrawLinkSprite(void);
void CopyDataAndDrawLinkSprite(void);
void SwordAreaXForDirection(void);
void SwordAreaYForDirection(void);
void LinkDirectionToLinkAnimationState_2(void);
void LinkDirectionToLiftDirectionButton(void);
void data_1F59(void);
void data_1F5D(void);
void label_1F69_trampoline(void);
void label_1F69(void);
void func_2165(void);
void RevealObjectUnderObject_trampoline(void);
void label_2183(void);
void UpdateFinalLinkPosition(void);
void ComputeLinkPosition(void);
void func_21E1(void);
void BGRegionIncrement(void);
void UpdateBGRegion(void);
void CopyObjectRowToBGMap(void);
void CopyObjectColumnToBGMap(void);
void DoUpdateBGRegion(void);
void ExecuteDialog(void);
void DialogOpenAnimationStartHandler(void);
void OpenDialogInTable1(void);
void OpenDialogInTable2(void);
void OpenDialogInTable0(void);
void DialogOpenAnimationHandler(void);
void DialogClosingEndHandler(void);
void data_23D2(void);
void data_23D6(void);
void data_23DC(void);
void func_23E4(void);
void label_2444(void);
void label_244A(void);
void label_2463(void);
void label_2464(void);
void label_2475(void);
void DialogOpenAnimationEndHandler(void);
void IncrementDialogState(void);
void IncrementDialogStateAndReturn(void);
void DialogFinishedHandler(void);
void UpdateDialogState(void);
void UpdateDialogState_return(void);
void DialogClosingBeginHandler(void);
void DialogLetterAnimationStartHandler(void);
void DialogLetterAnimationEndHandler(void);
void DialogDrawNextCharacterHandler(void);
void DialogBoxOrigin(void);
void DialogBreakHandler(void);
void DialogScrollingStartHandler(void);
void DialogBoxMidOrigin(void);
void DialogBeginScrolling(void);
void label_2723(void);
void label_2731(void);
void label_2739(void);
void label_275D(void);
void DialogScrollingEndHandler(void);
void DialogBoxFirstLineOrigin(void);
void DialogFinishScrolling(void);
void label_2777(void);
void SkipDialog(void);
void DialogChoiceHandler(void);
void DrawDialogArrowTrampoline(void);
void SetWorldMusicTrack(void);
void EnableSRAM(void);
void label_27DD(void);
void ResetMusicFadeTimer(void);
void label_27F2(void);
void SynchronizeDungeonsItemFlags_trampoline(void);
void GetRandomByte(void);
void ReadJoypadState(void);
void label_2887(void);
void TableJump(void);
void LCDOff(void);
void LoadTileset0F_trampoline(void);
void FillBGMapBlack(void);
void FillBGMapWhite(void);
void FillBGMap(void);
void CopyDataFromBank(void);
void CopyData(void);
void NoRoomTransitionDrawLoop(void);
void ExecuteDrawCommands(void);
void DrawCommandToVRAM(void);
void DrawCommandToVRAMDuringRoomTransition(void);
void ClearLowerAndMiddleWRAM(void);
void ClearLowerWRAM(void);
void ClearWRAMAndLowerHRAM(void);
void ClearHRAMAndWRAM(void);
void ClearHRAMBytesAndWRAM(void);
void ClearWRAMBytes(void);
void ClearBytes(void);
void GetChestsStatusForRoom_trampoline(void);
void PlayBoomerangSfx_trampoline(void);
void label_2A07(void);
void GetObjectPhysicsFlags(void);
void GetObjectPhysicsFlags_trampoline(void);
void GetObjectPhysicsFlagsAndRestoreBank3(void);
void LoadCreditsKoholintDisappearingTiles(void);
void LoadCreditsStairsTiles(void);
void LoadTileset15(void);
void LoadCreditsKoholintViewsTiles(void);
void LoadCreditsLinkOnSeaCloseTiles(void);
void LoadCreditsSunAboveTiles(void);
void LoadCreditsLinkOnSeaLargeTiles(void);
void label_2B01(void);
void label_2B06(void);
void LoadCreditsRollTiles(void);
void LoadCreditsLinkFaceCloseUpTiles(void);
void LoadCreditsLinkSeatedOnLogTiles(void);
void label_2B90(void);
void func_2B92(void);
void label_2B95(void);
void GetRoomStatusAddressForMapPosition_trampoline(void);
void LoadBaseTiles(void);
void LoadMenuTiles(void);
void LoadIndoorTiles(void);
void LoadBaseOverworldTiles(void);
void func_2D50(void);
void LoadIntroSequenceTiles(void);
void LoadTitleScreenTiles(void);
void LoadWorldMapTiles(void);
void LoadFaceShrineReliefTiles(void);
void LoadSchulePaintingTiles(void);
void LoadChristinePortraitTiles(void);
void LoadStaticPictureTiles(void);
void LoadEaglesTowerTopTiles(void);
void LoadMarinBeachTiles(void);
void LoadSaveMenuTiles(void);
void NpcTilesBankTable(void);
void LoadRoomSpecificTiles(void);
void CopyWord(void);
void WriteObjectToBG_DMG(void);
void WriteOverworldObjectToBG(void);
void WriteIndoorObjectToBG(void);
void doCopyObjectToBG(void);
void LoadRoomTilemap(void);
void LoadRoom(void);
void LoadRoomObject(void);
void FillRoomWithConsecutiveObjects(void);
void SetupDestroyableObjectIfNeeded2(void);
void CopyObjectToActiveRoomMap(void);
void SetBankForRoom(void);
void CopyIndoorsMacroObjectsToRoom(void);
void CopyOutdoorsMacroObjectsToRoom(void);
void SetupDestroyableObjectIfNeeded(void);
void ObjectPositionToRoomObjectAddress(void);
void KeyDoorTopObjectIds(void);
void LoadObject_KeyDoorTop(void);
void KeyDoorBottomObjectIds(void);
void LoadObject_KeyDoorBottom(void);
void KeyDoorLeftObjectIds(void);
void LoadObject_KeyDoorLeft(void);
void KeyDoorRightObjectIds(void);
void LoadObject_KeyDoorRight(void);
void LoadObject_ClosedDoorTop(void);
void LoadObject_ClosedDoorBottom(void);
void LoadObject_ClosedDoorLeft(void);
void LoadObject_ClosedDoorRight(void);
void OpenDoorTopObjectIds(void);
void LoadObject_OpenDoorTop(void);
void UpdateIndoorRoomStatus(void);
void OpenDoorBottomObjectIds(void);
void LoadObject_OpenDoorBottom(void);
void OpenDoorLeftObjectIds(void);
void LoadObject_OpenDoorLeft(void);
void OpenDoorRightObjectIds(void);
void LoadObject_OpenDoorRight(void);
void BossDoorObjectIds(void);
void LoadObject_BossDoor(void);
void MakeListOfDoorPositions(void);
void StairsDoorObjectIds(void);
void LoadObject_StairsDoor(void);
void RevolvingDoorObjectIds(void);
void LoadObject_RevolvingDoor(void);
void OneWayArrowObjectIds(void);
void LoadObject_OneWayArrow(void);
void DungeonEntranceObjectOffsets(void);
void DungeonEntranceObjectIds(void);
void LoadObject_DungeonEntrance(void);
void EntranceObjectIds(void);
void LoadObject_IndoorEntrance(void);
void HorizontalObjectOffsets(void);
void VerticalObjectOffsets(void);
void FillRoomMapWithObject(void);
void LoadRoomEntities(void);
void EntityMask_387B(void);
void LoadEntityFromDefinition(void);
void LoadRoomTemplate_trampoline(void);
void LoadWorldMapBGMap_trampoline(void);
void SwitchToObjectsTilemapBank(void);
void LoadCreditsMarinPortraitTiles_trampoline(void);
void LoadThanksForPlayingTiles_trampoline(void);
void CanBowWowEatEntity(void);
void label_3935(void);
void LiftableRockStartSmashingAnimation_trampoline(void);
void label_394D(void);
void CreateFollowingNpcEntity_trampoline(void);
void ConfigureNewEntity_trampoline(void);
void GetEntityDirectionToLink_trampoline(void);
void label_397B(void);
void data_3989(void);
void AnimateEntities(void);
void ResetEntity_trampoline(void);
void AnimateEntity(void);
void ExecuteActiveEntityHandler_trampoline(void);
void ExecuteActiveEntityHandler(void);
void HitboxPositions(void);
void ConfigureEntityHitbox(void);
void SetEntitySpriteVariant(void);
void IncrementEntityState(void);
void HurtBySpikes_trampoline(void);
void ApplyEntityInteractionWithBackground_trampoline(void);
void label_3B2E(void);
void DefaultEnemyDamageCollisionHandler_trampoline(void);
void label_3B44(void);
void CheckLinkCollisionWithProjectile_trampoline(void);
void CheckLinkCollisionWithEnemy_trampoline(void);
void label_3B65(void);
void label_3B70(void);
void label_3B7B(void);
void SpawnNewEntity_trampoline(void);
void SpawnNewEntityInRange_trampoline(void);
void ApplyVectorTowardsLink_trampoline(void);
void GetVectorTowardsLink_trampoline(void);
void RenderActiveEntitySpritesPair(void);
void label_3C71(void);
void RenderActiveEntitySprite(void);
void label_3CD9(void);
void RenderActiveEntitySpritesRectUsingAllOAM(void);
void RenderActiveEntitySpritesRect(void);
void SkipDisabledEntityDuringRoomTransition(void);
void ClearEntitySpeed(void);
void CopyEntityPositionToActivePosition(void);
void func_015_7964_trampoline(void);
void EntityInitMiniMoldorm_trampoline(void);
void EntityInitMoldorm_trampoline(void);
void EntityInitFacade_trampoline(void);
void EntityInitSlimeEye_trampoline(void);
void EntityInitGenie_trampoline(void);
void EntityInitSlimeEel_trampoline(void);
void EntityInitDodongoSnake_trampoline(void);
void EntityInitHotHead_trampoline(void);
void EntityInitEvilEagle_trampoline(void);
void Entity67Handler_trampoline(void);
void CheckPositionForMapTransition_trampoline(void);
void GhiniMovement_trampoline(void);
void SmashRock_trampoline(void);
void LoadHeartsAndRupeesCount(void);
void SpawnChestWithItemAndRestoreBank3(void);
void DrawABButtonSlots(void);
void GiveInventoryItem_trampoline(void);
void func_006_783C_trampoline(void);
void UnloadAllEntities(void);
void label_3E8E(void);
void StopEntityRecoilOnCollision(void);
void BossIntroDialogTable(void);
void BossIntro(void);
void data_3F48(void);
void DidKillEnemy(void);
void UnloadEntity(void);
void UnloadEntityAndReturn(void);
void ReplaceEvilEagleRiderVisibleTiles(void);
void ReplaceEvilEagleRiderHiddenTiles(void);
void ReloadColorDungeonNpcTiles(void);

void LoadPieceOfHeartMeterTiles1(void) {
    gb.regs.hl = 0x40C0;
    gb.regs.de = 0x89A0;
    CopyTilesToPieceOfHeartMeter(); return;
}

void LoadPieceOfHeartMeterTiles2(void) {
    gb.regs.hl = 0x40F0;
    gb.regs.de = 0x89D0;
    CopyTilesToPieceOfHeartMeter(); return;
}

void ClearPieceOfHeartMeterTiles1(void) {
    gb.regs.hl = 0x4200;
    gb.regs.de = 0x89D0;
    CopyTilesToPieceOfHeartMeter(); return;
}

void ClearPieceOfHeartMeterTiles2(void) {
    gb.regs.hl = 0x41D0;
    gb.regs.de = 0x89A0;
    CopyTilesToPieceOfHeartMeter(); return;
}

void CopyTilesToPieceOfHeartMeter(void) {
    gb.regs.bc = 0x30;
    CopyData();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF90, gb.regs.a);
    gb_write(0xFF92, gb.regs.a);
  CopyTilesToPieceOfHeartMeter_restoreBank0C:;
    gb.regs.a = 0x0C;
    gb_write(0x2100, gb.regs.a);
    return;
}

void Start(void) {
    alu_cp8(gb.regs.a, 0x11);
    if (!GET_FLAG_Z()) goto Start_notGBC;
    gb.regs.a = gb_read(0xFF4D);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto Start_speedSwitchDone;
    gb.regs.a = 0x30;
    gb_write(0xFF00, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFF4D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFFF, gb.regs.a);
    /* stop */;
  Start_speedSwitchDone:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = 1;
    Init(); return;
  Start_notGBC:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    /* Fall through to Init (sequential in original assembly) */
    Init(); return;
}

void Init(void) {
    gb_write(0xFFFE, gb.regs.a);
    LCDOff();
    gb.regs.sp = 0xDFFF;
    gb_call_bank(60, SuperGameBoyInit);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF47, gb.regs.a);
    gb_write(0xFF48, gb.regs.a);
    gb_write(0xFF49, gb.regs.a);
    gb.regs.hl = 0x8000;
    gb.regs.bc = 0x1800;
    ClearBytes();
    gb_call_bank(36, FillBGMapAttributesWhite);
    FillBGMapWhite();
    ClearHRAMAndWRAM();
    gb_call_bank(1, WriteDMACodeToHRAM);
    hDMARoutine();
    LCDOn();
    LoadBaseTiles();
    gb.regs.a = 0x44;
    gb_write(0xFF41, gb.regs.a);
    gb.regs.a = 0x4F;
    gb_write(0xFF45, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDC57, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFFFF, gb.regs.a);
    InitSaveFiles();
    gb_call_bank(31, SoundSystemInit);
    gb.regs.a = 0x18;
    gb_write(0xFFB5, gb.regs.a);
    gb.regs.ime = true;
    gb_call_bank(32, ClearWRAMBank5);
    /* Init falls through to RenderLoop_waitForNextFrame in the original.
       This calls gb_halt() which longjmps back to main loop. */
    gb_halt();
    return;
}

void RenderLoop(void) {
  RenderLoop_top:;
    gb.regs.a = 1;
    gb_write(0xFFFD, gb.regs.a);
    gb.regs.a = gb_read(0xC500);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderLoop_noSpecialCase;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto RenderLoop_noSpecialCase;
    gb.regs.a = gb_read(0xFFE7);
    alu_rrca();
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    goto RenderLoop_setScrollY;
  RenderLoop_noSpecialCase:;
    gb.regs.hl = 0xC156;
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
  RenderLoop_setScrollY:;
    gb_write(0xFF42, gb.regs.a);
    gb.regs.a = gb_read(0xFF96);
    gb.regs.hl = 0xC155;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC1BF;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF43, gb.regs.a);
    gb.regs.a = gb_read(0xD7B3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto RenderLoop_loadRequestedGfx;
    gb.regs.a = gb_read(0xD7B4);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto RenderLoop_noGfxToLoad;
  RenderLoop_loadRequestedGfx:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto RenderLoop_playAudioStep;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto RenderLoop_playAudioStep;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto RenderLoop_skipAudio;
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_C()) goto RenderLoop_skipAudio;
  RenderLoop_playAudioStep:;
    PlayAudioStep();
    PlayAudioStep();
  RenderLoop_skipAudio:;
    gb.regs.ime = false;
    LoadRequestedGfx();
    gb.regs.ime = true;
    PlayAudioStep();
    PlayAudioStep();
    goto RenderLoop_waitForNextFrame;
  RenderLoop_noGfxToLoad:;
    gb.regs.a = gb_read(0xD7B2);
    gb.regs.a = alu_and8(gb.regs.a, -129);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF40);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb_write(0xFF40, gb.regs.a);
    gb.regs.hl = 0xFFE7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto RenderLoop_titleScreenEnd;
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto RenderLoop_titleScreenEnd;
    gb_call_bank(32, PositionTitleScreenSprites);
  RenderLoop_titleScreenEnd:;
    gb.regs.a = gb_read(0xC17F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderLoop_renderInteractiveFrame;
    gb.regs.a = alu_inc8(gb.regs.a);
    if (!GET_FLAG_Z()) goto RenderLoop_elsif;
  RenderLoop_interactiveTransition:;
    gb_call_bank(23, ApplyWindFishVfx);
    goto RenderLoop_renderInteractiveFrame;
  RenderLoop_elsif:;
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) goto RenderLoop_interactiveTransition;
    gb.regs.a = 20;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xC180);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC180, gb.regs.a);
    alu_cp8(gb.regs.a, 0xC0);
    if (!GET_FLAG_Z()) goto RenderLoop_renderTransitionSfx;
    gb.regs.a = gb_read(0xC17F);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto RenderLoop_finishTransition;
    TeleportToManboPond();
  RenderLoop_finishTransition:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC17F, gb.regs.a);
    gb_write(0xC3CA, gb.regs.a);
    goto RenderLoop_renderInteractiveFrame;
  RenderLoop_renderTransitionSfx:;
    gb_push16(gb.regs.af);
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_C()) goto RenderLoop_transitionFadeOutEnd;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderLoop_renderDMGFadeOut;
    gb_call_bank(32, ApplyFadeToWhite_GBC);
    goto RenderLoop_transitionDone;
  RenderLoop_renderDMGFadeOut:;
    ApplyFadeToWhite_DMG();
  RenderLoop_transitionFadeOutEnd:;
  RenderLoop_transitionDone:;
    gb.regs.a = 20;
    gb_write(0x2100, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    RenderTransitionEffect();
    PlayAudioStep();
    gb.regs.a = gb_read(0xDC3F);
    gb_write(0xFF47, gb.regs.a);
    gb.regs.a = gb_read(0xDC40);
    gb_write(0xFF48, gb.regs.a);
    gb.regs.a = gb_read(0xDC41);
    gb_write(0xFF49, gb.regs.a);
    goto RenderLoop_waitForNextFrame;
  RenderLoop_renderInteractiveFrame:;
    gb.regs.a = gb_read(0xDC42);
    gb_write(0xFF4A, gb.regs.a);
    gb.regs.a = gb_read(0xDC3F);
    gb_write(0xFF47, gb.regs.a);
    gb.regs.a = gb_read(0xDC40);
    gb_write(0xFF48, gb.regs.a);
    gb.regs.a = gb_read(0xDC41);
    gb_write(0xFF49, gb.regs.a);
    PlayAudioStep();
    ReadJoypadState();
    gb.regs.a = gb_read(0xFF90);
    gb.regs.hl = 0xFF91;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC10E;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto RenderLoop_waitForNextFrame;
    gb.regs.a = gb_read(3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderLoop_debugEnd;
    gb.regs.a = gb_read(0xD7B1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto RenderLoop_engineIsPaused;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto RenderLoop_saveEngineStatus;
  RenderLoop_engineIsPaused:;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto RenderLoop_saveEngineStatus;
    gb.regs.a = gb_read(0xD7B1);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(0xD7B1, gb.regs.a);
    if (!GET_FLAG_Z()) goto RenderLoop_waitForNextFrame;
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_xor8(gb.regs.a, 0x10);
    gb_write(0xC17B, gb.regs.a);
    goto RenderLoop_waitForNextFrame;
  RenderLoop_saveEngineStatus:;
    gb.regs.a = gb_read(0xD7B1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto RenderLoop_waitForNextFrame;
  RenderLoop_debugEnd:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto RenderLoop_resetSpritesVisibility;
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto RenderLoop_spritesEnd;
  RenderLoop_resetSpritesVisibility:;
    gb_call_bank(1, HideAllSprites);
  RenderLoop_spritesEnd:;
    ExecuteGameplayHandler();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderLoop_clearPaletteToLoad;
    gb_call_bank(33, LoadPaletteForTilemap);
  RenderLoop_clearPaletteToLoad:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7A, gb.regs.a);
    gb_call_bank(1, HideSprites);
  RenderLoop_waitForNextFrame:;
    gb_call_bank(31, func_01F_7F80);
    gb.regs.a = 0x0C;
    AdjustBankNumberForGBC();
    SwitchBank();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFFD, gb.regs.a);
    gb_halt();
    /* nop */;
  RenderLoop_pollUntilVBlank:;
    gb.regs.a = gb_read(0xFFD1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderLoop_pollUntilVBlank;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD1, gb.regs.a);
    goto RenderLoop_top;
}

void IntroSeaScreenSections(void) {
    /* data: db $20, $30, $40, $60, 0 */;
}

void IntroBeachScreenSections(void) {
    /* data: db $30, $56, $68, 0 */;
}

void InterruptLCDStatus(void) {
    gb.regs.ime = false;
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFF70);
    gb.regs.c = gb.regs.a;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto InterruptLCDStatus_skipScrollY;
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto InterruptLCDStatus_setStandardScrollY;
    gb.regs.a = gb_read(0xD200);
    goto InterruptLCDStatus_setScrollY;
  InterruptLCDStatus_setStandardScrollY:;
    gb.regs.a = gb_read(0xFF97);
  InterruptLCDStatus_setScrollY:;
    gb_write(0xFF42, gb.regs.a);
    goto InterruptLCDStatus_clearBGTilesFlag;
  InterruptLCDStatus_skipScrollY:;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto InterruptLCDStatus_clearScrollX;
    gb.regs.a = gb_read(0xC105);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC100;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF96;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF43, gb.regs.a);
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto InterruptLCDStatus_setupNextInterruptForIntroSea;
    gb.regs.hl = 0x0314;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF45, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xC105, gb.regs.a);
    goto InterruptLCDStatus_clearBGTilesFlag;
  InterruptLCDStatus_setupNextInterruptForIntroSea:;
    gb.regs.hl = 0x030F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF45, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto InterruptLCDStatus_skipResetSectionIndex;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  InterruptLCDStatus_skipResetSectionIndex:;
    gb_write(0xC105, gb.regs.a);
    /* nop */;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto InterruptLCDStatus_clearBGTilesFlag;
    gb.regs.a = gb_read(0xC106);
    gb_write(0xFF42, gb.regs.a);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 0x60);
    gb_write(0xFF45, gb.regs.a);
    goto InterruptLCDStatus_clearBGTilesFlag;
  InterruptLCDStatus_clearScrollX:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF43, gb.regs.a);
  InterruptLCDStatus_clearBGTilesFlag:;
    gb.regs.a = gb.regs.c;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.de = gb_pop16();
    gb.regs.hl = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.ime = true;
    gb.regs.ime = true; return;
}

void InterruptSerial(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(40, PrinterInterruptSerial);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.ime = true; return;
}

void LoadRequestedGfx(void) {
    gb.regs.a = gb_read(0xD7B3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRequestedGfx_loadBGMap;
    gb_write(0xDE7A, gb.regs.a);
    alu_cp8(gb.regs.a, 0x23);
    if (GET_FLAG_Z()) goto LoadRequestedGfx_LCDOffEnd;
    gb_push16(gb.regs.af);
    LCDOff();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  LoadRequestedGfx_LCDOffEnd:;
    _executeTilesetLoadHandler();
    goto LoadRequestedGfx_clearFlagsAndReturn;
  LoadRequestedGfx_executeTilesetLoadHandler:;
    gb.regs.e = gb.regs.a;
    gb_call_bank(32, GetTilesetHandlerAddress);
    /* jp hl - dynamic dispatch */;
  LoadRequestedGfx_loadBGMap:;
    LCDOff();
    gb_call_bank(36, LoadBGMapAttributes);
    gb_call_bank(32, GetBGCopyRequest);
    gb.regs.a = 8;
    gb_write(0x2100, gb.regs.a);
    ExecuteDrawCommands_noRoomTransition();
    gb.regs.a = 0x0C;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
  LoadRequestedGfx_clearFlagsAndReturn:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD7B4, gb.regs.a);
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = gb_read(0xD7B2);
    gb_write(0xFF40, gb.regs.a);
  LoadRequestedGfx_return:;
    return;
}

void BlockUpdateAnimationStageTable(void) {
  BlockUpdateAnimationStageTable_kindA:;
    /* data: db 07 */;
  BlockUpdateAnimationStageTable_kindB:;
    /* data: db 09 */;
    InterruptVBlank(); return;
}

void InterruptVBlank(void) {
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFF70);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.c = gb.regs.a;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.ime = false;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) goto InterruptVBlank_photoAlbumEnd;
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_C()) goto InterruptVBlank_photoAlbumEnd;
    alu_cp8(gb.regs.a, 0x12);
    if (GET_FLAG_C()) { PhotoAlbumVBlankHandler(); return; };
  InterruptVBlank_photoAlbumEnd:;
    gb.regs.a = gb_read(0xFFFD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto InterruptVBlank_vblankDone;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, -129);
    if (GET_FLAG_Z()) goto InterruptVBlank_dialogEnd;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto InterruptVBlank_dialogEnd;
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) goto InterruptVBlank_renderDialogText;
    func_23E4();
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    goto InterruptVBlank_vblankDone;
  InterruptVBlank_renderDialogText:;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto InterruptVBlank_dialogScrolling1End;
    DialogBeginScrolling();
    goto InterruptVBlank_vblankDone;
  InterruptVBlank_dialogScrolling1End:;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto InterruptVBlank_dialogEnd;
    gb.regs.a = gb_read(0xC172);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto InterruptVBlank_dialogFinishScrolling;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC172, gb.regs.a);
    goto InterruptVBlank_dialogEnd;
  InterruptVBlank_dialogFinishScrolling:;
    DialogFinishScrolling();
    goto InterruptVBlank_vblankDone;
  InterruptVBlank_dialogEnd:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_C()) goto InterruptVBlank_gameplayNotAPhoto;
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto InterruptVBlank_animateTilesEnd;
    gb_call_bank(56, func_038_785A);
    goto InterruptVBlank_animateTilesEnd;
  InterruptVBlank_gameplayNotAPhoto:;
    gb.regs.a = gb_read(0xD7B3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto InterruptVBlank_vblankDone;
    gb.regs.a = gb_read(0xFF90);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.hl = 0xFF91;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC10E;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto InterruptVBlank_noTilesToUpdate;
    LoadTiles();
    gb.regs.a = gb_read(0xFFE8);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto InterruptVBlank_drawLinkSpriteEnd;
  InterruptVBlank_drawLinkSprite:;
    DrawLinkSprite();
  InterruptVBlank_drawLinkSpriteEnd:;
    hDMARoutine();
    goto InterruptVBlank_vblankDone;
  InterruptVBlank_noTilesToUpdate:;
    gb.regs.a = gb_read(0xFFBB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto InterruptVBlank_switchBlockEnd;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFFBB, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x03D3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD7AD, gb.regs.a);
    UpdateSwitchBlockTiles();
    goto InterruptVBlank_drawLinkSprite;
  InterruptVBlank_switchBlockEnd:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) goto InterruptVBlank_animateTilesEnd;
    AnimateTiles();
  InterruptVBlank_animateTilesEnd:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto InterruptVBlank_gbcEnd;
    gb_call_bank(36, ChangeBGColumnPalette);
  InterruptVBlank_gbcEnd:;
    gb.regs.de = 0xD5C2;
    ExecuteDrawCommands();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD5C1, gb.regs.a);
    gb_write(0xD5C2, gb.regs.a);
    gb_write(0xDD38, gb.regs.a);
    gb_write(0xDD39, gb.regs.a);
    gb_call_bank(54, func_036_72BA);
    hDMARoutine();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto InterruptVBlank_vblankDone;
    gb_call_bank(33, CopyPalettesToVRAM);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
  InterruptVBlank_vblankDone:;
    gb.regs.ime = true;
  InterruptVBlank_vblankDoneInterruptsEnabled:;
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb.regs.c;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.hl = gb_pop16();
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
    gb.regs.a = 1;
    gb_write(0xFFD1, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.ime = true; return;
}

void PhotoAlbumVBlankHandler(void) {
    gb.regs.a = gb_read(0xDC57);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFFD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto PhotoAlbumVBlankHandler_clearBGTilesFlag;
    hDMARoutine();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PhotoAlbumVBlankHandler_gbcEnd;
    gb_call_bank(33, CopyPalettesToVRAM);
    gb_call_bank(36, ChangeBGColumnPalette);
  PhotoAlbumVBlankHandler_gbcEnd:;
    gb.regs.de = 0xD5C2;
    ExecuteDrawCommands();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD5C1, gb.regs.a);
    gb_write(0xD5C2, gb.regs.a);
    gb_write(0xDD38, gb.regs.a);
    gb_write(0xDD39, gb.regs.a);
  PhotoAlbumVBlankHandler_clearBGTilesFlag:;
    gb_call_bank(40, PrinterInterruptVBlank);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xDC57, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    InterruptVBlank_vblankDoneInterruptsEnabled(); return;
}

void LoadTiles(void) {
    gb.regs.a = gb_read(0xFF90);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { LoadEntityTiles(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { LoadInventorySirenInstruments(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { LoadPieceOfHeartMeterTiles1(); return; };
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { LoadPieceOfHeartMeterTiles2(); return; };
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { ClearPieceOfHeartMeterTiles1(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { ClearPieceOfHeartMeterTiles2(); return; };
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { LoadBGTilesCommands8ToD(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { LoadOverworldBGTiles(); return; };
    if (GET_FLAG_Z()) { LoadOverworldBGTiles(); return; };
    gb.regs.a = gb_read(0xFF90);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { LoadDungeonMinimapTiles(); return; };
    gb.regs.a = 13;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFF92);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = 0x9000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = 0x4090;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadTiles_colorDungeonEnd;
    gb_call_bank(32, GetColorDungeonTilesAddress);
    gb_write(0x2100, gb.regs.a);
    goto LoadTiles_copyData;
  LoadTiles_colorDungeonEnd:;
    gb.regs.a = gb_read(0xFF94);
    gb.regs.a = alu_add8(gb.regs.a, 0x50);
    gb.regs.h = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFBB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadTiles_copyData;
    gb.regs.a = gb_read(0xFF92);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto LoadTiles_incrementBGTileLoadingStage;
  LoadTiles_copyData:;
    gb.regs.bc = 0x40;
    CopyData();
  LoadTiles_incrementBGTileLoadingStage:;
    gb.regs.a = gb_read(0xFF92);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF92, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto LoadTiles_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF90, gb.regs.a);
    gb_write(0xFF92, gb.regs.a);
  LoadTiles_return:;
    return;
}

void LoadOverworldBGTiles(void) {
    gb.regs.a = 15;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFF92);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = 0x9000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.a = gb_read(0xFF94);
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    gb.regs.h = gb.regs.a;
    gb.regs.l = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.a = gb_read(0xFF92);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF92, gb.regs.a);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto LoadOverworldBGTiles_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF90, gb.regs.a);
    gb_write(0xFF92, gb.regs.a);
  LoadOverworldBGTiles_return:;
    return;
}

void LoadEntityTiles(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadEntityTiles_colorDungeonEnd;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadEntityTiles_colorDungeonEnd;
    gb_call_bank(32, LoadColorDungeonTiles);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC10E, gb.regs.a);
    gb_write(0xC10F, gb.regs.a);
    gb.regs.hl = 0x9000;
    gb.regs.bc = 0;
    GetColorDungeonTilesAddress();
    gb.regs.c = 0x90;
    gb.regs.b = gb.regs.h;
    gb.regs.h = 0;
    CopyDataToVRAM();
    goto LoadEntityTiles_clearEnemiesTilesLoadCommand;
  LoadEntityTiles_colorDungeonEnd:;
    gb.regs.a = gb_read(0xFF91);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { UpdateEntityTilesB(); return; };
    if (GET_FLAG_Z()) { UpdateEntityTilesB(); return; };
    gb.regs.a = gb_read(0xC197);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC193;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.d = gb.regs.a;
    gb.regs.e = 0;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_swap(gb.regs.a);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x28C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadEntityTiles_adjustBankEnd;
    AdjustBankNumberForGBC();
  LoadEntityTiles_adjustBankEnd:;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFF93);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = 0x4000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC197);
    gb.regs.d = gb.regs.a;
    gb.regs.hl = 0x8400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = gb_pop16();
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.a = gb_read(0xFF93);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF93, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto LoadEntityTiles_return;
  LoadEntityTiles_clearEnemiesTilesLoadCommand:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF91, gb.regs.a);
    gb_write(0xFF93, gb.regs.a);
  LoadEntityTiles_return:;
    return;
}

void UpdateEntityTilesB(void) {
    gb.regs.a = gb_read(0xC10D);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC193;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.d = gb.regs.a;
    gb.regs.e = 0;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_swap(gb.regs.a);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x28C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateEntityTilesB_jp_0764;
    AdjustBankNumberForGBC();
  UpdateEntityTilesB_jp_0764:;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xC10F);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = 0x4000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC10D);
    gb.regs.d = gb.regs.a;
    gb.regs.hl = 0x8400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = gb_pop16();
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.a = gb_read(0xC10F);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC10F, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto UpdateEntityTilesB_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC10E, gb.regs.a);
    gb_write(0xC10F, gb.regs.a);
  UpdateEntityTilesB_return:;
    return;
}

void LoadInventorySirenInstruments(void) {
    gb_call_bank(1, LoadSirenInstruments);
    CopyTilesToPieceOfHeartMeter_restoreBank0C(); return;
}

void TilesGfxSource(void) {
  TilesGfxSource__08:;
    /* data: dw OcarinaSymbolsTiles */;
  TilesGfxSource__09:;
    /* data: dw OcarinaSymbolsTiles + $40 */;
  TilesGfxSource__0A:;
    /* data: dw OcarinaSymbolsTiles + $60 */;
  TilesGfxSource__0B:;
    /* data: dw CharacterVfxTiles */;
  TilesGfxSource__0C:;
    /* data: dw CharacterVfxTiles + $40 */;
  TilesGfxSource__0D:;
    /* data: dw CharacterVfxTiles + $60 */;
    TilesDestination(); return;
}

void TilesDestination(void) {
  TilesDestination__08:;
    /* data: dw vTiles0 + $200 */;
  TilesDestination__09:;
    /* data: dw vTiles0 + $240 */;
  TilesDestination__0A:;
    /* data: dw vTiles0 + $260 */;
  TilesDestination__0B:;
    /* data: dw vTiles0 + $200 */;
  TilesDestination__0C:;
    /* data: dw vTiles0 + $240 */;
  TilesDestination__0D:;
    /* data: dw vTiles0 + $260 */;
    LoadBGTilesCommands8ToD(); return;
}

void LoadBGTilesCommands8ToD(void) {
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x069A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x069A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl++;
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.a = 0x0C;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.a = gb_read(0xFF90);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto LoadBGTilesCommands8ToD_clearBGTilesFlag;
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) goto LoadBGTilesCommands8ToD_clearBGTilesFlag;
    gb.regs.a = gb_read(0xFF90);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF90, gb.regs.a);
    return;
  LoadBGTilesCommands8ToD_clearBGTilesFlag:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF90, gb.regs.a);
    return;
}

void SwitchBank(void) {
    gb_write(0xDC57, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    return;
}

void SwitchAdjustedBank(void) {
    AdjustBankNumberForGBC();
    gb_write(0xDC57, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    return;
}

void ReloadSavedBank(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
}

void LoadDungeonMinimapTiles(void) {
    gb.regs.a = 18;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFF92);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto LoadDungeonMinimapTiles_loadTiles;
    if (!GET_FLAG_Z()) goto LoadDungeonMinimapTiles_paletteStage1End;
    gb_call_bank(2, CopyDungeonMinimapPalette);
    gb.regs.hl = 0xFF92;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  LoadDungeonMinimapTiles_paletteStage1End:;
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) goto LoadDungeonMinimapTiles_paletteStage2End;
    gb_call_bank(2, label_002_6827);
    gb.regs.hl = 0xFF92;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  LoadDungeonMinimapTiles_paletteStage2End:;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto LoadDungeonMinimapTiles_paletteStage3End;
    gb_call_bank(2, label_002_680B);
    gb.regs.hl = 0xFF92;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  LoadDungeonMinimapTiles_paletteStage3End:;
    gb_call_bank(2, label_002_67E5);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF90, gb.regs.a);
    gb_write(0xFF92, gb.regs.a);
    return;
  LoadDungeonMinimapTiles_loadTiles:;
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = 0x8D00;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = 0x40A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.a = gb_read(0xFF92);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF92, gb.regs.a);
    return;
}

void PlayAudioStep(void) {
    gb_call_bank(31, PlaySfx);
    gb.regs.a = gb_read(0xFFF3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto PlayAudioStep_return;
    gb.regs.a = gb_read(0xC10B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PlayAudioStep_doAudioStep;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto PlayAudioStep_doAudioStepTwice;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto PlayAudioStep_return;
    goto PlayAudioStep_doAudioStep;
  PlayAudioStep_doAudioStepTwice:;
    _doAudioStep();
  PlayAudioStep_doAudioStep:;
    gb_call_bank(27, PlayMusicTrack_1B);
    gb_call_bank(30, PlayMusicTrack_1E);
  PlayAudioStep_return:;
    return;
}

void func_020_6A30_trampoline(void) {
    gb_call_bank(32, func_020_6A30);
    RestoreBankAndReturn(); return;
}

void RestoreBankAndReturn(void) {
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void func_020_6AC1_trampoline(void) {
    gb_call_bank(32, func_020_6AC1);
    RestoreBankAndReturn(); return;
}

void UpdateIntroSeaBGPalettes_trampoline(void) {
    gb_call_bank(32, UpdateIntroSeaBGPalettes);
    RestoreBankAndReturn(); return;
}

void ClearFileMenuBG_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(32, func_020_6BDC);
    RestoreStackedBankAndReturn(); return;
}

void LoadFileMenuBG_trampoline(void) {
    gb_call_bank(32, LoadFileMenuBG);
    LoadBank1AndReturn(); return;
}

void CopyLinkTunicPalette_trampoline(void) {
    gb_call_bank(32, CopyLinkTunicPalette);
    LoadBank1AndReturn(); return;
}

void LoadBank1AndReturn(void) {
    gb.regs.a = 1;
    gb_write(0x2100, gb.regs.a);
    return;
}

void func_91D(void) {
    gb_push16(gb.regs.af);
    gb.regs.b = 0;
    gb.regs.a = gb_read(0xDE80);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = gb.regs.a;
    goto func_91D_jp_92F;
  func_91D_jp_92E:;
    gb_push16(gb.regs.af);
  func_91D_jp_92F:;
    gb_call_bank(26, GetBGAttributesAddressForObject);
    gb.regs.a = gb_read(0xFFDF);
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0xDD39;
    gb.regs.a = gb_read(0xDD38);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xDD38, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE0);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFE1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    RestoreStackedBankAndReturn(); return;
}

void RestoreStackedBankAndReturn(void) {
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0x2100, gb.regs.a);
    return;
}

void func_020_6D0E_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(32, func_020_6D0E);
    RestoreStackedBankAndReturn(); return;
}

void func_983(void) {
    gb_call_bank(26, func_01A_6710);
    gb.regs.a = gb_read(0xFFDF);
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFE0);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xFFE1);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.de++;
    return;
}

void func_999(void) {
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.bc);
    func_983();
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.bc = gb_pop16();
    func_983();
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xDD38);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(0xDD38, gb.regs.a);
    gb.regs.hl = 0xDD39;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    RestoreStackedBankAndReturn(); return;
}

void CheckPushedTombStone_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(32, CheckPushedTombStone);
    RestoreStackedBankAndReturn(); return;
}

void GetEntityInitHandler_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(32, GetEntityInitHandler);
    RestoreStackedBankAndReturn(); return;
}

void func_020_4874_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(32, func_020_4874);
    RestoreStackedBankAndReturn(); return;
}

void func_020_4954_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(32, func_020_4954);
    RestoreStackedBankAndReturn(); return;
}

void ReplaceObjects56and57_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(32, ReplaceObjects56and57);
    RestoreStackedBankAndReturn(); return;
}

void CopyDataToVRAM_noDMA(void) {
    gb_push16(gb.regs.hl);
    gb.regs.l = 0;
    gb.regs.e = gb.regs.l;
    gb.regs.h = gb.regs.b;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x80);
    gb.regs.d = gb.regs.a;
    gb.regs.bc = 0x0100;
    CopyData();
    gb.regs.hl = gb_pop16();
    CopyDataToVRAM_restoreBankAndReturn(); return;
}

void CopyDataToVRAM(void) {
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { CopyDataToVRAM_noDMA(); return; };
    gb.regs.a = gb.regs.b;
    gb_write(0xFF51, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xFF52, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb_write(0xFF53, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xFF54, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(0xFF55, gb.regs.a);
  CopyDataToVRAM_restoreBankAndReturn:;
    gb.regs.a = gb.regs.h;
    gb_write(0x2100, gb.regs.a);
    return;
}

void CopyColorDungeonSymbols(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = 53;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4F00;
    gb.regs.de = 0xDD68;
    gb.regs.bc = 0x20;
    CopyData();
    RestoreStackedBankAndReturn(); return;
}

void func_036_505F_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(54, func_036_505F);
    RestoreStackedBankAndReturn(); return;
}

void func_036_4F9B_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(54, func_036_4F9B);
    RestoreStackedBankAndReturn(); return;
}

void func_A5F(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = 0x20;
    gb_write(0x2100, gb.regs.a);
    RenderActiveEntitySpritesRect();
    RestoreStackedBankAndReturn(); return;
}

void func_003_5A2E_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(3, func_003_5A2E);
    RestoreStackedBankAndReturn(); return;
}

void func_036_4F68_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(54, func_036_4F68);
    RestoreStackedBankAndReturn(); return;
}

void func_020_6D52_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(32, func_020_6D52);
    RestoreStackedBankAndReturn(); return;
}

void func_036_4BE8_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(54, func_036_4BE8);
    RestoreStackedBankAndReturn(); return;
}

void func_A9B(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = 15;
    SwitchBank();
    ExecuteDialog();
    RestoreStackedBankAndReturn(); return;
}

void Spawn2x2RubbleEntities_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(54, Spawn2x2RubbleEntities);
    RestoreStackedBank(); return;
}

void RestoreStackedBank(void) {
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    SwitchBank();
    return;
}

void ChangeBGColumnPaletteAndExecuteDrawCommands(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(36, ChangeBGColumnPalette);
    gb.regs.de = 0xD5C2;
    ExecuteDrawCommands();
    RestoreStackedBank(); return;
}

void func_036_703E_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(54, func_036_703E);
    RestoreStackedBankAndReturn(); return;
}

void cycleInstrumentItemColor_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(54, cycleInstrumentItemColor);
    RestoreStackedBankAndReturn(); return;
}

void func_036_4A77_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(54, func_036_4A77);
    RestoreStackedBankAndReturn(); return;
}

void GetOwlStatueDialogId_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(54, GetOwlStatueDialogId);
    RestoreStackedBankAndReturn(); return;
}

void SpawnPhotographer_trampoline(void) {
    gb_push16(gb.regs.af);
    gb_call_bank(54, SpawnPhotographer);
    RestoreStackedBankAndReturn(); return;
}

void LoadPhotoBgMap_trampoline(void) {
    gb_call_bank(61, LoadPhotoBgMap);
    return;
}

void AdjustBankNumberForGBC(void) {
    gb_push16(gb.regs.bc);
    gb.regs.b = gb.regs.a;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AdjustBankNumberForGBC_notGBC;
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb.regs.bc = gb_pop16();
    return;
  AdjustBankNumberForGBC_notGBC:;
    gb.regs.a = gb.regs.b;
    gb.regs.bc = gb_pop16();
    return;
}

void CopyObjectsAttributesToWRAM2(void) {
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    CopyData();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0x2100, gb.regs.a);
    return;
}

void BackupObjectInRAM2(void) {
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto BackupObjectInRAM2_else;
    gb_call_bank(32, CheckOverworldObjectIgnoreList);
    if (GET_FLAG_C()) goto BackupObjectInRAM2_endIf;
  BackupObjectInRAM2_else:;
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
  BackupObjectInRAM2_endIf:;
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb_write(0x2100, gb.regs.a);
    gb.regs.bc = gb_pop16();
    return;
}

void CopyData_trampoline(void) {
    gb_write(0x2100, gb.regs.a);
    CopyData();
    gb.regs.a = 0x28;
    gb_write(0x2100, gb.regs.a);
    return;
}

void CopyBGMapFromBank(void) {
    gb_push16(gb.regs.hl);
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CopyBGMapFromBank_gbcEnd;
    gb.regs.de = 0x0168;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = 1;
    gb_write(0xFF4F, gb.regs.a);
    CopyToBGMap0();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF4F, gb.regs.a);
  CopyBGMapFromBank_gbcEnd:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.hl);
    CopyToBGMap0();
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) goto CopyBGMapFromBank_photoAlbumEnd;
    func_BB5();
  CopyBGMapFromBank_photoAlbumEnd:;
    gb.regs.a = gb_read(0xFFE6);
    gb_write(0x2100, gb.regs.a);
    return;
}

void CopyToBGMap0(void) {
    gb.regs.de = 0x9800;
  CopyToBGMap0_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_Z()) goto CopyToBGMap0_loop;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.d = gb.regs.a;
    alu_cp8(gb.regs.a, 0x9A);
    if (!GET_FLAG_Z()) goto CopyToBGMap0_loop;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto CopyToBGMap0_loop;
    return;
}

void func_BB5(void) {
    gb.regs.bc = 0x0168;
    gb.regs.de = 0xD200;
    CopyData(); return;
}

void LoadBaseTiles_trampoline(void) {
    gb_push16(gb.regs.af);
    LoadBaseTiles();
    RestoreStackedBankAndReturn(); return;
}

void func_BC5(void) {
    gb.regs.a = gb_read(0xD16A);
    gb_write(0x2100, gb.regs.a);
  func_BC5_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto func_BC5_loop;
    gb.regs.a = 0x28;
    gb_write(0x2100, gb.regs.a);
    return;
}

void Farcall(void) {
    gb.regs.a = gb_read(0xDEA9);
    gb_write(0x2100, gb.regs.a);
    Farcall_trampoline();
    gb.regs.a = gb_read(0xDEAC);
    gb_write(0x2100, gb.regs.a);
    return;
}

void Farcall_trampoline(void) {
    gb.regs.a = gb_read(0xDEAA);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xDEAB);
    gb.regs.l = gb.regs.a;
    /* jp hl - dynamic dispatch */;
    UpdateLinkWalkingAnimation_trampoline(); return;
}

void UpdateLinkWalkingAnimation_trampoline(void) {
    gb.regs.a = 2;
    gb_write(0x2100, gb.regs.a);
    UpdateLinkWalkingAnimation();
    ReloadSavedBank(); return;
}

void GetEntitySlowTransitionCountdown(void) {
    gb.regs.hl = 0xC450;
    IsZero(); return;
}

void GetEntityPrivateCountdown1(void) {
    gb.regs.hl = 0xC2F0;
    IsZero(); return;
}

void GetEntityTransitionCountdown(void) {
    gb.regs.hl = 0xC2E0;
    IsZero(); return;
}

void IsZero(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void CreateTradingItemEntity(void) {
    gb.regs.a = 0xAF;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void PlayWrongAnswerJingle(void) {
    gb.regs.a = 0x1D;
    gb_write(0xFFF2, gb.regs.a);
    return;
}

void ReadTileValueFromAsciiTable(void) {
    gb.regs.hl = 0x4391;
    ReadValueInDialogsBank(); return;
}

void ReadTileValueFromDiacriticsTable(void) {
    gb.regs.hl = 0x4491;
    ReadValueInDialogsBank(); return;
}

void ReadValueInDialogsBank(void) {
    gb.regs.a = 28;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x2100;
    gb_write(gb.regs.hl, 1);
    return;
}

void CopySirenInstrumentTiles(void) {
    gb.regs.a = 12;
    gb_write(0x2100, gb.regs.a);
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.a = 1;
    gb_write(0x2100, gb.regs.a);
    return;
}

void PlayBombExplosionSfx(void) {
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x0C);
    AlertSwordMoblins(); return;
}

void AlertSwordMoblins(void) {
    gb.regs.hl = 0xC502;
    gb_write(gb.regs.hl, 4);
    return;
}

void DecrementEntityIgnoreHitsCountdown(void) {
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DecrementEntityIgnoreHitsCountdown_endIf;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  DecrementEntityIgnoreHitsCountdown_endIf:;
    return;
}

void MarkTriggerAsResolved(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xC18F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarkTriggerAsResolved_return;
    gb_write(0xC1CF, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC18F, gb.regs.a);
    gb_write(0xC5A6, gb.regs.a);
    gb.regs.a = gb_read(0xC19D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarkTriggerAsResolved_return;
    gb.regs.a = 2;
    gb_write(0xFFF2, gb.regs.a);
  MarkTriggerAsResolved_return:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
}

void ApplyMapFadeOutTransitionWithNoise(void) {
    gb.regs.a = 0x30;
    gb_write(0xFFA8, gb.regs.a);
    playNoiseStairs(); return;
}

void ApplyMapFadeOutTransition(void) {
    gb.regs.a = 0x30;
    gb_write(0xFFA8, gb.regs.a);
    disableMovementInTransition(); return;
}

void ApplyMapFadeOutTransitionWithSound(void) {
    gb.regs.a = gb_read(0xD401);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ApplyMapFadeOutTransitionWithNoise(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ApplyMapFadeOutTransitionWithNoise(); return; };
    gb.regs.a = 1;
    gb_write(0xFFBC, gb.regs.a);
    playNoiseStairs(); return;
}

void playNoiseStairs(void) {
    gb.regs.a = 6;
    gb_write(0xFFF4, gb.regs.a);
    disableMovementInTransition(); return;
}

void disableMovementInTransition(void) {
    gb.regs.a = 3;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xD478, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void ResetSpinAttack(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC121, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    ResetPegasusBoots(); return;
}

void ResetPegasusBoots(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC14B, gb.regs.a);
    gb_write(0xC14A, gb.regs.a);
    return;
}

void CopyLinkFinalPositionToPosition(void) {
    gb.regs.a = gb_read(0xFF9F);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFA0);
    gb_write(0xFF99, gb.regs.a);
    return;
}

void AddTranscientVfx(void) {
    gb_push16(gb.regs.af);
    gb.regs.e = 0x0F;
    gb.regs.d = 0;
  AddTranscientVfx_loop:;
    gb.regs.hl = 0xC510;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AddTranscientVfx_jp_CEC;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto AddTranscientVfx_loop;
    gb.regs.hl = 0xC5C0;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto AddTranscientVfx_wrapEnd;
    gb.regs.a = 0x0F;
    gb_write(0xC5C0, gb.regs.a);
  AddTranscientVfx_wrapEnd:;
    gb.regs.a = gb_read(0xC5C0);
    gb.regs.e = gb.regs.a;
  AddTranscientVfx_jp_CEC:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xC510;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC540;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC530;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC520;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0F);
    return;
}

void label_D07(void) {
    gb.regs.a = gb_read(0xC140);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xC142);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFD8, gb.regs.a);
    label_D15(); return;
}

void label_D15(void) {
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 5;
    AddTranscientVfx(); return;
}

void SelectRoomTilesets(void) {
    gb.regs.a = 32;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_overworld;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6692;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto SelectRoomTilesets_colorDungeonEnd;
    gb.regs.hl = 0x6892;
    goto SelectRoomTilesets_readTilesetFromTable;
  SelectRoomTilesets_colorDungeonEnd:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto SelectRoomTilesets_readTilesetFromTable;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto SelectRoomTilesets_readTilesetFromTable;
    gb.regs.h = alu_inc8(gb.regs.h);
  SelectRoomTilesets_readTilesetFromTable:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF94);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_indoorTilesetEnd;
    gb_write(0xFF94, gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_indoorTilesetEnd;
    gb.regs.a = 1;
    gb_write(0xFF90, gb.regs.a);
  SelectRoomTilesets_indoorTilesetEnd:;
    goto SelectRoomTilesets_tilesetEnd;
  SelectRoomTilesets_overworld:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto SelectRoomTilesets_eggHackEnd;
    gb.regs.a = alu_inc8(gb.regs.a);
  SelectRoomTilesets_eggHackEnd:;
    gb.regs.d = gb.regs.a;
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6652;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF94);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_tilesetEnd;
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_tilesetEnd;
    alu_cp8(gb.regs.a, W_TILESET_CAMERA_SHOP);
    if (!GET_FLAG_Z()) goto SelectRoomTilesets_cameraShopEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x37);
    if (!GET_FLAG_Z()) goto SelectRoomTilesets_tilesetEnd;
    gb.regs.a = gb_read(gb.regs.hl);
  SelectRoomTilesets_cameraShopEnd:;
    gb_write(0xFF94, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFF90, gb.regs.a);
  SelectRoomTilesets_tilesetEnd:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x68B2;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto SelectRoomTilesets_indoorsBEnd;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto SelectRoomTilesets_indoorsBEnd;
    gb.regs.d = alu_inc8(gb.regs.d);
  SelectRoomTilesets_indoorsBEnd:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_oamTilesetOnOverworld;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto SelectRoomTilesets_spritesheetGroupDone;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB5);
    if (!GET_FLAG_Z()) goto SelectRoomTilesets_spritesheetGroupDone;
    gb.regs.e = 0x3D;
    goto SelectRoomTilesets_spritesheetGroupDone;
  SelectRoomTilesets_oamTilesetOnOverworld:;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x23);
    if (!GET_FLAG_Z()) goto SelectRoomTilesets_sirenRoomEnd;
    gb.regs.a = gb_read(0xD97E);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_sirenRoomEnd;
    gb.regs.e = alu_inc8(gb.regs.e);
  SelectRoomTilesets_sirenRoomEnd:;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x21);
    if (!GET_FLAG_Z()) goto SelectRoomTilesets_spritesheetGroupDone;
    gb.regs.a = gb_read(0xD9B2);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_spritesheetGroupDone;
    gb.regs.e = alu_inc8(gb.regs.e);
  SelectRoomTilesets_spritesheetGroupDone:;
    gb.regs.d = 0;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto SelectRoomTilesets_useStandardSpritesheetsTables;
    gb.regs.a = 1;
    gb_write(0xFF91, gb.regs.a);
    goto SelectRoomTilesets_return;
  SelectRoomTilesets_useStandardSpritesheetsTables:;
    gb.regs.hl = 0x6BD2;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_spritesheetsTableEnd;
    gb.regs.hl = 0x6BD2;
  SelectRoomTilesets_spritesheetsTableEnd:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.d = 0;
    gb.regs.bc = 0xC193;
  SelectRoomTilesets_loop:;
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(gb.regs.bc);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_continue;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_continue;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SelectRoomTilesets_useVariantA;
    gb.regs.a = gb.regs.d;
    gb_write(0xC10D, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC10E, gb.regs.a);
    goto SelectRoomTilesets_continue;
  SelectRoomTilesets_useVariantA:;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(0xC197, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFF91, gb.regs.a);
  SelectRoomTilesets_continue:;
    gb.regs.hl++;
    gb.regs.bc++;
    gb.regs.d = alu_inc8(gb.regs.d);
    gb.regs.a = gb.regs.d;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto SelectRoomTilesets_loop;
  SelectRoomTilesets_return:;
    ReloadSavedBank(); return;
}

void ExecuteGameplayHandler(void) {
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_C()) { jumpToGameplayHandler(); return; };
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) { presentSaveScreenIfNeeded(); return; };
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jumpToGameplayHandler(); return; };
}

void presentSaveScreenIfNeeded(void) {
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { jumpToGameplayHandler(); return; };
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC167;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC124;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jumpToGameplayHandler(); return; };
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) { jumpToGameplayHandler(); return; };
    gb.regs.a = gb_read(0xFFCB);
    alu_cp8(gb.regs.a, 0xF0);
    if (!GET_FLAG_Z()) { jumpToGameplayHandler(); return; };
    gb.regs.a = gb_read(0xD474);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jumpToGameplayHandler(); return; };
    gb.regs.a = gb_read(0xD464);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jumpToGameplayHandler(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xC19F, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 6;
    gb_write(0xDC3D, gb.regs.a);
    jumpToGameplayHandler(); return;
}

void jumpToGameplayHandler(void) {
    gb.regs.a = gb_read(0xDC3D);
    switch(gb.regs.a) {
        case 0x00: IntroHandler(); return;
        case 0x01: EndCreditsHandler(); return;
        case 0x02: FileSelectionHandler(); return;
        case 0x03: FileCreationHandler(); return;
        case 0x04: FileDeletionHandler(); return;
        case 0x05: FileCopyHandler(); return;
        case 0x06: FileSaveHandler(); return;
        case 0x07: WorldMapHandler(); return;
        case 0x08: PeachPictureHandler(); return;
        case 0x09: MarinBeachHandler(); return;
        case 0x0A: FaceShrineMuralHandler(); return;
        case 0x0B: WorldHandler(); return;
        case 0x0C: InventoryHandler(); return;
        case 0x0D: PhotoAlbumHandler(); return;
        case 0x0E: PhotoPictureHandler(); return;
        case 0x0F: PhotoPictureHandler(); return;
        case 0x10: PhotoPictureHandler(); return;
        case 0x11: PhotoPictureHandler(); return;
        case 0x12: PhotoPictureHandler(); return;
        case 0x13: PhotoPictureHandler(); return;
        case 0x14: PhotoPictureHandler(); return;
        case 0x15: PhotoPictureHandler(); return;
        case 0x16: PhotoPictureHandler(); return;
        case 0x17: PhotoPictureHandler(); return;
        case 0x18: PhotoPictureHandler(); return;
        case 0x19: PhotoPictureHandler(); return;
        case 0x1A: PhotoPictureHandler(); return;
    }
}

void FaceShrineMuralHandler(void) {
    FaceShrineMuralEntryPoint();
    returnFromGameplayHandler(); return;
}

void PeachPictureHandler(void) {
    PeachPictureEntryPoint();
    returnFromGameplayHandler(); return;
}

void MarinBeachHandler(void) {
    MarinBeachEntryPoint();
    returnFromGameplayHandler(); return;
}

void WorldMapHandler(void) {
    WorldMapEntryPoint();
    returnFromGameplayHandler(); return;
}

void FileSaveHandler(void) {
    FileSaveEntryPoint(); return /* jpsw */;
}

void IntroHandler(void) {
    IntroHandlerEntryPoint(); return;
    gb_call_bank(23, EndCreditsEntryPoint);
    returnFromGameplayHandler(); return;
}

void AnimateEntitiesAndRestoreBank17(void) {
    gb.regs.a = 3;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = 0x17;
    AnimateEntitiesAndRestoreBank(); return;
}

void AnimateEntitiesAndRestoreBank(void) {
    gb_push16(gb.regs.af);
    AnimateEntities();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    SwitchBank(); return;
}

void AnimateEntitiesAndRestoreBank01(void) {
    gb.regs.a = 3;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = 1;
    AnimateEntitiesAndRestoreBank(); return;
}

void AnimateEntitiesAndRestoreBank02(void) {
    gb.regs.a = 3;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = 2;
    AnimateEntitiesAndRestoreBank(); return;
}

void FileSelectionHandler(void) {
    FileSelectionEntryPoint(); return;
}

void FileCreationHandler(void) {
    FileCreationEntryPoint(); return;
}

void FileDeletionHandler(void) {
    FileDeletionEntryPoint(); return;
}

void FileCopyHandler(void) {
    FileCopyEntryPoint(); return;
}

void WorldHandler(void) {
    gb_call_bank(20, UpdatePaletteEffectForInteractiveObjects);
    PerformOverworldAudioTasks();
    WorldHandlerEntryPoint(); return /* jpsw */;
}

void InventoryHandler(void) {
    InventoryEntryPoint(); return /* jpsw */;
}

void PhotoAlbumHandler(void) {
    gb_call_bank(40, PhotoAlbumEntryPoint);
    returnFromGameplayHandler(); return;
}

void PhotoPictureHandler(void) {
    PhotosEntryPoint(); return /* jpsw */;
}

void WorldInteractiveHandler(void) {
    gb.regs.a = 2;
    SwitchBank();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WorldInteractiveHandler_normalFlow;
    gb.regs.hl = 0xFFB4;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto WorldInteractiveHandler_noDungeonName;
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto WorldInteractiveHandler_noDungeonName;
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WorldInteractiveHandler_noDungeonName;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) goto WorldInteractiveHandler_noDungeonName;
    gb_call_bank(1, OpenDungeonNameDialog);
    ReloadSavedBank();
  WorldInteractiveHandler_noDungeonName:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WorldInteractiveHandler_normalFlow;
    gb.regs.a = gb_read(0xC1BC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto WorldInteractiveHandler_normalFlow;
    gb.regs.hl = 0xFFA1;
    gb_write(gb.regs.hl, 2);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC1BC, gb.regs.a);
    if (!GET_FLAG_Z()) goto WorldInteractiveHandler_normalFlow;
    ApplyMapFadeOutTransitionWithNoise(); return;
  WorldInteractiveHandler_normalFlow:;
    gb.regs.hl = 0xDC6F;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto WorldInteractiveHandler_wInvincibilityAtZero;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  WorldInteractiveHandler_wInvincibilityAtZero:;
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFF9F, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_write(0xFFA0, gb.regs.a);
    gb.regs.hl = 0xFFA2;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFB3, gb.regs.a);
    func_002_60E0();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC140, gb.regs.a);
    gb_write(0xC13C, gb.regs.a);
    gb_write(0xC13B, gb.regs.a);
    gb.regs.hl = 0xC11D;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC11E;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    label_002_593B();
    gb_call_bank(2, ApplyRoomTransition);
    ApplyGotItem();
    gb.regs.a = gb_read(0xC15C);
    gb_write(0xC3CF, gb.regs.a);
    gb_call_bank(32, func_20_4B1F);
    gb_call_bank(25, func_019_7A9A);
    AnimateEntities();
    gb_call_bank(2, label_002_5487);
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { label_1012(); return; };
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { label_1012(); return; };
    gb.regs.c = 1;
    gb.regs.b = 0;
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto WorldInteractiveHandler_label_100A;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.e = alu_dec8(gb.regs.e);
  WorldInteractiveHandler_label_100A:;
    gb_call_bank(32, DrawInventorySlots);
    label_1012(); return;
}

void label_1012(void) {
    gb_call_bank(20, func_014_54F8);
    returnFromGameplayHandler(); return;
}

void returnFromGameplayHandler(void) {
    gb.regs.a = 15;
    SwitchBank();
    ExecuteDialog();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 36;
    SwitchBank();
    LoadBGPalettes(); return;
}

void DialogForItem(void) {
  DialogForItem_gotItem1:;
    /* db_dialog_low Dialog008 */;
  DialogForItem_gotItem2:;
    /* db_dialog_low Dialog00E */;
  DialogForItem_gotItem3:;
    /* db_dialog_low Dialog099 */;
  DialogForItem_gotItem4:;
    /* db_dialog_low Dialog028 */;
  DialogForItem_gotItem5:;
    /* db_dialog_low Dialog0EC */;
    ApplyGotItem(); return;
}

void ApplyGotItem(void) {
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFA2;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC145, gb.regs.a);
    gb.regs.a = gb_read(0xC1A9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { InitGotItemSequence(); return; };
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyGotItem_dispatchItemType;
    gb.regs.hl = 0xC1AA;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto ApplyGotItem_countdownNotFinished;
    gb.regs.a = gb_read(0xC1A9);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x0D36;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    OpenDialogInTable0();
    gb.regs.a = 1;
  ApplyGotItem_countdownNotFinished:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyGotItem_dispatchItemType;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1A9, gb.regs.a);
    gb_write(0xC1A8, gb.regs.a);
    InitGotItemSequence(); return;
  ApplyGotItem_dispatchItemType:;
    gb.regs.a = gb_read(0xC1A9);
    gb_write(0xC1A8, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: HandleGotItemA(); return;
        case 0x01: HandleGotItemB(); return;
        case 0x02: HandleGotItemB(); return;
        case 0x03: HandleGotItemB(); return;
        case 0x04: HandleGotItemA(); return;
    }
}

void InitGotItemSequence(void) {
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0xB0);
    if (!GET_FLAG_Z()) goto InitGotItemSequence_jp_10DB;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto InitGotItemSequence_jp_10DB;
    gb.regs.a = gb_read(0xD45F);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD45F, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto InitGotItemSequence_jp_10DF;
    gb.regs.a = gb_read(0xFFA1);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto InitGotItemSequence_jp_10DB;
    gb.regs.a = gb_read(0xFF9D);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto InitGotItemSequence_jp_10DB;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto InitGotItemSequence_jp_10DB;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC167;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC124;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto InitGotItemSequence_jp_10DB;
    gb.regs.a = gb_read(0xD464);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto InitGotItemSequence_jp_10DB;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0xDC3D, gb.regs.a);
    gb_call_bank(2, func_002_755B);
    DrawLinkSprite();
    AnimateEntities();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
  InitGotItemSequence_jp_10DB:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD45F, gb.regs.a);
  InitGotItemSequence_jp_10DF:;
    gb.regs.a = gb_read(0xFFB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto InitGotItemSequence_linkCountdownEnd;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFFB7, gb.regs.a);
  InitGotItemSequence_linkCountdownEnd:;
    gb.regs.a = gb_read(0xFFB6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto InitGotItemSequence_punchedAwayDecrementEnd;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFFB6, gb.regs.a);
  InitGotItemSequence_punchedAwayDecrementEnd:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ApplyLinkMotionState(); return; };
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_114F(); return; };
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto InitGotItemSequence_linkMotionJumpTable;
    gb.regs.a = gb_read(0xDC02);
    gb.regs.hl = 0xC50A;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto InitGotItemSequence_handleLinkMotion;
    gb.regs.a = 7;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.a = 0xBF;
    gb_write(0xFFB7, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xC3CC, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC6F, gb.regs.a);
    gb_write(0xFF9C, gb.regs.a);
    gb_write(0xDE7E, gb.regs.a);
    gb_write(0xDE7F, gb.regs.a);
    gb_write(0xD464, gb.regs.a);
    label_27F2();
    gb.regs.a = 8;
    gb_write(0xFFF3, gb.regs.a);
  InitGotItemSequence_handleLinkMotion:;
    gb.regs.a = gb_read(0xC11C);
  InitGotItemSequence_linkMotionJumpTable:;
    switch(gb.regs.a) {
        case 0x00: LinkMotionDefaultHandler(); return;
        case 0x01: LinkMotionSwimmingHandler(); return;
        case 0x02: LinkMotionUnstuckingHandler(); return;
        case 0x03: LinkMotionMapFadeOutHandler(); return;
        case 0x04: LinkMotionMapFadeInHandler(); return;
        case 0x05: LinkMotionRevolvingDoorHandler(); return;
        case 0x06: LinkMotionFallingDownHandler(); return;
        case 0x07: LinkMotionPassOutHandler(); return;
        case 0x08: LinkMotionRecoverHandler(); return;
        case 0x09: LinkMotionTeleportUpHandler(); return;
        case 0x0F: LinkMotionUnknownHandler(); return;
    }
}

void label_114F(void) {
    ApplyLinkMotionState();
    DrawLinkSpriteAndReturn(); return;
}

void LinkMotionTeleportUpHandler(void) {
    func_019_5D6A(); return /* jpsw */;
}

void LinkMotionPassOutHandler(void) {
    LinkPassOut(); return /* jpsw */;
}

void LinkMotionDefaultHandler(void) {
    gb_call_bank(54, IsInteractiveMotionAllowed);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    LinkMotionDefault(); return /* jpsw */;
}

void CheckItemsToUse(void) {
    gb.regs.a = gb_read(0xC50A);
    gb.regs.hl = 0xC167;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC1A4;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckItemsToUse_notRunning;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto CheckItemsToUse_swordEquipped;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto CheckItemsToUse_swordEquipped;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto CheckItemsToUse_shieldEquipped;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto CheckItemsToUse_shieldEnd;
  CheckItemsToUse_shieldEquipped:;
    SetShieldVals();
    goto CheckItemsToUse_shieldEnd;
  CheckItemsToUse_swordEquipped:;
    gb.regs.a = gb_read(0xC137);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto CheckItemsToUse_shieldEnd;
    gb.regs.a = 5;
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC16A, gb.regs.a);
  CheckItemsToUse_shieldEnd:;
    goto CheckItemsToUse_swordShieldEnd;
  CheckItemsToUse_notRunning:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC15B, gb.regs.a);
    gb_write(0xC15A, gb.regs.a);
  CheckItemsToUse_swordShieldEnd:;
    gb.regs.a = gb_read(0xC117);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UseItem_return(); return; };
    gb.regs.a = gb_read(0xC15C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UseItem_return(); return; };
    gb.regs.a = gb_read(0xC137);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckItemsToUse_checkMotionBlocked;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto CheckItemsToUse_checkMotionBlocked;
    gb.regs.a = gb_read(0xC138);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto CheckItemsToUse_pegasusBootsB;
  CheckItemsToUse_checkMotionBlocked:;
    gb.regs.a = gb_read(0xFFA1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UseItem_return(); return; };
  CheckItemsToUse_pegasusBootsB:;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto CheckItemsToUse_pegasusBootsA;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto CheckItemsToUse_resetPegasusBootsChargeMeterB;
    UsePegasusBoots();
    goto CheckItemsToUse_pegasusBootsA;
  CheckItemsToUse_resetPegasusBootsChargeMeterB:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC14B, gb.regs.a);
  CheckItemsToUse_pegasusBootsA:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto CheckItemsToUse_shieldA;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto CheckItemsToUse_resetPegasusBootsChargeMeterA;
    UsePegasusBoots();
    goto CheckItemsToUse_shieldA;
  CheckItemsToUse_resetPegasusBootsChargeMeterA:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC14B, gb.regs.a);
  CheckItemsToUse_shieldA:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto CheckItemsToUse_shieldB;
    gb.regs.a = gb_read(0xDBF0);
    gb_write(0xC15A, gb.regs.a);
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto CheckItemsToUse_shieldB;
    gb.regs.a = gb_read(0xC1AD);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto CheckItemsToUse_shieldB;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto CheckItemsToUse_shieldB;
    SetShieldVals();
  CheckItemsToUse_shieldB:;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto CheckItemsToUse_nextItemB;
    gb.regs.a = gb_read(0xDBF0);
    gb_write(0xC15A, gb.regs.a);
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto CheckItemsToUse_nextItemB;
    SetShieldVals();
  CheckItemsToUse_nextItemB:;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto CheckItemsToUse_nextItemA;
    gb.regs.a = gb_read(0xC1AD);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto CheckItemsToUse_nextItemA;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    UseItem();
  CheckItemsToUse_nextItemA:;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto CheckItemsToUse_swordB;
    gb.regs.a = gb_read(0xC1AD);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto CheckItemsToUse_swordB;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto CheckItemsToUse_swordB;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    UseItem();
  CheckItemsToUse_swordB:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto CheckItemsToUse_swordA;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    label_1321();
  CheckItemsToUse_swordA:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto CheckItemsToUse_jr_128D;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    label_1321();
  CheckItemsToUse_jr_128D:;
    gb_call_bank(32, func_020_48CA);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void UseItem(void) {
    gb.regs.c = gb.regs.a;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { UseSword(); return; };
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { UseShield(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { PlaceBomb(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { UsePowerBracelet(); return; };
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { ShootArrow(); return; };
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) { UseBoomerang(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { UseHookshot(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { UseRocsFeather(); return; };
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { UseOcarina(); return; };
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { UseMagicPowder(); return; };
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) { UseShovel(); return; };
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto UseItem_return;
  UseItem_useMagicRod:;
    gb.regs.hl = 0xC137;
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto UseItem_return;
    gb.regs.a = gb_read(0xC14D);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto UseItem_return;
    gb.regs.a = 0x8E;
    gb_write(0xC19B, gb.regs.a);
  UseItem_return:;
    return;
}

void UseShield(void) {
    gb.regs.a = gb_read(0xC144);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x16;
    gb_write(0xFFF4, gb.regs.a);
    return;
}

void UseShovel(void) {
    gb.regs.a = gb_read(0xC1C7);
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    func_002_4D20();
    if (!GET_FLAG_C()) goto UseShovel_notPoking;
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
    goto UseShovel_endIf;
  UseShovel_notPoking:;
    gb.regs.a = 0x0E;
    gb_write(0xFFF4, gb.regs.a);
  UseShovel_endIf:;
    gb.regs.a = 1;
    gb_write(0xC1C7, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1C8, gb.regs.a);
    return;
}

void UseHookshot(void) {
    gb.regs.a = gb_read(0xC1A4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    FireHookshot(); return;
}

void label_1321(void) {
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC137;
    gb.regs.a = gb_read(0xC1AD);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC160);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1AC, gb.regs.a);
    gb.regs.a = 5;
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC5B0, gb.regs.a);
    return;
}

void SetShieldVals(void) {
    gb.regs.a = 1;
    gb_write(0xC15B, gb.regs.a);
    gb.regs.a = gb_read(0xDBF0);
    gb_write(0xC15A, gb.regs.a);
    func_020_4B4A_trampoline(); return;
}

void func_020_4B4A_trampoline(void) {
    gb_call_bank(32, func_020_4B4A);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void PlaceBomb(void) {
    gb.regs.a = gb_read(0xC14E);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { PlayWrongAnswerJingle(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 1);
    alu_daa();
    gb_write(0xDBF9, gb.regs.a);
    gb.regs.a = 2;
    SpawnPlayerProjectile();
    if (GET_FLAG_C()) return;
    gb_call_bank(32, ConvertToBombArrowIfNeeded);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void UsePowerBracelet(void) {
    return;
}

void UseBoomerang(void) {
    gb.regs.a = gb_read(0xC14D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 1;
    SpawnPlayerProjectile();
    if (GET_FLAG_C()) return;
    gb_call_bank(32, func_020_4BFF);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void PlayerProjectileOffsetXPerDirection(void) {
    /* data: db 0, 0, 0, 0 */;
}

void PlayerProjectileOffsetYPerDirection(void) {
    /* data: db 0, 0, 0, 0 */;
}

void PlayerProjectileSpeedXPerDirection(void) {
    /* data: db 32, -32, 0, 0 */;
}

void PlayerProjectileSpeedYPerDirection(void) {
    /* data: db 0, 0, -32, 32 */;
}

void data_13AD(void) {
  data_13AD_rightWithPieceOfPower:;
    /* data: db $30 */;
  data_13AD_leftWithPieceOfPower:;
    /* data: db $D0 */;
  data_13AD_upWithPieceOfPower:;
    /* data: db 0 */;
  data_13AD_downWithPieceOfPower:;
    /* data: db 0 */;
  data_13AD_rightWithoutPieceOfPower:;
    /* data: db $40 */;
  data_13AD_leftWithoutPieceOfPower:;
    /* data: db $C0 */;
  data_13AD_upWithoutPieceOfPower:;
    /* data: db 0 */;
  data_13AD_downWithoutPieceOfPower:;
    /* data: db 0 */;
    data_13B5(); return;
}

void data_13B5(void) {
    /* data: db 0, 0, $D0, $30, 0, 0, $C0, $40 */;
}

void ShootArrow(void) {
    gb.regs.a = gb_read(0xC14C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC14D);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { label_140F_return(); return; };
    gb.regs.a = 0x10;
    gb_write(0xC14C, gb.regs.a);
    gb.regs.a = gb_read(0xDBF1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { PlayWrongAnswerJingle(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 1);
    alu_daa();
    gb_write(0xDBF1, gb.regs.a);
    func_157C();
    gb.regs.a = 0;
    SpawnPlayerProjectile();
    if (GET_FLAG_C()) return;
    gb.regs.a = gb.regs.e;
    gb_write(0xC1C2, gb.regs.a);
    gb.regs.a = gb_read(0xC1C0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ShootArrow_initBombArrowCooldown;
    gb.regs.a = gb_read(0xC1C1);
    gb.regs.c = gb.regs.a;
    gb.regs.b = gb.regs.d;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    goto ShootArrow_setBombArrowCooldown;
  ShootArrow_initBombArrowCooldown:;
    gb.regs.a = 0x0A;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = 6;
  ShootArrow_setBombArrowCooldown:;
    gb_write(0xC1C0, gb.regs.a);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    label_140F(); return;
}

void label_140F(void) {
    gb.regs.a = gb_read(0xD47C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto label_140F_label_141A;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.c = gb.regs.a;
  label_140F_label_141A:;
    /* TODO: :  */;
    gb.regs.hl = 0x1001;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x1001;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  label_140F_return:;
    /* TODO: :  */;
    return;
}

void SpawnPlayerProjectile(void) {
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb.regs.a = 0x0C;
    gb_write(0xC19B, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x0FF1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x0FF5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x0FF9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x0FFD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC4F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.bc = gb_pop16();
    alu_scf();
    alu_ccf();
    return;
}

void UseMagicPowder(void) {
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDBF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UseMagicPowder_jr_14A7;
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 2;
    gb_write(0xC1A9, gb.regs.a);
    gb.regs.a = 0x2A;
    gb_write(0xC1AA, gb.regs.a);
    return;
  UseMagicPowder_jr_14A7:;
    gb.regs.a = gb_read(0xDBF8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { PlayWrongAnswerJingle(); return; };
    gb.regs.a = 8;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb_call_bank(32, SprinkleMagicPowder);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void PegasusBootsJumpBoostXTable(void) {
    /* data: db 28, -28, 0, 0 */;
}

void PegasusBootsJumpBoostYTable(void) {
    /* data: db 0, 0, -28, 28 */;
}

void UseRocsFeather(void) {
    gb.regs.a = gb_read(0xC130);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 1;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC152, gb.regs.a);
    gb_write(0xC153, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UseRocsFeather_label_1508;
    _label_1508();
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = 0xEA;
    if (GET_FLAG_Z()) goto UseRocsFeather_label_14F8;
    gb.regs.a = 0xE8;
  UseRocsFeather_label_14F8:;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA3, gb.regs.a);
    UpdateFinalLinkPosition();
    CheckPositionForMapTransition(); return /* jpsw */;
  UseRocsFeather_label_1508:;
    gb.regs.a = 0x20;
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x1108;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0x110C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9B, gb.regs.a);
    return;
}

void SwordRandomSfxTable(void) {
    /* data: db NOISE_SFX_SWORD_SWING_A, NOISE_SFX_SWORD_SWING_B, NOISE_SFX_SWORD_SWING_C, NOISE_SFX_SWORD_SWING_D */;
}

void UseSword(void) {
    gb.regs.a = gb_read(0xC16D);
    gb.regs.hl = 0xC121;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 3;
    gb_write(0xC138, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC5B0, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC160, gb.regs.a);
    gb_write(0xC1AC, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x115B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF4, gb.regs.a);
    func_157C();
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_1562(); return; };
    ResetSpinAttack();
    ClearLinkPositionIncrement();
    label_1562(); return;
}

void label_1562(void) {
    gb.regs.a = gb_read(0xC14D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC5A9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDBFA);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0xDF;
    SpawnPlayerProjectile();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC19B, gb.regs.a);
    return;
}

void func_157C(void) {
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4877;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto func_157C_return;
    gb_write(0xFF9E, gb.regs.a);
  func_157C_return:;
    return;
}

void SwordCollisionMapX(void) {
    /* data: db $16, $FA, $08, $08 */;
    /* data: db $16, $16, $08, $FA, $FA, $FA, $08, $16 */;
}

void SwordCollisionMapY(void) {
    /* data: db $08, $08, $FA, $16 */;
    /* data: db $08, $16, $16, $16, $08, $FA, $FA, $FA */;
}

void CheckStaticSwordCollision_trampoline(void) {
    CheckStaticSwordCollision();
    gb.regs.a = 2;
    SwitchBank(); return;
}

void CheckStaticSwordCollision(void) {
    gb.regs.a = gb_read(0xC1C4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckStaticSwordCollision_label_15C0;
    gb.regs.a = gb_read(0xC16A);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) return;
  CheckStaticSwordCollision_label_15C0:;
    gb.regs.a = gb_read(0xC121);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckStaticSwordCollision_notSpinning;
    gb.regs.a = gb_read(0xC136);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    goto CheckStaticSwordCollision_end;
  CheckStaticSwordCollision_notSpinning:;
    gb.regs.a = gb_read(0xFF9E);
  CheckStaticSwordCollision_end:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x11BC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x11C8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF99);
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
    if (!GET_FLAG_Z()) return;
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFAF, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    GetObjectPhysicsFlags_trampoline();
    gb.regs.de = gb_pop16();
    alu_cp8(gb.regs.a, 0xD0);
    if (GET_FLAG_C()) goto CheckStaticSwordCollision_label_1610;
    alu_cp8(gb.regs.a, 0xD4);
    if (GET_FLAG_C()) { CheckItemsSwordCollision(); return; };
  CheckStaticSwordCollision_label_1610:;
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_C()) { CheckItemsSwordCollision(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { CheckItemsSwordCollision(); return; };
    gb.regs.c = 0;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xFFAF);
    if (GET_FLAG_Z()) { label_1629(); return; };
    alu_cp8(gb.regs.a, 0xDD);
    if (GET_FLAG_Z()) { label_1637(); return; };
    return;
}

void label_1629(void) {
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, 0xD3);
    if (GET_FLAG_Z()) { label_1637(); return; };
    alu_cp8(gb.regs.a, 0x5C);
    if (GET_FLAG_Z()) { label_1637(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) return;
    gb.regs.c = 0xFF;
    label_1637(); return;
}

void label_1637(void) {
    gb.regs.a = gb.regs.c;
    gb_write(0xFFF1, gb.regs.a);
    RevealObjectUnderObject_trampoline();
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_1653(); return; };
    gb.regs.a = gb_read(0xC16A);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { label_1653(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xC16D, gb.regs.a);
    label_1653(); return;
}

void label_1653(void) {
    gb.regs.a = 5;
    SpawnPlayerProjectile();
    if (GET_FLAG_C()) goto label_1653_dropRandomItem;
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
    gb.regs.a = gb_read(0xFFF1);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    LiftableRockStartSmashingAnimation_trampoline();
  label_1653_dropRandomItem:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xD3);
    if (GET_FLAG_Z()) return;
    GetRandomByte();
    alu_rra();
    gb.regs.a = 0x2E;
    if (!GET_FLAG_C()) goto label_1653_randomEnd;
    gb.regs.a = 0x2D;
  label_1653_randomEnd:;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
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
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    return;
}

void LinkDirectionToSwordCollisionRangeX(void) {
  LinkDirectionToSwordCollisionRangeX_right:;
    /* data: db $12 */;
  LinkDirectionToSwordCollisionRangeX_left:;
    /* data: db $EE */;
  LinkDirectionToSwordCollisionRangeX_up:;
    /* data: db $FC */;
  LinkDirectionToSwordCollisionRangeX_down:;
    /* data: db 4 */;
    LinkDirectionToSwordCollisionRangeY(); return;
}

void LinkDirectionToSwordCollisionRangeY(void) {
  LinkDirectionToSwordCollisionRangeY_right:;
    /* data: db 4 */;
  LinkDirectionToSwordCollisionRangeY_left:;
    /* data: db 4 */;
  LinkDirectionToSwordCollisionRangeY_up:;
    /* data: db $EE */;
  LinkDirectionToSwordCollisionRangeY_down:;
    /* data: db $12 */;
    CheckItemsSwordCollision(); return;
}

void CheckItemsSwordCollision(void) {
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xC16D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x12E2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0x12E2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xC502, gb.regs.a);
    label_D15();
    gb.regs.a = 0x10;
    gb_write(0xC1C4, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    alu_cp8(gb.regs.a, 0x90);
    if (GET_FLAG_Z()) goto CheckItemsSwordCollision_label_16F8;
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
    return;
  CheckItemsSwordCollision_label_16F8:;
    gb.regs.a = 0x17;
    gb_write(0xFFF4, gb.regs.a);
    return;
}

void XPositionIncrementPegasusRunning(void) {
  XPositionIncrementPegasusRunning_right:;
    /* data: db 32 */;
  XPositionIncrementPegasusRunning_left:;
    /* data: db -32 */;
  XPositionIncrementPegasusRunning_up:;
    /* data: db 0 */;
  XPositionIncrementPegasusRunning_down:;
    /* data: db 0 */;
    YPositionIncrementPegasusRunning(); return;
}

void YPositionIncrementPegasusRunning(void) {
  YPositionIncrementPegasusRunning_right:;
    /* data: db 0 */;
  YPositionIncrementPegasusRunning_left:;
    /* data: db 0 */;
  YPositionIncrementPegasusRunning_up:;
    /* data: db -32 */;
  YPositionIncrementPegasusRunning_down:;
    /* data: db 32 */;
    UsePegasusBoots(); return;
}

void UsePegasusBoots(void) {
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UsePegasusBoots_sideScrollingEnd;
    gb.regs.a = gb_read(0xFF9C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) return;
  UsePegasusBoots_sideScrollingEnd:;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC120);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xC120, gb.regs.a);
    DisplayTransientVfxForLinkRunning();
    gb.regs.a = gb_read(0xC14B);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC14B, gb.regs.a);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) return;
    gb_write(0xC14A, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC121, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x1317;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0x1317;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1AC, gb.regs.a);
    return;
}

void DisplayTransientVfxForLinkRunning(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.hl = 0xFFA2;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFA1;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xC181);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto DisplayTransientVfxForLinkRunning_shallowWater;
    gb.regs.a = 7;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 6);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 0x0B;
    AddTranscientVfx(); return;
  DisplayTransientVfxForLinkRunning_shallowWater:;
    gb.regs.a = gb_read(0xFF99);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0x0C;
    AddTranscientVfx(); return;
}

void ClearLinkPositionIncrement(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    return;
}

void ApplyLinkMotionState(void) {
    func_002_753A();
  ApplyLinkMotionState_skipInitialCall:;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC16A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyLinkMotionState_label_17DB;
    gb.regs.bc = 0xC010;
    gb.regs.a = gb_read(0xC145);
    gb.regs.hl = 0xC13B;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.hl = 0xFFDA;
    gb_write(gb.regs.hl, 0);
    gb.regs.a = gb_read(0xC122);
    alu_cp8(gb.regs.a, 0x28);
    if (GET_FLAG_C()) goto ApplyLinkMotionState_label_17C6;
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
  ApplyLinkMotionState_label_17C6:;
    gb.regs.a = gb_read(0xC139);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xC13A);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(0xC136);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) return;
    func_1819(); return;
  ApplyLinkMotionState_label_17DB:;
    gb.regs.a = gb_read(0xC19B);
    gb_push16(gb.regs.af);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyLinkMotionState_magicRodEnd;
    gb_call_bank(2, label_002_5310);
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto ApplyLinkMotionState_magicRodEnd;
    gb.regs.hl = 0xC19F;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ApplyLinkMotionState_magicRodEnd;
    func_157C();
    gb.regs.a = 4;
    SpawnPlayerProjectile();
    if (GET_FLAG_C()) goto ApplyLinkMotionState_magicRodEnd;
    gb.regs.a = 0x0D;
    gb_write(0xFFF4, gb.regs.a);
    gb_call_bank(2, label_002_538B);
  ApplyLinkMotionState_magicRodEnd:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xC19B, gb.regs.a);
    return;
}

void func_1819(void) {
    gb_call_bank(32, func_020_4AB3);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void func_1828(void) {
    gb_call_bank(32, func_020_49BA);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void LinkMotionMapFadeOutHandler(void) {
    func_002_754F();
    gb.regs.a = gb_read(0xC3C9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_1847;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC3C9, gb.regs.a);
    ApplyMapFadeOutTransitionWithNoise(); return;
  LinkMotionMapFadeOutHandler_label_1847:;
    func_1A22();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC1A8, gb.regs.a);
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { SetSpawnLocation_return(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xFFB4, gb.regs.a);
    gb_write(0xDE7E, gb.regs.a);
    gb_write(0xDE7F, gb.regs.a);
    gb.regs.e = 0x10;
    gb.regs.hl = 0xC280;
  LinkMotionMapFadeOutHandler_clearEntitiesStatusLoop:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_clearEntitiesStatusLoop;
    gb.regs.a = gb_read(0xC509);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_1898;
    gb_push16(gb.regs.af);
    gb.regs.a = 4;
    SwitchBank();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    label_004_7A5F();
    gb.regs.hl = 0xDC16;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xDBF2;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xDCB4);
    gb.regs.a = alu_or8(gb.regs.a, 0x40);
    gb_write(0xDCB4, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD47E, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9D, gb.regs.a);
  LinkMotionMapFadeOutHandler_label_1898:;
    gb.regs.a = gb_read(0xFFF9);
    gb_write(0xFFE4, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xDC3D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb_write(0xC3CB, gb.regs.a);
    gb_write(0xFFF9, gb.regs.a);
    gb.regs.hl = 0xD401;
    gb.regs.a = gb_read(0xDC4D);
    gb_write(0xFFE6, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_18DF;
    gb.regs.hl = 0xD416;
    gb.regs.c = 0;
  LinkMotionMapFadeOutHandler_loop:;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_break;
    gb.regs.hl++;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_loop;
  LinkMotionMapFadeOutHandler_break:;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD401;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  LinkMotionMapFadeOutHandler_label_18DF:;
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xDC4D, gb.regs.a);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_18F2;
    gb_write(0xFFF9, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xDC4D, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFF9C, gb.regs.a);
  LinkMotionMapFadeOutHandler_label_18F2:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFFF7, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFFF6, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_1909;
    gb.regs.a = gb_read(0xFFE6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_1907;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD47C, gb.regs.a);
  LinkMotionMapFadeOutHandler_label_1907:;
    goto LinkMotionMapFadeOutHandler_label_196F;
  LinkMotionMapFadeOutHandler_label_1909:;
    gb.regs.c = gb.regs.a;
    gb.regs.a = 0x14;
    SwitchBank();
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0x4220;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_colorDungeonEnd;
    gb.regs.hl = 0x44E0;
    goto LinkMotionMapFadeOutHandler_label_193C;
  LinkMotionMapFadeOutHandler_colorDungeonEnd:;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_193C;
    gb.regs.a = gb_read(0xDC13);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_193C;
    gb.regs.hl = 0x4520;
  LinkMotionMapFadeOutHandler_label_193C:;
    gb.regs.e = 0;
  LinkMotionMapFadeOutHandler_loop_193E:;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, gb.regs.c);
    if (GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_break_1948;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_loop_193E;
  LinkMotionMapFadeOutHandler_break_1948:;
    gb.regs.a = gb.regs.e;
    gb_write(0xDC56, gb.regs.a);
    gb.regs.a = gb_read(0xFFE6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_196E;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD47C, gb.regs.a);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) goto LinkMotionMapFadeOutHandler_label_196E;
    gb_call_bank(2, LoadMinimap);
    gb.regs.a = 0x30;
    gb_write(0xFFB4, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD7B0, gb.regs.a);
    gb_write(0xD7AD, gb.regs.a);
  LinkMotionMapFadeOutHandler_label_196E:;
    gb.regs.hl = gb_pop16();
  LinkMotionMapFadeOutHandler_label_196F:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xDC45, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC46, gb.regs.a);
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_19DA(); return; };
    gb.regs.a = gb_read(0xFFE4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { SetSpawnLocation_return(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { SetSpawnLocation(); return; };
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_1993;
    gb.regs.hl = 0x4E3C;
    goto LinkMotionMapFadeOutHandler_label_19A4;
  LinkMotionMapFadeOutHandler_label_1993:;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) { SetSpawnLocation(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4DF1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  LinkMotionMapFadeOutHandler_label_19A4:;
    gb.regs.a = 0x14;
    gb_write(0x2100, gb.regs.a);
    SetSpawnLocation();
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeOutHandler_label_19B7;
    gb.regs.a = 0x3A;
    goto LinkMotionMapFadeOutHandler_label_19BF;
  LinkMotionMapFadeOutHandler_label_19B7:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4E41;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
  LinkMotionMapFadeOutHandler_label_19BF:;
    gb.regs.de = gb_pop16();
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void SetSpawnLocation(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.de = 0xDC07;
  SetSpawnLocation_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto SetSpawnLocation_loop;
    gb.regs.a = gb_read(0xDC56);
    gb_write(gb.regs.de, gb.regs.a);
  SetSpawnLocation_return:;
    return;
}

void label_19DA(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9E, gb.regs.a);
    return;
}

void LinkMotionMapFadeInHandler(void) {
    func_002_754F();
    gb.regs.a = gb_read(0xD474);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkMotionMapFadeInHandler_label_19FC;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD474, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xC180, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xC17F, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xC16B, gb.regs.a);
    goto LinkMotionMapFadeInHandler_label_1A06;
  LinkMotionMapFadeInHandler_label_19FC:;
    func_1A39();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    if (!GET_FLAG_Z()) goto LinkMotionMapFadeInHandler_return;
  LinkMotionMapFadeInHandler_label_1A06:;
    gb.regs.a = gb_read(0xD463);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto LinkMotionMapFadeInHandler_label_1A0F;
    gb.regs.a = 0;
  LinkMotionMapFadeInHandler_label_1A0F:;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.a = gb_read(0xD47E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    if (GET_FLAG_Z()) goto LinkMotionMapFadeInHandler_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD47E, gb.regs.a);
    /* jp_open_dialog Dialog036 */;
  LinkMotionMapFadeInHandler_return:;
    return;
}

void func_1A22(void) {
    gb_call_bank(32, func_020_6C4F);
    gb_call_bank(32, FadeOutMusic);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void func_1A39(void) {
    gb_call_bank(32, func_020_6C7A);
    gb_call_bank(32, func_020_563B);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void UpdateLinkWalkingAnimation(void) {
    gb.regs.a = gb_read(0xC120);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x4948;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto UpdateLinkWalkingAnimation_notSwimming;
    gb.regs.a = gb_read(0xFF9C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateLinkWalkingAnimation_swimmingEnd;
    gb.regs.hl = 0x4950;
  UpdateLinkWalkingAnimation_swimmingEnd:;
    goto UpdateLinkWalkingAnimation_done;
  UpdateLinkWalkingAnimation_notSwimming:;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateLinkWalkingAnimation_notSideScrolling;
    gb.regs.a = gb_read(0xFF9C);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto UpdateLinkWalkingAnimation_notSideScrolling;
    gb.regs.hl = 0x4877;
    goto UpdateLinkWalkingAnimation_done;
  UpdateLinkWalkingAnimation_notSideScrolling:;
    gb.regs.a = gb_read(0xC15C);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto UpdateLinkWalkingAnimation_liftingObject;
    gb.regs.a = gb_read(0xFFB2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto UpdateLinkWalkingAnimation_label_1A9A;
    gb.regs.a = gb_read(0xC144);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto UpdateLinkWalkingAnimation_pushingObject;
  UpdateLinkWalkingAnimation_label_1A9A:;
    gb.regs.a = gb_read(0xC15A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto UpdateLinkWalkingAnimation_hasShield;
    gb.regs.hl = 0x4877;
    goto UpdateLinkWalkingAnimation_done;
  UpdateLinkWalkingAnimation_hasShield:;
    gb.regs.hl = 0x4877;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto UpdateLinkWalkingAnimation_shieldDone;
    gb.regs.hl = 0x4877;
  UpdateLinkWalkingAnimation_shieldDone:;
    gb.regs.a = gb_read(0xC15B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateLinkWalkingAnimation_shieldNotUsed;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb.regs.h;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.h = gb.regs.a;
  UpdateLinkWalkingAnimation_shieldNotUsed:;
    goto UpdateLinkWalkingAnimation_done;
  UpdateLinkWalkingAnimation_pushingObject:;
    gb.regs.hl = 0x4877;
    goto UpdateLinkWalkingAnimation_done;
  UpdateLinkWalkingAnimation_liftingObject:;
    gb.regs.hl = 0x4877;
  UpdateLinkWalkingAnimation_done:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9D, gb.regs.a);
    return;
}

void AnimateMarinBeachTiles(void) {
    gb.regs.a = gb_read(0xD5C2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 16;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4050;
    gb.regs.de = 0x9500;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto AnimateMarinBeachTiles_skip;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) return;
    gb.regs.l = 0x40;
    gb.regs.e = gb.regs.l;
  AnimateMarinBeachTiles_skip:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = 0x40;
    CopyData(); return;
    if (!GET_FLAG_Z()) { AnimateTiles_doWorldAnimations(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.b);
    gb_write(0xFFE0, gb.regs.a);
    gb_write(0xFFA0, gb.regs.a);
    gb.regs.h = gb.regs.b;
    AnimateTiles(); return;
}

void AnimateTiles(void) {
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { AnimateMarinBeachTiles(); return; };
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto AnimateTiles_introEnd;
    gb.regs.a = gb_read(0xD5C2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto AnimateTiles_return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto AnimateTiles_return;
    gb.regs.a = 0x10;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xD206);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(0xD207);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xD208);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xD209);
    gb.regs.d = gb.regs.a;
    gb.regs.bc = 0x20;
    CopyData(); return;
  AnimateTiles_return:;
    return;
  AnimateTiles_introEnd:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto AnimateTiles_creditsEnd;
    gb.regs.a = gb_read(0xFFA5);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { AnimateTiles_replaceTiles(); return; };
    return;
  AnimateTiles_creditsEnd:;
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_C()) { AnimateTiles_return(); return; };
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { AnimateTiles_return(); return; };
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { DrawLinkSpriteAndReturn(); return; };
  AnimateTiles_doWorldAnimations:;
    gb.regs.hl = 0xC124;
    gb.regs.a = gb_read(0xD5C2);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { DrawLinkSpriteAndReturn(); return; };
    gb.regs.a = gb_read(0xD7AD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AnimateTiles_switchableObjectEnd;
    UpdateSwitchBlockTiles();
    DrawLinkSpriteAndReturn(); return;
  AnimateTiles_switchableObjectEnd:;
    gb.regs.a = gb_read(0xFFA5);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AnimateTiles_tilesReplacementEnd;
  AnimateTiles_replaceTiles:;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { ReplaceEvilEagleRiderVisibleTiles(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { ReplaceEvilEagleRiderHiddenTiles(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { ReplaceTilesButtonPressed(); return; };
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { ReplaceTiles_04(); return; };
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { ReplaceTiles_08(); return; };
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { ReplaceSlimeKeyTilesByGoldenLeaf(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { ReplaceMagicPowderTilesByToadstool(); return; };
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) { ReplaceToadstoolTilesByMagicPowder(); return; };
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { ReplaceDialogTilesByInstruments(); return; };
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) { ReplaceTradingItemTiles(); return; };
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) goto AnimateTiles_animateCreditsIslandFadeTiles;
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { ReplaceMarinTiles_sitting(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { ReplaceMarinTiles_standingUp(); return; };
    DrawLinkSpriteAndReturn(); return;
  AnimateTiles_animateCreditsIslandFadeTiles:;
    gb_call_bank(23, AnimateCreditsIslandFadeTiles); return;
  AnimateTiles_tilesReplacementEnd:;
    gb.regs.a = gb_read(0xFFA6);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFA6, gb.regs.a);
  AnimateTiles_jumpTable:;
    gb.regs.a = gb_read(0xFFA4);
    switch(gb.regs.a) {
        case 0x00: SkipTilesGroupAnimation(); return;
        case 0x01: AnimateCounterTilesGroup(); return;
        case 0x02: AnimateTideTilesGroup(); return;
        case 0x03: AnimateVillageTilesGroup(); return;
        case 0x04: AnimateDungeon1TilesGroup(); return;
        case 0x05: AnimateUndergroundTilesGroup(); return;
        case 0x06: AnimateLavaTilesGroup(); return;
        case 0x07: AnimateDungeon2TilesGroup(); return;
        case 0x08: AnimateWarpTilesGroup(); return;
        case 0x09: AnimateWaterCurrentsTilesGroup(); return;
        case 0x0A: AnimateWaterfallTilesGroup(); return;
        case 0x0B: AnimateSlowWaterfallTilesGroup(); return;
        case 0x0C: AnimateWaterDungeonTilesGroup(); return;
        case 0x0D: AnimateLightBeamTilesGroup(); return;
        case 0x0E: AnimateCrystalBlockTilesGroup(); return;
        case 0x0F: AnimateBubblesTilesGroup(); return;
        case 0x10: AnimateWeatherVaneTilesGroup(); return;
        case 0x11: AnimatePhotoTilesGroup(); return;
    }
}

void AnimateCounterTilesGroup(void) {
    gb.regs.a = gb_read(0xFFA6);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { SkipTilesGroupAnimation(); return; };
    gb_call_bank(1, LoadCounterAnimatedTiles);
    gb.regs.a = 0x0C;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    DrawLinkSpriteAndReturn(); return;
}

void LoadAnimatedTilesFrameAtOffset(void) {
    gb.regs.l = gb.regs.a;
    LoadAnimatedTilesFrame(); return;
}

void AnimateTideTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesSlowSpeed(); return;
}

void AnimateVillageTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesSlowSpeed(); return;
}

void AnimateWaterDungeonTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesSlowSpeed(); return;
}

void AnimateSlowWaterfallTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesSlowSpeed(); return;
}

void AnimateTilesSlowSpeed(void) {
    gb.regs.a = gb_read(0xFFA6);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { SkipTilesGroupAnimation(); return; };
    IncrementAnimatedTilesDataOffset();
    LoadAnimatedTilesFrameAtOffset(); return;
}

void AnimatedTilesDataOffsets(void) {
    /* data: db 0, $40, $80, $C0, $C0, $C0, $80, $40 */;
}

void AnimateDungeon1TilesGroup(void) {
    gb.regs.a = gb_read(0xFFA6);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { SkipTilesGroupAnimation(); return; };
    gb.regs.a = gb_read(0xFFA6);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x1778;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.l = gb_read(gb.regs.hl);
    gb.regs.h = 0x40;
    LoadAnimatedTilesFrame(); return;
}

void LoadAnimatedTilesFrame(void) {
    gb.regs.de = 0x96C0;
  LoadAnimatedTilesFrame_de:;
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadAnimatedTilesFrame_endMapFF;
    gb.regs.a = 32;
    gb_write(0x2100, gb.regs.a);
    gb.regs.b = 1;
    ConfigureAnimatedTilesCopy();
    if (GET_FLAG_Z()) goto LoadAnimatedTilesFrame_next;
    gb_write(0x2100, gb.regs.a);
    CopyData();
  LoadAnimatedTilesFrame_next:;
    gb.regs.a = 32;
    gb_write(0x2100, gb.regs.a);
    gb.regs.b = 0;
    ConfigureAnimatedTilesCopy();
    if (GET_FLAG_Z()) goto LoadAnimatedTilesFrame_endMapFF;
    gb_write(0x2100, gb.regs.a);
    gb.regs.de = 0x96C0;
    CopyData();
  LoadAnimatedTilesFrame_endMapFF:;
    DrawLinkSpriteAndReturn(); return;
}

void AnimateUndergroundTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesSlowSpeed(); return;
}

void AnimateLavaTilesGroup(void) {
    gb.regs.a = gb_read(0xFFA6);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { SkipTilesGroupAnimation(); return; };
    gb.regs.a = gb_read(0xFFA6);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x1778;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.l = gb_read(gb.regs.hl);
    gb.regs.h = 0x40;
    LoadAnimatedTilesFrame(); return;
}

void AnimateDungeon2TilesGroup(void) {
    gb.regs.hl = 0xDD68;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { label_1CB8(); return; };
    gb.regs.de = 0x8400;
    LoadAnimatedTilesFrame_de(); return;
}

void label_1CB8(void) {
    gb.regs.a = gb_read(0xFFA6);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { AnimateDungeon1TilesGroup(); return; };
    gb.regs.de = 0x90C0;
    LoadAnimatedTilesFrame_de(); return;
}

void AnimateWarpTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesMediumSpeed(); return;
}

void AnimateTilesMediumSpeed(void) {
    gb.regs.a = gb_read(0xFFA6);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { SkipTilesGroupAnimation(); return; };
    IncrementAnimatedTilesDataOffset();
    LoadAnimatedTilesFrameAtOffset(); return;
}

void AnimateWaterCurrentsTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesFastSpeed(); return;
}

void AnimateTilesFastSpeed(void) {
    gb.regs.a = gb_read(0xFFA6);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { SkipTilesGroupAnimation(); return; };
    IncrementAnimatedTilesDataOffset();
    LoadAnimatedTilesFrameAtOffset(); return;
}

void AnimateWaterfallTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesFastSpeed(); return;
}

void IncrementAnimatedTilesDataOffset(void) {
    gb.regs.a = gb_read(0xFFA7);
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    gb_write(0xFFA7, gb.regs.a);
    return;
}

void AnimateLightBeamTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesFastSpeed(); return;
}

void AnimateBubblesTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesMediumSpeed(); return;
}

void AnimateWeatherVaneTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesMediumSpeed(); return;
}

void AnimateCrystalBlockTilesGroup(void) {
    gb.regs.h = 0x40;
    AnimateTilesMediumSpeed(); return;
}

void AnimatePhotoTilesGroup(void) {
    gb_call_bank(56, func_038_7830);
    DrawLinkSpriteAndReturn(); return;
}

void CopyLinkTilesPair(void) {
    gb.regs.a = 12;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
  CopyLinkTilesPair_loop:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.d = alu_dec8(gb.regs.d);
    if (!GET_FLAG_Z()) goto CopyLinkTilesPair_loop;
    gb.regs.a = 32;
    gb_write(0x2100, gb.regs.a);
    return;
}

void SkipTilesGroupAnimation(void) {
    gb_call_bank(32, func_020_54F5);
    gb.regs.a = 0x0C;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    DrawLinkSprite(); return;
}

void DrawLinkSprite(void) {
    DrawLinkSpriteAndReturn();
    DrawLinkSpriteAndReturn(); return;
}

void DrawLinkSpriteAndReturn(void) {
    gb.regs.a = gb_read(0xFF9D);
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DrawLinkSpriteAndReturn_jr_1D42;
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto DrawLinkSpriteAndReturn_jr_1D49;
    gb.regs.a = 4;
    goto DrawLinkSpriteAndReturn_jr_1D49;
  DrawLinkSpriteAndReturn_jr_1D42:;
    gb.regs.a = gb_read(0xDC6F);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
  DrawLinkSpriteAndReturn_jr_1D49:;
    gb_write(0xC135, gb.regs.a);
    gb.regs.hl = 0xC008;
    gb.regs.a = gb_read(0xC13B);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xC145);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) return;
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xC13C);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xC135);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xC11D);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_1DA1(); return; };
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { label_1DA1(); return; };
    gb.regs.a = gb_read(0xFF9D);
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_C()) { label_1D8C(); return; };
    alu_cp8(gb.regs.a, 0x55);
    if (!GET_FLAG_C()) { label_1D8C(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 7);
    gb_write(gb.regs.hl, gb.regs.a);
    label_1DA1(); return;
}

void label_1D8C(void) {
    gb.regs.a = gb_read(0xDCB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_1D95(); return; };
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    label_1D95(); return;
}

void label_1D95(void) {
    gb.regs.a = gb_read(0xFF9D);
    alu_cp8(gb.regs.a, 0x4E);
    if (GET_FLAG_Z()) { label_1D9F(); return; };
    alu_cp8(gb.regs.a, 0x4F);
    if (!GET_FLAG_Z()) { label_1DA1(); return; };
}

void label_1D9F(void) {
    gb_write(gb.regs.hl, 3);
    label_1DA1(); return;
}

void label_1DA1(void) {
    gb.regs.hl++;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xC135);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xC11E);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_1DE7(); return; };
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { label_1DE7(); return; };
    gb.regs.a = gb_read(0xFF9D);
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_C()) { label_1DD2(); return; };
    alu_cp8(gb.regs.a, 0x55);
    if (!GET_FLAG_C()) { label_1DD2(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 7);
    gb_write(gb.regs.hl, gb.regs.a);
    label_1DE7(); return;
}

void label_1DD2(void) {
    gb.regs.a = gb_read(0xDCB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_1DDB(); return; };
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    label_1DDB(); return;
}

void label_1DDB(void) {
    gb.regs.a = gb_read(0xFF9D);
    alu_cp8(gb.regs.a, 0x4E);
    if (GET_FLAG_Z()) { label_1DE5(); return; };
    alu_cp8(gb.regs.a, 0x4F);
    if (!GET_FLAG_Z()) { label_1DE7(); return; };
}

void label_1DE5(void) {
    gb_write(gb.regs.hl, 0x23);
    label_1DE7(); return;
}

void label_1DE7(void) {
    gb.regs.hl++;
    AnimateTiles_return(); return;
}

void AnimateTiles_return(void) {
    return;
}

void ReplaceMarinTiles(void) {
  ReplaceMarinTiles_standingUp:;
    gb.regs.hl = 0x4F00;
    gb.regs.a = 14;
    goto ReplaceMarinTiles_copyTiles;
  ReplaceMarinTiles_sitting:;
    gb.regs.a = 18;
    gb.regs.hl = 0x6080;
  ReplaceMarinTiles_copyTiles:;
    gb_write(0x2100, gb.regs.a);
    gb.regs.de = 0x8400;
    gb.regs.bc = 0x40;
    CopyDataAndDrawLinkSprite(); return;
}

void ReplaceTradingItemTiles(void) {
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) { CopyDataAndDrawLinkSprite_drawLinkSprite(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb.regs.d = gb.regs.a;
    gb.regs.e = 0;
    gb.regs.d = alu_sra(gb.regs.d);
    gb.regs.e = alu_rr(gb.regs.e);
    gb.regs.d = alu_sra(gb.regs.d);
    gb.regs.e = alu_rr(gb.regs.e);
    gb.regs.hl = 0x4020;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0x89A0;
    gb.regs.bc = 0x40;
    gb.regs.a = 12;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    CopyDataAndDrawLinkSprite(); return;
}

void ReplaceMagicPowderTilesByToadstool(void) {
    gb.regs.hl = 0x5140;
    gb.regs.de = 0x88E0;
    ReplaceTilesPairAndDrawLinkSprite(); return;
}

void ReplaceDialogTilesByInstruments(void) {
    gb.regs.a = 17;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0x8D00;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x5000;
    ReplaceEndCreditsTiles(); return;
}

void ReplaceEndCreditsTiles(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA5, gb.regs.a);
    gb.regs.a = 0x0C;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    return;
}

void ReplaceTiles_08(void) {
    gb.regs.a = 19;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0x8D00;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x4D00;
    ReplaceEndCreditsTiles(); return;
}

void ReplaceToadstoolTilesByMagicPowder(void) {
    gb.regs.hl = 0x4110;
    gb.regs.de = 0x88E0;
    gb.regs.a = 12;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.bc = 0x20;
    CopyDataAndDrawLinkSprite(); return;
}

void ReplaceSlimeKeyTilesByGoldenLeaf(void) {
    gb.regs.hl = 0x5160;
    gb.regs.de = 0x8CA0;
    ReplaceTilesPairAndDrawLinkSprite(); return;
}

void ReplaceTilesPairAndDrawLinkSprite(void) {
    gb.regs.a = 12;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.bc = 0x20;
    CopyDataAndDrawLinkSprite(); return;
}

void ReplaceTilesButtonPressed(void) {
    gb.regs.hl = 0x41A0;
    gb.regs.a = 18;
    ReplaceTiles_04_replaceTiles(); return;
}

void ReplaceTiles_04(void) {
    gb.regs.hl = 0x4C40;
    gb.regs.a = 13;
  ReplaceTiles_04_replaceTiles:;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.de = 0x9140;
    Copy4TilesAndDrawLinkSprite(); return;
}

void SwitchBlockTransitionTilesTable(void) {
  SwitchBlockTransitionTilesTable_kindA:;
    /* data: dw SwitchBlockTiles + $40 */;
  SwitchBlockTransitionTilesTable_kindB:;
    /* data: dw SwitchBlockTiles + $40 */;
    SwitchBlockState0TilesTable(); return;
}

void SwitchBlockState0TilesTable(void) {
  SwitchBlockState0TilesTable_kindA:;
    /* data: dw SwitchBlockTiles */;
  SwitchBlockState0TilesTable_kindB:;
    SwitchBlockState1TilesTable(); return;
}

void SwitchBlockState1TilesTable(void) {
  SwitchBlockState1TilesTable_kindA:;
    /* data: dw SwitchBlockTiles + $80 */;
  SwitchBlockState1TilesTable_kindB:;
    /* data: dw SwitchBlockTiles + $00 */;
    UpdateSwitchBlockTiles(); return;
}

void UpdateSwitchBlockTiles(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = 12;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xFFA1;
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xD7B0;
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto UpdateSwitchBlockTiles_stage3End;
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xD7B0);
    gb.regs.a = alu_xor8(gb.regs.a, 2);
    gb_write(0xD7B0, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  UpdateSwitchBlockTiles_stage3End:;
    gb_write(0xD7AD, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto UpdateSwitchBlockTiles_stage4End;
    gb.regs.hl = 0x19E4;
    goto UpdateSwitchBlockTiles_configureCopyForSwitchBlockA;
  UpdateSwitchBlockTiles_stage4End:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto UpdateSwitchBlockTiles_stage8End;
    gb.regs.hl = 0x19E4;
  UpdateSwitchBlockTiles_configureCopyForSwitchBlockA:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0x9040;
    goto UpdateSwitchBlockTiles_copyData;
  UpdateSwitchBlockTiles_stage8End:;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto UpdateSwitchBlockTiles_stage6End;
    gb.regs.hl = 0x19E4;
    goto UpdateSwitchBlockTiles_configureCopyForSwitchBlockB;
  UpdateSwitchBlockTiles_stage6End:;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto UpdateSwitchBlockTiles_skipCopyData;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD7AD, gb.regs.a);
    gb.regs.hl = 0x19E4;
  UpdateSwitchBlockTiles_configureCopyForSwitchBlockB:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0x9080;
  UpdateSwitchBlockTiles_copyData:;
    gb.regs.bc = 0x40;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    CopyData(); return;
  UpdateSwitchBlockTiles_skipCopyData:;
    DrawLinkSpriteAndReturn(); return;
}

void Copy4TilesAndDrawLinkSprite(void) {
    gb.regs.bc = 0x40;
    CopyDataAndDrawLinkSprite(); return;
}

void CopyDataAndDrawLinkSprite(void) {
    CopyData();
  CopyDataAndDrawLinkSprite_drawLinkSprite:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA5, gb.regs.a);
    gb.regs.a = 12;
    gb_write(0x2100, gb.regs.a);
    DrawLinkSpriteAndReturn(); return;
}

void SwordAreaXForDirection(void) {
  SwordAreaXForDirection_right:;
    /* data: db $0C */;
  SwordAreaXForDirection_left:;
    /* data: db $03 */;
  SwordAreaXForDirection_up:;
    /* data: db $08 */;
  SwordAreaXForDirection_down:;
    /* data: db $08 */;
    SwordAreaYForDirection(); return;
}

void SwordAreaYForDirection(void) {
  SwordAreaYForDirection_right:;
    /* data: db $0A */;
  SwordAreaYForDirection_left:;
    /* data: db $0A */;
  SwordAreaYForDirection_up:;
    /* data: db $05 */;
  SwordAreaYForDirection_down:;
    /* data: db $10 */;
    LinkDirectionToLinkAnimationState_2(); return;
}

void LinkDirectionToLinkAnimationState_2(void) {
  LinkDirectionToLinkAnimationState_2_right:;
    /* data: db LINK_ANIMATION_STATE_GRABBING_RIGHT */;
  LinkDirectionToLinkAnimationState_2_left:;
    /* data: db LINK_ANIMATION_STATE_GRABBING_LEFT */;
  LinkDirectionToLinkAnimationState_2_up:;
    /* data: db LINK_ANIMATION_STATE_GRABBING_UP */;
  LinkDirectionToLinkAnimationState_2_down:;
    /* data: db LINK_ANIMATION_STATE_GRABBING_DOWN */;
    LinkDirectionToLiftDirectionButton(); return;
}

void LinkDirectionToLiftDirectionButton(void) {
    /* data: db 2, 1, 8, 4 */;
}

void data_1F59(void) {
    /* data: db $FC, 4, 0, 0 */;
}

void data_1F5D(void) {
    /* data: db 0, 0, 4, 0 */;
}

void label_1F69_trampoline(void) {
    label_1F69();
    gb.regs.a = 2;
    SwitchBank(); return;
}

void label_1F69(void) {
    gb.regs.hl = 0xC14A;
    gb.regs.a = gb_read(0xC15C);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFA2;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC11C;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    if (!GET_FLAG_Z()) { func_2165_return(); return; };
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x1A50;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x1A50;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    gb.regs.e = gb.regs.a;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb.regs.h;
    alu_cp8(gb.regs.a, 0xD7);
    if (!GET_FLAG_Z()) goto label_1F69_clearPullCounterAndReturn;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    GetObjectPhysicsFlags_trampoline();
    gb_write(0xFFDC, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 0x9A);
    if (GET_FLAG_Z()) goto label_1F69_notObject9AEnd;
    gb.regs.a = gb_read(0xFFDC);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto label_1F69_clearPullCounterAndReturn;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto label_1F69_jp_1FE6;
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) goto label_1F69_clearPullCounterAndReturn;
    alu_cp8(gb.regs.a, 0x51);
    if (GET_FLAG_Z()) goto label_1F69_clearPullCounterAndReturn;
    alu_cp8(gb.regs.a, 0x11);
    if (GET_FLAG_C()) goto label_1F69_clearPullCounterAndReturn;
    alu_cp8(gb.regs.a, 0xD4);
    if (!GET_FLAG_C()) goto label_1F69_clearPullCounterAndReturn;
    alu_cp8(gb.regs.a, 0xD0);
    if (!GET_FLAG_C()) goto label_1F69_jp_1FE6;
    alu_cp8(gb.regs.a, 0x7C);
    if (!GET_FLAG_C()) goto label_1F69_clearPullCounterAndReturn;
  label_1F69_jp_1FE6:;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.e = gb.regs.a;
    alu_cp8(gb.regs.a, 0x6F);
    if (GET_FLAG_Z()) goto label_1F69_jp_1FF6;
    alu_cp8(gb.regs.a, 0x5E);
    if (GET_FLAG_Z()) goto label_1F69_jp_1FF6;
    alu_cp8(gb.regs.a, 0xD4);
    if (!GET_FLAG_Z()) goto label_1F69_jp_2098;
  label_1F69_jp_1FF6:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb.regs.e;
    if (!GET_FLAG_Z()) goto label_1F69_jp_2098;
  label_1F69_notObject9AEnd:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto label_1F69_specialCasesEnd;
    gb.regs.a = 2;
    gb_write(0xC1AD, gb.regs.a);
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto label_1F69_specialCasesEnd;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x5E);
    /* ld_dialog_low a, Dialog18E */;
    if (GET_FLAG_Z()) goto label_1F69_openDialogInTable1;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x6F);
    if (GET_FLAG_Z()) goto label_1F69_signpost;
    alu_cp8(gb.regs.a, 0xD4);
    if (GET_FLAG_Z()) goto label_1F69_signpost;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_1F69_jr_2030;
    /* call_open_dialog Dialog278 */;
    goto label_1F69_specialCasesEnd;
  label_1F69_jr_2030:;
    gb.regs.a = gb_read(0xDBFA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    if (!GET_FLAG_Z()) goto label_1F69_noSwordEnd;
    /* ld_dialog_low e, Dialog0FF */;
    alu_cp8(gb.regs.a, 0xA3);
    if (GET_FLAG_Z()) goto label_1F69_jr_2046;
  label_1F69_noSwordEnd:;
    /* ld_dialog_low e, Dialog0FC */;
    alu_cp8(gb.regs.a, 0xFA);
    if (GET_FLAG_Z()) goto label_1F69_jr_2046;
    /* ld_dialog_low e, Dialog0FD */;
  label_1F69_jr_2046:;
    gb.regs.a = gb.regs.e;
    goto label_1F69_openDialogInTable0;
  label_1F69_signpost:;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.a = 20;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x5087;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xDBF5);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    /* cp_dialog_low Dialog1A9 */;
    if (!GET_FLAG_Z()) goto label_1F69_mamuGoneEnd;
    alu_bit(0, gb.regs.e);
    if (GET_FLAG_Z()) goto label_1F69_mamuGoneEnd;
    /* ld_dialog_low a, Dialog1AF */;
  label_1F69_mamuGoneEnd:;
    /* cp_dialog_low Dialog1AF */;
    if (!GET_FLAG_Z()) goto label_1F69_selectSignpostDialogTable;
    alu_bit(0, gb.regs.e);
    if (!GET_FLAG_Z()) goto label_1F69_selectSignpostDialogTable;
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb_write(0xD473, gb.regs.a);
    goto label_1F69_specialCasesEnd;
  label_1F69_selectSignpostDialogTable:;
    /* cp_dialog_low Dialog083 */;
    if (GET_FLAG_Z()) goto label_1F69_openDialogInTable0;
    /* cp_dialog_low Dialog22D */;
    if (GET_FLAG_Z()) goto label_1F69_openDialogInTable2;
  label_1F69_openDialogInTable1:;
    OpenDialogInTable1();
    goto label_1F69_specialCasesEnd;
  label_1F69_openDialogInTable0:;
    OpenDialogInTable0();
    goto label_1F69_specialCasesEnd;
  label_1F69_openDialogInTable2:;
    OpenDialogInTable2();
    goto label_1F69_specialCasesEnd;
  label_1F69_jp_2098:;
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto label_1F69_specialCasesEnd;
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) goto label_1F69_specialCasesEnd;
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto label_1F69_specialCasesEnd;
    gb_write(0xC1AD, gb.regs.a);
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto label_1F69_specialCasesEnd;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_1F69_label_20BF;
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto label_1F69_specialCasesEnd;
  label_1F69_label_20BF:;
    gb_call_bank(20, func_014_5900);
    gb_call_bank(2, SpawnChestWithItem);
  label_1F69_specialCasesEnd:;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto label_1F69_checkAButtonSlot;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto label_1F69_jr_20EC;
    return;
  label_1F69_checkAButtonSlot:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    if (!GET_FLAG_Z()) { func_2165_return(); return; };
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) return;
    if (GET_FLAG_Z()) { func_2165_return(); return; };
  label_1F69_jr_20EC:;
    gb_call_bank(2, label_002_48B0);
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x1A50;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.hl = 0x1A50;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto label_1F69_clearPullCounterAndReturn;
    gb.regs.hl = 0x1A54;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC13C, gb.regs.a);
    gb.regs.hl = 0x1A58;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC13B, gb.regs.a);
    gb.regs.hl = 0xFF9D;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.e = 8;
    gb.regs.a = gb_read(0xD47C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto label_1F69_jp_212C;
    gb.regs.e = 3;
  label_1F69_jp_212C:;
    gb.regs.hl = 0xC15F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_C()) return;
    if (GET_FLAG_C()) goto label_1F69_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 0x8E);
    if (GET_FLAG_Z()) goto label_1F69_jr_2153;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto label_1F69_jr_2153;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    if (!GET_FLAG_Z()) goto label_1F69_return;
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 0x5C);
    if (GET_FLAG_Z()) goto label_1F69_jr_2161;
  label_1F69_return:;
    return;
  label_1F69_clearPullCounterAndReturn:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC15F, gb.regs.a);
    return;
  label_1F69_jr_2153:;
    func_2165();
    gb_call_bank(20, func_014_50C3);
    ReloadSavedBank(); return;
  label_1F69_jr_2161:;
    gb.regs.a = 1;
    gb_write(0xFFE5, gb.regs.a);
    func_2165(); return;
}

void func_2165(void) {
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFFAF, gb.regs.a);
    RevealObjectUnderObject_trampoline();
    gb.regs.a = gb_read(0xFF9E);
    gb_write(0xC15D, gb.regs.a);
    label_2183(); return;
  func_2165_return:;
    return;
}

void RevealObjectUnderObject_trampoline(void) {
    gb_call_bank(20, RevealObjectUnderObject);
    ReloadSavedBank(); return;
}

void label_2183(void) {
    gb.regs.a = 5;
    SpawnPlayerProjectile();
    if (GET_FLAG_C()) return;
    if (GET_FLAG_C()) goto label_2183_return;
    gb.regs.a = 2;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 7);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE5);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.e = 1;
    func_003_5795(); return /* jpsw */;
  label_2183_return:;
    return;
}

void UpdateFinalLinkPosition(void) {
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.c = 1;
    ComputeLinkPosition();
  UpdateFinalLinkPosition_horizontal:;
    gb.regs.c = 0;
    gb_write(0xFFD7, gb.regs.a);
    ComputeLinkPosition(); return;
}

void ComputeLinkPosition(void) {
    gb.regs.b = 0;
    gb.regs.hl = 0xFF9A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC11A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xFF98;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto ComputeLinkPosition_positiveSpeedEnd;
    gb.regs.e = 0xF0;
  ComputeLinkPosition_positiveSpeedEnd:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void func_21E1(void) {
    gb.regs.a = gb_read(0xFFA3);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC149;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xFFA2;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_21E1_label_21FB;
    gb.regs.e = 0xF0;
  func_21E1_label_21FB:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void BGRegionIncrement(void) {
  BGRegionIncrement_right:;
    /* data: db $10 */;
  BGRegionIncrement_left:;
    /* data: db $10 */;
  BGRegionIncrement_top:;
    /* data: db $01 */;
  BGRegionIncrement_bottom:;
    /* data: db $01 */;
    UpdateBGRegion(); return;
}

void UpdateBGRegion(void) {
    gb.regs.a = 8;
    gb_write(0x2100, gb.regs.a);
    DoUpdateBGRegion();
    ReloadSavedBank(); return;
}

void CopyObjectRowToBGMap(void) {
    gb.regs.a = gb_read(0xC127);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto CopyObjectRowToBGMap_lowerPartEnd;
    gb.regs.hl++;
    gb.regs.hl++;
  CopyObjectRowToBGMap_lowerPartEnd:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.bc++;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.bc++;
    return;
}

void CopyObjectColumnToBGMap(void) {
    gb.regs.a = gb_read(0xC127);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto CopyObjectColumnToBGMap_rightHandEnd;
    gb.regs.hl++;
  CopyObjectColumnToBGMap_rightHandEnd:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl++;
    gb.regs.bc++;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.bc++;
    return;
}

void DoUpdateBGRegion(void) {
    gb_call_bank(32, func_020_4A76);
    gb.regs.a = 8;
    gb_write(0x2100, gb.regs.a);
  DoUpdateBGRegion_loop:;
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.b = 0;
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DoUpdateBGRegion_ramSwitchEnd;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto DoUpdateBGRegion_ramSwitchEnd;
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
  DoUpdateBGRegion_ramSwitchEnd:;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DoUpdateBGRegion_baseAddress_isOverworld;
    gb.regs.hl = 0x4000;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DoUpdateBGRegion_palettesskipEntityLoad;
    gb.regs.hl = 0x4000;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto DoUpdateBGRegion_configureAttributesAddress;
    gb.regs.hl = 0x4000;
    goto DoUpdateBGRegion_configureAttributesAddress;
  DoUpdateBGRegion_baseAddress_isOverworld:;
    gb.regs.hl = 0x6040;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DoUpdateBGRegion_palettesskipEntityLoad;
    gb.regs.hl = 0x6040;
  DoUpdateBGRegion_configureAttributesAddress:;
    gb_call_bank(26, GetBGAttributesAddressForObject);
  DoUpdateBGRegion_palettesskipEntityLoad:;
    SwitchToObjectsTilemapBank();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xC125);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto DoUpdateBGRegion_horizontalRoomTransition;
    CopyObjectRowToBGMap();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DoUpdateBGRegion_verticalTileAttributesEnd;
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.de);
    gb_call_bank(32, func_020_49D9);
    gb.regs.a = gb_read(0xFFDF);
    gb_write(0x2100, gb.regs.a);
    CopyObjectRowToBGMap();
    gb.regs.a = gb.regs.b;
    gb_write(0xFFE2, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb_write(0xFFE3, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(0xFFE4, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(0xFFE5, gb.regs.a);
    SwitchToObjectsTilemapBank();
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
  DoUpdateBGRegion_verticalTileAttributesEnd:;
    goto DoUpdateBGRegion_horizontalTileAttributesEnd;
  DoUpdateBGRegion_horizontalRoomTransition:;
    CopyObjectColumnToBGMap();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DoUpdateBGRegion_horizontalTileAttributesEnd;
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.de);
    gb_call_bank(32, func_020_49D9);
    gb.regs.a = gb_read(0xFFDF);
    gb_write(0x2100, gb.regs.a);
    CopyObjectColumnToBGMap();
    gb.regs.a = gb.regs.b;
    gb_write(0xFFE2, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb_write(0xFFE3, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(0xFFE4, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(0xFFE5, gb.regs.a);
    SwitchToObjectsTilemapBank();
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
  DoUpdateBGRegion_horizontalTileAttributesEnd:;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xC125);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x1CDA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xC128);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC128, gb.regs.a);
    if (!GET_FLAG_Z()) goto DoUpdateBGRegion_loop;
    gb_call_bank(32, UpdateBGRegionOrigin); return;
}

void ExecuteDialog(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    gb.regs.a = 0x7E;
    if (!GET_FLAG_Z()) goto ExecuteDialog_writeBackgroundTile;
  ExecuteDialog_lightBackground:;
    gb.regs.a = 0x7F;
  ExecuteDialog_writeBackgroundTile:;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xC164);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xC170);
    if (!GET_FLAG_Z()) goto ExecuteDialog_wrapPosition;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) goto ExecuteDialog_writePosition;
  ExecuteDialog_wrapPosition:;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
  ExecuteDialog_writePosition:;
    gb_write(0xC171, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, -129);
    gb.regs.a = alu_dec8(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: DialogOpenAnimationStartHandler(); return;
        case 0x01: DialogOpenAnimationHandler(); return;
        case 0x02: DialogOpenAnimationHandler(); return;
        case 0x03: DialogOpenAnimationHandler(); return;
        case 0x04: DialogOpenAnimationEndHandler(); return;
        case 0x05: DialogLetterAnimationStartHandler(); return;
        case 0x06: DialogLetterAnimationEndHandler(); return;
        case 0x07: DialogDrawNextCharacterHandler(); return;
        case 0x08: DialogBreakHandler(); return;
        case 0x09: DialogScrollingStartHandler(); return;
        case 0x0A: DialogScrollingEndHandler(); return;
        case 0x0B: DialogFinishedHandler(); return;
        case 0x0C: DialogChoiceHandler(); return;
        case 0x0D: DialogClosingBeginHandler(); return;
        case 0x0E: DialogClosingEndHandler(); return;
    }
}

void DialogOpenAnimationStartHandler(void) {
    gb_call_bank(20, DialogOpenAnimationStart); return;
}

void OpenDialogInTable1(void) {
    OpenDialogInTable0();
    gb.regs.a = 1;
    gb_write(0xC112, gb.regs.a);
    return;
}

void OpenDialogInTable2(void) {
    OpenDialogInTable0();
    gb.regs.a = 2;
    gb_write(0xC112, gb.regs.a);
    return;
}

void OpenDialogInTable0(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC177, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xC173, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16F, gb.regs.a);
    gb_write(0xC170, gb.regs.a);
    gb_write(0xC164, gb.regs.a);
    gb_write(0xC108, gb.regs.a);
    gb_write(0xC112, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(0xC5AB, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x48);
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb.regs.a = alu_or8(gb.regs.a, 1);
    gb_write(0xC19F, gb.regs.a);
    return;
}

void DialogOpenAnimationHandler(void) {
    return;
}

void DialogClosingEndHandler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC19F, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xC134, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC3CC);
    alu_cp8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_C()) return;
    gb_call_bank(33, func_021_53CF); return;
}

void data_23D2(void) {
    /* data: db $00, $24 */;
    /* data: db $48, $00 */;
}

void data_23D6(void) {
    /* data: db $24, $48, $98, $98, $98, $99 */;
}

void data_23DC(void) {
    /* data: db $99, $99, $21, $61, $A1, $41, $81, $C1 */;
}

void func_23E4(void) {
    gb.regs.a = gb_read(0xC19F);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_23E4_jr_23EF;
    gb.regs.a = alu_and8(gb.regs.a, -129);
    gb.regs.a = alu_add8(gb.regs.a, 3);
  func_23E4_jr_23EF:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x1E34;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0x00);
    gb.regs.c = gb.regs.a;
    gb.regs.a = 0xD5;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.b = gb.regs.a;
    gb.regs.hl = 0x1E40;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC12F);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.l = gb.regs.a;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0x1E3A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC12E);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.l = gb.regs.a;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_2444(); return; };
  func_23E4_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.bc++;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto func_23E4_jr_242B;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.l = gb.regs.a;
  func_23E4_jr_242B:;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x12);
    if (!GET_FLAG_Z()) goto func_23E4_loop;
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(0xFFD7, gb.regs.a);
    if (!GET_FLAG_C()) goto func_23E4_jr_243C;
    gb.regs.h = alu_inc8(gb.regs.h);
  func_23E4_jr_243C:;
    gb.regs.l = gb.regs.a;
    gb.regs.d = alu_inc8(gb.regs.d);
    gb.regs.a = gb.regs.d;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_23E4_loop;
    return;
}

void label_2444(void) {
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFF4F, gb.regs.a);
    label_244A(); return;
}

void label_244A(void) {
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF4F, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.bc++;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) { label_2463(); return; };
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.l = gb.regs.a;
    label_2464(); return;
}

void label_2463(void) {
    gb.regs.l = alu_inc8(gb.regs.l);
    label_2464(); return;
}

void label_2464(void) {
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x12);
    if (!GET_FLAG_Z()) { label_2444(); return; };
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(0xFFD7, gb.regs.a);
    if (!GET_FLAG_C()) { label_2475(); return; };
    gb.regs.h = alu_inc8(gb.regs.h);
    label_2475(); return;
}

void label_2475(void) {
    gb.regs.l = gb.regs.a;
    gb.regs.d = alu_inc8(gb.regs.d);
    gb.regs.a = gb.regs.d;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { label_2444(); return; };
    return;
}

void DialogOpenAnimationEndHandler(void) {
    gb_call_bank(28, DialogOpenAnimationEnd); return;
}

void IncrementDialogState(void) {
    IncrementDialogStateAndReturn();
}

void IncrementDialogStateAndReturn(void) {
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void DialogFinishedHandler(void) {
    gb.regs.a = gb_read(0xC1AB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UpdateDialogState_return(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) { UpdateDialogState_return(); return; };
}

void UpdateDialogState(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16F, gb.regs.a);
  UpdateDialogState_if:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) goto UpdateDialogState_else;
  UpdateDialogState_then:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    goto UpdateDialogState_fi;
  UpdateDialogState_else:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 0x0E);
  UpdateDialogState_fi:;
    gb_write(0xC19F, gb.regs.a);
    UpdateDialogState_return(); return;
}

void UpdateDialogState_return(void) {
    return;
}

void DialogClosingBeginHandler(void) {
    gb_call_bank(28, AnimateDialogClosing); return;
}

void DialogLetterAnimationStartHandler(void) {
    gb.regs.a = 28;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xC172);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DialogLetterAnimationStartHandler_delayOver;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC172, gb.regs.a);
    return;
  DialogLetterAnimationStartHandler_delayOver:;
    ClearLetterPixels();
    IncrementDialogStateAndReturn(); return;
}

void DialogLetterAnimationEndHandler(void) {
    gb.regs.a = 28;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xC171);
    alu_bit(7, gb.regs.c);
    if (GET_FLAG_Z()) goto DialogLetterAnimationEndHandler_jp_24DF;
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
  DialogLetterAnimationEndHandler_jp_24DF:;
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.e = 1;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xC12E);
    gb.regs.hl = 0x45C1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xD5C1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(0xC175, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x4601;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC12F);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.d = gb.regs.a;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_C()) goto DialogLetterAnimationEndHandler_jp_250D;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb.regs.d = gb.regs.a;
  DialogLetterAnimationEndHandler_jp_250D:;
    gb.regs.a = gb.regs.d;
    gb_write(0xC176, gb.regs.a);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC170);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x45A1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    IncrementDialogState();
    DialogDrawNextCharacterHandler(); return;
}

void DialogDrawNextCharacterHandler(void) {
    gb.regs.a = 28;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xC170);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.e = 5;
    gb.regs.d = 0;
    gb.regs.hl = 0x42D1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xD5C1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x42B1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC112);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xC173);
    gb.regs.e = gb.regs.a;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0x4001;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.e;
    gb.regs.h = gb.regs.d;
    gb.regs.e = 20;
    gb.regs.a = gb_read(0xC112);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_foundBank;
    gb.regs.e = 22;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_foundBank;
    gb.regs.e = 29;
  DialogDrawNextCharacterHandler_foundBank:;
    gb.regs.a = gb.regs.e;
    gb_write(0x2100, gb.regs.a);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xC173);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC112);
    gb.regs.d = gb.regs.a;
    gb.regs.hl = 0x4491;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(0xC170);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC164);
    gb.regs.d = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC3C3, gb.regs.a);
    ReloadSavedBank();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD7, gb.regs.a);
    alu_cp8(gb.regs.a, __ask__);
    if (!GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_notChoice;
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD5C2, gb.regs.a);
  DialogDrawNextCharacterHandler_choice:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 0x0D);
    gb_write(0xC19F, gb.regs.a);
  DialogDrawNextCharacterHandler_endDialog:;
    gb.regs.a = 0x15;
    gb_write(0xFFF2, gb.regs.a);
    return;
  DialogDrawNextCharacterHandler_notChoice:;
    alu_cp8(gb.regs.a, ___);
    if (!GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_notEnd;
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD5C2, gb.regs.a);
  DialogDrawNextCharacterHandler_end:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 0x0C);
    gb_write(0xC19F, gb.regs.a);
    return;
  DialogDrawNextCharacterHandler_ThiefString:;
    /* TODO: :  */;
    /* TODO: FOR INDEX, 5 */;
    /* data: db 0 */;
    /* data: db CHARVAL(STRCHAR(#THIEF_NAME, INDEX)) + 1 */;
    /* TODO: ENDR  */;
  DialogDrawNextCharacterHandler_notEnd:;
    alu_cp8(gb.regs.a, ___);
    if (GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_noSFX;
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xC5AB);
    gb.regs.d = gb.regs.a;
    gb.regs.e = 1;
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_handleFrequency;
    gb.regs.e = 7;
    alu_cp8(gb.regs.a, 0x19);
    if (GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_handleFrequency;
    gb.regs.e = 3;
  DialogDrawNextCharacterHandler_handleFrequency:;
    gb.regs.a = gb_read(0xC170);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_skipSFX;
    gb.regs.a = gb.regs.d;
    gb_write(0xFFF3, gb.regs.a);
  DialogDrawNextCharacterHandler_skipSFX:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  DialogDrawNextCharacterHandler_noSFX:;
    gb.regs.d = 0;
    alu_cp8(gb.regs.a, ___);
    if (!GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_notName;
    gb.regs.a = gb_read(0xC108);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_notOver;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  DialogDrawNextCharacterHandler_notOver:;
    gb_write(0xC108, gb.regs.a);
    gb.regs.hl = 0xDBFB;
    gb.regs.a = gb_read(0xDC16);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_notThief;
    gb.regs.hl = _ThiefString;
  DialogDrawNextCharacterHandler_notThief:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_dec8(gb.regs.a);
    /* TODO: PUSHC  */;
    alu_cp8(gb.regs.a, (___ - 1));
    /* TODO: POPC  */;
    if (!GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_handleNameChar;
    gb.regs.a = ___;
  DialogDrawNextCharacterHandler_handleNameChar:;
  DialogDrawNextCharacterHandler_notName:;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = 28;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4391;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    ReloadSavedBank();
    gb.regs.hl = 0x4030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb.regs.l;
    gb.regs.b = gb.regs.h;
    gb.regs.hl = gb_pop16();
    gb.regs.e = 0x10;
  DialogDrawNextCharacterHandler_copyTileLoop:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_copyTileLoop;
    gb_write(gb.regs.hl, 0);
    gb_push16(gb.regs.hl);
    gb.regs.a = 28;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4491;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_noDiacritic;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC175);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xC176);
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xC9;
    gb.regs.e = alu_rr(gb.regs.e);
    if (GET_FLAG_C()) goto DialogDrawNextCharacterHandler_handleDiacriticTile;
    gb.regs.a = alu_dec8(gb.regs.a);
  DialogDrawNextCharacterHandler_handleDiacriticTile:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
  DialogDrawNextCharacterHandler_noDiacritic:;
    gb.regs.a = gb_read(0xC170);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(0xC170, gb.regs.a);
    gb.regs.a = gb_read(0xC164);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(0xC164, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1CC, gb.regs.a);
    gb.regs.a = gb_read(0xC171);
    alu_cp8(gb.regs.a, 0x1F);
    if (GET_FLAG_Z()) goto DialogDrawNextCharacterHandler_dialogBoxFull;
  DialogDrawNextCharacterHandler_nextCharacter:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 6);
    gb_write(0xC19F, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC172, gb.regs.a);
    return;
  DialogDrawNextCharacterHandler_dialogBoxFull:;
    IncrementDialogStateAndReturn(); return;
}

void DialogBoxOrigin(void) {
  DialogBoxOrigin_low:;
    /* data: db $22 */;
    /* data: db $42 */;
  DialogBoxOrigin_high:;
    /* data: db $98 */;
    /* data: db $99 */;
    DialogBreakHandler(); return;
}

void DialogBreakHandler(void) {
    gb.regs.a = gb_read(0xC170);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto DialogBreakHandler_buildDrawCommand;
    gb.regs.a = gb_read(0xC3C3);
    alu_cp8(gb.regs.a, ___);
    if (GET_FLAG_Z()) { DialogDrawNextCharacterHandler_end(); return; };
    alu_cp8(gb.regs.a, __ask__);
    if (GET_FLAG_Z()) { DialogDrawNextCharacterHandler_choice(); return; };
    gb.regs.a = gb_read(0xC1CC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto DialogBreakHandler_dialogButtonPressHandler;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC1CC, gb.regs.a);
    DialogDrawNextCharacterHandler_endDialog();
  DialogBreakHandler_dialogButtonPressHandler:;
    DrawDialogArrowTrampoline();
    gb.regs.a = gb_read(0xFFCC);
    alu_bit(4, gb.regs.a);
    if (!GET_FLAG_Z()) goto DialogBreakHandler_buildDrawCommand;
    alu_bit(5, gb.regs.a);
    if (GET_FLAG_Z()) { DialogScrollingStartHandler(); return; };
    gb.regs.a = 28;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { SkipDialog(); return; };
    gb.regs.a = gb_read(0xC173);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC112);
    gb.regs.d = gb.regs.a;
    gb.regs.hl = 0x4491;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_bit(7, gb_read(gb.regs.hl));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { SkipDialog(); return; };
  DialogBreakHandler_buildDrawCommand:;
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto DialogBreakHandler_closed;
    gb.regs.e = alu_inc8(gb.regs.e);
  DialogBreakHandler_closed:;
    gb.regs.d = 0;
    gb.regs.hl = 0x20FD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC12E);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(wDrawCommand_destinationHigh, gb.regs.a);
    gb.regs.hl = 0x20FB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC12F);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(wDrawCommand_destinationLow, gb.regs.a);
    gb.regs.a = 0x4F;
    gb_write(wDrawCommand_length, gb.regs.a);
    gb.regs.a = gb_read(0xFFE8);
    gb_write(wDrawCommand_length__1, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write((wDrawCommand_data + 1), gb.regs.a);
    IncrementDialogState(); return;
    IncrementDialogState();
    DialogScrollingStartHandler(); return;
}

void DialogScrollingStartHandler(void) {
    return;
}

void DialogBoxMidOrigin(void) {
  DialogBoxMidOrigin_low:;
    /* data: db $62 */;
    /* data: db $82 */;
  DialogBoxMidOrigin_high:;
    /* data: db $98 */;
    /* data: db $99 */;
    DialogBeginScrolling(); return;
}

void DialogBeginScrolling(void) {
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { label_2723(); return; };
    gb.regs.e = alu_inc8(gb.regs.e);
    label_2723(); return;
}

void label_2723(void) {
    gb.regs.d = 0;
    gb.regs.hl = 0x2178;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC12E);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.b = gb.regs.a;
    gb.regs.hl = 0x2176;
    label_2731(); return;
}

void label_2731(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC12F);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.c = gb.regs.a;
    gb.regs.e = 0x10;
    label_2739(); return;
}

void label_2739(void) {
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb.regs.l = gb.regs.a;
    gb.regs.h = gb.regs.b;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(0xFFE8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.bc++;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) { label_275D(); return; };
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb.regs.c = gb.regs.a;
    label_275D(); return;
}

void label_275D(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) { label_2739(); return; };
    gb.regs.a = 8;
    gb_write(0xC172, gb.regs.a);
    IncrementDialogStateAndReturn(); return;
}

void DialogScrollingEndHandler(void) {
    return;
}

void DialogBoxFirstLineOrigin(void) {
  DialogBoxFirstLineOrigin_low:;
    /* data: db $42 */;
    /* data: db $62 */;
  DialogBoxFirstLineOrigin_high:;
    /* data: db $98 */;
    /* data: db $99 */;
    DialogFinishScrolling(); return;
}

void DialogFinishScrolling(void) {
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { label_2777(); return; };
    gb.regs.e = alu_inc8(gb.regs.e);
    label_2777(); return;
}

void label_2777(void) {
    gb.regs.d = 0;
    gb.regs.hl = 0x21DB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC12E);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.b = gb.regs.a;
    gb.regs.hl = 0x21D9;
    label_2731();
    DialogDrawNextCharacterHandler_nextCharacter(); return;
}

void SkipDialog(void) {
    gb.regs.a = 2;
    gb_write(0xC177, gb.regs.a);
    UpdateDialogState(); return;
}

void DialogChoiceHandler(void) {
    gb.regs.a = gb_read(0xFFCC);
    alu_bit(4, gb.regs.a);
    if (!GET_FLAG_Z()) goto DialogChoiceHandler_jp_27B7;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto DialogChoiceHandler_jp_27AA;
    gb.regs.hl = 0xC177;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x0A;
    gb_write(0xFFF2, gb.regs.a);
  DialogChoiceHandler_jp_27AA:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) return;
    gb_call_bank(23, DrawDialogChoiceMarker); return;
  DialogChoiceHandler_jp_27B7:;
    UpdateDialogState(); return;
    UpdateDialogState();
    return;
}

void DrawDialogArrowTrampoline(void) {
    gb_call_bank(23, DrawDialogArrow); return;
}

void SetWorldMusicTrack(void) {
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFBF, gb.regs.a);
    gb.regs.a = 0x38;
    gb_write(0xFFAB, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA8, gb.regs.a);
    return;
}

void EnableSRAM(void) {
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x4000;
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0;
    gb_write(gb.regs.hl, 0x0A);
    gb.regs.hl = gb_pop16();
    return;
}

void label_27DD(void) {
    gb.regs.a = 2;
    gb_write(0x2100, gb.regs.a);
    gb_push16(gb.regs.bc);
    SelectMusicTrackAfterTransition();
    gb.regs.bc = gb_pop16();
    ReloadSavedBank(); return;
}

void ResetMusicFadeTimer(void) {
    gb.regs.a = 0x38;
    gb_write(0xFFA8, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFAB, gb.regs.a);
    return;
}

void label_27F2(void) {
    gb.regs.a = gb_read(0xFFBC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_27F2_skip;
    gb_call_bank(31, func_01F_4003);
  label_27F2_skip:;
    ReloadSavedBank(); return;
}

void SynchronizeDungeonsItemFlags_trampoline(void) {
    gb_call_bank(1, SynchronizeDungeonsItemFlags);
    ReloadSavedBank(); return;
}

void GetRandomByte(void) {
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.hl = 0xC13D;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFF44;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    alu_rrca();
    gb_write(0xC13D, gb.regs.a);
    gb.regs.hl = gb_pop16();
    return;
}

void ReadJoypadState(void) {
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ReadJoypadState_return;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto ReadJoypadState_readState;
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto ReadJoypadState_notInteractive;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto ReadJoypadState_linkPassingOutEnd;
    gb.regs.a = gb_read(0xFF9C);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto ReadJoypadState_readState;
  ReadJoypadState_linkPassingOutEnd:;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ReadJoypadState_notInteractive;
    gb.regs.a = gb_read(0xDE7D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ReadJoypadState_readState;
  ReadJoypadState_notInteractive:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFCB, gb.regs.a);
    gb_write(0xFFCC, gb.regs.a);
    return;
  ReadJoypadState_readState:;
    gb.regs.a = 0x20;
    gb_write(0xFF00, gb.regs.a);
    gb.regs.a = gb_read(0xFF00);
    gb.regs.a = gb_read(0xFF00);
    alu_cpl();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.b = gb.regs.a;
    gb.regs.a = 0x10;
    gb_write(0xFF00, gb.regs.a);
    gb.regs.a = gb_read(0xFF00);
    gb.regs.a = gb_read(0xFF00);
    gb.regs.a = gb_read(0xFF00);
    gb.regs.a = gb_read(0xFF00);
    gb.regs.a = gb_read(0xFF00);
    gb.regs.a = gb_read(0xFF00);
    gb.regs.a = gb_read(0xFF00);
    gb.regs.a = gb_read(0xFF00);
    gb.regs.a = alu_swap(gb.regs.a);
    alu_cpl();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.b);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.c);
    gb_write(0xFFCC, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb_write(0xFFCB, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFF00, gb.regs.a);
  ReadJoypadState_return:;
    return;
}

void label_2887(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.hl = 0xFF97;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.de = 0;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x9800;
    gb.regs.b = 0x20;
  label_2887_loop:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto label_2887_loop;
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.hl = 0xFF96;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.de = 0;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb.regs.h;
    gb_write(0xFFCF, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb_write(0xFFD0, gb.regs.a);
    gb.regs.bc = gb_pop16();
    return;
}

void TableJump(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl++;
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.e;
    gb.regs.h = gb.regs.d;
    /* jp hl - dynamic dispatch */;
    LCDOff(); return;
}

void LCDOff(void) {
    gb.regs.a = gb_read(0xFFFF);
    gb_write(0xFFD2, gb.regs.a);
    gb.regs.a = alu_res(0, gb.regs.a);
    gb_write(0xFFFF, gb.regs.a);
  LCDOff_waitForEndOfLine:;
    gb.regs.a = gb_read(0xFF44);
    alu_cp8(gb.regs.a, 0x91);
    if (!GET_FLAG_Z()) goto LCDOff_waitForEndOfLine;
    gb.regs.a = gb_read(0xFF40);
    gb.regs.a = alu_and8(gb.regs.a, -129);
    gb_write(0xFF40, gb.regs.a);
    gb.regs.a = gb_read(0xFFD2);
    gb_write(0xFFFF, gb.regs.a);
    return;
}

void LoadTileset0F_trampoline(void) {
    LoadTileset0F(); return /* jpsw */;
}

void FillBGMapBlack(void) {
    gb.regs.a = 0x7E;
    gb.regs.bc = 0x0400;
    FillBGMap(); return;
}

void FillBGMapWhite(void) {
    gb.regs.a = 0x7F;
    gb.regs.bc = 0x0800;
    FillBGMap(); return;
}

void FillBGMap(void) {
    gb.regs.d = gb.regs.a;
    gb.regs.hl = 0x9800;
  FillBGMap_loop:;
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc--;
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    if (!GET_FLAG_Z()) goto FillBGMap_loop;
    return;
}

void CopyDataFromBank(void) {
    gb_write(0x2100, gb.regs.a);
    CopyData();
    gb.regs.a = 1;
    gb_write(0x2100, gb.regs.a);
    return;
}

void CopyData(void) {
  CopyData_top:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.bc--;
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    if (!GET_FLAG_Z()) goto CopyData_top;
    return;
}

void NoRoomTransitionDrawLoop(void) {
    gb.regs.de++;
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.l = gb.regs.a;
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    DrawCommandToVRAM();
    ExecuteDrawCommands(); return;
}

void ExecuteDrawCommands(void) {
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ExecuteDrawCommands_duringMapTransition;
  ExecuteDrawCommands_noRoomTransition:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    NoRoomTransitionDrawLoop();
    goto ExecuteDrawCommands_noRoomTransition;
  ExecuteDrawCommands_roomTransitionDrawLoop:;
    gb.regs.de++;
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.l = gb.regs.a;
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    DrawCommandToVRAMDuringRoomTransition();
  ExecuteDrawCommands_duringMapTransition:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ExecuteDrawCommands_roomTransitionDrawLoop;
    return;
}

void DrawCommandToVRAM(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.b = gb.regs.a;
    gb.regs.b = alu_inc8(gb.regs.b);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_rlca();
    alu_rlca();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto DrawCommandToVRAM_copyRow;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (GET_FLAG_Z()) goto DrawCommandToVRAM_fillRow;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (GET_FLAG_Z()) goto DrawCommandToVRAM_copyColumn;
    goto DrawCommandToVRAM_fillColumn;
  DrawCommandToVRAM_copyRow:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto DrawCommandToVRAM_noSubstraction0;
    gb.regs.hl--;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.l = gb.regs.a;
  DrawCommandToVRAM_noSubstraction0:;
    gb.regs.de++;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto DrawCommandToVRAM_copyRow;
    return;
  DrawCommandToVRAM_fillRow:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto DrawCommandToVRAM_noSubstraction1;
    gb.regs.hl--;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.l = gb.regs.a;
  DrawCommandToVRAM_noSubstraction1:;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto DrawCommandToVRAM_fillRow;
    gb.regs.de++;
    return;
  DrawCommandToVRAM_copyColumn:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb.regs.b;
    gb.regs.bc = 0x20;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.b = gb.regs.a;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto DrawCommandToVRAM_copyColumn;
    return;
  DrawCommandToVRAM_fillColumn:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb.regs.b;
    gb.regs.bc = 0x20;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.b = gb.regs.a;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto DrawCommandToVRAM_fillColumn;
    gb.regs.de++;
    return;
}

void DrawCommandToVRAMDuringRoomTransition(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.b = gb.regs.a;
    gb.regs.b = alu_inc8(gb.regs.b);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto DrawCommandToVRAMDuringRoomTransition_updateNextBGColumnWithTiles;
  DrawCommandToVRAMDuringRoomTransition_jr_299B:;
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 0xEE);
    if (GET_FLAG_Z()) goto DrawCommandToVRAMDuringRoomTransition_jr_29AB;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto DrawCommandToVRAMDuringRoomTransition_jr_29AB;
    gb.regs.hl--;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.l = gb.regs.a;
  DrawCommandToVRAMDuringRoomTransition_jr_29AB:;
    gb.regs.de++;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto DrawCommandToVRAMDuringRoomTransition_jr_299B;
    return;
  DrawCommandToVRAMDuringRoomTransition_updateNextBGColumnWithTiles:;
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 0xEE);
    if (GET_FLAG_Z()) goto DrawCommandToVRAMDuringRoomTransition_continue;
    gb_write(gb.regs.hl, gb.regs.a);
  DrawCommandToVRAMDuringRoomTransition_continue:;
    gb.regs.de++;
    gb.regs.a = gb.regs.b;
    gb.regs.bc = 0x20;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.b = gb.regs.a;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto DrawCommandToVRAMDuringRoomTransition_updateNextBGColumnWithTiles;
    return;
}

void ClearLowerAndMiddleWRAM(void) {
    gb.regs.bc = 0x15C1;
    ClearWRAMBytes(); return;
}

void ClearLowerWRAM(void) {
    gb.regs.bc = 0x1300;
    ClearWRAMBytes(); return;
}

void ClearWRAMAndLowerHRAM(void) {
    gb.regs.bc = 0x2F;
    ClearHRAMBytesAndWRAM(); return;
}

void ClearHRAMAndWRAM(void) {
    gb.regs.bc = 0x6D;
    ClearHRAMBytesAndWRAM(); return;
}

void ClearHRAMBytesAndWRAM(void) {
    gb.regs.hl = 0xFF90;
    ClearBytes();
    gb.regs.bc = 0x1F00;
    ClearWRAMBytes(); return;
}

void ClearWRAMBytes(void) {
    gb.regs.hl = 0xC000;
    ClearBytes(); return;
}

void ClearBytes(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb_push16(gb.regs.af);
  ClearBytes_loop:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc--;
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    if (!GET_FLAG_Z()) goto ClearBytes_loop;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFFFE, gb.regs.a);
    return;
}

void GetChestsStatusForRoom_trampoline(void) {
    gb_call_bank(20, GetChestsStatusForRoom);
    ReloadSavedBank(); return;
}

void PlayBoomerangSfx_trampoline(void) {
    gb_call_bank(32, PlayBoomerangSfx);
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    return;
}

void label_2A07(void) {
    gb_call_bank(1, func_001_5A59);
    ReloadSavedBank(); return;
}

void GetObjectPhysicsFlags(void) {
    gb.regs.a = 8;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4000;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto GetObjectPhysicsFlags_colorDungeonEnd;
    gb.regs.hl = 0x4000;
  GetObjectPhysicsFlags_colorDungeonEnd:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    return;
}

void GetObjectPhysicsFlags_trampoline(void) {
    GetObjectPhysicsFlags();
    ReloadSavedBank(); return;
}

void GetObjectPhysicsFlagsAndRestoreBank3(void) {
    GetObjectPhysicsFlags();
    gb_push16(gb.regs.af);
    gb.regs.a = 3;
    gb_write(0x2100, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
}

void LoadCreditsKoholintDisappearingTiles(void) {
    gb.regs.a = 19;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x6800;
    gb.regs.de = 0x9000;
    gb.regs.bc = 0x0800;
    CopyData();
    gb.regs.hl = 0x7000;
    gb.regs.de = 0x8800;
    gb.regs.bc = 0x0800;
    CopyData(); return;
}

void LoadCreditsStairsTiles(void) {
    LoadTileset15();
    gb.regs.de = 0x8400;
    gb.regs.hl = 0x7600;
    gb.regs.bc = 0x0100;
    CopyData(); return;
}

void LoadTileset15(void) {
    gb.regs.a = 19;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4000;
    gb.regs.de = 0x8000;
    gb.regs.bc = 0x1800;
    CopyData();
    gb.regs.a = 12;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4940;
    gb.regs.de = 0x97F0;
    gb.regs.bc = 0x10;
    CopyData();
    gb.regs.a = 18;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4120;
    gb.regs.de = 0x8000;
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.de = 0x8D00;
    gb.regs.hl = 0x4120;
    gb.regs.bc = 0x0200;
    CopyData(); return;
}

void LoadCreditsKoholintViewsTiles(void) {
    gb.regs.a = 12;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4160;
    gb.regs.de = 0x9000;
    gb.regs.bc = 0x0800;
    CopyData();
    gb.regs.a = 18;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x6000;
    gb.regs.de = 0x8000;
    gb.regs.bc = 0x0800;
    CopyData();
    gb.regs.a = 15;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4640;
    gb.regs.de = 0x8800;
    gb.regs.bc = 0x0800;
    CopyData(); return;
}

void LoadCreditsLinkOnSeaCloseTiles(void) {
    gb.regs.hl = 0x4000;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_2B01(); return; };
    gb.regs.hl = 0x4050;
    gb.regs.a = 53;
    label_2B06(); return;
}

void LoadCreditsSunAboveTiles(void) {
    gb.regs.hl = 0x4800;
    label_2B01(); return;
}

void LoadCreditsLinkOnSeaLargeTiles(void) {
    gb.regs.hl = 0x6000;
    label_2B01(); return;
}

void label_2B01(void) {
    gb.regs.a = 19;
    AdjustBankNumberForGBC();
    label_2B06(); return;
}

void label_2B06(void) {
    gb_write(0x2100, gb.regs.a);
    gb.regs.de = 0x8000;
    gb.regs.bc = 0x0800;
    CopyData();
    gb.regs.a = 19;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x5800;
    gb.regs.de = 0x8800;
    gb.regs.bc = 0x1000;
    CopyData(); return;
}

void LoadCreditsRollTiles(void) {
    PlayAudioStep();
    gb.regs.hl = 0x4160;
    gb.regs.a = 16;
    func_2B92();
    PlayAudioStep();
    gb.regs.a = 18;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x6600;
    gb.regs.de = 0x8000;
    gb.regs.bc = 0x80;
    CopyData();
    PlayAudioStep();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadCreditsRollTiles_cgbOnly;
  LoadCreditsRollTiles_dmgOnly:;
    gb.regs.a = 16;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4260;
    gb.regs.de = 0x8100;
    gb.regs.bc = 0x0700;
    CopyData(); return;
  LoadCreditsRollTiles_cgbOnly:;
    gb.regs.a = 56;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4010;
    gb.regs.de = 0x8000;
    gb.regs.bc = 0x0800;
    CopyData(); return;
}

void LoadCreditsLinkFaceCloseUpTiles(void) {
    gb.regs.hl = 0x7800;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_2B90(); return; };
    gb.regs.hl = 0x4060;
    gb.regs.a = 53;
    label_2B95(); return;
}

void LoadCreditsLinkSeatedOnLogTiles(void) {
    gb.regs.hl = 0x4800;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_2B90(); return; };
    gb.regs.hl = 0x4850;
    gb.regs.a = 53;
    label_2B95(); return;
}

void label_2B90(void) {
    gb.regs.a = 19;
    func_2B92(); return;
}

void func_2B92(void) {
    AdjustBankNumberForGBC();
    label_2B95(); return;
}

void label_2B95(void) {
    gb_write(0x2100, gb.regs.a);
    gb.regs.de = 0x8000;
    gb.regs.bc = 0x0800;
    CopyData();
    gb.regs.a = 19;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x7000;
    gb.regs.de = 0x8800;
    gb.regs.bc = 0x0800;
    CopyData();
    gb.regs.hl = 0x6800;
    gb.regs.de = 0x9000;
    gb.regs.bc = 0x0800;
    CopyData(); return;
}

void GetRoomStatusAddressForMapPosition_trampoline(void) {
    gb_push16(gb.regs.bc);
    gb_call_bank(20, GetRoomStatusAddressForMapPosition);
    ReloadSavedBank();
    gb.regs.bc = gb_pop16();
    return;
}

void LoadBaseTiles(void) {
    gb.regs.a = 12;
    SwitchAdjustedBank();
    gb.regs.hl = 0x4000;
    gb.regs.de = 0x8000;
    gb.regs.bc = 0x0400;
    CopyData();
    gb.regs.a = 12;
    SwitchAdjustedBank();
    gb.regs.hl = 0x4030;
    gb.regs.de = 0x8800;
    gb.regs.bc = 0x1000;
    CopyData();
    gb.regs.hl = 0x43C0;
    gb.regs.de = 0x8E00;
    gb.regs.bc = 0x20;
    CopyData();
    gb.regs.a = 1;
    SwitchBank();
    return;
}

void LoadMenuTiles(void) {
    LoadBaseTiles();
    gb.regs.a = 15;
    SwitchAdjustedBank();
    gb.regs.hl = 0x4000;
    gb.regs.de = 0x8800;
    gb.regs.bc = 0x0400;
    CopyData();
    gb.regs.a = 15;
    SwitchAdjustedBank();
    gb.regs.hl = 0x4030;
    gb.regs.de = 0x9000;
    gb.regs.bc = 0x0800;
    CopyData(); return;
}

void LoadIndoorTiles(void) {
    gb.regs.a = 32;
    SwitchBank();
    gb.regs.hl = 0x4036;
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadIndoorTiles_notColorDungeon;
    gb.regs.a = 53;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4230;
    gb.regs.de = 0x9000;
    gb.regs.bc = 0x0100;
    CopyData();
    gb.regs.e = 0;
    gb.regs.d = gb.regs.e;
    gb.regs.hl = 0x4030;
    gb_push16(gb.regs.de);
    goto LoadIndoorTiles_endIf;
  LoadIndoorTiles_notColorDungeon:;
    gb_push16(gb.regs.de);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = 0;
    gb.regs.a = 13;
    SwitchAdjustedBank();
  LoadIndoorTiles_endIf:;
    gb.regs.de = 0x9100;
    gb.regs.bc = 0x0100;
    CopyData();
    gb.regs.a = 13;
    SwitchAdjustedBank();
    gb.regs.hl = 0x4000;
    gb.regs.de = 0x9200;
    gb.regs.bc = 0x0600;
    CopyData();
    gb.regs.a = 32;
    gb_write(0x2100, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb_push16(gb.regs.de);
    gb.regs.hl = 0x4056;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadIndoorTiles_colorDungeonEnd;
    gb.regs.hl = 0x4076;
  LoadIndoorTiles_colorDungeonEnd:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = 0;
    ReloadSavedBank();
    gb.regs.de = 0x9200;
    gb.regs.bc = 0x0200;
    CopyData();
    gb.regs.a = 12;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x43E0;
    gb.regs.de = 0xDD68;
    gb.regs.bc = 0x40;
    CopyData();
    func_2D50();
    gb.regs.a = 32;
    gb_write(0x2100, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.hl = 0x4077;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = 0;
    gb.regs.a = 18;
    SwitchAdjustedBank();
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadIndoorTiles_colorDungeonEnd2;
    gb.regs.hl = 0x4130;
    gb.regs.a = 53;
    gb_write(0x2100, gb.regs.a);
  LoadIndoorTiles_colorDungeonEnd2:;
    gb.regs.de = 0x8F00;
    gb.regs.bc = 0x0100;
    CopyData();
    gb.regs.a = gb_read(0xDC57);
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4090;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto LoadIndoorTiles_inventoryItemsEnd;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto LoadIndoorTiles_inventoryItemsEnd;
    gb.regs.a = 12;
    SwitchAdjustedBank();
    gb.regs.hl = 0x4040;
  LoadIndoorTiles_inventoryItemsEnd:;
    gb.regs.de = 0x8C00;
    gb.regs.bc = 0x0300;
    CopyData();
  LoadIndoorTiles_patchInventoryTiles:;
    gb.regs.a = gb_read(0xDBF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadIndoorTiles_noToadstoolEnd;
    ReplaceMagicPowderTilesByToadstool();
  LoadIndoorTiles_noToadstoolEnd:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadIndoorTiles_jr_2D17;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto LoadIndoorTiles_goldenLeafEnd;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto LoadIndoorTiles_goldenLeafEnd;
  LoadIndoorTiles_jr_2D17:;
    gb.regs.a = gb_read(0xDBC1);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto LoadIndoorTiles_goldenLeafEnd;
    ReplaceSlimeKeyTilesByGoldenLeaf();
  LoadIndoorTiles_goldenLeafEnd:;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto LoadIndoorTiles_return;
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
  LoadIndoorTiles_return:;
    return;
}

void LoadBaseOverworldTiles(void) {
    gb.regs.a = 12;
    SwitchAdjustedBank();
    gb.regs.hl = 0x4070;
    gb.regs.de = 0x9200;
    gb.regs.bc = 0x0600;
    CopyData();
    gb.regs.hl = 0x4040;
    gb.regs.de = 0x8C00;
    gb.regs.bc = 0x0400;
    CopyData();
    func_2D50();
    LoadIndoorTiles_patchInventoryTiles(); return;
}

void func_2D50(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA6, gb.regs.a);
    gb_write(0xFFA7, gb.regs.a);
    AnimateTiles_jumpTable();
    gb.regs.a = 12;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4030;
    gb.regs.de = 0x8800;
    gb.regs.bc = 0x0800;
    CopyData();
    gb.regs.hl = 0x4200;
    gb.regs.de = 0x8200;
    gb.regs.bc = 0x0100;
    CopyData();
    return;
}

void LoadIntroSequenceTiles(void) {
    gb.regs.a = 1;
    SwitchBank();
    gb.regs.hl = 0x6B1D;
    gb.regs.de = 0x8700;
    gb.regs.bc = 0x80;
    CopyData();
    gb.regs.a = 16;
    SwitchAdjustedBank();
    gb.regs.hl = 0x4020;
    gb.regs.de = 0x8000;
    gb.regs.bc = 0x0600;
    CopyData();
    gb.regs.hl = 0x4000;
    gb.regs.de = 0x8800;
    gb.regs.bc = 0x1000;
    CopyData(); return;
}

void LoadTitleScreenTiles(void) {
    gb.regs.a = 15;
    SwitchAdjustedBank();
    gb.regs.hl = 0x4020;
    gb.regs.de = 0x8800;
    gb.regs.bc = 0x0700;
    CopyData();
    gb.regs.a = 56;
    SwitchBank();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadTitleScreenTiles_dxTilesCGB;
    gb.regs.hl = 0x4030;
    goto LoadTitleScreenTiles_dxTilesEnd;
  LoadTitleScreenTiles_dxTilesCGB:;
    gb.regs.hl = 0x4020;
  LoadTitleScreenTiles_dxTilesEnd:;
    gb.regs.de = 0x8400;
    gb.regs.bc = 0x0400;
    CopyData();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadTitleScreenTiles_else;
    gb.regs.hl = 0x4160;
    goto LoadTitleScreenTiles_endIf;
  LoadTitleScreenTiles_else:;
    gb.regs.hl = 0x4060;
  LoadTitleScreenTiles_endIf:;
    gb.regs.de = 0x8200;
    gb.regs.bc = 0x0100;
    CopyData(); return;
}

void LoadWorldMapTiles(void) {
    gb.regs.a = 12;
    SwitchAdjustedBank();
    gb.regs.hl = 0x40F0;
    gb.regs.de = 0x8F00;
    gb.regs.bc = 0x0800;
    CopyData();
    gb.regs.hl = 0x4160;
    gb.regs.de = 0x8200;
    gb.regs.bc = 0x0100;
    CopyData(); return;
}

void LoadFaceShrineReliefTiles(void) {
    gb.regs.hl = 0x4070;
    LoadStaticPictureTiles(); return;
}

void LoadSchulePaintingTiles(void) {
    gb.regs.hl = 0x4080;
    LoadStaticPictureTiles(); return;
}

void LoadChristinePortraitTiles(void) {
    gb.regs.hl = 0x4030;
    LoadStaticPictureTiles(); return;
}

void LoadStaticPictureTiles(void) {
    gb.regs.a = 16;
    SwitchAdjustedBank();
    gb.regs.de = 0x9000;
    gb.regs.bc = 0x0800;
    CopyData(); return;
}

void LoadEaglesTowerTopTiles(void) {
    gb.regs.a = 19;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4030;
    gb.regs.de = 0x8C00;
    gb.regs.bc = 0x0400;
    CopyData();
    gb.regs.hl = 0x4010;
    gb.regs.de = 0x9000;
    gb.regs.bc = 0x0400;
    CopyData(); return;
}

void LoadMarinBeachTiles(void) {
    gb.regs.a = 16;
    SwitchAdjustedBank();
    gb.regs.hl = 0x4060;
    gb.regs.de = 0x8400;
    gb.regs.bc = 0x0400;
    CopyData();
    gb.regs.hl = 0x4040;
    gb.regs.de = 0x9000;
    gb.regs.bc = 0x0600;
    CopyData(); return;
}

void LoadSaveMenuTiles(void) {
    gb.regs.a = 15;
    SwitchBank();
    gb.regs.hl = 0x4010;
    gb.regs.de = 0x8800;
    gb.regs.bc = 0x0500;
    CopyData(); return;
}

void NpcTilesBankTable(void) {
    /* data: db $00, BANK(Npc2Tiles), BANK(Npc1Tiles), BANK(Npc3Tiles) */;
}

void LoadRoomSpecificTiles(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadRoomSpecificTiles_colorDungeonEnd;
    gb_call_bank(32, LoadColorDungeonTiles);
    goto LoadRoomSpecificTiles_oamTilesEnd;
  LoadRoomSpecificTiles_colorDungeonEnd:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  LoadRoomSpecificTiles_copyOAMTilesRow:;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC193;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadRoomSpecificTiles_usePredefinedSpritesheet;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_indoorEnd;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadRoomSpecificTiles_usePredefinedSpritesheet;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_usePredefinedSpritesheet;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto LoadRoomSpecificTiles_usePredefinedSpritesheet;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xFD);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_usePredefinedSpritesheet;
    alu_cp8(gb.regs.a, 0xB1);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_usePredefinedSpritesheet;
  LoadRoomSpecificTiles_indoorEnd:;
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 1);
    gb.regs.a = 0xA4;
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_useOverridenSpritesheet;
    gb.regs.a = gb_read(0xDC21);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0xD8;
    if (!GET_FLAG_Z()) goto LoadRoomSpecificTiles_useOverridenSpritesheet;
    gb.regs.a = gb_read(0xDC23);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0xDD;
    if (!GET_FLAG_Z()) goto LoadRoomSpecificTiles_useOverridenSpritesheet;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_usePredefinedSpritesheet;
    gb.regs.a = 0x8F;
  LoadRoomSpecificTiles_useOverridenSpritesheet:;
    goto LoadRoomSpecificTiles_jr_2ED4;
  LoadRoomSpecificTiles_usePredefinedSpritesheet:;
    gb.regs.a = gb_read(gb.regs.hl);
  LoadRoomSpecificTiles_jr_2ED4:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_copyskipEntityLoad;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.b = gb.regs.a;
    gb.regs.c = 0;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_swap(gb.regs.a);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x28C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_bankAdjustmentEnd;
    AdjustBankNumberForGBC();
  LoadRoomSpecificTiles_bankAdjustmentEnd:;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.d = gb.regs.a;
    gb.regs.e = 0;
    gb.regs.hl = 0x8400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = 0x4000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = 0x0100;
    CopyData();
  LoadRoomSpecificTiles_copyskipEntityLoad:;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto LoadRoomSpecificTiles_copyOAMTilesRow;
  LoadRoomSpecificTiles_oamTilesEnd:;
    gb.regs.de = 0x9000;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_loadOverworldBGTiles;
    gb.regs.a = 13;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_loadTopViewTiles;
    gb.regs.hl = 0x4270;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_label_2F41;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) goto LoadRoomSpecificTiles_label_2F3B;
  LoadRoomSpecificTiles_label_2F36:;
    gb.regs.hl = 0x4280;
    goto LoadRoomSpecificTiles_label_2F41;
  LoadRoomSpecificTiles_label_2F3B:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xE9);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_label_2F36;
  LoadRoomSpecificTiles_label_2F41:;
    gb.regs.de = 0x9000;
    gb.regs.bc = 0x0800;
    CopyData();
    return;
  LoadRoomSpecificTiles_loadTopViewTiles:;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadRoomSpecificTiles_notColorDungeon;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x12);
    if (!GET_FLAG_Z()) goto LoadRoomSpecificTiles_skipBGLoading;
  LoadRoomSpecificTiles_notColorDungeon:;
    gb.regs.hl = 0x4090;
    gb.regs.a = gb_read(0xFF94);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_skipBGLoading;
    gb.regs.a = alu_add8(gb.regs.a, 0x50);
    gb.regs.h = gb.regs.a;
    gb.regs.bc = 0x0100;
    CopyData();
  LoadRoomSpecificTiles_skipBGLoading:;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto LoadRoomSpecificTiles_cameraShopEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB5);
    if (!GET_FLAG_Z()) goto LoadRoomSpecificTiles_cameraShopEnd;
    gb.regs.a = 53;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4040;
    gb.regs.de = 0x8F00;
    gb.regs.bc = 0x0200;
    CopyData();
    return;
  LoadRoomSpecificTiles_cameraShopEnd:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 53;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4650;
    gb.regs.de = 0x9690;
    gb.regs.bc = 0x10;
    CopyData();
    gb.regs.hl = 0x4660;
    gb.regs.de = 0x9790;
    gb.regs.bc = 0x10;
    CopyData();
    return;
  LoadRoomSpecificTiles_loadOverworldBGTiles:;
    gb.regs.a = 15;
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFF94);
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto LoadRoomSpecificTiles_return;
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    gb.regs.h = gb.regs.a;
    gb.regs.l = 0;
    gb.regs.bc = 0x0200;
    CopyData();
  LoadRoomSpecificTiles_return:;
    return;
}

void CopyWord(void) {
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void WriteObjectToBG_DMG(void) {
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = 0x6040;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto WriteObjectToBG_DMG_ColorDungeonObjectsTilemap;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto WriteObjectToBG_DMG_notCameraShop;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB5);
    if (!GET_FLAG_Z()) goto WriteObjectToBG_DMG_notCameraShop;
  WriteObjectToBG_DMG_ColorDungeonObjectsTilemap:;
    gb.regs.hl = 0x4000;
    goto WriteObjectToBG_DMG_readValueInTable;
  WriteObjectToBG_DMG_notCameraShop:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto WriteObjectToBG_DMG_readValueInTable;
    gb.regs.hl = 0x4000;
  WriteObjectToBG_DMG_readValueInTable:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void WriteOverworldObjectToBG(void) {
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    doCopyObjectToBG(); return;
}

void WriteIndoorObjectToBG(void) {
    gb.regs.c = gb_read(gb.regs.hl);
    doCopyObjectToBG(); return;
}

void doCopyObjectToBG(void) {
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb_call_bank(26, GetBGAttributesAddressForObject);
    SwitchToObjectsTilemapBank();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto doCopyObjectToBG_isOverworld;
    gb.regs.hl = 0x4000;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto doCopyObjectToBG_useColorDungeonTable;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto doCopyObjectToBG_baseAddressskipEntityLoad;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB5);
    if (!GET_FLAG_Z()) goto doCopyObjectToBG_baseAddressskipEntityLoad;
  doCopyObjectToBG_useColorDungeonTable:;
    gb.regs.hl = 0x4000;
    goto doCopyObjectToBG_baseAddressskipEntityLoad;
  doCopyObjectToBG_isOverworld:;
    gb.regs.hl = 0x6040;
  doCopyObjectToBG_baseAddressskipEntityLoad:;
    gb_push16(gb.regs.de);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    CopyWord();
    gb.regs.de = gb_pop16();
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFFDF);
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFE0);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xFFE1);
    gb.regs.l = gb.regs.a;
    gb.regs.a = 1;
    gb_write(0xFF4F, gb.regs.a);
    CopyWord();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF4F, gb.regs.a);
    SwitchToObjectsTilemapBank();
    gb.regs.a = gb.regs.h;
    gb_write(0xFFE0, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb_write(0xFFE1, gb.regs.a);
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.d = gb.regs.a;
    gb_push16(gb.regs.de);
    CopyWord();
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFDF);
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFE0);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xFFE1);
    gb.regs.l = gb.regs.a;
    gb.regs.a = 1;
    gb_write(0xFF4F, gb.regs.a);
    CopyWord();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF4F, gb.regs.a);
    SwitchToObjectsTilemapBank();
    return;
}

void LoadRoomTilemap(void) {
    SwitchToObjectsTilemapBank();
    SwitchBank();
    gb.regs.de = 0x9800;
    gb.regs.hl = 0xD7C6;
    gb.regs.c = 0x80;
  LoadRoomTilemap_loop:;
    gb_push16(gb.regs.de);
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadRoomTilemap_dmgEnd;
    WriteObjectToBG_DMG();
    goto LoadRoomTilemap_objectCopyEnd;
  LoadRoomTilemap_dmgEnd:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoomTilemap_isOverworld;
    WriteIndoorObjectToBG();
    goto LoadRoomTilemap_objectCopyEnd;
  LoadRoomTilemap_isOverworld:;
    WriteOverworldObjectToBG();
  LoadRoomTilemap_objectCopyEnd:;
    gb.regs.bc = gb_pop16();
    gb.regs.hl = gb_pop16();
    gb.regs.de = gb_pop16();
    gb.regs.hl++;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto LoadRoomTilemap_lEnd;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 0x11);
    gb.regs.l = gb.regs.a;
  LoadRoomTilemap_lEnd:;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_Z()) goto LoadRoomTilemap_eEnd;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.d = gb.regs.a;
  LoadRoomTilemap_eEnd:;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto LoadRoomTilemap_loop;
    gb_call_bank(1, UpdateMinimapEntranceArrowAndReturn); return;
}

void LoadRoom(void) {
    gb.regs.a = 1;
    gb_write(0xFFFF, gb.regs.a);
    gb.regs.hl = 0xD47F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_call_bank(32, ResetRoomVariables);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoom_gbcEnd;
    gb_call_bank(33, LoadRoomPalettes);
    gb_call_bank(32, LoadRoomObjectsAttributes);
  LoadRoom_gbcEnd:;
    gb.regs.a = 9;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoom_indoorSpecialCodeEnd;
    gb.regs.a = 20;
    gb_write(0x2100, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    func_014_5897();
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xDC5D;
  LoadRoom_loop:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, (wKillOrder_end - 0xDC5E));
    if (!GET_FLAG_Z()) goto LoadRoom_loop;
  LoadRoom_indoorSpecialCodeEnd:;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoom_roomStatusEnd;
    gb.regs.hl = 0xD9B5;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadRoom_notColorDungeon;
    gb.regs.hl = 0xDE88;
    goto LoadRoom_roomStatusEnd;
  LoadRoom_notColorDungeon:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto LoadRoom_roomStatusEnd;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto LoadRoom_roomStatusEnd;
    gb.regs.hl = 0xDAB5;
  LoadRoom_roomStatusEnd:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    if (!GET_FLAG_Z()) goto LoadRoom_markVisitedRoomEnd;
    gb.regs.a = alu_or8(gb.regs.a, 0x80);
    gb_write(gb.regs.hl, gb.regs.a);
  LoadRoom_markVisitedRoomEnd:;
    gb_write(0xFFF8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoom_isIndoorEnd;
    gb.regs.a = 10;
    gb_write(0x2100, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadRoom_colorDungeonEnd;
    gb.regs.hl = 0x7B77;
    goto LoadRoom_fetchRoomAddress;
  LoadRoom_colorDungeonEnd:;
    alu_cp8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto LoadRoom_goriyaRoomEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xF5);
    if (!GET_FLAG_Z()) goto LoadRoom_goriyaRoomEnd;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) goto LoadRoom_goriyaRoomEnd;
    gb.regs.bc = 0x7855;
    goto LoadRoom_parseRoomHeader;
  LoadRoom_goriyaRoomEnd:;
    gb.regs.hl = 0x4000;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto LoadRoom_fetchRoomAddress;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto LoadRoom_fetchRoomAddress;
    gb.regs.a = 11;
    gb_write(0x2100, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.hl = 0x4000;
    goto LoadRoom_fetchRoomAddress;
  LoadRoom_isIndoorEnd:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) goto LoadRoom_endEaglesTowerAlt;
    gb.regs.a = gb_read(0xD8C3);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto LoadRoom_altRoomsEnd;
    gb.regs.bc = 0x47EC;
    goto LoadRoom_loadBankForOverworldRooms;
  LoadRoom_endEaglesTowerAlt:;
    alu_cp8(gb.regs.a, 0x8C);
    if (!GET_FLAG_Z()) goto LoadRoom_endSouthFaceShrineAlt;
    gb.regs.a = gb_read(0xD941);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto LoadRoom_altRoomsEnd;
    gb.regs.bc = 0x434E;
    goto LoadRoom_loadBankForOverworldRooms;
  LoadRoom_endSouthFaceShrineAlt:;
    alu_cp8(gb.regs.a, 0x79);
    if (!GET_FLAG_Z()) goto LoadRoom_endUpperTalTalHeightsAlt;
    gb.regs.a = gb_read(0xD92E);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto LoadRoom_altRoomsEnd;
    gb.regs.bc = 0x6513;
    goto LoadRoom_loadBankForOverworldRooms;
  LoadRoom_endUpperTalTalHeightsAlt:;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto LoadRoom_endWindfishsEggAlt;
    gb.regs.a = gb_read(0xD8BB);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto LoadRoom_altRoomsEnd;
    gb.regs.bc = 0x4496;
    goto LoadRoom_loadBankForOverworldRooms;
  LoadRoom_endWindfishsEggAlt:;
    alu_cp8(gb.regs.a, 0x1B);
    if (!GET_FLAG_Z()) goto LoadRoom_endTalTalHeightsAlt;
    gb.regs.a = gb_read(0xD8E0);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto LoadRoom_altRoomsEnd;
    gb.regs.bc = 0x4C0F;
    goto LoadRoom_loadBankForOverworldRooms;
  LoadRoom_endTalTalHeightsAlt:;
    alu_cp8(gb.regs.a, 0x2B);
    if (!GET_FLAG_Z()) goto LoadRoom_altRoomsEnd;
    gb.regs.a = gb_read(0xD8E0);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto LoadRoom_altRoomsEnd;
    gb.regs.bc = 0x509A;
    goto LoadRoom_loadBankForOverworldRooms;
  LoadRoom_altRoomsEnd:;
    gb.regs.hl = 0x4000;
  LoadRoom_fetchRoomAddress:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.b = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadRoom_parseRoomHeader;
  LoadRoom_loadBankForOverworldRooms:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto LoadRoom_parseRoomHeader;
    gb.regs.a = 26;
    gb_write(0x2100, gb.regs.a);
  LoadRoom_parseRoomHeader:;
    gb.regs.a = gb_read(gb.regs.bc);
    alu_cp8(gb.regs.a, 0xFE);
    if (GET_FLAG_Z()) goto LoadRoom_endOfRoom;
    gb_write(0xFFA4, gb.regs.a);
    gb.regs.bc++;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoom_parseOverworldSecondByte;
  LoadRoom_parseIndoorsSecondByte:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    FillRoomMapWithObject();
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    LoadRoomTemplate_trampoline();
    goto LoadRoom_parseRoomObjectsLoop;
  LoadRoom_parseOverworldSecondByte:;
    gb.regs.a = gb_read(gb.regs.bc);
    FillRoomMapWithObject();
  LoadRoom_parseRoomObjectsLoop:;
    gb.regs.bc++;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    alu_cp8(gb.regs.a, 0xE0);
    if (!GET_FLAG_Z()) goto LoadRoom_warpDataEnd;
    gb.regs.a = gb_read(0xFFE6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD401;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc++;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc++;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc++;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc++;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(0xFFE6, gb.regs.a);
    goto LoadRoom_parseRoomObjectsLoop;
  LoadRoom_warpDataEnd:;
    gb.regs.a = gb_read(gb.regs.bc);
    alu_cp8(gb.regs.a, 0xFE);
    if (GET_FLAG_Z()) goto LoadRoom_endOfRoom;
    LoadRoomObject();
    goto LoadRoom_parseRoomObjectsLoop;
  LoadRoom_endOfRoom:;
    gb_call_bank(1, PadRoomObjectsArea);
    gb_call_bank(54, func_036_6D4D);
    gb_call_bank(33, func_021_53F3);
    ReloadSavedBank(); return;
}

void LoadRoomObject(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.bc);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoomObject_threeBytesObjectEnd;
    alu_bit(4, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadRoomObject_threeBytesObjectEnd;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.bc++;
  LoadRoomObject_threeBytesObjectEnd:;
    gb.regs.bc++;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadRoomObject_loadIndoorObject;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, 0xF5);
    if (GET_FLAG_C()) goto LoadRoomObject_loadOverworldObject;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.d = gb.regs.a;
    gb.regs.bc--;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.e = gb.regs.a;
    gb.regs.bc++;
    gb_call_bank(36, ExpandOverworldObjectMacro);
    SetBankForRoom();
    return;
  LoadRoomObject_loadIndoorObject:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, 0xEC);
    if (GET_FLAG_C()) goto LoadRoomObject_loadNonDoorIndoorObject;
    switch(gb.regs.a) {
        case 0x00: LoadObject_KeyDoorTop(); return;
        case 0x01: LoadObject_KeyDoorBottom(); return;
        case 0x02: LoadObject_KeyDoorLeft(); return;
        case 0x03: LoadObject_KeyDoorRight(); return;
        case 0x04: LoadObject_ClosedDoorTop(); return;
        case 0x05: LoadObject_ClosedDoorBottom(); return;
        case 0x06: LoadObject_ClosedDoorLeft(); return;
        case 0x07: LoadObject_ClosedDoorRight(); return;
        case 0x08: LoadObject_OpenDoorTop(); return;
        case 0x09: LoadObject_OpenDoorBottom(); return;
        case 0x0A: LoadObject_OpenDoorLeft(); return;
        case 0x0B: LoadObject_OpenDoorRight(); return;
        case 0x0C: LoadObject_BossDoor(); return;
        case 0x0D: LoadObject_StairsDoor(); return;
        case 0x0E: LoadObject_RevolvingDoor(); return;
        case 0x0F: LoadObject_OneWayArrow(); return;
        case 0x10: LoadObject_DungeonEntrance(); return;
        case 0x11: LoadObject_IndoorEntrance(); return;
    }
  LoadRoomObject_loadOverworldObject:;
    gb.regs.a = alu_add8(gb.regs.a, 0xF5);
    gb_push16(gb.regs.af);
    gb.regs.d = gb.regs.a;
    alu_cp8(gb.regs.a, 0xE9);
    if (!GET_FLAG_Z()) goto LoadRoomObject_waterfallEnd;
    gb_write(0xC50E, gb.regs.a);
  LoadRoomObject_waterfallEnd:;
    alu_cp8(gb.regs.a, 0x5E);
    if (!GET_FLAG_Z()) goto LoadRoomObject_weatherVaneBottomEnd;
    alu_bit(5, gb.regs.e);
    if (!GET_FLAG_Z()) goto LoadRoomObject_replaceObjectByGroundStairs;
  LoadRoomObject_weatherVaneBottomEnd:;
    alu_cp8(gb.regs.a, 0x91);
    if (!GET_FLAG_Z()) goto LoadRoomObject_weatherVaneTopEnd;
    alu_bit(5, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadRoomObject_weatherVaneTopEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0x5E;
    gb.regs.d = gb.regs.a;
    gb_push16(gb.regs.af);
  LoadRoomObject_weatherVaneTopEnd:;
    alu_cp8(gb.regs.a, 0xDC);
    if (!GET_FLAG_Z()) goto LoadRoomObject_weatherVaneAboveEnd;
    alu_bit(5, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadRoomObject_weatherVaneAboveEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0x91;
    gb.regs.d = gb.regs.a;
    gb_push16(gb.regs.af);
  LoadRoomObject_weatherVaneAboveEnd:;
    alu_cp8(gb.regs.a, 0xD8);
    if (GET_FLAG_Z()) goto LoadRoomObject_loadMonkeyBridgeObject;
    alu_cp8(gb.regs.a, 0xD9);
    if (GET_FLAG_Z()) goto LoadRoomObject_loadMonkeyBridgeObject;
    alu_cp8(gb.regs.a, 0xDA);
    if (!GET_FLAG_Z()) goto LoadRoomObject_monkeyBridgeEnd;
  LoadRoomObject_loadMonkeyBridgeObject:;
    alu_bit(4, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadRoomObject_monkeyBridgeEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0xDB;
    gb.regs.d = gb.regs.a;
    gb_push16(gb.regs.af);
  LoadRoomObject_monkeyBridgeEnd:;
    alu_cp8(gb.regs.a, 0xC2);
    if (!GET_FLAG_Z()) goto LoadRoomObject_closedGateEnd;
    alu_bit(4, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadRoomObject_closedGateEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0xE3;
    gb.regs.d = gb.regs.a;
    gb_push16(gb.regs.af);
  LoadRoomObject_closedGateEnd:;
    gb.regs.a = gb.regs.d;
    alu_cp8(gb.regs.a, 0xBA);
    if (!GET_FLAG_Z()) goto LoadRoomObject_bombableCaveDoorEnd;
    alu_bit(2, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadRoomObject_bombableCaveDoorEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0xE1;
    gb.regs.d = gb.regs.a;
    gb_push16(gb.regs.af);
  LoadRoomObject_bombableCaveDoorEnd:;
    gb.regs.a = gb.regs.d;
    alu_cp8(gb.regs.a, 0xD3);
    if (!GET_FLAG_Z()) goto LoadRoomObject_bushGroundStairsEnd;
    alu_bit(4, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadRoomObject_bushGroundStairsEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x75);
    if (GET_FLAG_Z()) goto LoadRoomObject_replaceObjectByGroundStairs;
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto LoadRoomObject_replaceObjectByGroundStairs;
    alu_cp8(gb.regs.a, 0xAA);
    if (GET_FLAG_Z()) goto LoadRoomObject_replaceObjectByGroundStairs;
    alu_cp8(gb.regs.a, 0x4A);
    if (!GET_FLAG_Z()) goto LoadRoomObject_bushGroundStairsEnd;
  LoadRoomObject_replaceObjectByGroundStairs:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0xC6;
    gb.regs.d = gb.regs.a;
    gb_push16(gb.regs.af);
  LoadRoomObject_bushGroundStairsEnd:;
    gb.regs.a = gb.regs.d;
    gb_write(0xFFE0, gb.regs.a);
    alu_cp8(gb.regs.a, 0xC2);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureDoorWarpData;
    alu_cp8(gb.regs.a, 0xE1);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureDoorWarpData;
    alu_cp8(gb.regs.a, 0xCB);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureDoorWarpData;
    alu_cp8(gb.regs.a, 0xBA);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureDoorWarpData;
    alu_cp8(gb.regs.a, 0x61);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureDoorWarpData;
    alu_cp8(gb.regs.a, 0xC6);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureDoorWarpData;
    alu_cp8(gb.regs.a, 0xC5);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureDoorWarpData;
    alu_cp8(gb.regs.a, 0xE2);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureDoorWarpData;
    alu_cp8(gb.regs.a, 0xE3);
    if (!GET_FLAG_Z()) goto LoadRoomObject_overworldDoorEnd;
  LoadRoomObject_configureDoorWarpData:;
    gb.regs.a = gb_read(0xC19C);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xC19C, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = 0xD416;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.bc--;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc++;
  LoadRoomObject_overworldDoorEnd:;
    gb.regs.a = gb_read(0xFFE0);
    alu_cp8(gb.regs.a, 0xC5);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureStairs;
    alu_cp8(gb.regs.a, 0xC6);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureStairs;
    goto LoadRoomObject_breakableObjectEnd;
  LoadRoomObject_loadNonDoorIndoorObject:;
    gb.regs.a = alu_add8(gb.regs.a, 0xEC);
    gb_write(0xFFE0, gb.regs.a);
    gb_push16(gb.regs.af);
    alu_cp8(gb.regs.a, 0xCF);
    if (GET_FLAG_C()) goto LoadRoomObject_conveyorEnd;
    alu_cp8(gb.regs.a, 0xD3);
    if (!GET_FLAG_C()) goto LoadRoomObject_conveyorEnd;
    gb.regs.hl = 0xC1A5;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  LoadRoomObject_conveyorEnd:;
    alu_cp8(gb.regs.a, 0xAB);
    if (!GET_FLAG_Z()) goto LoadRoomObject_torchEnd;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC3CB, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xC4);
    gb.regs.a = gb_read(0xFFE0);
    if (GET_FLAG_Z()) goto LoadRoomObject_torchEnd;
    gb.regs.hl = 0xDC71;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(0xC3CB, gb.regs.a);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xC3CD);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xC3CD, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadRoomObject_dmgTorchesEnd;
    gb.regs.a = 4;
    gb_write(0xC16B, gb.regs.a);
  LoadRoomObject_dmgTorchesEnd:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  LoadRoomObject_torchEnd:;
    alu_cp8(gb.regs.a, 0x8E);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureSwitchButton;
    alu_cp8(gb.regs.a, 0xAA);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureSwitchButton;
    alu_cp8(gb.regs.a, 0xDC);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureMovableBlock;
    alu_cp8(gb.regs.a, 0xDB);
    if (!GET_FLAG_Z()) goto LoadRoomObject_switchableObjectsEnd;
  LoadRoomObject_configureMovableBlock:;
    gb.regs.hl = 0xD7AF;
    gb_write(gb.regs.hl, 2);
    goto LoadRoomObject_switchableObjectsEnd;
  LoadRoomObject_configureSwitchButton:;
    gb.regs.hl = 0xD7AF;
    gb_write(gb.regs.hl, 1);
  LoadRoomObject_switchableObjectsEnd:;
    alu_cp8(gb.regs.a, 0x3F);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureBombableWallTop;
    alu_cp8(gb.regs.a, 0x47);
    if (!GET_FLAG_Z()) goto LoadRoomObject_bombableWallBottom;
  LoadRoomObject_configureBombableWallTop:;
    alu_bit(2, gb.regs.e);
    if (!GET_FLAG_Z()) goto LoadRoomObject_replaceByVerticalBombedPassage;
  LoadRoomObject_bombableWallBottom:;
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureBombableWallBottom;
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_Z()) goto LoadRoomObject_verticalBombableWallsEnd;
  LoadRoomObject_configureBombableWallBottom:;
    alu_bit(3, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadRoomObject_verticalBombableWallsEnd;
  LoadRoomObject_replaceByVerticalBombedPassage:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0x3D;
    gb_push16(gb.regs.af);
  LoadRoomObject_verticalBombableWallsEnd:;
    alu_cp8(gb.regs.a, 0x41);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureBombableWallLeft;
    alu_cp8(gb.regs.a, 0x49);
    if (!GET_FLAG_Z()) goto LoadRoomObject_bombableWallRight;
  LoadRoomObject_configureBombableWallLeft:;
    alu_bit(1, gb.regs.e);
    if (!GET_FLAG_Z()) goto LoadRoomObject_replaceByHorizontalBombedPassage;
  LoadRoomObject_bombableWallRight:;
    alu_cp8(gb.regs.a, 0x42);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureBombableWallRight;
    alu_cp8(gb.regs.a, 0x4A);
    if (!GET_FLAG_Z()) goto LoadRoomObject_horizontalBombableWallsEnd;
  LoadRoomObject_configureBombableWallRight:;
    alu_bit(0, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadRoomObject_horizontalBombableWallsEnd;
  LoadRoomObject_replaceByHorizontalBombedPassage:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0x3E;
    gb_push16(gb.regs.af);
  LoadRoomObject_horizontalBombableWallsEnd:;
    alu_cp8(gb.regs.a, 0xA1);
    if (!GET_FLAG_Z()) goto LoadRoomObject_chestEnd;
    alu_bit(4, gb.regs.e);
    if (!GET_FLAG_Z()) goto LoadRoomObject_chestEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = gb_read(0xFFE9);
    gb_push16(gb.regs.af);
  LoadRoomObject_chestEnd:;
    alu_cp8(gb.regs.a, 0xBF);
    if (!GET_FLAG_Z()) goto LoadRoomObject_hiddenStairsEnd;
    alu_bit(4, gb.regs.e);
    if (!GET_FLAG_Z()) goto LoadRoomObject_hiddenStairsEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
  LoadRoomObject_hiddenStairsEnd:;
    alu_cp8(gb.regs.a, 0xBE);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureStairs;
    alu_cp8(gb.regs.a, 0xBF);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureStairs;
    alu_cp8(gb.regs.a, 0xCB);
    if (!GET_FLAG_Z()) goto LoadRoomObject_stairsEnd;
  LoadRoomObject_configureStairs:;
    gb.regs.bc--;
    gb.regs.a = 1;
    gb_write(0xFFAC, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFAE, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFAD, gb.regs.a);
    gb.regs.bc++;
    goto LoadRoomObject_breakableObjectEnd;
  LoadRoomObject_stairsEnd:;
    alu_cp8(gb.regs.a, 0xD6);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureVerticalFence;
    alu_cp8(gb.regs.a, 0xD5);
    if (!GET_FLAG_Z()) goto LoadRoomObject_verticalFenceEnd;
  LoadRoomObject_configureVerticalFence:;
    alu_bit(4, gb.regs.e);
    if (!GET_FLAG_Z()) goto LoadRoomObject_verticalFenceEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0x21;
    gb_push16(gb.regs.af);
  LoadRoomObject_verticalFenceEnd:;
    alu_cp8(gb.regs.a, 0xD7);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureHorizontalFence;
    alu_cp8(gb.regs.a, 0xD8);
    if (!GET_FLAG_Z()) goto LoadRoomObject_horizontalFenceEnd;
  LoadRoomObject_configureHorizontalFence:;
    alu_bit(4, gb.regs.e);
    if (!GET_FLAG_Z()) goto LoadRoomObject_horizontalFenceEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0x22;
    gb_push16(gb.regs.af);
  LoadRoomObject_horizontalFenceEnd:;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x0A);
    gb.regs.a = gb_read(0xFFE0);
    if (GET_FLAG_C()) goto LoadRoomObject_bombableBlockEnd;
    alu_cp8(gb.regs.a, 0xA9);
    if (GET_FLAG_Z()) goto LoadRoomObject_configureBreakableObject;
  LoadRoomObject_bombableBlockEnd:;
    alu_cp8(gb.regs.a, 0xDE);
    if (!GET_FLAG_Z()) goto LoadRoomObject_breakableObjectEnd;
  LoadRoomObject_configureBreakableObject:;
    alu_bit(6, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadRoomObject_breakableObjectEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0x0D;
    gb_push16(gb.regs.af);
  LoadRoomObject_breakableObjectEnd:;
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto LoadRoomObject_closedChestEnd;
    alu_bit(4, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadRoomObject_closedChestEnd;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = 0xA1;
    gb_push16(gb.regs.af);
  LoadRoomObject_closedChestEnd:;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { CopyObjectToActiveRoomMap(); return; };
    gb.regs.bc--;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.d = gb.regs.a;
    FillRoomWithConsecutiveObjects(); return;
}

void FillRoomWithConsecutiveObjects(void) {
    loop_start: ;
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto FillRoomWithConsecutiveObjects_verticalEnd;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 0x0F);
    gb.regs.l = gb.regs.a;
  FillRoomWithConsecutiveObjects_verticalEnd:;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb.regs.bc++;
    return;
}

void SetupDestroyableObjectIfNeeded2(void) {
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) goto SetupDestroyableObjectIfNeeded2_rockyGroundEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x97);
    if (!GET_FLAG_Z()) return;
    goto SetupDestroyableObjectIfNeeded2_setupReturnBank1A;
  SetupDestroyableObjectIfNeeded2_rockyGroundEnd:;
    alu_cp8(gb.regs.a, 0xE1);
    if (!GET_FLAG_Z()) goto SetupDestroyableObjectIfNeeded2_setupReturnBank;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x1B);
    if (GET_FLAG_Z()) return;
  SetupDestroyableObjectIfNeeded2_setupReturnBank:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) goto SetupDestroyableObjectIfNeeded2_setupReturnBank1A;
    gb.regs.a = 9;
    goto SetupDestroyableObjectIfNeeded2_setupDestroyableObject;
  SetupDestroyableObjectIfNeeded2_setupReturnBank1A:;
    gb.regs.a = 0x1A;
  SetupDestroyableObjectIfNeeded2_setupDestroyableObject:;
    BackupObjectInRAM2();
    return;
}

void CopyObjectToActiveRoomMap(void) {
    gb.regs.bc--;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    SetupDestroyableObjectIfNeeded2();
    gb.regs.bc++;
    return;
}

void SetBankForRoom(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) goto SetBankForRoom_outside;
    gb.regs.a = 9;
    goto SetBankForRoom_inside;
  SetBankForRoom_outside:;
    gb.regs.a = 26;
  SetBankForRoom_inside:;
    gb_write(0x2100, gb.regs.a);
    return;
}

void CopyIndoorsMacroObjectsToRoom(void) {
  CopyIndoorsMacroObjectsToRoom_loop:;
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 0xE1);
    if (GET_FLAG_Z()) goto CopyIndoorsMacroObjectsToRoom_setupWarpData;
    alu_cp8(gb.regs.a, 0xE2);
    if (GET_FLAG_Z()) goto CopyIndoorsMacroObjectsToRoom_setupWarpData;
    alu_cp8(gb.regs.a, 0xE3);
    if (!GET_FLAG_Z()) goto CopyIndoorsMacroObjectsToRoom_warpDataEnd;
  CopyIndoorsMacroObjectsToRoom_setupWarpData:;
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_sub8(gb.regs.a, 0x11);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xC19C);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xC19C, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = 0xD416;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.hl = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  CopyIndoorsMacroObjectsToRoom_warpDataEnd:;
    gb_write(gb.regs.hl, gb.regs.a);
    SetupDestroyableObjectIfNeeded2();
    gb.regs.de++;
    gb.regs.bc++;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { CopyIndoorsMacroObjectsToRoom_loop(); return; };
    gb.regs.bc = gb_pop16();
    return;
}

void CopyOutdoorsMacroObjectsToRoom(void) {
  CopyOutdoorsMacroObjectsToRoom_loop:;
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 0xE1);
    if (GET_FLAG_Z()) goto CopyOutdoorsMacroObjectsToRoom_setupWarpData;
    alu_cp8(gb.regs.a, 0xE2);
    if (GET_FLAG_Z()) goto CopyOutdoorsMacroObjectsToRoom_setupWarpData;
    alu_cp8(gb.regs.a, 0xE3);
    if (!GET_FLAG_Z()) goto CopyOutdoorsMacroObjectsToRoom_warpDataEnd;
  CopyOutdoorsMacroObjectsToRoom_setupWarpData:;
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_sub8(gb.regs.a, 0x11);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xC19C);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xC19C, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = 0xD416;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.hl = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  CopyOutdoorsMacroObjectsToRoom_warpDataEnd:;
    gb_write(gb.regs.hl, gb.regs.a);
    SetupDestroyableObjectIfNeeded();
    gb.regs.de++;
    gb.regs.bc++;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { CopyOutdoorsMacroObjectsToRoom_loop(); return; };
    gb.regs.bc = gb_pop16();
    return;
}

void SetupDestroyableObjectIfNeeded(void) {
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) goto SetupDestroyableObjectIfNeeded_rockyGroundEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x97);
    if (!GET_FLAG_Z()) return;
    goto SetupDestroyableObjectIfNeeded_setupDestroyableObject;
  SetupDestroyableObjectIfNeeded_rockyGroundEnd:;
    alu_cp8(gb.regs.a, 0xE1);
    if (!GET_FLAG_Z()) goto SetupDestroyableObjectIfNeeded_setupDestroyableObject;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x1B);
    if (GET_FLAG_Z()) return;
  SetupDestroyableObjectIfNeeded_setupDestroyableObject:;
    gb.regs.a = 0x24;
    BackupObjectInRAM2();
    return;
}

void ObjectPositionToRoomObjectAddress(void) {
    gb.regs.bc--;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    return;
}

void KeyDoorTopObjectIds(void) {
    /* data: db $2D, $2E */;
}

void LoadObject_KeyDoorTop(void) {
    gb.regs.e = 0;
    MakeListOfDoorPositions();
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { LoadObject_OpenDoorTop(); return; };
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31A8;
    gb.regs.de = 0x2FD7;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void KeyDoorBottomObjectIds(void) {
    /* data: db $2F, $30 */;
}

void LoadObject_KeyDoorBottom(void) {
    gb.regs.e = 1;
    MakeListOfDoorPositions();
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { LoadObject_OpenDoorBottom(); return; };
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31A8;
    gb.regs.de = 0x2FF1;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void KeyDoorLeftObjectIds(void) {
    /* data: db $31, $32 */;
}

void LoadObject_KeyDoorLeft(void) {
    gb.regs.e = 2;
    MakeListOfDoorPositions();
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { LoadObject_OpenDoorLeft(); return; };
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31AB;
    gb.regs.de = 0x300B;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void KeyDoorRightObjectIds(void) {
    /* data: db $33, $34 */;
}

void LoadObject_KeyDoorRight(void) {
    gb.regs.e = 3;
    MakeListOfDoorPositions();
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { LoadObject_OpenDoorRight(); return; };
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31AB;
    gb.regs.de = 0x3025;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void LoadObject_ClosedDoorTop(void) {
    gb.regs.e = 4;
    MakeListOfDoorPositions();
    gb.regs.a = gb_read(0xC18A);
    gb.regs.a = alu_or8(gb.regs.a, 1);
    gb_write(0xC18A, gb.regs.a);
    gb_write(0xC18B, gb.regs.a);
    LoadObject_OpenDoorTop(); return;
}

void LoadObject_ClosedDoorBottom(void) {
    gb.regs.e = 5;
    MakeListOfDoorPositions();
    gb.regs.a = gb_read(0xC18A);
    gb.regs.a = alu_or8(gb.regs.a, 2);
    gb_write(0xC18A, gb.regs.a);
    gb_write(0xC18B, gb.regs.a);
    LoadObject_OpenDoorBottom(); return;
}

void LoadObject_ClosedDoorLeft(void) {
    gb.regs.e = 6;
    MakeListOfDoorPositions();
    gb.regs.a = gb_read(0xC18A);
    gb.regs.a = alu_or8(gb.regs.a, 4);
    gb_write(0xC18A, gb.regs.a);
    gb_write(0xC18B, gb.regs.a);
    LoadObject_OpenDoorLeft(); return;
}

void LoadObject_ClosedDoorRight(void) {
    gb.regs.e = 7;
    MakeListOfDoorPositions();
    gb.regs.a = gb_read(0xC18A);
    gb.regs.a = alu_or8(gb.regs.a, 8);
    gb_write(0xC18A, gb.regs.a);
    gb_write(0xC18B, gb.regs.a);
    LoadObject_OpenDoorRight(); return;
}

void OpenDoorTopObjectIds(void) {
    /* data: db $43, $44 */;
}

void LoadObject_OpenDoorTop(void) {
    gb.regs.a = 4;
    UpdateIndoorRoomStatus();
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31A8;
    gb.regs.de = 0x3077;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void UpdateIndoorRoomStatus(void) {
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xD9B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto UpdateIndoorRoomStatus_checkForOffsetIncrease;
    gb.regs.hl = 0xDE88;
    goto UpdateIndoorRoomStatus_setStatus;
  UpdateIndoorRoomStatus_checkForOffsetIncrease:;
    /* TODO: :  */;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto UpdateIndoorRoomStatus_setStatus;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto UpdateIndoorRoomStatus_setStatus;
    gb.regs.d = alu_inc8(gb.regs.d);
  UpdateIndoorRoomStatus_setStatus:;
    /* TODO: :  */;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    return;
}

void OpenDoorBottomObjectIds(void) {
    /* data: db $8C, $08 */;
}

void LoadObject_OpenDoorBottom(void) {
    gb.regs.a = 8;
    UpdateIndoorRoomStatus();
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31A8;
    gb.regs.de = 0x30AF;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void OpenDoorLeftObjectIds(void) {
    /* data: db $09, $0A */;
}

void LoadObject_OpenDoorLeft(void) {
    gb.regs.a = 2;
    UpdateIndoorRoomStatus();
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31AB;
    gb.regs.de = 0x30C3;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void OpenDoorRightObjectIds(void) {
    /* data: db $0B, $0C */;
}

void LoadObject_OpenDoorRight(void) {
    gb.regs.a = 1;
    UpdateIndoorRoomStatus();
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31AB;
    gb.regs.de = 0x30D7;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void BossDoorObjectIds(void) {
    /* data: db $A4, $A5 */;
}

void LoadObject_BossDoor(void) {
    gb.regs.e = 8;
    MakeListOfDoorPositions();
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { LoadObject_OpenDoorTop(); return; };
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31A8;
    gb.regs.de = 0x30EB;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void MakeListOfDoorPositions(void) {
    gb.regs.d = 0;
    gb.regs.hl = 0xC1F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.bc--;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC1E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC1D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc++;
    return;
}

void StairsDoorObjectIds(void) {
    /* data: db $AF, $B0 */;
}

void LoadObject_StairsDoor(void) {
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31AB;
    gb.regs.de = 0x3125;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void RevolvingDoorObjectIds(void) {
    /* data: db $B1, $B2 */;
}

void LoadObject_RevolvingDoor(void) {
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31A8;
    gb.regs.de = 0x3134;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void OneWayArrowObjectIds(void) {
    /* data: db $45, $46 */;
}

void LoadObject_OneWayArrow(void) {
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31A8;
    gb.regs.de = 0x3143;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void DungeonEntranceObjectOffsets(void) {
    /* data: db $00, $01, $02, $03, $10, $11, $12, $13, $20, $21, $22, $23, $FF */;
}

void DungeonEntranceObjectIds(void) {
    /* data: db $B3, $B4, $B4, $B5, $B6, $B7, $B8, $B9, $BA, $BB, $BC, $BD */;
}

void LoadObject_DungeonEntrance(void) {
    gb.regs.a = 8;
    UpdateIndoorRoomStatus();
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x3152;
    gb.regs.de = 0x315F;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void EntranceObjectIds(void) {
    /* data: db $C1, $C2 */;
}

void LoadObject_IndoorEntrance(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto LoadObject_IndoorEntrance_end;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto LoadObject_IndoorEntrance_end;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xD3);
    if (!GET_FLAG_Z()) goto LoadObject_IndoorEntrance_end;
    gb.regs.a = gb_read(0xDBF2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadObject_IndoorEntrance_end;
    LoadObject_ClosedDoorBottom(); return;
  LoadObject_IndoorEntrance_end:;
    gb.regs.a = 1;
    UpdateIndoorRoomStatus();
    gb_push16(gb.regs.bc);
    ObjectPositionToRoomObjectAddress();
    gb.regs.bc = 0x31A8;
    gb.regs.de = 0x317D;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void HorizontalObjectOffsets(void) {
    /* data: db $00 */;
    /* data: db $01 */;
    /* data: db $FF */;
}

void VerticalObjectOffsets(void) {
    /* data: db $00 */;
    /* data: db $10 */;
    /* data: db $FF */;
}

void FillRoomMapWithObject(void) {
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.d = 0x80;
    gb.regs.hl = 0xD7C6;
    gb.regs.e = gb.regs.a;
  FillRoomMapWithObject_loop:;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto FillRoomMapWithObject_continue;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_C()) goto FillRoomMapWithObject_continue;
    gb_write(gb.regs.hl, gb.regs.e);
  FillRoomMapWithObject_continue:;
    gb.regs.hl++;
    gb.regs.d = alu_dec8(gb.regs.d);
    if (!GET_FLAG_Z()) goto FillRoomMapWithObject_loop;
    return;
}

void LoadRoomEntities(void) {
    gb_call_bank(1, UpdateRecentRoomsList);
    gb.regs.a = 22;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE4, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = 0x4000;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadRoomEntities_pointersTableEnd;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto LoadRoomEntities_eaglesTowerEnd;
    gb.regs.a = gb_read(0xDC17);
    gb.regs.hl = 0xFFF6;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto LoadRoomEntities_eaglesTowerEnd;
    gb.regs.a = 0xA8;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xDC18);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xDC19);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    LoadEntityFromDefinition_didLoadEntity();
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE4, gb.regs.a);
  LoadRoomEntities_eaglesTowerEnd:;
    gb.regs.hl = 0x4200;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadRoomEntities_useIndoorsBTable;
    gb.regs.hl = 0x4600;
    goto LoadRoomEntities_pointersTableEnd;
  LoadRoomEntities_useIndoorsBTable:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto LoadRoomEntities_pointersTableEnd;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto LoadRoomEntities_pointersTableEnd;
    gb.regs.h = alu_inc8(gb.regs.h);
    gb.regs.h = alu_inc8(gb.regs.h);
  LoadRoomEntities_pointersTableEnd:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.b = gb.regs.a;
  LoadRoomEntities_loop:;
    gb.regs.a = gb_read(gb.regs.bc);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto LoadRoomEntities_break;
    LoadEntityFromDefinition();
    goto LoadRoomEntities_loop;
  LoadRoomEntities_break:;
    ReloadSavedBank();
    return;
}

void EntityMask_387B(void) {
    /* data: db %00000001 */;
    /* data: db %00000010 */;
    /* data: db %00000100 */;
    /* data: db %00001000 */;
    /* data: db %00010000 */;
    /* data: db %00100000 */;
    /* data: db %01000000 */;
    /* data: db %10000000 */;
}

void LoadEntityFromDefinition(void) {
    gb.regs.a = gb_read(0xFFE4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto LoadEntityFromDefinition_skipClearedEntityEnd;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x323E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xCF00;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto LoadEntityFromDefinition_skipEntityLoad;
  LoadEntityFromDefinition_skipClearedEntityEnd:;
    gb.regs.e = 0;
    gb.regs.d = gb.regs.e;
  LoadEntityFromDefinition_loop:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto LoadEntityFromDefinition_createEntityAndReturn;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto LoadEntityFromDefinition_loop;
  LoadEntityFromDefinition_skipEntityLoad:;
    gb.regs.hl = 0xFFE4;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.bc++;
    gb.regs.bc++;
    return;
  LoadEntityFromDefinition_createEntityAndReturn:;
    gb_write(gb.regs.hl, 4);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb_write(gb.regs.hl, gb.regs.a);
  LoadEntityFromDefinition_didLoadEntity:;
    gb_call_bank(3, ConfigureNewEntity_helper);
    gb_call_bank(1, PrepareEntityPositionForRoomTransition);
    gb.regs.a = 22;
    gb_write(0x2100, gb.regs.a);
    return;
}

void LoadRoomTemplate_trampoline(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.a = 20;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_push16(gb.regs.bc);
    LoadRoomTemplate();
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE8);
    gb_write(0x2100, gb.regs.a);
    return;
}

void LoadWorldMapBGMap_trampoline(void) {
    gb_call_bank(32, LoadWorldMapBGMap);
    return;
}

void SwitchToObjectsTilemapBank(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SwitchToObjectsTilemapBank_indoor;
    gb.regs.a = 26;
    goto SwitchToObjectsTilemapBank_end;
  SwitchToObjectsTilemapBank_indoor:;
    gb.regs.a = 8;
  SwitchToObjectsTilemapBank_end:;
    gb_write(0x2100, gb.regs.a);
    return;
}

void LoadCreditsMarinPortraitTiles_trampoline(void) {
    gb_call_bank(39, LoadCreditsMarinPortraitTiles); return;
}

void LoadThanksForPlayingTiles_trampoline(void) {
    gb_call_bank(32, LoadThanksForPlayingTiles); return;
}

void CanBowWowEatEntity(void) {
    gb.regs.a = 0x14;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x5087;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x2100;
    gb_write(gb.regs.hl, 5);
    return;
}

void label_3935(void) {
    gb_call_bank(25, func_019_7C50);
    gb.regs.a = 3;
    SwitchBank(); return;
}

void LiftableRockStartSmashingAnimation_trampoline(void) {
    gb_call_bank(3, LiftableRockStartSmashingAnimation);
    ReloadSavedBank(); return;
}

void label_394D(void) {
    gb_call_bank(20, func_014_54AC);
    ReloadSavedBank(); return;
}

void CreateFollowingNpcEntity_trampoline(void) {
    gb_call_bank(1, CreateFollowingNpcEntity);
    gb.regs.a = 2;
    SwitchBank(); return;
}

void ConfigureNewEntity_trampoline(void) {
    gb_call_bank(3, ConfigureNewEntity);
    ReloadSavedBank(); return;
}

void GetEntityDirectionToLink_trampoline(void) {
    gb_call_bank(3, GetEntityDirectionToLink_03);
    ReloadSavedBank(); return;
}

void label_397B(void) {
    gb_call_bank(20, func_014_5347);
    gb.regs.a = 3;
    gb_write(0x2100, gb.regs.a);
    return;
}

void data_3989(void) {
    /* data: db 0, 8, $10, $18 */;
}

void AnimateEntities(void) {
    gb.regs.hl = 0xC5A7;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AnimateEntities_bossAgonyEnd;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) goto AnimateEntities_bossAgonyEnd;
    gb.regs.a = 0x10;
    gb_write(0xFFF3, gb.regs.a);
  AnimateEntities_bossAgonyEnd:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto AnimateEntities_C111End;
    gb.regs.a = gb_read(0xC111);
    gb_write(0xC1A8, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AnimateEntities_C111End;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC111, gb.regs.a);
  AnimateEntities_C111End:;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC3C1, gb.regs.a);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x0A);
    gb.regs.a = gb_read(0xFFE7);
    if (GET_FLAG_C()) goto AnimateEntities_label_39C1;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  AnimateEntities_label_39C1:;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x3310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC3C0, gb.regs.a);
    gb_call_bank(32, func_020_4303);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto AnimateEntities_label_39E3;
    gb_write(0xC1AD, gb.regs.a);
  AnimateEntities_label_39E3:;
    gb.regs.a = 32;
    gb_write(0xDC57, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    func_020_6352();
    gb.regs.b = 0;
    gb.regs.c = 0x0F;
  AnimateEntities_loop:;
    gb.regs.a = gb.regs.c;
    gb_write(0xC123, gb.regs.a);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AnimateEntities_AnimateEntityEnd;
    gb_write(0xFFEA, gb.regs.a);
    AnimateEntity();
  AnimateEntities_AnimateEntityEnd:;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto AnimateEntities_loop;
  AnimateEntities_return:;
    return;
}

void ResetEntity_trampoline(void) {
    gb_call_bank(21, ResetEntity);
    gb.regs.a = 3;
    gb_write(0x2100, gb.regs.a);
    return;
}

void AnimateEntity(void) {
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEB, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF0, gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = 25;
    gb_write(0xDC57, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x6A);
    if (!GET_FLAG_Z()) goto AnimateEntity_raftManEnd;
    gb.regs.a = gb_read(0xFFB2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto AnimateEntity_entityLifted;
  AnimateEntity_raftManEnd:;
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto AnimateEntity_notLifted;
  AnimateEntity_entityLifted:;
    UpdateEntityPositionForRoomTransition();
    CopyEntityPositionToActivePosition();
    goto AnimateEntity_liftedEnd;
  AnimateEntity_notLifted:;
    CopyEntityPositionToActivePosition();
    UpdateEntityPositionForRoomTransition();
  AnimateEntity_liftedEnd:;
    gb.regs.a = 20;
    gb_write(0xDC57, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    UpdateEntityTimers();
    gb.regs.a = 3;
    gb_write(0xDC57, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { ExecuteActiveEntityHandler(); return; };
    switch(gb.regs.a) {
        case 0x00: return;
        case 0x01: EntityDeathHandler(); return;
        case 0x02: EntityFallHandler(); return;
        case 0x03: EntityBurningHandler(); return;
        case 0x04: EntityInitHandler(); return;
        case 0x05: ExecuteActiveEntityHandler(); return;
        case 0x06: EntityStunnedHandler(); return;
        case 0x07: EntityLiftedHandler(); return;
        case 0x08: EntityThrownHandler(); return;
    }
}

void ExecuteActiveEntityHandler_trampoline(void) {
    ExecuteActiveEntityHandler();
    gb.regs.a = 3;
    gb_write(0xDC57, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    return;
}

void ExecuteActiveEntityHandler(void) {
    gb.regs.a = 32;
    gb_write(0x2100, gb.regs.a);
    gb.regs.a = gb_read(0xFFEB);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl++;
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.hl++;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.e;
    gb.regs.h = gb.regs.d;
    gb_write(0xDC57, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    /* jp hl - dynamic dispatch */;
    HitboxPositions(); return;
}

void HitboxPositions(void) {
  HitboxPositions__00:;
    /* data: db $08, $05, $08, $05 */;
  HitboxPositions__04:;
    /* data: db $08, $0A, $08, $0A */;
  HitboxPositions__08:;
    /* data: db $08, $0A, $08, $0A */;
  HitboxPositions__0C:;
    /* data: db $08, $10, $04, $0A */;
  HitboxPositions__10:;
    /* data: db $08, $02, $08, $02 */;
  HitboxPositions__14:;
    /* data: db $08, $13, $08, $13 */;
  HitboxPositions__18:;
    /* data: db $08, $06, $06, $08 */;
  HitboxPositions__1C:;
    /* data: db $08, $07, $06, $0A */;
  HitboxPositions__20:;
    /* data: db $08, $06, $10, $30 */;
  HitboxPositions__24:;
    /* data: db $08, $07, $04, $0A */;
  HitboxPositions__28:;
    /* data: db $0C, $07, $FC, $04 */;
  HitboxPositions__2C:;
    /* data: db $10, $10, $0C, $12 */;
  HitboxPositions__30:;
    /* data: db $08, $08, $02, $08 */;
  HitboxPositions__34:;
    /* data: db $10, $0C, $08, $10 */;
  HitboxPositions__38:;
    /* data: db $08, $07, $0C, $08 */;
  HitboxPositions__3C:;
    /* data: db $08, $08, $02, $08 */;
    ConfigureEntityHitbox(); return;
}

void ConfigureEntityHitbox(void) {
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x7C);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x33F8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = 4;
  ConfigureEntityHitbox_loop:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto ConfigureEntityHitbox_loop;
    gb.regs.bc = gb_pop16();
    return;
}

void SetEntitySpriteVariant(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void IncrementEntityState(void) {
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void HurtBySpikes_trampoline(void) {
    gb_call_bank(2, HurtBySpikes);
    ReloadSavedBank(); return;
}

void ApplyEntityInteractionWithBackground_trampoline(void) {
    gb_call_bank(3, ApplyEntityInteractionWithBackground);
    ReloadSavedBank(); return;
}

void label_3B2E(void) {
    gb_call_bank(3, ApplySwordIntersectionWithObjects);
    ReloadSavedBank(); return;
}

void DefaultEnemyDamageCollisionHandler_trampoline(void) {
    gb_call_bank(3, DefaultEnemyDamageCollisionHandler);
    ReloadSavedBank(); return;
}

void label_3B44(void) {
    gb_call_bank(3, func_003_6C6B);
    ReloadSavedBank(); return;
}

void CheckLinkCollisionWithProjectile_trampoline(void) {
    gb_call_bank(3, CheckLinkCollisionWithProjectile);
    ReloadSavedBank(); return;
}

void CheckLinkCollisionWithEnemy_trampoline(void) {
    CheckLinkCollisionWithEnemy_collisionEvenInTheAir() /* callsb */;
    ReloadSavedBank(); return;
}

void label_3B65(void) {
    gb_call_bank(3, func_003_73EB);
    ReloadSavedBank(); return;
}

void label_3B70(void) {
    gb_call_bank(3, func_003_6E2B);
    ReloadSavedBank(); return;
}

void label_3B7B(void) {
    gb_call_bank(3, func_003_75A2);
    ReloadSavedBank(); return;
}

void SpawnNewEntity_trampoline(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = 3;
    gb_write(0x2100, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    SpawnNewEntity();
    gb.regs.l = alu_rr(gb.regs.l);
    ReloadSavedBank();
    gb.regs.l = alu_rl(gb.regs.l);
    return;
}

void SpawnNewEntityInRange_trampoline(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = 3;
    gb_write(0x2100, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    SpawnNewEntityInRange();
    gb.regs.l = alu_rr(gb.regs.l);
    ReloadSavedBank();
    gb.regs.l = alu_rl(gb.regs.l);
    return;
}

void ApplyVectorTowardsLink_trampoline(void) {
    gb_call_bank(3, ApplyVectorTowardsLink);
    ReloadSavedBank(); return;
}

void GetVectorTowardsLink_trampoline(void) {
    gb_call_bank(3, GetVectorTowardsLink);
    ReloadSavedBank(); return;
}

void RenderActiveEntitySpritesPair(void) {
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) return;
    SkipDisabledEntityDuringRoomTransition();
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.a = gb_read(0xFFEC);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xC155);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    alu_rra();
    alu_rra();
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFF5);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto RenderActiveEntitySpritesPair_jr_3C08;
    gb.regs.de--;
    gb.regs.a = 0xF0;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
  RenderActiveEntitySpritesPair_jr_3C08:;
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xFFED;
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderActiveEntitySpritesPair_paletteFlip0End;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto RenderActiveEntitySpritesPair_paletteFlip0End;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_or8(gb.regs.a, 4);
    gb_write(gb.regs.de, gb.regs.a);
  RenderActiveEntitySpritesPair_paletteFlip0End:;
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFEC);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xC155);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    gb.regs.a = alu_xor8(gb.regs.a, 0x20);
    alu_rra();
    alu_rra();
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(0xFFF5);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto RenderActiveEntitySpritesPair_jr_3C4B;
    gb.regs.de--;
    gb.regs.a = 0xF0;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
  RenderActiveEntitySpritesPair_jr_3C4B:;
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFED;
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderActiveEntitySpritesPair_paletteFlip1End;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto RenderActiveEntitySpritesPair_paletteFlip1End;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_or8(gb.regs.a, 4);
    gb_write(gb.regs.de, gb.regs.a);
  RenderActiveEntitySpritesPair_paletteFlip1End:;
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb_call_bank(21, func_015_795D);
    label_3C71(); return;
}

void label_3C71(void) {
    func_015_7995();
    ReloadSavedBank(); return;
}

void RenderActiveEntitySprite(void) {
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) return;
    SkipDisabledEntityDuringRoomTransition();
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    gb.regs.bc = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    if (GET_FLAG_Z()) goto RenderActiveEntitySprite_sideScrollingEnd;
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(0xFFEC, gb.regs.a);
  RenderActiveEntitySprite_sideScrollingEnd:;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xC155);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.h);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderActiveEntitySprite_paletteFlipEnd;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto RenderActiveEntitySprite_paletteFlipEnd;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderActiveEntitySprite_paletteFlipEnd;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_or8(gb.regs.a, 4);
    gb_write(gb.regs.de, gb.regs.a);
    goto RenderActiveEntitySprite_functionEnd;
  RenderActiveEntitySprite_paletteFlipEnd:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.hl = 0xFFED;
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
  RenderActiveEntitySprite_functionEnd:;
    gb.regs.de++;
    RenderActiveEntitySpritesPair_paletteFlip1End(); return;
}

void label_3CD9(void) {
    gb.regs.a = 0x15;
    gb_write(0x2100, gb.regs.a);
    label_3C71(); return;
}

void RenderActiveEntitySpritesRectUsingAllOAM(void) {
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC000;
    RenderActiveEntitySpritesRect_withDestination(); return;
}

void RenderActiveEntitySpritesRect(void) {
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) goto RenderActiveEntitySpritesRect_return;
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  RenderActiveEntitySpritesRect_withDestination:;
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb.regs.c;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    SkipDisabledEntityDuringRoomTransition();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.c = gb.regs.a;
  RenderActiveEntitySpritesRect_loop:;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl++;
    gb.regs.de++;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xC155);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl++;
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFF5);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto RenderActiveEntitySpritesRect_jp_3D28;
    gb.regs.de--;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
  RenderActiveEntitySpritesRect_jp_3D28:;
    gb.regs.bc = gb_pop16();
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl++;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderActiveEntitySpritesRect_paletteFlipEnd;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderActiveEntitySpritesRect_paletteFlipEnd;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_or8(gb.regs.a, 4);
    gb_write(gb.regs.de, gb.regs.a);
  RenderActiveEntitySpritesRect_paletteFlipEnd:;
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto RenderActiveEntitySpritesRect_loop;
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    gb_call_bank(21, func_015_795D);
    ReloadSavedBank(); return;
  RenderActiveEntitySpritesRect_return:;
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    return;
}

void SkipDisabledEntityDuringRoomTransition(void) {
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SkipDisabledEntityDuringRoomTransition_return;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xC0);
    if (!GET_FLAG_C()) goto SkipDisabledEntityDuringRoomTransition_skip;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) goto SkipDisabledEntityDuringRoomTransition_skip;
    gb.regs.hl = 0xC220;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SkipDisabledEntityDuringRoomTransition_skip;
    gb.regs.hl = 0xC230;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SkipDisabledEntityDuringRoomTransition_return;
  SkipDisabledEntityDuringRoomTransition_skip:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  SkipDisabledEntityDuringRoomTransition_return:;
    gb.regs.hl = gb_pop16();
    return;
}

void ClearEntitySpeed(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void CopyEntityPositionToActivePosition(void) {
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEF, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    return;
}

void func_015_7964_trampoline(void) {
    gb_call_bank(21, func_015_7964);
    ReloadSavedBank(); return;
}

void EntityInitMiniMoldorm_trampoline(void) {
    gb_call_bank(4, EntityInitMiniMoldorm);
    ReloadSavedBank(); return;
}

void EntityInitMoldorm_trampoline(void) {
    gb_call_bank(4, EntityInitMoldorm);
    ReloadSavedBank(); return;
}

void EntityInitFacade_trampoline(void) {
    gb_call_bank(4, EntityInitFacade);
    ReloadSavedBank(); return;
}

void EntityInitSlimeEye_trampoline(void) {
    gb_call_bank(4, EntityInitSlimeEye);
    ReloadSavedBank(); return;
}

void EntityInitGenie_trampoline(void) {
    gb_call_bank(54, EntityInitGenie);
    ReloadSavedBank(); return;
}

void EntityInitSlimeEel_trampoline(void) {
    gb_call_bank(5, EntityInitSlimeEel);
    ReloadSavedBank(); return;
}

void EntityInitDodongoSnake_trampoline(void) {
    gb_call_bank(5, EntityInitDodongoSnake);
    ReloadSavedBank(); return;
}

void EntityInitHotHead_trampoline(void) {
    gb_call_bank(5, EntityInitHotHead);
    ReloadSavedBank(); return;
}

void EntityInitEvilEagle_trampoline(void) {
    gb_call_bank(5, EntityInitEvilEagle);
    ReloadSavedBank(); return;
}

void Entity67Handler_trampoline(void) {
    gb_call_bank(5, Entity67Handler);
    ReloadSavedBank(); return;
}

void CheckPositionForMapTransition_trampoline(void) {
    gb.regs.a = gb_read(0xDC57);
    gb_push16(gb.regs.af);
    gb_call_bank(2, CheckPositionForMapTransition);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    SwitchBank(); return;
}

void GhiniMovement_trampoline(void) {
    GhiniVisibleHandler_move() /* callhl */;
    ReloadSavedBank(); return;
}

void SmashRock_trampoline(void) {
    gb_call_bank(3, SmashRock);
    ReloadSavedBank(); return;
}

void LoadHeartsAndRupeesCount(void) {
    gb_call_bank(2, LoadRupeesDigits);
    LoadHeartsCount();
    ReloadSavedBank(); return;
}

void SpawnChestWithItemAndRestoreBank3(void) {
    gb_call_bank(2, SpawnChestWithItem);
    gb.regs.a = 3;
    SwitchBank(); return;
}

void DrawABButtonSlots(void) {
    gb.regs.hl = 0x2100;
    gb_write(gb.regs.hl, 32);
    gb.regs.c = 1;
    gb.regs.b = 0;
    gb.regs.e = 0xFF;
    DrawInventorySlots();
    ReloadSavedBank(); return;
}

void GiveInventoryItem_trampoline(void) {
    gb_call_bank(3, GiveInventoryItem);
    ReloadSavedBank(); return;
}

void func_006_783C_trampoline(void) {
    gb_call_bank(6, func_006_783C);
    gb.regs.a = 3;
    SwitchBank(); return;
}

void UnloadAllEntities(void) {
    gb.regs.e = 0x10;
    gb.regs.hl = 0xC280;
  UnloadAllEntities_loop:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto UnloadAllEntities_loop;
    return;
}

void label_3E8E(void) {
    gb.regs.hl = 0xC4A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 8;
    AddTranscientVfx();
    gb.regs.hl = 0xC520;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0F);
    return;
}

void StopEntityRecoilOnCollision(void) {
    gb.regs.hl = 0xC3F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto StopEntityRecoilOnCollision_negativeTEnd;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  StopEntityRecoilOnCollision_negativeTEnd:;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto StopEntityRecoilOnCollision_negativeSEnd;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  StopEntityRecoilOnCollision_negativeSEnd:;
    gb.regs.e = 3;
    gb.regs.hl = 0xFFD7;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) goto StopEntityRecoilOnCollision_checkHorizontalCollisions;
    gb.regs.e = 0x0C;
  StopEntityRecoilOnCollision_checkHorizontalCollisions:;
    gb.regs.a = gb.regs.e;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto StopEntityRecoilOnCollision_return;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  StopEntityRecoilOnCollision_return:;
    return;
}

void BossIntroDialogTable(void) {
    /* data: db $B0, $B4, $B1, $B2, $B3, $B6, $BA, $BC, $B8 */;
}

void BossIntro(void) {
    gb.regs.hl = 0xC14F;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC165);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BossIntro_endOfDelay;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC165, gb.regs.a);
    return;
  BossIntro_endOfDelay:;
    gb.regs.a = gb_read(0xC1BD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC1BD, gb.regs.a);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    gb.regs.a = 0x19;
    if (GET_FLAG_Z()) goto BossIntro_endIf;
    gb.regs.a = 0x50;
  BossIntro_endIf:;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFBD, gb.regs.a);
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x87);
    if (!GET_FLAG_Z()) goto BossIntro_endDesertLanmola;
    /* ld_dialog_low a, Dialog0DA */;
    goto BossIntro_openDialog;
  BossIntro_endDesertLanmola:;
    alu_cp8(gb.regs.a, 0xBC);
    if (!GET_FLAG_Z()) goto BossIntro_endGrimCreeper;
    /* ld_dialog_low a, Dialog026 */;
    goto BossIntro_openDialog;
  BossIntro_endGrimCreeper:;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) return;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x375B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
  BossIntro_openDialog:;
    OpenDialogInTable0(); return;
}

void data_3F48(void) {
    /* data: db 1, 2, 4, 8, $10, $20, $40, $80 */;
}

void DidKillEnemy(void) {
    gb.regs.a = 3;
    gb_write(0xC113, gb.regs.a);
    gb_write(0x2100, gb.regs.a);
    SpawnEnemyDrop();
    ReloadSavedBank();
  DidKillEnemy_label_3F5E:;
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { UnloadEntity(); return; };
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xDC5D);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xDC5D, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xDC5E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  DidKillEnemy_label_3F78:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { UnloadEntity(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x37BD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xCF00;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    UnloadEntity(); return;
}

void UnloadEntity(void) {
    UnloadEntityAndReturn();
}

void UnloadEntityAndReturn(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void ReplaceEvilEagleRiderVisibleTiles(void) {
    gb.regs.a = 5;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x58EB;
    gb.regs.de = 0x8460;
    gb.regs.bc = 0x10;
    CopyData();
    gb.regs.hl = 0x58FB;
    ReplaceEvilEagleRiderHiddenTiles_copyData(); return;
}

void ReplaceEvilEagleRiderHiddenTiles(void) {
    gb.regs.a = 5;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x590E;
    gb.regs.de = 0x8460;
    gb.regs.bc = 0x10;
    CopyData();
    gb.regs.hl = 0x591E;
  ReplaceEvilEagleRiderHiddenTiles_copyData:;
    gb.regs.de = 0x8480;
    gb.regs.bc = 0x10;
    CopyData();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA5, gb.regs.a);
    gb.regs.a = 12;
    gb_write(0x2100, gb.regs.a);
    DrawLinkSpriteAndReturn(); return;
}

void ReloadColorDungeonNpcTiles(void) {
    gb.regs.b = 0x34;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ReloadColorDungeonNpcTiles_gbcEnd;
    gb.regs.b = alu_inc8(gb.regs.b);
  ReloadColorDungeonNpcTiles_gbcEnd:;
    gb.regs.a = gb.regs.b;
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0x4000;
    gb.regs.de = 0x8400;
    gb.regs.bc = 0x0400;
    CopyData();
    gb.regs.a = 32;
    gb_write(0x2100, gb.regs.a);
    return;
}

/* Entry point wrapper */
void bank_00_entry(void) {
    RenderLoop();
}
