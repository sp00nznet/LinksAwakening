/* Auto-generated from LADX Disassembly - Bank 0x19 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void LiftableStatueSpriteRect(void);
void LiftableStatueSpriteRect_BottleGrotto(void);
void LiftableStatueRubbleSprite(void);
void LiftableStatueEntityHandler(void);
void LiftableStatueState_Standing(void);
void LiftableStatueState_Lifted_Thrown(void);
void jr_019_4162(void);
void LiftableStatue_RubbleX(void);
void LiftableStatue_RubbleY(void);
void LiftableStatue_RubbleSpeedX(void);
void LiftableStatue_RubbleSpeedY(void);
void LiftableStatue_RubbleSpeedZ(void);
void LiftableStatue_SpawnRubble(void);
void DungeonWarps(void);
void WarpEntityHandler(void);
void jr_019_4279(void);
void WarpState0Handler(void);
void WarpState1Handler(void);
void WarpState2Handler(void);
void label_019_42E0(void);
void Data_019_42E1(void);
void Data_019_42F1(void);
void WarpState3Handler(void);
void jr_019_4355(void);
void Unknown062SpriteVariants(void);
void Data_019_439B(void);
void Data_019_439D(void);
void Data_019_43A5(void);
void func_019_43A9(void);
void func_019_43D4(void);
void Data_019_43FA(void);
void Data_019_43FC(void);
void Data_019_4404(void);
void label_019_4406(void);
void func_019_442C(void);
void BoomerangSpriteVariants(void);
void BoomerangEntityHandler(void);
void BoomerangGoingHandler(void);
void BoomerangComingHandler(void);
void BoomerangDestroyBushIfNeeded(void);
void Data_019_44FC(void);
void Data_019_451C(void);
void Data_019_4520(void);
void SwordBeamEntityHandler(void);
void jr_019_45A0(void);
void func_019_45A3(void);
void func_019_45B2(void);
void GoriyaSpriteVariants(void);
void GoriyaEntityHandler(void);
void GoriyaState0Handler(void);
void Data_019_4634(void);
void Data_019_454B(void);
void jr_019_4663(void);
void GoriyaState1Handler(void);
void jr_019_46DB(void);
void jr_019_46E1(void);
void GoriyaState3Handler(void);
void jr_019_4725(void);
void Data_019_472B(void);
void GoriyaState2Handler(void);
void jr_019_476A(void);
void MaskedMimicGoriyaSpriteVariants(void);
void Data_019_47B6(void);
void Data_019_47B9(void);
void MaskedMimicGoriyaEntityHandler(void);
void CatfishMawSwimWarpDataLeft(void);
void CatfishMawSwimWarpDataRight(void);
void FisherUnderBridgeWarpData(void);
void DivableWaterEntityHandler(void);
void jr_019_4869(void);
void func_019_4891(void);
void DogSpriteVariants(void);
void DogEntityHandler(void);
void jr_019_4947(void);
void jr_019_494A(void);
void jr_019_4980(void);
void Data_019_4990(void);
void DogState0Handler(void);
void DogState1Handler(void);
void func_019_49FD(void);
void DogState2Handler(void);
void DogState3Handler(void);
void Data_019_4A50(void);
void func_019_4A90(void);
void Data_019_4ABB(void);
void Data_019_4AC3(void);
void EggSongEventEntityHandler(void);
void EggSongEventState0Handler(void);
void EggSongEventState1Handler(void);
void EggSongEventState2Handler(void);
void EggSongEventState3Handler(void);
void EggSongEventState4Handler(void);
void func_019_4B6E(void);
void Unknown063SpriteVariants(void);
void label_019_4BCC(void);
void jr_019_4C21(void);
void label_019_4CEA(void);
void Data_019_4CF7(void);
void label_019_4CFF(void);
void Data_019_4D25(void);
void Data_019_4D2D(void);
void Data_019_4D35(void);
void Data_019_4D3D(void);
void func_019_4D45(void);
void label_019_4D9B(void);
void Unknown064SpriteVariants(void);
void func_019_4DBC(void);
void func_019_4E00(void);
void func_019_4E09(void);
void Data_019_4E37(void);
void func_019_4E43(void);
void label_019_4E62(void);
void func_019_4E74(void);
void Data_019_4EAA(void);
void Data_019_4EB0(void);
void Data_019_4EB4(void);
void Data_019_4F1C(void);
void Data_019_4F20(void);
void label_019_4F30(void);
void Unknown065SpriteVariants(void);
void Unknown066SpriteVariants(void);
void Data_019_500B(void);
void func_019_500D(void);
void ret_019_5092(void);
void jr_019_5093(void);
void Data_019_50A4(void);
void Data_019_50AC(void);
void Data_019_50B4(void);
void Data_019_50BC(void);
void label_019_50C4(void);
void Data_019_51AD(void);
void FlyingRoosterEventsEntityHandler(void);
void FlyingRoosterState0Handler(void);
void label_019_52AB(void);
void FlyingRoosterState1Handler(void);
void label_019_5363(void);
void GiantBubbleSpriteRect(void);
void GiantBubbleTilesOffsets(void);
void GiantBubbleEntityHandler(void);
void PodobooSpriteVariants(void);
void PodobooEntityHandler(void);
void PodobooState0Handler(void);
void Data_019_5410(void);
void Data_019_5412(void);
void Data_019_5414(void);
void PodobooState1Handler(void);
void func_019_542A(void);
void ret_019_546E(void);
void PodobooState2Handler(void);
void Unknown067SpriteVariants(void);
void Unknown068SpriteVariants(void);
void label_019_54FD(void);
void jr_019_552D(void);
void Data_019_554B(void);
void Data_019_556B(void);
void ThwompRammableEntityHandler(void);
void ThwompRammableState0Handler(void);
void ThwompRammableState1Handler(void);
void ThwompRammableState2Handler(void);
void Data_019_563B(void);
void Data_019_565B(void);
void func_019_567B(void);
void ThwimpSpriteVariants(void);
void ThwimpEntityHandler(void);
void ThwimpState0Handler(void);
void ThwimpState1Handler(void);
void ThwimpState2Handler(void);
void ThwimpState3Handler(void);
void Data_019_5768(void);
void ThwompSpriteVariants(void);
void Data_019_57AC(void);
void ThwompEntityHandler(void);
void ThwompState0Handler(void);
void ThwompState1Handler(void);
void ThwompState2Handler(void);
void ThwompState3Handler(void);
void func_019_58A2(void);
void SideViewPotSpriteVariants(void);
void SideViewPotEntityHandler(void);
void SideViewPotState0Handler(void);
void jr_019_5922(void);
void jr_019_5950(void);
void SideViewPotState1And2Handler(void);
void jr_019_598B(void);
void func_019_599B(void);
void jr_019_59B7(void);
void RoosterSpriteVariants(void);
void RoosterEntityHandler(void);
void jr_019_5A31(void);
void jr_019_5A35(void);
void jr_019_5A7F(void);
void jr_019_5A85(void);
void jr_019_5A9F(void);
void jr_019_5AC4(void);
void Data_019_5AF8(void);
void func_019_5B00(void);
void Data_019_5B29(void);
void Data_019_5B34(void);
void label_019_5B3C(void);
void jr_019_5B75(void);
void RichardFrogSpriteVariants(void);
void RichardFrogEntityHandler(void);
void Data_019_5BF0(void);
void Data_019_5BF8(void);
void Data_019_5C00(void);
void RichardFrogState0Handler(void);
void jr_019_5C41(void);
void RichardFrogState1Handler(void);
void WarpLocationsTable(void);
void func_019_5D6A(void);
void func_019_5D7D(void);
void Data_019_5D8B(void);
void func_019_5D8F(void);
void func_019_5D99(void);
void func_019_5DAC(void);
void ret_019_5DF7(void);
void GhostSpriteVariants(void);
void GhostZPositionTable(void);
void GhostEntityHandler(void);
void jr_019_5EAC(void);
void jr_019_5EAF(void);
void GhostState0Handler(void);
void GhostState1Handler(void);
void GhostState2Handler(void);
void label_019_5F5F(void);
void label_019_5F84(void);
void GhostInHouseSequence(void);
void func_019_5FE7(void);
void Data_019_5FEF(void);
void Data_019_5FF3(void);
void Data_019_5FF7(void);
void Data_019_5FFB(void);
void func_019_5FFF(void);
void func_019_6037(void);
void label_019_6053(void);
void func_019_6064(void);
void func_019_6080(void);
void func_019_60A5(void);
void Data_019_60B4(void);
void Data_019_60E8(void);
void Data_019_611C(void);
void Data_019_6150(void);
void Data_019_6184(void);
void Data_019_61B8(void);
void Data_019_61EC(void);
void Data_019_61F0(void);
void Data_019_61F4(void);
void AnimateEaglesTowerOpening(void);
void EaglesTowerOpeningState0Handler(void);
void EaglesTowerOpeningState1Handler(void);
void jr_019_6245(void);
void EaglesTowerOpeningState2Handler(void);
void EaglesTowerOpeningState3Handler(void);
void EaglesTowerOpeningState4Handler(void);
void func_019_6262(void);
void jr_019_6278(void);
void EaglesTowerOpeningState5Handler(void);
void EaglesTowerOpeningState6Handler(void);
void Data_019_62F4(void);
void Data_019_6314(void);
void Data_019_6334(void);
void Data_019_6354(void);
void func_019_6374(void);
void Data_019_63A3(void);
void Data_019_63AC(void);
void func_019_63B5(void);
void ret_019_63D8(void);
void Data_019_63D9(void);
void Data_019_63E6(void);
void Data_019_63F3(void);
void Data_019_6400(void);
void Data_019_640D(void);
void Data_019_641A(void);
void Data_019_6427(void);
void Data_019_6497(void);
void func_019_650F(void);
void Data_019_6571(void);
void Data_019_65A5(void);
void Data_019_65D9(void);
void Data_019_660D(void);
void Data_019_6641(void);
void Data_019_6675(void);
void Data_019_66A9(void);
void Data_019_66DD(void);
void Data_019_6711(void);
void Data_019_6721(void);
void Data_019_6731(void);
void Data_019_6741(void);
void Data_019_6751(void);
void Data_019_6785(void);
void Data_019_67B9(void);
void Data_019_67ED(void);
void Data_019_6821(void);
void Data_019_6829(void);
void Data_019_6831(void);
void Data_019_6839(void);
void AnimateDungeonDoorOpening(void);
void func_019_685A(void);
void func_019_686B(void);
void func_019_6894(void);
void jr_019_68AC(void);
void jr_019_68D6(void);
void func_019_68F9(void);
void jr_019_6910(void);
void jr_019_693D(void);
void label_019_6A3C(void);
void Data_019_6A47(void);
void label_019_6A4F(void);
void ret_019_6A8C(void);
void MimicSpriteVariants(void);
void Data_019_6AAC(void);
void MimicEntityHandler(void);
void jr_019_6ACE(void);
void jr_019_6AD4(void);
void jr_019_6B41(void);
void CheepCheepSpriteVariants(void);
void CheepCheepHorizontalEntityHandler(void);
void CheepCheepVerticalEntityHandler(void);
void CheepCheepState0Handler(void);
void label_019_6B8D(void);
void CheepCheepState1Handler(void);
void CheepCheepState2Handler(void);
void CheepCheepJumpingEntityHandler(void);
void CheepCheepJumpingState0Handler(void);
void CheepCheepJumpingState1Handler(void);
void CheepCheepJumpingState2Handler(void);
void CheepCheepJumpingState3Handler(void);
void CheepCheepJumpingState4Handler(void);
void func_019_6C99(void);
void CheepCheepJumpingState5Handler(void);
void func_019_6CD3(void);
void Unknown069SpriteVariants(void);
void label_019_6CE7(void);
void label_019_6D00(void);
void BananasSchuleState0Handler(void);
void jr_019_6D67(void);
void BananasSchuleState1Handler(void);
void BananasSchuleState2Handler(void);
void Data_019_6DDC(void);
void BananasSchuleState3Handler(void);
void Data_019_6E25(void);
void Data_019_6EA5(void);
void func_019_6EC5(void);
void Data_019_6F05(void);
void BananasSchuleSaleEntityHandler(void);
void func_019_6F8B(void);
void func_019_6F8C(void);
void jr_019_6FAD(void);
void jr_019_6FB0(void);
void jr_019_6FB8(void);
void func_019_6FC5(void);
void Data_019_6FD9(void);
void Data_019_7029(void);
void func_019_7039(void);
void label_019_70A9(void);
void jr_019_7114(void);
void Data_019_7118(void);
void func_019_717C(void);
void Data_019_7193(void);
void SeashellMansionEntityHandler(void);
void jr_019_71FD(void);
void SeashellMansionState0Handler(void);
void SeashellMansionState1Handler(void);
void SeashellMansionState2Handler(void);
void ret_019_729A(void);
void SeashellMansionState3Handler(void);
void label_019_72BF(void);
void jr_019_72C9(void);
void jr_019_72F4(void);
void SeashellMansionState4Handler(void);
void SeashellMansionState5Handler(void);
void SeashellMansionState6Handler(void);
void SeashellMansionState7Handler(void);
void SeashellMansionState8Handler(void);
void SeashellMansionState9Handler(void);
void Unknown070SpriteVariants(void);
void Unknown071SpriteVariants(void);
void func_019_73BD(void);
void jr_019_73DE(void);
void jr_019_73EE(void);
void Data_019_7418(void);
void label_019_74D8(void);
void func_019_74EB(void);
void jr_019_7509(void);
void func_019_7511(void);
void func_019_7526(void);
void Unknown072SpriteVariants(void);
void func_019_756F(void);
void Data_019_75A0(void);
void Data_019_7620(void);
void func_019_7640(void);
void func_019_767B(void);
void func_019_76B1(void);
void func_019_76CB(void);
void func_019_7744(void);
void Data_019_774F(void);
void Data_019_777F(void);
void Data_019_77B7(void);
void Data_019_77FF(void);
void Data_019_7843(void);
void Data_019_784B(void);
void func_019_784F(void);
void Unknown073SpriteVariants(void);
void func_019_787D(void);
void jr_019_78C0(void);
void ret_019_78CB(void);
void Data_019_78CC(void);
void Data_019_78DC(void);
void func_019_78EC(void);
void func_019_78F1(void);
void jr_019_78F4(void);
void Data_019_78FE(void);
void func_019_7921(void);
void Data_019_794E(void);
void Data_019_7952(void);
void Data_019_7956(void);
void Data_019_795A(void);
void Data_019_795D(void);
void UpdateEntityPositionForRoomTransition(void);
void label_019_7A74(void);
void func_019_7A9A(void);
void Data_019_7AB6(void);
void func_019_7ABE(void);
void func_019_7ADB(void);
void func_019_7AF8(void);
void func_019_7B04(void);
void SmashedRockSpriteRect(void);
void CutLeavesSpriteRect(void);
void CutLeavesSwampSpriteRect(void);
void func_019_7C50(void);
void PushLinkOutOfEntity_19(void);
void jr_019_7CCE(void);
void EntityVariantForDirection_19(void);
void SetEntityVariantForDirection_19(void);
void func_019_7CF0(void);
void func_019_7CFB(void);
void func_019_7D16(void);
void jr_019_7D3B(void);
void ReturnIfNonInteractive_19(void);
void ApplyRecoilIfNeeded_19(void);
void UpdateEntityPosWithSpeed_19(void);
void UpdateEntityYPosWithSpeed_19(void);
void AddEntitySpeedToPos_19(void);
void AddEntityZSpeedToPos_19(void);
void EntityLinkPositionXDifference_19(void);
void EntityLinkPositionYDifference_19(void);
void func_019_7E3A(void);
void jr_019_7E5F(void);
void ClearEntityStatus_19(void);
void AnimateBossAgony_19(void);
void AnimateBossAgonyInit_19(void);
void IncrementEntityPrivateState2_19(void);
void AnimateBossAgonyFlashing_19(void);
void AnimateBossAgonyExploding_19(void);
void label_019_7EC4(void);
void jr_019_7F05(void);
void func_019_7F0E(void);

void LiftableStatueSpriteRect(void) {
    /* data: db $F0, $00, $48, $06, $F0, $08, $48, $26, $00, $00, $4A, $06, $00, $08, $4A, $26 */;
}

void LiftableStatueSpriteRect_BottleGrotto(void) {
    /* data: db $F0, $00, $78, $06, $F0, $08, $78, $26, $00, $00, $7A, $06, $00, $08, $7A, $26 */;
}

void LiftableStatueRubbleSprite(void) {
    /* data: db $16, $01 */;
}

void LiftableStatueEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LiftableStatueEntityHandler_notRubblePiece;
    gb.regs.de = 0x4020;
    RenderActiveEntitySprite();
    ReturnIfNonInteractive_19();
    UpdateEntityPosWithSpeed_19();
    AddEntityZSpeedToPos_19();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    return;
  LiftableStatueEntityHandler_notRubblePiece:;
    gb.regs.hl = 0x4000;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto LiftableStatueEntityHandler_jr_4056;
    gb.regs.hl = 0x4010;
  LiftableStatueEntityHandler_jr_4056:;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    label_3CD9();
    ReturnIfNonInteractive_19();
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: LiftableStatueState_Standing(); return;
        case 0x01: LiftableStatueState_Lifted_Thrown(); return;
        case 0x02: LiftableStatueState_Lifted_Thrown(); return;
    }
}

void LiftableStatueState_Standing(void) {
    ApplyEntityInteractionWithBackground_trampoline();
    PushLinkOutOfEntity_19();
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto LiftableStatueState_Standing_notBeingLifted;
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto LiftableStatueState_Standing_notBeingLifted;
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LiftableStatueState_Standing_notBeingLifted;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto LiftableStatueState_Standing_powerBraceletNotOnB;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto LiftableStatueState_Standing_usePowerBracelet;
    goto LiftableStatueState_Standing_notBeingLifted;
  LiftableStatueState_Standing_powerBraceletNotOnB:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto LiftableStatueState_Standing_notBeingLifted;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto LiftableStatueState_Standing_notBeingLifted;
  LiftableStatueState_Standing_usePowerBracelet:;
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LiftableStatueState_Standing_notBeingLifted;
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC3CF, gb.regs.a);
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
    if (GET_FLAG_Z()) goto LiftableStatueState_Standing_notBeingLifted;
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
    gb.regs.a = gb_read(0xDBEF);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto LiftableStatueState_Standing_notBeingLifted;
    gb.regs.e = 8;
    gb.regs.a = gb_read(0xD47C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LiftableStatueState_Standing_notLiftFaster;
    gb.regs.e = 3;
  LiftableStatueState_Standing_notLiftFaster:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_C()) goto LiftableStatueState_Standing_ret;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 7);
    gb.regs.hl = 0xC490;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFF9E);
    gb_write(0xC15D, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 2);
  LiftableStatueState_Standing_notBeingLifted:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  LiftableStatueState_Standing_ret:;
    return;
}

void LiftableStatueState_Lifted_Thrown(void) {
    UpdateEntityPosWithSpeed_19();
    AddEntityZSpeedToPos_19();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto LiftableStatueState_Lifted_Thrown_jr_4143;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) return;
  LiftableStatueState_Lifted_Thrown_jr_4143:;
    LiftableStatue_SpawnRubble();
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC50D);
    alu_cp8(gb.regs.a, 0x35);
    if (GET_FLAG_C()) goto LiftableStatueState_Lifted_Thrown_jr_4159;
    alu_cp8(gb.regs.a, 0x3D);
    if (GET_FLAG_C()) { jr_019_4162(); return; };
  LiftableStatueState_Lifted_Thrown_jr_4159:;
    gb.regs.a = gb_read(0xC503);
    alu_cp8(gb.regs.a, 0x35);
    if (GET_FLAG_C()) return;
    alu_cp8(gb.regs.a, 0x3D);
    if (!GET_FLAG_C()) return;
}

void jr_019_4162(void) {
    MarkTriggerAsResolved(); return;
}

void LiftableStatue_RubbleX(void) {
    /* data: db $00, $08, $00, $08, $00, $08 */;
}

void LiftableStatue_RubbleY(void) {
    /* data: db $F8, $F8, $00, $00, $08, $08 */;
}

void LiftableStatue_RubbleSpeedX(void) {
    /* data: db $FC, $05, $FA, $06, $FB, $04 */;
}

void LiftableStatue_RubbleSpeedY(void) {
    /* data: db $FC, $F8, $FE, $FF, $03, $02 */;
}

void LiftableStatue_RubbleSpeedZ(void) {
    /* data: db $18, $14, $13, $16, $12, $14 */;
}

void LiftableStatue_SpawnRubble(void) {
    gb.regs.a = 0;
  LiftableStatue_SpawnRubble_spawnLoop:;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = 0x9D;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto LiftableStatue_SpawnRubble_spawnFailed;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  LiftableStatue_SpawnRubble_jr_4193:;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC1);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x4156;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x415C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4162;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4168;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x416E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto LiftableStatue_SpawnRubble_spawnLoop;
  LiftableStatue_SpawnRubble_spawnFailed:;
    gb.regs.a = 0x29;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    ClearEntityStatus_19(); return;
}

void DungeonWarps(void) {
    /* data: db ROOM_INDOOR_A_TAIL_CAVE_ENTRANCE */;
    /* data: db ROOM_INDOOR_A_TAIL_CAVE_ROLLING_BONES */;
    /* data: db ROOM_INDOOR_A_BOTTLE_GROTTO_ENTRANCE */;
    /* data: db ROOM_INDOOR_A_BOTTLE_GROTTO_HINOX */;
    /* data: db ROOM_INDOOR_A_KEY_CAVERN_DODONGO */;
    /* data: db ROOM_INDOOR_A_KEY_CAVERN_ENTRANCE */;
    /* data: db ROOM_INDOOR_A_ANGLERS_TUNNEL_ENTRANCE */;
    /* data: db ROOM_INDOOR_A_ANGLERS_TUNNEL_CUE_BALL */;
    /* data: db ROOM_INDOOR_A_CATFISHS_MAW_GOHMA */;
    /* data: db ROOM_INDOOR_A_CATFISHS_MAW_ENTRANCE */;
    /* data: db ROOM_INDOOR_A_FACE_SHRINE_SMASHER */;
    /* data: db ROOM_INDOOR_A_FACE_SHRINE_ENTRANCE */;
    /* data: db ROOM_INDOOR_B_EAGLES_TOWER_GRIM_CREEPER */;
    /* data: db ROOM_INDOOR_B_EAGLES_TOWER_ENTRANCE */;
    /* data: db ROOM_INDOOR_B_TURTLE_ROCK_BLAINO */;
    /* data: db ROOM_INDOOR_B_TURTLE_ROCK_ENTRANCE */;
}

void WarpEntityHandler(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_4279(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xCF);
    if (GET_FLAG_Z()) goto WarpEntityHandler_jr_4226;
    alu_cp8(gb.regs.a, 0xDE);
    if (GET_FLAG_Z()) goto WarpEntityHandler_jr_4226;
    alu_cp8(gb.regs.a, 0xCE);
    if (!GET_FLAG_Z()) { label_019_4406(); return; };
  WarpEntityHandler_jr_4226:;
    ReturnIfNonInteractive_19();
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x46);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) return;
    gb.regs.a = 1;
    gb_write(0xD401, gb.regs.a);
    gb.regs.a = 0x1F;
    gb_write(0xD402, gb.regs.a);
    gb.regs.a = 0xF8;
    gb_write(0xD403, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xD404, gb.regs.a);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x48;
    gb_write(0xD405, gb.regs.a);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x45;
    gb_write(0xD416, gb.regs.a);
    gb.regs.a = 6;
    gb_write(0xC11C, gb.regs.a);
    ResetSpinAttack();
    gb_write(0xC198, gb.regs.a);
    gb.regs.a = 0x51;
    gb_write(0xDC73, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xFFF3, gb.regs.a);
    ClearEntityStatus_19(); return;
}

void jr_019_4279(void) {
    gb.regs.a = 1;
    gb_write(0xC19D, gb.regs.a);
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xDC0D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { label_019_42E0(); return; };
    func_019_43A9();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: WarpState0Handler(); return;
        case 0x01: WarpState1Handler(); return;
        case 0x02: WarpState2Handler(); return;
        case 0x03: WarpState3Handler(); return;
    }
}

void WarpState0Handler(void) {
    IncrementEntityState();
    gb.regs.a = 0x1B;
    gb_write(0xD368, gb.regs.a);
    return;
}

void WarpState1Handler(void) {
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { IncrementEntityState(); return; };
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) return;
    IncrementEntityState(); return;
}

void WarpState2Handler(void) {
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_019_42E0(); return; };
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { label_019_42E0(); return; };
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { label_019_42E0(); return; };
    IncrementEntityState();
    gb.regs.a = 0x20;
    gb_write(0xC1C6, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
    gb.regs.a = 0x1C;
    gb_write(0xFFF2, gb.regs.a);
}

void label_019_42E0(void) {
    return;
}

void Data_019_42E1(void) {
    /* data: db $E4, $E4, $E4, $E4, $94, $94, $94, $94, $54, $54, $54, $54, $00, $00, $00, $00 */;
}

void Data_019_42F1(void) {
    /* data: db $00, $03, $01, $02 */;
}

void WarpState3Handler(void) {
    ResetSpinAttack();
    gb_write(0xDC3C, gb.regs.a);
    gb_write(0xDC6F, gb.regs.a);
    gb_write(0xC13E, gb.regs.a);
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC16A, gb.regs.a);
    gb_write(0xC166, gb.regs.a);
    gb_write(0xC1A9, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFF99, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_019_4355(); return; };
    gb.regs.hl = 0xD401;
    gb.regs.a = 1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFF7);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.hl++;
    gb.regs.a = 0x50;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.e = gb.regs.a;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = 0;
    gb.regs.hl = 0x41EF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto WarpState3Handler_jr_433D;
    gb.regs.hl++;
  WarpState3Handler_jr_433D:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD403, gb.regs.a);
    gb.regs.hl = gb_pop16();
    alu_cp8(gb.regs.a, 0x64);
    gb.regs.a = 0x48;
    if (!GET_FLAG_Z()) goto WarpState3Handler_jr_434A;
    gb.regs.a = 0x28;
  WarpState3Handler_jr_434A:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    ClearEntityStatus_19();
    disableMovementInTransition(); return;
}

void jr_019_4355(void) {
    gb.regs.hl = 0xFFA1;
    gb_write(gb.regs.hl, 1);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x42F1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9E, gb.regs.a);
    gb_push16(gb.regs.bc);
    UpdateLinkWalkingAnimation_trampoline();
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto jr_019_4355_jr_4383;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_019_4355_jr_4383;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto jr_019_4355_jr_4383;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_019_4355_jr_4383:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x42E1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    return;
}

void Unknown062SpriteVariants(void) {
  Unknown062SpriteVariants_variant0:;
    /* data: db $1E, $02 */;
    /* data: db $1E, $62 */;
  Unknown062SpriteVariants_variant1:;
    /* data: db $1E, $42 */;
    /* data: db $1E, $22 */;
}

void Data_019_439B(void) {
    /* data: db $F8, $FA */;
}

void Data_019_439D(void) {
    /* data: db $00, $06, $08, $06, $00, $FA, $F8, $FA */;
}

void Data_019_43A5(void) {
    /* data: db $24, $01, $24, $01 */;
}

void func_019_43A9(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x4342;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC1);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_019_43A9_loop_43C5:;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.e = gb.regs.a;
    func_019_43D4();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_019_43A9_loop_43C5;
    return;
}

void func_019_43D4(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x439D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x439B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x43A5;
    RenderActiveEntitySprite();
    CopyEntityPositionToActivePosition(); return;
}

void Data_019_43FA(void) {
    /* data: db $FA, $FC */;
}

void Data_019_43FC(void) {
    /* data: db $00, $04, $06, $04, $00, $FC, $FA, $FC */;
}

void Data_019_4404(void) {
    /* data: db $3E, $00 */;
}

void label_019_4406(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC1);
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFE6, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  label_019_4406_loop_441D:;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.e = gb.regs.a;
    func_019_442C();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto label_019_4406_loop_441D;
    return;
}

void func_019_442C(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x43FC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE5);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x43FA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE6);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x4404;
    RenderActiveEntitySprite(); return;
}

void BoomerangSpriteVariants(void) {
  BoomerangSpriteVariants_variant0:;
    /* data: db $38, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $38, OAM_GBC_PAL_4 | OAMF_PAL1 | OAMF_XFLIP */;
  BoomerangSpriteVariants_variant1:;
    /* data: db $A4, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $FF, $FF */;
  BoomerangSpriteVariants_variant2:;
    /* data: db $38, OAM_GBC_PAL_4 | OAMF_PAL1 | OAMF_YFLIP */;
    /* data: db $38, OAM_GBC_PAL_4 | OAMF_PAL1 | OAMF_YFLIP | OAMF_XFLIP */;
  BoomerangSpriteVariants_variant3:;
    /* data: db $FF, $FF */;
    /* data: db $A4, OAM_GBC_PAL_4 | OAMF_PAL1 | OAMF_XFLIP */;
}

void BoomerangEntityHandler(void) {
    gb.regs.a = 1;
    gb_write(0xC14D, gb.regs.a);
    gb.regs.de = 0x43EF;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_19();
    PlayBoomerangSfx_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto BoomerangEntityHandler_jr_4481;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
  BoomerangEntityHandler_jr_4481:;
    gb.regs.a = 8;
    gb_write(0xC19E, gb.regs.a);
    label_3B7B();
  BoomerangEntityHandler_jr_4489:;
    UpdateEntityPosWithSpeed_19();
    label_3B2E();
    BoomerangDestroyBushIfNeeded();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: BoomerangGoingHandler(); return;
        case 0x01: BoomerangComingHandler(); return;
    }
}

void BoomerangGoingHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BoomerangGoingHandler_skipIncrementState;
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    IncrementEntityState(); return;
  BoomerangGoingHandler_skipIncrementState:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BoomerangGoingHandler_return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, gb.regs.b);
    func_019_45A3();
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
  BoomerangGoingHandler_return:;
    return;
}

void BoomerangComingHandler(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto BoomerangComingHandler_skipUpdateSpeed;
    gb.regs.a = 0x20;
    ApplyVectorTowardsLink_trampoline();
  BoomerangComingHandler_skipUpdateSpeed:;
    label_3B44();
    if (!GET_FLAG_C()) return;
    ClearEntityStatus_19(); return;
}

void BoomerangDestroyBushIfNeeded(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xD3);
    if (GET_FLAG_Z()) goto BoomerangDestroyBushIfNeeded_destroyBush;
    alu_cp8(gb.regs.a, 0x5C);
    if (!GET_FLAG_Z()) return;
  BoomerangDestroyBushIfNeeded_destroyBush:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
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
    return;
}

void Data_019_44FC(void) {
    /* data: db $00, $00, $08, $20, $00, $08, $06, $20, $00, $00, $06, $00, $00, $08, $08, $00 */;
    /* data: db $00, $04, $04, $40, $FF, $FF, $FF, $FF, $00, $04, $04, $00, $FF, $FF, $FF, $FF */;
}

void Data_019_451C(void) {
    /* data: db $00, $00, $FC, $04 */;
}

void Data_019_4520(void) {
    /* data: db $01, $01, $00, $00 */;
}

void SwordBeamEntityHandler(void) {
    gb.regs.hl = 0xC14D;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SwordBeamEntityHandler_jr_4562;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x451C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4520;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sla(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sla(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.a = 0x3B;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState(); return;
  SwordBeamEntityHandler_jr_4562:;
    func_019_45B2();
    ReturnIfNonInteractive_19();
    gb.regs.a = 1;
    gb_write(0xC19E, gb.regs.a);
    label_3B7B();
    UpdateEntityPosWithSpeed_19();
    label_3B2E();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_45A0(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto SwordBeamEntityHandler_ret_459F;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 0x0D;
    AddTranscientVfx();
    gb.regs.hl = 0xC520;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.hl = 0xC590;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  SwordBeamEntityHandler_ret_459F:;
    return;
}

void jr_019_45A0(void) {
    ClearEntityStatus_19();
}

void func_019_45A3(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 5;
    AddTranscientVfx(); return;
}

void func_019_45B2(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x44FC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 2;
    RenderActiveEntitySpritesRect(); return;
}

void GoriyaSpriteVariants(void) {
  GoriyaSpriteVariants_variant0:;
    /* data: db $60, $01 */;
    /* data: db $62, $01 */;
  GoriyaSpriteVariants_variant1:;
    /* data: db $62, $21 */;
    /* data: db $60, $21 */;
  GoriyaSpriteVariants_variant2:;
    /* data: db $64, $01 */;
    /* data: db $66, $01 */;
  GoriyaSpriteVariants_variant3:;
    /* data: db $66, $21 */;
    /* data: db $64, $21 */;
  GoriyaSpriteVariants_variant4:;
    /* data: db $68, $01 */;
    /* data: db $6A, $01 */;
  GoriyaSpriteVariants_variant5:;
    /* data: db $6C, $01 */;
    /* data: db $6E, $01 */;
  GoriyaSpriteVariants_variant6:;
    /* data: db $6A, $21 */;
    /* data: db $68, $21 */;
  GoriyaSpriteVariants_variant7:;
    /* data: db $6E, $21 */;
    /* data: db $6C, $21 */;
}

void GoriyaEntityHandler(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    gb.regs.a = gb_read(0xDC27);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.de = 0x454C;
    RenderActiveEntitySpritesPair();
    SetEntityVariantForDirection_19();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto GoriyaEntityHandler_jr_4618;
    func_019_7E3A();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
  GoriyaEntityHandler_jr_4618:;
    PushLinkOutOfEntity_19();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: GoriyaState0Handler(); return;
        case 0x01: GoriyaState1Handler(); return;
        case 0x02: GoriyaState2Handler(); return;
        case 0x03: GoriyaState3Handler(); return;
    }
}

void GoriyaState0Handler(void) {
    ReturnIfNonInteractive_19();
    gb.regs.e = gb.regs.b;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x26);
    alu_cp8(gb.regs.a, 0x4C);
}

void Data_019_4634(void) {
    func_019_7CFB();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDC25);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto Data_019_4634_jr_4643;
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) { jr_019_4663(); return; };
  Data_019_4634_jr_4643:;
    /* call_open_dialog Dialog221 */;
    IncrementEntityState(); return;
}

void Data_019_454B(void) {
    /* data: db $F3, $51, $67, $28, $F3, $51, $67, $28, $D9, $11, $CE, $10, $17, $14, $08, $10 */;
    /* data: db $D9, $11, $CE, $10, $F3, $51, $67, $28 */;
}

void jr_019_4663(void) {
    /* call_open_dialog Dialog225 */;
    gb.regs.a = gb_read(0xDC25);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4633;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = (0xDD30 + _1_2);
  jr_019_4663_loop_467B:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) goto jr_019_4663_loop_467B;
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 3);
    return;
}

void GoriyaState1Handler(void) {
    ReturnIfNonInteractive_19();
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_46DB(); return; };
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_019_46DB(); return; };
  GoriyaState1Handler_jr_46A2:;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_019_46E1(); return; };
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_019_46E1(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_019_46E1(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_019_46E1(); return; };
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { jr_019_46E1(); return; };
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { jr_019_46E1(); return; };
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_019_46E1(); return; };
    gb_write(0xDC25, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(wInventoryItems_BButtonSlot, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
    return;
}

void jr_019_46DB(void) {
    gb_write(gb.regs.hl, gb.regs.b);
    /* jp_open_dialog Dialog223 */;
}

void jr_019_46E1(void) {
    gb_write(gb.regs.hl, gb.regs.b);
    /* jp_open_dialog Dialog227 */;
}

void GoriyaState3Handler(void) {
    ReturnIfNonInteractive_19();
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_4725(); return; };
    gb.regs.hl = wInventoryItems_BButtonSlot;
    gb.regs.de = 0;
  GoriyaState3Handler_loop_46FB:;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) goto GoriyaState3Handler_jr_4707;
    gb.regs.hl++;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto GoriyaState3Handler_loop_46FB;
  GoriyaState3Handler_jr_4707:;
    gb.regs.a = gb_read(0xDC25);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xDC25, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
    return;
}

void jr_019_4725(void) {
    gb_write(gb.regs.hl, gb.regs.b);
    /* jp_open_dialog Dialog223 */;
}

void Data_019_472B(void) {
    /* data: db $00, $17, $84, $17, $80, $17, $82, $17, $86, $17, $88, $17, $8A, $14, $8C, $14 */;
    /* data: db $98, $17, $90, $17, $92, $17, $96, $17, $8E, $17, $A4, $14 */;
}

void GoriyaState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto GoriyaState2Handler_jr_4755;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  GoriyaState2Handler_jr_4755:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_019_476A(); return; };
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0D);
    /* ld_dialog_low a, Dialog224 */;
    if (GET_FLAG_Z()) goto GoriyaState2Handler_jr_4767;
    /* ld_dialog_low a, Dialog226 */;
  GoriyaState2Handler_jr_4767:;
    OpenDialogInTable2();
}

void jr_019_476A(void) {
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x6C;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    ResetSpinAttack();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x472B;
    RenderActiveEntitySprite();
    CopyEntityPositionToActivePosition(); return;
}

void MaskedMimicGoriyaSpriteVariants(void) {
  MaskedMimicGoriyaSpriteVariants_variant0:;
    /* data: db $6A, $22 */;
    /* data: db $68, $22 */;
  MaskedMimicGoriyaSpriteVariants_variant1:;
    /* data: db $6E, $22 */;
    /* data: db $6C, $22 */;
  MaskedMimicGoriyaSpriteVariants_variant2:;
    /* data: db $68, $02 */;
    /* data: db $6A, $02 */;
  MaskedMimicGoriyaSpriteVariants_variant3:;
    /* data: db $6C, $02 */;
    /* data: db $6E, $02 */;
  MaskedMimicGoriyaSpriteVariants_variant4:;
    /* data: db $64, $02 */;
    /* data: db $66, $02 */;
  MaskedMimicGoriyaSpriteVariants_variant5:;
    /* data: db $66, $22 */;
    /* data: db $64, $22 */;
  MaskedMimicGoriyaSpriteVariants_variant6:;
    /* data: db $60, $02 */;
    /* data: db $62, $02 */;
  MaskedMimicGoriyaSpriteVariants_variant7:;
    /* data: db $62, $22 */;
    /* data: db $60, $22 */;
}

void Data_019_47B6(void) {
    /* data: db $00, $F4, $0C */;
}

void Data_019_47B9(void) {
    /* data: db $00, $0C, $F4 */;
}

void MaskedMimicGoriyaEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1F);
    if (GET_FLAG_Z()) { GoriyaEntityHandler(); return; };
    gb.regs.de = 0x46FB;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_19();
    ApplyRecoilIfNeeded_19();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_SPLASH_IN_WATER);
    func_019_7E3A();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) goto MaskedMimicGoriyaEntityHandler_jr_47E8;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
  MaskedMimicGoriyaEntityHandler_jr_47E8:;
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x47B6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFCB);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x47B9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    UpdateEntityPosWithSpeed_19();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant(); return;
}

void CatfishMawSwimWarpDataLeft(void) {
    /* data: db $02, $11, $C0, $30, $14 */;
}

void CatfishMawSwimWarpDataRight(void) {
    /* data: db $02, $11, $C1, $50, $14 */;
}

void FisherUnderBridgeWarpData(void) {
    /* data: db $02, $0F, $F5, $94, $52 */;
}

void DivableWaterEntityHandler(void) {
    ReturnIfNonInteractive_19();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_019_4869(); return; };
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto DivableWaterEntityHandler_jr_485C;
    gb.regs.a = gb_read(0xC11C);
    gb_write(0xD463, gb.regs.a);
    func_019_4891();
  DivableWaterEntityHandler_jr_485C:;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xC13B, gb.regs.a);
    return;
}

void jr_019_4869(void) {
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_019_4869_ret_4890;
    gb.regs.a = gb_read(0xFF9C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_019_4869_ret_4890;
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto jr_019_4869_ret_4890;
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto jr_019_4869_ret_4890;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC166, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
  jr_019_4869_ret_4890:;
    return;
}

void func_019_4891(void) {
    gb.regs.de = 0x47B1;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xEA);
    if (GET_FLAG_Z()) goto func_019_4891_jr_48A6;
    gb.regs.de = 0x47A7;
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) goto func_019_4891_jr_48A6;
    gb.regs.de = 0x47AC;
  func_019_4891_jr_48A6:;
    gb.regs.hl = 0xD401;
    gb_push16(gb.regs.bc);
    gb.regs.c = 5;
  func_019_4891_loop_48AC:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_019_4891_loop_48AC;
    gb.regs.bc = gb_pop16();
    ClearEntityStatus_19();
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb_write(0xD416, gb.regs.a);
    ApplyMapFadeOutTransition(); return;
}

void DogSpriteVariants(void) {
  DogSpriteVariants_variant0:;
    /* data: db $58, $01 */;
    /* data: db $5A, $01 */;
  DogSpriteVariants_variant1:;
    /* data: db $58, $01 */;
    /* data: db $5C, $01 */;
  DogSpriteVariants_variant2:;
    /* data: db $5A, $21 */;
    /* data: db $58, $21 */;
  DogSpriteVariants_variant3:;
    /* data: db $5C, $21 */;
    /* data: db $58, $21 */;
}

void DogEntityHandler(void) {
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x4C);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto DogEntityHandler_jr_48EE;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xFFF1, gb.regs.a);
  DogEntityHandler_jr_48EE:;
    gb.regs.de = 0x4829;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_19();
    DecrementEntityIgnoreHitsCountdown();
    AddEntityZSpeedToPos_19();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto DogEntityHandler_jr_4914;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  DogEntityHandler_jr_4914:;
    gb.regs.a = gb_read(0xC3C8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_019_4947(); return; };
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xC50F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) goto DogEntityHandler_jr_4931;
    gb.regs.e = alu_inc8(gb.regs.e);
  DogEntityHandler_jr_4931:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto DogEntityHandler_jr_4942;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
  DogEntityHandler_jr_4942:;
    func_019_49FD();
    jr_019_494A(); return;
}

void jr_019_4947(void) {
    label_3B70();
}

void jr_019_494A(void) {
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_019_494A_jr_4963;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto jr_019_494A_jr_4963;
    IncrementEntityState();
    gb.regs.a = 2;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF0, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
  jr_019_494A_jr_4963:;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { jr_019_4980(); return; };
    func_019_7CF0();
    if (!GET_FLAG_C()) { jr_019_4980(); return; };
    gb.regs.a = gb_read(0xC3C8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low a, Dialog020 */;
    if (GET_FLAG_Z()) goto jr_019_494A_jr_497D;
    /* call_open_dialog Dialog196 */;
    jr_019_4980(); return;
  jr_019_494A_jr_497D:;
    OpenDialogInTable0();
}

void jr_019_4980(void) {
    gb.regs.a = gb_read(0xC3C8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: DogState0Handler(); return;
        case 0x01: DogState1Handler(); return;
        case 0x02: DogState2Handler(); return;
        case 0x03: DogState3Handler(); return;
    }
}

void Data_019_4990(void) {
    /* data: db $02, $08, $0C, $08, $FE, $F8, $F4, $F8 */;
}

void DogState0Handler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto DogState0Handler_jr_49D8;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4990;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4990;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
  DogState0Handler_jr_49D8:;
    func_019_49FD(); return;
}

void DogState1Handler(void) {
    UpdateEntityPosWithSpeed_19();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { func_019_49FD(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto DogState1Handler_jr_49F2;
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  DogState1Handler_jr_49F2:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void func_019_49FD(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void DogState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto DogState2Handler_jr_4A23;
    IncrementEntityState();
    gb.regs.a = 0x24;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    EntityLinkPositionXDifference_19();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl, gb.regs.a);
  DogState2Handler_jr_4A23:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void DogState3Handler(void) {
    UpdateEntityPosWithSpeed_19();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x52);
    label_3B44();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x92);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto DogState3Handler_ret_4A4F;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
  DogState3Handler_ret_4A4F:;
    return;
}

void Data_019_4A50(void) {
    /* data: db $80, $26, $95, $63, $20, $3A, $75, $6B, $A0, $51, $35, $73, $08, $7D, $18, $7F */;
    /* data: db $AD, $78, $F9, $7E, $50, $5C, $DA, $76, $12, $40, $BB, $6A, $15, $30, $BC, $66 */;
    /* data: db $17, $14, $BD, $5E, $D7, $04, $FD, $56, $37, $05, $1D, $57, $97, $09, $3D, $5B */;
    /* data: db $F5, $09, $5C, $5B, $10, $0A, $5A, $5B, $4B, $06, $79, $57, $A0, $02, $95, $57 */;
}

void func_019_4A90(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDE7D);
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x3C);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4A50;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = (0xDD28 + _2_2);
  func_019_4A90_loop_4AAD:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_019_4A90_loop_4AAD;
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
    return;
}

void Data_019_4ABB(void) {
    /* data: db $60, $78, $78, $60, $40, $28, $28, $40 */;
}

void Data_019_4AC3(void) {
    /* data: db $20, $38, $58, $78, $78, $58, $38, $20 */;
}

void EggSongEventEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_019_4BCC(); return; };
    gb.regs.a = gb.regs.c;
    gb_write(0xD461, gb.regs.a);
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: EggSongEventState0Handler(); return;
        case 0x01: EggSongEventState1Handler(); return;
        case 0x02: EggSongEventState2Handler(); return;
        case 0x03: EggSongEventState3Handler(); return;
        case 0x04: EggSongEventState4Handler(); return;
    }
}

void EggSongEventState0Handler(void) {
    gb.regs.a = gb_read(0xDBF5);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDBF6);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC166);
    alu_cp8(gb.regs.a, 1);
  EggSongEventState0Handler_jr_4AFD:;
    if (!GET_FLAG_Z()) return;
    label_27F2();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC5A3, gb.regs.a);
    IncrementEntityState(); return;
}

void EggSongEventState1Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    IncrementEntityState(); return;
}

void EggSongEventState2Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto EggSongEventState2Handler_jr_4B36;
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState(); return;
  EggSongEventState2Handler_jr_4B36:;
    func_019_4B6E();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    return;
}

void EggSongEventState3Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.e = 0x41;
    gb.regs.hl = 0xDC0F;
  EggSongEventState3Handler_loop_4B4C:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto EggSongEventState3Handler_jr_4B57;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x47);
    if (!GET_FLAG_Z()) goto EggSongEventState3Handler_loop_4B4C;
  EggSongEventState3Handler_jr_4B57:;
    gb.regs.a = gb.regs.e;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xD465, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xC166, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD490, gb.regs.a);
    gb_write(0xD491, gb.regs.a);
    IncrementEntityState(); return;
}

void EggSongEventState4Handler(void) {
    return;
}

void func_019_4B6E(void) {
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xDC0D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto func_019_4B6E_ret_4BAB;
    gb.regs.a = 0xDE;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb.regs.a = 0x2B;
    gb_write(0xFFF4, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x4ABB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4AC3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.bc = gb_pop16();
  func_019_4B6E_ret_4BAB:;
    return;
}

void Unknown063SpriteVariants(void) {
  Unknown063SpriteVariants_variant0:;
    /* data: db $50, $06 */;
    /* data: db $52, $06 */;
  Unknown063SpriteVariants_variant1:;
    /* data: db $54, $06 */;
    /* data: db $56, $06 */;
  Unknown063SpriteVariants_variant2:;
    /* data: db $58, $06 */;
    /* data: db $5A, $06 */;
  Unknown063SpriteVariants_variant3:;
    /* data: db $5C, $06 */;
    /* data: db $5E, $06 */;
  Unknown063SpriteVariants_variant4:;
    /* data: db $60, $06 */;
    /* data: db $62, $06 */;
  Unknown063SpriteVariants_variant5:;
    /* data: db $64, $06 */;
    /* data: db $66, $06 */;
  Unknown063SpriteVariants_variant6:;
    /* data: db $68, $06 */;
    /* data: db $6A, $06 */;
  Unknown063SpriteVariants_variant7:;
    /* data: db $6C, $06 */;
    /* data: db $6E, $06 */;
}

void label_019_4BCC(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_019_4CFF(); return; };
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_4C21(); return; };
    func_019_4A90();
    gb.regs.a = gb_read(0xC5A3);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto label_019_4BCC_jr_4BF7;
    gb.regs.hl = 0xFFF1;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) return;
    gb.regs.de = 0x4AFC;
    RenderActiveEntitySpritesPair(); return;
  label_019_4BCC_jr_4BF7:;
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    gb.regs.e = 8;
    gb.regs.hl = 0xDC0D;
  label_019_4BCC_loop_4C03:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto label_019_4BCC_jr_4C1A;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto label_019_4BCC_loop_4C03;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    IncrementEntityState(); return;
  label_019_4BCC_jr_4C1A:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC5A3, gb.regs.a);
    ClearEntityStatus_19(); return;
}

void jr_019_4C21(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { label_019_4CEA(); return; };
    gb_write(0xC155, gb.regs.a);
    gb_write(0xC5A3, gb.regs.a);
    gb.regs.hl = 0xD7EB;
    gb.regs.a = 0xC1;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl = 0xD7FB;
    gb.regs.a = 0xCB;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.a = 0x50;
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xFFCD, gb.regs.a);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_019_4C21_jr_4C88;
    gb_push16(gb.regs.bc);
    gb.regs.a = 0xC1;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 0x19;
    func_91D();
    gb.regs.a = gb_read(0xFFCF);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.l = gb.regs.a;
    gb_push16(gb.regs.hl);
    gb.regs.de = 0x40;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb.regs.h;
    gb_write(0xFFCF, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb_write(0xFFD0, gb.regs.a);
    gb.regs.a = 0xCB;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 0x19;
    func_91D();
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb.regs.h;
    gb_write(0xFFCF, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb_write(0xFFD0, gb.regs.a);
    gb.regs.bc = gb_pop16();
  jr_019_4C21_jr_4C88:;
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 7);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x83;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x83;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    label_27F2();
    gb.regs.a = 0x23;
    gb_write(0xFFF2, gb.regs.a);
    func_019_4D45();
    PlayBombExplosionSfx();
    gb.regs.de = (0xDD00 + _2_2);
    gb.regs.hl = 0xFF70;
  jr_019_4C21_loop_4CD6:;
    gb_write(gb.regs.hl, 2);
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_019_4C21_loop_4CD6;
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
    ClearEntityStatus_19(); return;
}

void label_019_4CEA(void) {
    gb.regs.e = 1;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto label_019_4CEA_jr_4CF2;
    gb.regs.e = 0xFF;
  label_019_4CEA_jr_4CF2:;
    gb.regs.a = gb.regs.e;
    gb_write(0xC155, gb.regs.a);
    return;
}

void Data_019_4CF7(void) {
    /* data: db $16, $00, $16, $20, $16, $60, $16, $40 */;
}

void label_019_4CFF(void) {
    gb.regs.de = 0x4CF7;
    RenderActiveEntitySprite();
    UpdateEntityPosWithSpeed_19();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    GetEntityTransitionCountdown();
    gb_write(0xC167, gb.regs.a);
    if (GET_FLAG_Z()) goto label_019_4CFF_jr_4D1A;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    return;
  label_019_4CFF_jr_4D1A:;
    gb.regs.hl = 0xD8BB;
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF8, gb.regs.a);
    ClearEntityStatus_19(); return;
}

void Data_019_4D25(void) {
    /* data: db $00, $04, $08, $00, $08, $00, $04, $08 */;
}

void Data_019_4D2D(void) {
    /* data: db $00, $00, $00, $04, $04, $08, $08, $08 */;
}

void Data_019_4D35(void) {
    /* data: db $F0, $FC, $10, $F0, $10, $F0, $04, $10 */;
}

void Data_019_4D3D(void) {
    /* data: db $F0, $E8, $F0, $F8, $F8, $08, $0C, $08 */;
}

void func_019_4D45(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_019_4D45_loop_4D46:;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = 0xDE;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x4D25;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x54);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4D2D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x3C);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4D35;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4D3D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto func_019_4D45_loop_4D46;
    return;
}

void label_019_4D9B(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_019_4F30(); return; };
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_019_4DBC(); return;
        case 0x01: func_019_4E00(); return;
        case 0x02: func_019_4E09(); return;
        case 0x03: func_019_4E43(); return;
        case 0x04: func_019_4E74(); return;
    }
}

void Unknown064SpriteVariants(void) {
  Unknown064SpriteVariants_variant0:;
    /* data: db $60, $07 */;
    /* data: db $62, $07 */;
}

void func_019_4DBC(void) {
    gb.regs.a = gb.regs.c;
    gb_write(0xD481, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x50);
    func_019_4E00();
    gb.regs.a = gb_read(0xDBF5);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC166);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDBF6);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0xDC;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x94);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xD8);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC1);
    gb.regs.a = 0x55;
    gb_write(0xD368, gb.regs.a);
    IncrementEntityState(); return;
    return;
}

void func_019_4E00(void) {
    gb.regs.de = 0x4CEC;
    RenderActiveEntitySpritesPair();
    PushLinkOutOfEntity_19(); return;
}

void func_019_4E09(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    func_019_4E00();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_019_4E09_ret_4E36;
    gb_write(gb.regs.hl, 0xA0);
    IncrementEntityState();
    gb.regs.a = 2;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
  func_019_4E09_ret_4E36:;
    return;
}

void Data_019_4E37(void) {
    /* data: db $F0, $00, $64, $03, $00, $00, $66, $03, $00, $08, $68, $03 */;
}

void func_019_4E43(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.hl = 0x4E37;
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { label_019_4E62(); return; };
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_Z()) goto func_019_4E43_ret_4E61;
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
  func_019_4E43_ret_4E61:;
    return;
}

void label_019_4E62(void) {
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x10;
    gb_write(0xFF99, gb.regs.a);
    /* call_open_dialog Dialog16D */;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    IncrementEntityState(); return;
}

void func_019_4E74(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.hl = 0x4E37;
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0xD5;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDC23, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    func_019_7F0E();
    ClearEntityStatus_19(); return;
}

void Data_019_4EAA(void) {
    /* data: db $6A, $06, $6C, $06, $6E, $06 */;
}

void Data_019_4EB0(void) {
    /* data: db $02, $02, $01, $01 */;
}

void Data_019_4EB4(void) {
    /* data: db $04, $04, $04, $04, $04, $04, $04, $04, $05, $06, $07, $08, $07, $06, $05, $04 */;
    /* data: db $04, $04, $03, $02, $01, $00, $01, $02, $03, $04, $05, $06, $07, $08, $08, $08 */;
    /* data: db $09, $0A, $0B, $0C, $0C, $0C, $0B, $0A, $09, $08, $07, $06, $05, $04, $05, $06 */;
    /* data: db $07, $08, $09, $0A, $0B, $0B, $0A, $09, $08, $07, $06, $05, $04, $03, $02, $01 */;
    /* data: db $00, $01, $02, $03, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04 */;
    /* data: db $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04 */;
    /* data: db $04, $04, $04, $04, $04, $04, $04, $04 */;
}

void Data_019_4F1C(void) {
    /* data: db $00, $03, $06, $07 */;
}

void Data_019_4F20(void) {
    /* data: db $08, $07, $06, $03, $00, $FD, $FA, $F9, $F8, $F9, $FA, $FD, $00, $03, $06, $07 */;
}

void label_019_4F30(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.de = 0x4EAA;
    RenderActiveEntitySprite();
    ReturnIfNonInteractive_19();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto label_019_4F30_jr_4F5A;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4EB0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
  label_019_4F30_jr_4F5A:;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto label_019_4F30_jr_4F8F;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x49);
    if (!GET_FLAG_Z()) goto label_019_4F30_jr_4F8F;
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x80);
    ClearEntityStatus_19(); return;
  label_019_4F30_jr_4F8F:;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4EB4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0x4F20;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4F1C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    UpdateEntityPosWithSpeed_19();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto label_019_4F30_ret_4FDA;
    gb.regs.a = 0xDC;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x1F);
  label_019_4F30_ret_4FDA:;
    return;
}

void Unknown065SpriteVariants(void) {
  Unknown065SpriteVariants_variant0:;
    /* data: db $60, $00 */;
    /* data: db $62, $00 */;
  Unknown065SpriteVariants_variant1:;
    /* data: db $64, $00 */;
    /* data: db $66, $00 */;
  Unknown065SpriteVariants_variant2:;
    /* data: db $62, $20 */;
    /* data: db $60, $20 */;
  Unknown065SpriteVariants_variant3:;
    /* data: db $66, $20 */;
    /* data: db $64, $20 */;
  Unknown065SpriteVariants_variant4:;
    /* data: db $68, $00 */;
    /* data: db $6A, $00 */;
  Unknown065SpriteVariants_variant5:;
    /* data: db $6C, $00 */;
    /* data: db $6E, $00 */;
  Unknown065SpriteVariants_variant6:;
    /* data: db $6A, $20 */;
    /* data: db $68, $20 */;
  Unknown065SpriteVariants_variant7:;
    /* data: db $6E, $20 */;
    /* data: db $6C, $20 */;
}

void Unknown066SpriteVariants(void) {
  Unknown066SpriteVariants_variant0:;
    /* data: db $70, $03 */;
    /* data: db $72, $03 */;
  Unknown066SpriteVariants_variant1:;
    /* data: db $74, $03 */;
    /* data: db $76, $03 */;
  Unknown066SpriteVariants_variant2:;
    /* data: db $72, $23 */;
    /* data: db $70, $23 */;
  Unknown066SpriteVariants_variant3:;
    /* data: db $76, $23 */;
    /* data: db $74, $23 */;
}

void Data_019_500B(void) {
    /* data: db $F2, $0E */;
}

void func_019_500D(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xD2);
    gb.regs.de = 0x4F00;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_019_500D_jr_5027;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x57;
    gb_write(0xD368, gb.regs.a);
  func_019_500D_jr_5027:;
    gb.regs.a = gb_read(0xDC23);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_019_500D_jr_5034;
    gb.regs.a = gb_read(0xDC13);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_019_50C4(); return; };
  func_019_500D_jr_5034:;
    ReturnIfNonInteractive_19();
    PushLinkOutOfEntity_19();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    if (!GET_FLAG_Z()) goto func_019_500D_jr_504A;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  func_019_500D_jr_504A:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.e = 0;
  func_019_500D_jr_504E:;
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto func_019_500D_jr_5053;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_019_500D_jr_5053:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
  func_019_500D_jr_505E:;
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    alu_cp8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_019_5093(); return; };
    gb.regs.a = 8;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { ret_019_5092(); return; };
    gb_push16(gb.regs.bc);
  func_019_500D_jr_506C:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.c = alu_srl(gb.regs.c);
    gb.regs.hl = 0x500B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
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
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.bc = gb_pop16();
}

void ret_019_5092(void) {
    return;
}

void jr_019_5093(void) {
    func_019_7CF0();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDC23);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low a, Dialog18B */;
    if (GET_FLAG_Z()) goto jr_019_5093_jr_50A1;
    /* ld_dialog_low a, Dialog18C */;
  jr_019_5093_jr_50A1:;
    OpenDialogInTable1(); return;
}

void Data_019_50A4(void) {
    /* data: db $10, $11, $12, $13, $13, $12, $11, $10 */;
}

void Data_019_50AC(void) {
    /* data: db $00, $09, $02, $09, $00, $F7, $FE, $F7 */;
}

void Data_019_50B4(void) {
    /* data: db $0C, $09, $0A, $F7, $F4, $F7, $F6, $09 */;
}

void Data_019_50BC(void) {
    /* data: db $03, $01, $00, $00, $00, $00, $01, $03 */;
}

void label_019_50C4(void) {
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_019_50C4_jr_50D2;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState();
  label_019_50C4_jr_50D2:;
    gb.regs.e = 0;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto label_019_50C4_jr_50DF;
    gb.regs.e = 2;
  label_019_50C4_jr_50DF:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x50A4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 3);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    gb.regs.a = 4;
    if (!GET_FLAG_Z()) goto label_019_50C4_jr_5107;
    gb.regs.a = 5;
  label_019_50C4_jr_5107:;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(4, gb_read(gb.regs.hl)));
    gb.regs.de = 0x4F20;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
    ReturnIfNonInteractive_19();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto label_019_50C4_jr_5158;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto label_019_50C4_jr_5158;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x50B4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x50AC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  label_019_50C4_jr_5158:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x50BC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) UpdateEntityPosWithSpeed_19();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto label_019_50C4_jr_5181;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  label_019_50C4_jr_5181:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto label_019_50C4_jr_5192;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  label_019_50C4_jr_5192:;
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_C()) return;
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) return;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x80);
    /* jp_open_dialog Dialog18D */;
}

void Data_019_51AD(void) {
    /* data: db $F0, $00, $78, $07, $F0, $08, $7A, $07, $00, $00, $7C, $07, $00, $08, $7E, $07 */;
}

void FlyingRoosterEventsEntityHandler(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FlyingRoosterEventsEntityHandler_jr_51D2;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xE4);
    if (GET_FLAG_Z()) { label_019_4D9B(); return; };
    alu_cp8(gb.regs.a, 0xF4);
    if (GET_FLAG_Z()) { label_019_4D9B(); return; };
    func_019_500D(); return;
  FlyingRoosterEventsEntityHandler_jr_51D2:;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: FlyingRoosterState0Handler(); return;
        case 0x01: FlyingRoosterState1Handler(); return;
    }
}

void FlyingRoosterState0Handler(void) {
    ReturnIfNonInteractive_19();
    gb.regs.a = gb_read(0xDBEF);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) return;
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) { label_019_52AB(); return; };
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { label_019_52AB(); return; };
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_019_52AB(); return; };
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { label_019_52AB(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xD7FB;
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xD80B;
    gb_write(gb.regs.hl, 0xC6);
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.a = 0x50;
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFFCD, gb.regs.a);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FlyingRoosterState0Handler_jr_5267;
    gb_push16(gb.regs.bc);
    gb.regs.a = 0x0C;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 0x19;
    func_91D();
    gb.regs.a = gb_read(0xFFCF);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.l = gb.regs.a;
    gb_push16(gb.regs.hl);
    gb.regs.de = 0x40;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb.regs.h;
    gb_write(0xFFCF, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb_write(0xFFD0, gb.regs.a);
    gb.regs.a = 0xC6;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 0x19;
    func_91D();
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb.regs.h;
    gb_write(0xFFCF, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb_write(0xFFD0, gb.regs.a);
    gb.regs.bc = gb_pop16();
  FlyingRoosterState0Handler_jr_5267:;
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x0E);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x83;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x68;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x77;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x83;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x69;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x4B;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x11;
    gb_write(0xFFF4, gb.regs.a);
    IncrementEntityState();
    FlyingRoosterState1Handler(); return;
}

void label_019_52AB(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void FlyingRoosterState1Handler(void) {
    ReturnIfNonInteractive_19();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.hl = 0x51AD;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { label_019_5363(); return; };
    gb_write(0xC167, gb.regs.a);
    gb.regs.hl = 0xD7EB;
    gb_write(gb.regs.hl, 0x91);
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl = 0xD7FB;
    gb_write(gb.regs.hl, 0x5E);
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.a = 0x50;
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xFFCD, gb.regs.a);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FlyingRoosterState1Handler_jr_531E;
    gb_push16(gb.regs.bc);
    gb.regs.a = 0x91;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 0x19;
    func_91D();
    gb.regs.a = gb_read(0xFFCF);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.l = gb.regs.a;
    gb_push16(gb.regs.hl);
    gb.regs.de = 0x40;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb.regs.h;
    gb_write(0xFFCF, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb_write(0xFFD0, gb.regs.a);
    gb.regs.a = 0x5E;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 0x19;
    func_91D();
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb.regs.h;
    gb_write(0xFFCF, gb.regs.a);
    gb.regs.a = gb.regs.l;
    gb_write(0xFFD0, gb.regs.a);
    gb.regs.bc = gb_pop16();
  FlyingRoosterState1Handler_jr_531E:;
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x0E);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x83;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x12;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x83;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x6C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x6D;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x13;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x23;
    gb_write(0xFFF2, gb.regs.a);
    func_019_7F0E();
    ClearEntityStatus_19(); return;
}

void label_019_5363(void) {
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFC);
    UpdateEntityYPosWithSpeed_19(); return;
}

void GiantBubbleSpriteRect(void) {
    /* data: db $F8, $F8, $60, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $F8, $00, $62, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $F8, $08, $62, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F8, $10, $60, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $F8, $60, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $08, $00, $62, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $08, $08, $62, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
    /* data: db $08, $10, $60, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
}

void GiantBubbleTilesOffsets(void) {
    /* data: db $00, $04, $08, $04 */;
}

void GiantBubbleEntityHandler(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5292;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF5, gb.regs.a);
    gb.regs.hl = 0x5272;
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    ReturnIfNonInteractive_19();
    label_3B44();
    UpdateEntityPosWithSpeed_19();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto GiantBubbleEntityHandler_horizontalCollisionEnd;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  GiantBubbleEntityHandler_horizontalCollisionEnd:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto GiantBubbleEntityHandler_verticalCollisionEnd;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  GiantBubbleEntityHandler_verticalCollisionEnd:;
    return;
}

void PodobooSpriteVariants(void) {
  PodobooSpriteVariants_variant0:;
    /* data: db $7A, $42 */;
    /* data: db $7A, $62 */;
  PodobooSpriteVariants_variant1:;
    /* data: db $7A, $54 */;
    /* data: db $7A, $74 */;
  PodobooSpriteVariants_variant2:;
    /* data: db $7A, $02 */;
    /* data: db $7A, $22 */;
  PodobooSpriteVariants_variant3:;
    /* data: db $7A, $14 */;
    /* data: db $7A, $34 */;
}

void PodobooEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_019_54FD(); return; };
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: PodobooState0Handler(); return;
        case 0x01: PodobooState1Handler(); return;
        case 0x02: PodobooState2Handler(); return;
    }
}

void PodobooState0Handler(void) {
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void Data_019_5410(void) {
    /* data: db $FF, $01 */;
}

void Data_019_5412(void) {
    /* data: db $FD, $03 */;
}

void Data_019_5414(void) {
    /* data: db $F4, $F4 */;
}

void PodobooState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_019_546E(); return; };
    gb.regs.a = gb_read(0xC5A1);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) return;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xD0);
    IncrementEntityState();
}

void func_019_542A(void) {
    gb.regs.a = 1;
  func_019_542A_loop_542C:;
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.a = 0xDA;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x5410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5412;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5414;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto func_019_542A_loop_542C;
    return;
}

void ret_019_546E(void) {
    return;
}

void PodobooState2Handler(void) {
    gb.regs.hl = 0xC5A0;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.de = 0x52ED;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_19();
    label_3B44();
    UpdateEntityYPosWithSpeed_19();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.e = 0;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto PodobooState2Handler_jr_5490;
    gb.regs.e = 2;
  PodobooState2Handler_jr_5490:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x70);
    if (GET_FLAG_C()) goto PodobooState2Handler_jr_54AC;
    gb_write(gb.regs.hl, 0x70);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    func_019_542A();
  PodobooState2Handler_jr_54AC:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0xDA;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
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
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 4);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void Unknown067SpriteVariants(void) {
  Unknown067SpriteVariants_variant0:;
    /* data: db $7C, $42 */;
    /* data: db $7C, $62 */;
  Unknown067SpriteVariants_variant1:;
    /* data: db $7C, $54 */;
    /* data: db $7C, $74 */;
  Unknown067SpriteVariants_variant2:;
    /* data: db $7E, $42 */;
    /* data: db $7E, $62 */;
  Unknown067SpriteVariants_variant3:;
    /* data: db $7E, $54 */;
    /* data: db $7E, $74 */;
  Unknown067SpriteVariants_variant4:;
    /* data: db $7C, $02 */;
    /* data: db $7C, $22 */;
  Unknown067SpriteVariants_variant5:;
    /* data: db $7C, $14 */;
    /* data: db $7C, $34 */;
}

void Unknown068SpriteVariants(void) {
  Unknown068SpriteVariants_variant0:;
    /* data: db $7E, $02 */;
    /* data: db $7E, $22 */;
  Unknown068SpriteVariants_variant1:;
    /* data: db $7E, $14 */;
    /* data: db $7E, $34 */;
}

void label_019_54FD(void) {
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_019_552D(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    alu_rra();
    if (GET_FLAG_C()) goto label_019_54FD_jr_5519;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x53EA;
    RenderActiveEntitySpritesPair();
  label_019_54FD_jr_5519:;
    ReturnIfNonInteractive_19();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto label_019_54FD_ret_552C;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  label_019_54FD_ret_552C:;
    return;
}

void jr_019_552D(void) {
    gb.regs.de = 0x5402;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_19();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) return;
    ClearEntityStatus_19(); return;
}

void Data_019_554B(void) {
    /* data: db $00, $00, $50, $02, $00, $08, $52, $02, $00, $10, $52, $22, $00, $18, $50, $22 */;
    /* data: db $10, $00, $54, $02, $10, $08, $56, $02, $10, $10, $56, $22, $10, $18, $54, $22 */;
}

void Data_019_556B(void) {
    /* data: db $00, $00, $50, $03, $00, $08, $52, $03, $00, $10, $52, $23, $00, $18, $50, $23 */;
    /* data: db $10, $00, $54, $03, $10, $08, $56, $03, $10, $10, $56, $23, $10, $18, $54, $23 */;
}

void ThwompRammableEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0;
    if (GET_FLAG_Z()) goto ThwompRammableEntityHandler_jr_5594;
    gb.regs.a = 8;
  ThwompRammableEntityHandler_jr_5594:;
    gb_write(0xFFF5, gb.regs.a);
    gb.regs.hl = 0x554B;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ThwompRammableEntityHandler_jr_55A1;
    gb.regs.hl = 0x556B;
  ThwompRammableEntityHandler_jr_55A1:;
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    ReturnIfNonInteractive_19();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: ThwompRammableState0Handler(); return;
        case 0x01: ThwompRammableState1Handler(); return;
        case 0x02: ThwompRammableState2Handler(); return;
    }
}

void ThwompRammableState0Handler(void) {
    PushLinkOutOfEntity_19();
    if (!GET_FLAG_C()) return;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    ResetSpinAttack();
  ThwompRammableState0Handler_jr_55BE:;
    gb.regs.a = gb_read(0xFF9A);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = 0xE8;
  ThwompRammableState0Handler_jr_55CA:;
    gb_write(0xFF9B, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 1;
    SetEntitySpriteVariant();
    gb.regs.a = 0x0B;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState(); return;
}

void ThwompRammableState1Handler(void) {
    PushLinkOutOfEntity_19();
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ThwompRammableState1Handler_jr_55EC;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 8);
  ThwompRammableState1Handler_jr_55EC:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    UpdateEntityYPosWithSpeed_19();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_C()) goto ThwompRammableState1Handler_jr_55FD;
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
  ThwompRammableState1Handler_jr_55FD:;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFEF, gb.regs.a);
  ThwompRammableState1Handler_jr_560B:;
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFEF, gb.regs.a);
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    PlayBombExplosionSfx();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = 0x30;
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xC158, gb.regs.a);
    IncrementEntityState(); return;
}

void ThwompRammableState2Handler(void) {
    func_019_58A2(); return;
}

void Data_019_563B(void) {
    /* data: db $00, $00, $01, $01, $01, $02, $02, $02, $00, $00, $0F, $0F, $0F, $0E, $0E, $0E */;
    /* data: db $08, $08, $07, $07, $07, $06, $06, $06, $08, $08, $09, $09, $09, $0A, $0A, $0A */;
}

void Data_019_565B(void) {
    /* data: db $04, $04, $03, $03, $03, $02, $02, $02, $0C, $0C, $0D, $0D, $0D, $0E, $0E, $0E */;
    /* data: db $04, $04, $05, $05, $05, $06, $06, $06, $0C, $0C, $0B, $0B, $0B, $0A, $0A, $0A */;
}

void func_019_567B(void) {
    gb.regs.a = gb_read(0xFFD7);
    alu_rlca();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFD8);
    alu_rlca();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x18);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xFFD8);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_019_567B_jr_5696;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_019_567B_jr_5696:;
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFD7);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_019_567B_jr_569F;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_019_567B_jr_569F:;
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto func_019_567B_jr_56AF;
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.h);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x563B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    return;
  func_019_567B_jr_56AF:;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.h);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x565B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    return;
}

void ThwimpSpriteVariants(void) {
  ThwimpSpriteVariants_variant0:;
    /* data: db $5A, $03 */;
    /* data: db $5A, $23 */;
  ThwimpSpriteVariants_variant1:;
    /* data: db $58, $02 */;
    /* data: db $58, $22 */;
}

void ThwimpEntityHandler(void) {
    gb.regs.de = 0x55C0;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_19();
    DecrementEntityIgnoreHitsCountdown();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: ThwimpState0Handler(); return;
        case 0x01: ThwimpState1Handler(); return;
        case 0x02: ThwimpState2Handler(); return;
        case 0x03: ThwimpState3Handler(); return;
    }
}

void ThwimpState0Handler(void) {
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
}

void ThwimpState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    EntityLinkPositionXDifference_19();
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x28);
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) return;
    gb.regs.a = 1;
    SetEntitySpriteVariant();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) return;
    ClearEntitySpeed();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
    IncrementEntityState(); return;
}

void ThwimpState2Handler(void) {
    gb.regs.a = 1;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ThwimpState2Handler_jr_5721;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 8);
  ThwimpState2Handler_jr_5721:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    UpdateEntityYPosWithSpeed_19();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_C()) goto ThwimpState2Handler_jr_5732;
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
  ThwimpState2Handler_jr_5732:;
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState(); return;
}

void ThwimpState3Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ThwimpState3Handler_jr_575F;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    return;
  ThwimpState3Handler_jr_575F:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF8);
    UpdateEntityYPosWithSpeed_19(); return;
}

void Data_019_5768(void) {
    /* data: db $00, $00, $70, $07, $00, $08, $72, $07, $00, $10, $72, $27, $00, $18, $70, $27 */;
    /* data: db $10, $00, $74, $07, $10, $08, $76, $07, $10, $10, $76, $27, $10, $18, $74, $27 */;
}

void ThwompSpriteVariants(void) {
  ThwompSpriteVariants_variant0:;
    /* data: db $FF, $07 */;
    /* data: db $FF, $07 */;
  ThwompSpriteVariants_variant1:;
    /* data: db $6E, $07 */;
    /* data: db $7E, $07 */;
  ThwompSpriteVariants_variant2:;
    /* data: db $7A, $07 */;
    /* data: db $7A, $27 */;
  ThwompSpriteVariants_variant3:;
    /* data: db $7E, $27 */;
    /* data: db $6E, $27 */;
  ThwompSpriteVariants_variant4:;
    /* data: db $7E, $27 */;
    /* data: db $7C, $27 */;
  ThwompSpriteVariants_variant5:;
    /* data: db $7E, $27 */;
    /* data: db $6C, $27 */;
  ThwompSpriteVariants_variant6:;
    /* data: db $78, $07 */;
    /* data: db $78, $27 */;
  ThwompSpriteVariants_variant7:;
    /* data: db $6C, $07 */;
    /* data: db $7E, $07 */;
  ThwompSpriteVariants_variant8:;
    /* data: db $7C, $07 */;
    /* data: db $7E, $07 */;
}

void Data_019_57AC(void) {
    /* data: db $04, $05, $06, $07, $08, $01, $02, $03 */;
}

void ThwompEntityHandler(void) {
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.de = 0x5689;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
    gb.regs.hl = 0x5768;
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 6;
    func_015_7964_trampoline();
    ReturnIfNonInteractive_19();
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    func_019_58A2();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: ThwompState0Handler(); return;
        case 0x01: ThwompState1Handler(); return;
        case 0x02: ThwompState2Handler(); return;
        case 0x03: ThwompState3Handler(); return;
    }
}

void ThwompState0Handler(void) {
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
}

void ThwompState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
  ThwompState1Handler_jr_57FB:;
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x28);
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) goto ThwompState1Handler_jr_581D;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto ThwompState1Handler_jr_581D;
    ClearEntitySpeed();
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0;
    SetEntitySpriteVariant();
    IncrementEntityState(); return;
  ThwompState1Handler_jr_581D:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x1F;
    GetVectorTowardsLink_trampoline();
    func_019_567B();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x57AC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void ThwompState2Handler(void) {
    UpdateEntityYPosWithSpeed_19();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_C()) goto ThwompState2Handler_jr_5846;
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
  ThwompState2Handler_jr_5846:;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFEF, gb.regs.a);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFEF, gb.regs.a);
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    PlayBombExplosionSfx();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = 0x30;
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xC158, gb.regs.a);
    IncrementEntityState(); return;
}

void ThwompState3Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ThwompState3Handler_jr_5899;
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    return;
  ThwompState3Handler_jr_5899:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF8);
    UpdateEntityYPosWithSpeed_19(); return;
}

void func_019_58A2(void) {
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) return;
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_019_58A2_jr_58C0;
    HurtBySpikes_trampoline();
    gb.regs.a = 0x10;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFF9A, gb.regs.a);
    return;
  func_019_58A2_jr_58C0:;
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_019_58A2_ret_58D8;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC147, gb.regs.a);
  func_019_58A2_ret_58D8:;
    return;
}

void SideViewPotSpriteVariants(void) {
  SideViewPotSpriteVariants_variant0:;
    /* data: db $5E, $06 */;
    /* data: db $5E, $26 */;
}

void SideViewPotEntityHandler(void) {
    gb.regs.de = 0x57C0;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_19();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: SideViewPotState0Handler(); return;
        case 0x01: SideViewPotState1And2Handler(); return;
        case 0x02: SideViewPotState1And2Handler(); return;
    }
}

void SideViewPotState0Handler(void) {
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) { jr_019_5922(); return; };
    EntityLinkPositionYDifference_19();
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto SideViewPotState0Handler_jr_5901;
    func_019_599B();
  SideViewPotState0Handler_jr_5901:;
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_019_5922(); return; };
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) { jr_019_5922(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC147, gb.regs.a);
}

void jr_019_5922(void) {
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_C()) return;
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_019_5922_noBraceletB;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_019_5950(); return; };
    return;
  jr_019_5922_noBraceletB:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) return;
}

void jr_019_5950(void) {
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC3CF, gb.regs.a);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 7);
    gb.regs.hl = 0xC490;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 2);
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    gb.regs.a = gb_read(0xFF9E);
    gb_write(0xC15D, gb.regs.a);
    return;
}

void SideViewPotState1And2Handler(void) {
    UpdateEntityPosWithSpeed_19();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto SideViewPotState1And2Handler_jr_5989;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) { jr_019_598B(); return; };
  SideViewPotState1And2Handler_jr_5989:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void jr_019_598B(void) {
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    SmashRock_trampoline();
    ClearEntityStatus_19(); return;
}

void func_019_599B(void) {
    ResetPegasusBoots();
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_59B7(); return; };
    gb.regs.a = 2;
    gb_write(0xC13E, gb.regs.a);
    EntityLinkPositionXDifference_19();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x10;
    if (GET_FLAG_Z()) goto func_019_599B_jr_59B4;
    gb.regs.a = 0xF0;
  func_019_599B_jr_59B4:;
    gb_write(0xFF9A, gb.regs.a);
    return;
}

void jr_019_59B7(void) {
    gb.regs.a = gb_read(0xFF9F);
    gb_write(0xFF98, gb.regs.a);
    return;
}

void RoosterSpriteVariants(void) {
  RoosterSpriteVariants_variant0:;
    /* data: db $42, $23 */;
    /* data: db $40, $23 */;
  RoosterSpriteVariants_variant1:;
    /* data: db $46, $23 */;
    /* data: db $44, $23 */;
  RoosterSpriteVariants_variant2:;
    /* data: db $40, $03 */;
    /* data: db $42, $03 */;
  RoosterSpriteVariants_variant3:;
    /* data: db $44, $03 */;
    /* data: db $46, $03 */;
  RoosterSpriteVariants_variant4:;
    /* data: db $4C, $03 */;
    /* data: db $4C, $23 */;
  RoosterSpriteVariants_variant5:;
    /* data: db $4E, $03 */;
    /* data: db $4E, $23 */;
  RoosterSpriteVariants_variant6:;
    /* data: db $48, $03 */;
    /* data: db $48, $23 */;
  RoosterSpriteVariants_variant7:;
    /* data: db $4A, $03 */;
    /* data: db $4A, $23 */;
}

void RoosterEntityHandler(void) {
    gb.regs.a = gb_read(0xDC23);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.hl = 0xC3E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC220;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC230;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.de = 0x588D;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { label_019_5B3C(); return; };
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto RoosterEntityHandler_jr_5A0D;
    func_019_5B00();
    jr_019_5A31(); return;
  RoosterEntityHandler_jr_5A0D:;
    AddEntityZSpeedToPos_19();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_019_5A35(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = gb_read(0xC146);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) { jr_019_5A31(); return; };
    gb_write(gb.regs.hl, 0x20);
}

void jr_019_5A31(void) {
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}

void jr_019_5A35(void) {
    ReturnIfNonInteractive_19();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_5A85(); return; };
    func_019_7E3A();
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_C()) goto jr_019_5A35_jr_5A5F;
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_C()) { jr_019_5A9F(); return; };
  jr_019_5A35_jr_5A5F:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_019_5A7F(); return; };
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x0C;
    if (GET_FLAG_Z()) goto jr_019_5A35_jr_5A6F;
    gb.regs.a = 0x20;
  jr_019_5A35_jr_5A6F:;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.hl);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb.regs.e;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_019_5A7F(void) {
    UpdateEntityPosWithSpeed_19();
    ApplyEntityInteractionWithBackground_trampoline(); return;
}

void jr_019_5A85(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_019_5A85_jr_5A90;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_019_5A85_jr_5A90:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_019_5A85_jr_5A9C;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_019_5A85_jr_5A9C:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    jr_019_5A7F(); return;
}

void jr_019_5A9F(void) {
    ClearEntitySpeed();
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_019_5A9F_noBraceletB;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_019_5AC4(); return; };
    return;
  jr_019_5A9F_noBraceletB:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) return;
}

void jr_019_5AC4(void) {
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC3CF, gb.regs.a);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 7);
    gb.regs.hl = 0xC490;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 2);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    gb.regs.a = 2;
    gb_write(0xFFA2, gb.regs.a);
    gb_write(0xC146, gb.regs.a);
    return;
}

void Data_019_5AF8(void) {
    /* data: db $06, $07, $08, $09, $09, $08, $07, $06 */;
}

void func_019_5B00(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5AF8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) return;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_019_5B00_jr_5B27;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_019_5B00_jr_5B27:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    return;
}

void Data_019_5B29(void) {
    /* data: db $0F, $00, $01, $0F, $02, $0F, $0F, $0F, $03, $0F, $0F */;
}

void Data_019_5B34(void) {
    /* data: db $14, $14, $15, $16, $17, $17, $16, $15 */;
}

void label_019_5B3C(void) {
    gb.regs.a = gb_read(0xFF9E);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_019_5B75(); return; };
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5B34;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFA2;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) { jr_019_5B75(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto label_019_5B3C_jr_5B74;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  label_019_5B3C_jr_5B74:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_019_5B75(void) {
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5B29;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto jr_019_5B75_jr_5B89;
    gb_write(0xFF9E, gb.regs.a);
    gb_write(0xC15D, gb.regs.a);
  jr_019_5B75_jr_5B89:;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_019_5B75_jr_5B93;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
  jr_019_5B75_jr_5B93:;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto jr_019_5B75_jr_5B9D;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
  jr_019_5B75_jr_5B9D:;
    PlayBoomerangSfx_trampoline(); return;
}

void RichardFrogSpriteVariants(void) {
  RichardFrogSpriteVariants_variant0:;
    /* data: db $64, $00 */;
    /* data: db $64, $20 */;
  RichardFrogSpriteVariants_variant1:;
    /* data: db $66, $00 */;
    /* data: db $66, $20 */;
  RichardFrogSpriteVariants_variant2:;
    /* data: db $60, $00 */;
    /* data: db $60, $20 */;
  RichardFrogSpriteVariants_variant3:;
    /* data: db $62, $00 */;
    /* data: db $62, $20 */;
  RichardFrogSpriteVariants_variant4:;
    /* data: db $68, $00 */;
    /* data: db $6A, $00 */;
  RichardFrogSpriteVariants_variant5:;
    /* data: db $6C, $00 */;
    /* data: db $6E, $00 */;
  RichardFrogSpriteVariants_variant6:;
    /* data: db $6A, $20 */;
    /* data: db $68, $20 */;
  RichardFrogSpriteVariants_variant7:;
    /* data: db $6E, $20 */;
    /* data: db $6C, $20 */;
}

void RichardFrogEntityHandler(void) {
    gb.regs.de = 0x5A6E;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_19();
    UpdateEntityPosWithSpeed_19();
    AddEntityZSpeedToPos_19();
    ApplyEntityInteractionWithBackground_trampoline();
  RichardFrogEntityHandler_jr_5BD2:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto RichardFrogEntityHandler_jr_5BE9;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  RichardFrogEntityHandler_jr_5BE9:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: RichardFrogState0Handler(); return;
        case 0x01: RichardFrogState1Handler(); return;
    }
}

void Data_019_5BF0(void) {
    /* data: db $00, $10, $00, $F0, $0C, $0C, $F4, $F4 */;
}

void Data_019_5BF8(void) {
    /* data: db $F0, $00, $10, $00, $F4, $0C, $0C, $F4 */;
}

void Data_019_5C00(void) {
    /* data: db $00, $06, $02, $04, $00, $06, $02, $04 */;
}

void RichardFrogState0Handler(void) {
    GetEntityTransitionCountdown();
  RichardFrogState0Handler_jr_5C0B:;
    if (!GET_FLAG_Z()) { jr_019_5C41(); return; };
    IncrementEntityState();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
  RichardFrogState0Handler_jr_5C23:;
    gb.regs.hl = 0x5BF0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
  RichardFrogState0Handler_jr_5C2B:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5BF8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5C00;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_019_5C41(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void RichardFrogState1Handler(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RichardFrogState1Handler_jr_5C61;
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    ClearEntitySpeed();
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  RichardFrogState1Handler_jr_5C61:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void WarpLocationsTable(void) {
    /* data: db $00, $2C, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $EC, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $01, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $95, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void func_019_5D6A(void) {
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    ClearLinkPositionIncrement();
    gb.regs.a = gb_read(0xFF9C);
    switch(gb.regs.a) {
        case 0x00: func_019_5D7D(); return;
        case 0x01: func_019_5D8F(); return;
        case 0x02: func_019_5DAC(); return;
    }
}

void func_019_5D7D(void) {
    gb.regs.a = gb_read(0xFFB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_019_5D7D_return;
    gb.regs.a = 1;
    gb_write(0xFF9C, gb.regs.a);
    gb.regs.a = 0x25;
    gb_write(0xFFF2, gb.regs.a);
  func_019_5D7D_return:;
    return;
}

void Data_019_5D8B(void) {
    /* data: db $00, $03, $01, $02 */;
}

void func_019_5D8F(void) {
    gb.regs.a = gb_read(0xFFB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_019_5D99(); return; };
    gb.regs.a = 2;
    gb_write(0xFF9C, gb.regs.a);
    return;
}

void func_019_5D99(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5D8B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9E, gb.regs.a);
    UpdateLinkWalkingAnimation_trampoline(); return;
}

void func_019_5DAC(void) {
    func_019_5D99();
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFFA2, gb.regs.a);
    alu_cp8(gb.regs.a, 0x78);
    if (GET_FLAG_C()) { ret_019_5DF7(); return; };
    gb_write(0xDC70, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
  func_019_5DAC_loop:;
    gb.regs.hl = 0x5B43;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xD8B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_019_5DAC_loop;
    gb.regs.a = gb.regs.e;
    gb_write(0xD403, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD401, gb.regs.a);
    gb_write(0xD402, gb.regs.a);
    gb.regs.a = 0x70;
    gb_write(0xD405, gb.regs.a);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x68;
    gb_write(0xD404, gb.regs.a);
    gb_write(0xFF98, gb.regs.a);
    gb_write(0xD475, gb.regs.a);
    gb.regs.a = 0x66;
    gb_write(0xD416, gb.regs.a);
    ApplyMapFadeOutTransition();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
}

void ret_019_5DF7(void) {
    return;
}

void GhostSpriteVariants(void) {
  GhostSpriteVariants_variant0:;
    /* data: db $42, $23 */;
    /* data: db $40, $23 */;
  GhostSpriteVariants_variant1:;
    /* data: db $46, $23 */;
    /* data: db $44, $23 */;
  GhostSpriteVariants_variant2:;
    /* data: db $40, $03 */;
    /* data: db $42, $03 */;
  GhostSpriteVariants_variant3:;
    /* data: db $44, $03 */;
    /* data: db $46, $03 */;
  GhostSpriteVariants_variant4:;
    /* data: db $48, $03 */;
    /* data: db $4A, $03 */;
  GhostSpriteVariants_variant5:;
    /* data: db $4C, $03 */;
    /* data: db $4E, $03 */;
}

void GhostZPositionTable(void) {
    /* data: db $10, $11, $12, $13, $13, $12, $11, $10 */;
}

void GhostEntityHandler(void) {
    gb.regs.a = gb_read(0xDC21);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.hl = 0xC3E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC220;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC230;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto GhostEntityHandler_skipDraw;
    gb.regs.de = 0x5CB4;
    RenderActiveEntitySpritesPair();
  GhostEntityHandler_skipDraw:;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GhostEntityHandler_jr_5E5B;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5CCC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  GhostEntityHandler_jr_5E5B:;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_5EAF(); return; };
    func_019_7E3A();
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 2);
    gb.regs.e = 4;
    if (GET_FLAG_Z()) goto GhostEntityHandler_jr_5E6F;
    EntityLinkPositionXDifference_19();
    gb.regs.e = alu_sla(gb.regs.e);
  GhostEntityHandler_jr_5E6F:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto GhostEntityHandler_jr_5E99;
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(0xFF99, gb.regs.a);
    EntityLinkPositionYDifference_19();
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) { jr_019_5EAF(); return; };
  GhostEntityHandler_jr_5E99:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_019_5EAC(); return; };
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 8;
    if (GET_FLAG_Z()) goto GhostEntityHandler_jr_5EA9;
    gb.regs.a = 0x18;
  GhostEntityHandler_jr_5EA9:;
    ApplyVectorTowardsLink_trampoline();
}

void jr_019_5EAC(void) {
    UpdateEntityPosWithSpeed_19();
}

void jr_019_5EAF(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { GhostInHouseSequence(); return; };
    gb.regs.a = gb_read(0xDC22);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_019_5F5F(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x64);
    if (!GET_FLAG_Z()) { label_019_5F84(); return; };
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: GhostState0Handler(); return;
        case 0x01: GhostState1Handler(); return;
        case 0x02: GhostState2Handler(); return;
    }
}

void GhostState0Handler(void) {
    ReturnIfNonInteractive_19();
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x3C);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x7A);
    if (!GET_FLAG_C()) return;
    gb_write(0xC167, gb.regs.a);
    IncrementEntityState(); return;
}

void GhostState1Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 0x60;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x28;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    EntityLinkPositionXDifference_19();
    gb_push16(gb.regs.af);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto GhostState1Handler_jr_5F30;
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto GhostState1Handler_jr_5F30;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    /* call_open_dialog Dialog216 */;
    gb.regs.a = 0x2D;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState();
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  GhostState1Handler_jr_5F30:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    UpdateEntityPosWithSpeed_19();
    label_019_6053(); return;
}

void GhostState2Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    ReturnIfNonInteractive_19();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) goto GhostState2Handler_jr_5F5C;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC21, gb.regs.a);
    gb_write(0xDC22, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.hl = 0xDA98;
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    ClearEntityStatus_19(); return;
  GhostState2Handler_jr_5F5C:;
    label_019_6053(); return;
}

void label_019_5F5F(void) {
    ReturnIfNonInteractive_19();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xF6);
    if (!GET_FLAG_Z()) { label_019_5F84(); return; };
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x78);
    if (!GET_FLAG_C()) return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x2D;
    gb_write(0xFFF2, gb.regs.a);
    /* jp_open_dialog Dialog213 */;
}

void label_019_5F84(void) {
    ReturnIfNonInteractive_19();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) return;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.hl = 0xC3C8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x2D;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xDC22);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low a, Dialog211 */;
    if (GET_FLAG_Z()) goto label_019_5F84_endIf;
    /* ld_dialog_low a, Dialog210 */;
  label_019_5F84_endIf:;
    OpenDialogInTable2(); return;
}

void GhostInHouseSequence(void) {
    ReturnIfNonInteractive_19();
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1E);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xE3);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_019_5FE7(); return;
        case 0x01: func_019_5FFF(); return;
        case 0x02: func_019_6037(); return;
        case 0x03: func_019_6064(); return;
        case 0x04: func_019_6080(); return;
        case 0x05: func_019_60A5(); return;
    }
}

void func_019_5FE7(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState(); return;
}

void Data_019_5FEF(void) {
    /* data: db $60, $28, $28, $68 */;
}

void Data_019_5FF3(void) {
    /* data: db $00, $F8, $FC, $08 */;
}

void Data_019_5FF7(void) {
    /* data: db $F8, $FC, $F8, $02 */;
}

void Data_019_5FFB(void) {
    /* data: db $04, $02, $04, $00 */;
}

void func_019_5FFF(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_019_5FFF_jr_6035;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5FEF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5FF3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5FF7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5FFB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
  func_019_5FFF_jr_6035:;
    label_019_6053(); return;
}

void func_019_6037(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_019_6037_jr_6050;
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_019_6037_jr_6050;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  func_019_6037_jr_6050:;
    UpdateEntityPosWithSpeed_19();
}

void label_019_6053(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant(); return;
}

void func_019_6064(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_019_6064_jr_607D;
    gb_write(gb.regs.hl, 0x50);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x10;
    gb_write(0xFF99, gb.regs.a);
    /* call_open_dialog Dialog214 */;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    IncrementEntityState();
  func_019_6064_jr_607D:;
    label_019_6053(); return;
}

void func_019_6080(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_019_6080_jr_608D;
    /* call_open_dialog Dialog215 */;
    IncrementEntityState();
  func_019_6080_jr_608D:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0A);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFC);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    UpdateEntityPosWithSpeed_19();
    label_019_6053(); return;
}

void func_019_60A5(void) {
    gb.regs.a = 1;
    gb_write(0xDC22, gb.regs.a);
    func_019_7F0E();
    ClearEntityStatus_19();
    ApplyMapFadeOutTransitionWithNoise(); return;
    /* nop */;
}

void Data_019_60B4(void) {
    /* data: db $98, $06, $89, $00, $04, $00, $04, $00 */;
    /* data: db $04, $00, $04, $00, $10, $98, $07, $89 */;
    /* data: db $01, $11, $01, $11, $01, $11, $01, $11 */;
    /* data: db $01, $11, $98, $08, $89, $07, $06, $07 */;
    /* data: db $06, $07, $06, $07, $06, $07, $06, $98 */;
    /* data: db $08, $89, $07, $06, $07, $06, $07, $06 */;
    /* data: db $07, $06, $07, $06 */;
}

void Data_019_60E8(void) {
    /* data: db $98, $09, $89, $06, $07, $06, $07, $06 */;
    /* data: db $07, $06, $07, $06, $07, $98, $0A, $89 */;
    /* data: db $07, $06, $07, $06, $07, $06, $07, $06 */;
    /* data: db $07, $06, $98, $0B, $89, $06, $07, $06 */;
    /* data: db $07, $06, $07, $06, $07, $06, $07, $98 */;
    /* data: db $0B, $89, $06, $07, $06, $07, $06, $07 */;
    /* data: db $06, $07, $06, $07 */;
}

void Data_019_611C(void) {
    /* data: db $98, $0C, $89, $07, $06, $07, $06, $07 */;
    /* data: db $06, $07, $06, $07, $06, $98, $0D, $89 */;
    /* data: db $06, $07, $06, $07, $06, $07, $06, $07 */;
    /* data: db $06, $07, $98, $0E, $89, $02, $12, $02 */;
    /* data: db $12, $02, $12, $02, $12, $02, $12, $98 */;
    /* data: db $0F, $89, $03, $05, $03, $05, $03, $05 */;
    /* data: db $03, $05, $03, $13 */;
}

void Data_019_6150(void) {
    /* data: db $98, $06, $89, $04, $00, $04, $00, $04 */;
    /* data: db $00, $04, $00, $04, $14, $98, $07, $89 */;
    /* data: db $11, $01, $11, $01, $11, $01, $11, $01 */;
    /* data: db $11, $01, $98, $08, $89, $06, $07, $06 */;
    /* data: db $07, $06, $07, $06, $07, $06, $07, $98 */;
    /* data: db $08, $89, $06, $07, $06, $07, $06, $07 */;
    /* data: db $06, $07, $06, $07 */;
}

void Data_019_6184(void) {
    /* data: db $98, $09, $89, $07, $06, $07, $06, $07 */;
    /* data: db $06, $07, $06, $07, $06, $98, $0A, $89 */;
    /* data: db $06, $07, $06, $07, $06, $07, $06, $07 */;
    /* data: db $06, $07, $98, $0B, $89, $07, $06, $07 */;
    /* data: db $06, $07, $06, $07, $06, $07, $06, $98 */;
    /* data: db $0B, $89, $07, $06, $07, $06, $07, $06 */;
    /* data: db $07, $06, $07, $06 */;
}

void Data_019_61B8(void) {
    /* data: db $98, $0C, $89, $06, $07, $06, $07, $06 */;
    /* data: db $07, $06, $07, $06, $07, $98, $0D, $89 */;
    /* data: db $07, $06, $07, $06, $07, $06, $07, $06 */;
    /* data: db $07, $06, $98, $0E, $89, $12, $02, $12 */;
    /* data: db $02, $12, $02, $12, $02, $12, $02, $98 */;
    /* data: db $0F, $89, $05, $03, $05, $03, $05, $03 */;
    /* data: db $05, $03, $05, $15 */;
}

void Data_019_61EC(void) {
    /* data: dw Data_019_6150 */;
    /* data: dw Data_019_60B4 */;
}

void Data_019_61F0(void) {
    /* data: dw Data_019_6184 */;
    /* data: dw Data_019_60E8 */;
}

void Data_019_61F4(void) {
    /* data: dw Data_019_61B8 */;
    /* data: dw Data_019_611C */;
}

void AnimateEaglesTowerOpening(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    func_019_650F();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: EaglesTowerOpeningState0Handler(); return;
        case 0x01: EaglesTowerOpeningState1Handler(); return;
        case 0x02: EaglesTowerOpeningState2Handler(); return;
        case 0x03: EaglesTowerOpeningState3Handler(); return;
        case 0x04: EaglesTowerOpeningState4Handler(); return;
        case 0x05: EaglesTowerOpeningState5Handler(); return;
        case 0x06: EaglesTowerOpeningState6Handler(); return;
    }
}

void EaglesTowerOpeningState0Handler(void) {
    label_27F2();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityState();
}

void EaglesTowerOpeningState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto EaglesTowerOpeningState1Handler_jr_6230;
    gb_write(0xC155, gb.regs.a);
    SetEntitySpriteVariant();
    gb.regs.a = 0x2E;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState(); return;
  EaglesTowerOpeningState1Handler_jr_6230:;
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto EaglesTowerOpeningState1Handler_jr_6238;
    gb.regs.a = 0x1D;
    gb_write(0xFFF4, gb.regs.a);
  EaglesTowerOpeningState1Handler_jr_6238:;
    if (GET_FLAG_C()) { jr_019_6245(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb.regs.a = 0;
    if (GET_FLAG_Z()) goto EaglesTowerOpeningState1Handler_jr_6242;
    gb.regs.a = 0xFF;
  EaglesTowerOpeningState1Handler_jr_6242:;
    SetEntitySpriteVariant(); return;
}

void jr_019_6245(void) {
    gb.regs.e = 1;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto jr_019_6245_jr_624D;
    gb.regs.e = 0xFE;
  jr_019_6245_jr_624D:;
    gb.regs.a = gb.regs.e;
    gb_write(0xC155, gb.regs.a);
    return;
}

void EaglesTowerOpeningState2Handler(void) {
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState(); return;
}

void EaglesTowerOpeningState3Handler(void) {
    gb.regs.hl = 0x61EC;
    func_019_6262(); return;
}

void EaglesTowerOpeningState4Handler(void) {
    gb.regs.hl = 0x61F0;
}

void func_019_6262(void) {
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.c = 0x34;
    gb.regs.hl = 0xD5C2;
}

void jr_019_6278(void) {
    loop_start: ;
    gb.regs.de--;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    alu_cp8(gb.regs.a, 0x98);
    gb.regs.a = gb_read(gb.regs.de);
    if (!GET_FLAG_Z()) goto jr_019_6278_jr_6288;
    gb.regs.a = gb_read(0xFF96);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    if (GET_FLAG_Z()) goto jr_019_6278_jr_6288;
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
  jr_019_6278_jr_6288:;
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb_write(gb.regs.hl, 0);
    gb.regs.bc = gb_pop16();
    IncrementEntityState(); return;
}

void EaglesTowerOpeningState5Handler(void) {
    gb.regs.hl = 0x61F4;
    func_019_6262();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto EaglesTowerOpeningState5Handler_jr_62B4;
    gb.regs.a = gb_read(0xFFBF);
    gb_write(0xD368, gb.regs.a);
    return;
  EaglesTowerOpeningState5Handler_jr_62B4:;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    return;
}

void EaglesTowerOpeningState6Handler(void) {
    func_019_7F0E();
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC155, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.hl = 0xD7EB;
    gb.regs.a = 0xE1;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl = 0xD7FB;
    gb.regs.a = 0x77;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl = 0xD80B;
    gb.regs.a = 0x77;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    func_019_6374();
    func_019_63B5();
    ClearEntityStatus_19(); return;
}

void Data_019_62F4(void) {
    /* data: db $98, $4A, $87, $0C, $1C, $64, $66, $0F, $0F, $0F, $0F, $98, $4B, $87, $0D, $1D */;
    /* data: db $65, $67, $1F, $1F, $1F, $1F, $98, $49, $81, $0B, $1B, $98, $4C, $81, $0E, $1E */;
}

void Data_019_6314(void) {
    /* data: db $98, $56, $87, $0C, $1C, $64, $66, $0F, $0F, $0F, $0F, $98, $57, $87, $0D, $1D */;
    /* data: db $65, $67, $1F, $1F, $1F, $1F, $98, $55, $81, $0B, $1B, $98, $58, $81, $0E, $1E */;
}

void Data_019_6334(void) {
    /* data: db $98, $4A, $87, $0C, $1C, $64, $66, $0F, $0F, $0F, $0F, $98, $4B, $87, $0D, $1D */;
    /* data: db $64, $66, $1F, $1F, $1F, $1F, $98, $49, $81, $0B, $1B, $98, $4C, $81, $0E, $1E */;
}

void Data_019_6354(void) {
    /* data: db $98, $56, $87, $0C, $1C, $64, $66, $0F, $0F, $0F, $0F, $98, $57, $87, $0D, $1D */;
    /* data: db $64, $66, $1F, $1F, $1F, $1F, $98, $55, $81, $0B, $1B, $98, $58, $81, $0E, $1E */;
}

void func_019_6374(void) {
    gb.regs.a = 0x20;
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.de = 0x62F4;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_019_6374_jr_6387;
    gb.regs.de = 0x6334;
  func_019_6374_jr_6387:;
    gb.regs.a = gb_read(0xFF96);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_019_6374_jr_6397;
    gb.regs.de = 0x6314;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_019_6374_jr_6397;
    gb.regs.de = 0x6354;
  func_019_6374_jr_6397:;
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x20;
  func_019_6374_loop_639A:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_019_6374_loop_639A;
    gb.regs.bc = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void Data_019_63A3(void) {
    /* data: db $98, $8B, $85, $26, $26, $01, $01, $01, $01 */;
}

void Data_019_63AC(void) {
    /* data: db $98, $97, $85, $26, $26, $01, $01, $01, $01 */;
}

void func_019_63B5(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_019_63D8(); return; };
    gb.regs.a = 5;
    gb_write(0xDD38, gb.regs.a);
    gb.regs.hl = 0xDD39;
    gb.regs.de = 0x63A3;
    gb.regs.a = gb_read(0xFF96);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_019_63B5_jr_63CD;
    gb.regs.de = 0x63AC;
  func_019_63B5_jr_63CD:;
    gb_push16(gb.regs.bc);
    gb.regs.c = 9;
  func_019_63B5_loop_63D0:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_019_63B5_loop_63D0;
    gb.regs.bc = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.b);
}

void ret_019_63D8(void) {
    return;
}

void Data_019_63D9(void) {
    /* data: db $50, $5C, $68, $70, $7A, $7E, $58, $32, $38, $38, $40, $44, $50 */;
}

void Data_019_63E6(void) {
    /* data: db $20, $20, $20, $20, $20, $1F, $1E, $1F, $20, $20, $20, $20, $20 */;
}

void Data_019_63F3(void) {
    /* data: db $03, $03, $04, $04, $05, $05, $06, $01, $01, $02, $02, $03, $03 */;
}

void Data_019_6400(void) {
    /* data: db $C0, $C0, $C0, $C0, $C0, $C0, $C0, $38, $3A, $3B, $44, $4C, $58 */;
}

void Data_019_640D(void) {
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $2F, $30, $30, $30, $30, $30 */;
}

void Data_019_641A(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $01, $02, $03, $04, $04 */;
}

void Data_019_6427(void) {
    /* data: db $00, $00, $70, $06, $00, $00, $FF, $06, $00, $00, $FF, $06, $00, $00, $FF, $06 */;
    /* data: db $00, $00, $72, $06, $00, $08, $74, $06, $00, $00, $FF, $06, $00, $00, $FF, $06 */;
    /* data: db $00, $00, $76, $06, $00, $08, $78, $06, $00, $10, $7A, $06, $00, $00, $FF, $06 */;
    /* data: db $00, $00, $7C, $06, $00, $08, $7E, $06, $00, $10, $7E, $26, $00, $18, $7C, $26 */;
    /* data: db $00, $00, $7A, $26, $00, $08, $78, $26, $00, $10, $76, $26, $00, $00, $FF, $06 */;
    /* data: db $00, $00, $74, $26, $00, $08, $72, $26, $00, $00, $FF, $06, $00, $00, $FF, $06 */;
    /* data: db $00, $30, $70, $26, $00, $D8, $70, $06, $00, $00, $FF, $06, $00, $00, $FF, $06 */;
}

void Data_019_6497(void) {
    /* data: db $00, $00, $60, $15, $10, $00, $62, $06, $20, $00, $62, $06, $00, $00, $FF, $00 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00, $00, $00, $64, $15, $10, $00, $66, $06 */;
    /* data: db $20, $00, $66, $06, $00, $00, $FF, $00, $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $00, $02, $68, $15, $10, $02, $6A, $06, $20, $02, $6A, $06, $00, $05, $68, $35 */;
    /* data: db $10, $05, $6A, $26, $20, $05, $6A, $26, $00, $01, $68, $15, $10, $01, $6A, $06 */;
    /* data: db $20, $01, $6A, $06, $00, $07, $68, $35, $10, $07, $6A, $26, $20, $07, $6A, $26 */;
    /* data: db $00, $00, $68, $15, $10, $00, $6A, $06, $20, $00, $6A, $06, $00, $08, $68, $35 */;
    /* data: db $10, $08, $6A, $26, $20, $08, $6A, $26 */;
}

void func_019_650F(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
  func_019_650F_jr_6515:;
    gb.regs.hl = 0x63D9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x63E6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x63F3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6427;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 2;
    func_015_7964_trampoline();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x640D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x641A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6497;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 6;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline(); return;
}

void Data_019_6571(void) {
    /* data: db $98, $02, $09, $55, $56, $55, $56, $55 */;
    /* data: db $56, $55, $56, $55, $56, $98, $22, $09 */;
    /* data: db $55, $56, $55, $56, $55, $56, $55, $56 */;
    /* data: db $55, $56, $98, $42, $09, $0C, $0D, $0C */;
    /* data: db $0D, $0C, $0D, $0C, $0D, $0C, $0D, $98 */;
    /* data: db $62, $09, $0E, $0F, $0E, $0F, $0E, $0F */;
    /* data: db $0E, $0F, $0E, $0F */;
}

void Data_019_65A5(void) {
    /* data: db $98, $02, $09, $55, $56, $55, $56, $55 */;
    /* data: db $56, $55, $56, $55, $56, $98, $22, $09 */;
    /* data: db $55, $56, $55, $56, $55, $56, $55, $56 */;
    /* data: db $55, $56, $98, $42, $09, $0E, $0F, $0E */;
    /* data: db $0F, $0E, $0F, $0E, $0F, $0E, $0F, $98 */;
    /* data: db $62, $09, $0F, $0E, $0F, $0E, $0F, $0E */;
    /* data: db $0F, $0E, $0F, $0E */;
}

void Data_019_65D9(void) {
    /* data: db $98, $02, $09, $55, $56, $55, $56, $55 */;
    /* data: db $56, $55, $56, $55, $56, $98, $22, $09 */;
    /* data: db $0E, $0F, $0E, $0F, $0E, $0F, $0E, $0F */;
    /* data: db $0E, $0F, $98, $42, $09, $0F, $0E, $0F */;
    /* data: db $0E, $0F, $0E, $0F, $0E, $0F, $0E, $98 */;
    /* data: db $62, $09, $0E, $0F, $0E, $0F, $0E, $0F */;
    /* data: db $0E, $0F, $0E, $0F */;
}

void Data_019_660D(void) {
    /* data: db $98, $02, $09, $0E, $0F, $0E, $0F, $0E */;
    /* data: db $0F, $0E, $0F, $0E, $0F, $98, $22, $09 */;
    /* data: db $0F, $0E, $0F, $0E, $0F, $0E, $0F, $0E */;
    /* data: db $0F, $0E, $98, $42, $09, $0E, $0F, $0E */;
    /* data: db $0F, $0E, $0F, $0E, $0F, $0E, $0F, $98 */;
    /* data: db $62, $09, $0F, $0E, $0F, $0E, $0F, $0E */;
    /* data: db $0F, $0E, $0F, $0E */;
}

void Data_019_6641(void) {
    /* data: db $98, $82, $09, $0F, $0E, $0F, $0F, $0F */;
    /* data: db $0E, $0F, $0E, $0F, $0E, $98, $A2, $09 */;
    /* data: db $0E, $0F, $0E, $0F, $0E, $0F, $0E, $0F */;
    /* data: db $0E, $0F, $98, $C2, $09, $0F, $0E, $0F */;
    /* data: db $0E, $0F, $0E, $0F, $0E, $0F, $0E, $98 */;
    /* data: db $E2, $09, $1E, $1E, $1E, $1E, $1E, $1E */;
    /* data: db $1E, $1E, $1E, $1E */;
}

void Data_019_6675(void) {
    /* data: db $98, $82, $09, $0E, $0F, $0E, $0F, $0E */;
    /* data: db $0F, $0E, $0F, $0E, $0F, $98, $A2, $09 */;
    /* data: db $0F, $0E, $0F, $0E, $0F, $0E, $0F, $0E */;
    /* data: db $0F, $0E, $98, $C2, $09, $1E, $1E, $1E */;
    /* data: db $1E, $1E, $1E, $1E, $1E, $1E, $1E, $98 */;
    /* data: db $E2, $09, $09, $08, $18, $09, $7E, $7E */;
    /* data: db $09, $08, $18, $09 */;
}

void Data_019_66A9(void) {
    /* data: db $98, $82, $09, $0E, $0F, $0E, $0F, $0E */;
    /* data: db $0F, $0E, $0F, $0E, $0F, $98, $A2, $09 */;
    /* data: db $1E, $1E, $1E, $1E, $1E, $1E, $1E, $1E */;
    /* data: db $1E, $1E, $98, $C2, $09, $09, $08, $18 */;
    /* data: db $09, $7E, $7E, $09, $08, $18, $09, $98 */;
    /* data: db $E2, $09, $09, $04, $05, $09, $7E, $7E */;
    /* data: db $09, $04, $05, $09 */;
}

void Data_019_66DD(void) {
    /* data: db $98, $82, $09, $1E, $1E, $1E, $1E, $1E */;
    /* data: db $1E, $1E, $1E, $1E, $1E, $98, $A2, $09 */;
    /* data: db $09, $08, $18, $09, $7E, $7E, $09, $08 */;
    /* data: db $18, $09, $98, $C2, $09, $09, $04, $05 */;
    /* data: db $09, $7E, $7E, $09, $04, $05, $09, $98 */;
    /* data: db $E2, $09, $19, $14, $15, $19, $1F, $1F */;
    /* data: db $19, $14, $15, $19 */;
}

void Data_019_6711(void) {
    /* data: db $98, $02, $49, $03, $98, $22, $49, $03 */;
    /* data: db $98, $42, $49, $05, $98, $62, $49, $02 */;
}

void Data_019_6721(void) {
    /* data: db $98, $02, $49, $03, $98, $22, $49, $03 */;
    /* data: db $98, $42, $49, $02, $98, $62, $49, $02 */;
}

void Data_019_6731(void) {
    /* data: db $98, $02, $49, $03, $98, $22, $49, $02 */;
    /* data: db $98, $42, $49, $02, $98, $62, $49, $02 */;
}

void Data_019_6741(void) {
    /* data: db $98, $02, $49, $02, $98, $22, $49, $02 */;
    /* data: db $98, $42, $49, $02, $98, $62, $49, $02 */;
}

void Data_019_6751(void) {
    /* data: db $98, $82, $09, $02, $02, $02, $02, $02 */;
    /* data: db $02, $02, $02, $02, $02, $98, $A2, $09 */;
    /* data: db $02, $02, $02, $02, $02, $02, $02, $02 */;
    /* data: db $02, $02, $98, $C2, $09, $02, $02, $02 */;
    /* data: db $02, $02, $02, $02, $02, $02, $02, $98 */;
    /* data: db $E2, $09, $01, $01, $01, $01, $01, $01 */;
    /* data: db $01, $01, $01, $01 */;
}

void Data_019_6785(void) {
    /* data: db $98, $82, $09, $02, $02, $02, $02, $02 */;
    /* data: db $02, $02, $02, $02, $02, $98, $A2, $09 */;
    /* data: db $02, $02, $02, $02, $02, $02, $02, $02 */;
    /* data: db $02, $02, $98, $C2, $09, $01, $01, $01 */;
    /* data: db $01, $01, $01, $01, $01, $01, $01, $98 */;
    /* data: db $E2, $09, $01, $00, $00, $01, $01, $01 */;
    /* data: db $01, $00, $00, $01 */;
}

void Data_019_67B9(void) {
    /* data: db $98, $82, $09, $02, $02, $02, $02, $02 */;
    /* data: db $02, $02, $02, $02, $02, $98, $A2, $09 */;
    /* data: db $01, $01, $01, $01, $01, $01, $01, $01 */;
    /* data: db $01, $01, $98, $C2, $09, $01, $00, $00 */;
    /* data: db $01, $01, $01, $01, $00, $00, $01, $98 */;
    /* data: db $E2, $09, $01, $00, $00, $01, $01, $01 */;
    /* data: db $01, $00, $00, $01 */;
}

void Data_019_67ED(void) {
    /* data: db $98, $82, $09, $01, $01, $01, $01, $01 */;
    /* data: db $01, $01, $01, $01, $01, $98, $A2, $09 */;
    /* data: db $01, $00, $00, $01, $01, $01, $01, $00 */;
    /* data: db $00, $01, $98, $C2, $09, $01, $00, $00 */;
    /* data: db $01, $01, $01, $01, $00, $00, $01, $98 */;
    /* data: db $E2, $09, $01, $00, $00, $01, $01, $01 */;
    /* data: db $01, $00, $00, $01 */;
}

void Data_019_6821(void) {
    /* data: dw Data_019_6571 */;
    /* data: dw Data_019_65A5 */;
    /* data: dw Data_019_65D9 */;
    /* data: dw Data_019_660D */;
}

void Data_019_6829(void) {
    /* data: dw Data_019_6641 */;
    /* data: dw Data_019_6675 */;
    /* data: dw Data_019_66A9 */;
    /* data: dw Data_019_66DD */;
}

void Data_019_6831(void) {
    /* data: dw Data_019_6711 */;
    /* data: dw Data_019_6721 */;
    /* data: dw Data_019_6731 */;
    /* data: dw Data_019_6741 */;
}

void Data_019_6839(void) {
    /* data: dw Data_019_6751 */;
    /* data: dw Data_019_6785 */;
    /* data: dw Data_019_67B9 */;
    /* data: dw Data_019_67ED */;
}

void AnimateDungeonDoorOpening(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) { AnimateEaglesTowerOpening(); return; };
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_019_685A(); return;
        case 0x01: func_019_686B(); return;
        case 0x02: func_019_6894(); return;
        case 0x03: func_019_68F9(); return;
    }
}

void func_019_685A(void) {
    gb.regs.a = 4;
    gb_write(0xFFF4, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xAC);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0xAC);
    IncrementEntityState();
}

void func_019_686B(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto func_019_686B_jr_6877;
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x2E);
  func_019_686B_jr_6877:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_019_686B_jr_6881;
    gb.regs.a = 0x2F;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState();
  func_019_686B_jr_6881:;
    gb.regs.e = 1;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_019_686B_jr_6889;
    gb.regs.e = 0xFE;
  func_019_686B_jr_6889:;
    gb.regs.a = gb.regs.e;
    gb_write(0xC155, gb.regs.a);
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) return;
    label_019_6A4F(); return;
}

void func_019_6894(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6821;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x34;
    gb.regs.hl = 0xD5C2;
}

void jr_019_68AC(void) {
    loop_start: ;
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 0x98);
    if (!GET_FLAG_Z()) goto jr_019_68AC_jr_68BA;
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x98;
    if (GET_FLAG_Z()) goto jr_019_68AC_jr_68BA;
    gb.regs.a = 0x9A;
  jr_019_68AC_jr_68BA:;
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb_write(gb.regs.hl, 0);
    gb.regs.bc = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_push16(gb.regs.af);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6831;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x10;
    gb.regs.hl = 0xDD39;
}

void jr_019_68D6(void) {
    loop_start: ;
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 0x98);
    if (!GET_FLAG_Z()) goto jr_019_68D6_jr_68E4;
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x98;
    if (GET_FLAG_Z()) goto jr_019_68D6_jr_68E4;
    gb.regs.a = 0x9A;
  jr_019_68D6_jr_68E4:;
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb_write(gb.regs.hl, 0);
    gb.regs.bc = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_019_68D6_jr_68F6;
    gb.regs.a = gb_read(0xFFBF);
    gb_write(0xD368, gb.regs.a);
  jr_019_68D6_jr_68F6:;
    IncrementEntityState(); return;
}

void func_019_68F9(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6829;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.c = 0x34;
    gb.regs.hl = 0xD5C2;
}

void jr_019_6910(void) {
    loop_start: ;
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 0x98);
    if (!GET_FLAG_Z()) goto jr_019_6910_jr_691E;
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x98;
    if (GET_FLAG_Z()) goto jr_019_6910_jr_691E;
    gb.regs.a = 0x9A;
  jr_019_6910_jr_691E:;
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb_write(gb.regs.hl, 0);
    gb.regs.bc = gb_pop16();
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6839;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.c = 0x34;
    gb.regs.hl = 0xDD39;
}

void jr_019_693D(void) {
    loop_start: ;
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 0x98);
    if (!GET_FLAG_Z()) goto jr_019_693D_jr_694B;
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x98;
    if (GET_FLAG_Z()) goto jr_019_693D_jr_694B;
    gb.regs.a = 0x9A;
  jr_019_693D_jr_694B:;
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb_write(gb.regs.hl, 0);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto jr_019_693D_jr_6961;
    label_019_6A3C(); return;
  jr_019_693D_jr_6961:;
    gb.regs.hl = 0xD7C7;
    gb.regs.a = 0xB3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.hl = 0xD7C7;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl = 0xD7D7;
    gb.regs.a = 0xB3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.hl = 0xD7D7;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl = 0xD7E7;
    gb.regs.a = 0xAD;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xE7;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xAD;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.hl = 0xD7E7;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl = 0xD7F7;
    gb.regs.a = 0xAE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xE3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xAE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.hl = 0xD7F7;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    gb.regs.hl++;
    gb.regs.a = 0x99;
    BackupObjectInRAM2();
    func_019_7F0E();
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC155, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFF2, gb.regs.a);
    ClearEntityStatus_19(); return;
}

void label_019_6A3C(void) {
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    return;
}

void Data_019_6A47(void) {
    /* data: db $18, $58, $28, $48, $38, $20, $50, $40 */;
}

void label_019_6A4F(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_019_6A8C(); return; };
    gb.regs.a = 0xA7;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { ret_019_6A8C(); return; };
    gb_push16(gb.regs.bc);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x6A47;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  label_019_6A4F_jr_6A6D:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_add8(gb.regs.a, 0x47);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
}

void ret_019_6A8C(void) {
    return;
}

void MimicSpriteVariants(void) {
  MimicSpriteVariants_variant0:;
    /* data: db $60, $01 */;
    /* data: db $62, $01 */;
  MimicSpriteVariants_variant1:;
    /* data: db $62, $21 */;
    /* data: db $60, $21 */;
  MimicSpriteVariants_variant2:;
    /* data: db $64, $01 */;
    /* data: db $66, $01 */;
  MimicSpriteVariants_variant3:;
    /* data: db $66, $21 */;
    /* data: db $64, $21 */;
  MimicSpriteVariants_variant4:;
    /* data: db $68, $01 */;
    /* data: db $6A, $01 */;
  MimicSpriteVariants_variant5:;
    /* data: db $6C, $01 */;
    /* data: db $6E, $01 */;
  MimicSpriteVariants_variant6:;
    /* data: db $6A, $21 */;
    /* data: db $68, $21 */;
  MimicSpriteVariants_variant7:;
    /* data: db $6E, $21 */;
    /* data: db $6C */;
}

void Data_019_6AAC(void) {
    /* data: db $21, $F0, $10 */;
}

void MimicEntityHandler(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { AnimateDungeonDoorOpening(); return; };
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) { jr_019_6ACE(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x97);
    if (GET_FLAG_Z()) goto MimicEntityHandler_jr_6AC8;
    alu_cp8(gb.regs.a, 0x98);
    if (!GET_FLAG_Z()) { jr_019_6ACE(); return; };
  MimicEntityHandler_jr_6AC8:;
    gb.regs.a = gb_read(0xDC27);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_6AD4(); return; };
}

void jr_019_6ACE(void) {
    gb.regs.de = 0x6926;
    RenderActiveEntitySpritesPair();
}

void jr_019_6AD4(void) {
    ReturnIfNonInteractive_19();
    ApplyRecoilIfNeeded_19();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_19();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_6B41(); return; };
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_019_6AD4_jr_6B11;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6AAC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant(); return;
  jr_019_6AD4_jr_6B11:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { jr_019_6B41(); return; };
    alu_rra();
    alu_rra();
    alu_cpl();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6AAC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_rla();
    alu_rla();
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant(); return;
}

void jr_019_6B41(void) {
    ClearEntitySpeed(); return;
}

void CheepCheepSpriteVariants(void) {
  CheepCheepSpriteVariants_variant0:;
    /* data: db $60, $01 */;
    /* data: db $62, $01 */;
  CheepCheepSpriteVariants_variant1:;
    /* data: db $64, $01 */;
    /* data: db $66, $01 */;
  CheepCheepSpriteVariants_variant2:;
    /* data: db $62, $21 */;
    /* data: db $60, $21 */;
  CheepCheepSpriteVariants_variant3:;
    /* data: db $66, $21 */;
    /* data: db $64, $21 */;
}

void CheepCheepHorizontalEntityHandler(void) {
    CheepCheepVerticalEntityHandler();
}

void CheepCheepVerticalEntityHandler(void) {
    gb.regs.de = 0x69E6;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_19();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rlca();
    alu_rlca();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: CheepCheepState0Handler(); return;
        case 0x01: CheepCheepState1Handler(); return;
        case 0x02: CheepCheepState2Handler(); return;
    }
}

void CheepCheepState0Handler(void) {
    gb.regs.hl = 0xC240;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xAA);
    if (GET_FLAG_Z()) goto CheepCheepState0Handler_jr_6B8A;
    gb.regs.hl = 0xC250;
  CheepCheepState0Handler_jr_6B8A:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
}

void label_019_6B8D(void) {
    gb.regs.e = 0x80;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xAA);
    if (GET_FLAG_Z()) goto label_019_6B8D_jr_6B97;
    gb.regs.e = 0x60;
  label_019_6B8D_jr_6B97:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, gb.regs.e);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    return;
}

void CheepCheepState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto CheepCheepState1Handler_jr_6BAB;
    gb_write(gb.regs.hl, 0x28);
    IncrementEntityState();
  CheepCheepState1Handler_jr_6BAB:;
    UpdateEntityPosWithSpeed_19(); return;
}

void CheepCheepState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto CheepCheepState2Handler_ret_6BC6;
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
    label_019_6B8D(); return;
  CheepCheepState2Handler_ret_6BC6:;
    return;
}

void CheepCheepJumpingEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto CheepCheepJumpingEntityHandler_jr_6BD3;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_or8(gb.regs.a, 0x40);
    gb_write(0xFFED, gb.regs.a);
  CheepCheepJumpingEntityHandler_jr_6BD3:;
    gb.regs.de = 0x69E6;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_19();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rlca();
    alu_rlca();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.e = gb.regs.a;
    ApplyRecoilIfNeeded_19();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto CheepCheepJumpingEntityHandler_jr_6BFD;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    DefaultEnemyDamageCollisionHandler_trampoline();
  CheepCheepJumpingEntityHandler_jr_6BFD:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: CheepCheepJumpingState0Handler(); return;
        case 0x01: CheepCheepJumpingState1Handler(); return;
        case 0x02: CheepCheepJumpingState2Handler(); return;
        case 0x03: CheepCheepJumpingState3Handler(); return;
        case 0x04: CheepCheepJumpingState4Handler(); return;
        case 0x05: CheepCheepJumpingState5Handler(); return;
    }
}

void CheepCheepJumpingState0Handler(void) {
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void CheepCheepJumpingState1Handler(void) {
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.e = 0xF4;
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto CheepCheepJumpingState1Handler_jr_6C32;
    gb.regs.e = 0x0C;
  CheepCheepJumpingState1Handler_jr_6C32:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    IncrementEntityState(); return;
}

void CheepCheepJumpingState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto CheepCheepJumpingState2Handler_jr_6C53;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xD4);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    func_019_6CD3();
    gb.regs.a = 0x24;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState(); return;
  CheepCheepJumpingState2Handler_jr_6C53:;
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto CheepCheepJumpingState2Handler_jr_6C68;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  CheepCheepJumpingState2Handler_jr_6C68:;
    AddEntitySpeedToPos_19();
    ApplyEntityInteractionWithBackground_trampoline(); return;
}

void CheepCheepJumpingState3Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    UpdateEntityYPosWithSpeed_19();
    func_019_6C99();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState(); return;
}

void CheepCheepJumpingState4Handler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) goto CheepCheepJumpingState4Handler_jr_6C96;
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    return;
  CheepCheepJumpingState4Handler_jr_6C96:;
    UpdateEntityYPosWithSpeed_19();
}

void func_019_6C99(void) {
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(0, gb_read(gb.regs.hl)));
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(0, gb_read(gb.regs.hl)));
    return;
}

void CheepCheepJumpingState5Handler(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CheepCheepJumpingState5Handler_jr_6CC2;
    gb_write(gb.regs.hl, 6);
  CheepCheepJumpingState5Handler_jr_6CC2:;
    UpdateEntityYPosWithSpeed_19();
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x70);
    if (GET_FLAG_C()) { func_019_6C99(); return; };
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) { ClearEntityStatus_19(); return; };
    return;
    gb.regs.a = gb_read(0xFFEC);
}

void func_019_6CD3(void) {
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 1;
    AddTranscientVfx();
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
    return;
}

void Unknown069SpriteVariants(void) {
  Unknown069SpriteVariants_variant0:;
    /* data: db $9A, $15 */;
    /* data: db $9C, $15 */;
}

void label_019_6CE7(void) {
    gb.regs.de = 0x6B78;
    RenderActiveEntitySpritesPair();
    AddEntityZSpeedToPos_19();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { ClearEntityStatus_19(); return; };
    return;
}

void label_019_6D00(void) {
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 0x0B;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 9;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 8;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_019_6CE7(); return; };
    func_019_6EC5();
    PushLinkOutOfEntity_19();
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: BananasSchuleState0Handler(); return;
        case 0x01: BananasSchuleState1Handler(); return;
        case 0x02: BananasSchuleState2Handler(); return;
        case 0x03: BananasSchuleState3Handler(); return;
    }
}

void BananasSchuleState0Handler(void) {
    func_019_7CF0();
    if (!GET_FLAG_C()) { jr_019_6D67(); return; };
    /* ld_dialog_low e, Dialog1CD */;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto BananasSchuleState0Handler_jr_6D63;
    /* ld_dialog_low e, Dialog1CC */;
    gb.regs.a = gb_read(0xDBB3);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto BananasSchuleState0Handler_jr_6D63;
    /* ld_dialog_low e, Dialog1C6 */;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto BananasSchuleState0Handler_jr_6D63;
    /* call_open_dialog Dialog1C7 */;
    IncrementEntityState(); return;
  BananasSchuleState0Handler_jr_6D63:;
    gb.regs.a = gb.regs.e;
    OpenDialogInTable1();
}

void jr_019_6D67(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void BananasSchuleState1Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BananasSchuleState1Handler_jr_6D86;
    gb_write(gb.regs.hl, gb.regs.b);
    /* jp_open_dialog Dialog1C9 */;
  BananasSchuleState1Handler_jr_6D86:;
    /* jp_open_dialog Dialog1C8 */;
}

void BananasSchuleState2Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0xCD;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.a = 0x24;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BananasSchuleState2Handler_jr_6DD4;
    gb.regs.hl = (0xDD20 + _1_2);
    gb.regs.a = 0xFF;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x31;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x52;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
  BananasSchuleState2Handler_jr_6DD4:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState(); return;
}

void Data_019_6DDC(void) {
    /* data: db $00, $01, $02, $01 */;
}

void BananasSchuleState3Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BananasSchuleState3Handler_jr_6E01;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
    CreateTradingItemEntity();
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  BananasSchuleState3Handler_jr_6E01:;
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto BananasSchuleState3Handler_jr_6E0A;
    gb.regs.a = 3;
    SetEntitySpriteVariant(); return;
  BananasSchuleState3Handler_jr_6E0A:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto BananasSchuleState3Handler_jr_6E14;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog1CA */;
  BananasSchuleState3Handler_jr_6E14:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6DDC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void Data_019_6E25(void) {
    /* data: db $00, $00, $50, $03, $00, $08, $52, $03, $00, $10, $54, $03, $10, $00, $56, $03 */;
    /* data: db $10, $08, $58, $03, $10, $10, $5A, $03, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $00, $00, $50, $03, $00, $08, $52, $03, $00, $10, $5C, $03, $10, $00, $56, $03 */;
    /* data: db $10, $08, $58, $03, $10, $10, $5E, $03, $10, $18, $60, $03, $FF, $FF, $FF, $FF */;
    /* data: db $00, $00, $62, $03, $00, $08, $64, $03, $00, $10, $66, $03, $10, $00, $68, $03 */;
    /* data: db $10, $08, $58, $03, $10, $10, $5E, $03, $10, $18, $60, $03, $FF, $FF, $FF, $FF */;
    /* data: db $00, $00, $6A, $03, $00, $08, $6C, $03, $00, $10, $6E, $03, $10, $00, $68, $03 */;
    /* data: db $10, $08, $58, $03, $10, $10, $5E, $03, $10, $18, $60, $03, $FF, $FF, $FF, $FF */;
}

void Data_019_6EA5(void) {
    /* data: db $10, $00, $74, $07, $10, $08, $76, $07, $10, $10, $74, $07, $10, $18, $76, $07 */;
    /* data: db $00, $10, $74, $07, $00, $18, $76, $07, $00, $00, $74, $07, $00, $08, $76, $07 */;
}

void func_019_6EC5(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6E25;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.c = 7;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 2;
    func_015_7964_trampoline();
    gb.regs.a = 0x78;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = 0x5C;
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x6EA5;
    gb.regs.c = 8;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto func_019_6EC5_jr_6EFA;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.c = alu_dec8(gb.regs.c);
  func_019_6EC5_jr_6EFA:;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 3;
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition(); return;
}

void Data_019_6F05(void) {
    /* data: db $08, $04, $70, $01, $08, $0C, $72, $01, $08, $14, $70, $21 */;
}

void BananasSchuleSaleEntityHandler(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BananasSchuleSaleEntityHandler_jr_6F25;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC3);
    gb.regs.hl = 0x6F05;
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect(); return;
  BananasSchuleSaleEntityHandler_jr_6F25:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xFE);
    if (GET_FLAG_Z()) { label_019_6D00(); return; };
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) { label_019_70A9(); return; };
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BananasSchuleSaleEntityHandler_jr_6F66;
    IncrementEntityState();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x48);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0xCD;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x28);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x28);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
  BananasSchuleSaleEntityHandler_jr_6F66:;
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 0x0A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 8;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 9;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    func_019_7039();
    PushLinkOutOfEntity_19();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_019_6F8B(); return;
        case 0x01: func_019_6F8C(); return;
        case 0x02: func_019_6FC5(); return;
    }
}

void func_019_6F8B(void) {
    return;
}

void func_019_6F8C(void) {
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    func_019_7CF0();
    if (!GET_FLAG_C()) { jr_019_6FB8(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) goto func_019_6F8C_jr_6FA0;
    /* ld_dialog_low a, Dialog18F */;
    jr_019_6FAD(); return;
  func_019_6F8C_jr_6FA0:;
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) goto func_019_6F8C_jr_6FAB;
    /* call_open_dialog Dialog0D8 */;
    jr_019_6FB0(); return;
  func_019_6F8C_jr_6FAB:;
    /* ld_dialog_low a, Dialog19B */;
}

void jr_019_6FAD(void) {
    OpenDialogInTable1();
}

void jr_019_6FB0(void) {
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    IncrementEntityState();
}

void jr_019_6FB8(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto jr_019_6FB8_jr_6FC1;
    gb.regs.e = alu_inc8(gb.regs.e);
  jr_019_6FB8_jr_6FC1:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void func_019_6FC5(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_019_6FC5_jr_6FD0;
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
  func_019_6FC5_jr_6FD0:;
    EntityLinkPositionXDifference_19();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 2);
    SetEntitySpriteVariant(); return;
}

void Data_019_6FD9(void) {
    /* data: db $F8, $F8, $5A, $02, $F8, $00, $5C, $02, $F8, $08, $5E, $02, $08, $00, $60, $02 */;
    /* data: db $08, $08, $62, $02, $F8, $10, $5A, $22, $F8, $00, $5E, $22, $F8, $08, $5C, $22 */;
    /* data: db $08, $00, $62, $22, $08, $08, $60, $22, $00, $10, $50, $22, $F8, $00, $54, $22 */;
    /* data: db $F8, $08, $52, $22, $08, $00, $58, $22, $08, $08, $56, $22, $00, $F8, $50, $02 */;
    /* data: db $F8, $00, $52, $02, $F8, $08, $54, $02, $08, $00, $56, $02, $08, $08, $58, $02 */;
}

void Data_019_7029(void) {
    /* data: db $F0, $00, $76, $01, $F0, $08, $76, $21, $00, $00, $78, $01, $00, $08, $78, $21 */;
}

void func_019_7039(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6FD9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.c = 5;
    RenderActiveEntitySpritesRect();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x7029;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    PushLinkOutOfEntity_19();
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x68);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto func_019_7039_jr_70A6;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto func_019_7039_jr_70A6;
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_019_7039_jr_70A6;
    func_019_7D16();
    if (!GET_FLAG_C()) goto func_019_7039_jr_70A6;
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_019_7039_jr_70A6;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto func_019_7039_jr_70A6;
    gb.regs.a = 8;
    gb_write(0xDC3D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 8);
  func_019_7039_jr_70A6:;
    CopyEntityPositionToActivePosition(); return;
}

void label_019_70A9(void) {
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.a = 9;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto label_019_70A9_jr_70C2;
    gb.regs.a = 0;
    gb_write(0xFFF1, gb.regs.a);
  label_019_70A9_jr_70C2:;
    func_019_717C();
    PushLinkOutOfEntity_19();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    SetEntitySpriteVariant();
    EntityLinkPositionYDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x13);
    alu_cp8(gb.regs.a, 0x26);
    if (!GET_FLAG_C()) goto label_019_70A9_jr_70F2;
    EntityLinkPositionXDifference_19();
    gb.regs.a = alu_add8(gb.regs.a, 0x13);
    alu_cp8(gb.regs.a, 0x26);
    if (!GET_FLAG_C()) goto label_019_70A9_jr_70F2;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  label_019_70A9_jr_70F2:;
    func_019_7CF0();
    if (!GET_FLAG_C()) return;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto label_019_70A9_jr_7112;
    /* ld_dialog_low e, Dialog0AF */;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (GET_FLAG_Z()) { jr_019_7114(); return; };
    /* ld_dialog_low e, Dialog0FB */;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { jr_019_7114(); return; };
  label_019_70A9_jr_7112:;
    /* ld_dialog_low e, Dialog0FA */;
}

void jr_019_7114(void) {
    gb.regs.a = gb.regs.e;
    OpenDialogInTable0(); return;
}

void Data_019_7118(void) {
    /* data: db $F4, $00, $64, $03, $F4, $08, $66, $03, $04, $00, $68, $03, $04, $08, $6A, $03 */;
    /* data: db $FF, $FF, $FF, $FF, $04, $F8, $70, $03, $F4, $00, $6C, $03, $F4, $08, $6E, $03 */;
    /* data: db $04, $00, $72, $03, $04, $08, $74, $03, $04, $F8, $7A, $03, $F4, $00, $6C, $03 */;
    /* data: db $F4, $08, $6E, $03, $04, $00, $7C, $03, $04, $08, $74, $03, $04, $10, $70, $23 */;
    /* data: db $F4, $00, $6E, $23, $F4, $08, $6C, $23, $04, $00, $74, $23, $04, $08, $72, $23 */;
    /* data: db $04, $10, $7A, $23, $F4, $00, $6E, $23, $F4, $08, $6C, $23, $04, $00, $74, $23 */;
    /* data: db $04, $08, $7C, $23 */;
}

void func_019_717C(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7118;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 5;
    RenderActiveEntitySpritesRect(); return;
}

void Data_019_7193(void) {
    /* data: db $00, $06, $0C, $13, $19, $20, $26, $2C, $33, $39, $00, $00, $00, $00, $00, $00 */;
    /* data: db $40, $43, $46, $49, $4C, $4F, $52, $55, $58, $5C, $00, $00, $00, $00, $00, $00 */;
    /* data: db $60, $60, $60, $60, $60, $60, $60, $60, $60 */;
}

void SeashellMansionEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  SeashellMansionEntityHandler_jr_71C0:;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_019_787D(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_019_74D8(); return; };
    gb.regs.a = gb_read(0xDBBB);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { jr_019_71FD(); return; };
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) { jr_019_71FD(); return; };
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { jr_019_71FD(); return; };
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_C()) { jr_019_71FD(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SeashellMansionEntityHandler_jr_71F6;
    gb.regs.a = gb_read(0xDBFA);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { jr_019_71FD(); return; };
    /* call_open_dialog Dialog179 */;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  SeashellMansionEntityHandler_jr_71F6:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void jr_019_71FD(void) {
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x38);
    if (!GET_FLAG_C()) goto jr_019_71FD_jr_7215;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) goto jr_019_71FD_jr_7215;
    gb.regs.hl = 0xC11E;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_C()) goto jr_019_71FD_jr_7215;
    gb.regs.hl = 0xC11D;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
  jr_019_71FD_jr_7215:;
    gb.regs.a = gb_read(0xDBBB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7193;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    func_019_73BD();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: SeashellMansionState0Handler(); return;
        case 0x01: SeashellMansionState1Handler(); return;
        case 0x02: SeashellMansionState2Handler(); return;
        case 0x03: SeashellMansionState3Handler(); return;
        case 0x04: SeashellMansionState4Handler(); return;
        case 0x05: SeashellMansionState5Handler(); return;
        case 0x06: SeashellMansionState6Handler(); return;
        case 0x07: SeashellMansionState7Handler(); return;
        case 0x08: SeashellMansionState8Handler(); return;
        case 0x09: SeashellMansionState9Handler(); return;
    }
}

void SeashellMansionState0Handler(void) {
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x3C);
    if (GET_FLAG_C()) goto SeashellMansionState0Handler_ret_7255;
    ClearLinkPositionIncrement();
    ResetSpinAttack();
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x58);
  SeashellMansionState0Handler_ret_7255:;
    return;
}

void SeashellMansionState1Handler(void) {
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { IncrementEntityState(); return; };
    return;
}

void SeashellMansionState2Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) goto SeashellMansionState2Handler_jr_727A;
    gb.regs.a = gb_read(0xFFE8);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
  SeashellMansionState2Handler_jr_727A:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_019_729A(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ret_019_729A(); return; };
    gb.regs.a = gb.regs.e;
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SeashellMansionState2Handler_jr_7294;
    gb.regs.a = 1;
  SeashellMansionState2Handler_jr_7294:;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 6;
    gb_write(0xFFF3, gb.regs.a);
}

void ret_019_729A(void) {
    return;
}

void SeashellMansionState3Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xDBBB);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { jr_019_72C9(); return; };
    GetEntityTransitionCountdown();
  SeashellMansionState3Handler_jr_72AC:;
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
    func_019_7921();
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = 0x56;
    gb_write(0xD368, gb.regs.a);
}

void label_019_72BF(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x3F);
    return;
}

void jr_019_72C9(void) {
    gb.regs.hl = 0xDB9E;
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto jr_019_72C9_jr_72E0;
    alu_bit(5, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_019_72F4(); return; };
    IncrementEntityState();
    gb_write(gb.regs.hl, 6);
    gb.regs.a = 0x23;
    gb_write(0xFFF2, gb.regs.a);
    label_019_72BF(); return;
  jr_019_72C9_jr_72E0:;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { jr_019_72F4(); return; };
    alu_bit(6, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_019_72F4(); return; };
    IncrementEntityState();
    gb_write(gb.regs.hl, 6);
    gb.regs.a = 0x23;
    gb_write(0xFFF2, gb.regs.a);
    label_019_72BF(); return;
}

void jr_019_72F4(void) {
    gb.regs.a = 0x1D;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 5);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x3F);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    return;
}

void SeashellMansionState4Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x3E);
    if (!GET_FLAG_Z()) goto SeashellMansionState4Handler_jr_731A;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x23);
  SeashellMansionState4Handler_jr_731A:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SeashellMansionState4Handler_ret_7327;
    /* call_open_dialog Dialog17B */;
    IncrementEntityState();
    gb_write(gb.regs.hl, 8);
  SeashellMansionState4Handler_ret_7327:;
    return;
}

void SeashellMansionState5Handler(void) {
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) return;
    /* call_open_dialog Dialog17A */;
    IncrementEntityState();
    gb_write(gb.regs.hl, 7);
    return;
}

void SeashellMansionState6Handler(void) {
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto SeashellMansionState6Handler_ret_7373;
    IncrementEntityState();
    gb.regs.a = 0xCF;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x48);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x14);
    gb.regs.a = 2;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x48);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
  SeashellMansionState6Handler_ret_7373:;
    return;
}

void SeashellMansionState7Handler(void) {
    return;
}

void SeashellMansionState8Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState(); return;
}

void SeashellMansionState9Handler(void) {
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0xCF;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x48);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x4F);
    IncrementEntityState();
    gb_write(gb.regs.hl, 7);
    return;
}

void Unknown070SpriteVariants(void) {
  Unknown070SpriteVariants_variant0:;
    /* data: db $50, $00 */;
    /* data: db $50, $20 */;
}

void Unknown071SpriteVariants(void) {
  Unknown071SpriteVariants_variant0:;
    /* data: db $3C, $00 */;
    /* data: db $3C, $20 */;
  Unknown071SpriteVariants_variant1:;
    /* data: db $3A, $00 */;
    /* data: db $3A, $20 */;
  Unknown071SpriteVariants_variant2:;
    /* data: db $1E, $00 */;
    /* data: db $1E, $60 */;
  Unknown071SpriteVariants_variant3:;
    /* data: db $1E, $10 */;
    /* data: db $1E, $70 */;
}

void func_019_73BD(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_019_73EE(); return; };
    gb.regs.a = 0x88;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x71D4;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.a = 0x80;
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(0xFFEC, gb.regs.a);
}

void jr_019_73DE(void) {
    loop_start: ;
    gb.regs.de = 0x71D4;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
  jr_019_73DE_jr_73EA:;
    alu_cp8(gb.regs.a, 0x80);
  jr_019_73DE_jr_73EC:;
    if (GET_FLAG_C()) { goto loop_start; };
}

void jr_019_73EE(void) {
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) return;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.a = 0x80;
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 0x78;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.de = 0x71D8;
    RenderActiveEntitySpritesPair();
    gb.regs.a = 0x98;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.de = 0x71D8;
    RenderActiveEntitySpritesPair(); return;
}

void Data_019_7418(void) {
    /* data: db $D8, $E8, $7C, $40, $D8, $F0, $7C, $20, $E8, $E8, $7C, $00, $E8, $F0, $7C, $60 */;
    /* data: db $F8, $F8, $7C, $00, $F8, $00, $7C, $60, $08, $08, $7C, $00, $08, $10, $7C, $60 */;
    /* data: db $18, $18, $7C, $00, $18, $20, $7C, $60, $28, $18, $7C, $40, $28, $20, $7C, $20 */;
    /* data: db $D8, $F8, $7C, $00, $D8, $00, $7C, $60, $E8, $08, $7C, $00, $E8, $10, $7C, $60 */;
    /* data: db $F8, $08, $7C, $40, $F8, $10, $7C, $20, $08, $F8, $7C, $40, $08, $00, $7C, $20 */;
    /* data: db $18, $F8, $7C, $00, $18, $00, $7C, $60, $28, $08, $7C, $00, $28, $10, $7C, $60 */;
    /* data: db $D8, $08, $7C, $40, $D8, $10, $7C, $20, $E8, $F8, $7C, $40, $E8, $00, $7C, $20 */;
    /* data: db $F8, $F8, $7C, $00, $F8, $00, $7C, $60, $08, $08, $7C, $00, $08, $10, $7C, $60 */;
    /* data: db $18, $08, $7C, $40, $18, $10, $7C, $20, $28, $F8, $7C, $40, $28, $00, $7C, $20 */;
    /* data: db $D8, $18, $7C, $00, $D8, $20, $7C, $60, $E8, $18, $7C, $40, $E8, $20, $7C, $20 */;
    /* data: db $F8, $08, $7C, $40, $F8, $10, $7C, $20, $08, $F8, $7C, $40, $08, $00, $7C, $20 */;
    /* data: db $18, $E8, $7C, $40, $18, $F0, $7C, $20, $28, $E8, $7C, $00, $28, $F0, $7C, $60 */;
}

void label_019_74D8(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_019_74EB(); return;
        case 0x01: func_019_7511(); return;
        case 0x02: func_019_756F(); return;
        case 0x03: func_019_7640(); return;
        case 0x04: func_019_767B(); return;
        case 0x05: func_019_76B1(); return;
        case 0x06: func_019_76CB(); return;
        case 0x07: func_019_7744(); return;
    }
}

void func_019_74EB(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_019_7509(); return; };
    alu_cp8(gb.regs.a, 0x30);
  func_019_74EB_jr_74F9:;
    if (GET_FLAG_C()) return;
    gb.regs.a = alu_sub8(gb.regs.a, 0x30);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x71D8;
    RenderActiveEntitySpritesPair(); return;
}

void jr_019_7509(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    IncrementEntityState(); return;
}

void func_019_7511(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { func_019_7526(); return; };
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.a = 0x1E;
    gb_write(0xFFF3, gb.regs.a);
    IncrementEntityState();
}

void func_019_7526(void) {
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, 4);
  func_019_7526_jr_752B:;
    gb.regs.e = 0xE4;
    if (GET_FLAG_Z()) goto func_019_7526_jr_7531;
    gb.regs.e = 0x84;
  func_019_7526_jr_7531:;
    gb.regs.a = gb.regs.e;
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_019_7526_jr_7547;
    gb.regs.a = 0x33;
    gb_write(0xFFF4, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    SetEntitySpriteVariant();
  func_019_7526_jr_7547:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7418;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 0x0C;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 0x0A;
    func_015_7964_trampoline(); return;
}

void Unknown072SpriteVariants(void) {
  Unknown072SpriteVariants_variant0:;
    /* data: db $7A, $00 */;
    /* data: db $7A, $20 */;
}

void func_019_756F(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    func_019_7526();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_019_756F_jr_7586;
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x28);
    IncrementEntityState(); return;
  func_019_756F_jr_7586:;
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) goto func_019_756F_jr_7597;
    gb.regs.hl = 0x7620;
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 6;
    func_015_7964_trampoline(); return;
  func_019_756F_jr_7597:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x737C;
    RenderActiveEntitySpritesPair(); return;
}

void Data_019_75A0(void) {
    /* data: db $F8, $00, $6E, $00, $F8, $08, $6E, $20, $F8, $00, $6E, $00, $F8, $08, $6E, $20 */;
    /* data: db $08, $00, $70, $00, $08, $08, $70, $20, $08, $00, $70, $00, $08, $08, $70, $20 */;
    /* data: db $F8, $F8, $68, $00, $F8, $00, $6A, $00, $F8, $08, $6A, $20, $F8, $10, $68, $20 */;
    /* data: db $08, $00, $6C, $00, $08, $08, $6C, $20, $08, $00, $6C, $00, $08, $08, $6C, $20 */;
    /* data: db $F8, $F8, $62, $00, $F8, $00, $64, $00, $F8, $08, $64, $20, $F8, $10, $62, $20 */;
    /* data: db $08, $00, $66, $00, $08, $08, $66, $20, $08, $00, $66, $00, $08, $08, $66, $20 */;
    /* data: db $F8, $F8, $5A, $00, $F8, $00, $5C, $00, $F8, $08, $5C, $20, $F8, $10, $5A, $20 */;
    /* data: db $08, $F8, $5E, $00, $08, $00, $60, $00, $08, $08, $60, $20, $08, $10, $5E, $20 */;
}

void Data_019_7620(void) {
    /* data: db $F8, $F8, $56, $00, $F8, $00, $58, $00, $F8, $08, $58, $20, $F8, $10, $56, $20 */;
    /* data: db $08, $F8, $56, $40, $08, $00, $58, $40, $08, $08, $58, $60, $08, $10, $56, $60 */;
}

void func_019_7640(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_019_7640_jr_765A;
    IncrementEntityState(); return;
  func_019_7640_jr_765A:;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto func_019_7640_jr_7664;
    gb.regs.a = 4;
  func_019_7640_jr_7664:;
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x75A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 6;
    func_015_7964_trampoline(); return;
}

void func_019_767B(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    func_019_78F1();
    UpdateEntityYPosWithSpeed_19();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_019_767B_ret_76B0;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x70);
    if (GET_FLAG_C()) goto func_019_767B_ret_76B0;
    gb_write(gb.regs.hl, 0x70);
    gb.regs.a = 0x17;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) { IncrementEntityState(); return; };
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  func_019_767B_ret_76B0:;
    return;
}

void func_019_76B1(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    func_019_78F1();
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto func_019_76B1_ret_76CA;
    IncrementEntityState();
    gb.regs.a = 0x0F;
    gb_write(0xD368, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
  func_019_76B1_ret_76CA:;
    return;
}

void func_019_76CB(void) {
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.e = 0xE4;
    if (GET_FLAG_Z()) goto func_019_76CB_jr_76D6;
    gb.regs.e = 0x84;
  func_019_76CB_jr_76D6:;
    gb.regs.a = gb.regs.e;
    gb_write(0xDC3F, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_019_76CB_jr_7709;
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
    /* call_open_dialog Dialog09F */;
    gb.regs.a = gb_read(0xDB9E);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(0xDB9E, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xDBFA, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDC3B, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDBBB, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    IncrementEntityState();
  func_019_76CB_jr_7709:;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, 0x13);
    gb_write(gb.regs.hl, gb.regs.a);
    CopyEntityPositionToActivePosition();
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x6B;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC16A, gb.regs.a);
    gb_write(0xC122, gb.regs.a);
    gb_write(0xC121, gb.regs.a);
    func_019_784F();
    func_019_78EC(); return;
}

void func_019_7744(void) {
    func_019_78EC();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    ClearEntityStatus_19(); return;
}

void Data_019_774F(void) {
    /* data: db $00, $04, $72, $00, $E0, $04, $72, $00 */;
    /* data: db $00, $F0, $78, $20, $00, $F8, $78, $40 */;
    /* data: db $00, $10, $78, $60, $00, $18, $78, $00 */;
    /* data: db $F0, $E8, $76, $20, $F0, $F0, $76, $40 */;
    /* data: db $F0, $18, $76, $60, $F0, $20, $76, $00 */;
    /* data: db $E8, $F4, $74, $20, $E8, $14, $74, $00 */;
}

void Data_019_777F(void) {
    /* data: db $F8, $04, $72, $00, $D8, $04, $72, $00 */;
    /* data: db $FC, $E8, $78, $20, $FC, $F0, $78, $40 */;
    /* data: db $FC, $18, $78, $60, $FC, $20, $78, $00 */;
    /* data: db $E8, $E0, $76, $20, $E8, $E8, $76, $40 */;
    /* data: db $E8, $20, $76, $60, $E8, $28, $76, $00 */;
    /* data: db $E0, $F0, $74, $20, $E0, $18, $74, $00 */;
    /* data: db $00, $00, $74, $20, $00, $08, $74, $00 */;
}

void Data_019_77B7(void) {
    /* data: db $F0, $04, $72, $00, $D0, $04, $72, $00 */;
    /* data: db $F8, $E0, $78, $20, $F8, $E8, $78, $40 */;
    /* data: db $F8, $20, $78, $60, $F8, $28, $78, $00 */;
    /* data: db $E0, $D8, $76, $20, $E0, $E0, $76, $40 */;
    /* data: db $E0, $28, $76, $60, $E0, $30, $76, $00 */;
    /* data: db $D8, $EC, $74, $20, $D8, $1C, $74, $00 */;
    /* data: db $F8, $FC, $74, $20, $F8, $0C, $74, $00 */;
    /* data: db $00, $F8, $76, $20, $00, $00, $76, $40 */;
    /* data: db $00, $08, $76, $60, $00, $10, $76, $00 */;
}

void Data_019_77FF(void) {
    /* data: db $E4, $04, $72, $00, $00, $F8, $78, $20 */;
    /* data: db $00, $00, $78, $40, $00, $08, $78, $60 */;
    /* data: db $00, $10, $78, $00, $F4, $F0, $76, $20 */;
    /* data: db $F4, $F8, $76, $40, $F4, $10, $76, $60 */;
    /* data: db $F4, $18, $76, $00, $EC, $F8, $74, $20 */;
    /* data: db $EC, $10, $74, $00, $F0, $D8, $78, $20 */;
    /* data: db $F0, $E0, $78, $40, $F0, $28, $78, $60 */;
    /* data: db $F0, $30, $78, $00, $CC, $E8, $74, $20 */;
    /* data: db $CC, $20, $74, $00 */;
}

void Data_019_7843(void) {
    /* data: dw Data_019_774F */;
    /* data: dw Data_019_777F */;
    /* data: dw Data_019_77B7 */;
    /* data: dw Data_019_77FF */;
}

void Data_019_784B(void) {
    /* data: db $0C, $0E, $12, $11 */;
}

void func_019_784F(void) {
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    /* nop */;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x784B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7843;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 0x10;
    func_015_7964_trampoline(); return;
}

void Unknown073SpriteVariants(void) {
  Unknown073SpriteVariants_variant0:;
    /* data: db $7E, $00 */;
    /* data: db $7E, $20 */;
}

void func_019_787D(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.de = 0x766E;
    RenderActiveEntitySpritesPair();
    UpdateEntityYPosWithSpeed_19();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { ret_019_78CB(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  func_019_787D_jr_7898:;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x70);
    if (GET_FLAG_C()) { ret_019_78CB(); return; };
    gb_write(gb.regs.hl, 0x70);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) { ret_019_78CB(); return; };
    gb.regs.a = 1;
    gb_write(0xFFF3, gb.regs.a);
    ClearEntityStatus_19();
    gb.regs.hl = 0xDB9E;
    gb.regs.a = gb_read(0xDBBB);
  func_019_787D_jr_78B6:;
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto func_019_787D_jr_78BE;
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
    jr_019_78C0(); return;
  func_019_787D_jr_78BE:;
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
}

void jr_019_78C0(void) {
    gb.regs.a = alu_add8(gb.regs.a, 1);
    alu_daa();
    gb_write(0xDBBB, gb.regs.a);
    /* call_open_dialog Dialog0EF */;
}

void ret_019_78CB(void) {
    return;
}

void Data_019_78CC(void) {
    /* data: db $F8, $00, $52, $00, $F8, $08, $52, $20, $08, $00, $54, $00, $08, $08, $54, $20 */;
}

void Data_019_78DC(void) {
    /* data: db $F8, $00, $54, $40, $F8, $08, $54, $60, $08, $00, $52, $40, $08, $08, $52, $60 */;
}

void func_019_78EC(void) {
    gb.regs.hl = 0x78DC;
    jr_019_78F4(); return;
}

void func_019_78F1(void) {
    gb.regs.hl = 0x78CC;
}

void jr_019_78F4(void) {
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 2;
    func_015_7964_trampoline(); return;
}

void Data_019_78FE(void) {
    /* data: db $98, $50, $8D, $6C, $6E, $6C, $6E, $6C, $6E, $6C, $6E, $6C, $6E, $6C, $6E, $6C */;
    /* data: db $6E, $98, $51, $8D, $6D, $6F, $6D, $6F, $6D, $6F, $6D, $6F, $6D, $6F, $6D, $6F */;
    /* data: db $6D, $6F, $00 */;
}

void func_019_7921(void) {
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x23;
    gb.regs.a = 0x22;
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.de = 0x78FE;
  func_019_7921_loop_792F:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_019_7921_loop_792F;
    gb.regs.bc = gb_pop16();
    gb.regs.a = 0x89;
    gb_write(0xD7DE, gb.regs.a);
    gb_write(0xD7EE, gb.regs.a);
    gb_write(0xD7FE, gb.regs.a);
    gb_write(0xD80E, gb.regs.a);
    gb_write(0xD81E, gb.regs.a);
    gb_write(0xD82E, gb.regs.a);
    gb_write(0xD83E, gb.regs.a);
    return;
}

void Data_019_794E(void) {
    /* data: db $FC, $04, $00, $00 */;
}

void Data_019_7952(void) {
    /* data: db $FF, $00, $00, $00 */;
}

void Data_019_7956(void) {
    /* data: db $00, $00, $04, $FC */;
}

void Data_019_795A(void) {
    /* data: db $00, $00, $00 */;
}

void Data_019_795D(void) {
    /* data: db $FF, $0C, $18, $24, $30, $3C, $48 */;
}

void UpdateEntityPositionForRoomTransition(void) {
    gb.regs.a = gb_read(0xC124);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto UpdateEntityPositionForRoomTransition_jr_796C;
    return;
  UpdateEntityPositionForRoomTransition_jr_796C:;
    gb.regs.a = gb_read(0xC125);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x794E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0x7952;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.hl = 0x7956;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
  UpdateEntityPositionForRoomTransition_jr_7985:;
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.hl = 0x795A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.d = alu_rl(gb.regs.d);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC220;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.d = alu_rl(gb.regs.d);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC230;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x7F);
    if (!GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_turtleRockHeadEnd;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    label_019_7A74(); return;
  UpdateEntityPositionForRoomTransition_turtleRockHeadEnd:;
    alu_cp8(gb.regs.a, 0x87);
    if (!GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_desertLanmolaEnd;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_019_7A74(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE6, gb.regs.a);
    gb.regs.a = 6;
  UpdateEntityPositionForRoomTransition_loop_019_79E6:;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x795D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFFE6);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFE6);
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_loop_019_79E6;
  UpdateEntityPositionForRoomTransition_desertLanmolaEnd:;
    alu_cp8(gb.regs.a, 0xC1);
    if (!GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_marinAtTheShoreEnd;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_019_7A74(); return; };
    gb.regs.e = 0x10;
    gb.regs.hl = 0xD355;
  UpdateEntityPositionForRoomTransition_loop_019_7A1E:;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_loop_019_7A1E;
    gb.regs.e = 0x10;
    gb.regs.hl = 0xD375;
  UpdateEntityPositionForRoomTransition_loop_019_7A2A:;
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_loop_019_7A2A;
    label_019_7A74(); return;
  UpdateEntityPositionForRoomTransition_marinAtTheShoreEnd:;
    alu_cp8(gb.regs.a, 0x69);
    if (GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_jr_019_7A64;
    alu_cp8(gb.regs.a, 0xB0);
    if (GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_jr_019_7A64;
    alu_cp8(gb.regs.a, 0x6D);
    if (!GET_FLAG_Z()) { label_019_7A74(); return; };
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_jr_019_7A4C;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { label_019_7A74(); return; };
  UpdateEntityPositionForRoomTransition_jr_019_7A4C:;
    gb.regs.e = 6;
    gb.regs.hl = 0xD300;
  UpdateEntityPositionForRoomTransition_loop_019_7A51:;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_loop_019_7A51;
    gb.regs.e = 6;
    gb.regs.hl = 0xD310;
  UpdateEntityPositionForRoomTransition_loop_019_7A5D:;
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto UpdateEntityPositionForRoomTransition_loop_019_7A5D;
  UpdateEntityPositionForRoomTransition_jr_019_7A64:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}

void label_019_7A74(void) {
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.hl = 0xC3E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_C()) goto label_019_7A74_jr_7A8F;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x78);
    if (GET_FLAG_C()) return;
  label_019_7A74_jr_7A8F:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xA7);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void func_019_7A9A(void) {
    gb.regs.a = gb_read(0xC1A5);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 0xB6);
    gb.regs.l = gb.regs.a;
    gb.regs.a = 0x7A;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    /* jp hl - dynamic dispatch */;
}

void Data_019_7AB6(void) {
  Data_019_7AB6__00:;
    /* data: dw func_019_7ABE */;
  Data_019_7AB6__01:;
    /* data: dw func_019_7ADB */;
  Data_019_7AB6__02:;
    /* data: dw func_019_7AF8 */;
  Data_019_7AB6__03:;
    /* data: dw func_019_7B04 */;
}

void func_019_7ABE(void) {
    gb.regs.hl = 0xDD77;
    gb.regs.de = 0xDD77;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(gb.regs.hl--);
    gb_push16(gb.regs.af);
    gb.regs.c = 7;
  func_019_7ABE_loop_7ACA:;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de--;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_019_7ABE_loop_7ACA;
    gb.regs.hl = gb_pop16();
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb.regs.b;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb.regs.h;
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void func_019_7ADB(void) {
    gb.regs.hl = wAnimatedScrollingTilesStorage_tile1;
    gb.regs.de = wAnimatedScrollingTilesStorage_tile1;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_push16(gb.regs.af);
    gb.regs.c = 7;
  func_019_7ADB_loop_7AE7:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_019_7ADB_loop_7AE7;
    gb.regs.hl = gb_pop16();
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb.regs.b;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb.regs.h;
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void func_019_7AF8(void) {
    gb.regs.hl = wAnimatedScrollingTilesStorage_tile2;
    gb.regs.e = 0x10;
  func_019_7AF8_loop_7AFD:;
    gb_write(gb.regs.hl, alu_rlc(gb_read(gb.regs.hl)));
    gb.regs.hl++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_019_7AF8_loop_7AFD;
    return;
}

void func_019_7B04(void) {
    gb.regs.hl = wAnimatedScrollingTilesStorage_tile3;
    gb.regs.e = 0x10;
  func_019_7B04_loop_7B09:;
    gb_write(gb.regs.hl, alu_rrc(gb_read(gb.regs.hl)));
    gb.regs.hl++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_019_7B04_loop_7B09;
    return;
}

void SmashedRockSpriteRect(void) {
  SmashedRockSpriteRect_frame0:;
    /* data: db -3, -4, $16, OAM_GBC_PAL_0 | OAMF_PAL0, -4, 12, $16, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db 14, -5, $16, OAM_GBC_PAL_0 | OAMF_PAL0, 12, 13, $16, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  SmashedRockSpriteRect_frame1:;
    /* data: db -5, -3, $16, OAM_GBC_PAL_0 | OAMF_PAL0, -6, 11, $16, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db 11, -4, $16, OAM_GBC_PAL_0 | OAMF_PAL0,  9, 12, $16, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  SmashedRockSpriteRect_frame2:;
    /* data: db -3, -2, $16, OAM_GBC_PAL_0 | OAMF_PAL0, -4, 10, $16, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db 11, -3, $16, OAM_GBC_PAL_0 | OAMF_PAL0,  8, 10, $16, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  SmashedRockSpriteRect_frame3:;
    /* data: db -1,  0, $16, OAM_GBC_PAL_0 | OAMF_PAL0,  0,  8, $16, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db 10, -1, $16, OAM_GBC_PAL_0 | OAMF_PAL0,  8,  9, $16, OAM_GBC_PAL_0 | OAMF_PAL0 */;
}

void CutLeavesSpriteRect(void) {
  CutLeavesSpriteRect_frame0:;
    /* data: db 2, -4, $28, OAM_GBC_PAL_0 | OAMF_PAL0,              -5,  4, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    /* data: db 5,  6, $28, OAM_GBC_PAL_0 | OAMF_PAL0,               1, 10, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  CutLeavesSpriteRect_frame1:;
    /* data: db 1, -1, $28, OAM_GBC_PAL_0 | OAMF_PAL0,              -7,  4, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    /* data: db 8,  6, $28, OAM_GBC_PAL_0 | OAMF_PAL0,               2,  7, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  CutLeavesSpriteRect_frame2:;
    /* data: db 0,  0, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP, -8,  2, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    /* data: db 4,  4, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP, 10,  7, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  CutLeavesSpriteRect_frame3:;
    /* data: db -2,  1, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP,  4,  1, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    /* data: db 4,  5, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP, 12,  7, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  CutLeavesSpriteRect_frame4:;
    /* data: db -3,  0, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP,  4, -2, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    /* data: db 8,  8, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP, 14,  9, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  CutLeavesSpriteRect_frame5:;
    /* data: db -4, -1, $28, OAM_GBC_PAL_0 | OAMF_PAL0,               4, -6, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db 8,  9, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP, 15, 10, $28, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  CutLeavesSpriteRect_frame6:;
    /* data: db -5, -2, $28, OAM_GBC_PAL_0 | OAMF_PAL0,               3, -7, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db 8, 12, $28, OAM_GBC_PAL_0 | OAMF_PAL0,              17, 11, $28, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  CutLeavesSpriteRect_frame7:;
    /* data: db -6, -3, $28, OAM_GBC_PAL_0 | OAMF_PAL0,               1, -9, $28, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db 9, 13, $28, OAM_GBC_PAL_0 | OAMF_PAL0,              15, 12, $28, OAM_GBC_PAL_0 | OAMF_PAL0 */;
}

void CutLeavesSwampSpriteRect(void) {
  CutLeavesSwampSpriteRect_frame0:;
    /* data: db 2, -4, $28, OAM_GBC_PAL_6 | OAMF_PAL0,              -5,  4, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    /* data: db 5,  6, $28, OAM_GBC_PAL_6 | OAMF_PAL0,               1, 10, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
  CutLeavesSwampSpriteRect_frame1:;
    /* data: db 1, -1, $28, OAM_GBC_PAL_6 | OAMF_PAL0,              -7,  4, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    /* data: db 8,  6, $28, OAM_GBC_PAL_6 | OAMF_PAL0,               2,  7, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
  CutLeavesSwampSpriteRect_frame2:;
    /* data: db 0,  0, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP, -8,  2, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    /* data: db 4,  4, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP, 10,  7, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
  CutLeavesSwampSpriteRect_frame3:;
    /* data: db -2,  1, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP,  4,  1, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    /* data: db 4,  5, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP, 12,  7, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
  CutLeavesSwampSpriteRect_frame4:;
    /* data: db -3,  0, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP,  4, -2, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP | OAMF_YFLIP */;
    /* data: db 8,  8, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP, 14,  9, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
  CutLeavesSwampSpriteRect_frame5:;
    /* data: db -4, -1, $28, OAM_GBC_PAL_6 | OAMF_PAL0,               4, -6, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db 8,  9, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP, 15, 10, $28, OAM_GBC_PAL_6 | OAMF_PAL0 */;
  CutLeavesSwampSpriteRect_frame6:;
    /* data: db -5, -2, $28, OAM_GBC_PAL_6 | OAMF_PAL0,               3, -7, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db 8, 12, $28, OAM_GBC_PAL_6 | OAMF_PAL0,              17, 11, $28, OAM_GBC_PAL_6 | OAMF_PAL0 */;
  CutLeavesSwampSpriteRect_frame7:;
    /* data: db -6, -3, $28, OAM_GBC_PAL_6 | OAMF_PAL0,               1, -9, $28, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db 9, 13, $28, OAM_GBC_PAL_6 | OAMF_PAL0,              15, 12, $28, OAM_GBC_PAL_6 | OAMF_PAL0 */;
}

void func_019_7C50(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto func_019_7C50_leaves;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_019_7C50_leaves;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x790F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect(); return;
  func_019_7C50_leaves:;
    gb.regs.a = alu_inc8(gb.regs.a);
    if (!GET_FLAG_Z()) goto func_019_7C50_nonSwamp;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    alu_rra();
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_019_7C50_nonSwamp;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_019_7C50_nonSwamp;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x32);
    if (!GET_FLAG_Z()) goto func_019_7C50_nonSwamp;
    gb.regs.hl = 0x79CF;
    goto func_019_7C50_renderLeaves;
  func_019_7C50_nonSwamp:;
    gb.regs.hl = 0x794F;
  func_019_7C50_renderLeaves:;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1C);
    gb.regs.a = alu_xor8(gb.regs.a, 0x1C);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect(); return;
}

void PushLinkOutOfEntity_19(void) {
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) { jr_019_7CCE(); return; };
    CopyLinkFinalPositionToPosition();
    gb.regs.a = gb_read(0xC1A6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PushLinkOutOfEntity_19_jr_7CC1;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC39F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto PushLinkOutOfEntity_19_jr_7CC1;
    gb.regs.hl = 0xC28F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
  PushLinkOutOfEntity_19_jr_7CC1:;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.e = gb.regs.a;
    ResetPegasusBoots();
    ClearLinkPositionIncrement();
    gb.regs.a = gb.regs.e;
    alu_scf();
    return;
}

void jr_019_7CCE(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void EntityVariantForDirection_19(void) {
  EntityVariantForDirection_19_right:;
    /* data: db 6 */;
  EntityVariantForDirection_19_left:;
    /* data: db 4 */;
  EntityVariantForDirection_19_up:;
    /* data: db 2 */;
  EntityVariantForDirection_19_down:;
    /* data: db 0 */;
}

void SetEntityVariantForDirection_19(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7ACF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    SetEntitySpriteVariant(); return;
}

void func_019_7CF0(void) {
    gb.regs.e = gb.regs.b;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 0x28);
}

void func_019_7CFB(void) {
    if (!GET_FLAG_C()) { jr_019_7D3B(); return; };
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { jr_019_7D3B(); return; };
    gb.regs.e = alu_inc8(gb.regs.e);
    gb_push16(gb.regs.de);
    func_019_7E3A();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    gb.regs.de = gb_pop16();
    if (!GET_FLAG_Z()) { jr_019_7D3B(); return; };
}

void func_019_7D16(void) {
    gb.regs.hl = 0xC1AD;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC134;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_019_7D3B(); return; };
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_019_7D3B(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_019_7D3B(); return; };
    alu_scf();
    return;
}

void jr_019_7D3B(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void ReturnIfNonInteractive_19(void) {
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_19_skip;
  ReturnIfNonInteractive_19_allowInactiveEntity:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_19_skip;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_19_creditsEnd;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_19_skip;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_19_skip;
  ReturnIfNonInteractive_19_creditsEnd:;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_19_skip;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_19_return;
  ReturnIfNonInteractive_19_skip:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ReturnIfNonInteractive_19_return:;
    return;
}

void ApplyRecoilIfNeeded_19(void) {
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyRecoilIfNeeded_19_return;
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
    UpdateEntityPosWithSpeed_19();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto ApplyRecoilIfNeeded_19_restoreOriginalSpeed;
    ApplyEntityInteractionWithBackground_trampoline();
  ApplyRecoilIfNeeded_19_restoreOriginalSpeed:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ApplyRecoilIfNeeded_19_return:;
    return;
}

void UpdateEntityPosWithSpeed_19(void) {
    AddEntitySpeedToPos_19();
}

void UpdateEntityYPosWithSpeed_19(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.c = gb.regs.a;
    AddEntitySpeedToPos_19();
    gb.regs.bc = gb_pop16();
    return;
}

void AddEntitySpeedToPos_19(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_19_return;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC260;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC200;
  AddEntitySpeedToPos_19_updatePosition:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_19_positive;
    gb.regs.e = 0xF0;
  AddEntitySpeedToPos_19_positive:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  AddEntitySpeedToPos_19_return:;
    return;
}

void AddEntityZSpeedToPos_19(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { AddEntitySpeedToPos_19_return(); return; };
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC330;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC310;
    AddEntitySpeedToPos_19_updatePosition(); return;
}

void EntityLinkPositionXDifference_19(void) {
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto EntityLinkPositionXDifference_19_jr_7E19;
    gb.regs.e = alu_inc8(gb.regs.e);
  EntityLinkPositionXDifference_19_jr_7E19:;
    gb.regs.d = gb.regs.a;
    return;
}

void EntityLinkPositionYDifference_19(void) {
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto EntityLinkPositionYDifference_19_jr_7E29;
    gb.regs.e = alu_inc8(gb.regs.e);
  EntityLinkPositionYDifference_19_jr_7E29:;
    gb.regs.d = gb.regs.a;
    return;
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto EntityLinkPositionYDifference_19_jr_7E38;
    gb.regs.e = alu_inc8(gb.regs.e);
  EntityLinkPositionYDifference_19_jr_7E38:;
    gb.regs.d = gb.regs.a;
    return;
}

void func_019_7E3A(void) {
    EntityLinkPositionXDifference_19();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_019_7E3A_jr_7E47;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_019_7E3A_jr_7E47:;
    gb_push16(gb.regs.af);
    EntityLinkPositionYDifference_19();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_019_7E3A_jr_7E55;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_019_7E3A_jr_7E55:;
    gb.regs.de = gb_pop16();
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto func_019_7E3A_jr_7E5D;
    gb.regs.a = gb_read(0xFFD7);
    jr_019_7E5F(); return;
  func_019_7E3A_jr_7E5D:;
    gb.regs.a = gb_read(0xFFD8);
}

void jr_019_7E5F(void) {
    gb.regs.e = gb.regs.a;
    return;
}

void ClearEntityStatus_19(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void AnimateBossAgony_19(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: AnimateBossAgonyInit_19(); return;
        case 0x01: AnimateBossAgonyFlashing_19(); return;
        case 0x02: AnimateBossAgonyExploding_19(); return;
    }
}

void AnimateBossAgonyInit_19(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
}

void IncrementEntityPrivateState2_19(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void AnimateBossAgonyFlashing_19(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0xC0);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityPrivateState2_19(); return;
}

void AnimateBossAgonyExploding_19(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto AnimateBossAgonyExploding_19_notDeadYet;
    PlayBombExplosionSfx();
    label_27DD();
    DidKillEnemy(); return;
  AnimateBossAgonyExploding_19_notDeadYet:;
    goto AnimateBossAgonyExploding_19_animateExplosions;
  AnimateBossAgonyExploding_19_animateExplosions:;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) return;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_sub8(gb.regs.a, 0x14);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    label_019_7EC4(); return;
}

void label_019_7EC4(void) {
    ReturnIfNonInteractive_19_allowInactiveEntity();
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.a = 0x13;
    gb_write(0xFFF4, gb.regs.a);
    return;
    gb.regs.a = 0x36;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_019_7EC4_jr_7EF9;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF0);
    jr_019_7F05(); return;
  label_019_7EC4_jr_7EF9:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
}

void jr_019_7F05(void) {
    ClearEntityStatus_19();
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x1A);
    return;
}

void func_019_7F0E(void) {
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto func_019_7F0E_indoorsBEnd;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto func_019_7F0E_indoorsBEnd;
    gb.regs.d = alu_inc8(gb.regs.d);
  func_019_7F0E_indoorsBEnd:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    return;
}
