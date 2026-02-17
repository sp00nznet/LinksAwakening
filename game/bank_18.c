/* Auto-generated from LADX Disassembly - Bank 0x18 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void MamuAndFrogsEntityHandler(void);
void MamuAndFrogsState0Handler(void);
void func_018_407C(void);
void MamuOpenDialogAtBottom(void);
void MamuAndFrogsState1Handler(void);
void jr_018_40A9(void);
void jr_018_40AF(void);
void ret_018_40D6(void);
void MamuAndFrogsSingingHandler(void);
void func_018_40F1(void);
void func_018_40FC(void);
void func_018_4107(void);
void func_018_4112(void);
void Data_018_411E(void);
void Data_018_4158(void);
void Data_018_4192(void);
void MamuAndFrogsState3Handler(void);
void MamuAndFrogsGrantSongHandler(void);
void MamuAndFrogsState5Handler(void);
void MamuAndFrogsState6Handler(void);
void label_018_42B2(void);
void jr_018_42B7(void);
void Data_018_42BA(void);
void func_018_435A(void);
void label_018_4373(void);
void func_018_438F(void);
void func_018_439A(void);
void label_018_43B2(void);
void MamuAndFrogsSpriteVariants(void);
void MamuAndFrogsSpriteList(void);
void func_018_43E3(void);
void label_018_4402(void);
void label_018_444E(void);
void label_018_449D(void);
void ManboAndFishesEntityHandler(void);
void ManboAndFishesState0Handler(void);
void func_018_455C(void);
void ManboAndFishesState1Handler(void);
void jr_018_4581(void);
void jr_018_458A(void);
void ManboAndFishesSingHandler(void);
void func_018_45A0(void);
void ret_018_45B6(void);
void Data_018_45B7(void);
void Data_018_4605(void);
void Data_018_4653(void);
void ManboAndFishesState3Handler(void);
void jr_018_471D(void);
void jr_018_4722(void);
void Data_018_4728(void);
void ManboAndFishesGrantSongHandler(void);
void Data_018_474D(void);
void ManboAndFishesState5Handler(void);
void Data_018_478F(void);
void ManboAndFishes1SpriteVariants(void);
void func_018_4833(void);
void jr_018_4857(void);
void jr_018_485C(void);
void Data_018_4894(void);
void Data_018_48A0(void);
void ManboAndFishes2SpriteVariants(void);
void label_018_48C8(void);
void func_018_48DE(void);
void jr_018_491D(void);
void Data_018_4928(void);
void MermaidStatueEntityHandler(void);
void MermaidStatueInitHandler(void);
void MermaidStatueInteractiveHandler(void);
void MermaidStatueOpeningHandler(void);
void ZoraSpriteVariants(void);
void ZoraEntityHandler(void);
void jr_018_4A2A(void);
void ZoraState0Handler(void);
void ZoraState1Handler(void);
void ZoraState2Handler(void);
void Data_018_4A9A(void);
void ZoraState3Handler(void);
void Data_018_4B15(void);
void Data_018_4B55(void);
void MrWrite2SpriteVariants(void);
void MrWrite1SpriteVariants(void);
void MrWriteEntityHandler(void);
void jr_018_4BB5(void);
void MrWriteState0Handler(void);
void MrWriteState1Handler(void);
void MrWriteState2Handler(void);
void label_018_4C75(void);
void func_018_4C87(void);
void func_018_4CA3(void);
void func_018_4CAB(void);
void func_018_4CB0(void);
void func_018_4CBE(void);
void func_018_4CD1(void);
void func_018_4CF2(void);
void GrandmaUlrira1SpriteVariants(void);
void GrandmaUlrira2SpriteVariants(void);
void GrandmaUlrira3SpriteVariants(void);
void GrandmaUlriraEntityHandler(void);
void jr_018_4D36(void);
void jr_018_4D58(void);
void GrandmaUlriraState0Handler(void);
void jr_018_4DA3(void);
void GrandmaUlriraState1Handler(void);
void GrandmaUlriraState2Handler(void);
void GrandmaUlriraState3Handler(void);
void Data_018_4E2B(void);
void PapahlsWifeEntityHandler(void);
void PapahlsWifeState0Handler(void);
void label_018_4E91(void);
void jr_018_4E9F(void);
void jr_018_4EA4(void);
void PapahlsWifeState1Handler(void);
void ret_018_4ECE(void);
void PapahlsWifeState2Handler(void);
void MadBatterEntityHandler(void);
void MadBatterState0Handler(void);
void MadBatterState1Handler(void);
void MadBatterState2Handler(void);
void MadBatterState3Handler(void);
void MadBatterState4Handler(void);
void MadBatterUpgradedMaximumTable(void);
void MadBatterUpgradeDialogs(void);
void MadBatterState5Handler(void);
void jr_018_4F9E(void);
void MadBatterState6Handler(void);
void MadBatterState7Handler(void);
void MadBatterState8Handler(void);
void OpenDialogAtBottom(void);
void Data_018_5090(void);
void Data_018_509C(void);
void RenderMadBatterSprite(void);
void MadBatterSpriteVariants(void);
void MadBatterRenderSmallSprite(void);
void func_018_50D2(void);
void MadBatterApplyFlashingEffect(void);
void Data_018_5110(void);
void Data_018_5140(void);
void Data_018_5170(void);
void func_018_5174(void);
void label_018_51A4(void);
void func_018_51B0(void);
void BunnyD3SpriteVariants(void);
void BunnyD3EntityHandler(void);
void jr_018_521C(void);
void AnimalD2SpriteVariants(void);
void AnimalD2EntityHandler(void);
void BunnyCallingMarinSpriteVariants(void);
void BunnyCallingMarinEntityHandler(void);
void BunnyCallingMarinState0Handler(void);
void BunnyCallingMarinState1Handler(void);
void func_018_5321(void);
void BunnyCallingMarinState2Handler(void);
void BunnyCallingMarinState3Handler(void);
void jr_018_5375(void);
void ret_018_53CD(void);
void MovingBlockMoverEntityHandler(void);
void MovingBlockMoverHandleSpriteVariants(void);
void MovingBlockMoverRodSpriteVariants(void);
void RenderMovingBlockMover(void);
void Data_018_54B9(void);
void label_018_54BD(void);
void jr_018_54DF(void);
void WalrusEntityHandler(void);
void WalrusState0Handler(void);
void WalrusWakingUpHandler(void);
void WalrusState2Handler(void);
void jr_018_5612(void);
void Data_018_5616(void);
void WalrusState3Handler(void);
void jr_018_56CE(void);
void WalrusState4Handler(void);
void WalrusState5Handler(void);
void func_018_572E(void);
void WalrusDisappearHandler(void);
void WalrusState7Handler(void);
void WalrusState8Handler(void);
void Data_018_579B(void);
void Data_018_585B(void);
void func_018_586B(void);
void label_018_589A(void);
void func_018_58AD(void);
void func_018_58C1(void);
void func_018_58DD(void);
void func_018_58F1(void);
void Data_018_5927(void);
void Data_018_5963(void);
void func_018_596B(void);
void label_018_59AC(void);
void func_018_59AE(void);
void MarinAsFollowerSpriteVariants(void);
void Data_018_59E4(void);
void MarinAsFollowerHandler(void);
void jr_018_5A3F(void);
void func_018_5A79(void);
void ret_018_5A7F(void);
void Data_018_5A80(void);
void Data_018_5A88(void);
void Data_018_5A8A(void);
void jr_018_5A8C(void);
void jr_018_5B3B(void);
void jr_018_5B55(void);
void jr_018_5B61(void);
void jr_018_5B6A(void);
void func_018_5B9D(void);
void func_018_5BB4(void);
void func_018_5BD0(void);
void func_018_5C07(void);
void jr_018_5C32(void);
void func_018_5C39(void);
void func_018_5C63(void);
void label_018_5C6A(void);
void jr_018_5CEF(void);
void jr_018_5D6F(void);
void jr_018_5D7A(void);
void jr_018_5D7D(void);
void Data_018_5D7F(void);
void Data_018_5D82(void);
void TextDebuggerEntityHandler(void);
void jr_018_5DDC(void);
void SouthFaceShrineDoorEntityHandler(void);
void OwlStatueSpriteVariants(void);
void Data_018_5DFB(void);
void Data_018_5E0B(void);
void OwlStatueSouthFaceShrine(void);
void func_018_5E3A(void);
void func_018_5E43(void);
void func_018_5E5D(void);
void OwlStatueEntityHandler(void);
void MarinAtTalTalAndInStoreSpriteVariants(void);
void MarinAtTalTalHeightsEntityHandler(void);
void jr_018_5F20(void);
void func_018_5F3D(void);
void MarinAtTalTalHeightsState0Handler(void);
void func_018_5F5E(void);
void MarinAtTalTalHeightsState1Handler(void);
void MarinAtTalTalHeightsState2Handler(void);
void MarinAtTalTalHeightsState3Handler(void);
void MarinAtTalTalHeightsState4Handler(void);
void MarinAtTalTalHeightsState5Handler(void);
void MarinAtTalTalHeightsState6Handler(void);
void MarinAtTalTalHeightsState7Handler(void);
void MarinAtTalTalHeightsState8Handler(void);
void MarinAtTalTalHeightsState9Handler(void);
void MarinAtTalTalHeightsStateAHandler(void);
void MarinAtTalTalHeightsStateBHandler(void);
void MarinAtTalTalHeightsStateCHandler(void);
void MarinAtTalTal2SpriteVariants(void);
void TarinAtTalTalHeights(void);
void TarinAtTalTalHeightsState0Handler(void);
void TarinAtTalTalHeightsState1Handler(void);
void TarinAtTalTalHeightsState2Handler(void);
void TarinAtTalTalHeightsState3Handler(void);
void MarinAtTheShoreEntityHandler(void);
void MarinAtTheShoreTransitionHandler(void);
void MarinAtTheShoreState1Handler(void);
void MarinAtTheShoreState2Handler(void);
void MarinAtTheShoreState3Handler(void);
void MarinAtTheShoreState4Handler(void);
void MarinAtTheShoreState5Handler(void);
void MarinAtTheShoreState6Handler(void);
void MazeSignpostEntityPosition(void);
void MazeSignpostEntityRoom(void);
void MazeSignpostDialogs(void);
void MazeSignpostEntityHandler(void);
void RevealMamuCave(void);
void Data_018_637D(void);
void Data_018_6385(void);
void ZombieEntityHandler(void);
void ret_018_63F7(void);
void ZombieSpriteVariants(void);
void label_018_640C(void);
void ZombieState0Handler(void);
void ZombieState1Handler(void);
void ZombieState2Handler(void);
void jr_018_6475(void);
void ZombieState3Handler(void);
void GetObjectUnderEntity(void);
void Data_018_64CA(void);
void BlainoEntityHandler(void);
void jr_018_650A(void);
void func_018_6596(void);
void label_018_65B8(void);
void ret_018_65CE(void);
void func_018_65CF(void);
void Data_018_65DF(void);
void func_018_65EC(void);
void label_018_660C(void);
void Data_018_6619(void);
void Data_018_662E(void);
void func_018_6643(void);
void ret_018_6678(void);
void Data_018_6679(void);
void Data_018_66A3(void);
void func_018_66CD(void);
void jr_018_66E9(void);
void ret_018_6729(void);
void label_018_672A(void);
void Data_018_673A(void);
void func_018_68EA(void);
void jr_018_693C(void);
void jr_018_6972(void);
void Data_018_69B5(void);
void Data_018_69BD(void);
void func_018_69C5(void);
void func_018_69D8(void);
void VireEntityHandler(void);
void func_018_6A31(void);
void jr_018_6A71(void);
void VireState0Handler(void);
void Data_018_6AC7(void);
void Data_018_6AC8(void);
void VireState1Handler(void);
void jr_018_6B30(void);
void jr_018_6B8F(void);
void label_018_6B92(void);
void VireState2Handler(void);
void jr_018_6BD4(void);
void VireState3Handler(void);
void jr_018_6C63(void);
void jr_018_6C88(void);
void func_018_6CB8(void);
void func_018_6CD3(void);
void Data_018_6CDC(void);
void Data_018_6CE4(void);
void VireState4Handler(void);
void VireState5Handler(void);
void Data_018_6D55(void);
void Data_018_6D59(void);
void VireState6Handler(void);
void jr_018_6D78(void);
void VireState7Handler(void);
void func_018_6D98(void);
void func_018_6DB9(void);
void jr_018_6DC3(void);
void label_018_6E36(void);
void func_018_6E3B(void);
void func_018_6E57(void);
void jr_018_6E59(void);
void jr_018_6ED0(void);
void Data_018_6ED7(void);
void func_018_6EFB(void);
void Vire1SpriteVariants(void);
void label_018_6F1F(void);
void jr_018_6F54(void);
void Vire2SpriteVariants(void);
void label_018_6F70(void);
void jr_018_6F95(void);
void func_018_6FA8(void);
void func_018_6FB4(void);
void func_018_6FC2(void);
void GrimCreeperEntityHandler(void);
void jr_018_7028(void);
void GrimCreeperState0Handler(void);
void GrimCreeperState1Handler(void);
void GrimCreeperState2Handler(void);
void jr_018_7069(void);
void ret_018_7088(void);
void Data_018_7089(void);
void Data_018_708F(void);
void GrimCreeperState3Handler(void);
void label_018_70FD(void);
void GrimCreeperState4Handler(void);
void GrimCreeperState5Handler(void);
void GrimCreeperState6Handler(void);
void jr_018_7157(void);
void Data_018_715D(void);
void func_018_7181(void);
void GrimCreeperSpriteVariants(void);
void label_018_71A3(void);
void Data_018_71BC(void);
void Data_018_71EC(void);
void func_018_721C(void);
void jr_018_726D(void);
void func_018_7273(void);
void label_018_7276(void);
void Data_018_7280(void);
void func_018_7288(void);
void func_018_72A5(void);
void func_018_72C8(void);
void func_018_72F4(void);
void Data_018_72F5(void);
void TurtleRockHeadEntityHandler(void);
void jr_018_737E(void);
void jr_018_7395(void);
void TurtleRockHeadState0Handler(void);
void TurtleRockHeadState1Handler(void);
void TurtleRockHeadState2Handler(void);
void Data_018_73EE(void);
void Data_018_73F4(void);
void Data_018_73FA(void);
void Data_018_7400(void);
void Data_018_7406(void);
void TurtleRockHeadState3Handler(void);
void ret_018_7479(void);
void TurtleRockHeadState4Handler(void);
void jr_018_7497(void);
void TurtleRockHeadState5Handler(void);
void TurtleRockHeadState6Handler(void);
void TurtleRockHeadState7Handler(void);
void TurtleRockHeadState8Handler(void);
void ret_018_751E(void);
void TurtleRockHeadState9Handler(void);
void TurtleRockHeadStateAHandler(void);
void jr_018_7549(void);
void TurtleRockHeadStateBHandler(void);
void Data_018_758E(void);
void TurtleRockHeadSpriteVariants(void);
void func_018_766A(void);
void jr_018_76C9(void);
void jr_018_7717(void);
void label_018_7726(void);
void BuzzBlobSpriteVariants(void);
void Data_018_774D(void);
void Data_018_7751(void);
void Data_018_7755(void);
void BuzzBlobEntityHandler(void);
void Data_018_777A(void);
void Data_018_777C(void);
void BuzzBlobState0Handler(void);
void label_018_77CF(void);
void BuzzBlobState1Handler(void);
void Data_018_77ED(void);
void Data_018_781D(void);
void BomberEntityHandler(void);
void Data_018_7865(void);
void Data_018_7867(void);
void BomberState0Handler(void);
void label_018_78A6(void);
void label_018_7938(void);
void BomberState1Handler(void);
void BomberState2Handler(void);
void Data_018_795E(void);
void Data_018_7962(void);
void MagicPowderSprinkleEntityHandler(void);
void jr_018_79CF(void);
void label_018_7A48(void);
void label_018_7A4B(void);
void label_018_7A5D(void);
void ret_018_7AB9(void);
void Data_018_7ABA(void);
void func_018_7B02(void);
void label_018_7B1D(void);
void Data_018_7B5D(void);
void Data_018_7B7D(void);
void func_018_7B9D(void);
void LinkDirectionToLinkAnimationState_3(void);
void HookshotChainEntityHandler(void);
void HookshotChainPokeWall(void);
void HookshotChainSpriteVariants(void);
void RenderHookshotChain(void);
void PushLinkOutOfEntity_18(void);
void EntityVariantForDirection_18(void);
void SetEntityVariantForDirection_18(void);
void func_018_7D7C(void);
void ShouldLinkTalkToEntity_18(void);
void func_018_7D95(void);
void func_018_7DA0(void);
void jr_018_7DE6(void);
void ReturnIfNonInteractive_18(void);
void ApplyRecoilIfNeeded_18(void);
void UpdateEntityPosWithSpeed_18(void);
void UpdateEntityYPosWithSpeed_18(void);
void AddEntitySpeedToPos_18(void);
void AddEntityZSpeedToPos_18(void);
void GetEntityXDistanceToLink_18(void);
void GetEntityRealYDistanceToLink_18(void);
void GetEntityVisualYDistanceToLink_18(void);
void GetEntityDirectionToLink_18(void);
void ClearEntityStatusBank18(void);
void AnimateBossAgony_18(void);
void func_018_7F1B(void);
void label_018_7F26(void);
void func_018_7F2C(void);
void func_018_7F3B(void);
void label_018_7F4F(void);
void label_018_7F6F(void);
void jr_018_7FB0(void);
void SetRoomStatus20(void);

void MamuAndFrogsEntityHandler(void) {
    gb.regs.a = gb_read(0xC116);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MamuAndFrogsEntityHandler_jr_400F;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC116, gb.regs.a);
    gb.regs.a = 0x14;
    gb_write(0xD7B4, gb.regs.a);
  MamuAndFrogsEntityHandler_jr_400F:;
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_Z()) { label_018_4373(); return; };
    func_018_435A();
    PushLinkOutOfEntity_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MamuAndFrogsState0Handler(); return;
        case 0x01: MamuAndFrogsState1Handler(); return;
        case 0x02: MamuAndFrogsSingingHandler(); return;
        case 0x03: MamuAndFrogsState3Handler(); return;
        case 0x04: MamuAndFrogsGrantSongHandler(); return;
        case 0x05: MamuAndFrogsState5Handler(); return;
        case 0x06: MamuAndFrogsState6Handler(); return;
    }
}

void MamuAndFrogsState0Handler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD481, gb.regs.a);
    gb.regs.a = gb_read(0xDBF5);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto MamuAndFrogsState0Handler_jr_404A;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x28);
    alu_cp8(gb.regs.a, 0x50);
    func_018_7DA0();
    if (!GET_FLAG_C()) { func_018_407C(); return; };
    label_018_42B2(); return;
  MamuAndFrogsState0Handler_jr_404A:;
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x4C);
    if (!GET_FLAG_C()) { func_018_407C(); return; };
    gb.regs.a = 0x4C;
    gb_write(0xFF99, gb.regs.a);
    ClearLinkPositionIncrement();
    ResetSpinAttack();
    gb.regs.e = 0x0B;
    gb.regs.hl = wInventoryItems_BButtonSlot;
  MamuAndFrogsState0Handler_loop_405F:;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto MamuAndFrogsState0Handler_jr_4074;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto MamuAndFrogsState0Handler_loop_405F;
    /* ld_dialog_low a, Dialog0DB */;
    MamuOpenDialogAtBottom();
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  MamuAndFrogsState0Handler_jr_4074:;
    /* ld_dialog_low a, Dialog0DC */;
    MamuOpenDialogAtBottom();
    IncrementEntityState();
}

void func_018_407C(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void MamuOpenDialogAtBottom(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x10;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = gb.regs.e;
    OpenDialogInTable0();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    return;
}

void MamuAndFrogsState1Handler(void) {
    func_018_407C();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_018_40D6(); return; };
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_018_40AF(); return; };
}

void jr_018_40A9(void) {
    gb_write(gb.regs.hl, gb.regs.b);
    /* ld_dialog_low a, Dialog0DE */;
    MamuOpenDialogAtBottom(); return;
}

void jr_018_40AF(void) {
    gb.regs.a = gb_read(0xDC05);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) { jr_018_40A9(); return; };
    gb.regs.a = gb_read(0xDC3A);
    gb.regs.a = alu_add8(gb.regs.a, 0x2C);
    gb_write(0xDC3A, gb.regs.a);
    gb.regs.a = gb_read(0xDC39);
    gb.regs.a = alu_adc8(gb.regs.a, 1);
    gb_write(0xDC39, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
    label_27F2();
    func_018_45A0();
    gb.regs.a = 1;
    gb_write(0xC500, gb.regs.a);
}

void ret_018_40D6(void) {
    return;
}

void MamuAndFrogsSingingHandler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MamuAndFrogsSingingHandler_ret_40F0;
    gb.regs.a = 0x35;
    gb_write(0xD368, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD495, gb.regs.a);
    IncrementEntityState(); return;
  MamuAndFrogsSingingHandler_ret_40F0:;
    return;
}

void func_018_40F1(void) {
    gb.regs.a = 0x30;
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xFFCE, gb.regs.a);
    label_018_449D(); return;
}

void func_018_40FC(void) {
    gb.regs.a = 0x30;
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = 0x68;
    gb_write(0xFFCE, gb.regs.a);
    label_018_449D(); return;
}

void func_018_4107(void) {
    gb.regs.a = 0x38;
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFFCD, gb.regs.a);
    label_018_4402(); return;
}

void func_018_4112(void) {
    gb.regs.a = 0x38;
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFFCD, gb.regs.a);
    label_018_444E(); return;
    return;
}

void Data_018_411E(void) {
    /* data: db $03, $03, $03, $03, $03, $03, $03, $01, $02, $04, $03, $01, $02, $04, $03, $01 */;
    /* data: db $02, $04, $03, $01, $02, $04, $03, $01, $02, $04, $03, $03, $03, $03, $03, $04 */;
    /* data: db $03, $01, $02, $04, $03, $01, $02, $04, $03, $01, $02, $04, $03, $01, $02, $04 */;
    /* data: db $03, $01, $02, $02, $02, $02, $02, $02, $02, $02 */;
}

void Data_018_4158(void) {
    /* data: db $01, $01, $05, $05, $05, $05, $05, $05, $01, $01, $04, $01, $05, $01, $04, $01 */;
    /* data: db $05, $01, $04, $01, $05, $01, $04, $01, $05, $01, $04, $01, $05, $05, $05, $05 */;
    /* data: db $01, $01, $05, $01, $04, $01, $05, $01, $04, $01, $05, $01, $04, $01, $05, $01 */;
    /* data: db $04, $01, $05, $01, $04, $04, $04, $04, $04, $04 */;
}

void Data_018_4192(void) {
    /* data: db $01, $01, $01, $01, $05, $05, $05, $05, $01, $01, $01, $01, $04, $01, $05, $01 */;
    /* data: db $04, $01, $05, $01, $04, $01, $05, $01, $04, $01, $05, $01, $04, $01, $05, $05 */;
    /* data: db $01, $01, $01, $01, $05, $01, $04, $01, $05, $01, $04, $01, $05, $01, $04, $01 */;
    /* data: db $05, $01, $04, $01, $05, $01, $04, $04, $04, $04 */;
}

void MamuAndFrogsState3Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xD491);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MamuAndFrogsState3Handler_jr_41F9;
    gb.regs.a = gb_read(0xD490);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) func_018_4107();
    gb.regs.a = gb_read(0xD490);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) func_018_4112();
    gb.regs.a = gb_read(0xD490);
    alu_cp8(gb.regs.a, 0x38);
    if (GET_FLAG_Z()) func_018_40F1();
    gb.regs.a = gb_read(0xD490);
    alu_cp8(gb.regs.a, 0x70);
    if (GET_FLAG_Z()) func_018_40FC();
  MamuAndFrogsState3Handler_jr_41F9:;
    gb.regs.a = gb_read(0xD490);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(0xD490, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xD491);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(0xD491, gb.regs.a);
    gb.regs.d = gb.regs.a;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto MamuAndFrogsState3Handler_jr_4220;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto MamuAndFrogsState3Handler_jr_4220;
    /* ld_dialog_low a, Dialog0DD */;
    MamuOpenDialogAtBottom();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC500, gb.regs.a);
    IncrementEntityState(); return;
  MamuAndFrogsState3Handler_jr_4220:;
    gb.regs.a = gb_read(0xD492);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x1C);
    if (!GET_FLAG_Z()) goto MamuAndFrogsState3Handler_jr_4230;
    gb.regs.a = gb_read(0xD493);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD493, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  MamuAndFrogsState3Handler_jr_4230:;
    gb_write(0xD492, gb.regs.a);
    gb.regs.a = gb_read(0xD493);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x411E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.hl = 0x4158;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC3B1, gb.regs.a);
    gb.regs.hl = 0x4192;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC3B2, gb.regs.a);
    return;
    return;
}

void MamuAndFrogsGrantSongHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MamuAndFrogsGrantSongHandler_jr_4268;
    gb_write(0xD495, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x70);
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
    IncrementEntityState();
  MamuAndFrogsGrantSongHandler_jr_4268:;
    func_018_407C(); return;
}

void MamuAndFrogsState5Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MamuAndFrogsState5Handler_jr_427D;
    gb.regs.a = 2;
    gb_write(0xDBF6, gb.regs.a);
    gb.regs.hl = 0xDBF5;
    gb_write(gb.regs.hl, alu_set(0, gb_read(gb.regs.hl)));
    IncrementEntityState(); return;
  MamuAndFrogsState5Handler_jr_427D:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto MamuAndFrogsState5Handler_jr_4287;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* ld_dialog_low a, Dialog0DF */;
    MamuOpenDialogAtBottom();
  MamuAndFrogsState5Handler_jr_4287:;
    gb.regs.a = 0x6C;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x474D;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    RenderActiveEntitySprite();
    func_018_407C(); return;
}

void MamuAndFrogsState6Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_42B7(); return; };
    gb_write(0xC167, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}

void label_018_42B2(void) {
    /* ld_dialog_low a, Dialog0E0 */;
    MamuOpenDialogAtBottom();
}

void jr_018_42B7(void) {
    func_018_407C(); return;
}

void Data_018_42BA(void) {
    /* data: db $00, $00, $60, $00, $00, $08, $62, $00, $00, $10, $64, $00, $00, $18, $66, $00 */;
    /* data: db $10, $00, $68, $00, $10, $08, $6A, $00, $10, $10, $6C, $00, $10, $18, $6E, $00 */;
    /* data: db $00, $00, $70, $00, $00, $08, $72, $00, $00, $10, $74, $00, $00, $18, $76, $00 */;
    /* data: db $10, $00, $68, $00, $10, $08, $6A, $00, $10, $10, $6C, $00, $10, $18, $6E, $00 */;
    /* data: db $00, $00, $78, $00, $00, $08, $7A, $00, $00, $10, $7C, $00, $00, $18, $7E, $00 */;
    /* data: db $10, $00, $68, $00, $10, $08, $6A, $00, $10, $10, $6C, $00, $10, $18, $6E, $00 */;
    /* data: db $00, $00, $7E, $20, $00, $08, $7C, $20, $00, $10, $7A, $20, $00, $18, $78, $20 */;
    /* data: db $10, $00, $6E, $20, $10, $08, $6C, $20, $10, $10, $6A, $20, $10, $18, $68, $20 */;
    /* data: db $00, $00, $76, $20, $00, $08, $74, $20, $00, $10, $72, $20, $00, $18, $70, $20 */;
    /* data: db $10, $00, $6E, $20, $10, $08, $6C, $20, $10, $10, $6A, $20, $10, $18, $68, $20 */;
}

void func_018_435A(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
  func_018_435A_jr_435F:;
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x42BA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline(); return;
}

void label_018_4373(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x4A);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x98);
    ConfigureEntityHitbox();
    func_018_43E3();
    PushLinkOutOfEntity_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_018_438F(); return;
        case 0x01: func_018_439A(); return;
    }
}

void func_018_438F(void) {
    GetRandomByte();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
}

void func_018_439A(void) {
    gb.regs.a = gb_read(0xD495);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_018_43B2(); return; };
  func_018_439A_jr_43A1:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto func_018_439A_jr_43AE;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_018_439A_jr_43AE:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void label_018_43B2(void) {
    return;
}

void MamuAndFrogsSpriteVariants(void) {
  MamuAndFrogsSpriteVariants_variant0:;
    /* data: db $58, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $58, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MamuAndFrogsSpriteVariants_variant1:;
    /* data: db $5A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MamuAndFrogsSpriteVariants_variant2:;
    /* data: db $5C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  MamuAndFrogsSpriteVariants_variant3:;
    /* data: db $5E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $5C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void MamuAndFrogsSpriteList(void) {
    /* data: db $F0, $00, $50, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $F0, $08, $52, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $00, $00, $54, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $00, $08, $56, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $F0, $00, $52, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F0, $08, $50, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $00, $00, $56, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $00, $08, $54, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void func_018_43E3(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto func_018_43E3_jr_43EF;
    gb.regs.de = 0x4361;
    RenderActiveEntitySpritesPair(); return;
  func_018_43E3_jr_43EF:;
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4371;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect(); return;
}

void label_018_4402(void) {
    label_2887();
    gb.regs.a = 0x1B;
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb_read(0xFFCF);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.e = gb.regs.a;
  label_018_4402_jr_4412:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x85;
  label_018_4402_jr_4418:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 4;
    gb_write(gb.regs.hl++, gb.regs.a);
  label_018_4402_jr_441E:;
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 6;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x85;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xC5;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
}

void label_018_444E(void) {
    label_2887();
    gb.regs.a = 0x1B;
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb_read(0xFFCF);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.e = gb.regs.a;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xC5;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x85;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x85;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 5;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 7;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
}

void label_018_449D(void) {
    label_2887();
    gb.regs.a = 0x15;
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb_read(0xFFCF);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.e = gb.regs.a;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x83;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 4;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 6;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x83;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x83;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x83;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 3;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 5;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 7;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
}

void ManboAndFishesEntityHandler(void) {
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) { label_018_48C8(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x3E);
    gb.regs.a = gb_read(0xD494);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ManboAndFishesEntityHandler_jr_4517;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD494, gb.regs.a);
  ManboAndFishesEntityHandler_jr_4517:;
    gb.regs.a = gb_read(0xD498);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ManboAndFishesEntityHandler_jr_4521;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD498, gb.regs.a);
  ManboAndFishesEntityHandler_jr_4521:;
    func_018_4833();
    PushLinkOutOfEntity_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: ManboAndFishesState0Handler(); return;
        case 0x01: ManboAndFishesState1Handler(); return;
        case 0x02: ManboAndFishesSingHandler(); return;
        case 0x03: ManboAndFishesState3Handler(); return;
        case 0x04: ManboAndFishesGrantSongHandler(); return;
        case 0x05: ManboAndFishesState5Handler(); return;
    }
}

void ManboAndFishesState0Handler(void) {
    gb.regs.a = gb_read(0xDBF5);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto ManboAndFishesState0Handler_jr_4547;
    func_018_7D7C();
    if (!GET_FLAG_C()) { func_018_455C(); return; };
    /* jp_open_dialog Dialog189 */;
  ManboAndFishesState0Handler_jr_4547:;
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) { func_018_455C(); return; };
    gb.regs.a = 0x2F;
    gb_write(0xFF98, gb.regs.a);
    ClearLinkPositionIncrement();
    /* call_open_dialog Dialog185 */;
    IncrementEntityState();
}

void func_018_455C(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void ManboAndFishesState1Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_4581(); return; };
    gb.regs.e = 0x0B;
    gb.regs.hl = wInventoryItems_BButtonSlot;
  ManboAndFishesState1Handler_loop_4576:;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { jr_018_458A(); return; };
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto ManboAndFishesState1Handler_loop_4576;
}

void jr_018_4581(void) {
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    /* jp_open_dialog Dialog18A */;
}

void jr_018_458A(void) {
    IncrementEntityState();
    /* jp_open_dialog Dialog187 */;
}

void ManboAndFishesSingHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_018_45B6(); return; };
    gb.regs.a = 0x30;
    gb_write(0xD368, gb.regs.a);
    IncrementEntityState();
}

void func_018_45A0(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD490, gb.regs.a);
    gb_write(0xD491, gb.regs.a);
    gb_write(0xD492, gb.regs.a);
    gb_write(0xD493, gb.regs.a);
    gb_write(0xD497, gb.regs.a);
    gb_write(0xD494, gb.regs.a);
    gb_write(0xD498, gb.regs.a);
}

void ret_018_45B6(void) {
    return;
}

void Data_018_45B7(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $01, $02, $03, $04, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $01, $02, $03, $04, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $01, $02, $03, $04, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $01, $02, $03, $04, $00, $00, $00, $00, $00, $00 */;
}

void Data_018_4605(void) {
    /* data: db $02, $01, $02, $01, $02, $01, $02, $01, $00, $00, $00, $00, $00, $01, $00, $01 */;
    /* data: db $00, $01, $00, $01, $00, $01, $00, $01, $00, $01, $00, $01, $02, $01, $02, $01 */;
    /* data: db $02, $01, $02, $01, $02, $01, $02, $01, $02, $01, $02, $01, $02, $01, $02, $01 */;
    /* data: db $02, $01, $02, $01, $02, $01, $02, $01, $02, $01, $02, $01, $02, $01, $02, $01 */;
    /* data: db $02, $01, $02, $01, $02, $01, $02, $02, $02, $02, $02, $02, $02, $02 */;
}

void Data_018_4653(void) {
    /* data: db $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $02, $03, $02, $03 */;
    /* data: db $02, $03, $02, $03, $02, $03, $02, $02, $03, $04, $05, $06, $05, $06, $05, $06 */;
    /* data: db $05, $06, $05, $06, $05, $06, $05, $06, $05, $06, $04, $02, $03, $02, $03, $02 */;
    /* data: db $03, $02, $03, $02, $03, $02, $03, $02, $04, $05, $04, $05, $03, $02, $03, $02 */;
    /* data: db $03, $02, $03, $02, $01, $01, $01, $01, $01, $01, $00, $00, $00, $00 */;
}

void ManboAndFishesState3Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xD490);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(0xD490, gb.regs.a);
    gb.regs.a = gb_read(0xD491);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(0xD491, gb.regs.a);
    gb.regs.a = gb_read(0xD491);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto ManboAndFishesState3Handler_jr_46CF;
    gb.regs.a = gb_read(0xD490);
    alu_cp8(gb.regs.a, 0xF0);
    if (!GET_FLAG_Z()) goto ManboAndFishesState3Handler_jr_46CF;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    return;
  ManboAndFishesState3Handler_jr_46CF:;
    gb.regs.a = gb_read(0xD492);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_Z()) goto ManboAndFishesState3Handler_jr_46DF;
    gb.regs.a = gb_read(0xD493);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD493, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  ManboAndFishesState3Handler_jr_46DF:;
    gb_write(0xD492, gb.regs.a);
    gb.regs.a = gb_read(0xD493);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4605;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.hl = 0x45B7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4653;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD495, gb.regs.a);
    gb.regs.a = gb_read(0xD491);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xD490);
    gb.regs.e = gb.regs.a;
    alu_cp8(gb.regs.a, 0xCC);
    if (!GET_FLAG_Z()) goto ManboAndFishesState3Handler_jr_4712;
    gb.regs.a = gb.regs.d;
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { jr_018_4722(); return; };
  ManboAndFishesState3Handler_jr_4712:;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xBE);
    if (!GET_FLAG_Z()) goto ManboAndFishesState3Handler_ret_471C;
    gb.regs.a = gb.regs.d;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_018_471D(); return; };
  ManboAndFishesState3Handler_ret_471C:;
    return;
}

void jr_018_471D(void) {
    gb.regs.a = 0x28;
    gb_write(0xD494, gb.regs.a);
}

void jr_018_4722(void) {
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x28);
    return;
}

void Data_018_4728(void) {
    /* data: db $00, $00, $40, $00, $00, $08, $42, $00, $00, $10, $44, $00 */;
}

void ManboAndFishesGrantSongHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ManboAndFishesGrantSongHandler_jr_4746;
    gb_write(gb.regs.hl, 0x70);
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    IncrementEntityState();
  ManboAndFishesGrantSongHandler_jr_4746:;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    func_018_455C(); return;
}

void Data_018_474D(void) {
    /* data: db $90, $17 */;
}

void ManboAndFishesState5Handler(void) {
    func_018_455C();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ManboAndFishesState5Handler_jr_476A;
    gb.regs.a = 1;
    gb_write(0xDBF6, gb.regs.a);
    gb.regs.hl = 0xDBF5;
    gb_write(gb.regs.hl, alu_set(1, gb_read(gb.regs.hl)));
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  ManboAndFishesState5Handler_jr_476A:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto ManboAndFishesState5Handler_jr_4774;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog188 */;
  ManboAndFishesState5Handler_jr_4774:;
    gb.regs.a = 0x6C;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x474D;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    RenderActiveEntitySprite(); return;
}

void Data_018_478F(void) {
    /* data: db $00, $00, $50, $00, $00, $08, $52, $00, $10, $00, $54, $00, $10, $08, $56, $00 */;
    /* data: db $F8, $10, $58, $00, $08, $10, $5A, $00, $18, $10, $5C, $00, $00, $18, $5E, $00 */;
    /* data: db $10, $18, $5E, $40, $00, $00, $50, $00, $00, $08, $52, $00, $10, $00, $4A, $00 */;
    /* data: db $10, $08, $4C, $00, $F8, $10, $58, $00, $08, $10, $4E, $00, $18, $10, $5C, $00 */;
    /* data: db $00, $18, $5E, $00, $10, $18, $5E, $40, $00, $00, $50, $00, $00, $08, $52, $00 */;
    /* data: db $10, $00, $54, $00, $10, $08, $56, $00, $F8, $10, $60, $00, $08, $10, $5A, $00 */;
    /* data: db $18, $10, $62, $00, $00, $18, $5E, $00, $10, $18, $5E, $40, $00, $00, $46, $00 */;
    /* data: db $00, $08, $48, $00, $10, $00, $4A, $00, $10, $08, $4C, $00, $F8, $10, $60, $00 */;
    /* data: db $08, $10, $4E, $00, $18, $10, $62, $00, $00, $18, $5E, $00, $10, $18, $5E, $40 */;
}

void ManboAndFishes1SpriteVariants(void) {
  ManboAndFishes1SpriteVariants_variant0:;
    /* data: db $FF, OAM_GBC_PAL_7 | OAMF_PAL1 | OAMF_BANK1 | OAMF_YFLIP | OAMF_XFLIP | OAMF_PRI */;
    /* data: db $FF, OAM_GBC_PAL_7 | OAMF_PAL1 | OAMF_BANK1 | OAMF_YFLIP | OAMF_XFLIP | OAMF_PRI */;
  ManboAndFishes1SpriteVariants_variant1:;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  ManboAndFishes1SpriteVariants_varaiant2:;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
  ManboAndFishes1SpriteVariants_variant3:;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  ManboAndFishes1SpriteVariants_variant4:;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void func_018_4833(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x477B;
    RenderActiveEntitySpritesPair();
    gb.regs.a = 2;
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition();
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) { jr_018_4857(); return; };
    gb.regs.a = 3;
  func_018_4833_jr_4855:;
    jr_018_485C(); return;
}

void jr_018_4857(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
}

void jr_018_485C(void) {
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x478F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 9;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 9;
    func_015_7964_trampoline();
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 0x18);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x4728;
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 3;
    func_015_7964_trampoline(); return;
}

void Data_018_4894(void) {
    /* data: db $00, $FC, $76, $00, $00, $04, $78, $00, $00, $0C, $7A, $00 */;
}

void Data_018_48A0(void) {
    /* data: db $00, $FC, $7C, $00 */;
}

void ManboAndFishes2SpriteVariants(void) {
  ManboAndFishes2SpriteVariants_variant0:;
    /* data: db $00, OAM_GBC_PAL_4 | OAMF_PAL0 */;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  ManboAndFishes2SpriteVariants_variant1:;
    /* data: db $00, OAM_GBC_PAL_4 | OAMF_PAL0 | OAMF_BANK1 */;
    /* data: db $7E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  ManboAndFishes2SpriteVariants_variant2:;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  ManboAndFishes2SpriteVariants_variant3:;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  ManboAndFishes2SpriteVariants_variant4:;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  ManboAndFishes2SpriteVariants_variant5:;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  ManboAndFishes2SpriteVariants_variant6:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  ManboAndFishes2SpriteVariants_varaiant7:;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  ManboAndFishes2SpriteVariants_variant8:;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void label_018_48C8(void) {
    func_018_48DE();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xD495);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    SetEntitySpriteVariant(); return;
}

void func_018_48DE(void) {
    gb.regs.a = gb_read(0xD494);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_018_48DE_jr_4904;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 0x18);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x4728;
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 3;
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition();
    gb.regs.a = 7;
    gb_write(0xFFF1, gb.regs.a);
  func_018_48DE_jr_4904:;
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { jr_018_491D(); return; };
    gb.regs.hl = 0x4894;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto func_018_48DE_jr_4913;
    gb.regs.hl = 0x48A0;
  func_018_48DE_jr_4913:;
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 3;
    func_015_7964_trampoline(); return;
}

void jr_018_491D(void) {
    gb.regs.de = 0x47FD;
    RenderActiveEntitySpritesPair();
  jr_018_491D_jr_4923:;
    gb.regs.a = 2;
    func_015_7964_trampoline(); return;
}

void Data_018_4928(void) {
    /* data: db $F0, $00, $70, $01, $F0, $08, $72, $01, $00, $00, $74, $01, $00, $08, $76, $01 */;
}

void MermaidStatueEntityHandler(void) {
    gb.regs.hl = 0x4928;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MermaidStatueInitHandler(); return;
        case 0x01: MermaidStatueInteractiveHandler(); return;
        case 0x02: MermaidStatueOpeningHandler(); return;
    }
}

void MermaidStatueInitHandler(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto MermaidStatueInitHandler_statueMovedEnd;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
  MermaidStatueInitHandler_statueMovedEnd:;
    IncrementEntityState(); return;
}

void MermaidStatueInteractiveHandler(void) {
    PushLinkOutOfEntity_18();
    gb.regs.a = gb_read(0xDC27);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    func_018_7D95();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) goto MermaidStatueInteractiveHandler_alreadyHasMagnifyingLens;
    gb.regs.a = 0x0E;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDC27, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xFFF4, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
    SetRoomStatus20();
    /* call_open_dialog Dialog116 */;
    IncrementEntityState(); return;
  MermaidStatueInteractiveHandler_alreadyHasMagnifyingLens:;
    /* jp_open_dialog Dialog19C */;
}

void MermaidStatueOpeningHandler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MermaidStatueOpeningHandler_jr_49AD;
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    gb.regs.a = 2;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    return;
  MermaidStatueOpeningHandler_jr_49AD:;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto MermaidStatueOpeningHandler_jr_49B6;
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x11);
  MermaidStatueOpeningHandler_jr_49B6:;
    if (!GET_FLAG_C()) return;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, -4);
    AddEntitySpeedToPos_18(); return;
}

void ZoraSpriteVariants(void) {
  ZoraSpriteVariants_variant0:;
    /* data: db $FF, OAM_GBC_PAL_7 | OAMF_PAL1 | OAMF_BANK1 | OAMF_YFLIP | OAMF_XFLIP | OAMF_PRI */;
    /* data: db $FF, OAM_GBC_PAL_7 | OAMF_PAL1 | OAMF_BANK1 | OAMF_YFLIP | OAMF_XFLIP | OAMF_PRI */;
  ZoraSpriteVariants_variant1:;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  ZoraSpriteVariants_variant2:;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  ZoraSpriteVariants_variant3:;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  ZoraSpriteVariants_variant4:;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void ZoraEntityHandler(void) {
    gb.regs.de = 0x48FF;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_018_4A2A(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xDA);
    if (!GET_FLAG_Z()) { jr_018_4A2A(); return; };
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDCB4);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.a = gb_read(0xDC27);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.a = gb_read(0xDCB5);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ZoraEntityHandler_jr_4A0E;
    gb.regs.a = 0x18;
    func_036_4A77_trampoline(); return;
  ZoraEntityHandler_jr_4A0E:;
    func_018_7D95();
    if (!GET_FLAG_C()) goto ZoraEntityHandler_jr_4A18;
    /* call_open_dialog Dialog126 */;
  ZoraEntityHandler_jr_4A18:;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x80);
    gb_write(gb.regs.hl, gb.regs.a);
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) return;
    CopyLinkFinalPositionToPosition();
    ResetPegasusBoots(); return;
}

void jr_018_4A2A(void) {
    ReturnIfNonInteractive_18();
    ApplyRecoilIfNeeded_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: ZoraState0Handler(); return;
        case 0x01: ZoraState1Handler(); return;
        case 0x02: ZoraState2Handler(); return;
        case 0x03: ZoraState3Handler(); return;
    }
}

void ZoraState0Handler(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6385;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x637D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetObjectUnderEntity();
    gb.regs.a = gb_read(0xFFDA);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.a = alu_or8(gb.regs.a, 0x40);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void ZoraState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x60);
    IncrementEntityState(); return;
}

void ZoraState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ZoraState2Handler_jr_4A90;
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
    IncrementEntityState(); return;
  ZoraState2Handler_jr_4A90:;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    gb.regs.a = 1;
    if (GET_FLAG_Z()) goto ZoraState2Handler_jr_4A97;
    gb.regs.a = alu_inc8(gb.regs.a);
  ZoraState2Handler_jr_4A97:;
    SetEntitySpriteVariant(); return;
}

void Data_018_4A9A(void) {
    /* data: db $00, $00, $01, $02, $02, $02, $01, $00 */;
}

void ZoraState3Handler(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4A9A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ZoraState3Handler_jr_4ADC;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 1;
    AddTranscientVfx(); return;
  ZoraState3Handler_jr_4ADC:;
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) goto ZoraState3Handler_jr_4B03;
    gb.regs.a = 0x7D;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto ZoraState3Handler_jr_4B03;
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
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
  ZoraState3Handler_jr_4B03:;
    GetEntityTransitionCountdown();
    gb.regs.e = 3;
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) goto ZoraState3Handler_jr_4B11;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) goto ZoraState3Handler_jr_4B11;
    gb.regs.e = alu_inc8(gb.regs.e);
  ZoraState3Handler_jr_4B11:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void Data_018_4B15(void) {
    /* data: db $00, $00, $70, $01, $00, $08, $72, $01, $10, $00, $74, $01, $10, $08, $74, $21 */;
    /* data: db $00, $00, $72, $21, $00, $08, $70, $21, $10, $00, $74, $01, $10, $08, $74, $21 */;
    /* data: db $00, $00, $78, $21, $00, $08, $76, $21, $10, $00, $74, $01, $10, $08, $74, $21 */;
    /* data: db $00, $00, $76, $01, $00, $08, $78, $01, $10, $00, $74, $01, $10, $08, $74, $21 */;
}

void Data_018_4B55(void) {
    /* data: db $00, $00, $70, $00, $00, $08, $72, $00, $10, $00, $74, $00, $10, $08, $74, $20 */;
    /* data: db $00, $00, $72, $20, $00, $08, $70, $20, $10, $00, $74, $00, $10, $08, $74, $20 */;
    /* data: db $00, $00, $78, $20, $00, $08, $76, $20, $10, $00, $74, $00, $10, $08, $74, $20 */;
    /* data: db $00, $00, $76, $00, $00, $08, $78, $00, $10, $00, $74, $00, $10, $08, $74, $20 */;
}

void MrWrite2SpriteVariants(void) {
  MrWrite2SpriteVariants_variant0:;
    /* data: db $7A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $7C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
}

void MrWrite1SpriteVariants(void) {
  MrWrite1SpriteVariants_variant0:;
    /* data: db $7E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void MrWriteEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xA8);
    if (!GET_FLAG_Z()) goto MrWriteEntityHandler_jr_4BB2;
    gb.regs.hl = 0x4B55;
    jr_018_4BB5(); return;
  MrWriteEntityHandler_jr_4BB2:;
    gb.regs.hl = 0x4B15;
}

void jr_018_4BB5(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    GetEntityRealYDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto jr_018_4BB5_jr_4BE4;
    GetEntityXDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto jr_018_4BB5_jr_4BE4;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 2);
    SetEntitySpriteVariant();
  jr_018_4BB5_jr_4BE4:;
    PushLinkOutOfEntity_18();
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) { label_018_4C75(); return; };
    gb.regs.de = 0x4AD2;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_C()) goto jr_018_4BB5_jr_4BFB;
    gb.regs.de = 0x4AD6;
  jr_018_4BB5_jr_4BFB:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFEC, gb.regs.a);
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MrWriteState0Handler(); return;
        case 0x01: MrWriteState1Handler(); return;
        case 0x02: MrWriteState2Handler(); return;
    }
}

void MrWriteState0Handler(void) {
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    ShouldLinkTalkToEntity_18();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto MrWriteState0Handler_jr_4C3B;
    /* call_open_dialog Dialog167 */;
    IncrementEntityState(); return;
  MrWriteState0Handler_jr_4C3B:;
    /* ld_dialog_low a, Dialog166 */;
    if (GET_FLAG_C()) goto MrWriteState0Handler_jr_4C41;
    /* ld_dialog_low a, Dialog16B */;
  MrWriteState0Handler_jr_4C41:;
    OpenDialogInTable1(); return;
}

void MrWriteState1Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MrWriteState1Handler_jr_4C58;
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MrWriteState1Handler_jr_4C58;
    /* jp_open_dialog Dialog168 */;
  MrWriteState1Handler_jr_4C58:;
    gb_write(gb.regs.hl, gb.regs.b);
    /* jp_open_dialog Dialog169 */;
}

void MrWriteState2Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MrWriteState2Handler_ret_4C74;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    CreateTradingItemEntity();
    gb.regs.a = 9;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
  MrWriteState2Handler_ret_4C74:;
    return;
}

void label_018_4C75(void) {
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_018_4C87(); return;
        case 0x01: func_018_4CA3(); return;
        case 0x02: func_018_4CAB(); return;
        case 0x03: func_018_4CBE(); return;
        case 0x04: func_018_4CD1(); return;
        case 0x05: func_018_4CF2(); return;
    }
}

void func_018_4C87(void) {
    ShouldLinkTalkToEntity_18();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) goto func_018_4C87_jr_4C9A;
    /* call_open_dialog Dialog134 */;
    IncrementEntityState(); return;
  func_018_4C87_jr_4C9A:;
    /* ld_dialog_low a, Dialog133 */;
    if (GET_FLAG_C()) goto func_018_4C87_jr_4CA0;
    /* ld_dialog_low a, Dialog139 */;
  func_018_4C87_jr_4CA0:;
    OpenDialogInTable1(); return;
}

void func_018_4CA3(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState(); return;
}

void func_018_4CAB(void) {
    IncrementEntityState();
    gb.regs.a = 8;
}

void func_018_4CB0(void) {
    gb_write(0xDC3D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    return;
}

void func_018_4CBE(void) {
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    /* jp_open_dialog Dialog135 */;
}

void func_018_4CD1(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_018_4CD1_jr_4CEC;
    CreateTradingItemEntity();
    gb.regs.a = 0x0A;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
    return;
  func_018_4CD1_jr_4CEC:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* jp_open_dialog Dialog137 */;
}

void func_018_4CF2(void) {
    ShouldLinkTalkToEntity_18();
    if (!GET_FLAG_C()) return;
    /* jp_open_dialog Dialog138 */;
}

void GrandmaUlrira1SpriteVariants(void) {
  GrandmaUlrira1SpriteVariants_variant0:;
    /* data: db $62, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $60, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  GrandmaUlrira1SpriteVariants_variant1:;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  GrandmaUlrira1SpriteVariants_variant2:;
    /* data: db $6C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void GrandmaUlrira2SpriteVariants(void) {
  GrandmaUlrira2SpriteVariants_variant0:;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  GrandmaUlrira2SpriteVariants_variant1:;
    /* data: db $6A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  GrandmaUlrira2SpriteVariants_variant2:;
    /* data: db $6C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void GrandmaUlrira3SpriteVariants(void) {
  GrandmaUlrira3SpriteVariants_variant0:;
    /* data: db $9A, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_4 | OAMF_PAL1 */;
}

void GrandmaUlriraEntityHandler(void) {
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_4D36(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x18;
    SpawnPhotographer_trampoline();
    gb.regs.a = gb_read(0xDC11);
    gb.regs.d = 0xB1;
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto GrandmaUlriraEntityHandler_jr_4D30;
    gb.regs.d = 0xCD;
  GrandmaUlriraEntityHandler_jr_4D30:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
}

void jr_018_4D36(void) {
    gb.regs.de = 0x4BFB;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_C()) { jr_018_4D58(); return; };
    gb.regs.a = gb_read(0xDC11);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_018_4D36_jr_4D51;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) { jr_018_4D58(); return; };
  jr_018_4D36_jr_4D51:;
    gb.regs.a = 1;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.de = 0x4C07;
}

void jr_018_4D58(void) {
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    PushLinkOutOfEntity_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: GrandmaUlriraState0Handler(); return;
        case 0x01: GrandmaUlriraState1Handler(); return;
        case 0x02: GrandmaUlriraState2Handler(); return;
        case 0x03: GrandmaUlriraState3Handler(); return;
    }
}

void GrandmaUlriraState0Handler(void) {
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    func_018_7D95();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 0x80);
    /* ld_dialog_low a, Dialog178 */;
    if (GET_FLAG_Z()) goto GrandmaUlriraState0Handler_jr_4DA0;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_4DA3(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0B);
    /* ld_dialog_low a, Dialog15A */;
    if (GET_FLAG_C()) goto GrandmaUlriraState0Handler_jr_4DA0;
    /* ld_dialog_low a, Dialog15F */;
  GrandmaUlriraState0Handler_jr_4DA0:;
    OpenDialogInTable1(); return;
}

void jr_018_4DA3(void) {
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto jr_018_4DA3_jr_4DB5;
    gb_write(0xC167, gb.regs.a);
    /* call_open_dialog Dialog15C */;
    IncrementEntityState(); return;
  jr_018_4DA3_jr_4DB5:;
    /* jp_open_dialog Dialog15B */;
}

void GrandmaUlriraState1Handler(void) {
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GrandmaUlriraState1Handler_jr_4DCF;
    gb.regs.a = 1;
    gb_write(0xFFF2, gb.regs.a);
    gb_write(0xDC27, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState(); return;
  GrandmaUlriraState1Handler_jr_4DCF:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    /* call_open_dialog Dialog159 */;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void GrandmaUlriraState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto GrandmaUlriraState2Handler_jr_4DF3;
    gb.regs.a = 0x0B;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
    /* call_open_dialog Dialog15D */;
    IncrementEntityState(); return;
  GrandmaUlriraState2Handler_jr_4DF3:;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0E);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.de = 0x4C13;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void GrandmaUlriraState3Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GrandmaUlriraState3Handler_ret_4E2A;
    gb_write(0xDC27, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    CreateTradingItemEntity();
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  GrandmaUlriraState3Handler_ret_4E2A:;
    return;
}

void Data_018_4E2B(void) {
    /* data: db $00, $F8, $60, $01, $00, $00, $62, $01, $00, $08, $64, $01, $00, $F8, $66, $01 */;
    /* data: db $00, $00, $68, $01, $00, $08, $6A, $01, $02, $00, $06, $04 */;
}

void PapahlsWifeEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4E2B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    ReturnIfNonInteractive_18();
    PushLinkOutOfEntity_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: PapahlsWifeState0Handler(); return;
        case 0x01: PapahlsWifeState1Handler(); return;
        case 0x02: PapahlsWifeState2Handler(); return;
    }
}

void PapahlsWifeState0Handler(void) {
    func_018_7D95();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { label_018_4E91(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_018_4E9F(); return; };
    gb.regs.a = gb_read(0xDC0F);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_018_4E91(); return; };
    /* ld_dialog_low e, Dialog1EE */;
    jr_018_4EA4(); return;
}

void label_018_4E91(void) {
    gb.regs.a = gb_read(0xDBBA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low e, Dialog12A */;
    if (GET_FLAG_Z()) { jr_018_4EA4(); return; };
    /* ld_dialog_low e, Dialog12C */;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_018_4EA4(); return; };
}

void jr_018_4E9F(void) {
    IncrementEntityState();
    /* ld_dialog_low e, Dialog12B */;
}

void jr_018_4EA4(void) {
    gb.regs.a = gb.regs.e;
    OpenDialogInTable1(); return;
}

void PapahlsWifeState1Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_018_4ECE(); return; };
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto PapahlsWifeState1Handler_jr_4EC5;
    gb.regs.a = 2;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
    /* call_open_dialog Dialog128 */;
    IncrementEntityState(); return;
  PapahlsWifeState1Handler_jr_4EC5:;
    /* call_open_dialog Dialog127 */;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}

void ret_018_4ECE(void) {
    return;
}

void PapahlsWifeState2Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto PapahlsWifeState2Handler_ret_4EDC;
    CreateTradingItemEntity();
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  PapahlsWifeState2Handler_ret_4EDC:;
    return;
}

void MadBatterEntityHandler(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { MadBatterApplyFlashingEffect(); return; };
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MadBatterState0Handler(); return;
        case 0x01: MadBatterState1Handler(); return;
        case 0x02: MadBatterState2Handler(); return;
        case 0x03: MadBatterState3Handler(); return;
        case 0x04: MadBatterState4Handler(); return;
        case 0x05: MadBatterState5Handler(); return;
        case 0x06: MadBatterState6Handler(); return;
        case 0x07: MadBatterState7Handler(); return;
        case 0x08: MadBatterState8Handler(); return;
    }
}

void MadBatterState0Handler(void) {
    gb.regs.a = gb_read(0xDC1E);
    gb.regs.hl = 0x4E3D;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto MadBatterState0Handler_ret_4F1D;
    gb.regs.hl++;
    gb.regs.a = gb_read(0xDC1F);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto MadBatterState0Handler_ret_4F1D;
    gb.regs.hl++;
    gb.regs.a = gb_read(0xDC20);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
  MadBatterState0Handler_ret_4F1D:;
    return;
}

void MadBatterState1Handler(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x90);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.a = 6;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState(); return;
}

void MadBatterState2Handler(void) {
    MadBatterRenderSmallSprite();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MadBatterState2Handler_jr_018_4F44;
    gb_write(gb.regs.hl, 0x60);
    IncrementEntityState(); return;
  MadBatterState2Handler_jr_018_4F44:;
    gb.regs.e = 0xFC;
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto MadBatterState2Handler_jr_018_4F4E;
    gb.regs.e = 4;
  MadBatterState2Handler_jr_018_4F4E:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFC);
    UpdateEntityPosWithSpeed_18(); return;
}

void MadBatterState3Handler(void) {
    MadBatterRenderSmallSprite();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x48);
    gb.regs.a = 2;
    SpawnNewEntity_trampoline();
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
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState(); return;
}

void MadBatterState4Handler(void) {
    RenderMadBatterSprite();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    /* ld_dialog_low a, Dialog0E1 */;
    OpenDialogAtBottom();
    IncrementEntityState(); return;
}

void MadBatterUpgradedMaximumTable(void) {
    /* data: db $40, $60, $60 */;
}

void MadBatterUpgradeDialogs(void) {
  MadBatterUpgradeDialogs__0:;
    /* db_dialog_low Dialog0E2 */;
  MadBatterUpgradeDialogs__1:;
    /* db_dialog_low Dialog0E3 */;
  MadBatterUpgradeDialogs__2:;
    /* db_dialog_low Dialog0E4 */;
}

void MadBatterState5Handler(void) {
    RenderMadBatterSprite();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
}

void jr_018_4F9E(void) {
    loop_start: ;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.a = gb.regs.e;
    gb_write(0xD481, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_018_4F9E_jr_4FAF;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  jr_018_4F9E_jr_4FAF:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4E3D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xDC1E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { goto loop_start; };
    gb.regs.hl = 0x4E40;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    OpenDialogAtBottom();
    IncrementEntityState(); return;
}

void MadBatterState6Handler(void) {
    RenderMadBatterSprite();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MadBatterState6Handler_jr_5001;
    gb.regs.a = 0xCA;
    SpawnNewEntity_trampoline();
    gb.regs.a = 0x26;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC0);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    return;
  MadBatterState6Handler_jr_5001:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    return;
}

void MadBatterState7Handler(void) {
    gb.regs.hl = 0x5090;
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    func_018_50D2();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    ClearEntitySpeed();
    /* ld_dialog_low a, Dialog0E5 */;
    OpenDialogAtBottom();
    IncrementEntityState();
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4E3D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xDC1E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MadBatterState7Handler_jr_5044;
    gb.regs.hl = 0xDBF8;
    gb_write(gb.regs.hl, gb.regs.d);
    gb.regs.d = 0x0C;
    GiveInventoryItem_trampoline();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDBF7, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFA5, gb.regs.a);
    return;
  MadBatterState7Handler_jr_5044:;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto MadBatterState7Handler_jr_504D;
    gb.regs.hl = 0xDBF9;
    gb_write(gb.regs.hl, gb.regs.d);
    return;
  MadBatterState7Handler_jr_504D:;
    gb.regs.hl = 0xDBF1;
    gb_write(gb.regs.hl, gb.regs.d);
    return;
}

void MadBatterState8Handler(void) {
    RenderMadBatterSprite();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MadBatterState8Handler_jr_5067;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x3B;
    gb_write(0xFFF2, gb.regs.a);
  MadBatterState8Handler_jr_5067:;
    UpdateEntityYPosWithSpeed_18();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0xF0);
    if (GET_FLAG_C()) return;
    SetRoomStatus20();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    ClearEntityStatusBank18(); return;
}

void OpenDialogAtBottom(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x20;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = gb.regs.e;
    OpenDialogInTable0();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    return;
}

void Data_018_5090(void) {
    /* data: db $00, $FC, $70, $03, $00, $04, $72, $03, $00, $0C, $70, $23 */;
}

void Data_018_509C(void) {
    /* data: db $00, $FC, $74, $03, $00, $04, $76, $03, $00, $0C, $74, $23 */;
}

void RenderMadBatterSprite(void) {
    gb.regs.hl = 0x5090;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto RenderMadBatterSprite_jr_50B4;
    gb.regs.hl = 0x509C;
  RenderMadBatterSprite_jr_50B4:;
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    func_018_50D2(); return;
}

void MadBatterSpriteVariants(void) {
  MadBatterSpriteVariants_variant0:;
    /* data: db $7E, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  MadBatterSpriteVariants_variant1:;
    /* data: db $7E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $7E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
}

void MadBatterRenderSmallSprite(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x4F6C;
    RenderActiveEntitySpritesPair();
}

void func_018_50D2(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC19B, gb.regs.a);
    return;
}

void MadBatterApplyFlashingEffect(void) {
    func_018_5174();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MadBatterApplyFlashingEffect_replaceScenePalettesGBC;
    gb.regs.a = gb.regs.d;
    alu_bit(1, gb.regs.a);
    gb.regs.a = 0xE4;
    if (GET_FLAG_Z()) goto MadBatterApplyFlashingEffect_replaceScenePalettesDMG;
    gb.regs.a = 0x44;
  MadBatterApplyFlashingEffect_replaceScenePalettesDMG:;
    gb_write(0xDC3F, gb.regs.a);
    return;
  MadBatterApplyFlashingEffect_replaceScenePalettesGBC:;
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 36;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x48;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xE5;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void Data_018_5110(void) {
    /* data: db $10, $00, $7C, $07, $10, $08, $7C, $67, $20, $00, $7C, $07, $20, $08, $7C, $67 */;
    /* data: db $30, $F8, $78, $07, $30, $00, $7A, $07, $30, $08, $7A, $27, $30, $10, $78, $27 */;
    /* data: db $40, $F8, $78, $47, $40, $00, $7A, $47, $40, $08, $7A, $67, $40, $10, $78, $67 */;
}

void Data_018_5140(void) {
    /* data: db $10, $00, $7C, $54, $10, $08, $7C, $34, $20, $00, $7C, $54, $20, $08, $7C, $34 */;
    /* data: db $30, $F8, $78, $14, $30, $00, $7A, $14, $30, $08, $7A, $34, $30, $10, $78, $34 */;
    /* data: db $40, $F8, $78, $54, $40, $00, $7A, $54, $40, $08, $7A, $74, $40, $10, $78, $74 */;
}

void Data_018_5170(void) {
    /* data: db $0C, $0C, $04, $02 */;
}

void func_018_5174(void) {
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 5);
    gb_write(0xFFEC, gb.regs.a);
    GetEntityTransitionCountdown();
    gb.regs.c = 0x0C;
    alu_cp8(gb.regs.a, 0xB0);
    if (GET_FLAG_C()) goto func_018_5174_jr_5190;
    gb.regs.a = alu_sub8(gb.regs.a, 0xB0);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5170;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb_read(gb.regs.hl);
  func_018_5174_jr_5190:;
    gb.regs.hl = 0x5110;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_018_5174_jr_519C;
    gb.regs.hl = 0x5140;
  func_018_5174_jr_519C:;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline(); return;
}

void label_018_51A4(void) {
    PushLinkOutOfEntity_18();
    func_018_7D95();
    if (!GET_FLAG_C()) return;
    /* jp_open_dialog Dialog196 */;
}

void func_018_51B0(void) {
    gb.regs.a = gb_read(0xDC1C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    return;
}

void BunnyD3SpriteVariants(void) {
  BunnyD3SpriteVariants_variant0:;
    /* data: db $50, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  BunnyD3SpriteVariants_variant1:;
    /* data: db $52, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $50, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  BunnyD3SpriteVariants_variant2:;
    /* data: db $54, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $56, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  BunnyD3SpriteVariants_variant3:;
    /* data: db $56, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $54, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  BunnyD3SpriteVariants_variant4:;
    /* data: db $58, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  BunnyD3SpriteVariants_variant5:;
    /* data: db $58, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  BunnyD3SpriteVariants_variant6:;
    /* data: db $5A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $58, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  BunnyD3SpriteVariants_variant7:;
    /* data: db $5A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $58, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void BunnyD3EntityHandler(void) {
    gb.regs.a = gb_read(0xDC1C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.de = 0x5060;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto BunnyD3EntityHandler_jr_51F3;
    GetEntityDirectionToLink_18();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
  BunnyD3EntityHandler_jr_51F3:;
    SetEntityVariantForDirection_18();
    ReturnIfNonInteractive_18();
    AddEntityZSpeedToPos_18();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BunnyD3EntityHandler_jr_520E;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_018_521C(); return; };
  BunnyD3EntityHandler_jr_520E:;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) { jr_018_521C(); return; };
    gb_write(gb.regs.hl, 0x0C);
}

void jr_018_521C(void) {
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFFEC, gb.regs.a);
    PushLinkOutOfEntity_18();
    CopyEntityPositionToActivePosition();
    func_018_7D95();
    if (!GET_FLAG_C()) return;
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_018_521C_jr_523F;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xCC);
    if (GET_FLAG_Z()) goto jr_018_521C_jr_523F;
    gb.regs.e = alu_inc8(gb.regs.e);
    alu_cp8(gb.regs.a, 0xCD);
    if (GET_FLAG_Z()) goto jr_018_521C_jr_523F;
    gb.regs.e = alu_inc8(gb.regs.e);
  jr_018_521C_jr_523F:;
    gb.regs.a = gb_read(0xDC12);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto jr_018_521C_jr_524A;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
  jr_018_521C_jr_524A:;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_521C_jr_5255;
    /* jp_open_dialog Dialog252 */;
  jr_018_521C_jr_5255:;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x4A);
    OpenDialogInTable2(); return;
}

void AnimalD2SpriteVariants(void) {
  AnimalD2SpriteVariants_variant0:;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  AnimalD2SpriteVariants_variant1:;
    /* data: db $7C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  AnimalD2SpriteVariants_variant2:;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  AnimalD2SpriteVariants_variant3:;
    /* data: db $7E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $7C, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void AnimalD2EntityHandler(void) {
    func_018_51B0();
    gb.regs.de = 0x5101;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xC50F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) goto AnimalD2EntityHandler_jr_5286;
    gb.regs.e = 2;
  AnimalD2EntityHandler_jr_5286:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    label_018_51A4(); return;
}

void BunnyCallingMarinSpriteVariants(void) {
  BunnyCallingMarinSpriteVariants_variant0:;
    /* data: db $5A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $58, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  BunnyCallingMarinSpriteVariants_variant1:;
    /* data: db $5E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $5C, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  BunnyCallingMarinSpriteVariants_variant2:;
    /* data: db $58, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  BunnyCallingMarinSpriteVariants_variant3:;
    /* data: db $5C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void BunnyCallingMarinEntityHandler(void) {
    gb.regs.de = 0x513C;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    AddEntityZSpeedToPos_18();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto BunnyCallingMarinEntityHandler_jr_52D7;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  BunnyCallingMarinEntityHandler_jr_52D7:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: BunnyCallingMarinState0Handler(); return;
        case 0x01: BunnyCallingMarinState1Handler(); return;
        case 0x02: BunnyCallingMarinState2Handler(); return;
        case 0x03: BunnyCallingMarinState3Handler(); return;
    }
}

void BunnyCallingMarinState0Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
    AddEntitySpeedToPos_18();
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto BunnyCallingMarinState0Handler_jr_5304;
    gb.regs.a = 1;
    func_018_59AE();
    gb.regs.a = 1;
    gb_write(0xFF9E, gb.regs.a);
    gb_push16(gb.regs.bc);
    UpdateLinkWalkingAnimation_trampoline();
    gb.regs.bc = gb_pop16();
    return;
  BunnyCallingMarinState0Handler_jr_5304:;
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState(); return;
}

void BunnyCallingMarinState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { func_018_5321(); return; };
    /* call_open_dialog Dialog1E3 */;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    IncrementEntityState();
}

void func_018_5321(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_018_5321_ret_5337;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_018_5321_ret_5337;
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x12);
  func_018_5321_ret_5337:;
    return;
}

void BunnyCallingMarinState2Handler(void) {
    func_018_5321();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BunnyCallingMarinState2Handler_jr_534F;
    gb_write(gb.regs.hl, 0x10);
    /* call_open_dialog Dialog1E5 */;
    IncrementEntityState(); return;
  BunnyCallingMarinState2Handler_jr_534F:;
    gb.regs.e = 2;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto BunnyCallingMarinState2Handler_jr_5357;
    gb.regs.e = 0;
  BunnyCallingMarinState2Handler_jr_5357:;
    gb.regs.a = gb.regs.e;
    func_018_59AE(); return;
}

void BunnyCallingMarinState3Handler(void) {
    func_018_5321();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_018_53CD(); return; };
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_018_5375(); return; };
    gb.regs.e = 1;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto BunnyCallingMarinState3Handler_jr_5371;
    gb.regs.e = 2;
  BunnyCallingMarinState3Handler_jr_5371:;
    gb.regs.a = gb.regs.e;
    func_018_59AE(); return;
}

void jr_018_5375(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xDC1C;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    alu_cp8(gb.regs.a, 0xE0);
    if (GET_FLAG_Z()) goto jr_018_5375_jr_5397;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xEC);
    AddEntitySpeedToPos_18();
  jr_018_5375_jr_5397:;
    gb.regs.a = gb_read(0xC50F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xF4);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.de);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    AddEntitySpeedToPos_18();
    gb.regs.bc = gb_pop16();
    gb.regs.de = gb_pop16();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xF0);
    if (!GET_FLAG_Z()) { ret_018_53CD(); return; };
    ClearEntityStatusBank18();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC1B, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
}

void ret_018_53CD(void) {
    return;
}

void MovingBlockMoverEntityHandler(void) {
    RenderMovingBlockMover();
    ReturnIfNonInteractive_18();
    gb.regs.hl = 0xFF98;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto MovingBlockMoverEntityHandler_pushLinkEnd;
    gb.regs.hl = 0xFF99;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) goto MovingBlockMoverEntityHandler_pushLinkEnd;
    PushLinkOutOfEntity_18_forcePush();
  MovingBlockMoverEntityHandler_pushLinkEnd:;
    gb.regs.hl = 0xFF98;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 6);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) goto MovingBlockMoverEntityHandler_grabEnd;
    gb.regs.hl = 0xFF99;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto MovingBlockMoverEntityHandler_grabEnd;
    gb.regs.e = 0x20;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto MovingBlockMoverEntityHandler_checkAButtonSlot;
    gb.regs.e = 0x10;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto MovingBlockMoverEntityHandler_grabEnd;
  MovingBlockMoverEntityHandler_checkAButtonSlot:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto MovingBlockMoverEntityHandler_grabEnd;
    gb.regs.a = 2;
    gb_write(0xFFBA, gb.regs.a);
    gb.regs.a = 0x3A;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    ResetSpinAttack();
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFF99, gb.regs.a);
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) goto MovingBlockMoverEntityHandler_pullEnd;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto MovingBlockMoverEntityHandler_pullEnd;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 0x18);
    if (GET_FLAG_Z()) goto MovingBlockMoverEntityHandler_return;
    gb.regs.hl = 0xFF9D;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    UpdateEntityYPosWithSpeed_18();
    gb.regs.a = 1;
    gb_write(0xFFBA, gb.regs.a);
  MovingBlockMoverEntityHandler_return:;
    return;
  MovingBlockMoverEntityHandler_pullEnd:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    return;
  MovingBlockMoverEntityHandler_grabEnd:;
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x1B);
    if (GET_FLAG_C()) goto MovingBlockMoverEntityHandler_retractingEnd;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFD);
    UpdateEntityYPosWithSpeed_18();
  MovingBlockMoverEntityHandler_retractingEnd:;
    return;
}

void MovingBlockMoverHandleSpriteVariants(void) {
  MovingBlockMoverHandleSpriteVariants_variant0:;
    /* data: db $44, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $44, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MovingBlockMoverHandleSpriteVariants_variant1:;
    /* data: db $74, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $74, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void MovingBlockMoverRodSpriteVariants(void) {
  MovingBlockMoverRodSpriteVariants_variant0:;
    /* data: db $46, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $46, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MovingBlockMoverRodSpriteVariants_variant1:;
    /* data: db $76, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void RenderMovingBlockMover(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto RenderMovingBlockMover_bottleGrottoEnd;
    gb_write(0xFFF1, gb.regs.a);
  RenderMovingBlockMover_bottleGrottoEnd:;
    gb.regs.de = 0x5314;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0xFC);
    alu_cp8(gb.regs.a, 0xF0);
    if (!GET_FLAG_C()) return;
    gb_write(0xFFEC, gb.regs.a);
  RenderMovingBlockMover_loop:;
    gb.regs.de = 0x531C;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0xFFEF;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) goto RenderMovingBlockMover_loop;
    CopyEntityPositionToActivePosition(); return;
}

void Data_018_54B9(void) {
    /* data: db $24, $00, $3E, $00 */;
}

void label_018_54BD(void) {
    gb.regs.de = 0x54B9;
    RenderActiveEntitySprite();
    ReturnIfNonInteractive_18();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.e = 1;
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) { jr_018_54DF(); return; };
    if (!GET_FLAG_Z()) goto label_018_54BD_jr_54DE;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_018_54DF(); return;
  label_018_54BD_jr_54DE:;
    gb.regs.e = alu_dec8(gb.regs.e);
}

void jr_018_54DF(void) {
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    gb.regs.e = 0xFE;
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto jr_018_54DF_jr_54EE;
    gb.regs.e = 0xFC;
  jr_018_54DF_jr_54EE:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    UpdateEntityPosWithSpeed_18(); return;
}

void WalrusEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_018_54BD(); return; };
    gb.regs.a = gb_read(0xD9B2);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { label_018_589A(); return; };
    func_018_586B();
    ReturnIfNonInteractive_18();
    AddEntityZSpeedToPos_18();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto WalrusEntityHandler_jr_552F;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  WalrusEntityHandler_jr_552F:;
    PushLinkOutOfEntity_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: WalrusState0Handler(); return;
        case 0x01: WalrusWakingUpHandler(); return;
        case 0x02: WalrusState2Handler(); return;
        case 0x03: WalrusState3Handler(); return;
        case 0x04: WalrusState4Handler(); return;
        case 0x05: WalrusState5Handler(); return;
        case 0x06: WalrusDisappearHandler(); return;
        case 0x07: WalrusState7Handler(); return;
        case 0x08: WalrusState8Handler(); return;
    }
}

void WalrusState0Handler(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x7F;
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto WalrusState0Handler_jr_557B;
    gb.regs.a = 0xC4;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto WalrusState0Handler_jr_557B;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC1);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  WalrusState0Handler_jr_557B:;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WalrusState0Handler_jr_558A;
    func_018_7D7C();
    if (!GET_FLAG_C()) return;
    /* jp_open_dialog Dialog1E0 */;
  WalrusState0Handler_jr_558A:;
    GetEntityXDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x13);
    alu_cp8(gb.regs.a, 0x26);
    if (!GET_FLAG_C()) return;
    GetEntityRealYDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) return;
    ResetSpinAttack();
    ClearLinkPositionIncrement();
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC50F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    /* call_open_dialog Dialog1E1 */;
    label_018_59AC(); return;
}

void WalrusWakingUpHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WalrusWakingUpHandler_jr_55D8;
    gb.regs.a = 0x2F;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xC3C8, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
    return;
  WalrusWakingUpHandler_jr_55D8:;
    gb_write(gb.regs.hl, 8);
    /* jp_open_dialog Dialog1E4 */;
}

void WalrusState2Handler(void) {
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto WalrusState2Handler_jr_55F2;
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState(); return;
  WalrusState2Handler_jr_55F2:;
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) { jr_018_5612(); return; };
    gb.regs.e = 2;
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) { jr_018_5612(); return; };
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, 0x3C);
    if (!GET_FLAG_C()) goto WalrusState2Handler_jr_5610;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { jr_018_5612(); return; };
    alu_cp8(gb.regs.a, 0x21);
    if (GET_FLAG_Z()) { jr_018_5612(); return; };
    alu_cp8(gb.regs.a, 0x22);
    if (GET_FLAG_Z()) { jr_018_5612(); return; };
  WalrusState2Handler_jr_5610:;
    gb.regs.e = 1;
}

void jr_018_5612(void) {
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void Data_018_5616(void) {
    /* data: db $01, $02, $01, $02, $01, $01, $02, $02, $01, $02, $01, $02, $01, $01, $02, $02 */;
    /* data: db $01, $02, $01, $02, $01, $01, $02, $02, $01, $02, $01, $02, $01, $01, $02, $02 */;
    /* data: db $01, $02, $01, $02, $01, $01, $02, $02, $01, $02, $01, $02, $01, $01, $02, $02 */;
    /* data: db $01, $02, $01, $02, $01, $01, $02, $02, $01, $02, $01, $02, $01, $01, $02, $02 */;
    /* data: db $01, $02, $01, $02, $01, $01, $02, $02, $01, $02, $01, $02, $01, $01, $02, $02 */;
    /* data: db $01, $02, $01, $02, $01, $01, $02, $02, $01, $02, $01, $02, $01, $01, $02, $02 */;
}

void WalrusState3Handler(void) {
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto WalrusState3Handler_jr_5698;
    gb_write(0xC3C8, gb.regs.a);
    gb.regs.a = 0x11;
    gb_write(0xFFF4, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
    gb.regs.a = 2;
    SetEntitySpriteVariant();
    IncrementEntityState(); return;
  WalrusState3Handler_jr_5698:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto WalrusState3Handler_jr_56B8;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) goto WalrusState3Handler_jr_56B8;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto WalrusState3Handler_jr_56B8;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = 0x24;
    gb_write(0xFFF2, gb.regs.a);
  WalrusState3Handler_jr_56B8:;
    gb.regs.hl = 0x5616;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { jr_018_56CE(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto WalrusState3Handler_jr_56CC;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x27);
  WalrusState3Handler_jr_56CC:;
    gb.regs.a = 2;
}

void jr_018_56CE(void) {
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.e = 1;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0xF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_018_56CE_jr_56E6;
    gb.regs.e = alu_inc8(gb.regs.e);
  jr_018_56CE_jr_56E6:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void WalrusState4Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState(); return;
}

void WalrusState5Handler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
}

void func_018_572E(void) {
    gb.regs.a = 0x24;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 1;
    AddTranscientVfx();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 1;
    AddTranscientVfx(); return;
}

void WalrusDisappearHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto WalrusDisappearHandler_jr_5778;
    IncrementEntityState();
    gb.regs.a = gb_read(0xFFB0);
    gb_write(0xD368, gb.regs.a);
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    /* call_open_dialog Dialog1E2 */;
    gb.regs.a = 3;
    func_018_59AE();
    gb.regs.a = 3;
    gb_write(0xFF9E, gb.regs.a);
    gb_push16(gb.regs.bc);
    UpdateLinkWalkingAnimation_trampoline();
    gb.regs.bc = gb_pop16();
    return;
  WalrusDisappearHandler_jr_5778:;
    gb.regs.a = 5;
    SetEntitySpriteVariant(); return;
}

void WalrusState7Handler(void) {
    gb.regs.a = 0xC8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xF8);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x48);
    ClearEntityStatusBank18();
    SetRoomStatus20(); return;
}

void WalrusState8Handler(void) {
    return;
}

void Data_018_579B(void) {
    /* data: db $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $00, $10, $64, $01, $00, $18, $66, $01 */;
    /* data: db $10, $00, $68, $01, $10, $08, $6A, $01 */;
    /* data: db $10, $10, $6C, $01, $10, $18, $6E, $01 */;
    /* data: db $00, $00, $60, $01, $00, $08, $70, $01 */;
    /* data: db $00, $10, $64, $01, $00, $18, $66, $01 */;
    /* data: db $10, $00, $68, $01, $10, $08, $6A, $01 */;
    /* data: db $10, $10, $6C, $01, $10, $18, $6E, $01 */;
    /* data: db $00, $00, $72, $01, $00, $08, $74, $01 */;
    /* data: db $00, $10, $64, $01, $00, $18, $66, $01 */;
    /* data: db $10, $00, $76, $01, $10, $08, $6A, $01 */;
    /* data: db $10, $10, $6C, $01, $10, $18, $6E, $01 */;
    /* data: db $00, $00, $78, $01, $00, $08, $7A, $01 */;
    /* data: db $00, $10, $7C, $01, $00, $18, $7E, $01 */;
    /* data: db $10, $00, $78, $41, $10, $08, $7A, $41 */;
    /* data: db $10, $10, $7C, $41, $10, $18, $7E, $41 */;
    /* data: db $00, $00, $68, $41, $00, $08, $6A, $41 */;
    /* data: db $00, $10, $6C, $41, $00, $18, $6E, $41 */;
    /* data: db $10, $00, $60, $41, $10, $08, $62, $41 */;
    /* data: db $10, $10, $64, $41, $10, $18, $66, $41 */;
    /* data: db $0E, $00, $68, $41, $0E, $08, $6A, $41 */;
    /* data: db $0E, $10, $6C, $41, $0E, $18, $6E, $41 */;
    /* data: db $10, $00, $FF, $41, $10, $08, $FF, $41 */;
    /* data: db $10, $10, $FF, $41, $10, $18, $FF, $41 */;
}

void Data_018_585B(void) {
    /* data: db $17, $03, $26, $00, $17, $09, $26, $00, $17, $0F, $26, $00, $17, $15, $26, $00 */;
}

void func_018_586B(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x579B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x585B;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition(); return;
}

void label_018_589A(void) {
    func_018_596B();
    gb.regs.a = gb_read(0xC124);
  label_018_589A_jr_58A0:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_018_58AD(); return;
        case 0x01: func_018_58C1(); return;
        case 0x02: func_018_58DD(); return;
        case 0x03: func_018_58F1(); return;
    }
}

void func_018_58AD(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x68);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x80);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState(); return;
}

void func_018_58C1(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDBF6);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC166);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    func_018_572E(); return;
}

void func_018_58DD(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_018_58DD_jr_58E7;
    gb_write(gb.regs.hl, 0xC8);
    IncrementEntityState(); return;
  func_018_58DD_jr_58E7:;
    alu_cp8(gb.regs.a, 0x10);
    gb.regs.a = 1;
    if (GET_FLAG_C()) goto func_018_58DD_jr_58EE;
    gb.regs.a = alu_inc8(gb.regs.a);
  func_018_58DD_jr_58EE:;
    SetEntitySpriteVariant(); return;
}

void func_018_58F1(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_018_58F1_jr_58FC;
    func_018_572E();
    ClearEntityStatusBank18(); return;
  func_018_58F1_jr_58FC:;
    alu_cp8(gb.regs.a, 0xB0);
    if (!GET_FLAG_Z()) goto func_018_58F1_jr_5900;
  func_018_58F1_jr_5900:;
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_018_58F1_jr_590D;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog1E6 */;
  func_018_58F1_jr_590D:;
    GetEntityTransitionCountdown();
    gb.regs.d = 0;
    alu_cp8(gb.regs.a, 0x10);
    gb.regs.e = 2;
    if (GET_FLAG_C()) goto func_018_58F1_jr_591E;
    gb.regs.e = alu_dec8(gb.regs.e);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) goto func_018_58F1_jr_591E;
    gb.regs.d = alu_inc8(gb.regs.d);
  func_018_58F1_jr_591E:;
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.d);
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void Data_018_5927(void) {
    /* data: db $FF, $04, $FF, $00, $FF, $0C, $FF, $00, $FF, $04, $FF, $00, $FF, $0C, $FF, $00 */;
    /* data: db $FF, $14, $FF, $00, $FC, $04, $70, $01, $FC, $0C, $72, $01, $0C, $04, $74, $01 */;
    /* data: db $0C, $0C, $76, $01, $0C, $14, $78, $01, $0C, $04, $7A, $01, $0C, $0C, $7C, $01 */;
    /* data: db $0C, $14, $7E, $01, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
}

void Data_018_5963(void) {
    /* data: db $00, $00, $01, $02, $03, $03, $02, $01 */;
}

void func_018_596B(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5963;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_018_596B_jr_5995;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
  func_018_596B_jr_5995:;
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
    gb.regs.hl = 0x5927;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 5;
    RenderActiveEntitySpritesRect(); return;
}

void label_018_59AC(void) {
    gb.regs.a = 0;
}

void func_018_59AE(void) {
    gb.regs.e = 0x10;
    gb.regs.hl = 0xD3B5;
  func_018_59AE_loop_59B3:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_018_59AE_loop_59B3;
    return;
}

void MarinAsFollowerSpriteVariants(void) {
  MarinAsFollowerSpriteVariants_variant0:;
    /* data: db $42, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $40, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAsFollowerSpriteVariants_variant1:;
    /* data: db $40, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $42, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MarinAsFollowerSpriteVariants_variant2:;
    /* data: db $44, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $46, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MarinAsFollowerSpriteVariants_variant3:;
    /* data: db $46, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $44, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAsFollowerSpriteVariants_variant4:;
    /* data: db $48, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $4A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MarinAsFollowerSpriteVariants_variant5:;
    /* data: db $4C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $4E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MarinAsFollowerSpriteVariants_variant6:;
    /* data: db $4A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $48, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAsFollowerSpriteVariants_variant7:;
    /* data: db $4E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $4C, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAsFollowerSpriteVariants_variant8:;
    /* data: db $50, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MarinAsFollowerSpriteVariants_variant9:;
    /* data: db $54, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $54, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAsFollowerSpriteVariants_variant10:;
    /* data: db $52, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $50, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Data_018_59E4(void) {
    /* data: db $06, $04, $02, $00 */;
}

void MarinAsFollowerHandler(void) {
    gb.regs.a = gb.regs.c;
    gb_write(0xC50F, gb.regs.a);
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_018_5A3F(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto MarinAsFollowerHandler_jr_5A07;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x28;
    gb_write(0xFF99, gb.regs.a);
    /* call_open_dialog Dialog01F */;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x0F;
  MarinAsFollowerHandler_jr_5A07:;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto MarinAsFollowerHandler_jr_5A18;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 0x31;
    gb_write(0xD368, gb.regs.a);
    gb.regs.a = 5;
    gb_write(0xFFB0, gb.regs.a);
  MarinAsFollowerHandler_jr_5A18:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC3B0, gb.regs.a);
    gb.regs.de = 0x5821;
    RenderActiveEntitySpritesPair();
    gb.regs.a = 0x6C;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void jr_018_5A3F(void) {
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_5A8C(); return; };
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { ret_018_5A7F(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x70);
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xFFBF, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xD355;
    func_018_5A79();
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xD375;
    func_018_5A79();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.hl = 0xD395;
    func_018_5A79();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.hl = 0xD3B5;
}

void func_018_5A79(void) {
    gb.regs.e = 0x10;
  func_018_5A79_loop:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_018_5A79_loop;
}

void ret_018_5A7F(void) {
    return;
}

void Data_018_5A80(void) {
    /* data: db $08, $08, $08, $09, $0A, $0A, $0A, $09 */;
}

void Data_018_5A88(void) {
    /* data: db $08, $F8 */;
}

void Data_018_5A8A(void) {
    /* data: db $06, $01 */;
}

void jr_018_5A8C(void) {
    gb.regs.a = gb_read(0xC3C8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_5A8C_jr_5AE7;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5A80;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto jr_018_5A8C_jr_5AE7;
    gb.regs.a = 0xC9;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto jr_018_5A8C_jr_5AE7;
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x5A88;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5A8A;
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
    gb.regs.bc = gb_pop16();
  jr_018_5A8C_jr_5AE7:;
    gb.regs.de = 0x5821;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xC14F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_5A8C_jr_5B03;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_018_5A8C_jr_5B03;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog27A */;
  jr_018_5A8C_jr_5B03:;
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto jr_018_5A8C_jr_5B13;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_5A8C_jr_5B13;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  jr_018_5A8C_jr_5B13:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_018_5B6A(); return; };
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) { jr_018_5B55(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x58);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto jr_018_5A8C_jr_5B33;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) { jr_018_5B3B(); return; };
  jr_018_5A8C_jr_5B33:;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x1C);
    return;
}

void jr_018_5B3B(void) {
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x0B);
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC157;
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC158;
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xFF98;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_018_5B61(); return;
}

void jr_018_5B55(void) {
    if (!GET_FLAG_C()) { jr_018_5B6A(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { jr_018_5B61(); return; };
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog27B */;
}

void jr_018_5B61(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 0x6A;
    gb_write(0xFF9D, gb.regs.a);
    return;
}

void jr_018_5B6A(void) {
    gb.regs.a = gb_read(0xDC1C);
    gb.regs.hl = 0xC1BC;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDBBC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_018_5C6A(); return; };
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xD468);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_5B6A_jr_5B90;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD468, gb.regs.a);
  jr_018_5B6A_jr_5B90:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_018_5B9D(); return;
        case 0x01: func_018_5BB4(); return;
        case 0x02: func_018_5BD0(); return;
        case 0x03: func_018_5C07(); return;
        case 0x04: func_018_5C39(); return;
    }
}

void func_018_5B9D(void) {
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 0x40;
    gb_write(0xD468, gb.regs.a);
    gb.regs.a = 0x0F;
    gb_write(0xFFA5, gb.regs.a);
    gb.regs.a = 1;
    SetEntitySpriteVariant();
    IncrementEntityState(); return;
}

void func_018_5BB4(void) {
    gb.regs.a = gb_read(0xD468);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x18;
    gb_write(0xD468, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = 4;
    SetEntitySpriteVariant();
    gb.regs.a = 0x10;
    gb_write(0xFFA5, gb.regs.a);
    IncrementEntityState(); return;
}

void func_018_5BD0(void) {
    gb.regs.a = gb_read(0xD468);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF4);
    AddEntitySpeedToPos_18();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.e = 4;
    if (GET_FLAG_Z()) goto func_018_5BD0_jr_5BE7;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_018_5BD0_jr_5BE7:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant();
    GetEntityXDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) return;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    gb.regs.a = 0x10;
    gb_write(0xD468, gb.regs.a);
    IncrementEntityState(); return;
}

void func_018_5C07(void) {
    gb.regs.a = gb_read(0xD468);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDBBC);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC163);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto func_018_5C07_jr_5C27;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_018_5C07_jr_5C27;
    gb.regs.e = 0x1C;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) { jr_018_5C32(); return; };
    /* ld_dialog_low e, Dialog21E */;
    jr_018_5C32(); return;
  func_018_5C07_jr_5C27:;
    /* ld_dialog_low e, Dialog21B */;
    gb.regs.a = gb_read(0xDBF3);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) { jr_018_5C32(); return; };
    /* ld_dialog_low e, Dialog21D */;
}

void jr_018_5C32(void) {
    gb.regs.a = gb.regs.e;
    OpenDialogInTable2();
    IncrementEntityState(); return;
}

void func_018_5C39(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDBBC, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xD355;
    func_018_5C63();
    gb.regs.hl = 0xD375;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.e = 0x10;
  func_018_5C39_loop_5C59:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_018_5C39_loop_5C59;
    gb.regs.a = 2;
    gb.regs.hl = 0xD3B5;
}

void func_018_5C63(void) {
    gb.regs.e = 0x10;
  func_018_5C63_loop_5C65:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_018_5C63_loop_5C65;
    return;
}

void label_018_5C6A(void) {
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
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
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x59E4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC120);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD355;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF9F);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFA0);
    gb.regs.hl = 0xC13B;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xD375;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD3B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF9E);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD395;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFA2);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto label_018_5C6A_jr_5CEA;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_018_5C6A_jr_5CEA;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_5CEF(); return; };
    gb.regs.hl = 0xFF9A;
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { jr_018_5CEF(); return; };
  label_018_5C6A_jr_5CEA:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void jr_018_5CEF(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD355;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD375;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD3B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xD395;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    GetEntityPrivateCountdown1();
    gb.regs.hl = 0xC124;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_018_5D7D(); return; };
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) { jr_018_5D7A(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_018_5D6F(); return; };
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_5D7A(); return; };
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto jr_018_5CEF_jr_5D5E;
    gb.regs.a = 7;
    gb_write(0xFFF4, gb.regs.a);
    return;
  jr_018_5CEF_jr_5D5E:;
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0x0C;
    AddTranscientVfx(); return;
}

void jr_018_5D6F(void) {
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 8);
    gb.regs.a = 8;
    if (!GET_FLAG_C()) goto jr_018_5D6F_jr_5D78;
    gb.regs.a = 0x24;
  jr_018_5D6F_jr_5D78:;
    gb_write(0xFFF2, gb.regs.a);
}

void jr_018_5D7A(void) {
    ApplyEntityInteractionWithBackground_trampoline(); return;
}

void jr_018_5D7D(void) {
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
}

void Data_018_5D7F(void) {
    /* data: db $00, $01, $FF */;
}

void Data_018_5D82(void) {
    /* data: db $00, $10, $F0 */;
}

void TextDebuggerEntityHandler(void) {
    ReturnIfNonInteractive_18();
    gb.regs.a = 1;
    gb_write(0xFFA4, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5D7F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC109);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb_write(0xC109, gb.regs.a);
    gb.regs.a = gb_read(0xFFCC);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5D82;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC109);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC109, gb.regs.a);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_5DDC(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto TextDebuggerEntityHandler_jr_5DD0;
    gb.regs.a = gb_read(0xC109);
    OpenDialogInTable0(); return;
  TextDebuggerEntityHandler_jr_5DD0:;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { jr_018_5DDC(); return; };
    gb.regs.a = gb_read(0xC109);
    OpenDialogInTable1(); return;
}

void jr_018_5DDC(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto jr_018_5DDC_ret_5DE8;
    gb.regs.a = gb_read(0xC109);
    OpenDialogInTable2(); return;
  jr_018_5DDC_ret_5DE8:;
    return;
}

void SouthFaceShrineDoorEntityHandler(void) {
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto SouthFaceShrineDoorEntityHandler_return;
    gb.regs.hl = 0xC1BF;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  SouthFaceShrineDoorEntityHandler_return:;
    return;
}

void OwlStatueSpriteVariants(void) {
  OwlStatueSpriteVariants_variant0:;
    /* data: db $5E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Data_018_5DFB(void) {
    /* data: db $00, $F8, $50, $06, $00, $00, $52, $06, $00, $08, $54, $06, $00, $10, $56, $06 */;
}

void Data_018_5E0B(void) {
    /* data: db $00, $F8, $50, $03, $00, $00, $52, $03, $00, $08, $54, $03, $00, $10, $56, $03 */;
}

void OwlStatueSouthFaceShrine(void) {
    gb.regs.hl = 0x5DFB;
    gb.regs.a = gb_read(0xC3CC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto OwlStatueSouthFaceShrine_jr_5E27;
    gb.regs.hl = 0x5E0B;
  OwlStatueSouthFaceShrine_jr_5E27:;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 2;
    func_015_7964_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_018_5E3A(); return;
        case 0x01: func_018_5E43(); return;
        case 0x02: func_018_5E5D(); return;
    }
}

void func_018_5E3A(void) {
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState(); return;
}

void func_018_5E43(void) {
    ReturnIfNonInteractive_18();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    func_018_7D95();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDC3F);
    alu_cp8(gb.regs.a, 0xE4);
    if (!GET_FLAG_Z()) goto func_018_5E43_jr_5E58;
    IncrementEntityState(); return;
  func_018_5E43_jr_5E58:;
    /* jp_open_dialog Dialog0E6 */;
}

void func_018_5E5D(void) {
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_018_5E5D_ret_5E79;
    gb.regs.a = 0x0A;
    func_018_4CB0();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xD961;
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
  func_018_5E5D_ret_5E79:;
    return;
}

void OwlStatueEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x16);
    if (GET_FLAG_Z()) { OwlStatueSouthFaceShrine(); return; };
    gb.regs.hl = 0xFFEC;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x5C32;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_18();
    PushLinkOutOfEntity_18();
    PushLinkOutOfEntity_18();
    ReturnIfNonInteractive_18();
    func_018_7D95();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDC76);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low a, Dialog110 */;
    if (!GET_FLAG_Z()) goto OwlStatueEntityHandler_jr_5EA2;
    OpenDialogInTable1(); return;
  OwlStatueEntityHandler_jr_5EA2:;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto OwlStatueEntityHandler_jr_5EAD;
    /* jp_open_dialog Dialog263 */;
  OwlStatueEntityHandler_jr_5EAD:;
    gb.regs.a = 0x18;
    GetOwlStatueDialogId_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    OpenDialogInTable2(); return;
}

void MarinAtTalTalAndInStoreSpriteVariants(void) {
  MarinAtTalTalAndInStoreSpriteVariants_variant0:;
    /* data: db $60, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MarinAtTalTalAndInStoreSpriteVariants_variant1:;
    /* data: db $62, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $60, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAtTalTalAndInStoreSpriteVariants_variant2:;
    /* data: db $64, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MarinAtTalTalAndInStoreSpriteVariants_variant3:;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAtTalTalAndInStoreSpriteVariants_variant4:;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MarinAtTalTalAndInStoreSpriteVariants_variant5:;
    /* data: db $6C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MarinAtTalTalAndInStoreSpriteVariants_variant6:;
    /* data: db $6A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAtTalTalAndInStoreSpriteVariants_variant7:;
    /* data: db $6E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void MarinAtTalTalHeightsEntityHandler(void) {
    gb.regs.a = gb_read(0xDC13);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.a = gb_read(0xDC23);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { TarinAtTalTalHeights(); return; };
    gb.regs.a = gb.regs.c;
    gb_write(0xC50F, gb.regs.a);
    gb.regs.de = 0x5CF1;
    RenderActiveEntitySpritesPair();
    SetEntityVariantForDirection_18();
    AddEntityZSpeedToPos_18();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto MarinAtTalTalHeightsEntityHandler_jr_5F1A;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_018_5F20(); return; };
  MarinAtTalTalHeightsEntityHandler_jr_5F1A:;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
}

void jr_018_5F20(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MarinAtTalTalHeightsState0Handler(); return;
        case 0x01: MarinAtTalTalHeightsState1Handler(); return;
        case 0x02: MarinAtTalTalHeightsState2Handler(); return;
        case 0x03: MarinAtTalTalHeightsState3Handler(); return;
        case 0x04: MarinAtTalTalHeightsState4Handler(); return;
        case 0x05: MarinAtTalTalHeightsState5Handler(); return;
        case 0x06: MarinAtTalTalHeightsState6Handler(); return;
        case 0x07: MarinAtTalTalHeightsState7Handler(); return;
        case 0x08: MarinAtTalTalHeightsState8Handler(); return;
        case 0x09: MarinAtTalTalHeightsState9Handler(); return;
        case 0x0A: MarinAtTalTalHeightsStateAHandler(); return;
        case 0x0B: MarinAtTalTalHeightsStateBHandler(); return;
        case 0x0C: MarinAtTalTalHeightsStateCHandler(); return;
    }
}

void func_018_5F3D(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void MarinAtTalTalHeightsState0Handler(void) {
    func_018_5F5E();
    ReturnIfNonInteractive_18();
    GetEntityXDistanceToLink_18();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_C()) return;
    /* call_open_dialog Dialog235 */;
    IncrementEntityState(); return;
}

void func_018_5F5E(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_018_5F5E_jr_5F66;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) return;
  func_018_5F5E_jr_5F66:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto func_018_5F5E_ret_5F72;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
  func_018_5F5E_ret_5F72:;
    return;
}

void MarinAtTalTalHeightsState1Handler(void) {
    func_018_5F5E();
    ReturnIfNonInteractive_18();
    /* call_open_dialog Dialog236 */;
    IncrementEntityState(); return;
}

void MarinAtTalTalHeightsState2Handler(void) {
    func_018_5F5E();
    ReturnIfNonInteractive_18();
    GetEntityXDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) return;
    GetEntityRealYDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) return;
    IncrementEntityState(); return;
}

void MarinAtTalTalHeightsState3Handler(void) {
    func_018_5F3D();
    ReturnIfNonInteractive_18();
    GetEntityXDistanceToLink_18();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.a = gb_read(0xC1A4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MarinAtTalTalHeightsState3Handler_jr_5FBF;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  MarinAtTalTalHeightsState3Handler_jr_5FBF:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC19B, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    IncrementEntityState(); return;
}

void MarinAtTalTalHeightsState4Handler(void) {
    func_018_5F3D();
    ReturnIfNonInteractive_18();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xFF9E, gb.regs.a);
    gb_push16(gb.regs.bc);
    UpdateLinkWalkingAnimation_trampoline();
    gb.regs.bc = gb_pop16();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    /* call_open_dialog Dialog237 */;
    IncrementEntityState(); return;
}

void MarinAtTalTalHeightsState5Handler(void) {
    func_018_5F3D();
    ReturnIfNonInteractive_18();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    /* call_open_dialog Dialog238 */;
    IncrementEntityState(); return;
}

void MarinAtTalTalHeightsState6Handler(void) {
    func_018_5F3D();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    ReturnIfNonInteractive_18();
    /* call_open_dialog Dialog239 */;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    IncrementEntityState(); return;
}

void MarinAtTalTalHeightsState7Handler(void) {
    func_018_5F3D();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    ReturnIfNonInteractive_18();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState(); return;
}

void MarinAtTalTalHeightsState8Handler(void) {
    func_018_5F3D();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    ReturnIfNonInteractive_18();
    gb.regs.a = 0xC2;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x88);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    IncrementEntityState(); return;
}

void MarinAtTalTalHeightsState9Handler(void) {
    func_018_5F3D();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    return;
}

void MarinAtTalTalHeightsStateAHandler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x3E);
    if (GET_FLAG_C()) goto MarinAtTalTalHeightsStateAHandler_jr_6064;
    IncrementEntityState(); return;
  MarinAtTalTalHeightsStateAHandler_jr_6064:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 6);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    UpdateEntityYPosWithSpeed_18(); return;
}

void MarinAtTalTalHeightsStateBHandler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFA);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    AddEntitySpeedToPos_18();
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
    IncrementEntityState(); return;
}

void MarinAtTalTalHeightsStateCHandler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto MarinAtTalTalHeightsStateCHandler_jr_60A3;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    return;
  MarinAtTalTalHeightsStateCHandler_jr_60A3:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF4);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    AddEntitySpeedToPos_18();
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xF0);
    if (!GET_FLAG_Z()) goto MarinAtTalTalHeightsStateCHandler_jr_60C7;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.hl = 0xD8BD;
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF8, gb.regs.a);
    ClearEntityStatusBank18(); return;
  MarinAtTalTalHeightsStateCHandler_jr_60C7:;
    GetEntityXDistanceToLink_18();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(0xFF9E, gb.regs.a);
    gb_push16(gb.regs.bc);
    UpdateLinkWalkingAnimation_trampoline();
    gb.regs.bc = gb_pop16();
    return;
}

void MarinAtTalTal2SpriteVariants(void) {
  MarinAtTalTal2SpriteVariants_variant0:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  MarinAtTalTal2SpriteVariants_variant1:;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAtTalTal2SpriteVariants_variant2:;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  MarinAtTalTal2SpriteVariants_variant3:;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAtTalTal2SpriteVariants_variant4:;
    /* data: db $58, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  MarinAtTalTal2SpriteVariants_variant5:;
    /* data: db $5C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  MarinAtTalTal2SpriteVariants_variant6:;
    /* data: db $5A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $58, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  MarinAtTalTal2SpriteVariants_variant7:;
    /* data: db $5E, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $5C, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void TarinAtTalTalHeights(void) {
    gb.regs.de = 0x5EDF;
    RenderActiveEntitySpritesPair();
    SetEntityVariantForDirection_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: TarinAtTalTalHeightsState0Handler(); return;
        case 0x01: TarinAtTalTalHeightsState1Handler(); return;
        case 0x02: TarinAtTalTalHeightsState2Handler(); return;
        case 0x03: TarinAtTalTalHeightsState3Handler(); return;
    }
}

void TarinAtTalTalHeightsState0Handler(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF4);
    UpdateEntityYPosWithSpeed_18();
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_C()) return;
    /* call_open_dialog Dialog23B */;
    gb.regs.a = 3;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = gb_read(0xC50F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb_push16(gb.regs.bc);
    UpdateLinkWalkingAnimation_trampoline();
    gb.regs.bc = gb_pop16();
    IncrementEntityState(); return;
}

void TarinAtTalTalHeightsState1Handler(void) {
    gb.regs.a = gb_read(0xC50F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    ReturnIfNonInteractive_18();
    /* call_open_dialog Dialog23A */;
    IncrementEntityState(); return;
}

void TarinAtTalTalHeightsState2Handler(void) {
    gb.regs.a = gb_read(0xC50F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb.regs.a = gb_read(0xC170);
    alu_cp8(gb.regs.a, 0x22);
    if (GET_FLAG_C()) goto TarinAtTalTalHeightsState2Handler_jr_6163;
    gb_write(gb.regs.hl, 1);
  TarinAtTalTalHeightsState2Handler_jr_6163:;
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xC50F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    IncrementEntityState(); return;
}

void TarinAtTalTalHeightsState3Handler(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF8);
    AddEntitySpeedToPos_18();
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xE0);
    if (!GET_FLAG_Z()) return;
    ClearEntityStatusBank18(); return;
}

void MarinAtTheShoreEntityHandler(void) {
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { MarinAsFollowerHandler(); return; };
    gb.regs.a = gb_read(0xDC1C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD9B2);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_C()) { ClearEntityStatusBank18(); return; };
    gb.regs.de = 0x5CF1;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    PushLinkOutOfEntity_18();
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MarinAtTheShoreTransitionHandler(); return;
        case 0x01: MarinAtTheShoreState1Handler(); return;
        case 0x02: MarinAtTheShoreState2Handler(); return;
        case 0x03: MarinAtTheShoreState3Handler(); return;
        case 0x04: MarinAtTheShoreState4Handler(); return;
        case 0x05: MarinAtTheShoreState5Handler(); return;
        case 0x06: MarinAtTheShoreState6Handler(); return;
    }
}

void MarinAtTheShoreTransitionHandler(void) {
    gb.regs.a = 0x4D;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFB0, gb.regs.a);
    gb_write(0xFFBD, gb.regs.a);
    IncrementEntityState(); return;
}

void MarinAtTheShoreState1Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    GetEntityRealYDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_C()) return;
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x18);
    IncrementEntityState(); return;
}

void MarinAtTheShoreState2Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MarinAtTheShoreState2Handler_jr_6209;
    /* call_open_dialog Dialog1D5 */;
    IncrementEntityState();
  MarinAtTheShoreState2Handler_jr_6209:;
    gb.regs.e = 2;
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_C()) goto MarinAtTheShoreState2Handler_jr_6211;
    gb.regs.e = 4;
  MarinAtTheShoreState2Handler_jr_6211:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void MarinAtTheShoreState3Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MarinAtTheShoreState3Handler_playerDoesntWantToTalk;
    gb_write(gb.regs.hl, 6);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xD47C, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 9;
    gb_write(0xDC3D, gb.regs.a);
    gb.regs.a = 0x4E;
    gb_write(0xD368, gb.regs.a);
    return;
  MarinAtTheShoreState3Handler_playerDoesntWantToTalk:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    /* jp_open_dialog Dialog1D6 */;
}

void MarinAtTheShoreState4Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
    IncrementEntityState(); return;
}

void MarinAtTheShoreState5Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MarinAtTheShoreState5Handler_jr_625B;
    IncrementEntityState();
  MarinAtTheShoreState5Handler_jr_625B:;
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, 0x54);
    if (GET_FLAG_C()) goto MarinAtTheShoreState5Handler_jr_6263;
    gb.regs.e = 4;
  MarinAtTheShoreState5Handler_jr_6263:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void MarinAtTheShoreState6Handler(void) {
    return;
}

void MazeSignpostEntityPosition(void) {
    /* data: db $65, $64, $54, $52, $22, $22, $32, $37, $37, $37, $57, $56, $26, $21 */;
}

void MazeSignpostEntityRoom(void) {
    /* data: db UNKNOWN_ROOM_C4, UNKNOWN_ROOM_C5 */;
    /* data: db UNKNOWN_ROOM_D5, UNKNOWN_ROOM_D4 */;
    /* data: db UNKNOWN_ROOM_C4, UNKNOWN_ROOM_C5 */;
    /* data: db UNKNOWN_ROOM_D5, UNKNOWN_ROOM_D5 */;
    /* data: db UNKNOWN_ROOM_C5, UNKNOWN_ROOM_C4 */;
    /* data: db UNKNOWN_ROOM_C4, UNKNOWN_ROOM_C5 */;
    /* data: db UNKNOWN_ROOM_D5, UNKNOWN_ROOM_D4 */;
}

void MazeSignpostDialogs(void) {
  MazeSignpostDialogs__0:;
    /* db_dialog_low Dialog1AB */;
  MazeSignpostDialogs__1:;
    /* db_dialog_low Dialog1A9 */;
  MazeSignpostDialogs__2:;
    /* db_dialog_low Dialog1AC */;
  MazeSignpostDialogs__3:;
    /* db_dialog_low Dialog1AA */;
  MazeSignpostDialogs__4:;
    /* db_dialog_low Dialog1AB */;
  MazeSignpostDialogs__5:;
    /* db_dialog_low Dialog1A9 */;
  MazeSignpostDialogs__6:;
    /* db_dialog_low Dialog1AB */;
  MazeSignpostDialogs__7:;
    /* db_dialog_low Dialog1AA */;
  MazeSignpostDialogs__8:;
    /* db_dialog_low Dialog1AC */;
  MazeSignpostDialogs__9:;
    /* db_dialog_low Dialog1A9 */;
  MazeSignpostDialogs__A:;
    /* db_dialog_low Dialog1AB */;
  MazeSignpostDialogs__B:;
    /* db_dialog_low Dialog1A9 */;
  MazeSignpostDialogs__C:;
    /* db_dialog_low Dialog1AC */;
  MazeSignpostDialogs__D:;
    /* db_dialog_low Dialog1AE */;
}

void MazeSignpostEntityHandler(void) {
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB4);
    if (!GET_FLAG_Z()) goto MazeSignpostEntityHandler_in_maze_proper;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD472, gb.regs.a);
    gb_write(0xD473, gb.regs.a);
  MazeSignpostEntityHandler_in_maze_proper:;
    gb.regs.a = gb_read(0xD473);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MazeSignpostEntityHandler_skip;
    gb.regs.a = gb_read(0xD472);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6041;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xD473);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto MazeSignpostEntityHandler_wrong;
    gb.regs.hl = 0x604F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto MazeSignpostEntityHandler_wrong;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD473, gb.regs.a);
    gb.regs.a = gb_read(0xD472);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD472, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) goto MazeSignpostEntityHandler_dialog;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD472, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFF2, gb.regs.a);
    gb_push16(gb.regs.de);
    RevealMamuCave();
    gb.regs.de = gb_pop16();
  MazeSignpostEntityHandler_dialog:;
    gb.regs.hl = 0x605D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    OpenDialogInTable1(); return;
  MazeSignpostEntityHandler_wrong:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD472, gb.regs.a);
    gb_write(0xD473, gb.regs.a);
    gb.regs.a = 0x1D;
    gb_write(0xFFF2, gb.regs.a);
    /* call_open_dialog Dialog1AD */;
  MazeSignpostEntityHandler_skip:;
    return;
}

void RevealMamuCave(void) {
    gb.regs.hl = 0xD7EE;
    gb_write(gb.regs.hl, 0xC6);
    gb.regs.a = 0x98;
    BackupObjectInRAM2();
    gb.regs.a = 0x28;
    gb_write(0xD416, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RevealMamuCave_jr_632D;
    gb_push16(gb.regs.bc);
    gb.regs.a = 0xC6;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 0x18;
    func_91D();
    gb.regs.bc = gb_pop16();
  RevealMamuCave_jr_632D:;
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
    gb.regs.a = 0x68;
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
    gb.regs.a = 0x69;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x4B;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    gb.regs.a = 1;
    gb_write(0xFFAC, gb.regs.a);
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFAE, gb.regs.a);
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFAD, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD8B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
    return;
}

void Data_018_637D(void) {
    /* data: db $10, $20, $30, $40, $50, $60, $70, $80 */;
}

void Data_018_6385(void) {
    /* data: db $18, $28, $38, $48, $58, $68, $78, $88 */;
}

void ZombieEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_018_640C(); return; };
    ReturnIfNonInteractive_18();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_018_63F7(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6385;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  ZombieEntityHandler_jr_63AF:;
    gb.regs.hl = 0x637D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetObjectUnderEntity();
    gb.regs.a = gb_read(0xFFDA);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto ZombieEntityHandler_jr_63C9;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto ZombieEntityHandler_jr_63C9;
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) return;
  ZombieEntityHandler_jr_63C9:;
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
  ZombieEntityHandler_jr_63D1:;
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0xBF;
    gb.regs.e = 5;
    SpawnNewEntityInRange_trampoline();
    if (GET_FLAG_C()) { ret_018_63F7(); return; };
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
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
}

void ret_018_63F7(void) {
    return;
}

void ZombieSpriteVariants(void) {
  ZombieSpriteVariants_variant0:;
    /* data: db $FF, OAM_GBC_PAL_7 | OAMF_PAL1 | OAMF_BANK1 | OAMF_YFLIP | OAMF_XFLIP | OAMF_PRI */;
    /* data: db $FF, OAM_GBC_PAL_7 | OAMF_PAL1 | OAMF_BANK1 | OAMF_YFLIP | OAMF_XFLIP | OAMF_PRI */;
  ZombieSpriteVariants_variant1:;
    /* data: db $6C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $6C, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  ZombieSpriteVariants_variant2:;
    /* data: db $68, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  ZombieSpriteVariants_variant3:;
    /* data: db $60, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  ZombieSpriteVariants_variant4:;
    /* data: db $64, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_2 | OAMF_PAL0 */;
}

void label_018_640C(void) {
    gb.regs.de = 0x61A2;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_18();
    ApplyRecoilIfNeeded_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: ZombieState0Handler(); return;
        case 0x01: ZombieState1Handler(); return;
        case 0x02: ZombieState2Handler(); return;
        case 0x03: ZombieState3Handler(); return;
    }
}

void ZombieState0Handler(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState(); return;
}

void ZombieState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ZombieState1Handler_jr_6445;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x70);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_add8(gb.regs.a, 5);
    ApplyVectorTowardsLink_trampoline();
    IncrementEntityState();
  ZombieState1Handler_jr_6445:;
    gb.regs.e = 1;
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto ZombieState1Handler_jr_644C;
    gb.regs.e = alu_inc8(gb.regs.e);
  ZombieState1Handler_jr_644C:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void ZombieState2Handler(void) {
    UpdateEntityPosWithSpeed_18();
    ApplyEntityInteractionWithBackground_trampoline();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto ZombieState2Handler_jr_6467;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_018_6475(); return; };
  ZombieState2Handler_jr_6467:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
}

void jr_018_6475(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    SetEntitySpriteVariant(); return;
}

void ZombieState3Handler(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.e = 1;
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_C()) goto ZombieState3Handler_jr_648F;
    gb.regs.e = alu_inc8(gb.regs.e);
  ZombieState3Handler_jr_648F:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void GetObjectUnderEntity(void) {
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
    GetObjectPhysicsFlags_trampoline();
    gb_write(0xFFDA, gb.regs.a);
    return;
}

void Data_018_64CA(void) {
    /* data: db $EC, $14 */;
}

void BlainoEntityHandler(void) {
    func_018_68EA();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { AnimateBossAgony_18(); return; };
    ReturnIfNonInteractive_18();
    BossIntro();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BlainoEntityHandler_jr_64EA;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
  BlainoEntityHandler_jr_64EA:;
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) { jr_018_650A(); return; };
    gb.regs.a = gb_read(0xC13E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto BlainoEntityHandler_jr_64FC;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x33);
  BlainoEntityHandler_jr_64FC:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_650A(); return; };
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 0x6A;
    gb_write(0xFF9D, gb.regs.a);
    func_018_69C5();
}

void jr_018_650A(void) {
    ApplyRecoilIfNeeded_18();
    label_3B65();
    gb.regs.a = gb_read(0xC13E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_018_650A_jr_6519;
    DefaultEnemyDamageCollisionHandler_trampoline();
  jr_018_650A_jr_6519:;
    UpdateEntityPosWithSpeed_18();
    ApplyEntityInteractionWithBackground_trampoline();
    AddEntityZSpeedToPos_18();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_650A_jr_653E;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    ClearEntitySpeed();
  jr_018_650A_jr_653E:;
    func_018_65CF();
    GetEntityXDistanceToLink_18();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    GetEntityRealYDistanceToLink_18();
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto jr_018_650A_jr_655B;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x64C8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_018_650A_jr_655B:;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_650A_jr_6588;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityXDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x28);
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_C()) goto jr_018_650A_jr_6588;
    gb.regs.a = 8;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  jr_018_650A_jr_6588:;
    func_018_6596();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void func_018_6596(void) {
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) goto func_018_6596_jr_659F;
    gb.regs.a = 3;
    label_018_65B8(); return;
  func_018_6596_jr_659F:;
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_018_65CE(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) goto func_018_6596_jr_65B2;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 1;
    label_018_65B8(); return;
  func_018_6596_jr_65B2:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_inc8(gb.regs.a);
}

void label_018_65B8(void) {
    gb_write(0xD485, gb.regs.a);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto label_018_65B8_jr_65C3;
    gb.regs.a = 0x0A;
    gb_write(0xFFF4, gb.regs.a);
  label_018_65B8_jr_65C3:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
}

void ret_018_65CE(void) {
    return;
}

void func_018_65CF(void) {
    gb.regs.a = gb_read(0xD485);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.de = gb_pop16();
    gb.regs.a = alu_dec8(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: func_018_65EC(); return;
        case 0x01: func_018_6643(); return;
        case 0x02: func_018_66CD(); return;
        case 0x03: func_018_65EC(); return;
    }
}

void Data_018_65DF(void) {
    /* data: db $01, $01, $01, $02, $02, $03, $03, $03, $03, $03, $02, $02, $01 */;
}

void func_018_65EC(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_018_65EC_ret_660B;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) { label_018_660C(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x65DF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 1);
  func_018_65EC_ret_660B:;
    return;
}

void label_018_660C(void) {
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_018_672A(); return; };
    gb.regs.a = 1;
    label_018_65B8(); return;
}

void Data_018_6619(void) {
    /* data: db $04, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $06, $07, $08, $08, $08 */;
    /* data: db $08, $08, $07, $06, $01 */;
}

void Data_018_662E(void) {
    /* data: db $08, $10, $08, $08, $02, $00, $00, $00, $FC, $F8, $F0, $F8, $E0, $90, $A0, $00 */;
    /* data: db $00, $00, $00, $00, $00 */;
}

void func_018_6643(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_018_6678(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x15);
    if (GET_FLAG_Z()) { label_018_672A(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6619;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.hl = 0x662E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_018_6643_jr_666E;
    gb.regs.a = gb.regs.e;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.e = gb.regs.a;
  func_018_6643_jr_666E:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 3);
}

void ret_018_6678(void) {
    return;
}

void Data_018_6679(void) {
    /* data: db $09, $09, $0A, $0A, $0B, $0B, $0C, $0C, $09, $09, $0A, $0A, $0B, $0B, $0C, $0C */;
    /* data: db $09, $09, $0A, $0A, $0B, $0B, $0C, $0C, $09, $09, $09, $09, $09, $09, $09, $09 */;
    /* data: db $09, $09, $0D, $0E, $0F, $10, $11, $11, $11, $01 */;
}

void Data_018_66A3(void) {
    /* data: db $0C, $0C, $0C, $0C, $0C, $0C, $0C, $0C, $08, $08, $08, $08, $08, $08, $08, $08 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $F0, $E0, $D0, $C0, $C0, $E0, $F0, $00, $00, $00 */;
}

void func_018_66CD(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_018_6729(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x2A);
    if (GET_FLAG_Z()) { label_018_672A(); return; };
    gb.regs.e = gb.regs.a;
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_Z()) goto func_018_66CD_jr_66E8;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { jr_018_66E9(); return; };
  func_018_66CD_jr_66E8:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void jr_018_66E9(void) {
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6679;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.hl = 0x66A3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_018_66E9_jr_6703;
    gb.regs.a = gb.regs.e;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.e = gb.regs.a;
  jr_018_66E9_jr_6703:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) goto jr_018_66E9_jr_6724;
    GetEntityXDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_C()) goto jr_018_66E9_jr_6724;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto jr_018_66E9_jr_6724;
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
  jr_018_66E9_jr_6724:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 3);
}

void ret_018_6729(void) {
    return;
}

void label_018_672A(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD485, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void Data_018_673A(void) {
    /* data: db $00, $F8, $6C, $03, $00, $00, $6E, $03 */;
    /* data: db $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $FD, $F8, $6E, $23, $FD, $00, $6C, $23 */;
    /* data: db $FF, $F8, $6C, $03, $FF, $00, $6E, $03 */;
    /* data: db $00, $00, $64, $01, $00, $08, $66, $01 */;
    /* data: db $FD, $F8, $6E, $23, $FD, $00, $6C, $23 */;
    /* data: db $00, $F8, $6E, $23, $00, $00, $6C, $23 */;
    /* data: db $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $FD, $F8, $6C, $03, $FD, $00, $6E, $03 */;
    /* data: db $FD, $F0, $6C, $03, $FD, $F8, $6E, $03 */;
    /* data: db $00, $F8, $6E, $23, $00, $00, $6C, $23 */;
    /* data: db $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $00, $00, $6E, $23, $00, $08, $6C, $23 */;
    /* data: db $00, $00, $64, $01, $00, $08, $66, $01 */;
    /* data: db $FD, $F8, $6E, $23, $FD, $00, $6C, $23 */;
    /* data: db $FD, $08, $6E, $23, $FD, $10, $6C, $23 */;
    /* data: db $00, $00, $68, $01, $00, $08, $6A, $01 */;
    /* data: db $FD, $F8, $6E, $23, $FD, $00, $6C, $23 */;
    /* data: db $00, $F8, $6C, $03, $00, $00, $6E, $03 */;
    /* data: db $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $00, $F0, $6C, $03, $00, $F8, $6E, $03 */;
    /* data: db $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $00, $E8, $6C, $03, $00, $F0, $6E, $03 */;
    /* data: db $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $F8, $10, $6C, $03, $F8, $18, $6E, $03 */;
    /* data: db $00, $00, $68, $01, $00, $08, $6A, $01 */;
    /* data: db $FD, $F8, $6E, $23, $FD, $00, $6C, $23 */;
    /* data: db $F0, $08, $6C, $03, $F0, $10, $6E, $03 */;
    /* data: db $00, $00, $68, $01, $00, $08, $6A, $01 */;
    /* data: db $FD, $F8, $6E, $23, $FD, $00, $6C, $23 */;
    /* data: db $FC, $08, $6E, $23, $FC, $10, $6C, $23 */;
    /* data: db $00, $00, $68, $01, $00, $08, $6A, $01 */;
    /* data: db $FD, $F8, $6E, $23, $FD, $00, $6C, $23 */;
    /* data: db $00, $10, $6E, $23, $00, $18, $6C, $23 */;
    /* data: db $00, $00, $68, $01, $00, $08, $6A, $01 */;
    /* data: db $FD, $F8, $6E, $23, $FD, $00, $6C, $23 */;
    /* data: db $04, $08, $6E, $23, $04, $10, $6C, $23 */;
    /* data: db $00, $00, $68, $01, $00, $08, $6A, $01 */;
    /* data: db $FD, $F8, $6E, $23, $FD, $00, $6C, $23 */;
    /* data: db $08, $00, $6C, $03, $08, $08, $6E, $03 */;
    /* data: db $00, $00, $64, $01, $00, $08, $66, $01 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $08, $F8, $6C, $03, $08, $00, $6E, $03 */;
    /* data: db $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $05, $F0, $6C, $03, $05, $F8, $6E, $03 */;
    /* data: db $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $F4, $F0, $6E, $23, $F4, $F8, $6C, $23 */;
    /* data: db $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00 */;
}

void func_018_68EA(void) {
    gb.regs.a = 0x80;
    gb_write(0xD581, gb.regs.a);
    gb_write(0xD583, gb.regs.a);
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.d = gb.regs.b;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.d = gb.regs.a;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_018_68EA_jr_691B;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.hl = 0xFFED;
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
  func_018_68EA_jr_691B:;
    gb.regs.hl = 0x673A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 6;
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
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
}

void jr_018_693C(void) {
    gb.regs.a = gb_read(0xD583);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_018_693C_jr_6949;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xD583, gb.regs.a);
  jr_018_693C_jr_6949:;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl++;
    gb.regs.de++;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xC155);
    gb.regs.c = gb.regs.a;
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_693C_jr_6960;
    gb.regs.a = gb.regs.b;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.b = gb.regs.a;
  jr_018_693C_jr_6960:;
    gb.regs.a = gb_read(0xD581);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_018_6972(); return; };
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb.regs.b;
    if (!GET_FLAG_Z()) goto jr_018_693C_jr_696F;
    gb.regs.a = alu_add8(gb.regs.a, 8);
  jr_018_693C_jr_696F:;
    gb_write(0xD581, gb.regs.a);
}

void jr_018_6972(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.b);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl++;
    gb.regs.de++;
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto jr_018_6972_jr_6984;
    gb.regs.de--;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
  jr_018_6972_jr_6984:;
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_6972_jr_699A;
    gb.regs.a = gb_read(0xFFED);
    alu_bit(4, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_6972_jr_699A;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_or8(gb.regs.a, 4);
    gb_write(gb.regs.de, gb.regs.a);
  jr_018_6972_jr_699A:;
    gb.regs.hl++;
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) { jr_018_693C(); return; };
    gb.regs.a = 8;
    gb_write(0xD582, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xD584, gb.regs.a);
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    gb.regs.a = 6;
    func_015_7964_trampoline();
    label_3CD9(); return;
}

void Data_018_69B5(void) {
    /* data: db $00, $FE, $FD, $FE, $00, $02, $03, $02 */;
}

void Data_018_69BD(void) {
    /* data: db $00, $04, $08, $0C, $10, $0C, $08, $04 */;
}

void func_018_69C5(void) {
    gb.regs.hl = 0xC010;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    func_018_69D8();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.a = alu_and8(gb.regs.a, 7);
}

void func_018_69D8(void) {
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x69B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.hl = 0x69BD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.b);
    gb.regs.a = alu_add8(gb.regs.a, 0xF6);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_add8(gb.regs.a, 0xFC);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0x24);
    gb.regs.hl++;
    gb_write(gb.regs.hl, 0);
    gb.regs.hl++;
    gb.regs.bc = gb_pop16();
    return;
}

void VireEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_018_6F1F(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_018_6F70(); return; };
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_018_6A71(); return; };
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.a = 0x0C;
    gb_write(0xFFE8, gb.regs.a);
    func_018_6A31();
    gb.regs.a = 0xF4;
    gb_write(0xFFE8, gb.regs.a);
    func_018_6A31();
    DidKillEnemy_label_3F5E();
    ClearEntityStatusBank18(); return;
}

void func_018_6A31(void) {
    gb.regs.a = 0xBD;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto func_018_6A31_ret_6A70;
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC460;
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
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
  func_018_6A31_ret_6A70:;
    return;
}

void jr_018_6A71(void) {
    func_018_6EFB();
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.hl = 0xC3E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto jr_018_6A71_jr_6A8B;
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x98);
    if (!GET_FLAG_C()) { ClearEntityStatusBank18(); return; };
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_C()) { ClearEntityStatusBank18(); return; };
  jr_018_6A71_jr_6A8B:;
    ReturnIfNonInteractive_18();
    ApplyRecoilIfNeeded_18();
    UpdateEntityPosWithSpeed_18();
    AddEntityZSpeedToPos_18();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: VireState0Handler(); return;
        case 0x01: VireState1Handler(); return;
        case 0x02: VireState2Handler(); return;
        case 0x03: VireState3Handler(); return;
        case 0x04: VireState4Handler(); return;
        case 0x05: VireState5Handler(); return;
        case 0x06: VireState6Handler(); return;
        case 0x07: VireState7Handler(); return;
    }
}

void VireState0Handler(void) {
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x80);
    ClearEntitySpeed();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    IncrementEntityState(); return;
}

void Data_018_6AC7(void) {
    /* data: db $08 */;
}

void Data_018_6AC8(void) {
    /* data: db $F8, $08, $F8 */;
}

void VireState1Handler(void) {
    func_018_6E3B();
    GetEntityXDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x1C);
    alu_cp8(gb.regs.a, 0x38);
    if (!GET_FLAG_C()) goto VireState1Handler_jr_6B02;
    GetEntityVisualYDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto VireState1Handler_jr_6B02;
    gb.regs.a = 0x10;
    GetVectorTowardsLink_trampoline();
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
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
  VireState1Handler_jr_6B02:;
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto VireState1Handler_jr_6B15;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    return;
  VireState1Handler_jr_6B15:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x28);
    if (GET_FLAG_Z()) { jr_018_6B30(); return; };
    gb.regs.e = 8;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto VireState1Handler_jr_6B2B;
    gb.regs.e = 0xF8;
  VireState1Handler_jr_6B2B:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
}

void jr_018_6B30(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_018_6B30_jr_6B4B;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6AC8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
  jr_018_6B30_jr_6B4B:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_018_6B30_jr_6B68;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6AC6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
  jr_018_6B30_jr_6B68:;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto jr_018_6B30_jr_6B7B;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
  jr_018_6B30_jr_6B7B:;
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_018_6B8F(); return; };
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto jr_018_6B30_jr_6B8A;
    func_018_6D98();
  jr_018_6B30_jr_6B8A:;
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void jr_018_6B8F(void) {
    func_018_6E57();
}

void label_018_6B92(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void VireState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_018_6BD4(); return; };
    IncrementEntityState();
    gb_write(gb.regs.hl, 3);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_sub8(gb.regs.a, 0x14);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x20;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xEC);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto VireState2Handler_ret_6BD3;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
  VireState2Handler_ret_6BD3:;
    return;
}

void jr_018_6BD4(void) {
    func_018_6CD3();
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void VireState3Handler(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto VireState3Handler_jr_6C27;
    GetEntityXDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto VireState3Handler_jr_6C27;
    GetEntityVisualYDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto VireState3Handler_jr_6C27;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto VireState3Handler_jr_6C27;
    gb.regs.a = gb_read(0xC137);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto VireState3Handler_jr_6C27;
    gb.regs.a = 0x20;
    GetVectorTowardsLink_trampoline();
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
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x0B);
    IncrementEntityState();
    gb_write(gb.regs.hl, 6);
    return;
  VireState3Handler_jr_6C27:;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto VireState3Handler_jr_6C38;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_6C63(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_018_6C63(); return; };
  VireState3Handler_jr_6C38:;
    gb.regs.a = 0x20;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto VireState3Handler_jr_6C4E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  VireState3Handler_jr_6C4E:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFD8);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto VireState3Handler_jr_6C61;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  VireState3Handler_jr_6C61:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_018_6C63(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) goto jr_018_6C63_jr_6C78;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_018_6C63_jr_6C78;
    gb_write(gb.regs.hl, gb.regs.b);
    jr_018_6C88(); return;
  jr_018_6C63_jr_6C78:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_018_6C63_jr_6C83;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_018_6C63_jr_6C83:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { func_018_6CB8(); return; };
}

void jr_018_6C88(void) {
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_6C88_jr_6CA0;
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xA8);
    if (!GET_FLAG_C()) goto jr_018_6C88_jr_6CA0;
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x90);
    if (GET_FLAG_C()) { func_018_6CB8(); return; };
    alu_cp8(gb.regs.a, 0xC0);
    if (!GET_FLAG_C()) { func_018_6CB8(); return; };
  jr_018_6C88_jr_6CA0:;
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    func_018_6CD3();
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant(); return;
}

void func_018_6CB8(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_018_6CB8_jr_6CCD;
    ClearEntitySpeed();
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    return;
  func_018_6CB8_jr_6CCD:;
    func_018_6E57();
    label_018_6B92(); return;
}

void func_018_6CD3(void) {
    ClearEntitySpeed();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void Data_018_6CDC(void) {
    /* data: db $00, $00, $D0, $D0, $40, $40, $80, $80 */;
}

void Data_018_6CE4(void) {
    /* data: db $08, $98, $38, $78, $F8, $A8, $F8, $A8 */;
}

void VireState4Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto VireState4Handler_ret_6D17;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x28);
    IncrementEntityState();
    gb_write(gb.regs.hl, 5);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6CDC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6CE4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  VireState4Handler_ret_6D17:;
    return;
}

void VireState5Handler(void) {
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_C()) goto VireState5Handler_jr_6D52;
    alu_cp8(gb.regs.a, 0x97);
    if (!GET_FLAG_C()) goto VireState5Handler_jr_6D52;
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) goto VireState5Handler_jr_6D52;
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_C()) goto VireState5Handler_jr_6D52;
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
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
  VireState5Handler_jr_6D52:;
    label_018_6B92(); return;
}

void Data_018_6D55(void) {
    /* data: db $00, $09, $12, $15 */;
}

void Data_018_6D59(void) {
    /* data: db $18, $15, $12, $09, $00, $F7, $EE, $EB, $E8, $EB, $EE, $F7, $00, $09, $12, $15 */;
}

void VireState6Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_018_6D78(); return; };
    gb_write(gb.regs.hl, 0x20);
  VireState6Handler_jr_6D70:;
    IncrementEntityState();
    gb_write(gb.regs.hl, 7);
    func_018_6CD3(); return;
}

void jr_018_6D78(void) {
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto jr_018_6D78_jr_6D7F;
    func_018_6CB8();
  jr_018_6D78_jr_6D7F:;
    label_018_6B92(); return;
}

void VireState7Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto VireState7Handler_jr_6D93;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityState();
    gb_write(gb.regs.hl, 3);
    return;
  VireState7Handler_jr_6D93:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { label_018_6E36(); return; };
}

void func_018_6D98(void) {
    gb.regs.a = 0x0D;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x1F;
    GetVectorTowardsLink_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    func_018_7B9D();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.e = 0;
    func_018_6DB9();
    gb.regs.e = 1;
}

void func_018_6DB9(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
}

void jr_018_6DC3(void) {
    loop_start: ;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_6DC3_jr_6DDE;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xBD);
    if (!GET_FLAG_Z()) goto jr_018_6DC3_jr_6DDE;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_018_6DC3_jr_6DDE;
    gb.regs.b = alu_inc8(gb.regs.b);
  jr_018_6DC3_jr_6DDE:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb.regs.a = gb.regs.b;
    gb.regs.b = 0;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto jr_018_6DC3_ret_6E35;
    gb.regs.a = 0xBD;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto jr_018_6DC3_ret_6E35;
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
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x4C);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x6D59;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6D55;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.bc = gb_pop16();
  jr_018_6DC3_ret_6E35:;
    return;
}

void label_018_6E36(void) {
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void func_018_6E3B(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x28);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 0x28);
    gb_write(0xFFEF, gb.regs.a);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0x28);
    gb_write(gb.regs.hl, gb.regs.a);
    CopyEntityPositionToActivePosition(); return;
}

void func_018_6E57(void) {
    gb.regs.e = 0x0F;
}

void jr_018_6E59(void) {
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { jr_018_6ED0(); return; };
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_018_6E59_jr_6E74;
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto jr_018_6E59_jr_6E74;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { jr_018_6ED0(); return; };
  jr_018_6E59_jr_6E74:;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) { jr_018_6ED0(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) { jr_018_6ED0(); return; };
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF98, gb.regs.a);
    gb_push16(gb.regs.de);
    gb.regs.a = 0x20;
    GetVectorTowardsLink_trampoline();
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFD8);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_018_6E59_jr_6EAD;
    gb.regs.a = 0x20;
  jr_018_6E59_jr_6EAD:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_018_6E59_jr_6EBA;
    gb.regs.a = 0x20;
  jr_018_6E59_jr_6EBA:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
}

void jr_018_6ED0(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_018_6E59(); return; };
    return;
}

void Data_018_6ED7(void) {
    /* data: db $00, $FC, $60, $02, $00, $04, $62, $02, $00, $0C, $60, $22, $00, $FC, $64, $02 */;
    /* data: db $00, $04, $66, $02, $00, $0C, $64, $22, $00, $FC, $68, $02, $00, $04, $6A, $02 */;
    /* data: db $00, $0C, $68, $22 */;
}

void func_018_6EFB(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) return;
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6ED7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    label_3CD9(); return;
}

void Vire1SpriteVariants(void) {
  Vire1SpriteVariants_variant0:;
    /* data: db $1E, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $1E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  Vire1SpriteVariants_variant1:;
    /* data: db $1E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $1E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void label_018_6F1F(void) {
    gb.regs.de = 0x6CDC;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_18();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    label_3B70();
    label_3B44();
    if (GET_FLAG_C()) goto label_018_6F1F_jr_6F51;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_018_6F54(); return; };
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
  label_018_6F1F_jr_6F51:;
    ClearEntityStatusBank18(); return;
}

void jr_018_6F54(void) {
    UpdateEntityPosWithSpeed_18();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    return;
}

void Vire2SpriteVariants(void) {
  Vire2SpriteVariants_variant0:;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  Vire2SpriteVariants_variant1:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void label_018_6F70(void) {
    gb.regs.de = 0x6D2C;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_18();
    ApplyRecoilIfNeeded_18();
    UpdateEntityPosWithSpeed_18();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_018_6F95(); return; };
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_018_6F95(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto label_018_6F70_jr_6F94;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  label_018_6F70_jr_6F94:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_018_6F95(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_018_6FA8(); return;
        case 0x01: func_018_6FB4(); return;
        case 0x02: func_018_6FC2(); return;
    }
}

void func_018_6FA8(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x20);
    ClearEntitySpeed();
    IncrementEntityState(); return;
}

void func_018_6FB4(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 0x20;
    ApplyVectorTowardsLink_trampoline();
    IncrementEntityState(); return;
}

void func_018_6FC2(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    return;
}

void GrimCreeperEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
  GrimCreeperEntityHandler_jr_6FDB:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_018_71A3(); return; };
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    func_018_7181();
    label_394D();
    BossIntro();
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xC18F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_018_7028(); return; };
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GrimCreeperEntityHandler_jr_7008;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog025 */;
    SetRoomStatus20(); return;
  GrimCreeperEntityHandler_jr_7008:;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto GrimCreeperEntityHandler_jr_7011;
    gb.regs.a = 0x3F;
    gb_write(0xFFF4, gb.regs.a);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  GrimCreeperEntityHandler_jr_7011:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    AddEntityZSpeedToPos_18();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x78);
    if (GET_FLAG_C()) return;
    label_27DD();
    ClearEntityStatusBank18(); return;
}

void jr_018_7028(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: GrimCreeperState0Handler(); return;
        case 0x01: GrimCreeperState1Handler(); return;
        case 0x02: GrimCreeperState2Handler(); return;
        case 0x03: GrimCreeperState3Handler(); return;
        case 0x04: GrimCreeperState4Handler(); return;
        case 0x05: GrimCreeperState5Handler(); return;
        case 0x06: GrimCreeperState6Handler(); return;
    }
}

void GrimCreeperState0Handler(void) {
    gb.regs.a = 7;
    gb_write(0xD485, gb.regs.a);
    IncrementEntityState(); return;
}

void GrimCreeperState1Handler(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD481, gb.regs.a);
    gb_write(0xD482, gb.regs.a);
    gb.regs.a = gb_read(0xD485);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb_write(0xD485, gb.regs.a);
    IncrementEntityState(); return;
}

void GrimCreeperState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_018_7088(); return; };
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(1, gb_read(gb.regs.hl)));
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
}

void jr_018_7069(void) {
    loop_start: ;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xBC);
    if (!GET_FLAG_Z()) goto jr_018_7069_jr_707F;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_7069_jr_707F;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.b);
  jr_018_7069_jr_707F:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { goto loop_start; };
    IncrementEntityState(); return;
}

void ret_018_7088(void) {
    return;
}

void Data_018_7089(void) {
    /* data: db $78, $68, $58, $48, $38, $28 */;
}

void Data_018_708F(void) {
    /* data: db $00, $00, $00, $00, $00, $00 */;
}

void GrimCreeperState3Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto GrimCreeperState3Handler_jr_70A4;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(1, gb_read(gb.regs.hl)));
    IncrementEntityState();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  GrimCreeperState3Handler_jr_70A4:;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) { label_018_70FD(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { label_018_70FD(); return; };
    gb.regs.a = 0xBC;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { label_018_70FD(); return; };
    gb.regs.a = 0x31;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0x7089;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x708F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x1C);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.c);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x7B);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    gb.regs.bc = gb_pop16();
}

void label_018_70FD(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void GrimCreeperState4Handler(void) {
    gb.regs.a = gb_read(0xD481);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto GrimCreeperState4Handler_jr_7121;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD481, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
  GrimCreeperState4Handler_jr_7121:;
    label_018_70FD(); return;
}

void GrimCreeperState5Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0xFF;
    gb_write(0xD481, gb.regs.a);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState(); return;
}

void GrimCreeperState6Handler(void) {
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_7157(); return; };
    gb.regs.a = gb_read(0xC18F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GrimCreeperState6Handler_jr_7152;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GrimCreeperState6Handler_jr_7152;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog1DF */;
  GrimCreeperState6Handler_jr_7152:;
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
}

void jr_018_7157(void) {
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
    return;
}

void Data_018_715D(void) {
    /* data: db $00, $F8, $60, $02, $00, $00, $62, $02, $00, $08, $64, $02, $00, $F8, $66, $02 */;
    /* data: db $00, $00, $62, $02, $00, $08, $64, $02, $10, $00, $68, $02, $00, $00, $62, $02 */;
    /* data: db $00, $08, $64, $02 */;
}

void func_018_7181(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x715D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 1;
    func_015_7964_trampoline(); return;
}

void GrimCreeperSpriteVariants(void) {
  GrimCreeperSpriteVariants_variant0:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  GrimCreeperSpriteVariants_variant1:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
}

void label_018_71A3(void) {
    gb.regs.de = 0x6F52;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_18();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_018_721C(); return;
        case 0x01: func_018_7288(); return;
        case 0x02: func_018_72A5(); return;
        case 0x03: func_018_72C8(); return;
        case 0x04: func_018_72F4(); return;
    }
}

void Data_018_71BC(void) {
    /* data: db $28, $38, $48, $58, $68, $78, $38, $68, $48, $58, $48, $58, $18, $88, $28, $78 */;
    /* data: db $60, $40, $28, $78, $78, $28, $60, $40, $28, $78, $28, $78, $50, $50, $38, $68 */;
    /* data: db $50, $50, $38, $68, $38, $68, $38, $68, $38, $68, $28, $78, $38, $48, $68, $58 */;
}

void Data_018_71EC(void) {
    /* data: db $20, $30, $40, $40, $30, $20, $60, $60, $50, $70, $70, $50, $38, $38, $58, $58 */;
    /* data: db $70, $70, $30, $30, $70, $70, $50, $50, $30, $70, $70, $30, $30, $70, $40, $60 */;
    /* data: db $70, $30, $60, $40, $30, $30, $50, $50, $70, $70, $40, $40, $50, $40, $50, $40 */;
}

void func_018_721C(void) {
    gb.regs.a = gb_read(0xFF98);
  func_018_721C_jr_721E:;
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xD485);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFE);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
  func_018_721C_jr_722C:;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.hl = 0xC3D0;
  func_018_721C_jr_7230:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
  func_018_721C_jr_7232:;
    gb.regs.e = gb.regs.a;
  func_018_721C_jr_7233:;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x71BC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
  func_018_721C_jr_7239:;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0x71EC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF99, gb.regs.a);
  func_018_721C_jr_7242:;
    gb.regs.a = gb_read(0xFFE7);
  func_018_721C_jr_7244:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_018_721C_jr_724E;
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
  func_018_721C_jr_724E:;
    gb.regs.hl = 0xFFEE;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { jr_018_726D(); return; };
    gb.regs.hl = 0xFFEC;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
  func_018_721C_jr_7260:;
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { jr_018_726D(); return; };
    gb.regs.hl = 0xD481;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    IncrementEntityState();
}

void jr_018_726D(void) {
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
}

void func_018_7273(void) {
    UpdateEntityPosWithSpeed_18();
}

void label_018_7276(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void Data_018_7280(void) {
    /* data: db $04, $0C, $14, $1C, $24, $2C, $34, $3C */;
}

void func_018_7288(void) {
    gb.regs.a = gb_read(0xD481);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto func_018_7288_jr_72A2;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
  func_018_7288_jr_72A2:;
    label_018_7276(); return;
}

void func_018_72A5(void) {
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_018_72A5_jr_72C5;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
    gb.regs.a = 0x20;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF4);
    gb.regs.a = 0x31;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState();
  func_018_72A5_jr_72C5:;
    label_018_7276(); return;
}

void func_018_72C8(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    func_018_7273();
    AddEntityZSpeedToPos_18();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_018_72C8_jr_72E1;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto func_018_72C8_jr_72E1;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_018_72C8_jr_72E1:;
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) goto func_018_72C8_jr_72EC;
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_C()) return;
  func_018_72C8_jr_72EC:;
    IncrementEntityState();
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant(); return;
}

void func_018_72F4(void) {
    return;
}

void Data_018_72F5(void) {
    /* data: db $7A, $16, $7E, $36, $7A, $36, $7E, $16, $7C, $16, $7C, $36 */;
}

void TurtleRockHeadEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TurtleRockHeadEntityHandler_jr_7330;
    gb.regs.de = 0x72F5;
    RenderActiveEntitySprite();
    ReturnIfNonInteractive_18();
    UpdateEntityPosWithSpeed_18();
    AddEntityZSpeedToPos_18();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    return;
  TurtleRockHeadEntityHandler_jr_7330:;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TurtleRockHeadEntityHandler_jr_733C;
    gb.regs.a = 7;
    gb_write(0xFFF1, gb.regs.a);
  TurtleRockHeadEntityHandler_jr_733C:;
    func_018_766A();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto TurtleRockHeadEntityHandler_jr_7363;
    gb.regs.a = gb_read(0xDBF6);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto TurtleRockHeadEntityHandler_jr_7363;
    gb.regs.a = gb_read(0xC166);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TurtleRockHeadEntityHandler_jr_7363;
    IncrementEntityState();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_set(2, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    return;
  TurtleRockHeadEntityHandler_jr_7363:;
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_018_737E(); return; };
    AnimateBossAgony_18();
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto TurtleRockHeadEntityHandler_ret_737D;
    gb.regs.hl = 0xD8C5;
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
    gb.regs.a = 2;
    gb_write(0xFFF2, gb.regs.a);
  TurtleRockHeadEntityHandler_ret_737D:;
    return;
}

void jr_018_737E(void) {
    ReturnIfNonInteractive_18();
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) goto jr_018_737E_jr_7392;
    PushLinkOutOfEntity_18();
    jr_018_7395(); return;
  jr_018_737E_jr_7392:;
    label_3B44();
}

void jr_018_7395(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: TurtleRockHeadState0Handler(); return;
        case 0x01: TurtleRockHeadState1Handler(); return;
        case 0x02: TurtleRockHeadState2Handler(); return;
        case 0x03: TurtleRockHeadState3Handler(); return;
        case 0x04: TurtleRockHeadState4Handler(); return;
        case 0x05: TurtleRockHeadState5Handler(); return;
        case 0x06: TurtleRockHeadState6Handler(); return;
        case 0x07: TurtleRockHeadState7Handler(); return;
        case 0x08: TurtleRockHeadState8Handler(); return;
        case 0x09: TurtleRockHeadState9Handler(); return;
        case 0x0A: TurtleRockHeadStateAHandler(); return;
        case 0x0B: TurtleRockHeadStateBHandler(); return;
    }
}

void TurtleRockHeadState0Handler(void) {
    return;
}

void TurtleRockHeadState1Handler(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.a = 0x39;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFB0, gb.regs.a);
    gb_write(0xFFBD, gb.regs.a);
    gb_write(0xFFBF, gb.regs.a);
    IncrementEntityState(); return;
}

void TurtleRockHeadState2Handler(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, 0x14);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto TurtleRockHeadState2Handler_jr_73DE;
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityState(); return;
  TurtleRockHeadState2Handler_jr_73DE:;
    gb.regs.e = 8;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto TurtleRockHeadState2Handler_jr_73E6;
    gb.regs.e = 0xF8;
  TurtleRockHeadState2Handler_jr_73E6:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    AddEntitySpeedToPos_18(); return;
}

void Data_018_73EE(void) {
    /* data: db $F8, $08, $10, $00, $00, $08 */;
}

void Data_018_73F4(void) {
    /* data: db $F0, $00, $F0, $00, $F0, $F0 */;
}

void Data_018_73FA(void) {
    /* data: db $F8, $08, $08, $F8, $F8, $08 */;
}

void Data_018_7400(void) {
    /* data: db $FC, $02, $FC, $02, $FC, $FC */;
}

void Data_018_7406(void) {
    /* data: db $10, $10, $10, $10, $10, $10 */;
}

void TurtleRockHeadState3Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto TurtleRockHeadState3Handler_jr_7416;
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState(); return;
  TurtleRockHeadState3Handler_jr_7416:;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) { ret_018_7479(); return; };
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto TurtleRockHeadState3Handler_jr_746E;
    gb.regs.a = 0x13;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = 0x7F;
    SpawnNewEntity_trampoline();
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x73EE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x73F4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x73FA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x7400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x7406;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
  TurtleRockHeadState3Handler_jr_746E:;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { ret_018_7479(); return; };
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
}

void ret_018_7479(void) {
    return;
}

void TurtleRockHeadState4Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto TurtleRockHeadState4Handler_jr_7484;
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState(); return;
  TurtleRockHeadState4Handler_jr_7484:;
    gb.regs.e = 7;
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) goto TurtleRockHeadState4Handler_jr_7496;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) { jr_018_7497(); return; };
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) goto TurtleRockHeadState4Handler_jr_7496;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { jr_018_7497(); return; };
  TurtleRockHeadState4Handler_jr_7496:;
    gb.regs.e = alu_inc8(gb.regs.e);
}

void jr_018_7497(void) {
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void TurtleRockHeadState5Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto TurtleRockHeadState5Handler_jr_74BC;
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
    IncrementEntityState();
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xD481, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xD482, gb.regs.a);
    return;
  TurtleRockHeadState5Handler_jr_74BC:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    UpdateEntityYPosWithSpeed_18(); return;
}

void TurtleRockHeadState6Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    IncrementEntityState(); return;
}

void TurtleRockHeadState7Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto TurtleRockHeadState7Handler_jr_74E7;
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
  TurtleRockHeadState7Handler_jr_74E7:;
    AddEntitySpeedToPos_18(); return;
}

void TurtleRockHeadState8Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_018_751E(); return; };
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) goto TurtleRockHeadState8Handler_jr_750C;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto TurtleRockHeadState8Handler_jr_750C;
    IncrementEntityState();
    gb.regs.a = 9;
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    return;
  TurtleRockHeadState8Handler_jr_750C:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
}

void ret_018_751E(void) {
    return;
}

void TurtleRockHeadState9Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto TurtleRockHeadState9Handler_jr_7536;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  TurtleRockHeadState9Handler_jr_7536:;
    IncrementEntityState(); return;
}

void TurtleRockHeadStateAHandler(void) {
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto TurtleRockHeadStateAHandler_jr_7546;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_018_7549(); return; };
  TurtleRockHeadStateAHandler_jr_7546:;
    IncrementEntityState();
}

void jr_018_7549(void) {
    UpdateEntityPosWithSpeed_18(); return;
}

void TurtleRockHeadStateBHandler(void) {
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xD481);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xD482);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xD481);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto TurtleRockHeadStateBHandler_jr_7585;
    gb.regs.a = gb_read(0xD482);
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto TurtleRockHeadStateBHandler_jr_7585;
    IncrementEntityState();
    gb_write(gb.regs.hl, 6);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
  TurtleRockHeadStateBHandler_jr_7585:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_18(); return;
}

void Data_018_758E(void) {
    /* data: db $F0, $F8, $7A, $16, $F0, $00, $7C, $16, $F0, $08, $7C, $36, $F0, $10, $7A, $36 */;
    /* data: db $00, $00, $7E, $16, $00, $08, $7E, $36, $F0, $F8, $70, $07, $F0, $00, $7C, $16 */;
    /* data: db $F0, $08, $7C, $36, $F0, $10, $7A, $36, $00, $00, $7E, $16, $00, $08, $7E, $36 */;
    /* data: db $F0, $F8, $70, $07, $F0, $00, $7C, $16, $F0, $08, $7C, $36, $F0, $10, $7A, $36 */;
    /* data: db $00, $00, $7E, $16, $00, $08, $74, $27, $F0, $F8, $70, $07, $F0, $00, $7C, $16 */;
    /* data: db $F0, $08, $7C, $36, $F0, $10, $70, $27, $00, $00, $7E, $16, $00, $08, $74, $27 */;
    /* data: db $F0, $F8, $70, $07, $F0, $00, $7C, $16, $F0, $08, $7C, $36, $F0, $10, $70, $27 */;
    /* data: db $00, $00, $74, $07, $00, $08, $74, $27, $F0, $F8, $70, $07, $F0, $00, $78, $07 */;
    /* data: db $F0, $08, $7C, $36, $F0, $10, $70, $27, $00, $00, $74, $07, $00, $08, $74, $27 */;
    /* data: db $F0, $F8, $70, $07, $F0, $00, $78, $07, $F0, $08, $78, $27, $F0, $10, $70, $27 */;
    /* data: db $00, $00, $74, $07, $00, $08, $74, $27, $F0, $F8, $70, $07, $F0, $00, $78, $07 */;
    /* data: db $F0, $08, $78, $27, $F0, $10, $70, $27, $00, $00, $74, $07, $00, $08, $74, $27 */;
    /* data: db $F0, $F8, $70, $07, $F0, $00, $72, $07, $F0, $08, $72, $27, $F0, $10, $70, $27 */;
    /* data: db $00, $00, $74, $07, $00, $08, $74, $27 */;
}

void TurtleRockHeadSpriteVariants(void) {
  TurtleRockHeadSpriteVariants_variant0:;
    /* data: db $76, OAM_GBC_PAL_7 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
}

void func_018_766A(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x758E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 6;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 6;
    func_015_7964_trampoline();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_018_766A_jr_7691;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) { label_018_7726(); return; };
  func_018_766A_jr_7691:;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFFE1, gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFFE2, gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFFE3, gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFFE4, gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFFE6, gb.regs.a);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) { label_018_7726(); return; };
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.hl = 0xFFE1;
}

void jr_018_76C9(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl++;
    gb_push16(gb.regs.hl);
    gb.regs.de = 0x73F3;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_7717(); return; };
    gb.regs.hl = 0xFFEC;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { jr_018_7717(); return; };
    gb.regs.hl = 0xFFEE;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { jr_018_7717(); return; };
    gb.regs.a = gb.regs.e;
    gb.regs.e = 0x20;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_018_76C9_jr_76FE;
    gb.regs.e = 0xE0;
  jr_018_76C9_jr_76FE:;
    gb.regs.a = gb.regs.e;
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xDC6F, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFF3, gb.regs.a);
}

void jr_018_7717(void) {
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_018_76C9(); return; };
}

void label_018_7726(void) {
    CopyEntityPositionToActivePosition(); return;
}

void BuzzBlobSpriteVariants(void) {
  BuzzBlobSpriteVariants_variant0:;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  BuzzBlobSpriteVariants_variant1:;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BuzzBlobSpriteVariants_variant2:;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BuzzBlobSpriteVariants_variant3:;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  BuzzBlobSpriteVariants_variant4:;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BuzzBlobSpriteVariants_variant5:;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BuzzBlobSpriteVariants_variant6:;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  BuzzBlobSpriteVariants_variant7:;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BuzzBlobSpriteVariants_variant8:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Data_018_774D(void) {
    /* data: db $00, $01, $02, $01 */;
}

void Data_018_7751(void) {
    /* data: db $03, $04, $05, $04 */;
}

void Data_018_7755(void) {
    /* data: db $06, $07, $08, $07 */;
}

void BuzzBlobEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto BuzzBlobEntityHandler_jr_7764;
    gb.regs.a = 0x18;
    func_036_4F68_trampoline(); return;
  BuzzBlobEntityHandler_jr_7764:;
    gb.regs.de = 0x749F;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_18();
    ApplyRecoilIfNeeded_18();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: BuzzBlobState0Handler(); return;
        case 0x01: BuzzBlobState1Handler(); return;
    }
}

void Data_018_777A(void) {
    /* data: db $FA, $FC */;
}

void Data_018_777C(void) {
    /* data: db $00, $04, $06, $04, $00, $FC, $FA, $FC */;
}

void BuzzBlobState0Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BuzzBlobState0Handler_jr_77A9;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x777C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x777A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  BuzzBlobState0Handler_jr_77A9:;
    UpdateEntityPosWithSpeed_18();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x774D;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
  BuzzBlobState0Handler_jr_77B8:;
    if (GET_FLAG_Z()) { label_018_77CF(); return; };
    func_018_7D95();
    if (!GET_FLAG_C()) goto BuzzBlobState0Handler_jr_77CC;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_add8(gb.regs.a, 0x7C);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    OpenDialogInTable2();
  BuzzBlobState0Handler_jr_77CC:;
    gb.regs.hl = 0x7755;
}

void label_018_77CF(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void BuzzBlobState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BuzzBlobState1Handler_jr_77E7;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  BuzzBlobState1Handler_jr_77E7:;
    gb.regs.hl = 0x7751;
    label_018_77CF(); return;
}

void Data_018_77ED(void) {
    /* data: db $00, $FC, $70, $02, $00, $04, $72, $02, $00, $0C, $70, $22, $00, $FC, $74, $02 */;
    /* data: db $00, $04, $72, $02, $00, $0C, $74, $22, $00, $FC, $76, $02, $00, $04, $72, $02 */;
    /* data: db $00, $0C, $76, $22, $00, $FC, $74, $02, $00, $04, $72, $02, $00, $0C, $74, $22 */;
}

void Data_018_781D(void) {
    /* data: db $10, $11, $12, $11 */;
}

void BomberEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x77ED;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    ReturnIfNonInteractive_18();
    label_3CD9();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x781D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    ApplyRecoilIfNeeded_18();
    UpdateEntityPosWithSpeed_18();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: BomberState0Handler(); return;
        case 0x01: BomberState1Handler(); return;
        case 0x02: BomberState2Handler(); return;
    }
}

void Data_018_7865(void) {
    /* data: db $F8, $FA */;
}

void Data_018_7867(void) {
    /* data: db $00, $06, $08, $06, $00, $FA, $F8, $FA */;
}

void BomberState0Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { label_018_78A6(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7867;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x7865;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto BomberState0Handler_jr_78A3;
    gb.regs.a = 0x0A;
    ApplyVectorTowardsLink_trampoline();
  BomberState0Handler_jr_78A3:;
    IncrementEntityState();
}

void label_018_78A6(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    if (!GET_FLAG_Z()) goto label_018_78A6_jr_78F1;
    gb.regs.a = 2;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto label_018_78A6_jr_78F1;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_res(0, gb_read(gb.regs.hl)));
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
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
  label_018_78A6_jr_78F1:;
    GetEntityDirectionToLink_18();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) goto label_018_78A6_jr_7935;
    GetEntityXDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto label_018_78A6_jr_7935;
    GetEntityVisualYDistanceToLink_18();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto label_018_78A6_jr_7935;
    gb.regs.a = gb_read(0xC137);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_018_78A6_jr_7935;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x12);
    gb.regs.a = 0x20;
    GetVectorTowardsLink_trampoline();
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
    return;
  label_018_78A6_jr_7935:;
    DefaultEnemyDamageCollisionHandler_trampoline();
}

void label_018_7938(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    SetEntitySpriteVariant(); return;
}

void BomberState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BomberState1Handler_jr_794F;
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    ClearEntitySpeed();
  BomberState1Handler_jr_794F:;
    label_018_78A6(); return;
}

void BomberState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BomberState2Handler_jr_795B;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  BomberState2Handler_jr_795B:;
    label_018_7938(); return;
}

void Data_018_795E(void) {
    /* data: db $6C, $74, $6D, $75 */;
}

void Data_018_7962(void) {
    /* data: db $64, $74, $65, $75 */;
}

void MagicPowderSprinkleEntityHandler(void) {
    func_018_7B02();
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_018_7A5D(); return; };
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { label_018_7A48(); return; };
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { label_018_7A4B(); return; };
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 7);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 7);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.a = gb.regs.h;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb.regs.c;
    gb.regs.d = gb.regs.b;
    gb.regs.h = gb.regs.a;
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFAF, gb.regs.a);
    alu_cp8(gb.regs.a, 0xD3);
    if (GET_FLAG_Z()) goto MagicPowderSprinkleEntityHandler_jr_79B3;
    alu_cp8(gb.regs.a, 0x5C);
    if (!GET_FLAG_Z()) { jr_018_79CF(); return; };
  MagicPowderSprinkleEntityHandler_jr_79B3:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_018_79CF(); return; };
    RevealObjectUnderObject_trampoline();
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.a = 0x2F;
    gb_write(0xFFF2, gb.regs.a);
    label_018_7A48(); return;
}

void jr_018_79CF(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_018_7A4B(); return; };
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0xAB);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_79CF_jr_79F0;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDE7E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
  jr_018_79CF_jr_79F0:;
    gb.regs.a = 0xAC;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xDE80, gb.regs.a);
    gb.regs.d = gb.regs.h;
    gb.regs.e = gb.regs.l;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.d);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFCE);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFCD);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC1A2;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xC3CD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_79CF_jr_7A39;
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(0xC3CD, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_018_79CF_jr_7A39;
    gb.regs.a = 0x40;
    gb_write(0xDE7E, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xDE7F, gb.regs.a);
  jr_018_79CF_jr_7A39:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x12;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.de = 0x795E;
    gb_push16(gb.regs.de);
    label_018_7B1D(); return;
}

void label_018_7A48(void) {
    ClearEntityStatusBank18(); return;
}

void label_018_7A4B(void) {
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) return;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 9;
    gb_write(0xC19E, gb.regs.a);
    label_3B7B(); return;
}

void label_018_7A5D(void) {
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_018_7AB9(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.d = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = 0xAB;
    gb_write(gb.regs.de, gb.regs.a);
    gb_write(0xDE80, gb.regs.a);
    ClearEntityStatusBank18();
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x74);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC1A2;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xC3CD);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) goto label_018_7A5D_jr_7AB2;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xC3CD, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_018_7A5D_jr_7AB2;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x80;
    gb_write(0xDE7E, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xDE7F, gb.regs.a);
  label_018_7A5D_jr_7AB2:;
    gb.regs.de = 0x7962;
    gb_push16(gb.regs.de);
    label_018_7B1D(); return;
}

void ret_018_7AB9(void) {
    return;
}

void Data_018_7ABA(void) {
    /* data: db $06, $FE, $24, $03, $03, $04, $24, $13, $05, $0A, $24, $03, $05, $FE, $24, $13 */;
    /* data: db $02, $04, $24, $03, $04, $0A, $24, $13, $03, $FF, $24, $03, $01, $04, $24, $13 */;
    /* data: db $02, $09, $24, $03, $01, $00, $24, $13, $FF, $04, $24, $03, $00, $06, $24, $13 */;
    /* data: db $00, $01, $24, $03, $FE, $03, $24, $13, $FF, $05, $24, $03, $FF, $01, $24, $13 */;
    /* data: db $FD, $03, $24, $03, $FE, $05, $24, $13 */;
}

void func_018_7B02(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) return;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7ABA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect(); return;
}

void label_018_7B1D(void) {
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_018_7B1D_jr_7B2C;
    gb_push16(gb.regs.bc);
    gb.regs.a = 0x18;
    func_91D();
    gb.regs.bc = gb_pop16();
  label_018_7B1D_jr_7B2C:;
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
    return;
}

void Data_018_7B5D(void) {
    /* data: db $00, $00, $01, $01, $01, $02, $02, $02, $00, $00, $0F, $0F, $0F, $0E, $0E, $0E */;
    /* data: db $08, $08, $07, $07, $07, $06, $06, $06, $08, $08, $09, $09, $09, $0A, $0A, $0A */;
}

void Data_018_7B7D(void) {
    /* data: db $04, $04, $03, $03, $03, $02, $02, $02, $0C, $0C, $0D, $0D, $0D, $0E, $0E, $0E */;
    /* data: db $04, $04, $05, $05, $05, $06, $06, $06, $0C, $0C, $0B, $0B, $0B, $0A, $0A, $0A */;
}

void func_018_7B9D(void) {
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
    if (GET_FLAG_Z()) goto func_018_7B9D_jr_7BB8;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_018_7B9D_jr_7BB8:;
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFD7);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_018_7B9D_jr_7BC1;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_018_7B9D_jr_7BC1:;
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto func_018_7B9D_jr_7BD1;
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.h);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7B5D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    return;
  func_018_7B9D_jr_7BD1:;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.h);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7B7D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    return;
}

void LinkDirectionToLinkAnimationState_3(void) {
    /* data: db LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_RIGHT */;
    /* data: db LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_LEFT */;
    /* data: db LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_UP */;
    /* data: db LINK_ANIMATION_STATE_HOOKSHOT_CHAIN_DOWN */;
}

void HookshotChainEntityHandler(void) {
    gb.regs.a = gb_read(0xC166);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank18(); return; };
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC1A4, gb.regs.a);
    gb_write(0xC1C6, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC1A6, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    ResetSpinAttack();
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x795A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9D, gb.regs.a);
    RenderHookshotChain();
    ReturnIfNonInteractive_18();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto HookshotChainEntityHandler_jr_7C1C;
    gb.regs.a = 0x0B;
    gb_write(0xFFF4, gb.regs.a);
  HookshotChainEntityHandler_jr_7C1C:;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HookshotChainEntityHandler_notPullingLink;
  HookshotChainEntityHandler_pullingLink:;
    gb.regs.a = 0x30;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    gb_push16(gb.regs.bc);
    UpdateFinalLinkPosition();
    gb.regs.bc = gb_pop16();
    goto HookshotChainEntityHandler_unloadIfTouchingLink;
  HookshotChainEntityHandler_notPullingLink:;
    UpdateEntityPosWithSpeed_18();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto HookshotChainEntityHandler_interactWithWorld;
    gb.regs.a = 0x30;
    ApplyVectorTowardsLink_trampoline();
  HookshotChainEntityHandler_unloadIfTouchingLink:;
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto HookshotChainEntityHandler_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC1C6, gb.regs.a);
    ClearEntityStatusBank18();
    goto HookshotChainEntityHandler_return;
  HookshotChainEntityHandler_interactWithWorld:;
    gb.regs.a = 6;
    gb_write(0xC19E, gb.regs.a);
    label_3B7B();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { HookshotChainPokeWall(); return; };
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HookshotChainEntityHandler_return;
    GetObjectUnderEntity();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HookshotChainEntityHandler_return;
    gb.regs.e = 0x9E;
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto HookshotChainEntityHandler_compareObject;
    gb.regs.e = 0x9F;
  HookshotChainEntityHandler_compareObject:;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) goto HookshotChainEntityHandler_return;
    gb.regs.a = 0x68;
    SpawnNewEntity_trampoline();
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
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x9E);
    gb.regs.a = 0;
    if (GET_FLAG_Z()) goto HookshotChainEntityHandler_setDirection;
    gb.regs.a = alu_inc8(gb.regs.a);
  HookshotChainEntityHandler_setDirection:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, gb.regs.b);
  HookshotChainEntityHandler_return:;
    return;
}

void HookshotChainPokeWall(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 5;
    AddTranscientVfx(); return;
}

void HookshotChainSpriteVariants(void) {
  HookshotChainSpriteVariants_variant0:;
    /* data: db $36, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $36, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void RenderHookshotChain(void) {
    gb.regs.de = 0x7A43;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.a = 3;
  RenderHookshotChain_loop:;
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.hl = 0xFFE7;
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto RenderHookshotChain_jr_7D09;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFD8;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
  RenderHookshotChain_jr_7D09:;
    gb.regs.de++;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 0x24;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 0;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xFFD9;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xFFDA;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFFDB);
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto RenderHookshotChain_loop;
    gb.regs.a = 3;
    func_015_7964_trampoline(); return;
}

void PushLinkOutOfEntity_18(void) {
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto PushLinkOutOfEntity_18_jr_018_7D5A;
  PushLinkOutOfEntity_18_forcePush:;
    CopyLinkFinalPositionToPosition();
    ResetPegasusBoots();
    gb.regs.a = gb_read(0xC1A6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PushLinkOutOfEntity_18_jr_7D58;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC39F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto PushLinkOutOfEntity_18_jr_7D58;
    gb.regs.hl = 0xC28F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
  PushLinkOutOfEntity_18_jr_7D58:;
    alu_scf();
    return;
  PushLinkOutOfEntity_18_jr_018_7D5A:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void EntityVariantForDirection_18(void) {
  EntityVariantForDirection_18_right:;
    /* data: db 6 */;
  EntityVariantForDirection_18_left:;
    /* data: db 4 */;
  EntityVariantForDirection_18_up:;
    /* data: db 2 */;
  EntityVariantForDirection_18_down:;
    /* data: db 0 */;
}

void SetEntityVariantForDirection_18(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7AD1;
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

void func_018_7D7C(void) {
    gb.regs.e = gb.regs.b;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x38);
    func_018_7DA0(); return;
}

void ShouldLinkTalkToEntity_18(void) {
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 0x38);
    func_018_7DA0(); return;
}

void func_018_7D95(void) {
    gb.regs.e = gb.regs.b;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 0x28);
}

void func_018_7DA0(void) {
    if (!GET_FLAG_C()) { jr_018_7DE6(); return; };
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { jr_018_7DE6(); return; };
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xC4);
    if (GET_FLAG_Z()) goto func_018_7DA0_jr_7DC1;
    gb_push16(gb.regs.de);
    GetEntityDirectionToLink_18();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    gb.regs.de = gb_pop16();
    if (!GET_FLAG_Z()) { jr_018_7DE6(); return; };
  func_018_7DA0_jr_7DC1:;
    gb.regs.hl = 0xC1AD;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC134;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_018_7DE6(); return; };
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_018_7DE6(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_018_7DE6(); return; };
    alu_scf();
    return;
}

void jr_018_7DE6(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void ReturnIfNonInteractive_18(void) {
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_18_skip;
  ReturnIfNonInteractive_18_allowInactiveEntity:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_18_skip;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_18_skip;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_18_skip;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_18_skip;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_18_return;
  ReturnIfNonInteractive_18_skip:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ReturnIfNonInteractive_18_return:;
    return;
}

void ApplyRecoilIfNeeded_18(void) {
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyRecoilIfNeeded_18_return;
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
    UpdateEntityPosWithSpeed_18();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto ApplyRecoilIfNeeded_18_restoreOriginalSpeed;
    ApplyEntityInteractionWithBackground_trampoline();
  ApplyRecoilIfNeeded_18_restoreOriginalSpeed:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ApplyRecoilIfNeeded_18_return:;
    return;
}

void UpdateEntityPosWithSpeed_18(void) {
    AddEntitySpeedToPos_18();
}

void UpdateEntityYPosWithSpeed_18(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.c = gb.regs.a;
    AddEntitySpeedToPos_18();
    gb.regs.bc = gb_pop16();
    return;
}

void AddEntitySpeedToPos_18(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_18_return;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC260;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC200;
  AddEntitySpeedToPos_18_updatePosition:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_18_positive;
    gb.regs.e = 0xF0;
  AddEntitySpeedToPos_18_positive:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  AddEntitySpeedToPos_18_return:;
    return;
}

void AddEntityZSpeedToPos_18(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { AddEntitySpeedToPos_18_return(); return; };
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC330;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC310;
    AddEntitySpeedToPos_18_updatePosition(); return;
}

void GetEntityXDistanceToLink_18(void) {
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityXDistanceToLink_18_positive;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityXDistanceToLink_18_positive:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityRealYDistanceToLink_18(void) {
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto GetEntityRealYDistanceToLink_18_negative;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityRealYDistanceToLink_18_negative:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityVisualYDistanceToLink_18(void) {
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto GetEntityVisualYDistanceToLink_18_negative;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityVisualYDistanceToLink_18_negative:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityDirectionToLink_18(void) {
    GetEntityXDistanceToLink_18();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_18_positiveX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_18_positiveX:;
    gb_push16(gb.regs.af);
    GetEntityRealYDistanceToLink_18();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_18_positiveY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_18_positiveY:;
    gb.regs.de = gb_pop16();
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto GetEntityDirectionToLink_18_vertical;
    gb.regs.a = gb_read(0xFFD7);
    goto GetEntityDirectionToLink_18_verticalEnd;
  GetEntityDirectionToLink_18_vertical:;
    gb.regs.a = gb_read(0xFFD8);
  GetEntityDirectionToLink_18_verticalEnd:;
    gb.regs.e = gb.regs.a;
    return;
}

void ClearEntityStatusBank18(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    return;
}

void AnimateBossAgony_18(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_018_7F1B(); return;
        case 0x01: func_018_7F2C(); return;
        case 0x02: func_018_7F3B(); return;
    }
}

void func_018_7F1B(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
}

void label_018_7F26(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void func_018_7F2C(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0xC0);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    label_018_7F26(); return;
}

void func_018_7F3B(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_018_7F3B_jr_7F4C;
    PlayBombExplosionSfx();
    label_27DD();
    SetRoomStatus20();
    DidKillEnemy(); return;
  func_018_7F3B_jr_7F4C:;
    label_018_7F4F(); return;
}

void label_018_7F4F(void) {
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
    label_018_7F6F(); return;
}

void label_018_7F6F(void) {
    ReturnIfNonInteractive_18_allowInactiveEntity();
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
    if (GET_FLAG_Z()) goto label_018_7F6F_jr_7FA4;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF0);
    jr_018_7FB0(); return;
  label_018_7F6F_jr_7FA4:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
}

void jr_018_7FB0(void) {
    ClearEntityStatusBank18();
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x1A);
    return;
}

void SetRoomStatus20(void) {
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto SetRoomStatus20_notIndoorB;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto SetRoomStatus20_notIndoorB;
    gb.regs.d = alu_inc8(gb.regs.d);
  SetRoomStatus20_notIndoorB:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    return;
}
