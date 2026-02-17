/* Auto-generated from LADX Disassembly - Bank 0x06 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void RichardSpriteVariants(void);
void RichardEntityHandler(void);
void RichardState0Handler(void);
void RichardState1Handler(void);
void jr_006_40A0(void);
void label_006_40C1(void);
void RichardState2Handler(void);
void RichardState3Handler(void);
void RichardState4Handler(void);
void jr_006_40FC(void);
void MadBomberSpriteVariants(void);
void MadBomberPositionXValues(void);
void MadBomberPositionYValues(void);
void MadBomberEntityHandler(void);
void MadBomberState0Handler(void);
void MadBomberState1Handler(void);
void MadBomberState2Handler(void);
void MadBomberState3Handler(void);
void MadBomberState4Handler(void);
void AntiKirbyEntityHandler(void);
void AntiKirbyState0Handler(void);
void label_006_42A2(void);
void Data_006_42C1(void);
void Data_006_42C5(void);
void AntiKirbyState1Handler(void);
void jr_006_42F5(void);
void jr_006_4310(void);
void AntiKirbyState2Handler(void);
void label_006_431B(void);
void jr_006_432B(void);
void jr_006_434B(void);
void label_006_43B8(void);
void AntiKirbyState3Handler(void);
void jr_006_43F5(void);
void AntiKirbyState4Handler(void);
void AntiKirbySpriteVariants(void);
void Data_006_4456(void);
void Data_006_4486(void);
void func_006_44B6(void);
void SmasherEntityHandler(void);
void SmasherState0Handler(void);
void jr_006_45E2(void);
void func_006_45E5(void);
void Data_006_45FA(void);
void Data_006_45FE(void);
void SmasherState1Handler(void);
void Data_006_4650(void);
void Data_006_4660(void);
void SmasherState2Handler(void);
void func_006_468C(void);
void func_006_46BD(void);
void SmasherState3Handler(void);
void SmasherState4Handler(void);
void Data_006_4727(void);
void func_006_4767(void);
void func_006_4771(void);
void SmasherSpriteVariants(void);
void label_006_4781(void);
void jr_006_47C9(void);
void jr_006_47DA(void);
void func_006_47EA(void);
void func_006_47FA(void);
void jr_006_4806(void);
void jr_006_482D(void);
void ret_006_4852(void);
void func_006_4853(void);
void func_006_4854(void);
void func_006_4855(void);
void label_006_48DB(void);
void func_006_48DD(void);
void jr_006_48EC(void);
void jr_006_4905(void);
void jr_006_490C(void);
void ret_006_4910(void);
void ThreeOfAKindSpriteVariants(void);
void ThreeOfAKindEntityHandler(void);
void ThreeOfAKindState0Handler(void);
void jr_006_4967(void);
void Data_006_499B(void);
void Data_006_499F(void);
void ThreeOfAKindState1Handler(void);
void ThreeOfAKindState2Handler(void);
void jr_006_49E2(void);
void jr_006_4A1B(void);
void jr_006_4A68(void);
void jr_006_4AA1(void);
void label_006_4AA7(void);
void StalfosAggressiveSpriteVariants(void);
void StalfosAggressiveEntityHandler(void);
void StalfosAggressiveState0Handler(void);
void StalfosAggressiveState1Handler(void);
void StalfosAggressiveState2Handler(void);
void StalfosAggressiveState3Handler(void);
void Data_006_4B76(void);
void CueBallEntityHandler(void);
void jr_006_4BE1(void);
void Data_006_4BE8(void);
void Data_006_4BEC(void);
void Data_006_4BF0(void);
void Data_006_4BF8(void);
void Data_006_4C00(void);
void Data_006_4C08(void);
void Data_006_4C10(void);
void Data_006_4C18(void);
void CueBallState0Handler(void);
void jr_006_4C4F(void);
void func_006_4C59(void);
void jr_006_4C78(void);
void jr_006_4C7B(void);
void jr_006_4C83(void);
void func_006_4C91(void);
void ret_006_4D3A(void);
void CueBallState1Handler(void);
void Data_006_4D64(void);
void func_006_4E64(void);
void CueBallSpriteVariants(void);
void label_006_4E88(void);
void RaisableBlockSpriteVariants(void);
void RaisableBlockShiftedRightEntityHandler(void);
void RaisableBlockShiftedDownEntityHandler(void);
void HardHatBeetleSpriteVariants(void);
void HardHatBeetleCaveBSpriteVariants(void);
void HardHatBeetleEntityHandler(void);
void HardhatBeetleUpdateSpeed(void);
void Data_006_4FB0(void);
void Data_006_4FB4(void);
void HinoxEntityHandler(void);
void HinoxState1Handler(void);
void jr_006_501A(void);
void jr_006_505B(void);
void HinoxState0Handler(void);
void jr_006_5093(void);
void func_006_5099(void);
void HinoxState2Handler(void);
void jr_006_50BA(void);
void HinoxState3Handler(void);
void Data_006_5119(void);
void Data_006_5123(void);
void Data_006_512F(void);
void HinoxState4Handler(void);
void jr_006_5179(void);
void func_006_51B0(void);
void ret_006_51BB(void);
void HinoxState5Handler(void);
void Data_006_51FA(void);
void Data_006_523A(void);
void Data_006_527A(void);
void func_006_52BA(void);
void ArmosKnightEntityHandler(void);
void jr_006_52FF(void);
void label_006_5308(void);
void ArmosKnightPrivateState0Handler(void);
void ArmosKnightPrivateState1Handler(void);
void ArmosKnightPrivateState2Handler(void);
void jr_006_535A(void);
void jr_006_535D(void);
void ArmosKnightPrivateState3Handler(void);
void jr_006_5361(void);
void jr_006_53F9(void);
void label_006_5411(void);
void ArmosKnightState0Handler(void);
void ArmosKnightState1Handler(void);
void ArmosKnightState2Handler(void);
void ArmosKnightState3Handler(void);
void jr_006_54BB(void);
void ArmosKnightState4Handler(void);
void ArmosKnightState5Handler(void);
void ArmosKnightState6Handler(void);
void ArmosKnightState7Handler(void);
void Data_006_5523(void);
void Data_006_55A3(void);
void func_006_55B3(void);
void Data_006_55E3(void);
void Data_006_55E5(void);
void DesertLanmolaEntityHandler(void);
void jr_006_5611(void);
void func_006_5629(void);
void IncrementEntityPrivateState2(void);
void func_006_563A(void);
void func_006_564B(void);
void jr_006_56BB(void);
void ret_006_56C6(void);
void func_006_56C7(void);
void label_006_56C8(void);
void jr_006_5726(void);
void Data_006_5763(void);
void Data_006_576B(void);
void func_006_5773(void);
void func_006_57A8(void);
void jr_006_57E0(void);
void func_006_57ED(void);
void func_006_580C(void);
void jr_006_582C(void);
void func_006_5835(void);
void jr_006_5879(void);
void jr_006_5888(void);
void DesertLanmolaSpriteVariants(void);
void Data_006_58C3(void);
void func_006_58C9(void);
void jr_006_58F3(void);
void jr_006_5936(void);
void func_006_594C(void);
void jr_006_5973(void);
void jr_006_597D(void);
void Data_006_5980(void);
void label_006_5988(void);
void YipYipSpriteVariants(void);
void YipYipWithRibbonSpriteVariants(void);
void YipYipEntityHandler(void);
void jr_006_5A98(void);
void YipYipState2Handler(void);
void func_006_5ACC(void);
void ret_006_5AD0(void);
void YipYipState3Handler(void);
void Data_006_5ADF(void);
void YipYipState0Handler(void);
void YipYipState1Handler(void);
void label_006_5B4C(void);
void MadamMeowMeowSpriteVariants(void);
void MadamMeowMeowEntityHandler(void);
void jr_006_5BC4(void);
void label_006_5C04(void);
void GrandpaUlriraEntityHandler(void);
void Data_006_5C51(void);
void func_006_5C71(void);
void CrowSpriteVariants(void);
void CrowEntityHandler(void);
void jr_006_5CBE(void);
void CrowState0Handler(void);
void jr_006_5D0F(void);
void jr_006_5D4F(void);
void label_006_5D8A(void);
void jr_006_5D9F(void);
void CrowState1Handler(void);
void CrowState2Handler(void);
void func_006_5E02(void);
void jr_006_5E08(void);
void func_006_5E14(void);
void CrowState3Handler(void);
void jr_006_5E51(void);
void func_006_5E54(void);
void CrazyTracySpriteAttributes(void);
void MedicineSpriteAttributes(void);
void CrazyTracyEntityHandler(void);
void ShouldLinkTalkToTracy(void);
void CrazyTracyGreetingHandler(void);
void CrazyTracyProposingPriceHandler(void);
void MedicinePriceCharacters(void);
void Data_006_5F85(void);
void MedicinePriceDecimal(void);
void Data_006_5F8D(void);
void CrazyTracySellingHandler(void);
void CrazyTracyDialogResponseHandler(void);
void CrazyTracyBonusHandler(void);
void jr_006_6048(void);
void Kid71SpriteVariants(void);
void Kid72SpriteVariants(void);
void Unknown019SpriteVariants(void);
void KidBallSprite(void);
void Kid71EntityHandler(void);
void Kid72EntityHandler(void);
void KidBowwowKidnapState0(void);
void IncreasePrivateState3(void);
void KidBowwowKidnapState1(void);
void KidBowwowKidnapState2(void);
void KidPlayingWithBall(void);
void KidWithBallState0(void);
void KidWithBallState1(void);
void Kid70EntityHandler(void);
void Kid73EntityHandler(void);
void func_006_6230(void);
void GiantGopongaFlowerEntityHandler(void);
void GiantGopongaState0Handler(void);
void GiantGopongaState1Handler(void);
void GiantGopongaState2Handler(void);
void Data_006_6316(void);
void func_006_6376(void);
void GopongaFlowerProjectileSpriteList(void);
void GopongaProjectileEntityHandler(void);
void GopongaFlowerSpriteVariants(void);
void GopongaFlowerEntityHandler(void);
void PushLinkOutOfEntity_06(void);
void ret_006_643C(void);
void EntityVariantForDirection_06(void);
void SetEntityVariantForDirection_06(void);
void CheckLinkInteractionWithEntity_06(void);
void ReturnIfNonInteractive_06(void);
void ApplyRecoilIfNeeded_06(void);
void UpdateEntityPosWithSpeed_06(void);
void AddEntitySpeedToPos_06(void);
void AddEntityZSpeedToPos_06(void);
void GetEntityXDistanceToLink_06(void);
void GetEntityYDistanceToLink_06(void);
void GetEntityDirectionToLink_06(void);
void ClearEntityStatus_06(void);
void WizrobeProjectileSpriteVariants(void);
void WizrobeProjectileEntityHandler(void);
void SparkSpriteVariants(void);
void Data_006_661D(void);
void Data_006_6625(void);
void Data_006_662D(void);
void SparkClockwiseEntityHandler(void);
void SparkCounterClockwiseEntityHandler(void);
void jr_006_6690(void);
void jr_006_669D(void);
void func_006_66CC(void);
void KeeseSpriteVariants(void);
void KeeseCaveBSpriteVariants(void);
void KeeseYSpeeds(void);
void KeeseXSpeeds(void);
void KeeseInitialSpeedIndexPerDirection(void);
void KeeseEntityHandler(void);
void KeeseRestingHandler(void);
void KeeseFlyingHandler(void);
void AnimateKeese(void);
void OwlEventEntityHandler(void);
void jr_006_6853(void);
void jr_006_6894(void);
void jr_006_689B(void);
void jr_006_689D(void);
void jr_006_68A0(void);
void jr_006_68B7(void);
void OwlState0Handler(void);
void jr_006_68F6(void);
void jr_006_691A(void);
void OwlState1Handler(void);
void OwlState2Handler(void);
void jr_006_6993(void);
void OwlState3Handler(void);
void func_006_69BD(void);
void OwlState4Handler(void);
void jr_006_6A05(void);
void func_006_6A2B(void);
void ret_006_6A36(void);
void OwlEventSpriteVariants(void);
void Data_006_6A3F(void);
void func_006_6A4F(void);
void func_006_6A55(void);
void jr_006_6A5B(void);
void TelephoneSpriteVariants(void);
void TelephoneEntityHandler(void);
void ButterflyOAMAttributes(void);
void ButterflyPossibleSpeeds(void);
void ButterflyEntityHandler(void);
void RollingBonesEntityHandler(void);
void func_006_6C9A(void);
void func_006_6CAB(void);
void label_006_6CBE(void);
void label_006_6CC9(void);
void jr_006_6CE4(void);
void jr_006_6CE8(void);
void jr_006_6D0D(void);
void RollingBonesState0Handler(void);
void RollingBonesState1Handler(void);
void RollingBonesState2Handler(void);
void RollingBonesState3Handler(void);
void jr_006_6E04(void);
void Data_006_6E1E(void);
void func_006_6E7E(void);
void RollingBonesSpriteVariants(void);
void Data_006_6EDD(void);
void RollingBonesBarEntityHandler(void);
void ret_006_6F47(void);
void jr_006_6F48(void);
void jr_006_6F86(void);
void RollingBonesBarRestingHandler(void);
void RollingBonesBarRollingHandler(void);
void RollingBonesBarDeceleratingHandler(void);
void ret_006_6FD9(void);
void jr_006_6FDA(void);
void Data_006_6FE4(void);
void func_006_6FEA(void);
void func_006_700A(void);
void label_006_702A(void);
void label_006_7035(void);
void jr_006_706B(void);
void Data_006_7071(void);
void Data_006_7089(void);
void Data_006_70A1(void);
void Data_006_70A3(void);
void Data_006_70A5(void);
void BigFairyEntityHandler(void);
void jr_006_7120(void);
void label_006_7123(void);
void BigFairyWaitingHandler(void);
void BigFairyHealingHandler(void);
void BigFairyDisappearingHandler(void);
void MrWriteSpriteVariants(void);
void MrWriteBirdChristineHouseSpriteVariants(void);
void MrWriteBirdEntityHandler(void);
void jr_006_725A(void);
void Data_006_7295(void);
void MrWriteBirdState0Handler(void);
void MrWriteBirdState1Handler(void);
void label_006_7308(void);
void MrWriteBirdState2Handler(void);
void func_006_7335(void);
void label_006_7372(void);
void PolsVoiceSpriteVariants(void);
void PolsVoiceEntityHandler(void);
void Data_006_73D4(void);
void Data_006_73DA(void);
void func_006_73E0(void);
void jr_006_741F(void);
void func_006_7423(void);
void ArmosStatueSpriteVariants(void);
void ArmosStatueEntityHandler(void);
void ArmosStatueState0Handler(void);
void ArmosStatueState1Handler(void);
void Data_006_74C0(void);
void Data_006_74C2(void);
void ArmosStatueState2Handler(void);
void jr_006_74EF(void);
void SpikeTrapSpriteVariants(void);
void Data_006_74FE(void);
void Data_006_7502(void);
void Data_006_7506(void);
void Data_006_750A(void);
void SpikeTrapEntityHandler(void);
void SpikeTrapState0Handler(void);
void SpikeTrapState1Handler(void);
void jr_006_7585(void);
void ret_006_7599(void);
void jr_006_759A(void);
void SpikeTrapState2Handler(void);
void jr_006_75A9(void);
void jr_006_75B5(void);
void SpikeTrapState3Handler(void);
void WizrobeSpriteVariants(void);
void Data_006_7618(void);
void Data_006_761C(void);
void Data_006_7620(void);
void Data_006_7624(void);
void WizrobeEntityHandler(void);
void WizrobeState0Handler(void);
void WizrobeState1Handler(void);
void jr_006_7679(void);
void jr_006_767E(void);
void jr_006_7686(void);
void WizrobeState2Handler(void);
void jr_006_76B6(void);
void WizrobeState3Handler(void);
void jr_006_76E9(void);
void label_006_7709(void);
void jr_006_772D(void);
void label_006_7735(void);
void Data_006_773C(void);
void func_006_783C(void);
void AntiFairySpriteVariants(void);
void AntiFairyEntityHandler(void);
void jr_006_78A5(void);
void jr_006_78AD(void);
void TektiteSpriteVariants(void);
void TektiteXSpeeds(void);
void TektiteYSpeeds(void);
void TektiteEntityHandler(void);
void TektiteState1Handler(void);
void TektiteHorizontalCollision(void);
void TektiteVerticalCollision(void);
void jr_006_7982(void);
void BooBuddySpriteVariants(void);
void BooBuddyEntityHandler(void);
void BooBuddyState0Handler(void);
void jr_006_79FA(void);
void jr_006_7A11(void);
void jr_006_7A21(void);
void jr_006_7A27(void);
void label_006_7A38(void);
void BooBuddyState1Handler(void);
void func_006_7A79(void);
void ret_006_7A8B(void);
void func_006_7A8C(void);
void func_006_7AB0(void);
void jr_006_7AC7(void);
void jr_006_7AC9(void);
void Data_006_7AD1(void);
void Data_006_7ADD(void);
void Data_006_7AEB(void);
void Data_006_7AFB(void);
void Data_006_7B03(void);
void FloatingItemEntityHandler(void);
void FloatingItem2EntityHandler(void);
void jr_006_7B61(void);
void func_006_7BA2(void);
void FloatingArrowsHandler(void);
void Floating10RupeesHandler(void);
void FloatingMagicPowderHandler(void);
void FloatingBombsHandler(void);
void jr_006_7BD6(void);
void ZolGelMakeInvisibleBeforeMagnifyingLens(void);
void GelSpriteVariants(void);
void GelEntityHandler(void);
void ZolSpriteVariants(void);
void ZolSlimeEyeSpriteVariants(void);
void ZolEntityHandler(void);
void AnimateZolGel(void);
void ZolGelState1Handler(void);
void ZolGelPhysics(void);
void ZolGelState0Handler(void);
void ZolGelState2Handler(void);
void ZolGelState3Handler(void);
void GelState4Handler(void);
void DecreaseEntityTransitionCountdown(void);
void LikeLikeSpriteVariants(void);
void LikeLikeEntityHandler(void);
void LikeLikeState0Handler(void);
void LikeLikeState1Handler(void);
void jr_006_7E37(void);
void jr_006_7E55(void);
void GibdoSpriteVariants(void);
void GibdoTurtleRockSpriteVariants(void);
void LikeLikeGibdoSpeeds(void);
void GibdoEntityHandler(void);
void LikeLikeGibdoWalk(void);
void func_006_7F05(void);

void RichardSpriteVariants(void) {
  RichardSpriteVariants_variant0:;
    /* data: db $50, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  RichardSpriteVariants_variant1:;
    /* data: db $54, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $56, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  RichardSpriteVariants_variant2:;
    /* data: db $50, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  RichardSpriteVariants_variant3:;
    /* data: db $54, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $56, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  RichardSpriteVariants_variant4:;
    /* data: db $58, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  RichardSpriteVariants_variant5:;
    /* data: db $5C, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  RichardSpriteVariants_variant6:;
    /* data: db $5A, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $58, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  RichardSpriteVariants_variant7:;
    /* data: db $5E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $5C, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void RichardEntityHandler(void) {
    gb.regs.a = 0x21;
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x4000;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto RichardEntityHandler_jr_403B;
    GetEntityDirectionToLink_06();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
  RichardEntityHandler_jr_403B:;
    SetEntityVariantForDirection_06();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto RichardEntityHandler_jr_4049;
    PushLinkOutOfEntity_06();
  RichardEntityHandler_jr_4049:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: RichardState0Handler(); return;
        case 0x01: RichardState1Handler(); return;
        case 0x02: RichardState2Handler(); return;
        case 0x03: RichardState3Handler(); return;
        case 0x04: RichardState4Handler(); return;
    }
}

void RichardState0Handler(void) {
    IncrementEntityState();
    gb.regs.a = gb_read(0xDBC1);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) return;
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x58);
    return;
}

void RichardState1Handler(void) {
    CheckLinkInteractionWithEntity_06();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RichardState1Handler_jr_4077;
    /* ld_dialog_low e, Dialog12D */;
    label_006_40C1(); return;
  RichardState1Handler_jr_4077:;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto RichardState1Handler_jr_4083;
    gb.regs.a = gb_read(0xDBC1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_006_40A0(); return; };
  RichardState1Handler_jr_4083:;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(0xFFF8, gb.regs.a);
    gb_write(0xDB7C, gb.regs.a);
    /* call_open_dialog Dialog13A */;
    gb.regs.a = gb_read(0xDBFD);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto RichardState1Handler_jr_409D;
    gb.regs.a = 2;
    gb_write(0xDBFD, gb.regs.a);
  RichardState1Handler_jr_409D:;
    IncrementEntityState(); return;
}

void jr_006_40A0(void) {
    /* ld_dialog_low e, Dialog13F */;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) { label_006_40C1(); return; };
    IncrementEntityState();
    gb_write(gb.regs.hl, 3);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = 0xFF;
    gb_write(0xDBC1, gb.regs.a);
    gb.regs.a = 9;
    gb_write(0xFFA5, gb.regs.a);
    /* ld_dialog_low e, Dialog13D */;
}

void label_006_40C1(void) {
    gb.regs.a = gb.regs.e;
    OpenDialogInTable1(); return;
}

void RichardState2Handler(void) {
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low a, Dialog13B */;
    if (GET_FLAG_Z()) goto RichardState2Handler_jr_40CF;
    /* ld_dialog_low a, Dialog13C */;
  RichardState2Handler_jr_40CF:;
    OpenDialogInTable1();
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    return;
}

void RichardState3Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto RichardState3Handler_jr_40E0;
    IncrementEntityState();
  RichardState3Handler_jr_40E0:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF8);
    AddEntitySpeedToPos_06(); return;
}

void RichardState4Handler(void) {
    CheckLinkInteractionWithEntity_06();
    if (!GET_FLAG_C()) { jr_006_40FC(); return; };
    gb.regs.a = gb_read(0xDBC1);
    alu_cp8(gb.regs.a, 6);
    /* ld_dialog_low a, Dialog13E */;
    if (GET_FLAG_Z()) goto RichardState4Handler_jr_40F9;
    /* ld_dialog_low a, Dialog13D */;
  RichardState4Handler_jr_40F9:;
    OpenDialogInTable1();
}

void jr_006_40FC(void) {
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x78);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb.regs.a = alu_add8(gb.regs.a, 5);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) return;
    gb.regs.hl = 0xD401;
    gb.regs.a = 1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x11;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xD8;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x88;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x70;
    gb_write(gb.regs.hl++, gb.regs.a);
    ClearEntityStatus_06();
    ApplyMapFadeOutTransitionWithNoise(); return;
}

void MadBomberSpriteVariants(void) {
  MadBomberSpriteVariants_variant0:;
    /* data: db $FF, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $FF, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MadBomberSpriteVariants_variant1:;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  MadBomberSpriteVariants_variant2:;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  MadBomberSpriteVariants_variant3:;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  MadBomberSpriteVariants_variant4:;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void MadBomberPositionXValues(void) {
    /* data: db $28, $38, $58, $58, $78, $88, $28, $88 */;
}

void MadBomberPositionYValues(void) {
    /* data: db $40, $70, $20, $50, $70, $40, $40, $40 */;
}

void MadBomberEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x3C);
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.de = 0x4105;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MadBomberState0Handler(); return;
        case 0x01: MadBomberState1Handler(); return;
        case 0x02: MadBomberState2Handler(); return;
        case 0x03: MadBomberState3Handler(); return;
        case 0x04: MadBomberState4Handler(); return;
    }
}

void MadBomberState0Handler(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState(); return;
}

void MadBomberState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4119;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4121;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityXDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto MadBomberState1Handler_incrementState;
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) return;
  MadBomberState1Handler_incrementState:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x18);
    IncrementEntityState(); return;
}

void MadBomberState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MadBomberState2Handler_skipIncrementState;
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState(); return;
  MadBomberState2Handler_skipIncrementState:;
    alu_cp8(gb.regs.a, 0x0C);
    gb.regs.a = 1;
    if (!GET_FLAG_C()) goto MadBomberState2Handler_spriteVariant1;
    gb.regs.a = alu_inc8(gb.regs.a);
  MadBomberState2Handler_spriteVariant1:;
    SetEntitySpriteVariant(); return;
}

void MadBomberState3Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MadBomberState3Handler_animate;
    gb_write(gb.regs.hl, 0x10);
    IncrementEntityState();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MadBomberState3Handler_return;
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
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 4);
  MadBomberState3Handler_throwBomb:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
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
  MadBomberState3Handler_return:;
    return;
  MadBomberState3Handler_animate:;
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    gb.regs.a = 3;
    if (!GET_FLAG_Z()) goto MadBomberState3Handler_spriteVariant3;
    gb.regs.a = alu_inc8(gb.regs.a);
  MadBomberState3Handler_spriteVariant3:;
    SetEntitySpriteVariant(); return;
}

void MadBomberState4Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MadBomberState4Handler_skipIncrementState;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant(); return;
  MadBomberState4Handler_skipIncrementState:;
    alu_cp8(gb.regs.a, 8);
    gb.regs.a = 1;
    if (GET_FLAG_C()) goto MadBomberState4Handler_spriteVariant1;
    gb.regs.a = alu_inc8(gb.regs.a);
  MadBomberState4Handler_spriteVariant1:;
    SetEntitySpriteVariant(); return;
}

void AntiKirbyEntityHandler(void) {
    func_006_44B6();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    AddEntityZSpeedToPos_06();
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
    if (GET_FLAG_Z()) goto AntiKirbyEntityHandler_jr_425E;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  AntiKirbyEntityHandler_jr_425E:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: AntiKirbyState0Handler(); return;
        case 0x01: AntiKirbyState1Handler(); return;
        case 0x02: AntiKirbyState2Handler(); return;
        case 0x03: AntiKirbyState3Handler(); return;
        case 0x04: AntiKirbyState4Handler(); return;
    }
}

void AntiKirbyState0Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { label_006_42A2(); return; };
    ClearEntitySpeed();
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto AntiKirbyState0Handler_jr_4294;
    GetEntityXDistanceToLink_06();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) goto AntiKirbyState0Handler_jr_4294;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.a = 0x3B;
    gb_write(0xFFF4, gb.regs.a);
    return;
  AntiKirbyState0Handler_jr_4294:;
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
}

void label_006_42A2(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_006_42A2_jr_42AD;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
  label_006_42A2_jr_42AD:;
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    SetEntitySpriteVariant();
    DefaultEnemyDamageCollisionHandler_trampoline(); return;
}

void Data_006_42C1(void) {
    /* data: db $08, $F8, $08, $F8 */;
}

void Data_006_42C5(void) {
    /* data: db $F8, $F8, $08, $08 */;
}

void AntiKirbyState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_006_4310(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetRandomByte();
    alu_bit(2, gb.regs.a);
    if (GET_FLAG_Z()) goto AntiKirbyState1Handler_jr_42E5;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    jr_006_42F5(); return;
  AntiKirbyState1Handler_jr_42E5:;
    GetEntityXDistanceToLink_06();
    gb_push16(gb.regs.de);
    GetEntityYDistanceToLink_06();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
}

void jr_006_42F5(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x42C1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x42C5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_4310(void) {
    label_006_42A2(); return;
}

void AntiKirbyState2Handler(void) {
    label_3B70();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_006_432B(); return; };
}

void label_006_431B(void) {
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntitySlowTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void jr_006_432B(void) {
    gb.regs.a = 1;
    gb_write(0xD3E6, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_006_434B(); return; };
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { jr_006_434B(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_006_432B_jr_434A;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_006_432B_jr_434A:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_006_434B(void) {
    gb.regs.a = gb_read(0xFF9D);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { label_006_43B8(); return; };
    GetEntityXDistanceToLink_06();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) { label_006_43B8(); return; };
    GetEntityXDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) { label_006_43B8(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityYDistanceToLink_06();
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) { label_006_43B8(); return; };
    gb.regs.a = 8;
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
    CheckPositionForMapTransition_trampoline();
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xFFEE;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { label_006_43B8(); return; };
    gb.regs.hl = 0xFFEC;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { label_006_43B8(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState();
}

void label_006_43B8(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.a = alu_or8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void AntiKirbyState3Handler(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_006_43F5(); return; };
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AntiKirbyState3Handler_jr_43E2;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto AntiKirbyState3Handler_jr_43E2;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
  AntiKirbyState3Handler_jr_43E2:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    SetEntitySpriteVariant();
    gb.regs.a = 0xFF;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    return;
}

void jr_006_43F5(void) {
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = 0x18;
    if (GET_FLAG_Z()) goto jr_006_43F5_jr_440C;
    gb.regs.a = 0xE8;
  jr_006_43F5_jr_440C:;
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xDC6F, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState(); return;
}

void AntiKirbyState4Handler(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { label_006_431B(); return; };
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    label_006_43B8(); return;
}

void AntiKirbySpriteVariants(void) {
  AntiKirbySpriteVariants_variant0:;
    /* data: db $62, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $60, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  AntiKirbySpriteVariants_variant1:;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  AntiKirbySpriteVariants_variant2:;
    /* data: db $60, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  AntiKirbySpriteVariants_variant3:;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  AntiKirbySpriteVariants_variant4:;
    /* data: db $62, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $60, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  AntiKirbySpriteVariants_variant5:;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  AntiKirbySpriteVariants_variant6:;
    /* data: db $60, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  AntiKirbySpriteVariants_variant7:;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void Data_006_4456(void) {
    /* data: db $00, $FC, $62, $21, $00, $04, $6A, $21, $00, $0C, $64, $21, $00, $FC, $64, $01 */;
    /* data: db $00, $04, $6A, $01, $00, $0C, $62, $01, $00, $FC, $62, $21, $00, $04, $6A, $21 */;
    /* data: db $00, $0C, $64, $21, $00, $FC, $64, $01, $00, $04, $6A, $01, $00, $0C, $62, $01 */;
}

void Data_006_4486(void) {
    /* data: db $00, $0E, $24, $01, $F8, $18, $24, $01, $08, $18, $24, $01, $FE, $13, $24, $01 */;
    /* data: db $03, $13, $24, $01, $03, $13, $FF, $01, $00, $FA, $24, $01, $F8, $F0, $24, $01 */;
    /* data: db $08, $F0, $24, $01, $FE, $F5, $24, $01, $03, $F5, $24, $01, $03, $F5, $FF, $01 */;
}

void func_006_44B6(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto func_006_44B6_jr_44F1;
    gb.regs.de = 0x440F;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4486;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 3;
    func_015_7964_trampoline(); return;
  func_006_44B6_jr_44F1:;
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4456;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    label_3CD9(); return;
}

void SmasherEntityHandler(void) {
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_006_4781(); return; };
    gb.regs.a = gb.regs.c;
    gb_write(0xD482, gb.regs.a);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SmasherEntityHandler_jr_453F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x92;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb.regs.e;
    gb_write(0xD481, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  SmasherEntityHandler_jr_453F:;
    func_006_4767();
    BossIntro();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { label_006_5308(); return; };
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    DefaultEnemyDamageCollisionHandler_trampoline();
    AddEntityZSpeedToPos_06();
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
    if (GET_FLAG_Z()) goto SmasherEntityHandler_jr_4570;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  SmasherEntityHandler_jr_4570:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: SmasherState0Handler(); return;
        case 0x01: SmasherState1Handler(); return;
        case 0x02: SmasherState2Handler(); return;
        case 0x03: SmasherState3Handler(); return;
        case 0x04: SmasherState4Handler(); return;
    }
}

void SmasherState0Handler(void) {
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) { jr_006_45E2(); return; };
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    GetEntityXDistanceToLink_06();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto SmasherState0Handler_jr_45DA;
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto SmasherState0Handler_jr_45DA;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x1F);
    gb.regs.a = 0x1C;
    gb_write(0xFFF3, gb.regs.a);
  SmasherState0Handler_jr_45DA:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    func_006_45E5(); return;
}

void jr_006_45E2(void) {
    IncrementEntityState();
}

void func_006_45E5(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_006_45E5_jr_45F0;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
  func_006_45E5_jr_45F0:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void Data_006_45FA(void) {
    /* data: db $0C, $F4, $0C, $F4 */;
}

void Data_006_45FE(void) {
    /* data: db $FC, $FC, $04, $04 */;
}

void SmasherState1Handler(void) {
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto SmasherState1Handler_jr_4614;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  SmasherState1Handler_jr_4614:;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SmasherState1Handler_jr_463E;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x45FA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x45FE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  SmasherState1Handler_jr_463E:;
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    func_006_45E5();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto SmasherState1Handler_ret_464F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  SmasherState1Handler_ret_464F:;
    return;
}

void Data_006_4650(void) {
    /* data: db $00, $02, $04, $06, $08, $0A, $0C, $0E, $00, $FE, $FC, $FA, $F8, $F6, $F4, $F2 */;
}

void Data_006_4660(void) {
    /* data: db $F0, $F1, $F2, $F4, $F6, $F8, $FA, $FE, $F0, $F1, $F2, $F4, $F6, $F8, $FA, $FE */;
}

void SmasherState2Handler(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.e = gb.regs.a;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SmasherState2Handler_jr_4687;
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState(); return;
  SmasherState2Handler_jr_4687:;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
}

void func_006_468C(void) {
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0x4650;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4660;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
}

void func_006_46BD(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, 2);
    SetEntitySpriteVariant(); return;
}

void SmasherState3Handler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    func_006_468C();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SmasherState3Handler_jr_46FB;
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 4);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x20;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState(); return;
  SmasherState3Handler_jr_46FB:;
    func_006_45E5();
    gb.regs.a = 4;
    ApplyVectorTowardsLink_trampoline();
    GetEntityXDistanceToLink_06();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    func_006_46BD();
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline(); return;
}

void SmasherState4Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SmasherState4Handler_jr_471D;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  SmasherState4Handler_jr_471D:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void Data_006_4727(void) {
    /* data: db $00, $FC, $64, $21, $00, $04, $62, $21, $00, $0C, $60, $21, $F0, $FC, $6C, $21 */;
    /* data: db $00, $FC, $60, $01, $00, $04, $62, $01, $00, $0C, $64, $01, $F0, $0C, $6C, $01 */;
    /* data: db $00, $FC, $6A, $21, $00, $04, $68, $21, $00, $0C, $66, $21, $F0, $FC, $6C, $01 */;
    /* data: db $00, $FC, $66, $01, $00, $04, $68, $01, $00, $0C, $6A, $01, $F0, $0C, $6C, $21 */;
}

void func_006_4767(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
}

void func_006_4771(void) {
    gb.regs.hl = 0x4727;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    label_3CD9(); return;
}

void SmasherSpriteVariants(void) {
  SmasherSpriteVariants_variant0:;
    /* data: db $6E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void label_006_4781(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x92);
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.de = 0x476B;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    UpdateEntityPosWithSpeed_06();
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_47DA(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cpl();
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_C()) goto label_006_4781_jr_47C5;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_006_47C9(); return;
  label_006_4781_jr_47C5:;
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
}

void jr_006_47C9(void) {
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
}

void jr_006_47DA(void) {
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_006_47EA(); return;
        case 0x01: func_006_4853(); return;
        case 0x02: func_006_4854(); return;
        case 0x03: func_006_4855(); return;
        case 0x04: func_006_48DD(); return;
    }
}

void func_006_47EA(void) {
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_006_4806(); return; };
    gb.regs.hl = 0xC250;
    func_006_47FA();
    gb.regs.hl = 0xC240;
}

void func_006_47FA(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_4806(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_006_47FA_jr_4805;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_006_47FA_jr_4805:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_006_4806(void) {
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) { ret_006_4852(); return; };
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_006_4852(); return; };
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_006_4806_checkAButtonSlot;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_006_482D(); return; };
    ret_006_4852(); return;
  jr_006_4806_checkAButtonSlot:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_006_4852(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { ret_006_4852(); return; };
}

void jr_006_482D(void) {
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_006_4852(); return; };
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
}

void ret_006_4852(void) {
    return;
}

void func_006_4853(void) {
    return;
}

void func_006_4854(void) {
    return;
}

void func_006_4855(void) {
    gb.regs.a = gb_read(0xD482);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { label_006_48DB(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { label_006_48DB(); return; };
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC3F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = gb_pop16();
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = gb_pop16();
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_006_4855_jr_48D7;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x1F);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.a = 0x10;
    gb_write(0xFFF3, gb.regs.a);
  func_006_4855_jr_48D7:;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}

void label_006_48DB(void) {
    jr_006_48EC(); return;
}

void func_006_48DD(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x12);
    label_3B44();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x92);
}

void jr_006_48EC(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_006_490C(); return; };
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_006_4910(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_006_48EC_jr_4902;
    gb.regs.hl = 0xC240;
    jr_006_4905(); return;
  jr_006_48EC_jr_4902:;
    gb.regs.hl = 0xC250;
}

void jr_006_4905(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_490C(void) {
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}

void ret_006_4910(void) {
    return;
}

void ThreeOfAKindSpriteVariants(void) {
  ThreeOfAKindSpriteVariants_variant0:;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  ThreeOfAKindSpriteVariants_variant1:;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  ThreeOfAKindSpriteVariants_variant2:;
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  ThreeOfAKindSpriteVariants_variant3:;
    /* data: db $72, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  ThreeOfAKindSpriteVariants_variant4:;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  ThreeOfAKindSpriteVariants_variant5:;
    /* data: db $7A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  ThreeOfAKindSpriteVariants_variant6:;
    /* data: db $7C, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  ThreeOfAKindSpriteVariants_variant7:;
    /* data: db $7E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $7C, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void ThreeOfAKindEntityHandler(void) {
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.de = 0x48FA;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    DecrementEntityIgnoreHitsCountdown();
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: ThreeOfAKindState0Handler(); return;
        case 0x01: ThreeOfAKindState1Handler(); return;
        case 0x02: ThreeOfAKindState2Handler(); return;
    }
}

void ThreeOfAKindState0Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ThreeOfAKindState0Handler_jr_4962;
    gb_write(gb.regs.hl, 0x20);
    ClearEntitySpeed();
    IncrementEntityState();
  ThreeOfAKindState0Handler_jr_4962:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void jr_006_4967(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto jr_006_4967_jr_4976;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_006_4967_jr_4976:;
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    ClearEntitySpeed(); return;
}

void Data_006_499B(void) {
    /* data: db $0C, $F4, $00, $00 */;
}

void Data_006_499F(void) {
    /* data: db $00, $00, $F4, $0C */;
}

void ThreeOfAKindState1Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
  ThreeOfAKindState1Handler_jr_49A6:;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ThreeOfAKindState1Handler_jr_49D2;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x499B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x499F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  ThreeOfAKindState1Handler_jr_49D2:;
    jr_006_4967(); return;
}

void ThreeOfAKindState2Handler(void) {
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_006_4AA7(); return; };
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
}

void jr_006_49E2(void) {
    loop_start: ;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_006_49E2_jr_4A09;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_Z()) goto jr_006_49E2_jr_4A09;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_006_49E2_jr_4A09;
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_006_49E2_jr_4A09;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
  jr_006_49E2_jr_4A09:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { label_006_4AA7(); return; };
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.b;
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
}

void jr_006_4A1B(void) {
    loop_start: ;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_006_4A1B_jr_4A37;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_Z()) goto jr_006_4A1B_jr_4A37;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFD9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc++;
  jr_006_4A1B_jr_4A37:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb.regs.bc = gb_pop16();
    PlayWrongAnswerJingle();
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.hl = 0xFFDA;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_006_4A1B_jr_4A62;
    gb.regs.hl++;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_006_4A1B_jr_4A62;
    gb.regs.e = 0xFF;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto jr_006_4A1B_jr_4A62;
    gb.regs.e = 0x2D;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_006_4A1B_jr_4A62;
    gb.regs.e = 0x2E;
  jr_006_4A1B_jr_4A62:;
    gb.regs.a = gb.regs.e;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
}

void jr_006_4A68(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_4AA1(); return; };
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_Z()) { jr_006_4AA1(); return; };
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_006_4A68_jr_4A85;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.d);
    jr_006_4AA1(); return;
  jr_006_4A68_jr_4A85:;
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x1F);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x13);
}

void jr_006_4AA1(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_006_4A68(); return; };
}

void label_006_4AA7(void) {
    return;
}

void StalfosAggressiveSpriteVariants(void) {
  StalfosAggressiveSpriteVariants_variant0:;
    /* data: db $4A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $4C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  StalfosAggressiveSpriteVariants_variant1:;
    /* data: db $4C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $4A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  StalfosAggressiveSpriteVariants_variant2:;
    /* data: db $4E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $4E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void StalfosAggressiveEntityHandler(void) {
    gb.regs.de = 0x4AB7;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto StalfosAggressiveEntityHandler_jr_4ACE;
    gb.regs.a = 6;
    func_036_4BE8_trampoline(); return;
  StalfosAggressiveEntityHandler_jr_4ACE:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: StalfosAggressiveState0Handler(); return;
        case 0x01: StalfosAggressiveState1Handler(); return;
        case 0x02: StalfosAggressiveState2Handler(); return;
        case 0x03: StalfosAggressiveState3Handler(); return;
    }
}

void StalfosAggressiveState0Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    IncrementEntityState(); return;
}

void StalfosAggressiveState1Handler(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto StalfosAggressiveState1Handler_jr_4AEC;
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
  StalfosAggressiveState1Handler_jr_4AEC:;
    GetEntityXDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x1C);
    alu_cp8(gb.regs.a, 0x38);
    if (!GET_FLAG_C()) goto StalfosAggressiveState1Handler_jr_4B0C;
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x1C);
    alu_cp8(gb.regs.a, 0x38);
    if (!GET_FLAG_C()) goto StalfosAggressiveState1Handler_jr_4B0C;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x28);
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    IncrementEntityState();
  StalfosAggressiveState1Handler_jr_4B0C:;
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void StalfosAggressiveState2Handler(void) {
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto StalfosAggressiveState2Handler_jr_4B3C;
    gb_write(gb.regs.hl, 0xC0);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    ClearEntitySpeed();
    IncrementEntityState();
  StalfosAggressiveState2Handler_jr_4B3C:;
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void StalfosAggressiveState3Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto StalfosAggressiveState3Handler_jr_4B53;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) return;
  StalfosAggressiveState3Handler_jr_4B53:;
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, gb.regs.b);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0xD0);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(0xFFD8, gb.regs.a);
    label_D15(); return;
}

void Data_006_4B76(void) {
    /* data: db $00, $03, $01, $02 */;
}

void CueBallEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_006_4E88(); return; };
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CueBallEntityHandler_jr_4B98;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
  CueBallEntityHandler_jr_4B98:;
    label_394D();
    func_006_4E64();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { label_006_5308(); return; };
    ReturnIfNonInteractive_06();
    BossIntro();
    DecrementEntityIgnoreHitsCountdown();
    label_3B44();
    UpdateEntityPosWithSpeed_06();
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_006_4BE1(); return; };
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_IS_MINI_BOSS);
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CueBallEntityHandler_jr_4BDE;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4B76;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    GetEntityDirectionToLink_06();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto CueBallEntityHandler_jr_4BDE;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_IS_MINI_BOSS);
  CueBallEntityHandler_jr_4BDE:;
    label_3B70();
}

void jr_006_4BE1(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: CueBallState0Handler(); return;
        case 0x01: CueBallState1Handler(); return;
    }
}

void Data_006_4BE8(void) {
    /* data: db $14, $00, $EC, $00 */;
}

void Data_006_4BEC(void) {
    /* data: db $00, $14, $00, $EC */;
}

void Data_006_4BF0(void) {
    /* data: db $06, $07, $00, $01, $04, $05, $02, $03 */;
}

void Data_006_4BF8(void) {
    /* data: db $10, $10, $F4, $0C, $F0, $F0, $F4, $0C */;
}

void Data_006_4C00(void) {
    /* data: db $F4, $0C, $10, $10, $F4, $0C, $F0, $F0 */;
}

void Data_006_4C08(void) {
    /* data: db $80, $80, $80, $7F, $7F, $7F, $80, $7F */;
}

void Data_006_4C10(void) {
    /* data: db $80, $7F, $80, $80, $80, $7F, $7F, $7F */;
}

void Data_006_4C18(void) {
    /* data: db $00, $02, $00, $01, $01, $03, $02, $03 */;
}

void CueBallState0Handler(void) {
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_4C4F(); return; };
    func_006_4C59();
    IncrementEntityState();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  CueBallState0Handler_jr_4C32:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x58);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto CueBallState0Handler_jr_4C4C;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  CueBallState0Handler_jr_4C4C:;
    ClearEntitySpeed(); return;
}

void jr_006_4C4F(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { func_006_4C59(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_006_4C83(); return; };
    return;
}

void func_006_4C59(void) {
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { jr_006_4C78(); return; };
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) { jr_006_4C78(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x28);
    if (GET_FLAG_C()) goto func_006_4C59_jr_4C73;
    alu_cp8(gb.regs.a, 0x68);
    if (GET_FLAG_C()) { func_006_4C91(); return; };
  func_006_4C59_jr_4C73:;
    gb.regs.a = gb_read(0xFFEF);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_006_4C7B(); return;
}

void jr_006_4C78(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_4C7B(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x15);
    ClearEntitySpeed(); return;
}

void jr_006_4C83(void) {
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
}

void func_006_4C91(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4BE8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4BEC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4BF0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { ret_006_4D3A(); return; };
    gb.regs.a = 0x2F;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = 1;
  func_006_4C91_loop_4CCE:;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = 0x8E;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { ret_006_4D3A(); return; };
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.hl = 0xFFE8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x4BF8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4C00;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4C08;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4C10;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4C18;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto func_006_4C91_loop_4CCE;
}

void ret_006_4D3A(void) {
    return;
}

void CueBallState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto CueBallState1Handler_jr_4D51;
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 2);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  CueBallState1Handler_jr_4D51:;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto CueBallState1Handler_jr_4D5E;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
  CueBallState1Handler_jr_4D5E:;
    func_006_4C91();
    ClearEntitySpeed(); return;
}

void Data_006_4D64(void) {
    /* data: db $F8, $F8, $60, $02, $F8, $00, $62, $02, $F8, $08, $62, $22, $F8, $10, $60, $22 */;
    /* data: db $08, $F8, $64, $02, $08, $00, $66, $02, $08, $08, $66, $22, $08, $10, $64, $22 */;
    /* data: db $FA, $F8, $60, $02, $FA, $00, $62, $02, $FA, $08, $62, $22, $FA, $10, $60, $22 */;
    /* data: db $08, $F8, $64, $02, $08, $00, $66, $02, $08, $08, $66, $22, $08, $10, $64, $22 */;
    /* data: db $F8, $F8, $64, $42, $F8, $00, $66, $42, $F8, $08, $66, $62, $F8, $10, $64, $62 */;
    /* data: db $08, $F8, $60, $42, $08, $00, $62, $42, $08, $08, $62, $62, $08, $10, $60, $62 */;
    /* data: db $F8, $F8, $64, $42, $F8, $00, $66, $42, $F8, $08, $66, $62, $F8, $10, $64, $62 */;
    /* data: db $06, $F8, $60, $42, $06, $00, $62, $42, $06, $08, $62, $62, $06, $10, $60, $62 */;
    /* data: db $F8, $F8, $68, $02, $F8, $00, $6A, $02, $F8, $08, $62, $22, $F8, $10, $60, $22 */;
    /* data: db $08, $F8, $68, $42, $08, $00, $6A, $42, $08, $08, $62, $62, $08, $10, $60, $62 */;
    /* data: db $F8, $F8, $68, $02, $F8, $00, $6A, $02, $F8, $06, $62, $22, $F8, $0E, $60, $22 */;
    /* data: db $08, $F8, $68, $42, $08, $00, $6A, $42, $08, $06, $62, $62, $08, $0E, $60, $62 */;
    /* data: db $F8, $F8, $60, $02, $F8, $00, $62, $02, $F8, $08, $6A, $22, $F8, $10, $68, $22 */;
    /* data: db $08, $F8, $60, $42, $08, $00, $62, $42, $08, $08, $6A, $62, $08, $10, $68, $62 */;
    /* data: db $F8, $FA, $60, $02, $F8, $02, $62, $02, $F8, $08, $6A, $22, $F8, $10, $68, $22 */;
    /* data: db $08, $FA, $60, $42, $08, $02, $62, $42, $08, $08, $6A, $62, $08, $10, $68, $62 */;
}

void func_006_4E64(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4D64;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect(); return;
}

void CueBallSpriteVariants(void) {
  CueBallSpriteVariants_variant0:;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  CueBallSpriteVariants_variant1:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  CueBallSpriteVariants_variant2:;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
  CueBallSpriteVariants_variant3:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
}

void label_006_4E88(void) {
    gb.regs.de = 0x4EA0;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) return;
    UpdateEntityPosWithSpeed_06(); return;
}

void RaisableBlockSpriteVariants(void) {
    /* data: db $F8, OAM_GBC_PAL_0 | OAMF_PAL1 */;
    /* data: db $FA, OAM_GBC_PAL_0 | OAMF_PAL1 */;
}

void RaisableBlockShiftedRightEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto RaisableBlockShiftedRightEntityHandler_update;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    IncrementEntityState(); return;
  RaisableBlockShiftedRightEntityHandler_update:;
    gb.regs.de = 0x4EC5;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xFFBA);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto RaisableBlockShiftedRightEntityHandler_shoveLink;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RaisableBlockShiftedRightEntityHandler_moverNotGrabbed;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto RaisableBlockShiftedRightEntityHandler_return;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x11;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto RaisableBlockShiftedRightEntityHandler_return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  RaisableBlockShiftedRightEntityHandler_return:;
    return;
  RaisableBlockShiftedRightEntityHandler_moverNotGrabbed:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RaisableBlockShiftedRightEntityHandler_onGround;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto RaisableBlockShiftedRightEntityHandler_shoveLink;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  RaisableBlockShiftedRightEntityHandler_shoveLink:;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto RaisableBlockShiftedRightEntityHandler_shoveLinkEnd;
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) return;
    gb.regs.a = 8;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x10;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFF9A, gb.regs.a);
  RaisableBlockShiftedRightEntityHandler_shoveLinkEnd:;
    return;
  RaisableBlockShiftedRightEntityHandler_onGround:;
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) return;
    PushLinkOutOfEntity_06_forcePush(); return;
}

void RaisableBlockShiftedDownEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { RaisableBlockShiftedRightEntityHandler_update(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    IncrementEntityState(); return;
}

void HardHatBeetleSpriteVariants(void) {
  HardHatBeetleSpriteVariants_variant0:;
    /* data: db $44, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $44, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  HardHatBeetleSpriteVariants_variant1:;
    /* data: db $46, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $46, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void HardHatBeetleCaveBSpriteVariants(void) {
  HardHatBeetleCaveBSpriteVariants_variant0:;
    /* data: db $64, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $64, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  HardHatBeetleCaveBSpriteVariants_variant1:;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void HardHatBeetleEntityHandler(void) {
    gb.regs.de = 0x4F54;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto HardHatBeetleEntityHandler_render;
    gb.regs.de = 0x4F5C;
  HardHatBeetleEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { HardhatBeetleUpdateSpeed_return(); return; };
    GetRandomByte();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC250;
    HardhatBeetleUpdateSpeed();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto HardHatBeetleEntityHandler_noCollisionY;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  HardHatBeetleEntityHandler_noCollisionY:;
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC240;
    HardhatBeetleUpdateSpeed();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto HardHatBeetleEntityHandler_noCollisionX;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  HardHatBeetleEntityHandler_noCollisionX:;
    return;
}

void HardhatBeetleUpdateSpeed(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto HardhatBeetleUpdateSpeed_return;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto HardhatBeetleUpdateSpeed_positive;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    goto HardhatBeetleUpdateSpeed_return;
  HardhatBeetleUpdateSpeed_positive:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  HardhatBeetleUpdateSpeed_return:;
    return;
}

void Data_006_4FB0(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void Data_006_4FB4(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void HinoxEntityHandler(void) {
    func_006_52BA();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { label_006_5308(); return; };
    ReturnIfNonInteractive_06();
    BossIntro();
    ApplyRecoilIfNeeded_06();
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) goto HinoxEntityHandler_jr_4FD7;
    func_006_51B0();
  HinoxEntityHandler_jr_4FD7:;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto HinoxEntityHandler_jr_4FF1;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto HinoxEntityHandler_jr_4FF1;
    IncrementEntityState();
    gb_write(gb.regs.hl, 5);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    return;
  HinoxEntityHandler_jr_4FF1:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: HinoxState0Handler(); return;
        case 0x01: HinoxState1Handler(); return;
        case 0x02: HinoxState2Handler(); return;
        case 0x03: HinoxState3Handler(); return;
        case 0x04: HinoxState4Handler(); return;
        case 0x05: HinoxState5Handler(); return;
    }
}

void HinoxState1Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_006_501A(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto HinoxState1Handler_jr_5017;
    GetEntityDirectionToLink_06();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto HinoxState1Handler_jr_5017;
  HinoxState1Handler_jr_5017:;
    ApplyEntityInteractionWithBackground_trampoline(); return;
}

void jr_006_501A(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_006_501A_jr_5037;
    gb_write(gb.regs.hl, gb.regs.b);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_006_501A_jr_5037;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    return;
  jr_006_501A_jr_5037:;
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto jr_006_501A_jr_5058;
    GetEntityDirectionToLink_06();
    jr_006_505B(); return;
  jr_006_501A_jr_5058:;
    GetRandomByte();
}

void jr_006_505B(void) {
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4FB0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4FB4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void HinoxState0Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto HinoxState0Handler_jr_5085;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_006_5093(); return; };
  HinoxState0Handler_jr_5085:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    ClearEntitySpeed();
}

void jr_006_5093(void) {
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
}

void func_006_5099(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void HinoxState2Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_006_50BA(); return; };
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline();
}

void jr_006_50BA(void) {
    func_006_5099();
    func_006_5099();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto jr_006_50BA_ret_50CA;
    gb.regs.a = 0x20;
    gb_write(0xFFF2, gb.regs.a);
  jr_006_50BA_ret_50CA:;
    return;
}

void HinoxState3Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto HinoxState3Handler_jr_50D7;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  HinoxState3Handler_jr_50D7:;
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    GetEntityXDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto HinoxState3Handler_jr_5102;
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto HinoxState3Handler_jr_5102;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto HinoxState3Handler_jr_5102;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x4F);
    gb.regs.a = 0x16;
    gb_write(0xFFF3, gb.regs.a);
  HinoxState3Handler_jr_5102:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto HinoxState3Handler_jr_5117;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 0x0B;
    AddTranscientVfx();
  HinoxState3Handler_jr_5117:;
    jr_006_50BA(); return;
}

void Data_006_5119(void) {
    /* data: db $00, $00, $00, $00, $01, $01, $01, $01, $00, $00 */;
}

void Data_006_5123(void) {
    /* data: db $EF, $EF, $EF, $EF, $EF, $EF, $EF, $EF, $F3, $F7, $FB, $00 */;
}

void Data_006_512F(void) {
    /* data: db $15, $15, $15, $15, $15, $14, $14, $14, $10, $08, $04, $00 */;
}

void HinoxState4Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto HinoxState4Handler_jr_5145;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  HinoxState4Handler_jr_5145:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_006_5179(); return; };
    gb.regs.a = 0x20;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x50);
    gb.regs.a = 0xE0;
    if (!GET_FLAG_C()) goto HinoxState4Handler_jr_5157;
    gb.regs.a = 0x20;
  HinoxState4Handler_jr_5157:;
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFF99, gb.regs.a);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x50);
    return;
}

void jr_006_5179(void) {
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5119;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { ret_006_51BB(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5123;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0x512F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFA2, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFF99, gb.regs.a);
}

void func_006_51B0(void) {
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 0x6A;
    gb_write(0xFF9D, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
}

void ret_006_51BB(void) {
    return;
}

void HinoxState5Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto HinoxState5Handler_jr_51C9;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  HinoxState5Handler_jr_51C9:;
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) goto HinoxState5Handler_jr_51D0;
    gb.regs.e = alu_inc8(gb.regs.e);
  HinoxState5Handler_jr_51D0:;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto HinoxState5Handler_jr_51F6;
    gb.regs.a = 2;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto HinoxState5Handler_jr_51F6;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_sub8(gb.regs.a, 0);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    MadBomberState3Handler_throwBomb(); return;
  HinoxState5Handler_jr_51F6:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void Data_006_51FA(void) {
    /* data: db $F4, $F8, $60, $01, $F4, $00, $62, $01, $F4, $08, $64, $01, $F4, $10, $66, $01 */;
    /* data: db $04, $F8, $68, $01, $04, $00, $6A, $01, $04, $08, $6C, $01, $04, $10, $6E, $01 */;
    /* data: db $F4, $F8, $66, $21, $F4, $00, $64, $21, $F4, $08, $62, $21, $F4, $10, $60, $21 */;
    /* data: db $04, $F8, $6E, $21, $04, $00, $6C, $21, $04, $08, $6A, $21, $04, $10, $68, $21 */;
}

void Data_006_523A(void) {
    /* data: db $F4, $F8, $60, $02, $F4, $00, $62, $02, $F4, $08, $64, $02, $F4, $10, $66, $02 */;
    /* data: db $04, $F8, $68, $02, $04, $00, $6A, $02, $04, $08, $6C, $02, $04, $10, $6E, $02 */;
    /* data: db $F4, $F8, $66, $22, $F4, $00, $64, $22, $F4, $08, $62, $22, $F4, $10, $60, $22 */;
    /* data: db $04, $F8, $6E, $22, $04, $00, $6C, $22, $04, $08, $6A, $22, $04, $10, $68, $22 */;
}

void Data_006_527A(void) {
    /* data: db $F4, $F8, $60, $03, $F4, $00, $62, $03, $F4, $08, $64, $03, $F4, $10, $66, $03 */;
    /* data: db $04, $F8, $68, $03, $04, $00, $6A, $03, $04, $08, $6C, $03, $04, $10, $6E, $03 */;
    /* data: db $F4, $F8, $66, $23, $F4, $00, $64, $23, $F4, $08, $62, $23, $F4, $10, $60, $23 */;
    /* data: db $04, $F8, $6E, $23, $04, $00, $6C, $23, $04, $08, $6A, $23, $04, $10, $68, $23 */;
}

void func_006_52BA(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x527A;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto func_006_52BA_jr_52D8;
    gb.regs.hl = 0x523A;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto func_006_52BA_jr_52D8;
    gb.regs.hl = 0x51FA;
  func_006_52BA_jr_52D8:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect(); return;
}

void ArmosKnightEntityHandler(void) {
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { jr_006_52FF(); return; };
    gb.regs.e = 2;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto ArmosKnightEntityHandler_jr_52FB;
    gb.regs.e = 3;
  ArmosKnightEntityHandler_jr_52FB:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant();
}

void jr_006_52FF(void) {
    func_006_55B3();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_006_5361(); return; };
}

void label_006_5308(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: ArmosKnightPrivateState0Handler(); return;
        case 0x01: ArmosKnightPrivateState1Handler(); return;
        case 0x02: ArmosKnightPrivateState2Handler(); return;
        case 0x03: ArmosKnightPrivateState3Handler(); return;
    }
}

void ArmosKnightPrivateState0Handler(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityPrivateState2(); return;
}

void ArmosKnightPrivateState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0xC0);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityPrivateState2(); return;
}

void ArmosKnightPrivateState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_006_535D(); return; };
    gb.regs.a = 0x1A;
    gb_write(0xFFF4, gb.regs.a);
    label_27DD();
    DidKillEnemy();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x88);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x89);
    if (GET_FLAG_Z()) goto ArmosKnightPrivateState2Handler_jr_5355;
    alu_cp8(gb.regs.a, 0x8E);
    if (GET_FLAG_Z()) goto ArmosKnightPrivateState2Handler_jr_5355;
    alu_cp8(gb.regs.a, 0x92);
    if (!GET_FLAG_Z()) { jr_006_535A(); return; };
  ArmosKnightPrivateState2Handler_jr_5355:;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) return;
}

void jr_006_535A(void) {
    label_006_6CC9(); return;
}

void jr_006_535D(void) {
    func_006_700A(); return;
}

void ArmosKnightPrivateState3Handler(void) {
    return;
}

void jr_006_5361(void) {
    ReturnIfNonInteractive_06();
    BossIntro();
    label_3B70();
    PushLinkOutOfEntity_06();
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_006_5361_jr_5387;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  jr_006_5361_jr_5387:;
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) goto jr_006_5361_jr_5394;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 0x6A;
    gb_write(0xFF9D, gb.regs.a);
  jr_006_5361_jr_5394:;
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    if (GET_FLAG_Z()) { label_006_5411(); return; };
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) { label_006_5411(); return; };
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto jr_006_5361_jr_53D3;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { label_006_5411(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 5;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { label_006_5411(); return; };
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xFFDA;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    jr_006_53F9(); return;
  jr_006_5361_jr_53D3:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_C()) { label_006_5411(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 5;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { label_006_5411(); return; };
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 7);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xFFDA;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
}

void jr_006_53F9(void) {
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0F);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC4);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.a = 0x29;
    gb_write(0xFFF4, gb.regs.a);
}

void label_006_5411(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: ArmosKnightState0Handler(); return;
        case 0x01: ArmosKnightState1Handler(); return;
        case 0x02: ArmosKnightState2Handler(); return;
        case 0x03: ArmosKnightState3Handler(); return;
        case 0x04: ArmosKnightState4Handler(); return;
        case 0x05: ArmosKnightState5Handler(); return;
        case 0x06: ArmosKnightState6Handler(); return;
        case 0x07: ArmosKnightState7Handler(); return;
    }
}

void ArmosKnightState0Handler(void) {
    DecrementEntityIgnoreHitsCountdown();
    GetEntityXDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto ArmosKnightState0Handler_ret_5441;
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto ArmosKnightState0Handler_ret_5441;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
  ArmosKnightState0Handler_ret_5441:;
    return;
}

void ArmosKnightState1Handler(void) {
    DecrementEntityIgnoreHitsCountdown();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ArmosKnightState1Handler_jr_544F;
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState();
  ArmosKnightState1Handler_jr_544F:;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void ArmosKnightState2Handler(void) {
    DecrementEntityIgnoreHitsCountdown();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ArmosKnightState2Handler_jr_5476;
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
    return;
  ArmosKnightState2Handler_jr_5476:;
    gb.regs.e = 8;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto ArmosKnightState2Handler_jr_547E;
    gb.regs.e = 0xF8;
  ArmosKnightState2Handler_jr_547E:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    AddEntitySpeedToPos_06(); return;
}

void ArmosKnightState3Handler(void) {
    ApplyRecoilIfNeeded_06();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ArmosKnightState3Handler_jr_549C;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
    gb.regs.a = 0x24;
    gb_write(0xFFF2, gb.regs.a);
    return;
  ArmosKnightState3Handler_jr_549C:;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_54BB(); return; };
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    gb.regs.a = 8;
    if (!GET_FLAG_C()) goto ArmosKnightState3Handler_jr_54B4;
    gb.regs.a = 0x0C;
  ArmosKnightState3Handler_jr_54B4:;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.a = 0x20;
    gb_write(0xFFF2, gb.regs.a);
}

void jr_006_54BB(void) {
    UpdateEntityPosWithSpeed_06(); return;
}

void ArmosKnightState4Handler(void) {
    ApplyRecoilIfNeeded_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xFE);
    if (!GET_FLAG_Z()) goto ArmosKnightState4Handler_jr_54D5;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    ClearEntitySpeed();
    IncrementEntityState();
  ArmosKnightState4Handler_jr_54D5:;
    UpdateEntityPosWithSpeed_06(); return;
}

void ArmosKnightState5Handler(void) {
    ApplyRecoilIfNeeded_06();
    GetEntityTransitionCountdown();
    gb.regs.a = 0;
    if (!GET_FLAG_Z()) goto ArmosKnightState5Handler_jr_54E7;
    IncrementEntityState();
    gb.regs.a = 0xB0;
  ArmosKnightState5Handler_jr_54E7:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void ArmosKnightState6Handler(void) {
    ApplyRecoilIfNeeded_06();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 0x30;
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xC158, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFF2, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ArmosKnightState6Handler_jr_5512;
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x40);
  ArmosKnightState6Handler_jr_5512:;
    IncrementEntityState(); return;
}

void ArmosKnightState7Handler(void) {
    ApplyRecoilIfNeeded_06();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ArmosKnightState7Handler_ret_5522;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
  ArmosKnightState7Handler_ret_5522:;
    return;
}

void Data_006_5523(void) {
    /* data: db $F4, $F8, $70, $03, $F4, $00, $72, $03, $F4, $08, $72, $23, $F4, $10, $70, $23 */;
    /* data: db $04, $F8, $74, $03, $04, $00, $76, $03, $04, $08, $7A, $03, $04, $10, $7A, $23 */;
    /* data: db $F4, $F8, $70, $02, $F4, $00, $78, $02, $F4, $08, $78, $22, $F4, $10, $70, $22 */;
    /* data: db $04, $F8, $74, $02, $04, $00, $76, $02, $04, $08, $7A, $02, $04, $10, $7A, $22 */;
    /* data: db $F4, $F8, $70, $02, $F4, $00, $72, $02, $F4, $08, $72, $22, $F4, $10, $70, $22 */;
    /* data: db $04, $F8, $74, $02, $04, $00, $76, $02, $04, $08, $76, $22, $04, $10, $74, $22 */;
    /* data: db $F4, $F8, $7C, $02, $F4, $00, $7E, $02, $F4, $08, $7E, $22, $F4, $10, $7C, $22 */;
    /* data: db $04, $F8, $74, $02, $04, $00, $76, $02, $04, $08, $76, $22, $04, $10, $74, $22 */;
}

void Data_006_55A3(void) {
    /* data: db $0C, $FB, $26, $00, $0C, $01, $26, $00, $0C, $07, $26, $00, $0C, $0D, $26, $00 */;
}

void func_006_55B3(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5523;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_006_55B3_jr_55E0;
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x55A3;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
  func_006_55B3_jr_55E0:;
    CopyEntityPositionToActivePosition(); return;
}

void Data_006_55E3(void) {
    /* data: db $00, $04 */;
}

void Data_006_55E5(void) {
    /* data: db $FC, $08, $F8 */;
}

void DesertLanmolaEntityHandler(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_006_5988(); return; };
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) { jr_006_5611(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x50;
    gb_write(0xFFB0, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
    gb.regs.e = 0;
    gb.regs.a = 0xFF;
    gb.regs.hl = 0xD480;
  DesertLanmolaEntityHandler_loop_560D:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto DesertLanmolaEntityHandler_loop_560D;
}

void jr_006_5611(void) {
    func_006_58C9();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { label_006_56C8(); return; };
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_006_5629(); return;
        case 0x01: func_006_563A(); return;
        case 0x02: func_006_564B(); return;
        case 0x03: func_006_56C7(); return;
    }
}

void func_006_5629(void) {
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
}

void IncrementEntityPrivateState2(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void func_006_563A(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_006_563A_ret_564A;
    gb_write(gb.regs.hl, 0xCF);
    IncrementEntityPrivateState2();
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
  func_006_563A_ret_564A:;
    return;
}

void func_006_564B(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_006_564B_jr_568A;
    label_27DD();
    gb.regs.a = 0x30;
    SpawnNewEntity_trampoline();
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
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    ClearEntityStatus_06();
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    jr_006_56BB(); return;
  func_006_564B_jr_568A:;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) { ret_006_56C6(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x58C3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { ret_006_56C6(); return; };
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xD300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, 0xFF);
}

void jr_006_56BB(void) {
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.a = 0x13;
    gb_write(0xFFF4, gb.regs.a);
}

void ret_006_56C6(void) {
    return;
}

void func_006_56C7(void) {
    return;
}

void label_006_56C8(void) {
    ReturnIfNonInteractive_06();
    BossIntro();
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) { jr_006_5726(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_006_5726(); return; };
    gb.regs.a = 2;
  label_006_56C8_loop_56D9:;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = 0x87;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { jr_006_5726(); return; };
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xC1CD);
    gb.regs.hl = 0x55E3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x55E5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xC1CE);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xF0);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC1);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto label_006_56C8_loop_56D9;
}

void jr_006_5726(void) {
    func_006_594C();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto jr_006_5726_jr_5754;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 0xFF);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_006_5726_jr_5754:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_006_5773(); return;
        case 0x01: func_006_57A8(); return;
        case 0x02: func_006_57ED(); return;
        case 0x03: func_006_580C(); return;
        case 0x04: func_006_5835(); return;
        case 0x05: DesertLanmolaSpriteVariants(); return;
    }
}

void Data_006_5763(void) {
    /* data: db $28, $38, $48, $58, $68, $78, $88, $28 */;
}

void Data_006_576B(void) {
    /* data: db $30, $40, $50, $60, $70, $30, $40, $50 */;
}

void func_006_5773(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x18);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5763;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x576B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  func_006_5773_jr_579C:;
    gb_write(gb.regs.hl, gb.regs.a);
  func_006_5773_jr_579D:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    CopyEntityPositionToActivePosition();
    IncrementEntityState(); return;
}

void func_006_57A8(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_006_57E0(); return; };
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
  func_006_57A8_jr_57B2:;
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x58;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xC1CD, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xC1CE, gb.regs.a);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x61);
    IncrementEntityState();
}

void jr_006_57E0(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 5);
    SetEntitySpriteVariant(); return;
}

void func_006_57ED(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_006_57ED_jr_5803;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
  func_006_57ED_jr_5803:;
    UpdateEntityPosWithSpeed_06();
    AddEntityZSpeedToPos_06();
    DefaultEnemyDamageCollisionHandler_trampoline(); return;
}

void func_006_580C(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_006_580C_jr_5816;
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState();
  func_006_580C_jr_5816:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(0, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_006_582C(); return; };
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto func_006_580C_jr_582B;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_006_580C_jr_582B:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_006_582C(void) {
    UpdateEntityPosWithSpeed_06();
    AddEntityZSpeedToPos_06();
    DefaultEnemyDamageCollisionHandler_trampoline(); return;
}

void func_006_5835(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_006_5835_jr_5841;
    gb_write(gb.regs.hl, 0x60);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  func_006_5835_jr_5841:;
    alu_cp8(gb.regs.a, 0x78);
    if (!GET_FLAG_Z()) goto func_006_5835_jr_5858;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xC1CD, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xC1CE, gb.regs.a);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x60);
    gb.regs.a = 0x23;
    gb_write(0xFFF4, gb.regs.a);
  func_006_5835_jr_5858:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0xF4);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_006_5835_jr_5864;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_006_5835_jr_5864:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_006_5888(); return; };
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_5879(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_006_5835_jr_5878;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_006_5835_jr_5878:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_006_5879(void) {
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_5888(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_006_5879_jr_5887;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_006_5879_jr_5887:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_006_5888(void) {
    UpdateEntityPosWithSpeed_06();
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_006_5888_jr_589A;
    DefaultEnemyDamageCollisionHandler_trampoline();
  jr_006_5888_jr_589A:;
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void DesertLanmolaSpriteVariants(void) {
  DesertLanmolaSpriteVariants_variant0:;
    /* data: db $72, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $74, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  DesertLanmolaSpriteVariants_variant1:;
    /* data: db $74, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $72, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  DesertLanmolaSpriteVariants_variant2:;
    /* data: db $70, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  DesertLanmolaSpriteVariants_variant3:;
    /* data: db $70, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $70, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  DesertLanmolaSpriteVariants_variant4:;
    /* data: db $76, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  DesertLanmolaSpriteVariants_variant5:;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  DesertLanmolaSpriteVariants_variant6:;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  DesertLanmolaSpriteVariants_variant7:;
    /* data: db $78, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $78, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  DesertLanmolaSpriteVariants_variant8:;
    /* data: db $78, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $78, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Data_006_58C3(void) {
    /* data: db $0C, $18, $24, $30, $3C, $48 */;
}

void func_006_58C9(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_006_58C9_jr_58D8;
    gb.regs.de = 0x5885;
    RenderActiveEntitySpritesPair();
  func_006_58C9_jr_58D8:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_006_58C9_jr_58ED;
    gb.regs.a = 6;
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.a = 0;
    jr_006_58F3(); return;
  func_006_58C9_jr_58ED:;
    gb.regs.a = 0xFF;
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.a = 5;
}

void jr_006_58F3(void) {
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x58C3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0xFF);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xD300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEF, gb.regs.a);
    gb.regs.hl = 0xD480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_006_5936(); return; };
    gb.regs.a = gb_read(0xFFE8);
    alu_cp8(gb.regs.a, 5);
    gb.regs.a = 4;
    if (!GET_FLAG_Z()) goto jr_006_58F3_jr_592E;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 7);
  jr_006_58F3_jr_592E:;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x5885;
    RenderActiveEntitySpritesPair();
}

void jr_006_5936(void) {
    gb.regs.e = 0xFF;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto jr_006_5936_jr_5940;
    gb.regs.e = 1;
  jr_006_5936_jr_5940:;
    gb.regs.hl = 0xFFE9;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_006_58F3(); return; };
    CopyEntityPositionToActivePosition(); return;
}

void func_006_594C(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.a;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_006_594C_jr_5958;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_006_594C_jr_5958:;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_006_594C_jr_5964;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  func_006_594C_jr_5964:;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { jr_006_5973(); return; };
    alu_bit(7, gb.regs.d);
    if (!GET_FLAG_Z()) goto func_006_594C_jr_596F;
    gb.regs.a = 1;
    jr_006_597D(); return;
  func_006_594C_jr_596F:;
    gb.regs.a = 0;
    jr_006_597D(); return;
}

void jr_006_5973(void) {
    alu_bit(7, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_006_5973_jr_597B;
    gb.regs.a = 2;
    jr_006_597D(); return;
  jr_006_5973_jr_597B:;
    gb.regs.a = 3;
}

void jr_006_597D(void) {
    SetEntitySpriteVariant(); return;
}

void Data_006_5980(void) {
    /* data: db $7C, $21, $7E, $21, $7C, $01, $7E, $01 */;
}

void label_006_5988(void) {
    gb.regs.de = 0x5980;
    RenderActiveEntitySprite();
    ReturnIfNonInteractive_06();
    UpdateEntityPosWithSpeed_06();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto label_006_5988_jr_59A2;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  label_006_5988_jr_59A2:;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) return;
    ClearEntityStatus_06(); return;
}

void YipYipSpriteVariants(void) {
  YipYipSpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  YipYipSpriteVariants_variant1:;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  YipYipSpriteVariants_variant2:;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  YipYipSpriteVariants_variant3:;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  YipYipSpriteVariants_variant4:;
    /* data: db $00, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $02, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  YipYipSpriteVariants_variant5:;
    /* data: db $04, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $06, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  YipYipSpriteVariants_variant6:;
    /* data: db $02, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $00, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  YipYipSpriteVariants_variant7:;
    /* data: db $06, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $04, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void YipYipWithRibbonSpriteVariants(void) {
  YipYipWithRibbonSpriteVariants_variant0:;
    /* data: db $78, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  YipYipWithRibbonSpriteVariants_variant1:;
    /* data: db $7C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  YipYipWithRibbonSpriteVariants_variant2:;
    /* data: db $7A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $78, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  YipYipWithRibbonSpriteVariants_variant3:;
    /* data: db $7E, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $7C, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  YipYipWithRibbonSpriteVariants_variant4:;
    /* data: db $10, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $12, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  YipYipWithRibbonSpriteVariants_variant5:;
    /* data: db $14, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $16, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  YipYipWithRibbonSpriteVariants_variant6:;
    /* data: db $12, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $10, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  YipYipWithRibbonSpriteVariants_variant7:;
    /* data: db $16, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $14, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void YipYipEntityHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto YipYipEntityHandler_jr_006_5A0D;
    gb.regs.a = gb_read(0xC173);
    /* cp_dialog_low Dialog182 */;
    if (GET_FLAG_Z()) goto YipYipEntityHandler_jr_006_5A0D;
    GetEntityXDistanceToLink_06();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    ClearEntitySpeed();
    gb.regs.a = gb_read(0xC170);
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto YipYipEntityHandler_jr_5A0A;
    gb.regs.e = alu_inc8(gb.regs.e);
  YipYipEntityHandler_jr_5A0A:;
    gb.regs.a = gb.regs.e;
    gb_write(0xFFF1, gb.regs.a);
  YipYipEntityHandler_jr_006_5A0D:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto YipYipEntityHandler_jr_5A1B;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xFFF1, gb.regs.a);
  YipYipEntityHandler_jr_5A1B:;
    gb.regs.de = 0x598F;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto YipYipEntityHandler_useRibbonVariant;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB2);
    if (!GET_FLAG_Z()) goto YipYipEntityHandler_ribbonEnd;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) goto YipYipEntityHandler_ribbonEnd;
  YipYipEntityHandler_useRibbonVariant:;
    gb.regs.de = 0x59AF;
  YipYipEntityHandler_ribbonEnd:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto YipYipEntityHandler_jr_5A43;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFFF1, gb.regs.a);
  YipYipEntityHandler_jr_5A43:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    DecrementEntityIgnoreHitsCountdown();
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto YipYipEntityHandler_jr_5A67;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  YipYipEntityHandler_jr_5A67:;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { jr_006_5A98(); return; };
    CheckLinkInteractionWithEntity_06();
    if (!GET_FLAG_C()) { jr_006_5A98(); return; };
    /* ld_dialog_low e, Dialog023 */;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB2);
    if (!GET_FLAG_Z()) goto YipYipEntityHandler_openDialogInTable0;
    /* ld_dialog_low e, Dialog180 */;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto YipYipEntityHandler_openDialogInTable1;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    /* ld_dialog_low e, Dialog181 */;
  YipYipEntityHandler_openDialogInTable1:;
    gb.regs.a = gb.regs.e;
    OpenDialogInTable1();
    func_006_5ACC(); return;
  YipYipEntityHandler_openDialogInTable0:;
    gb.regs.a = gb.regs.e;
    OpenDialogInTable0();
    func_006_5ACC();
}

void jr_006_5A98(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: YipYipState0Handler(); return;
        case 0x01: YipYipState1Handler(); return;
        case 0x02: YipYipState2Handler(); return;
        case 0x03: YipYipState3Handler(); return;
    }
}

void YipYipState2Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_006_5AD0(); return; };
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto YipYipState2Handler_jr_5AC3;
    gb.regs.a = 3;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
    /* call_open_dialog Dialog183 */;
    func_006_5ACC();
    IncrementEntityState(); return;
  YipYipState2Handler_jr_5AC3:;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    /* call_open_dialog Dialog184 */;
}

void func_006_5ACC(void) {
    gb.regs.a = 0x18;
    gb_write(0xFFF3, gb.regs.a);
}

void ret_006_5AD0(void) {
    return;
}

void YipYipState3Handler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto YipYipState3Handler_ret_5ADE;
    CreateTradingItemEntity();
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  YipYipState3Handler_ret_5ADE:;
    return;
}

void Data_006_5ADF(void) {
    /* data: db $02, $08, $0C, $08, $FE, $F8, $F4, $F8 */;
}

void YipYipState0Handler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto YipYipState0Handler_jr_5B27;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5ADF;
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
    gb.regs.hl = 0x5ADF;
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
  YipYipState0Handler_jr_5B27:;
    label_006_5B4C(); return;
}

void YipYipState1Handler(void) {
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_006_5B4C(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto YipYipState1Handler_jr_5B41;
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  YipYipState1Handler_jr_5B41:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void label_006_5B4C(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void MadamMeowMeowSpriteVariants(void) {
  MadamMeowMeowSpriteVariants_variant0:;
    /* data: db $60, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MadamMeowMeowSpriteVariants_variant1:;
    /* data: db $62, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $60, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MadamMeowMeowSpriteVariants_variant2:;
    /* data: db $64, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MadamMeowMeowSpriteVariants_variant3:;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MadamMeowMeowSpriteVariants_variant4:;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MadamMeowMeowSpriteVariants_variant5:;
    /* data: db $6C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MadamMeowMeowSpriteVariants_variant6:;
    /* data: db $6A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MadamMeowMeowSpriteVariants_variant7:;
    /* data: db $6E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void MadamMeowMeowEntityHandler(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto MadamMeowMeowEntityHandler_jr_5B83;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0xFF;
    gb_write(0xDC3B, gb.regs.a);
  MadamMeowMeowEntityHandler_jr_5B83:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto MadamMeowMeowEntityHandler_jr_5B91;
    GetEntityDirectionToLink_06();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
  MadamMeowMeowEntityHandler_jr_5B91:;
    SetEntityVariantForDirection_06();
    gb.regs.de = 0x5B33;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_006_5BC4(); return; };
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MadamMeowMeowEntityHandler_jr_5BB6;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_006_5BC4(); return; };
  MadamMeowMeowEntityHandler_jr_5BB6:;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) { jr_006_5BC4(); return; };
    gb_write(gb.regs.hl, 0x10);
}

void jr_006_5BC4(void) {
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFFEC, gb.regs.a);
    PushLinkOutOfEntity_06();
    CopyEntityPositionToActivePosition();
    CheckLinkInteractionWithEntity_06();
    if (!GET_FLAG_C()) return;
    /* ld_dialog_low e, Dialog130 */;
    gb.regs.a = gb_read(0xDC0E);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto jr_006_5BC4_jr_5BF2;
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_006_5BC4_jr_5BF2;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDBFE, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    /* ld_dialog_low e, Dialog12F */;
    goto jr_006_5BC4_loadDialogIndex;
  jr_006_5BC4_jr_5BF2:;
    gb.regs.a = gb_read(0xDBFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_006_5BC4_loadDialogIndex;
    /* ld_dialog_low e, Dialog131 */;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_006_5BC4_loadDialogIndex;
    /* ld_dialog_low e, Dialog132 */;
  jr_006_5BC4_loadDialogIndex:;
    gb.regs.a = gb.regs.e;
    label_006_5C04(); return;
}

void label_006_5C04(void) {
    gb.regs.a = gb.regs.e;
    OpenDialogInTable1();
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    return;
}

void GrandpaUlriraEntityHandler(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 0x49;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.a = 8;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl++;
    gb.regs.a = 0x0A;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    func_006_5C71();
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    PushLinkOutOfEntity_06();
    CheckLinkInteractionWithEntity_06();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBFD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GrandpaUlriraEntityHandler_jr_5C4C;
    gb.regs.a = 1;
    gb_write(0xDBFD, gb.regs.a);
  GrandpaUlriraEntityHandler_jr_5C4C:;
    /* jp_open_dialog Dialog140 */;
}

void Data_006_5C51(void) {
    /* data: db $F7, $00, $70, $02, $F7, $08, $72, $02, $07, $00, $74, $02, $07, $08, $76, $02 */;
    /* data: db $F7, $00, $78, $02, $F7, $08, $7A, $02, $07, $00, $7C, $02, $07, $08, $7E, $02 */;
}

void func_006_5C71(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5C51;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline(); return;
}

void CrowSpriteVariants(void) {
  CrowSpriteVariants_variant0:;
    /* data: db $50, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  CrowSpriteVariants_variant1:;
    /* data: db $54, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $56, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  CrowSpriteVariants_variant2:;
    /* data: db $52, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $50, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  CrowSpriteVariants_variant3:;
    /* data: db $56, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $54, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void CrowEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x58);
    if (!GET_FLAG_Z()) { jr_006_5CBE(); return; };
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) goto CrowEntityHandler_jr_5CAB;
    gb.regs.a = alu_srl(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  CrowEntityHandler_jr_5CAB:;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x3C);
}

void jr_006_5CBE(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_006_5CBE_jr_5CCC;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xFFF1, gb.regs.a);
  jr_006_5CBE_jr_5CCC:;
    gb.regs.de = 0x5C5C;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_006_5CBE_jr_5CE5;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF0, gb.regs.a);
  jr_006_5CBE_jr_5CE5:;
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_dec8(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: CrowState0Handler(); return;
        case 0x01: CrowState1Handler(); return;
        case 0x02: CrowState2Handler(); return;
        case 0x03: CrowState3Handler(); return;
    }
}

void CrowState0Handler(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x58);
    if (!GET_FLAG_Z()) { label_006_5D8A(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.de = 0;
}

void jr_006_5D0F(void) {
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { jr_006_5D4F(); return; };
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_5D4F(); return; };
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x22);
    if (!GET_FLAG_C()) { jr_006_5D4F(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.l = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.l);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_006_5D0F_jr_5D37;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  jr_006_5D0F_jr_5D37:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { jr_006_5D4F(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.l = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.l);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_006_5D0F_jr_5D49;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  jr_006_5D0F_jr_5D49:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { jr_006_5D4F(); return; };
    jr_006_5D9F(); return;
}

void jr_006_5D4F(void) {
    gb.regs.de++;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_006_5D0F(); return; };
    gb.regs.a = gb_read(0xC50C);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) return;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x28);
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) return;
    jr_006_5D9F(); return;
}

void label_006_5D8A(void) {
    GetEntityXDistanceToLink_06();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) return;
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) return;
}

void jr_006_5D9F(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x12);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x22);
    IncrementEntityState(); return;
}

void CrowState1Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto CrowState1Handler_jr_5DBA;
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState(); return;
  CrowState1Handler_jr_5DBA:;
    ClearEntitySpeed();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    AddEntityZSpeedToPos_06();
    jr_006_5E08(); return;
}

void CrowState2Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { IncrementEntityState(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { func_006_5E02(); return; };
    gb.regs.a = 0x20;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto CrowState2Handler_jr_5DE7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  CrowState2Handler_jr_5DE7:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto CrowState2Handler_jr_5DF5;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  CrowState2Handler_jr_5DF5:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void func_006_5E02(void) {
    UpdateEntityPosWithSpeed_06();
    func_006_5E14();
}

void jr_006_5E08(void) {
    func_006_5E14();
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void func_006_5E14(void) {
    PlayBoomerangSfx_trampoline(); return;
}

void CrowState3Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_006_5E51(); return; };
    gb.regs.a = 0x20;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto CrowState3Handler_jr_5E34;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  CrowState3Handler_jr_5E34:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFD8);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto CrowState3Handler_jr_5E44;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  CrowState3Handler_jr_5E44:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_5E51(void) {
    func_006_5E02();
}

void func_006_5E54(void) {
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) { ClearEntityStatus_06(); return; };
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xA8);
    if (!GET_FLAG_C()) { ClearEntityStatus_06(); return; };
    return;
}

void CrazyTracySpriteAttributes(void) {
  CrazyTracySpriteAttributes__00:;
    /* data: db $00, $00, $64, $02, $00, $08, $66, $02, $10, $00, $68, $02, $10, $08, $6A, $02 */;
  CrazyTracySpriteAttributes__01:;
    /* data: db $00, $00, $60, $02, $00, $08, $62, $02, $10, $00, $68, $02, $10, $08, $6A, $02 */;
  CrazyTracySpriteAttributes__02:;
    /* data: db $00, $00, $66, $22, $00, $08, $64, $22, $10, $00, $6A, $22, $10, $08, $68, $22 */;
}

void MedicineSpriteAttributes(void) {
    /* data: db $A0, $14 */;
}

void CrazyTracyEntityHandler(void) {
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.a = 0x0A;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 0x28;
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto CrazyTracyEntityHandler_gotMedicineEnd;
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xC145);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 0x6C;
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
    gb.regs.de = 0x5E3F;
    RenderActiveEntitySprite();
    CopyEntityPositionToActivePosition();
  CrazyTracyEntityHandler_gotMedicineEnd:;
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) goto CrazyTracyEntityHandler_turnHeadEnd;
    gb.regs.e = 1;
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_C()) goto CrazyTracyEntityHandler_turnHeadEnd;
    gb.regs.e = 2;
  CrazyTracyEntityHandler_turnHeadEnd:;
    gb.regs.a = gb.regs.e;
    gb_write(0xFFF1, gb.regs.a);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5E3F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition();
    ReturnIfNonInteractive_06();
    PushLinkOutOfEntity_06();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: CrazyTracyGreetingHandler(); return;
        case 0x01: CrazyTracyProposingPriceHandler(); return;
        case 0x02: CrazyTracySellingHandler(); return;
        case 0x03: CrazyTracyDialogResponseHandler(); return;
        case 0x04: CrazyTracyBonusHandler(); return;
    }
}

void ShouldLinkTalkToTracy(void) {
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x28);
    alu_cp8(gb.regs.a, 0x50);
    CheckLinkInteractionWithEntity_06_label_006_647E(); return;
}

void CrazyTracyGreetingHandler(void) {
    ShouldLinkTalkToTracy();
    if (!GET_FLAG_C()) return;
    /* call_open_dialog Dialog017 */;
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xD415);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xDC1D);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto CrazyTracyGreetingHandler_discountEnd;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  CrazyTracyGreetingHandler_discountEnd:;
    IncrementEntityState(); return;
}

void CrazyTracyProposingPriceHandler(void) {
    ShouldLinkTalkToTracy();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBB9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CrazyTracyProposingPriceHandler_giveMedicinePriceEnd;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    /* ld_dialog_low a, Dialog018 */;
    if (GET_FLAG_Z()) goto CrazyTracyProposingPriceHandler_priceEnd;
    /* ld_dialog_low a, Dialog019 */;
  CrazyTracyProposingPriceHandler_priceEnd:;
    OpenDialogInTable0();
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    IncrementEntityState(); return;
  CrazyTracyProposingPriceHandler_giveMedicinePriceEnd:;
    /* call_open_dialog Dialog01C */;
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    return;
}

void MedicinePriceCharacters(void) {
    /* data: db $28, $42, $07, $07 */;
}

void Data_006_5F85(void) {
    /* data: db $00, $00, $00, $00 */;
}

void MedicinePriceDecimal(void) {
    /* data: db 28, 42, 7, 7 */;
}

void Data_006_5F8D(void) {
    /* data: db $00, $00, $00, $00 */;
}

void CrazyTracySellingHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { CrazyTracySellingHandler_return(); return; };
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CrazyTracySellingHandler_refusedMedicine;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5F85;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x5F0B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xDC06);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.a = gb_read(0xDC05);
    gb.regs.a = alu_sbc8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto CrazyTracySellingHandler_jr_006_5FBD;
    gb.regs.a = 0x1B;
    CrazyTracySellingHandler_openFinalDialog(); return;
  CrazyTracySellingHandler_jr_006_5FBD:;
    gb.regs.a = gb_read(0xDC1D);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb_write(0xDC1D, gb.regs.a);
    if (!GET_FLAG_Z()) goto CrazyTracySellingHandler_buy;
    /* call_open_dialog Dialog01E */;
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    IncrementEntityState(); return;
  CrazyTracySellingHandler_buy:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5F13;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xDC3A);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xDC3A, gb.regs.a);
    gb.regs.a = alu_rl(gb.regs.a);
    gb.regs.hl = 0x5F8D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_rr(gb.regs.a);
    gb.regs.a = gb_read(0xDC39);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xDC39, gb.regs.a);
    gb.regs.hl = 0xDBB9;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x1A;
    CrazyTracySellingHandler_openFinalDialog();
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 1;
    gb_write(0xFFF2, gb.regs.a);
    return;
  CrazyTracySellingHandler_refusedMedicine:;
    gb.regs.a = 0x1D;
  CrazyTracySellingHandler_openFinalDialog:;
    OpenDialogInTable0();
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  CrazyTracySellingHandler_return:;
    return;
}

void CrazyTracyDialogResponseHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CrazyTracyDialogResponseHandler_return;
    CrazyTracySellingHandler_buy(); return;
  CrazyTracyDialogResponseHandler_return:;
    return;
}

void CrazyTracyBonusHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_006_6048(); return; };
    gb.regs.a = gb_read(0xC5A9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CrazyTracyBonusHandler_fillHeartsEnd;
    gb.regs.a = 0xFF;
    gb_write(0xDC3B, gb.regs.a);
    /* call_open_dialog Dialog19A */;
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
  CrazyTracyBonusHandler_fillHeartsEnd:;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}

void jr_006_6048(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    return;
}

void Kid71SpriteVariants(void) {
  Kid71SpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Kid71SpriteVariants_variant1:;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  Kid71SpriteVariants_variant2:;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Kid71SpriteVariants_variant3:;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Kid72SpriteVariants(void) {
  Kid72SpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  Kid72SpriteVariants_variant1:;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  Kid72SpriteVariants_variant2:;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  Kid72SpriteVariants_variant3:;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Unknown019SpriteVariants(void) {
  Unknown019SpriteVariants_variant0:;
    /* data: db $78, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  Unknown019SpriteVariants_variant1:;
    /* data: db $7C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  Unknown019SpriteVariants_variant2:;
    /* data: db $7A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  Unknown019SpriteVariants_variant3:;
    /* data: db $7E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $7C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void KidBallSprite(void) {
    /* data: db $3E, $00 */;
}

void Kid71EntityHandler(void) {
}

void Kid72EntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto Kid72EntityHandler_notBall;
    gb.regs.de = 0x5FFC;
    RenderActiveEntitySprite();
    ReturnIfNonInteractive_06();
    UpdateEntityPosWithSpeed_06();
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
    return;
  Kid72EntityHandler_notBall:;
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { KidPlayingWithBall(); return; };
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { KidPlayingWithBall(); return; };
    gb.regs.de = 0x5FCC;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x72);
    if (!GET_FLAG_Z()) goto Kid72EntityHandler_render;
    gb.regs.de = 0x5FDC;
  Kid72EntityHandler_render:;
    RenderActiveEntitySpritesPair();
    GetEntityYDistanceToLink_06();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_xor8(gb.regs.a, 2);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: KidBowwowKidnapState0(); return;
        case 0x01: KidBowwowKidnapState1(); return;
        case 0x02: KidBowwowKidnapState2(); return;
    }
}

void KidBowwowKidnapState0(void) {
    ReturnIfNonInteractive_06();
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = 0x0E;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFB0, gb.regs.a);
    gb_write(0xFFBD, gb.regs.a);
}

void IncreasePrivateState3(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void KidBowwowKidnapState1(void) {
    ReturnIfNonInteractive_06();
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) goto KidBowwowKidnapState1_jr_6110;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) goto KidBowwowKidnapState1_moveTowardsLink;
  KidBowwowKidnapState1_jr_6110:;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x71);
    if (!GET_FLAG_Z()) goto KidBowwowKidnapState1_kid71End;
    /* call_open_dialog Dialog220 */;
  KidBowwowKidnapState1_kid71End:;
    IncreasePrivateState3(); return;
  KidBowwowKidnapState1_moveTowardsLink:;
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    UpdateEntityPosWithSpeed_06();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    return;
}

void KidBowwowKidnapState2(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFFEC, gb.regs.a);
    PushLinkOutOfEntity_06();
    CopyEntityPositionToActivePosition();
    CheckLinkInteractionWithEntity_06();
    if (!GET_FLAG_C()) goto KidBowwowKidnapState2_noTalking;
    /* call_open_dialog Dialog220 */;
  KidBowwowKidnapState2_noTalking:;
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto KidBowwowKidnapState2_jr_6161;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto KidBowwowKidnapState2_ret;
  KidBowwowKidnapState2_jr_6161:;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto KidBowwowKidnapState2_ret;
    gb_write(gb.regs.hl, 0x10);
  KidBowwowKidnapState2_ret:;
    return;
}

void KidPlayingWithBall(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x5FEC;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    func_006_6230();
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto KidPlayingWithBall_jr_619F;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  KidPlayingWithBall_jr_619F:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: KidWithBallState0(); return;
        case 0x01: KidWithBallState1(); return;
    }
}

void KidWithBallState0(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto KidWithBallState0_ret;
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState();
    gb.regs.a = 1;
    SetEntitySpriteVariant();
    gb.regs.a = 0x71;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto KidWithBallState0_ret;
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
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x71);
    gb.regs.a = 0x14;
    if (GET_FLAG_Z()) goto KidWithBallState0_throwRight;
    gb.regs.a = __14;
  KidWithBallState0_throwRight:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x24);
  KidWithBallState0_ret:;
    return;
}

void KidWithBallState1(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto KidWithBallState1_jr_61F8;
    gb_write(gb.regs.hl, 0x60);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  KidWithBallState1_jr_61F8:;
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) return;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto KidWithBallState1_noJump;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto KidWithBallState1_noJump;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
  KidWithBallState1_noJump:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void Kid70EntityHandler(void) {
}

void Kid73EntityHandler(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x92);
    if (!GET_FLAG_Z()) goto Kid73EntityHandler_jr_621C;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_C()) { ClearEntityStatus_06(); return; };
  Kid73EntityHandler_jr_621C:;
    gb.regs.de = 0x5FCC;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
}

void func_006_6230(void) {
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFFEC, gb.regs.a);
    PushLinkOutOfEntity_06();
    CopyEntityPositionToActivePosition();
    CheckLinkInteractionWithEntity_06();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto func_006_6230_jr_624F;
    gb.regs.a = gb_read(0xDC11);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    /* ld_dialog_low a, Dialog16F */;
    if (!GET_FLAG_Z()) { OpenDialogInTable1(); return; };
  func_006_6230_jr_624F:;
    gb.regs.a = gb_read(0xDC1C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_006_6230_jr_625A;
    /* jp_open_dialog Dialog123 */;
  func_006_6230_jr_625A:;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_006_6230_jr_6265;
    /* jp_open_dialog Dialog121 */;
  func_006_6230_jr_6265:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x92);
    if (!GET_FLAG_Z()) goto func_006_6230_jr_6277;
    gb.regs.a = gb_read(0xD9B2);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) goto func_006_6230_jr_6277;
    /* jp_open_dialog Dialog120 */;
  func_006_6230_jr_6277:;
    gb.regs.a = gb_read(0xDC0E);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto func_006_6230_jr_6290;
    gb.regs.a = gb_read(0xDB73);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto func_006_6230_jr_6290;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x83);
    if (!GET_FLAG_Z()) goto func_006_6230_jr_6290;
    /* jp_open_dialog Dialog122 */;
  func_006_6230_jr_6290:;
    gb.regs.hl = 0xDC26;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto func_006_6230_jr_629B;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_006_6230_jr_629B:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xDC0D);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_006_6230_jr_62A9;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    OpenDialogInTable1(); return;
  func_006_6230_jr_62A9:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = gb_read(0xFFEB);
    gb.regs.a = alu_sub8(gb.regs.a, 0x70);
    gb.regs.a = alu_add8(gb.regs.a, 0x1C);
    OpenDialogInTable1(); return;
}

void GiantGopongaFlowerEntityHandler(void) {
    func_006_6376();
    ReturnIfNonInteractive_06();
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    PushLinkOutOfEntity_06();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: GiantGopongaState0Handler(); return;
        case 0x01: GiantGopongaState1Handler(); return;
        case 0x02: GiantGopongaState2Handler(); return;
    }
}

void GiantGopongaState0Handler(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState(); return;
}

void GiantGopongaState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto GiantGopongaState1Handler_jr_62DD;
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState();
  GiantGopongaState1Handler_jr_62DD:;
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void GiantGopongaState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto GiantGopongaState2Handler_jr_62EF;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  GiantGopongaState2Handler_jr_62EF:;
    alu_cp8(gb.regs.a, 0x4A);
    if (!GET_FLAG_Z()) goto GiantGopongaState2Handler_jr_6311;
    gb.regs.a = 0x7D;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto GiantGopongaState2Handler_jr_6311;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x0C;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
  GiantGopongaState2Handler_jr_6311:;
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void Data_006_6316(void) {
    /* data: db $F8, $F8, $70, $02, $F8, $00, $72, $02, $F8, $08, $72, $22, $F8, $10, $70, $22 */;
    /* data: db $08, $F8, $74, $02, $08, $00, $76, $02, $08, $08, $76, $22, $08, $10, $74, $22 */;
    /* data: db $F9, $F9, $70, $02, $F9, $01, $72, $02, $F9, $07, $72, $22, $F9, $0F, $70, $22 */;
    /* data: db $07, $F9, $74, $02, $07, $01, $76, $02, $07, $07, $76, $22, $07, $0F, $74, $22 */;
    /* data: db $F8, $F8, $78, $02, $F8, $00, $7A, $02, $F8, $08, $7A, $22, $F8, $10, $78, $22 */;
    /* data: db $08, $F8, $7C, $02, $08, $00, $7E, $02, $08, $08, $7E, $22, $08, $10, $7C, $22 */;
}

void func_006_6376(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6316;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 8;
    func_015_7964_trampoline(); return;
}

void GopongaFlowerProjectileSpriteList(void) {
  GopongaFlowerProjectileSpriteList_variant0:;
    /* data: db $1E, $02 */;
    /* data: db $1E, $62 */;
  GopongaFlowerProjectileSpriteList_variant1:;
    /* data: db $1E, $42 */;
    /* data: db $1E, $22 */;
  GopongaFlowerProjectileSpriteList_variant2:;
    /* data: db $32, $00 */;
    /* data: db $32, $20 */;
  GopongaFlowerProjectileSpriteList_variant3:;
    /* data: db $30, $00 */;
    /* data: db $30, $20 */;
}

void GopongaProjectileEntityHandler(void) {
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GopongaProjectileEntityHandler_flashEnd;
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
  GopongaProjectileEntityHandler_flashEnd:;
    gb.regs.de = 0x62E9;
    RenderActiveEntitySpritesPair();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto GopongaProjectileEntityHandler_jr_63CE;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    SetEntitySpriteVariant(); return;
  GopongaProjectileEntityHandler_jr_63CE:;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto GopongaProjectileEntityHandler_jr_63DD;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    return;
  GopongaProjectileEntityHandler_jr_63DD:;
    gb_write(gb.regs.hl, gb.regs.b);
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_06();
    func_006_5E54(); return;
}

void GopongaFlowerSpriteVariants(void) {
  GopongaFlowerSpriteVariants_variant0:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  GopongaFlowerSpriteVariants_variant1:;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void GopongaFlowerEntityHandler(void) {
    gb.regs.de = 0x634E;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    PushLinkOutOfEntity_06();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.e = gb.regs.b;
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto GopongaFlowerEntityHandler_flipStateEnd;
    gb.regs.e = alu_inc8(gb.regs.e);
  GopongaFlowerEntityHandler_flipStateEnd:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void PushLinkOutOfEntity_06(void) {
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) { ret_006_643C(); return; };
  PushLinkOutOfEntity_06_forcePush:;
    CopyLinkFinalPositionToPosition();
    ResetPegasusBoots();
    gb.regs.a = gb_read(0xC1A6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_006_643C(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC39F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_006_643C(); return; };
    gb.regs.hl = 0xC28F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
}

void ret_006_643C(void) {
    return;
}

void EntityVariantForDirection_06(void) {
  EntityVariantForDirection_06_right:;
    /* data: db 6 */;
  EntityVariantForDirection_06_left:;
    /* data: db 4 */;
  EntityVariantForDirection_06_up:;
    /* data: db 2 */;
  EntityVariantForDirection_06_down:;
    /* data: db 0 */;
}

void SetEntityVariantForDirection_06(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x639B;
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

void CheckLinkInteractionWithEntity_06(void) {
    gb.regs.e = gb.regs.b;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x77);
    if (GET_FLAG_Z()) goto CheckLinkInteractionWithEntity_06_jr_006_6468;
    alu_cp8(gb.regs.a, 0x7B);
    if (!GET_FLAG_Z()) goto CheckLinkInteractionWithEntity_06_jr_006_6474;
  CheckLinkInteractionWithEntity_06_jr_006_6468:;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 0x2C);
    goto CheckLinkInteractionWithEntity_06_label_006_647E;
  CheckLinkInteractionWithEntity_06_jr_006_6474:;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 0x28);
  CheckLinkInteractionWithEntity_06_label_006_647E:;
    if (!GET_FLAG_C()) goto CheckLinkInteractionWithEntity_06_return;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto CheckLinkInteractionWithEntity_06_return;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x78);
    if (GET_FLAG_Z()) goto CheckLinkInteractionWithEntity_06_jr_006_649F;
    gb_push16(gb.regs.de);
    GetEntityDirectionToLink_06();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    gb.regs.de = gb_pop16();
    if (!GET_FLAG_Z()) goto CheckLinkInteractionWithEntity_06_return;
  CheckLinkInteractionWithEntity_06_jr_006_649F:;
    gb.regs.hl = 0xC1AD;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC134;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto CheckLinkInteractionWithEntity_06_return;
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto CheckLinkInteractionWithEntity_06_return;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto CheckLinkInteractionWithEntity_06_return;
    alu_scf();
    return;
  CheckLinkInteractionWithEntity_06_return:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void ReturnIfNonInteractive_06(void) {
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_06_skip;
  ReturnIfNonInteractive_06_allowInactiveEntity:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_06_skip;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_06_creditsEnd;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_06_skip;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_06_skip;
  ReturnIfNonInteractive_06_creditsEnd:;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_06_skip;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_06_return;
  ReturnIfNonInteractive_06_skip:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ReturnIfNonInteractive_06_return:;
    return;
}

void ApplyRecoilIfNeeded_06(void) {
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyRecoilIfNeeded_06_return;
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
    UpdateEntityPosWithSpeed_06();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto ApplyRecoilIfNeeded_06_restoreOriginalSpeed;
    ApplyEntityInteractionWithBackground_trampoline();
  ApplyRecoilIfNeeded_06_restoreOriginalSpeed:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ApplyRecoilIfNeeded_06_return:;
    return;
}

void UpdateEntityPosWithSpeed_06(void) {
    AddEntitySpeedToPos_06();
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.c = gb.regs.a;
    AddEntitySpeedToPos_06();
    gb.regs.bc = gb_pop16();
    return;
}

void AddEntitySpeedToPos_06(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_06_return;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC260;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC200;
  AddEntitySpeedToPos_06_updatePosition:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_06_positive;
    gb.regs.e = 0xF0;
  AddEntitySpeedToPos_06_positive:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  AddEntitySpeedToPos_06_return:;
    return;
}

void AddEntityZSpeedToPos_06(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { AddEntitySpeedToPos_06_return(); return; };
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC330;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC310;
    AddEntitySpeedToPos_06_updatePosition(); return;
}

void GetEntityXDistanceToLink_06(void) {
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityXDistanceToLink_06_positive;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityXDistanceToLink_06_positive:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityYDistanceToLink_06(void) {
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto GetEntityYDistanceToLink_06_negative;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityYDistanceToLink_06_negative:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityDirectionToLink_06(void) {
    GetEntityXDistanceToLink_06();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_06_positiveX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_06_positiveX:;
    gb_push16(gb.regs.af);
    GetEntityYDistanceToLink_06();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_06_positiveY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_06_positiveY:;
    gb.regs.de = gb_pop16();
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto GetEntityDirectionToLink_06_vertical;
    gb.regs.a = gb_read(0xFFD7);
    goto GetEntityDirectionToLink_06_verticalEnd;
  GetEntityDirectionToLink_06_vertical:;
    gb.regs.a = gb_read(0xFFD8);
  GetEntityDirectionToLink_06_verticalEnd:;
    gb.regs.e = gb.regs.a;
    return;
}

void ClearEntityStatus_06(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void WizrobeProjectileSpriteVariants(void) {
  WizrobeProjectileSpriteVariants_variant0:;
    /* data: db $6A, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  WizrobeProjectileSpriteVariants_variant1:;
    /* data: db $68, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  WizrobeProjectileSpriteVariants_variant2:;
    /* data: db $6C, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $6C, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  WizrobeProjectileSpriteVariants_variant3:;
    /* data: db $6C, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $6C, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void WizrobeProjectileEntityHandler(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.de = 0x654B;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    CheckLinkCollisionWithProjectile_trampoline();
    UpdateEntityPosWithSpeed_06();
    label_3B2E();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    ClearEntityStatus_06(); return;
}

void SparkSpriteVariants(void) {
  SparkSpriteVariants_variant0:;
    /* data: db $5C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $5C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  SparkSpriteVariants_variant1:;
    /* data: db $5C, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $5C, OAM_GBC_PAL_4 | OAMF_PAL1 | OAMF_XFLIP */;
}

void Data_006_661D(void) {
    /* data: db $00, $10, $00, $F0, $00, $F0, $00, $10 */;
}

void Data_006_6625(void) {
    /* data: db $10, $00, $F0, $00, $10, $00, $F0, $00 */;
}

void Data_006_662D(void) {
    /* data: db $01, $08, $02, $04, $01, $04, $02, $08 */;
}

void SparkClockwiseEntityHandler(void) {
}

void SparkCounterClockwiseEntityHandler(void) {
    gb.regs.a = 1;
    gb_write(0xFFBE, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x657F;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    label_3B44();
    UpdateEntityPosWithSpeed_06();
    func_006_66CC();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x662D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto SparkCounterClockwiseEntityHandler_jr_6685;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_006_6690(); return; };
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_006_669D(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 9);
    jr_006_669D(); return;
  SparkCounterClockwiseEntityHandler_jr_6685:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_006_669D(); return;
}

void jr_006_6690(void) {
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) { jr_006_669D(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_669D(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x661D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x6625;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void func_006_66CC(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl, 1);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void KeeseSpriteVariants(void) {
  KeeseSpriteVariants_variant0:;
    /* data: db $42, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $42, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  KeeseSpriteVariants_variant1:;
    /* data: db $40, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $40, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void KeeseCaveBSpriteVariants(void) {
  KeeseCaveBSpriteVariants_variant0:;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  KeeseCaveBSpriteVariants_variant1:;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void KeeseYSpeeds(void) {
    /* data: db $00, $05, $0A, $0D */;
}

void KeeseXSpeeds(void) {
    /* data: db $0E, $0D, $0A, $05, $00, $FB, $F6, $F3, $F2, $F3, $F6, $FB, $00, $05, $0A, $0D */;
}

void KeeseInitialSpeedIndexPerDirection(void) {
    /* data: db $0C, $04, $08, $00 */;
}

void KeeseEntityHandler(void) {
    gb.regs.de = 0x668D;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto KeeseEntityHandler_render;
    gb.regs.de = 0x6695;
  KeeseEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: KeeseRestingHandler(); return;
        case 0x01: KeeseFlyingHandler(); return;
    }
}

void KeeseRestingHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { AnimateKeese(); return; };
    GetEntityXDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) { AnimateKeese(); return; };
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) { AnimateKeese(); return; };
    GetEntityDirectionToLink_06();
    gb.regs.d = 0;
    gb.regs.hl = 0x66B1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x50);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    IncrementEntityState();
    AnimateKeese(); return;
}

void KeeseFlyingHandler(void) {
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto KeeseFlyingHandler_skipIncrementState;
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    AnimateKeese(); return;
  KeeseFlyingHandler_skipIncrementState:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) { AnimateKeese(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x669D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x66A1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) { AnimateKeese(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void AnimateKeese(void) {
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AnimateKeese_resting;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
  AnimateKeese_resting:;
    SetEntitySpriteVariant(); return;
}

void OwlEventEntityHandler(void) {
    gb.regs.a = gb.regs.c;
    gb_write(0xC501, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x64);
    if (!GET_FLAG_Z()) goto OwlEventEntityHandler_jr_680D;
    gb.regs.a = gb_read(0xDA98);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC11);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
  OwlEventEntityHandler_jr_680D:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xAC);
    if (!GET_FLAG_Z()) goto OwlEventEntityHandler_jr_681A;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
  OwlEventEntityHandler_jr_681A:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x41);
    if (!GET_FLAG_Z()) goto OwlEventEntityHandler_jr_6829;
    gb.regs.a = gb_read(0xDBBD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) return;
  OwlEventEntityHandler_jr_6829:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xEE);
    if (!GET_FLAG_Z()) goto OwlEventEntityHandler_jr_6835;
    gb.regs.a = gb_read(0xDBBE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    jr_006_689D(); return;
  OwlEventEntityHandler_jr_6835:;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xD2);
    if (GET_FLAG_Z()) goto OwlEventEntityHandler_jr_684E;
    alu_cp8(gb.regs.a, 0x36);
    if (!GET_FLAG_Z()) { jr_006_6853(); return; };
    gb.regs.a = gb_read(0xDC0E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
  OwlEventEntityHandler_jr_684E:;
    gb.regs.a = gb_read(0xDC0D);
    jr_006_689B(); return;
}

void jr_006_6853(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto jr_006_6853_jr_6869;
    gb.regs.a = gb_read(0xDC14);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
    gb.regs.a = gb_read(0xD8BD);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) return;
    jr_006_68A0(); return;
  jr_006_6853_jr_6869:;
    alu_cp8(gb.regs.a, 0x9D);
    if (!GET_FLAG_Z()) goto jr_006_6853_jr_6872;
    gb.regs.a = gb_read(0xDC11);
    jr_006_689B(); return;
  jr_006_6853_jr_6872:;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto jr_006_6853_jr_687E;
    gb.regs.a = gb_read(0xD8BB);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) return;
    jr_006_68A0(); return;
  jr_006_6853_jr_687E:;
    alu_cp8(gb.regs.a, 0xB6);
    if (!GET_FLAG_Z()) goto jr_006_6853_jr_6887;
    gb.regs.a = gb_read(0xDC0F);
    jr_006_689B(); return;
  jr_006_6853_jr_6887:;
    alu_cp8(gb.regs.a, 0x17);
    if (GET_FLAG_Z()) goto jr_006_6853_jr_688F;
    alu_cp8(gb.regs.a, 0x9C);
    if (!GET_FLAG_Z()) { jr_006_6894(); return; };
  jr_006_6853_jr_688F:;
    gb.regs.a = gb_read(0xDC12);
    jr_006_689B(); return;
}

void jr_006_6894(void) {
    alu_cp8(gb.regs.a, 0x16);
    if (!GET_FLAG_Z()) { jr_006_68A0(); return; };
    gb.regs.a = gb_read(0xDC0E);
}

void jr_006_689B(void) {
    gb.regs.a = alu_and8(gb.regs.a, 2);
}

void jr_006_689D(void) {
    if (GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
}

void jr_006_68A0(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xD2);
    if (GET_FLAG_Z()) goto jr_006_68A0_jr_68B4;
    alu_cp8(gb.regs.a, 0x16);
    if (GET_FLAG_Z()) goto jr_006_68A0_jr_68B4;
    alu_cp8(gb.regs.a, 0x36);
    if (GET_FLAG_Z()) goto jr_006_68A0_jr_68B4;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { jr_006_68B7(); return; };
  jr_006_68A0_jr_68B4:;
    func_006_6A4F();
}

void jr_006_68B7(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0xB0);
    gb.regs.a = 0;
    if (!GET_FLAG_Z()) goto jr_006_68B7_jr_68C0;
    gb.regs.a = alu_inc8(gb.regs.a);
  jr_006_68B7_jr_68C0:;
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: OwlState0Handler(); return;
        case 0x01: OwlState1Handler(); return;
        case 0x02: OwlState2Handler(); return;
        case 0x03: OwlState3Handler(); return;
        case 0x04: OwlState4Handler(); return;
    }
}

void OwlState0Handler(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xF2);
    if (!GET_FLAG_Z()) goto OwlState0Handler_jr_68EF;
    gb.regs.a = 0x1D;
    gb_write(0xFFB0, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x44);
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x58);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) return;
    jr_006_68F6(); return;
  OwlState0Handler_jr_68EF:;
    gb.regs.a = gb_read(0xDBFA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
}

void jr_006_68F6(void) {
    gb.regs.a = gb_read(0xFFB0);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x22;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFB0, gb.regs.a);
    gb_write(0xFFBD, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x16);
    if (GET_FLAG_Z()) goto jr_006_68F6_jr_6914;
    alu_cp8(gb.regs.a, 0x36);
    if (GET_FLAG_Z()) goto jr_006_68F6_jr_6914;
    alu_cp8(gb.regs.a, 0xD2);
    if (!GET_FLAG_Z()) { jr_006_691A(); return; };
  jr_006_68F6_jr_6914:;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    return;
}

void jr_006_691A(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    IncrementEntityState(); return;
}

void OwlState1Handler(void) {
    GetEntityDirectionToLink_06();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 5;
    gb_write(0xC111, gb.regs.a);
    func_006_69BD();
    UpdateEntityPosWithSpeed_06();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto OwlState1Handler_jr_6951;
    IncrementEntityState(); return;
  OwlState1Handler_jr_6951:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFC);
    AddEntityZSpeedToPos_06();
    PlayBoomerangSfx_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0;
    gb.regs.hl = 0xC250;
    func_006_6A2B();
    gb.regs.a = 0;
    gb.regs.hl = 0xC240;
    func_006_6A2B(); return;
}

void OwlState2Handler(void) {
    ReturnIfNonInteractive_06();
    PushLinkOutOfEntity_06();
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC17B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto OwlState2Handler_jr_6990;
    /* call_open_dialog Dialog0CD */;
    jr_006_6993(); return;
  OwlState2Handler_jr_6990:;
    label_2A07();
}

void jr_006_6993(void) {
    gb.regs.a = 0x19;
    gb_write(0xC5AB, gb.regs.a);
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    return;
}

void OwlState3Handler(void) {
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto OwlState3Handler_jr_69B2;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { func_006_69BD(); return; };
    IncrementEntityState();
  OwlState3Handler_jr_69B2:;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD8B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
    return;
}

void func_006_69BD(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    SetEntitySpriteVariant(); return;
}

void OwlState4Handler(void) {
    ReturnIfNonInteractive_06();
    func_006_69BD();
    UpdateEntityPosWithSpeed_06();
    func_006_5E54();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_006_6A05(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFB0, gb.regs.a);
    gb.regs.a = gb_read(0xD47C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto OwlState4Handler_return;
    gb.regs.a = 0x49;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFBD, gb.regs.a);
  OwlState4Handler_return:;
    return;
}

void jr_006_6A05(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto jr_006_6A05_jr_6A0F;
    gb.regs.a = 5;
    gb_write(0xFFF4, gb.regs.a);
  jr_006_6A05_jr_6A0F:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ret_006_6A36(); return; };
    gb.regs.a = 0x20;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC250;
    func_006_6A2B();
    gb.regs.a = gb_read(0xFFD8);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC240;
}

void func_006_6A2B(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { ret_006_6A36(); return; };
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_006_6A2B_jr_6A35;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_006_6A2B_jr_6A35:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void ret_006_6A36(void) {
    return;
}

void OwlEventSpriteVariants(void) {
  OwlEventSpriteVariants_variant0:;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  OwlEventSpriteVariants_variant1:;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Data_006_6A3F(void) {
    /* data: db $00, $F8, $7C, $01, $00, $00, $7E, $01 */;
    /* data: db $00, $08, $7E, $21, $00, $10, $7C, $21 */;
}

void func_006_6A4F(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { jr_006_6A5B(); return; };
}

void func_006_6A55(void) {
    gb.regs.de = 0x698B;
    RenderActiveEntitySpritesPair(); return;
}

void jr_006_6A5B(void) {
    gb.regs.hl = 0x6A3F;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto jr_006_6A5B_jr_6A71;
    label_3CD9(); return;
  jr_006_6A5B_jr_6A71:;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(4, gb_read(gb.regs.hl)));
    return;
}

void TelephoneSpriteVariants(void) {
  TelephoneSpriteVariants_variant0:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 */;
}

void TelephoneEntityHandler(void) {
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 5);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x69C9;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    CheckLinkInteractionWithEntity_06();
    if (!GET_FLAG_C()) return;
    /* ld_dialog_low e, Dialog1FD */;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xA9);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog16E */;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto TelephoneEntityHandler_jr_6AA9;
    gb.regs.a = gb_read(0xDC11);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
  TelephoneEntityHandler_jr_6AA9:;
    /* ld_dialog_low e, Dialog141 */;
    gb.regs.a = gb_read(0xDB5E);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog146 */;
    gb.regs.a = gb_read(0xDC0D);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog142 */;
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog143 */;
    gb.regs.a = gb_read(0xDC0E);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog144 */;
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable2;
    /* ld_dialog_low e, Dialog144 */;
    gb.regs.a = gb_read(0xDBFD);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog145 */;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) goto TelephoneEntityHandler_openDialogInTable1;
    gb.regs.a = gb_read(0xDBC1);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) goto TelephoneEntityHandler_jr_006_6B09;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto TelephoneEntityHandler_jr_6B02;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  TelephoneEntityHandler_jr_6B02:;
    /* ld_dialog_low e, Dialog228 */;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    goto TelephoneEntityHandler_openDialogInTable2;
  TelephoneEntityHandler_jr_006_6B09:;
    /* ld_dialog_low e, Dialog148 */;
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog149 */;
    gb.regs.a = gb_read(0xDC0F);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog14A */;
    gb.regs.a = gb_read(0xDBBE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog240 */;
    gb.regs.a = gb_read(0xDC10);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable2;
    gb.regs.a = gb_read(0xDC21);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_jr_6B3F;
    /* ld_dialog_low e, Dialog14B */;
    gb.regs.a = gb_read(0xDA98);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
  TelephoneEntityHandler_jr_6B3F:;
    /* ld_dialog_low e, Dialog14C */;
    gb.regs.a = gb_read(0xDC11);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog245 */;
    gb.regs.a = gb_read(0xDBF5);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable2;
    /* ld_dialog_low e, Dialog14D */;
    gb.regs.a = gb_read(0xDC12);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog14E */;
    gb.regs.a = gb_read(0xDC23);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_jr_6B6E;
    /* ld_dialog_low e, Dialog246 */;
    gb.regs.a = gb_read(0xDBC0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable2;
    /* ld_dialog_low e, Dialog241 */;
  TelephoneEntityHandler_jr_6B6E:;
    gb.regs.a = gb_read(0xDC13);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto TelephoneEntityHandler_jr_6B7C;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x4E);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    goto TelephoneEntityHandler_openDialogInTable2;
  TelephoneEntityHandler_jr_6B7C:;
    /* ld_dialog_low e, Dialog14F */;
    gb.regs.a = gb_read(0xD8C5);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable1;
    /* ld_dialog_low e, Dialog248 */;
    gb.regs.a = gb_read(0xDC14);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable2;
    /* ld_dialog_low e, Dialog242 */;
    gb.regs.a = gb_read(0xD8BB);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable2;
    /* ld_dialog_low e, Dialog243 */;
    gb.regs.a = gb_read(0xDB29);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto TelephoneEntityHandler_openDialogInTable2;
    /* ld_dialog_low e, Dialog247 */;
    gb.regs.a = gb_read(0xDBFA);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto TelephoneEntityHandler_openDialogInTable2;
    /* ld_dialog_low e, Dialog248 */;
    goto TelephoneEntityHandler_openDialogInTable2;
  TelephoneEntityHandler_openDialogInTable1:;
    gb.regs.a = gb.regs.e;
    OpenDialogInTable1();
    goto TelephoneEntityHandler_done;
  TelephoneEntityHandler_openDialogInTable2:;
    gb.regs.a = gb.regs.e;
    OpenDialogInTable2();
  TelephoneEntityHandler_done:;
    gb.regs.hl = 0xDB5E;
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
    return;
}

void ButterflyOAMAttributes(void) {
  ButterflyOAMAttributes__00:;
    /* data: db $5E, OAM_GBC_PAL_1 */;
  ButterflyOAMAttributes__01:;
    /* data: db $5E, OAM_GBC_PAL_1 | OAMF_YFLIP */;
}

void ButterflyPossibleSpeeds(void) {
    /* data: db $04, -$04, $03, -$03, $02, -$02, $05, -$06 */;
}

void ButterflyEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ButterflyEntityHandler_downwardsEnd;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0);
    gb_write(0xFFEC, gb.regs.a);
  ButterflyEntityHandler_downwardsEnd:;
    gb.regs.de = 0x6AE0;
    RenderActiveEntitySprite();
    ReturnIfNonInteractive_06();
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.hl = 0xFFE7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFF0, gb.regs.a);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_06();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto ButterflyEntityHandler_speedXEnd;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6AE0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  ButterflyEntityHandler_speedXEnd:;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto ButterflyEntityHandler_speedYEnd;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6AE0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  ButterflyEntityHandler_speedYEnd:;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto ButterflyEntityHandler_moveCloserToLinkEnd;
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xC50F);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto ButterflyEntityHandler_moveTowardsMarinEnd;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF99, gb.regs.a);
  ButterflyEntityHandler_moveTowardsMarinEnd:;
    gb.regs.a = 2;
    GetVectorTowardsLink_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  ButterflyEntityHandler_moveCloserToLinkEnd:;
    return;
}

void RollingBonesEntityHandler(void) {
    gb.regs.a = gb.regs.c;
    gb_write(0xD482, gb.regs.a);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto RollingBonesEntityHandler_jr_6C7B;
    gb.regs.a = 0x10;
    gb_write(0xFFF5, gb.regs.a);
  RollingBonesEntityHandler_jr_6C7B:;
    func_006_6E7E();
    BossIntro();
    label_394D();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_006_6CE8(); return; };
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_006_6C9A(); return;
        case 0x01: func_006_6CAB(); return;
    }
}

void func_006_6C9A(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void func_006_6CAB(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { label_006_6CBE(); return; };
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) goto func_006_6CAB_ret_6CBD;
    func_006_700A();
  func_006_6CAB_ret_6CBD:;
    return;
}

void label_006_6CBE(void) {
    label_27DD();
    DidKillEnemy();
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) return;
}

void label_006_6CC9(void) {
    gb.regs.hl = 0xD9B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto label_006_6CC9_jr_6CDB;
    gb.regs.hl = 0xDE88;
    jr_006_6CE4(); return;
  label_006_6CC9_jr_6CDB:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) { jr_006_6CE4(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) { jr_006_6CE4(); return; };
    gb.regs.d = alu_inc8(gb.regs.d);
}

void jr_006_6CE4(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
    return;
}

void jr_006_6CE8(void) {
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_6D0D(); return; };
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_006_6CE8_jr_6D08;
    gb.regs.e = 3;
  jr_006_6CE8_jr_6D08:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
}

void jr_006_6D0D(void) {
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* nop */;
    /* nop */;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_006_6D0D_jr_6D32;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, gb.regs.b);
    alu_cp8(gb.regs.a, 0xF2);
    if (!GET_FLAG_C()) goto jr_006_6D0D_jr_6D32;
    gb.regs.a = 0x20;
    gb_write(0xFFF2, gb.regs.a);
  jr_006_6D0D_jr_6D32:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: RollingBonesState0Handler(); return;
        case 0x01: RollingBonesState1Handler(); return;
        case 0x02: RollingBonesState2Handler(); return;
        case 0x03: RollingBonesState3Handler(); return;
    }
}

void RollingBonesState0Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = 8;
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto RollingBonesState0Handler_jr_6D55;
    gb.regs.e = 0xF8;
  RollingBonesState0Handler_jr_6D55:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto RollingBonesState0Handler_jr_6D68;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x18);
    IncrementEntityState(); return;
  RollingBonesState0Handler_jr_6D68:;
    AddEntitySpeedToPos_06();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RollingBonesState0Handler_jr_6D76;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
  RollingBonesState0Handler_jr_6D76:;
    gb.regs.a = 1;
    SetEntitySpriteVariant(); return;
}

void RollingBonesState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x10;
    if (!GET_FLAG_Z()) goto RollingBonesState1Handler_jr_6D8B;
    gb.regs.a = 0xF0;
  RollingBonesState1Handler_jr_6D8B:;
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void RollingBonesState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    IncrementEntityState(); return;
}

void RollingBonesState3Handler(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    gb.regs.a = 1;
    if (GET_FLAG_C()) goto RollingBonesState3Handler_jr_6DBC;
    gb.regs.a = alu_inc8(gb.regs.a);
  RollingBonesState3Handler_jr_6DBC:;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto RollingBonesState3Handler_jr_6DD4;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_6E04(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    return;
  RollingBonesState3Handler_jr_6DD4:;
    gb.regs.e = 0x10;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x19);
    gb.regs.a = gb_read(0xFFE9);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) goto RollingBonesState3Handler_jr_6DE6;
    gb.regs.e = 0x14;
    gb_write(gb.regs.hl, 0x16);
  RollingBonesState3Handler_jr_6DE6:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb.regs.e;
    if (!GET_FLAG_Z()) goto RollingBonesState3Handler_jr_6DF1;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  RollingBonesState3Handler_jr_6DF1:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x50);
    gb.regs.a = gb.regs.e;
    if (GET_FLAG_C()) goto RollingBonesState3Handler_jr_6DFF;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  RollingBonesState3Handler_jr_6DFF:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_6E04(void) {
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) return;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
    ClearEntitySpeed(); return;
}

void Data_006_6E1E(void) {
    /* data: db $00, $F8, $60, $06, $00, $00, $62, $06, $00, $08, $64, $06, $F0, $00, $6E, $26 */;
    /* data: db $00, $F8, $66, $06, $00, $00, $68, $06, $00, $08, $6A, $06, $F0, $00, $6E, $06 */;
    /* data: db $00, $F8, $66, $06, $00, $00, $68, $06, $00, $08, $6A, $06, $F0, $06, $6E, $26 */;
    /* data: db $00, $00, $64, $26, $00, $08, $62, $26, $00, $10, $60, $26, $F0, $08, $6E, $06 */;
    /* data: db $00, $00, $6A, $26, $00, $08, $68, $26, $00, $10, $66, $26, $F0, $08, $6E, $26 */;
    /* data: db $00, $00, $6A, $26, $00, $08, $68, $26, $00, $10, $66, $26, $F0, $02, $6E, $06 */;
}

void func_006_6E7E(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6E1E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x26;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x26;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    func_015_7964_trampoline(); return;
}

void RollingBonesSpriteVariants(void) {
  RollingBonesSpriteVariants_variant0:;
    /* data: db $6C, OAM_GBC_PAL_7 | OAMF_PAL0 */;
    /* data: db $6C, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
  RollingBonesSpriteVariants_variant1:;
    /* data: db $6C, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $6C, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
}

void Data_006_6EDD(void) {
    /* data: db $70, $60, $50, $40, $30, $20 */;
}

void RollingBonesBarEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto RollingBonesBarEntityHandler_jr_6EED;
    gb.regs.a = 0x10;
    gb_write(0xFFF5, gb.regs.a);
  RollingBonesBarEntityHandler_jr_6EED:;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
    gb.regs.a = gb.regs.c;
    gb_write(0xD481, gb.regs.a);
    func_006_6FEA();
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xD482);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
  RollingBonesBarEntityHandler_jr_6F03:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_006_6F48(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_006_6F47(); return; };
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.e = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto RollingBonesBarEntityHandler_jr_6F3C;
    ClearEntityStatus_06();
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
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
  RollingBonesBarEntityHandler_jr_6F3C:;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6EDD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD8, gb.regs.a);
    label_006_7035(); return;
}

void ret_006_6F47(void) {
    return;
}

void jr_006_6F48(void) {
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_006_6F48_jr_6F53;
    DefaultEnemyDamageCollisionHandler_trampoline();
  jr_006_6F48_jr_6F53:;
    AddEntitySpeedToPos_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_6F86(); return; };
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_006_6F48_jr_6F67;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  jr_006_6F48_jr_6F67:;
    gb.regs.e = 4;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto jr_006_6F48_jr_6F6F;
    gb.regs.e = 8;
  jr_006_6F48_jr_6F6F:;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto jr_006_6F48_jr_6F75;
    gb.regs.e = 0x10;
  jr_006_6F48_jr_6F75:;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto jr_006_6F48_jr_6F7B;
    gb.regs.e = 0x20;
  jr_006_6F48_jr_6F7B:;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto jr_006_6F48_jr_6F82;
    gb.regs.d = alu_inc8(gb.regs.d);
  jr_006_6F48_jr_6F82:;
    gb.regs.a = gb.regs.d;
    SetEntitySpriteVariant();
}

void jr_006_6F86(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: RollingBonesBarRestingHandler(); return;
        case 0x01: RollingBonesBarRollingHandler(); return;
        case 0x02: RollingBonesBarDeceleratingHandler(); return;
    }
}

void RollingBonesBarRestingHandler(void) {
    return;
}

void RollingBonesBarRollingHandler(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto RollingBonesBarRollingHandler_jr_6FB3;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC158, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState();
  RollingBonesBarRollingHandler_jr_6FB3:;
    gb.regs.a = gb_read(0xD490);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_C()) goto RollingBonesBarRollingHandler_jr_6FC0;
    gb.regs.a = 0x1A;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  RollingBonesBarRollingHandler_jr_6FC0:;
    gb_write(0xD490, gb.regs.a);
    return;
}

void RollingBonesBarDeceleratingHandler(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { ret_006_6FD9(); return; };
    gb.regs.hl = 0xC240;
  RollingBonesBarDeceleratingHandler_jr_6FCD:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_6FDA(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto RollingBonesBarDeceleratingHandler_jr_6FD8;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  RollingBonesBarDeceleratingHandler_jr_6FD8:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void ret_006_6FD9(void) {
    return;
}

void jr_006_6FDA(void) {
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
    return;
}

void Data_006_6FE4(void) {
    /* data: db $80, $70, $60, $50, $40, $30 */;
}

void func_006_6FEA(void) {
    gb.regs.a = 0x20;
    gb_write(0xFFEC, gb.regs.a);
  func_006_6FEA_loop:;
    gb.regs.de = 0x6DF0;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6FE4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_006_6FEA_loop;
    CopyEntityPositionToActivePosition(); return;
}

void func_006_700A(void) {
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
    label_006_702A(); return;
}

void label_006_702A(void) {
    ReturnIfNonInteractive_06_allowInactiveEntity();
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
}

void label_006_7035(void) {
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
    if (GET_FLAG_Z()) goto label_006_7035_jr_705F;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF0);
    jr_006_706B(); return;
  label_006_7035_jr_705F:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
}

void jr_006_706B(void) {
    ClearEntityStatus_06();
    PlayBombExplosionSfx(); return;
}

void Data_006_7071(void) {
    /* data: db $F0, $FC, $50, $01, $F0, $04, $52, $01, $F0, $0C, $54, $01, $00, $FC, $56, $01 */;
    /* data: db $00, $04, $58, $01, $00, $0C, $5A, $01 */;
}

void Data_006_7089(void) {
    /* data: db $F0, $FC, $50, $01, $F0, $04, $52, $01, $F0, $0C, $54, $01, $00, $FC, $5C, $01 */;
    /* data: db $00, $04, $58, $01, $00, $0C, $5E, $01 */;
}

void Data_006_70A1(void) {
    /* data: db $A8, $14 */;
}

void Data_006_70A3(void) {
    /* data: db $01, $FF */;
}

void Data_006_70A5(void) {
    /* data: db $18, $E8 */;
}

void BigFairyEntityHandler(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BigFairyEntityHandler_jr_70B8;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto BigFairyEntityHandler_jr_70B8;
    gb.regs.a = 6;
    func_036_505F_trampoline(); return;
  BigFairyEntityHandler_jr_70B8:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_006_7123(); return; };
    gb.regs.hl = 0xC280;
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
    gb.regs.a = gb_read(0xD482);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x70A1;
    RenderActiveEntitySprite();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_006_7120(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x70A3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x70A5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto BigFairyEntityHandler_jr_7100;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
  BigFairyEntityHandler_jr_7100:;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x70A3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x70A5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_006_7120(); return; };
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_7120(void) {
    UpdateEntityPosWithSpeed_06(); return;
}

void label_006_7123(void) {
    gb.regs.hl = 0x7071;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto label_006_7123_jr_712F;
    gb.regs.hl = 0x7089;
  label_006_7123_jr_712F:;
    gb.regs.c = 6;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 6;
    func_015_7964_trampoline();
    label_3CD9();
    gb.regs.e = 0xFE;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) goto label_006_7123_jr_714A;
    gb.regs.e = 2;
  label_006_7123_jr_714A:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    AddEntityZSpeedToPos_06();
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: BigFairyWaitingHandler(); return;
        case 0x01: BigFairyHealingHandler(); return;
        case 0x02: BigFairyDisappearingHandler(); return;
    }
}

void BigFairyWaitingHandler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD482, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb_write(0xD481, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x58);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) return;
    IncrementEntityState();
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x48);
    /* jp_open_dialog Dialog024 */;
}

void BigFairyHealingHandler(void) {
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto BigFairyHealingHandler_jr_7197;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x48);
    IncrementEntityState();
    gb.regs.a = 0x26;
    gb_write(0xFFF2, gb.regs.a);
    return;
  BigFairyHealingHandler_jr_7197:;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 0x1A;
    gb_write(0xFFF2, gb.regs.a);
    ReturnIfNonInteractive_06();
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BigFairyHealingHandler_jr_71BA;
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto BigFairyHealingHandler_jr_71BA;
    gb.regs.a = 4;
    gb_write(0xDC3B, gb.regs.a);
  BigFairyHealingHandler_jr_71BA:;
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto BigFairyHealingHandler_ret_71F0;
    gb_write(gb.regs.hl, 0x13);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto BigFairyHealingHandler_ret_71F0;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x84;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto BigFairyHealingHandler_ret_71F0;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0E);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xE8);
  BigFairyHealingHandler_ret_71F0:;
    return;
}

void BigFairyDisappearingHandler(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatus_06(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = 0;
    if (GET_FLAG_Z()) goto BigFairyDisappearingHandler_jr_7201;
    gb.regs.a = 0xFF;
  BigFairyDisappearingHandler_jr_7201:;
    gb_write(0xD482, gb.regs.a);
    SetEntitySpriteVariant();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    return;
}

void MrWriteSpriteVariants(void) {
  MrWriteSpriteVariants_variant0:;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MrWriteSpriteVariants_variant1:;
    /* data: db $64, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MrWriteSpriteVariants_variant2:;
    /* data: db $6C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  MrWriteSpriteVariants_variant3:;
    /* data: db $6A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MrWriteSpriteVariants_variant4:;
    /* data: db $66, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  MrWriteSpriteVariants_variant5:;
    /* data: db $6E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void MrWriteBirdChristineHouseSpriteVariants(void) {
  MrWriteBirdChristineHouseSpriteVariants_variant0:;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  MrWriteBirdChristineHouseSpriteVariants_variant1:;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  MrWriteBirdChristineHouseSpriteVariants_variant2:;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  MrWriteBirdChristineHouseSpriteVariants_variant3:;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MrWriteBirdChristineHouseSpriteVariants_variant4:;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MrWriteBirdChristineHouseSpriteVariants_variant5:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void MrWriteBirdEntityHandler(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_006_725A(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb.regs.a = 0;
    if (!GET_FLAG_Z()) goto MrWriteBirdEntityHandler_jr_7255;
    gb.regs.a = 3;
  MrWriteBirdEntityHandler_jr_7255:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_725A(void) {
    gb.regs.de = 0x7125;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xD9);
    if (!GET_FLAG_Z()) goto jr_006_725A_jr_7266;
    gb.regs.de = 0x713D;
  jr_006_725A_jr_7266:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_006_7372(); return; };
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_006_725A_jr_728C;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  jr_006_725A_jr_728C:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MrWriteBirdState0Handler(); return;
        case 0x01: MrWriteBirdState1Handler(); return;
        case 0x02: MrWriteBirdState2Handler(); return;
    }
}

void Data_006_7295(void) {
    /* data: db $02, $06, $08, $06, $FE, $FA, $F8, $FA */;
}

void MrWriteBirdState0Handler(void) {
    func_006_7335();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
  MrWriteBirdState0Handler_jr_72A7:;
    if (!GET_FLAG_Z()) goto MrWriteBirdState0Handler_jr_72E0;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7295;
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
    gb.regs.hl = 0x7295;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
  MrWriteBirdState0Handler_jr_72E0:;
    label_006_7308(); return;
}

void MrWriteBirdState1Handler(void) {
    func_006_7335();
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_006_7308(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MrWriteBirdState1Handler_jr_72FD;
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  MrWriteBirdState1Handler_jr_72FD:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void label_006_7308(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void MrWriteBirdState2Handler(void) {
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto MrWriteBirdState2Handler_jr_7323;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  MrWriteBirdState2Handler_jr_7323:;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MrWriteBirdState2Handler_jr_732C;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  MrWriteBirdState2Handler_jr_732C:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    SetEntitySpriteVariant();
    return;
}

void func_006_7335(void) {
    gb.regs.a = gb_read(0xC137);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_006_7335_ret_7371;
    GetEntityXDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto func_006_7335_ret_7371;
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto func_006_7335_ret_7371;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
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
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  func_006_7335_ret_7371:;
    return;
}

void label_006_7372(void) {
    return;
}

void PolsVoiceSpriteVariants(void) {
  PolsVoiceSpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  PolsVoiceSpriteVariants_variant1:;
    /* data: db $72, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void PolsVoiceEntityHandler(void) {
    gb.regs.a = gb_read(0xC166);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto PolsVoiceEntityHandler_jr_73AD;
    gb.regs.a = gb_read(0xDBF5);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto PolsVoiceEntityHandler_jr_73AD;
    gb.regs.a = gb_read(0xDBF6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto PolsVoiceEntityHandler_jr_73AD;
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto PolsVoiceEntityHandler_jr_73AD;
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
  PolsVoiceEntityHandler_jr_73AD:;
    gb.regs.de = 0x7291;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    UpdateEntityPosWithSpeed_06();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb_push16(gb.regs.hl);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.b);
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    switch(gb.regs.a) {
        case 0x00: func_006_73E0(); return;
        case 0x01: func_006_7423(); return;
    }
}

void Data_006_73D4(void) {
    /* data: db $08, $08, $F8, $F8, $04, $FC */;
}

void Data_006_73DA(void) {
    /* data: db $FC, $04, $FC, $04, $08, $F8 */;
}

void func_006_73E0(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto func_006_73E0_jr_7409;
    gb.regs.a = 0x0A;
    ApplyVectorTowardsLink_trampoline();
    jr_006_741F(); return;
  func_006_73E0_jr_7409:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x73D4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x73DA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_741F(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void func_006_7423(void) {
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(gb.regs.hl, gb.regs.a);
    ClearEntitySpeed(); return;
}

void ArmosStatueSpriteVariants(void) {
  ArmosStatueSpriteVariants_variant0:;
    /* data: db $60, OAM_GBC_PAL_7 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_7 | OAMF_PAL0 */;
  ArmosStatueSpriteVariants_variant1:;
    /* data: db $64, OAM_GBC_PAL_7 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_7 | OAMF_PAL0 */;
}

void ArmosStatueEntityHandler(void) {
    gb.regs.de = 0x7369;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    label_3B70();
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto ArmosStatueEntityHandler_jr_7472;
    gb.regs.a = 1;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto ArmosStatueEntityHandler_jr_7472;
    CopyLinkFinalPositionToPosition();
  ArmosStatueEntityHandler_jr_7472:;
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: ArmosStatueState0Handler(); return;
        case 0x01: ArmosStatueState1Handler(); return;
        case 0x02: ArmosStatueState2Handler(); return;
    }
}

void ArmosStatueState0Handler(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ArmosStatueState0Handler_return;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
  ArmosStatueState0Handler_return:;
    return;
}

void ArmosStatueState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ArmosStatueState1Handler_jr_74B2;
    IncrementEntityState();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
    ClearEntitySpeed(); return;
  ArmosStatueState1Handler_jr_74B2:;
    gb.regs.e = 8;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto ArmosStatueState1Handler_jr_74BA;
    gb.regs.e = 0xF8;
  ArmosStatueState1Handler_jr_74BA:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    return;
}

void Data_006_74C0(void) {
    /* data: db $F8, $FA */;
}

void Data_006_74C2(void) {
    /* data: db $00, $06, $08, $06, $00, $FA, $F8, $FA */;
}

void ArmosStatueState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_006_74EF(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x74C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
  ArmosStatueState2Handler_jr_74E0:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x74C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_74EF(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void SpikeTrapSpriteVariants(void) {
  SpikeTrapSpriteVariants_variant0:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Data_006_74FE(void) {
    /* data: db $20, $E0, $00, $00 */;
}

void Data_006_7502(void) {
    /* data: db $F8, $08, $00, $00 */;
}

void Data_006_7506(void) {
    /* data: db $00, $00, $E0, $20 */;
}

void Data_006_750A(void) {
    /* data: db $00, $00, $08, $F8, $30, $20 */;
}

void SpikeTrapEntityHandler(void) {
    gb.regs.a = 1;
    gb_write(0xFFBE, gb.regs.a);
    gb.regs.de = 0x7419;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    DecrementEntityIgnoreHitsCountdown();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: SpikeTrapState0Handler(); return;
        case 0x01: SpikeTrapState1Handler(); return;
        case 0x02: SpikeTrapState2Handler(); return;
        case 0x03: SpikeTrapState3Handler(); return;
    }
}

void SpikeTrapState0Handler(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void SpikeTrapState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_006_7599(); return; };
    ClearEntitySpeed();
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_C()) goto SpikeTrapState1Handler_jr_7567;
    GetEntityXDistanceToLink_06();
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x74FE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = 0x18;
    jr_006_7585(); return;
  SpikeTrapState1Handler_jr_7567:;
    GetEntityXDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_C()) { ret_006_7599(); return; };
    GetEntityYDistanceToLink_06();
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7506;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = 0x10;
}

void jr_006_7585(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, gb.regs.e);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { jr_006_759A(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, gb.regs.b);
}

void ret_006_7599(void) {
    return;
}

void jr_006_759A(void) {
    gb.regs.a = 0x0A;
    gb_write(0xFFF4, gb.regs.a);
    IncrementEntityState(); return;
}

void SpikeTrapState2Handler(void) {
    UpdateEntityPosWithSpeed_06();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_006_75B5(); return; };
}

void jr_006_75A9(void) {
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState(); return;
}

void jr_006_75B5(void) {
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_006_75A9(); return; };
    return;
}

void SpikeTrapState3Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7502;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x750A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    UpdateEntityPosWithSpeed_06();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    return;
}

void WizrobeSpriteVariants(void) {
  WizrobeSpriteVariants_variant0:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  WizrobeSpriteVariants_variant1:;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  WizrobeSpriteVariants_variant2:;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  WizrobeSpriteVariants_variant3:;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  WizrobeSpriteVariants_variant4:;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Data_006_7618(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void Data_006_761C(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void Data_006_7620(void) {
    /* data: db $20, $E0, $00, $00 */;
}

void Data_006_7624(void) {
    /* data: db $00, $00, $E0, $20 */;
}

void WizrobeEntityHandler(void) {
    gb.regs.de = 0x752D;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: WizrobeState0Handler(); return;
        case 0x01: WizrobeState1Handler(); return;
        case 0x02: WizrobeState2Handler(); return;
        case 0x03: WizrobeState3Handler(); return;
    }
}

void WizrobeState0Handler(void) {
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WizrobeState0Handler_jr_765E;
    IncrementEntityState();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x20);
  WizrobeState0Handler_jr_765E:;
    jr_006_767E(); return;
}

void WizrobeState1Handler(void) {
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) { jr_006_7679(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
  WizrobeState1Handler_jr_766F:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    label_006_7735(); return;
}

void jr_006_7679(void) {
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { jr_006_7686(); return; };
}

void jr_006_767E(void) {
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    label_006_7735(); return;
}

void jr_006_7686(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    label_006_7735(); return;
}

void WizrobeState2Handler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    GetEntityPrivateCountdown1();
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { jr_006_76B6(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto WizrobeState2Handler_jr_76A2;
    gb_write(gb.regs.hl, 0x18);
    label_006_7735(); return;
  WizrobeState2Handler_jr_76A2:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_006_76B6(); return; };
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x20);
}

void jr_006_76B6(void) {
    label_006_7735(); return;
}

void WizrobeState3Handler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityPrivateCountdown1();
    alu_cp8(gb.regs.a, 0x28);
    if (GET_FLAG_Z()) { jr_006_76E9(); return; };
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { jr_006_772D(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto WizrobeState3Handler_jr_76DD;
    gb_write(gb.regs.hl, 0x40);
    GetEntityDirectionToLink_06();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  WizrobeState3Handler_jr_76DD:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    return;
}

void jr_006_76E9(void) {
    gb.regs.a = 0x22;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { jr_006_772D(); return; };
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x7618;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x761C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
}

void label_006_7709(void) {
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x7620;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x7624;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  label_006_7709_jr_7725:;
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_772D(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 2;
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void label_006_7735(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x42);
    return;
}

void Data_006_773C(void) {
    /* data: db $00, $D8, $60, $00, $00, $E0, $60, $20, $00, $28, $60, $00, $00, $30, $60, $20 */;
    /* data: db $D8, $00, $62, $00, $D8, $08, $62, $20, $28, $00, $62, $00, $28, $08, $62, $20 */;
    /* data: db $F0, $F0, $6A, $00, $F0, $F8, $6A, $60, $F0, $10, $6A, $40, $F0, $18, $6A, $20 */;
    /* data: db $10, $F0, $6A, $40, $10, $F8, $6A, $20, $10, $10, $6A, $00, $10, $18, $6A, $60 */;
    /* data: db $00, $E8, $60, $00, $00, $F0, $60, $20, $00, $18, $60, $00, $00, $20, $60, $20 */;
    /* data: db $E8, $00, $62, $00, $E8, $08, $62, $20, $18, $00, $62, $00, $18, $08, $62, $20 */;
    /* data: db $F0, $F0, $FF, $00, $F0, $F8, $FF, $00, $F0, $10, $FF, $00, $F0, $18, $FF, $00 */;
    /* data: db $10, $F0, $FF, $00, $10, $F8, $FF, $00, $10, $10, $FF, $00, $10, $18, $FF, $00 */;
    /* data: db $E0, $E0, $68, $00, $E0, $E8, $68, $60, $20, $E0, $68, $40, $20, $E8, $68, $20 */;
    /* data: db $E0, $20, $68, $40, $E0, $28, $68, $20, $20, $20, $68, $00, $20, $28, $68, $60 */;
    /* data: db $00, $F0, $64, $00, $00, $F8, $64, $20, $F0, $00, $66, $00, $F0, $08, $66, $20 */;
    /* data: db $00, $10, $64, $00, $00, $18, $64, $20, $10, $00, $66, $00, $10, $08, $66, $20 */;
    /* data: db $E8, $E8, $68, $00, $E8, $F0, $68, $60, $18, $E8, $68, $40, $18, $F0, $68, $20 */;
    /* data: db $E8, $18, $68, $40, $E8, $20, $68, $20, $18, $18, $68, $00, $18, $20, $68, $60 */;
    /* data: db $00, $F0, $FF, $00, $00, $F8, $FF, $20, $F0, $00, $FF, $00, $F0, $08, $FF, $20 */;
    /* data: db $00, $10, $FF, $00, $00, $18, $FF, $20, $10, $00, $FF, $00, $10, $08, $FF, $20 */;
}

void func_006_783C(void) {
    ReturnIfNonInteractive_06();
  func_006_783C_jr_783F:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0x773C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 0x10;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 0x10;
    func_015_7964_trampoline(); return;
}

void AntiFairySpriteVariants(void) {
  AntiFairySpriteVariants_variant1:;
    /* data: db $5A, OAM_GBC_PAL_0 */;
    /* data: db $5A, OAM_GBC_PAL_0 | OAMF_XFLIP */;
  AntiFairySpriteVariants_variant2:;
    /* data: db $5A, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $5A, OAM_GBC_PAL_4 | OAMF_PAL1 | OAMF_XFLIP */;
}

void AntiFairyEntityHandler(void) {
    gb.regs.de = 0x779A;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
  AntiFairyEntityHandler_jr_787F:;
    ApplyRecoilIfNeeded_06();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto AntiFairyEntityHandler_jr_789B;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) { jr_006_78A5(); return; };
    jr_006_78AD(); return;
  AntiFairyEntityHandler_jr_789B:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_006_78AD(); return;
}

void jr_006_78A5(void) {
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_006_78AD(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void TektiteSpriteVariants(void) {
  TektiteSpriteVariants_variant0:;
    /* data: db $58, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $58, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  TektiteSpriteVariants_variant1:;
    /* data: db $5A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void TektiteXSpeeds(void) {
    /* data: db $10, $F0, $10, $F0 */;
}

void TektiteYSpeeds(void) {
    /* data: db $10, $10, $F0, $F0 */;
}

void TektiteEntityHandler(void) {
    gb.regs.de = 0x77EA;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto TektiteEntityHandler_noCollisionX;
    TektiteHorizontalCollision();
  TektiteEntityHandler_noCollisionX:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto TektiteEntityHandler_noCollisionY;
    TektiteVerticalCollision();
  TektiteEntityHandler_noCollisionY:;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { TektiteState1Handler(); return; };
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto TektiteEntityHandler_hitGroundEnd;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    ClearEntitySpeed();
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 1;
    SetEntitySpriteVariant(); return;
  TektiteEntityHandler_hitGroundEnd:;
    AddEntityZSpeedToPos_06();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    return;
}

void TektiteState1Handler(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    SetEntitySpriteVariant();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    AddEntityZSpeedToPos_06();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x77F2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x77F6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto TektiteState1Handler_skipMoveTowardsLink;
    gb.regs.a = 0x14;
    ApplyVectorTowardsLink_trampoline();
  TektiteState1Handler_skipMoveTowardsLink:;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void TektiteHorizontalCollision(void) {
    gb.regs.hl = 0xC240;
    jr_006_7982(); return;
}

void TektiteVerticalCollision(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
}

void jr_006_7982(void) {
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void BooBuddySpriteVariants(void) {
  BooBuddySpriteVariants_variant0:;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BooBuddySpriteVariants_variant1:;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BooBuddySpriteVariants_variant2:;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  BooBuddySpriteVariants_variant3:;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  BooBuddySpriteVariants_variant4:;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BooBuddySpriteVariants_variant5:;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BooBuddySpriteVariants_variant6:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BooBuddySpriteVariants_variant7:;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
}

void BooBuddyEntityHandler(void) {
    gb.regs.de = 0x78C9;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    UpdateEntityPosWithSpeed_06();
    func_006_5E54();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: BooBuddyState0Handler(); return;
        case 0x01: BooBuddyState1Handler(); return;
    }
}

void BooBuddyState0Handler(void) {
    gb.regs.a = gb_read(0xC1A2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_006_7A38(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_006_7A11(); return; };
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) { jr_006_7A21(); return; };
    gb.regs.a = gb_read(0xC137);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_006_79FA(); return; };
    GetRandomByte();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_add8(gb.regs.a, 6);
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC250;
    func_006_7A79();
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC240;
  BooBuddyState0Handler_jr_79F2:;
    func_006_7A79();
    label_3B44();
    jr_006_7A27(); return;
}

void jr_006_79FA(void) {
    GetEntityXDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x24);
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_C()) { jr_006_7A27(); return; };
    GetEntityYDistanceToLink_06();
    gb.regs.a = alu_add8(gb.regs.a, 0x24);
  jr_006_79FA_jr_7A08:;
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_C()) { jr_006_7A27(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
}

void jr_006_7A11(void) {
    ClearEntitySpeed();
    func_006_7AB0();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    func_006_7A8C();
}

void jr_006_7A21(void) {
    ClearEntitySpeed();
    func_006_7AB0(); return;
}

void jr_006_7A27(void) {
    GetEntityXDistanceToLink_06();
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant(); return;
}

void label_006_7A38(void) {
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    return;
}

void BooBuddyState1Handler(void) {
    gb.regs.a = gb_read(0xC1A2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BooBuddyState1Handler_jr_7A74;
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = 4;
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
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  BooBuddyState1Handler_jr_7A74:;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void func_006_7A79(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { ret_006_7A8B(); return; };
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_006_7A79_jr_7A87;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    ret_006_7A8B(); return;
  func_006_7A79_jr_7A87:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void ret_006_7A8B(void) {
    return;
}

void func_006_7A8C(void) {
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x48);
    gb.regs.e = gb.regs.a;
    gb.regs.a = 0x48;
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.e = gb.regs.a;
    gb.regs.a = 0x50;
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void func_006_7AB0(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_006_7AC7(); return; };
    GetEntityXDistanceToLink_06();
    gb.regs.e = alu_srl(gb.regs.e);
    if (GET_FLAG_C()) goto func_006_7AB0_jr_7AC3;
    gb.regs.a = 6;
    jr_006_7AC9(); return;
  func_006_7AB0_jr_7AC3:;
    gb.regs.a = 7;
    jr_006_7AC9(); return;
}

void jr_006_7AC7(void) {
    gb.regs.a = 0xFF;
}

void jr_006_7AC9(void) {
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
}

void Data_006_7AD1(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void Data_006_7ADD(void) {
    /* data: db $A6, $15, $8E, $16, $80, $15, $A6, $15, $A9, $14, $2A, $41, $2A, $61 */;
}

void Data_006_7AEB(void) {
    /* data: db $00, $FC, $22, $00, $00, $0C, $22, $20, $00, $FC, $22, $40, $00, $0C, $22, $60 */;
}

void Data_006_7AFB(void) {
    /* data: db $0F, $0F, $10, $11, $11, $11, $10, $0F */;
}

void Data_006_7B03(void) {
    /* data: db $00, $00, $01, $02, $02, $02, $01, $00 */;
}

void FloatingItemEntityHandler(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { FloatingItem2EntityHandler(); return; };
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { FloatingItem2EntityHandler(); return; };
    gb.regs.a = 6;
    func_036_4F9B_trampoline(); return;
}

void FloatingItem2EntityHandler(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FloatingItem2EntityHandler_jr_7B32;
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto FloatingItem2EntityHandler_jr_7B32;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x1C);
    if (!GET_FLAG_Z()) goto FloatingItem2EntityHandler_jr_7B32;
    gb.regs.a = 1;
    gb_write(0xDEA8, gb.regs.a);
  FloatingItem2EntityHandler_jr_7B32:;
    gb.regs.hl = 0x7AFB;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FloatingItem2EntityHandler_jr_7B3D;
    gb.regs.hl = 0x7B03;
  FloatingItem2EntityHandler_jr_7B3D:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto FloatingItem2EntityHandler_jr_7B5B;
    gb.regs.de = 0x7AD3;
    RenderActiveEntitySpritesPair();
    jr_006_7B61(); return;
  FloatingItem2EntityHandler_jr_7B5B:;
    gb.regs.de = 0x7ADD;
    RenderActiveEntitySprite();
}

void jr_006_7B61(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7AEB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 2;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 1;
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition();
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_006_7B61_jr_7B85;
    gb.regs.a = gb_read(0xFFA2);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_C()) return;
  jr_006_7B61_jr_7B85:;
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) return;
    DidKillEnemy_label_3F5E();
    ClearEntityStatus_06();
    gb.regs.a = 1;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.a = gb_read(0xFFF1);
    switch(gb.regs.a) {
        case 0x00: Floating10RupeesHandler(); return;
        case 0x01: FloatingMagicPowderHandler(); return;
        case 0x02: FloatingBombsHandler(); return;
        case 0x03: Floating10RupeesHandler(); return;
        case 0x04: func_006_7BA2(); return;
        case 0x05: FloatingArrowsHandler(); return;
    }
}

void func_006_7BA2(void) {
    gb.regs.a = gb_read(0xDC3B);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto func_006_7BA2_jr_7BAB;
    gb.regs.a = 0xFF;
  func_006_7BA2_jr_7BAB:;
    gb_write(0xDC3B, gb.regs.a);
    return;
}

void FloatingArrowsHandler(void) {
    gb.regs.a = gb_read(0xDBF1);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_daa();
    gb_write(0xDBF1, gb.regs.a);
    return;
}

void Floating10RupeesHandler(void) {
    gb.regs.a = 0x0A;
    gb_write(0xDC38, gb.regs.a);
    return;
}

void FloatingMagicPowderHandler(void) {
    gb.regs.d = 0x0C;
    GiveInventoryItem_trampoline();
    gb.regs.a = 0x0B;
    gb_write(0xFFA5, gb.regs.a);
    gb.regs.hl = 0xDC1E;
    gb.regs.de = 0xDBF8;
    jr_006_7BD6(); return;
}

void FloatingBombsHandler(void) {
    gb.regs.hl = 0xDC1F;
    gb.regs.de = 0xDBF9;
}

void jr_006_7BD6(void) {
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) return;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_daa();
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) goto jr_006_7BD6_jr_7BE0;
    gb.regs.a = gb_read(gb.regs.hl);
  jr_006_7BD6_jr_7BE0:;
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void ZolGelMakeInvisibleBeforeMagnifyingLens(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x97);
    if (GET_FLAG_Z()) goto ZolGelMakeInvisibleBeforeMagnifyingLens_invisible;
    alu_cp8(gb.regs.a, 0x98);
    if (!GET_FLAG_Z()) return;
  ZolGelMakeInvisibleBeforeMagnifyingLens_invisible:;
    gb.regs.a = gb_read(0xDC27);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 0xFF;
    gb_write(0xFFF1, gb.regs.a);
    return;
}

void GelSpriteVariants(void) {
  GelSpriteVariants_variant0:;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  GelSpriteVariants_variant1:;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void GelEntityHandler(void) {
    ZolGelMakeInvisibleBeforeMagnifyingLens();
    gb.regs.de = 0x7B22;
    RenderActiveEntitySprite();
    AnimateZolGel(); return;
}

void ZolSpriteVariants(void) {
  ZolSpriteVariants_variant0:;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  ZolSpriteVariants_variant1:;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void ZolSlimeEyeSpriteVariants(void) {
  ZolSlimeEyeSpriteVariants_variant0:;
    /* data: db $52, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  ZolSlimeEyeSpriteVariants_variant1:;
    /* data: db $54, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $54, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void ZolEntityHandler(void) {
    ZolGelMakeInvisibleBeforeMagnifyingLens();
    gb.regs.de = 0x7B31;
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto ZolEntityHandler_render;
    gb.regs.de = 0x7B39;
  ZolEntityHandler_render:;
    RenderActiveEntitySpritesPair();
}

void AnimateZolGel(void) {
    gb.regs.hl = 0xC1AE;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    ReturnIfNonInteractive_06();
    AddEntityZSpeedToPos_06();
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
    if (GET_FLAG_Z()) goto AnimateZolGel_hitGroundEnd;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  AnimateZolGel_hitGroundEnd:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x1B);
    if (!GET_FLAG_Z()) goto AnimateZolGel_splitEnd;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto AnimateZolGel_splitEnd;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x1C);
    ConfigureNewEntity_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    ClearEntitySpeed();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 0x1C;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto AnimateZolGel_splitEnd;
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, 8);
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
    gb_write(gb.regs.hl, 0x20);
  AnimateZolGel_splitEnd:;
    ApplyRecoilIfNeeded_06();
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto AnimateZolGel_jr_7CD4;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto AnimateZolGel_jr_7CD4;
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
  AnimateZolGel_jr_7CD4:;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto AnimateZolGel_skipCollision;
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto AnimateZolGel_skipCollision;
    DefaultEnemyDamageCollisionHandler_trampoline();
  AnimateZolGel_skipCollision:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: ZolGelState0Handler(); return;
        case 0x01: ZolGelState1Handler(); return;
        case 0x02: ZolGelState2Handler(); return;
        case 0x03: ZolGelState3Handler(); return;
        case 0x04: GelState4Handler(); return;
    }
}

void ZolGelState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ZolGelPhysics(); return; };
    gb_write(gb.regs.hl, 0x10);
    ClearEntitySpeed();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto ZolGelState1Handler_skipLeap;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState(); return;
  ZolGelState1Handler_skipLeap:;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}

void ZolGelPhysics(void) {
    UpdateEntityPosWithSpeed_06();
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void ZolGelState0Handler(void) {
    ZolGelPhysics();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 7);
    IncrementEntityState();
    gb.regs.a = 4;
    ApplyVectorTowardsLink_trampoline(); return;
}

void ZolGelState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto ZolGelState2Handler_leapEnd;
    IncrementEntityState();
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    return;
  ZolGelState2Handler_leapEnd:;
    GetEntityTransitionCountdown();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ZolGelState2Handler_negative;
    gb_write(gb.regs.hl, 8);
    goto ZolGelState2Handler_setSpeed;
  ZolGelState2Handler_negative:;
    gb_write(gb.regs.hl, 0xF8);
  ZolGelState2Handler_setSpeed:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    ZolGelPhysics(); return;
}

void ZolGelState3Handler(void) {
    ZolGelPhysics();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ZolGelState3Handler_hitGroundEnd;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  ZolGelState3Handler_hitGroundEnd:;
    return;
}

void GelState4Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto GelState4Handler_skipIncrementState;
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    IncrementEntityState();
    gb_write(gb.regs.hl, 3);
    return;
  GelState4Handler_skipIncrementState:;
    gb_push16(gb.regs.af);
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC117, gb.regs.a);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { DecreaseEntityTransitionCountdown_return(); return; };
    DecreaseEntityTransitionCountdown();
    DecreaseEntityTransitionCountdown();
    DecreaseEntityTransitionCountdown();
}

void DecreaseEntityTransitionCountdown(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto DecreaseEntityTransitionCountdown_return;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  DecreaseEntityTransitionCountdown_return:;
    return;
}

void LikeLikeSpriteVariants(void) {
  LikeLikeSpriteVariants_variant0:;
    /* data: db $7C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7C, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  LikeLikeSpriteVariants_variant1:;
    /* data: db $7E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void LikeLikeEntityHandler(void) {
    gb.regs.de = 0x7D06;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    ApplyRecoilIfNeeded_06();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: LikeLikeState0Handler(); return;
        case 0x01: LikeLikeState1Handler(); return;
    }
}

void LikeLikeState0Handler(void) {
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto LikeLikeState0Handler_jr_7E06;
    label_3B44();
    if (!GET_FLAG_C()) goto LikeLikeState0Handler_jr_7E06;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  LikeLikeState0Handler_jr_7E06:;
    label_3B70();
    LikeLikeGibdoWalk(); return;
}

void LikeLikeState1Handler(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto LikeLikeState1Handler_jr_7E27;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto LikeLikeState1Handler_jr_7E27;
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x15);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  LikeLikeState1Handler_jr_7E27:;
    gb.regs.a = 0xFF;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_006_7E55(); return; };
    gb.regs.hl = wInventoryItems_BButtonSlot;
    gb.regs.e = gb.regs.b;
}

void jr_006_7E37(void) {
    loop_start: ;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto jr_006_7E37_jr_7E4E;
    gb.regs.a = gb_read(0xDBF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { jr_006_7E55(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xDBF0);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_006_7E55(); return;
  jr_006_7E37_jr_7E4E:;
    gb.regs.hl++;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { goto loop_start; };
}

void jr_006_7E55(void) {
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC146, gb.regs.a);
    gb_write(0xFFA2, gb.regs.a);
    func_006_7F05();
    func_006_7F05(); return;
}

void GibdoSpriteVariants(void) {
  GibdoSpriteVariants_variant0:;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  GibdoSpriteVariants_variant1:;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void GibdoTurtleRockSpriteVariants(void) {
  GibdoTurtleRockSpriteVariants_variant0:;
    /* data: db $44, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $46, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  GibdoTurtleRockSpriteVariants_variant1:;
    /* data: db $46, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $44, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void LikeLikeGibdoSpeeds(void) {
    /* data: db $00, $08, $F8, $00 */;
    /* data: db $F8, $08 */;
}

void GibdoEntityHandler(void) {
    gb.regs.de = 0x7D9F;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto GibdoEntityHandler_render;
    gb.regs.de = 0x7DA7;
  GibdoEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    DecrementEntityIgnoreHitsCountdown();
    DefaultEnemyDamageCollisionHandler_trampoline();
}

void LikeLikeGibdoWalk(void) {
    UpdateEntityPosWithSpeed_06();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto LikeLikeGibdoWalk_horizontalCollision;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto LikeLikeGibdoWalk_noCollision;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 0xF0);
    gb_write(gb.regs.hl, gb.regs.a);
    goto LikeLikeGibdoWalk_noCollision;
  LikeLikeGibdoWalk_horizontalCollision:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 0xF0);
    gb_write(gb.regs.hl, gb.regs.a);
  LikeLikeGibdoWalk_noCollision:;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LikeLikeGibdoWalk_chooseDirection;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto LikeLikeGibdoWalk_chooseDirectionEnd;
  LikeLikeGibdoWalk_chooseDirection:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7DAF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LikeLikeGibdoWalk_chooseDirectionEnd;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7DAF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  LikeLikeGibdoWalk_chooseDirectionEnd:;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
}

void func_006_7F05(void) {
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}
