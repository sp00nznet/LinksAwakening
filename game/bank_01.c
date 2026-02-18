/* Auto-generated from LADX Disassembly - Bank 0x01 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void FileSaveEntryPoint(void);
void FileSaveInitial(void);
void FileSaveMapFadeOut(void);
void FileSaveDelay1(void);
void FileSaveDelay2(void);
void FileSaveVisible(void);
void FileSaveInteractive(void);
void label_40D6(void);
void jr_001_40F9(void);
void LCDOn(void);
void Data_001_4128(void);
void func_001_412A(void);
void LinkPassOut(void);
void Data_001_41CF(void);
void Data_001_41E7(void);
void LinkPassOutHandler(void);
void LoadGameOverStage1Handler(void);
void LoadGameOverStage2Handler(void);
void Data_001_42BA(void);
void LoadGameOverStage3Handler(void);
void GameOverInteractiveHandler(void);
void jr_001_42F5(void);
void jr_001_432C(void);
void ret_001_4335(void);
void Data_001_4336(void);
void func_001_4339(void);
void jr_001_434D(void);
void jr_001_435C(void);
void WorldHandlerEntryPoint(void);
void MinimapLayoutTable(void);
void GameplayWorldLoad0Handler(void);
void GameplayWorldLoadRoomHandler(void);
void jr_001_447E(void);
void jr_001_44A6(void);
void GameplayWorldSelectTilesetHandler(void);
void IncrementGameplaySubtype(void);
void IncrementGameplaySubtypeAndReturn(void);
void GameplayWorldLoadRoomTilemapHandler(void);
void GameplayWorldLoadHeartsAndRupeesHandler(void);
void GameplayWorldLoadABButtonsHandler(void);
void GameplayWorldLoad6Handler(void);
void TransitionToFileMenu(void);
void label_001_4555(void);
void TransitionReturn(void);
void DebugSaveFileData(void);
void InitSaveFiles(void);
void func_001_4794(void);
void ret_001_47CD(void);
void FileSelectionEntryPoint(void);
void FileSelectionPrepare0(void);
void FileSelectionPrepare1(void);
void FileSelectionPrepare2(void);
void FileSelectionPrepare3(void);
void CopyDeathCountsToBG(void);
void FileSelectionPrepare5(void);
void DrawSaveSlotName(void);
void FileSelectionPrepare6(void);
void Data_001_48E4(void);
void Data_001_48EB(void);
void FileSelectionInteractiveHandler(void);
void jr_001_491D(void);
void jr_001_4920(void);
void func_001_4954(void);
void FileSelectionExecuteChoice(void);
void PlayValidationJingle(void);
void PlayValidationJingleAndReturn(void);
void LoadSelectedFile(void);
void HandleFileSelectionCommand(void);
void Data_001_49F2(void);
void SaveGameTable(void);
void Data_001_49FE(void);
void FileSelectionLoadSavedFile(void);
void FileCreationEntryPoint(void);
void FileCreationInit1Handler(void);
void FileCreationInit2Handler(void);
void WriteByteToSRAM(void);
void label_4A47(void);
void SaveSlotNameAddresses(void);
void FileCreationInteractiveHandler(void);
void Data_001_4B30(void);
void Data_001_4B70(void);
void Data_001_4BB0(void);
void NameEntryCharacterTable(void);
void func_001_4BF5(void);
void jr_001_4BF7(void);
void jr_001_4C1F(void);
void jr_001_4C21(void);
void jr_001_4C41(void);
void jr_001_4C5E(void);
void jr_001_4C63(void);
void func_001_4C8A(void);
void jr_001_4CB4(void);
void jr_001_4CB7(void);
void func_001_4CDA(void);
void FileDeletionEntryPoint(void);
void FileDeletionState0Handler(void);
void FileDeletionState1Handler(void);
void FileDeletionState8Handler(void);
void FileDeletionState9Handler(void);
void jr_001_4D53(void);
void FileDeletionState2Handler(void);
void FileDeletionState3Handler(void);
void FileDeletionState4Handler(void);
void FileDeletionState5Handler(void);
void FileDeletionState6Handler(void);
void FileDeletionState7Handler(void);
void DrawSaveSlot1Name(void);
void DrawSaveSlot2Name(void);
void DrawSaveSlot3Name(void);
void DrawSaveSlot1MaxHearts(void);
void DrawSaveSlot2MaxHearts(void);
void DrawSaveSlot3MaxHearts(void);
void Data_001_4DEE(void);
void FileDeletionState10Handler(void);
void jr_001_4E2B(void);
void CopyQuitOkTilemap(void);
void FileMenuQuitOkTilemap(void);
void CopyQuitOkTilemap__dup01(void);
void jr_001_4E67(void);
void FileDeletionState11Handler(void);
void jr_001_4E9E(void);
void CopyReturnToMenuTilemap(void);
void FileReturnToMenuTilemap(void);
void FileReturnToMenuTilemap_alt(void);
void CopyReturnToMenuTilemap__dup01(void);
void jr_001_4ED9(void);
void func_001_4EE5(void);
void jr_001_4EEF(void);
void func_001_4F0C(void);
void ret_001_4F3A(void);
void Data_001_4F3B(void);
void CopyDigitsToFileScreenBG(void);
void FileCopyEntryPoint(void);
void FileCopyState2Handler(void);
void FileCopyState3Handler(void);
void FileCopyState4Handler(void);
void FileCopyState5Handler(void);
void FileCopyState8Handler(void);
void jr_001_5018(void);
void jr_001_501D(void);
void jr_001_5042(void);
void jr_001_5055(void);
void label_001_5067(void);
void func_001_5094(void);
void Data_001_50AF(void);
void Data_001_50C7(void);
void FileCopyState9Handler(void);
void jr_001_5104(void);
void func_001_512C(void);
void label_001_514F(void);
void jr_001_516C(void);
void func_001_5175(void);
void label_001_51C3(void);
void func_001_51CE(void);
void FileCopyStateAHandler(void);
void jr_001_5235(void);
void label_001_526F(void);
void jr_001_528C(void);
void MaxHeartsToStartingHealthTable(void);
void LoadSavedFile(void);
void jr_001_531D(void);
void Data_001_53D8(void);
void Data_001_53E8(void);
void Data_001_53F8(void);
void Data_001_5408(void);
void Data_001_5418(void);
void Data_001_545C(void);
void Data_001_54A0(void);
void Data_001_54E4(void);
void Data_001_54E6(void);
void Data_001_54E8(void);
void CreateMinimapTilemap(void);
void func_001_5619(void);
void WorldMapEntryPoint(void);
void WorldMapState0Handler(void);
void jr_001_5674(void);
void WorldMapState1Handler(void);
void ret_001_56F3(void);
void WorldMapState2Handler(void);
void WorldMapState3Handler(void);
void WorldMapState4Handler(void);
void WorldMapInteractiveHandler(void);
void jr_001_576F(void);
void jr_001_577E(void);
void jr_001_5792(void);
void jr_001_57A8(void);
void jr_001_57B7(void);
void label_001_5818(void);
void PeachPictureStateAHandler(void);
void FileSaveFadeOut(void);
void jr_001_5854(void);
void func_001_5888(void);
void InitializeInventoryBar(void);
void ret_001_58A7(void);
void func_001_58A8(void);
void MapLocationNamesTable(void);
void MapSpecialLocationNamesLookupTable(void);
void MapSpecialLocationNamesTable(void);
void func_001_5A59(void);
void Data_001_5A6B(void);
void Data_001_5A6E(void);
void func_001_5A71(void);
void jr_001_5A9D(void);
void jr_001_5AA0(void);
void jr_001_5B30(void);
void label_001_5B3F(void);
void Data_001_5BAD(void);
void Data_001_5C2D(void);
void jr_001_5C30(void);
void jr_001_5C3E(void);
void Data_001_5C41(void);
void Data_001_5C45(void);
void func_001_5C49(void);
void func_001_5C55(void);
void jr_001_5C6C(void);
void jr_001_5C72(void);
void jr_001_5C7B(void);
void label_001_5D13(void);
void SaveSlot1HeartsDrawData(void);
void SaveSlot2HeartsDrawData(void);
void SaveSlot3HeartsDrawData(void);
void BuildSaveSlotHeartsDrawCommand(void);
void func_5DC0(void);
void jr_001_5DCC(void);
void SaveGameToFile(void);
void BossRoomTable(void);
void PieceOfHeartRoomTable(void);
void RecalculateMaxHearts(void);
void jr_001_5f16(void);
void jr_001_5f18(void);
void ClampMaxHearts(void);
void SynchronizeDungeonsItemFlags(void);
void EntityPosXOffsetTable(void);
void EntityPosXSignTable(void);
void EntityPosYOffsetTable(void);
void EntityPosYSignTable(void);
void PrepareEntityPositionForRoomTransition(void);
void UpdateRecentRoomsList(void);
void HideAllSprites(void);
void HideSprites(void);
void HideSpritesUnderDialog(void);
void CreateFollowingNpcEntity(void);
void func_001_6162(void);
void Data_001_618A(void);
void LoadCounterAnimatedTiles(void);
void OpenDungeonNameDialog(void);
void MarinBeachEntryPoint(void);
void MarinBeachPrepare0(void);
void MarinBeachPrepare1(void);
void MarinBeachPrepare2(void);
void MarinBeachPrepare3(void);
void Data_001_63AA(void);
void Data_001_63BA(void);
void MarinBeachScroll1(void);
void MarinBeachScroll2(void);
void MarinBeachScrollStop(void);
void jr_001_644A(void);
void MarinBeachDialog1(void);
void MarinBeachPause1(void);
void MarinBeachDialog2(void);
void MarinBeachPause2(void);
void MarinBeachAreYouListening(void);
void jr_001_64CA(void);
void MarinBeachDialog3(void);
void MarinBeachDialog4(void);
void func_001_64FF(void);
void Data_001_650A(void);
void Data_001_650E(void);
void Data_001_6512(void);
void Data_001_6516(void);
void Data_001_651A(void);
void func_001_651E(void);
void func_001_658B(void);
void func_001_65AE(void);
void jr_001_65B2(void);
void jr_001_65D6(void);
void func_001_65DD(void);
void Data_001_65E3(void);
void Data_001_65EF(void);
void Data_001_65F3(void);
void Data_001_65F7(void);
void Data_001_65FB(void);
void Data_001_65FF(void);
void Data_001_6603(void);
void Data_001_6607(void);
void jr_001_660B(void);
void jr_001_6646(void);
void func_001_6673(void);
void Data_001_66D8(void);
void Data_001_66E0(void);
void Data_001_66E4(void);
void Data_001_66E8(void);
void Data_001_66EC(void);
void Data_001_66F0(void);
void jr_001_66F2(void);
void Data_001_66F6(void);
void func_001_66FD(void);
void jr_001_6718(void);
void ret_001_67A7(void);
void func_001_67A8(void);
void func_001_67B5(void);
void OpenMarinBeachDialog(void);
void PeachPictureEntryPoint(void);
void PeachPictureState0Handler(void);
void PeachPictureState1Handler(void);
void ret_001_6855(void);
void PeachPictureState2Handler(void);
void PeachPictureState3Handler(void);
void PeachPictureState4Handler(void);
void PeachPictureState5Handler(void);
void func_001_68D9(void);
void ret_001_68E3(void);
void PeachPictureState7Handler(void);
void PeachPictureState8Handler(void);
void PeachPictureState9Handler(void);
void func_001_695B(void);
void ret_001_6975(void);
void Data_001_6976(void);
void Data_001_697C(void);
void Data_6982(void);
void Data_69D2(void);
void Data_6A2E(void);
void Data_6A46(void);
void Data_6A5E(void);
void Data_6A76(void);
void func_6A7C(void);
void FaceShrineMuralEntryPoint(void);
void FaceShrineMuralStage0Handler(void);
void FaceShrineMuralStage1Handler(void);
void FaceShrineMuralStage2Handler(void);
void FaceShrineMuralStage3Handler(void);
void FaceShrineMuralStage4Handler(void);
void FaceShrineMuralStage5Handler(void);
void MoveSelect(void);
void LoadSirenInstruments(void);
void Data_001_6BCF(void);
void Data_001_6BD7(void);
void Data_001_6BDF(void);
void Data_001_6BE7(void);
void LoadInstrumentsBG(void);
void GetInstrumentNextBGAddress(void);
void LoadSirenInstrumentTiles(void);
void RoomBorderCoordinates(void);
void PadRoomObjectsArea(void);
void LoadTileset0F(void);
void func_001_6D11(void);
void WriteDMACodeToHRAM(void);
void DMARoutine(void);
void DMARoutineEnd(void);
void IntroRainTiles(void);
void MinimapEntrancePosition(void);
void UpdateMinimapEntranceArrowAndReturn(void);
void IntroSeaPaletteTable(void);
void IntroHandlerEntryPoint(void);
void RenderIntroFrame(void);
void IntroSceneStage0Handler(void);
void IntroSceneStage1Handler(void);
void IntroSceneStage2Handler(void);
void Data_001_6F93(void);
void Data_001_6F9C(void);
void IntroShipOnSeaHandler(void);
void Data_001_707B(void);
void Data_001_7081(void);
void RenderLightning(void);
void IntroShipOnSeaReturn(void);
void IntroLinkFaceHandler(void);
void LoadTileMapZero_trampoline(void);
void IntroStage5Handler(void);
void Data_001_7128(void);
void Data_001_7138(void);
void Data_001_7148(void);
void label_7154(void);
void IntroStage6Handler(void);
void IntroBeachHandler(void);
void func_001_71C7(void);
void TitleTileMap1(void);
void TitleTileMap2(void);
void TitleTileMap3(void);
void TitleTileMap4(void);
void TitleTileMap5(void);
void TitleTileMap6(void);
void TitleTileMap7(void);
void TitleTileMap(void);
void IntroStage8Handler(void);
void TitleAttrMap1(void);
void TitleAttrMap2(void);
void TitleAttrMap3(void);
void TitleAttrMap4(void);
void TitleAttrMap5(void);
void TitleAttrMap6(void);
void TitleAttrMap7(void);
void TitleAttrMap4__dup01(void);
void TitleAttrMap5__dup01(void);
void TitleAttrMap6__dup01(void);
void TitleAttrMap7__dup01(void);
void TitleAttrMap(void);
void func_001_7338(void);
void TitleScreenSfxHandler(void);
void TitleScreenCopyrightDrawCommand(void);
void IntroStageAHandler(void);
void ResetIntroTimers(void);
void CopyrightAttrmap(void);
void func_001_73B1(void);
void Data_001_73C0(void);
void Data_001_73C8(void);
void TitleScreenHandler(void);
void IntroStageCHandler(void);
void IntroStageDHandler(void);
void RenderRain(void);
void Data_001_74B8(void);
void IntroLinkScream(void);
void RenderIntroEntities(void);
void RenderIntroEntity(void);
void IntroShipTiles(void);
void Data_001_7550(void);
void ShipHeaveTable(void);
void RenderIntroShip(void);
void IntroLightningTiles(void);
void func_001_762B(void);
void IntroMarinSpriteVariants(void);
void RenderIntroMarin(void);
void IntroMarinState0(void);
void IntroMarinState1(void);
void IntroMarinState2(void);
void IntroMarinState3(void);
void IntroMarinState4(void);
void IntroSparkleSpriteVariants(void);
void RenderIntroSparkle(void);
void DXOnDarkTilesDMG(void);
void DXOnWhiteTilesDMG(void);
void DXOnDarkTilesGBC(void);
void DXOnWhiteAndJP1pxTilesGBC(void);
void DXJPShineAnimation(void);
void DXOnDarkTilesDMG__dup01(void);
void DXOnWhiteTilesDMG__dup01(void);
void DXOnDarkTilesGBC__dup01(void);
void DXOnWhiteAndJP1pxTilesGBC__dup01(void);
void Data_001_7898(void);
void Data_001_789B(void);
void Data_001_789C(void);
void Data_001_789F(void);
void DXFadeInPalette(void);
void func_001_7920(void);
void func_001_79AE(void);
void func_001_79C2(void);
void func_001_7BC3(void);
void Data_001_79EC(void);
void Data_001_79FD(void);
void func_001_7A11(void);
void func_001_7A16(void);
void jr_001_7A19(void);
void InertLinkSpriteVariants(void);
void RenderIntroInertLink(void);
void InertLinkState0Handler(void);
void InertLinkState1Handler(void);
void InertLinkState2Handler(void);
void InertLinkState3Handler(void);
void TitleScreenPostBeachTilemap(void);
void func_7C60(void);
void func_001_7CCB(void);
void Data_001_7CE1(void);
void Data_001_7CE9(void);
void Data_001_7CF1(void);
void IntroBGVerticalOffsetTable(void);
void func_001_7D01(void);
void func_001_7D46(void);
void func_001_7D4E(void);
void ret_001_7D9B(void);
void func_001_7D9C(void);
void func_001_7DCF(void);

void FileSaveEntryPoint(void) {
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: FileSaveInitial(); return;
        case 0x01: FileSaveMapFadeOut(); return;
        case 0x02: FileSaveDelay1(); return;
        case 0x03: FileSaveDelay2(); return;
        case 0x04: FileSaveVisible(); return;
        case 0x05: FileSaveInteractive(); return;
        case 0x06: FileSaveFadeOut(); return;
    }
}

void FileSaveInitial(void) {
    IncrementGameplaySubtype();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { FileSaveMapFadeOut(); return; };
    gb.regs.hl = 0xDCB8;
    gb.regs.c = 0x80;
    gb.regs.ime = false;
    gb.regs.a = 3;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto FileSaveInitial_done;
  FileSaveInitial_loop:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = 3;
    gb_write(0xFF70, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl++;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto FileSaveInitial_loop;
    gb.regs.a = 1;
    gb_write(0xD200, gb.regs.a);
  FileSaveInitial_done:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.ime = true;
    FileSaveMapFadeOut(); return;
}

void FileSaveMapFadeOut(void) {
    DrawLinkSprite();
    AnimateEntitiesAndRestoreBank01();
    func_1A22();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto FileSaveMapFadeOut_ret_4072;
    gb.regs.a = 3;
    gb_write(0xFFA9, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFFAA, gb.regs.a);
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1BF, gb.regs.a);
    gb_write(0xC14F, gb.regs.a);
    gb_write(0xC1B8, gb.regs.a);
    gb_write(0xC1B9, gb.regs.a);
    gb_write(0xC1B5, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(0xD7B3, gb.regs.a);
  FileSaveMapFadeOut_ret_4072:;
    return;
}

void FileSaveDelay1(void) {
    gb.regs.a = 0x0D;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC13F, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileSaveDelay2(void) {
    gb.regs.a = 0x0D;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDC42, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileSaveVisible(void) {
    func_1A39();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto FileSaveVisible_return;
    IncrementGameplaySubtype();
  FileSaveVisible_return:;
    return;
}

void FileSaveInteractive(void) {
    func_001_412A();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0xB0);
    if (GET_FLAG_Z()) { LCDOn_return(); return; };
    gb.regs.a = 0x13;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xC13F);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_001_40F9(); return; };
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FileSaveInteractive_done;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC50A, gb.regs.a);
    gb_write(0xC116, gb.regs.a);
  FileSaveInteractive_done:;
    return;
}

void label_40D6(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC40, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb_write(0xFF48, gb.regs.a);
    gb_write(0xFF49, gb.regs.a);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xFF47, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xDC45, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_write(0xDC46, gb.regs.a);
    LoadSavedFile();
    gb.regs.a = 0x80;
    gb_write(0xDC6F, gb.regs.a);
    return;
}

void jr_001_40F9(void) {
    label_27F2();
    SaveGameToFile();
    ClearWRAMAndLowerHRAM();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF5, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDC57, gb.regs.a);
    func_001_6162();
    LCDOn(); return;
}

void LCDOn(void) {
    gb.regs.a = 0xC7;
    gb_write(0xFF40, gb.regs.a);
    gb_write(0xD7B2, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0xFF4B, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xDC42, gb.regs.a);
    gb_write(0xFF4A, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0xFFA9, gb.regs.a);
    gb.regs.a = 0x70;
    gb_write(0xFFAA, gb.regs.a);
  LCDOn_return:;
    return;
}

void Data_001_4128(void) {
    /* data: db $38 + $10 */;
    /* data: db $48 + $10 */;
}

void func_001_412A(void) {
    gb.regs.hl = 0xC13F;
    MoveSelect();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto func_001_412A_jr_413B;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
  func_001_412A_jr_413B:;
    /* TODO: :  */;
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.hl = 0x4128;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC018;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x2C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xBE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
    gb.regs.a = gb_read(0xFFB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_001_412A_cleanup;
    gb.regs.e = 0x70;
  func_001_412A_wait1:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF47, gb.regs.a);
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_001_412A_wait1;
    gb.regs.e = 0x30;
  func_001_412A_loop1:;
    gb.regs.a = 0x40;
    gb_write(0xFF47, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_001_412A_loop1;
    gb.regs.e = 0x30;
  func_001_412A_loop2:;
    gb.regs.a = 0x80;
    gb_write(0xFF47, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_001_412A_loop2;
    gb.regs.e = 0xFF;
  func_001_412A_wait2:;
    gb.regs.a = 0xC0;
    gb_write(0xFF47, gb.regs.a);
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_001_412A_wait2;
    gb.regs.e = 0x30;
  func_001_412A_loop3:;
    gb.regs.a = 0x80;
    gb_write(0xFF47, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_001_412A_loop3;
    gb.regs.e = 0x30;
  func_001_412A_loop4:;
    gb.regs.a = 0x40;
    gb_write(0xFF47, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_001_412A_loop4;
  func_001_412A_cleanup:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xFF47, gb.regs.a);
    return;
}

void LinkPassOut(void) {
    gb.regs.a = gb_read(0xFF9C);
    switch(gb.regs.a) {
        case 0x00: LinkPassOutHandler(); return;
        case 0x01: LoadGameOverStage1Handler(); return;
        case 0x02: LoadGameOverStage2Handler(); return;
        case 0x03: LoadGameOverStage3Handler(); return;
        case 0x04: GameOverInteractiveHandler(); return;
    }
}

void Data_001_41CF(void) {
    /* data: db $6A, $6A, $6A, $6A, $6A, $6A, $6A, $6A */;
    /* data: db $6A, $6A, $00, $00, $00, $0A, $04, $06 */;
    /* data: db $00, $0A, $04, $06, $00, $0A, $04, $06 */;
}

void Data_001_41E7(void) {
    /* data: db $1C, $1C, $1C, $1C, $1C, $1C, $1C, $1C */;
    /* data: db $1C, $1C, $1B, $1A, $19, $18, $17, $16 */;
    /* data: db $15, $14, $13, $12, $11, $10, $10, $10 */;
    /* data: db $10, $10, $10, $10 */;
}

void LinkPassOutHandler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC155, gb.regs.a);
    gb_write(0xC156, gb.regs.a);
    gb.regs.a = gb_read(0xFFB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkPassOutHandler_passingOutAnimation;
    gb.regs.a = 0x10;
    gb_write(0xFFB7, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFF9C, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = gb_read(0xDBFF);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    alu_daa();
    gb_write(0xDBFF, gb.regs.a);
    gb.regs.a = gb_read(0xDC00);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    alu_daa();
    gb_write(0xDC00, gb.regs.a);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) goto LinkPassOutHandler_maxDeathCountEnd;
    gb.regs.a = 0x99;
    gb_write(0xDBFF, gb.regs.a);
    gb.regs.a = 9;
    gb_write(0xDC00, gb.regs.a);
  LinkPassOutHandler_maxDeathCountEnd:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1BF, gb.regs.a);
    gb_write(0xD415, gb.regs.a);
    gb_write(0xD47C, gb.regs.a);
    gb_write(0xD47A, gb.regs.a);
    gb_write(0xC3CB, gb.regs.a);
    gb_write(0xC3CC, gb.regs.a);
    gb_write(0xC3CD, gb.regs.a);
    gb_write(0xFF48, gb.regs.a);
    return;
  LinkPassOutHandler_passingOutAnimation:;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x41CF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = gb_read(0xFFB7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x41E7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC3CD, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC3CB, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = gb_read(0xDC3F);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.e = 8;
    func_020_6A30_trampoline();
    CopyLinkTunicPalette_trampoline();
    return;
}

void LoadGameOverStage1Handler(void) {
    gb.regs.a = 0x0D;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.hl = 0xFF9C;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void LoadGameOverStage2Handler(void) {
    gb.regs.a = 0xE4;
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = 0x0A;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDC42, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb.regs.hl = 0xFF9C;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    LoadFileMenuBG_trampoline();
    SynchronizeDungeonsItemFlags_trampoline();
    return;
}

void Data_001_42BA(void) {
    /* data: db $00, $FE, $FD, $FE, $00, $02, $03, $02 */;
    /* data: db $00, $04, $08, $0C, $10, $0C, $08, $04 */;
}

void LoadGameOverStage3Handler(void) {
    gb.regs.a = gb_read(0xFFB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadGameOverStage3Handler_return;
    gb.regs.hl = 0xFF9C;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 3;
    gb_write(0xD368, gb.regs.a);
  LoadGameOverStage3Handler_return:;
    return;
}

void GameOverInteractiveHandler(void) {
    func_001_4339();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0xB0);
    if (GET_FLAG_Z()) { ret_001_4335(); return; };
    gb.regs.a = gb_read(0xC13F);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_001_432C(); return; };
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto GameOverInteractiveHandler_jr_42F2;
    gb_write(0xDC79, gb.regs.a);
    jr_001_42F5(); return;
  GameOverInteractiveHandler_jr_42F2:;
    /* TODO: :  */;
    SaveGameToFile();
    jr_001_42F5(); return;
}

void jr_001_42F5(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.hl = 0xC280;
    gb.regs.e = 0x10;
  jr_001_42F5_loop_42FB:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto jr_001_42F5_loop_42FB;
    gb_write(0xDC40, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb_write(0xFF48, gb.regs.a);
    gb_write(0xFF49, gb.regs.a);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xFF47, gb.regs.a);
    gb_write(0xD7B0, gb.regs.a);
    gb_write(0xD475, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xDC45, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_write(0xDC46, gb.regs.a);
    LoadSavedFile();
    gb.regs.a = 1;
    ClearFileMenuBG_trampoline();
    gb.regs.a = 0x80;
    gb_write(0xDC6F, gb.regs.a);
    return;
}

void jr_001_432C(void) {
    SaveGameToFile();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF5, gb.regs.a);
    func_001_6162();
    ret_001_4335(); return;
}

void ret_001_4335(void) {
    return;
}

void Data_001_4336(void) {
    /* data: db GAMEOVER_OPTION_SAVE_CONTINUE_Y + $10 */;
    /* data: db GAMEOVER_OPTION_SAVE_QUIT_Y + $10 */;
    /* data: db GAMEOVER_OPTION_CONTINUE_Y + $10 */;
}

void func_001_4339(void) {
    gb.regs.hl = 0xC13F;
    MoveSelect();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { jr_001_434D(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_001_4339_jr_434C;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_001_4339_jr_434C:;
    /* TODO: :  */;
    gb_write(gb.regs.hl, gb.regs.a);
    jr_001_434D(); return;
}

void jr_001_434D(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_001_435C(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto jr_001_434D_jr_435B;
    gb.regs.a = 2;
  jr_001_434D_jr_435B:;
    /* TODO: :  */;
    gb_write(gb.regs.hl, gb.regs.a);
    jr_001_435C(); return;
}

void jr_001_435C(void) {
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.hl = 0x4336;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC018;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xBE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
}

void WorldHandlerEntryPoint(void) {
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: GameplayWorldLoad0Handler(); return;
        case 0x01: GameplayWorldLoadRoomHandler(); return;
        case 0x02: GameplayWorldSelectTilesetHandler(); return;
        case 0x03: GameplayWorldLoadRoomTilemapHandler(); return;
        case 0x04: GameplayWorldLoadHeartsAndRupeesHandler(); return;
        case 0x05: GameplayWorldLoadABButtonsHandler(); return;
        case 0x06: GameplayWorldLoad6Handler(); return;
        case 0x07: WorldInteractiveHandler(); return;
    }
}

void MinimapLayoutTable(void) {
  MinimapLayoutTable__00:;
    /* data: db MINIMAP_STYLE_TAIL_CAVE */;
  MinimapLayoutTable__01:;
    /* data: db MINIMAP_STYLE_BOTTLE_GROTTO */;
  MinimapLayoutTable__02:;
    /* data: db MINIMAP_STYLE_KEY_CAVERN */;
  MinimapLayoutTable__03:;
    /* data: db MINIMAP_STYLE_ANGLERS_TUNNEL */;
  MinimapLayoutTable__04:;
    /* data: db MINIMAP_STYLE_CATFISHS_MAW */;
  MinimapLayoutTable__05:;
    /* data: db MINIMAP_STYLE_FACE_SHRINE */;
  MinimapLayoutTable__06:;
    /* data: db MINIMAP_STYLE_EAGLES_TOWER */;
  MinimapLayoutTable__07:;
    /* data: db MINIMAP_STYLE_TURTLE_ROCK */;
  MinimapLayoutTable__08:;
    /* data: db INVENTORY_MINIMAP_SINGLE_FLOOR */;
  MinimapLayoutTable__09:;
    /* data: db INVENTORY_MINIMAP_SINGLE_FLOOR */;
  MinimapLayoutTable__0A:;
    /* data: db INVENTORY_MINIMAP_SINGLE_FLOOR */;
  MinimapLayoutTable__0B:;
    /* data: db INVENTORY_MINIMAP_SINGLE_FLOOR */;
  MinimapLayoutTable__0C:;
    /* data: db INVENTORY_MINIMAP_SINGLE_FLOOR */;
  MinimapLayoutTable__0D:;
    /* data: db INVENTORY_MINIMAP_SINGLE_FLOOR */;
  MinimapLayoutTable__0E:;
    /* data: db INVENTORY_MINIMAP_SINGLE_FLOOR */;
  MinimapLayoutTable__0F:;
    /* data: db MINIMAP_STYLE_COLOR_DUNGEON */;
    GameplayWorldLoad0Handler(); return;
}

void GameplayWorldLoad0Handler(void) {
    label_27F2();
    IncrementGameplaySubtype();
    gb.regs.a = gb_read(4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GameplayWorldLoad0Handler_debugToolDisabled;
    gb.regs.a = 0x0B;
    gb_write(0xD7B4, gb.regs.a);
    return;
  GameplayWorldLoad0Handler_debugToolDisabled:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GameplayWorldLoad0Handler_loadOverworldInventory;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto GameplayWorldLoad0Handler_jr_43B8;
    gb.regs.hl = 0xDE82;
    goto GameplayWorldLoad0Handler_jr_001_43C5;
  GameplayWorldLoad0Handler_jr_43B8:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xDBC2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  GameplayWorldLoad0Handler_jr_001_43C5:;
    gb.regs.de = 0xDC74;
    gb.regs.c = 5;
  GameplayWorldLoad0Handler_jr_001_43CA:;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto GameplayWorldLoad0Handler_jr_001_43DB;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto GameplayWorldLoad0Handler_jr_43D8;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto GameplayWorldLoad0Handler_jr_001_43DB;
  GameplayWorldLoad0Handler_jr_43D8:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GameplayWorldLoad0Handler_jr_001_43DC;
  GameplayWorldLoad0Handler_jr_001_43DB:;
    gb.regs.a = gb_read(gb.regs.hl++);
  GameplayWorldLoad0Handler_jr_001_43DC:;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto GameplayWorldLoad0Handler_jr_001_43CA;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto GameplayWorldLoad0Handler_colorDungeonIndexEnd;
    gb.regs.a = 0x0F;
  GameplayWorldLoad0Handler_colorDungeonIndexEnd:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x42D9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC58, gb.regs.a);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto GameplayWorldLoad0Handler_loadMinimap;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto GameplayWorldLoad0Handler_loadEaglesTowerClouds;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) goto GameplayWorldLoad0Handler_loadEaglesTowerClouds;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto GameplayWorldLoad0Handler_loadMinimap;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GameplayWorldLoad0Handler_loadEaglesTowerClouds;
  GameplayWorldLoad0Handler_loadMinimap:;
    CreateMinimapTilemap();
    gb.regs.a = 7;
    gb_write(0xD7B4, gb.regs.a);
    return;
  GameplayWorldLoad0Handler_loadOverworldInventory:;
    gb.regs.a = 2;
    gb_write(0xD7B4, gb.regs.a);
    GetRandomByte();
    gb.regs.hl = 0xFFE7;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xFFB9, gb.regs.a);
    return;
  GameplayWorldLoad0Handler_loadEaglesTowerClouds:;
    gb.regs.a = 9;
    gb_write(0xD7B4, gb.regs.a);
    return;
}

void GameplayWorldLoadRoomHandler(void) {
    ClearLowerWRAM();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC11C, gb.regs.a);
    IncrementGameplaySubtype();
    gb.regs.a = gb_read(0xDC45);
    gb_write(0xFF98, gb.regs.a);
    gb_write(0xDC59, gb.regs.a);
    gb.regs.a = gb_read(0xDC46);
    gb_write(0xFF99, gb.regs.a);
    gb_write(0xDC5A, gb.regs.a);
    gb.regs.a = gb_read(0xDC70);
    gb_write(0xFFA2, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GameplayWorldLoadRoomHandler_jr_4452;
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
  GameplayWorldLoadRoomHandler_jr_4452:;
    /* TODO: :  */;
    gb.regs.a = 4;
    gb_write(0xC125, gb.regs.a);
    LoadRoom();
    LoadRoomEntities();
    CreateFollowingNpcEntity();
    gb.regs.a = 0xFF;
    gb_write(0xFFA6, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_44A6(); return; };
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto GameplayWorldLoadRoomHandler_jr_4475;
    gb.regs.d = 0;
    jr_001_447E(); return;
  GameplayWorldLoadRoomHandler_jr_4475:;
    /* TODO: :  */;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) { jr_001_447E(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) { jr_001_447E(); return; };
    gb.regs.d = alu_inc8(gb.regs.d);
    jr_001_447E(); return;
}

void jr_001_447E(void) {
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    GetChestsStatusForRoom_trampoline();
    alu_cp8(gb.regs.a, 0x1A);
    if (GET_FLAG_Z()) goto jr_001_447E_jr_4495;
    alu_cp8(gb.regs.a, 0x19);
    if (GET_FLAG_Z()) goto jr_001_447E_jr_4495;
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_001_44A6(); return; };
  jr_001_447E_jr_4495:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xDC75);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_44A6(); return; };
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { jr_001_44A6(); return; };
    gb.regs.a = 0x0C;
    gb_write(0xD462, gb.regs.a);
    jr_001_44A6(); return;
}

void jr_001_44A6(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 6;
    if (!GET_FLAG_Z()) goto jr_001_44A6_jr_44B0;
    gb.regs.a = 7;
  jr_001_44A6_jr_44B0:;
    /* TODO: :  */;
    gb_write(0xD7B3, gb.regs.a);
    return;
}

void GameplayWorldSelectTilesetHandler(void) {
    gb.regs.a = 0x0F;
    gb_write(0xFF94, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GameplayWorldSelectTilesetHandler_jr_44C9;
    gb.regs.ime = false;
    gb.regs.a = 3;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.ime = true;
  GameplayWorldSelectTilesetHandler_jr_44C9:;
    /* TODO: :  */;
    SelectRoomTilesets();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF90, gb.regs.a);
    gb_write(0xFF91, gb.regs.a);
    gb.regs.a = 9;
    gb_write(0xD7B3, gb.regs.a);
    IncrementGameplaySubtype(); return;
}

void IncrementGameplaySubtype(void) {
    IncrementGameplaySubtypeAndReturn();
}

void IncrementGameplaySubtypeAndReturn(void) {
    gb.regs.hl = 0xDC3E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void GameplayWorldLoadRoomTilemapHandler(void) {
    gb.regs.a = 1;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = gb_read(0xD7AF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GameplayWorldLoadRoomTilemapHandler_switchableObjectEnd;
    gb.regs.a = 5;
    gb_write(0xD7AD, gb.regs.a);
    gb.regs.a = gb_read(0xC1CB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GameplayWorldLoadRoomTilemapHandler_switchableObjectEnd;
    gb.regs.a = 3;
    gb_write(0xFFA5, gb.regs.a);
  GameplayWorldLoadRoomTilemapHandler_switchableObjectEnd:;
    IncrementGameplaySubtype();
    return;
}

void GameplayWorldLoadHeartsAndRupeesHandler(void) {
    IncrementGameplaySubtype();
    LoadHeartsAndRupeesCount();
    LoadHeartsAndRupeesCount();
    IncrementGameplaySubtype();
    return;
}

void GameplayWorldLoadABButtonsHandler(void) {
    IncrementGameplaySubtype();
    DrawABButtonSlots();
    DrawABButtonSlots();
    IncrementGameplaySubtype();
    return;
}

void GameplayWorldLoad6Handler(void) {
    InitializeInventoryBar();
    gb.regs.a = gb_read(0xFF40);
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(0xD7B2, gb.regs.a);
    gb_write(0xFF40, gb.regs.a);
    IncrementGameplaySubtype();
    gb.regs.a = gb_read(0xC11C);
    gb_write(0xD463, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb.regs.a = gb_read(0xC3CB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GameplayWorldLoad6Handler_jr_4548;
    gb.regs.a = gb_read(0xC5AD);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = 0xE4;
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GameplayWorldLoad6Handler_jr_4548;
    gb.regs.a = 4;
    gb_write(0xC16B, gb.regs.a);
  GameplayWorldLoad6Handler_jr_4548:;
    /* TODO: :  */;
    label_27DD(); return;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x90);
    if (GET_FLAG_Z()) { TransitionReturn(); return; };
}

void TransitionToFileMenu(void) {
    gb_write(0xD47B, gb.regs.a);
    label_001_4555(); return;
}

void label_001_4555(void) {
    EnableSRAM();
    gb.regs.a = gb_read(0x4447);
    gb_write(0xDC28, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4448);
    gb_write(0xDC29, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4449);
    gb_write(0xDC2A, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x444A);
    gb_write(0xDC2B, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x444B);
    gb_write(0xDC2C, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x444E);
    gb_write(0xDCAE, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x444F);
    gb_write(0xDCB1, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x444B);
    gb_write(0xDCA8, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x444C);
    gb_write(0xDCA9, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x444C);
    gb_write(0xDC2D, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x444D);
    gb_write(0xDC2E, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x444E);
    gb_write(0xDC2F, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x444F);
    gb_write(0xDC30, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4450);
    gb_write(0xDC31, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4453);
    gb_write(0xDCAF, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4454);
    gb_write(0xDCB2, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4450);
    gb_write(0xDCAA, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4451);
    gb_write(0xDCAB, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4451);
    gb_write(0xDC32, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4452);
    gb_write(0xDC33, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4453);
    gb_write(0xDC34, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4454);
    gb_write(0xDC35, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4455);
    gb_write(0xDC36, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4458);
    gb_write(0xDCB0, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4459);
    gb_write(0xDCB3, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4455);
    gb_write(0xDCAC, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0x4456);
    gb_write(0xDCAD, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xDC3D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC40, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = 1;
    ClearFileMenuBG_trampoline();
    TransitionReturn(); return;
}

void TransitionReturn(void) {
    return;
}

void DebugSaveFileData(void) {
    /* data: db INVENTORY_SHIELD */;
    /* data: db INVENTORY_SWORD */;
    /* data: db INVENTORY_BOMBS */;
    /* data: db INVENTORY_POWER_BRACELET */;
    /* data: db INVENTORY_BOW */;
    /* data: db INVENTORY_HOOKSHOT */;
    /* data: db INVENTORY_MAGIC_ROD */;
    /* data: db INVENTORY_PEGASUS_BOOTS */;
    /* data: db INVENTORY_OCARINA */;
    /* data: db INVENTORY_ROCS_FEATHER */;
    /* data: db INVENTORY_SHOVEL */;
    /* data: db INVENTORY_MAGIC_POWDER */;
    /* data: db 1 */;
    /* data: db 1 */;
    /* data: db 1 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 1 */;
    /* data: db 1 */;
    /* data: db 1 */;
    /* data: db 1 */;
    /* data: db 0 */;
    /* data: db 1, 1, 1, 1, 1 */;
    /* data: db 1, 1, 1, 1, 2 */;
    /* data: db 1, 1, 1, 1, 3 */;
    /* data: db 1, 1, 1, 1, 4 */;
    /* data: db 1, 1, 1, 1, 5 */;
    /* data: db 1, 1, 1, 1, 6 */;
    /* data: db 1, 1, 1, 1, 7 */;
    /* data: db 1, 1, 1, 1, 8 */;
    /* data: db 1, 1, 1, 1, 9 */;
}

void InitSaveFiles(void) {
    gb.regs.de = 0;
    func_001_4794();
    gb.regs.de = 5;
    func_001_4794();
    gb.regs.de = 0x0A;
    func_001_4794();
    gb.regs.a = gb_read(3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto InitSaveFiles_return;
    gb.regs.e = 0;
    gb.regs.d = 0;
    gb.regs.bc = (0x4101 + (wInventoryItems_BButtonSlot - 0xD8B5));
  InitSaveFiles_loop:;
    gb.regs.hl = 0x453A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.bc++;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, DEBUG_SAVE_FILE_SIZE);
    if (!GET_FLAG_Z()) goto InitSaveFiles_loop;
    gb.regs.a = 1;
    gb_write(0x4446, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0x443C, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0x443B, gb.regs.a);
    gb.regs.hl = 0x4459;
    gb.regs.e = 9;
    gb.regs.a = 2;
  InitSaveFiles_drawEmptyHeartsLoop:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto InitSaveFiles_drawEmptyHeartsLoop;
    gb.regs.a = 0x60;
    gb_write(0x4445, gb.regs.a);
    gb_write(0x446B, gb.regs.a);
    gb_write(0x446C, gb.regs.a);
    gb_write(0x446C, gb.regs.a);
    gb_write(0x446B, gb.regs.a);
    gb_write(0x443D, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0x446A, gb.regs.a);
    gb_write(0x4444, gb.regs.a);
    gb.regs.a = 0x89;
    gb_write(0x443F, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0x4407, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0x4441, gb.regs.a);
    gb.regs.a = 5;
    gb_write(0x4451, gb.regs.a);
    gb.regs.a = 9;
    gb_write(0x4452, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0x4440, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0x444E, gb.regs.a);
    gb.regs.a = 0x0A;
    gb_write(0x444F, gb.regs.a);
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto InitSaveFiles_notOnNewFileScreen;
    /* TODO: FOR INDEX, 5 */;
    gb.regs.a = CHARVAL_STRCHAR__DEBUG_SAVE_FILE_NAME;
    gb_write((0x4447 + INDEX), gb.regs.a);
    /* TODO: ENDR  */;
  InitSaveFiles_notOnNewFileScreen:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0x444B, gb.regs.a);
    gb_write(0x444C, gb.regs.a);
    gb_write(0x444A, gb.regs.a);
    gb_write(0x4453, gb.regs.a);
    gb_write(0x4454, gb.regs.a);
    gb.regs.a = 0x92;
    gb_write(0x4455, gb.regs.a);
    gb.regs.a = 0x48;
    gb_write(0x4456, gb.regs.a);
    gb.regs.a = 0x62;
    gb_write(0x4457, gb.regs.a);
    gb.regs.hl = 0x4101;
    gb.regs.a = 0x80;
    gb.regs.e = 0;
  InitSaveFiles_loop3:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto InitSaveFiles_loop3;
    gb.regs.a = 1;
    gb_write(0xDE82, gb.regs.a);
    gb_write(0xDE83, gb.regs.a);
    gb_write(0xDE84, gb.regs.a);
    gb_write(0xDE85, gb.regs.a);
    gb_write(0xDE86, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDCB4, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(0xDCB5, gb.regs.a);
  InitSaveFiles_return:;
    return;
}

void func_001_4794(void) {
    gb.regs.c = 1;
    gb.regs.b = 5;
    gb.regs.hl = 0x4100;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  func_001_4794_loop_479C:;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, gb.regs.c);
    if (!GET_FLAG_Z()) goto func_001_4794_jr_47AA;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto func_001_4794_loop_479C;
    ret_001_47CD(); return;
  func_001_4794_jr_47AA:;
    /* TODO: :  */;
    gb_push16(gb.regs.de);
    gb.regs.hl = 0x4101;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 4;
  func_001_4794_loop_47B2:;
    EnableSRAM();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto func_001_4794_loop_47B2;
    gb.regs.de = gb_pop16();
    gb.regs.hl = 0x4100;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = 1;
  func_001_4794_loop_47C3:;
    EnableSRAM();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_C()) goto func_001_4794_loop_47C3;
}

void ret_001_47CD(void) {
    return;
}

void FileSelectionEntryPoint(void) {
    func_5DC0();
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: FileSelectionPrepare0(); return;
        case 0x01: FileSelectionPrepare1(); return;
        case 0x02: FileSelectionPrepare2(); return;
        case 0x03: FileSelectionPrepare3(); return;
        case 0x04: CopyDeathCountsToBG(); return;
        case 0x05: FileSelectionPrepare5(); return;
        case 0x06: FileSelectionPrepare6(); return;
        case 0x07: FileSelectionInteractiveHandler(); return;
        case 0x08: FileSelectionExecuteChoice(); return;
        case 0x09: FileSelectionLoadSavedFile(); return;
    }
}

void FileSelectionPrepare0(void) {
    gb.regs.a = 4;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileSelectionPrepare1(void) {
    gb.regs.a = 8;
    gb_write(0xD7B3, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileSelectionPrepare2(void) {
    DrawSaveSlot1MaxHearts();
    DrawSaveSlot2MaxHearts();
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileSelectionPrepare3(void) {
    DrawSaveSlot3MaxHearts();
    IncrementGameplaySubtypeAndReturn(); return;
}

void CopyDeathCountsToBG(void) {
    gb.regs.a = gb_read(0xDC4F);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto CopyDeathCountsToBG_file2;
    gb.regs.a = gb_read(0xDCA8);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xDCA9);
    gb.regs.l = gb.regs.a;
    gb.regs.de = 0x98E7;
    CopyDigitsToFileScreenBG();
  CopyDeathCountsToBG_file2:;
    gb.regs.a = gb_read(0xDC4F);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto CopyDeathCountsToBG_file3;
    gb.regs.a = gb_read(0xDCAA);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xDCAB);
    gb.regs.l = gb.regs.a;
    gb.regs.de = 0x9947;
    CopyDigitsToFileScreenBG();
  CopyDeathCountsToBG_file3:;
    gb.regs.a = gb_read(0xDC4F);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto CopyDeathCountsToBG_return;
    gb.regs.a = gb_read(0xDCAC);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xDCAD);
    gb.regs.l = gb.regs.a;
    gb.regs.de = 0x99A7;
    CopyDigitsToFileScreenBG();
  CopyDeathCountsToBG_return:;
    IncrementGameplaySubtypeAndReturn(); return;
    return;
}

void FileSelectionPrepare5(void) {
    FileDeletionState4Handler(); return;
}

void DrawSaveSlotName(void) {
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.a = gb.regs.b;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 4;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb_push16(gb.regs.de);
    gb.regs.a = 5;
  DrawSaveSlotName_drawCharacterRowLoop:;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x7E;
    if (GET_FLAG_Z()) goto DrawSaveSlotName_drawCharacterTile;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.hl);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    ReadTileValueFromAsciiTable();
    gb.regs.hl = gb_pop16();
    gb.regs.bc = gb_pop16();
  DrawSaveSlotName_drawCharacterTile:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto DrawSaveSlotName_drawCharacterRowLoop;
    gb.regs.a = gb.regs.b;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 4;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.a = 5;
  DrawSaveSlotName_drawSpacingRowLoop:;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    goto DrawSaveSlotName_selectSpacingTile;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xC0);
    if (GET_FLAG_Z()) goto DrawSaveSlotName_selectSpacingTile;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    ReadTileValueFromDiacriticsTable();
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = gb_pop16();
    alu_cp8(gb.regs.a, 0);
  DrawSaveSlotName_selectSpacingTile:;
    /* TODO: :  */;
    gb.regs.a = 0x7E;
    if (GET_FLAG_Z()) goto DrawSaveSlotName_drawSpacingTile;
    gb.regs.a = gb_read(0xFFE8);
    alu_cp8(gb.regs.a, 2);
    gb.regs.a = 0xC8;
    if (GET_FLAG_Z()) goto DrawSaveSlotName_drawSpacingTile;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = 0x7E;
    if (GET_FLAG_Z()) goto DrawSaveSlotName_drawSpacingTile;
    gb.regs.a = 0xC9;
    gb.regs.a = 0x7E;
    goto DrawSaveSlotName_drawSpacingTile;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb.regs.a = 0xC8;
    if (GET_FLAG_Z()) goto DrawSaveSlotName_drawSpacingTile;
    gb.regs.a = alu_inc8(gb.regs.a);
  DrawSaveSlotName_drawSpacingTile:;
    /* TODO: :  */;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto DrawSaveSlotName_drawSpacingRowLoop;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void FileSelectionPrepare6(void) {
    gb.regs.a = gb_read(0xD47B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FileSelectionPrepare6_dontForceMusicTrack;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD47B, gb.regs.a);
    gb.regs.a = 0x11;
    gb_write(0xD368, gb.regs.a);
  FileSelectionPrepare6_dontForceMusicTrack:;
    gb.regs.a = gb_read(0xDC4F);
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 3;
    if (GET_FLAG_Z()) goto FileSelectionPrepare6_BGMapEnd;
    gb.regs.a = 4;
  FileSelectionPrepare6_BGMapEnd:;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0xE4;
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = 0xE4;
    gb_write(0xDC41, gb.regs.a);
    LoadFileMenuBG_trampoline();
    IncrementGameplaySubtypeAndReturn(); return;
}

void Data_001_48E4(void) {
    gb.regs.sp--;
    gb.regs.d = gb.regs.e;
    gb.regs.l = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    Data_001_48EB(); return;
}

void Data_001_48EB(void) {
    /* data: db $99, $C6, $00, $AA */;
    /* data: db $99, $C7, $00, $AF */;
    /* data: db $00 */;
  Data_001_48EB_end:;
    FileSelectionInteractiveHandler(); return;
}

void FileSelectionInteractiveHandler(void) {
    gb.regs.a = gb_read(0xFFA1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FileSelectionInteractiveHandler_start;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.de = 0x48EB;
    gb.regs.c = -344;
  FileSelectionInteractiveHandler_copyLoop:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto FileSelectionInteractiveHandler_copyLoop;
  FileSelectionInteractiveHandler_start:;
    MoveSelect();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x90);
    if (GET_FLAG_Z()) goto FileSelectionInteractiveHandler_jr_48F4;
    IncrementGameplaySubtypeAndReturn(); return;
  FileSelectionInteractiveHandler_jr_48F4:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { jr_001_4920(); return; };
    gb.regs.c = 2;
    gb.regs.a = gb_read(0xDC4F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FileSelectionInteractiveHandler_jr_4903;
    gb.regs.c = alu_inc8(gb.regs.c);
  FileSelectionInteractiveHandler_jr_4903:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFCC);
    alu_bit(2, gb.regs.a);
    if (!GET_FLAG_Z()) goto FileSelectionInteractiveHandler_jr_4915;
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, gb.regs.c);
    if (GET_FLAG_C()) { jr_001_491D(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_001_491D(); return;
  FileSelectionInteractiveHandler_jr_4915:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.a = alu_sub8(gb.regs.a, 1);
    if (!GET_FLAG_C()) { jr_001_491D(); return; };
    gb.regs.a = gb.regs.c;
    jr_001_491D(); return;
}

void jr_001_491D(void) {
    gb_write(0xDC4E, gb.regs.a);
    jr_001_4920(); return;
}

void jr_001_4920(void) {
    gb.regs.a = gb_read(0xDC4E);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { func_001_4954(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_001_4920_jr_4938;
    MoveSelect_playMoveSelectionJingle();
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(0xD200, gb.regs.a);
  jr_001_4920_jr_4938:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { func_001_4954(); return; };
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x2E;
    if (GET_FLAG_Z()) goto jr_001_4920_jr_4948;
    gb.regs.a = 0x66;
  jr_001_4920_jr_4948:;
    /* TODO: :  */;
    gb.regs.hl = 0xC008;
    gb_write(gb.regs.hl, 0x88);
    gb.regs.hl++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xBE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    func_001_4954(); return;
}

void func_001_4954(void) {
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x48E4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto func_001_4954_jr_497B;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC000;
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  func_001_4954_jr_497B:;
    /* TODO: :  */;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC000;
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void FileSelectionExecuteChoice(void) {
    gb.regs.a = gb_read(0xDC4E);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { HandleFileSelectionCommand(); return; };
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.c = 5;
    gb.regs.hl = 0xDC28;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  FileSelectionExecuteChoice_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { LoadSelectedFile(); return; };
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto FileSelectionExecuteChoice_loop;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xDC3D, gb.regs.a);
    PlayValidationJingle(); return;
}

void PlayValidationJingle(void) {
    PlayValidationJingleAndReturn();
}

void PlayValidationJingleAndReturn(void) {
    gb.regs.a = 0x13;
    gb_write(0xFFF2, gb.regs.a);
    return;
}

void LoadSelectedFile(void) {
    PlayValidationJingle();
    gb.regs.a = 0;
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC40, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = 1;
    ClearFileMenuBG_trampoline();
    gb.regs.a = 5;
    gb_write(0xD7B3, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void HandleFileSelectionCommand(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 4;
    if (GET_FLAG_Z()) goto HandleFileSelectionCommand_nextScreenEnd;
    gb.regs.a = 5;
  HandleFileSelectionCommand_nextScreenEnd:;
    gb_write(0xDC3D, gb.regs.a);
    PlayValidationJingleAndReturn(); return;
}

void Data_001_49F2(void) {
    /* data: dw SaveGame1.main + wInventoryItems.BButtonSlot - wOverworldRoomStatus */;
    /* data: dw SaveGame2.main + wInventoryItems.BButtonSlot - wOverworldRoomStatus */;
    /* data: dw SaveGame3.main + wInventoryItems.BButtonSlot - wOverworldRoomStatus */;
}

void SaveGameTable(void) {
    /* data: dw SaveGame1.main */;
    /* data: dw SaveGame2.main */;
    /* data: dw SaveGame3.main */;
}

void Data_001_49FE(void) {
    /* data: dw SaveGame1 */;
    /* data: dw SaveGame2 */;
    /* data: dw SaveGame3 */;
}

void FileSelectionLoadSavedFile(void) {
    LoadSavedFile(); return;
}

void FileCreationEntryPoint(void) {
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: FileCreationInit1Handler(); return;
        case 0x01: FileCreationInit2Handler(); return;
        case 0x02: FileCreationInteractiveHandler(); return;
    }
}

void FileCreationInit1Handler(void) {
    IncrementGameplaySubtype();
    gb.regs.a = 8;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC50, gb.regs.a);
    gb_write(0xDC51, gb.regs.a);
    gb_write(0xDC52, gb.regs.a);
    return;
}

void FileCreationInit2Handler(void) {
    gb.regs.a = 5;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.a = 0x98;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x49;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.a = alu_add8(gb.regs.a, 0xAB);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void WriteByteToSRAM(void) {
    gb_push16(gb.regs.hl);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    EnableSRAM();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = gb_pop16();
    return;
}

void label_4A47(void) {
    gb.regs.bc = 0x453A;
    gb.regs.e = DEBUG_SAVE_FILE_SIZE;
    gb_push16(gb.regs.hl);
  label_4A47_loop_4A4D:;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc++;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_4A47_loop_4A4D;
    gb.regs.hl = gb_pop16();
    gb.regs.bc = 0x4E;
    gb.regs.a = 1;
    WriteByteToSRAM();
    gb.regs.bc = 0x44;
    WriteByteToSRAM();
    gb.regs.bc = 0x43;
    gb.regs.a = 2;
    WriteByteToSRAM();
    gb.regs.bc = 0x4D;
    gb.regs.a = 0x59;
    WriteByteToSRAM();
    gb.regs.bc = 0x77;
    WriteByteToSRAM();
    gb.regs.bc = 0x78;
    WriteByteToSRAM();
    gb.regs.bc = 0x45;
    WriteByteToSRAM();
    gb.regs.bc = 0x76;
    gb.regs.a = 0x39;
    WriteByteToSRAM();
    gb.regs.bc = 0x4C;
    WriteByteToSRAM();
    return;
}

void SaveSlotNameAddresses(void) {
  SaveSlotNameAddresses__01:;
    /* data: db wSaveSlot1Name - wSaveSlotNames */;
  SaveSlotNameAddresses__02:;
    /* data: db wSaveSlot2Name - wSaveSlotNames */;
  SaveSlotNameAddresses__03:;
    /* data: db wSaveSlot3Name - wSaveSlotNames */;
    FileCreationInteractiveHandler(); return;
}

void FileCreationInteractiveHandler(void) {
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4946;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xDC28;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.bc = 0x984A;
    DrawSaveSlotName();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto FileCreationInteractiveHandler_validationEnd;
    if (GET_FLAG_Z()) goto FileCreationInteractiveHandler_validationEnd;
    PlayValidationJingle();
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x49F2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb_push16(gb.regs.hl);
    gb.regs.de = (0xDBFB - wInventoryItems_BButtonSlot);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    /* TODO: CHECKNAME #EASTER_EGG_FILENAME_1, EASTER_EGG_SONG_1, .checkOtherName */;
    goto FileCreationInteractiveHandler_foundName;
  FileCreationInteractiveHandler_checkOtherName:;
    /* TODO: CHECKNAME #EASTER_EGG_FILENAME_2, EASTER_EGG_SONG_2, .easterEggEnd */;
    /* TODO: CHECKNAME #EASTER_EGG_FILENAME_1, EASTER_EGG_SONG_1, .easterEggEnd */;
  FileCreationInteractiveHandler_foundName:;
    gb_write(0xD368, gb.regs.a);
  FileCreationInteractiveHandler_easterEggEnd:;
    gb.regs.hl = 0xDC28;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.bc = gb_pop16();
    gb.regs.e = 5;
  FileCreationInteractiveHandler_loop:;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.bc++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto FileCreationInteractiveHandler_loop;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.hl);
    gb.regs.de = (0xDC02 - wInventoryItems_BButtonSlot);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.hl);
    gb.regs.de = (0xDC03 - wInventoryItems_BButtonSlot);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = gb_pop16();
    gb.regs.de = (0xDBFF - wInventoryItems_BButtonSlot);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    label_001_4555(); return;
  FileCreationInteractiveHandler_validationEnd:;
    func_001_4BF5();
    func_001_4C8A();
    return;
}

void Data_001_4B30(void) {
    /* data: db $38, $38, $38, $38, $38, $38, $38, $38 */;
    /* data: db $38, $38, $38, $38, $38, $38, $38, $38 */;
    /* data: db $48, $48, $48, $48, $48, $48, $48, $48 */;
    /* data: db $48, $48, $48, $48, $48, $48, $48, $48 */;
    /* data: db $58, $58, $58, $58, $58, $58, $58, $58 */;
    /* data: db $58, $58, $58, $58, $58, $58, $58, $58 */;
    /* data: db $68, $68, $68, $68, $68, $68, $68, $68 */;
    /* data: db $68, $68, $68, $68, $68, $68, $68, $68 */;
    /* data: db $78, $78, $78, $78, $78, $78, $78, $78 */;
    /* data: db $78, $78, $78, $78, $78, $78, $78, $78 */;
}

void Data_001_4B70(void) {
    /* data: db $14, $1C, $24, $2C, $34, $3C, $44, $4C */;
    /* data: db $54, $5C, $64, $6C, $74, $7C, $84, $8C */;
    /* data: db $14, $1C, $24, $2C, $34, $3C, $44, $4C */;
    /* data: db $54, $5C, $64, $6C, $74, $7C, $84, $8C */;
    /* data: db $14, $1C, $24, $2C, $34, $3C, $44, $4C */;
    /* data: db $54, $5C, $64, $6C, $74, $7C, $84, $8C */;
    /* data: db $14, $1C, $24, $2C, $34, $3C, $44, $4C */;
    /* data: db $54, $5C, $64, $6C, $74, $7C, $84, $8C */;
    /* data: db $14, $1C, $24, $2C, $34, $3C, $44, $4C */;
    /* data: db $54, $5C, $64, $6C, $74, $7C, $84, $8C */;
}

void Data_001_4BB0(void) {
    /* data: db $4C, $54, $5C, $64, $6C */;
}

void NameEntryCharacterTable(void) {
    /* TODO: PUSHC  */;
    /* data: db "ABCDEFG  abcdefg" */;
    /* data: db "HIJKLMN  hijklmn" */;
    /* data: db "OPQRSTU  opqrstu" */;
    /* data: db "VWXYZ    vwxyz  " */;
    /* TODO: POPC  */;
  NameEntryCharacterTable_end:;
    func_001_4BF5(); return;
}

void func_001_4BF5(void) {
    gb.regs.a = gb_read(0xFFCC);
    jr_001_4BF7(); return;
}

void jr_001_4BF7(void) {
    loop_start: ;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) { jr_001_4C41(); return; };
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_001_4C21(); return; };
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.hl = 0xC182;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto jr_001_4BF7_jr_4C12;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_001_4C1F(); return;
  jr_001_4BF7_jr_4C12:;
    /* TODO: :  */;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_Z()) { jr_001_4C1F(); return; };
    gb_write(gb.regs.hl, 0x15);
    gb.regs.a = gb_read(0xFFCB);
    goto loop_start;
}

void jr_001_4C1F(void) {
    jr_001_4C63(); return;
}

void jr_001_4C21(void) {
    MoveSelect_playMoveSelectionJingle();
    alu_bit(1, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_001_4C21_jr_4C34;
    gb.regs.a = gb_read(0xDC51);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, NameEntryCharacterTableSize);
    if (GET_FLAG_C()) { jr_001_4C5E(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_001_4C5E(); return;
  jr_001_4C21_jr_4C34:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xDC51);
    gb.regs.a = alu_sub8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_001_4C5E(); return; };
    gb.regs.a = (NameEntryCharacterTableSize - 1);
    jr_001_4C5E(); return;
}

void jr_001_4C41(void) {
    MoveSelect_playMoveSelectionJingle();
    alu_bit(2, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_001_4C41_jr_4C53;
    gb.regs.a = gb_read(0xDC51);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) { jr_001_4C5E(); return; };
    gb.regs.a = alu_add8(gb.regs.a, NameEntryCharacterTableSize);
    jr_001_4C5E(); return;
  jr_001_4C41_jr_4C53:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xDC51);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, NameEntryCharacterTableSize);
    if (GET_FLAG_C()) { jr_001_4C5E(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, NameEntryCharacterTableSize);
    jr_001_4C5E(); return;
}

void jr_001_4C5E(void) {
    gb_write(0xDC51, gb.regs.a);
    jr_001_4C63(); return;
}

void jr_001_4C63(void) {
    gb.regs.a = gb_read(0xDC51);
    gb.regs.hl = 0x4B70;
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xDC51);
    gb.regs.hl = 0x4B30;
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC000;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xE0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void func_001_4C8A(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) { jr_001_4CB7(); return; };
    alu_bit(5, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_001_4C8A_jr_4CA7;
    PlayValidationJingle();
    func_001_4CDA();
    gb.regs.a = gb_read(0xDC52);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) { jr_001_4CB4(); return; };
    gb.regs.a = 4;
    jr_001_4CB4(); return;
  func_001_4C8A_jr_4CA7:;
    /* TODO: :  */;
    PlayValidationJingle();
    gb.regs.a = gb_read(0xDC52);
    gb.regs.a = alu_sub8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_001_4CB4(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_001_4CB4(); return;
}

void jr_001_4CB4(void) {
    gb_write(0xDC52, gb.regs.a);
    jr_001_4CB7(); return;
}

void jr_001_4CB7(void) {
    gb.regs.a = gb_read(0xDC52);
    gb.regs.hl = 0x4BB0;
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto jr_001_4CB7_return;
    gb.regs.hl = 0xC004;
    gb.regs.a = 0x18;
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xE0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_001_4CB7_return:;
    return;
}

void func_001_4CDA(void) {
    gb.regs.a = gb_read(0xDC51);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x4A78;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.c = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0xDC28;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xDC52);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    return;
}

void FileDeletionEntryPoint(void) {
    func_5DC0();
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: FileDeletionState0Handler(); return;
        case 0x01: FileDeletionState1Handler(); return;
        case 0x02: FileDeletionState2Handler(); return;
        case 0x03: FileDeletionState3Handler(); return;
        case 0x04: FileDeletionState4Handler(); return;
        case 0x05: FileDeletionState5Handler(); return;
        case 0x06: FileDeletionState6Handler(); return;
        case 0x07: FileDeletionState7Handler(); return;
        case 0x08: FileDeletionState8Handler(); return;
        case 0x09: FileDeletionState9Handler(); return;
        case 0x0A: FileDeletionState10Handler(); return;
        case 0x0B: FileDeletionState11Handler(); return;
    }
}

void FileDeletionState0Handler(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_4D53(); return; };
    gb.regs.a = 1;
    ClearFileMenuBG_trampoline();
    gb.regs.a = 1;
    gb_write(0xDE79, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileDeletionState1Handler(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_4D53(); return; };
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileDeletionState8Handler(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_4D53(); return; };
    LoadFileMenuBG_trampoline();
    gb.regs.a = 1;
    gb_write(0xDE79, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileDeletionState9Handler(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_4D53(); return; };
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
    jr_001_4D53(); return;
}

void jr_001_4D53(void) {
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileDeletionState2Handler(void) {
    gb.regs.a = 8;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC4E, gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileDeletionState3Handler(void) {
    gb.regs.a = 6;
    gb_write(0xD7B4, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileDeletionState4Handler(void) {
    DrawSaveSlot1Name();
    DrawSaveSlot2Name();
    DrawSaveSlot3Name();
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileDeletionState5Handler(void) {
    DrawSaveSlot1MaxHearts();
    DrawSaveSlot2MaxHearts();
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileDeletionState6Handler(void) {
    DrawSaveSlot3MaxHearts();
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileDeletionState7Handler(void) {
    CopyDeathCountsToBG(); return;
}

void DrawSaveSlot1Name(void) {
    gb.regs.bc = 0x98C5;
    gb.regs.de = 0xDC28;
    DrawSaveSlotName(); return;
}

void DrawSaveSlot2Name(void) {
    gb.regs.bc = 0x9925;
    gb.regs.de = 0xDC2D;
    DrawSaveSlotName(); return;
}

void DrawSaveSlot3Name(void) {
    gb.regs.bc = 0x9985;
    gb.regs.de = 0xDC32;
    DrawSaveSlotName(); return;
}

void DrawSaveSlot1MaxHearts(void) {
    gb.regs.a = gb_read(0xDC4F);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.hl = 0xDCAE;
    gb.regs.de = 0xDCB1;
  DrawSaveSlot1MaxHearts_clamp:;
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto DrawSaveSlot1MaxHearts_max;
    gb.regs.a = 3;
  DrawSaveSlot1MaxHearts_max:;
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_C()) goto DrawSaveSlot1MaxHearts_prepareDrawCommand;
    gb.regs.a = 0x0E;
  DrawSaveSlot1MaxHearts_prepareDrawCommand:;
    gb_write(gb.regs.de, gb.regs.a);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) { BuildSaveSlotHeartsDrawCommand(); return; };
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    BuildSaveSlotHeartsDrawCommand(); return;
    if (GET_FLAG_Z()) goto DrawSaveSlot1MaxHearts_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = gb_read(0xDCAE);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xDCB1);
    gb_write(0xFFDA, gb.regs.a);
    BuildSaveSlotHeartsDrawCommand(); return;
  DrawSaveSlot1MaxHearts_return:;
    /* TODO: :  */;
    return;
}

void DrawSaveSlot2MaxHearts(void) {
    gb.regs.a = gb_read(0xDC4F);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 1;
    gb.regs.hl = 0xDCAF;
    gb.regs.de = 0xDCB2;
    DrawSaveSlot1MaxHearts_clamp(); return;
    if (GET_FLAG_Z()) { DrawSaveSlot1MaxHearts_return(); return; };
    gb.regs.a = 1;
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = gb_read(0xDCAF);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xDCB2);
    gb_write(0xFFDA, gb.regs.a);
    BuildSaveSlotHeartsDrawCommand(); return;
}

void DrawSaveSlot3MaxHearts(void) {
    gb.regs.a = gb_read(0xDC4F);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 2;
    gb.regs.hl = 0xDCB0;
    gb.regs.de = 0xDCB3;
    DrawSaveSlot1MaxHearts_clamp(); return;
    if (GET_FLAG_Z()) { DrawSaveSlot1MaxHearts_return(); return; };
    gb.regs.a = 2;
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = gb_read(0xDCB0);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xDCB3);
    gb_write(0xFFDA, gb.regs.a);
    BuildSaveSlotHeartsDrawCommand(); return;
}

void Data_001_4DEE(void) {
    /* data: db $98, $A5, $44, $7E, $98, $C5, $44, $7E */;
    /* data: db $99, $05, $44, $7E, $99, $25, $44, $7E */;
    /* data: db $99, $65, $44, $7E, $99, $85, $44, $7E */;
}

void FileDeletionState10Handler(void) {
    MoveSelect();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto FileDeletionState10Handler_jr_4E18;
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xDC4E, gb.regs.a);
  FileDeletionState10Handler_jr_4E18:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_001_4E2B(); return; };
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto FileDeletionState10Handler_jr_4E28;
    gb.regs.a = 3;
  FileDeletionState10Handler_jr_4E28:;
    /* TODO: :  */;
    gb_write(0xDC4E, gb.regs.a);
    jr_001_4E2B(); return;
}

void jr_001_4E2B(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x90);
    if (GET_FLAG_Z()) { jr_001_4E67(); return; };
    gb.regs.a = gb_read(0xDC4E);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_001_4E2B_jr_4E3B;
    label_001_4555(); return;
  jr_001_4E2B_jr_4E3B:;
    /* TODO: :  */;
    PlayValidationJingleAndReturn();
    IncrementGameplaySubtype();
    CopyQuitOkTilemap(); return;
}

void CopyQuitOkTilemap(void) {
    loop_start: ;
    gb.regs.hl = 0xD5C2;
    gb.regs.a = ((0x99EE >> 8) & 0xFF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = (0x99EE & 0xFF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xBA;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xBB;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x3D;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
    goto loop_start;
}

void FileMenuQuitOkTilemap(void) {
    /* data: db $99, $E4 */;
    /* data: db $0D */;
    /* data: db $7E, $7E, $10, $14, $08, $13, $7E, $7E, $7E, $7E, $0E, $0A, $7E, $7E */;
    /* data: db $00 */;
  FileMenuQuitOkTilemap_end:;
    CopyQuitOkTilemap__dup01(); return;
}

void CopyQuitOkTilemap__dup01(void) {
    gb.regs.hl = 0xD5C2;
    gb.regs.de = 0x4CEE;
    gb.regs.c = 0x11;
    gb.regs.c = 0x12;
  CopyQuitOkTilemap_loop:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto CopyQuitOkTilemap_loop;
    return;
}

void jr_001_4E67(void) {
    func_001_4954();
    return;
}

void FileDeletionState11Handler(void) {
    gb.regs.a = gb_read(0xFFCC);
    alu_bit(5, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_001_4E9E(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x90);
    if (GET_FLAG_Z()) { jr_001_4ED9(); return; };
    if (GET_FLAG_Z()) { jr_001_4ED9(); return; };
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_001_4555(); return; };
    PlayValidationJingleAndReturn();
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x48AC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.de = 4;
  FileDeletionState11Handler_loop_4E91:;
    /* TODO: :  */;
    EnableSRAM();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto FileDeletionState11Handler_loop_4E91;
    label_001_4555(); return;
}

void jr_001_4E9E(void) {
    func_001_4EE5();
    CopyReturnToMenuTilemap();
    gb.regs.hl = 0xDC3E;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    return;
}

void CopyReturnToMenuTilemap(void) {
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = ((0x99EE >> 8) & 0xFF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = (0x99EE & 0xFF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x42;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void FileReturnToMenuTilemap(void) {
    /* data: db $99, $E4 */;
    /* data: db $0D */;
    /* data: db $11, $04, $13, $14, $11, $0D, $7E, $13, $0E, $7E, $0C, $04, $0D, $14 */;
    /* data: db $00 */;
  FileReturnToMenuTilemap_end:;
    FileReturnToMenuTilemap_alt(); return;
}

void FileReturnToMenuTilemap_alt(void) {
  FileReturnToMenuTilemap_alt_end:;
    CopyReturnToMenuTilemap__dup01(); return;
}

void CopyReturnToMenuTilemap__dup01(void) {
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x11);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0x4D86;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto CopyReturnToMenuTilemap_fileCopyEnd;
    gb.regs.de = 0x4D99;
  CopyReturnToMenuTilemap_fileCopyEnd:;
    gb.regs.c = 0x11;
    gb.regs.c = 0x12;
  CopyReturnToMenuTilemap_loop:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto CopyReturnToMenuTilemap_loop;
    return;
}

void jr_001_4ED9(void) {
    func_001_4F0C();
    func_001_4954();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_001_4EEF(); return; };
}

void func_001_4EE5(void) {
    gb.regs.a = gb_read(0xDC4E);
    switch(gb.regs.a) {
        case 0x00: DrawSaveSlot1Name(); return;
        case 0x01: DrawSaveSlot2Name(); return;
        case 0x02: DrawSaveSlot3Name(); return;
    }
}

void jr_001_4EEF(void) {
    gb.regs.a = gb_read(0xDC4E);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4DEE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xD5C2;
    gb.regs.c = 8;
  jr_001_4EEF_loop_4F03:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto jr_001_4EEF_loop_4F03;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void func_001_4F0C(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto func_001_4F0C_jr_4F1D;
    MoveSelect_playMoveSelectionJingle();
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(0xD200, gb.regs.a);
  func_001_4F0C_jr_4F1D:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { ret_001_4F3A(); return; };
    gb.regs.a = gb_read(0xD200);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 5);
    gb.regs.a = 0x1C;
    if (!GET_FLAG_Z()) goto func_001_4F0C_jr_4f76;
    gb.regs.a = 0x1E;
  func_001_4F0C_jr_4f76:;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_001_4F0C_jr_4F2E;
    gb.regs.a = 0x66;
  func_001_4F0C_jr_4F2E:;
    /* TODO: :  */;
    gb.regs.hl = 0xC00C;
    gb_write(gb.regs.hl, 0x88);
    gb.regs.hl++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xBE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    ret_001_4F3A(); return;
}

void ret_001_4F3A(void) {
    return;
}

void Data_001_4F3B(void) {
    /* data: db $B0, $B1, $B2, $B3, $B4, $B5, $B6, $B7 */;
    /* data: db $B8, $B9 */;
}

void CopyDigitsToFileScreenBG(void) {
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.c = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 6);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.b = 0;
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4F3B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4F3B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4F3B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void FileCopyEntryPoint(void) {
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: FileDeletionState0Handler(); return;
        case 0x01: FileDeletionState1Handler(); return;
        case 0x02: FileCopyState2Handler(); return;
        case 0x03: FileCopyState3Handler(); return;
        case 0x04: FileCopyState4Handler(); return;
        case 0x05: FileCopyState5Handler(); return;
        case 0x06: FileDeletionState8Handler(); return;
        case 0x07: FileDeletionState9Handler(); return;
        case 0x08: FileCopyState8Handler(); return;
        case 0x09: FileCopyState9Handler(); return;
        case 0x0A: FileCopyStateAHandler(); return;
    }
}

void FileCopyState2Handler(void) {
    gb.regs.a = 8;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC4E, gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    gb_write(0xD201, gb.regs.a);
    gb_write(0xD202, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileCopyState3Handler(void) {
    gb.regs.a = 0x0C;
    gb_write(0xD7B4, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileCopyState4Handler(void) {
    gb.regs.bc = 0x98C4;
    gb.regs.de = 0xDC28;
    DrawSaveSlotName();
    gb.regs.bc = 0x9924;
    gb.regs.de = 0xDC2D;
    DrawSaveSlotName();
    gb.regs.bc = 0x9984;
    gb.regs.de = 0xDC32;
    DrawSaveSlotName();
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileCopyState5Handler(void) {
    gb.regs.bc = 0x98CD;
    gb.regs.de = 0xDC28;
    DrawSaveSlotName();
    gb.regs.bc = 0x992D;
    gb.regs.de = 0xDC2D;
    DrawSaveSlotName();
    gb.regs.bc = 0x998D;
    gb.regs.de = 0xDC32;
    DrawSaveSlotName();
    IncrementGameplaySubtypeAndReturn(); return;
}

void FileCopyState8Handler(void) {
    MoveSelect();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto FileCopyState8Handler_jr_500E;
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_inc8(gb.regs.a);
    jr_001_5018(); return;
  FileCopyState8Handler_jr_500E:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_001_501D(); return; };
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_dec8(gb.regs.a);
    jr_001_5018(); return;
}

void jr_001_5018(void) {
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xD201, gb.regs.a);
    jr_001_501D(); return;
}

void jr_001_501D(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x90);
    if (GET_FLAG_Z()) { jr_001_5055(); return; };
    gb.regs.a = gb_read(0xD201);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_001_4555(); return; };
    gb.regs.hl = 0xDC28;
    gb.regs.b = 0;
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_5042(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto jr_001_501D_jr_503F;
    gb.regs.hl = 0xDC32;
    jr_001_5042(); return;
  jr_001_501D_jr_503F:;
    /* TODO: :  */;
    gb.regs.hl = 0xDC2D;
    jr_001_5042(); return;
}

void jr_001_5042(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl++;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl++;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl++;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl++;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_5055(); return; };
    IncrementGameplaySubtype();
    PlayValidationJingleAndReturn();
    jr_001_5055(); return;
}

void jr_001_5055(void) {
    gb.regs.a = gb_read(0xD201);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x48E4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC000;
    label_001_5067(); return;
}

void label_001_5067(void) {
    if (GET_FLAG_Z()) goto label_001_5067_jr_507D;
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  label_001_5067_jr_507D:;
    /* TODO: :  */;
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void func_001_5094(void) {
    gb.regs.a = gb_read(0xD201);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x48E4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC000;
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x14;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xBE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void Data_001_50AF(void) {
    /* data: db $98, $A4, $44, $7E, $98, $C4, $44, $7E */;
    /* data: db $99, $04, $44, $7E, $99, $24, $44, $7E */;
    /* data: db $99, $64, $44, $7E, $99, $84, $44, $7E */;
}

void Data_001_50C7(void) {
    /* data: db $98, $AD, $44, $7E, $98, $CD, $44, $7E */;
    /* data: db $99, $0D, $44, $7E, $99, $2D, $44, $7E */;
    /* data: db $99, $6D, $44, $7E, $99, $8D, $44, $7E */;
}

void FileCopyState9Handler(void) {
    MoveSelect();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto FileCopyState9Handler_jr_50F1;
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xD202, gb.regs.a);
  FileCopyState9Handler_jr_50F1:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_001_5104(); return; };
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto FileCopyState9Handler_jr_5101;
    gb.regs.a = 3;
  FileCopyState9Handler_jr_5101:;
    /* TODO: :  */;
    gb_write(0xD202, gb.regs.a);
    jr_001_5104(); return;
}

void jr_001_5104(void) {
    func_001_5094();
    gb.regs.a = gb_read(0xFFCC);
    alu_bit(5, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_001_5104_jr_5114;
    gb.regs.hl = 0xDC3E;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    label_001_514F(); return;
  jr_001_5104_jr_5114:;
    /* TODO: :  */;
    gb.regs.a = alu_and8(gb.regs.a, 0x90);
    if (GET_FLAG_Z()) goto jr_001_5104_jr_5129;
    gb.regs.a = gb_read(0xD202);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_001_4555(); return; };
    PlayValidationJingleAndReturn();
    IncrementGameplaySubtype();
    CopyQuitOkTilemap(); return;
  jr_001_5104_jr_5129:;
    /* TODO: :  */;
    func_001_5175();
    func_001_512C(); return;
}

void func_001_512C(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { label_001_514F(); return; };
    gb.regs.a = gb_read(0xD201);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x50AF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xD5C2;
    gb.regs.c = 8;
  func_001_512C_loop_5146:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_001_512C_loop_5146;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void label_001_514F(void) {
    gb.regs.a = gb_read(0xD201);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto label_001_514F_jr_5163;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_001_516C(); return; };
    gb.regs.bc = 0x98C4;
    gb.regs.de = 0xDC28;
    DrawSaveSlotName(); return;
  label_001_514F_jr_5163:;
    /* TODO: :  */;
    gb.regs.bc = 0x9924;
    gb.regs.de = 0xDC2D;
    DrawSaveSlotName(); return;
}

void jr_001_516C(void) {
    gb.regs.bc = 0x9984;
    gb.regs.de = 0xDC32;
    DrawSaveSlotName(); return;
}

void func_001_5175(void) {
    gb.regs.a = gb_read(0xD202);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x48E4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xD202);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_001_51C3(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto func_001_5175_jr_51A8;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC008;
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x58;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x60;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  func_001_5175_jr_51A8:;
    /* TODO: :  */;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC008;
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x58;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x60;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void label_001_51C3(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC008;
    label_001_5067(); return;
}

void func_001_51CE(void) {
    gb.regs.a = gb_read(0xD202);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x48E4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC008;
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x5C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xBE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void FileCopyStateAHandler(void) {
    func_001_5094();
    func_001_51CE();
    func_001_4F0C();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x90);
    if (GET_FLAG_Z()) { jr_001_5235(); return; };
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_001_4555(); return; };
    PlayValidationJingleAndReturn();
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x49FE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.hl++;
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x49FE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl++;
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.de = 5;
  FileCopyStateAHandler_loop_5224:;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    EnableSRAM();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto FileCopyStateAHandler_loop_5224;
    label_001_4555(); return;
}

void jr_001_5235(void) {
    gb.regs.a = gb_read(0xFFCC);
    alu_bit(5, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_001_5235_jr_5249;
    gb.regs.hl = 0xDC3E;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    CopyReturnToMenuTilemap();
    label_001_526F(); return;
  jr_001_5235_jr_5249:;
    /* TODO: :  */;
    func_001_512C();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { label_001_526F(); return; };
    gb.regs.a = gb_read(0xD202);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x50C7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = (wDrawCommand_data + 5);
    gb.regs.c = 8;
  jr_001_5235_loop_5266:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto jr_001_5235_loop_5266;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void label_001_526F(void) {
    gb.regs.a = gb_read(0xD202);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto label_001_526F_jr_5283;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_001_528C(); return; };
    gb.regs.bc = 0x98CD;
    gb.regs.de = 0xDC28;
    DrawSaveSlotName(); return;
  label_001_526F_jr_5283:;
    /* TODO: :  */;
    gb.regs.bc = 0x992D;
    gb.regs.de = 0xDC2D;
    DrawSaveSlotName(); return;
}

void jr_001_528C(void) {
    gb.regs.bc = 0x998D;
    gb.regs.de = 0xDC32;
    DrawSaveSlotName(); return;
}

void MaxHeartsToStartingHealthTable(void) {
    /* data: db 3 FULL_HEARTS */;
    /* data: db 3 FULL_HEARTS */;
    /* data: db 3 FULL_HEARTS */;
    /* data: db 3 FULL_HEARTS */;
    /* data: db 3 FULL_HEARTS */;
    /* data: db 3 FULL_HEARTS */;
    /* data: db 5 FULL_HEARTS */;
    /* data: db 5 FULL_HEARTS */;
    /* data: db 5 FULL_HEARTS */;
    /* data: db 5 FULL_HEARTS */;
    /* data: db 7 FULL_HEARTS */;
    /* data: db 7 FULL_HEARTS */;
    /* data: db 7 FULL_HEARTS */;
    /* data: db 7 FULL_HEARTS */;
    /* data: db 10 FULL_HEARTS */;
}

void LoadSavedFile(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF9, gb.regs.a);
    gb.regs.a = gb_read(0xDC02);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadSavedFile_skipHealthReset;
    gb.regs.a = gb_read(0xDC03);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x517B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC02, gb.regs.a);
  LoadSavedFile_skipHealthReset:;
    gb.regs.hl = 0xDC79;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, 0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_001_531D(); return; };
    gb.regs.a = gb_read(0xDC4E);
  LoadSavedFile_jr_52C7:;
    /* TODO: :  */;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x48AC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.hl++;
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.hl = 0xD8B5;
    gb.regs.de = 0x0380;
  LoadSavedFile_loopLoadMain:;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto LoadSavedFile_loopLoadMain;
    gb.regs.de = 0xDC03;
    gb.regs.hl = 0xDC02;
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto LoadSavedFile_min;
    gb.regs.a = 3;
  LoadSavedFile_min:;
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_C()) goto LoadSavedFile_max;
    gb.regs.a = 0x0E;
  LoadSavedFile_max:;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) goto LoadSavedFile_prepareLoadDX1;
    gb_write(gb.regs.hl, gb.regs.a);
  LoadSavedFile_prepareLoadDX1:;
    gb.regs.hl = 0xDE82;
    gb.regs.de = 5;
  LoadSavedFile_loopLoadDX1:;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto LoadSavedFile_loopLoadDX1;
    gb.regs.hl = 0xDE88;
    gb.regs.de = 0x20;
  LoadSavedFile_loopLoadDX2:;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto LoadSavedFile_loopLoadDX2;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(0xDCB7, gb.regs.a);
    gb.regs.bc++;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(0xDCB4, gb.regs.a);
    gb.regs.bc++;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(0xDCB5, gb.regs.a);
    jr_001_531D(); return;
}

void jr_001_531D(void) {
    gb.regs.a = 0x0B;
    gb_write(0xDC3D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC11C, gb.regs.a);
    gb_write(0xFF9C, gb.regs.a);
    gb_write(0xDC3B, gb.regs.a);
    gb_write(0xDC3C, gb.regs.a);
    gb_write(0xDC38, gb.regs.a);
    gb_write(0xDC37, gb.regs.a);
    gb_write(0xDC3A, gb.regs.a);
    gb_write(0xDC39, gb.regs.a);
    gb.regs.a = gb_read(0xDC17);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_001_531D_setStartingPoint;
    gb.regs.a = 0x16;
    gb_write(0xDC17, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xDC18, gb.regs.a);
    gb.regs.a = 0x27;
    gb_write(0xDC19, gb.regs.a);
  jr_001_531D_setStartingPoint:;
    gb.regs.a = gb_read(0xDC0A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_001_531D_initNewGame;
    gb_write(0xDC45, gb.regs.a);
    gb.regs.a = gb_read(0xDC0B);
    gb_write(0xDC46, gb.regs.a);
    gb.regs.a = gb_read(0xDC09);
    gb_write(0xFFF6, gb.regs.a);
    gb_write(0xDC44, gb.regs.a);
    gb.regs.a = gb_read(0xDC08);
    gb_write(0xFFF7, gb.regs.a);
    gb.regs.a = gb_read(0xDC0C);
    gb_write(0xDC56, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF9, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = gb_read(0xDC07);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xDC4D, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_001_531D_finish;
    gb.regs.a = 4;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF9E, gb.regs.a);
  jr_001_531D_finish:;
    gb.regs.a = 2;
    gb_write(0xD7B4, gb.regs.a);
    return;
  jr_001_531D_initNewGame:;
    gb.regs.a = 0x30;
    gb_write(0xDC20, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xDC1F, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xDC1E, gb.regs.a);
    gb.regs.a = 0xA3;
    gb_write(0xDC44, gb.regs.a);
    gb_write(0xFFF6, gb.regs.a);
    gb_write(0xDBFC, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDC4D, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xFFF7, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xDC45, gb.regs.a);
    gb.regs.a = 0x60;
    gb_write(0xDC46, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = 0x16;
    gb_write(0xDC17, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xDC18, gb.regs.a);
    gb.regs.a = 0x27;
    gb_write(0xDC19, gb.regs.a);
    goto jr_001_531D_finish;
}

void Data_001_53D8(void) {
    /* data: db $9D, $9D, $9D, $FF, $9D, $9D, $9D, $FF */;
    /* data: db $9D, $9D, $9C, $FF, $9D, $9D, $9C, $FF */;
}

void Data_001_53E8(void) {
    /* data: db $32, $32, $09, $FF, $2E, $2E, $09, $FF */;
    /* data: db $8A, $32, $E9, $FF, $8A, $2E, $E9, $FF */;
}

void Data_001_53F8(void) {
    /* data: db $C8, $C8, $00, $FF, $C8, $C8, $00, $FF */;
    /* data: db $48, $C8, $00, $FF, $48, $C8, $00, $FF */;
}

void Data_001_5408(void) {
    /* data: db $7F, $7F, $BA, $FF, $7F, $7F, $BA, $FF */;
    /* data: db $7F, $7F, $BA, $FF, $7F, $7F, $BA, $FF */;
}

void Data_001_5418(void) {
    /* data: db $00, $00, $00, $FF, $00, $00, $00, $FF */;
    /* data: db $9D, $9D, $FF, $00, $9D, $9D, $9D, $FF */;
    /* data: db $9D, $9C, $FF, $00, $9D, $9C, $9C, $FF */;
    /* data: db $9D, $9D, $9C, $9C, $FF, $00, $00, $00 */;
    /* data: db $00, $00, $00, $9D, $9D, $9C, $9C, $9C */;
    /* data: db $9C, $FF, $00, $00, $00, $00, $9D, $9D */;
    /* data: db $9C, $9C, $9D, $9D, $9C, $9C, $FF, $00 */;
    /* data: db $00, $9D, $9D, $9C, $9C, $9D, $9D, $9C */;
    /* data: db $9C, $9C, $9C, $FF */;
}

void Data_001_545C(void) {
    /* data: db $00, $00, $00, $FF, $00, $00, $00, $FF */;
    /* data: db $0D, $12, $FF, $00, $0D, $11, $12, $FF */;
    /* data: db $92, $F2, $FF, $00, $92, $F1, $F2, $FF */;
    /* data: db $8D, $92, $ED, $F2, $FF, $00, $00, $00 */;
    /* data: db $00, $00, $00, $8D, $92, $ED, $F2, $F1 */;
    /* data: db $F2, $FF, $00, $00, $00, $00, $8D, $92 */;
    /* data: db $ED, $F2, $91, $92, $F1, $F2, $FF, $00 */;
    /* data: db $00, $8D, $92, $ED, $F2, $91, $92, $EC */;
    /* data: db $ED, $F1, $F2, $FF */;
}

void Data_001_54A0(void) {
    /* data: db $00, $00, $00, $FF, $00, $00, $00, $FF */;
    /* data: db $E8, $E9, $FF, $00, $E8, MINIMAP_VAR_0, MINIMAP_VAR_1, $FF */;
    /* data: db $E8, $E9, $FF, $00, $E8, $EC, MINIMAP_VAR_2, $FF */;
    /* data: db $E8, $EA, $E9, $EB, $FF, $00, $00, $00 */;
    /* data: db $00, $00, $00, $E8, $EA, $E9, $EB, $EC */;
    /* data: db $E8, $FF, $00, $00, $00, $00, $E8, $EA */;
    /* data: db $E9, $EB, $EC, $E8, $EC, $E9, $FF, $00 */;
    /* data: db $00, $E8, $EA, $E9, $EB, $EC, $E8, $EC */;
    /* data: db $EA, $EC, $E9, $FF */;
}

void Data_001_54E4(void) {
    /* data: db HIGH(vBGMap1 + $10A), HIGH(vBGMap1 + $EA) */;
}

void Data_001_54E6(void) {
    /* data: db LOW(vBGMap1 + $10A), LOW(vBGMap1 + $EA) */;
}

void Data_001_54E8(void) {
    /* data: db $9C, $E9, $49, $7F, $9D, $09, $49, $7F, $9D, $29, $49, $7F, $9D, $49, $49, $7F */;
    /* data: db $9D, $69, $49, $7F, $9D, $89, $49, $7F, $9D, $A9, $49, $7F, $9D, $C9, $49, $7F */;
    /* data: db $9D, $E9, $49, $7F, $9E, $09, $49, $7F, $00 */;
}

void CreateMinimapTilemap(void) {
    gb.regs.hl = 0x54E8;
    gb.regs.de = 0xD705;
    gb.regs.c = 0x29;
  CreateMinimapTilemap_copyLoop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.de++;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreateMinimapTilemap_copyLoop;
    gb_push16(gb.regs.de);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.b = gb.regs.a;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xDC58);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreateMinimapTilemap_jr_001_5543;
  CreateMinimapTilemap_loop:;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.c = gb.regs.a;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreateMinimapTilemap_loop;
    gb.regs.b = 0;
  CreateMinimapTilemap_jr_001_5543:;
    gb.regs.hl = gb_pop16();
  CreateMinimapTilemap_drawEmptyHeartsLoop:;
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x53D8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0x53E8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.hl = 0x53F8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.hl = 0x5408;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = gb_pop16();
    func_001_5619();
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x53D8;
    gb.regs.bc++;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.hl++;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto CreateMinimapTilemap_drawEmptyHeartsLoop;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.b = gb.regs.a;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xDC58);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreateMinimapTilemap_jr_001_55E;
  CreateMinimapTilemap_loop3:;
    gb.regs.b = 0;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.c = gb.regs.a;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreateMinimapTilemap_loop3;
    gb.regs.a = gb_read(0xDC58);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto CreateMinimapTilemap_loop4;
    gb.regs.a = gb_read(0xDC58);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto CreateMinimapTilemap_jr_001_55AF;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    goto CreateMinimapTilemap_loop4;
  CreateMinimapTilemap_jr_001_55AF:;
    gb.regs.a = gb_read(0xDC58);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
  CreateMinimapTilemap_jr_001_55B5:;
    gb.regs.b = 0;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    gb.regs.c = gb.regs.a;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreateMinimapTilemap_jr_001_55B5;
  CreateMinimapTilemap_loop4:;
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x5418;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0x545C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.hl = 0x54A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = gb_pop16();
    func_001_5619();
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x5418;
    gb.regs.bc++;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.hl++;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto CreateMinimapTilemap_loop4;
  CreateMinimapTilemap_jr_001_55E:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.b = gb.regs.a;
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xDC58);
    alu_bit(5, gb.regs.a);
    if (GET_FLAG_Z()) goto CreateMinimapTilemap_jr_001_55F5;
    gb.regs.bc++;
  CreateMinimapTilemap_jr_001_55F5:;
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x54E4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0x54E6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.a = alu_add8(gb.regs.a, 0xB1);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = gb_pop16();
    func_001_5619();
    gb_push16(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.hl++;
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void func_001_5619(void) {
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD9);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFDA);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void WorldMapEntryPoint(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto WorldMapEntryPoint_ignoreInputsEnd;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFCB, gb.regs.a);
    gb_write(0xFFCC, gb.regs.a);
    gb.regs.a = gb_read(0xDC3E);
  WorldMapEntryPoint_ignoreInputsEnd:;
    switch(gb.regs.a) {
        case 0x00: WorldMapState0Handler(); return;
        case 0x01: WorldMapState1Handler(); return;
        case 0x02: WorldMapState2Handler(); return;
        case 0x03: WorldMapState3Handler(); return;
        case 0x04: WorldMapState4Handler(); return;
        case 0x05: WorldMapInteractiveHandler(); return;
        case 0x06: FileSaveFadeOut(); return;
    }
}

void WorldMapState0Handler(void) {
    IncrementGameplaySubtype();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { WorldMapState1Handler(); return; };
    gb.regs.hl = 0xDCB8;
    gb.regs.c = 0x80;
    gb.regs.ime = false;
    gb.regs.a = 3;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_001_5674(); return; };
  WorldMapState0Handler_loop_5660:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = 3;
    gb_write(0xFF70, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl++;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WorldMapState0Handler_loop_5660;
    gb.regs.a = 1;
    gb_write(0xD200, gb.regs.a);
    jr_001_5674(); return;
}

void jr_001_5674(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.ime = true;
    WorldMapState1Handler(); return;
}

void WorldMapState1Handler(void) {
    DrawLinkSprite();
    AnimateEntitiesAndRestoreBank01();
    func_1A22();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { ret_001_56F3(); return; };
    gb.regs.a = 3;
    gb_write(0xFFA9, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFFAA, gb.regs.a);
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xC1BF, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xC14F, gb.regs.a);
    gb_write(0xC1B2, gb.regs.a);
    gb_write(0xC1B3, gb.regs.a);
    gb.regs.a = gb_read(0xDBFC);
    gb_write(0xDC5C, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x57DE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto WorldMapState1Handler_jr_56D9;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto WorldMapState1Handler_jr_56D9;
    gb.regs.a = gb_read(0xC5A2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0;
    if (!GET_FLAG_Z()) goto WorldMapState1Handler_jr_56D9;
    gb.regs.hl = 0xD8B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    gb.regs.a = 0;
    if (GET_FLAG_Z()) goto WorldMapState1Handler_jr_56D9;
    gb.regs.a = 1;
  WorldMapState1Handler_jr_56D9:;
    /* TODO: :  */;
    gb_write(0xC1B1, gb.regs.a);
    gb.regs.a = gb_read(0xDC5C);
    gb_write(0xC1B4, gb.regs.a);
    gb.regs.a = gb_read(0xFF40);
    gb.regs.a = alu_and8(gb.regs.a, -33);
    gb_write(0xD7B2, gb.regs.a);
    gb_write(0xFF40, gb.regs.a);
    func_001_5888();
    gb.regs.a = 8;
    gb_write(0xD7B4, gb.regs.a);
    ret_001_56F3(); return;
}

void ret_001_56F3(void) {
    return;
}

void WorldMapState2Handler(void) {
    gb.regs.a = 0x0B;
    gb_write(0xD7B3, gb.regs.a);
    IncrementGameplaySubtype();
    return;
}

void WorldMapState3Handler(void) {
    gb.regs.a = 0x0E;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    IncrementGameplaySubtype();
    return;
}

void WorldMapState4Handler(void) {
    func_1A39();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto WorldMapState4Handler_return;
    IncrementGameplaySubtype();
    PlayValidationJingle();
  WorldMapState4Handler_return:;
    return;
}

void WorldMapInteractiveHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_001_5818(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_001_57B7(); return; };
    gb.regs.a = gb_read(0xDC5C);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x57DE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_576F(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    if (!GET_FLAG_Z()) goto WorldMapInteractiveHandler_jr_5766;
    gb.regs.a = gb_read(0xC5A2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_001_576F(); return; };
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xDC5C);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xD8B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { jr_001_576F(); return; };
  WorldMapInteractiveHandler_jr_5766:;
    /* TODO: :  */;
    gb.regs.d = 0;
    gb.regs.hl = 0x578E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    jr_001_5792(); return;
}

void jr_001_576F(void) {
    gb.regs.a = gb_read(0xDC5C);
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_Z()) goto jr_001_576F_jr_577A;
    alu_cp8(gb.regs.a, 0x34);
    if (!GET_FLAG_Z()) { jr_001_577E(); return; };
  jr_001_576F_jr_577A:;
    /* TODO: :  */;
    /* ld_dialog_low a, Dialog076 */;
    jr_001_5792(); return;
}

void jr_001_577E(void) {
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC5C);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x38);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x574E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    jr_001_5792(); return;
}

void jr_001_5792(void) {
    OpenDialogInTable0();
    gb.regs.a = gb_read(0xC173);
    alu_cp8(gb.regs.a, 0xA7);
    if (GET_FLAG_Z()) goto jr_001_5792_jr_57A3;
    gb.regs.a = gb_read(0xDC5C);
    alu_cp8(gb.regs.a, 0x37);
    if (!GET_FLAG_Z()) { jr_001_57A8(); return; };
  jr_001_5792_jr_57A3:;
    /* TODO: :  */;
    gb.regs.a = 1;
    gb_write(0xC112, gb.regs.a);
    jr_001_57A8(); return;
}

void jr_001_57A8(void) {
    gb.regs.a = gb_read(0xDC5C);
    alu_cp8(gb.regs.a, 0x70);
    gb.regs.a = 1;
    if (!GET_FLAG_C()) goto jr_001_57A8_jr_57B3;
    gb.regs.a = 0x81;
  jr_001_57A8_jr_57B3:;
    /* TODO: :  */;
    gb_write(0xC19F, gb.regs.a);
    return;
}

void jr_001_57B7(void) {
    gb.regs.a = gb_read(3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_001_57B7_jr_57FA;
    gb.regs.a = gb_read(0xFFCB);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_Z()) goto jr_001_57B7_jr_57FA;
    gb.regs.a = 0x0B;
    gb_write(0xDC3D, gb.regs.a);
    ApplyMapFadeOutTransitionWithNoise();
    gb.regs.a = 0;
    gb_write(0xD401, gb.regs.a);
    gb_write(0xD402, gb.regs.a);
    gb.regs.a = gb_read(0xDC5C);
    gb_write(0xD403, gb.regs.a);
    gb.regs.a = 0x48;
    gb_write(0xD404, gb.regs.a);
    gb.regs.a = 0x52;
    gb_write(0xD405, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb_write(0xD416, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0xDC3E, gb.regs.a);
    return;
  jr_001_57B7_jr_57FA:;
    /* TODO: :  */;
    gb.regs.e = 0x40;
    gb.regs.a = gb_read(3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_001_57B7_jr_5804;
    gb.regs.e = 0x60;
  jr_001_57B7_jr_5804:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) { label_001_5818(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    IncrementGameplaySubtype();
    label_001_5818(); return;
}

void label_001_5818(void) {
    func_001_58A8();
    func_001_5A71();
    func_001_5C49();
    return;
}

void PeachPictureStateAHandler(void) {
    func_6A7C();
    FileSaveFadeOut(); return;
}

void FileSaveFadeOut(void) {
    func_1A22();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { ret_001_58A7(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_5854(); return; };
    gb.regs.hl = 0xDCB8;
    gb.regs.c = 0x80;
    gb.regs.ime = false;
  FileSaveFadeOut_loop_583A:;
    gb.regs.a = 3;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl++;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto FileSaveFadeOut_loop_583A;
    gb.regs.a = 3;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.ime = true;
    jr_001_5854(); return;
}

void jr_001_5854(void) {
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC50A, gb.regs.a);
    gb_write(0xC116, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0xFFA9, gb.regs.a);
    gb.regs.a = 0x70;
    gb_write(0xFFAA, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xDC3D, gb.regs.a);
    gb_write(0xFFBC, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 6;
    if (!GET_FLAG_Z()) goto jr_001_5854_jr_5885;
    gb.regs.a = 7;
  jr_001_5854_jr_5885:;
    /* TODO: :  */;
    gb_write(0xD7B3, gb.regs.a);
    func_001_5888(); return;
}

void func_001_5888(void) {
    gb.regs.hl = 0xC124;
    gb.regs.e = 0;
  func_001_5888_loop_588D:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto func_001_5888_loop_588D;
}

void InitializeInventoryBar(void) {
    gb.regs.a = 0x80;
    gb_write(0xDC42, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0xFF4B, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xC150, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC14F, gb.regs.a);
    ret_001_58A7(); return;
}

void ret_001_58A7(void) {
    return;
}

void func_001_58A8(void) {
    gb.regs.hl = 0xC09C;
    gb.regs.a = gb_read(0xDBFC);
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x78);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xDBFC);
    gb.regs.a = alu_swap(gb.regs.a);
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x78);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0x3E);
    gb.regs.hl++;
  func_001_58A8_endIfGBC:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void MapLocationNamesTable(void) {
    /* data: db $6C, $6C, $6C, $6B, $6C, $6C, $6C, $6C */;
    /* data: db $76, $76, $79, $79, $79, $79, $79, $79 */;
    /* data: db $6A, $6A, $72, $7A, $78, $78, $71, $71 */;
    /* data: db $6A, $6A, $72, $70, $78, $78, $71, $71 */;
    /* data: db $6A, $6E, $69, $69, $69, $69, $77, $71 */;
    /* data: db $6E, $6E, $69, $69, $69, $69, $77, $77 */;
    /* data: db $7B, $7B, $6D, $62, $74, $74, $6F, $68 */;
    /* data: db $73, $73, $73, $74, $74, $74, $75, $68 */;
}

void MapSpecialLocationNamesLookupTable(void) {
    /* data: db 0, $D9, $C0, $C1, $C2, $C3, $C4, $C5, $C6, $C7, $C8, $C9, $CA, $CB, $CC, $CD */;
    /* data: db 0, $56, $57, $58, $59, $5A, $5B, $5C, $5D,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0, $7C, $67,   0,   0, $80, $65,   0, $64, $88, $7D,   0,   0,   0,   0,   0 */;
    /* data: db 0, $5E, $5F, $7F, $7E, $7D, $82, $84, $85, $86, $87, $81, $66, $A7, $5E, $63 */;
    /* data: db 0, $61,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0 */;
}

void MapSpecialLocationNamesTable(void) {
    /* data: db 0,   0,   0,   0,   0,   0, $3E,   0, $0E,   0, $39,   0,   0,   0, $17,   0 */;
    /* data: db $18, $3D,   0,   0,   0,   0, $06, $0C,   0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0, $12,   0,   0,   0, $07,   0,   0, $14,   0,   0,   0,   0 */;
    /* data: db $33, $3D,   0,   0,   0,   0, $05, $2A,   0,   0,   0,   0,   0,   0,   0, $29 */;
    /* data: db 0, $03,   0,   0,   0, $25,   0,   0,   0,   0,   0, $3D,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0, $0D, $22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db $02, $21, $3B, $36,   0,   0,   0,   0, $3D,   0, $37,   0, $16,   0,   0,   0 */;
    /* data: db 0,   0,   0, $26,   0,   0,   0,   0,   0,   0,   0, $09, $0B, $09,   0,   0 */;
    /* data: db 0, $35, $3C,   0, $3D,   0,   0,   0,   0,   0,   0,   0, $0A,   0,   0,   0 */;
    /* data: db $3A, $34, $3D, $28,   0, $13, $07,   0,   0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0, $04, $11,   0,   0, $38,   0,   0, $15,   0, $3D,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0, $41,   0,   0,   0,   0, $3D,   0,   0,   0,   0,   0, $08,   0 */;
    /* data: db 0,   0, $01,   0,   0,   0, $3F,   0,   0,   0,   0,   0,   0,   0,   0,   0 */;
}

void func_001_5A59(void) {
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x57DE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0x578E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    OpenDialogInTable0(); return;
}

void Data_001_5A6B(void) {
    /* data: db 0, 1, $FF */;
}

void Data_001_5A6E(void) {
    /* data: db 0, $F0, $10 */;
}

void func_001_5A71(void) {
    gb.regs.a = gb_read(0xDC5C);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xC1B3);
    gb.regs.hl = 0xC1B2;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC19F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { label_001_5B3F(); return; };
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0xC182;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto func_001_5A71_jr_5A92;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_001_5A9D(); return;
  func_001_5A71_jr_5A92:;
    /* TODO: :  */;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_Z()) { jr_001_5A9D(); return; };
    gb_write(gb.regs.hl, 0x15);
    jr_001_5AA0(); return;
}

void jr_001_5A9D(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.c = gb.regs.a;
    jr_001_5AA0(); return;
}

void jr_001_5AA0(void) {
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5A6B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xDC5C);
    gb.regs.d = gb.regs.a;
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb_write(0xDC5C, gb.regs.a);
    gb.regs.a = gb.regs.c;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5A6E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xDC5C);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFD7;
    gb_write(0xDC5C, gb.regs.a);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { label_001_5B3F(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD8B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC5A2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_001_5AA0_jr_5AF5;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto jr_001_5AA0_jr_5AF5;
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_001_5AA0_jr_5AF5;
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xDC5C, gb.regs.a);
    label_001_5B3F(); return;
  jr_001_5AA0_jr_5AF5:;
    /* TODO: :  */;
    MoveSelect_playMoveSelectionJingle();
    gb.regs.hl = 0x57DE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_5B30(); return; };
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.c = gb.regs.a;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_001_5AA0_jr_5B19;
    gb.regs.a = gb_read(0xC5A2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_001_5B30(); return; };
    gb.regs.hl = 0xD8B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { jr_001_5B30(); return; };
  jr_001_5AA0_jr_5B19:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xC1B1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_001_5AA0_jr_5B24;
    gb.regs.a = 0x10;
    gb_write(0xC1B2, gb.regs.a);
  jr_001_5AA0_jr_5B24:;
    /* TODO: :  */;
    gb.regs.a = gb.regs.c;
    gb_write(0xC1B1, gb.regs.a);
    gb.regs.a = gb_read(0xDC5C);
    gb_write(0xC1B4, gb.regs.a);
    label_001_5B3F(); return;
}

void jr_001_5B30(void) {
    gb.regs.a = gb_read(0xC1B1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_001_5B3F(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1B1, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xC1B3, gb.regs.a);
    label_001_5B3F(); return;
}

void label_001_5B3F(void) {
    gb.regs.hl = 0xC080;
    gb.regs.a = gb_read(0xDC5C);
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x78);
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC5C);
    gb.regs.a = alu_swap(gb.regs.a);
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x78);
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0xF0);
    gb.regs.hl++;
    gb_write(gb.regs.hl, 0);
    gb.regs.hl++;
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0xF0);
    gb.regs.hl++;
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto label_001_5B3F_ret_5BAC;
    gb.regs.hl = 0xC088;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_add8(gb.regs.a, 0xF6);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xF6;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_add8(gb.regs.a, 0x13);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xF6;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0xF6);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xF8;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xF8;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(gb.regs.hl++, gb.regs.a);
  label_001_5B3F_ret_5BAC:;
    return;
}

void Data_001_5BAD(void) {
    /* data: db $F8, $F8, $F2, 4, $F8, 0, $F4, 4, $F8, 8, $F4, $24, $F8, $10, $F2, $24 */;
    /* data: db 8, $F8, $F2, $44, 8, 0, $F4, $44, 8, 8, $F4, $64, 8, $10, $F2, $64 */;
    /* data: db $FA, $FA, $F2, 4, $FA, 2, $F4, 4, $FA, 6, $F4, $24, $FA, $E, $F2, $24 */;
    /* data: db 6, $FA, $F2, $44, 6, 2, $F4, $44, 6, 6, $F4, $64, 6, $E, $F2, $64 */;
    /* data: db $FC, $FC, $F2, 4, $FC, 4, $F4, 4, $FC, 4, $F4, $24, $FC, $C, $F2, $24 */;
    /* data: db 4, $FC, $F2, $44, 4, 4, $F4, $44, 4, 4, $F4, $64, 4, $C, $F2, $64 */;
    /* data: db $FE, $FE, $F2, 4, $FE, 4, $F4, 4, $FE, 4, $F4, $24, $FE, $A, $F2, $24 */;
    /* data: db 2, $FE, $F2, $44, 2, 4, $F4, $44, 2, 4, $F4, $64, 2, $A, $F2, $64 */;
}

void Data_001_5C2D(void) {
    /* data: db $20, 1, $22 */;
}

void jr_001_5C30(void) {
    /* data: db 1, $24, 6, $26, 6, $28, 7, $2A, 7, $2C, 5, $2E, 5, $2C */;
}

void jr_001_5C3E(void) {
    /* data: db 5, $2E, 5 */;
}

void Data_001_5C41(void) {
    /* data: db $28, $78, $28, $78 */;
}

void Data_001_5C45(void) {
    /* data: db $28, $28, $78, $78 */;
}

void func_001_5C49(void) {
    gb.regs.a = gb_read(0xC340);
    gb_push16(gb.regs.af);
    func_001_5C55();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xC340, gb.regs.a);
    return;
}

void func_001_5C55(void) {
    gb.regs.a = gb_read(0xC1B3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_001_5C55_jr_5C62;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC1B3, gb.regs.a);
    alu_cpl();
    jr_001_5C6C(); return;
  func_001_5C55_jr_5C62:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xC1B2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_5C72(); return; };
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC1B2, gb.regs.a);
    jr_001_5C6C(); return;
}

void jr_001_5C6C(void) {
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    jr_001_5C7B(); return;
}

void jr_001_5C72(void) {
    gb.regs.a = gb_read(0xC1B1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_001_5D13(); return; };
    gb.regs.a = 0;
    jr_001_5C7B(); return;
}

void jr_001_5C7B(void) {
    gb_write(0xC1B0, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xC340, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC123, gb.regs.a);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xC1B4);
    alu_cp8(gb.regs.a, 0x70);
    if (GET_FLAG_C()) goto jr_001_5C7B_jr_5C9C;
    gb.regs.e = 2;
  jr_001_5C7B_jr_5C9C:;
    /* TODO: :  */;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto jr_001_5C7B_jr_5CA3;
    gb.regs.e = alu_inc8(gb.regs.e);
  jr_001_5C7B_jr_5CA3:;
    /* TODO: :  */;
    gb.regs.d = 0;
    gb.regs.hl = 0x5C41;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x5C45;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xC1B0);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
  jr_001_5C7B_jr_5CBB:;
    /* TODO: :  */;
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
  jr_001_5C7B_jr_5CBD:;
    /* TODO: :  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5BAD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = 8;
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF5, gb.regs.a);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = gb_read(0xC1B0);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) { label_001_5D13(); return; };
    gb.regs.a = gb_read(0xC1B1);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) { label_001_5D13(); return; };
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0xC030;
    gb.regs.a = gb_read(0xFFEC);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = 0x5C2D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFEC);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
    label_001_5D13(); return;
}

void label_001_5D13(void) {
    return;
}

void SaveSlot1HeartsDrawData(void) {
    /* data: db $98 */;
    /* data: db $CB */;
    /* data: db $06 */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $98 */;
    /* data: db $EB */;
    /* data: db $06 */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
  SaveSlot1HeartsDrawData_end:;
    /* data: db $00 */;
    SaveSlot2HeartsDrawData(); return;
}

void SaveSlot2HeartsDrawData(void) {
    /* data: db $99 */;
    /* data: db $2B */;
    /* data: db $06 */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $99 */;
    /* data: db $4B */;
    /* data: db $06 */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
  SaveSlot2HeartsDrawData_end:;
    /* data: db $00 */;
    SaveSlot3HeartsDrawData(); return;
}

void SaveSlot3HeartsDrawData(void) {
    /* data: db $99 */;
    /* data: db $8B */;
    /* data: db $06 */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $99 */;
    /* data: db $AB */;
    /* data: db $06 */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
  SaveSlot3HeartsDrawData_end:;
    /* data: db $00 */;
    BuildSaveSlotHeartsDrawCommand(); return;
}

void BuildSaveSlotHeartsDrawCommand(void) {
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.de);
    gb.regs.bc = 0x5B8B;
    gb.regs.a = gb_read(0xFFDB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BuildSaveSlotHeartsDrawCommand_initCopyDrawDataLoop;
    gb.regs.bc = 0x5BA0;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto BuildSaveSlotHeartsDrawCommand_initCopyDrawDataLoop;
    gb.regs.bc = 0x5BB5;
  BuildSaveSlotHeartsDrawCommand_initCopyDrawDataLoop:;
    /* TODO: :  */;
    gb.regs.e = 0x15;
  BuildSaveSlotHeartsDrawCommand_copyDrawDataLoop:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto BuildSaveSlotHeartsDrawCommand_copyDrawDataLoop;
    gb.regs.de = gb_pop16();
    gb.regs.hl = wDrawCommand_data;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 0;
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BuildSaveSlotHeartsDrawCommand_drawEmptyHeartsLoop;
    gb_write(0xFFD7, gb.regs.a);
  BuildSaveSlotHeartsDrawCommand_drawFullHeartsLoop:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFD7, gb.regs.a);
    if (GET_FLAG_C()) goto BuildSaveSlotHeartsDrawCommand_drawHalfHeart;
    gb.regs.a = 0xAE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto BuildSaveSlotHeartsDrawCommand_drawFullHeartsLoopContinue;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, (wDrawCommand_data - 0xD5C2));
    gb.regs.l = gb.regs.a;
  BuildSaveSlotHeartsDrawCommand_drawFullHeartsLoopContinue:;
    /* TODO: :  */;
    goto BuildSaveSlotHeartsDrawCommand_drawFullHeartsLoop;
  BuildSaveSlotHeartsDrawCommand_drawHalfHeart:;
    /* TODO: :  */;
    gb.regs.a = alu_add8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto BuildSaveSlotHeartsDrawCommand_drawEmptyHeartsLoop;
    gb.regs.a = 0xAE;
    gb_write(gb.regs.hl++, gb.regs.a);
    goto BuildSaveSlotHeartsDrawCommand_nextEmptyHeart;
  BuildSaveSlotHeartsDrawCommand_drawEmptyHeartsLoop:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFDA);
    alu_cp8(gb.regs.a, gb.regs.c);
    if (GET_FLAG_Z()) goto BuildSaveSlotHeartsDrawCommand_return;
    gb.regs.a = 0xAE;
    gb_write(gb.regs.hl++, gb.regs.a);
  BuildSaveSlotHeartsDrawCommand_nextEmptyHeart:;
    /* TODO: :  */;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto BuildSaveSlotHeartsDrawCommand_drawEmptyHeartsLoopContinue;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, (wDrawCommand_data - 0xD5C2));
    gb.regs.l = gb.regs.a;
  BuildSaveSlotHeartsDrawCommand_drawEmptyHeartsLoopContinue:;
    /* TODO: :  */;
    goto BuildSaveSlotHeartsDrawCommand_drawEmptyHeartsLoop;
  BuildSaveSlotHeartsDrawCommand_return:;
    /* TODO: :  */;
    return;
}

void func_5DC0(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.de = 0xDC4F;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.b = 1;
    gb.regs.c = 0;
    gb.regs.hl = 0xDC28;
    jr_001_5DCC(); return;
}

void jr_001_5DCC(void) {
    loop_start: ;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_001_5DCC_jr_5DD3;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.b);
    gb_write(gb.regs.de, gb.regs.a);
  jr_001_5DCC_jr_5DD3:;
    /* TODO: :  */;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto jr_001_5DCC_jr_5DDB;
    gb.regs.b = 2;
  jr_001_5DCC_jr_5DDB:;
    /* TODO: :  */;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto jr_001_5DCC_jr_5DE1;
    gb.regs.b = 4;
  jr_001_5DCC_jr_5DE1:;
    /* TODO: :  */;
    alu_cp8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { goto loop_start; };
    return;
}

void SaveGameToFile(void) {
    RecalculateMaxHearts();
    gb.regs.a = gb_read(0xDC02);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SaveGameToFile_skipHealthReset;
    gb.regs.a = gb_read(0xDC03);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x517B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC02, gb.regs.a);
  SaveGameToFile_skipHealthReset:;
    SynchronizeDungeonsItemFlags_trampoline();
    gb.regs.a = gb_read(0xDC4E);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x48AC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.bc = 0xD8B5;
    gb.regs.de = 0x0380;
  SaveGameToFile_loopSaveMain:;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    EnableSRAM();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto SaveGameToFile_loopSaveMain;
    gb.regs.bc = 0xDE82;
    gb.regs.de = 5;
  SaveGameToFile_loopSaveDX1:;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    EnableSRAM();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto SaveGameToFile_loopSaveDX1;
    gb.regs.bc = 0xDE88;
    gb.regs.de = 0x20;
  SaveGameToFile_loopSaveDX2:;
    EnableSRAM();
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    EnableSRAM();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto SaveGameToFile_loopSaveDX2;
    EnableSRAM();
    gb.regs.a = gb_read(0xDCB7);
    EnableSRAM();
    gb_write(gb.regs.hl++, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0xDCB4);
    EnableSRAM();
    gb_write(gb.regs.hl++, gb.regs.a);
    EnableSRAM();
    gb.regs.a = gb_read(0xDCB5);
    EnableSRAM();
    gb_write(gb.regs.hl++, gb.regs.a);
    return;
}

void BossRoomTable(void) {
    /* data: dw wIndoorARoomStatus + $06 */;
    /* data: dw wIndoorARoomStatus + $2b */;
    /* data: dw wIndoorARoomStatus + $5a */;
    /* data: dw wIndoorARoomStatus + $ff */;
    /* data: dw wIndoorARoomStatus + $85 */;
    /* data: dw wIndoorARoomStatus + $bc */;
    /* data: dw wIndoorBRoomStatus + $e8 */;
    /* data: dw wIndoorBRoomStatus + $34 */;
}

void PieceOfHeartRoomTable(void) {
    /* data: dw wIndoorBRoomStatus + $a4 */;
    /* data: dw wIndoorBRoomStatus + $b1 */;
    /* data: dw wOverworldRoomStatus + $44 */;
    /* data: dw wIndoorBRoomStatus + $ab */;
    /* data: dw wIndoorBRoomStatus + $e5 */;
    /* data: dw wIndoorARoomStatus + $e8 */;
    /* data: dw wOverworldRoomStatus + $78 */;
    /* data: dw wIndoorARoomStatus + $f2 */;
    /* data: dw wIndoorBRoomStatus + $e6 */;
    /* data: dw wIndoorBRoomStatus + $df */;
    /* data: dw wIndoorBRoomStatus + $ba */;
    /* data: dw wOverworldRoomStatus + $00 */;
}

void RecalculateMaxHearts(void) {
    gb.regs.a = 3;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.c = 8;
    gb.regs.hl = 0x5CF3;
  RecalculateMaxHearts_bossLoop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto RecalculateMaxHearts_endIfBossDefeated;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
  RecalculateMaxHearts_endIfBossDefeated:;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto RecalculateMaxHearts_bossLoop;
    gb.regs.c = 0x0C;
    gb.regs.hl = 0x5D03;
  RecalculateMaxHearts_heartPieceLoop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto RecalculateMaxHearts_endIfHeartPieceTaken;
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto RecalculateMaxHearts_endIf4heartPieces;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  RecalculateMaxHearts_endIf4heartPieces:;
    gb_write(0xFFD8, gb.regs.a);
  RecalculateMaxHearts_endIfHeartPieceTaken:;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto RecalculateMaxHearts_heartPieceLoop;
    gb.regs.a = gb_read(0xFFD7);
    ClampMaxHearts();
    gb_write(0xDC03, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) { jr_001_5f16(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_001_5f18(); return;
}

void jr_001_5f16(void) {
    gb.regs.a = gb_read(0xFFD8);
    jr_001_5f18(); return;
}

void jr_001_5f18(void) {
    gb_write(0xDC04, gb.regs.a);
    return;
}

void ClampMaxHearts(void) {
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto ClampMaxHearts_upperBound;
    gb.regs.a = 3;
    return;
  ClampMaxHearts_upperBound:;
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_C()) goto ClampMaxHearts_return;
    gb.regs.a = 0x0E;
  ClampMaxHearts_return:;
    return;
}

void SynchronizeDungeonsItemFlags(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SynchronizeDungeonsItemFlags_return;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto SynchronizeDungeonsItemFlags_notColorDungeon;
    gb.regs.hl = 0xDE82;
    goto SynchronizeDungeonsItemFlags_endIf;
  SynchronizeDungeonsItemFlags_notColorDungeon:;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) goto SynchronizeDungeonsItemFlags_return;
    gb.regs.hl = 0xDBC2;
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xDBC2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  SynchronizeDungeonsItemFlags_endIf:;
    gb.regs.de = 0xDC74;
    gb.regs.c = 5;
  SynchronizeDungeonsItemFlags_loop:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto SynchronizeDungeonsItemFlags_loop;
  SynchronizeDungeonsItemFlags_return:;
    gb.regs.bc = gb_pop16();
    return;
}

void EntityPosXOffsetTable(void) {
  EntityPosXOffsetTable_right:;
    /* data: db $A0 */;
  EntityPosXOffsetTable_left:;
    /* data: db $60 */;
  EntityPosXOffsetTable_top:;
    /* data: db $00 */;
  EntityPosXOffsetTable_bottom:;
    /* data: db $00 */;
  EntityPosXOffsetTable_default:;
    /* data: db $00 */;
    EntityPosXSignTable(); return;
}

void EntityPosXSignTable(void) {
  EntityPosXSignTable_right:;
    /* data: db $00 */;
  EntityPosXSignTable_left:;
    /* data: db $FF */;
  EntityPosXSignTable_top:;
    /* data: db $00 */;
  EntityPosXSignTable_bottom:;
    /* data: db $00 */;
  EntityPosXSignTable_default:;
    /* data: db $00 */;
    EntityPosYOffsetTable(); return;
}

void EntityPosYOffsetTable(void) {
  EntityPosYOffsetTable_right:;
    /* data: db $00 */;
  EntityPosYOffsetTable_left:;
    /* data: db $00 */;
  EntityPosYOffsetTable_top:;
    /* data: db $80 */;
  EntityPosYOffsetTable_bottom:;
    /* data: db $80 */;
  EntityPosYOffsetTable_default:;
    /* data: db $00 */;
    EntityPosYSignTable(); return;
}

void EntityPosYSignTable(void) {
  EntityPosYSignTable_right:;
    /* data: db $00 */;
  EntityPosYSignTable_left:;
    /* data: db $00 */;
  EntityPosYSignTable_top:;
    /* data: db $FF */;
  EntityPosYSignTable_bottom:;
    /* data: db $00 */;
  EntityPosYSignTable_default:;
    /* data: db $00 */;
    PrepareEntityPositionForRoomTransition(); return;
}

void PrepareEntityPositionForRoomTransition(void) {
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE4);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFE4, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xC125);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x5DB3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0x5DB3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.hl = 0x5DB3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.hl = 0x5DB3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = alu_rr(gb.regs.c);
    gb.regs.hl = 0xC220;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.c = alu_rl(gb.regs.c);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = alu_rr(gb.regs.c);
    gb.regs.hl = 0xC230;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.c = alu_rl(gb.regs.c);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    return;
}

void UpdateRecentRoomsList(void) {
    gb.regs.c = 6;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.hl = 0xCE81;
  UpdateRecentRoomsList_findRoomInList:;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto UpdateRecentRoomsList_return;
    gb.regs.hl++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto UpdateRecentRoomsList_findRoomInList;
    gb.regs.a = gb_read(0xCE80);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto UpdateRecentRoomsList_wrapIndexEnd;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  UpdateRecentRoomsList_wrapIndexEnd:;
    gb_write(0xCE80, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xCE81;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFFF6);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xCF00;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
  UpdateRecentRoomsList_return:;
    return;
}

void HideAllSprites(void) {
    gb.regs.hl = 0;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HideAllSprites_enableSRAM;
    gb_write(gb.regs.hl, 0);
    goto HideAllSprites_endIf;
  HideAllSprites_enableSRAM:;
    gb_write(gb.regs.hl, 0xFF);
  HideAllSprites_endIf:;
    gb.regs.b = 0x28;
    gb.regs.a = 0xF4;
    gb.regs.hl = 0xC000;
  HideAllSprites_loop:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto HideAllSprites_loop;
    return;
}

void HideSprites(void) {
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { HideSpritesUnderDialog(); return; };
    gb.regs.hl = 0xC000;
    gb.regs.a = gb_read(0xDC42);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.d = gb.regs.a;
    gb.regs.e = 0x28;
  HideSprites_hideSpritesLoop:;
    /* TODO: :  */;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, gb.regs.d);
    if (GET_FLAG_C()) goto HideSprites_nextSprite;
    gb_write(gb.regs.hl, 0);
  HideSprites_nextSprite:;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto HideSprites_hideSpritesLoop;
    return;
}

void HideSpritesUnderDialog(void) {
    gb.regs.a = gb_read(0xDC42);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.d = 0x3E;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto HideSpritesUnderDialog_hideSpritesUnderDialog;
    gb.regs.d = 0x58;
  HideSpritesUnderDialog_hideSpritesUnderDialog:;
    /* TODO: :  */;
    gb.regs.e = 0x1F;
    gb.regs.hl = 0xC024;
  HideSpritesUnderDialog_hideSpritesLoop:;
    /* TODO: :  */;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, gb.regs.d);
    gb.regs.a = gb_read(0xC19F);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto HideSpritesUnderDialog_checkPieceOfHeart;
    alu_ccf();
  HideSpritesUnderDialog_checkPieceOfHeart:;
    /* TODO: :  */;
    if (GET_FLAG_C()) goto HideSpritesUnderDialog_nextSprite;
    gb.regs.a = gb_read(0xC173);
    /* cp_dialog_low Dialog04F */;
    if (!GET_FLAG_Z()) goto HideSpritesUnderDialog_hideSprite;
    gb.regs.a = gb_read(0xC112);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto HideSpritesUnderDialog_hideSprite;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb.regs.hl--;
    alu_cp8(gb.regs.a, 0x9A);
    if (GET_FLAG_C()) goto HideSpritesUnderDialog_hideSprite;
    alu_cp8(gb.regs.a, 0xA0);
    if (GET_FLAG_C()) goto HideSpritesUnderDialog_nextSprite;
  HideSpritesUnderDialog_hideSprite:;
    /* TODO: :  */;
    gb_write(gb.regs.hl, 0);
  HideSpritesUnderDialog_nextSprite:;
    /* TODO: :  */;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto HideSpritesUnderDialog_hideSpritesLoop;
    return;
}

void CreateFollowingNpcEntity(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreateFollowingNpcEntity_excludedRoomsEnd;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x16);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x13);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xFD);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0xB1);
    if (GET_FLAG_Z()) return;
  CreateFollowingNpcEntity_excludedRoomsEnd:;
    gb.regs.a = gb_read(0xDC23);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_roosterEnd;
    gb.regs.e = 0x0F;
    gb.regs.d = 0;
  CreateFollowingNpcEntity_roosterSearchLoop:;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xD5);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_roosterContinue;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreateFollowingNpcEntity_roosterContinue;
    gb_write(gb.regs.hl, gb.regs.d);
  CreateFollowingNpcEntity_roosterContinue:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_roosterSearchLoop;
    gb.regs.a = 0xD5;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC13B;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  CreateFollowingNpcEntity_roosterEnd:;
    gb.regs.a = gb_read(0xDC21);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto CreateFollowingNpcEntity_createGhostEntity;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_ghostEnd;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_ghostEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) goto CreateFollowingNpcEntity_ghostEnd;
    gb.regs.a = gb_read(0xDC10);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto CreateFollowingNpcEntity_ghostEnd;
    gb.regs.a = gb_read(0xDBEF);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto CreateFollowingNpcEntity_markGhostAsFollowing;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    goto CreateFollowingNpcEntity_ghostStatusEnd;
  CreateFollowingNpcEntity_markGhostAsFollowing:;
    gb.regs.a = 1;
  CreateFollowingNpcEntity_ghostStatusEnd:;
    gb_write(0xDC21, gb.regs.a);
    goto CreateFollowingNpcEntity_ghostEnd;
  CreateFollowingNpcEntity_createGhostEntity:;
    gb.regs.e = 0x0F;
    gb.regs.d = 0;
  CreateFollowingNpcEntity_ghostSearchLoop:;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xD4);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_ghostContinue;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreateFollowingNpcEntity_ghostContinue;
    gb_write(gb.regs.hl, gb.regs.d);
  CreateFollowingNpcEntity_ghostContinue:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_ghostSearchLoop;
    gb.regs.a = 0xD4;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC13B;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x2D;
    gb_write(0xFFF2, gb.regs.a);
  CreateFollowingNpcEntity_ghostEnd:;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreateFollowingNpcEntity_marinEnd;
    gb.regs.e = 0x0F;
    gb.regs.d = 0;
  CreateFollowingNpcEntity_marinSearchLoop:;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xC1);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_marinContinue;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreateFollowingNpcEntity_marinContinue;
    gb_write(gb.regs.hl, gb.regs.d);
  CreateFollowingNpcEntity_marinContinue:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_marinSearchLoop;
    gb.regs.a = 0xC1;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD355;
    _decrementConsecutiveBytes();
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC13B;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD375;
    _decrementConsecutiveBytes();
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD395;
    _decrementConsecutiveBytes();
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xA4);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_marinFallEnd;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x11);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_marinFallEnd;
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x79);
  CreateFollowingNpcEntity_marinFallEnd:;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.hl = 0xD3B5;
    _decrementConsecutiveBytes();
    gb.regs.a = gb_read(0xDBBC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreateFollowingNpcEntity_jp_6117;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
  CreateFollowingNpcEntity_jp_6117:;
    return;
  CreateFollowingNpcEntity_decrementConsecutiveBytes:;
    gb.regs.c = 0x10;
  CreateFollowingNpcEntity_loop:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_loop;
    return;
  CreateFollowingNpcEntity_marinEnd:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xA7);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_bowWowEnd;
    gb.regs.e = 0x0F;
    gb.regs.d = 0;
  CreateFollowingNpcEntity_bowWowSearchLoop:;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x6D);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_bowWowContinue;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreateFollowingNpcEntity_bowWowContinue;
    gb_write(gb.regs.hl, gb.regs.d);
  CreateFollowingNpcEntity_bowWowContinue:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto CreateFollowingNpcEntity_bowWowSearchLoop;
    gb.regs.a = 0x6D;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  CreateFollowingNpcEntity_bowWowEnd:;
    return;
}

void func_001_6162(void) {
    label_27F2();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3D, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb_write(0xDC40, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xFF47, gb.regs.a);
    gb_write(0xFF48, gb.regs.a);
    gb_write(0xFF49, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xD7B0, gb.regs.a);
    gb_write(0xD7AD, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xFFB5, gb.regs.a);
    return;
}

void Data_001_618A(void) {
    /* data: db 0, $57, $10, $57, $20, $57, $30, $57, $40, $57, $50, $57, $60, $57, $70, $57 */;
    /* data: db $80, $57, $90, $57, 0, $58, $10, $58, $20, $58, $30, $58, $40, $58, $50, $58 */;
}

void LoadCounterAnimatedTiles(void) {
    gb.regs.a = gb_read(0xC109);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x618A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.de = 0x96D0;
    gb.regs.bc = 0x10;
    gb.regs.a = 0x0F;
    CopyDataFromBank();
    gb.regs.a = gb_read(0xC109);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x618A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.de = 0x96C0;
    gb.regs.bc = 0x10;
    gb.regs.a = 0x0F;
    CopyDataFromBank();
    gb.regs.a = 0x6C;
    gb_write(0x9909, gb.regs.a);
  LoadCounterAnimatedTiles_jr_61E9:;
    /* TODO: :  */;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0x990A, gb.regs.a);
    return;
}

void OpenDungeonNameDialog(void) {
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto OpenDungeonNameDialog_return;
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto OpenDungeonNameDialog_return;
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.a = alu_add8(gb.regs.a, (0x56 & 0xFF));
    OpenDialogInTable0();
  OpenDungeonNameDialog_return:;
    return;
}

void MarinBeachEntryPoint(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarinBeachEntryPoint_jr_6213;
    gb.regs.a = gb_read(0xC3C7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MarinBeachEntryPoint_jr_6213;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC3C7, gb.regs.a);
  MarinBeachEntryPoint_jr_6213:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xC3C4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MarinBeachEntryPoint_jr_621D;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC3C4, gb.regs.a);
  MarinBeachEntryPoint_jr_621D:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: MarinBeachPrepare0(); return;
        case 0x01: MarinBeachPrepare1(); return;
        case 0x02: MarinBeachPrepare2(); return;
        case 0x03: MarinBeachPrepare3(); return;
        case 0x04: MarinBeachScroll1(); return;
        case 0x05: MarinBeachScroll2(); return;
        case 0x06: MarinBeachScrollStop(); return;
        case 0x07: MarinBeachDialog1(); return;
        case 0x08: MarinBeachPause1(); return;
        case 0x09: MarinBeachDialog2(); return;
        case 0x0A: MarinBeachPause2(); return;
        case 0x0B: MarinBeachAreYouListening(); return;
        case 0x0C: MarinBeachDialog3(); return;
        case 0x0D: MarinBeachDialog4(); return;
        case 0x0E: FileSaveFadeOut(); return;
    }
}

void MarinBeachPrepare0(void) {
    IncrementGameplaySubtype();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { MarinBeachPrepare1(); return; };
    gb.regs.hl = 0xDCB8;
    gb.regs.c = 0x80;
    gb.regs.ime = false;
  MarinBeachPrepare0_loop_624D:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = 3;
    gb_write(0xFF70, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl++;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarinBeachPrepare0_loop_624D;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.ime = true;
    MarinBeachPrepare1(); return;
}

void MarinBeachPrepare1(void) {
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    func_1A22();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto MarinBeachPrepare1_return;
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1BF, gb.regs.a);
    func_001_5888();
    func_001_64FF();
    gb.regs.a = 0x0F;
    gb_write(0xD7B3, gb.regs.a);
  MarinBeachPrepare1_return:;
    return;
}

void MarinBeachPrepare2(void) {
    gb.regs.a = 0x13;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC13F, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void MarinBeachPrepare3(void) {
    gb.regs.a = 0x13;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDC42, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb.regs.a = 0x90;
    gb_write(0xFF97, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xC114, gb.regs.a);
    gb.regs.a = 0xA0;
    gb_write(0xD466, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    gb.regs.a = 0xE0;
    gb_write(0xC540, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC530, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC510, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xC560, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xC550, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC520, gb.regs.a);
    gb_write(0xD480, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xC541, gb.regs.a);
    gb.regs.a = 0xA0;
    gb_write(0xC531, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC511, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xC561, gb.regs.a);
    gb.regs.a = 0xF8;
    gb_write(0xC551, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xC521, gb.regs.a);
    gb.regs.a = 0x24;
    gb_write(0xD481, gb.regs.a);
    gb.regs.a = 0x48;
    gb_write(0xC542, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xC532, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC512, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC562, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC552, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC522, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xD482, gb.regs.a);
    gb.regs.a = 0x3C;
    gb_write(0xC543, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xC533, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC513, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC563, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC553, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC523, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xD483, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xC544, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xC534, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC514, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC564, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC554, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC524, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xD484, gb.regs.a);
    gb.regs.a = 0x3C;
    gb_write(0xC545, gb.regs.a);
    gb.regs.a = 0x60;
    gb_write(0xC535, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC515, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC565, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC555, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC525, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xD485, gb.regs.a);
    gb.regs.a = 0x44;
    gb_write(0xC546, gb.regs.a);
    gb.regs.a = 0x68;
    gb_write(0xC536, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC516, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC566, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC556, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC526, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xD486, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void Data_001_63AA(void) {
    /* data: db 0, 0, 0, 0, $40, $40, $40, $40, $94, $94, $94, $94, $E4, $E4, $E4, $E4 */;
}

void Data_001_63BA(void) {
    /* data: db 0, 0, 0, 0, 4, 4, 4, 4, $18, $18, $18, $18, $1C, $1C, $1C, $1C */;
}

void MarinBeachScroll1(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MarinBeachScroll1_jr_63E4;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { MarinBeachScroll2(); return; };
    func_1A39();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { MarinBeachScroll2(); return; };
    IncrementGameplaySubtype();
    MarinBeachScroll2(); return;
  MarinBeachScroll1_jr_63E4:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto MarinBeachScroll1_jr_63F8;
    gb.regs.a = gb_read(0xC3C5);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC3C5, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto MarinBeachScroll1_jr_63F8;
    IncrementGameplaySubtype();
  MarinBeachScroll1_jr_63F8:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC3C5);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x63AA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.hl = 0x63BA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    MarinBeachScroll2(); return;
}

void MarinBeachScroll2(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto MarinBeachScroll2_jr_642E;
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto MarinBeachScroll2_jr_642E;
    gb.regs.a = 0x80;
    gb_write(0xC3C7, gb.regs.a);
    IncrementGameplaySubtype();
  MarinBeachScroll2_jr_642E:;
    /* TODO: :  */;
    func_001_651E();
    return;
}

void MarinBeachScrollStop(void) {
    func_001_651E();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_001_644A(); return; };
    gb.regs.a = gb_read(0xC3C7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarinBeachScrollStop_ret_6449;
    /* ld_dialog_low a, Dialog1D8 */;
    OpenMarinBeachDialog();
    IncrementGameplaySubtype();
  MarinBeachScrollStop_ret_6449:;
    return;
}

void jr_001_644A(void) {
    gb.regs.a = 2;
    gb_write(0xC3C4, gb.regs.a);
    return;
}

void MarinBeachDialog1(void) {
    func_001_651E();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarinBeachDialog1_ret_6466;
    gb.regs.a = 0x80;
    gb_write(0xC3C4, gb.regs.a);
    gb.regs.a = 0xC0;
    gb_write(0xC3C7, gb.regs.a);
    IncrementGameplaySubtype();
  MarinBeachDialog1_ret_6466:;
    return;
}

void MarinBeachPause1(void) {
    func_001_651E();
    gb.regs.a = gb_read(0xC3C7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarinBeachPause1_ret_6478;
    /* ld_dialog_low a, Dialog1D9 */;
    OpenMarinBeachDialog();
    IncrementGameplaySubtypeAndReturn(); return;
  MarinBeachPause1_ret_6478:;
    return;
}

void MarinBeachDialog2(void) {
    func_001_651E();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarinBeachDialog2_ret_648F;
    gb.regs.a = 0x80;
    gb_write(0xC3C4, gb.regs.a);
    gb.regs.a = 0xC0;
    gb_write(0xC3C7, gb.regs.a);
    IncrementGameplaySubtype();
  MarinBeachDialog2_ret_648F:;
    return;
}

void MarinBeachPause2(void) {
    func_001_651E();
    gb.regs.a = gb_read(0xC3C7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarinBeachPause2_ret_64A1;
    /* ld_dialog_low a, Dialog1DA */;
    OpenMarinBeachDialog();
    IncrementGameplaySubtypeAndReturn(); return;
  MarinBeachPause2_ret_64A1:;
    return;
}

void MarinBeachAreYouListening(void) {
    func_001_651E();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_001_64CA(); return; };
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarinBeachAreYouListening_jr_64BA;
    /* ld_dialog_low a, Dialog1DB */;
    OpenMarinBeachDialog();
    IncrementGameplaySubtype();
    return;
  MarinBeachAreYouListening_jr_64BA:;
    /* TODO: :  */;
    /* ld_dialog_low a, Dialog1DE */;
    OpenMarinBeachDialog();
    gb.regs.a = 6;
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 5;
    gb_write(0xC3C7, gb.regs.a);
    return;
}

void jr_001_64CA(void) {
    gb.regs.a = 2;
    gb_write(0xC3C4, gb.regs.a);
    return;
}

void MarinBeachDialog3(void) {
    func_001_651E();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarinBeachDialog3_ret_64E6;
    /* ld_dialog_low a, Dialog1DC */;
    OpenMarinBeachDialog();
    gb.regs.a = 0x30;
    gb_write(0xC3C7, gb.regs.a);
    IncrementGameplaySubtype();
  MarinBeachDialog3_ret_64E6:;
    return;
}

void MarinBeachDialog4(void) {
    func_001_651E();
    gb.regs.a = 2;
    gb_write(0xC3C4, gb.regs.a);
    gb.regs.a = gb_read(0xC3C7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    label_27F2();
    func_001_68D9();
    gb.regs.a = 1;
    gb_write(0xDC1B, gb.regs.a);
    func_001_64FF(); return;
}

void func_001_64FF(void) {
    gb.regs.e = 0x10;
    gb.regs.hl = 0xC510;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_001_64FF_loop_6505:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_001_64FF_loop_6505;
    return;
}

void Data_001_650A(void) {
    /* data: db $40, 1, $40, $21 */;
}

void Data_001_650E(void) {
    /* data: db $46, 1, $48, 1 */;
}

void Data_001_6512(void) {
    /* data: db $42, 0, $44, 0 */;
}

void Data_001_6516(void) {
    /* data: db $42, 2, $44, 2 */;
}

void Data_001_651A(void) {
    /* data: db $42, 3, $44, 3 */;
}

void func_001_651E(void) {
    func_001_65AE();
    gb.regs.a = gb_read(0xC114);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto func_001_651E_jr_652E;
    gb.regs.a = 0x0F;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_001_651E_jr_652E:;
    /* TODO: :  */;
    gb_write(0xC114, gb.regs.a);
    gb.regs.a = gb_read(0xD466);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_001_651E_jr_6545;
    gb.regs.a = 0x21;
    gb_write(0xFFF2, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.a = alu_add8(gb.regs.a, 0x60);
    gb_write(0xD466, gb.regs.a);
  func_001_651E_jr_6545:;
    /* TODO: :  */;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD466, gb.regs.a);
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xC0);
    if (GET_FLAG_C()) return;
    gb.regs.de = 0x650A;
    gb.regs.a = gb_read(0xC3C4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_001_651E_jr_655F;
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) goto func_001_651E_jr_655F;
    gb.regs.de = 0x650E;
  func_001_651E_jr_655F:;
    /* TODO: :  */;
    gb.regs.a = 0x7C;
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 0x58;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xC030;
    func_001_658B();
    gb.regs.a = 0x48;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.de = 0x6512;
    gb.regs.a = gb_read(0xDCB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_001_651E_loadTunic;
    gb.regs.de = 0x6516;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_001_651E_loadTunic;
    gb.regs.de = 0x651A;
  func_001_651E_loadTunic:;
    /* TODO: :  */;
    gb.regs.hl = 0xC038;
    func_001_658B();
    return;
}

void func_001_658B(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFF97);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb_write(0xFFE8, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    return;
}

void func_001_65AE(void) {
    gb.regs.c = 8;
    gb.regs.b = 0;
    jr_001_65B2(); return;
}

void jr_001_65B2(void) {
    gb.regs.hl = 0xC510;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_001_65D6(); return; };
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC530;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xC540;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0xC520;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_001_65B2_jr_65D2;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  jr_001_65B2_jr_65D2:;
    /* TODO: :  */;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    func_001_65DD();
    jr_001_65D6(); return;
}

void jr_001_65D6(void) {
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_001_65B2(); return; };
    return;
}

void func_001_65DD(void) {
    gb.regs.a = alu_dec8(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: func_001_6673(); return;
        case 0x01: func_001_66FD(); return;
    }
}

void Data_001_65E3(void) {
    /* data: dw Data_001_65EF */;
    /* data: dw Data_001_65F3 */;
    /* data: dw Data_001_65F7 */;
    /* data: dw Data_001_65FB */;
    /* data: dw Data_001_65FF */;
    /* data: dw Data_001_6603 */;
}

void Data_001_65EF(void) {
    /* data: db $50, 0, $50, $20 */;
}

void Data_001_65F3(void) {
    /* data: db $52, 0, $52, $20 */;
}

void Data_001_65F7(void) {
    /* data: db $54, 0, $54, $20 */;
}

void Data_001_65FB(void) {
    /* data: db $56, 0, $56, $20 */;
}

void Data_001_65FF(void) {
    /* data: db $58, 0, $58, $20 */;
}

void Data_001_6603(void) {
    /* data: db $5A, 0, $5A, $20 */;
}

void Data_001_6607(void) {
    /* data: db 3, 3, 3, 3 */;
}

void jr_001_660B(void) {
    /* data: db 3, 3, 3, 3, 3, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1 */;
    /* data: db 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5 */;
    /* data: db 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 3, 3, 3, 3, 3, 3 */;
    /* data: db 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 */;
}

void jr_001_6646(void) {
    /* data: db 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0 */;
    /* data: db 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4 */;
    /* data: db 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5 */;
}

void func_001_6673(void) {
    gb.regs.hl = 0xC520;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xD490;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto func_001_6673_jr_668B;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_6673_jr_668B:;
    /* TODO: :  */;
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6607;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x65E3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb_push16(gb.regs.de);
    gb.regs.hl = 0xC040;
    gb.regs.a = gb.regs.c;
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x78);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    func_001_658B();
    func_001_67A8();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_001_6673_jr_66C4;
    gb.regs.hl = 0xC560;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFB);
    if (GET_FLAG_Z()) goto func_001_6673_jr_66C4;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_001_6673_jr_66C4:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFE8);
    alu_cp8(gb.regs.a, 0xF0);
    if (GET_FLAG_C()) goto func_001_6673_ret_66D7;
    gb.regs.hl = 0xC560;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC510;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  func_001_6673_ret_66D7:;
    return;
}

void Data_001_66D8(void) {
    /* data: dw Data_001_66E0 */;
    /* data: dw Data_001_66E4 */;
    /* data: dw Data_001_66E8 */;
    /* data: dw Data_001_66EC */;
}

void Data_001_66E0(void) {
    /* data: db $4C, 0, $4C, $20 */;
}

void Data_001_66E4(void) {
    /* data: db $4E, 0, $4E, $20 */;
}

void Data_001_66E8(void) {
    /* data: db $5C, 0, $5C, $20 */;
}

void Data_001_66EC(void) {
    /* data: db $5E, 0, $5E, $20 */;
}

void Data_001_66F0(void) {
    /* data: db 1, $FF */;
}

void jr_001_66F2(void) {
    /* data: db 1, $FF, $FE, 2 */;
}

void Data_001_66F6(void) {
    /* data: db 1, $FF, $4C, $52, $58, $5C, $60 */;
}

void func_001_66FD(void) {
    gb.regs.hl = 0xC560;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = 3;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_001_6718(); return; };
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_001_66FD_jr_6717;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
  func_001_66FD_jr_6717:;
    /* TODO: :  */;
    gb.regs.e = gb_read(gb.regs.hl);
    jr_001_6718(); return;
}

void jr_001_6718(void) {
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x66D8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb_push16(gb.regs.de);
    gb.regs.hl = 0xC040;
    gb.regs.a = gb.regs.c;
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x78);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    func_001_658B();
  jr_001_6718_jr_6733:;
    /* TODO: :  */;
    func_001_67A8();
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFFE9, gb.regs.a);
  jr_001_6718_jr_6745:;
    /* TODO: :  */;
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto jr_001_6718_jr_675A;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x66F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC550;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_001_6718_jr_675A:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto jr_001_6718_jr_6773;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x66F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC560;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_001_6718_jr_6773:;
    /* TODO: :  */;
    gb.regs.hl = 0xC590;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x13);
    if (GET_FLAG_C()) { ret_001_67A7(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0x66F6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC530;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.d);
    gb.regs.e = 1;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_001_6718_jr_6792;
    gb.regs.e = 0xFF;
  jr_001_6718_jr_6792:;
    /* TODO: :  */;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC540;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x48);
    gb.regs.e = 1;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_001_6718_jr_67A4;
    gb.regs.e = 0xFF;
  jr_001_6718_jr_67A4:;
    /* TODO: :  */;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    ret_001_67A7(); return;
}

void ret_001_67A7(void) {
    return;
}

void func_001_67A8(void) {
    func_001_67B5();
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.c = gb.regs.a;
    func_001_67B5();
    gb.regs.bc = gb_pop16();
    return;
}

void func_001_67B5(void) {
    gb.regs.hl = 0xC550;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC570;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC530;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_001_67B5_jr_67D4;
    gb.regs.e = 0xF0;
  func_001_67B5_jr_67D4:;
    /* TODO: :  */;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void OpenMarinBeachDialog(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x60;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = gb.regs.e;
    OpenDialogInTable1();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    return;
}

void PeachPictureEntryPoint(void) {
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: PeachPictureState0Handler(); return;
        case 0x01: PeachPictureState1Handler(); return;
        case 0x02: PeachPictureState2Handler(); return;
        case 0x03: PeachPictureState3Handler(); return;
        case 0x04: PeachPictureState4Handler(); return;
        case 0x05: PeachPictureState5Handler(); return;
        case 0x06: FileSaveFadeOut(); return;
        case 0x07: PeachPictureState7Handler(); return;
        case 0x08: PeachPictureState8Handler(); return;
        case 0x09: PeachPictureState9Handler(); return;
        case 0x0A: PeachPictureStateAHandler(); return;
    }
}

void PeachPictureState0Handler(void) {
    IncrementGameplaySubtype();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { PeachPictureState1Handler(); return; };
    gb.regs.hl = 0xDCB8;
    gb.regs.c = 0x80;
    gb.regs.ime = false;
  PeachPictureState0Handler_loop_6816:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = 3;
    gb_write(0xFF70, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl++;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto PeachPictureState0Handler_loop_6816;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.ime = true;
    PeachPictureState1Handler(); return;
}

void PeachPictureState1Handler(void) {
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    func_1A22();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { ret_001_6855(); return; };
    func_001_5888();
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto PeachPictureState1Handler_jr_6849;
    gb.regs.a = 3;
    gb_write(0xFFA9, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFFAA, gb.regs.a);
  PeachPictureState1Handler_jr_6849:;
    /* TODO: :  */;
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1BF, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(0xD7B3, gb.regs.a);
    ret_001_6855(); return;
}

void ret_001_6855(void) {
    return;
}

void PeachPictureState2Handler(void) {
    gb.regs.e = 0x21;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto PeachPictureState2Handler_jr_6868;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xDD);
    gb.regs.e = 0x12;
    if (!GET_FLAG_Z()) goto PeachPictureState2Handler_jr_6868;
    gb.regs.e = 0x20;
  PeachPictureState2Handler_jr_6868:;
    /* TODO: :  */;
    gb.regs.a = gb.regs.e;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC13F, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void PeachPictureState3Handler(void) {
    gb.regs.e = 0x24;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto PeachPictureState3Handler_jr_6885;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xDD);
    gb.regs.e = 0x12;
    if (!GET_FLAG_Z()) goto PeachPictureState3Handler_jr_6885;
    gb.regs.e = 0x23;
  PeachPictureState3Handler_jr_6885:;
    /* TODO: :  */;
    gb.regs.a = gb.regs.e;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDC42, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb.regs.e = 8;
    gb.regs.hl = 0xD490;
  PeachPictureState3Handler_loop_689E:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto PeachPictureState3Handler_loop_689E;
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void PeachPictureState4Handler(void) {
    func_6A7C();
    func_1A39();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto PeachPictureState4Handler_ret_68BF;
    IncrementGameplaySubtype();
    gb.regs.a = 0x80;
    gb_write(0xD490, gb.regs.a);
  PeachPictureState4Handler_ret_68BF:;
    return;
}

void PeachPictureState5Handler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto PeachPictureState5Handler_jr_68CF;
    func_6A7C();
    gb.regs.a = 7;
    gb_write(0xDC3E, gb.regs.a);
    return;
  PeachPictureState5Handler_jr_68CF:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0xB0);
    if (GET_FLAG_Z()) { ret_001_68E3(); return; };
    gb.regs.a = 0x13;
    gb_write(0xFFF2, gb.regs.a);
    func_001_68D9(); return;
}

void func_001_68D9(void) {
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    ret_001_68E3(); return;
}

void ret_001_68E3(void) {
    return;
}

void PeachPictureState7Handler(void) {
    func_6A7C();
    gb.regs.a = gb_read(0xD490);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD490, gb.regs.a);
    if (!GET_FLAG_Z()) goto PeachPictureState7Handler_jr_68FB;
    gb_write(0xC156, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xD490, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
  PeachPictureState7Handler_jr_68FB:;
    /* TODO: :  */;
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto PeachPictureState7Handler_jr_6903;
    gb.regs.e = 0xFE;
  PeachPictureState7Handler_jr_6903:;
    /* TODO: :  */;
    gb.regs.a = gb.regs.e;
    gb_write(0xC156, gb.regs.a);
    return;
}

void PeachPictureState8Handler(void) {
    func_6A7C();
    func_001_695B();
    gb.regs.a = gb_read(0xD490);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD490, gb.regs.a);
    if (!GET_FLAG_Z()) goto PeachPictureState8Handler_ret_6944;
    PlayBombExplosionSfx();
    gb.regs.a = 0x30;
    gb_write(0xD490, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xD494, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xD495, gb.regs.a);
    gb.regs.a = gb_read(0xD491);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xD491, gb.regs.a);
    gb.regs.a = gb_read(0xD493);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD493, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto PeachPictureState8Handler_ret_6944;
    gb.regs.a = 0x80;
    gb_write(0xD490, gb.regs.a);
    IncrementGameplaySubtype();
  PeachPictureState8Handler_ret_6944:;
    return;
}

void PeachPictureState9Handler(void) {
    func_6A7C();
    func_001_695B();
    gb.regs.hl = 0xD490;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) return;
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    return;
}

void func_001_695B(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC156, gb.regs.a);
    gb.regs.a = gb_read(0xD495);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_001_6975(); return; };
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD495, gb.regs.a);
    gb.regs.e = 0xFE;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_001_695B_jr_6971;
    gb.regs.e = 0;
  func_001_695B_jr_6971:;
    /* TODO: :  */;
    gb.regs.a = gb.regs.e;
    gb_write(0xC156, gb.regs.a);
    ret_001_6975(); return;
}

void ret_001_6975(void) {
    return;
}

void Data_001_6976(void) {
    /* data: db $14, $14, $10, $10, $0c, $0c */;
}

void Data_001_697C(void) {
    /* data: db $17, $17, $13 */;
    /* data: db $13, $0f, $0f */;
}

void Data_6982(void) {
    /* data: db $00, $00, $CC, $10 */;
    /* data: db $00, $08, $CE, $10 */;
    /* data: db $00, $10, $DC, $10 */;
    /* data: db $00, $18, $CC, $30 */;
    /* data: db $10, $00, $DE, $10 */;
    /* data: db $10, $08, $E0, $10 */;
    /* data: db $10, $10, $E2, $10 */;
    /* data: db $10, $18, $DE, $30 */;
    /* data: db $20, $00, $E4, $10 */;
    /* data: db $20, $08, $E6, $10 */;
    /* data: db $20, $10, $E8, $10 */;
    /* data: db $20, $18, $E4, $30 */;
    /* data: db $30, $00, $DE, $10 */;
    /* data: db $30, $08, $E0, $10 */;
    /* data: db $30, $10, $E0, $30 */;
    /* data: db $30, $18, $DE, $30 */;
    /* data: db $40, $00, $DE, $10 */;
    /* data: db $40, $08, $E0, $10 */;
    /* data: db $40, $10, $E0, $30 */;
    /* data: db $40, $18, $DE, $30 */;
}

void Data_69D2(void) {
    /* data: db $00, $10, $DC, $16 */;
    /* data: db $10, $10, $E2, $16 */;
    /* data: db $20, $10, $E8, $16 */;
    /* data: db $00, $00, $CC, $15 */;
    /* data: db $00, $08, $CE, $15 */;
    /* data: db $00, $10, $CE, $35 */;
    /* data: db $00, $18, $CC, $35 */;
    /* data: db $10, $00, $DE, $15 */;
    /* data: db $10, $08, $E0, $15 */;
    /* data: db $10, $10, $E0, $35 */;
    /* data: db $10, $18, $DE, $35 */;
    /* data: db $20, $00, $E4, $15 */;
    /* data: db $20, $08, $E6, $15 */;
    /* data: db $20, $10, $E6, $35 */;
    /* data: db $20, $18, $E4, $35 */;
    /* data: db $30, $00, $DE, $15 */;
    /* data: db $30, $08, $E0, $15 */;
    /* data: db $30, $10, $E0, $35 */;
    /* data: db $30, $18, $DE, $35 */;
    /* data: db $40, $00, $DE, $15 */;
    /* data: db $40, $08, $E0, $15 */;
    /* data: db $40, $10, $E0, $35 */;
    /* data: db $40, $18, $DE, $35 */;
}

void Data_6A2E(void) {
    /* data: db $48, $08, $F0, $07 */;
    /* data: db $48, $10, $F2, $07 */;
    /* data: db $48, $18, $F4, $07 */;
    /* data: db $48, $20, $F4, $27 */;
    /* data: db $48, $28, $F2, $27 */;
    /* data: db $48, $30, $F0, $27 */;
}

void Data_6A46(void) {
    /* data: db $48, $08, $F6, $07 */;
    /* data: db $48, $10, $F8, $07 */;
    /* data: db $48, $18, $FA, $07 */;
    /* data: db $48, $20, $FA, $27 */;
    /* data: db $48, $28, $F8, $27 */;
    /* data: db $48, $30, $F6, $27 */;
}

void Data_6A5E(void) {
    /* data: db $48, $08, $FC, $07 */;
    /* data: db $48, $10, $FE, $07 */;
    /* data: db $48, $18, $EE, $07 */;
    /* data: db $48, $20, $EE, $27 */;
    /* data: db $48, $28, $FE, $27 */;
    /* data: db $48, $30, $FC, $27 */;
}

void Data_6A76(void) {
    /* data: dw Data_6A2E */;
    /* data: dw Data_6A46 */;
    /* data: dw Data_6A5E */;
}

void func_6A7C(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb_write(0xFFED, gb.regs.a);
    gb_write(0xFFF5, gb.regs.a);
    gb.regs.a = 0x38;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xC156);
    gb.regs.e = gb.regs.a;
    gb.regs.a = 0x20;
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xD494);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_6A7C_jr_6AC2;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD494, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = gb_read(0xD492);
    if (!GET_FLAG_Z()) goto func_6A7C_jr_6AAE;
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_6A7C_jr_6AAE;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_6A7C_jr_6AAE:;
    gb_write(0xD492, gb.regs.a);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6878;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.c = 6;
    RenderActiveEntitySpritesRectUsingAllOAM();
  func_6A7C_jr_6AC2:;
    gb.regs.a = 0x48;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xC156);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xD491);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xD493);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6976;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_6A7C_jr_6AE3;
    gb.regs.hl = 0x697C;
  func_6A7C_jr_6AE3:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.hl = 0x6784;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_6A7C_jr_6AF4;
    gb.regs.hl = 0x67D4;
  func_6A7C_jr_6AF4:;
    RenderActiveEntitySpritesRect();
    return;
}

void FaceShrineMuralEntryPoint(void) {
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: FaceShrineMuralStage0Handler(); return;
        case 0x01: FaceShrineMuralStage1Handler(); return;
        case 0x02: FaceShrineMuralStage2Handler(); return;
        case 0x03: FaceShrineMuralStage3Handler(); return;
        case 0x04: FaceShrineMuralStage4Handler(); return;
        case 0x05: FaceShrineMuralStage5Handler(); return;
        case 0x06: FileSaveFadeOut(); return;
    }
}

void FaceShrineMuralStage0Handler(void) {
    IncrementGameplaySubtype();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { FaceShrineMuralStage1Handler(); return; };
    gb.regs.hl = 0xDCB8;
    gb.regs.c = 0x80;
    gb.regs.ime = false;
  FaceShrineMuralStage0Handler_loop_6B18:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = 3;
    gb_write(0xFF70, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl++;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto FaceShrineMuralStage0Handler_loop_6B18;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.ime = true;
    FaceShrineMuralStage1Handler(); return;
}

void FaceShrineMuralStage1Handler(void) {
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    func_1A22();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto FaceShrineMuralStage1Handler_ret_6B51;
    func_001_5888();
    gb.regs.a = 3;
    gb_write(0xFFA9, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFFAA, gb.regs.a);
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1BF, gb.regs.a);
    gb.regs.a = 0x14;
    gb_write(0xD7B3, gb.regs.a);
  FaceShrineMuralStage1Handler_ret_6B51:;
    return;
}

void FaceShrineMuralStage2Handler(void) {
    gb.regs.a = 0x15;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDC42, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void FaceShrineMuralStage3Handler(void) {
    func_1A39();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto FaceShrineMuralStage3Handler_ret_6B80;
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC3C4, gb.regs.a);
  FaceShrineMuralStage3Handler_ret_6B80:;
    return;
}

void FaceShrineMuralStage4Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC3C4);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC3C4, gb.regs.a);
    if (GET_FLAG_Z()) { IncrementGameplaySubtype(); return; };
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto FaceShrineMuralStage4Handler_ret_6B99;
    /* call_open_dialog Dialog0E7 */;
  FaceShrineMuralStage4Handler_ret_6B99:;
    return;
}

void FaceShrineMuralStage5Handler(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0xB0);
    if (GET_FLAG_Z()) goto FaceShrineMuralStage5Handler_return;
    gb.regs.a = 0x13;
    gb_write(0xFFF2, gb.regs.a);
    func_001_68D9();
  FaceShrineMuralStage5Handler_return:;
    return;
}

void MoveSelect(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto MoveSelect_return;
  MoveSelect_playMoveSelectionJingle:;
    /* TODO: :  */;
    gb_push16(gb.regs.af);
    gb.regs.a = 0x0A;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  MoveSelect_return:;
    /* TODO: :  */;
    return;
}

void LoadSirenInstruments(void) {
    gb.regs.a = gb_read(0xFF92);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) { LoadSirenInstrumentTiles(); return; };
    if (!GET_FLAG_Z()) goto LoadSirenInstruments_loadLeftSide;
    LoadInstrumentsBG_rightSide();
    gb.regs.hl = 0xFF92;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  LoadSirenInstruments_loadLeftSide:;
    LoadInstrumentsBG_leftSide();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF90, gb.regs.a);
    gb_write(0xFF92, gb.regs.a);
    return;
}

void Data_001_6BCF(void) {
    /* data: db $0F, $51, $B1, $EF, $EC, $AA, $4A, $0C */;
}

void Data_001_6BD7(void) {
    /* data: db $B1, $B2, $B3, $B4, $B5, $B6, $B7, $B8 */;
}

void Data_001_6BDF(void) {
    /* data: db $D0, $D2, $D4, $D6, $D8, $DA, $DC, $DE */;
}

void Data_001_6BE7(void) {
    /* data: db 1, $1F, 1 */;
}

void LoadInstrumentsBG(void) {
  LoadInstrumentsBG_leftSide:;
    gb.regs.c = 8;
    gb.regs.e = 4;
    LoadInstrumentsBG_start(); return;
  LoadInstrumentsBG_rightSide:;
    gb.regs.c = 4;
    gb.regs.e = 0;
  LoadInstrumentsBG_start:;
    gb.regs.a = gb.regs.c;
    gb_write(0xFFE0, gb.regs.a);
    gb.regs.d = 0;
  LoadInstrumentsBG_loop:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = 0xDC0D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(1, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadInstrumentsBG_loadInstrumentTilemap;
  LoadInstrumentsBG_loadPlaceholderTilemap:;
    gb.regs.c = 0;
    gb.regs.b = gb.regs.c;
    gb.regs.hl = 0x6BCF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0x9D;
    gb_push16(gb.regs.hl);
    gb.regs.a = 0x7C;
    gb_write(0xFFD7, gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.hl = 0x6BD7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = gb_pop16();
    goto LoadInstrumentsBG_copyToBG;
  LoadInstrumentsBG_loadInstrumentTilemap:;
    gb.regs.c = 0;
    gb.regs.b = gb.regs.c;
    gb.regs.hl = 0x6BCF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0x9D;
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x6BDF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 0x0F);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = gb_pop16();
  LoadInstrumentsBG_copyToBG:;
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.hl, gb.regs.a);
    GetInstrumentNextBGAddress();
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    GetInstrumentNextBGAddress();
    gb.regs.a = gb_read(0xFFD9);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    GetInstrumentNextBGAddress();
    gb.regs.a = gb_read(0xFFDA);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.hl = 0xFFE0;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto LoadInstrumentsBG_loop;
    return;
}

void GetInstrumentNextBGAddress(void) {
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x6BE7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.l);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb.regs.h;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.h = gb.regs.a;
    return;
}

void LoadSirenInstrumentTiles(void) {
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
    gb.regs.hl = 0x4050;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    CopySirenInstrumentTiles();
    gb.regs.a = gb_read(0xFF92);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF92, gb.regs.a);
    return;
}

void RoomBorderCoordinates(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $06, $07, $08, $09, $0A, $0B */;
    /* data: db $10,                                                   $1B */;
    /* data: db $20,                                                   $2B */;
    /* data: db $30,                                                   $3B */;
    /* data: db $40,                                                   $4B */;
    /* data: db $50,                                                   $5B */;
    /* data: db $60,                                                   $6B */;
    /* data: db $70,                                                   $7B */;
    /* data: db $80,                                                   $8B */;
    /* data: db $90, $91, $92, $93, $94, $95, $96, $97, $98, $99, $9A, $9B */;
    /* data: db $FF */;
}

void PadRoomObjectsArea(void) {
    gb.regs.bc = 0x6A6F;
  PadRoomObjectsArea_loop:;
    gb.regs.a = gb_read(gb.regs.bc);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto PadRoomObjectsArea_end;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD7B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.bc++;
    goto PadRoomObjectsArea_loop;
  PadRoomObjectsArea_end:;
    return;
}

void LoadTileset0F(void) {
    gb.regs.bc = 0x0400;
    gb.regs.hl = 0x9800;
  LoadTileset0F_loop:;
    gb.regs.e = 0;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto LoadTileset0F_jr_001_6CF1;
    gb.regs.e = alu_inc8(gb.regs.e);
  LoadTileset0F_jr_001_6CF1:;
    gb.regs.d = 0xAE;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto LoadTileset0F_jr_001_6CFA;
    gb.regs.d = alu_inc8(gb.regs.d);
  LoadTileset0F_jr_001_6CFA:;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_C()) goto LoadTileset0F_jr_001_6D02;
    gb_write(gb.regs.hl, gb.regs.d);
  LoadTileset0F_jr_001_6D02:;
    gb.regs.hl++;
    gb.regs.bc--;
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    if (!GET_FLAG_Z()) goto LoadTileset0F_loop;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadTileset0F_jr_001_6D10;
    func_001_6D11();
  LoadTileset0F_jr_001_6D10:;
    return;
}

void func_001_6D11(void) {
    gb.regs.d = 5;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto func_001_6D11_jr_6D1C;
    gb.regs.d = 6;
  func_001_6D11_jr_6D1C:;
    /* TODO: :  */;
    gb.regs.a = 1;
    gb_write(0xFF4F, gb.regs.a);
    gb.regs.hl = 0x9800;
    gb.regs.bc = 0x0400;
  func_001_6D11_loop_6D26:;
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc--;
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    if (!GET_FLAG_Z()) goto func_001_6D11_loop_6D26;
    gb.regs.a = 0;
    gb_write(0xFF4F, gb.regs.a);
    return;
}

void WriteDMACodeToHRAM(void) {
    gb.regs.c = hDMARoutine____100;
    gb.regs.b = 9;
    gb.regs.hl = 0x6B14;
  WriteDMACodeToHRAM_copy:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto WriteDMACodeToHRAM_copy;
    return;
}

void DMARoutine(void) {
    gb.regs.a = 0xC0;
    gb_write(0xFF46, gb.regs.a);
    gb.regs.a = 0x28;
  DMARoutine_wait:;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto DMARoutine_wait;
    return;
}

void DMARoutineEnd(void) {
    IntroRainTiles();
    IntroRainTiles(); return;
}

void IntroRainTiles(void) {
    MinimapEntrancePosition();
    MinimapEntrancePosition(); return;
}

void MinimapEntrancePosition(void) {
    /* data: dw vBGMap1 + $20B + MINIMAP_ARROW_TAIL_CAVE */;
    /* data: dw vBGMap1 + $20B + MINIMAP_ARROW_BOTTLE_GROTTO */;
    /* data: dw vBGMap1 + $20B + MINIMAP_ARROW_KEY_CAVERN */;
    /* data: dw vBGMap1 + $20B + MINIMAP_ARROW_ANGLERS_TUNNEL */;
    /* data: dw vBGMap1 + $20B + MINIMAP_ARROW_CATFISHS_MAW */;
    /* data: dw vBGMap1 + $20B + MINIMAP_ARROW_FACE_SHRINE */;
    /* data: dw vBGMap1 + $20B + MINIMAP_ARROW_EAGLES_TOWER */;
    /* data: dw vBGMap1 + $20B + MINIMAP_ARROW_TURTLE_ROCK */;
    /* data: dw $0 */;
    /* data: dw $0 */;
    /* data: dw $0 */;
    /* data: dw $0 */;
    /* data: dw $0 */;
    /* data: dw $0 */;
    /* data: dw $0 */;
    /* data: dw vBGMap1 + $20B + MINIMAP_ARROW_COLOR_DUNGEON */;
}

void UpdateMinimapEntranceArrowAndReturn(void) {
    gb.regs.a = gb_read(4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateMinimapEntranceArrowAndReturn_return;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto UpdateMinimapEntranceArrowAndReturn_notColorDungeon;
    gb.regs.a = 0x0F;
    goto UpdateMinimapEntranceArrowAndReturn_endIf;
  UpdateMinimapEntranceArrowAndReturn_notColorDungeon:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto UpdateMinimapEntranceArrowAndReturn_return;
  UpdateMinimapEntranceArrowAndReturn_endIf:;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6B2D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb_write(gb.regs.hl, 0xA3);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateMinimapEntranceArrowAndReturn_return;
    gb_write(gb.regs.hl, 0x7F);
  UpdateMinimapEntranceArrowAndReturn_return:;
    return;
}

void IntroSeaPaletteTable(void) {
    /* data: db $C6, $C2, $C0, $C2 */;
}

void IntroHandlerEntryPoint(void) {
    gb.regs.a = gb_read(0xFFB5);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto IntroHandlerEntryPoint_checkJoypad;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFFB5, gb.regs.a);
    RenderIntroFrame(); return;
  IntroHandlerEntryPoint_checkJoypad:;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { RenderIntroFrame(); return; };
    label_27F2();
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto IntroHandlerEntryPoint_transitionToFileMenu;
    gb.regs.a = 0x28;
    gb_write(0xFFB5, gb.regs.a);
    gb.regs.a = 0x11;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto IntroHandlerEntryPoint_isGBC;
    gb.regs.a = gb_read(0x789B);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = gb_read(0x789F);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = 4;
    goto IntroHandlerEntryPoint_paletteEnd;
  IntroHandlerEntryPoint_isGBC:;
    gb.regs.a = 1;
    ClearFileMenuBG_trampoline();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7D, gb.regs.a);
    gb.regs.a = 8;
  IntroHandlerEntryPoint_paletteEnd:;
    gb_write(0xD213, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC280, gb.regs.a);
    gb_write(0xC281, gb.regs.a);
    gb_write(0xC282, gb.regs.a);
    gb_write(0xC283, gb.regs.a);
    gb_write(0xC284, gb.regs.a);
    gb_write(0xFF47, gb.regs.a);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xC17E, gb.regs.a);
    ResetIntroTimers();
    gb.regs.a = 0x0D;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xD20F, gb.regs.a);
    func_001_7D4E();
    goto IntroHandlerEntryPoint_enableVBlankInterruptAndReturn;
  IntroHandlerEntryPoint_transitionToFileMenu:;
    TransitionToFileMenu(); return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xFF47, gb.regs.a);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0xDC3D;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  IntroHandlerEntryPoint_enableVBlankInterruptAndReturn:;
    gb.regs.a = 1;
    gb_write(0xFFFF, gb.regs.a);
    gb.regs.a = 0x4F;
    gb_write(0xFF45, gb.regs.a);
    return;
}

void RenderIntroFrame(void) {
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) goto RenderIntroFrame_dispatchScene;
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) goto RenderIntroFrame_dispatchScene;
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderIntroFrame_decrementEnd;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD200, gb.regs.a);
  RenderIntroFrame_decrementEnd:;
    alu_rra();
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6EDC; /* IntroSeaPaletteTable - DX V1.2 address */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    UpdateIntroSeaBGPalettes_trampoline();
  RenderIntroFrame_dispatchScene:;
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: IntroSceneStage0Handler(); return;
        case 0x01: IntroSceneStage1Handler(); return;
        case 0x02: IntroSceneStage2Handler(); return;
        case 0x03: IntroShipOnSeaHandler(); return;
        case 0x04: IntroLinkFaceHandler(); return;
        case 0x05: IntroStage5Handler(); return;
        case 0x06: IntroStage6Handler(); return;
        case 0x07: IntroBeachHandler(); return;
        case 0x08: IntroStage8Handler(); return;
        case 0x09: TitleScreenSfxHandler(); return;
        case 0x0A: IntroStageAHandler(); return;
        case 0x0B: TitleScreenHandler(); return;
        case 0x0C: IntroStageCHandler(); return;
        case 0x0D: IntroStageDHandler(); return;
    }
}

void IntroSceneStage0Handler(void) {
    ClearLowerAndMiddleWRAM();
    label_27F2();
    gb.regs.a = 1;
    ClearFileMenuBG_trampoline();
    gb.regs.a = 0x1A;
    SetWorldMusicTrack();
    gb.regs.a = 2;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE7, gb.regs.a);
    gb.regs.a = 0xA2;
    gb_write(0xC13D, gb.regs.a);
    gb.regs.a = gb_read(0xFF40);
    gb.regs.a = alu_and8(gb.regs.a, -33);
    gb_write(0xD7B2, gb.regs.a);
    gb_write(0xFF40, gb.regs.a);
    gb.regs.a = 0xB4;
    gb_write(0xD216, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD217, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void IntroSceneStage1Handler(void) {
    gb.regs.a = 0x10;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7D, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void IntroSceneStage2Handler(void) {
    func_001_7D01();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto IntroSceneStage2Handler_notGBC;
    gb.regs.a = 0x25;
    goto IntroSceneStage2Handler_bgMapEnd;
  IntroSceneStage2Handler_notGBC:;
    gb.regs.a = 0x0E;
  IntroSceneStage2Handler_bgMapEnd:;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = 0xE0;
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFFF, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xFF45, gb.regs.a);
    gb.regs.e = 0x11;
    gb.regs.hl = 0xD200;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  IntroSceneStage2Handler_loop:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto IntroSceneStage2Handler_loop;
    gb_write(0xC280, gb.regs.a);
    gb_write(0xC281, gb.regs.a);
    gb_write(0xC3B0, gb.regs.a);
    gb_write(0xC3B1, gb.regs.a);
    gb_write(0xC3B2, gb.regs.a);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.a = 5;
    gb_write(0xC282, gb.regs.a);
    gb.regs.a = 0xC0;
    gb_write(0xC202, gb.regs.a);
    gb.regs.a = 0x4E;
    gb_write(0xC212, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC340, gb.regs.a);
    gb_write(0xC341, gb.regs.a);
    gb_write(0xC342, gb.regs.a);
    gb_write(0xC343, gb.regs.a);
    IncrementGameplaySubtypeAndReturn(); return;
}

void Data_001_6F93(void) {
    /* data: db $81, $40, $00, $00, $00, $00, $00, $00, $00 */;
}

void Data_001_6F9C(void) {
    /* data: db $08, $08, $08, $04, $00, $00, $00, $00, $00 */;
}

void IntroShipOnSeaHandler(void) {
    RenderRain();
    RenderIntroEntities();
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto IntroShipOnSeaHandler_jr_001_7014;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD202, gb.regs.a);
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_C()) goto IntroShipOnSeaHandler_jp_001_7013;
    gb.regs.a = alu_sub8(gb.regs.a, 0x18);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6F93;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x6F9C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    func_020_6A30_trampoline();
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto IntroShipOnSeaHandler_jp_001_7013;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC280, gb.regs.a);
    gb_write(0xC281, gb.regs.a);
    gb_write(0xC282, gb.regs.a);
    gb_write(0xC290, gb.regs.a);
    gb.regs.a = 5;
    gb_write(0xDC3E, gb.regs.a);
    gb_write(0xD20F, gb.regs.a);
    func_001_7D4E();
    gb.regs.a = 0x11;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xD201, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xC100, gb.regs.a);
    gb_write(0xC102, gb.regs.a);
    gb_write(0xC103, gb.regs.a);
    gb.regs.a = 0x92;
    gb_write(0xC101, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFFF, gb.regs.a);
  IntroShipOnSeaHandler_jp_001_7013:;
    return;
  IntroShipOnSeaHandler_jr_001_7014:;
    gb.regs.a = gb_read(0xC202);
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_Z()) goto IntroShipOnSeaHandler_transitionEnd;
    gb.regs.a = 0xFF;
    gb_write(0xFF47, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFFFF, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    return;
  IntroShipOnSeaHandler_transitionEnd:;
    func_001_7D01();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { IntroShipOnSeaReturn(); return; };
    gb.regs.hl = 0xFF96;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC200;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl++;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl++;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.c = 0;
    gb.regs.a = gb_read(0xFF96);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto IntroShipOnSeaHandler_jr_001_7068;
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto IntroShipOnSeaHandler_jr_001_7068;
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, 0x38);
    if (GET_FLAG_Z()) goto IntroShipOnSeaHandler_jr_001_7068;
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, 0x58);
    if (GET_FLAG_Z()) goto IntroShipOnSeaHandler_jr_001_7068;
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, 0x5A);
    if (GET_FLAG_Z()) goto IntroShipOnSeaHandler_jr_001_7068;
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, 0x69);
    if (!GET_FLAG_Z()) { IntroShipOnSeaReturn(); return; };
  IntroShipOnSeaHandler_jr_001_7068:;
    gb.regs.e = 1;
    gb.regs.d = 0;
  IntroShipOnSeaHandler_loop:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { RenderLightning(); return; };
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto IntroShipOnSeaHandler_loop;
    return;
}

void Data_001_707B(void) {
    /* data: db $28, $78, $60, $38, $68, $58 */;
}

void Data_001_7081(void) {
    /* data: db 4, 2, 1, 4, 3, 1 */;
}

void RenderLightning(void) {
    gb.regs.b = 0;
    gb.regs.hl = 0x7081;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x707B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
  RenderLightning_playSfx:;
    gb.regs.a = 0x1C;
    gb_write(0xD200, gb.regs.a);
    PlayBombExplosionSfx();
    IntroShipOnSeaReturn(); return;
}

void IntroShipOnSeaReturn(void) {
    return;
}

void IntroLinkFaceHandler(void) {
    RenderRain();
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD201, gb.regs.a);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto IntroLinkFaceHandler_continue;
    gb_push16(gb.regs.af);
    IntroLinkScream();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  IntroLinkFaceHandler_continue:;
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_Z()) goto IntroLinkFaceHandler_continue2;
    RenderLightning_playSfx();
  IntroLinkFaceHandler_continue2:;
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto IntroLinkFaceHandler_continue4;
    gb.regs.a = 3;
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto IntroLinkFaceHandler_notGBC;
    gb.regs.a = 0x25;
    goto IntroLinkFaceHandler_continue3;
  IntroLinkFaceHandler_notGBC:;
    gb.regs.a = 0x0E;
  IntroLinkFaceHandler_continue3:;
    gb_write(0xD7B4, gb.regs.a);
    LoadTileMapZero_trampoline();
    gb.regs.a = 3;
    gb_write(0xFFFF, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC280, gb.regs.a);
    gb_write(0xC281, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD202, gb.regs.a);
    return;
  IntroLinkFaceHandler_continue4:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    if (!GET_FLAG_Z()) goto IntroLinkFaceHandler_return;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto IntroLinkFaceHandler_return;
    RenderLightning_playSfx();
  IntroLinkFaceHandler_return:;
    return;
}

void LoadTileMapZero_trampoline(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x03;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB6;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void IntroStage5Handler(void) {
    gb.regs.a = 0x10;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    IncrementGameplaySubtype();
    return;
}

void Data_001_7128(void) {
    /* data: db 0, 0, 0, 0, $40, $40, $40, $80, $85, $85, $85, $C5, $C9, $C9, $C9, $C9 */;
}

void Data_001_7138(void) {
    /* data: db 0, 0, 0, 0, 4, 4, 4, 4, $18, $18, $18, $18, $1C, $1C, $1C, $1C */;
}

void Data_001_7148(void) {
    /* data: db 0, 0, 0, 0, $40, $40, $40, $40, $90, $90, $90, $90 */;
}

void label_7154(void) {
    gb_write(0xFFE0, gb.regs.a);
    gb_write(0xFFE0, gb.regs.a);
    IntroStage6Handler(); return;
}

void IntroStage6Handler(void) {
    func_001_71C7();
    gb.regs.a = gb_read(0xD201);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto IntroStage6Handler_jr_001_7168;
    gb_push16(gb.regs.af);
    gb.regs.a = 2;
    gb_write(0xFF45, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  IntroStage6Handler_jr_001_7168:;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD201, gb.regs.a);
    if (!GET_FLAG_Z()) goto IntroStage6Handler_jr_001_7188;
    gb.regs.a = 7;
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 6;
    gb_write(0xC280, gb.regs.a);
    gb.regs.a = 0xB0;
    gb_write(0xC200, gb.regs.a);
    gb.regs.a = 0x68;
    gb_write(0xC210, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC3D0, gb.regs.a);
    return;
  IntroStage6Handler_jr_001_7188:;
    alu_cp8(gb.regs.a, 0x34);
    if (!GET_FLAG_C()) goto IntroStage6Handler_return;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto IntroStage6Handler_jr_001_719B;
    gb.regs.a = gb_read(0xD210);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto IntroStage6Handler_jr_001_719B;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD210, gb.regs.a);
  IntroStage6Handler_jr_001_719B:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xD210);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x7128;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x7138;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.hl = 0x7148;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC41, gb.regs.a);
    func_020_6AC1_trampoline();
  IntroStage6Handler_return:;
    return;
}

void IntroBeachHandler(void) {
    RenderIntroEntities();
    return;
}

void func_001_71C7(void) {
    gb.regs.a = gb_read(0xC291);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto func_001_71C7_return;
    gb.regs.a = gb_read(0xC114);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto func_001_71C7_jr_001_71DB;
    gb.regs.a = 0x0F;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_001_71C7_jr_001_71DB:;
    gb_write(0xC114, gb.regs.a);
  func_001_71C7_return:;
    return;
}

void TitleTileMap1(void) {
    /* data: db $9A, $16, $0F */;
    /* data: db $80, $81, $82, $83, $84, $85, $86, $87, $88, $89, $8A, $8B, $8C, $8D, $8E, $8F */;
}

void TitleTileMap2(void) {
    /* data: db $9A, $36, $0F */;
    /* data: db $90, $91, $92, $93, $94, $95, $96, $97, $98, $99, $9A, $9B, $9C, $9D, $9E, $9F */;
}

void TitleTileMap3(void) {
    /* data: db $9A, $56, $0F */;
    /* data: db $A0, $A1, $A2, $A3, $A4, $A5, $A6, $A7, $A8, $A9, $AA, $AB, $AC, $AD, $AE, $AF */;
}

void TitleTileMap4(void) {
    /* data: db $9A, $76, $0F */;
    /* data: db $B0, $B1, $B2, $B3, $B4, $B5, $B6, $B7, $B8, $B9, $BA, $BB, $BC, $BD, $BE, $BF */;
}

void TitleTileMap5(void) {
    /* data: db $9A, $96, $0F */;
    /* data: db $C0, $C1, $C2, $C3, $C4, $C5, $C6, $C7, $C8, $C9, $CA, $CB, $CC, $CD, $CE, $CF */;
}

void TitleTileMap6(void) {
    /* data: db $9A, $B6, $0F */;
    /* data: db $D0, $D1, $D2, $D3, $D4, $D5, $D6, $D7, $D8, $D9, $DA, $DB, $DC, $DD, $DE, $DF */;
}

void TitleTileMap7(void) {
    /* data: db $9A, $D6, $0F */;
    /* data: db $E0, $E1, $E2, $E3, $E4, $E5, $E6, $E7, $E8, $E9, $EA, $EB, $EC, $ED, $EE, $EF */;
}

void TitleTileMap(void) {
    /* data: dw TitleTileMap4 */;
    /* data: dw TitleTileMap3 */;
    /* data: dw TitleTileMap5 */;
    /* data: dw TitleTileMap2 */;
    /* data: dw TitleTileMap6 */;
    /* data: dw TitleTileMap1 */;
    /* data: dw TitleTileMap7 */;
}

void IntroStage8Handler(void) {
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6F10;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xD5C2;
    gb.regs.c = 0x13;
  IntroStage8Handler_loop:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto IntroStage8Handler_loop;
    gb_write(gb.regs.hl, 0);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto IntroStage8Handler_gbc;
    func_001_7338();
  IntroStage8Handler_gbc:;
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD202, gb.regs.a);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto IntroStage8Handler_return;
    IncrementGameplaySubtype();
  IntroStage8Handler_return:;
    return;
}

void TitleAttrMap1(void) {
    /* data: db $9A, $16, $0F */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void TitleAttrMap2(void) {
    /* data: db $9A, $36, $0F */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void TitleAttrMap3(void) {
    /* data: db $9A, $56, $0F */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void TitleAttrMap4(void) {
    /* data: db $9A, $76, $0F */;
    /* data: db $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01 */;
}

void TitleAttrMap5(void) {
    /* data: db $9A, $96, $0F */;
    /* data: db $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02 */;
}

void TitleAttrMap6(void) {
    /* data: db $9A, $B6, $0F */;
    /* data: db $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02 */;
}

void TitleAttrMap7(void) {
    /* data: db $9A, $D6, $0F */;
    /* data: db $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $02 */;
}

void TitleAttrMap4__dup01(void) {
    /* data: db $9A, $76, $0F */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void TitleAttrMap5__dup01(void) {
    /* data: db $9A, $96, $0F */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void TitleAttrMap6__dup01(void) {
    /* data: db $9A, $B6, $0F */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void TitleAttrMap7__dup01(void) {
    /* data: db $9A, $D6, $0F */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void TitleAttrMap(void) {
    /* data: dw TitleAttrMap4 */;
    /* data: dw TitleAttrMap3 */;
    /* data: dw TitleAttrMap5 */;
    /* data: dw TitleAttrMap2 */;
    /* data: dw TitleAttrMap6 */;
    /* data: dw TitleAttrMap1 */;
    /* data: dw TitleAttrMap7 */;
}

void func_001_7338(void) {
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x7025;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xDD39;
    gb.regs.c = 0x13;
  func_001_7338_loop_734C:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_001_7338_loop_734C;
    gb_write(gb.regs.hl, 0);
    return;
}

void TitleScreenSfxHandler(void) {
    gb.regs.a = gb_read(0xC17E);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) goto TitleScreenSfxHandler_return;
    gb.regs.a = 0x19;
    gb_write(0xFFF4, gb.regs.a);
    IncrementGameplaySubtype();
  TitleScreenSfxHandler_return:;
    return;
}

void TitleScreenCopyrightDrawCommand(void) {
    /* data: db $9B, $B7, $0D, $65, $66, $67, $68, $69 */;
    /* data: db $6A, $6B, $6C, $6D, $6E, $6F, $70, $71 */;
    /* data: db $72, $00 */;
}

void IntroStageAHandler(void) {
    gb.regs.de = 0x7060;
    gb.regs.hl = 0xD5C2;
    gb.regs.c = 0x12;
  IntroStageAHandler_loop:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto IntroStageAHandler_loop;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto IntroStageAHandler_gbc;
    func_001_79AE();
    goto IntroStageAHandler_endIf;
  IntroStageAHandler_gbc:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    func_001_79C2();
    func_001_73B1();
  IntroStageAHandler_endIf:;
    gb.regs.a = 0x3C;
    gb_write(0xD215, gb.regs.a);
    IncrementGameplaySubtype();
    ResetIntroTimers(); return;
}

void ResetIntroTimers(void) {
    gb.regs.a = 0xA0;
    gb_write(0xD201, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD202, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xD203, gb.regs.a);
    return;
}

void CopyrightAttrmap(void) {
    /* data: db $9B, $B7, $4D, $07, $00 */;
}

void func_001_73B1(void) {
    gb.regs.de = 0x70A3;
    gb.regs.hl = 0xDD39;
    gb.regs.c = 0x12;
  func_001_73B1_loop:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_001_73B1_loop;
    return;
}

void Data_001_73C0(void) {
    /* data: db $18, $18, $38, $40, $58, $60, $80, $88 */;
}

void Data_001_73C8(void) {
    /* data: db $20, $48, $44, $28, $44, $28, $28, $40 */;
}

void TitleScreenHandler(void) {
    RenderIntroEntities();
    func_001_7920();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto TitleScreenHandler_jr_001_7418;
    gb.regs.e = 1;
    gb.regs.d = 0;
  TitleScreenHandler_loop:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TitleScreenHandler_jr_001_73F0;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto TitleScreenHandler_loop;
    goto TitleScreenHandler_jr_001_7418;
  TitleScreenHandler_jr_001_73F0:;
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x3F);
    gb.regs.a = gb_read(0xD203);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD203, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x73C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x73C8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  TitleScreenHandler_jr_001_7418:;
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD202, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto TitleScreenHandler_return;
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD201, gb.regs.a);
    if (!GET_FLAG_Z()) goto TitleScreenHandler_return;
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    ResetMusicFadeTimer();
  TitleScreenHandler_return:;
    return;
}

void IntroStageCHandler(void) {
    func_1A22();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto IntroStageCHandler_return;
    func_001_6162(); return;
  IntroStageCHandler_return:;
    return;
}

void IntroStageDHandler(void) {
    gb.regs.a = 0x11;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 0xC9;
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD218, gb.regs.a);
    return;
}

void RenderRain(void) {
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x18);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFD8, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x18);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC04C;
    gb.regs.c = 0x10;
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto RenderRain_loop;
    gb.regs.c = 0x15;
  RenderRain_loop:;
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.hl++, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = 0x28;
    if (GET_FLAG_Z()) goto RenderRain_next;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.a = alu_add8(gb.regs.a, 0x70);
  RenderRain_next:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, 0x1C);
    gb_write(0xFFD7, gb.regs.a);
    alu_cp8(gb.regs.a, 0xA0);
    if (GET_FLAG_C()) goto RenderRain_continue;
    gb.regs.a = alu_sub8(gb.regs.a, 0x98);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, 0x25);
    gb_write(0xFFD8, gb.regs.a);
  RenderRain_continue:;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto RenderRain_loop;
    return;
}

void Data_001_74B8(void) {
    /* data: db $99, $2B, $83, $1E, $20, $22, $24, $99, $2C, $83, $1F, $21, $23, $25, 0 */;
}

void IntroLinkScream(void) {
    gb.regs.de = 0xD5C2;
    gb.regs.hl = 0x74B8;
    gb.regs.c = 0x0F;
  IntroLinkScream_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto IntroLinkScream_loop;
    return;
}

void RenderIntroEntities(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.c = 2;
    gb.regs.b = 0;
  RenderIntroEntities_loop:;
    gb.regs.a = gb.regs.c;
    gb_write(0xC123, gb.regs.a);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderIntroEntities_continue;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF0, gb.regs.a);
    RenderIntroEntity();
  RenderIntroEntities_continue:;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto RenderIntroEntities_loop;
    return;
}

void RenderIntroEntity(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { RenderIntroShip(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { RenderIntroMarin(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { RenderIntroInertLink(); return; };
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { RenderIntroSparkle(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto RenderIntroEntity_jp_7533;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  RenderIntroEntity_jp_7533:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    func_001_762B();
    return;
}

void IntroShipTiles(void) {
    /* data: db $00, $00, $1C, $02 */;
    /* data: db $00, $08, $1E, $02 */;
    /* data: db $10, $F8, $20, $02 */;
    /* data: db $10, $00, $22, $02 */;
    /* data: db $10, $08, $24, $02 */;
    /* data: db $10, $10, $26, $02 */;
}

void Data_001_7550(void) {
    /* data: db $F8, $04, $32, $01, $E8, $04, $32, $01, $D8, $04, $32, $01, $C8, $04, $32, $01 */;
}

void ShipHeaveTable(void) {
    /* data: db 2, 1, 0, 0, 0, 1, 2, 2 */;
}

void RenderIntroShip(void) {
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0;
    if (!GET_FLAG_Z()) goto RenderIntroShip_skip;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_add8(gb.regs.a, 0xD0);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
  RenderIntroShip_skip:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x7241;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x7219;
    gb.regs.de = 0xC000;
    gb_push16(gb.regs.bc);
    gb.regs.c = 6;
  RenderIntroShip_loop:;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl++;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl++;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto RenderIntroShip_loop;
    gb.regs.a = gb_read(0xD202);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) goto RenderIntroShip_return;
    gb.regs.hl = 0x7550;
    gb.regs.de = 0xC018;
    gb.regs.c = 4;
  RenderIntroShip_loop2:;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl++;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl++;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto RenderIntroShip_loop2;
  RenderIntroShip_return:;
    gb.regs.bc = gb_pop16();
    return;
}

void IntroLightningTiles(void) {
    /* data: db $00, $00, $34, $01 */;
    /* data: db $00, $08, $36, $01 */;
    /* data: db $10, $00, $2C, $01 */;
    /* data: db $20, $F8, $2C, $01 */;
    /* data: db $28, $00, $2E, $21 */;
    /* data: db $30, $F0, $2E, $01 */;
    /* data: db $08, $00, $36, $21 */;
    /* data: db $08, $08, $34, $21 */;
    /* data: db $18, $00, $30, $01 */;
    /* data: db $18, $08, $2C, $21 */;
    /* data: db $28, $10, $2E, $21 */;
    /* data: db $28, $10, $2E, $21 */;
    /* data: db $00, $08, $34, $21 */;
    /* data: db $00, $00, $36, $21 */;
    /* data: db $10, $08, $2C, $21 */;
    /* data: db $20, $10, $2C, $21 */;
    /* data: db $28, $08, $2E, $01 */;
    /* data: db $30, $18, $2E, $21 */;
    /* data: db $08, $08, $36, $01 */;
    /* data: db $08, $00, $34, $01 */;
    /* data: db $18, $08, $30, $21 */;
    /* data: db $18, $00, $2C, $01 */;
    /* data: db $28, $F8, $2E, $01 */;
    /* data: db $28, $F8, $2E, $01 */;
}

void func_001_762B(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x72B2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 6;
    RenderActiveEntitySpritesRect();
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(0xC3C0, gb.regs.a);
    return;
}

void IntroMarinSpriteVariants(void) {
  IntroMarinSpriteVariants_variant0:;
    /* data: db $00, OAM_GBC_PAL_3 */;
    /* data: db $02, OAM_GBC_PAL_3 */;
  IntroMarinSpriteVariants_variant1:;
    /* data: db $04, OAM_GBC_PAL_3 */;
    /* data: db $06, OAM_GBC_PAL_3 */;
  IntroMarinSpriteVariants_variant2:;
    /* data: db $08, OAM_GBC_PAL_3 */;
    /* data: db $0A, OAM_GBC_PAL_3 */;
  IntroMarinSpriteVariants_variant3:;
    /* data: db $0C, OAM_GBC_PAL_3 */;
    /* data: db $0E, OAM_GBC_PAL_3 */;
    RenderIntroMarin(); return;
}

void RenderIntroMarin(void) {
    func_001_71C7();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC340, gb.regs.a);
    gb.regs.de = 0x7334;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: IntroMarinState0(); return;
        case 0x01: IntroMarinState1(); return;
        case 0x02: IntroMarinState2(); return;
        case 0x03: IntroMarinState3(); return;
        case 0x04: IntroMarinState4(); return;
    }
}

void IntroMarinState0(void) {
    func_001_7D9C();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_C()) goto IntroMarinState0_jr_769C;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
  IntroMarinState0_jr_769C:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) goto IntroMarinState0_return;
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  IntroMarinState0_return:;
    return;
}

void IntroMarinState1(void) {
    func_001_7D46();
    gb.regs.a = 1;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto IntroMarinState1_jr_76D4;
    IncrementEntityState();
    gb.regs.a = 7;
    gb_write(0xC281, gb.regs.a);
    gb.regs.a = 0xFE;
    gb_write(0xC201, gb.regs.a);
    gb.regs.a = 0x6E;
    gb_write(0xC211, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC291, gb.regs.a);
    gb_write(0xC2E1, gb.regs.a);
    gb_write(0xFFE7, gb.regs.a);
    return;
  IntroMarinState1_jr_76D4:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    return;
}

void IntroMarinState2(void) {
    func_001_7D9C();
    gb.regs.a = gb_read(0xC201);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC201, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto IntroMarinState2_jr_7707;
    gb.regs.hl = 0xFF96;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) goto IntroMarinState2_jr_76F7;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState(); return;
  IntroMarinState2_jr_76F7:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto IntroMarinState2_jr_76FF;
    func_001_7A16();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  IntroMarinState2_jr_76FF:;
    alu_cp8(gb.regs.a, 0x22);
    if (!GET_FLAG_Z()) goto IntroMarinState2_jr_7707;
    func_001_7A11();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  IntroMarinState2_jr_7707:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    return;
}

void IntroMarinState3(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto IntroMarinState3_jr_7778;
    func_001_7DCF();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto IntroMarinState3_jr_776C;
    gb.regs.a = gb_read(0xC201);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC201, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto IntroMarinState3_jr_776C;
    gb.regs.hl = 0xFF96;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto IntroMarinState3_jr_7740;
    alu_cp8(gb.regs.a, 0x3A);
    if (!GET_FLAG_Z()) goto IntroMarinState3_jr_7745;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    goto IntroMarinState3_jr_7745;
  IntroMarinState3_jr_7740:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
  IntroMarinState3_jr_7745:;
    gb.regs.a = gb_read(0xFF96);
    alu_cp8(gb.regs.a, 0x56);
    if (!GET_FLAG_Z()) goto IntroMarinState3_jr_775C;
    gb.regs.a = 0xA0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFF43, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFFFF, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xE0);
    IncrementEntityState(); return;
  IntroMarinState3_jr_775C:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto IntroMarinState3_jr_7764;
    func_001_7A16();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  IntroMarinState3_jr_7764:;
    alu_cp8(gb.regs.a, 0x22);
    if (!GET_FLAG_Z()) goto IntroMarinState3_jr_776C;
    func_001_7A11();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  IntroMarinState3_jr_776C:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    return;
  IntroMarinState3_jr_7778:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    func_001_7D46();
    gb.regs.a = 1;
    SetEntitySpriteVariant(); return;
}

void IntroMarinState4(void) {
    func_001_7D46();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto IntroMarinState4_return;
    gb.regs.a = 2;
    SetEntitySpriteVariant();
    gb.regs.a = 0;
    gb_write(0xC3B1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto IntroMarinState4_jr_779A;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  IntroMarinState4_jr_779A:;
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_C()) goto IntroMarinState4_return;
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_C()) goto IntroMarinState4_jr_77B2;
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) goto IntroMarinState4_return;
    alu_cp8(gb.regs.a, 0x4A);
    if (!GET_FLAG_C()) goto IntroMarinState4_jr_77B2;
    alu_cp8(gb.regs.a, 0x3C);
    if (!GET_FLAG_C()) goto IntroMarinState4_return;
    alu_cp8(gb.regs.a, 0x36);
    if (GET_FLAG_C()) goto IntroMarinState4_return;
  IntroMarinState4_jr_77B2:;
    gb.regs.a = 3;
    SetEntitySpriteVariant();
    gb.regs.a = 1;
    gb_write(0xC3B1, gb.regs.a);
  IntroMarinState4_return:;
    return;
}

void IntroSparkleSpriteVariants(void) {
  IntroSparkleSpriteVariants_variant0:;
    /* data: db $38, OAMF_PAL0 */;
    /* data: db $38, OAMF_PAL0 | OAMF_XFLIP */;
  IntroSparkleSpriteVariants_variant1:;
    /* data: db $3A, OAMF_PAL0 */;
    /* data: db $3A, OAMF_PAL0 | OAMF_XFLIP */;
  IntroSparkleSpriteVariants_variant2:;
    /* data: db $3A, OAMF_PAL0 */;
    /* data: db $3A, OAMF_PAL0 | OAMF_XFLIP */;
  IntroSparkleSpriteVariants_variant3:;
    /* data: db $3C, OAMF_PAL0 */;
    /* data: db $3E, OAMF_PAL0 */;
  IntroSparkleSpriteVariants_variant4:;
    /* data: db $3C, OAMF_PAL0 */;
    /* data: db $3E, OAMF_PAL0 */;
  IntroSparkleSpriteVariants_variant5:;
    /* data: db $3A, OAMF_PAL0 */;
    /* data: db $3A, OAMF_PAL0 | OAMF_XFLIP */;
  IntroSparkleSpriteVariants_variant6:;
    /* data: db $3A, OAMF_PAL0 */;
    /* data: db $3A, OAMF_PAL0 | OAMF_XFLIP */;
  IntroSparkleSpriteVariants_variant7:;
    /* data: db $38, OAMF_PAL0 */;
    /* data: db $38, OAMF_PAL0 | OAMF_XFLIP */;
    RenderIntroSparkle(); return;
}

void RenderIntroSparkle(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC3C1, gb.regs.a);
  RenderIntroSparkle_jr_77E1:;
    /* TODO: :  */;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) goto RenderIntroSparkle_jr_77ED;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  RenderIntroSparkle_jr_77ED:;
    /* TODO: :  */;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC340, gb.regs.a);
    gb.regs.de = 0x747D;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xC3C0, gb.regs.a);
    return;
}

void DXOnDarkTilesDMG(void) {
    /* data: db $00, $10, $2C, $05 */;
    /* data: db $10, $10, $2A, $05 */;
    /* data: db $00, $10, $28, $05 */;
    /* data: db $10, $08, $26, $05 */;
    /* data: db $00, $08, $24, $05 */;
    /* data: db $10, $00, $22, $05 */;
    /* data: db $00, $00, $20, $05 */;
}

void DXOnWhiteTilesDMG(void) {
    /* data: db $10, $18, $4F, $16 */;
    /* data: db $00, $18, $4D, $16 */;
    /* data: db $10, $10, $4B, $16 */;
    /* data: db $00, $10, $49, $16 */;
    /* data: db $10, $08, $47, $16 */;
    /* data: db $00, $08, $45, $16 */;
    /* data: db $10, $00, $43, $16 */;
    /* data: db $00, $00, $41, $16 */;
  DXOnWhiteTilesDMG_end:;
    DXOnDarkTilesGBC(); return;
}

void DXOnDarkTilesGBC(void) {
    /* data: db $10, $10, $2A, $05 */;
    /* data: db $00, $10, $28, $05 */;
    /* data: db $10, $08, $26, $05 */;
    /* data: db $00, $08, $24, $05 */;
    /* data: db $10, $00, $22, $05 */;
    /* data: db $00, $00, $20, $05 */;
}

void DXOnWhiteAndJP1pxTilesGBC(void) {
    /* data: db $10, $15, $5A, $07 */;
    /* data: db $00, $15, $58, $07 */;
    /* data: db $10, $0D, $56, $07 */;
    /* data: db $00, $0D, $54, $07 */;
    /* data: db $10, $05, $52, $07 */;
    /* data: db $00, $05, $50, $07 */;
    /* data: db $10, $18, $4E, $16 */;
    /* data: db $00, $18, $4C, $16 */;
    /* data: db $10, $10, $4A, $16 */;
    /* data: db $00, $10, $48, $16 */;
    /* data: db $10, $08, $46, $16 */;
    /* data: db $00, $08, $44, $16 */;
    /* data: db $10, $00, $42, $16 */;
    /* data: db $00, $00, $40, $16 */;
  DXOnWhiteAndJP1pxTilesGBC_end:;
    DXJPShineAnimation(); return;
}

void DXJPShineAnimation(void) {
    /* data: db $10, $00, $5E, $14 */;
    /* data: db $00, $00, $5C, $14 */;
    /* data: db $10, $00, $62, $14 */;
    /* data: db $00, $60, $60, $14 */;
    /* data: db $10, $04, $66, $14 */;
    /* data: db $00, $04, $64, $14 */;
    /* data: db $10, $08, $6A, $14 */;
    /* data: db $00, $08, $68, $14 */;
    /* data: db $10, $0C, $6E, $14 */;
    /* data: db $00, $0C, $6C, $14 */;
    /* data: db $10, $10, $72, $14 */;
    /* data: db $00, $10, $70, $14 */;
    /* data: db $10, $14, $76, $14 */;
    /* data: db $00, $14, $74, $14 */;
    /* data: db $10, $18, $7A, $14 */;
    /* data: db $00, $18, $78, $14 */;
    /* data: db $10, $18, $7E, $14 */;
    /* data: db $00, $18, $7C, $14 */;
}

void DXOnDarkTilesDMG__dup01(void) {
    /* data: db $10, $18, $2E, $05 */;
    /* data: db $00, $18, $2C, $05 */;
    /* data: db $10, $10, $2A, $05 */;
    /* data: db $00, $10, $28, $05 */;
    /* data: db $10, $08, $26, $05 */;
    /* data: db $00, $08, $24, $05 */;
    /* data: db $10, $00, $22, $05 */;
    /* data: db $00, $00, $20, $05 */;
}

void DXOnWhiteTilesDMG__dup01(void) {
    /* data: db $00, $28, $52, $16 */;
    /* data: db $00, $20, $50, $16 */;
    /* data: db $10, $18, $4E, $16 */;
    /* data: db $00, $18, $4C, $16 */;
    /* data: db $10, $10, $4A, $16 */;
    /* data: db $00, $10, $48, $16 */;
    /* data: db $10, $08, $46, $16 */;
    /* data: db $00, $08, $44, $16 */;
    /* data: db $10, $00, $42, $16 */;
    /* data: db $00, $00, $40, $16 */;
  DXOnWhiteTilesDMG_end:;
    DXOnDarkTilesGBC__dup01(); return;
}

void DXOnDarkTilesGBC__dup01(void) {
    /* data: db $10, $18, $2E, $05 */;
    /* data: db $00, $18, $2C, $05 */;
    /* data: db $10, $10, $2A, $05 */;
    /* data: db $00, $10, $28, $05 */;
    /* data: db $10, $08, $26, $05 */;
    /* data: db $00, $08, $24, $05 */;
    /* data: db $10, $00, $22, $05 */;
    /* data: db $00, $00, $20, $05 */;
}

void DXOnWhiteAndJP1pxTilesGBC__dup01(void) {
    /* data: db $00, $28, $52, $16 */;
    /* data: db $00, $20, $50, $16 */;
    /* data: db $10, $18, $4E, $16 */;
    /* data: db $00, $18, $4C, $16 */;
    /* data: db $10, $10, $4A, $16 */;
    /* data: db $00, $10, $48, $16 */;
    /* data: db $10, $08, $46, $16 */;
    /* data: db $00, $08, $44, $16 */;
    /* data: db $10, $00, $42, $16 */;
    /* data: db $00, $00, $40, $16 */;
  DXOnWhiteAndJP1pxTilesGBC_end:;
    Data_001_7898(); return;
}

void Data_001_7898(void) {
    /* data: db $AC, $AC, $6C */;
    /* data: db $54, $58, $68 */;
}

void Data_001_789B(void) {
    /* data: db $1C */;
}

void Data_001_789C(void) {
    /* data: db $00, $04, $18 */;
}

void Data_001_789F(void) {
    /* data: db $1C */;
    /* data: db $6C */;
}

void DXFadeInPalette(void) {
    /* rgb #A8B8F0, #000000, #000000, #000000 */;
    /* rgb #A8B8F0, #F8F8F8, #F8F8F8, #F8F8F8 */;
    /* rgb #A8B8F0, #F8F8F8, #F8F8F8, #000000 */;
    /* rgb #A8B8F0, #202008, #101000, #000000 */;
    /* rgb #A8B8F0, #F0E8D8, #E0E0D0, #D0D0D0 */;
    /* rgb #A8B8F0, #F8F8F8, #D8D8D0, #282828 */;
    /* rgb #A8B8F0, #403810, #181800, #000000 */;
    /* rgb #A8B8F0, #F0E0B8, #C8C8B0, #B0B0B0 */;
    /* rgb #A8B8F0, #F8F8F8, #B8B8B0, #484848 */;
    /* rgb #A8B8F0, #605010, #282800, #000000 */;
    /* rgb #A8B8F0, #E8D898, #B0B088, #888888 */;
    /* rgb #A8B8F0, #F8F8F8, #989888, #707070 */;
    /* rgb #A8B8F0, #806818, #303000, #000000 */;
    /* rgb #A8B8F0, #E8C878, #989868, #686868 */;
    /* rgb #A8B8F0, #F8F8F8, #808068, #909090 */;
    /* rgb #A8B8F0, #A08018, #404000, #000000 */;
    /* rgb #A8B8F0, #E0C058, #808040, #404040 */;
    /* rgb #A8B8F0, #F8F8F8, #606040, #B8B8B8 */;
    /* rgb #A8B8F0, #C09820, #484800, #000000 */;
    /* rgb #A8B8F0, #E0B838, #686820, #202020 */;
    /* rgb #A8B8F0, #F8F8F8, #404020, #D8D8D8 */;
    /* rgb #A8B8F0, #E0B020, #505000, #000000 */;
    /* rgb #A8B8F0, #E0B020, #505000, #000000 */;
    /* rgb #A8B8F0, #F8F8F8, #282800, #F8F8F8 */;
    /* rgb #A8B8F0, #6860F8, #6860F8, #6860F8 */;
    /* rgb #A8B8F0, #F8F8F8, #F8F8F8, #F8F8F8 */;
    /* rgb #A8B8F0, #6058D8, #6860E0, #7870E8 */;
    /* rgb #A8B8F0, #D8D8D8, #E8E8E0, #F8F8E8 */;
    /* rgb #A8B8F0, #5048B8, #7060C8, #9080D8 */;
    /* rgb #A8B8F0, #B8B8B8, #D8D0C8, #F8F0D8 */;
    /* rgb #A8B8F0, #403890, #7060B0, #A090C8 */;
    /* rgb #A8B8F0, #909090, #C8C0B0, #F8E8C8 */;
    /* rgb #A8B8F0, #303070, #786090, #B8A0B0 */;
    /* rgb #A8B8F0, #707070, #B8A890, #F8E8B0 */;
    /* rgb #A8B8F0, #202048, #786078, #C8B0A0 */;
    /* rgb #A8B8F0, #484848, #A89878, #F8E0A0 */;
    /* rgb #A8B8F0, #101028, #806060, #E0C090 */;
    /* rgb #A8B8F0, #282828, #988060, #F8D890 */;
    /* rgb #A8B8F0, #000000, #886840, #F8D078 */;
    /* rgb #A8B8F0, #000000, #886840, #F8D078 */;
}

void func_001_7920(void) {
    gb.regs.hl = 0xD215;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_001_7920_jr_001_7929;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    return;
  func_001_7920_jr_001_7929:;
    gb.regs.a = 0x78;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xD218;
    gb.regs.a = 0x59;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_001_7920_jr_001_795D;
    gb.regs.a = gb_read(0xD213);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_001_7920_jr_001_797D_a;
    gb.regs.hl = 0xD214;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto func_001_7920_jr_001_7997;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD213;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_001_7920_jr_001_7997;
    func_001_79AE();
    goto func_001_7920_jr_001_7997;
  func_001_7920_jr_001_795D:;
    gb.regs.a = gb_read(0xD213);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto func_001_7920_jr_001_797D_a;
    gb.regs.hl = 0xD214;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto func_001_7920_jr_001_797D;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD213;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto func_001_7920_jr_001_797D;
    func_001_79C2();
    goto func_001_7920_jr_001_797D;
  func_001_7920_jr_001_797D_a:;
    gb.regs.hl = 0xD216;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.b);
    if (GET_FLAG_Z()) { func_001_7920_jr_001_7a63(); return; };
    gb.regs.hl--;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 1);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sbc8(gb.regs.a, 0);
    gb_write(gb.regs.hl, gb.regs.a);
    goto func_001_7920_jr_001_797D;
  func_001_7920_jr_001_7a63:;
    gb.regs.hl = 0xD212;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto func_001_7920_jr_001_7a82;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD211);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) goto func_001_7920_jr_001_7a7f;
    func_001_7BC3();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD211, gb.regs.a);
    goto func_001_7920_jr_001_797D;
  func_001_7920_jr_001_7a7f:;
    gb_write(0xD211, gb.regs.a);
  func_001_7920_jr_001_7a82:;
    gb.regs.hl = 0x7551;
    gb.regs.a = gb_read(0xD211);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.b = 0;
    gb.regs.c = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = 2;
    RenderActiveEntitySpritesRect();
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xC3C0, gb.regs.a);
  func_001_7920_jr_001_797D:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_001_7920_jr_001_7997;
    gb.regs.a = gb_read(0xD213);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto func_001_7920_jr_001_7990;
    gb.regs.hl = 0x75E2;
    gb.regs.c = 0x12;
    goto func_001_7920_render;
  func_001_7920_jr_001_7990:;
    gb.regs.hl = 0x7602;
    gb.regs.c = 0x0A;
    goto func_001_7920_render;
  func_001_7920_jr_001_7997:;
    gb.regs.a = gb_read(0xD213);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_001_7920_jr_001_79A5;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto func_001_7920_jr_001_79A5;
    gb.regs.hl = 0x759A;
    gb.regs.c = 0x12;
    goto func_001_7920_render;
  func_001_7920_jr_001_79A5:;
    gb.regs.hl = 0x75BA;
    gb.regs.c = 0x0A;
  func_001_7920_render:;
    RenderActiveEntitySpritesRect();
    return;
}

void func_001_79AE(void) {
    gb.regs.b = 0;
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x7898;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.hl = 0x789C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC41, gb.regs.a);
    return;
}

void func_001_79C2(void) {
    gb.regs.b = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.b);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.b = 0;
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x763D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = 0xDD20;
    gb.regs.e = 0x10;
  func_001_79C2_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.bc++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_001_79C2_loop;
    gb.regs.a = 0x14;
    gb_write(0xDE7B, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xDE7C, gb.regs.a);
    gb.regs.a = 0x82;
    gb_write(0xDE79, gb.regs.a);
    return;
}

void func_001_7BC3(void) {
    GetRandomByte();
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(0xD216, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD217, gb.regs.a);
    return;
}

void Data_001_79EC(void) {
    /* data: db $98, $00, $43, $7D, $98, $20, $43, $7D */;
    /* data: db $98, $40, $43, $7D, $98, $60, $43, $7D */;
    /* data: db $00 */;
}

void Data_001_79FD(void) {
    /* data: db $98, $04, $03, $7D, $7D, $4C, $4D, $98 */;
    /* data: db $24, $43, $7D, $98, $44, $43, $7D, $98 */;
    /* data: db $64, $43, $7D, $00 */;
}

void func_001_7A11(void) {
    gb.regs.hl = 0x79FD;
    jr_001_7A19(); return;
}

void func_001_7A16(void) {
    gb.regs.hl = 0x79EC;
    jr_001_7A19(); return;
}

void jr_001_7A19(void) {
    gb.regs.de = 0xD5C2;
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x18;
  jr_001_7A19_loop_7A1F:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto jr_001_7A19_loop_7A1F;
    gb.regs.bc = gb_pop16();
    return;
}

void InertLinkSpriteVariants(void) {
  InertLinkSpriteVariants_variant0:;
    /* data: db $10, OAMF_PAL0 */;
    /* data: db $12, OAMF_PAL0 */;
  InertLinkSpriteVariants_variant1:;
    /* data: db $14, OAMF_PAL0 */;
    /* data: db $16, OAMF_PAL0 */;
    RenderIntroInertLink(); return;
}

void RenderIntroInertLink(void) {
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xF0);
    if (!GET_FLAG_C()) goto RenderIntroInertLink_jr_001_7A47;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC340, gb.regs.a);
    gb.regs.de = 0x77DA;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xC3C0, gb.regs.a);
  RenderIntroInertLink_jr_001_7A47:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: InertLinkState0Handler(); return;
        case 0x01: InertLinkState1Handler(); return;
        case 0x02: InertLinkState2Handler(); return;
        case 0x03: InertLinkState3Handler(); return;
    }
}

void InertLinkState0Handler(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) goto InertLinkState0Handler_return;
    gb_write(gb.regs.hl, 0x90);
    IncrementEntityState();
  InertLinkState0Handler_return:;
    return;
}

void InertLinkState1Handler(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto InertLinkState1Handler_return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (GET_FLAG_Z()) goto InertLinkState1Handler_nextState;
  InertLinkState1Handler_return:;
    return;
  InertLinkState1Handler_nextState:;
    IncrementEntityState(); return;
}

void InertLinkState2Handler(void) {
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 0x13);
    if (GET_FLAG_Z()) goto InertLinkState2Handler_jr_7AB3;
    gb.regs.a = gb_read(0xD20E);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20E, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto InertLinkState2Handler_return;
    gb.regs.a = gb_read(0xC210);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_C()) goto InertLinkState2Handler_jr_7A8B;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC210, gb.regs.a);
  InertLinkState2Handler_jr_7A8B:;
    gb.regs.a = gb_read(0xC211);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_C()) goto InertLinkState2Handler_jr_7A96;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC211, gb.regs.a);
  InertLinkState2Handler_jr_7A96:;
    gb.regs.a = gb_read(0xFF97);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto InertLinkState2Handler_return;
    gb_push16(gb.regs.bc);
    func_7C60();
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto InertLinkState2Handler_return;
    gb.regs.a = 1;
    gb_write(0xD368, gb.regs.a);
  InertLinkState2Handler_return:;
    return;
  InertLinkState2Handler_jr_7AB3:;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x17);
    gb.regs.a = 7;
    gb_write(0xFFA9, gb.regs.a);
    gb.regs.a = 0x70;
    gb_write(0xFFAA, gb.regs.a);
    return;
}

void InertLinkState3Handler(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto InertLinkState3Handler_return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) goto InertLinkState3Handler_return;
    IncrementGameplaySubtype();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD202, gb.regs.a);
    gb_write(0xD203, gb.regs.a);
    gb_write(0xD204, gb.regs.a);
    gb_write(0xC280, gb.regs.a);
    gb_write(0xC281, gb.regs.a);
  InertLinkState3Handler_return:;
    return;
}

void TitleScreenPostBeachTilemap(void) {
    /* data: db $7C, $7C, $44, $45, $7D, $7D, $7D, $7D, $7D, $7D, $7D, $7D, $7D, $7D, $7D, $7D, $4C, $4D, $7C, $7C */;
    /* data: db $7C, $7C, $7C, $7C, $44, $45, $7D, $2D, $2E, $2D, $2E, $2D, $2E, $7D, $4C, $4D, $7C, $7C, $7C, $7C */;
    /* data: db $7C, $7C, $7C, $7C, $7C, $77, $46, $7E, $7E, $7E, $7E, $7E, $7E, $4B, $79, $7C, $7C, $7C, $7C, $7C */;
    /* data: db $7C, $7C, $7C, $77, $75, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $75, $78, $7C, $7C, $7C */;
    /* data: db $7C, $7C, $77, $7A, $7A, $74, $73, $74, $5C, $5D, $5E, $5F, $73, $74, $73, $7A, $7E, $78, $7C, $7C */;
    /* data: db $7C, $7C, $73, $75, $78, $77, $78, $79, $58, $59, $5A, $5B, $79, $79, $77, $75, $7E, $74, $7C, $7C */;
    /* data: db $7C, $7C, $7C, $73, $74, $76, $73, $7A, $54, $55, $56, $57, $7A, $74, $76, $73, $74, $7C, $7C, $7C */;
    /* data: db $77, $78, $7C, $79, $7C, $7C, $7C, $7C, $50, $51, $52, $53, $7C, $7C, $7C, $7C, $7C, $7C, $77, $78 */;
    /* data: db $7E, $7E, $75, $7E, $78, $77, $75, $78, $79, $2B, $2C, $79, $79, $77, $75, $78, $77, $75, $7E, $7E */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
    /* data: db $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E, $7E */;
}

void func_7C60(void) {
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_7C60_jr_7C70;
    gb.regs.a = 0xF4;
    gb_write(0xD20B, gb.regs.a);
    gb.regs.a = 0x9B;
    gb_write(0xD20C, gb.regs.a);
  func_7C60_jr_7C70:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xD20A);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = gb.regs.e;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.d = gb.regs.a;
    gb.regs.c = 0;
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb_read(0xD20C);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xD20B);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x13;
    gb_write(gb.regs.hl++, gb.regs.a);
  func_7C60_loop:;
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x786F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_Z()) goto func_7C60_loop;
    gb_write(gb.regs.hl, 0);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_7C60_jr_7CB6;
    func_001_7CCB();
  func_7C60_jr_7CB6:;
    gb.regs.hl = 0xD20A;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xD20B);
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb_write(0xD20B, gb.regs.a);
    gb.regs.a = gb_read(0xD20C);
    gb.regs.a = alu_sbc8(gb.regs.a, 0);
    gb_write(0xD20C, gb.regs.a);
    return;
}

void func_001_7CCB(void) {
    gb.regs.hl = 0xDD39;
    gb.regs.a = gb_read(0xD20C);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xD20B);
    gb.regs.a = alu_sub8(gb.regs.a, 0x14);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x5F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
}

void Data_001_7CE1(void) {
    /* data: db $00, $50, $80, $50, $00, $51, $80, $51 */;
}

void Data_001_7CE9(void) {
    /* data: db $00, $52, $80, $52, $00, $53, $80, $53 */;
}

void Data_001_7CF1(void) {
    /* data: db $00, $02, $04, $06, $06, $04, $02, $00 */;
}

void IntroBGVerticalOffsetTable(void) {
    /* data: db 3, 2, 1, 0, 0, 1, 2, 3 */;
}

void func_001_7D01(void) {
    gb.regs.hl = 0xC100;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_001_7D01_jr_001_7D0B;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7D01_jr_001_7D0B:;
    gb.regs.hl++;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto func_001_7D01_jr_001_7D13;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7D01_jr_001_7D13:;
    gb.regs.hl++;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto func_001_7D01_jr_001_7D1B;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7D01_jr_001_7D1B:;
    gb.regs.hl++;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto func_001_7D01_jr_001_7D23;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7D01_jr_001_7D23:;
    gb.regs.hl++;
    gb.regs.a = gb_read(0xD204);
    gb.regs.a = alu_add8(gb.regs.a, 0x28);
    gb_write(0xD204, gb.regs.a);
    if (!GET_FLAG_C()) goto func_001_7D01_jr_001_7D2F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7D01_jr_001_7D2F:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_add8(gb.regs.a, 0xFC);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x7A73;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = 0;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC106, gb.regs.a);
    func_001_7D46(); return;
}

void func_001_7D46(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) { ret_001_7D9B(); return; };
}

void func_001_7D4E(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x7CF1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0x7CE1;
    gb.regs.a = gb_read(0xD20F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_001_7D4E_jr_001_7D6A;
    gb.regs.hl = 0x7CE9;
  func_001_7D4E_jr_001_7D6A:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.de = 0x8900;
    gb.regs.a = gb_read(0xD20F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_001_7D4E_jr_001_7D7A;
    gb.regs.de = 0x9300;
  func_001_7D4E_jr_001_7D7A:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.l);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb.regs.l;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = gb.regs.h;
    gb_write(0xD207, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(0xD208, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(0xD209, gb.regs.a);
    ret_001_7D9B(); return;
}

void ret_001_7D9B(void) {
    return;
}

void func_001_7D9C(void) {
    gb.regs.hl = 0xC100;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_001_7D9C_jr_001_7DA6;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7D9C_jr_001_7DA6:;
    gb.regs.hl = 0xC101;
    gb.regs.a = gb_read(0xD204);
    gb.regs.a = alu_add8(gb.regs.a, 0x50);
    gb_write(0xD204, gb.regs.a);
    if (!GET_FLAG_C()) goto func_001_7D9C_jr_001_7DB4;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7D9C_jr_001_7DB4:;
    gb.regs.hl++;
    gb.regs.a = gb_read(0xD205);
    gb.regs.a = alu_add8(gb.regs.a, 0x58);
    gb_write(0xD205, gb.regs.a);
    if (!GET_FLAG_C()) goto func_001_7D9C_jr_001_7DC0;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7D9C_jr_001_7DC0:;
    gb.regs.hl++;
    gb.regs.a = gb_read(0xD20D);
    gb.regs.a = alu_add8(gb.regs.a, 0xB0);
    gb_write(0xD20D, gb.regs.a);
    if (!GET_FLAG_C()) goto func_001_7D9C_jr_001_7DCC;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7D9C_jr_001_7DCC:;
    func_001_7D46(); return;
}

void func_001_7DCF(void) {
    gb.regs.hl = 0xC100;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto func_001_7DCF_jr_001_7DD9;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7DCF_jr_001_7DD9:;
    gb.regs.hl = 0xC101;
    gb.regs.a = gb_read(0xD204);
    gb.regs.a = alu_add8(gb.regs.a, 0x28);
    gb_write(0xD204, gb.regs.a);
    if (!GET_FLAG_C()) goto func_001_7DCF_jr_001_7DE7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7DCF_jr_001_7DE7:;
    gb.regs.hl++;
    gb.regs.a = gb_read(0xD205);
    gb.regs.a = alu_add8(gb.regs.a, 0x2C);
    gb_write(0xD205, gb.regs.a);
    if (!GET_FLAG_C()) goto func_001_7DCF_jr_001_7DF3;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7DCF_jr_001_7DF3:;
    gb.regs.hl++;
    gb.regs.a = gb_read(0xD20D);
    gb.regs.a = alu_add8(gb.regs.a, 0x58);
    gb_write(0xD20D, gb.regs.a);
    if (!GET_FLAG_C()) goto func_001_7DCF_jr_001_7DFF;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_001_7DCF_jr_001_7DFF:;
    func_001_7D46(); return;
}
