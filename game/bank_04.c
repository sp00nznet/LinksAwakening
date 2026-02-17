/* Auto-generated from LADX Disassembly - Bank 0x04 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void GenieEntityHandler(void);
void GenieState0Handler(void);
void func_004_4090(void);
void Data_004_409F(void);
void func_004_40A3(void);
void jr_004_4118(void);
void label_004_4144(void);
void jr_004_4144(void);
void func_004_4155(void);
void jr_004_41A6(void);
void jr_004_41A9(void);
void jr_004_41AC(void);
void jr_004_41EC(void);
void jr_004_4210(void);
void func_004_4214(void);
void Data_004_4281(void);
void Data_004_42B1(void);
void func_004_42B3(void);
void GenieState1Handler(void);
void label_004_42F0(void);
void GenieKilledHandler0(void);
void GenieKilledHandler1(void);
void GenieKilledHandler2(void);
void jr_004_431A(void);
void func_004_4345(void);
void Data_004_4370(void);
void Data_004_437A(void);
void Data_004_437C(void);
void Data_004_437E(void);
void func_004_4380(void);
void jr_004_43A6(void);
void jr_004_4438(void);
void Data_004_449D(void);
void func_004_449F(void);
void func_004_44E9(void);
void func_004_4517(void);
void label_004_4568(void);
void jr_004_4568(void);
void func_004_4575(void);
void jr_004_45F1(void);
void func_004_4634(void);
void Data_004_4655(void);
void Data_004_46F5(void);
void func_004_46F9(void);
void Data_004_474D(void);
void Data_004_482D(void);
void Data_004_4836(void);
void GenieState2Handler(void);
void jr_004_486D(void);
void jr_004_48A6(void);
void func_004_48B8(void);
void Unknown012SpriteVariants(void);
void GenieState3Handler(void);
void jr_004_4938(void);
void GenieState4Handler(void);
void Data_004_496B(void);
void Data_004_496D(void);
void label_004_496F(void);
void EntityInitSlimeEye(void);
void SlimeEyeEntityHandler(void);
void func_004_49DC(void);
void SlimeEyeState0Handler(void);
void SlimeEyeState1Handler(void);
void SlimeEyeState2Handler(void);
void SlimeEyeState3Handler(void);
void jr_004_4AA5(void);
void Data_004_4B12(void);
void func_004_4B2E(void);
void func_004_4B37(void);
void func_004_4B52(void);
void Data_004_4B5C(void);
void Data_004_4B6C(void);
void func_004_4B7C(void);
void ret_004_4BC6(void);
void func_004_4BC7(void);
void Data_004_4BDD(void);
void Data_004_4D9D(void);
void func_004_4DB5(void);
void func_004_4DFB(void);
void func_004_4E15(void);
void func_004_4E1D(void);
void func_004_4E26(void);
void jr_004_4E2E(void);
void jr_004_4E4C(void);
void jr_004_4E4F(void);
void func_004_4E52(void);
void label_004_4E60(void);
void jr_004_4E83(void);
void Data_004_4E94(void);
void Data_004_4E9C(void);
void func_004_4EA4(void);
void jr_004_4EE7(void);
void func_004_4EEB(void);
void jr_004_4F57(void);
void jr_004_4F60(void);
void func_004_4F65(void);
void func_004_4F7E(void);
void Data_004_4FAE(void);
void Data_004_4FEE(void);
void func_004_4FFE(void);
void EntityInitFacade(void);
void func_004_5067(void);
void func_004_5068(void);
void FacadeEntityHandler(void);
void FacadeMainBossHandler(void);
void FacadeDeathState0(void);
void jr_004_50DB(void);
void FacadeDeathState1(void);
void FacadeDeathState2(void);
void BossDeathRandomExplosion(void);
void FacadeMainBossNotDead(void);
void FacadeMainBossState0(void);
void Data_004_5138(void);
void FacadeMainBossState1(void);
void Data_004_517E(void);
void Data_004_5182(void);
void Data_004_5192(void);
void Data_004_51A2(void);
void Data_004_51B6(void);
void Data_004_51CA(void);
void Data_004_51DE(void);
void Data_004_51E2(void);
void Data_004_51E6(void);
void FacadeMainBossState2(void);
void jr_004_51FA(void);
void jr_004_5273(void);
void jr_004_5340(void);
void Data_004_537F(void);
void Data_004_538F(void);
void FacadeRenderFace(void);
void FacadePitSpriteVariants(void);
void Data_004_5456(void);
void FacadePitHandler(void);
void FacadeFlyingTileSpriteVariants0(void);
void FacadeFlyingTileSpriteVariants1(void);
void FacadeFlyingTileSpriteVariants2(void);
void FacadeFlyingTileHandler(void);
void func_004_554A(void);
void func_004_5569(void);
void jr_004_557E(void);
void func_004_5586(void);
void label_004_5596(void);
void Facade4SpriteVariants(void);
void FacadeFlyingPotHandler(void);
void func_004_55B7(void);
void func_004_55C3(void);
void jr_004_55D8(void);
void func_004_55E0(void);
void Data_004_55F3(void);
void Data_004_55F7(void);
void Data_004_55FB(void);
void Data_004_55FF(void);
void Data_004_5603(void);
void label_004_5607(void);
void label_004_560E(void);
void label_004_5615(void);
void func_004_561C(void);
void label_004_5623(void);
void jr_004_5628(void);
void EntityInitMoldorm(void);
void Data_004_569F(void);
void func_004_56A7(void);
void MoldormEntityHandler(void);
void MoldormDestructionFlashInitHandler(void);
void MoldormDestructionFlash1Handler(void);
void MoldormDestructionFlash2Handler(void);
void Data_004_570D(void);
void Data_004_5715(void);
void BossDestructionHandler_04(void);
void DropHeartContainer_04(void);
void MoldormEntityActiveHandler(void);
void jr_004_57B8(void);
void jr_004_57C6(void);
void Data_004_57F2(void);
void MoldormSpriteVariants(void);
void func_004_5902(void);
void ret_004_5A04(void);
void CreatePoofVfx(void);
void EntityInitMiniMoldorm(void);
void MiniMoldormSpriteVariants(void);
void MoldormHeadSpriteVariantIndexes(void);
void MoldormYSpeeds(void);
void MoldormXSpeeds(void);
void MiniMoldormEntityHandler(void);
void RenderMiniMoldorm(void);
void GhiniSpriteVariants(void);
void GhiniTargetXSpeeds(void);
void GhiniTargetYSpeeds(void);
void GiantGhiniEntityHandler(void);
void HidingGhiniEntityHandler(void);
void GhiniEntityHandler(void);
void GhiniVisibleHandler(void);
void GhiniCorrectZPosition(void);
void GiantGhiniSpriteRectVariants(void);
void RenderGiantGhini(void);
void PairoddSpriteVariants(void);
void PairoddEntityHandler(void);
void PairoddRestingHandler(void);
void PairoddDisappearingSpriteVariantIndexes(void);
void PairoddDisappearingHandler(void);
void PairoddReappearingSpriteVariantIndexes(void);
void PairoddReappearingHandler(void);
void SpawnPairoddProjectile(void);
void PairoddReappearingAnimation(void);
void PairoddProjectileSpriteVariants(void);
void PairoddProjectileEntityHandler(void);
void FishermanRodLowSpriteRect(void);
void FishermanRowHighSpriteRect(void);
void FishermanTowardsLinkSpriteRect(void);
void FishermanFishingGameSpriteVariants(void);
void FishermanFishingGameEntityHandler(void);
void FishermanIdleHandler(void);
void FishermanProposingHandler(void);
void FishermanExplainingRulesHandler(void);
void Unknown080SpriteVariants(void);
void Data_004_6074(void);
void Data_004_607E(void);
void Data_004_6088(void);
void Data_004_6092(void);
void Data_004_609B(void);
void FishingGameAndFishHandler(void);
void FishStartX(void);
void FishStartY(void);
void FishStartDirection(void);
void FishType(void);
void FishMoveDelay(void);
void FishingGameHandler(void);
void jr_004_6120(void);
void func_004_6154(void);
void Data_004_6171(void);
void func_004_617B(void);
void label_004_61BA(void);
void func_004_61E4(void);
void func_004_61E5(void);
void jr_004_6237(void);
void jr_004_623F(void);
void func_004_6247(void);
void func_004_6252(void);
void func_004_626C(void);
void Unknown081SpriteVariants(void);
void FishingLureHandler(void);
void func_004_629F(void);
void jr_004_62C1(void);
void jr_004_62E7(void);
void label_004_62F6(void);
void ret_004_6307(void);
void func_004_6308(void);
void jr_004_6345(void);
void jr_004_6354(void);
void jr_004_638A(void);
void jr_004_63AD(void);
void jr_004_63B9(void);
void jr_004_63DE(void);
void jr_004_6402(void);
void SmallFishSpriteVariants(void);
void SmallFishHandler(void);
void func_004_6463(void);
void jr_004_6497(void);
void Data_004_6499(void);
void func_004_649B(void);
void jr_004_64E0(void);
void Data_004_64F0(void);
void func_004_64F2(void);
void func_004_652D(void);
void Data_004_6576(void);
void Data_004_6578(void);
void func_004_657A(void);
void jr_004_65DB(void);
void jr_004_6631(void);
void func_004_6689(void);
void jr_004_66DC(void);
void jr_004_66E6(void);
void jr_004_66FE(void);
void BigFishSpriteVariants(void);
void BigFishHandler(void);
void label_004_6738(void);
void ret_004_675F(void);
void Data_004_6760(void);
void label_004_6762(void);
void ret_004_679A(void);
void func_004_679B(void);
void WarpToFishingGame(void);
void TractorDeviceSpriteVariants(void);
void TractorDeviceBottleGrottoSpriteVariants(void);
void TractorDeviceEntityHandler(void);
void ReversedTractorDeviceEntityHandler(void);
void SpinningLinkDirections(void);
void TractorDeviceActiveHandler(void);
void TractorDeviceInactiveHandler(void);
void TractorDeviceAffectOtherEntities(void);
void KnightEntityHandler(void);
void KnightWalkingHandler(void);
void KnightIronBallAttackStartingAngle(void);
void KnightWindingUpHandler(void);
void KnightAttackingHandler(void);
void KnightSpriteVariants(void);
void KnightIronBallSpinningYOffsets(void);
void KnightIronBallSpinningXOffsets(void);
void RenderKnightAndHandleIronBall(void);
void func_004_6BE1(void);
void LaserSpriteVariants(void);
void LaserLinkSensorYSpeeds(void);
void LaserLinkSensorXSpeeds(void);
void LaserEntityHandler(void);
void LaserSpinningHandler(void);
void LaserLinkSensorHandler(void);
void ClearEntityStatusBank04(void);
void ApplyRecoilIfNeeded_04(void);
void UpdateEntityPosWithSpeed_04(void);
void UpdateEntityYPosWithSpeed_04(void);
void AddEntitySpeedToPos_04(void);
void AddEntityZSpeedToPos_04(void);
void KnightAddIronBallSpeedToPos(void);
void GetEntityXDistanceToLink_04(void);
void GetEntityYDistanceToLink_04(void);
void GetEntityDirectionToLink_04(void);
void TrendyGameOwnerEntityHandler(void);
void func_004_6E92(void);
void jr_004_6ECA(void);
void TrendyEntityJumpTable(void);
void Data_004_6F12(void);
void Data_004_6F15(void);
void Data_004_6F1B(void);
void Data_004_6F21(void);
void Data_004_6F30(void);
void func_004_6F38(void);
void jr_004_6F3C(void);
void func_004_6FC6(void);
void jr_004_6FE6(void);
void jr_004_701A(void);
void func_004_7020(void);
void func_004_7040(void);
void jr_004_704B(void);
void label_004_7056(void);
void ret_004_705C(void);
void jr_004_705D(void);
void func_004_707F(void);
void jr_004_70A6(void);
void jr_004_70F4(void);
void label_004_7104(void);
void func_004_7107(void);
void ret_004_710B(void);
void func_004_710C(void);
void jr_004_712B(void);
void jr_004_7141(void);
void jr_004_7152(void);
void func_004_7160(void);
void ret_004_7164(void);
void func_004_7165(void);
void func_004_7179(void);
void jr_004_7198(void);
void func_004_71B0(void);
void jr_004_71CF(void);
void jr_004_71E0(void);
void jr_004_71EF(void);
void func_004_71FF(void);
void func_004_723B(void);
void ret_004_7248(void);
void func_004_7249(void);
void func_004_727C(void);
void func_004_7296(void);
void func_004_72EF(void);
void jr_004_7325(void);
void func_004_732F(void);
void label_004_7332(void);
void jr_004_7362(void);
void func_004_73B7(void);
void Unknown093SpriteVariants(void);
void Unknown094SpriteVariants(void);
void func_004_73FE(void);
void jr_004_748F(void);
void jr_004_74B2(void);
void Unknown097SpriteVariants(void);
void Unknown096SpriteVariants(void);
void Data_004_74C1(void);
void Unknown095SpriteVariants(void);
void label_004_74D9(void);
void jr_004_7511(void);
void jr_004_7517(void);
void func_004_7529(void);
void func_004_753C(void);
void func_004_7543(void);
void func_004_7544(void);
void func_004_754C(void);
void func_004_7554(void);
void func_004_755C(void);
void func_004_7566(void);
void jr_004_7598(void);
void jr_004_75AA(void);
void TrendyPrizeDialogs(void);
void func_004_75BC(void);
void jr_004_7673(void);
void label_004_7680(void);
void func_004_7681(void);
void func_004_7698(void);
void Data_004_76A0(void);
void Data_004_76A5(void);
void label_004_76AA(void);
void func_004_76B3(void);
void Disabled4EEntityHandler(void);
void ShopOwnerSpriteVariants(void);
void ShopOwnerEntityHandler(void);
void jr_004_770E(void);
void Data_004_7732(void);
void Data_004_7775(void);
void Data_004_77B5(void);
void ShopItemPresentationDialogs(void);
void Data_004_77D3(void);
void Data_004_77DC(void);
void Data_004_77E5(void);
void Data_004_77EE(void);
void func_004_77F8(void);
void jr_004_7839(void);
void jr_004_784B(void);
void jr_004_7859(void);
void jr_004_7864(void);
void jr_004_7872(void);
void func_004_788E(void);
void jr_004_7897(void);
void Data_004_78A5(void);
void func_004_78AF(void);
void jr_004_7940(void);
void func_004_795D(void);
void label_004_796D(void);
void jr_004_7984(void);
void func_004_798B(void);
void jr_004_79AB(void);
void jr_004_79D9(void);
void jr_004_79F7(void);
void jr_004_7A00(void);
void jr_004_7A05(void);
void jr_004_7A09(void);
void jr_004_7A0C(void);
void jr_004_7A24(void);
void jr_004_7A2E(void);
void label_004_7A5F(void);
void boughtBow(void);
void bought10Arrows(void);
void boughtOcarina(void);
void boughtShop08(void);
void boughtMedicine(void);
void boughtShovel(void);
void bought10Bombs(void);
void bought3Hearts(void);
void boughtShield(void);
void func_004_7ADD(void);
void Data_004_7AE5(void);
void func_004_7AED(void);
void ret_004_7B3F(void);
void func_004_7B40(void);
void Data_004_7B56(void);
void Unknown091SpriteVariants(void);
void Data_004_7B5A(void);
void func_004_7B70(void);
void jr_004_7B72(void);
void jr_004_7BAC(void);
void func_004_7BB7(void);
void PushLinkOutOfEntity_04(void);
void func_004_7C06(void);
void func_004_7C4B(void);
void EntityVariantForDirection_04(void);
void SetEntityVariantForDirection_04(void);
void Bombite1SpriteVariants(void);
void Bombite2SpriteVariants(void);
void TimerBombiteEntityHandler(void);
void TimerBombiteSpeedXPerDirection(void);
void TimerBombiteSpeedYPerDirection(void);
void TimerBombiteWalkingHandler(void);
void TimerBombiteCountdownAnimation(void);
void TimerBombiteLitHandler(void);
void BouncingBombite1SpriteVariants(void);
void BouncingBombite2SpriteVariants(void);
void BouncingBombiteSpeedXPerDirection(void);
void BouncingBombiteSpeedYPerDirection(void);
void BouncingBombiteEntityHandler(void);
void BouncingBombiteWalkingHandler(void);
void BouncingBombiteTurningHandler(void);
void BouncingBombiteLitHandler(void);
void BombiteExplodeAndDisappear(void);
void BombiteExplode(void);
void LeeverSpriteVariants(void);
void LeeverEntityHandler(void);
void LeeverHidingHandler(void);
void LeeverEmergingSpriteVariantIndexes(void);
void LeeverEmergingHandler(void);
void LeeverChasingHandler(void);
void LeeverBurrowingSpriteVariantIndexes(void);
void LeeverBurrowingHandler(void);
void GhiniUpdateFlipAttribute(void);
void ReturnIfNonInteractive_04(void);

void GenieEntityHandler(void) {
    label_394D();
    BossIntro();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: GenieState0Handler(); return;
        case 0x01: GenieState1Handler(); return;
        case 0x02: GenieState2Handler(); return;
        case 0x03: GenieState3Handler(); return;
        case 0x04: GenieState4Handler(); return;
    }
}

void GenieState0Handler(void) {
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) goto GenieState0Handler_jr_404E;
    gb.regs.a = 0x5C;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 0x18);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x27);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    SmashRock_trampoline();
    gb.regs.a = 0x29;
    gb_write(0xFFF4, gb.regs.a);
    return;
  GenieState0Handler_jr_404E:;
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = gb.regs.c;
    gb_write(0xD202, gb.regs.a);
    func_004_42B3();
    ReturnIfNonInteractive_04();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x81);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x80);
    AddEntityZSpeedToPos_04();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto GenieState0Handler_jr_4085;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  GenieState0Handler_jr_4085:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_4090(); return;
        case 0x01: func_004_40A3(); return;
        case 0x02: func_004_4155(); return;
        case 0x03: func_004_4214(); return;
    }
}

void func_004_4090(void) {
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_C()) goto func_004_4090_ret_409E;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
  func_004_4090_ret_409E:;
    return;
}

void Data_004_409F(void) {
    /* data: db $00, $01, $00, $02 */;
}

void func_004_40A3(void) {
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    label_3B44();
    if (!GET_FLAG_C()) goto func_004_40A3_jr_40C7;
    ResetPegasusBoots();
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x14;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFF9A, gb.regs.a);
  func_004_40A3_jr_40C7:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_4118(); return; };
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_004_40A3_jr_40DF;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = 0x20;
    gb_write(0xFFF2, gb.regs.a);
  func_004_40A3_jr_40DF:;
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x50;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x48;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto func_004_40A3_jr_410F;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto func_004_40A3_jr_410F;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_004_40A3_jr_410F:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_04();
}

void jr_004_4118(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_004_4144(); return; };
    gb.regs.a = 0x5C;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 0x26);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x47);
    gb.regs.a = 6;
    gb_write(0xFFF2, gb.regs.a);
}

void label_004_4144(void) {
}

void jr_004_4144(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x409F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void func_004_4155(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_004_41AC(); return; };
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto func_004_4155_jr_4163;
    IncrementEntityState();
    gb_write(gb.regs.hl, 3);
    return;
  func_004_4155_jr_4163:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_41A6(); return; };
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x28);
    if (GET_FLAG_C()) goto func_004_4155_jr_418D;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto func_004_4155_jr_418D;
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_004_4155_jr_418D;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog17F */;
  func_004_4155_jr_418D:;
    ClearEntitySpeed();
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_C()) { jr_004_41A9(); return; };
    gb.regs.e = 8;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_004_4155_jr_41A1;
    gb.regs.e = 0xF8;
  func_004_4155_jr_41A1:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
}

void jr_004_41A6(void) {
    UpdateEntityPosWithSpeed_04();
}

void jr_004_41A9(void) {
    ApplyEntityInteractionWithBackground_trampoline();
}

void jr_004_41AC(void) {
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    PushLinkOutOfEntity_04();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { jr_004_4210(); return; };
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { jr_004_4210(); return; };
    ResetPegasusBoots();
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_004_41AC_checkAButtonSlot;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_004_41EC(); return; };
    jr_004_4210(); return;
  jr_004_41AC_checkAButtonSlot:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_004_4210(); return; };
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_004_4210(); return; };
}

void jr_004_41EC(void) {
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_4210(); return; };
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC3CF, gb.regs.a);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 7);
    gb.regs.hl = 0xC490;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFF9E);
    gb_write(0xC15D, gb.regs.a);
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 2);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
}

void jr_004_4210(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void func_004_4214(void) {
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_4214_jr_4245;
    gb_write(gb.regs.hl, gb.regs.b);
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 8;
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
    gb_write(gb.regs.hl, 0xC0);
    return;
  func_004_4214_jr_4245:;
    ApplyRecoilIfNeeded_04();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_NO_GROUND_INTERACTION);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_004_4214_jr_4278;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = 0x20;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0x0C;
    ApplyVectorTowardsLink_trampoline();
  func_004_4214_jr_4278:;
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline();
    label_004_4144(); return;
}

void Data_004_4281(void) {
    /* data: db $F0, $00, $76, $06, $F0, $08, $76, $26 */;
    /* data: db $00, $00, $78, $06, $00, $08, $78, $26 */;
    /* data: db $F0, $00, $7A, $06, $F0, $08, $7C, $06 */;
    /* data: db $00, $00, $7E, $06, $00, $08, $7E, $26 */;
    /* data: db $F0, $00, $7C, $26, $F0, $08, $7A, $26 */;
    /* data: db $00, $00, $7E, $06, $00, $08, $7E, $26 */;
}

void Data_004_42B1(void) {
    /* data: db $26, $00 */;
}

void func_004_42B3(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4281;
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
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x42B1;
    RenderActiveEntitySprite();
    CopyEntityPositionToActivePosition(); return;
}

void GenieState1Handler(void) {
    func_004_46F9();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_004_431A(); return; };
}

void label_004_42F0(void) {
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: GenieKilledHandler0(); return;
        case 0x01: GenieKilledHandler1(); return;
        case 0x02: GenieKilledHandler2(); return;
    }
}

void GenieKilledHandler0(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState(); return;
}

void GenieKilledHandler1(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0xA0);
    IncrementEntityState(); return;
}

void GenieKilledHandler2(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { DropHeartContainer_04(); return; };
    BossDeathRandomExplosion(); return;
}

void jr_004_431A(void) {
    ReturnIfNonInteractive_04();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD200, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD201, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto jr_004_431A_jr_4336;
    label_3B44();
  jr_004_431A_jr_4336:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_4345(); return;
        case 0x01: func_004_4380(); return;
        case 0x02: func_004_449F(); return;
        case 0x03: func_004_44E9(); return;
        case 0x04: func_004_4517(); return;
        case 0x05: func_004_4575(); return;
    }
}

void func_004_4345(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.a = gb_read(0xD202);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low a, Dialog052 */;
    if (!GET_FLAG_Z()) goto func_004_4345_jr_436D;
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    /* ld_dialog_low a, Dialog053 */;
  func_004_4345_jr_436D:;
    OpenDialogInTable0(); return;
}

void Data_004_4370(void) {
    /* data: db $10, $14, $18, $20, $28, $30, $38, $40 */;
    /* data: db $FF, $FF */;
}

void Data_004_437A(void) {
    /* data: db $60, $40 */;
}

void Data_004_437C(void) {
    /* data: db 1, -1 */;
}

void Data_004_437E(void) {
    /* data: db 8, -8 */;
}

void func_004_4380(void) {
    UpdateEntityPosWithSpeed_04();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_004_43A6(); return; };
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
  func_004_4380_jr_4394:;
    gb.regs.hl = 0x437E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { jr_004_43A6(); return; };
    gb.regs.hl = 0x437C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_004_43A6(void) {
    gb.regs.hl = 0x437A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_004_43A6_jr_43B7;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_004_43A6_jr_43B7:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_004_43A6_jr_43DD;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x437C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x437E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_004_43A6_jr_43DD;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_004_43A6_jr_43DD:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_004_4438(); return; };
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto jr_004_43A6_jr_43FF;
    IncrementEntityState();
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, 0x30);
    return;
  jr_004_43A6_jr_43FF:;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4370;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x5C;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { jr_004_4438(); return; };
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_sub8(gb.regs.a, 0x14);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x42);
}

void jr_004_4438(void) {
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto jr_004_4438_jr_4487;
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = 0x5C;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto jr_004_4438_jr_4487;
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x449D;
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
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x24);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x1F;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = 0x28;
    gb_write(0xFFF4, gb.regs.a);
  jr_004_4438_jr_4487:;
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = 2;
    if (GET_FLAG_Z()) goto jr_004_4438_jr_449A;
    gb.regs.a = alu_inc8(gb.regs.a);
  jr_004_4438_jr_449A:;
    SetEntitySpriteVariant(); return;
}

void Data_004_449D(void) {
    /* data: db $F4, $0C */;
}

void func_004_449F(void) {
    gb.regs.a = gb_read(0xD202);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
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
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    UpdateEntityPosWithSpeed_04();
    gb.regs.hl = 0xFF98;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_004_449F_jr_44E2;
    gb.regs.hl = 0xFF99;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_004_449F_jr_44E2;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    IncrementEntityState();
  func_004_449F_jr_44E2:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    return;
}

void func_004_44E9(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatusBank04(); return; };
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto func_004_44E9_ret_4516;
    gb.regs.a = 0x5C;
    SpawnNewEntity_trampoline();
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
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC7);
    gb.regs.a = 0x1F;
    gb_write(0xFFF2, gb.regs.a);
  func_004_44E9_ret_4516:;
    return;
}

void func_004_4517(void) {
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_NO_WALL_COLLISION);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_004_4517_jr_4535;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    return;
  func_004_4517_jr_4535:;
    ApplyRecoilIfNeeded_04();
    label_3B70();
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_004_4568(); return; };
    gb.regs.a = 0x10;
    GetVectorTowardsLink_trampoline();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_004_4517_jr_4559;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_004_4517_jr_4559:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_004_4517_jr_4567;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_004_4517_jr_4567:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void label_004_4568(void) {
}

void jr_004_4568(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    SetEntitySpriteVariant(); return;
}

void func_004_4575(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x41);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_004_45F1(); return; };
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_004_4575_jr_45A6;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  func_004_4575_jr_45A6:;
    ClearEntitySpeed();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x5C;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto func_004_4575_ret_45F0;
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x449D;
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
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x24);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x1F;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
    gb.regs.a = 0x28;
    gb_write(0xFFF4, gb.regs.a);
  func_004_4575_ret_45F0:;
    return;
}

void jr_004_45F1(void) {
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x50;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x48;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x20;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD8);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFD7);
    gb_push16(gb.regs.af);
    gb.regs.a = 4;
    GetVectorTowardsLink_trampoline();
    gb.regs.hl = 0xFFD8;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xFFD7;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_04();
    func_004_4634();
    label_004_4568(); return;
}

void func_004_4634(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x48);
    gb.regs.e = gb.regs.a;
    gb.regs.a = 0x48;
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.e = gb.regs.a;
    gb.regs.a = 0x50;
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void Data_004_4655(void) {
    /* data: db $F0, $F4, $60, $02, $F0, $FC, $62, $02 */;
    /* data: db $F0, $04, $64, $02, $F0, $0C, $62, $22 */;
    /* data: db $F0, $14, $60, $22, $00, $F4, $66, $02 */;
    /* data: db $00, $FC, $68, $02, $00, $04, $6A, $02 */;
    /* data: db $00, $0C, $68, $22, $00, $14, $66, $22 */;
    /* data: db $F0, $F4, $60, $02, $F0, $FC, $62, $02 */;
    /* data: db $F0, $04, $64, $22, $F0, $0C, $62, $22 */;
    /* data: db $F0, $14, $60, $22, $00, $F4, $66, $02 */;
    /* data: db $00, $FC, $68, $02, $00, $04, $6A, $22 */;
    /* data: db $00, $0C, $68, $22, $00, $14, $66, $22 */;
    /* data: db $F0, $F4, $60, $02, $F0, $FC, $62, $02 */;
    /* data: db $F0, $04, $64, $02, $F0, $0C, $6C, $02 */;
    /* data: db $F0, $14, $6E, $02, $00, $F4, $66, $02 */;
    /* data: db $00, $FC, $68, $02, $00, $04, $6A, $02 */;
    /* data: db $00, $0C, $70, $02, $00, $14, $72, $02 */;
    /* data: db $F0, $F4, $6E, $22, $F0, $FC, $6C, $22 */;
    /* data: db $F0, $04, $64, $22, $F0, $0C, $62, $22 */;
    /* data: db $F0, $14, $60, $22, $00, $F4, $72, $22 */;
    /* data: db $00, $FC, $70, $22, $00, $04, $6A, $22 */;
    /* data: db $00, $0C, $68, $22, $00, $14, $66, $22 */;
}

void Data_004_46F5(void) {
    /* data: db $74, $02, $74, $22 */;
}

void func_004_46F9(void) {
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto func_004_46F9_jr_4713;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_004_46F9_jr_4713;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
  func_004_46F9_jr_4713:;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4655;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 0x0A;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 0x0A;
    func_015_7964_trampoline();
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x46F5;
    RenderActiveEntitySprite();
    CopyEntityPositionToActivePosition(); return;
}

void Data_004_474D(void) {
    /* data: db $10, $00, $1E, $01, $10, $08, $1E, $61 */;
    /* data: db $10, $00, $1E, $01, $10, $08, $1E, $61 */;
    /* data: db $10, $00, $1E, $01, $10, $08, $1E, $61 */;
    /* data: db $10, $00, $1E, $01, $10, $08, $1E, $61 */;
    /* data: db $08, $00, $30, $01, $08, $08, $30, $61 */;
    /* data: db $08, $00, $30, $01, $08, $08, $30, $61 */;
    /* data: db $08, $00, $30, $01, $08, $08, $30, $61 */;
    /* data: db $08, $00, $30, $01, $08, $08, $30, $61 */;
    /* data: db $04, $00, $30, $01, $04, $08, $30, $61 */;
    /* data: db $14, $00, $1E, $01, $14, $08, $1E, $61 */;
    /* data: db $14, $00, $1E, $01, $14, $08, $1E, $61 */;
    /* data: db $14, $00, $1E, $01, $14, $08, $1E, $61 */;
    /* data: db $00, $00, $30, $01, $00, $08, $30, $61 */;
    /* data: db $10, $00, $1E, $01, $10, $08, $1E, $61 */;
    /* data: db $10, $00, $1E, $01, $10, $08, $1E, $61 */;
    /* data: db $10, $00, $1E, $01, $10, $08, $1E, $61 */;
    /* data: db $F2, $FA, $30, $01, $F2, $02, $30, $61 */;
    /* data: db $F2, $06, $30, $01, $F2, $0E, $30, $61 */;
    /* data: db $FE, $FA, $30, $01, $FE, $02, $30, $61 */;
    /* data: db $FE, $06, $30, $01, $FE, $0E, $30, $61 */;
    /* data: db $F0, $F8, $30, $41, $F0, $00, $30, $21 */;
    /* data: db $F0, $08, $30, $41, $F0, $10, $30, $21 */;
    /* data: db $00, $F8, $30, $41, $00, $00, $30, $21 */;
    /* data: db $00, $08, $30, $41, $00, $10, $30, $21 */;
    /* data: db $F0, $F8, $32, $01, $F0, $00, $32, $61 */;
    /* data: db $F0, $08, $32, $01, $F0, $10, $32, $61 */;
    /* data: db $00, $F8, $32, $01, $00, $00, $32, $61 */;
    /* data: db $00, $08, $32, $01, $00, $10, $32, $61 */;
}

void Data_004_482D(void) {
    /* data: db $06, $05, $04, $05, $04, $03, $02, $01, $00 */;
}

void Data_004_4836(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $04, $05, $06 */;
}

void GenieState2Handler(void) {
    func_004_48B8();
    ReturnIfNonInteractive_04();
    GetEntityTransitionCountdown();
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) { jr_004_486D(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    if (!GET_FLAG_Z()) goto GenieState2Handler_jr_485E;
    gb.regs.a = gb_read(0xD202);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    ClearEntityStatusBank04(); return;
  GenieState2Handler_jr_485E:;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4836;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void jr_004_486D(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ClearEntityStatusBank04(); return; };
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) { jr_004_48A6(); return; };
    gb.regs.a = 0x5C;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_C()) goto jr_004_486D_jr_4889;
    gb.regs.a = 0x14;
  jr_004_486D_jr_4889:;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x8C);
}

void jr_004_48A6(void) {
    GetEntityTransitionCountdown();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x482D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void func_004_48B8(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x474D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 8;
    func_015_7964_trampoline(); return;
}

void Unknown012SpriteVariants(void) {
  Unknown012SpriteVariants_variant0:;
    /* data: db $34, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $34, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  Unknown012SpriteVariants_variant1:;
    /* data: db $34, OAM_GBC_PAL_2 | OAMF_PAL1 */;
    /* data: db $34, OAM_GBC_PAL_2 | OAMF_PAL1 | OAMF_XFLIP */;
}

void GenieState3Handler(void) {
    gb.regs.de = 0x48C0;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_04();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    UpdateEntityPosWithSpeed_04();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_4938(); return; };
    AddEntityZSpeedToPos_04();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto GenieState3Handler_ret_4937;
    gb_write(gb.regs.hl, gb.regs.b);
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xE0);
  GenieState3Handler_ret_4937:;
    return;
}

void jr_004_4938(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatusBank04(); return; };
}

void GenieState4Handler(void) {
    gb.regs.de = 0x48C0;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_04();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    label_3B44();
    UpdateEntityPosWithSpeed_04();
    AddEntityZSpeedToPos_04();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank04(); return; };
    return;
}

void Data_004_496B(void) {
    /* data: db $EE, $12 */;
}

void Data_004_496D(void) {
    /* data: db $F8, $08 */;
}

void label_004_496F(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
  label_004_496F_loop:;
    gb.regs.a = 0x5B;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x496B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x496D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 5);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto label_004_496F_loop;
    ClearEntityStatusBank04(); return;
}

void EntityInitSlimeEye(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x7E);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    return;
}

void SlimeEyeEntityHandler(void) {
    label_394D();
    BossIntro();
    func_004_4E52();
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_004_49DC(); return;
        case 0x01: func_004_4DFB(); return;
    }
}

void func_004_49DC(void) {
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: SlimeEyeState0Handler(); return;
        case 0x01: SlimeEyeState1Handler(); return;
        case 0x02: SlimeEyeState2Handler(); return;
        case 0x03: SlimeEyeState3Handler(); return;
    }
}

void SlimeEyeState0Handler(void) {
    gb.regs.a = gb_read(0xC157);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto SlimeEyeState0Handler_jr_49FB;
    IncrementEntityState();
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
  SlimeEyeState0Handler_jr_49FB:;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SlimeEyeState0Handler_ret_4A2C;
    gb_write(gb.regs.hl, 0x50);
    gb.regs.a = gb_read(0xC1AE);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto SlimeEyeState0Handler_ret_4A2C;
    gb.regs.a = 0x1B;
    SpawnNewEntity_trampoline();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x70);
  SlimeEyeState0Handler_ret_4A2C:;
    return;
}

void SlimeEyeState1Handler(void) {
    func_004_4DB5();
    ReturnIfNonInteractive_04();
    AddEntityZSpeedToPos_04();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xA0);
    if (GET_FLAG_Z()) goto SlimeEyeState1Handler_jr_4A41;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  SlimeEyeState1Handler_jr_4A41:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x50;
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xC158, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    PlayBombExplosionSfx();
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SlimeEyeState1Handler_jr_4A67;
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x14);
  SlimeEyeState1Handler_jr_4A67:;
    IncrementEntityState(); return;
}

void SlimeEyeState2Handler(void) {
    func_004_4DB5();
    ReturnIfNonInteractive_04();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SlimeEyeState2Handler_jr_4A78;
    IncrementEntityState();
  SlimeEyeState2Handler_jr_4A78:;
    func_004_4B2E();
    label_3B44(); return;
}

void SlimeEyeState3Handler(void) {
    func_004_4DB5();
    ReturnIfNonInteractive_04();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_004_4AA5(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { label_004_496F(); return; };
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto SlimeEyeState3Handler_jr_4AA0;
    gb.regs.hl = 0xFF99;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  SlimeEyeState3Handler_jr_4AA0:;
    gb.regs.a = 6;
    SetEntitySpriteVariant(); return;
}

void jr_004_4AA5(void) {
    func_004_4B52();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_4AA5_jr_4ACB;
    gb.regs.a = alu_inc8(gb.regs.a);
    SetEntitySpriteVariant();
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto jr_004_4AA5_jr_4ACB;
    gb_write(gb.regs.hl, 0x28);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  jr_004_4AA5_jr_4ACB:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = 0x14;
    func_004_4B37();
    label_3B70();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_004_4AA5_jr_4AEF;
    func_004_4B2E();
    label_3B44();
    gb.regs.a = 1;
    gb_write(0xFFE8, gb.regs.a);
    label_3B70();
  jr_004_4AA5_jr_4AEF:;
    gb.regs.a = 0x14;
    func_004_4B37();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_4AA5_ret_4B11;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto jr_004_4AA5_ret_4B11;
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto jr_004_4AA5_ret_4B11;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_004_4AA5_ret_4B11:;
    return;
}

void Data_004_4B12(void) {
    /* data: db $08, $14, $00, $0C, $08, $15, $00, $0B */;
    /* data: db $08, $16, $00, $08, $08, $17, $00, $06 */;
    /* data: db $08, $18, $00, $04, $08, $03, $08, $03 */;
    /* data: db $08, $0C, $02, $0C */;
}

void func_004_4B2E(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
}

void func_004_4B37(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4B12;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = 4;
  func_004_4B37_loop_4B4A:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_004_4B37_loop_4B4A;
    gb.regs.bc = gb_pop16();
    return;
}

void func_004_4B52(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_004_4B7C(); return;
        case 0x01: func_004_4BC7(); return;
    }
}

void Data_004_4B5C(void) {
    /* data: db $10, $0C */;
    /* data: db $06, $02 */;
    /* data: db $F0, $F4 */;
    /* data: db $FA, $FE */;
    /* data: db $10, $0C */;
    /* data: db $06, $02 */;
    /* data: db $F0, $F4 */;
    /* data: db $FA, $FE */;
}

void Data_004_4B6C(void) {
    /* data: db $02, $06 */;
    /* data: db $0C, $10 */;
    /* data: db $02, $06 */;
    /* data: db $0C, $10 */;
    /* data: db $FE, $FA */;
    /* data: db $F4, $F0 */;
    /* data: db $FE, $FA */;
    /* data: db $F4, $F0 */;
}

void func_004_4B7C(void) {
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_004_4BC6(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_C()) goto func_004_4B7C_jr_4B98;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_004_4B7C_jr_4B98:;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x48);
    if (GET_FLAG_C()) goto func_004_4B7C_jr_4BA2;
    gb.regs.d = alu_inc8(gb.regs.d);
    gb.regs.d = alu_inc8(gb.regs.d);
  func_004_4B7C_jr_4BA2:;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb_push16(gb.regs.af);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.de = gb_pop16();
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4B5C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4B6C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void ret_004_4BC6(void) {
    return;
}

void func_004_4BC7(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto func_004_4BC7_jr_4BD5;
    gb.regs.a = alu_and8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) return;
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline(); return;
  func_004_4BC7_jr_4BD5:;
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void Data_004_4BDD(void) {
    /* data: db $F0, $F0, $60, $03, $F0, $F8, $62, $03, $F0, $00, $70, $03, $F0, $08, $70, $23 */;
    /* data: db $F0, $10, $62, $23, $F0, $18, $60, $23, $00, $F0, $64, $03, $00, $F8, $6E, $03 */;
    /* data: db $00, $00, $72, $03, $00, $08, $72, $23, $00, $10, $6E, $23, $00, $18, $64, $23 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00, $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $F0, $F0, $68, $03, $F0, $F8, $6A, $03, $F0, $00, $7E, $03, $F0, $08, $7E, $23 */;
    /* data: db $F0, $10, $6A, $23, $F0, $18, $68, $23, $00, $F0, $6C, $03, $00, $F8, $6E, $03 */;
    /* data: db $00, $00, $72, $03, $00, $08, $72, $23, $00, $10, $6E, $23, $00, $18, $6C, $23 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00, $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $F0, $F0, $60, $03, $F0, $F8, $62, $03, $F0, $00, $62, $23, $F0, $08, $62, $03 */;
    /* data: db $F0, $10, $62, $23, $F0, $18, $60, $23, $00, $F0, $64, $03, $00, $F8, $66, $03 */;
    /* data: db $00, $00, $66, $23, $00, $08, $66, $03, $00, $10, $66, $23, $00, $18, $64, $23 */;
    /* data: db $00, $00, $FF, $00, $00, $00, $FF, $00, $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $F0, $EC, $60, $03, $F0, $F4, $62, $03, $F0, $FC, $62, $23, $F0, $04, $74, $03 */;
    /* data: db $F0, $0C, $62, $03, $F0, $14, $62, $23, $F0, $1C, $60, $23, $00, $EC, $64, $03 */;
    /* data: db $00, $F4, $66, $03, $00, $FC, $66, $23, $00, $04, $76, $03, $00, $0C, $66, $03 */;
    /* data: db $00, $14, $66, $23, $00, $1C, $64, $23, $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $F0, $E8, $60, $03, $F0, $F0, $62, $03, $F0, $F8, $62, $23, $F0, $00, $78, $03 */;
    /* data: db $F0, $08, $78, $23, $F0, $10, $62, $03, $F0, $18, $62, $23, $F0, $20, $60, $23 */;
    /* data: db $00, $E8, $64, $03, $00, $F0, $66, $03, $00, $F8, $66, $23, $00, $00, $7A, $03 */;
    /* data: db $00, $08, $7A, $23, $00, $10, $66, $03, $00, $18, $66, $23, $00, $20, $64, $23 */;
    /* data: db $F0, $E8, $60, $03, $F0, $F0, $62, $03, $F0, $F8, $62, $23, $F0, $00, $78, $03 */;
    /* data: db $F0, $08, $78, $23, $F0, $10, $62, $03, $F0, $18, $62, $23, $F0, $20, $60, $23 */;
    /* data: db $00, $E8, $64, $03, $00, $F0, $66, $03, $00, $F8, $66, $23, $00, $00, $7C, $03 */;
    /* data: db $00, $08, $7C, $23, $00, $10, $66, $03, $00, $18, $66, $23, $00, $20, $64, $23 */;
    /* data: db $F0, $E6, $60, $03, $F0, $EE, $62, $03, $F0, $F6, $62, $23, $F0, $FE, $78, $03 */;
    /* data: db $F0, $0A, $78, $23, $F0, $12, $62, $03, $F0, $1A, $62, $23, $F0, $22, $60, $23 */;
    /* data: db $00, $E6, $64, $03, $00, $EE, $66, $03, $00, $F6, $66, $23, $00, $FE, $7C, $03 */;
    /* data: db $00, $0A, $7C, $23, $00, $12, $66, $03, $00, $1A, $66, $23, $00, $22, $64, $23 */;
}

void Data_004_4D9D(void) {
    /* data: db $0C, $F5, $26, $00, $0C, $FB, $26, $00, $0C, $01, $26, $00, $0C, $07, $26, $00 */;
    /* data: db $0C, $0D, $26, $00, $0C, $13, $26, $00 */;
}

void func_004_4DB5(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
  func_004_4DB5_jr_4DBE:;
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = alu_and8(gb.regs.a, 0xC0);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4BDD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 0x10;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 0x10;
    func_015_7964_trampoline();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x4D9D;
    gb.regs.c = 6;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 6;
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition(); return;
}

void func_004_4DFB(void) {
    func_004_4FFE();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { label_004_4E60(); return; };
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_4E15(); return;
        case 0x01: func_004_4E1D(); return;
        case 0x02: func_004_4E26(); return;
    }
}

void func_004_4E15(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState(); return;
}

void func_004_4E1D(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0xA0);
    IncrementEntityState(); return;
}

void func_004_4E26(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_004_4E4F(); return; };
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
}

void jr_004_4E2E(void) {
    loop_start: ;
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto jr_004_4E2E_jr_4E43;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_4E2E_jr_4E43;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x5B);
    if (GET_FLAG_Z()) { jr_004_4E4C(); return; };
  jr_004_4E2E_jr_4E43:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { goto loop_start; };
    DropHeartContainer_04(); return;
}

void jr_004_4E4C(void) {
    ClearEntityStatusBank04(); return;
}

void jr_004_4E4F(void) {
    BossDeathRandomExplosion(); return;
}

void func_004_4E52(void) {
    GetEntitySlowTransitionCountdown();
    if (GET_FLAG_Z()) goto func_004_4E52_ret_4E5F;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 0x6A;
    gb_write(0xFF9D, gb.regs.a);
  func_004_4E52_ret_4E5F:;
    return;
}

void label_004_4E60(void) {
    ReturnIfNonInteractive_04();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { jr_004_4E83(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_004_4E60_jr_4E82;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    gb.regs.a = 0x24;
    gb_write(0xFFF2, gb.regs.a);
    ClearEntitySpeed();
    jr_004_4E83(); return;
  label_004_4E60_jr_4E82:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void jr_004_4E83(void) {
    ApplyRecoilIfNeeded_04();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_4EA4(); return;
        case 0x01: func_004_4EEB(); return;
        case 0x02: func_004_4F65(); return;
        case 0x03: func_004_4F7E(); return;
    }
}

void Data_004_4E94(void) {
    /* data: db $10, $0C, $00, $F4, $F0, $F4, $00, $0C */;
}

void Data_004_4E9C(void) {
    /* data: db $00, $0C, $10, $0C, $00, $F4, $F0, $F4 */;
}

void func_004_4EA4(void) {
    gb.regs.a = 0x18;
    func_004_4B37();
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_004_4EE7(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4E94;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4E9C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_004_4EA4_jr_4ED8;
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline();
  func_004_4EA4_jr_4ED8:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
}

void jr_004_4EE7(void) {
    gb.regs.a = gb.regs.b;
    SetEntitySpriteVariant(); return;
}

void func_004_4EEB(void) {
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_4F60(); return; };
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline();
    AddEntityZSpeedToPos_04();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x18;
    func_004_4B37();
    label_3B44();
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_004_4EEB_jr_4F14;
    label_3B70();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_004_4EEB_jr_4F14:;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_004_4F60(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0xE0);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_004_4EEB_jr_4F49;
    gb.regs.a = 0x18;
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_004_4EEB_jr_4F49;
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x0E);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    jr_004_4F57(); return;
  func_004_4EEB_jr_4F49:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, gb.regs.b);
    alu_cp8(gb.regs.a, 0xF2);
    if (!GET_FLAG_C()) { jr_004_4F57(); return; };
    gb.regs.a = 0x20;
    gb_write(0xFFF2, gb.regs.a);
}

void jr_004_4F57(void) {
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
}

void jr_004_4F60(void) {
    gb.regs.a = 1;
    SetEntitySpriteVariant(); return;
}

void func_004_4F65(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x60);
    AddEntityZSpeedToPos_04();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x70);
    if (GET_FLAG_C()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState(); return;
}

void func_004_4F7E(void) {
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_004_4F7E_ret_4FAD;
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC0);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
  func_004_4F7E_ret_4FAD:;
    return;
}

void Data_004_4FAE(void) {
    /* data: db $F0, $F8, $60, $03, $F0, $00, $62, $03, $F0, $08, $62, $23, $F0, $10, $60, $23 */;
    /* data: db $00, $F8, $64, $03, $00, $00, $66, $03, $00, $08, $66, $23, $00, $10, $64, $23 */;
    /* data: db $F0, $F8, $68, $03, $F0, $00, $6A, $03, $F0, $08, $6A, $23, $F0, $10, $68, $23 */;
    /* data: db $00, $F8, $6C, $03, $00, $00, $66, $03, $00, $08, $66, $23, $00, $10, $6C, $23 */;
}

void Data_004_4FEE(void) {
    /* data: db $0C, $FB, $26, $00, $0C, $01, $26, $00, $0C, $07, $26, $00, $0C, $0D, $26, $00 */;
}

void func_004_4FFE(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4FAE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 8;
    func_015_7964_trampoline();
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto func_004_4FFE_jr_5048;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_4FFE_jr_5048;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x4FEE;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
  func_004_4FFE_jr_5048:;
    CopyEntityPositionToActivePosition(); return;
}

void EntityInitFacade(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    func_004_5067();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
}

void func_004_5067(void) {
    gb.regs.a = gb_read(gb.regs.hl);
}

void func_004_5068(void) {
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant(); return;
}

void FacadeEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: FacadeMainBossHandler(); return;
        case 0x01: FacadePitHandler(); return;
        case 0x02: FacadeFlyingTileHandler(); return;
        case 0x03: FacadeFlyingPotHandler(); return;
    }
}

void FacadeMainBossHandler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC155, gb.regs.a);
    BossIntro();
    label_394D();
    FacadeRenderFace();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { FacadeMainBossNotDead(); return; };
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: FacadeDeathState0(); return;
        case 0x01: FacadeDeathState1(); return;
        case 0x02: FacadeDeathState2(); return;
    }
}

void FacadeDeathState0(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
  FacadeDeathState0_jr_50AD:;
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto FacadeDeathState0_jr_50D5;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto FacadeDeathState0_jr_50D5;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) goto FacadeDeathState0_jr_50D5;
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x1F);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
  FacadeDeathState0_jr_50D5:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto FacadeDeathState0_jr_50AD;
}

void jr_004_50DB(void) {
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void FacadeDeathState1(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0xFF);
    jr_004_50DB(); return;
}

void FacadeDeathState2(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { DropHeartContainer_04(); return; };
}

void BossDeathRandomExplosion(void) {
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
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    CreatePoofVfx(); return;
}

void FacadeMainBossNotDead(void) {
    ReturnIfNonInteractive_04();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FacadeMainBossNotDead_notFlashing;
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
  FacadeMainBossNotDead_notFlashing:;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: FacadeMainBossState0(); return;
        case 0x01: FacadeMainBossState1(); return;
        case 0x02: FacadeMainBossState2(); return;
    }
}

void FacadeMainBossState0(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityState(); return;
}

void Data_004_5138(void) {
    /* data: db $03, $03, $03, $03, $03, $02, $01, $00, $01, $00, $01, $01, $01, $01, $01, $01 */;
    /* data: db $01, $01, $01, $01, $01, $01, $01, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void FacadeMainBossState1(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto FacadeMainBossState1_countdownReachedZero;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5138;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
  FacadeMainBossState1_countdownReachedZero:;
    IncrementEntityState();
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0xA0);
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
    /* jp_open_dialog Dialog0B6 */;
}

void Data_004_517E(void) {
    /* data: db $03, $02, $04, $02 */;
}

void Data_004_5182(void) {
    /* data: db $28, $38, $48, $58, $68, $78, $28, $78, $28, $78, $28, $38, $48, $58, $68, $78 */;
}

void Data_004_5192(void) {
    /* data: db $30, $30, $30, $30, $30, $30, $40, $40, $50, $50, $60, $60, $60, $60, $60, $60 */;
}

void Data_004_51A2(void) {
    /* data: db $28, $38, $48, $58, $68, $78, $18, $88, $18, $88, $18, $88, $18, $88, $28, $38 */;
    /* data: db $48, $58, $68, $78 */;
}

void Data_004_51B6(void) {
    /* data: db $20, $20, $20, $20, $20, $20, $30, $30, $40, $40, $50, $50, $60, $60, $70, $70 */;
    /* data: db $70, $70, $70, $70 */;
}

void Data_004_51CA(void) {
    /* data: db $00, $13, $01, $12, $02, $11, $03, $10, $04, $0F, $05, $0E, $06, $0D, $07, $0C */;
    /* data: db $08, $0B, $09, $0A */;
}

void Data_004_51DE(void) {
    /* data: db $18, $88, $18, $88 */;
}

void Data_004_51E2(void) {
    /* data: db $20, $70, $70, $20 */;
}

void Data_004_51E6(void) {
    /* data: db $00, $FF */;
}

void FacadeMainBossState2(void) {
    gb.regs.a = gb_read(0xFFE7);
  FacadeMainBossState2_jr_51EA:;
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) { jr_004_51FA(); return; };
  FacadeMainBossState2_jr_51EE:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_004_51FA(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x1F);
}

void jr_004_51FA(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.e = gb.regs.a;
  jr_004_51FA_jr_5202:;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x51E6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC155, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_004_5273(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_C()) { jr_004_5273(); return; };
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) { jr_004_5273(); return; };
    gb.regs.a = 0x5A;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { jr_004_5273(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
  jr_004_51FA_loop_5237:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto jr_004_51FA_loop_5237;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x5182;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5192;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x7F);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb.regs.bc = gb_pop16();
}

void jr_004_5273(void) {
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto jr_004_5273_jr_52C9;
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_C()) goto jr_004_5273_jr_52C9;
    gb.regs.a = 0x5A;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto jr_004_5273_jr_52C9;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0x51CA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.hl = 0x51A2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x51B6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC4D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.bc = gb_pop16();
  jr_004_5273_jr_52C9:;
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_5340(); return; };
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) { jr_004_5340(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x12);
    if (GET_FLAG_C()) { jr_004_5340(); return; };
    gb.regs.a = 0x5A;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { jr_004_5340(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0x51DE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x51E2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFEF, gb.regs.a);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC4D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x1B);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_004_5273_jr_533F;
    ClearEntityStatusBank04();
  jr_004_5273_jr_533F:;
    gb.regs.bc = gb_pop16();
}

void jr_004_5340(void) {
    GetEntityTransitionCountdown();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x517E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_5340_jr_535F;
    gb.regs.a = 2;
    SetEntitySpriteVariant();
  jr_004_5340_jr_535F:;
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_5340_ret_537E;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x537F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x48);
  jr_004_5340_ret_537E:;
    return;
}

void Data_004_537F(void) {
    /* data: db $02, $01, $00, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $00, $01, $02 */;
}

void Data_004_538F(void) {
    /* data: db $F8, $F0, $70, $03, $F8, $F8, $72, $03, $F8, $10, $72, $23, $F8, $18, $70, $23 */;
    /* data: db $08, $F8, $7C, $03, $08, $00, $7E, $03, $08, $08, $7E, $23, $08, $10, $7C, $23 */;
    /* data: db $F8, $F0, $74, $03, $F8, $F8, $76, $03, $F8, $10, $76, $23, $F8, $18, $74, $23 */;
    /* data: db $08, $F8, $7C, $03, $08, $00, $7E, $03, $08, $08, $7E, $23, $08, $10, $7C, $23 */;
    /* data: db $F8, $F0, $74, $03, $F8, $F8, $76, $03, $F8, $10, $76, $23, $F8, $18, $74, $23 */;
    /* data: db $08, $F8, $60, $03, $08, $00, $62, $03, $08, $08, $62, $23, $08, $10, $60, $23 */;
    /* data: db $F8, $F0, $78, $03, $F8, $F8, $7A, $03, $F8, $10, $7A, $23, $F8, $18, $78, $23 */;
    /* data: db $08, $F8, $60, $03, $08, $00, $62, $03, $08, $08, $62, $23, $08, $10, $60, $23 */;
    /* data: db $F8, $F0, $70, $03, $F8, $F8, $72, $03, $F8, $10, $72, $23, $F8, $18, $70, $23 */;
    /* data: db $08, $F8, $60, $03, $08, $00, $62, $03, $08, $08, $62, $23, $08, $10, $60, $23 */;
}

void FacadeRenderFace(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x538F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect(); return;
}

void FacadePitSpriteVariants(void) {
  FacadePitSpriteVariants_variant0:;
    /* data: db $68, OAM_GBC_PAL_6 | OAMF_PAL0 */;
    /* data: db $68, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
  FacadePitSpriteVariants_variant1:;
    /* data: db $6A, OAM_GBC_PAL_6 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
  FacadePitSpriteVariants_variant2:;
    /* data: db $6C, OAM_GBC_PAL_6 | OAMF_PAL0 */;
    /* data: db $6C, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
  FacadePitSpriteVariants_variant3:;
    /* data: db $6E, OAM_GBC_PAL_6 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Data_004_5456(void) {
    /* data: db $00, $01, $02, $03, $03, $03, $03, $03, $03, $02, $01, $00, $00, $00, $00, $00 */;
}

void FacadePitHandler(void) {
    gb.regs.de = 0x546B;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_04();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatusBank04(); return; };
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_Z()) goto FacadePitHandler_jr_547E;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x40);
  FacadePitHandler_jr_547E:;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5456;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto FacadePitHandler_ret_54F0;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto FacadePitHandler_ret_54F0;
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto FacadePitHandler_ret_54F0;
    GetEntityXDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto FacadePitHandler_ret_54F0;
    GetEntityYDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto FacadePitHandler_ret_54F0;
    gb.regs.a = 0x0C;
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
    GetEntityXDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto FacadePitHandler_ret_54F0;
    GetEntityYDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto FacadePitHandler_ret_54F0;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 6;
    gb_write(0xC11C, gb.regs.a);
    ResetSpinAttack();
    gb_write(0xC198, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    gb.regs.a = 0x50;
    gb_write(0xDC73, gb.regs.a);
  FacadePitHandler_ret_54F0:;
    return;
}

void FacadeFlyingTileSpriteVariants0(void) {
  FacadeFlyingTileSpriteVariants0_variant0:;
    /* data: db $40, OAM_GBC_PAL_6 | OAMF_PAL0 */;
    /* data: db $40, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
  FacadeFlyingTileSpriteVariants0_variant1:;
    /* data: db $42, OAM_GBC_PAL_6 | OAMF_PAL0 */;
    /* data: db $42, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
}

void FacadeFlyingTileSpriteVariants1(void) {
  FacadeFlyingTileSpriteVariants1_variant0:;
    /* data: db $70, OAM_GBC_PAL_6 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
  FacadeFlyingTileSpriteVariants1_variant1:;
    /* data: db $72, OAM_GBC_PAL_6 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_6 | OAMF_PAL0 | OAMF_XFLIP */;
}

void FacadeFlyingTileSpriteVariants2(void) {
    /* data: db $40, $07, $40, $27, $42, $07, $42, $27 */;
}

void FacadeFlyingTileHandler(void) {
    gb.regs.de = 0x551A;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto FacadeFlyingTileHandler_jr_551C;
    gb.regs.de = 0x550A;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto FacadeFlyingTileHandler_jr_551C;
    gb.regs.de = 0x5512;
  FacadeFlyingTileHandler_jr_551C:;
    RenderActiveEntitySpritesPair();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_004_5596(); return; };
    ReturnIfNonInteractive_04();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto FacadeFlyingTileHandler_jr_5541;
    gb.regs.a = 0x3F;
    gb_write(0xFFF2, gb.regs.a);
  FacadeFlyingTileHandler_jr_5541:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_554A(); return;
        case 0x01: func_004_5569(); return;
        case 0x02: func_004_5586(); return;
    }
}

void func_004_554A(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
    IncrementEntityState();
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { label_004_5607(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { label_004_5615(); return; };
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { label_004_560E(); return; };
    label_004_5623(); return;
}

void func_004_5569(void) {
    label_3B70();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_004_557E(); return; };
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) return;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_004_5569_ret_557D;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_004_5569_ret_557D:;
    return;
}

void jr_004_557E(void) {
    IncrementEntityState();
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline(); return;
}

void func_004_5586(void) {
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
}

void label_004_5596(void) {
    SmashRock_trampoline(); return;
}

void Facade4SpriteVariants(void) {
  Facade4SpriteVariants_variant0:;
    /* data: db $F0, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $F0, OAM_GBC_PAL_6 | OAMF_PAL1 | OAMF_XFLIP */;
}

void FacadeFlyingPotHandler(void) {
    gb.regs.de = 0x55AE;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_004_5596(); return; };
    ReturnIfNonInteractive_04();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_55B7(); return;
        case 0x01: func_004_55C3(); return;
        case 0x02: func_004_55E0(); return;
    }
}

void func_004_55B7(void) {
    func_004_561C();
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
    return;
}

void func_004_55C3(void) {
    label_3B70();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_004_55D8(); return; };
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) return;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_004_55C3_ret_55D7;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_004_55C3_ret_55D7:;
    return;
}

void jr_004_55D8(void) {
    IncrementEntityState();
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline(); return;
}

void func_004_55E0(void) {
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_004_5596(); return; };
    return;
}

void Data_004_55F3(void) {
    /* data: db $10, $12, $11, $13 */;
}

void Data_004_55F7(void) {
    /* data: db $10, $12, $11, $13 */;
}

void Data_004_55FB(void) {
    /* data: db $14, $16, $15, $17 */;
}

void Data_004_55FF(void) {
    /* data: db $76, $77, $76, $77 */;
}

void Data_004_5603(void) {
    /* data: db $76, $49, $76, $49 */;
}

void label_004_5607(void) {
    gb.regs.de = 0x55FB;
    gb.regs.a = 0xAA;
    jr_004_5628(); return;
}

void label_004_560E(void) {
    gb.regs.de = 0x55FF;
    gb.regs.a = 0xAE;
    jr_004_5628(); return;
}

void label_004_5615(void) {
    gb.regs.de = 0x5603;
    gb.regs.a = 0x1D;
    jr_004_5628(); return;
}

void func_004_561C(void) {
    gb.regs.de = 0x55F7;
    gb.regs.a = 0x0D;
    jr_004_5628(); return;
}

void label_004_5623(void) {
    gb.regs.de = 0x55F3;
    gb.regs.a = 0x0D;
}

void jr_004_5628(void) {
    gb_write(0xFFD7, gb.regs.a);
    gb_push16(gb.regs.de);
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
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.hl, gb.regs.a);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_5628_jr_565F;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 4;
    func_91D();
    gb.regs.bc = gb_pop16();
  jr_004_5628_jr_565F:;
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

void EntityInitMoldorm(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD481, gb.regs.a);
    gb.regs.e = 0x80;
    gb.regs.hl = 0xD300;
  EntityInitMoldorm_loop_5699:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto EntityInitMoldorm_loop_5699;
    return;
}

void Data_004_569F(void) {
    /* data: db $06, $07, $00, $01, $02, $03, $04, $05 */;
}

void func_004_56A7(void) {
    ReturnIfNonInteractive_04();
    DefaultEnemyDamageCollisionHandler_trampoline(); return;
}

void MoldormEntityHandler(void) {
    label_394D();
    func_004_56A7();
    func_004_5902();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { EntityInitMoldorm(); return; };
    BossIntro();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { MoldormEntityActiveHandler(); return; };
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MoldormDestructionFlashInitHandler(); return;
        case 0x01: MoldormDestructionFlash1Handler(); return;
        case 0x02: MoldormDestructionFlash2Handler(); return;
        case 0x03: BossDestructionHandler_04(); return;
    }
}

void MoldormDestructionFlashInitHandler(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityState(); return;
}

void MoldormDestructionFlash1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityState(); return;
}

void MoldormDestructionFlash2Handler(void) {
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto MoldormDestructionFlash2Handler_jr_5705;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    CreatePoofVfx(); return;
  MoldormDestructionFlash2Handler_jr_5705:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState(); return;
}

void Data_004_570D(void) {
    /* data: db $00, $06, $08, $06, $00, $FA, $F8, $FA */;
}

void Data_004_5715(void) {
    /* data: db $F8, $FA, $00, $06, $08, $06, $00, $FA */;
}

void BossDestructionHandler_04(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { DropHeartContainer_04(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto BossDestructionHandler_04_return;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x570D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x5715;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    CreatePoofVfx();
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto BossDestructionHandler_04_return;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
  BossDestructionHandler_04_return:;
    return;
}

void DropHeartContainer_04(void) {
    gb.regs.a = 0x36;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, 0x88);
    if (GET_FLAG_C()) goto DropHeartContainer_04_jr_575E;
    gb.regs.a = 0x88;
  DropHeartContainer_04_jr_575E:;
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto DropHeartContainer_04_jr_5764;
    gb.regs.a = 0x18;
  DropHeartContainer_04_jr_5764:;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    alu_cp8(gb.regs.a, 0x70);
    if (GET_FLAG_C()) goto DropHeartContainer_04_jr_5771;
    gb.regs.a = 0x70;
  DropHeartContainer_04_jr_5771:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto DropHeartContainer_04_jr_5777;
    gb.regs.a = 0x20;
  DropHeartContainer_04_jr_5777:;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x1A);
    ClearEntityStatusBank04(); return;
}

void MoldormEntityActiveHandler(void) {
    CopyEntityPositionToActivePosition();
    ReturnIfNonInteractive_04();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3D6, gb.regs.a);
    gb.regs.e = 0x10;
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto MoldormEntityActiveHandler_jr_57AE;
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_004_57B8(); return; };
  MoldormEntityActiveHandler_jr_57AE:;
    jr_004_57C6();
    gb.regs.a = 1;
    gb_write(0xD3D6, gb.regs.a);
    gb.regs.e = 0x0B;
}

void jr_004_57B8(void) {
    gb.regs.hl = 0xD481;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_C()) { jr_004_57C6(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x1B;
    gb_write(0xFFF4, gb.regs.a);
}

void jr_004_57C6(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(gb.regs.hl, gb.regs.a);
    MiniMoldormEntityHandler_sharedMoldormBehavior();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.e = alu_srl(gb.regs.e);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x569F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void Data_004_57F2(void) {
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00 */;
    /* data: db $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $64, $00, $08, $00, $66, $00 */;
    /* data: db $08, $08, $66, $20, $08, $10, $64, $20 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00 */;
    /* data: db $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $6C, $00, $08, $00, $6E, $00 */;
    /* data: db $08, $08, $62, $60, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $68, $00, $F8, $00, $6A, $00 */;
    /* data: db $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $68, $40, $08, $00, $6A, $40 */;
    /* data: db $08, $08, $62, $60, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $6C, $40, $F8, $00, $6E, $40 */;
    /* data: db $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $62, $40 */;
    /* data: db $08, $08, $62, $60, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $64, $40, $F8, $00, $66, $40 */;
    /* data: db $F8, $08, $66, $60, $F8, $10, $64, $60 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $62, $40 */;
    /* data: db $08, $08, $62, $60, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00 */;
    /* data: db $F8, $08, $6E, $60, $F8, $10, $6C, $60 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $62, $40 */;
    /* data: db $08, $08, $62, $60, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00 */;
    /* data: db $F8, $08, $6A, $20, $F8, $10, $68, $20 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $62, $40 */;
    /* data: db $08, $08, $6A, $60, $08, $10, $68, $60 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00 */;
    /* data: db $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $62, $40 */;
    /* data: db $08, $08, $6E, $20, $08, $10, $6C, $20 */;
}

void MoldormSpriteVariants(void) {
  MoldormSpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MoldormSpriteVariants_variant1:;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MoldormSpriteVariants_variant2:;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MoldormSpriteVariants_variant3:;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void func_004_5902(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) { ret_004_5A04(); return; };
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x57F2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  func_004_5902_jr_5924:;
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) { ret_004_5A04(); return; };
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xD300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x58FF;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC2D0;
  func_004_5902_jr_5963:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) { ret_004_5A04(); return; };
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 0x18);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xD300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x58FF;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { ret_004_5A04(); return; };
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 0x24);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xD300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x58FF;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_004_5A04(); return; };
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 0x2E);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xD300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb.regs.hl = 0xFFED;
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.de = 0x58FF;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_004_5A04(); return; };
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_NO_GROUND_INTERACTION);
    label_3B70();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_NO_GROUND_INTERACTION);
}

void ret_004_5A04(void) {
    return;
}

void CreatePoofVfx(void) {
    ReturnIfNonInteractive_04_allowInactiveEntity();
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.a = 0x13;
    gb_write(0xFFF4, gb.regs.a);
    return;
}

void EntityInitMiniMoldorm(void) {
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.de);
    gb.regs.e = 0x20;
  EntityInitMiniMoldorm_initXHistoryTableLoop:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto EntityInitMiniMoldorm_initXHistoryTableLoop;
    gb.regs.de = gb_pop16();
    gb.regs.hl = 0xD100;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = 0x20;
  EntityInitMiniMoldorm_initYHistoryTableLoop:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto EntityInitMiniMoldorm_initYHistoryTableLoop;
    return;
}

void MiniMoldormSpriteVariants(void) {
  MiniMoldormSpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MiniMoldormSpriteVariants_variant1:;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  MiniMoldormSpriteVariants_variant2:;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  MiniMoldormSpriteVariants_variant3:;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MiniMoldormSpriteVariants_variant4:;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  MiniMoldormSpriteVariants_variant5:;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MiniMoldormSpriteVariants_variant6:;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP */;
  MiniMoldormSpriteVariants_variant7:;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  MiniMoldormSpriteVariants_variant8:;
    /* data: db $7A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  MiniMoldormSpriteVariants_variant9:;
    /* data: db $7C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $7C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void MoldormHeadSpriteVariantIndexes(void) {
    /* data: db $03, $03, $05, $05, $00, $00, $04, $04, $02, $02, $06, $06, $01, $01, $07, $07 */;
}

void MoldormYSpeeds(void) {
    /* data: db $00, $06, $0C, $0E */;
}

void MoldormXSpeeds(void) {
    /* data: db $10, $0E, $0C, $06, $00, $FA, $F4, $F2, $F0, $F2, $F4, $FA, $00, $06, $0C, $0E */;
}

void MiniMoldormEntityHandler(void) {
    RenderMiniMoldorm();
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MiniMoldormEntityHandler_resetTailPositions;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MiniMoldormEntityHandler_resetTailPositionsEnd;
  MiniMoldormEntityHandler_resetTailPositions:;
    EntityInitMiniMoldorm();
  MiniMoldormEntityHandler_resetTailPositionsEnd:;
    ReturnIfNonInteractive_04();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = 0;
    gb_push16(gb.regs.de);
    gb.regs.hl = 0xD000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.hl = 0xD100;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(gb.regs.hl, gb.regs.a);
    ApplyRecoilIfNeeded_04();
    DefaultEnemyDamageCollisionHandler_trampoline();
  MiniMoldormEntityHandler_sharedMoldormBehavior:;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MiniMoldormEntityHandler_skipPosUpdate;
    UpdateEntityPosWithSpeed_04();
  MiniMoldormEntityHandler_skipPosUpdate:;
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MiniMoldormEntityHandler_collisionEnd;
    gb.regs.e = 8;
    alu_bit(0, gb.regs.a);
    if (!GET_FLAG_Z()) goto MiniMoldormEntityHandler_collision;
    gb.regs.e = 0;
    alu_bit(1, gb.regs.a);
    if (!GET_FLAG_Z()) goto MiniMoldormEntityHandler_collision;
    gb.regs.e = 4;
    alu_bit(2, gb.regs.a);
    if (!GET_FLAG_Z()) goto MiniMoldormEntityHandler_collision;
    gb.regs.e = 0x0C;
  MiniMoldormEntityHandler_collision:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    GetRandomByte();
    alu_rra();
    if (GET_FLAG_C()) goto MiniMoldormEntityHandler_changeTurningDirectionEnd;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  MiniMoldormEntityHandler_changeTurningDirectionEnd:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
  MiniMoldormEntityHandler_collisionEnd:;
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto MiniMoldormEntityHandler_angleUpdateEnd;
    gb_write(gb.regs.hl, 4);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x59);
    if (!GET_FLAG_Z()) goto MiniMoldormEntityHandler_moldormSpecialCaseEnd;
    gb_write(gb.regs.hl, 6);
  MiniMoldormEntityHandler_moldormSpecialCaseEnd:;
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
    gb.regs.hl = 0x5A84;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.hl = 0x5A94;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5A98;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  MiniMoldormEntityHandler_angleUpdateEnd:;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto MiniMoldormEntityHandler_return;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  MiniMoldormEntityHandler_return:;
    return;
}

void RenderMiniMoldorm(void) {
    gb.regs.de = 0x5A5C;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_04();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = gb.regs.b;
    gb_push16(gb.regs.de);
    gb_push16(gb.regs.de);
    gb.regs.hl = 0xD000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 9);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.hl = 0xD100;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 9);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x5A5C;
    RenderActiveEntitySpritesPair();
    gb.regs.de = gb_pop16();
    gb_push16(gb.regs.de);
    gb.regs.hl = 0xD000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.hl = 0xD100;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 9;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x5A5C;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition(); return;
}

void GhiniSpriteVariants(void) {
  GhiniSpriteVariants_variant0:;
    /* data: db $58, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  GhiniSpriteVariants_variant1:;
    /* data: db $5C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
}

void GhiniTargetXSpeeds(void) {
    /* data: db $0C, $F4 */;
}

void GhiniTargetYSpeeds(void) {
    /* data: db $08, $F8 */;
}

void GiantGhiniEntityHandler(void) {
    RenderGiantGhini();
    GhiniEntityHandler_sharedGhiniBehavior(); return;
}

void HidingGhiniEntityHandler(void) {
}

void GhiniEntityHandler(void) {
    GhiniUpdateFlipAttribute();
    gb.regs.de = 0x5C1B;
    RenderActiveEntitySpritesPair();
  GhiniEntityHandler_sharedGhiniBehavior:;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { GhiniVisibleHandler(); return; };
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    GetEntityXDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto GhiniEntityHandler_return;
    GetEntityYDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto GhiniEntityHandler_return;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto GhiniEntityHandler_return;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
  GhiniEntityHandler_return:;
    return;
}

void GhiniVisibleHandler(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto GhiniVisibleHandler_visible;
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
  GhiniVisibleHandler_visible:;
    ReturnIfNonInteractive_04();
    ApplyRecoilIfNeeded_04();
    label_3B70();
  GhiniVisibleHandler_move:;
    UpdateEntityPosWithSpeed_04();
    AddEntityZSpeedToPos_04();
    GhiniCorrectZPosition();
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto GhiniVisibleHandler_return;
    label_3B44();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto GhiniVisibleHandler_updateTargetXDirectionEnd;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  GhiniVisibleHandler_updateTargetXDirectionEnd:;
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto GhiniVisibleHandler_updateTargetYDirectionEnd;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  GhiniVisibleHandler_updateTargetYDirectionEnd:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto GhiniVisibleHandler_return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_C()) goto GhiniVisibleHandler_nearLeftEdgeEnd;
    gb_write(gb.regs.hl, 0);
    goto GhiniVisibleHandler_turnedAroundAtVerticalEdge;
  GhiniVisibleHandler_nearLeftEdgeEnd:;
    alu_cp8(gb.regs.a, 0x78);
    if (GET_FLAG_C()) goto GhiniVisibleHandler_nearVerticalEdgeEnd;
    gb_write(gb.regs.hl, 1);
  GhiniVisibleHandler_turnedAroundAtVerticalEdge:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
  GhiniVisibleHandler_nearVerticalEdgeEnd:;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_C()) goto GhiniVisibleHandler_nearTopEdgeEnd;
    gb_write(gb.regs.hl, 0);
    goto GhiniVisibleHandler_turnedAroundAtHorizontalEdge;
  GhiniVisibleHandler_nearTopEdgeEnd:;
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_C()) goto GhiniVisibleHandler_nearHorizontalEdgeEnd;
    gb_write(gb.regs.hl, 1);
  GhiniVisibleHandler_turnedAroundAtHorizontalEdge:;
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x20);
  GhiniVisibleHandler_nearHorizontalEdgeEnd:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5C23;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto GhiniVisibleHandler_decSpeedX;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  GhiniVisibleHandler_decSpeedX:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5C25;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto GhiniVisibleHandler_decSpeedY;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  GhiniVisibleHandler_decSpeedY:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  GhiniVisibleHandler_return:;
    return;
}

void GhiniCorrectZPosition(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto GhiniCorrectZPosition_return;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto GhiniCorrectZPosition_return;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GhiniCorrectZPosition_positive;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    goto GhiniCorrectZPosition_return;
  GhiniCorrectZPosition_positive:;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto GhiniCorrectZPosition_moveDown;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  GhiniCorrectZPosition_moveDown:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  GhiniCorrectZPosition_return:;
    return;
}

void GiantGhiniSpriteRectVariants(void) {
  GiantGhiniSpriteRectVariants_variant0:;
    /* data: db $F8, $F8, $60, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $F8, $00, $62, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $F8, $08, $62, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F8, $10, $60, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $F8, $64, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $08, $00, $66, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $08, $08, $68, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $08, $10, $6A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  GiantGhiniSpriteRectVariants_variant1:;
    /* data: db $F8, $F8, $60, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $F8, $00, $62, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $F8, $08, $62, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F8, $10, $60, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $F8, $64, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $08, $00, $6C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $08, $08, $6E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $08, $10, $6A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  GiantGhiniSpriteRectVariants_variant0_flipped:;
    /* data: db $F8, $F8, $60, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $F8, $00, $62, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $F8, $08, $62, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F8, $10, $60, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $F8, $6A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $00, $68, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $08, $66, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $10, $64, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  GiantGhiniSpriteRectVariants_variant1_flipped:;
    /* data: db $F8, $F8, $60, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $F8, $00, $62, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $F8, $08, $62, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F8, $10, $60, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $F8, $6A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $00, $6E, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $08, $6C, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $08, $10, $64, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void RenderGiantGhini(void) {
    GhiniUpdateFlipAttribute();
    gb.regs.a = gb_read(0xFFED);
    gb_push16(gb.regs.af);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5D4C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect(); return;
}

void PairoddSpriteVariants(void) {
  PairoddSpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  PairoddSpriteVariants_variant1:;
    /* data: db $72, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  PairoddSpriteVariants_variant2:;
    /* data: db $74, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $74, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  PairoddSpriteVariants_variant3:;
    /* data: db $00, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $00, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  PairoddSpriteVariants_variant4:;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  PairoddSpriteVariants_variant5:;
    /* data: db $FF, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $FF, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  PairoddSpriteVariants_variant6:;
    /* data: db $76, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  PairoddSpriteVariants_variant7:;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $76, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void PairoddEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto PairoddEntityHandler_spriteVariant3SpecialCaseEnd;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = 6;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x5DF7;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x5DF7;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
    goto PairoddEntityHandler_renderEnd;
  PairoddEntityHandler_spriteVariant3SpecialCaseEnd:;
    gb.regs.de = 0x5DF7;
    RenderActiveEntitySpritesPair();
  PairoddEntityHandler_renderEnd:;
    ReturnIfNonInteractive_04();
    ApplyRecoilIfNeeded_04();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: PairoddRestingHandler(); return;
        case 0x01: PairoddDisappearingHandler(); return;
        case 0x02: PairoddReappearingHandler(); return;
    }
}

void PairoddRestingHandler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_Z()) goto PairoddRestingHandler_projectileEnd;
    SpawnPairoddProjectile();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
  PairoddRestingHandler_projectileEnd:;
    if (!GET_FLAG_C()) goto PairoddRestingHandler_return;
    GetEntityXDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto PairoddRestingHandler_return;
    GetEntityYDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto PairoddRestingHandler_return;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto PairoddRestingHandler_return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb.regs.a = 0x3C;
    gb_write(0xFFF2, gb.regs.a);
  PairoddRestingHandler_return:;
    return;
}

void PairoddDisappearingSpriteVariantIndexes(void) {
    /* data: db $04, $03, $02 */;
}

void PairoddDisappearingHandler(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { DefaultEnemyDamageCollisionHandler_trampoline(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto PairoddDisappearingHandler_skipIncrementState;
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
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
  PairoddDisappearingHandler_skipIncrementState:;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5E8B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void PairoddReappearingSpriteVariantIndexes(void) {
    /* data: db $02, $03, $04 */;
}

void PairoddReappearingHandler(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) return;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { PairoddReappearingAnimation(); return; };
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void SpawnPairoddProjectile(void) {
    gb.regs.a = 0x58;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto SpawnPairoddProjectile_return;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
  SpawnPairoddProjectile_return:;
    return;
}

void PairoddReappearingAnimation(void) {
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5ED7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void PairoddProjectileSpriteVariants(void) {
  PairoddProjectileSpriteVariants_variant0:;
    /* data: db $7C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $7C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  PairoddProjectileSpriteVariants_variant1:;
    /* data: db $7E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void PairoddProjectileEntityHandler(void) {
    gb.regs.de = 0x5F1F;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_04();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_04();
    label_3B2E();
    CheckLinkCollisionWithProjectile_trampoline();
    label_3B70();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    ClearEntityStatusBank04();
    func_004_6BE1_createSwordPokeVfx(); return;
}

void FishermanRodLowSpriteRect(void) {
    /* data: db $00, $F0, $78, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $00, $F8, $7A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $00, $00, $70, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $00, $08, $72, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void FishermanRowHighSpriteRect(void) {
    /* data: db $00, $F0, $7C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $00, $F8, $7E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $00, $00, $70, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $00, $08, $72, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void FishermanTowardsLinkSpriteRect(void) {
    /* data: db $00, $F0, $78, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $00, $F8, $7A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $00, $00, $74, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $00, $08, $76, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void FishermanFishingGameSpriteVariants(void) {
  FishermanFishingGameSpriteVariants_variant0:;
    /* data: db $9A, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_6 | OAMF_PAL1 */;
}

void FishermanFishingGameEntityHandler(void) {
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FishermanFishingGameEntityHandler_privateState4End;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x5F84;
    RenderActiveEntitySpritesPair();
    UpdateEntityPosWithSpeed_04();
    AddEntityZSpeedToPos_04();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto FishermanFishingGameEntityHandler_jr_5F91;
    ClearEntityStatusBank04();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC27, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    CreateTradingItemEntity(); return;
  FishermanFishingGameEntityHandler_jr_5F91:;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    return;
  FishermanFishingGameEntityHandler_privateState4End:;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { FishingGameAndFishHandler(); return; };
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x84);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.hl = 0x5F74;
    if (!GET_FLAG_Z()) goto FishermanFishingGameEntityHandler_renderSprites;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0x5F54;
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto FishermanFishingGameEntityHandler_renderSprites;
    gb.regs.hl = 0x5F64;
  FishermanFishingGameEntityHandler_renderSprites:;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
    PushLinkOutOfEntity_04();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: FishermanIdleHandler(); return;
        case 0x01: FishermanProposingHandler(); return;
        case 0x02: FishermanExplainingRulesHandler(); return;
    }
}

void FishermanIdleHandler(void) {
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) return;
    func_004_7C4B();
    if (!GET_FLAG_C()) return;
    gb.regs.a = 2;
    gb_write(0xC167, gb.regs.a);
    /* call_open_dialog Dialog045 */;
    IncrementEntityState(); return;
}

void FishermanProposingHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FishermanProposingHandler_accepted;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    /* jp_open_dialog Dialog046 */;
  FishermanProposingHandler_accepted:;
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xDC38);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC37);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xDC06);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(0xDC05);
    gb.regs.h = gb.regs.a;
  FishermanProposingHandler_loop_6019:;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (GET_FLAG_Z()) goto FishermanProposingHandler_jr_6023;
    alu_daa();
    gb.regs.hl++;
    alu_daa();
    gb.regs.de--;
    goto FishermanProposingHandler_loop_6019;
  FishermanProposingHandler_jr_6023:;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = gb.regs.h;
    gb.regs.a = alu_sbc8(gb.regs.a, 0);
    gb.regs.de = gb_pop16();
    gb.regs.hl = gb_pop16();
    if (GET_FLAG_C()) goto FishermanProposingHandler_notEnoughRupees;
    gb.regs.a = 0x0A;
    gb_write(0xDC3A, gb.regs.a);
    /* jp_open_dialog Dialog047 */;
  FishermanProposingHandler_notEnoughRupees:;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    /* jp_open_dialog Dialog04E */;
}

void FishermanExplainingRulesHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    UnloadAllEntities();
    WarpToFishingGame(); return;
}

void Unknown080SpriteVariants(void) {
  Unknown080SpriteVariants_variant0:;
    /* data: db $58, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Unknown080SpriteVariants_variant1:;
    /* data: db $56, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $FF, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Unknown080SpriteVariants_variant2:;
    /* data: db $5C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Unknown080SpriteVariants_variant3:;
    /* data: db $58, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Unknown080SpriteVariants_variant4:;
    /* data: db $58, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Unknown080SpriteVariants_variatn5:;
    /* data: db $5C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Unknown080SpriteVariants_variant6:;
    /* data: db $5C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Unknown080SpriteVariants_variant7:;
    /* data: db $56, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $FF, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Unknown080SpriteVariants_variant8:;
    /* data: db $5E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $5C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  Unknown080SpriteVariants_variant9:;
    /* data: db $58, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
}

void Data_004_6074(void) {
    /* data: db $06, $16, $10, $10, $38, $38, $39, $39, $16, $38 */;
}

void Data_004_607E(void) {
    /* data: db $F6, $00, $F1, $F0, $F0, $F0, $F0, $FE, $04, $F2 */;
}

void Data_004_6088(void) {
    /* data: db $00, $F0, $FA, $00, $00, $F8, $F8, $F8, $F2, $FE */;
}

void Data_004_6092(void) {
    /* data: db $E8, $00, $E0, $E8, $00, $00, $00, $00, $14 */;
}

void Data_004_609B(void) {
    /* data: db $10, $E0, $F8, $10, $00, $00, $00, $00, $F0 */;
}

void FishingGameAndFishHandler(void) {
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: FishingGameHandler(); return;
        case 0x01: FishingLureHandler(); return;
        case 0x02: SmallFishHandler(); return;
        case 0x03: BigFishHandler(); return;
    }
}

void FishStartX(void) {
    /* data: db $18, $58, $60, $18, $88 */;
}

void FishStartY(void) {
    /* data: db $40, $4C, $34, $68, $50 */;
}

void FishStartDirection(void) {
    /* data: db $01, $00, $00, $01, $00 */;
}

void FishType(void) {
    /* data: db $02, $02, $02, $03, $03 */;
}

void FishMoveDelay(void) {
    /* data: db $00, $3E, $1E, $10, $30 */;
}

void FishingGameHandler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_6120(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_push16(gb.regs.bc);
    gb.regs.c = 5;
  FishingGameHandler_loop_60E0:;
    gb.regs.a = 0x54;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0x60C9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x60CE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x60D3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x60D8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x60DD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto FishingGameHandler_loop_60E0;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD204, gb.regs.a);
    gb.regs.bc = gb_pop16();
    return;
}

void jr_004_6120(void) {
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6074;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.hl = 0x607E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x6088;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x6066;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_6154(); return;
        case 0x01: func_004_617B(); return;
        case 0x02: func_004_61E4(); return;
        case 0x03: func_004_61E5(); return;
        case 0x04: func_004_6247(); return;
        case 0x05: func_004_6252(); return;
        case 0x06: func_004_626C(); return;
    }
}

void func_004_6154(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_004_6154_jr_616C;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto func_004_6154_jr_616C;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x23);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD202, gb.regs.a);
  func_004_6154_jr_616C:;
    gb.regs.a = 9;
    label_004_61BA(); return;
}

void Data_004_6171(void) {
    /* data: db $01, $08, $08, $08, $08, $08, $01, $02, $03, $00 */;
}

void func_004_617B(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_004_617B_jr_61B6;
    IncrementEntityState();
    gb.regs.a = 2;
    gb_write(0xC3B0, gb.regs.a);
    gb.regs.a = 0x54;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x78);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xE2);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xFA);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x14);
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    return;
  func_004_617B_jr_61B6:;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
}

void label_004_61BA(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6171;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC3B0, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6092;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x609B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x6269;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition(); return;
}

void func_004_61E4(void) {
    return;
}

void func_004_61E5(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_6237(); return; };
    gb.regs.a = gb_read(0xD204);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) goto func_004_61E5_jr_6202;
    /* call_open_dialog Dialog04B */;
    IncrementEntityState();
    gb_write(gb.regs.hl, 5);
    return;
  func_004_61E5_jr_6202:;
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xDC38);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC37);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xDC06);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(0xDC05);
    gb.regs.h = gb.regs.a;
  func_004_61E5_loop_6214:;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.d);
    if (GET_FLAG_Z()) goto func_004_61E5_jr_621E;
    alu_daa();
    gb.regs.hl++;
    alu_daa();
    gb.regs.de--;
    goto func_004_61E5_loop_6214;
  func_004_61E5_jr_621E:;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = gb.regs.h;
    gb.regs.a = alu_sbc8(gb.regs.a, 0);
    gb.regs.de = gb_pop16();
    gb.regs.hl = gb_pop16();
    if (GET_FLAG_C()) { jr_004_623F(); return; };
    gb.regs.a = 0x0A;
    gb_write(0xDC3A, gb.regs.a);
    /* call_open_dialog Dialog047 */;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void jr_004_6237(void) {
    /* call_open_dialog Dialog046 */;
    IncrementEntityState(); return;
}

void jr_004_623F(void) {
    /* call_open_dialog Dialog04E */;
    IncrementEntityState(); return;
}

void func_004_6247(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    UnloadAllEntities();
    WarpToFishingGame(); return;
}

void func_004_6252(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_004_6252_jr_6267;
    /* jp_open_dialog Dialog04C */;
  func_004_6252_jr_6267:;
    /* jp_open_dialog Dialog046 */;
}

void func_004_626C(void) {
    return;
}

void Unknown081SpriteVariants(void) {
  Unknown081SpriteVariants_variant0:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  Unknown081SpriteVariants_variant1:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  Unknown081SpriteVariants_variant2:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  Unknown081SpriteVariants_variant3:;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
  Unknown081SpriteVariants_variant4:;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
}

void FishingLureHandler(void) {
    gb.regs.a = gb.regs.c;
    gb_write(0xD203, gb.regs.a);
    gb.regs.de = 0x6269;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xD200, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xD201, gb.regs.a);
    ReturnIfNonInteractive_04();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_629F(); return;
        case 0x01: func_004_6308(); return;
    }
}

void func_004_629F(void) {
    AddEntitySpeedToPos_04();
    UpdateEntityYPosWithSpeed_04();
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_004_629F_jr_62BC;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_004_629F_jr_62BC;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_629F_jr_62BC;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_004_62C1(); return;
  func_004_629F_jr_62BC:;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_004_62E7(); return; };
}

void jr_004_62C1(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_004_62C1_jr_62D1;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto jr_004_62C1_jr_62D1;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_004_62C1_jr_62D1:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_62E7(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_004_62E7(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void jr_004_62E7(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x2A);
    if (GET_FLAG_C()) { ret_004_6307(); return; };
    ClearEntitySpeed();
    IncrementEntityState();
}

void label_004_62F6(void) {
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 1;
    AddTranscientVfx();
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
}

void ret_004_6307(void) {
    return;
}

void func_004_6308(void) {
    gb.regs.hl = 0xC3B0;
    gb_write(gb.regs.hl, 0);
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto func_004_6308_jr_6317;
    gb.regs.hl = 0xC3B0;
    gb_write(gb.regs.hl, 4);
  func_004_6308_jr_6317:;
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) goto func_004_6308_jr_6321;
    gb.regs.hl = 0xC3B0;
    gb_write(gb.regs.hl, 5);
  func_004_6308_jr_6321:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_04();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_004_6354(); return; };
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_004_6345(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_004_6308_jr_6344;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_004_6308_jr_6344:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_004_6345(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_004_6354(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_004_6345_jr_6353;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_004_6345_jr_6353:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_004_6354(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) { jr_004_63B9(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_sub8(gb.regs.a, 0x17);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 4;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x25);
    if (!GET_FLAG_C()) { jr_004_63AD(); return; };
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x70);
    if (GET_FLAG_C()) { jr_004_63AD(); return; };
    gb.regs.hl = 0xC290;
    gb_write(gb.regs.hl, 3);
    /* call_open_dialog Dialog048 */;
    ClearEntityStatusBank04();
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
}

void jr_004_638A(void) {
    loop_start: ;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_638A_jr_63A7;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto jr_004_638A_jr_63A7;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto jr_004_638A_jr_63A7;
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_004_638A_jr_63A7:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { goto loop_start; };
}

void jr_004_63AD(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    jr_004_63DE(); return;
}

void jr_004_63B9(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_004_63DE(); return; };
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) { jr_004_63DE(); return; };
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_63DE(); return; };
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFA);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x50);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x10);
}

void jr_004_63DE(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_004_63DE_jr_63F0;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { jr_004_6402(); return; };
  jr_004_63DE_jr_63F0:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_004_63DE_jr_63FC;
    gb_write(gb.regs.hl, gb.regs.b);
  jr_004_63DE_jr_63FC:;
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_004_6402(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_6402_jr_640E;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
  jr_004_6402_jr_640E:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    if (GET_FLAG_C()) return;
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void SmallFishSpriteVariants(void) {
  SmallFishSpriteVariants_variant0:;
    /* data: db $4C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $4A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  SmallFishSpriteVariants_variant1:;
    /* data: db $4C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $4E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  SmallFishSpriteVariants_variant2:;
    /* data: db $48, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $4A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  SmallFishSpriteVariants_variant3:;
    /* data: db $48, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $4E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  SmallFishSpriteVariants_variant4:;
    /* data: db $4A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $4C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  SmallFishSpriteVariants_variant5:;
    /* data: db $4E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $4C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  SmallFishSpriteVariants_variant6:;
    /* data: db $4A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $48, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  SmallFishSpriteVariants_variant7:;
    /* data: db $4E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $48, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void SmallFishHandler(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SmallFishHandler_jr_6448;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFFF1, gb.regs.a);
  SmallFishHandler_jr_6448:;
    gb.regs.de = 0x6414;
    RenderActiveEntitySpritesPair();
  SmallFishHandler_sharedFishBehavior:;
    ReturnIfNonInteractive_04();
    UpdateEntityPosWithSpeed_04();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_6463(); return;
        case 0x01: func_004_649B(); return;
        case 0x02: func_004_64F2(); return;
        case 0x03: func_004_652D(); return;
        case 0x04: func_004_657A(); return;
        case 0x05: func_004_6689(); return;
    }
}

void func_004_6463(void) {
    func_004_679B();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_004_6738(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_004_6463_jr_6482;
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
  func_004_6463_jr_6482:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_004_6497(); return; };
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_004_6497(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_004_6463_jr_6496;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_004_6463_jr_6496:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_004_6497(void) {
    jr_004_64E0(); return;
}

void Data_004_6499(void) {
    /* data: db $10, $F0 */;
}

void func_004_649B(void) {
    func_004_679B();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_004_6762(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_004_649B_jr_64B3;
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  func_004_649B_jr_64B3:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_004_64E0(); return; };
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.hl = 0x6499;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_004_64E0(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_004_649B_jr_64DF;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_004_649B_jr_64DF:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_004_64E0(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x34);
    if (!GET_FLAG_C()) goto jr_004_64E0_ret_64EF;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  jr_004_64E0_ret_64EF:;
    return;
}

void Data_004_64F0(void) {
    /* data: db $F2, $14 */;
}

void func_004_64F2(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_004_64F2_jr_6504;
    IncrementEntityState();
  func_004_64F2_jr_6504:;
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x64F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xD201);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 4;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_04(); return;
}

void func_004_652D(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xD201);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_04();
    gb.regs.a = gb_read(0xD200);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_004_652D_ret_6575;
    ClearEntitySpeed();
    IncrementEntityState();
    gb.regs.a = gb_read(0xD203);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.b);
  func_004_652D_ret_6575:;
    return;
}

void Data_004_6576(void) {
    /* data: db $54, $00 */;
}

void Data_004_6578(void) {
    /* data: db $08, $F8 */;
}

void func_004_657A(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6578;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xFFF1;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.de = 0x6576;
    RenderActiveEntitySprite();
    CopyEntityPositionToActivePosition();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_004_65DB(); return; };
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x59;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 8;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_004_657A_jr_65C7;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_004_657A_jr_65C7:;
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_004_657A_jr_65D5;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_004_657A_jr_65D5:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
}

void jr_004_65DB(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) { jr_004_6631(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_004_65DB_jr_65F1;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_004_6631(); return; };
  jr_004_65DB_jr_65F1:;
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_sub8(gb.regs.a, 0x14);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 3;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_004_65DB_jr_6615;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  jr_004_65DB_jr_6615:;
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_004_65DB_jr_6626;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  jr_004_65DB_jr_6626:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
}

void jr_004_6631(void) {
    UpdateEntityPosWithSpeed_04();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_6631_jr_6644;
    alu_rlca();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_004_6631_jr_6644:;
    gb.regs.hl = 0xC3B0;
    gb_write(gb.regs.hl, 5);
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto jr_004_6631_jr_6659;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto jr_004_6631_jr_6659;
    gb.regs.hl = 0xC3B0;
    gb_write(gb.regs.hl, 7);
  jr_004_6631_jr_6659:;
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x2C);
    if (!GET_FLAG_C()) goto jr_004_6631_jr_6677;
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x74);
    if (GET_FLAG_C()) goto jr_004_6631_jr_6677;
    IncrementEntityState();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF0);
    label_004_62F6(); return;
  jr_004_6631_jr_6677:;
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) return;
    gb.regs.hl = 0xC290;
    gb_write(gb.regs.hl, 3);
    /* call_open_dialog Dialog049 */;
    ClearEntityStatusBank04(); return;
}

void func_004_6689(void) {
    gb.regs.hl = 0xC3B0;
    gb_write(gb.regs.hl, 1);
    UpdateEntityPosWithSpeed_04();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    /* nop */;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC290;
    gb_write(gb.regs.hl, 3);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_004_66E6(); return; };
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { jr_004_66E6(); return; };
    gb.regs.a = 1;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 1;
    gb.regs.hl = 0xD9B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    gb.regs.a = gb_read(0xDC04);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xDC04, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto func_004_6689_jr_66DA;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC04, gb.regs.a);
    gb.regs.hl = 0xDC3B;
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xDC03;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    /* ld_dialog_low a, Dialog1FF */;
    jr_004_66DC(); return;
  func_004_6689_jr_66DA:;
    /* ld_dialog_low a, Dialog1FE */;
}

void jr_004_66DC(void) {
    OpenDialogInTable1();
    gb.regs.hl = 0xDC38;
    gb_write(gb.regs.hl, 0x14);
    jr_004_66FE(); return;
}

void jr_004_66E6(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    gb.regs.e = 0x14;
    gb.regs.a = (0x4A & 0xFF);
    if (GET_FLAG_Z()) goto jr_004_66E6_rewardsSelectionEnd;
    gb.regs.e = 5;
    gb.regs.a = (0x4D & 0xFF);
  jr_004_66E6_rewardsSelectionEnd:;
    gb.regs.hl = 0xDC38;
    gb_write(gb.regs.hl, gb.regs.e);
    OpenDialogInTable0();
}

void jr_004_66FE(void) {
    ClearEntityStatusBank04(); return;
}

void BigFishSpriteVariants(void) {
  BigFishSpriteVariants_variant0:;
    /* data: db $44, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $42, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  BigFishSpriteVariants_variant1:;
    /* data: db $44, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $46, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  BigFishSpriteVariants_variant2:;
    /* data: db $40, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $42, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  BigFishSpriteVariants_variant3:;
    /* data: db $40, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $46, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  BigFishSpriteVariants_variant4:;
    /* data: db $42, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $44, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BigFishSpriteVariants_variant5:;
    /* data: db $46, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $44, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BigFishSpriteVariants_variant6:;
    /* data: db $42, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $40, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BigFishSpriteVariants_variant7:;
    /* data: db $46, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $40, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void BigFishHandler(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BigFishHandler_jr_672F;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFFF1, gb.regs.a);
  BigFishHandler_jr_672F:;
    gb.regs.de = 0x66D9;
    RenderActiveEntitySpritesPair();
    SmallFishHandler_sharedFishBehavior(); return;
}

void label_004_6738(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto label_004_6738_jr_674A;
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
  label_004_6738_jr_674A:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_004_675F(); return; };
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_004_675F(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto label_004_6738_jr_675E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  label_004_6738_jr_675E:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void ret_004_675F(void) {
    return;
}

void Data_004_6760(void) {
    /* data: db $08, $F8 */;
}

void label_004_6762(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto label_004_6762_jr_676D;
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  label_004_6762_jr_676D:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_004_679A(); return; };
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.hl = 0x6760;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_004_679A(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto label_004_6762_jr_6799;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  label_004_6762_jr_6799:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void ret_004_679A(void) {
    return;
}

void func_004_679B(void) {
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_004_679B_ret_67FA;
    gb.regs.a = gb_read(0xD203);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_679B_ret_67FA;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_679B_ret_67FA;
    gb.regs.a = gb_read(0xD200);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_rlca();
    alu_rlca();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_004_679B_ret_67FA;
    gb.regs.a = gb_read(0xD200);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto func_004_679B_ret_67FA;
    gb.regs.a = gb_read(0xD201);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto func_004_679B_ret_67FA;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xD202;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xD204;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
  func_004_679B_ret_67FA:;
    return;
}

void WarpToFishingGame(void) {
    ApplyMapFadeOutTransition();
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb_write(0xD416, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    return;
}

void TractorDeviceSpriteVariants(void) {
  TractorDeviceSpriteVariants_variant0:;
    /* data: db $4C, OAM_GBC_PAL_7 | OAMF_PAL0 */;
    /* data: db $4C, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
  TractorDeviceSpriteVariants_variant1:;
    /* data: db $4E, OAM_GBC_PAL_4 | OAMF_PAL0 */;
    /* data: db $4E, OAM_GBC_PAL_4 | OAMF_PAL0 | OAMF_XFLIP */;
}

void TractorDeviceBottleGrottoSpriteVariants(void) {
  TractorDeviceBottleGrottoSpriteVariants_variant0:;
    /* data: db $7C, OAM_GBC_PAL_7 | OAMF_PAL0 */;
    /* data: db $7C, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
  TractorDeviceBottleGrottoSpriteVariants_variant1:;
    /* data: db $7E, OAM_GBC_PAL_4 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_4 | OAMF_PAL0 | OAMF_XFLIP */;
}

void TractorDeviceEntityHandler(void) {
}

void ReversedTractorDeviceEntityHandler(void) {
    gb.regs.hl = 0xD45E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.de = 0x67F1;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ReversedTractorDeviceEntityHandler_render;
    gb.regs.de = 0x67F9;
  ReversedTractorDeviceEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_04();
    label_3B70();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: TractorDeviceActiveHandler(); return;
        case 0x01: TractorDeviceInactiveHandler(); return;
    }
}

void SpinningLinkDirections(void) {
    /* data: db $00, $03, $01, $02 */;
}

void TractorDeviceActiveHandler(void) {
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto TractorDeviceActiveHandler_skipIncrementState;
    gb_write(gb.regs.hl, 0x10);
    IncrementEntityState(); return;
  TractorDeviceActiveHandler_skipIncrementState:;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto TractorDeviceActiveHandler_affectLinkEnd;
    gb.regs.a = gb_read(0xFF9A);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF9B);
    gb_push16(gb.regs.af);
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x52);
    gb.regs.a = 0x14;
    if (!GET_FLAG_Z()) goto TractorDeviceActiveHandler_reversed;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = 8;
  TractorDeviceActiveHandler_reversed:;
    gb_push16(gb.regs.de);
    GetVectorTowardsLink_trampoline();
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFD7);
    alu_bit(0, gb.regs.e);
    if (GET_FLAG_Z()) goto TractorDeviceActiveHandler_outwardsX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  TractorDeviceActiveHandler_outwardsX:;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    alu_bit(0, gb.regs.e);
    if (GET_FLAG_Z()) goto TractorDeviceActiveHandler_outwardsY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  TractorDeviceActiveHandler_outwardsY:;
    gb_write(0xFF9A, gb.regs.a);
    gb_push16(gb.regs.bc);
    UpdateFinalLinkPosition();
    CheckPositionForMapTransition_trampoline();
    gb.regs.bc = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC144, gb.regs.a);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x52);
    if (!GET_FLAG_Z()) goto TractorDeviceActiveHandler_affectLinkEnd;
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto TractorDeviceActiveHandler_linkSpinning;
    GetEntityXDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto TractorDeviceActiveHandler_linkSpinning;
    GetEntityYDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto TractorDeviceActiveHandler_linkSpinning;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 6;
    gb_write(0xC11C, gb.regs.a);
    ResetSpinAttack();
    gb_write(0xC198, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDC73, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xFFF3, gb.regs.a);
    return;
  TractorDeviceActiveHandler_linkSpinning:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x681D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9E, gb.regs.a);
  TractorDeviceActiveHandler_affectLinkEnd:;
    TractorDeviceAffectOtherEntities();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto TractorDeviceActiveHandler_return;
    gb.regs.a = 0x1F;
    gb_write(0xFFF4, gb.regs.a);
  TractorDeviceActiveHandler_return:;
    return;
}

void TractorDeviceInactiveHandler(void) {
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto TractorDeviceInactiveHandler_skipIncrementState;
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  TractorDeviceInactiveHandler_skipIncrementState:;
    gb.regs.a = 0;
    SetEntitySpriteVariant(); return;
}

void TractorDeviceAffectOtherEntities(void) {
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
  TractorDeviceAffectOtherEntities_loop:;
    gb_push16(gb.regs.de);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, gb.regs.c);
    if (GET_FLAG_Z()) goto TractorDeviceAffectOtherEntities_selfOrDisabledEntity;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TractorDeviceAffectOtherEntities_selfOrDisabledEntity;
    CopyEntityPositionToActivePosition();
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto TractorDeviceAffectOtherEntities_skipVacuuming;
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x10;
    GetVectorTowardsLink_trampoline();
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x52);
    if (!GET_FLAG_Z()) goto TractorDeviceAffectOtherEntities_reversed;
    gb.regs.e = alu_inc8(gb.regs.e);
  TractorDeviceAffectOtherEntities_reversed:;
    gb.regs.a = gb_read(0xFFD7);
    alu_bit(0, gb.regs.e);
    if (!GET_FLAG_Z()) goto TractorDeviceAffectOtherEntities_outwardsX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  TractorDeviceAffectOtherEntities_outwardsX:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    alu_bit(0, gb.regs.e);
    if (!GET_FLAG_Z()) goto TractorDeviceAffectOtherEntities_outwardsY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  TractorDeviceAffectOtherEntities_outwardsY:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    CopyEntityPositionToActivePosition();
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto TractorDeviceAffectOtherEntities_unloadVacuumedEntityEnd;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto TractorDeviceAffectOtherEntities_unloadVacuumedEntityEnd;
    ClearEntityStatusBank04();
  TractorDeviceAffectOtherEntities_unloadVacuumedEntityEnd:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
  TractorDeviceAffectOtherEntities_skipVacuuming:;
    gb.regs.bc = gb_pop16();
  TractorDeviceAffectOtherEntities_selfOrDisabledEntity:;
    gb.regs.de = gb_pop16();
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto TractorDeviceAffectOtherEntities_loop;
    return;
}

void KnightEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_C()) goto KnightEntityHandler_unloadIfMinibossDefeated;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank04(); return; };
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x3C);
    goto KnightEntityHandler_unloadIfMinibossDefeatedEnd;
  KnightEntityHandler_unloadIfMinibossDefeated:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xDC0D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank04(); return; };
  KnightEntityHandler_unloadIfMinibossDefeatedEnd:;
    RenderKnightAndHandleIronBall();
    CopyEntityPositionToActivePosition();
    ReturnIfNonInteractive_04();
    ApplyRecoilIfNeeded_04();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: KnightWalkingHandler(); return;
        case 0x01: KnightWindingUpHandler(); return;
        case 0x02: KnightAttackingHandler(); return;
    }
}

void KnightWalkingHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto KnightWalkingHandler_skipIncrementState;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto KnightWalkingHandler_skipUpdateSpeed;
    gb.regs.a = 4;
    ApplyVectorTowardsLink_trampoline();
  KnightWalkingHandler_skipUpdateSpeed:;
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline();
    GetEntityXDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) goto KnightWalkingHandler_skipIncrementState;
    GetEntityYDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) goto KnightWalkingHandler_skipIncrementState;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x28);
    IncrementEntityState(); return;
  KnightWalkingHandler_return:;
    return;
  KnightWalkingHandler_skipIncrementState:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto KnightWalkingHandler_return;
  KnightWalkingHandler_animate:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void KnightIronBallAttackStartingAngle(void) {
    /* data: db $04, $0C, $00, $08 */;
}

void KnightWindingUpHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto KnightWindingUpHandler_skipIncrementState;
    GetEntityDirectionToLink_04();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.hl = 0x69F3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto KnightWindingUpHandler_skipIncrementState;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x38);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    IncrementEntityState();
  KnightWindingUpHandler_skipIncrementState:;
    KnightWalkingHandler_animate(); return;
}

void KnightAttackingHandler(void) {
    KnightAddIronBallSpeedToPos();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto KnightAttackingHandler_skipMoveIronBallSideways;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  KnightAttackingHandler_skipMoveIronBallSideways:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto KnightAttackingHandler_incrementState;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto KnightAttackingHandler_return;
  KnightAttackingHandler_incrementState:;
    gb_write(gb.regs.hl, gb.regs.b);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x69F3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  KnightAttackingHandler_return:;
    return;
}

void KnightSpriteVariants(void) {
  KnightSpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  KnightSpriteVariants_variant1:;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  KnightSpriteVariants_variant2:;
    /* data: db $78, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $78, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void KnightIronBallSpinningYOffsets(void) {
    /* data: db $0A, $06, $03, $01 */;
}

void KnightIronBallSpinningXOffsets(void) {
    /* data: db $00, $01, $03, $06, $0A, $0E, $11, $13, $14, $13, $11, $0E, $0A, $06, $03, $01 */;
}

void RenderKnightAndHandleIronBall(void) {
    gb.regs.de = 0x6A6C;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RenderKnightAndHandleIronBall_notAttacking;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_bit(1, gb.regs.a);
    if (!GET_FLAG_Z()) goto RenderKnightAndHandleIronBall_verticalAttack;
    alu_cp8(gb.regs.a, 1);
    gb.regs.a = gb_read(gb.regs.hl);
    if (!GET_FLAG_Z()) goto RenderKnightAndHandleIronBall_attackingRight;
    gb.regs.hl = 0xFFD7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  RenderKnightAndHandleIronBall_attackingRight:;
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    if (GET_FLAG_Z()) goto RenderKnightAndHandleIronBall_ironBallMovingDown;
    alu_cpl();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
  RenderKnightAndHandleIronBall_ironBallMovingDown:;
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0xF3);
    gb_write(gb.regs.hl, gb.regs.a);
    goto RenderKnightAndHandleIronBall_calcIronBallPosEnd;
  RenderKnightAndHandleIronBall_verticalAttack:;
    alu_cp8(gb.regs.a, 2);
    gb.regs.a = gb_read(gb.regs.hl);
    if (!GET_FLAG_Z()) goto RenderKnightAndHandleIronBall_attackingDown;
    gb.regs.hl = 0xFFD7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  RenderKnightAndHandleIronBall_attackingDown:;
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    if (!GET_FLAG_Z()) goto RenderKnightAndHandleIronBall_ironBallMovingRight;
    alu_cpl();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
  RenderKnightAndHandleIronBall_ironBallMovingRight:;
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0xF8);
    gb_write(gb.regs.hl, gb.regs.a);
    goto RenderKnightAndHandleIronBall_calcIronBallPosEnd;
  RenderKnightAndHandleIronBall_notAttacking:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6A78;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0xF0);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x6A7C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0xF3);
    gb_write(0xFFEE, gb.regs.a);
  RenderKnightAndHandleIronBall_calcIronBallPosEnd:;
    gb.regs.a = 2;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x6A6C;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto RenderKnightAndHandleIronBall_noSwordClink;
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto RenderKnightAndHandleIronBall_noSwordClink;
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x40);
    DefaultEnemyDamageCollisionHandler_trampoline();
    func_004_6BE1();
  RenderKnightAndHandleIronBall_noSwordClink:;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
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
    CopyEntityPositionToActivePosition();
    gb.regs.a = 3;
  RenderKnightAndHandleIronBall_loop:;
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xFFD8;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
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
    if (!GET_FLAG_Z()) goto RenderKnightAndHandleIronBall_loop;
    gb.regs.a = 3;
    func_015_7964_trampoline(); return;
}

void func_004_6BE1(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFFDC, gb.regs.a);
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
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 8);
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
  func_004_6BE1_createSwordPokeVfx:;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 5;
    AddTranscientVfx(); return;
}

void LaserSpriteVariants(void) {
  LaserSpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  LaserSpriteVariants_variant1:;
    /* data: db $78, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  LaserSpriteVariants_variant2:;
    /* data: db $74, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  LaserSpriteVariants_variant3:;
    /* data: db $7C, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  LaserSpriteVariants_variant4:;
    /* data: db $72, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  LaserSpriteVariants_variant5:;
    /* data: db $7E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $7C, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  LaserSpriteVariants_variant6:;
    /* data: db $76, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $74, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  LaserSpriteVariants_variant7:;
    /* data: db $7A, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $78, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void LaserLinkSensorYSpeeds(void) {
    /* data: db $10, $0E, $0C, $06 */;
}

void LaserLinkSensorXSpeeds(void) {
    /* data: db $00, $FA, $F4, $F2, $F0, $F2, $F4, $FA, $00, $06, $0C, $0E, $10, $0E, $0C, $06 */;
}

void LaserEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { LaserLinkSensorHandler(); return; };
    gb.regs.de = 0x6BEB;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_04();
    label_3B44();
    ApplyEntityInteractionWithBackground_trampoline();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { LaserSpinningHandler(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto LaserEntityHandler_return;
    gb.regs.a = 0x2B;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto LaserEntityHandler_return;
    gb.regs.a = 8;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
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
  LaserEntityHandler_return:;
    return;
}

void LaserSpinningHandler(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto LaserSpinningHandler_return;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x2A;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto LaserSpinningHandler_return;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.c);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC0);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x6C0F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6C0B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
  LaserSpinningHandler_return:;
    return;
}

void LaserLinkSensorHandler(void) {
    label_3B2E();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank04(); return; };
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto LaserLinkSensorHandler_jr_6D5C;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto LaserLinkSensorHandler_jr_6D5C;
    ClearEntityStatusBank04();
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LaserLinkSensorHandler_jr_6D5C;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LaserLinkSensorHandler_jr_6D5C;
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x40;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
    return;
  LaserLinkSensorHandler_jr_6D5C:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x9C);
    if (!GET_FLAG_C()) { ClearEntityStatusBank04(); return; };
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x78);
    if (GET_FLAG_C()) return;
}

void ClearEntityStatusBank04(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void ApplyRecoilIfNeeded_04(void) {
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyRecoilIfNeeded_04_return;
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
    UpdateEntityPosWithSpeed_04();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto ApplyRecoilIfNeeded_04_restoreOriginalVelocity;
    ApplyEntityInteractionWithBackground_trampoline();
  ApplyRecoilIfNeeded_04_restoreOriginalVelocity:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ApplyRecoilIfNeeded_04_return:;
    return;
}

void UpdateEntityPosWithSpeed_04(void) {
    AddEntitySpeedToPos_04();
}

void UpdateEntityYPosWithSpeed_04(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.c = gb.regs.a;
    AddEntitySpeedToPos_04();
    gb.regs.bc = gb_pop16();
    return;
}

void AddEntitySpeedToPos_04(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_04_return;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC260;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC200;
  AddEntitySpeedToPos_04_updatePosition:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_04_positive;
    gb.regs.e = 0xF0;
  AddEntitySpeedToPos_04_positive:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  AddEntitySpeedToPos_04_return:;
    return;
}

void AddEntityZSpeedToPos_04(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { AddEntitySpeedToPos_04_return(); return; };
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC330;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC310;
    AddEntitySpeedToPos_04_updatePosition(); return;
}

void KnightAddIronBallSpeedToPos(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC2D0;
    AddEntitySpeedToPos_04_updatePosition(); return;
}

void GetEntityXDistanceToLink_04(void) {
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityXDistanceToLink_04_positive;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityXDistanceToLink_04_positive:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityYDistanceToLink_04(void) {
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto GetEntityYDistanceToLink_04_negative;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityYDistanceToLink_04_negative:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityDirectionToLink_04(void) {
    GetEntityXDistanceToLink_04();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_04_positiveX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_04_positiveX:;
    gb_push16(gb.regs.af);
    GetEntityYDistanceToLink_04();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_04_positiveY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_04_positiveY:;
    gb.regs.de = gb_pop16();
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto GetEntityDirectionToLink_04_vertical;
    gb.regs.a = gb_read(0xFFD7);
    goto GetEntityDirectionToLink_04_verticalEnd;
  GetEntityDirectionToLink_04_vertical:;
    gb.regs.a = gb_read(0xFFD8);
  GetEntityDirectionToLink_04_verticalEnd:;
    gb.regs.e = gb.regs.a;
    return;
}

void TrendyGameOwnerEntityHandler(void) {
    gb.regs.a = gb_read(0xDC1B);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto TrendyGameOwnerEntityHandler_jr_6E8A;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC1B, gb.regs.a);
  TrendyGameOwnerEntityHandler_jr_6E8A:;
    func_004_6E92();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xDC1B, gb.regs.a);
    return;
}

void func_004_6E92(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_004_74D9(); return; };
    gb.regs.a = gb.regs.c;
    gb_write(0xD490, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC50A, gb.regs.a);
    GetEntityPrivateCountdown1();
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto func_004_6E92_jr_6EAE;
    gb.regs.a = 0x19;
    gb_write(0xFFF2, gb.regs.a);
  func_004_6E92_jr_6EAE:;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) { jr_004_6ECA(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto func_004_6E92_jr_6EC1;
    GetEntityDirectionToLink_04();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
  func_004_6E92_jr_6EC1:;
    SetEntityVariantForDirection_04();
    gb.regs.de = 0x75DF;
    RenderActiveEntitySpritesPair();
}

void jr_004_6ECA(void) {
    func_004_73FE();
    CopyEntityPositionToActivePosition();
    PushLinkOutOfEntity_04();
    func_004_73B7();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) goto jr_004_6ECA_jr_6EE9;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_6ECA_jr_6EE9;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
  jr_004_6ECA_jr_6EE9:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
}

void TrendyEntityJumpTable(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_6F38(); return;
        case 0x01: func_004_6FC6(); return;
        case 0x02: func_004_7020(); return;
        case 0x03: func_004_707F(); return;
        case 0x04: func_004_710C(); return;
        case 0x05: func_004_7179(); return;
        case 0x06: func_004_71B0(); return;
        case 0x07: func_004_71FF(); return;
        case 0x08: func_004_7249(); return;
        case 0x09: func_004_727C(); return;
        case 0x0A: func_004_7296(); return;
        case 0x0B: func_004_72EF(); return;
        case 0x0C: func_004_732F(); return;
    }
}

void Data_004_6F12(void) {
    /* data: db $38, $58, $78 */;
}

void Data_004_6F15(void) {
    /* data: db $58, $40, $70, $2E, $2E, $2E */;
}

void Data_004_6F1B(void) {
    /* data: db $3E, $4E, $4E, $00, $00, $00 */;
}

void Data_004_6F21(void) {
    /* data: db $04, $01, $02, $05, $02, $02, $00, $03, $04, $81, $81, $81, $82, $81, $81 */;
}

void Data_004_6F30(void) {
    /* data: db $FF, $47, $31, $52, $C5, $28, $00, $00 */;
}

void func_004_6F38(void) {
    gb.regs.e = 6;
    gb.regs.d = 0;
}

void jr_004_6F3C(void) {
    loop_start: ;
    gb_push16(gb.regs.de);
    gb.regs.a = 0x4F;
    gb.regs.e = 0x0E;
    SpawnNewEntityInRange_trampoline();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0x6ED2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6ED2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6F1B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6F21;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6F15;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    func_004_76B3();
    gb.regs.bc = gb_pop16();
    gb.regs.de = gb_pop16();
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD486, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xD482, gb.regs.a);
    gb_write(0xD483, gb.regs.a);
    gb.regs.a = 0x16;
    gb_write(0xD485, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xD484, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xD480, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xD481, gb.regs.a);
    IncrementEntityState();
    gb.regs.a = gb_read(0xDBBA);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xDD20;
    gb.regs.de = 0x6F30;
  jr_004_6F3C_loop_6FB8:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto jr_004_6F3C_loop_6FB8;
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
    return;
}

void func_004_6FC6(void) {
    gb.regs.a = gb_read(0xC167);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_6FC6_jr_6FE2;
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x6C);
    if (GET_FLAG_C()) goto func_004_6FC6_jr_6FE2;
    gb.regs.hl = 0xDB55;
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
    gb.regs.a = 0x6B;
    gb_write(0xFF98, gb.regs.a);
    jr_004_6FE6(); return;
  func_004_6FC6_jr_6FE2:;
    func_004_7C06();
    if (!GET_FLAG_C()) return;
}

void jr_004_6FE6(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC120, gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.e = 6;
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_6FE6_jr_6FF7;
    gb.regs.e = alu_dec8(gb.regs.e);
  jr_004_6FE6_jr_6FF7:;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_C()) goto jr_004_6FE6_jr_7004;
    /* jp_open_dialog Dialog040 */;
  jr_004_6FE6_jr_7004:;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_6FE6_jr_700E;
    /* ld_dialog_low a, Dialog0F7 */;
    jr_004_701A(); return;
  jr_004_6FE6_jr_700E:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low a, Dialog03B */;
    if (GET_FLAG_Z()) { jr_004_701A(); return; };
    /* ld_dialog_low a, Dialog03E */;
}

void jr_004_701A(void) {
    OpenDialogInTable0();
    IncrementEntityState(); return;
}

void func_004_7020(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_004_705C(); return; };
    gb.regs.a = gb_read(0xC173);
    alu_cp8(gb.regs.a, 0xF8);
    if (GET_FLAG_Z()) goto func_004_7020_jr_7038;
    gb.regs.a = gb_read(0xC177);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_C()) { jr_004_704B(); return; };
  func_004_7020_jr_7038:;
    gb.regs.a = gb_read(0xDC06);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = gb_read(0xDC05);
}

void func_004_7040(void) {
    gb.regs.a = alu_sbc8(gb.regs.a, 0);
    if (!GET_FLAG_C()) { jr_004_705D(); return; };
    /* call_open_dialog Dialog034 */;
    label_004_7056(); return;
}

void jr_004_704B(void) {
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_004_7056(); return; };
    /* jp_open_dialog Dialog0F8 */;
}

void label_004_7056(void) {
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
}

void ret_004_705C(void) {
    return;
}

void jr_004_705D(void) {
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_705D_jr_7066;
    gb_write(0xDC1C, gb.regs.a);
  jr_004_705D_jr_7066:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    /* ld_dialog_low a, Dialog03C */;
    if (GET_FLAG_Z()) goto jr_004_705D_jr_7074;
    /* ld_dialog_low a, Dialog03F */;
  jr_004_705D_jr_7074:;
    OpenDialogInTable0();
    gb.regs.a = 0x0A;
    gb_write(0xDC3A, gb.regs.a);
    IncrementEntityState(); return;
}

void func_004_707F(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xD480, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xD483, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_707F_jr_70A2;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    jr_004_70A6(); return;
  func_004_707F_jr_70A2:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
}

void jr_004_70A6(void) {
    gb_write(0xD482, gb.regs.a);
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_004_70F4(); return; };
    GetEntitySlowTransitionCountdown();
    if (GET_FLAG_Z()) goto jr_004_70A6_jr_70B9;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) return;
    label_004_7104(); return;
  jr_004_70A6_jr_70B9:;
    ReturnIfNonInteractive_04();
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xC50F);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb.regs.a = 4;
    if (GET_FLAG_Z()) goto jr_004_70A6_jr_70CA;
    gb.regs.a = alu_inc8(gb.regs.a);
  jr_004_70A6_jr_70CA:;
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF8);
    AddEntitySpeedToPos_04();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_Z()) return;
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x18);
    gb.regs.a = gb_read(0xC50F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.e = 1;
    func_004_723B(); return;
}

void jr_004_70F4(void) {
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { ret_004_710B(); return; };
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { ret_004_710B(); return; };
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) { ret_004_710B(); return; };
}

void label_004_7104(void) {
    IncrementEntityState();
}

void func_004_7107(void) {
    gb.regs.a = 0x20;
    gb_write(0xFFF4, gb.regs.a);
}

void ret_004_710B(void) {
    return;
}

void func_004_710C(void) {
    func_004_7165();
    gb.regs.a = 0x10;
    gb_write(0xD483, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_710C_jr_7127;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    jr_004_712B(); return;
  func_004_710C_jr_7127:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
}

void jr_004_712B(void) {
    gb_write(0xD482, gb.regs.a);
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_712B_jr_713B;
    gb.regs.e = 2;
    func_004_723B();
    jr_004_7141(); return;
  jr_004_712B_jr_713B:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { jr_004_7152(); return; };
}

void jr_004_7141(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_004_7164(); return; };
    gb.regs.a = gb_read(0xD484);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD484, gb.regs.a);
    alu_cp8(gb.regs.a, 0x88);
    if (GET_FLAG_C()) { ret_004_7164(); return; };
}

void jr_004_7152(void) {
    IncrementEntityState();
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { func_004_7160(); return; };
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
}

void func_004_7160(void) {
    gb.regs.a = 0x21;
    gb_write(0xFFF4, gb.regs.a);
}

void ret_004_7164(void) {
    return;
}

void func_004_7165(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xD480, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF9E, gb.regs.a);
    return;
}

void func_004_7179(void) {
    func_004_7165();
    gb.regs.a = 0x10;
    gb_write(0xD482, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_7179_jr_7194;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    jr_004_7198(); return;
  func_004_7179_jr_7194:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
}

void jr_004_7198(void) {
    gb_write(0xD483, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_004_7198_jr_71AA;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) return;
  jr_004_7198_jr_71AA:;
    func_004_7107();
    IncrementEntityState(); return;
}

void func_004_71B0(void) {
    func_004_7165();
    gb.regs.a = 0x10;
    gb_write(0xD482, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_71B0_jr_71CB;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    jr_004_71CF(); return;
  func_004_71B0_jr_71CB:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
}

void jr_004_71CF(void) {
    gb_write(0xD483, gb.regs.a);
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_71CF_jr_71DA;
    jr_004_71E0(); return;
  jr_004_71CF_jr_71DA:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_004_71EF(); return; };
}

void jr_004_71E0(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD485);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD485, gb.regs.a);
    alu_cp8(gb.regs.a, 0x55);
    if (GET_FLAG_C()) return;
}

void jr_004_71EF(void) {
    IncrementEntityState();
    func_004_7160();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
    gb.regs.e = 0;
    func_004_723B(); return;
}

void func_004_71FF(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xD480, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xD482, gb.regs.a);
    gb_write(0xD483, gb.regs.a);
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto func_004_71FF_jr_721D;
    gb.regs.hl = 0xD481;
    gb_write(gb.regs.hl, 2);
  func_004_71FF_jr_721D:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_004_7248(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_004_7248(); return; };
    gb.regs.a = gb_read(0xD486);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD486, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { ret_004_7248(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityState();
    gb.regs.e = 0;
}

void func_004_723B(void) {
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb.regs.e;
    gb_write(0xFF9E, gb.regs.a);
    gb_push16(gb.regs.bc);
    UpdateLinkWalkingAnimation_trampoline();
    gb.regs.bc = gb_pop16();
}

void ret_004_7248(void) {
    return;
}

void func_004_7249(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xD480, gb.regs.a);
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0xC8);
    if (!GET_FLAG_Z()) goto func_004_7249_jr_725F;
    gb.regs.hl = 0xD486;
    gb_write(gb.regs.hl, 0x10);
  func_004_7249_jr_725F:;
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto func_004_7249_jr_7268;
    gb.regs.hl = 0xD481;
    gb_write(gb.regs.hl, 3);
  func_004_7249_jr_7268:;
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_Z()) goto func_004_7249_jr_7274;
    gb.regs.hl = 0xD481;
    gb_write(gb.regs.hl, 4);
    label_004_7332(); return;
  func_004_7249_jr_7274:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    func_004_7107(); return;
}

void func_004_727C(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xD480, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD486);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD486, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState(); return;
}

void func_004_7296(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xD480, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x16;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xD484);
    gb_write(0xC201, gb.regs.a);
    gb.regs.a = gb_read(0xD485);
    gb_write(0xC211, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.c = 1;
    gb.regs.a = 4;
    ApplyVectorTowardsLink_trampoline();
    UpdateEntityPosWithSpeed_04();
    gb.regs.a = gb_read(0xC201);
    gb_write(0xD484, gb.regs.a);
    gb.regs.a = gb_read(0xC211);
    gb_write(0xD485, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xD484);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD485);
    alu_cp8(gb.regs.a, 0x16);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState();
    func_004_7160(); return;
}

void func_004_72EF(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xD480, gb.regs.a);
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_Z()) { jr_004_7325(); return; };
    gb.regs.hl = 0xD481;
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_72EF_ret_7324;
    gb_write(gb.regs.hl, 0);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_72EF_ret_7324;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 7);
  func_004_72EF_ret_7324:;
    return;
}

void jr_004_7325(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xD481;
    gb_write(gb.regs.hl, 4);
    IncrementEntityState(); return;
}

void func_004_732F(void) {
    label_004_7056(); return;
}

void label_004_7332(void) {
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_004_7332_jr_735F;
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    gb.regs.a = 0x4F;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xD484);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD485);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 6);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  label_004_7332_jr_735F:;
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
}

void jr_004_7362(void) {
    loop_start: ;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_7362_jr_73B0;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_004_7362_jr_73B0;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x4F);
    if (!GET_FLAG_Z()) goto jr_004_7362_jr_73B0;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xD484);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 4);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto jr_004_7362_jr_73B0;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xD485);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 6);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) goto jr_004_7362_jr_73B0;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC440;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  jr_004_7362_jr_73B0:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { goto loop_start; };
    return;
}

void func_004_73B7(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_73B7_ret_73E1;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xD484);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD485);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x10;
    gb.regs.hl = 0xD486;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0xFE);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  func_004_73B7_ret_73E1:;
    return;
}

void Unknown093SpriteVariants(void) {
  Unknown093SpriteVariants_variant0:;
    /* data: db $76, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $78, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  Unknown093SpriteVariants_variant1:;
    /* data: db $78, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $76, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  Unknown093SpriteVariants_variant2:;
    /* data: db $70, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  Unknown093SpriteVariants_variant3:;
    /* data: db $72, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  Unknown093SpriteVariants_variant4:;
    /* data: db $72, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  Unknown093SpriteVariants_variant5:;
    /* data: db $7E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Unknown094SpriteVariants(void) {
    /* data: db $26, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $26, OAM_GBC_PAL_0 | OAMF_PAL0 */;
}

void func_004_73FE(void) {
    gb.regs.a = gb_read(0xD484);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xD485);
    gb.regs.hl = 0xD486;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xD481);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x7331;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xD484);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xD485);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xD480);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x7331;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xD486);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto func_004_73FE_jr_744B;
    gb.regs.a = gb_read(0xD484);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xD485);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 5;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x7331;
    RenderActiveEntitySpritesPair();
  func_004_73FE_jr_744B:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_004_73FE_jr_7477;
    gb.regs.a = gb_read(0xD484);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xD485);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x7349;
    gb.regs.a = gb_read(0xC3C0);
    gb_push16(gb.regs.af);
    RenderActiveEntitySpritesPair();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC031;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_004_73FE_jr_7477:;
    gb.regs.hl = 0xC020;
    gb.regs.a = 0x50;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x28;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_73FE_jr_748C;
    gb.regs.a = 3;
    jr_004_748F(); return;
  func_004_73FE_jr_748C:;
    gb.regs.a = gb_read(0xD482);
}

void jr_004_748F(void) {
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x60;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x28;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x3E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xD482);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_748F_jr_74AF;
    gb.regs.a = 3;
    jr_004_74B2(); return;
  jr_004_748F_jr_74AF:;
    gb.regs.a = gb_read(0xD483);
}

void jr_004_74B2(void) {
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x60;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(gb.regs.hl++, gb.regs.a);
}

void Unknown097SpriteVariants(void) {
  Unknown097SpriteVariants_variant0:;
    /* data: db $3E, OAM_GBC_PAL_6 | OAMF_PAL1 | OAMF_BANK1 | OAMF_XFLIP */;
    /* data: db $22, OAM_GBC_PAL_2 | OAMF_PAL1 | OAMF_BANK1 | OAMF_YFLIP | OAMF_XFLIP | OAMF_PRI */;
}

void Unknown096SpriteVariants(void) {
  Unknown096SpriteVariants_variant0:;
    /* data: db $03, OAM_GBC_PAL_2 | OAMF_PAL1 | OAMF_BANK0 | OAMF_YFLIP | OAMF_PRI */;
    /* data: db $22, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_BANK1 | OAMF_YFLIP | OAMF_PRI */;
}

void Data_004_74C1(void) {
    /* data: db $FF, $FF, $9E, $10, $A6, $14, $8E, $16, $86, $15, $A8, $14 */;
}

void Unknown095SpriteVariants(void) {
  Unknown095SpriteVariants_variant0:;
    /* data: db $9A, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_7 | OAMF_PAL1 */;
  Unknown095SpriteVariants_variant1:;
    /* data: db $6C, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  Unknown095SpriteVariants_variant2:;
    /* data: db $6E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void label_004_74D9(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto label_004_74D9_jr_004_74F1;
    gb.regs.de = 0x73EC;
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto label_004_74D9_to_render;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto label_004_74D9_to_render;
    gb.regs.de = 0x73F0;
  label_004_74D9_to_render:;
    goto label_004_74D9_render;
  label_004_74D9_jr_004_74F1:;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto label_004_74D9_jr_004_74FE;
    gb.regs.a = gb_read(0xDBF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank04(); return; };
    jr_004_7511(); return;
  label_004_74D9_jr_004_74FE:;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) { jr_004_7511(); return; };
    gb.regs.a = gb_read(0xDBBA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ClearEntityStatusBank04(); return; };
    gb.regs.de = 0x7400;
  label_004_74D9_render:;
    RenderActiveEntitySpritesPair();
    jr_004_7517(); return;
}

void jr_004_7511(void) {
    gb.regs.de = 0x74C1;
    RenderActiveEntitySprite();
}

void jr_004_7517(void) {
    ReturnIfNonInteractive_04();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_7529(); return;
        case 0x01: func_004_755C(); return;
        case 0x02: func_004_7566(); return;
        case 0x03: func_004_75BC(); return;
        case 0x04: func_004_7681(); return;
        case 0x05: func_004_7698(); return;
    }
}

void func_004_7529(void) {
    UpdateEntityPosWithSpeed_04();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_004_753C(); return;
        case 0x01: func_004_7544(); return;
        case 0x02: func_004_754C(); return;
        case 0x03: func_004_7554(); return;
        case 0x04: func_004_7543(); return;
    }
}

void func_004_753C(void) {
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x3A);
    if (GET_FLAG_C()) { label_004_76AA(); return; };
}

void func_004_7543(void) {
    return;
}

void func_004_7544(void) {
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x4E);
    if (!GET_FLAG_C()) { label_004_76AA(); return; };
    return;
}

void func_004_754C(void) {
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x78);
    if (!GET_FLAG_C()) { label_004_76AA(); return; };
    return;
}

void func_004_7554(void) {
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x2E);
    if (GET_FLAG_C()) { label_004_76AA(); return; };
    return;
}

void func_004_755C(void) {
    GetEntityDirectionToLink_04();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb.regs.e = gb.regs.a;
    func_004_723B(); return;
}

void func_004_7566(void) {
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_7566_jr_7570;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
  func_004_7566_jr_7570:;
    AddEntityZSpeedToPos_04();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_004_7598(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cpl();
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_C()) goto func_004_7566_jr_7594;
    gb_write(gb.regs.hl, gb.regs.b);
    jr_004_7598(); return;
  func_004_7566_jr_7594:;
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
}

void jr_004_7598(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_004_7598_ret_75A9;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x56);
    if (GET_FLAG_Z()) { jr_004_75AA(); return; };
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_004_7598_ret_75A9:;
    return;
}

void jr_004_75AA(void) {
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0A);
    IncrementEntityState(); return;
}

void TrendyPrizeDialogs(void) {
  TrendyPrizeDialogs__0:;
    /* db_dialog_low Dialog044 */;
  TrendyPrizeDialogs__1:;
    /* db_dialog_low Dialog043 */;
  TrendyPrizeDialogs__2:;
    /* db_dialog_low Dialog042 */;
  TrendyPrizeDialogs__3:;
    /* db_dialog_low Dialog041 */;
  TrendyPrizeDialogs__4:;
    /* db_dialog_low Dialog03D */;
  TrendyPrizeDialogs__5:;
    /* db_dialog_low Dialog02A */;
}

void func_004_75BC(void) {
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_75BC_jr_75C6;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
  func_004_75BC_jr_75C6:;
    AddEntityZSpeedToPos_04();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { label_004_7680(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cpl();
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_C()) goto func_004_75BC_jr_75EA;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  func_004_75BC_jr_75EA:;
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto func_004_75BC_jr_75F8;
    /* call_open_dialog Dialog0F9 */;
    IncrementEntityState(); return;
  func_004_75BC_jr_75F8:;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 7);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 5);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xD490);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x18);
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto func_004_75BC_jr_762D;
    gb.regs.a = 1;
    gb_write(0xDBBA, gb.regs.a);
    CreateTradingItemEntity();
    ClearEntityStatusBank04(); return;
  func_004_75BC_jr_762D:;
    ClearEntityStatusBank04();
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x74D8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    OpenDialogInTable0();
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto func_004_75BC_jr_7647;
    return;
  func_004_75BC_jr_7647:;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto func_004_75BC_jr_7653;
    gb.regs.a = gb_read(0xDC38);
    gb.regs.a = alu_add8(gb.regs.a, 0x1E);
    gb_write(0xDC38, gb.regs.a);
    return;
  func_004_75BC_jr_7653:;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_7673(); return; };
    gb.regs.hl = 0xDC1E;
    gb.regs.a = gb_read(0xDBF8);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) goto func_004_75BC_jr_7666;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_daa();
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) goto func_004_75BC_jr_7666;
    gb.regs.a = gb_read(gb.regs.hl);
  func_004_75BC_jr_7666:;
    gb_write(0xDBF8, gb.regs.a);
    gb.regs.d = 0x0C;
    GiveInventoryItem_trampoline();
    gb.regs.a = 0x0B;
    gb_write(0xFFA5, gb.regs.a);
    return;
}

void jr_004_7673(void) {
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_004_7673_jr_767B;
    gb.regs.d = 4;
    GiveInventoryItem_trampoline(); return;
  jr_004_7673_jr_767B:;
    gb.regs.a = 0xFF;
    gb_write(0xDC3B, gb.regs.a);
}

void label_004_7680(void) {
    return;
}

void func_004_7681(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xC1AD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb_write(0xDC1C, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xC1BC, gb.regs.a);
    IncrementEntityState(); return;
}

void func_004_7698(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    return;
}

void Data_004_76A0(void) {
    /* data: db $FC, $00, $04, $00, $00 */;
}

void Data_004_76A5(void) {
    /* data: db $00, $04, $00, $FC, $00 */;
}

void label_004_76AA(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
}

void func_004_76B3(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x76A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x76A5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void Disabled4EEntityHandler(void) {
    return;
}

void ShopOwnerSpriteVariants(void) {
  ShopOwnerSpriteVariants_variant0:;
    /* data: db $60, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  ShopOwnerSpriteVariants_variant1:;
    /* data: db $62, OAM_GBC_PAL_3 | OAMF_PAL0 |OAMF_XFLIP */;
    /* data: db $60, OAM_GBC_PAL_3 | OAMF_PAL0 |OAMF_XFLIP */;
  ShopOwnerSpriteVariants_variant2:;
    /* data: db $64, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  ShopOwnerSpriteVariants_variant3:;
    /* data: db $66, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $64, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  ShopOwnerSpriteVariants_variant4:;
    /* data: db $68, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  ShopOwnerSpriteVariants_variant5:;
    /* data: db $6C, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  ShopOwnerSpriteVariants_variant6:;
    /* data: db $6A, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  ShopOwnerSpriteVariants_variant7:;
    /* data: db $6E, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void ShopOwnerEntityHandler(void) {
    gb.regs.a = gb_read(0xC50A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ShopOwnerEntityHandler_jr_76F9;
    gb.regs.a = 1;
    gb_write(0xC50A, gb.regs.a);
    func_004_788E();
  ShopOwnerEntityHandler_jr_76F9:;
    gb.regs.a = gb_read(0xDBFA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ShopOwnerEntityHandler_jr_7705;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x5F);
    if (!GET_FLAG_Z()) { jr_004_770E(); return; };
  ShopOwnerEntityHandler_jr_7705:;
    GetEntityDirectionToLink_04();
    gb.regs.a = gb.regs.e;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_004_770E(void) {
    SetEntityVariantForDirection_04();
    gb.regs.de = 0x75DF;
    RenderActiveEntitySpritesPair();
    func_004_7B70();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto jr_004_770E_jr_7723;
    PushLinkOutOfEntity_04();
  jr_004_770E_jr_7723:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_77F8(); return;
        case 0x01: func_004_78AF(); return;
        case 0x02: func_004_795D(); return;
        case 0x03: func_004_7ADD(); return;
        case 0x04: func_004_7AED(); return;
        case 0x05: func_004_7B40(); return;
    }
}

void Data_004_7732(void) {
    /* data: db $98, $63, $02, $B2, $B0, $B0, $98, $A4, $01, $7F, $7F */;
    /* data: db $98, $67, $02, $B1, $B0, $7F, $98, $A8, $01, $0A, $B3 */;
    /* data: db $98, $6A, $02, $7F, $B2, $B0, $98, $AC, $01, $BA, $B1 */;
    /* data: db $98, $6E, $02, $B1, $B0, $7F, $98, $B0, $01, $0A, $09 */;
    /* data: db $98, $63, $02, $B9, $B8, $B0, $98, $A4, $01, $7F, $7F */;
    /* data: db $98, $63, $02, $B1, $B0, $7F, $98, $A4, $01, $0A, $09 */;
    /* data: db $00 */;
}

void Data_004_7775(void) {
    /* data: db $98, $62, $43, $7F, $98, $83, $42, $7F, $98, $A3, $42, $7F, $00, $00, $00, $00 */;
    /* data: db $98, $66, $43, $7F, $98, $87, $42, $7F, $98, $A7, $42, $7F, $00, $00, $00, $00 */;
    /* data: db $98, $6A, $43, $7F, $98, $8B, $42, $7F, $98, $AB, $42, $7F, $00, $00, $00, $00 */;
    /* data: db $98, $6E, $43, $7F, $98, $8F, $42, $7F, $98, $AF, $42, $7F, $00, $00, $00, $00 */;
}

void Data_004_77B5(void) {
    /* data: db $01, $02, $03, $00 */;
    /* data: db $01, $02, $03, $04 */;
    /* data: db $05, $02, $03, $04 */;
    /* data: db $06, $02, $03, $04 */;
    /* data: db $07, $08, $09, $0A */;
}

void ShopItemPresentationDialogs(void) {
  ShopItemPresentationDialogs__0:;
    /* db_dialog_low Dialog030 */;
  ShopItemPresentationDialogs__1:;
    /* db_dialog_low Dialog031 */;
  ShopItemPresentationDialogs__2:;
    /* db_dialog_low Dialog032 */;
  ShopItemPresentationDialogs__3:;
    /* db_dialog_low Dialog033 */;
  ShopItemPresentationDialogs__4:;
    /* db_dialog_low Dialog02C */;
  ShopItemPresentationDialogs__5:;
    /* db_dialog_low Dialog02D */;
  ShopItemPresentationDialogs__6:;
    /* db_dialog_low Dialog039 */;
  ShopItemPresentationDialogs__7:;
    /* db_dialog_low Dialog000 */;
  ShopItemPresentationDialogs__8:;
    /* db_dialog_low Dialog000 */;
  ShopItemPresentationDialogs__9:;
    /* db_dialog_low Dialog000 */;
}

void Data_004_77D3(void) {
    /* data: db $00, $02, $00, $00, $00, $09, $00, $00, $00 */;
}

void Data_004_77DC(void) {
    /* data: db $00, $00, $10, $20, $10, $80, $10, $00, $00 */;
}

void Data_004_77E5(void) {
    /* data: db $00, $00, $00, $00, $00, $03, $00, $00, $00 */;
}

void Data_004_77EE(void) {
    /* data: db $00, $C8, $0A, $14, $0A, $D4, $0A, $00, $00, $00 */;
}

void func_004_77F8(void) {
    gb.regs.a = gb_read(0xDBF2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
  func_004_77F8_jr_77FC:;
    if (GET_FLAG_Z()) { jr_004_7839(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto func_004_77F8_ret_7838;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 1);
    gb_write(0xFF99, gb.regs.a);
    alu_cp8(gb.regs.a, 0x74);
    if (!GET_FLAG_Z()) goto func_004_77F8_ret_7838;
    /* call_open_dialog Dialog038 */;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    gb.regs.a = 0x19;
    gb_write(0xD368, gb.regs.a);
  func_004_77F8_ret_7838:;
    return;
}

void jr_004_7839(void) {
    gb.regs.e = 0;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xDC0E);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto jr_004_7839_jr_7845;
    gb.regs.e = 4;
  jr_004_7839_jr_7845:;
    gb_push16(gb.regs.bc);
    gb.regs.hl = wInventoryItems_BButtonSlot;
    gb.regs.c = 0x0B;
}

void jr_004_784B(void) {
    gb.regs.a = gb_read(0xDC25);
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto jr_004_784B_jr_7857;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) { jr_004_7859(); return; };
  jr_004_784B_jr_7857:;
    gb.regs.e = 8;
}

void jr_004_7859(void) {
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_004_784B(); return; };
    gb.regs.hl = wInventoryItems_BButtonSlot;
    gb.regs.c = 0x0B;
}

void jr_004_7864(void) {
    gb.regs.a = gb_read(0xDC25);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto jr_004_7864_jr_7870;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { jr_004_7872(); return; };
  jr_004_7864_jr_7870:;
    gb.regs.e = 0x0C;
}

void jr_004_7872(void) {
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_004_7864(); return; };
    gb.regs.hl = 0x77B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xC505;
    gb.regs.c = 4;
  jr_004_7872_loop_7881:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto jr_004_7872_loop_7881;
    gb.regs.bc = gb_pop16();
    IncrementEntityState();
    func_004_788E(); return;
}

void func_004_788E(void) {
    gb.regs.de = 0xD5C2;
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC505;
    gb.regs.c = 4;
}

void jr_004_7897(void) {
    loop_start: ;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_7897_jr_78A0;
    gb_push16(gb.regs.hl);
    func_004_798B();
    gb.regs.hl = gb_pop16();
  jr_004_7897_jr_78A0:;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb.regs.bc = gb_pop16();
    return;
}

void Data_004_78A5(void) {
    /* data: db $00, $00, $00, $01, $01, $02, $02, $03, $03, $03 */;
}

void func_004_78AF(void) {
    gb.regs.a = gb_read(0xC509);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_78AF_jr_78D4;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_004_78AF_jr_78D4;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto func_004_78AF_jr_78D4;
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x7B);
    if (GET_FLAG_C()) goto func_004_78AF_jr_78D4;
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(0xFF99, gb.regs.a);
    /* jp_open_dialog Dialog02F */;
  func_004_78AF_jr_78D4:;
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_C()) { jr_004_7940(); return; };
    gb.regs.a = gb_read(0xFF9E);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { jr_004_7940(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) { jr_004_7940(); return; };
    gb.regs.a = gb_read(0xC509);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_78AF_jr_7907;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x78A5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC50B);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_004_7940(); return; };
    gb.regs.a = 0x13;
    gb_write(0xFFF2, gb.regs.a);
    label_004_796D(); return;
  func_004_78AF_jr_7907:;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x78A5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC50B, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC505;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC509, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_004_78AF_jr_792B;
    gb.regs.a = 0x13;
    gb_write(0xFFF2, gb.regs.a);
  func_004_78AF_jr_792B:;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x7775;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xD5C2;
    gb.regs.c = 0x0D;
  func_004_78AF_loop_7939:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_004_78AF_loop_7939;
    gb.regs.bc = gb_pop16();
}

void jr_004_7940(void) {
    func_004_7C06();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xC509);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_004_7940_jr_7958;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x76D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    OpenDialogInTable0();
    IncrementEntityState(); return;
  jr_004_7940_jr_7958:;
    /* jp_open_dialog Dialog02E */;
}

void func_004_795D(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC177);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { jr_004_79AB(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_004_7984(); return; };
}

void label_004_796D(void) {
    gb.regs.a = gb_read(0xC50B);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC505;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC509);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.de = 0xD5C2;
    func_004_798B();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC509, gb.regs.a);
}

void jr_004_7984(void) {
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    return;
}

void func_004_798B(void) {
    gb_push16(gb.regs.de);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.d = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.d);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7732;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x0B;
  func_004_798B_loop_79A1:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_004_798B_loop_79A1;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.bc = gb_pop16();
    return;
}

void jr_004_79AB(void) {
    gb.regs.a = gb_read(0xC509);
    gb.regs.e = gb.regs.a;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_004_79AB_jr_79BB;
    gb.regs.a = gb_read(0xC5A9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_7A05(); return; };
    jr_004_7A0C(); return;
  jr_004_79AB_jr_79BB:;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { jr_004_79D9(); return; };
    gb.regs.hl = wInventoryItems_BButtonSlot;
    gb.regs.d = 0x0C;
  jr_004_79AB_loop_79C4:;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto jr_004_79AB_jr_79CE;
    gb.regs.d = alu_dec8(gb.regs.d);
    if (!GET_FLAG_Z()) goto jr_004_79AB_loop_79C4;
    jr_004_7A0C(); return;
  jr_004_79AB_jr_79CE:;
    gb.regs.a = gb_read(0xDBF9);
    gb.regs.hl = 0xDC1F;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) { jr_004_7A05(); return; };
    jr_004_7A0C(); return;
}

void jr_004_79D9(void) {
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) { jr_004_79F7(); return; };
    gb.regs.hl = wInventoryItems_BButtonSlot;
    gb.regs.d = 0x0C;
  jr_004_79D9_loop_79E2:;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto jr_004_79D9_jr_79EC;
    gb.regs.d = alu_dec8(gb.regs.d);
    if (!GET_FLAG_Z()) goto jr_004_79D9_loop_79E2;
    jr_004_7A0C(); return;
  jr_004_79D9_jr_79EC:;
    gb.regs.a = gb_read(0xDBF1);
    gb.regs.hl = 0xDC20;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) { jr_004_7A05(); return; };
    jr_004_7A0C(); return;
}

void jr_004_79F7(void) {
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_004_7A0C(); return; };
    gb.regs.hl = wInventoryItems_BButtonSlot;
    gb.regs.d = 0x0C;
}

void jr_004_7A00(void) {
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { jr_004_7A09(); return; };
}

void jr_004_7A05(void) {
    /* ld_dialog_low a, Dialog029 */;
    jr_004_7A24(); return;
}

void jr_004_7A09(void) {
    gb.regs.d = alu_dec8(gb.regs.d);
    if (!GET_FLAG_Z()) { jr_004_7A00(); return; };
}

void jr_004_7A0C(void) {
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x77D3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x77DC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xDC06);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.a = gb_read(0xDC05);
    gb.regs.a = alu_sbc8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) { jr_004_7A2E(); return; };
    /* ld_dialog_low a, Dialog034 */;
}

void jr_004_7A24(void) {
    OpenDialogInTable0();
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    return;
}

void jr_004_7A2E(void) {
    gb.regs.hl = 0xC509;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl, 0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x77EE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xDC3A);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xDC3A, gb.regs.a);
    gb.regs.a = alu_rl(gb.regs.a);
    gb.regs.hl = 0x77E5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_rr(gb.regs.a);
    gb.regs.a = gb_read(0xDC39);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xDC39, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_push16(gb.regs.af);
    /* call_open_dialog Dialog035 */;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}

void label_004_7A5F(void) {
    gb.regs.a = alu_dec8(gb.regs.a);
    switch(gb.regs.a) {
        case 0x00: boughtShovel(); return;
        case 0x01: bought3Hearts(); return;
        case 0x02: boughtShield(); return;
        case 0x03: bought10Bombs(); return;
        case 0x04: boughtBow(); return;
        case 0x05: bought10Arrows(); return;
        case 0x06: boughtOcarina(); return;
        case 0x07: boughtShop08(); return;
        case 0x08: boughtMedicine(); return;
    }
}

void boughtBow(void) {
    gb.regs.d = 5;
    GiveInventoryItem_trampoline();
    gb.regs.a = 0x20;
    gb_write(0xDBF1, gb.regs.a);
    return;
}

void bought10Arrows(void) {
    gb.regs.a = gb_read(0xDBF1);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    alu_daa();
    if (!GET_FLAG_C()) goto bought10Arrows_jr_7A88;
    gb.regs.a = 0x99;
  bought10Arrows_jr_7A88:;
    gb_write(0xDBF1, gb.regs.a);
    return;
}

void boughtOcarina(void) {
    gb.regs.d = 9;
    GiveInventoryItem_trampoline(); return;
}

void boughtShop08(void) {
    gb.regs.a = gb_read(0xDBF3);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    alu_daa();
    if (!GET_FLAG_C()) goto boughtShop08_jr_7A9B;
    gb.regs.a = 0x99;
  boughtShop08_jr_7A9B:;
    gb_write(0xDBF3, gb.regs.a);
    return;
}

void boughtMedicine(void) {
    gb.regs.a = gb_read(0xDBB9);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    alu_daa();
    gb_write(0xDBB9, gb.regs.a);
    return;
}

void boughtShovel(void) {
    gb.regs.d = 0x0B;
    GiveInventoryItem_trampoline(); return;
}

void bought10Bombs(void) {
    gb.regs.a = gb_read(0xDBF9);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    alu_daa();
    if (!GET_FLAG_C()) goto bought10Bombs_jr_7AB8;
    gb.regs.a = 0x99;
  bought10Bombs_jr_7AB8:;
    gb_write(0xDBF9, gb.regs.a);
    gb.regs.d = 2;
    GiveInventoryItem_trampoline(); return;
    gb.regs.a = gb_read(0xDBF1);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    alu_daa();
    if (!GET_FLAG_C()) goto bought10Bombs_jr_7ACA;
    gb.regs.a = 0x99;
  bought10Bombs_jr_7ACA:;
    gb_write(0xDBF1, gb.regs.a);
    gb.regs.d = 0x0C;
    GiveInventoryItem_trampoline(); return;
}

void bought3Hearts(void) {
    gb.regs.a = _3_FULL_HEARTS;
    gb_write(0xDC3B, gb.regs.a);
    return;
}

void boughtShield(void) {
    gb.regs.d = 4;
    GiveInventoryItem_trampoline(); return;
}

void func_004_7ADD(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    label_004_796D(); return;
}

void Data_004_7AE5(void) {
    /* data: db $33, $62, $1A, $01, $FF, $0F, $FF, $7F */;
}

void func_004_7AED(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_004_7B3F(); return; };
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
    IncrementEntityState();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDBB9, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_004_7B3F(); return; };
    gb.regs.hl = 0xDD30;
    gb.regs.de = 0x7AE5;
  func_004_7AED_loop_7B32:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_004_7AED_loop_7B32;
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
}

void ret_004_7B3F(void) {
    return;
}

void func_004_7B40(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC02);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb_write(0xDBF2, gb.regs.a);
    gb_write(0xC50A, gb.regs.a);
    ClearEntityStatusBank04(); return;
}

void Data_004_7B56(void) {
    /* data: db $1D, $3D */;
}

void Unknown091SpriteVariants(void) {
  Unknown091SpriteVariants_variant0:;
    /* data: db $5D, OAM_GBC_PAL_5 | OAMF_PAL1 | OAMF_BANK1 | OAMF_YFLIP | OAMF_XFLIP */;
}

void Data_004_7B5A(void) {
    /* data: db $96, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $A8, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $86, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $80, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $88, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $FF, OAM_GBC_PAL_7 | OAMF_PAL1 | OAMF_BANK1 | OAMF_YFLIP | OAMF_XFLIP | OAMF_PRI */;
    /* data: db $90, OAM_GBC_PAL_0 | OAMF_PAL1 */;
    /* data: db $AE, OAM_GBC_PAL_0 | OAMF_PAL1 */;
    /* data: db $A0, OAM_GBC_PAL_0 | OAMF_PAL1 */;
    /* data: db $2A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $2A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
}

void func_004_7B70(void) {
    gb.regs.a = 4;
}

void jr_004_7B72(void) {
    gb_write(0xFFE6, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC504;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_004_7BAC(); return; };
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.hl = Data_004_7B56__1;
    gb.regs.a = gb_read(0xFFE6);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = 0x32;
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_004_7B72_jr_7B9A;
    gb.regs.hl = 0xFFEC;
    gb_write(gb.regs.hl, 0x2F);
  jr_004_7B72_jr_7B9A:;
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto jr_004_7B72_jr_7BA6;
    gb.regs.de = 0x7A28;
    RenderActiveEntitySpritesPair();
    jr_004_7BAC(); return;
  jr_004_7B72_jr_7BA6:;
    gb.regs.de = 0x7B5A;
    RenderActiveEntitySprite();
}

void jr_004_7BAC(void) {
    gb.regs.a = gb_read(0xFFE6);
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) { jr_004_7B72(); return; };
    func_004_7BB7();
    CopyEntityPositionToActivePosition(); return;
}

void func_004_7BB7(void) {
    gb.regs.a = gb_read(0xC509);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC15C, gb.regs.a);
    ResetSpinAttack();
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0E);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto func_004_7BB7_jr_7BDD;
    gb.regs.de = 0x7A28;
    RenderActiveEntitySpritesPair(); return;
  func_004_7BB7_jr_7BDD:;
    gb.regs.de = 0x7B5A;
    RenderActiveEntitySprite(); return;
}

void PushLinkOutOfEntity_04(void) {
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto PushLinkOutOfEntity_04_ret_7C05;
    CopyLinkFinalPositionToPosition();
    ResetPegasusBoots();
    gb.regs.a = gb_read(0xC1A6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PushLinkOutOfEntity_04_ret_7C05;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC39F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto PushLinkOutOfEntity_04_ret_7C05;
    gb.regs.hl = 0xC28F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
  PushLinkOutOfEntity_04_ret_7C05:;
    return;
}

void func_004_7C06(void) {
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto func_004_7C06_jr_7C49;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto func_004_7C06_jr_7C49;
    GetEntityDirectionToLink_04();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) goto func_004_7C06_jr_7C49;
    gb.regs.hl = 0xC1AD;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC134;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_004_7C06_jr_7C49;
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_004_7C06_jr_7C49;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto func_004_7C06_jr_7C49;
    alu_scf();
    return;
  func_004_7C06_jr_7C49:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void func_004_7C4B(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC134;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_004_7C4B_jr_7C92;
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_004_7C4B_jr_7C92;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto func_004_7C4B_jr_7C92;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_C()) goto func_004_7C4B_jr_7C92;
    GetEntityDirectionToLink_04();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) goto func_004_7C4B_jr_7C92;
    gb.regs.hl = 0xC1AD;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto func_004_7C4B_jr_7C92;
    alu_scf();
    return;
  func_004_7C4B_jr_7C92:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void EntityVariantForDirection_04(void) {
  EntityVariantForDirection_04_right:;
    /* data: db 6 */;
  EntityVariantForDirection_04_left:;
    /* data: db 4 */;
  EntityVariantForDirection_04_up:;
    /* data: db 2 */;
  EntityVariantForDirection_04_down:;
    /* data: db 0 */;
}

void SetEntityVariantForDirection_04(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7B5B;
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

void Bombite1SpriteVariants(void) {
  Bombite1SpriteVariants_variant0:;
    /* data: db $7A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  Bombite1SpriteVariants_variant1:;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Bombite1SpriteVariants_variant2:;
    /* data: db $7E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  Bombite1SpriteVariants_variant3:;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Bombite1SpriteVariants_variant4:;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Bombite1SpriteVariants_variant5:;
    /* data: db $7C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $7C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Bombite2SpriteVariants(void) {
  Bombite2SpriteVariants_variant0:;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  Bombite2SpriteVariants_variant1:;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Bombite2SpriteVariants_variant2:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  Bombite2SpriteVariants_variant3:;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Bombite2SpriteVariants_variant4:;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Bombite2SpriteVariants_variant5:;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void TimerBombiteEntityHandler(void) {
    gb.regs.de = 0x7BBD;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto TimerBombiteEntityHandler_render;
    gb.regs.de = 0x7BD5;
  TimerBombiteEntityHandler_render:;
    GetEntityPrivateCountdown1();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_04();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto TimerBombiteEntityHandler_skipIncrementState;
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto TimerBombiteEntityHandler_skipIncrementState;
    IncrementEntityState();
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x6F);
  TimerBombiteEntityHandler_skipIncrementState:;
    ApplyRecoilIfNeeded_04();
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: TimerBombiteWalkingHandler(); return;
        case 0x01: TimerBombiteLitHandler(); return;
    }
}

void TimerBombiteSpeedXPerDirection(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void TimerBombiteSpeedYPerDirection(void) {
    /* data: db $00, $00, $F8, $00 */;
}

void TimerBombiteWalkingHandler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto TimerBombiteWalkingHandler_chooseDirectionEnd;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7C2B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x7C2F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  TimerBombiteWalkingHandler_chooseDirectionEnd:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void TimerBombiteCountdownAnimation(void) {
    /* data: db $05, $05, $04, $03, $02, $02, $02 */;
}

void TimerBombiteLitHandler(void) {
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TimerBombiteLitHandler_linkNotRunning;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  TimerBombiteLitHandler_linkNotRunning:;
    label_3B70();
    GetEntityXDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_C()) goto TimerBombiteLitHandler_chaseLink;
    GetEntityYDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_C()) goto TimerBombiteLitHandler_chaseLinkEnd;
  TimerBombiteLitHandler_chaseLink:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto TimerBombiteLitHandler_skipUpdateSpeed;
    gb.regs.a = 0x0E;
    ApplyVectorTowardsLink_trampoline();
  TimerBombiteLitHandler_skipUpdateSpeed:;
    goto TimerBombiteLitHandler_skipClearSpeed;
  TimerBombiteLitHandler_chaseLinkEnd:;
    ClearEntitySpeed();
  TimerBombiteLitHandler_skipClearSpeed:;
    GetEntitySlowTransitionCountdown();
    if (GET_FLAG_Z()) { BombiteExplodeAndDisappear(); return; };
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_Z()) goto TimerBombiteLitHandler_startFlashingEnd;
    gb_write(gb.regs.hl, 0x0A);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x30);
  TimerBombiteLitHandler_startFlashingEnd:;
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7C6B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void BouncingBombite1SpriteVariants(void) {
  BouncingBombite1SpriteVariants_variant0:;
    /* data: db $7A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $78, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  BouncingBombite1SpriteVariants_variant1:;
    /* data: db $78, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
}

void BouncingBombite2SpriteVariants(void) {
  BouncingBombite2SpriteVariants_variant0:;
    /* data: db $6A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $68, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  BouncingBombite2SpriteVariants_variant1:;
    /* data: db $68, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
}

void BouncingBombiteSpeedXPerDirection(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void BouncingBombiteSpeedYPerDirection(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void BouncingBombiteEntityHandler(void) {
    gb.regs.de = 0x7CC6;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto BouncingBombiteEntityHandler_render;
    gb.regs.de = 0x7CCE;
  BouncingBombiteEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_04();
    ApplyRecoilIfNeeded_04();
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto BouncingBombiteEntityHandler_jr_7E2A;
    DefaultEnemyDamageCollisionHandler_trampoline();
  BouncingBombiteEntityHandler_jr_7E2A:;
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: BouncingBombiteWalkingHandler(); return;
        case 0x01: BouncingBombiteTurningHandler(); return;
        case 0x02: BouncingBombiteLitHandler(); return;
    }
}

void BouncingBombiteWalkingHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BouncingBombiteWalkingHandler_skipIncrementState;
    IncrementEntityState();
  BouncingBombiteWalkingHandler_skipIncrementState:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void BouncingBombiteTurningHandler(void) {
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto BouncingBombiteTurningHandler_getDirectionToLink;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    goto BouncingBombiteTurningHandler_getDirectionToLinkEnd;
  BouncingBombiteTurningHandler_getDirectionToLink:;
    GetEntityDirectionToLink_04();
  BouncingBombiteTurningHandler_getDirectionToLinkEnd:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7CD6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x7CDA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void BouncingBombiteLitHandler(void) {
    label_3B7B();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { BombiteExplodeAndDisappear(); return; };
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto BouncingBombiteLitHandler_horizontalCollision;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto BouncingBombiteLitHandler_verticalCollision;
    goto BouncingBombiteLitHandler_collisionEnd;
  BouncingBombiteLitHandler_horizontalCollision:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    goto BouncingBombiteLitHandler_playBumpJingle;
  BouncingBombiteLitHandler_verticalCollision:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  BouncingBombiteLitHandler_playBumpJingle:;
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
  BouncingBombiteLitHandler_collisionEnd:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void BombiteExplodeAndDisappear(void) {
    BombiteExplode();
    ClearEntityStatusBank04(); return;
}

void BombiteExplode(void) {
    gb.regs.a = 2;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto BombiteExplode_return;
    PlayBombExplosionSfx();
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
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
  BombiteExplode_return:;
    return;
}

void LeeverSpriteVariants(void) {
  LeeverSpriteVariants_variant0:;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  LeeverSpriteVariants_variant1:;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  LeeverSpriteVariants_variant2:;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  LeeverSpriteVariants_variant3:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void LeeverEntityHandler(void) {
    gb.regs.de = 0x7DBC;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_04();
    ApplyRecoilIfNeeded_04();
    UpdateEntityPosWithSpeed_04();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    switch(gb.regs.a) {
        case 0x00: LeeverHidingHandler(); return;
        case 0x01: LeeverEmergingHandler(); return;
        case 0x02: LeeverChasingHandler(); return;
        case 0x03: LeeverBurrowingHandler(); return;
    }
}

void LeeverHidingHandler(void) {
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x1F);
    IncrementEntityState();
    ClearEntitySpeed(); return;
}

void LeeverEmergingSpriteVariantIndexes(void) {
    /* data: db $01, $00 */;
}

void LeeverEmergingHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto LeeverEmergingHandler_skipIncrementState;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x70);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
  LeeverEmergingHandler_skipIncrementState:;
    gb.regs.hl = 0x7DF5;
  LeeverEmergingHandler_setSpriteVariant:;
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void LeeverChasingHandler(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto LeeverChasingHandler_skipIncrementState;
    gb_write(gb.regs.hl, 0x1F);
    IncrementEntityState();
    ClearEntitySpeed(); return;
  LeeverChasingHandler_skipIncrementState:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto LeeverChasingHandler_skipUpdateSpeed;
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
  LeeverChasingHandler_skipUpdateSpeed:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void LeeverBurrowingSpriteVariantIndexes(void) {
    /* data: db $00, $01 */;
}

void LeeverBurrowingHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto LeeverBurrowingHandler_skipIncrementState;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline(); return;
  LeeverBurrowingHandler_skipIncrementState:;
    gb.regs.hl = 0x7E40;
    LeeverEmergingHandler_setSpriteVariant(); return;
}

void GhiniUpdateFlipAttribute(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_rl(gb.regs.a);
    gb.regs.a = 0;
    if (GET_FLAG_C()) goto GhiniUpdateFlipAttribute_negative;
    gb.regs.a = 0x20;
  GhiniUpdateFlipAttribute_negative:;
    gb.regs.hl = 0xFFED;
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void ReturnIfNonInteractive_04(void) {
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_04_skip;
  ReturnIfNonInteractive_04_allowInactiveEntity:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_04_skip;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_04_skip;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_04_skip;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_04_skip;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_04_return;
  ReturnIfNonInteractive_04_skip:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ReturnIfNonInteractive_04_return:;
    return;
}
