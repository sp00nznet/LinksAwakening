/* Auto-generated from LADX Disassembly - Bank 0x02 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void OverworldMusicTracks(void);
void HouseMusicTracks(void);
void MusicOverridesPowerUpTrack(void);
void SelectMusicTrackAfterTransition(void);
void SpawnChestWithItem(void);
void UseOcarina(void);
void jr_002_4237(void);
void jr_002_4241(void);
void HookshotChainSpeedX(void);
void HookshotChainSpeedY(void);
void FireHookshot(void);
void LinkMotionDefault(void);
void func_002_4338(void);
void DirectionToLinkAnimationState(void);
void func_002_434A(void);
void func_002_436C(void);
void MoveLinkToPressedButtonDirection(void);
void func_002_438F(void);
void jr_002_43BA(void);
void jr_002_43F4(void);
void jr_002_4402(void);
void jr_002_442A(void);
void jr_002_4459(void);
void label_002_4464(void);
void jr_002_44A2(void);
void jr_002_44A9(void);
void func_002_44AD(void);
void label_002_44B5(void);
void func_002_44C2(void);
void jr_002_44E3(void);
void Data_002_44E7(void);
void ApplyLinkGroundMotion(void);
void shallowWaterVfx(void);
void LinkDirectionToStaticSwordCollitionCheckNeeded(void);
void LinkDirectionTo_wC141(void);
void LinkDirectionToOffset(void);
void LinkDirectionTo_wC143(void);
void LinkDirectionToSwordDirection(void);
void LinkDirectionToLinkAnimationState1(void);
void LinkDirectionTo_wC13A(void);
void LinkDirectionTo_wC139(void);
void LinkDirectionTo_wC13C(void);
void LinkDirectionTo_wC13B(void);
void SwordAnimationStateToUnknow(void);
void UnkownToLinkStateTable(void);
void FrameCounterToLinkDirection(void);
void LinkDirectionToSwordAnimationState(void);
void LinkDirectionToAbsolute(void);
void UpdateSpinAttackAnimation(void);
void label_002_476B(void);
void jr_002_4789(void);
void UpdateLinkAnimation(void);
void label_002_4827(void);
void label_002_48B0(void);
void HorizontalIncrementForLinkPosition(void);
void VerticalIncrementForLinkPosition(void);
void JoypadToLinkDirection(void);
void LinkAnimationsLists(void);
void LinkAnimationsList_WalkingNoShield(void);
void LinkAnimationsList_WalkCarryingDefaultShield(void);
void LinkAnimationsList_WalkUsingDefaultShield(void);
void LinkAnimationsList_WalkCarryingMirrorShield(void);
void LinkAnimationsList_WalkUsingMirrorShield(void);
void LinkAnimationsList_PushingObject(void);
void LinkAnimationsList_LiftingObject(void);
void Data_002_4948(void);
void Data_002_4950(void);
void LinkAnimationsList_WalkSideScrolling(void);
void LinkMotionUnstuckingHandler(void);
void jr_002_49AA(void);
void Data_002_49CA(void);
void Data_002_4A12(void);
void Data_002_4A14(void);
void LinkPlayingOcarinaHandler(void);
void jr_002_4A6C(void);
void jr_002_4A7A(void);
void jr_002_4A7C(void);
void jr_002_4AB2(void);
void jr_002_4AD1(void);
void LinkDirectionToLinkAnimationState2(void);
void func_002_4B49(void);
void LinkDirectionToAdjacentTileIndexX(void);
void LinkDirectionToAdjacentTileIndexY(void);
void func_002_4BC8(void);
void func_002_4BD4(void);
void jr_002_4C0F(void);
void func_002_4C14(void);
void jr_002_4C8B(void);
void label_002_4C92(void);
void jr_002_4CC1(void);
void ret_002_4D1F(void);
void func_002_4D20(void);
void label_002_4D97(void);
void func_002_4DFC(void);
void Data_002_4E1C(void);
void func_002_4E2C(void);
void func_002_4E48(void);
void LinkRevolvingDoorAnimation(void);
void LinkMotionRevolvingDoorHandler(void);
void jr_002_4E9D(void);
void func_002_4EDD(void);
void ret_002_4EEF(void);
void Data_002_4EF0(void);
void Data_002_4F00(void);
void Data_002_4F10(void);
void Data_002_4F20(void);
void LinkMotionSwimmingHandler(void);
void label_002_4F6D(void);
void jr_002_4FA1(void);
void jr_002_4FFA(void);
void jr_002_5005(void);
void jr_002_5015(void);
void LinkMotionUnknownHandler(void);
void LinkFallingDownAnimation(void);
void LinkMotionFallingDownHandler(void);
void jr_002_512B(void);
void jr_002_5155(void);
void jr_002_515C(void);
void jr_002_516A(void);
void jr_002_51AC(void);
void HandleGotItemA(void);
void HandleGotItemB(void);
void jr_002_5234(void);
void jr_002_5237(void);
void func_002_523A(void);
void func_002_523F(void);
void jr_002_5244(void);
void func_002_524A(void);
void jr_002_524F(void);
void LinkMotionRecoverHandler(void);
void jr_002_529F(void);
void label_002_52B9(void);
void func_002_52D6(void);
void LinkDirectionToMagicRodXOffset(void);
void LinkDirectionToMagicRodYOffset(void);
void LinkDirectionToMagicRodTiles(void);
void LinkDirectionToMagicRodOAMAttributes(void);
void label_002_5310(void);
void LinkDirectionToEntitiesPositionX(void);
void LinkDirectionToEntitiesPositionY(void);
void label_002_538B(void);
void TryOpenLockedDoor(void);
void EnqueueDoorUnlockedSfx(void);
void label_002_5425(void);
void jr_002_546F(void);
void DebugWarpRooms(void);
void DebugWarpMaps(void);
void label_002_5487(void);
void renderTranscientVFXs(void);
void staircaseIsActive(void);
void RenderTranscientVfx(void);
void Data_002_559C(void);
void Data_002_55BC(void);
void RenderTranscientSwordBeam(void);
void Data_002_5600(void);
void Data_002_5603(void);
void Data_002_5607(void);
void RenderTranscientLavaSplash(void);
void Data_002_5642(void);
void RenderTranscientRumble(void);
void jr_002_568C(void);
void label_002_5707(void);
void Data_002_5708(void);
void RenderTranscientPegasusDust(void);
void Data_002_5736(void);
void RenderTranscientSmoke(void);
void Data_002_5756(void);
void Data_002_575A(void);
void RenderTranscientMovingSparkle(void);
void RenderTranscientLaserBeam(void);
void Data_002_57DD(void);
void RenderTranscientSwordPoke(void);
void Data_002_57FD(void);
void Data_002_580D(void);
void RenderTranscientPegasusSplash(void);
void RenderTranscientWaterSplash(void);
void jr_002_5833(void);
void label_002_583A(void);
void label_002_5854(void);
void Data_002_5867(void);
void label_002_5877(void);
void Data_002_5884(void);
void RenderTranscientPoof(void);
void jr_002_58C2(void);
void func_002_58D0(void);
void ClearTranscientVfx(void);
void ret_002_58EC(void);
void Data_002_58ED(void);
void label_002_58F5(void);
void ret_002_5925(void);
void func_002_5926(void);
void func_002_5928(void);
void Data_002_5937(void);
void label_002_593B(void);
void Data_002_59D4(void);
void Data_002_59D5(void);
void Data_002_5A1C(void);
void Data_002_5A2E(void);
void Data_002_5A40(void);
void Data_002_5A50(void);
void Data_002_5A60(void);
void Data_002_5A69(void);
void Data_002_5A72(void);
void func_002_5A7B(void);
void jr_002_5A95(void);
void label_002_5AA7(void);
void GetRoomStatusAddress(void);
void Data_002_5BC4(void);
void Data_002_5BC5(void);
void Data_002_5BE0(void);
void Data_002_5BE8(void);
void Data_002_5BF4(void);
void Data_002_5BFC(void);
void func_002_5C04(void);
void jr_002_5C21(void);
void label_002_5C33(void);
void ExecuteRoomTriggersAndEffects(void);
void KillAllEnemiesEffectHandler(void);
void EventEffectGuard(void);
void DropFairyEffectHandler(void);
void RevealStairwayEffectHandler(void);
void MakeEffectObjectAppear(void);
void DropKeyEffectHandler(void);
void ClearMidbossEffectHandler(void);
void OpenLockedDoorsEffectHandler(void);
void jr_002_5E63(void);
void jr_002_5E6A(void);
void func_002_5E7B(void);
void Data_002_5EA3(void);
void Data_002_5EA7(void);
void RevealChestEffectHandler(void);
void jr_002_5ECC(void);
void func_002_5ED3(void);
void jr_002_5EED(void);
void label_002_5F27(void);
void Data_002_5F54(void);
void func_002_5F5C(void);
void CheckTriggersResolution(void);
void Events(void);
void CheckKillSidescrollBossTrigger(void);
void jr_002_5FD4(void);
void CheckLightTorchesTrigger(void);
void CheckStepOnButtonTrigger(void);
void CheckKillInOrderTrigger(void);
void CheckKillEnemiesTrigger(void);
void CheckAnswerTunicsTrigger(void);
void jr_002_603E(void);
void jr_002_6064(void);
void jr_002_609B(void);
void jr_002_60BD(void);
void ClampItemCount(void);
void func_002_60E0(void);
void func_002_61BA(void);
void jr_002_61C6(void);
void label_002_61E7(void);
void UpdateRupeesCount(void);
void LoadRupeesDigits(void);
void ThresholdLowHealthTable(void);
void UpdateHealth(void);
void Data_002_63FF(void);
void LoadHeartsCount(void);
void jr_002_6442(void);
void jr_002_6459(void);
void jr_002_6462(void);
void jr_002_646B(void);
void jr_002_6477(void);
void MinimapsTable(void);
void Minimap0(void);
void Minimap1(void);
void Minimap2(void);
void Minimap3(void);
void Minimap4(void);
void Minimap5(void);
void Minimap6(void);
void Minimap7(void);
void EaglesTowerCollapsedMinimap(void);
void ColorDungeonMinimap(void);
void Data_002_66F9(void);
void LoadMinimap(void);
void label_002_67E5(void);
void func_002_67F5(void);
void func_002_67FA(void);
void func_002_67FF(void);
void func_002_6804(void);
void jr_002_6807(void);
void label_002_680B(void);
void func_002_681B(void);
void func_002_6820(void);
void jr_002_6823(void);
void label_002_6827(void);
void func_002_6837(void);
void func_002_683C(void);
void jr_002_683F(void);
void CopyDungeonMinimapPalette(void);
void jr_002_6848(void);
void jr_002_6885(void);
void Data_002_68AB(void);
void Data_002_68AE(void);
void Data_002_68B1(void);
void Data_002_68B4(void);
void jp_002_68B7(void);
void Data_002_68ED(void);
void Data_002_68FD(void);
void Data_002_690D(void);
void LinkSideScrollingDivingPhysicsHandler(void);
void jr_002_696E(void);
void jr_002_699C(void);
void jr_002_699E(void);
void LinkSideScrollingLadderPhysicsHandler(void);
void jr_002_69F1(void);
void jr_002_69F3(void);
void LinkSideScrollingPhysicsHandler(void);
void jr_002_6A4C(void);
void jr_002_6A92(void);
void jr_002_6A94(void);
void jr_002_6AD1(void);
void label_002_6ADB(void);
void jr_002_6AFC(void);
void jr_002_6B26(void);
void jr_002_6B2A(void);
void jr_002_6B32(void);
void jr_002_6B34(void);
void jr_002_6B55(void);
void func_002_6B56(void);
void AddedCollisionType(void);
void Data_002_6B5C(void);
void Data_002_6B61(void);
void label_002_6B66(void);
void jr_002_6BA2(void);
void jr_002_6BD8(void);
void jr_002_6BEB(void);
void func_002_6C2F(void);
void func_002_6C69(void);
void ret_002_6C74(void);
void CheckPositionForMapTransition(void);
void clearIncrementAndReturn(void);
void LinkCollisionPointsX(void);
void LinkCollisionPointsY(void);
void Data_002_6E25(void);
void Data_002_6E27(void);
void Data_002_6E29(void);
void LinkDirectionCompareDirection(void);
void Data_002_6E39(void);
void Data_002_6E3D(void);
void Data_002_6E41(void);
void BackgroundCollisionHandler(void);
void func_002_6EA9(void);
void func_002_6EAD(void);
void jr_002_6EB5(void);
void jr_002_6EC6(void);
void jr_002_6EDD(void);
void jr_002_6F1C(void);
void Data_002_6F28(void);
void ApplyCollisionWithObject(void);
void jr_002_6FC6(void);
void jr_002_6FD7(void);
void jr_002_6FE3(void);
void jr_002_7015(void);
void jr_002_702C(void);
void label_002_703B(void);
void jr_002_703E(void);
void label_002_7045(void);
void jr_002_7085(void);
void label_002_70D8(void);
void label_002_70DF(void);
void jr_002_7112(void);
void jr_002_7147(void);
void label_002_715F(void);
void jr_002_716E(void);
void ApplyCollisionWithLedge(void);
void ApplyCollisionWithDoor(void);
void jr_002_722C(void);
void ApplyCollisionWithOceanOrSwitchBlock(void);
void ApplyCollisionWithStairs(void);
void label_002_726A(void);
void ApplyCollisionWithSolid(void);
void jr_002_728E(void);
void Data_002_73A3(void);
void Data_002_73A8(void);
void label_002_73AD(void);
void jr_002_73D4(void);
void jr_002_73EE(void);
void jr_002_7415(void);
void jr_002_741D(void);
void jr_002_742D(void);
void interactiveBlock(void);
void collisionEnd(void);
void label_002_7461(void);
void func_002_7468(void);
void jr_002_7493(void);
void ret_002_74AC(void);
void label_002_74AD(void);
void OpenDialogInTable0AndClearIncrement(void);
void OpenDialogInTable2AndClearIncrement(void);
void Data_002_750A(void);
void Data_002_750E(void);
void GetObjectUnderLink(void);
void func_002_753A(void);
void func_002_754F(void);
void func_002_755B(void);
void ret_002_7586(void);
void jr_002_7587(void);
void ret_002_75B1(void);
void jr_002_75B2(void);
void ApplyLinkGroundPhysics(void);
void HurtBySpikes(void);
void ApplyLinkGroundPhysics_part2(void);
void label_002_76C0(void);
void label_002_7719(void);
void jr_002_7732(void);
void ret_002_774F(void);
void jr_002_7750(void);
void ApplyLinkGroundPhysics_Default(void);
void Data_002_786F(void);
void SwitchBlocksStateTable(void);
void label_002_787D(void);
void jr_002_78AA(void);
void jr_002_78CF(void);
void RoomTransitionLinkXIncrement(void);
void RoomTransitionLinkYIncrement(void);
void RoomTransitionXIncrement(void);
void RoomTransitionYIncrement(void);
void ApplyRoomTransition(void);
void WindFishEggMazeSequence(void);
void RoomTransitionPrepareHandler(void);
void SetNextMusicTrack(void);
void IncrementRoomTransitionStateAndReturn(void);
void RoomTransitionLoadTiles(void);
void RoomTransitionBGOriginHigh(void);
void RoomTransitionBGOriginLow(void);
void RoomTransitionBGInitialUpdateRegionHigh(void);
void RoomTransitionBGInitialUpdateRegionLow(void);
void RoomUpdateTileAmount(void);
void RoomTransitionFramesToMidScreen(void);
void RoomTransitionOffset(void);
void RoomTransitionTargetScrollX(void);
void RoomTransitionTargetScrollY(void);
void OverworldRoomIncrement(void);
void IndoorRoomIncrement(void);
void RoomTransitionConfigureScrollTargets(void);
void RoomTransitionFirstHalfHandler(void);
void RoomTransitionSecondHalfHandler(void);
void Data_002_7C04(void);
void Data_002_7C0C(void);
void label_002_7C14(void);
void Data_002_7C40(void);
void Data_002_7C48(void);
void label_002_7C50(void);
void jr_002_7C8B(void);

void OverworldMusicTracks(void) {
    /* data: db $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06 */;
    /* data: db $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06, $06 */;
    /* data: db $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05 */;
    /* data: db $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05 */;
    /* data: db $09, $09, $09, $09, $05, $05, $05, $05, $05, $05, $05, $05, $08, $08, $08, $08 */;
    /* data: db $09, $09, $09, $09, $05, $05, $05, $05, $05, $05, $05, $05, $08, $08, $08, $08 */;
    /* data: db $09, $09, $09, $09, $05, $05, $05, $05, $05, $05, $05, $05, $08, $08, $08, $08 */;
    /* data: db $09, $09, $09, $09, $05, $05, $05, $05, $05, $05, $05, $05, $08, $08, $08, $08 */;
    /* data: db $09, $04, $04, $04, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05 */;
    /* data: db $04, $04, $04, $04, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05 */;
    /* data: db $04, $04, $04, $04, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05 */;
    /* data: db $04, $04, $04, $04, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05 */;
    /* data: db $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $0B, $0B, $05, $05 */;
    /* data: db $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $0B, $0B, $05, $05 */;
    /* data: db $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05 */;
    /* data: db $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05 */;
}

void HouseMusicTracks(void) {
    /* data: db MUSIC_TAIL_CAVE */;
    /* data: db MUSIC_BOTTLE_GROTTO */;
    /* data: db MUSIC_KEY_CAVERN */;
    /* data: db MUSIC_ANGLERS_TUNNEL */;
    /* data: db MUSIC_CATFISHS_MAW */;
    /* data: db MUSIC_FACE_SHRINE */;
    /* data: db MUSIC_EAGLES_TOWER */;
    /* data: db MUSIC_TURTLE_ROCK */;
    /* data: db MUSIC_EGG_MAZE */;
    /* data: db MUSIC_COLOR_DUNGEON */;
    /* data: db MUSIC_CAVE */;
    /* data: db MUSIC_CAVE */;
    /* data: db MUSIC_CAVE */;
    /* data: db MUSIC_CAVE */;
    /* data: db MUSIC_SHOP */;
    /* data: db MUSIC_MINIGAME */;
    /* data: db MUSIC_INSIDE_BUILDING */;
    /* data: db MUSIC_CAVE */;
    /* data: db MUSIC_INSIDE_BUILDING */;
    /* data: db MUSIC_DREAM_SHRINE_DREAM */;
    /* data: db MUSIC_KANALET_CASTLE */;
    /* data: db MUSIC_MOBLIN_HIDEOUT */;
    /* data: db MUSIC_SOUTHERN_SHRINE */;
    /* data: db MUSIC_NONE */;
    /* data: db MUSIC_NONE */;
    /* data: db MUSIC_NONE */;
    /* data: db MUSIC_NONE */;
    /* data: db MUSIC_NONE */;
    /* data: db MUSIC_NONE */;
    /* data: db MUSIC_INSIDE_BUILDING */;
    /* data: db MUSIC_GHOST_HOUSE */;
    /* data: db MUSIC_CAVE */;
}

void MusicOverridesPowerUpTrack(void) {
    /* data: db $00, $00, $01, $00, $01, $00, $00, $01, $00, $00, $01, $01, $01, $00, $01, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $01, $00, $01, $00 */;
}

void SelectMusicTrackAfterTransition(void) {
    gb.regs.a = gb_read(0xFFBC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SelectMusicTrackAfterTransition_startNewMusicTrack;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFBC, gb.regs.a);
    return;
  SelectMusicTrackAfterTransition_startNewMusicTrack:;
    gb.regs.d = 0x1D;
    gb.regs.a = gb_read(0xDBFA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SelectMusicTrackAfterTransition_clearEventFlagsAndLoadSoundtrack;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFB1, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SelectMusicTrackAfterTransition_clearEventFlagsAndLoadSoundtrack;
    gb.regs.d = 0x18;
    gb.regs.a = gb_read(0xD46C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SelectMusicTrackAfterTransition_loadSoundtrack;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto SelectMusicTrackAfterTransition_mapNotFF;
    gb.regs.a = 9;
    goto SelectMusicTrackAfterTransition_mapDone;
  SelectMusicTrackAfterTransition_mapNotFF:;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto SelectMusicTrackAfterTransition_mapDone;
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB5);
    gb.regs.a = gb.regs.d;
    if (!GET_FLAG_Z()) goto SelectMusicTrackAfterTransition_mapDone;
    gb.regs.a = 0x0F;
  SelectMusicTrackAfterTransition_mapDone:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4100;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SelectMusicTrackAfterTransition_loadSoundtrack;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) goto SelectMusicTrackAfterTransition_loadSoundtrack;
    gb.regs.a = 0x21;
    goto SelectMusicTrackAfterTransition_loadSoundtrackFromA;
  SelectMusicTrackAfterTransition_clearEventFlagsAndLoadSoundtrack:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD46C, gb.regs.a);
  SelectMusicTrackAfterTransition_loadSoundtrack:;
    gb.regs.a = gb.regs.d;
  SelectMusicTrackAfterTransition_loadSoundtrackFromA:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb_write(0xFFB0, gb.regs.a);
    SetWorldMusicTrack();
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x25);
    if (!GET_FLAG_C()) goto SelectMusicTrackAfterTransition_mayUsePowerUpMusic;
    gb.regs.hl = 0x4120;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SelectMusicTrackAfterTransition_return;
  SelectMusicTrackAfterTransition_mayUsePowerUpMusic:;
    gb.regs.a = gb_read(0xD47C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SelectMusicTrackAfterTransition_return;
    gb.regs.a = 0x49;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFBD, gb.regs.a);
    gb_write(0xFFBF, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1CF, gb.regs.a);
  SelectMusicTrackAfterTransition_return:;
    return;
}

void SpawnChestWithItem(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = 7;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto SpawnChestWithItem_return;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFDF);
    gb_write(gb.regs.hl, gb.regs.a);
  SpawnChestWithItem_return:;
    gb.regs.bc = gb_pop16();
    return;
}

void UseOcarina(void) {
    gb.regs.hl = 0xC146;
    gb.regs.a = gb_read(0xC166);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC1A4;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb_write(0xC5A4, gb.regs.a);
    gb_write(0xC5A5, gb.regs.a);
    CopyLinkFinalPositionToPosition();
    gb.regs.a = gb_read(0xDBF5);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { jr_002_4241(); return; };
    gb.regs.a = gb_read(0xDBF6);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto UseOcarina_jr_422D;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_002_4237(); return; };
    gb.regs.a = 0xDC;
    gb_write(0xC166, gb.regs.a);
    gb.regs.a = 9;
    gb_write(0xFFF3, gb.regs.a);
    return;
  UseOcarina_jr_422D:;
    gb.regs.a = 0xD0;
    gb_write(0xC166, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFF3, gb.regs.a);
    return;
}

void jr_002_4237(void) {
    gb.regs.a = 0xBB;
    gb_write(0xC166, gb.regs.a);
    gb.regs.a = 0x0A;
    gb_write(0xFFF3, gb.regs.a);
    return;
}

void jr_002_4241(void) {
    gb.regs.a = 0xD0;
    gb_write(0xC166, gb.regs.a);
    gb.regs.a = 0x15;
    gb_write(0xFFF3, gb.regs.a);
    return;
    return;
}

void HookshotChainSpeedX(void) {
  HookshotChainSpeedX_right:;
    /* data: db HOOKSHOT_CHAIN_SPEED */;
  HookshotChainSpeedX_left:;
    /* data: db -HOOKSHOT_CHAIN_SPEED */;
  HookshotChainSpeedX_up:;
    /* data: db 0 */;
  HookshotChainSpeedX_down:;
    /* data: db 0 */;
    HookshotChainSpeedY(); return;
}

void HookshotChainSpeedY(void) {
  HookshotChainSpeedY_right:;
    /* data: db 0 */;
  HookshotChainSpeedY_left:;
    /* data: db 0 */;
  HookshotChainSpeedY_up:;
    /* data: db -HOOKSHOT_CHAIN_SPEED */;
  HookshotChainSpeedY_down:;
    /* data: db HOOKSHOT_CHAIN_SPEED */;
    FireHookshot(); return;
}

void FireHookshot(void) {
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    if (!GET_FLAG_Z()) goto FireHookshot_return;
    gb.regs.a = 3;
    SpawnPlayerProjectile();
    if (GET_FLAG_C()) return;
    if (GET_FLAG_C()) goto FireHookshot_return;
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x2A);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x423C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x423C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  FireHookshot_return:;
    return;
}

void LinkMotionDefault(void) {
    gb.regs.a = gb_read(0xC14C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkMotionDefault_decrementShootingArrowEnd;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC14C, gb.regs.a);
  LinkMotionDefault_decrementShootingArrowEnd:;
    gb.regs.a = gb_read(0xC1C4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkMotionDefault_decrementC1C4End;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC1C4, gb.regs.a);
  LinkMotionDefault_decrementC1C4End:;
    gb.regs.a = gb_read(0xC1C0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkMotionDefault_bombArrowCooldownDecrementEnd;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC1C0, gb.regs.a);
  LinkMotionDefault_bombArrowCooldownDecrementEnd:;
    func_002_436C();
    gb.regs.a = gb_read(0xC16E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkMotionDefault_wC16EEnd;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC16E, gb.regs.a);
  LinkMotionDefault_wC16EEnd:;
    gb.regs.a = gb_read(0xFFA1);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto LinkMotionDefault_interactiveMotionBlockedEnd;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    gb_write(0xFFA3, gb.regs.a);
    LinkPlayingOcarinaHandler();
    func_002_753A(); return;
  LinkMotionDefault_interactiveMotionBlockedEnd:;
    UpdateLinkWalkingAnimation();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA1, gb.regs.a);
    label_1F69_trampoline();
    CheckItemsToUse();
    ApplyLinkGroundMotion();
    func_002_434A();
    UpdateLinkAnimation();
    func_002_4B49();
    ApplyLinkMotionState();
    func_002_4338();
    LinkPlayingOcarinaHandler();
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkMotionDefault_return;
    gb.regs.a = gb_read(0xC137);
    gb_write(0xC16A, gb.regs.a);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto LinkMotionDefault_lowerSword;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkMotionDefault_resetSwordCharge;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC137, gb.regs.a);
    gb.regs.a = gb_read(0xC122);
    alu_cp8(gb.regs.a, 0x28);
    if (GET_FLAG_Z()) goto LinkMotionDefault_return;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_Z()) goto LinkMotionDefault_return;
    gb.regs.a = 4;
    gb_write(0xFFF2, gb.regs.a);
  LinkMotionDefault_return:;
    return;
  LinkMotionDefault_lowerSword:;
    gb.regs.a = gb_read(0xC1AD);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto LinkMotionDefault_resetSwordCharge;
    gb.regs.a = gb_read(0xC122);
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_Z()) goto LinkMotionDefault_resetSwordCharge;
    gb.regs.a = gb_read(0xC16E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkMotionDefault_return2;
    gb.regs.a = 0x20;
    gb_write(0xC121, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFF4, gb.regs.a);
  LinkMotionDefault_resetSwordCharge:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
  LinkMotionDefault_return2:;
    return;
}

void func_002_4338(void) {
    gb.regs.a = gb_read(0xC15C);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto func_002_4338_ret_4345;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
  func_002_4338_ret_4345:;
    return;
}

void DirectionToLinkAnimationState(void) {
  DirectionToLinkAnimationState_right:;
    /* data: db LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_RIGHT */;
  DirectionToLinkAnimationState_left:;
    /* data: db LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_LEFT */;
  DirectionToLinkAnimationState_up:;
    /* data: db LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_UP */;
  DirectionToLinkAnimationState_down:;
    /* data: db LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_DOWN */;
    func_002_434A(); return;
}

void func_002_434A(void) {
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    if (GET_FLAG_Z()) goto func_002_434A_jr_4367;
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC19B, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x432B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9D, gb.regs.a);
    return;
  func_002_434A_jr_4367:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC19B, gb.regs.a);
    return;
}

void func_002_436C(void) {
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_43BA(); return; };
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_43BA(); return; };
    jp_002_68B7(); return;
}

void MoveLinkToPressedButtonDirection(void) {
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4837;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0x4857;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9B, gb.regs.a);
    return;
}

void func_002_438F(void) {
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4837;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF9A;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto func_002_438F_jr_43A7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_002_438F_jr_43A7;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_002_438F_jr_43A7:;
    gb.regs.hl = 0x4857;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF9B;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto func_002_438F_ret_43B9;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_002_438F_ret_43B9;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_002_438F_ret_43B9:;
    return;
}

void jr_002_43BA(void) {
    gb.regs.a = gb_read(0xDC56);
    gb_write(0xD46B, gb.regs.a);
    func_002_44C2();
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_43BA_jr_43CE;
    gb.regs.a = gb_read(0xFFA1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_44B5(); return; };
  jr_002_43BA_jr_43CE:;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_4402(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto jr_002_43BA_jr_43E6;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4877;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_002_43F4(); return; };
  jr_002_43BA_jr_43E6:;
    gb.regs.a = gb_read(0xC120);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xC120, gb.regs.a);
    DisplayTransientVfxForLinkRunning();
    label_002_4464(); return;
}

void jr_002_43F4(void) {
    gb_write(0xC19A, gb.regs.a);
    gb.regs.a = gb_read(0xC199);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(0xC199, gb.regs.a);
    ResetSpinAttack();
    jr_002_4402(); return;
}

void jr_002_4402(void) {
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_4464(); return; };
    if (!GET_FLAG_Z()) { label_002_4464(); return; };
    gb.regs.e = 0;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xD47C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_002_4402_jr_4416;
    gb.regs.e = 0x10;
  jr_002_4402_jr_4416:;
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    goto jr_002_4402_jr_4427;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto jr_002_4402_jr_4427;
    func_002_438F();
    jr_002_442A(); return;
  jr_002_4402_jr_4427:;
    MoveLinkToPressedButtonDirection();
    jr_002_442A(); return;
}

void jr_002_442A(void) {
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_442A_jr_443A;
    gb.regs.hl = 0xFF9A;
    gb_write(gb.regs.hl, alu_sla(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xFF9B;
    gb_write(gb.regs.hl, alu_sla(gb_read(gb.regs.hl)));
  jr_002_442A_jr_443A:;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    if (GET_FLAG_Z()) { jr_002_4459(); return; };
    gb.regs.hl = 0xC120;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0x4877;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { label_002_4464(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC16E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb.regs.e;
    if (!GET_FLAG_Z()) goto jr_002_442A_jr_4457;
    gb_write(0xFF9E, gb.regs.a);
  jr_002_442A_jr_4457:;
    label_002_4464(); return;
}

void jr_002_4459(void) {
    gb.regs.a = gb_read(0xC14B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_4464(); return; };
    gb.regs.a = 7;
    gb_write(0xC120, gb.regs.a);
    label_002_4464(); return;
}

void label_002_4464(void) {
    gb.regs.e = 3;
    gb.regs.a = gb_read(0xC117);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_44A2(); return; };
    gb.regs.e = 1;
    gb.regs.a = gb_read(0xC15C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_4464_jr_4481;
    gb.regs.a = gb_read(0xC5A8);
    alu_cp8(gb.regs.a, 0xD5);
    if (!GET_FLAG_Z()) goto label_002_4464_jr_4481;
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_44A2(); return; };
  label_002_4464_jr_4481:;
    gb.regs.a = gb_read(0xFFB2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_44A2(); return; };
    gb.regs.hl = 0xC11F;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { func_002_44AD(); return; };
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_002_44A9(); return; };
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_002_44AD(); return; };
    gb.regs.e = 1;
    gb.regs.a = gb_read(0xC1BB);
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_C()) { jr_002_44A2(); return; };
    gb.regs.e = 7;
    jr_002_44A2(); return;
}

void jr_002_44A2(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) { label_002_44B5(); return; };
    func_002_44AD(); return;
}

void jr_002_44A9(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) return;
}

void func_002_44AD(void) {
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    UpdateFinalLinkPosition();
    label_002_44B5(); return;
}

void label_002_44B5(void) {
    gb.regs.a = gb_read(0xC11F);
    gb_write(0xC130, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC11F, gb.regs.a);
    CheckPositionForMapTransition(); return;
}

void func_002_44C2(void) {
    gb.regs.a = gb_read(0xC13E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC13E, gb.regs.a);
    UpdateFinalLinkPosition();
    CheckPositionForMapTransition();
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_44E3(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto func_002_44C2_jr_44E0;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    jr_002_44E3(); return;
  func_002_44C2_jr_44E0:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    jr_002_44E3(); return;
}

void jr_002_44E3(void) {
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    ApplyLinkMotionState(); return;
}

void Data_002_44E7(void) {
    /* data: db 0, -16, 16, 0, -1, 1 */;
}

void ApplyLinkGroundMotion(void) {
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_return;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundMotion_return;
  ApplyLinkGroundMotion_noChecks:;
    func_21E1();
    gb.regs.a = gb_read(0xFFA3);
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = -1;
    gb_write(0xC120, gb.regs.a);
    gb.regs.a = gb_read(0xC10A);
    gb.regs.hl = 0xC14A;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ApplyLinkGroundMotion_joypadVerticalEnd;
    gb.regs.a = gb_read(0xD475);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundMotion_jr_002_451E;
    gb.regs.a = gb_read(0xC1AD);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundMotion_jr_002_4523;
  ApplyLinkGroundMotion_jr_002_451E:;
    ClearLinkPositionIncrement();
    goto ApplyLinkGroundMotion_joypadVerticalEnd;
  ApplyLinkGroundMotion_jr_002_4523:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_joypadHorizontalEnd;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x68B1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF9A);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_joypadHorizontalEnd;
    gb.regs.e = 1;
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundMotion_jr_002_453D;
    gb.regs.e = 0xFF;
  ApplyLinkGroundMotion_jr_002_453D:;
    gb.regs.a = gb_read(0xFF9A);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFF9A, gb.regs.a);
  ApplyLinkGroundMotion_joypadHorizontalEnd:;
    gb.regs.a = gb_read(0xFFCB);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_joypadVerticalEnd;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x44E7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_joypadVerticalEnd;
    gb.regs.e = 1;
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundMotion_jr_002_455E;
    gb.regs.e = -1;
  ApplyLinkGroundMotion_jr_002_455E:;
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFF9B, gb.regs.a);
  ApplyLinkGroundMotion_joypadVerticalEnd:;
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_jr_002_456C;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_return;
  ApplyLinkGroundMotion_jr_002_456C:;
    ResetPegasusBoots();
    gb_write(0xFFA2, gb.regs.a);
    gb_write(0xC149, gb.regs.a);
    gb_write(0xFFA3, gb.regs.a);
    gb_write(0xC146, gb.regs.a);
    gb_write(0xC152, gb.regs.a);
    gb_write(0xC153, gb.regs.a);
    gb_write(0xC10A, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) goto ApplyLinkGroundMotion_return;
    ApplyLinkGroundPhysics();
    gb.regs.a = gb_read(0xFFB8);
    alu_cp8(gb.regs.a, 0x61);
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_return;
    gb.regs.a = gb_read(0xC181);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { shallowWaterVfx(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_return;
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_return;
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_return;
    alu_cp8(gb.regs.a, 0x51);
    if (GET_FLAG_Z()) goto ApplyLinkGroundMotion_return;
    gb.regs.a = 7;
    gb_write(0xFFF4, gb.regs.a);
  ApplyLinkGroundMotion_return:;
    return;
}

void shallowWaterVfx(void) {
    gb.regs.a = gb_read(0xFF99);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0x0C;
    AddTranscientVfx(); return;
}

void LinkDirectionToStaticSwordCollitionCheckNeeded(void) {
    /* data: db $00, $00, $08, $06 */;
    /* data: db $00, $06, $00, $00 */;
    /* data: db $08, $0A, $00, $0A */;
    /* data: db $00, $00, $08, $10 */;
    /* data: db $00, $10, $00, $00 */;
    /* data: db $08, $08, $00, $08 */;
}

void LinkDirectionTo_wC141(void) {
    /* data: db $00, $00, $05, $0A, $00, $0A, $00, $00, $05, $0A, $00, $0A, $00, $00, $05, $08 */;
    /* data: db $00, $08, $00, $00, $05, $08, $00, $08 */;
}

void LinkDirectionToOffset(void) {
    /* data: db $00, $00, $08, $08, $00, $08, $00, $00, $08, $08, $00, $08, $00, $00, $08, $08 */;
    /* data: db $00, $08, $00, $00, $08, $08, $00, $08 */;
}

void LinkDirectionTo_wC143(void) {
    /* data: db $00, $00, $05, $08, $00, $08, $00, $00, $05, $08, $00, $08, $00, $00, $05, $08 */;
    /* data: db $00, $08, $00, $00, $05, $08, $00, $08 */;
}

void LinkDirectionToSwordDirection(void) {
    /* data: db SWORD_DIRECTION_RIGHT,          SWORD_DIRECTION_TOP,        SWORD_DIRECTION_RIGHT_TOP,       SWORD_DIRECTION_RIGHT */;
    /* data: db SWORD_DIRECTION_RIGHT_BOTTOM,   SWORD_DIRECTION_RIGHT,      SWORD_DIRECTION_RIGHT,           SWORD_DIRECTION_TOP */;
    /* data: db SWORD_DIRECTION_LEFT_TOP,       SWORD_DIRECTION_LEFT,       SWORD_DIRECTION_LEFT_BOTTOM,     SWORD_DIRECTION_LEFT */;
    /* data: db SWORD_DIRECTION_RIGHT,          SWORD_DIRECTION_RIGHT,      SWORD_DIRECTION_RIGHT_TOP,       SWORD_DIRECTION_TOP */;
    /* data: db SWORD_DIRECTION_LEFT_TOP,       SWORD_DIRECTION_TOP,        SWORD_DIRECTION_RIGHT,           SWORD_DIRECTION_LEFT */;
    /* data: db SWORD_DIRECTION_LEFT_BOTTOM,    SWORD_DIRECTION_BOTTOM,     SWORD_DIRECTION_RIGHT_BOTTOM,    SWORD_DIRECTION_BOTTOM */;
}

void LinkDirectionToLinkAnimationState1(void) {
    /* data: db LINK_ANIMATION_STATE_STANDING_DOWN,         LINK_ANIMATION_STATE_UNKNOWN_18,            LINK_ANIMATION_STATE_UNKNOWN_19,            LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_RIGHT */;
    /* data: db LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_RIGHT,  LINK_ANIMATION_STATE_HIDDEN,             LINK_ANIMATION_STATE_STANDING_DOWN,         LINK_ANIMATION_STATE_UNKNOWN_16 */;
    /* data: db LINK_ANIMATION_STATE_UNKNOWN_17,            LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_LEFT,   LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_LEFT,   LINK_ANIMATION_STATE_HIDDEN */;
    /* data: db LINK_ANIMATION_STATE_STANDING_DOWN,         LINK_ANIMATION_STATE_UNKNOWN_14,            LINK_ANIMATION_STATE_UNKNOWN_15,            LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_UP */;
    /* data: db LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_UP,     LINK_ANIMATION_STATE_HIDDEN,             LINK_ANIMATION_STATE_STANDING_DOWN,         LINK_ANIMATION_STATE_UNKNOWN_12 */;
    /* data: db LINK_ANIMATION_STATE_UNKNOWN_13,            LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_DOWN,   LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_DOWN,   LINK_ANIMATION_STATE_HIDDEN */;
}

void LinkDirectionTo_wC13A(void) {
    /* data: db $00, $00, $0D, $13, $10, $0B, $00, $F8, $F3, $ED, $F0, $F5, $00, $10, $0D, $F8 */;
    /* data: db $F5, $F8, $00, $F0, $F3, $00, $0C, $00 */;
}

void LinkDirectionTo_wC139(void) {
    /* data: db $00, $F0, $F3, $00, $0C, $00, $00, $F0, $F3, $00, $0C, $00, $00, $F8, $F3, $F0 */;
    /* data: db $F3, $F5, $00, $00, $0D, $10, $0D, $0D */;
}

void LinkDirectionTo_wC13C(void) {
    /* data: db $00, $00, $00, $03, $03, $00, $00, $00, $00, $FD, $FD, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void LinkDirectionTo_wC13B(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $FD */;
    /* data: db $FD, $00, $00, $00, $00, $03, $03 */;
}

void SwordAnimationStateToUnknow(void) {
    /* data: db $00, $03, $03, $08, $01, $01, $01, $01 */;
}

void UnkownToLinkStateTable(void) {
    /* data: db LINK_ANIMATION_STATE_UNKNOWN_61,    LINK_ANIMATION_STATE_UNKNOWN_62,    LINK_ANIMATION_STATE_UNKNOWN_63,    LINK_ANIMATION_STATE_STANDING_DOWN */;
    /* data: db LINK_ANIMATION_STATE_JUMPING_1,     LINK_ANIMATION_STATE_JUMPING_2,     LINK_ANIMATION_STATE_JUMPING_3,     LINK_ANIMATION_STATE_STANDING_DOWN */;
    /* data: db LINK_ANIMATION_STATE_UNKNOWN_67,    LINK_ANIMATION_STATE_UNKNOWN_68,    LINK_ANIMATION_STATE_UNKNOWN_69,    LINK_ANIMATION_STATE_STANDING_DOWN */;
    /* data: db LINK_ANIMATION_STATE_UNKNOWN_64,    LINK_ANIMATION_STATE_UNKNOWN_65,    LINK_ANIMATION_STATE_UNKNOWN_66,    LINK_ANIMATION_STATE_STANDING_DOWN */;
}

void FrameCounterToLinkDirection(void) {
    /* data: db DIRECTION_RIGHT, DIRECTION_DOWN, DIRECTION_LEFT, DIRECTION_UP */;
}

void LinkDirectionToSwordAnimationState(void) {
    /* data: db SWORD_ANIMATION_STATE_SWING_MIDDLE, SWORD_ANIMATION_STATE_SWING_START,   SWORD_ANIMATION_STATE_SWING_MIDDLE,    SWORD_ANIMATION_STATE_SWING_START */;
    /* data: db SWORD_ANIMATION_STATE_SWING_MIDDLE, SWORD_ANIMATION_STATE_SWING_START,   SWORD_ANIMATION_STATE_SWING_MIDDLE,    SWORD_ANIMATION_STATE_SWING_END */;
    /* data: db SWORD_ANIMATION_STATE_SWING_MIDDLE, SWORD_ANIMATION_STATE_SWING_END,     SWORD_ANIMATION_STATE_SWING_MIDDLE,    SWORD_ANIMATION_STATE_SWING_START */;
    /* data: db SWORD_ANIMATION_STATE_SWING_MIDDLE, SWORD_ANIMATION_STATE_SWING_END,     SWORD_ANIMATION_STATE_SWING_MIDDLE,    SWORD_ANIMATION_STATE_SWING_END */;
    /* data: db SWORD_ANIMATION_STATE_SWING_MIDDLE, SWORD_ANIMATION_STATE_SWING_START,   SWORD_ANIMATION_STATE_SWING_MIDDLE,    SWORD_ANIMATION_STATE_SWING_END */;
    /* data: db SWORD_ANIMATION_STATE_SWING_MIDDLE, SWORD_ANIMATION_STATE_SWING_END,     SWORD_ANIMATION_STATE_SWING_MIDDLE,    SWORD_ANIMATION_STATE_SWING_END */;
    /* data: db SWORD_ANIMATION_STATE_SWING_MIDDLE, SWORD_ANIMATION_STATE_SWING_END,     SWORD_ANIMATION_STATE_SWING_MIDDLE,    SWORD_ANIMATION_STATE_SWING_END */;
    /* data: db SWORD_ANIMATION_STATE_SWING_MIDDLE, SWORD_ANIMATION_STATE_SWING_START,   SWORD_ANIMATION_STATE_SWING_MIDDLE,    SWORD_ANIMATION_STATE_SWING_END */;
}

void LinkDirectionToAbsolute(void) {
    /* data: db DIRECTION_RIGHT,    DIRECTION_UP,       DIRECTION_UP,        DIRECTION_LEFT */;
    /* data: db DIRECTION_LEFT,     DIRECTION_DOWN,     DIRECTION_DOWN,      DIRECTION_RIGHT */;
    /* data: db DIRECTION_LEFT,     DIRECTION_UP,       DIRECTION_UP,        DIRECTION_RIGHT */;
    /* data: db DIRECTION_RIGHT,    DIRECTION_DOWN,     DIRECTION_DOWN,      DIRECTION_LEFT */;
    /* data: db DIRECTION_UP,       DIRECTION_RIGHT,    DIRECTION_RIGHT,     DIRECTION_DOWN */;
    /* data: db DIRECTION_DOWN,     DIRECTION_LEFT,     DIRECTION_LEFT,      DIRECTION_UP */;
    /* data: db DIRECTION_DOWN,     DIRECTION_LEFT,     DIRECTION_LEFT,      DIRECTION_UP */;
    /* data: db DIRECTION_UP,       DIRECTION_RIGHT,    DIRECTION_RIGHT,     DIRECTION_DOWN */;
}

void UpdateSpinAttackAnimation(void) {
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC121, gb.regs.a);
    gb.regs.hl = 0xFFA1;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4679;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC137, gb.regs.a);
    gb.regs.hl = 0x4699;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF9E);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9E, gb.regs.a);
    label_002_4827();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto UpdateSpinAttackAnimation_jr_4745;
    gb.regs.hl = 0xC121;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  UpdateSpinAttackAnimation_jr_4745:;
    gb.regs.a = gb_read(0xC121);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_002_48B0(); return; };
    alu_rla();
    if (GET_FLAG_C()) { label_002_48B0(); return; };
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xC140, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xC141, gb.regs.a);
    gb_write(0xC143, gb.regs.a);
    gb.regs.a = gb_read(0xC145);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xC142, gb.regs.a);
    gb_write(0xC5B0, gb.regs.a);
    return;
}

void label_002_476B(void) {
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC16D, gb.regs.a);
    if (GET_FLAG_Z()) { label_002_48B0(); return; };
    gb.regs.hl = 0xC16E;
    gb_write(gb.regs.hl, 4);
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_476B_jr_4781;
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
  label_002_476B_jr_4781:;
    gb.regs.a = 3;
    gb_write(0xC137, gb.regs.a);
    label_002_4827(); return;
}

void jr_002_4789(void) {
    label_002_4827(); return;
}

void UpdateLinkAnimation(void) {
    gb.regs.a = gb_read(0xD475);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateLinkAnimation_rotateEnd;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4675;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9E, gb.regs.a);
    return;
  UpdateLinkAnimation_rotateEnd:;
    gb.regs.a = gb_read(0xC146);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto UpdateLinkAnimation_jr_002_47E0;
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.hl = 0xC137;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto UpdateLinkAnimation_jr_002_47E0;
    gb.regs.a = gb_read(0xFF9E);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.a = gb_read(0xC152);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto UpdateLinkAnimation_jr_002_47E0;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4665;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = gb_read(0xC153);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC153, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto UpdateLinkAnimation_jr_002_47E0;
    gb.regs.a = gb_read(0xC152);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC152, gb.regs.a);
  UpdateLinkAnimation_jr_002_47E0:;
    gb.regs.a = gb_read(0xC121);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UpdateSpinAttackAnimation(); return; };
    gb.regs.a = gb_read(0xC16D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_476B(); return; };
    gb.regs.a = gb_read(0xC137);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC16E;
    gb_write(gb.regs.hl, 4);
    gb.regs.a = gb_read(0xC137);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) { jr_002_4789(); return; };
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto UpdateLinkAnimation_jr_002_4809;
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
  UpdateLinkAnimation_jr_002_4809:;
    gb.regs.a = gb_read(0xC138);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto UpdateLinkAnimation_jr_002_4823;
    gb.regs.a = gb_read(0xC137);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC137, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { label_002_48B0(); return; };
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x465D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
  UpdateLinkAnimation_jr_002_4823:;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC138, gb.regs.a);
    label_002_4827(); return;
}

void label_002_4827(void) {
    gb.regs.hl = 0xC137;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x45CE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC136, gb.regs.a);
    gb.regs.hl = 0x45E6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto label_002_4827_noUpdate;
    gb_write(0xFF9D, gb.regs.a);
  label_002_4827_noUpdate:;
    gb.regs.hl = 0x45FE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC13A, gb.regs.a);
    gb.regs.hl = 0x4616;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC139, gb.regs.a);
    gb.regs.hl = 0x462E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC13C, gb.regs.a);
    gb.regs.hl = 0x4646;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC13B, gb.regs.a);
    gb.regs.hl = 0x456E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_4827_checkStaticSwordCollision;
    gb.regs.a = gb_read(0xC15B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_4827_noShieldUsed;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto label_002_4827_checkStaticSwordCollision;
  label_002_4827_noShieldUsed:;
    gb.regs.a = gb_read(0xC13A);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC140, gb.regs.a);
    gb.regs.hl = 0x4586;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC141, gb.regs.a);
    gb.regs.a = gb_read(0xC139);
    gb.regs.hl = 0x459E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC145;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC142, gb.regs.a);
    gb.regs.hl = 0x45B6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC143, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC5B0, gb.regs.a);
  label_002_4827_checkStaticSwordCollision:;
    CheckStaticSwordCollision_trampoline(); return;
}

void label_002_48B0(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1AC, gb.regs.a);
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_48B0_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC16A, gb.regs.a);
    gb_write(0xC121, gb.regs.a);
  label_002_48B0_return:;
    return;
}

void HorizontalIncrementForLinkPosition(void) {
    /* data: db $00, $10, $F0, $00, $00, $0C, $F4, $00, $00, $0C, $F4, $00, $00, $00, $00, $00 */;
    /* data: db $00, $14, $EC, $00, $00, $0F, $F1, $00, $00, $0F, $F1, $00, $00, $00, $00, $00 */;
}

void VerticalIncrementForLinkPosition(void) {
    /* data: db $00, $00, $00, $00, $F0, $F4, $F4, $00, $10, $0C, $0C, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $EC, $F1, $F1, $00, $14, $0F, $0F, $00, $00, $00, $00, $00 */;
}

void JoypadToLinkDirection(void) {
  JoypadToLinkDirection_none:;
    /* data: db DIRECTION_KEEP */;
  JoypadToLinkDirection_right:;
    /* data: db DIRECTION_RIGHT */;
  JoypadToLinkDirection_left:;
    /* data: db DIRECTION_LEFT */;
  JoypadToLinkDirection_rightLeft:;
    /* data: db DIRECTION_KEEP */;
  JoypadToLinkDirection_up:;
    /* data: db DIRECTION_UP */;
  JoypadToLinkDirection_upRight:;
    /* data: db DIRECTION_KEEP */;
  JoypadToLinkDirection_upLeft:;
    /* data: db DIRECTION_KEEP */;
  JoypadToLinkDirection_upRightLeft:;
    /* data: db DIRECTION_KEEP */;
  JoypadToLinkDirection_down:;
    /* data: db DIRECTION_DOWN */;
  JoypadToLinkDirection_downRight:;
    /* data: db DIRECTION_KEEP */;
  JoypadToLinkDirection_downLeft:;
    /* data: db DIRECTION_KEEP */;
    LinkAnimationsLists(); return;
}

void LinkAnimationsLists(void) {
    LinkAnimationsList_WalkingNoShield();
    LinkAnimationsList_WalkingNoShield(); return;
}

void LinkAnimationsList_WalkingNoShield(void) {
  LinkAnimationsList_WalkingNoShield_right:;
    /* data: db LINK_ANIMATION_STATE_STANDING_RIGHT, LINK_ANIMATION_STATE_WALKING_RIGHT */;
  LinkAnimationsList_WalkingNoShield_left:;
    /* data: db LINK_ANIMATION_STATE_STANDING_LEFT,  LINK_ANIMATION_STATE_WALKING_LEFT */;
  LinkAnimationsList_WalkingNoShield_up:;
    /* data: db LINK_ANIMATION_STATE_STANDING_UP,    LINK_ANIMATION_STATE_WALKING_UP */;
  LinkAnimationsList_WalkingNoShield_down:;
    /* data: db LINK_ANIMATION_STATE_STANDING_DOWN,  LINK_ANIMATION_STATE_WALKING_DOWN */;
    LinkAnimationsList_WalkCarryingDefaultShield(); return;
}

void LinkAnimationsList_WalkCarryingDefaultShield(void) {
  LinkAnimationsList_WalkCarryingDefaultShield_right:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_RIGHT, LINK_ANIMATION_STATE_WALKING_SHIELD_RIGHT */;
  LinkAnimationsList_WalkCarryingDefaultShield_left:;
    /* data: db LINK_ANIMATION_STATE_STANDING_LEFT,         LINK_ANIMATION_STATE_WALKING_LEFT */;
  LinkAnimationsList_WalkCarryingDefaultShield_up:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_UP,    LINK_ANIMATION_STATE_WALKING_SHIELD_UP */;
  LinkAnimationsList_WalkCarryingDefaultShield_down:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_DOWN,  LINK_ANIMATION_STATE_WALKING_SHIELD_DOWN */;
    LinkAnimationsList_WalkUsingDefaultShield(); return;
}

void LinkAnimationsList_WalkUsingDefaultShield(void) {
  LinkAnimationsList_WalkUsingDefaultShield_right:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_USE_RIGHT, LINK_ANIMATION_STATE_WALKING_SHIELD_USE_RIGHT */;
  LinkAnimationsList_WalkUsingDefaultShield_left:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_USE_LEFT,  LINK_ANIMATION_STATE_WALKING_SHIELD_USE_LEFT */;
  LinkAnimationsList_WalkUsingDefaultShield_up:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_USE_UP,    LINK_ANIMATION_STATE_WALKING_SHIELD_USE_UP */;
  LinkAnimationsList_WalkUsingDefaultShield_down:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_USE_DOWN,  LINK_ANIMATION_STATE_WALKING_SHIELD_USE_DOWN */;
    LinkAnimationsList_WalkCarryingMirrorShield(); return;
}

void LinkAnimationsList_WalkCarryingMirrorShield(void) {
  LinkAnimationsList_WalkCarryingMirrorShield_right:;
    /* data: db LINK_ANIMATION_STATE_STANDING_MIRROR_SHIELD_RIGHT, LINK_ANIMATION_STATE_WALKING_MIRROR_SHIELD_RIGHT */;
  LinkAnimationsList_WalkCarryingMirrorShield_left:;
    /* data: db LINK_ANIMATION_STATE_STANDING_LEFT,                LINK_ANIMATION_STATE_WALKING_LEFT */;
  LinkAnimationsList_WalkCarryingMirrorShield_up:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_UP,           LINK_ANIMATION_STATE_WALKING_SHIELD_UP */;
  LinkAnimationsList_WalkCarryingMirrorShield_down:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_DOWN,         LINK_ANIMATION_STATE_WALKING_SHIELD_DOWN */;
    LinkAnimationsList_WalkUsingMirrorShield(); return;
}

void LinkAnimationsList_WalkUsingMirrorShield(void) {
  LinkAnimationsList_WalkUsingMirrorShield_right:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_USE_RIGHT,       LINK_ANIMATION_STATE_WALKING_SHIELD_USE_RIGHT */;
  LinkAnimationsList_WalkUsingMirrorShield_left:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SHIELD_USE_LEFT,        LINK_ANIMATION_STATE_WALKING_SHIELD_USE_LEFT */;
  LinkAnimationsList_WalkUsingMirrorShield_up:;
    /* data: db LINK_ANIMATION_STATE_STANDING_MIRROR_SHIELD_USE_UP,   LINK_ANIMATION_STATE_WALKING_MIRROR_SHIELD_USE_UP */;
  LinkAnimationsList_WalkUsingMirrorShield_down:;
    /* data: db LINK_ANIMATION_STATE_STANDING_MIRROR_SHIELD_USE_DOWN, LINK_ANIMATION_STATE_WALKING_MIRROR_SHIELD_USE_DOWN */;
    LinkAnimationsList_PushingObject(); return;
}

void LinkAnimationsList_PushingObject(void) {
  LinkAnimationsList_PushingObject_right:;
    /* data: db LINK_ANIMATION_STATE_STANDING_PUSHING_RIGHT, LINK_ANIMATION_STATE_WALKING_PUSHING_RIGHT */;
  LinkAnimationsList_PushingObject_left:;
    /* data: db LINK_ANIMATION_STATE_STANDING_PUSHING_LEFT,  LINK_ANIMATION_STATE_WALKING_PUSHING_LEFT */;
  LinkAnimationsList_PushingObject_up:;
    /* data: db LINK_ANIMATION_STATE_STANDING_PUSHING_UP,    LINK_ANIMATION_STATE_WALKING_PUSHING_UP */;
  LinkAnimationsList_PushingObject_down:;
    /* data: db LINK_ANIMATION_STATE_STANDING_PUSHING_DOWN,  LINK_ANIMATION_STATE_WALKING_PUSHING_DOWN */;
    LinkAnimationsList_LiftingObject(); return;
}

void LinkAnimationsList_LiftingObject(void) {
  LinkAnimationsList_LiftingObject_right:;
    /* data: db LINK_ANIMATION_STATE_STANDING_LIFTING_RIGHT, LINK_ANIMATION_STATE_WALKING_LIFTING_RIGHT */;
  LinkAnimationsList_LiftingObject_left:;
    /* data: db LINK_ANIMATION_STATE_STANDING_LIFTING_LEFT,  LINK_ANIMATION_STATE_WALKING_LIFTING_LEFT */;
  LinkAnimationsList_LiftingObject_up:;
    /* data: db LINK_ANIMATION_STATE_STANDING_LIFTING_UP,    LINK_ANIMATION_STATE_WALKING_LIFTING_UP */;
  LinkAnimationsList_LiftingObject_down:;
    /* data: db LINK_ANIMATION_STATE_STANDING_LIFTING_DOWN,  LINK_ANIMATION_STATE_WALKING_LIFTING_DOWN */;
    Data_002_4948(); return;
}

void Data_002_4948(void) {
  Data_002_4948_right:;
    /* data: db LINK_ANIMATION_STATE_HOLD_SWIMMING_1_RIGHT, LINK_ANIMATION_STATE_MOVING_SWIMMING_1_RIGHT */;
  Data_002_4948_left:;
    /* data: db LINK_ANIMATION_STATE_HOLD_SWIMMING_1_LEFT,  LINK_ANIMATION_STATE_MOVING_SWIMMING_1_LEFT */;
  Data_002_4948_up:;
    /* data: db LINK_ANIMATION_STATE_HOLD_SWIMMING_1_UP,    LINK_ANIMATION_STATE_MOVING_SWIMMING_1_UP */;
  Data_002_4948_down:;
    /* data: db LINK_ANIMATION_STATE_HOLD_SWIMMING_1_DOWN,  LINK_ANIMATION_STATE_MOVING_SWIMMING_1_DOWN */;
    Data_002_4950(); return;
}

void Data_002_4950(void) {
  Data_002_4950_right:;
    /* data: db LINK_ANIMATION_STATE_HOLD_SWIMMING_2, LINK_ANIMATION_STATE_MOVING_SWIMMING_2 */;
  Data_002_4950_left:;
    /* data: db LINK_ANIMATION_STATE_HOLD_SWIMMING_2, LINK_ANIMATION_STATE_MOVING_SWIMMING_2 */;
  Data_002_4950_up:;
    /* data: db LINK_ANIMATION_STATE_HOLD_SWIMMING_2, LINK_ANIMATION_STATE_MOVING_SWIMMING_2 */;
  Data_002_4950_down:;
    /* data: db LINK_ANIMATION_STATE_HOLD_SWIMMING_2, LINK_ANIMATION_STATE_MOVING_SWIMMING_2 */;
    LinkAnimationsList_WalkSideScrolling(); return;
}

void LinkAnimationsList_WalkSideScrolling(void) {
  LinkAnimationsList_WalkSideScrolling_right:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SIDE_SCROLL_RIGHT_UP,  LINK_ANIMATION_STATE_WALKING_SIDE_SCROLL_RIGHT_UP */;
  LinkAnimationsList_WalkSideScrolling_left:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SIDE_SCROLL_LEFT_DOWN, LINK_ANIMATION_STATE_WALKING_SIDE_SCROLL_LEFT_DOWN */;
  LinkAnimationsList_WalkSideScrolling_up:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SIDE_SCROLL_RIGHT_UP,  LINK_ANIMATION_STATE_WALKING_SIDE_SCROLL_RIGHT_UP */;
  LinkAnimationsList_WalkSideScrolling_down:;
    /* data: db LINK_ANIMATION_STATE_STANDING_SIDE_SCROLL_LEFT_DOWN, LINK_ANIMATION_STATE_WALKING_SIDE_SCROLL_LEFT_DOWN */;
    LinkMotionUnstuckingHandler(); return;
}

void LinkMotionUnstuckingHandler(void) {
    gb.regs.a = 2;
    gb_write(0xC1C4, gb.regs.a);
    gb.regs.a = gb_read(0xFF9C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_49AA(); return; };
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFF99, gb.regs.a);
    gb_write(0xFFA0, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFA2, gb.regs.a);
  LinkMotionUnstuckingHandler_loop_4978:;
    gb.regs.a = 0xFF;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFF99, gb.regs.a);
    gb_write(0xFFA0, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFA2, gb.regs.a);
    BackgroundCollisionHandler();
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xE1);
    if (GET_FLAG_Z()) goto LinkMotionUnstuckingHandler_loop_4978;
    alu_cp8(gb.regs.a, 0x61);
    if (GET_FLAG_Z()) goto LinkMotionUnstuckingHandler_jr_49A0;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkMotionUnstuckingHandler_loop_4978;
  LinkMotionUnstuckingHandler_jr_49A0:;
    gb.regs.a = 1;
    gb_write(0xFF9C, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 3);
    gb_write(0xFF99, gb.regs.a);
    jr_002_49AA(); return;
}

void jr_002_49AA(void) {
    ApplyLinkGroundMotion_noChecks();
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_49AA_jr_49B6;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC11C, gb.regs.a);
  jr_002_49AA_jr_49B6:;
    gb.regs.a = 1;
    gb_write(0xC146, gb.regs.a);
    CheckItemsToUse();
    UpdateLinkAnimation();
    gb.regs.a = gb_read(0xC137);
    gb_write(0xC16A, gb.regs.a);
    ApplyLinkMotionState(); return;
}

void Data_002_49CA(void) {
    /* data: db $01, $00, $01, $00, $00, $01, $00, $01, $01, $01, $00, $00, $00, $00, $01, $01 */;
    /* data: db $01, $00, $01, $00, $00, $01, $00, $01, $01, $01, $00, $00, $00, $00, $01, $01 */;
    /* data: db $00, $01, $01, $01, $01, $00, $01, $01, $01, $01, $00, $01, $01, $01, $01, $00 */;
    /* data: db $01, $00, $00, $00, $00, $01, $00, $00, $00, $00, $01, $00, $00, $00, $00, $01 */;
    /* data: db $00, $01, $01, $00, $01, $00, $00, $01 */;
}

void Data_002_4A12(void) {
    /* data: db $08, $F8 */;
}

void Data_002_4A14(void) {
    /* data: db $06, $01 */;
}

void LinkPlayingOcarinaHandler(void) {
    gb.regs.a = gb_read(0xC166);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xFFA1;
    gb_write(gb.regs.hl, 2);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_002_4A7C(); return; };
    gb.regs.a = gb_read(0xD490);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(0xD490, gb.regs.a);
    gb.regs.a = gb_read(0xD491);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(0xD491, gb.regs.a);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto LinkPlayingOcarinaHandler_jr_4A53;
    gb.regs.a = gb_read(0xD490);
    alu_cp8(gb.regs.a, 0xD0);
    if (!GET_FLAG_Z()) goto LinkPlayingOcarinaHandler_jr_4A53;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC166, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xC5A3, gb.regs.a);
    gb.regs.a = gb_read(0xD465);
    alu_cp8(gb.regs.a, 0x47);
    if (GET_FLAG_Z()) return;
    jr_002_4A6C(); return;
  LinkPlayingOcarinaHandler_jr_4A53:;
    gb.regs.a = gb_read(0xD465);
    alu_cp8(gb.regs.a, 0x47);
    if (GET_FLAG_Z()) { jr_002_4A7A(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) { jr_002_4A7A(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC166, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xC5A3, gb.regs.a);
    jr_002_4A6C(); return;
}

void jr_002_4A6C(void) {
    gb.regs.a = gb_read(0xD461);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    label_27DD(); return;
}

void jr_002_4A7A(void) {
    jr_002_4AD1(); return;
}

void jr_002_4A7C(void) {
    ClearLinkPositionIncrement();
    ResetSpinAttack();
    gb.regs.hl = 0xC166;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) { jr_002_4AD1(); return; };
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_4A7C_jr_4AA2;
    gb.regs.a = gb_read(0xDBF6);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_002_4AB2(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_4AB2(); return; };
    /* call_open_dialog Dialog277 */;
    jr_002_4AB2(); return;
  jr_002_4A7C_jr_4AA2:;
    gb.regs.a = gb_read(0xDBF5);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_4AB2(); return; };
    /* call_open_dialog Dialog08E */;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    return;
}

void jr_002_4AB2(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xDBF6);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_002_4AB2_ret_4AD0;
    gb.regs.a = 2;
    gb_write(0xC17F, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC180, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb.regs.a = 0x2C;
    gb_write(0xFFF2, gb.regs.a);
  jr_002_4AB2_ret_4AD0:;
    return;
}

void jr_002_4AD1(void) {
    gb.regs.a = gb_read(0xC5A4);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC5A4, gb.regs.a);
    alu_cp8(gb.regs.a, 0x38);
    if (GET_FLAG_C()) goto jr_002_4AD1_jr_4AE8;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC5A4, gb.regs.a);
    gb.regs.a = gb_read(0xC5A5);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(0xC5A5, gb.regs.a);
  jr_002_4AD1_jr_4AE8:;
    gb.regs.a = gb_read(0xC5A5);
    gb.regs.e = 0x75;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_4AD1_jr_4AF1;
    gb.regs.e = alu_inc8(gb.regs.e);
  jr_002_4AD1_jr_4AF1:;
    gb.regs.a = gb.regs.e;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC167, gb.regs.a);
    gb_write(0xC111, gb.regs.a);
    gb.regs.a = gb_read(0xC166);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xC5A4);
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_Z()) goto jr_002_4AD1_ret_4B40;
    gb.regs.a = 0xC9;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto jr_002_4AD1_ret_4B40;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xC5A5);
    gb.regs.c = gb.regs.a;
    gb.regs.b = gb.regs.d;
    gb.regs.hl = 0x4A12;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4A14;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xFC);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
  jr_002_4AD1_ret_4B40:;
    return;
}

void LinkDirectionToLinkAnimationState2(void) {
    /* data: db $71, $72, $6F, $70, $73, $74, $6D, $6E */;
}

void func_002_4B49(void) {
    gb.regs.a = gb_read(0xC1C7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_002_4B49_return;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto func_002_4B49_jr_002_4B64;
    gb.regs.a = gb_read(0xD499);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_002_4B49_jr_002_4B64;
    func_020_4B4A_trampoline();
    gb.regs.a = 1;
    gb_write(0xC5B0, gb.regs.a);
  func_002_4B49_jr_002_4B64:;
    gb.regs.hl = 0xFFA1;
    gb_write(gb.regs.hl, 1);
    ClearLinkPositionIncrement();
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC121, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    gb.regs.a = gb_read(0xC1C8);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC1C8, gb.regs.a);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto func_002_4B49_jr_002_4B85;
    gb_push16(gb.regs.af);
    func_002_4BC8();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  func_002_4B49_jr_002_4B85:;
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_Z()) goto func_002_4B49_jr_002_4BA9;
    gb.regs.a = gb_read(0xC1C7);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_002_4B49_jr_002_4BA1;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_002_4B49_jr_002_4BA1;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_002_4B49_jr_002_4BA1;
    /* call_open_dialog Dialog279 */;
  func_002_4B49_jr_002_4BA1:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1C7, gb.regs.a);
    gb_write(0xC1AC, gb.regs.a);
    return;
  func_002_4B49_jr_002_4BA9:;
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4A1D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9D, gb.regs.a);
  func_002_4B49_return:;
    return;
}

void LinkDirectionToAdjacentTileIndexX(void) {
  LinkDirectionToAdjacentTileIndexX_right:;
    /* data: db $14 */;
  LinkDirectionToAdjacentTileIndexX_left:;
    /* data: db $FC */;
  LinkDirectionToAdjacentTileIndexX_up:;
    /* data: db $08 */;
  LinkDirectionToAdjacentTileIndexX_down:;
    /* data: db $08 */;
    LinkDirectionToAdjacentTileIndexY(); return;
}

void LinkDirectionToAdjacentTileIndexY(void) {
  LinkDirectionToAdjacentTileIndexY_right:;
    /* data: db $0A */;
  LinkDirectionToAdjacentTileIndexY_left:;
    /* data: db $0A */;
  LinkDirectionToAdjacentTileIndexY_up:;
    /* data: db $FC */;
  LinkDirectionToAdjacentTileIndexY_down:;
    /* data: db $14 */;
    func_002_4BC8(); return;
}

void func_002_4BC8(void) {
    func_002_4D20();
    if (GET_FLAG_C()) return;
    gb.regs.a = 2;
    gb_write(0xC1C7, gb.regs.a);
    label_002_4C92(); return;
}

void func_002_4BD4(void) {
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_002_4BD4_jr_4BFA;
    gb.regs.a = 4;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 6;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 5;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 7;
    jr_002_4C0F(); return;
  func_002_4BD4_jr_4BFA:;
    gb.regs.a = 0x6A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x6B;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7B;
    jr_002_4C0F(); return;
}

void jr_002_4C0F(void) {
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    return;
}

void func_002_4C14(void) {
    gb_push16(gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xDD39;
    gb.regs.a = gb_read(0xDD38);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xDD38, gb.regs.a);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_002_4C14_jr_4C64;
    gb.regs.a = 4;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 6;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 5;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 5;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 5;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 7;
    jr_002_4C8B(); return;
  func_002_4C14_jr_4C64:;
    gb.regs.a = 0x6A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 3;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 0x6B;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 3;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 0x7B;
    jr_002_4C8B(); return;
}

void jr_002_4C8B(void) {
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de = gb_pop16();
    return;
}

void label_002_4C92(void) {
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xCC);
    gb.regs.a = 0x82;
    BackupObjectInRAM2();
    label_2887();
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_4C92_jr_4CBE;
    func_002_4BD4();
    jr_002_4CC1(); return;
  label_002_4C92_jr_4CBE:;
    func_002_4C14();
    jr_002_4CC1(); return;
}

void jr_002_4CC1(void) {
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { ret_002_4D1F(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_4CC1_jr_4CD3;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) return;
  jr_002_4CC1_jr_4CD3:;
    GetRandomByte();
    alu_rra();
    gb.regs.a = 0x2E;
    if (!GET_FLAG_C()) goto jr_002_4CC1_randomDropEnd;
    gb.regs.a = 0x2D;
  jr_002_4CC1_randomDropEnd:;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { ret_002_4D1F(); return; };
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
    gb_write(gb.regs.hl, 0x20);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x0C;
    ApplyVectorTowardsLink_trampoline();
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
    ret_002_4D1F(); return;
}

void ret_002_4D1F(void) {
    return;
}

void func_002_4D20(void) {
    gb.regs.a = gb_read(0xC15C);
    gb.regs.hl = 0xFFA2;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC11C;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFF9;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_002_4D20_done;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4A89;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x4A89;
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
    if (!GET_FLAG_Z()) goto func_002_4D20_done;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    GetObjectPhysicsFlags_trampoline();
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto func_002_4D20_done;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_002_4D20_jr_4D8D;
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto func_002_4D20_done;
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) goto func_002_4D20_done;
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto func_002_4D20_done;
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) goto func_002_4D20_done;
    alu_cp8(gb.regs.a, 0xB9);
    if (GET_FLAG_Z()) goto func_002_4D20_done;
    goto func_002_4D20_jr_002_4D93;
  func_002_4D20_jr_4D8D:;
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto func_002_4D20_done;
  func_002_4D20_jr_002_4D93:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
  func_002_4D20_done:;
    alu_scf();
    return;
}

void label_002_4D97(void) {
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xAE);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_4D97_jr_4DCB;
    gb_push16(gb.regs.bc);
    gb.regs.c = 0xAE;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.a = 2;
    func_91D_jp_92E();
    gb.regs.bc = gb_pop16();
  label_002_4D97_jr_4DCB:;
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x76;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x77;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x76;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x77;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
}

void func_002_4DFC(void) {
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.de);
    gb.regs.hl = 0xDCF8;
    gb.regs.c = 0;
    gb.regs.ime = false;
  func_002_4DFC_loop:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = gb.regs.b;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl++;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto func_002_4DFC_loop;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.ime = true;
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
    return;
}

void Data_002_4E1C(void) {
    /* data: db $FF, $47, $00, $00, $0C, $39, $76, $5E, $FF, $47, $00, $00, $67, $28, $76, $5E */;
}

void func_002_4E2C(void) {
    gb_push16(gb.regs.bc);
    gb.regs.ime = false;
    gb.regs.hl = 0x4E1C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xDD30;
    gb.regs.c = 0;
  func_002_4E2C_loop_4E37:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto func_002_4E2C_loop_4E37;
    gb.regs.ime = true;
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
    gb.regs.bc = gb_pop16();
    return;
}

void func_002_4E48(void) {
    gb.regs.ime = false;
    gb.regs.hl = 0xDD30;
    gb.regs.e = 0;
  func_002_4E48_loop:;
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = gb.regs.b;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl++;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto func_002_4E48_loop;
    gb.regs.ime = true;
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
    return;
}

void LinkRevolvingDoorAnimation(void) {
    /* data: db LINK_ANIMATION_STATE_REVOLVING_DOOR_1 */;
    /* data: db LINK_ANIMATION_STATE_REVOLVING_DOOR_2 */;
    /* data: db LINK_ANIMATION_STATE_REVOLVING_DOOR_3 */;
    /* data: db LINK_ANIMATION_STATE_REVOLVING_DOOR_4 */;
    /* data: db LINK_ANIMATION_STATE_REVOLVING_DOOR_4 */;
    /* data: db LINK_ANIMATION_STATE_REVOLVING_DOOR_5 */;
    /* data: db LINK_ANIMATION_STATE_REVOLVING_DOOR_3 */;
}

void LinkMotionRevolvingDoorHandler(void) {
    gb.regs.a = 0x10;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xFF98, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xC198);
    gb_push16(gb.regs.af);
    gb.regs.d = 0;
    gb.regs.e = 8;
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_Z()) goto LinkMotionRevolvingDoorHandler_jr_4E95;
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, 0x28);
    if (GET_FLAG_Z()) goto LinkMotionRevolvingDoorHandler_jr_4E95;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_4E9D(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_4E9D(); return; };
    func_002_4DFC();
  LinkMotionRevolvingDoorHandler_jr_4E95:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_4E9D(); return; };
    func_002_4E2C();
    jr_002_4E9D(); return;
}

void jr_002_4E9D(void) {
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_rra();
    alu_rra();
    alu_rra();
  jr_002_4E9D_jr_4EA1:;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4D0F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = gb_read(0xC198);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC198, gb.regs.a);
    alu_cp8(gb.regs.a, 0x38);
    if (GET_FLAG_C()) goto jr_002_4E9D_jr_4EC4;
    gb.regs.a = 0xFB;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xFF9D, gb.regs.a);
  jr_002_4E9D_jr_4EC4:;
    gb.regs.a = gb_read(0xC198);
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_Z()) { ret_002_4EEF(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_4E9D_jr_4ED3;
    func_002_4E48();
  jr_002_4E9D_jr_4ED3:;
    gb.regs.a = 2;
    gb_write(0xC125, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC124, gb.regs.a);
    func_002_4EDD(); return;
}

void func_002_4EDD(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC198, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC11C, gb.regs.a);
    ret_002_4EEF(); return;
}

void ret_002_4EEF(void) {
    return;
}

void Data_002_4EF0(void) {
    /* data: db $00, $08, $F8, $00, $00, $06, $FA, $00, $00, $06, $FA, $00, $00, $00, $00, $00 */;
}

void Data_002_4F00(void) {
    /* data: db $00, $10, $F0, $00, $00, $0C, $F4, $00, $00, $0C, $F4, $00, $00, $00, $00, $00 */;
}

void Data_002_4F10(void) {
    /* data: db $00, $00, $00, $00, $F8, $FA, $FA, $00, $08, $06, $06, $00, $00, $00, $00, $00 */;
}

void Data_002_4F20(void) {
    /* data: db $00, $00, $00, $00, $F0, $F4, $F4, $00, $10, $0C, $0C, $00, $00, $00, $00, $00 */;
}

void LinkMotionSwimmingHandler(void) {
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkMotionSwimmingHandler_jr_4F3C;
    gb.regs.a = 0;
    gb_write(0xC11C, gb.regs.a);
    return;
  LinkMotionSwimmingHandler_jr_4F3C:;
    ResetSpinAttack();
    gb_write(0xFFA2, gb.regs.a);
    gb_write(0xC146, gb.regs.a);
    gb_write(0xC19B, gb.regs.a);
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC16A, gb.regs.a);
    gb_write(0xC16D, gb.regs.a);
    gb.regs.a = gb_read(0xDC56);
    gb_write(0xD46B, gb.regs.a);
    gb.regs.hl = 0xC19F;
    gb.regs.a = gb_read(0xFFA1);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { label_002_4F6D(); return; };
    ClearLinkPositionIncrement();
    gb.regs.a = gb_read(0xFFA1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkMotionSwimmingHandler_jr_4F6A;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA1, gb.regs.a);
  LinkMotionSwimmingHandler_jr_4F6A:;
    UpdateLinkWalkingAnimation(); return;
}

void label_002_4F6D(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto label_002_4F6D_divingEnd;
    gb.regs.a = gb_read(0xFF9C);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(0xFF9C, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_4F6D_divingEnd;
    gb.regs.a = 0xA0;
    gb_write(0xFFB7, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 3);
    func_002_5928();
  label_002_4F6D_divingEnd:;
    gb.regs.a = gb_read(0xC183);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_4F6D_jr_4F92;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC183, gb.regs.a);
    jr_002_4FA1(); return;
  label_002_4F6D_jr_4F92:;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_002_4FA1(); return; };
    gb.regs.a = 0x0F;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xC183, gb.regs.a);
    jr_002_4FA1(); return;
}

void jr_002_4FA1(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_002_5005(); return; };
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4EF0;
    gb.regs.a = gb_read(0xC183);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) goto jr_002_4FA1_jr_4FBB;
    gb.regs.hl = 0x4F00;
  jr_002_4FA1_jr_4FBB:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF9A;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto jr_002_4FA1_jr_4FCA;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_4FA1_jr_4FCA;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  jr_002_4FA1_jr_4FCA:;
    gb.regs.hl = 0x4F10;
    gb.regs.a = gb_read(0xC183);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) goto jr_002_4FA1_jr_4FD7;
    gb.regs.hl = 0x4F20;
  jr_002_4FA1_jr_4FD7:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF9B;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto jr_002_4FA1_jr_4FE6;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_4FA1_jr_4FE6;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  jr_002_4FA1_jr_4FE6:;
    gb.regs.a = gb_read(0xFF9A);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFF9C;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto jr_002_4FA1_jr_4FF5;
    gb.regs.hl = 0xC120;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_002_4FFA(); return;
  jr_002_4FA1_jr_4FF5:;
    gb.regs.a = 3;
    gb_write(0xC120, gb.regs.a);
    jr_002_4FFA(); return;
}

void jr_002_4FFA(void) {
    gb.regs.hl = 0x4877;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { jr_002_5005(); return; };
    gb_write(0xFF9E, gb.regs.a);
    jr_002_5005(); return;
}

void jr_002_5005(void) {
    UpdateLinkWalkingAnimation();
    gb.regs.a = gb_read(0xFFA1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_5005_jr_5012;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA1, gb.regs.a);
    jr_002_5015(); return;
  jr_002_5005_jr_5012:;
    func_002_44AD();
    jr_002_5015(); return;
}

void jr_002_5015(void) {
    func_002_753A();
    gb.regs.a = gb_read(0xFF9C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_5015_return;
    gb.regs.a = gb_read(0xFFB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_5015_jr_002_5024;
    gb_write(0xFF9C, gb.regs.a);
  jr_002_5015_jr_002_5024:;
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_5015_overworld;
    alu_cp8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto jr_002_5015_jr_002_507A;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xF2);
    if (!GET_FLAG_Z()) goto jr_002_5015_return;
    goto jr_002_5015_roomHasSunkPieceOfHeart;
  jr_002_5015_overworld:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x78);
    if (!GET_FLAG_Z()) goto jr_002_5015_return;
  jr_002_5015_roomHasSunkPieceOfHeart:;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto jr_002_5015_done;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x58);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto jr_002_5015_done;
    gb.regs.hl = 0xFFF8;
    alu_bit(5, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_002_5015_return;
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
    gb.regs.a = 0x35;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto jr_002_5015_return;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_res(4, gb_read(gb.regs.hl)));
  jr_002_5015_return:;
    return;
  jr_002_5015_jr_002_507A:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x8D);
    if (!GET_FLAG_Z()) goto jr_002_5015_done;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto jr_002_5015_done;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x58);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto jr_002_5015_done;
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xD404, gb.regs.a);
    gb.regs.a = gb_read(0xC11C);
    gb_write(0xD463, gb.regs.a);
    ApplyMapFadeOutTransitionWithNoise(); return;
  jr_002_5015_done:;
    return;
}

void LinkMotionUnknownHandler(void) {
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    UpdateFinalLinkPosition();
    func_21E1();
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    alu_cp8(gb.regs.a, 0xE0);
    if (GET_FLAG_Z()) goto LinkMotionUnknownHandler_jr_50BA;
    gb.regs.a = gb_read(0xFFA2);
    alu_cp8(gb.regs.a, 0x78);
    if (GET_FLAG_C()) return;
  LinkMotionUnknownHandler_jr_50BA:;
    ApplyMapFadeOutTransition();
    ClearLinkPositionIncrement();
    gb_write(0xFFA2, gb.regs.a);
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = 0x70;
    gb_write(0xDC70, gb.regs.a);
    return;
}

void LinkFallingDownAnimation(void) {
    /* data: db LINK_ANIMATION_STATE_FALLING_PIT_1 */;
    /* data: db LINK_ANIMATION_STATE_FALLING_PIT_2 */;
    /* data: db LINK_ANIMATION_STATE_FALLING_PIT_3 */;
    /* data: db LINK_ANIMATION_STATE_FALLING_PIT_3 */;
    /* data: db LINK_ANIMATION_STATE_HIDDEN */;
    /* data: db LINK_ANIMATION_STATE_HIDDEN */;
    /* data: db LINK_ANIMATION_STATE_HIDDEN */;
    /* data: db LINK_ANIMATION_STATE_HIDDEN */;
    /* data: db LINK_ANIMATION_STATE_HIDDEN */;
    /* data: db LINK_ANIMATION_STATE_HIDDEN */;
}

void LinkMotionFallingDownHandler(void) {
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xC198);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC198, gb.regs.a);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto LinkMotionFallingDownHandler_jr_50F6;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4F31;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9D, gb.regs.a);
    return;
  LinkMotionFallingDownHandler_jr_50F6:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC13E, gb.regs.a);
    gb_write(0xC121, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    func_002_52D6();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_512B(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto LinkMotionFallingDownHandler_jr_511B;
    alu_cp8(gb.regs.a, 0x95);
    if (GET_FLAG_Z()) goto LinkMotionFallingDownHandler_jr_511B;
    alu_cp8(gb.regs.a, 0x2C);
    if (GET_FLAG_Z()) goto LinkMotionFallingDownHandler_jr_511B;
    alu_cp8(gb.regs.a, 0xEC);
    if (!GET_FLAG_Z()) { jr_002_512B(); return; };
  LinkMotionFallingDownHandler_jr_511B:;
    gb.regs.a = 9;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xFFB7, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9C, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFF9D, gb.regs.a);
    return;
}

void jr_002_512B(void) {
    gb.regs.a = gb_read(0xDC73);
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) { jr_002_516A(); return; };
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { jr_002_5155(); return; };
    gb.regs.a = gb_read(0xD401);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_002_512B_jr_5145;
    gb.regs.a = gb_read(0xFF99);
    gb_write(0xD404, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_002_515C(); return;
  jr_002_512B_jr_5145:;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xD404, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xD405, gb.regs.a);
    jr_002_5155(); return;
}

void jr_002_5155(void) {
    gb.regs.a = 1;
    gb_write(0xD475, gb.regs.a);
    gb.regs.a = 0x70;
    jr_002_515C(); return;
}

void jr_002_515C(void) {
    gb_write(0xDC70, gb.regs.a);
    ClearLinkPositionIncrement();
    gb_write(0xFFA3, gb.regs.a);
    gb_write(0xC146, gb.regs.a);
    ApplyMapFadeOutTransition(); return;
}

void jr_002_516A(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_516A_jr_5176;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x1E);
    if (GET_FLAG_Z()) { jr_002_5155(); return; };
  jr_002_516A_jr_5176:;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) { jr_002_51AC(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x7A);
    if (GET_FLAG_Z()) goto jr_002_516A_WaterfallWarp;
    alu_cp8(gb.regs.a, 0x7B);
    if (GET_FLAG_Z()) goto jr_002_516A_WaterfallWarp;
    alu_cp8(gb.regs.a, 0x7C);
    if (GET_FLAG_Z()) goto jr_002_516A_WaterfallWarp;
    alu_cp8(gb.regs.a, 0x7D);
    if (!GET_FLAG_Z()) { jr_002_51AC(); return; };
  jr_002_516A_WaterfallWarp:;
    gb.regs.a = 0;
    gb.regs.hl = 0xD401;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x68;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x56;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x24;
    gb_write(0xDC70, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFF9E, gb.regs.a);
    ApplyMapFadeOutTransition(); return;
}

void jr_002_51AC(void) {
    label_002_52B9();
    gb.regs.a = gb_read(0xDC3C);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    return;
}

void HandleGotItemA(void) {
    gb.regs.a = gb_read(0xC1AA);
    alu_cp8(gb.regs.a, 0x2E);
    if (!GET_FLAG_Z()) { HandleGotItemB(); return; };
    gb.regs.a = 0x17;
    gb_write(0xFFF2, gb.regs.a);
    HandleGotItemB(); return;
}

void HandleGotItemB(void) {
    ResetSpinAttack();
    gb_write(0xC16A, gb.regs.a);
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC13E, gb.regs.a);
    ApplyLinkMotionState();
    func_21E1();
    gb.regs.a = gb_read(0xFFA3);
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto HandleGotItemB_jr_51ED;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA2, gb.regs.a);
    gb_write(0xC149, gb.regs.a);
    gb_write(0xFFA3, gb.regs.a);
  HandleGotItemB_jr_51ED:;
    gb.regs.a = 0x6B;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.bc = 0xC010;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFA2;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC13B;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xC1A9);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_002_524F(); return; };
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.bc++;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.bc++;
    gb.regs.a = gb_read(0xC1A9);
    gb.regs.e = 0xAE;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto HandleGotItemB_jr_522F;
    gb.regs.e = 0x8E;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_002_5244(); return; };
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { jr_002_5234(); return; };
    gb.regs.e = 0x8C;
    func_002_524A();
    jr_002_5237(); return;
  HandleGotItemB_jr_522F:;
    func_002_523A();
    jr_002_5237(); return;
}

void jr_002_5234(void) {
    func_002_523F();
    jr_002_5237(); return;
}

void jr_002_5237(void) {
    gb.regs.bc++;
    gb_write(gb.regs.bc, gb.regs.a);
    return;
}

void func_002_523A(void) {
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.a = 0x14;
    return;
}

void func_002_523F(void) {
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.a = 0x14;
    return;
}

void jr_002_5244(void) {
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.a = 0x16;
    jr_002_5237(); return;
}

void func_002_524A(void) {
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.a = 0x10;
    return;
}

void jr_002_524F(void) {
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.h = gb.regs.a;
    gb.regs.l = gb.regs.a;
    gb.regs.a = 6;
    gb_write(0xFFD9, gb.regs.a);
    func_1819(); return;
}

void LinkMotionRecoverHandler(void) {
    ResetSpinAttack();
    ClearLinkPositionIncrement();
    gb.regs.a = gb_read(0xFFB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_529F(); return; };
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFF9C);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto LinkMotionRecoverHandler_reduceHealthEnd;
    gb.regs.a = gb_read(0xDC3C);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xDC3C, gb.regs.a);
  LinkMotionRecoverHandler_reduceHealthEnd:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9C, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkMotionRecoverHandler_anglersTunnelEntranceEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x2B);
    if (!GET_FLAG_Z()) goto LinkMotionRecoverHandler_anglersTunnelEntranceEnd;
    gb.regs.a = 0x48;
    gb_write(0xDC59, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xDC5A, gb.regs.a);
  LinkMotionRecoverHandler_anglersTunnelEntranceEnd:;
    label_002_52B9(); return;
}

void jr_002_529F(void) {
    gb.regs.e = 0xFF;
    gb.regs.a = gb_read(0xFFB7);
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) goto jr_002_529F_jr_002_52B5;
    gb.regs.e = 0x4E;
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) goto jr_002_529F_jr_002_52B5;
    if (!GET_FLAG_Z()) goto jr_002_529F_jr_002_52B3;
    gb.regs.a = 3;
    gb_write(0xFFF3, gb.regs.a);
  jr_002_529F_jr_002_52B3:;
    gb.regs.e = 0x4C;
  jr_002_529F_jr_002_52B5:;
    gb.regs.a = gb.regs.e;
    gb_write(0xFF9D, gb.regs.a);
    return;
}

void label_002_52B9(void) {
    gb.regs.a = 0x40;
    gb_write(0xDC6F, gb.regs.a);
    gb.regs.a = gb_read(0xDC59);
    gb_write(0xFF98, gb.regs.a);
    gb_write(0xFF9F, gb.regs.a);
    gb.regs.a = gb_read(0xDC5A);
    gb_write(0xFF99, gb.regs.a);
    gb_write(0xFFA0, gb.regs.a);
    gb.regs.hl = 0xFFA2;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC145, gb.regs.a);
    func_002_4EDD();
    func_002_52D6(); return;
}

void func_002_52D6(void) {
    gb.regs.a = gb_read(0xFFAC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_002_52D6_return;
    gb.regs.a = 1;
    gb_write(0xFFAC, gb.regs.a);
  func_002_52D6_return:;
    return;
}

void LinkDirectionToMagicRodXOffset(void) {
    /* data: db $0D,    $F3,    $00,    $FF */;
    /* data: db $08,    $F8,    $0C,    $F5 */;
}

void LinkDirectionToMagicRodYOffset(void) {
    /* data: db $00,    $00,    $F3,    $0E */;
    /* data: db $F3,    $F3,    $FC,    $00 */;
}

void LinkDirectionToMagicRodTiles(void) {
    /* data: db $06, $08,   $08, $06,   $04, $FF,   $FF, $04 */;
    /* data: db $04, $FF,   $FF, $04,   $06, $08,   $08, $06 */;
}

void LinkDirectionToMagicRodOAMAttributes(void) {
    /* data: db $02, $02,   $22, $22,   $22, $02,   $02, $42 */;
    /* data: db $22, $02,   $02, $22,   $02, $02,   $22, $22 */;
}

void label_002_5310(void) {
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    alu_cp8(gb.regs.a, 8);
    gb.regs.a = gb_read(0xFF9E);
    if (GET_FLAG_C()) goto label_002_5310_skipOffset;
    gb.regs.a = alu_add8(gb.regs.a, 4);
  label_002_5310_skipOffset:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x50F8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0x50F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.hl = 0x5100;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = 0x5110;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFDC, gb.regs.a);
    gb.regs.de = 0xC010;
    gb.regs.bc = 0xC014;
    gb.regs.a = gb_read(0xC145);
    gb.regs.hl = 0xC13B;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD9);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto label_002_5310_jr_535E;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
  label_002_5310_jr_535E:;
    /* TODO: :  */;
    gb.regs.a = gb_read(0xFFDA);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto label_002_5310_jr_5366;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.bc, gb.regs.a);
  label_002_5310_jr_5366:;
    /* TODO: :  */;
    gb.regs.de++;
    gb.regs.bc++;
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.de++;
    gb.regs.bc++;
    gb.regs.a = gb_read(0xFFD9);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = gb_read(0xFFDA);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.de++;
    gb.regs.bc++;
    gb.regs.a = gb_read(0xFFDB);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = gb_read(0xFFDC);
    gb_write(gb.regs.bc, gb.regs.a);
    return;
}

void LinkDirectionToEntitiesPositionX(void) {
  LinkDirectionToEntitiesPositionX_right:;
    /* data: db 4 */;
  LinkDirectionToEntitiesPositionX_left:;
    /* data: db -4 */;
  LinkDirectionToEntitiesPositionX_up:;
    /* data: db -4 */;
  LinkDirectionToEntitiesPositionX_down:;
    /* data: db 4 */;
    LinkDirectionToEntitiesPositionY(); return;
}

void LinkDirectionToEntitiesPositionY(void) {
  LinkDirectionToEntitiesPositionY_right:;
    /* data: db 4 */;
  LinkDirectionToEntitiesPositionY_left:;
    /* data: db 4 */;
  LinkDirectionToEntitiesPositionY_up:;
    /* data: db -4 */;
  LinkDirectionToEntitiesPositionY_down:;
    /* data: db 4 */;
    label_002_538B(); return;
}

void label_002_538B(void) {
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x518A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x518A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.d);
    label_140F(); return;
}

void TryOpenLockedDoor(void) {
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xFFE8);
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto TryOpenLockedDoor_spawnPushedBlock;
    gb.regs.a = gb_read(0xDC78);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TryOpenLockedDoor_return;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xDC78, gb.regs.a);
    SynchronizeDungeonsItemFlags_trampoline();
    EnqueueDoorUnlockedSfx();
    GetRoomStatusAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x40);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    gb.regs.a = gb_read(0xFFDB);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFDC);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    RevealObjectUnderObject_trampoline();
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    goto TryOpenLockedDoor_return;
  TryOpenLockedDoor_spawnPushedBlock:;
    gb.regs.a = 6;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto TryOpenLockedDoor_return;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFDB);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFDC);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  TryOpenLockedDoor_return:;
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
    return;
}

void EnqueueDoorUnlockedSfx(void) {
    gb.regs.a = 4;
    gb_write(0xFFF4, gb.regs.a);
    return;
}

void label_002_5425(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    gb.regs.a = 0x30;
    if (GET_FLAG_Z()) goto label_002_5425_spawnEntity;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x0A);
    gb.regs.a = 0x30;
    if (GET_FLAG_C()) goto label_002_5425_spawnEntity;
    gb.regs.a = 0x3C;
  label_002_5425_spawnEntity:;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { jr_002_546F(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x28);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto label_002_5425_jr_5453;
    gb_write(gb.regs.hl, 0x48);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto label_002_5425_jr_5453;
    gb_write(gb.regs.hl, 0x58);
  label_002_5425_jr_5453:;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x3C);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto label_002_5425_jr_5469;
    gb_write(gb.regs.hl, 0x3C);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto label_002_5425_jr_5469;
    gb_write(gb.regs.hl, 0x3C);
  label_002_5425_jr_5469:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x70);
    jr_002_546F(); return;
}

void jr_002_546F(void) {
    gb.regs.bc = gb_pop16();
    return;
}

void DebugWarpRooms(void) {
    /* data: db $30 */;
    /* data: db $33 */;
    /* data: db $81 */;
    /* data: db $01 */;
    /* data: db $28 */;
    /* data: db $56 */;
    /* data: db $68 */;
    /* data: db $87 */;
    /* data: db $B3 */;
    /* data: db $E6 */;
    /* data: db $0A */;
}

void DebugWarpMaps(void) {
    /* data: db MAP_BOTTLE_GROTTO */;
    /* data: db MAP_BOTTLE_GROTTO */;
    /* data: db MAP_CATFISHS_MAW */;
    /* data: db MAP_TAIL_CAVE */;
    /* data: db MAP_BOTTLE_GROTTO */;
    /* data: db MAP_KEY_CAVERN */;
    /* data: db MAP_ANGLERS_TUNNEL */;
    /* data: db MAP_CATFISHS_MAW */;
    /* data: db MAP_FACE_SHRINE */;
    /* data: db MAP_EAGLES_TOWER */;
    /* data: db MAP_TURTLE_ROCK */;
}

void label_002_5487(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD9B5, gb.regs.a);
    gb_write(0xDAB5, gb.regs.a);
    gb.regs.a = gb_read(0xC134);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_5487_decrementPhotoAlbumCooldown;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC134, gb.regs.a);
  label_002_5487_decrementPhotoAlbumCooldown:;
    gb.regs.a = gb_read(0xDEAD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_5487_jr_54A2;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xDEAD, gb.regs.a);
  label_002_5487_jr_54A2:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
  label_002_5487_jr_54A6:;
    if (GET_FLAG_Z()) { renderTranscientVFXs(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    renderTranscientVFXs(); return;
    gb.regs.a = 1;
    gb_write(0xD401, gb.regs.a);
    gb.regs.a = gb_read(0xD479);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_C()) goto label_002_5487_jr_54BD;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  label_002_5487_jr_54BD:;
    gb_write(0xD479, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = 0x525E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD403, gb.regs.a);
    gb.regs.hl = 0x5269;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD402, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xD404, gb.regs.a);
    gb.regs.a = 0x70;
    gb_write(0xD405, gb.regs.a);
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 2);
    ApplyMapFadeOutTransitionWithNoise(); return;
}

void renderTranscientVFXs(void) {
    gb.regs.b = 0;
    gb.regs.c = 0x0F;
  renderTranscientVFXs_transcientVFXsLoop:;
    gb.regs.a = gb.regs.c;
    gb_write(0xC123, gb.regs.a);
    gb.regs.hl = 0xC510;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto renderTranscientVFXs_renderEnd;
    RenderTranscientVfx();
  renderTranscientVFXs_renderEnd:;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto renderTranscientVFXs_transcientVFXsLoop;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto renderTranscientVFXs_return;
    gb.regs.a = gb_read(0xFFAC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto renderTranscientVFXs_return;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { staircaseIsActive(); return; };
    gb.regs.hl = 0xFFAD;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 6);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) goto renderTranscientVFXs_makeStaircaseActive;
    gb.regs.hl = 0xFFAE;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 6);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_C()) goto renderTranscientVFXs_return;
  renderTranscientVFXs_makeStaircaseActive:;
    gb.regs.a = gb_read(0xFFAC);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFAC, gb.regs.a);
  renderTranscientVFXs_return:;
    return;
}

void staircaseIsActive(void) {
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto staircaseIsActive_return;
    gb.regs.hl = 0xFFAD;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 5);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) goto staircaseIsActive_return;
    gb.regs.hl = 0xFFAE;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 5);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) goto staircaseIsActive_return;
    gb.regs.a = gb_read(0xC15C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto staircaseIsActive_return;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x77);
    if (!GET_FLAG_Z()) goto staircaseIsActive_colorDungeonEnd;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto staircaseIsActive_colorDungeonEnd;
    gb.regs.a = gb_read(0xDE81);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto staircaseIsActive_return;
  staircaseIsActive_colorDungeonEnd:;
    ApplyMapFadeOutTransitionWithSound();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFAC, gb.regs.a);
  staircaseIsActive_return:;
    return;
}

void RenderTranscientVfx(void) {
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto RenderTranscientVfx_removeVfx;
    gb.regs.hl = 0xC520;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderTranscientVfx_render;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    if (!GET_FLAG_Z()) goto RenderTranscientVfx_render;
  RenderTranscientVfx_removeVfx:;
    ClearTranscientVfx();
  RenderTranscientVfx_render:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_dec8(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: RenderTranscientWaterSplash(); return;
        case 0x01: RenderTranscientPoof(); return;
        case 0x02: RenderTranscientPoof(); return;
        case 0x03: RenderTranscientPoof(); return;
        case 0x04: RenderTranscientSwordPoke(); return;
        case 0x05: RenderTranscientLaserBeam(); return;
        case 0x06: RenderTranscientMovingSparkle(); return;
        case 0x07: RenderTranscientSmoke(); return;
        case 0x08: RenderTranscientRumble(); return;
        case 0x09: RenderTranscientLavaSplash(); return;
        case 0x0A: RenderTranscientPegasusDust(); return;
        case 0x0B: RenderTranscientPegasusSplash(); return;
        case 0x0C: RenderTranscientSwordBeam(); return;
    }
}

void Data_002_559C(void) {
    /* data: db $00, $00, $08, $20, $00, $08, $06, $20, $00, $00, $06, $00, $00, $08, $08, $00 */;
    /* data: db $00, $04, $04, $40, $00, $04, $04, $40, $00, $04, $04, $00, $00, $04, $04, $00 */;
}

void Data_002_55BC(void) {
    /* data: db $00, $00, $08, $30, $00, $08, $06, $30, $00, $00, $06, $10, $00, $08, $08, $10 */;
    /* data: db $00, $04, $04, $50, $00, $04, $04, $50, $00, $04, $04, $10, $00, $04, $04, $10 */;
}

void RenderTranscientSwordBeam(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    func_002_58D0();
    gb.regs.hl = 0xC590;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
  RenderTranscientSwordBeam_jr_55EF:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x559C;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto RenderTranscientSwordBeam_jr_55FD;
    gb.regs.hl = 0x55BC;
  RenderTranscientSwordBeam_jr_55FD:;
    label_002_583A(); return;
}

void Data_002_5600(void) {
    /* data: db $F8, $00, $08 */;
}

void Data_002_5603(void) {
    /* data: db $10, $6C, $6E, $6E */;
}

void Data_002_5607(void) {
    /* data: db $6C, $00, $00, $20, $20 */;
}

void RenderTranscientLavaSplash(void) {
    func_002_58D0();
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb_push16(gb.regs.bc);
    gb.regs.c = 4;
  RenderTranscientLavaSplash_loop_561E:;
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.hl = 0x55FF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.hl = 0x5603;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.hl = 0x5607;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto RenderTranscientLavaSplash_loop_561E;
    gb.regs.bc = gb_pop16();
    gb.regs.a = 4;
    label_002_58F5(); return;
}

void Data_002_5642(void) {
    /* data: db $7E, $1F, $0C, $1F */;
}

void RenderTranscientRumble(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC155, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto RenderTranscientRumble_jr_565B;
    gb.regs.hl = 0xC167;
    gb_write(gb.regs.hl, gb.regs.b);
  RenderTranscientRumble_jr_565B:;
    alu_cp8(gb.regs.a, 0xDE);
    if (!GET_FLAG_Z()) goto RenderTranscientRumble_jr_5664;
    EnqueueDoorUnlockedSfx();
    gb.regs.a = 0xDE;
  RenderTranscientRumble_jr_5664:;
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto RenderTranscientRumble_jr_566D;
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x2A);
  RenderTranscientRumble_jr_566D:;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto RenderTranscientRumble_jr_5678;
    gb.regs.a = 0x50;
    gb_write(0xC5AF, gb.regs.a);
    gb.regs.a = 0x0A;
  RenderTranscientRumble_jr_5678:;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { jr_002_568C(); return; };
    alu_cp8(gb.regs.a, 0x9C);
    if (!GET_FLAG_C()) return;
    gb.regs.e = 1;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto RenderTranscientRumble_jr_5687;
    gb.regs.e = 0xFE;
  RenderTranscientRumble_jr_5687:;
    gb.regs.a = gb.regs.e;
    gb_write(0xC155, gb.regs.a);
    return;
}

void jr_002_568C(void) {
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { label_002_5707(); return; };
    gb.regs.a = gb_read(0xFFD7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5642;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 0x60;
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB5);
    gb.regs.a = 0x10;
    if (!GET_FLAG_Z()) goto jr_002_568C_jr_56B8;
    gb.regs.a = 0x60;
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = 0x10;
  jr_002_568C_jr_56B8:;
    gb_write(0xFFCD, gb.regs.a);
    label_2887();
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x41;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x41;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xC520;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { label_002_5707(); return; };
    gb.regs.hl = 0xD7DC;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB5);
    if (!GET_FLAG_Z()) goto jr_002_568C_jr_56FC;
    gb.regs.hl = 0xD7DC;
  jr_002_568C_jr_56FC:;
    gb_write(gb.regs.hl, 0xE3);
    gb.regs.a = 0x82;
    BackupObjectInRAM2();
    gb.regs.a = 0x23;
    gb_write(0xFFF2, gb.regs.a);
    label_002_5707(); return;
}

void label_002_5707(void) {
    return;
}

void Data_002_5708(void) {
    /* data: db $00, $04, $24, $01, $00, $04, $24, $01, $00, $00, $1E, $01, $00, $08, $1E, $61 */;
}

void RenderTranscientPegasusDust(void) {
    func_002_58D0();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.d = 0;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x5708;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_583A(); return; };
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xC000;
    label_002_5854();
    label_002_5854(); return;
}

void Data_002_5736(void) {
    /* data: db $00, $00, $1E, $01, $00, $08, $1E, $61, $00, $00, $30, $01, $00, $08, $30, $61 */;
}

void RenderTranscientSmoke(void) {
    func_002_58D0();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.d = 0;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x5736;
    label_002_583A(); return;
}

void Data_002_5756(void) {
    /* data: db $01, $FF, $01, $FF */;
}

void Data_002_575A(void) {
    /* data: db $01, $01, $FF, $FF */;
}

void RenderTranscientMovingSparkle(void) {
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto RenderTranscientMovingSparkle_jr_5780;
    gb.regs.hl = 0xC590;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5756;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC530;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x575A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC540;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  RenderTranscientMovingSparkle_jr_5780:;
    func_002_58D0();
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x3A;
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_C()) goto RenderTranscientMovingSparkle_jr_578E;
    gb.regs.c = 0x3C;
  RenderTranscientMovingSparkle_jr_578E:;
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD9);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.bc = gb_pop16();
    gb.regs.a = 2;
    label_002_58F5(); return;
}

void RenderTranscientLaserBeam(void) {
    func_002_58D0();
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
  RenderTranscientLaserBeam_jr_57BB:;
    gb.regs.d = 0;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD9);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x24;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_rl(gb.regs.a);
    gb.regs.a = alu_rl(gb.regs.a);
    gb.regs.a = alu_rl(gb.regs.a);
    gb.regs.a = alu_rl(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 1;
    label_002_58F5(); return;
}

void Data_002_57DD(void) {
    /* data: db $00, $FF, $3C, $00, $00, $07, $3C, $20, $00, $FF, $3A, $00, $00, $07, $3A, $20 */;
}

void RenderTranscientSwordPoke(void) {
    func_002_58D0();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.d = 0;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x57DD;
    label_002_583A(); return;
}

void Data_002_57FD(void) {
    /* data: db $F6, $FE, $18, $00, $F8, $0A, $18, $20, $FC, $00, $18, $00, $FE, $08, $18, $20 */;
}

void Data_002_580D(void) {
    /* data: db $00, $FA, $18, $00, $00, $0E, $18, $20, $02, $FC, $18, $00, $02, $0C, $18, $20 */;
}

void RenderTranscientPegasusSplash(void) {
    func_002_58D0();
    gb.regs.hl = 0x580D;
    jr_002_5833(); return;
}

void RenderTranscientWaterSplash(void) {
    func_002_58D0();
    gb.regs.a = gb_read(0xC1A7);
    alu_cp8(gb.regs.a, 2);
  RenderTranscientWaterSplash_jr_582D:;
    if (GET_FLAG_Z()) { label_002_5877(); return; };
    gb.regs.hl = 0x57FD;
    jr_002_5833(); return;
}

void jr_002_5833(void) {
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    label_002_583A(); return;
}

void label_002_583A(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = gb_pop16();
    label_002_5854();
    label_002_5854();
    gb.regs.a = 2;
    label_002_58F5(); return;
}

void label_002_5854(void) {
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl++;
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl++;
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    return;
}

void Data_002_5867(void) {
    /* data: db $00, $00, $7A, $00, $00, $08, $7A, $20, $00, $00, $78, $00, $00, $08, $78, $20 */;
}

void label_002_5877(void) {
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.d = 0;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x5867;
    label_002_583A(); return;
}

void Data_002_5884(void) {
    /* data: db $00, $00, $32, $01, $00, $08, $32, $21, $00, $00, $32, $01, $00, $08, $32, $21 */;
    /* data: db $00, $00, $30, $01, $00, $08, $30, $21, $00, $00, $30, $01, $00, $08, $30, $21 */;
}

void RenderTranscientPoof(void) {
    func_002_58D0();
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto RenderTranscientPoof_jr_58BB;
    gb.regs.hl = 0xC510;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto RenderTranscientPoof_jr_58BB;
    func_002_5ED3();
    jr_002_58C2(); return;
  RenderTranscientPoof_jr_58BB:;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { jr_002_58C2(); return; };
    func_002_5F5C();
    jr_002_58C2(); return;
}

void jr_002_58C2(void) {
    gb.regs.a = gb_read(0xFFD7);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x18);
    gb.regs.d = 0;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x5884;
    label_002_583A(); return;
}

void func_002_58D0(void) {
    gb.regs.hl = 0xC540;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) { ClearTranscientVfx(); return; };
    gb.regs.hl = 0xC530;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD9, gb.regs.a);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_C()) { ret_002_58EC(); return; };
}

void ClearTranscientVfx(void) {
    gb.regs.hl = 0xC510;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    ret_002_58EC(); return;
}

void ret_002_58EC(void) {
    return;
}

void Data_002_58ED(void) {
    /* data: db $00, $08, $10, $18, $20, $28, $30, $38 */;
}

void label_002_58F5(void) {
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_C()) goto label_002_58F5_jr_5904;
    gb.regs.a = alu_sub8(gb.regs.a, 0x60);
  label_002_58F5_jr_5904:;
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = gb_read(0xC3C1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xC3C1, gb.regs.a);
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_C()) { ret_002_5925(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.hl = 0xC123;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
  label_002_58F5_jr_591B:;
    gb.regs.d = 0;
    gb.regs.hl = 0x58ED;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC3C0, gb.regs.a);
    ret_002_5925(); return;
}

void ret_002_5925(void) {
    return;
}

void func_002_5926(void) {
    gb.regs.a = gb_read(0xFF99);
    func_002_5928(); return;
}

void func_002_5928(void) {
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 1;
    AddTranscientVfx(); return;
}

void Data_002_5937(void) {
    /* data: db $FE, $FD, $FB, $F7 */;
}

void label_002_593B(void) {
    gb.regs.hl = 0xC19F;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto label_002_593B_return;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_593B_return;
    ExecuteRoomTriggersAndEffects();
    gb.regs.a = gb_read(0xC188);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_593B_jr_002_5968;
    alu_cp8(gb.regs.a, 2);
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_593B_jr_002_5964;
    func_002_5A7B();
    goto label_002_593B_return;
  label_002_593B_jr_002_5964:;
    func_002_5C04();
  label_002_593B_return:;
    return;
  label_002_593B_jr_002_5968:;
    gb.regs.a = gb_read(0xC18C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_593B_jr_002_599D;
    gb.regs.e = 3;
    gb.regs.a = gb_read(0xC18A);
    gb.regs.c = gb.regs.a;
  label_002_593B_jr_002_5974:;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto label_002_593B_jr_002_5998;
    gb.regs.c = alu_srl(gb.regs.c);
    if (!GET_FLAG_C()) goto label_002_593B_jr_002_5974;
    gb.regs.d = 0;
    gb.regs.hl = 0x5933;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC18A);
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC18A, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(0xC189, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC54, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC188, gb.regs.a);
    return;
  label_002_593B_jr_002_5998:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC18C, gb.regs.a);
    return;
  label_002_593B_jr_002_599D:;
    gb.regs.a = gb_read(0xC18D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_593B_jr_002_59A4;
    return;
  label_002_593B_jr_002_59A4:;
    gb.regs.e = 3;
    gb.regs.a = gb_read(0xC18B);
    gb.regs.c = gb.regs.a;
  label_002_593B_loop:;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto label_002_593B_jr_002_59CF;
    gb.regs.c = alu_srl(gb.regs.c);
    if (!GET_FLAG_C()) goto label_002_593B_loop;
    gb.regs.d = 0;
    gb.regs.hl = 0x5933;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC18B);
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC18B, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(0xC189, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC188, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC54, gb.regs.a);
    return;
  label_002_593B_jr_002_59CF:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC18D, gb.regs.a);
    return;
}

void Data_002_59D4(void) {
    /* data: db $50 */;
}

void Data_002_59D5(void) {
    /* data: db $51, $13, $12, $11, $10, $42, $43, $45, $13, $55, $11, $12, $46, $10, $56, $58 */;
    /* data: db $59, $13, $12, $11, $10, $4A, $4B, $4D, $13, $5D, $11, $12, $4E, $10, $5E, $02 */;
    /* data: db $03, $13, $12, $11, $10, $13, $12, $11, $10, $13, $12, $12, $13, $10, $11, $12 */;
    /* data: db $13, $10, $11, $11, $10, $13, $12, $11, $10, $13, $12, $12, $13, $10, $11, $12 */;
    /* data: db $13, $10, $11, $11, $10, $13, $12 */;
}

void Data_002_5A1C(void) {
    /* data: db $08, $08, $00, $00, $08, $08, $00, $00, $08, $08, $08, $00, $00, $08, $08, $00 */;
    /* data: db $00, $08 */;
}

void Data_002_5A2E(void) {
    /* data: db $00, $00, $08, $08, $00, $00, $08, $08, $00, $08, $08, $10, $10, $08, $08, $10 */;
    /* data: db $10, $08 */;
}

void Data_002_5A40(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $01, $01, $10, $10, $01, $01, $10, $10 */;
}

void Data_002_5A50(void) {
    /* data: db $43, $8C, $09, $0B, $43, $8C, $09, $0B, $44, $08, $0A, $0C, $44, $08, $0A, $0C */;
}

void Data_002_5A60(void) {
    /* data: db $04, $08, $02, $01, $04, $08, $02, $01, $04 */;
}

void Data_002_5A69(void) {
    /* data: db $F8, $08, $FF, $01, $F8, $08, $FF, $01, $F8 */;
}

void Data_002_5A72(void) {
    /* data: db $08, $04, $01, $02, $08, $04, $01, $02, $08 */;
}

void func_002_5A7B(void) {
    gb.regs.e = 0;
    gb.regs.d = gb.regs.e;
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.e;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE3, gb.regs.a);
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.a = gb_read(0xC189);
    gb.regs.c = gb.regs.a;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_5A95(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_002_5A7B_loop_5A8D:;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_002_5A7B_loop_5A8D;
}

void jr_002_5A95(void) {
    gb.regs.hl = 0x5A1C;
    gb.regs.a = gb_read(0xC189);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC1D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFCE, gb.regs.a);
    label_002_5AA7(); return;
}

void label_002_5AA7(void) {
    loop_start: ;
    gb.regs.hl = 0x5A2E;
    gb.regs.a = gb_read(0xFFE3);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC189);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC1E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFCD, gb.regs.a);
    gb_push16(gb.regs.de);
    label_2887();
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFE3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_5AA7_jr_5AC7;
    gb.regs.de++;
    gb.regs.de++;
  label_002_5AA7_jr_5AC7:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_5AA7_jr_5AD5;
    gb_push16(gb.regs.de);
    gb.regs.a = 2;
    gb.regs.b = 0;
    func_999();
    gb.regs.de = gb_pop16();
  label_002_5AA7_jr_5AD5:;
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x59D4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x59D5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFE3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_5AA7_jr_5B09;
    gb.regs.a = 9;
    gb_write(0xFFE3, gb.regs.a);
    goto loop_start;
  label_002_5AA7_jr_5B09:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.hl++;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xDC54);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(0xDC54, gb.regs.a);
    gb.regs.a = gb_read(0xDC54);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto label_002_5AA7_jr_5B1C;
    return;
  label_002_5AA7_jr_5B1C:;
    gb.regs.a = gb_read(0xFFE5);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_5AA7_jr_5B31;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE3, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x24);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.de--;
    gb.regs.de--;
    goto loop_start;
  label_002_5AA7_jr_5B31:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC188, gb.regs.a);
    gb_write(0xC1A8, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.a = gb_read(0xC189);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0xC1F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.c = gb.regs.a;
  label_002_5AA7_loop_5B4C:;
    gb.regs.hl = 0x5A40;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5A50;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFE5);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_5AA7_jr_5B6F;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.c = gb.regs.a;
    goto label_002_5AA7_loop_5B4C;
  label_002_5AA7_jr_5B6F:;
    GetRoomStatusAddress();
    gb.regs.c = gb.regs.l;
    gb.regs.b = gb.regs.h;
    gb.regs.a = gb_read(0xC189);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5A60;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.bc, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    gb.regs.hl = 0x5A69;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xDC56);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    GetRoomStatusAddressForMapPosition_trampoline();
    gb.regs.c = gb.regs.l;
    gb.regs.b = gb.regs.h;
    gb.regs.a = gb_read(0xC189);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5A72;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.bc, gb.regs.a);
    return;
}

void GetRoomStatusAddress(void) {
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GetRoomStatusAddress_computeAddress;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto GetRoomStatusAddress_regularDungeon;
    gb.regs.d = 0;
    gb.regs.hl = 0xDE88;
    goto GetRoomStatusAddress_computeAddress;
  GetRoomStatusAddress_regularDungeon:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto GetRoomStatusAddress_computeAddress;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto GetRoomStatusAddress_computeAddress;
    gb.regs.d = alu_inc8(gb.regs.d);
  GetRoomStatusAddress_computeAddress:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    return;
}

void Data_002_5BC4(void) {
    /* data: db $58 */;
}

void Data_002_5BC5(void) {
    /* data: db $59, $13, $12, $11, $10, $4A, $4B, $4D, $13, $5D, $11, $12, $4E, $10, $5E, $40 */;
    /* data: db $41, $58, $59, $4A, $4B, $52, $53, $44, $4D, $54, $5D */;
}

void Data_002_5BE0(void) {
    /* data: db $4E, $47, $5E, $57, $08, $08, $00, $00 */;
}

void Data_002_5BE8(void) {
    /* data: db $08, $08, $00, $00, $00, $00, $08, $08, $08, $08, $10, $10 */;
}

void Data_002_5BF4(void) {
    /* data: db $00, $00, $00, $00, $01, $01, $10, $10 */;
}

void Data_002_5BFC(void) {
    /* data: db $35, $37, $39, $3B, $36, $38, $3A, $3C */;
}

void func_002_5C04(void) {
    gb.regs.e = 0;
    gb.regs.d = gb.regs.e;
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.e;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE3, gb.regs.a);
    gb_write(0xFFE4, gb.regs.a);
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.a = gb_read(0xC189);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_002_5C21(); return; };
    gb.regs.c = gb.regs.a;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_002_5C04_loop_5C19:;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_002_5C04_loop_5C19;
}

void jr_002_5C21(void) {
    gb.regs.hl = 0x5BE0;
    gb.regs.a = gb_read(0xC189);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC1D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFCE, gb.regs.a);
    label_002_5C33(); return;
}

void label_002_5C33(void) {
    loop_start: ;
    gb.regs.hl = 0x5BE8;
    gb.regs.a = gb_read(0xFFE3);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC189);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC1E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = gb_read(0xDC5A);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.hl = 0xFFCD;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto label_002_5C33_jr_5C6F;
    gb.regs.a = gb_read(0xDC59);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.hl = 0xFFCE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto label_002_5C33_jr_5C6F;
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xDC59, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_write(0xDC5A, gb.regs.a);
  label_002_5C33_jr_5C6F:;
    gb_push16(gb.regs.de);
    label_2887();
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFE3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_5C33_jr_5C7B;
    gb.regs.de++;
    gb.regs.de++;
  label_002_5C33_jr_5C7B:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_5C33_jr_5C89;
    gb_push16(gb.regs.de);
    gb.regs.a = 2;
    gb.regs.b = 1;
    func_999();
    gb.regs.de = gb_pop16();
  label_002_5C33_jr_5C89:;
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x5BC4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x5BC5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFE3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_5C33_jr_5CBD;
    gb.regs.a = 4;
    gb_write(0xFFE3, gb.regs.a);
    goto loop_start;
  label_002_5C33_jr_5CBD:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.hl++;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xDC54);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(0xDC54, gb.regs.a);
    gb.regs.a = gb_read(0xDC54);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto label_002_5C33_jr_5CD0;
    return;
  label_002_5C33_jr_5CD0:;
    gb.regs.a = gb_read(0xFFE5);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_5C33_jr_5CE5;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE3, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.de--;
    gb.regs.de--;
    goto loop_start;
  label_002_5C33_jr_5CE5:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC188, gb.regs.a);
    gb_write(0xC1A8, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.a = gb_read(0xC189);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0xC1F4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
  label_002_5C33_loop_5CFE:;
    gb.regs.hl = 0x5BF4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5BFC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFE5);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_5C33_jr_5D21;
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.c = gb.regs.a;
    goto label_002_5C33_loop_5CFE;
  label_002_5C33_jr_5D21:;
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_5C33_jr_5D36;
    gb.regs.hl = 0xD9B5;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto label_002_5C33_jr_5D36;
    gb.regs.hl = 0xDE88;
  label_002_5C33_jr_5D36:;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC189);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5A60;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    return;
}

void ExecuteRoomTriggersAndEffects(void) {
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { MakeEffectObjectAppear_return(); return; };
    CheckTriggersResolution();
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: return;
        case 0x01: OpenLockedDoorsEffectHandler(); return;
        case 0x02: KillAllEnemiesEffectHandler(); return;
        case 0x03: RevealChestEffectHandler(); return;
        case 0x04: DropKeyEffectHandler(); return;
        case 0x05: RevealStairwayEffectHandler(); return;
        case 0x06: ClearMidbossEffectHandler(); return;
        case 0x07: DropFairyEffectHandler(); return;
    }
}

void KillAllEnemiesEffectHandler(void) {
    EventEffectGuard();
    gb.regs.c = 0x0F;
    gb.regs.b = 0;
  KillAllEnemiesEffectHandler_forEachEntity:;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto KillAllEnemiesEffectHandler_continue;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) goto KillAllEnemiesEffectHandler_continue;
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x1F);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x13;
    gb_write(0xFFF4, gb.regs.a);
  KillAllEnemiesEffectHandler_continue:;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto KillAllEnemiesEffectHandler_forEachEntity;
    return;
}

void EventEffectGuard(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto EventEffectGuard_returnToParent;
    gb.regs.a = gb_read(0xC18F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto EventEffectGuard_returnToParent;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC18E, gb.regs.a);
    return;
  EventEffectGuard_returnToParent:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
}

void DropFairyEffectHandler(void) {
    EventEffectGuard();
    gb.regs.a = 0x2F;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x88);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.a = 0x88;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    MakeEffectObjectAppear(); return;
}

void RevealStairwayEffectHandler(void) {
    EventEffectGuard();
    gb.regs.a = 0x88;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 4;
    MakeEffectObjectAppear(); return;
}

void MakeEffectObjectAppear(void) {
    AddTranscientVfx();
    GetRoomStatusAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
  MakeEffectObjectAppear_return:;
    return;
}

void DropKeyEffectHandler(void) {
    EventEffectGuard();
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x69);
    if (!GET_FLAG_Z()) goto DropKeyEffectHandler_jr_5E15;
    GetRoomStatusAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
  DropKeyEffectHandler_jr_5E15:;
    label_002_5425(); return;
}

void ClearMidbossEffectHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xDC0D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
}

void OpenLockedDoorsEffectHandler(void) {
    gb.regs.a = gb_read(0xC190);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto OpenLockedDoorsEffectHandler_jr_5E2E;
    func_002_5E7B();
  OpenLockedDoorsEffectHandler_jr_5E2E:;
    gb.regs.a = gb_read(0xC18F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC18E);
    alu_cp8(gb.regs.a, 0xC1);
    if (!GET_FLAG_Z()) { jr_002_5E6A(); return; };
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xDC0D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xD9B5;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto OpenLockedDoorsEffectHandler_jr_5E5A;
    gb.regs.hl = 0xDE88;
    jr_002_5E63(); return;
  OpenLockedDoorsEffectHandler_jr_5E5A:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) { jr_002_5E63(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) { jr_002_5E63(); return; };
    gb.regs.d = alu_inc8(gb.regs.d);
    jr_002_5E63(); return;
}

void jr_002_5E63(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
    gb.regs.a = 0x1B;
    gb_write(0xFFF2, gb.regs.a);
    jr_002_5E6A(); return;
}

void jr_002_5E6A(void) {
    gb.regs.a = gb_read(0xC190);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC18E, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC18C, gb.regs.a);
    EnqueueDoorUnlockedSfx(); return;
}

void func_002_5E7B(void) {
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x11);
    alu_cp8(gb.regs.a, 0x7E);
    if (!GET_FLAG_C()) goto func_002_5E7B_return;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x16);
    alu_cp8(gb.regs.a, 0x5E);
    if (!GET_FLAG_C()) goto func_002_5E7B_return;
    gb.regs.a = gb_read(0xC18F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_002_5E7B_return;
    gb.regs.a = 1;
    gb_write(0xC18D, gb.regs.a);
    gb_write(0xC190, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xC111, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xFFF4, gb.regs.a);
  func_002_5E7B_return:;
    return;
}

void Data_002_5EA3(void) {
    /* data: db $60, $70, $61, $71 */;
}

void Data_002_5EA7(void) {
    /* data: db $60, $70, $60, $70 */;
}

void RevealChestEffectHandler(void) {
    EventEffectGuard();
    gb.regs.a = 0x88;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x30);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto RevealChestEffectHandler_jr_5ECA;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x88);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto RevealChestEffectHandler_jr_5ECA;
    gb.regs.a = 0x40;
    jr_002_5ECC(); return;
  RevealChestEffectHandler_jr_5ECA:;
    gb.regs.a = 0x30;
    jr_002_5ECC(); return;
}

void jr_002_5ECC(void) {
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 3;
    AddTranscientVfx(); return;
}

void func_002_5ED3(void) {
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x30);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_002_5ED3_jr_5EEB;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x88);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto func_002_5ED3_jr_5EEB;
    gb.regs.a = 0x30;
    jr_002_5EED(); return;
  func_002_5ED3_jr_5EEB:;
    gb.regs.a = 0x20;
    jr_002_5EED(); return;
}

void jr_002_5EED(void) {
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = 0x80;
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
    gb.regs.a = 0xA0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xDE80, gb.regs.a);
    label_2887();
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.de = 0x5EA3;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_002_5F27(); return; };
    gb.regs.de = 0x5EA7;
    label_002_5F27(); return;
}

void label_002_5F27(void) {
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
    if (GET_FLAG_Z()) goto label_002_5F27_ret_5F53;
    gb_push16(gb.regs.bc);
    gb.regs.a = 2;
    func_91D();
    gb.regs.bc = gb_pop16();
  label_002_5F27_ret_5F53:;
    return;
}

void Data_002_5F54(void) {
    /* data: db $6A, $7A, $6B, $7B, $00, $00, $00, $00 */;
}

void func_002_5F5C(void) {
    gb.regs.a = 1;
    gb_write(0xFFAC, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFAE, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFAD, gb.regs.a);
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
    gb.regs.a = 0xBE;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xDE80, gb.regs.a);
    label_2887();
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.de = 0x5F54;
    label_002_5F27(); return;
}

void CheckTriggersResolution(void) {
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: CheckKillEnemiesTrigger(); return;
        case 0x01: return;
        case 0x02: CheckStepOnButtonTrigger(); return;
        case 0x03: return;
        case 0x04: CheckLightTorchesTrigger(); return;
        case 0x05: CheckKillInOrderTrigger(); return;
        case 0x06: return;
        case 0x07: CheckKillEnemiesTrigger(); return;
        case 0x08: return;
        case 0x09: CheckKillSidescrollBossTrigger(); return;
        case 0x0A: return;
        case 0x0B: return;
        case 0x0C: return;
        case 0x0D: return;
        case 0x0E: return;
        case 0x0F: CheckAnswerTunicsTrigger(); return;
    }
}

void Events(void) {
  Events_return:;
    return;
}

void CheckKillSidescrollBossTrigger(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto CheckKillSidescrollBossTrigger_jr_5FD1;
    gb.regs.a = gb_read(0xDB9D);
    jr_002_5FD4(); return;
  CheckKillSidescrollBossTrigger_jr_5FD1:;
    gb.regs.a = gb_read(0xDAB4);
    jr_002_5FD4(); return;
}

void jr_002_5FD4(void) {
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { MarkTriggerAsResolved(); return; };
    return;
}

void CheckLightTorchesTrigger(void) {
    gb.regs.a = gb_read(0xC1A2);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { MarkTriggerAsResolved(); return; };
    return;
}

void CheckStepOnButtonTrigger(void) {
    gb.regs.a = gb_read(0xC1CB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { MarkTriggerAsResolved(); return; };
    return;
}

void CheckKillInOrderTrigger(void) {
    gb.regs.c = 0;
    gb.regs.hl = 0xDC5E;
  CheckKillInOrderTrigger_loop_5FF0:;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, gb.regs.c);
    if (!GET_FLAG_Z()) return;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto CheckKillInOrderTrigger_loop_5FF0;
    MarkTriggerAsResolved(); return;
}

void CheckKillEnemiesTrigger(void) {
    gb.regs.c = 0x0F;
    gb.regs.b = 0;
  CheckKillEnemiesTrigger_loopOverEntities:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckKillEnemiesTrigger_continue;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto CheckKillEnemiesTrigger_return;
  CheckKillEnemiesTrigger_continue:;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, -1);
    if (!GET_FLAG_Z()) goto CheckKillEnemiesTrigger_loopOverEntities;
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto CheckKillEnemiesTrigger_triggerSatisfied;
    gb.regs.a = gb_read(0xD460);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckKillEnemiesTrigger_return;
    gb.regs.a = gb_read(0xC113);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckKillEnemiesTrigger_return;
  CheckKillEnemiesTrigger_triggerSatisfied:;
    MarkTriggerAsResolved(); return;
  CheckKillEnemiesTrigger_return:;
    return;
}

void CheckAnswerTunicsTrigger(void) {
    gb.regs.a = gb_read(0xC18F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.de = 0;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x12);
    if (GET_FLAG_Z()) { jr_002_609B(); return; };
}

void jr_002_603E(void) {
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xEF);
    if (GET_FLAG_Z()) goto jr_002_603E_jr_604F;
    alu_cp8(gb.regs.a, 0xF0);
    if (GET_FLAG_Z()) goto jr_002_603E_jr_604F;
    alu_cp8(gb.regs.a, 0xF1);
    if (!GET_FLAG_Z()) { jr_002_6064(); return; };
  jr_002_603E_jr_604F:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_6064(); return; };
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_002_6064(); return; };
    gb.regs.hl = 0xFFD7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_002_6064(); return;
}

void jr_002_6064(void) {
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_002_603E(); return; };
    gb.regs.e = 9;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto jr_002_6064_jr_6074;
    gb.regs.e = 4;
  jr_002_6064_jr_6074:;
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) return;
    MarkTriggerAsResolved();
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto jr_002_6064_jr_6098;
    EventEffectGuard();
    OpenLockedDoorsEffectHandler();
    gb.regs.hl = 0xDE88;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  jr_002_6064_jr_6098:;
    RevealChestEffectHandler(); return;
}

void jr_002_609B(void) {
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xF6);
    if (GET_FLAG_Z()) goto jr_002_609B_jr_60A8;
    alu_cp8(gb.regs.a, 0xF7);
    if (!GET_FLAG_Z()) { jr_002_60BD(); return; };
  jr_002_609B_jr_60A8:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_60BD(); return; };
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { jr_002_60BD(); return; };
    gb.regs.hl = 0xFFD7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_002_60BD(); return;
}

void jr_002_60BD(void) {
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_002_609B(); return; };
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) return;
    MarkTriggerAsResolved();
    EventEffectGuard();
    GetRoomStatusAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    return;
}

void ClampItemCount(void) {
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) goto ClampItemCount_return;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
  ClampItemCount_return:;
    gb.regs.hl++;
    return;
}

void func_002_60E0(void) {
    gb.regs.hl = 0xDC1E;
    gb.regs.de = 0xDBF8;
    ClampItemCount();
    gb.regs.de = 0xDBF9;
    ClampItemCount();
    gb.regs.de = 0xDBF1;
    ClampItemCount();
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_61E7_inventoryFullyClosed2(); return; };
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_002_60E0_scrollSubscreen;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) { label_002_61E7(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { label_002_61E7(); return; };
    gb.regs.a = gb_read(0xDC42);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_002_60E0_jr_613D;
    gb.regs.a = gb_read(0xD464);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_61E7(); return; };
    gb.regs.a = gb_read(0xC167);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_61E7(); return; };
    gb.regs.a = gb_read(0xFFA1);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_002_61E7(); return; };
    gb.regs.a = gb_read(0xFF9D);
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) { label_002_61E7(); return; };
  func_002_60E0_jr_613D:;
    gb.regs.a = gb_read(0xC1B5);
    gb.regs.hl = 0xC1B8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC1B9;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { label_002_61E7(); return; };
    gb.regs.a = 1;
    gb_write(0xC14F, gb.regs.a);
    gb_write(0xC151, gb.regs.a);
    gb.regs.a = 0x12;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xC150);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC150, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_002_60E0_subscreenClosing;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xFFCB, gb.regs.a);
    gb_write(0xFFCC, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xDC3D, gb.regs.a);
    gb.regs.a = 0x11;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC151, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xC154, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 7;
    if (GET_FLAG_Z()) goto func_002_60E0_loadTileSet;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto func_002_60E0_loadMiniMap;
    alu_cp8(gb.regs.a, 8);
    gb.regs.a = 7;
    if (!GET_FLAG_C()) goto func_002_60E0_loadTileSet;
  func_002_60E0_loadMiniMap:;
    LoadMinimap();
    gb.regs.a = 2;
  func_002_60E0_loadTileSet:;
    gb_write(0xFF90, gb.regs.a);
    return;
  func_002_60E0_subscreenClosing:;
    gb.regs.a = 7;
    gb_write(0xFFA9, gb.regs.a);
    gb.regs.a = 0x70;
    gb_write(0xFFAA, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
  func_002_60E0_scrollSubscreen:;
    gb.regs.a = gb_read(0xC151);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_61C6(); return; };
    gb.regs.a = gb_read(0xD5C2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_002_60E0_jr_61B9;
    gb.regs.hl = 0xC151;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_002_60E0_jr_61B9:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    func_002_61BA(); return;
}

void func_002_61BA(void) {
    func_002_755B();
    ApplyLinkMotionState_skipInitialCall();
    DrawLinkSpriteAndReturn();
    AnimateEntitiesAndRestoreBank02(); return;
}

void jr_002_61C6(void) {
    gb.regs.a = gb_read(0xC150);
    gb.regs.hl = 0xDC42;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_002_61C6_subscreenClosed;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto jr_002_61C6_subscreenScrolling;
    gb.regs.a = 3;
    gb_write(0xFFA9, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFFAA, gb.regs.a);
  jr_002_61C6_subscreenClosed:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC14F, gb.regs.a);
    label_002_61E7(); return;
  jr_002_61C6_subscreenScrolling:;
    func_002_61BA();
    label_002_61E7(); return;
}

void label_002_61E7(void) {
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto label_002_61E7_inventoryFullyClosed2;
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_61E7_inventoryScrolling2;
  label_002_61E7_inventoryScrolling2:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  label_002_61E7_inventoryFullyClosed2:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, -129);
    if (GET_FLAG_Z()) goto label_002_61E7_dialogClosed;
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto label_002_61E7_dialogClosed;
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) return;
  label_002_61E7_dialogClosed:;
    UpdateRupeesCount();
    UpdateHealth(); return;
}

void UpdateRupeesCount(void) {
    gb.regs.hl = 0xD5C1;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC3CE;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateRupeesCount_C3CENotZero;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    return;
  UpdateRupeesCount_C3CENotZero:;
    gb.regs.hl = 0xDC37;
    gb.regs.a = gb_read(0xDC38);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto UpdateRupeesCount_jr_002_6274;
    gb.regs.a = 5;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.a = gb_read(0xDC38);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC37);
    gb.regs.e = alu_sla(gb.regs.e);
    alu_rla();
    gb.regs.e = alu_sla(gb.regs.e);
    alu_rla();
    gb.regs.e = alu_sla(gb.regs.e);
    alu_rla();
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto UpdateRupeesCount_noReinitTo9;
    gb.regs.a = 9;
  UpdateRupeesCount_noReinitTo9:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC38);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(0xDC38, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sbc8(gb.regs.a, 0);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xDC06);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    alu_daa();
    gb_write(0xDC06, gb.regs.a);
    gb.regs.a = gb_read(0xDC05);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    alu_daa();
    gb_write(0xDC05, gb.regs.a);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) goto UpdateRupeesCount_rupeesLessThan16;
    gb.regs.a = 9;
    gb_write(0xDC05, gb.regs.a);
    gb.regs.a = 0x99;
    gb_write(0xDC06, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC37, gb.regs.a);
    gb_write(0xDC38, gb.regs.a);
  UpdateRupeesCount_rupeesLessThan16:;
    LoadRupeesDigits();
  UpdateRupeesCount_jr_002_6274:;
    gb.regs.hl = 0xDC39;
    gb.regs.a = gb_read(0xDC3A);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) return;
    gb.regs.a = 5;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.a = gb_read(0xDC3A);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC39);
    gb.regs.e = alu_sla(gb.regs.e);
    alu_rla();
    gb.regs.e = alu_sla(gb.regs.e);
    alu_rla();
    gb.regs.e = alu_sla(gb.regs.e);
    alu_rla();
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto UpdateRupeesCount_rupeesNot0A;
    gb.regs.a = 9;
  UpdateRupeesCount_rupeesNot0A:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC3A);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(0xDC3A, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sbc8(gb.regs.a, 0);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xDC06);
    gb.regs.hl = 0xDC05;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC06);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    alu_daa();
    gb_write(0xDC06, gb.regs.a);
    gb.regs.a = gb_read(0xDC05);
    gb.regs.a = alu_sbc8(gb.regs.a, 0);
    alu_daa();
    gb_write(0xDC05, gb.regs.a);
    if (!GET_FLAG_C()) goto UpdateRupeesCount_resetEnd;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC05, gb.regs.a);
    gb_write(0xDC06, gb.regs.a);
    gb_write(0xDC39, gb.regs.a);
    gb_write(0xDC3A, gb.regs.a);
  UpdateRupeesCount_resetEnd:;
    LoadRupeesDigits(); return;
}

void LoadRupeesDigits(void) {
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.a = alu_add8(gb.regs.a, 6);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = 0x9C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x2A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xDC05);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0xB0);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xDC06);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0xB0);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xDC06);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0xB0);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    /* data: db $3E */;
    ThresholdLowHealthTable(); return;
}

void ThresholdLowHealthTable(void) {
    /* data: db $00 */;
    /* data: db $22 */;
    /* data: db $C9 */;
    /* data: db $05 */;
    /* data: db $05 */;
    /* data: db $05 */;
    /* data: db $09 */;
    /* data: db $09 */;
    /* data: db $09 */;
    /* data: db $11 */;
    /* data: db $11 */;
    /* data: db $11 */;
    /* data: db $19 */;
    /* data: db $19 */;
    /* data: db $19 */;
}

void UpdateHealth(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC163, gb.regs.a);
    gb.regs.a = gb_read(0xDC03);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x600B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xDC02);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) goto UpdateHealth_increaseHealth;
    gb.regs.a = 1;
    gb_write(0xC163, gb.regs.a);
    gb.regs.a = gb_read(0xC110);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto UpdateHealth_savewTimeToNextLowHealthSFX;
    gb.regs.a = 0x30;
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 4);
  UpdateHealth_savewTimeToNextLowHealthSFX:;
    gb_write(0xC110, gb.regs.a);
  UpdateHealth_increaseHealth:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto UpdateHealth_return2;
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto UpdateHealth_return2;
    gb.regs.a = gb_read(0xDC3B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateHealth_reduceHealth;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xDC3B, gb.regs.a);
    gb.regs.a = gb_read(0xDC03);
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_C()) goto UpdateHealth_skipSetMaxHeartsCap;
    gb.regs.a = 0x0E;
  UpdateHealth_skipSetMaxHeartsCap:;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC02);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) goto UpdateHealth_incrementHealth;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3B, gb.regs.a);
    goto UpdateHealth_reduceHealth;
  UpdateHealth_incrementHealth:;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xDC02, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto UpdateHealth_skipPickupSound;
    gb.regs.a = 6;
    gb_write(0xFFF3, gb.regs.a);
  UpdateHealth_skipPickupSound:;
    LoadHeartsCount(); return;
  UpdateHealth_reduceHealth:;
    gb.regs.a = gb_read(0xDC3C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateHealth_return2;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = gb_read(0xDC02);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateHealth_skipDecrementHealth;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xDC02, gb.regs.a);
  UpdateHealth_skipDecrementHealth:;
    LoadHeartsCount();
    gb.regs.a = gb_read(0xDC02);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateHealth_noHealth;
  UpdateHealth_return2:;
    return;
  UpdateHealth_noHealth:;
    gb.regs.a = gb_read(0xDBB9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateHealth_return;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xDBB9, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xDC02, gb.regs.a);
    gb.regs.a = gb_read(0xDC3B);
    gb.regs.a = alu_add8(gb.regs.a, ONE_HEART_16);
    gb_write(0xDC3B, gb.regs.a);
    gb.regs.a = 0xA0;
    gb_write(0xDC6F, gb.regs.a);
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = 0x9C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x93;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xDBB9);
    gb.regs.a = alu_add8(gb.regs.a, 0xB0);
    alu_cp8(gb.regs.a, 0xB0);
    if (GET_FLAG_Z()) goto UpdateHealth_jr_002_63E4;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  UpdateHealth_jr_002_63E4:;
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x9C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x72;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xC1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xD5C1, gb.regs.a);
    return;
  UpdateHealth_return:;
    return;
}

void Data_002_63FF(void) {
    /* data: db $9C, $0D, $06, $7F, $7F, $7F, $7F, $7F, $7F, $7F, $9C, $2D, $06, $7F, $7F, $7F */;
    /* data: db $7F, $7F, $7F, $7F, $00 */;
}

void LoadHeartsCount(void) {
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.de);
    gb.regs.bc = 0x63FF;
    gb.regs.e = 0x15;
  LoadHeartsCount_loop:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto LoadHeartsCount_loop;
    /* nop */;
    /* nop */;
    /* nop */;
    /* nop */;
    gb.regs.de = gb_pop16();
    gb.regs.hl = wDrawCommand_data;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 0;
    gb.regs.a = gb_read(0xDC02);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_6462(); return; };
    gb_write(0xFFD7, gb.regs.a);
    jr_002_6442(); return;
}

void jr_002_6442(void) {
    loop_start: ;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFD7, gb.regs.a);
    if (GET_FLAG_C()) { jr_002_6459(); return; };
    gb.regs.a = 0xA9;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto jr_002_6442_jr_6457;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb.regs.l = gb.regs.a;
  jr_002_6442_jr_6457:;
    goto loop_start;
}

void jr_002_6459(void) {
    gb.regs.a = alu_add8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { jr_002_6462(); return; };
    gb.regs.a = 0xCE;
    gb_write(gb.regs.hl++, gb.regs.a);
    jr_002_646B(); return;
}

void jr_002_6462(void) {
    gb.regs.a = gb_read(0xDC03);
    alu_cp8(gb.regs.a, gb.regs.c);
    if (GET_FLAG_Z()) { jr_002_6477(); return; };
    gb.regs.a = 0xCD;
    gb_write(gb.regs.hl++, gb.regs.a);
    jr_002_646B(); return;
}

void jr_002_646B(void) {
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto jr_002_646B_jr_6475;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb.regs.l = gb.regs.a;
  jr_002_646B_jr_6475:;
    jr_002_6462(); return;
}

void jr_002_6477(void) {
    return;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    MinimapsTable(); return;
}

void MinimapsTable(void) {
    /* TODO: PUSHC  */;
}

void Minimap0(void) {
    /* data: db "                " */;
    /* data: db "                " */;
    /* data: db "            ##  " */;
    /* data: db "  ######    Nm  " */;
    /* data: db "Ch  ##Ch##Ch##  " */;
    /* data: db "####ChCh######  " */;
    /* data: db "##  ##ChCh      " */;
    /* data: db "  Ch####        " */;
}

void Minimap1(void) {
    /* data: db "                " */;
    /* data: db "  ChChCh######  " */;
    /* data: db "    Ch    Ch    " */;
    /* data: db "  ####    ##Nm  " */;
    /* data: db "  ##        ##  " */;
    /* data: db "  Ch        ##  " */;
    /* data: db "  ############  " */;
    /* data: db "    ChChChCh    " */;
}

void Minimap2(void) {
    /* data: db "####Ch##        " */;
    /* data: db "Ch##ChCh        " */;
    /* data: db "########    ##  " */;
    /* data: db "  Ch##    ######" */;
    /* data: db "  Ch        ##  " */;
    /* data: db "  ChCh      ##  " */;
    /* data: db "  Ch        Nm  " */;
    /* data: db "  ##Ch      ####" */;
}

void Minimap3(void) {
    /* data: db "                " */;
    /* data: db "      Ch##      " */;
    /* data: db "  ##  ####  Ch  " */;
    /* data: db "  Nm##Ch##Ch##  " */;
    /* data: db "  ##ChCh####Ch  " */;
    /* data: db "    ######Ch    " */;
    /* data: db "    Ch##ChCh    " */;
    /* data: db "      ##Ch      " */;
}

void Minimap4(void) {
    /* data: db "  ######Ch##    " */;
    /* data: db "      Nm  ##Ch  " */;
    /* data: db "  ##########ChCh" */;
    /* data: db "          ######" */;
    /* data: db "      ########  " */;
    /* data: db "    Ch######    " */;
    /* data: db "      Ch####    " */;
    /* data: db "        Ch##Ch##" */;
}

void Minimap5(void) {
    /* data: db "                " */;
    /* data: db "Ch            Ch" */;
    /* data: db "##Ch  ####  Ch##" */;
    /* data: db "##Ch####Nm##Ch##" */;
    /* data: db "Ch##  ####  ####" */;
    /* data: db "  ##Ch########  " */;
    /* data: db "  ChCh    ##Ch  " */;
    /* data: db "  ############  " */;
}

void Minimap6(void) {
    /* data: db "  ChCh          " */;
    /* data: db "########  ####  " */;
    /* data: db "######Ch  ##Nm  " */;
    /* data: db "##Ch####        " */;
    /* data: db "Ch####Ch  ##Ch  " */;
    /* data: db "##############Ch" */;
    /* data: db "Ch##############" */;
    /* data: db "########  ####  " */;
}

void Minimap7(void) {
    /* data: db "      ####      " */;
    /* data: db "Ch    NmCh    Ch" */;
    /* data: db "####Ch####Ch####" */;
    /* data: db "  Ch##########  " */;
    /* data: db "  Ch##########  " */;
    /* data: db "##Ch##Ch########" */;
    /* data: db "##Ch######Ch####" */;
    /* data: db "Ch    ####    Ch" */;
}

void EaglesTowerCollapsedMinimap(void) {
    /* data: db "  ChCh          " */;
    /* data: db "########        " */;
    /* data: db "######Ch        " */;
    /* data: db "##Ch####        " */;
    /* data: db "Ch####Ch  ##Ch  " */;
    /* data: db "################" */;
    /* data: db "Ch##########Nm##" */;
    /* data: db "########  ####  " */;
}

void ColorDungeonMinimap(void) {
    /* data: db "                " */;
    /* data: db "                " */;
    /* data: db "                " */;
    /* data: db "  Nm##    Ch##  " */;
    /* data: db "  ####Ch######  " */;
    /* data: db "    ########    " */;
    /* data: db "    ##Ch##Ch    " */;
    /* data: db "    ####Ch##    " */;
    /* TODO: POPC  */;
}

void Data_002_66F9(void) {
    /* data: db $00, $02, $03, $07, $05, $0A, $0B, $0F, $04, $08, $09, $0E, $06, $0C, $0D, $01 */;
}

void LoadMinimap(void) {
    gb.regs.hl = 0x6158;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto LoadMinimap_computeRegularMinimapAddress;
    gb.regs.hl = 0x61A4;
    goto LoadMinimap_minimapAddressEnd;
  LoadMinimap_computeRegularMinimapAddress:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  LoadMinimap_minimapAddressEnd:;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto LoadMinimap_eaglesTowerEnd;
    gb.regs.a = gb_read(0xDC13);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto LoadMinimap_eaglesTowerEnd;
    gb.regs.hl = 0x619C;
  LoadMinimap_eaglesTowerEnd:;
    gb.regs.de = 0xD480;
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.d = 0;
    gb.regs.e = 0;
  LoadMinimap_minimapRoomsLoop:;
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x7D);
    if (GET_FLAG_Z()) goto LoadMinimap_continue;
    alu_cp8(gb.regs.a, 0xED);
    if (GET_FLAG_Z()) goto LoadMinimap_jr_002_6758;
    alu_cp8(gb.regs.a, 0xEE);
    if (!GET_FLAG_Z()) goto LoadMinimap_jr_002_6760;
  LoadMinimap_jr_002_6758:;
    gb.regs.a = gb_read(0xDC75);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadMinimap_jr_002_676B;
    gb_write(gb.regs.hl, 0xEF);
  LoadMinimap_jr_002_6760:;
    gb.regs.a = gb_read(0xDC74);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadMinimap_jr_002_676B;
    gb_write(gb.regs.hl, 0x7D);
    goto LoadMinimap_continue;
  LoadMinimap_jr_002_676B:;
    gb_push16(gb.regs.de);
    GetRoomStatusAddressForMapPosition_trampoline();
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadMinimap_continue;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x66F9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 0xCF);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xEE);
    if (GET_FLAG_Z()) goto LoadMinimap_jr_002_6793;
    alu_cp8(gb.regs.a, 0xED);
    if (!GET_FLAG_Z()) goto LoadMinimap_jr_002_67A8;
  LoadMinimap_jr_002_6793:;
    gb_push16(gb.regs.de);
    gb_push16(gb.regs.af);
    GetRoomStatusAddressForMapPosition_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0x20;
    alu_cp8(gb.regs.a, 0xED);
    if (!GET_FLAG_Z()) goto LoadMinimap_jr_002_67A1;
    gb.regs.e = 0x10;
  LoadMinimap_jr_002_67A1:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    gb.regs.de = gb_pop16();
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto LoadMinimap_continue;
  LoadMinimap_jr_002_67A8:;
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.c);
    gb.regs.a = gb_read(0xDC74);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LoadMinimap_continue;
    gb_write(gb.regs.hl, 0x7D);
  LoadMinimap_continue:;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto LoadMinimap_minimapRoomsLoop;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LoadMinimap_return;
    gb.regs.ime = false;
    gb.regs.e = 0;
    gb.regs.hl = 0xD480;
  LoadMinimap_loop:;
    gb.regs.d = 1;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xED);
    if (!GET_FLAG_Z()) goto LoadMinimap_jr_002_67D3;
    gb.regs.d = 6;
  LoadMinimap_jr_002_67D3:;
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl++;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto LoadMinimap_loop;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.ime = true;
  LoadMinimap_return:;
    return;
}

void label_002_67E5(void) {
    gb.regs.a = gb_read(0xDC58);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    gb.regs.a = alu_swap(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: func_002_67F5(); return;
        case 0x01: func_002_67FA(); return;
        case 0x02: func_002_67FF(); return;
        case 0x03: func_002_6804(); return;
    }
}

void func_002_67F5(void) {
    gb.regs.hl = 0x9D0F;
    jr_002_6807(); return;
}

void func_002_67FA(void) {
    gb.regs.hl = 0x9D10;
    jr_002_6807(); return;
}

void func_002_67FF(void) {
    gb.regs.hl = 0x9CEF;
    jr_002_6807(); return;
}

void func_002_6804(void) {
    gb.regs.hl = 0x9CF0;
    jr_002_6807(); return;
}

void jr_002_6807(void) {
    gb.regs.e = 4;
    jr_002_6848(); return;
}

void label_002_680B(void) {
    gb.regs.a = gb_read(0xDC58);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    gb.regs.a = alu_swap(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: func_002_681B(); return;
        case 0x01: func_002_6820(); return;
        case 0x02: func_002_681B(); return;
        case 0x03: func_002_6820(); return;
    }
}

void func_002_681B(void) {
    gb.regs.hl = 0x9D8F;
    jr_002_6823(); return;
}

void func_002_6820(void) {
    gb.regs.hl = 0x9D90;
    jr_002_6823(); return;
}

void jr_002_6823(void) {
    gb.regs.e = 0x24;
    jr_002_6848(); return;
}

void label_002_6827(void) {
    gb.regs.a = gb_read(0xDC58);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    gb.regs.a = alu_swap(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: func_002_6837(); return;
        case 0x01: func_002_6837(); return;
        case 0x02: func_002_683C(); return;
        case 0x03: func_002_683C(); return;
    }
}

void func_002_6837(void) {
    gb.regs.hl = 0x9D0B;
    jr_002_683F(); return;
}

void func_002_683C(void) {
    gb.regs.hl = 0x9CEB;
    jr_002_683F(); return;
}

void jr_002_683F(void) {
    gb.regs.e = 0;
    jr_002_6848(); return;
}

void CopyDungeonMinimapPalette(void) {
    gb.regs.hl = 0x9D8B;
    gb.regs.e = 0x20;
    jr_002_6848(); return;
}

void jr_002_6848(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_6885(); return; };
    gb_push16(gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.ime = false;
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFF4F, gb.regs.a);
    gb.regs.c = 0;
    gb.regs.d = gb.regs.c;
  jr_002_6848_loop_685B:;
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto jr_002_6848_jr_687D;
    gb.regs.hl++;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_002_6848_loop_685B;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 0x1C);
    gb.regs.l = gb.regs.a;
    gb.regs.a = 0;
    gb.regs.a = alu_adc8(gb.regs.a, gb.regs.h);
    gb.regs.h = gb.regs.a;
    goto jr_002_6848_loop_685B;
  jr_002_6848_jr_687D:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb_write(0xFF4F, gb.regs.a);
    gb.regs.ime = true;
  jr_002_6848_jr_6883:;
    gb.regs.hl = gb_pop16();
    gb.regs.de = gb_pop16();
    jr_002_6885(); return;
}

void jr_002_6885(void) {
    gb.regs.c = 0;
    gb.regs.d = gb.regs.c;
  jr_002_6885_loop_6888:;
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto jr_002_6885_ret_68AA;
    gb.regs.hl++;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_002_6885_loop_6888;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 0x1C);
    gb.regs.l = gb.regs.a;
    gb.regs.a = 0;
    gb.regs.a = alu_adc8(gb.regs.a, gb.regs.h);
    gb.regs.h = gb.regs.a;
    goto jr_002_6885_loop_6888;
  jr_002_6885_ret_68AA:;
    return;
}

void Data_002_68AB(void) {
    /* data: db $00, $08, $F8 */;
}

void Data_002_68AE(void) {
    /* data: db $00, $F0, $10 */;
}

void Data_002_68B1(void) {
    /* data: db $00, $10, $F0 */;
}

void Data_002_68B4(void) {
    /* data: db $FF, $00, $01 */;
}

void jp_002_68B7(void) {
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jp_002_68B7_notInTheAirEnd;
    gb.regs.a = gb_read(0xFFA1);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto jp_002_68B7_return;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto jp_002_68B7_return;
  jp_002_68B7_notInTheAirEnd:;
    gb.regs.a = gb_read(0xC13E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jp_002_68B7_ignoreCollisionsEnd;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC13E, gb.regs.a);
    UpdateFinalLinkPosition();
    CheckPositionForMapTransition();
    gb.regs.a = gb_read(0xFF9C);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto jp_002_68B7_return;
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(0xFF9B, gb.regs.a);
  jp_002_68B7_return:;
    return;
  jp_002_68B7_ignoreCollisionsEnd:;
    gb.regs.a = gb_read(0xFF9C);
    switch(gb.regs.a) {
        case 0x00: LinkSideScrollingPhysicsHandler(); return;
        case 0x01: LinkSideScrollingLadderPhysicsHandler(); return;
        case 0x02: LinkSideScrollingDivingPhysicsHandler(); return;
    }
}

void Data_002_68ED(void) {
    /* data: db $00, $08, $F8, $00, $00, $06, $FA, $00, $00, $06, $FA, $00, $00, $00, $00, $00 */;
}

void Data_002_68FD(void) {
    /* data: db $00, $00, $00, $00, $F8, $FA, $FA, $00, $08, $06, $06, $00, $00, $00, $00, $00 */;
}

void Data_002_690D(void) {
    /* data: db $00, $00, $01 */;
}

void LinkSideScrollingDivingPhysicsHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto LinkSideScrollingDivingPhysicsHandler_lavaEnd;
    label_002_7719();
    gb.regs.a = gb_read(0xDC3C);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xDC6F, gb.regs.a);
    return;
  LinkSideScrollingDivingPhysicsHandler_lavaEnd:;
    gb.regs.a = gb_read(0xDBB8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_002_7719(); return; };
    gb.regs.hl = 0xFF9E;
    gb_write(gb.regs.hl, alu_res(1, gb_read(gb.regs.hl)));
    ResetPegasusBoots();
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_002_696E(); return; };
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x68ED;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF9A;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto LinkSideScrollingDivingPhysicsHandler_jr_695C;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkSideScrollingDivingPhysicsHandler_jr_695C;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  LinkSideScrollingDivingPhysicsHandler_jr_695C:;
    gb.regs.hl = 0x68FD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF9B;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { jr_002_696E(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_696E(); return; };
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    jr_002_696E(); return;
}

void jr_002_696E(void) {
    gb.regs.hl = 0xC120;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_002_696E_jr_6982;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x690D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9E, gb.regs.a);
  jr_002_696E_jr_6982:;
    UpdateFinalLinkPosition();
    CheckPositionForMapTransition();
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 0xB0);
    if (GET_FLAG_Z()) { jr_002_699E(); return; };
    alu_cp8(gb.regs.a, 0xB1);
    if (!GET_FLAG_Z()) goto jr_002_696E_jr_699B;
    gb.regs.a = 1;
    jr_002_699C(); return;
  jr_002_696E_jr_699B:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_002_699C(); return;
}

void jr_002_699C(void) {
    gb_write(0xFF9C, gb.regs.a);
    jr_002_699E(); return;
}

void jr_002_699E(void) {
    func_002_6B56(); return;
}

void LinkSideScrollingLadderPhysicsHandler(void) {
    ResetPegasusBoots();
    gb_write(0xC146, gb.regs.a);
    gb_write(0xC153, gb.regs.a);
    gb_write(0xC152, gb.regs.a);
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x68AB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = gb_read(0xFFCB);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x68AE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto LinkSideScrollingLadderPhysicsHandler_jr_69D7;
    gb.regs.hl = 0xC120;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  LinkSideScrollingLadderPhysicsHandler_jr_69D7:;
    UpdateFinalLinkPosition();
    CheckPositionForMapTransition();
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 0xB1);
    if (GET_FLAG_Z()) { jr_002_69F3(); return; };
    alu_cp8(gb.regs.a, 0xB0);
    if (!GET_FLAG_Z()) goto LinkSideScrollingLadderPhysicsHandler_jr_69F0;
    gb.regs.a = 2;
    jr_002_69F1(); return;
  LinkSideScrollingLadderPhysicsHandler_jr_69F0:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_002_69F1(); return;
}

void jr_002_69F1(void) {
    gb_write(0xFF9C, gb.regs.a);
    jr_002_69F3(); return;
}

void jr_002_69F3(void) {
    func_002_6B56();
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto jr_002_69F3_ret_6A00;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9C, gb.regs.a);
  jr_002_69F3_ret_6A00:;
    return;
}

void LinkSideScrollingPhysicsHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto LinkSideScrollingPhysicsHandler_jr_6A24;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xF8);
    if (!GET_FLAG_Z()) goto LinkSideScrollingPhysicsHandler_jr_6A24;
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkSideScrollingPhysicsHandler_jr_6A24;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x46);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto LinkSideScrollingPhysicsHandler_jr_6A24;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { ApplyMapFadeOutTransitionWithNoise(); return; };
  LinkSideScrollingPhysicsHandler_jr_6A24:;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_6A4C(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto LinkSideScrollingPhysicsHandler_jr_6A3E;
    gb.regs.a = gb_read(0xC120);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xC120, gb.regs.a);
    DisplayTransientVfxForLinkRunning();
    label_002_6ADB(); return;
  LinkSideScrollingPhysicsHandler_jr_6A3E:;
    gb_write(0xC19A, gb.regs.a);
    gb.regs.a = gb_read(0xC199);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(0xC199, gb.regs.a);
    ResetSpinAttack();
    jr_002_6A4C(); return;
}

void jr_002_6A4C(void) {
    gb.regs.a = gb_read(0xC147);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_6A94(); return; };
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_002_6A94(); return; };
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_6A4C_jr_6A64;
    gb.regs.a = 1;
    gb_write(0xC146, gb.regs.a);
  jr_002_6A4C_jr_6A64:;
    gb.regs.a = 0x0A;
    gb_write(0xC120, gb.regs.a);
    gb.regs.a = gb_read(0xFF9A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_6A4C_jr_6A73;
    alu_rlca();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xFF9E, gb.regs.a);
  jr_002_6A4C_jr_6A73:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_002_6A92(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x68B1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF9A);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { jr_002_6A92(); return; };
    gb.regs.e = 1;
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_6A4C_jr_6A8D;
    gb.regs.e = 0xFF;
  jr_002_6A4C_jr_6A8D:;
    gb.regs.a = gb_read(0xFF9A);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFF9A, gb.regs.a);
    jr_002_6A92(); return;
}

void jr_002_6A92(void) {
    label_002_6ADB(); return;
}

void jr_002_6A94(void) {
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_6A94_jr_6AAA;
    gb.regs.a = 7;
    gb_write(0xFFF4, gb.regs.a);
    ResetPegasusBoots();
    gb_write(0xC146, gb.regs.a);
    gb_write(0xC152, gb.regs.a);
    gb_write(0xC153, gb.regs.a);
  jr_002_6A94_jr_6AAA:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x68B1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0x68B4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { jr_002_6AD1(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC16E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_6A94_jr_6ACB;
    gb.regs.a = gb.regs.e;
    gb_write(0xFF9E, gb.regs.a);
  jr_002_6A94_jr_6ACB:;
    gb.regs.hl = 0xC120;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    label_002_6ADB(); return;
}

void jr_002_6AD1(void) {
    gb.regs.a = gb_read(0xC14B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_6ADB(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC120, gb.regs.a);
    label_002_6ADB(); return;
}

void label_002_6ADB(void) {
    gb.regs.a = gb_read(0xC137);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_6ADB_jr_6AE6;
    gb.regs.a = gb_read(0xFFA1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_6AFC(); return; };
  label_002_6ADB_jr_6AE6:;
    UpdateFinalLinkPosition();
    gb.regs.hl = 0xFF9E;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto label_002_6ADB_jr_6AF6;
    gb_write(gb.regs.hl, 2);
  label_002_6ADB_jr_6AF6:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_002_6AFC(); return; };
    gb_write(gb.regs.hl, 3);
    jr_002_6AFC(); return;
}

void jr_002_6AFC(void) {
    CheckPositionForMapTransition();
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 0xB1);
    if (GET_FLAG_Z()) { jr_002_6B2A(); return; };
    alu_cp8(gb.regs.a, 0xB0);
    if (!GET_FLAG_Z()) { jr_002_6B34(); return; };
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_6B26(); return; };
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_6AFC_jr_6B1F;
    gb.regs.a = 2;
    func_002_5926();
  jr_002_6AFC_jr_6B1F:;
    gb.regs.a = 4;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    jr_002_6B26(); return;
}

void jr_002_6B26(void) {
    gb.regs.a = 2;
    jr_002_6B32(); return;
}

void jr_002_6B2A(void) {
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { jr_002_6B34(); return; };
    gb.regs.a = 1;
    jr_002_6B32(); return;
}

void jr_002_6B32(void) {
    gb_write(0xFF9C, gb.regs.a);
    jr_002_6B34(); return;
}

void jr_002_6B34(void) {
    gb.regs.hl = 0xFF9B;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x40);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { func_002_6B56(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_002_6B55(); return; };
    gb.regs.e = 0x20;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto jr_002_6B34_jr_6B50;
    gb.regs.e = 0x10;
  jr_002_6B34_jr_6B50:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) { func_002_6B56(); return; };
}

void jr_002_6B55(void) {
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    func_002_6B56(); return;
}

void func_002_6B56(void) {
    return;
}

void AddedCollisionType(void) {
    /* data: db COLLISION_TYPE_UP */;
    /* data: db COLLISION_TYPE_DOWN */;
    /* data: db COLLISION_TYPE_LEFT */;
    /* data: db COLLISION_TYPE_RIGHT */;
    /* data: db COLLISION_TYPE_UNKNOWN_10 */;
}

void Data_002_6B5C(void) {
    /* data: db $0B, $05, $08, $08, $08 */;
}

void Data_002_6B61(void) {
    /* data: db $08, $08, $04, $10, $0B */;
}

void label_002_6B66(void) {
    gb.regs.c = 4;
    gb.regs.b = 0;
    func_002_6C2F();
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC133, gb.regs.a);
    gb.regs.c = 0;
    gb.regs.a = gb_read(0xFF9A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_6BA2(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto label_002_6B66_jr_6B81;
    gb.regs.c = alu_inc8(gb.regs.c);
  label_002_6B66_jr_6B81:;
    func_002_6C2F();
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x8A);
    if (!GET_FLAG_Z()) goto label_002_6B66_jr_6B99;
    gb.regs.a = gb_read(0xC5A6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_6B66_jr_6B99;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC5A6, gb.regs.a);
    /* call_open_dialog Dialog051 */;
  label_002_6B66_jr_6B99:;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_002_6BA2(); return; };
    func_002_6C69();
    jr_002_6BA2(); return;
}

void jr_002_6BA2(void) {
    gb.regs.c = 2;
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_002_6BA2_jr_6BAC;
    gb.regs.c = alu_inc8(gb.regs.c);
  jr_002_6BA2_jr_6BAC:;
    func_002_6C2F();
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_002_6BA2_jr_6BD1;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto jr_002_6BA2_jr_6BD1;
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto jr_002_6BA2_jr_6BD1;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x62);
    if (GET_FLAG_Z()) { jr_002_6BD8(); return; };
    alu_cp8(gb.regs.a, 0x64);
    if (GET_FLAG_Z()) { jr_002_6BD8(); return; };
    alu_cp8(gb.regs.a, 0x66);
    if (GET_FLAG_Z()) { jr_002_6BD8(); return; };
  jr_002_6BA2_jr_6BD1:;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { jr_002_6BEB(); return; };
}

void jr_002_6BD8(void) {
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_or8(gb.regs.a, 8);
    gb_write(0xC133, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb_write(0xFF99, gb.regs.a);
    jr_002_6BEB(); return;
}

void jr_002_6BEB(void) {
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto jr_002_6BEB_jr_6BF6;
    gb.regs.a = gb_read(0xFFA0);
    gb_write(0xFF99, gb.regs.a);
  jr_002_6BEB_jr_6BF6:;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFF9F);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    ResetSpinAttack();
    gb.regs.a = gb_read(0xFF9A);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = 0xE8;
    gb_write(0xFF9B, gb.regs.a);
    UpdateFinalLinkPosition();
    CheckPositionForMapTransition();
    gb.regs.a = 0x20;
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_sla(gb.regs.a);
    gb_write(0xC158, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFF2, gb.regs.a);
    return;
}

void func_002_6C2F(void) {
    gb.regs.hl = 0x6B5C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x6B61;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.a = gb.regs.h;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFAF, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    GetObjectPhysicsFlags_trampoline();
    gb_write(0xFFD8, gb.regs.a);
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_Z()) { func_002_6C69(); return; };
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ret_002_6C74(); return; };
}

void func_002_6C69(void) {
    gb.regs.hl = 0x65C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC133, gb.regs.a);
    ret_002_6C74(); return;
}

void ret_002_6C74(void) {
    return;
}

void CheckPositionForMapTransition(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_kanaletEnd;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_kanaletEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xEB);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_doBoundsCheck;
    alu_cp8(gb.regs.a, 0xEC);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_kanaletEnd;
  CheckPositionForMapTransition_doBoundsCheck:;
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x2C);
    if (GET_FLAG_C()) { ApplyMapFadeOutTransitionWithNoise(); return; };
  CheckPositionForMapTransition_kanaletEnd:;
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_C()) goto CheckPositionForMapTransition_verticalTransition;
    gb.regs.e = alu_inc8(gb.regs.e);
    alu_cp8(gb.regs.a, 0x84);
    if (!GET_FLAG_C()) goto CheckPositionForMapTransition_verticalTransition;
    gb.regs.e = 1;
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto CheckPositionForMapTransition_horizontalTransition;
    gb.regs.e = alu_dec8(gb.regs.e);
    alu_cp8(gb.regs.a, 0x9C);
    if (!GET_FLAG_C()) goto CheckPositionForMapTransition_horizontalTransition;
    goto CheckPositionForMapTransition_return;
  CheckPositionForMapTransition_verticalTransition:;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_isSideScrolling;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_manualEntryPointsEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xF5);
    if (GET_FLAG_Z()) { ApplyMapFadeOutTransitionWithNoise(); return; };
    alu_cp8(gb.regs.a, 0xF2);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_manualEntryPointsEnd;
    ApplyMapFadeOutTransitionWithNoise(); return;
  CheckPositionForMapTransition_isSideScrolling:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xE8);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_manualEntryPointsEnd;
    alu_cp8(gb.regs.a, 0xF8);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_manualEntryPointsEnd;
    alu_cp8(gb.regs.a, 0xFD);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_jr_002_6D00;
    alu_cp8(gb.regs.a, 0xA3);
    if (GET_FLAG_Z()) { ApplyMapFadeOutTransitionWithNoise(); return; };
    alu_cp8(gb.regs.a, 0xC0);
    if (GET_FLAG_Z()) { ApplyMapFadeOutTransitionWithNoise(); return; };
    alu_cp8(gb.regs.a, 0xC1);
    if (GET_FLAG_Z()) { ApplyMapFadeOutTransitionWithNoise(); return; };
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_jr_002_6D0A;
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) goto CheckPositionForMapTransition_jr_002_6D00;
    gb.regs.a = gb_read(0xC280);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_manualEntryPointsEnd;
  CheckPositionForMapTransition_jr_002_6D00:;
    gb.regs.a = gb_read(0xFFA0);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    goto CheckPositionForMapTransition_return;
  CheckPositionForMapTransition_jr_002_6D0A:;
    gb.regs.a = gb_read(0xFF9C);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_manualEntryPointsEnd;
    ApplyMapFadeOutTransitionWithNoise(); return;
  CheckPositionForMapTransition_horizontalTransition:;
    gb.regs.a = gb_read(0xFF9F);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_manualEntryPointsEnd;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xF5);
    if (GET_FLAG_Z()) { ApplyMapFadeOutTransition(); return; };
    alu_cp8(gb.regs.a, 0xFD);
    if (GET_FLAG_Z()) { ApplyMapFadeOutTransition(); return; };
    alu_cp8(gb.regs.a, 0xE9);
    if (GET_FLAG_Z()) { ApplyMapFadeOutTransitionWithNoise(); return; };
    alu_cp8(gb.regs.a, 0xE8);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_return;
    alu_cp8(gb.regs.a, 0xF8);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_return;
    alu_cp8(gb.regs.a, 0xEF);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_return;
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_return;
    alu_cp8(gb.regs.a, 0xC0);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_jr_002_6D51;
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) goto CheckPositionForMapTransition_return;
    goto CheckPositionForMapTransition_manualEntryPointsEnd;
  CheckPositionForMapTransition_jr_002_6D51:;
    alu_cp8(gb.regs.a, 0xC1);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_manualEntryPointsEnd;
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) goto CheckPositionForMapTransition_return;
  CheckPositionForMapTransition_manualEntryPointsEnd:;
    CopyLinkFinalPositionToPosition();
    gb.regs.a = gb_read(0xC181);
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) { clearIncrementAndReturn(); return; };
    alu_cp8(gb.regs.a, 0x51);
    if (GET_FLAG_Z()) { clearIncrementAndReturn(); return; };
    gb.regs.a = gb_read(0xC11F);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { clearIncrementAndReturn(); return; };
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { clearIncrementAndReturn(); return; };
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_jr_002_6D88;
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { clearIncrementAndReturn(); return; };
  CheckPositionForMapTransition_jr_002_6D88:;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_jr_002_6D94;
    gb.regs.a = gb_read(0xC16D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { clearIncrementAndReturn(); return; };
  CheckPositionForMapTransition_jr_002_6D94:;
    gb.regs.a = gb_read(0xC13E);
    gb.regs.hl = 0xC157;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { clearIncrementAndReturn(); return; };
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) goto CheckPositionForMapTransition_initiateRoomTransition;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.hl = 0xFFF9;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFB2;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_initiateRoomTransition;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { clearIncrementAndReturn(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_jr_002_6DBE;
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_initiateRoomTransition;
  CheckPositionForMapTransition_jr_002_6DBE:;
    gb.regs.a = gb_read(0xFFCB);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { clearIncrementAndReturn(); return; };
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) { clearIncrementAndReturn(); return; };
  CheckPositionForMapTransition_initiateRoomTransition:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xE8);
    if (!GET_FLAG_Z()) goto CheckPositionForMapTransition_eagleTowerBossEnd;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1F);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_eagleTowerBossEnd;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheckPositionForMapTransition_eagleTowerBossEnd;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1BF, gb.regs.a);
    gb_write(0xFF43, gb.regs.a);
  CheckPositionForMapTransition_eagleTowerBossEnd:;
    gb.regs.a = gb.regs.e;
    gb_write(0xC125, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC124, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC14B, gb.regs.a);
    gb_write(0xC121, gb.regs.a);
    gb_write(0xC14A, gb.regs.a);
    gb_write(0xC188, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x88);
    if (GET_FLAG_C()) goto CheckPositionForMapTransition_return;
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFFA2, gb.regs.a);
  CheckPositionForMapTransition_return:;
    BackgroundCollisionHandler(); return;
}

void clearIncrementAndReturn(void) {
    ClearLinkPositionIncrement();
    gb_write(0xC13E, gb.regs.a);
    BackgroundCollisionHandler(); return;
}

void LinkCollisionPointsX(void) {
  LinkCollisionPointsX_up:;
    /* data: db 06, 09 */;
  LinkCollisionPointsX_right:;
    /* data: db 11, 11 */;
  LinkCollisionPointsX_down:;
    /* data: db 06, 09 */;
  LinkCollisionPointsX_left:;
    /* data: db 04, 04 */;
    LinkCollisionPointsY(); return;
}

void LinkCollisionPointsY(void) {
  LinkCollisionPointsY_up:;
    /* data: db 06, 06 */;
  LinkCollisionPointsY_right:;
    /* data: db 09, 12 */;
  LinkCollisionPointsY_down:;
    /* data: db 15, 15 */;
  LinkCollisionPointsY_left:;
    /* data: db 09, 12 */;
    Data_002_6E25(); return;
}

void Data_002_6E25(void) {
    /* data: db $04, $00 */;
}

void Data_002_6E27(void) {
    /* data: db $02, $06 */;
}

void Data_002_6E29(void) {
    /* data: db $01, $02, $04, $08, $01, $02, $04, $08 */;
}

void LinkDirectionCompareDirection(void) {
    /* data: db DIRECTION_UP,       DIRECTION_UP */;
    /* data: db DIRECTION_RIGHT,    DIRECTION_RIGHT */;
    /* data: db DIRECTION_DOWN,     DIRECTION_DOWN */;
    /* data: db DIRECTION_LEFT,     DIRECTION_LEFT */;
}

void Data_002_6E39(void) {
    /* data: db 0, 1, -1, 0 */;
}

void Data_002_6E3D(void) {
    /* data: db $10, $F0, $00, $00 */;
}

void Data_002_6E41(void) {
    /* data: db $00, $00, $F0, $10 */;
}

void BackgroundCollisionHandler(void) {
    gb.regs.hl = 0xC10A;
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BackgroundCollisionHandler_jr_6E55;
    label_002_6B66(); return;
  BackgroundCollisionHandler_jr_6E55:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC133, gb.regs.a);
    gb.regs.a = gb_read(0xFF9B);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { jr_002_6EDD(); return; };
    gb.regs.e = 3;
    alu_rla();
    gb.regs.bc = 0x6E25;
    if (!GET_FLAG_C()) goto BackgroundCollisionHandler_jr_6E69;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.bc++;
  BackgroundCollisionHandler_jr_6E69:;
    gb.regs.a = gb.regs.e;
    gb_write(0xFFE3, gb.regs.a);
    gb.regs.e = 2;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
  BackgroundCollisionHandler_loop_6E72:;
    gb_push16(gb.regs.de);
    gb_push16(gb.regs.bc);
    ApplyCollisionWithObject();
    gb.regs.bc = gb_pop16();
    gb.regs.de = gb_pop16();
    gb.regs.bc++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto BackgroundCollisionHandler_loop_6E72;
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_002_6EC6(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_6EC6(); return; };
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xE9);
    if (!GET_FLAG_Z()) { jr_002_6EC6(); return; };
    gb.regs.a = gb_read(0xDBB8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_6EC6(); return; };
    gb.regs.a = gb_read(0xC5A8);
    alu_cp8(gb.regs.a, 0xD5);
    if (GET_FLAG_Z()) { jr_002_6EC6(); return; };
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_002_6EDD(); return; };
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    jr_002_6EB5(); return;
}

void func_002_6EA9(void) {
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    func_002_6EAD(); return;
}

void func_002_6EAD(void) {
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFF98, gb.regs.a);
    jr_002_6EB5(); return;
}

void jr_002_6EB5(void) {
    gb.regs.a = 2;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9C, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFF99, gb.regs.a);
    ResetPegasusBoots(); return;
}

void jr_002_6EC6(void) {
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_002_6EDD(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6E39;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFA0);
    gb_write(0xFF99, gb.regs.a);
    jr_002_6EDD(); return;
}

void jr_002_6EDD(void) {
    gb.regs.a = gb_read(0xFF9A);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { jr_002_6F1C(); return; };
    gb.regs.e = 0;
    alu_rla();
    gb.regs.bc = 0x6E27;
    if (!GET_FLAG_C()) goto jr_002_6EDD_jr_6EED;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.bc++;
  jr_002_6EDD_jr_6EED:;
    gb.regs.a = gb.regs.e;
    gb_write(0xFFE3, gb.regs.a);
    gb.regs.e = 2;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
  jr_002_6EDD_loop_6EF6:;
    gb_push16(gb.regs.de);
    gb_push16(gb.regs.bc);
    ApplyCollisionWithObject();
    gb.regs.bc = gb_pop16();
    gb.regs.de = gb_pop16();
    gb.regs.bc++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto jr_002_6EDD_loop_6EF6;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { jr_002_6F1C(); return; };
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6E39;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = gb_read(0xFF9F);
    gb_write(0xFF98, gb.regs.a);
    jr_002_6F1C(); return;
}

void jr_002_6F1C(void) {
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_6F1C_jr_6F25;
    gb_write(0xC1C3, gb.regs.a);
  jr_002_6F1C_jr_6F25:;
    label_002_74AD(); return;
}

void Data_002_6F28(void) {
    /* data: db $01, $02, $04, $08 */;
}

void ApplyCollisionWithObject(void) {
    gb.regs.hl = 0x6833;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x6833;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFDC, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.a = gb.regs.h;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFAF, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    GetObjectPhysicsFlags_trampoline();
    gb_write(0xFFE4, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_002_7461(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { ApplyCollisionWithSolid(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { ApplyCollisionWithStairs(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { ApplyCollisionWithDoor(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { ApplyCollisionWithLedge(); return; };
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { ApplyCollisionWithOceanOrSwitchBlock(); return; };
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) { ApplyCollisionWithSolid(); return; };
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_Z()) { ApplyCollisionWithSolid(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { ApplyCollisionWithStairs(); return; };
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { label_002_7461(); return; };
    alu_cp8(gb.regs.a, 0xE0);
    if (GET_FLAG_Z()) { label_002_7461(); return; };
    alu_cp8(gb.regs.a, 0xF0);
    if (!GET_FLAG_C()) { label_002_7461(); return; };
    alu_cp8(gb.regs.a, 0xC0);
    if (!GET_FLAG_Z()) { label_002_7045(); return; };
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { label_002_703B(); return; };
    gb.regs.a = gb_read(0xFFF8);
    alu_bit(4, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_703B(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) goto ApplyCollisionWithObject_jr_6FBD;
    gb.regs.a = gb_read(0xDBC0);
    /* ld_dialog_low e, Dialog233 */;
    jr_002_6FC6(); return;
  ApplyCollisionWithObject_jr_6FBD:;
    alu_cp8(gb.regs.a, 0x8C);
    if (!GET_FLAG_Z()) { jr_002_6FE3(); return; };
    gb.regs.a = gb_read(0xDBBF);
    /* ld_dialog_low e, Dialog234 */;
    jr_002_6FC6(); return;
}

void jr_002_6FC6(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_703E(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x8C);
    if (!GET_FLAG_Z()) goto jr_002_6FC6_jr_6FD4;
    label_27F2();
    jr_002_6FD7(); return;
  jr_002_6FC6_jr_6FD4:;
    EnqueueDoorUnlockedSfx();
    jr_002_6FD7(); return;
}

void jr_002_6FD7(void) {
    gb.regs.a = 0x28;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_002_702C(); return;
}

void jr_002_6FE3(void) {
    alu_cp8(gb.regs.a, 0x2B);
    if (!GET_FLAG_Z()) goto jr_002_6FE3_jr_6FFE;
    gb.regs.a = gb_read(0xDBBE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low e, Dialog232 */;
    if (GET_FLAG_Z()) { jr_002_703E(); return; };
    label_27F2();
    gb.regs.a = 0x5F;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    jr_002_702C(); return;
  jr_002_6FE3_jr_6FFE:;
    alu_cp8(gb.regs.a, 0xB5);
    if (!GET_FLAG_Z()) goto jr_002_6FE3_jr_700D;
    gb.regs.a = gb_read(0xDBC1);
    alu_cp8(gb.regs.a, 6);
    /* ld_dialog_low e, Dialog231 */;
    if (!GET_FLAG_Z()) { jr_002_703E(); return; };
    jr_002_7015(); return;
  jr_002_6FE3_jr_700D:;
    gb.regs.a = gb_read(0xDBBD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low e, Dialog230 */;
    if (GET_FLAG_Z()) { jr_002_703E(); return; };
}

void jr_002_7015(void) {
    gb.regs.a = gb_read(0xFF99);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 9;
    AddTranscientVfx();
    gb_write(gb.regs.hl, 0xDF);
    gb.regs.a = 0xDF;
    gb_write(0xC111, gb.regs.a);
    label_27F2();
    jr_002_702C(); return;
}

void jr_002_702C(void) {
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    label_002_703B(); return;
}

void label_002_703B(void) {
    ApplyCollisionWithSolid(); return;
}

void jr_002_703E(void) {
    gb.regs.a = gb.regs.e;
    OpenDialogInTable2AndClearIncrement();
    ApplyCollisionWithSolid(); return;
}

void label_002_7045(void) {
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xDB);
    if (!GET_FLAG_Z()) goto label_002_7045_jr_7053;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { ApplyCollisionWithSolid(); return; };
  label_002_7045_jr_7053:;
    gb.regs.a = gb_read(0xFFE4);
    alu_cp8(gb.regs.a, 0xD0);
    if (GET_FLAG_C()) { label_002_70DF(); return; };
    alu_cp8(gb.regs.a, 0xD4);
    if (!GET_FLAG_C()) { label_002_70DF(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 0xD0);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_7085(); return; };
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto label_002_7045_jr_7078;
    gb.regs.a = gb_read(0xFFDB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) { label_002_7461(); return; };
    jr_002_7085(); return;
  label_002_7045_jr_7078:;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_002_7085(); return; };
    gb.regs.a = gb_read(0xFFDB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { label_002_7461(); return; };
}

void jr_002_7085(void) {
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) { label_002_70D8(); return; };
    gb.regs.a = gb_read(0xC13E);
    gb.regs.hl = 0xC121;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xD45E;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { label_002_70D8(); return; };
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_7085_jr_70B5;
    gb.regs.hl = 0x6F28;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { label_002_70D8(); return; };
    gb.regs.a = gb_read(0xC191);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC191, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_C()) { ApplyCollisionWithSolid(); return; };
  jr_002_7085_jr_70B5:;
    ResetPegasusBoots();
    gb.regs.hl = 0x6E3D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0x6E41;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC10A, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    label_002_70D8(); return;
}

void label_002_70D8(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC191, gb.regs.a);
    ApplyCollisionWithSolid(); return;
}

void label_002_70DF(void) {
    alu_cp8(gb.regs.a, 0x90);
    if (GET_FLAG_C()) { label_002_715F(); return; };
    alu_cp8(gb.regs.a, 0x99);
    if (!GET_FLAG_C()) { ApplyCollisionWithSolid(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 0x90);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    alu_bit(1, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_70DF_jr_7103;
    gb.regs.hl = 0xC1D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { ApplyCollisionWithSolid(); return; };
    jr_002_7112(); return;
  label_002_70DF_jr_7103:;
    gb.regs.hl = 0xC1E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_sub8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { ApplyCollisionWithSolid(); return; };
}

void jr_002_7112(void) {
    gb.regs.a = gb_read(0xC188);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ApplyCollisionWithSolid(); return; };
    gb.regs.a = gb_read(0xFFE4);
    alu_cp8(gb.regs.a, 0x94);
    if (!GET_FLAG_C()) goto jr_002_7112_jr_712C;
    gb.regs.a = gb_read(0xDC78);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ApplyCollisionWithSolid(); return; };
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xDC78, gb.regs.a);
    jr_002_7147(); return;
  jr_002_7112_jr_712C:;
    alu_cp8(gb.regs.a, 0x98);
    if (GET_FLAG_Z()) goto jr_002_7112_jr_7139;
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_7147(); return; };
    ApplyCollisionWithSolid(); return;
  jr_002_7112_jr_7139:;
    gb.regs.a = gb_read(0xDC77);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_7147(); return; };
    /* ld_dialog_low a, Dialog007 */;
    OpenDialogInTable0AndClearIncrement();
    ApplyCollisionWithSolid(); return;
}

void jr_002_7147(void) {
    gb.regs.a = gb_read(0xFFE4);
    gb.regs.a = alu_sub8(gb.regs.a, 0x90);
    gb_write(0xC189, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC54, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC188, gb.regs.a);
    SynchronizeDungeonsItemFlags_trampoline();
    EnqueueDoorUnlockedSfx();
    ApplyCollisionWithSolid(); return;
}

void label_002_715F(void) {
    alu_cp8(gb.regs.a, 0x7C);
    if (GET_FLAG_C()) { label_002_7461(); return; };
    gb_push16(gb.regs.af);
    if (GET_FLAG_Z()) goto label_002_715F_jr_716B;
    alu_cp8(gb.regs.a, 0x7D);
    if (!GET_FLAG_Z()) { jr_002_716E(); return; };
  label_002_715F_jr_716B:;
    func_002_7468();
    jr_002_716E(); return;
}

void jr_002_716E(void) {
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_C()) { label_002_7461(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 0x7C);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x49CA;
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
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ApplyCollisionWithSolid(); return; };
    label_002_7461(); return;
}

void ApplyCollisionWithLedge(void) {
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { collisionEnd(); return; };
    gb.regs.a = gb_read(0xC5A8);
    alu_cp8(gb.regs.a, 0xD5);
    if (GET_FLAG_Z()) { collisionEnd(); return; };
    gb.regs.a = gb_read(0xFFDC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) { label_002_7461(); return; };
    func_002_6EA9();
    collisionEnd(); return;
}

void ApplyCollisionWithDoor(void) {
    gb.regs.a = gb_read(0xC15C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { collisionEnd(); return; };
    gb.regs.a = gb_read(0xFFDC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { label_002_726A(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_722C(); return; };
    gb.regs.a = gb_read(0xDC21);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto ApplyCollisionWithDoor_jr_71DE;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_722C(); return; };
  ApplyCollisionWithDoor_jr_71DE:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x77);
    if (GET_FLAG_Z()) goto ApplyCollisionWithDoor_jr_7204;
    alu_cp8(gb.regs.a, 0xD3);
    if (GET_FLAG_Z()) goto ApplyCollisionWithDoor_jr_7204;
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_Z()) goto ApplyCollisionWithDoor_jr_7204;
    alu_cp8(gb.regs.a, 0xB5);
    if (GET_FLAG_Z()) goto ApplyCollisionWithDoor_jr_7204;
    alu_cp8(gb.regs.a, 0x2B);
    if (GET_FLAG_Z()) goto ApplyCollisionWithDoor_jr_7204;
    alu_cp8(gb.regs.a, 0xD9);
    if (GET_FLAG_Z()) goto ApplyCollisionWithDoor_jr_7204;
    alu_cp8(gb.regs.a, 0xAC);
    if (GET_FLAG_Z()) goto ApplyCollisionWithDoor_jr_7204;
    alu_cp8(gb.regs.a, 0x8C);
    if (GET_FLAG_Z()) goto ApplyCollisionWithDoor_jr_7204;
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) { jr_002_722C(); return; };
  ApplyCollisionWithDoor_jr_7204:;
    gb.regs.a = gb_read(0xDC21);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ApplyCollisionWithDoor_jr_7213;
    /* ld_dialog_low a, Dialog212 */;
    OpenDialogInTable2AndClearIncrement();
    collisionEnd(); return;
  ApplyCollisionWithDoor_jr_7213:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDBF3, gb.regs.a);
    /* ld_dialog_low a, Dialog198 */;
    gb_write(0xC3C9, gb.regs.a);
    OpenDialogInTable1();
    gb.regs.a = gb_read(0xC163);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xDBBC, gb.regs.a);
    disableMovementInTransition();
    collisionEnd(); return;
}

void jr_002_722C(void) {
    gb.regs.a = gb_read(0xC13E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { collisionEnd(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ApplyMapFadeOutTransitionWithSound(); return; };
    ApplyMapFadeOutTransitionWithNoise(); return;
}

void ApplyCollisionWithOceanOrSwitchBlock(void) {
    gb.regs.a = gb_read(0xD7AE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_002_7461(); return; };
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xDB);
    if (GET_FLAG_C()) { ApplyCollisionWithSolid(); return; };
    alu_cp8(gb.regs.a, 0xDD);
    if (!GET_FLAG_C()) { ApplyCollisionWithSolid(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 0xDB);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x71E6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xD7B0);
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { ApplyCollisionWithSolid(); return; };
    label_002_7461(); return;
}

void ApplyCollisionWithStairs(void) {
    gb.regs.hl = 0xC11F;
    gb_write(gb.regs.hl, 1);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { label_002_7461(); return; };
}

void label_002_726A(void) {
    gb.regs.a = gb_read(0xFFDB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) { ApplyCollisionWithSolid(); return; };
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_C()) { label_002_7461(); return; };
}

void ApplyCollisionWithSolid(void) {
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x69);
    if (!GET_FLAG_Z()) { jr_002_728E(); return; };
    gb.regs.hl = 0xFFE3;
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ApplyCollisionWithSolid_jr_728B;
    gb.regs.a = gb_read(0xC15B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_728E(); return; };
  ApplyCollisionWithSolid_jr_728B:;
    HurtBySpikes();
    jr_002_728E(); return;
}

void jr_002_728E(void) {
    gb.regs.hl = 0xFFE3;
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_002_728E_checkPegasusBoots;
    gb.regs.a = gb_read(0xC13E);
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_002_728E_checkPegasusBoots;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xFFAF);
    if (GET_FLAG_Z()) goto jr_002_728E_checkOverworldObjects;
    /* ld_dialog_low e, Dialog08A */;
    alu_cp8(gb.regs.a, 0xA9);
    if (GET_FLAG_Z()) goto jr_002_728E_jr_002_72EC;
    /* ld_dialog_low e, Dialog08B */;
    alu_cp8(gb.regs.a, 0x4F);
    if (GET_FLAG_Z()) goto jr_002_728E_jr_72BB;
    alu_cp8(gb.regs.a, 0x4E);
    if (GET_FLAG_Z()) goto jr_002_728E_jr_72BB;
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_Z()) goto jr_002_728E_jr_002_72C3;
  jr_002_728E_jr_72BB:;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_728E_checkPegasusBoots;
    goto jr_002_728E_jr_002_72EC;
  jr_002_728E_jr_002_72C3:;
    alu_cp8(gb.regs.a, 0xDE);
    if (!GET_FLAG_Z()) goto jr_002_728E_checkOverworldObjects;
    gb.regs.a = gb_read(0xDC78);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_728E_checkPegasusBoots;
    /* ld_dialog_low e, Dialog08C */;
    goto jr_002_728E_jr_002_72EC;
  jr_002_728E_checkOverworldObjects:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto jr_002_728E_checkPegasusBoots;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_002_728E_checkPegasusBoots;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_002_728E_checkPegasusBoots;
    gb.regs.a = gb_read(0xDC0E);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_002_728E_checkPegasusBoots;
    /* ld_dialog_low e, Dialog08D */;
  jr_002_728E_jr_002_72EC:;
    gb.regs.a = gb_read(0xC5A6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_728E_checkPegasusBoots;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC5A6, gb.regs.a);
    gb.regs.a = gb.regs.e;
    OpenDialogInTable0AndClearIncrement();
  jr_002_728E_checkPegasusBoots:;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_728E_jr_7330;
    gb.regs.a = gb_read(0xC16A);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto jr_002_728E_jr_7330;
    gb.regs.hl = 0x683F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { collisionEnd(); return; };
    gb.regs.a = gb_read(0xC1C3);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC1C3, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_C()) { collisionEnd(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1C3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC121, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xC16D, gb.regs.a);
    collisionEnd(); return;
  jr_002_728E_jr_7330:;
    gb.regs.a = gb_read(0xC15B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_728E_jr_733B;
    gb.regs.a = 3;
    gb_write(0xC144, gb.regs.a);
  jr_002_728E_jr_733B:;
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xFFAF);
    if (GET_FLAG_Z()) { label_002_73AD(); return; };
    alu_cp8(gb.regs.a, 0x88);
    if (GET_FLAG_Z()) goto jr_002_728E_jr_734F;
    alu_cp8(gb.regs.a, 0x4E);
    if (GET_FLAG_Z()) goto jr_002_728E_jr_734F;
    alu_cp8(gb.regs.a, 0x4F);
    if (!GET_FLAG_Z()) { label_002_73AD(); return; };
  jr_002_728E_jr_734F:;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { collisionEnd(); return; };
    gb.regs.a = gb_read(0xFFDB);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = gb_read(0xFFDC);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    RevealObjectUnderObject_trampoline();
    gb.regs.a = 5;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { collisionEnd(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.d);
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 9);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0F);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC4);
    label_002_7461(); return;
}

void Data_002_73A3(void) {
    /* data: db $35, $44, $23, $14, $27 */;
}

void Data_002_73A8(void) {
    /* data: db $03, $01, $02, $00, $02 */;
  Data_002_73A8_end:;
    label_002_73AD(); return;
}

void label_002_73AD(void) {
    gb.regs.e = 0x20;
    alu_cp8(gb.regs.a, 0xC5);
    if (!GET_FLAG_Z()) { jr_002_741D(); return; };
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { collisionEnd(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x77);
    if (!GET_FLAG_Z()) { jr_002_742D(); return; };
    gb.regs.a = gb_read(0xDE81);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.e = 0;
    gb.regs.d = gb.regs.e;
    jr_002_73D4(); return;
}

void jr_002_73D4(void) {
    loop_start: ;
    gb.regs.hl = 0x73A3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_002_73D4_jr_73E6;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.hl = 0x73A8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { jr_002_73EE(); return; };
  jr_002_73D4_jr_73E6:;
    gb.regs.de++;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, -1590);
    if (!GET_FLAG_Z()) { goto loop_start; };
    collisionEnd(); return;
}

void jr_002_73EE(void) {
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) { jr_002_742D(); return; };
    gb.regs.hl = wInventoryItems_BButtonSlot;
  jr_002_73EE_loop_73F6:;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_002_73EE_jr_7402;
    gb.regs.a = gb.regs.l;
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto jr_002_73EE_loop_73F6;
    jr_002_7415(); return;
  jr_002_73EE_jr_7402:;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.hl = 0xDC21;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xDC23;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xDBFE;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, (-129 & 0xFF));
    if (GET_FLAG_Z()) { jr_002_742D(); return; };
}

void jr_002_7415(void) {
    /* call_open_dialog Dialog253 */;
    collisionEnd(); return;
}

void jr_002_741D(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { collisionEnd(); return; };
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xDE);
    if (GET_FLAG_Z()) { interactiveBlock(); return; };
    alu_cp8(gb.regs.a, 0xA7);
    if (!GET_FLAG_Z()) { collisionEnd(); return; };
}

void jr_002_742D(void) {
    gb.regs.e = 0x40;
    interactiveBlock(); return;
}

void interactiveBlock(void) {
    gb.regs.a = gb_read(0xC191);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC191, gb.regs.a);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_C()) { collisionEnd(); return; };
    gb.regs.a = gb.regs.e;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC191, gb.regs.a);
    TryOpenLockedDoor();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { collisionEnd(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x77);
    if (!GET_FLAG_Z()) { collisionEnd(); return; };
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 32;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x43;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xFE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall();
    gb.regs.a = 0;
    CheckPushedTombStone_trampoline();
    collisionEnd(); return;
}

void collisionEnd(void) {
    gb.regs.hl = 0x6E29;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC133, gb.regs.a);
    alu_scf();
    return;
}

void label_002_7461(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC191, gb.regs.a);
    alu_scf();
    alu_ccf();
    return;
}

void func_002_7468(void) {
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xB1);
    if (GET_FLAG_Z()) goto func_002_7468_jr_7472;
    alu_cp8(gb.regs.a, 0xB2);
    if (!GET_FLAG_Z()) { jr_002_7493(); return; };
  func_002_7468_jr_7472:;
    gb.regs.a = gb_read(0xFFDC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { ret_002_74AC(); return; };
    gb.regs.a = 0x0C;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 5;
    gb_write(0xC11C, gb.regs.a);
    ClearLinkPositionIncrement();
    gb_write(0xDC6F, gb.regs.a);
    gb_write(0xC198, gb.regs.a);
    gb_write(0xFFA2, gb.regs.a);
    gb_write(0xFFA3, gb.regs.a);
    ResetSpinAttack(); return;
}

void jr_002_7493(void) {
    alu_cp8(gb.regs.a, 0xC1);
    if (GET_FLAG_Z()) goto jr_002_7493_jr_74A3;
    alu_cp8(gb.regs.a, 0xC2);
    if (GET_FLAG_Z()) goto jr_002_7493_jr_74A3;
    alu_cp8(gb.regs.a, 0xBB);
    if (GET_FLAG_Z()) goto jr_002_7493_jr_74A3;
    alu_cp8(gb.regs.a, 0xBC);
    if (!GET_FLAG_Z()) { ret_002_74AC(); return; };
  jr_002_7493_jr_74A3:;
    gb.regs.a = gb_read(0xFFDC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) { ApplyMapFadeOutTransitionWithNoise(); return; };
}

void ret_002_74AC(void) {
    return;
}

void label_002_74AD(void) {
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC57);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto label_002_74AD_jr_74C9;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) return;
  label_002_74AD_jr_74C9:;
    ResetSpinAttack();
    gb.regs.a = gb_read(0xFF9A);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = gb_read(0xFF9B);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_sla(gb.regs.a);
    gb_write(0xC158, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFF2, gb.regs.a);
    func_1828(); return;
}

void OpenDialogInTable0AndClearIncrement(void) {
    OpenDialogInTable0();
    ClearLinkPositionIncrement(); return;
}

void OpenDialogInTable2AndClearIncrement(void) {
    OpenDialogInTable2();
    ClearLinkPositionIncrement(); return;
}

void Data_002_750A(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void Data_002_750E(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void GetObjectUnderLink(void) {
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb_write(0xFFFA, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.a = gb.regs.h;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFB8, gb.regs.a);
    gb_write(0xFFAF, gb.regs.a);
    gb.regs.e = gb.regs.a;
    return;
}

void func_002_753A(void) {
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_002_753A_jr_7549;
    gb.regs.a = gb_read(0xC13B);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xC13B, gb.regs.a);
  func_002_753A_jr_7549:;
    gb.regs.a = gb_read(0xC1A4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_7587(); return; };
}

void func_002_754F(void) {
    gb.regs.hl = 0xC146;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { func_002_755B(); return; };
    ClearLinkPositionIncrement();
    func_002_755B(); return;
}

void func_002_755B(void) {
    GetObjectUnderLink();
    gb.regs.c = 4;
    gb.regs.a = gb_read(0xD463);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_002_755B_jr_7582;
    gb.regs.c = 0xFC;
    gb.regs.a = gb_read(0xD7AE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_002_755B_jr_7582;
    GetObjectPhysicsFlags_trampoline();
    gb.regs.c = 2;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto func_002_755B_jr_7582;
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto func_002_755B_jr_7582;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { ret_002_7586(); return; };
    gb.regs.c = 0xFD;
  func_002_755B_jr_7582:;
    gb.regs.a = gb.regs.c;
    gb_write(0xC13B, gb.regs.a);
    ret_002_7586(); return;
}

void ret_002_7586(void) {
    return;
}

void jr_002_7587(void) {
    gb.regs.a = gb_read(0xFFFA);
    gb_write(0xFFFB, gb.regs.a);
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_002_75B2(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ret_002_75B1(); return; };
    gb.regs.hl = 0xC000;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) { ret_002_75B1(); return; };
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x26;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    ret_002_75B1(); return;
}

void ret_002_75B1(void) {
    return;
}

void jr_002_75B2(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD475, gb.regs.a);
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { ret_002_75B1(); return; };
}

void ApplyLinkGroundPhysics(void) {
    gb.regs.a = gb_read(0xC124);
    gb.regs.hl = 0xC19F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { label_002_76C0(); return; };
    GetObjectUnderLink();
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_indoor;
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x61);
    if (GET_FLAG_Z()) { ApplyLinkGroundPhysics_part2_makeLinkFallInPit(); return; };
    goto ApplyLinkGroundPhysics_specialCasesEnd;
  ApplyLinkGroundPhysics_indoor:;
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x4C);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_specialCasesEnd;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) { HurtBySpikes(); return; };
  ApplyLinkGroundPhysics_specialCasesEnd:;
    GetObjectPhysicsFlags_trampoline();
    gb_write(0xC181, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ApplyLinkGroundPhysics_Default(); return; };
    alu_cp8(gb.regs.a, 0xE0);
    if (!GET_FLAG_Z()) { ApplyLinkGroundPhysics_part2(); return; };
}

void HurtBySpikes(void) {
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto HurtBySpikes_return;
    ResetSpinAttack();
    gb.regs.a = gb_read(0xFF9A);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = gb_read(0xFF9B);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto HurtBySpikes_topViewEnd;
    gb.regs.a = 0x10;
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xFFA2, gb.regs.a);
  HurtBySpikes_topViewEnd:;
    gb.regs.a = 0x10;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xDC6F, gb.regs.a);
    gb.regs.a = gb_read(0xDC3C);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFF3, gb.regs.a);
  HurtBySpikes_return:;
    return;
}

void ApplyLinkGroundPhysics_part2(void) {
    gb.regs.a = gb_read(0xC181);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { ApplyLinkGroundPhysics_Default(); return; };
    alu_cp8(gb.regs.a, 0xF0);
    if (GET_FLAG_C()) goto ApplyLinkGroundPhysics_part2_jr_002_7644;
    label_002_7C14(); return;
  ApplyLinkGroundPhysics_part2_jr_002_7644:;
    alu_cp8(gb.regs.a, 0x51);
    if (GET_FLAG_Z()) goto ApplyLinkGroundPhysics_part2_slipIntoPit;
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_Z()) { label_002_76C0(); return; };
  ApplyLinkGroundPhysics_part2_slipIntoPit:;
    ResetSpinAttack();
    gb.regs.a = 7;
    gb_write(0xC11F, gb.regs.a);
    gb.regs.hl = 0xC1BB;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC17B;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_part2_return;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    gb.regs.a = 0xFF;
    if (GET_FLAG_Z()) goto ApplyLinkGroundPhysics_part2_jr_002_7672;
    gb.regs.a = 1;
  ApplyLinkGroundPhysics_part2_jr_002_7672:;
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    gb.regs.a = 0xFF;
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_part2_jr_002_7687;
    gb.regs.a = 1;
  ApplyLinkGroundPhysics_part2_jr_002_7687:;
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto ApplyLinkGroundPhysics_part2_return;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto ApplyLinkGroundPhysics_part2_return;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(0xFF99, gb.regs.a);
  ApplyLinkGroundPhysics_part2_makeLinkFallInPit:;
    gb.regs.a = 6;
    gb_write(0xC11C, gb.regs.a);
    ResetSpinAttack();
    gb_write(0xC198, gb.regs.a);
    gb.regs.a = gb_read(0xC181);
    gb_write(0xDC73, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xFFF3, gb.regs.a);
  ApplyLinkGroundPhysics_part2_return:;
    return;
}

void label_002_76C0(void) {
    gb.regs.hl = 0xC000;
    gb.regs.a = gb_read(0xC181);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto label_002_76C0_jr_76D5;
    gb.regs.a = gb_read(0xC13B);
    gb.regs.a = alu_add8(gb.regs.a, 0xFD);
    gb_write(0xC13B, gb.regs.a);
    ApplyLinkGroundPhysics_Default(); return;
  label_002_76C0_jr_76D5:;
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) goto label_002_76C0_jr_76E4;
    gb.regs.a = gb_read(0xC13B);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xC13B, gb.regs.a);
    ApplyLinkGroundPhysics_Default(); return;
  label_002_76C0_jr_76E4:;
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto label_002_76C0_jr_76EC;
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_002_7750(); return; };
  label_002_76C0_jr_76EC:;
    gb.regs.a = gb_read(0xFFB2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_76C0_jr_76F4;
    label_002_7C50(); return;
  label_002_76C0_jr_76F4:;
    gb.regs.a = gb_read(0xC1AD);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_002_7750(); return; };
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { ret_002_774F(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { ret_002_774F(); return; };
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 0xFE);
    func_002_5928();
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { label_002_7719(); return; };
    gb.regs.a = gb_read(0xDBB8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_002_7732(); return; };
}

void label_002_7719(void) {
    gb.regs.a = 0x50;
    gb_write(0xFFB7, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.a = gb_read(0xFFAF);
    gb_write(0xFF9C, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    return;
}

void jr_002_7732(void) {
    gb.regs.a = 1;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9C, gb.regs.a);
    ClearLinkPositionIncrement();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x750A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0x750E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9B, gb.regs.a);
    ret_002_774F(); return;
}

void ret_002_774F(void) {
    return;
}

void jr_002_7750(void) {
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { label_002_787D(); return; };
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { ApplyLinkGroundPhysics_Default(); return; };
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(gb.regs.hl++, gb.regs.a);
  jr_002_7750_notGBC:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
  jr_002_7750_anyGB:;
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xC11F, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto jr_002_7750_jr_779A;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto jr_002_7750_jr_779A;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_7750_jr_779A;
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
  jr_002_7750_jr_779A:;
    gb.regs.a = gb_read(0xC13B);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xC13B, gb.regs.a);
    ApplyLinkGroundPhysics_Default(); return;
}

void ApplyLinkGroundPhysics_Default(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1BB, gb.regs.a);
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_swimmingEnd;
    gb.regs.a = 0;
    gb_write(0xC11C, gb.regs.a);
  ApplyLinkGroundPhysics_Default_swimmingEnd:;
    gb.regs.a = gb_read(0xC181);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_grassVfxEnd;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xDB);
    if (GET_FLAG_C()) goto ApplyLinkGroundPhysics_Default_grassVfxEnd;
    alu_cp8(gb.regs.a, 0xDD);
    if (!GET_FLAG_C()) goto ApplyLinkGroundPhysics_Default_grassVfxEnd;
    gb.regs.a = alu_sub8(gb.regs.a, 0xDB);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x71E6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xD7B0);
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_grassVfxEnd;
    gb.regs.a = gb_read(0xD7AD);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x786F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC13B);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC13B, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD7AE, gb.regs.a);
    return;
  ApplyLinkGroundPhysics_Default_grassVfxEnd:;
    gb.regs.a = gb_read(0xD7AE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_jr_002_77F7;
    gb.regs.a = 7;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD7AE, gb.regs.a);
  ApplyLinkGroundPhysics_Default_jr_002_77F7:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_return;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_return;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xAA);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_switchButtonEnd;
    gb.regs.a = gb_read(0xC1CB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_switchButtonEnd;
    gb.regs.a = gb_read(0xC1CA);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC1CA, gb.regs.a);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_kanaletGateEnd;
    gb.regs.a = 0x60;
    gb_write(0xC1CB, gb.regs.a);
    gb.regs.a = 0x0E;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFA5, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xC3);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_kanaletGateEnd;
    gb.regs.hl = 0xD92E;
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
  ApplyLinkGroundPhysics_Default_kanaletGateEnd:;
    gb.regs.a = gb_read(0xC13B);
    gb.regs.a = alu_add8(gb.regs.a, 0xFD);
    gb_write(0xC13B, gb.regs.a);
    return;
  ApplyLinkGroundPhysics_Default_switchButtonEnd:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1CA, gb.regs.a);
    gb.regs.a = gb_read(0xFFFA);
    gb.regs.hl = 0xFFFB;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC1C9;
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_jr_002_786C;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xDF);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_jr_002_786C;
    gb.regs.a = gb_read(0xFFA1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC1A9);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto ApplyLinkGroundPhysics_Default_jr_002_786C;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x28);
    if (GET_FLAG_C()) goto ApplyLinkGroundPhysics_Default_return;
    gb.regs.a = 0x2B;
    gb_write(0xFFF4, gb.regs.a);
    label_002_4D97(); return;
  ApplyLinkGroundPhysics_Default_jr_002_786C:;
    gb_write(gb.regs.hl, 0);
  ApplyLinkGroundPhysics_Default_return:;
    return;
}

void Data_002_786F(void) {
    /* data: db $FC, $FF, $FF, $FE, $FE, $FE, $FD, $FD, $FD, $FC, $FC, $FC */;
}

void SwitchBlocksStateTable(void) {
    /* data: db $00, $02 */;
}

void label_002_787D(void) {
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, -1);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xC120);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_002_787D_jr_78A9;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_002_787D_jr_78A9;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x32);
    if (!GET_FLAG_Z()) goto label_002_787D_jr_78A9;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_or8(gb.regs.a, 6);
    jr_002_78AA(); return;
  label_002_787D_jr_78A9:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    jr_002_78AA(); return;
}

void jr_002_78AA(void) {
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, 7);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_002_78AA_jr_78CE;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_002_78AA_jr_78CE;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x32);
    if (!GET_FLAG_Z()) goto jr_002_78AA_jr_78CE;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_or8(gb.regs.a, 6);
    jr_002_78CF(); return;
  jr_002_78AA_jr_78CE:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    jr_002_78CF(); return;
}

void jr_002_78CF(void) {
    gb.regs.a = alu_xor8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xC11F, gb.regs.a);
    return;
}

void RoomTransitionLinkXIncrement(void) {
  RoomTransitionLinkXIncrement_right:;
    /* data: db $C6 */;
  RoomTransitionLinkXIncrement_left:;
    /* data: db $3A */;
  RoomTransitionLinkXIncrement_top:;
    /* data: db $00 */;
  RoomTransitionLinkXIncrement_bottom:;
    /* data: db $00 */;
    RoomTransitionLinkYIncrement(); return;
}

void RoomTransitionLinkYIncrement(void) {
  RoomTransitionLinkYIncrement_right:;
    /* data: db $00 */;
  RoomTransitionLinkYIncrement_left:;
    /* data: db $00 */;
  RoomTransitionLinkYIncrement_top:;
    /* data: db $3A */;
  RoomTransitionLinkYIncrement_bottom:;
    /* data: db $C6 */;
    RoomTransitionXIncrement(); return;
}

void RoomTransitionXIncrement(void) {
  RoomTransitionXIncrement_right:;
    /* data: db $04 */;
  RoomTransitionXIncrement_left:;
    /* data: db $FC */;
  RoomTransitionXIncrement_top:;
    /* data: db $00 */;
  RoomTransitionXIncrement_bottom:;
    /* data: db $00 */;
    RoomTransitionYIncrement(); return;
}

void RoomTransitionYIncrement(void) {
  RoomTransitionYIncrement_right:;
    /* data: db $00 */;
  RoomTransitionYIncrement_left:;
    /* data: db $00 */;
  RoomTransitionYIncrement_top:;
    /* data: db $FC */;
  RoomTransitionYIncrement_bottom:;
    /* data: db $04 */;
    ApplyRoomTransition(); return;
}

void ApplyRoomTransition(void) {
    gb.regs.a = gb_read(0xC124);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto ApplyRoomTransition_return;
    gb_push16(gb.regs.af);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto ApplyRoomTransition_dispatchTransition;
    gb.regs.a = gb_read(0xC125);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x7237;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0x7237;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9B, gb.regs.a);
    gb_push16(gb.regs.bc);
    UpdateFinalLinkPosition();
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0x7237;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF96);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF96, gb.regs.a);
    gb.regs.hl = 0x7237;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF97, gb.regs.a);
    gb.regs.hl = 0xC12D;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ApplyRoomTransition_dispatchTransition;
    gb.regs.a = gb_read(0xFF96);
    gb.regs.hl = 0xC12C;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ApplyRoomTransition_dispatchTransition;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = gb_read(0xFFB1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyRoomTransition_noMusicTrackChange;
    SetWorldMusicTrack();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFB1, gb.regs.a);
  ApplyRoomTransition_noMusicTrackChange:;
    ClearLinkPositionIncrement();
    gb_write(0xFFA3, gb.regs.a);
    gb_write(0xC124, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xDC59, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_write(0xDC5A, gb.regs.a);
    gb.regs.a = gb_read(0xC125);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto ApplyRoomTransition_bottomCaseEnd;
    gb.regs.a = 1;
    gb_write(0xFF9B, gb.regs.a);
    BackgroundCollisionHandler();
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xDB);
    if (GET_FLAG_Z()) goto ApplyRoomTransition_bottomCaseEnd;
    alu_cp8(gb.regs.a, 0xDC);
    if (GET_FLAG_Z()) goto ApplyRoomTransition_bottomCaseEnd;
    alu_cp8(gb.regs.a, 0xE1);
    if (GET_FLAG_Z()) goto ApplyRoomTransition_unstuckLink;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyRoomTransition_bottomCaseEnd;
  ApplyRoomTransition_unstuckLink:;
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ApplyRoomTransition_bottomCaseEnd;
    func_002_6EAD();
  ApplyRoomTransition_bottomCaseEnd:;
    gb.regs.a = gb_read(0xC169);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyRoomTransition_noJingle;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC169, gb.regs.a);
  ApplyRoomTransition_noJingle:;
    CreateFollowingNpcEntity_trampoline();
    gb.regs.a = 0xFF;
    gb_write(0xFFA6, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto ApplyRoomTransition_mapNotFF;
    gb.regs.d = 0;
    goto ApplyRoomTransition_activeRoomEnd;
  ApplyRoomTransition_mapNotFF:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto ApplyRoomTransition_activeRoomEnd;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto ApplyRoomTransition_activeRoomEnd;
    gb.regs.d = alu_inc8(gb.regs.d);
  ApplyRoomTransition_activeRoomEnd:;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    GetChestsStatusForRoom_trampoline();
    alu_cp8(gb.regs.a, 0x1A);
    if (GET_FLAG_Z()) goto ApplyRoomTransition_hasCompassDetectableTreasure;
    alu_cp8(gb.regs.a, 0x19);
    if (GET_FLAG_Z()) goto ApplyRoomTransition_hasCompassDetectableTreasure;
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) return;
  ApplyRoomTransition_hasCompassDetectableTreasure:;
    gb.regs.a = gb_read(0xDC75);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x0C;
    gb_write(0xD462, gb.regs.a);
    return;
  ApplyRoomTransition_dispatchTransition:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_dec8(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: RoomTransitionPrepareHandler(); return;
        case 0x01: RoomTransitionLoadTiles(); return;
        case 0x02: RoomTransitionConfigureScrollTargets(); return;
        case 0x03: RoomTransitionFirstHalfHandler(); return;
        case 0x04: RoomTransitionSecondHalfHandler(); return;
    }
  ApplyRoomTransition_return:;
    return;
}

void WindFishEggMazeSequence(void) {
    /* data: db DIRECTION_LEFT */;
    /* data: db DIRECTION_LEFT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_LEFT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_LEFT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_LEFT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_RIGHT */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_UP */;
    /* data: db DIRECTION_UP */;
}

void RoomTransitionPrepareHandler(void) {
    gb.regs.a = gb_read(0xC125);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RoomTransitionPrepareHandler_indoorEnd;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto RoomTransitionPrepareHandler_noWindFishEggMaze;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_C()) goto RoomTransitionPrepareHandler_indoorEnd;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_noWindFishEggMaze;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x71);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_noWindFishEggMaze;
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto RoomTransitionPrepareHandler_noWindFishEggMaze;
    gb.regs.a = gb_read(0xDC24);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x730A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC5AA);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC5AA, gb.regs.a);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto RoomTransitionPrepareHandler_mazeDirectionOk;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC5AA, gb.regs.a);
    goto RoomTransitionPrepareHandler_loadRoom;
  RoomTransitionPrepareHandler_mazeDirectionOk:;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_loadRoom;
    gb.regs.a = 2;
    gb_write(0xC169, gb.regs.a);
  RoomTransitionPrepareHandler_noWindFishEggMaze:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC5AA, gb.regs.a);
    gb.regs.hl = 0x7474;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_noFaceShrineHack;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_noFaceShrineHack;
    gb.regs.a = gb_read(0xDC56);
    alu_cp8(gb.regs.a, 0x1D);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_noFaceShrineHack;
    gb.regs.a = 0x35;
    gb_write(0xDC56, gb.regs.a);
  RoomTransitionPrepareHandler_noFaceShrineHack:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xDC56;
    goto RoomTransitionPrepareHandler_incrementRoom;
  RoomTransitionPrepareHandler_indoorEnd:;
    gb.regs.a = gb_read(0xC10C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RoomTransitionPrepareHandler_mysteriousWoodsEnd;
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_mysteriousWoodsEnd;
    gb.regs.a = 0x1E;
    gb_write(0xC169, gb.regs.a);
    gb.regs.a = 0x63;
    gb.regs.hl = 0xFFF6;
    goto RoomTransitionPrepareHandler_setRoom;
  RoomTransitionPrepareHandler_mysteriousWoodsEnd:;
    gb.regs.hl = 0x7474;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFF6;
  RoomTransitionPrepareHandler_incrementRoom:;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
  RoomTransitionPrepareHandler_setRoom:;
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x41);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_forestRoomEnd;
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_forestRoomEnd;
    gb.regs.hl = 0xD8F6;
    alu_bit(6, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_forestRoomEnd;
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    gb.regs.a = 2;
    gb_write(0xC169, gb.regs.a);
  RoomTransitionPrepareHandler_forestRoomEnd:;
  RoomTransitionPrepareHandler_loadRoom:;
    LoadRoom();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RoomTransitionPrepareHandler_colorDungeonEnd;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_colorDungeonEnd;
    gb.regs.a = 1;
    gb_write(0xFF90, gb.regs.a);
    gb.regs.a = 2;
    ReplaceObjects56and57_trampoline();
  RoomTransitionPrepareHandler_colorDungeonEnd:;
    LoadRoomEntities();
    DrawLinkSprite();
    ApplyLinkMotionState();
    gb.regs.a = gb_read(0xC1CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RoomTransitionPrepareHandler_C1CFIsZero;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1CF, gb.regs.a);
    gb.regs.a = gb_read(0xD47C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xFFB0);
    if (GET_FLAG_Z()) goto RoomTransitionPrepareHandler_jr_002_7AE2;
    gb.regs.a = 0x49;
  RoomTransitionPrepareHandler_jr_002_7AE2:;
    gb_write(0xFFB1, gb.regs.a);
    ResetMusicFadeTimer();
    IncrementRoomTransitionStateAndReturn(); return;
  RoomTransitionPrepareHandler_C1CFIsZero:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { IncrementRoomTransitionStateAndReturn(); return; };
    gb.regs.a = gb_read(0xDBFA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { IncrementRoomTransitionStateAndReturn(); return; };
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFB0;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { IncrementRoomTransitionStateAndReturn(); return; };
    gb.regs.c = gb.regs.a;
    alu_cp8(gb.regs.a, 0x25);
    if (!GET_FLAG_C()) goto RoomTransitionPrepareHandler_jr_002_7B14;
    gb.regs.b = 0;
    gb.regs.hl = 0x4120;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto RoomTransitionPrepareHandler_overridePowerUpTrack;
  RoomTransitionPrepareHandler_jr_002_7B14:;
    gb.regs.a = gb_read(0xD47C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { SetNextMusicTrack(); return; };
    gb.regs.a = gb_read(0xFFBD);
    alu_cp8(gb.regs.a, 0x49);
    if (GET_FLAG_Z()) { SetNextMusicTrack_setMusicTrack(); return; };
    SetNextMusicTrack();
    gb.regs.a = 0x49;
    gb_write(0xFFB1, gb.regs.a);
    gb_write(0xFFBD, gb.regs.a);
    return;
  RoomTransitionPrepareHandler_overridePowerUpTrack:;
    gb.regs.a = gb.regs.c;
    gb_write(0xFFBD, gb.regs.a);
    SetNextMusicTrack(); return;
}

void SetNextMusicTrack(void) {
    gb.regs.a = gb.regs.c;
    gb_write(0xFFB1, gb.regs.a);
    ResetMusicFadeTimer();
  SetNextMusicTrack_setMusicTrack:;
    gb.regs.a = gb.regs.c;
    gb_write(0xFFB0, gb.regs.a);
    IncrementRoomTransitionStateAndReturn(); return;
}

void IncrementRoomTransitionStateAndReturn(void) {
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC124, gb.regs.a);
    return;
}

void RoomTransitionLoadTiles(void) {
    SelectRoomTilesets();
    gb.regs.a = gb_read(0xD7AF);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto RoomTransitionLoadTiles_switchBlocksEnd;
    gb.regs.a = 2;
    gb_write(0xFFBB, gb.regs.a);
  RoomTransitionLoadTiles_switchBlocksEnd:;
    IncrementRoomTransitionStateAndReturn(); return;
}

void RoomTransitionBGOriginHigh(void) {
  RoomTransitionBGOriginHigh_right:;
    /* data: db $00 */;
  RoomTransitionBGOriginHigh_left:;
    /* data: db $00 */;
  RoomTransitionBGOriginHigh_top:;
    /* data: db $02 */;
  RoomTransitionBGOriginHigh_bottom:;
    /* data: db $02 */;
    RoomTransitionBGOriginLow(); return;
}

void RoomTransitionBGOriginLow(void) {
  RoomTransitionBGOriginLow_right:;
    /* data: db $14 */;
  RoomTransitionBGOriginLow_left:;
    /* data: db $0C */;
  RoomTransitionBGOriginLow_top:;
    /* data: db $00 */;
  RoomTransitionBGOriginLow_bottom:;
    /* data: db $00 */;
    RoomTransitionBGInitialUpdateRegionHigh(); return;
}

void RoomTransitionBGInitialUpdateRegionHigh(void) {
  RoomTransitionBGInitialUpdateRegionHigh_right:;
    /* data: db $00 */;
  RoomTransitionBGInitialUpdateRegionHigh_left:;
    /* data: db $00 */;
  RoomTransitionBGInitialUpdateRegionHigh_top:;
    /* data: db $03 */;
  RoomTransitionBGInitialUpdateRegionHigh_bottom:;
    /* data: db $02 */;
    RoomTransitionBGInitialUpdateRegionLow(); return;
}

void RoomTransitionBGInitialUpdateRegionLow(void) {
  RoomTransitionBGInitialUpdateRegionLow_right:;
    /* data: db $14 */;
  RoomTransitionBGInitialUpdateRegionLow_left:;
    /* data: db $1F */;
  RoomTransitionBGInitialUpdateRegionLow_top:;
    /* data: db $E0 */;
  RoomTransitionBGInitialUpdateRegionLow_bottom:;
    /* data: db $00 */;
    RoomUpdateTileAmount(); return;
}

void RoomUpdateTileAmount(void) {
  RoomUpdateTileAmount_right:;
    /* data: db TILES_PER_COLUMN - 1 */;
  RoomUpdateTileAmount_left:;
    /* data: db TILES_PER_COLUMN - 1 */;
  RoomUpdateTileAmount_up:;
    /* data: db TILES_PER_ROW */;
  RoomUpdateTileAmount_down:;
    /* data: db TILES_PER_ROW */;
    RoomTransitionFramesToMidScreen(); return;
}

void RoomTransitionFramesToMidScreen(void) {
  RoomTransitionFramesToMidScreen_right:;
    /* data: db $14 */;
  RoomTransitionFramesToMidScreen_left:;
    /* data: db $14 */;
  RoomTransitionFramesToMidScreen_top:;
    /* data: db $10 */;
  RoomTransitionFramesToMidScreen_bottom:;
    /* data: db $10 */;
    RoomTransitionOffset(); return;
}

void RoomTransitionOffset(void) {
  RoomTransitionOffset_right:;
    /* data: db $00 */;
  RoomTransitionOffset_left:;
    /* data: db $09 */;
  RoomTransitionOffset_top:;
    /* data: db $70 */;
  RoomTransitionOffset_bottom:;
    /* data: db $00 */;
    /* data: db $40 */;
    /* data: db $40 */;
    /* data: db $02 */;
    /* data: db $02 */;
    RoomTransitionTargetScrollX(); return;
}

void RoomTransitionTargetScrollX(void) {
  RoomTransitionTargetScrollX_right:;
    /* data: db $A0 */;
  RoomTransitionTargetScrollX_left:;
    /* data: db $60 */;
  RoomTransitionTargetScrollX_top:;
    /* data: db $00 */;
  RoomTransitionTargetScrollX_bottom:;
    /* data: db $00 */;
    RoomTransitionTargetScrollY(); return;
}

void RoomTransitionTargetScrollY(void) {
  RoomTransitionTargetScrollY_right:;
    /* data: db $00 */;
  RoomTransitionTargetScrollY_left:;
    /* data: db $00 */;
  RoomTransitionTargetScrollY_top:;
    /* data: db $80 */;
  RoomTransitionTargetScrollY_bottom:;
    /* data: db $80 */;
    OverworldRoomIncrement(); return;
}

void OverworldRoomIncrement(void) {
  OverworldRoomIncrement_right:;
    /* data: db $01 */;
  OverworldRoomIncrement_left:;
    /* data: db $FF */;
  OverworldRoomIncrement_top:;
    /* data: db $F0 */;
  OverworldRoomIncrement_bottom:;
    /* data: db $10 */;
    IndoorRoomIncrement(); return;
}

void IndoorRoomIncrement(void) {
  IndoorRoomIncrement_right:;
    /* data: db $01 */;
  IndoorRoomIncrement_left:;
    /* data: db $FF */;
  IndoorRoomIncrement_top:;
    /* data: db $F8 */;
  IndoorRoomIncrement_bottom:;
    /* data: db $08 */;
    RoomTransitionConfigureScrollTargets(); return;
}

void RoomTransitionConfigureScrollTargets(void) {
    gb.regs.a = gb_read(0xFFBB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.e = 0xFF;
    gb.regs.a = gb_read(0xC125);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto RoomTransitionConfigureScrollTargets_directionNotHorizontal;
    gb.regs.e = 0xDF;
  RoomTransitionConfigureScrollTargets_directionNotHorizontal:;
    gb.regs.hl = 0x7474;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC12C);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC12C, gb.regs.a);
    gb.regs.hl = 0x7474;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC12D);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC12D, gb.regs.a);
    gb.regs.hl = 0x7470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC12F);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    gb_write(0xC127, gb.regs.a);
    gb.regs.hl = 0x7470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC12E);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xC126, gb.regs.a);
    gb.regs.hl = 0x7470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC12F);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    gb_write(0xC12F, gb.regs.a);
    gb.regs.hl = 0x7470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC12E);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xC12E, gb.regs.a);
    gb.regs.hl = 0x7470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC128, gb.regs.a);
    gb.regs.hl = 0x7470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC129, gb.regs.a);
    gb.regs.hl = 0x7470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC12A, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC12B, gb.regs.a);
    IncrementRoomTransitionStateAndReturn(); return;
}

void RoomTransitionFirstHalfHandler(void) {
    UpdateBGRegion(); return;
}

void RoomTransitionSecondHalfHandler(void) {
    return;
}

void Data_002_7C04(void) {
    /* data: db $00, $00, $FF, $01, $01, $FF, $01, $FF */;
}

void Data_002_7C0C(void) {
    /* data: db $01, $FF, $00, $00, $01, $01, $FF, $FF */;
}

void label_002_7C14(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.hl = 0xC167;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFA1;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC1A9;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC181);
    gb.regs.a = alu_sub8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x7C04;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0x7C0C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF99, gb.regs.a);
    return;
}

void Data_002_7C40(void) {
    /* data: db $FC, $FA, $F8, $F6, $0C, $00, $00, $F4 */;
}

void Data_002_7C48(void) {
    /* data: db $00, $00, $00, $00, $00, $F4, $0C, $00 */;
}

void label_002_7C50(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0);
    gb.regs.hl = 0xC124;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC1A9;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFA1;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC19F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.e = 1;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) goto label_002_7C50_jr_7C88;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x3E);
    if (GET_FLAG_Z()) { jr_002_7C8B(); return; };
    gb.regs.e = alu_inc8(gb.regs.e);
    alu_cp8(gb.regs.a, 0x3D);
    if (GET_FLAG_Z()) { jr_002_7C8B(); return; };
    gb.regs.e = alu_inc8(gb.regs.e);
    alu_cp8(gb.regs.a, 0x3C);
    if (GET_FLAG_Z()) { jr_002_7C8B(); return; };
    alu_cp8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) return;
    gb.regs.e = 0;
    jr_002_7C8B(); return;
  label_002_7C50_jr_7C88:;
    gb.regs.a = alu_sub8(gb.regs.a, 0xE7);
    gb.regs.e = gb.regs.a;
    jr_002_7C8B(); return;
}

void jr_002_7C8B(void) {
    gb.regs.d = 0;
    gb.regs.hl = 0x7C40;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0x7C48;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9B, gb.regs.a);
    UpdateFinalLinkPosition();
    BackgroundCollisionHandler(); return;
}
