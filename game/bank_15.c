/* Auto-generated from LADX Disassembly - Bank 0x15 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void ResetEntity(void);
void KanaletCastleGateSwitchEntityHandler(void);
void func_015_40B2(void);
void func_015_40C1(void);
void func_015_40D5(void);
void MovingBlockSpriteVariants(void);
void MovingBlockLeftTopEntityHandler(void);
void MovingBlockLeftTopInitHandler(void);
void MovingBlockLeftTopUpdateHandler(void);
void MovingBlockPushLinkIfNeeded(void);
void MovingBlockLeftBottomEntityHandler(void);
void MovingBlockLeftBottomInitHandler(void);
void MovingBlockLeftBottomUpdateHandler(void);
void MovingBlockBottomLeftEntityHandler(void);
void MovingBlockBottomLeftInitHandler(void);
void MovingBlockBottomLeftUpdateHandler(void);
void MovingBlockBottomRightEntityHandler(void);
void MovingBlockBottomRightInitHandler(void);
void MovingBlockBottomRightUpdateHandler(void);
void CrystalSwitchSpriteVariants(void);
void CrystalSwitchEntityHandler(void);
void BouldersEntityHandler(void);
void Unknown043SpriteVariants(void);
void Data_015_43BE(void);
void Data_015_43C2(void);
void Data_015_43C6(void);
void label_015_43CA(void);
void jr_015_4430(void);
void YarnaTalkingBonesEntityHandler(void);
void jr_015_4445(void);
void jr_015_448C(void);
void SeashellMansionTreesEntityHandler(void);
void FishSpriteVariants(void);
void Data_015_44B3(void);
void FishEntityHandler(void);
void jr_015_44D7(void);
void func_015_44EC(void);
void func_015_4500(void);
void func_015_451D(void);
void jr_015_4530(void);
void func_015_4553(void);
void Data_015_45A3(void);
void FinalNightmareStairsHandler(void);
void func_015_45F6(void);
void func_015_45FE(void);
void func_015_4627(void);
void func_015_463D(void);
void func_015_4660(void);
void MoblinKingEntityHandler(void);
void func_015_4734(void);
void func_015_4743(void);
void func_015_4750(void);
void Data_015_4776(void);
void Data_015_4778(void);
void Data_015_477A(void);
void Data_015_477C(void);
void Data_015_477E(void);
void func_015_4780(void);
void jr_015_47E3(void);
void Data_015_483D(void);
void func_015_483F(void);
void func_015_4873(void);
void func_015_48B6(void);
void Data_015_48BF(void);
void Data_015_48C7(void);
void func_015_48CF(void);
void func_015_491C(void);
void func_015_4928(void);
void func_015_494C(void);
void func_015_4977(void);
void label_015_497F(void);
void jr_015_4990(void);
void func_015_499C(void);
void func_015_49C2(void);
void Data_015_49E5(void);
void Data_015_4A15(void);
void Data_015_4ABD(void);
void func_015_4AC9(void);
void Data_015_4B17(void);
void Data_015_4B77(void);
void Data_015_4BB7(void);
void Data_015_4BD7(void);
void Data_015_4BD9(void);
void PokeyEntityHandler(void);
void func_015_4C85(void);
void Unknown044SpriteVariants(void);
void label_015_4CD9(void);
void func_015_4D0F(void);
void jr_015_4D39(void);
void FlameShooterSpriteVariants(void);
void FlameShooterEntityHandler(void);
void Unknown045SpriteVariants(void);
void Unknown046SpriteVariants(void);
void Data_015_4DB1(void);
void Data_015_4DB3(void);
void label_015_4DB5(void);
void jr_015_4E49(void);
void ret_015_4E61(void);
void label_015_4E62(void);
void StalfosEvasive2SpriteVariants(void);
void Data_015_4E89(void);
void StalfosEvasive1SpriteVariants(void);
void StalfosEvasiveEntityHandler(void);
void label_015_4ECB(void);
void jr_015_4EDF(void);
void jr_015_4EEE(void);
void func_015_4F5A(void);
void jr_015_4FCE(void);
void jr_015_500A(void);
void func_015_501A(void);
void FinalNightmareSpritesheetsPerForm(void);
void FinalNightmareLoadsheetForForm(void);
void FinalNightmareEntityHandler(void);
void FinalNightmareFormIntroHandler(void);
void func_015_50C2(void);
void func_015_511D(void);
void func_015_5128(void);
void jr_015_512D(void);
void func_015_5138(void);
void func_015_5153(void);
void func_015_516E(void);
void jr_015_5185(void);
void Data_015_518D(void);
void func_015_5191(void);
void Data_015_51AF(void);
void func_015_51B5(void);
void FinalNightmareFormGiantGelHandler(void);
void func_015_51FF(void);
void func_015_520C(void);
void func_015_522C(void);
void jr_015_527A(void);
void func_015_528A(void);
void func_015_52AA(void);
void func_015_52B1(void);
void func_015_52B6(void);
void func_015_52BB(void);
void jr_015_52FF(void);
void Data_015_5313(void);
void func_015_5317(void);
void func_015_5330(void);
void label_015_5335(void);
void ret_015_5355(void);
void Data_015_5356(void);
void Data_015_535E(void);
void Data_015_5366(void);
void Data_015_5368(void);
void func_015_5370(void);
void func_015_5383(void);
void jr_015_5384(void);
void Data_015_53DD(void);
void func_015_53E1(void);
void func_015_542E(void);
void func_015_5435(void);
void jr_015_5465(void);
void jr_015_5468(void);
void label_015_54A2(void);
void jr_015_54B7(void);
void Unknown047SpriteVariants(void);
void Data_015_54CA(void);
void Data_015_54D0(void);
void FinalNightmareExplosionEffectHandler(void);
void Data_015_5501(void);
void Unknown048SpriteVariants(void);
void Unknown052SpriteVariants(void);
void Data_015_5629(void);
void func_015_5631(void);
void jr_015_5639(void);
void jr_015_5676(void);
void func_015_569F(void);
void Data_015_56BB(void);
void func_015_572B(void);
void FinalNightmareFormAgahnimHandler(void);
void func_015_577B(void);
void Data_015_57C0(void);
void func_015_57CF(void);
void Data_015_5807(void);
void func_015_580B(void);
void func_015_5819(void);
void label_015_582B(void);
void Data_015_583C(void);
void Data_015_584C(void);
void Data_015_5850(void);
void func_015_5854(void);
void jr_015_58C0(void);
void func_015_58ED(void);
void Data_015_5911(void);
void Data_015_5919(void);
void Data_015_5921(void);
void func_015_5926(void);
void Data_015_595B(void);
void func_015_5963(void);
void Data_015_59B5(void);
void func_015_59B9(void);
void func_015_5A05(void);
void func_015_5A1F(void);
void func_015_5A67(void);
void Unknown049SpriteVariants(void);
void Data_015_5A83(void);
void Data_015_5A93(void);
void Data_015_5AA7(void);
void Data_015_5ABB(void);
void Data_015_5ACF(void);
void Data_015_5AE3(void);
void Data_015_5AF7(void);
void func_015_5B0B(void);
void func_015_5B2C(void);
void jr_015_5B4B(void);
void jr_015_5B6C(void);
void Data_015_5B74(void);
void Data_015_5D34(void);
void label_015_5D48(void);
void Unknown050SpriteVariants(void);
void Data_015_5D85(void);
void Data_015_5D89(void);
void func_015_5D8D(void);
void func_015_5D97(void);
void Data_015_5DCD(void);
void label_015_5DD5(void);
void Unknown051SpriteVariants(void);
void label_015_5DED(void);
void jr_015_5E24(void);
void func_015_5E35(void);
void func_015_5E38(void);
void func_015_5E85(void);
void func_015_5EAC(void);
void jr_015_5F0F(void);
void ret_015_5F19(void);
void Data_015_5F1A(void);
void Data_015_5F1E(void);
void func_015_5F22(void);
void jr_015_5F3F(void);
void ret_015_5F99(void);
void func_015_5F9A(void);
void Data_015_5FA5(void);
void Data_015_5FB5(void);
void Data_015_5FB9(void);
void Data_015_5FC9(void);
void func_015_5FD1(void);
void FinalNightmareFormMoldormHandler(void);
void Data_015_5FE2(void);
void Data_015_6042(void);
void func_015_604A(void);
void jr_015_6069(void);
void Data_015_6084(void);
void func_015_608C(void);
void func_015_60C1(void);
void func_015_60D4(void);
void jr_015_6109(void);
void Data_015_6135(void);
void Unknown053SpriteVariants(void);
void func_015_6245(void);
void ret_015_6330(void);
void func_015_6331(void);
void jr_015_6379(void);
void FinalNightmareFormGanonLanmolaHandler(void);
void jr_015_63F2(void);
void jr_015_63F5(void);
void jr_015_6425(void);
void Data_015_6444(void);
void func_015_64BC(void);
void Data_015_6501(void);
void func_015_650E(void);
void func_015_6553(void);
void func_015_655D(void);
void ret_015_6565(void);
void Data_015_6566(void);
void Data_015_6586(void);
void func_015_65A6(void);
void Data_015_6600(void);
void Data_015_6604(void);
void Data_015_6608(void);
void Data_015_6610(void);
void func_015_6618(void);
void jr_015_6628(void);
void ret_015_66C7(void);
void Data_015_66C8(void);
void func_015_66CC(void);
void jr_015_674E(void);
void func_015_6753(void);
void Data_015_676F(void);
void Data_015_6777(void);
void Data_015_677F(void);
void func_015_678F(void);
void jr_015_67D9(void);
void func_015_67E2(void);
void func_015_67E3(void);
void func_015_67FA(void);
void func_015_6811(void);
void jr_015_683F(void);
void func_015_6896(void);
void Data_015_68DF(void);
void func_015_68E7(void);
void func_015_692A(void);
void Data_015_6948(void);
void Data_015_69C8(void);
void func_015_69D2(void);
void Data_015_69F1(void);
void func_015_6A69(void);
void Data_015_6A84(void);
void Data_015_6C04(void);
void func_015_6C10(void);
void Data_015_6C59(void);
void Data_015_6C5D(void);
void FinalNightmareGanonTridentHandler(void);
void Unknown054SpriteVariants(void);
void Data_015_6D3C(void);
void FinalNightmareFormLanmolaHandler(void);
void Unknown055SpriteVariants(void);
void FinalNightmareGanonBatHandler(void);
void func_015_6D86(void);
void func_015_6D9C(void);
void jr_015_6DC4(void);
void Data_015_6DD3(void);
void Data_015_6DDB(void);
void Data_015_6DF3(void);
void Data_015_6E0B(void);
void Data_015_6E23(void);
void FinalNightmareFormDethlHandler(void);
void jr_015_6E3D(void);
void jr_015_6E4E(void);
void func_015_6E66(void);
void jr_015_6F70(void);
void func_015_6FA1(void);
void func_015_6FBC(void);
void ret_015_6FF5(void);
void Data_015_6FF6(void);
void Data_015_7026(void);
void func_015_7056(void);
void Data_015_70A7(void);
void Data_015_70AF(void);
void Data_015_70CF(void);
void Data_015_70D7(void);
void Data_015_70F7(void);
void Data_015_70FF(void);
void Data_015_711F(void);
void Data_015_7127(void);
void Unknown056SpriteVariants(void);
void func_015_717B(void);
void jr_015_71C5(void);
void jr_015_7208(void);
void jr_015_7226(void);
void jr_015_72B1(void);
void func_015_72CF(void);
void SandCrabSpriteVariants(void);
void Data_015_7328(void);
void Data_015_732C(void);
void SandCrabEntityHandler(void);
void ret_015_7382(void);
void Urchin2SpriteVariants(void);
void Urchin1SpriteVariants(void);
void Data_015_73A3(void);
void Data_015_73A7(void);
void UrchinEntityHandler(void);
void jr_015_7428(void);
void Data_015_7436(void);
void HookshotBridgeHandler(void);
void jr_015_74E6(void);
void BeetleSpawnerEntityHandler(void);
void BeetleXSpeeds(void);
void BeetleYSpeeds(void);
void BeetleSpriteVariants(void);
void BeetleSpawnerBeetleHandler(void);
void Data_015_75CE(void);
void Data_015_75D2(void);
void LaserBeamEntityHandler(void);
void jr_015_7619(void);
void jr_015_7639(void);
void Data_015_764B(void);
void MonkeyEntityHandler(void);
void func_015_76FA(void);
void func_015_770A(void);
void jr_015_773A(void);
void ret_015_7792(void);
void func_015_7793(void);
void jr_015_77BA(void);
void ret_015_77BE(void);
void func_015_77BF(void);
void Unknown057SpriteVariants(void);
void Data_015_781B(void);
void Data_015_781D(void);
void label_015_7825(void);
void WitchRatSpriteVariants(void);
void WitchRatEntityHandler(void);
void Data_015_78D6(void);
void func_015_78DE(void);
void func_015_792E(void);
void jr_015_7950(void);
void Data_015_7955(void);
void func_015_795D(void);
void func_015_7964(void);
void func_015_7995(void);
void label_015_79DF(void);
void func_015_79F0(void);
void label_015_7A27(void);
void PushLinkOutOfEntity_15(void);
void jr_015_7A9A(void);
void EntityVariantForDirection_15(void);
void SetEntityVariantForDirection_15(void);
void ShouldLinkTalkToEntity_15(void);
void ReturnIfNonInteractive_15(void);
void ApplyRecoilIfNeeded_15(void);
void UpdateEntityPosWithSpeed_15(void);
void UpdateEntityYPosWithSpeed_15(void);
void AddEntitySpeedToPos_15(void);
void AddEntityZSpeedToPos_15(void);
void GetEntityXDistanceToLink_15(void);
void GetEntityRealYDistanceToLink_15(void);
void GetEntityVisualYDistanceToLink_15(void);
void GetEntityDirectionToLink_15(void);
void ClearEntityStatus_15(void);
void label_015_7C37(void);
void func_015_7C43(void);
void label_015_7C4E(void);
void func_015_7C54(void);
void func_015_7C63(void);
void label_015_7C71(void);
void label_015_7C91(void);
void jr_015_7CD2(void);
void func_015_7CDB(void);
void DreamShrineBedEntityHandler(void);
void func_015_7D01(void);
void Unknown061SpriteVariants(void);
void Unknown059SpriteVariants(void);
void Unknown060SpriteVariants(void);
void Data_015_7D68(void);
void Data_015_7D70(void);
void func_015_7D78(void);
void jr_015_7DEC(void);
void func_015_7DF5(void);
void func_015_7E31(void);
void Data_015_7E55(void);
void Data_015_7E57(void);
void Data_015_7E59(void);
void Data_015_7E5B(void);
void Data_015_7E5D(void);
void Data_015_7E5F(void);
void BookSpriteVariants(void);
void Data_015_7E6F(void);
void BookEntityHandler(void);
void jr_015_7EA0(void);
void jr_015_7EA6(void);
void Data_015_7EB0(void);
void func_015_7EB9(void);
void jr_015_7EF3(void);
void func_015_7F04(void);
void jr_015_7F4F(void);
void jr_015_7F72(void);
void jr_015_7F82(void);
void AnimalD1SpriteVariants(void);
void AnimalD1EntityHandler(void);

void ResetEntity(void) {
    ClearEntitySpeed();
    gb.regs.hl = 0xC330;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC260;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC270;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC220;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC230;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC490;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC4F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC4A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void KanaletCastleGateSwitchEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatus_15(); return; };
    ReturnIfNonInteractive_15();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_40B2(); return;
        case 0x01: func_015_40C1(); return;
        case 0x02: func_015_40D5(); return;
    }
}

void func_015_40B2(void) {
    gb.regs.a = gb_read(0xC1CB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_015_40B2_return;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
  func_015_40B2_return:;
    return;
}

void func_015_40C1(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = 0x11;
    gb_write(0xFFF4, gb.regs.a);
    IncrementEntityState(); return;
}

void func_015_40D5(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_40D5_jr_40EF;
    gb_write(0xC167, gb.regs.a);
    gb_write(0xC155, gb.regs.a);
    /* call_open_dialog Dialog039 */;
    func_015_7CDB();
    ClearEntityStatus_15(); return;
  func_015_40D5_jr_40EF:;
    gb.regs.e = 1;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_015_40D5_jr_40F7;
    gb.regs.e = 0xFF;
  func_015_40D5_jr_40F7:;
    gb.regs.a = gb.regs.e;
    gb_write(0xC155, gb.regs.a);
    return;
}

void MovingBlockSpriteVariants(void) {
  MovingBlockSpriteVariants_variant0:;
    /* data: db $F8, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $FA, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    MovingBlockLeftTopEntityHandler(); return;
}

void MovingBlockLeftTopEntityHandler(void) {
    gb.regs.de = 0x4108;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MovingBlockLeftTopInitHandler(); return;
        case 0x01: MovingBlockLeftTopUpdateHandler(); return;
    }
}

void MovingBlockLeftTopInitHandler(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void MovingBlockLeftTopUpdateHandler(void) {
    gb.regs.a = gb_read(0xFFBA);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { MovingBlockPushLinkIfNeeded(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MovingBlockLeftTopUpdateHandler_moverNotGrabbed;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto MovingBlockLeftTopUpdateHandler_return;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x11;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto MovingBlockLeftTopUpdateHandler_return;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  MovingBlockLeftTopUpdateHandler_return:;
    return;
  MovingBlockLeftTopUpdateHandler_moverNotGrabbed:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto MovingBlockLeftTopUpdateHandler_fullyClosed;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_C()) { MovingBlockPushLinkIfNeeded(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    MovingBlockPushLinkIfNeeded(); return;
  MovingBlockLeftTopUpdateHandler_fullyClosed:;
    gb.regs.hl = 0xFFE8;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    MovingBlockPushLinkIfNeeded(); return;
}

void MovingBlockPushLinkIfNeeded(void) {
    CopyEntityPositionToActivePosition();
    GetEntityXDistanceToLink_15();
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto MovingBlockPushLinkIfNeeded_linkCollisionEnd;
    GetEntityRealYDistanceToLink_15();
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x1C);
    if (!GET_FLAG_C()) goto MovingBlockPushLinkIfNeeded_linkCollisionEnd;
    ResetPegasusBoots();
    ClearLinkPositionIncrement();
    GetEntityDirectionToLink_15();
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto MovingBlockPushLinkIfNeeded_pushRightEnd;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(0xFF98, gb.regs.a);
    return;
  MovingBlockPushLinkIfNeeded_pushRightEnd:;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto MovingBlockPushLinkIfNeeded_pushLeftEnd;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 0xF4);
    gb_write(0xFF98, gb.regs.a);
    return;
  MovingBlockPushLinkIfNeeded_pushLeftEnd:;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto MovingBlockPushLinkIfNeeded_pushUpEnd;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x47);
    if (!GET_FLAG_Z()) goto MovingBlockPushLinkIfNeeded_notLeftBottomBlock;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
  MovingBlockPushLinkIfNeeded_notLeftBottomBlock:;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0xF0);
    gb_write(0xFF99, gb.regs.a);
    return;
  MovingBlockPushLinkIfNeeded_pushUpEnd:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x46);
    if (!GET_FLAG_Z()) goto MovingBlockPushLinkIfNeeded_notLeftTopBlock;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
  MovingBlockPushLinkIfNeeded_notLeftTopBlock:;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(0xFF99, gb.regs.a);
  MovingBlockPushLinkIfNeeded_linkCollisionEnd:;
    return;
}

void MovingBlockLeftBottomEntityHandler(void) {
    gb.regs.de = 0x4108;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MovingBlockLeftBottomInitHandler(); return;
        case 0x01: MovingBlockLeftBottomUpdateHandler(); return;
    }
}

void MovingBlockLeftBottomInitHandler(void) {
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void MovingBlockLeftBottomUpdateHandler(void) {
    gb.regs.a = gb_read(0xFFBA);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto MovingBlockLeftBottomUpdateHandler_pushLink;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MovingBlockLeftBottomUpdateHandler_moverNotGrabbed;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto MovingBlockLeftBottomUpdateHandler_return;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x11;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto MovingBlockLeftBottomUpdateHandler_return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  MovingBlockLeftBottomUpdateHandler_return:;
    return;
  MovingBlockLeftBottomUpdateHandler_moverNotGrabbed:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto MovingBlockLeftBottomUpdateHandler_fullyClosed;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_C()) goto MovingBlockLeftBottomUpdateHandler_pushLink;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    goto MovingBlockLeftBottomUpdateHandler_pushLink;
  MovingBlockLeftBottomUpdateHandler_fullyClosed:;
    gb.regs.hl = 0xFFE8;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  MovingBlockLeftBottomUpdateHandler_pushLink:;
    MovingBlockPushLinkIfNeeded(); return;
}

void MovingBlockBottomLeftEntityHandler(void) {
    gb.regs.de = 0x4108;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MovingBlockBottomLeftInitHandler(); return;
        case 0x01: MovingBlockBottomLeftUpdateHandler(); return;
    }
}

void MovingBlockBottomLeftInitHandler(void) {
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void MovingBlockBottomLeftUpdateHandler(void) {
    gb.regs.a = gb_read(0xFFBA);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto MovingBlockBottomLeftUpdateHandler_pushLink;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MovingBlockBottomLeftUpdateHandler_moverNotGrabbed;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto MovingBlockBottomLeftUpdateHandler_return;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x11;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto MovingBlockBottomLeftUpdateHandler_return;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  MovingBlockBottomLeftUpdateHandler_return:;
    return;
  MovingBlockBottomLeftUpdateHandler_moverNotGrabbed:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto MovingBlockBottomLeftUpdateHandler_fullyClosed;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_C()) goto MovingBlockBottomLeftUpdateHandler_pushLink;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    goto MovingBlockBottomLeftUpdateHandler_pushLink;
  MovingBlockBottomLeftUpdateHandler_fullyClosed:;
    gb.regs.hl = 0xFFE8;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  MovingBlockBottomLeftUpdateHandler_pushLink:;
    MovingBlockPushLinkIfNeeded(); return;
}

void MovingBlockBottomRightEntityHandler(void) {
    gb.regs.de = 0x4108;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: MovingBlockBottomRightInitHandler(); return;
        case 0x01: MovingBlockBottomRightUpdateHandler(); return;
    }
}

void MovingBlockBottomRightInitHandler(void) {
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void MovingBlockBottomRightUpdateHandler(void) {
    gb.regs.a = gb_read(0xFFBA);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto MovingBlockBottomRightUpdateHandler_pushLink;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MovingBlockBottomRightUpdateHandler_moverNotGrabbed;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto MovingBlockBottomRightUpdateHandler_return;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x11;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto MovingBlockBottomRightUpdateHandler_return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  MovingBlockBottomRightUpdateHandler_return:;
    return;
  MovingBlockBottomRightUpdateHandler_moverNotGrabbed:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto MovingBlockBottomRightUpdateHandler_fullyClosed;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_C()) goto MovingBlockBottomRightUpdateHandler_pushLink;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    goto MovingBlockBottomRightUpdateHandler_pushLink;
  MovingBlockBottomRightUpdateHandler_fullyClosed:;
    gb.regs.hl = 0xFFE8;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  MovingBlockBottomRightUpdateHandler_pushLink:;
    MovingBlockPushLinkIfNeeded(); return;
}

void CrystalSwitchSpriteVariants(void) {
  CrystalSwitchSpriteVariants_variant0:;
    /* data: db $58, $03 */;
    /* data: db $58, $23 */;
    CrystalSwitchEntityHandler(); return;
}

void CrystalSwitchEntityHandler(void) {
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    GetEntityTransitionCountdown();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.de = 0x4337;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    PushLinkOutOfEntity_15();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CrystalSwitchEntityHandler_ret_4364;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xD7AD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CrystalSwitchEntityHandler_ret_4364;
    gb.regs.a = 1;
    gb_write(0xD7AD, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x18);
    gb.regs.a = 0x0E;
    gb_write(0xFFF3, gb.regs.a);
  CrystalSwitchEntityHandler_ret_4364:;
    return;
}

void BouldersEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_015_43CA(); return; };
    ReturnIfNonInteractive_15();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BouldersEntityHandler_ret_43AD;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_C()) return;
    gb.regs.a = 0x45;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    GetRandomByte();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x70);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  BouldersEntityHandler_ret_43AD:;
    return;
}

void Unknown043SpriteVariants(void) {
  Unknown043SpriteVariants_variant0:;
    /* data: db $5C, $00 */;
    /* data: db $5E, $00 */;
  Unknown043SpriteVariants_variant1:;
    /* data: db $5E, $20 */;
    /* data: db $5C, $20 */;
  Unknown043SpriteVariants_variant2:;
    /* data: db $5E, $60 */;
    /* data: db $5C, $60 */;
  Unknown043SpriteVariants_variant3:;
    /* data: db $5C, $40 */;
    /* data: db $5E, $40 */;
    Data_015_43BE(); return;
}

void Data_015_43BE(void) {
    /* data: db $0C, $F4, $05, $FB */;
}

void Data_015_43C2(void) {
    /* data: db $08, $0A, $06, $0C */;
}

void Data_015_43C6(void) {
    /* data: db $18, $20, $1C, $28 */;
}

void label_015_43CA(void) {
    gb.regs.de = 0x43C2;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    DecrementEntityIgnoreHitsCountdown();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
  label_015_43CA_jr_43DC:;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_15();
    AddEntityZSpeedToPos_15();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_015_4430(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x43BE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
  label_015_43CA_jr_4411:;
    gb.regs.hl = 0x43C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  label_015_43CA_jr_4415:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x43C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xFFF2, gb.regs.a);
    jr_015_4430(); return;
}

void jr_015_4430(void) {
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xA8);
    if (!GET_FLAG_C()) { ClearEntityStatus_15(); return; };
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x84);
    if (!GET_FLAG_C()) { ClearEntityStatus_15(); return; };
    return;
}

void YarnaTalkingBonesEntityHandler(void) {
    ReturnIfNonInteractive_15();
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
    jr_015_4445(); return;
}

void jr_015_4445(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { jr_015_448C(); return; };
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_015_448C(); return; };
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_015_448C(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) { jr_015_448C(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) { jr_015_448C(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xDF);
    /* ld_dialog_low a, Dialog092 */;
    if (GET_FLAG_Z()) goto jr_015_4445_jr_4489;
    gb.regs.a = gb_read(0xDC21);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    /* ld_dialog_low a, Dialog043 */;
  jr_015_4445_jr_4489:;
    OpenDialogInTable0(); return;
}

void jr_015_448C(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_015_4445(); return; };
    return;
}

void SeashellMansionTreesEntityHandler(void) {
    ReturnIfNonInteractive_15();
    ShouldLinkTalkToEntity_15();
    if (!GET_FLAG_C()) return;
    /* jp_open_dialog Dialog012 */;
}

void FishSpriteVariants(void) {
  FishSpriteVariants_variant0:;
    /* data: db $FF, $00 */;
    /* data: db $FF, $00 */;
  FishSpriteVariants_variant1:;
    /* data: db $54, $00 */;
    /* data: db $56, $00 */;
  FishSpriteVariants_variant2:;
    /* data: db $58, $00 */;
    /* data: db $5A, $00 */;
  FishSpriteVariants_variant3:;
    /* data: db $56, $20 */;
    /* data: db $54, $20 */;
  FishSpriteVariants_variant4:;
    /* data: db $5A, $20 */;
    /* data: db $58, $20 */;
    Data_015_44B3(); return;
}

void Data_015_44B3(void) {
    /* data: db $5C, $00, $5C, $20, $5E, $00, $5E, $00 */;
}

void FishEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { jr_015_44D7(); return; };
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) goto FishEntityHandler_jr_44D1;
    gb.regs.a = alu_sub8(gb.regs.a, 5);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x44B3;
    RenderActiveEntitySprite();
    jr_015_44D7(); return;
  FishEntityHandler_jr_44D1:;
    gb.regs.de = 0x44BB;
    RenderActiveEntitySpritesPair();
    jr_015_44D7(); return;
}

void jr_015_44D7(void) {
    ReturnIfNonInteractive_15();
    ApplyRecoilIfNeeded_15();
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_44EC(); return;
        case 0x01: func_015_4500(); return;
        case 0x02: func_015_4553(); return;
    }
}

void func_015_44EC(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void func_015_4500(void) {
    label_3B44();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_015_4530(); return; };
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    IncrementEntityState();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sla(gb_read(gb.regs.hl)));
    func_015_451D(); return;
}

void func_015_451D(void) {
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 1;
    AddTranscientVfx(); return;
}

void jr_015_4530(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto jr_015_4530_jr_4541;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_015_4530_jr_4541:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = 6;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_015_4530_jr_454E;
    gb.regs.e = 5;
  jr_015_4530_jr_454E:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
    return;
}

void func_015_4553(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    AddEntityZSpeedToPos_15();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_015_4553_jr_4588;
    gb_write(gb.regs.hl, gb.regs.b);
    func_015_451D();
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.a = alu_add8(gb.regs.a, 0x50);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x52);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    return;
  func_015_4553_jr_4588:;
    gb.regs.e = 1;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_015_4553_jr_4595;
    gb.regs.e = 3;
  func_015_4553_jr_4595:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_015_4553_jr_459F;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_015_4553_jr_459F:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void Data_015_45A3(void) {
    /* data: db $00, $00, $46, $07, $00, $08, $7E, $07, $F0, $00, $46, $07, $F0, $08, $7E, $07 */;
    /* data: db $E0, $00, $46, $07, $E0, $08, $7E, $07, $D0, $00, $46, $07, $D0, $08, $7E, $07 */;
    /* data: db $C0, $00, $46, $07, $C0, $08, $7E, $07 */;
}

void FinalNightmareStairsHandler(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x45A3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 0x0A;
    func_015_7964_trampoline();
    ReturnIfNonInteractive_15();
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_45F6(); return;
        case 0x01: func_015_45FE(); return;
        case 0x02: func_015_4627(); return;
        case 0x03: func_015_463D(); return;
        case 0x04: func_015_4660(); return;
    }
}

void func_015_45F6(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState(); return;
}

void func_015_45FE(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto func_015_45FE_jr_460B;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    /* jp_open_dialog Dialog0D7 */;
  func_015_45FE_jr_460B:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x50;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.a = 0x2F;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0;
    SetEntitySpriteVariant();
    IncrementEntityState(); return;
}

void func_015_4627(void) {
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_015_4627_jr_463A;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x30);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) return;
  func_015_4627_jr_463A:;
    IncrementEntityState(); return;
}

void func_015_463D(void) {
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x50);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_015_463D_ret_465F;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x30);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_015_463D_ret_465F;
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
  func_015_463D_ret_465F:;
    return;
}

void func_015_4660(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_015_4660_jr_4682;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_015_4660_jr_4682;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_015_4660_jr_4682:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_015_4660_jr_469C;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x12);
    if (!GET_FLAG_C()) goto func_015_4660_jr_469C;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDC3D, gb.regs.a);
    return;
  func_015_4660_jr_469C:;
    gb.regs.a = 2;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    gb_write(0xC120, gb.regs.a);
    gb_push16(gb.regs.bc);
    UpdateLinkWalkingAnimation_trampoline();
    gb.regs.bc = gb_pop16();
    ResetSpinAttack();
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC16A, gb.regs.a);
    return;
}

void MoblinKingEntityHandler(void) {
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { ClearEntityStatus_15(); return; };
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MoblinKingEntityHandler_jr_46D0;
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) goto MoblinKingEntityHandler_jr_46D0;
    gb.regs.a = alu_add8(gb.regs.a, 6);
    gb_write(0xFFF1, gb.regs.a);
  MoblinKingEntityHandler_jr_46D0:;
    func_015_4AC9();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto MoblinKingEntityHandler_jr_46E1;
    gb.regs.a = 0x0C;
    func_015_48B6();
    label_015_7C37(); return;
  MoblinKingEntityHandler_jr_46E1:;
    label_394D();
    ReturnIfNonInteractive_15();
    ApplyRecoilIfNeeded_15();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    AddEntityZSpeedToPos_15();
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
    if (GET_FLAG_Z()) goto MoblinKingEntityHandler_jr_471A;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  MoblinKingEntityHandler_jr_471A:;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_015_4734(); return;
        case 0x01: func_015_4750(); return;
        case 0x02: func_015_4780(); return;
        case 0x03: func_015_483F(); return;
        case 0x04: func_015_4873(); return;
        case 0x05: func_015_48CF(); return;
        case 0x06: func_015_494C(); return;
        case 0x07: func_015_4977(); return;
        case 0x08: func_015_499C(); return;
        case 0x09: func_015_49C2(); return;
    }
}

void func_015_4734(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD4A8, gb.regs.a);
    SetEntitySpriteVariant();
    IncrementEntityState();
    func_015_4743(); return;
}

void func_015_4743(void) {
    GetEntityXDistanceToLink_15();
    gb.regs.a = gb.regs.e;
    gb_write(0xD4A7, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  func_015_4743_jr_474E:;
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void func_015_4750(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    /* call_open_dialog Dialog191 */;
    gb.regs.hl = 0xC19F;
  func_015_4750_jr_475C:;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    IncrementEntityState();
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_IS_MINI_BOSS);
    gb.regs.a = 1;
    gb_write(0xD4A8, gb.regs.a);
    gb.regs.a = 1;
    SetEntitySpriteVariant(); return;
}

void Data_015_4776(void) {
    /* data: db $08, $F8 */;
}

void Data_015_4778(void) {
    /* data: db $FC, $FC */;
}

void Data_015_477A(void) {
    /* data: db $20, $E0 */;
}

void Data_015_477C(void) {
    /* data: db $00, $00 */;
}

void Data_015_477E(void) {
    /* data: db $D0, $30 */;
}

void func_015_4780(void) {
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) { jr_015_47E3(); return; };
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto func_015_4780_jr_47D1;
    gb.regs.a = 0x0C;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto func_015_4780_jr_47D1;
    gb.regs.a = 0x0A;
    gb_write(0xFFF4, gb.regs.a);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x4776;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4778;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x477A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x477C;
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
  func_015_4780_jr_47D1:;
    GetEntityPrivateCountdown1();
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_C()) goto func_015_4780_jr_47DC;
    gb.regs.e = 2;
  func_015_4780_jr_47DC:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant();
    ClearEntitySpeed(); return;
}

void jr_015_47E3(void) {
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto jr_015_47E3_jr_47F3;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    ClearEntitySpeed();
    IncrementEntityState(); return;
  jr_015_47E3_jr_47F3:;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_015_47E3_jr_4816;
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    GetEntityXDistanceToLink_15();
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x477E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x0C;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
  jr_015_47E3_jr_4816:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb_write(0xD4A8, gb.regs.a);
    func_015_4743();
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_015_47E3_ret_483C;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x18);
  jr_015_47E3_ret_483C:;
    return;
}

void Data_015_483D(void) {
    /* data: db $28, $D8 */;
}

void func_015_483F(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_483F_jr_485C;
    gb_write(gb.regs.hl, 0x22);
    ClearEntitySpeed();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x483D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
  func_015_483F_jr_485C:;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_015_483F_jr_4864;
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
  func_015_483F_jr_4864:;
    ClearEntitySpeed();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    SetEntitySpriteVariant(); return;
}

void func_015_4873(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_4873_jr_487E;
    IncrementEntityState();
    IncrementEntityState(); return;
  func_015_4873_jr_487E:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto func_015_4873_jr_48AE;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC158, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x28);
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
  func_015_4873_jr_48AE:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    func_015_48B6(); return;
}

void func_015_48B6(void) {
    SetEntitySpriteVariant();
    gb.regs.a = 0xFF;
    gb_write(0xD4A8, gb.regs.a);
    return;
}

void Data_015_48BF(void) {
    /* data: db $00, $FE, $FD, $FE, $00, $02, $03, $02 */;
}

void Data_015_48C7(void) {
    /* data: db $00, $04, $08, $0C, $10, $0C, $08, $04 */;
}

void func_015_48CF(void) {
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_48CF_jr_48F0;
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
    IncrementEntityState();
    gb.regs.a = 0;
    gb_write(0xD4A8, gb.regs.a);
    SetEntitySpriteVariant(); return;
  func_015_48CF_jr_48F0:;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_015_48CF_jr_48F8;
    ClearEntitySpeed();
  func_015_48CF_jr_48F8:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    func_015_491C();
    gb.regs.a = 2;
    func_015_7964_trampoline(); return;
}

void func_015_491C(void) {
    func_015_4928();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    func_015_4928(); return;
}

void func_015_4928(void) {
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x48BF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.hl = 0x48C7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.b);
    gb.regs.a = alu_add8(gb.regs.a, 0xF6);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
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

void func_015_494C(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xFE);
    if (!GET_FLAG_Z()) goto func_015_494C_jr_4960;
    ClearEntitySpeed();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState(); return;
  func_015_494C_jr_4960:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_015_494C_jr_496D;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_015_494C_jr_496D:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = 0;
    gb_write(0xD4A8, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void func_015_4977(void) {
    ClearEntitySpeed();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_015_4990(); return; };
}

void label_015_497F(void) {
    GetEntitySlowTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    return;
}

void jr_015_4990(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb_write(0xD4A7, gb.regs.a);
    return;
}

void func_015_499C(void) {
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = 0x28;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xDC6F, gb.regs.a);
    gb.regs.a = gb_read(0xDC3C);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFF2, gb.regs.a);
    return;
}

void func_015_49C2(void) {
    ClearEntitySpeed();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_49C2_jr_49CD;
    label_015_497F(); return;
  func_015_49C2_jr_49CD:;
    alu_cp8(gb.regs.a, 0x40);
    gb.regs.a = 0;
    if (!GET_FLAG_C()) goto func_015_49C2_jr_49DC;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
  func_015_49C2_jr_49DC:;
    SetEntitySpriteVariant();
    gb_write(0xD4A8, gb.regs.a);
    func_015_4743(); return;
}

void Data_015_49E5(void) {
    /* data: db $F8, $FC, $54, $22, $F8, $04, $52, $22, $F8, $0C, $50, $22, $F7, $FC, $54, $22 */;
    /* data: db $F7, $04, $52, $22, $F7, $0C, $50, $22, $F8, $FC, $50, $02, $F8, $04, $52, $02 */;
    /* data: db $F8, $0C, $54, $02, $F7, $FC, $50, $02, $F7, $04, $52, $02, $F7, $0C, $54, $02 */;
}

void Data_015_4A15(void) {
    /* data: db $00, $FC, $56, $02, $00, $04, $58, $02, $00, $0C, $5A, $02, $00, $FC, $5C, $02 */;
    /* data: db $00, $04, $58, $02, $00, $0C, $5E, $02, $00, $FC, $5C, $02, $00, $04, $58, $02 */;
    /* data: db $00, $0C, $5A, $02, $00, $FC, $56, $02, $00, $04, $58, $02, $00, $0C, $5E, $02 */;
    /* data: db $00, $FC, $70, $02, $00, $04, $72, $02, $00, $0C, $74, $02, $01, $FC, $70, $02 */;
    /* data: db $00, $04, $76, $02, $00, $0C, $78, $02, $00, $FC, $5A, $22, $00, $04, $58, $22 */;
    /* data: db $00, $0C, $56, $22, $00, $FC, $5E, $22, $00, $04, $58, $22, $00, $0C, $5C, $22 */;
    /* data: db $00, $FC, $5A, $22, $00, $04, $58, $22, $00, $0C, $5C, $22, $00, $FC, $5E, $22 */;
    /* data: db $00, $04, $58, $22, $00, $0C, $56, $22, $00, $FC, $74, $22, $00, $04, $72, $22 */;
    /* data: db $00, $0C, $70, $22, $00, $FC, $78, $22, $00, $04, $76, $22, $01, $0C, $70, $22 */;
    /* data: db $00, $FC, $7A, $02, $00, $04, $7C, $02, $00, $0C, $7E, $02, $00, $FC, $7E, $22 */;
    /* data: db $00, $04, $7C, $22, $00, $0C, $7A, $22 */;
}

void Data_015_4ABD(void) {
    /* data: db $0C, $FF, $26, $02, $0C, $04, $26, $02, $0C, $09, $26, $02 */;
}

void func_015_4AC9(void) {
    gb.regs.a = gb_read(0xD4A7);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xD4A8);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto func_015_4AC9_jr_4AEB;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x49E5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
  func_015_4AC9_jr_4AEB:;
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
    gb.regs.hl = 0x4A15;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x4ABD;
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
  func_015_4AC9_jr_4B14:;
    CopyEntityPositionToActivePosition(); return;
}

void Data_015_4B17(void) {
    /* data: db $E8, $FE, $74, $00, $E8, $06, $74, $20, $F4, $01, $76, $00, $F4, $09, $76, $20 */;
    /* data: db $00, $00, $76, $00, $00, $08, $76, $20, $E8, $00, $74, $00, $E8, $08, $74, $20 */;
    /* data: db $F4, $00, $76, $00, $F4, $08, $76, $20, $00, $00, $76, $00, $00, $08, $76, $20 */;
    /* data: db $E8, $02, $74, $00, $E8, $0A, $74, $20, $F4, $FF, $76, $00, $F4, $07, $76, $20 */;
    /* data: db $00, $00, $76, $00, $00, $08, $76, $20, $E8, $00, $74, $00, $E8, $08, $74, $20 */;
    /* data: db $F4, $00, $76, $00, $F4, $08, $76, $20, $00, $00, $76, $00, $00, $08, $76, $20 */;
}

void Data_015_4B77(void) {
    /* data: db $F4, $FF, $74, $00, $F4, $07, $74, $20, $00, $00, $76, $00, $00, $08, $76, $20 */;
    /* data: db $F4, $00, $74, $00, $F4, $08, $74, $20, $00, $00, $76, $00, $00, $08, $76, $20 */;
    /* data: db $F4, $01, $74, $00, $F4, $09, $74, $20, $00, $00, $76, $00, $00, $08, $76, $20 */;
    /* data: db $F4, $00, $74, $00, $F4, $08, $74, $20, $00, $00, $76, $00, $00, $08, $76, $20 */;
}

void Data_015_4BB7(void) {
    /* data: db $00, $FF, $74, $00, $00, $07, $74, $20, $00, $00, $74, $00, $00, $08, $74, $20 */;
    /* data: db $00, $01, $74, $00, $00, $09, $74, $20, $00, $00, $74, $00, $00, $08, $74, $20 */;
}

void Data_015_4BD7(void) {
    /* data: db $FA, $FC */;
}

void Data_015_4BD9(void) {
    /* data: db $00, $04, $06, $04, $00, $FC, $FA, $FC */;
}

void PokeyEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_015_4CD9(); return; };
    func_015_4C85();
    ReturnIfNonInteractive_15();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto PokeyEntityHandler_jr_4C49;
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_Z()) goto PokeyEntityHandler_jr_4C49;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0xE3;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto PokeyEntityHandler_jr_4C49;
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
    gb.regs.a = 0x20;
    GetVectorTowardsLink_trampoline();
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
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.bc = gb_pop16();
  PokeyEntityHandler_jr_4C49:;
    DecrementEntityIgnoreHitsCountdown();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto PokeyEntityHandler_jr_4C7F;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4BD9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4BD7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  PokeyEntityHandler_jr_4C7F:;
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline(); return;
}

void func_015_4C85(void) {
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_015_4C85_jr_4CA9;
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4B17;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 6;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline(); return;
  func_015_4C85_jr_4CA9:;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto func_015_4C85_jr_4CC4;
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4B77;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 2;
    func_015_7964_trampoline(); return;
  func_015_4C85_jr_4CC4:;
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4BB7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 2;
    RenderActiveEntitySpritesRect(); return;
}

void Unknown044SpriteVariants(void) {
  Unknown044SpriteVariants_variant0:;
    /* data: db $76, $00 */;
    /* data: db $76, $20 */;
    label_015_4CD9(); return;
}

void label_015_4CD9(void) {
    gb.regs.de = 0x4CA6;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    ApplyRecoilIfNeeded_15();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto label_015_4CD9_jr_4CED;
    DefaultEnemyDamageCollisionHandler_trampoline();
  label_015_4CD9_jr_4CED:;
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto label_015_4CD9_jr_4D03;
    gb.regs.hl = 0xC240;
    func_015_4D0F();
    if (GET_FLAG_C()) return;
  label_015_4CD9_jr_4D03:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { jr_015_4D39(); return; };
    gb.regs.hl = 0xC250;
    func_015_4D0F(); return;
}

void func_015_4D0F(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) { jr_015_4D39(); return; };
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.a = 0x2F;
    gb_write(0xFFF2, gb.regs.a);
    ClearEntityStatus_15();
    alu_scf();
    return;
}

void jr_015_4D39(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void FlameShooterSpriteVariants(void) {
  FlameShooterSpriteVariants_variant0:;
    /* data: db $70, $02 */;
    /* data: db $70, $22 */;
  FlameShooterSpriteVariants_variant1:;
    /* data: db $72, $03 */;
    /* data: db $72, $23 */;
    FlameShooterEntityHandler(); return;
}

void FlameShooterEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_015_4DB5(); return; };
    gb.regs.de = 0x4D0E;
    RenderActiveEntitySpritesPair();
    GetEntityPrivateCountdown1();
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto FlameShooterEntityHandler_jr_4D5B;
    gb.regs.e = alu_inc8(gb.regs.e);
  FlameShooterEntityHandler_jr_4D5B:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant();
    ReturnIfNonInteractive_15();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto FlameShooterEntityHandler_ret_4D9C;
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 8);
    gb.regs.a = 0xE2;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb.regs.a = 0x12;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x30);
  FlameShooterEntityHandler_ret_4D9C:;
    return;
}

void Unknown045SpriteVariants(void) {
  Unknown045SpriteVariants_variant0:;
    /* data: db $78, $02 */;
    /* data: db $78, $22 */;
  Unknown045SpriteVariants_variant1:;
    /* data: db $76, $02 */;
    /* data: db $76, $22 */;
  Unknown045SpriteVariants_variant2:;
    /* data: db $74, $02 */;
    /* data: db $74, $22 */;
    Unknown046SpriteVariants(); return;
}

void Unknown046SpriteVariants(void) {
  Unknown046SpriteVariants_variant0:;
    /* data: db $7A, $02 */;
    /* data: db $7C, $02 */;
  Unknown046SpriteVariants_variant1:;
    /* data: db $7C, $22 */;
    /* data: db $7A, $22 */;
    Data_015_4DB1(); return;
}

void Data_015_4DB1(void) {
    /* data: db $FC, $04 */;
}

void Data_015_4DB3(void) {
    /* data: db $F4, $0C */;
}

void label_015_4DB5(void) {
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_015_4E62(); return; };
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.de = 0x4D73;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    gb.regs.a = gb_read(0xDC6F);
    gb_push16(gb.regs.af);
    CheckLinkCollisionWithEnemy_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC6F);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) goto label_015_4DB5_jr_4DF2;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) goto label_015_4DB5_jr_4DF2;
    gb.regs.a = 0x1F;
    gb_write(0xDC6F, gb.regs.a);
    gb.regs.a = 0x30;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFF9B, gb.regs.a);
  label_015_4DB5_jr_4DF2:;
    UpdateEntityYPosWithSpeed_15();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_015_4E49(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  label_015_4DB5_loop_4DFB:;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = 0xE2;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto label_015_4DB5_jr_4E46;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4DB1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4DB3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto label_015_4DB5_loop_4DFB;
  label_015_4DB5_jr_4E46:;
    ClearEntityStatus_15(); return;
}

void jr_015_4E49(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatus_15(); return; };
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto jr_015_4E49_jr_4E5B;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ret_015_4E61(); return; };
  jr_015_4E49_jr_4E5B:;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { ret_015_4E61(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    ret_015_4E61(); return;
}

void ret_015_4E61(void) {
    return;
}

void label_015_4E62(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.de = 0x4D7F;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    UpdateEntityPosWithSpeed_15();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatus_15(); return; };
    return;
}

void StalfosEvasive2SpriteVariants(void) {
  StalfosEvasive2SpriteVariants_variant0:;
    /* data: db $4A, $01 */;
    /* data: db $4C, $01 */;
  StalfosEvasive2SpriteVariants_variant1:;
    /* data: db $4C, $21 */;
    /* data: db $4A, $21 */;
  StalfosEvasive2SpriteVariants_variant2:;
    /* data: db $4E, $01 */;
    /* data: db $4E, $21 */;
    Data_015_4E89(); return;
}

void Data_015_4E89(void) {
    /* data: db $00, $06, $FA, $FA, $06 */;
}

void StalfosEvasive1SpriteVariants(void) {
  StalfosEvasive1SpriteVariants_variant0:;
    /* data: db $48, $01 */;
    /* data: db $48, $61 */;
  StalfosEvasive1SpriteVariants_variant1:;
    /* data: db $48, $41 */;
    /* data: db $48, $21 */;
    StalfosEvasiveEntityHandler(); return;
}

void StalfosEvasiveEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_015_4EEE(); return; };
    gb.regs.de = 0x4E5E;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_015_4ECB(); return; };
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_015_4EDF(); return; };
}

void label_015_4ECB(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 5;
    AddTranscientVfx();
    ClearEntityStatus_15(); return;
}

void jr_015_4EDF(void) {
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xA8);
    if (!GET_FLAG_C()) { ClearEntityStatus_15(); return; };
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x84);
    if (!GET_FLAG_C()) { ClearEntityStatus_15(); return; };
    return;
}

void jr_015_4EEE(void) {
    gb.regs.de = 0x4E4D;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    ApplyRecoilIfNeeded_15();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto jr_015_4EEE_jr_4F02;
    DefaultEnemyDamageCollisionHandler_trampoline();
  jr_015_4EEE_jr_4F02:;
    GetEntityPrivateCountdown1();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_015_4EEE_jr_4F50;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) return;
    gb.regs.a = 0x1E;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb.regs.a = 0x0A;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_set(1, gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
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
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
  jr_015_4EEE_jr_4F50:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_015_4F5A(); return;
        case 0x01: func_015_501A(); return;
    }
}

void func_015_4F5A(void) {
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (GET_FLAG_Z()) goto func_015_4F5A_jr_4FAE;
    GetEntityXDistanceToLink_15();
    gb.regs.a = alu_add8(gb.regs.a, 0x24);
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_C()) goto func_015_4F5A_jr_4FAE;
    GetEntityRealYDistanceToLink_15();
    gb.regs.a = alu_add8(gb.regs.a, 0x24);
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_C()) goto func_015_4F5A_jr_4FAE;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x15);
    gb.regs.a = 0x24;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0x12;
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
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    return;
  func_015_4F5A_jr_4FAE:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_015_4F5A_jr_4FC6;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { jr_015_4FCE(); return; };
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 0xF0);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_015_4FCE(); return;
  func_015_4F5A_jr_4FC6:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 0xF0);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_015_4FCE(); return;
}

void jr_015_4FCE(void) {
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_015_4FCE_jr_4FDD;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x2F);
    if (!GET_FLAG_Z()) { jr_015_500A(); return; };
  jr_015_4FCE_jr_4FDD:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4E89;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_015_500A(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4E89;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    jr_015_500A(); return;
}

void jr_015_500A(void) {
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void func_015_501A(void) {
    UpdateEntityPosWithSpeed_15();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.hl);
    gb_write(gb.regs.hl, 1);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.b);
    AddEntityZSpeedToPos_15();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_015_501A_ret_5057;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x10);
  func_015_501A_ret_5057:;
    return;
}

void FinalNightmareSpritesheetsPerForm(void) {
    /* data: db $EA, $EB */;
    /* data: db $EA, $EB */;
    /* data: db $EC, $ED */;
    /* data: db $EE, $EF */;
    /* data: db $F0, $F1 */;
    /* data: db $F2, $F3 */;
}

void FinalNightmareLoadsheetForForm(void) {
    gb.regs.a = gb_read(0xD499);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFE);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x503A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xC195, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC196, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFF91, gb.regs.a);
    gb_write(0xC10E, gb.regs.a);
    return;
}

void FinalNightmareEntityHandler(void) {
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto FinalNightmareEntityHandler_skipGraphicsLoad;
    gb.regs.a = gb_read(0xC116);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto FinalNightmareEntityHandler_skipGraphicsLoad;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC116, gb.regs.a);
    FinalNightmareLoadsheetForForm();
  FinalNightmareEntityHandler_skipGraphicsLoad:;
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { FinalNightmareStairsHandler(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { FinalNightmareExplosionEffectHandler(); return; };
    gb.regs.a = gb_read(0xD499);
    switch(gb.regs.a) {
        case 0x00: FinalNightmareFormIntroHandler(); return;
        case 0x01: FinalNightmareFormGiantGelHandler(); return;
        case 0x02: FinalNightmareFormAgahnimHandler(); return;
        case 0x03: FinalNightmareFormMoldormHandler(); return;
        case 0x04: FinalNightmareFormGanonLanmolaHandler(); return;
        case 0x05: FinalNightmareFormDethlHandler(); return;
    }
}

void FinalNightmareFormIntroHandler(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_50C2(); return;
        case 0x01: func_015_511D(); return;
        case 0x02: func_015_5138(); return;
        case 0x03: func_015_5153(); return;
        case 0x04: func_015_516E(); return;
        case 0x05: func_015_5191(); return;
        case 0x06: func_015_51B5(); return;
    }
}

void func_015_50C2(void) {
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x5D;
    gb_write(0xD368, gb.regs.a);
    gb.regs.hl = 0xDB29;
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog0F5 */;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = 0x80;
    gb.regs.hl = 0xD200;
  func_015_50C2_loop_50E7:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_015_50C2_loop_50E7;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = 0x80;
    gb.regs.hl = 0xD300;
  func_015_50C2_loop_50F7:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_015_50C2_loop_50F7;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD49A, gb.regs.a);
    gb_write(0xD49B, gb.regs.a);
    gb_write(0xD49C, gb.regs.a);
    gb_write(0xD49D, gb.regs.a);
    gb_write(0xD49E, gb.regs.a);
  func_015_50C2_jr_510B:;
    gb_write(0xD49F, gb.regs.a);
    gb_write(0xD4A0, gb.regs.a);
    gb_write(0xD4A1, gb.regs.a);
    gb_write(0xD4A2, gb.regs.a);
    gb_write(0xD4A3, gb.regs.a);
    IncrementEntityState(); return;
}

void func_015_511D(void) {
    func_015_5631();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_015_512D(); return; };
    IncrementEntityState();
    func_015_5128(); return;
}

void func_015_5128(void) {
    gb.regs.a = 0x35;
    gb_write(0xFFF2, gb.regs.a);
    return;
}

void jr_015_512D(void) {
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) goto jr_015_512D_ret_5137;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x23;
    gb_write(0xD368, gb.regs.a);
  jr_015_512D_ret_5137:;
    return;
}

void func_015_5138(void) {
    func_015_5631();
    ReturnIfNonInteractive_15();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xE8);
    if (!GET_FLAG_Z()) goto func_015_5138_jr_5150;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
    IncrementEntityState();
  func_015_5138_jr_5150:;
    UpdateEntityYPosWithSpeed_15(); return;
}

void func_015_5153(void) {
    func_015_5631();
    ReturnIfNonInteractive_15();
    UpdateEntityYPosWithSpeed_15();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState(); return;
}

void func_015_516E(void) {
    func_015_5631();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto func_015_516E_ret_5184;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_015_516E_ret_5184;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_015_5185(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_015_516E_ret_5184:;
    return;
}

void jr_015_5185(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState(); return;
}

void Data_015_518D(void) {
    /* data: db $06, $05, $07, $05 */;
}

void func_015_5191(void) {
    func_015_569F();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x518D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x2F);
    IncrementEntityState(); return;
}

void Data_015_51AF(void) {
    /* data: db $08, $00, $01, $02, $03, $04 */;
}

void func_015_51B5(void) {
    func_015_569F();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_51B5_jr_51D0;
    gb.regs.hl = 0xD499;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    return;
  func_015_51B5_jr_51D0:;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x51AF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void FinalNightmareFormGiantGelHandler(void) {
    func_015_572B();
    ReturnIfNonInteractive_15();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_51FF(); return;
        case 0x01: func_015_520C(); return;
        case 0x02: func_015_522C(); return;
        case 0x03: func_015_528A(); return;
        case 0x04: func_015_52AA(); return;
        case 0x05: func_015_52B6(); return;
        case 0x06: func_015_5370(); return;
        case 0x07: func_015_53E1(); return;
        case 0x08: func_015_5317(); return;
        case 0x09: func_015_5330(); return;
    }
}

void func_015_51FF(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    IncrementEntityState(); return;
}

void func_015_520C(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x28);
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    IncrementEntityState(); return;
}

void func_015_522C(void) {
    func_015_5435();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    AddEntityZSpeedToPos_15();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { jr_015_527A(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_015_522C_jr_526E;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_015_522C_jr_526E;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x1F);
    IncrementEntityState();
    gb_write(gb.regs.hl, 8);
    jr_015_527A(); return;
  func_015_522C_jr_526E:;
    gb.regs.a = 0x20;
    gb_write(0xFFF2, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
    jr_015_527A(); return;
}

void jr_015_527A(void) {
    gb.regs.e = 3;
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_C()) goto jr_015_527A_jr_5286;
    gb.regs.e = alu_inc8(gb.regs.e);
  jr_015_527A_jr_5286:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void func_015_528A(void) {
    gb.regs.a = 5;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_528A_jr_52A4;
    gb.regs.a = 0x0C;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_015_528A_jr_52A4:;
    func_015_5435();
    DefaultEnemyDamageCollisionHandler_trampoline(); return;
}

void func_015_52AA(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    label_015_5335(); return;
}

void func_015_52B1(void) {
    gb.regs.a = 0x23;
    gb_write(0xFFF3, gb.regs.a);
    return;
}

void func_015_52B6(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_015_52FF(); return; };
}

void func_015_52BB(void) {
    gb.regs.a = gb_read(0xD499);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD499, gb.regs.a);
    FinalNightmareLoadsheetForForm();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD4A1, gb.regs.a);
    gb_write(0xD4A2, gb.regs.a);
    gb_write(0xD4A3, gb.regs.a);
    gb_write(0xD4A0, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC0);
    gb.regs.a = 2;
    gb_write(0xC197, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC10D, gb.regs.a);
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 1;
    gb_write(0xD49A, gb.regs.a);
    return;
}

void jr_015_52FF(void) {
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) return;
    alu_cp8(gb.regs.a, 0x17);
    if (!GET_FLAG_Z()) goto jr_015_52FF_jr_530B;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x35);
  jr_015_52FF_jr_530B:;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    SetEntitySpriteVariant(); return;
}

void Data_015_5313(void) {
    /* data: db $FF, $00, $01, $02 */;
}

void func_015_5317(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_5317_jr_5321;
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState(); return;
  func_015_5317_jr_5321:;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5313;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void func_015_5330(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_015_5355(); return; };
}

void label_015_5335(void) {
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5911;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5919;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    ret_015_5355(); return;
}

void ret_015_5355(void) {
    return;
}

void Data_015_5356(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void Data_015_535E(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void Data_015_5366(void) {
    /* data: db $00, $18 */;
}

void Data_015_5368(void) {
    /* data: db $20, $18, $00, $E8, $E0, $E8, $00, $18 */;
}

void func_015_5370(void) {
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    gb.regs.a = 0x21;
    gb_write(0xFFF3, gb.regs.a);
    func_015_5383(); return;
}

void func_015_5383(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_015_5384(); return;
}

void jr_015_5384(void) {
    loop_start: ;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = 0xE6;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0x5356;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0x535E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFDA);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_015_5384_jr_53AF:;
    gb.regs.hl = 0x5368;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5366;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x2F);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { goto loop_start; };
    return;
}

void Data_015_53DD(void) {
    /* data: db $05, $03, $04, $03 */;
}

void func_015_53E1(void) {
    AddEntityZSpeedToPos_15();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_015_53E1_jr_53F9;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  func_015_53E1_jr_53F9:;
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto func_015_53E1_jr_540E;
    alu_rra();
    /* nop */;
    /* nop */;
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x53DD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
  func_015_53E1_jr_540E:;
    gb.regs.a = gb_read(0xD4A0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD4A0, gb.regs.a);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto func_015_53E1_jr_541F;
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    return;
  func_015_53E1_jr_541F:;
    gb.regs.a = 6;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState();
    gb_write(gb.regs.hl, 5);
    func_015_542E(); return;
}

void func_015_542E(void) {
    gb.regs.a = 0x37;
    gb_write(0xFFF4, gb.regs.a);
    func_015_5383(); return;
}

void func_015_5435(void) {
    gb.regs.a = gb_read(0xDBF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_015_5465(); return; };
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto func_015_5435_noPowderB;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { jr_015_5465(); return; };
    gb.regs.a = 3;
    gb_write(0xD4A0, gb.regs.a);
    label_015_54A2(); return;
  func_015_5435_noPowderB:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) { jr_015_5465(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_015_5465(); return; };
    gb.regs.a = 3;
    gb_write(0xD4A0, gb.regs.a);
    label_015_54A2(); return;
}

void jr_015_5465(void) {
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
    jr_015_5468(); return;
}

void jr_015_5468(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { jr_015_54B7(); return; };
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_015_54B7(); return; };
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_015_54B7(); return; };
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { jr_015_54B7(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { jr_015_54B7(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    label_015_54A2(); return;
}

void label_015_54A2(void) {
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x14);
    gb.regs.a = 7;
    gb_write(0xFFF3, gb.regs.a);
    gb.regs.a = 0x37;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 7);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
}

void jr_015_54B7(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_015_5468(); return; };
    return;
}

void Unknown047SpriteVariants(void) {
  Unknown047SpriteVariants_variant0:;
    /* data: db $4E, $00 */;
    /* data: db $4E, $20 */;
  Unknown047SpriteVariants_variant1:;
    /* data: db $4C, $00 */;
    /* data: db $4C, $20 */;
  Unknown047SpriteVariants_variant2:;
    /* data: db $4A, $00 */;
    /* data: db $4A, $20 */;
    Data_015_54CA(); return;
}

void Data_015_54CA(void) {
    /* data: db $02, $02, $02, $01, $01, $00 */;
}

void Data_015_54D0(void) {
    /* data: db $0F, $07, $03, $01, $00, $00 */;
}

void FinalNightmareExplosionEffectHandler(void) {
    gb.regs.de = 0x5464;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatus_15(); return; };
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x54CA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.de = gb_pop16();
    gb.regs.hl = 0x54D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    UpdateEntityPosWithSpeed_15(); return;
}

void Data_015_5501(void) {
    /* data: db $00, $00, $4C, $00, $00, $08, $4C, $20, $00, $08, $FF, $20, $00, $10, $FF, $20 */;
    /* data: db $00, $F8, $FF, $40, $00, $00, $FF, $40, $00, $08, $FF, $60, $00, $10, $FF, $60 */;
    /* data: db $00, $00, $4E, $00, $00, $08, $4E, $20, $00, $08, $FF, $20, $00, $10, $FF, $20 */;
    /* data: db $00, $F8, $FF, $40, $00, $00, $FF, $40, $00, $08, $FF, $60, $00, $10, $FF, $60 */;
    /* data: db $F8, $F8, $7A, $00, $F8, $00, $7C, $00, $F8, $08, $7C, $20, $F8, $10, $7A, $20 */;
    /* data: db $08, $F8, $7A, $40, $08, $00, $7C, $40, $08, $08, $7C, $60, $08, $10, $7A, $60 */;
    /* data: db $F8, $F8, $76, $00, $F8, $00, $78, $00, $F8, $08, $78, $20, $F8, $10, $76, $20 */;
    /* data: db $08, $F8, $76, $40, $08, $00, $78, $40, $08, $08, $78, $60, $08, $10, $76, $60 */;
    /* data: db $F8, $F8, $72, $00, $F8, $00, $74, $00, $F8, $08, $74, $20, $F8, $10, $72, $20 */;
    /* data: db $08, $F8, $72, $40, $08, $00, $74, $40, $08, $08, $74, $60, $08, $10, $72, $60 */;
    /* data: db $F8, $F8, $66, $00, $F8, $00, $68, $00, $F8, $08, $68, $20, $F8, $10, $66, $20 */;
    /* data: db $08, $F8, $66, $40, $08, $00, $6A, $00, $08, $08, $6A, $20, $08, $10, $66, $60 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00, $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $64, $00, $08, $08, $64, $20, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $6C, $00, $F8, $00, $6E, $00, $F8, $08, $6E, $20, $F8, $10, $6C, $20 */;
    /* data: db $08, $F8, $6C, $40, $08, $00, $70, $00, $08, $08, $70, $20, $08, $10, $6C, $60 */;
    /* data: db $00, $00, $4A, $00, $00, $08, $4A, $20, $00, $08, $FF, $20, $00, $10, $FF, $20 */;
    /* data: db $00, $F8, $FF, $40, $00, $00, $FF, $40, $00, $08, $FF, $60, $00, $10, $FF, $60 */;
}

void Unknown048SpriteVariants(void) {
  Unknown048SpriteVariants_variant0:;
    /* data: db $4C, $00 */;
    /* data: db $4C, $20 */;
    Unknown052SpriteVariants(); return;
}

void Unknown052SpriteVariants(void) {
  Unknown052SpriteVariants_variant0:;
    /* data: db $48, $00 */;
    /* data: db $48, $20 */;
    Data_015_5629(); return;
}

void Data_015_5629(void) {
    /* data: db $28, $23, $1E, $19, $14, $0F, $0A, $05 */;
}

void func_015_5631(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_015_5639(); return;
}

void jr_015_5639(void) {
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5629;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0xD300;
  jr_015_5639_jr_5652:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x55CE;
    gb.regs.a = gb_read(0xFFE8);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto jr_015_5639_render;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { jr_015_5676(); return; };
    gb.regs.de = 0x55CA;
  jr_015_5639_render:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    RenderActiveEntitySpritesPair();
    gb.regs.a = 2;
    func_015_7964_trampoline();
    jr_015_5676(); return;
}

void jr_015_5676(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_015_5639(); return; };
    CopyEntityPositionToActivePosition();
    func_015_569F();
    ReturnIfNonInteractive_15();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xD300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xD200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void func_015_569F(void) {
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
    gb.regs.hl = 0x5501;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 8;
    func_015_7964_trampoline(); return;
}

void Data_015_56BB(void) {
    /* data: db $00, $00, $4A, $00, $00, $08, $4A, $20, $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $00, $00, $4C, $00, $00, $08, $4C, $20, $00, $00, $FF, $00, $00, $00, $FF, $00 */;
    /* data: db $00, $00, $4E, $00, $00, $08, $4E, $20, $00, $00, $FF, $00, $00, $00, $FF, $20 */;
    /* data: db $F0, $00, $5C, $00, $F0, $08, $5C, $20, $00, $00, $5E, $00, $00, $08, $5E, $20 */;
    /* data: db $F0, $00, $44, $00, $F0, $08, $44, $20, $00, $00, $44, $40, $00, $08, $44, $60 */;
    /* data: db $00, $FC, $40, $00, $00, $04, $42, $00, $00, $0C, $40, $20, $00, $00, $FF, $00 */;
    /* data: db $00, $00, $48, $00, $00, $08, $48, $20, $00, $00, $FF, $00, $00, $00, $FF, $20 */;
}

void func_015_572B(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x56BB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline(); return;
}

void FinalNightmareFormAgahnimHandler(void) {
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_015_5DD5(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_015_5DED(); return; };
    gb.regs.a = gb.regs.c;
    gb_write(0xD481, gb.regs.a);
    gb.regs.a = gb_read(0xD49A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto FinalNightmareFormAgahnimHandler_jr_575E;
    func_015_5A67();
  FinalNightmareFormAgahnimHandler_jr_575E:;
    ReturnIfNonInteractive_15();
    ApplyRecoilIfNeeded_15();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_577B(); return;
        case 0x01: func_015_57CF(); return;
        case 0x02: func_015_580B(); return;
        case 0x03: func_015_5854(); return;
        case 0x04: func_015_58ED(); return;
        case 0x05: func_015_5926(); return;
        case 0x06: func_015_5963(); return;
        case 0x07: func_015_59B9(); return;
        case 0x08: func_015_5A05(); return;
        case 0x09: func_015_5A1F(); return;
    }
}

void func_015_577B(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    func_015_572B();
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x50;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xFF99;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_015_577B_jr_57B7;
    gb.regs.hl = 0xFF98;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_015_577B_jr_57B7;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
  func_015_577B_jr_57B7:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_15(); return;
}

void Data_015_57C0(void) {
    /* data: db $04, $03, $02, $01, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void func_015_57CF(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto func_015_57CF_jr_57E5;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x57C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    func_015_572B(); return;
  func_015_57CF_jr_57E5:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD49A, gb.regs.a);
    func_015_5819();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    func_015_52B1(); return;
}

void Data_015_5807(void) {
    /* data: db $0F, $0A, $05, $00 */;
}

void func_015_580B(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { func_015_5819(); return; };
    gb.regs.a = 0x22;
    gb_write(0xFFF3, gb.regs.a);
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState(); return;
}

void func_015_5819(void) {
    GetEntityDirectionToLink_15();
    gb.regs.a = gb.regs.e;
    gb_write(0xD49E, gb.regs.a);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5807;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    label_015_582B(); return;
}

void label_015_582B(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    SetEntitySpriteVariant(); return;
    /* nop */;
    gb.regs.bc = 0x0302;
    Data_015_583C(); return;
}

void Data_015_583C(void) {
    /* data: db $03, $03, $03, $03, $02, $02, $02, $02, $01, $01, $01, $01, $00, $00, $00, $00 */;
}

void Data_015_584C(void) {
    /* data: db $18, $E8, $00, $00 */;
}

void Data_015_5850(void) {
    /* data: db $00, $00, $F0, $00 */;
}

void func_015_5854(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_015_58C0(); return; };
    gb_write(0xD49D, gb.regs.a);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.a = 0xE6;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xD49E);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x584C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5850;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x42);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.d);
    gb.regs.a = 0x38;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = gb_read(0xD4A0);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto func_015_5854_jr_58B5;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xFFE7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_015_5854_jr_58B5;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x1C);
    gb.regs.a = 0x39;
    gb_write(0xFFF4, gb.regs.a);
  func_015_5854_jr_58B5:;
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
    IncrementEntityState(); return;
}

void jr_015_58C0(void) {
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x583C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD49D, gb.regs.a);
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) { label_015_582B(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (GET_FLAG_Z()) { func_015_5819(); return; };
    label_015_582B(); return;
}

void func_015_58ED(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_58ED_jr_5908;
    gb_write(gb.regs.hl, 0x27);
    gb.regs.a = 0x35;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD49A, gb.regs.a);
    IncrementEntityState(); return;
  func_015_58ED_jr_5908:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    label_015_582B(); return;
}

void Data_015_5911(void) {
    /* data: db $50, $28, $78, $18, $88, $38, $68, $50 */;
}

void Data_015_5919(void) {
    /* data: db $30, $30, $30, $50, $50, $70, $70, $74 */;
}

void Data_015_5921(void) {
    /* data: db $00, $01, $02, $03, $04 */;
}

void func_015_5926(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_5926_jr_594A;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5911;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD49B, gb.regs.a);
    gb.regs.hl = 0x5919;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD49C, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x1F);
    IncrementEntityState(); return;
  func_015_5926_jr_594A:;
    alu_rra();
  func_015_5926_jr_594B:;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5921;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    func_015_572B(); return;
}

void Data_015_595B(void) {
    /* data: db $18, $14, $10, $0C, $08, $05, $02, $01 */;
}

void func_015_5963(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    func_015_572B();
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xD49B);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = gb_read(0xD49C);
    gb_write(0xFF99, gb.regs.a);
    GetEntityTransitionCountdown();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
  func_015_5963_jr_5980:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x595B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xFF99;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_015_5963_jr_59AC;
    gb.regs.hl = 0xFF98;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_015_5963_jr_59AC;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
  func_015_5963_jr_59AC:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    UpdateEntityPosWithSpeed_15(); return;
}

void Data_015_59B5(void) {
    /* data: db $00, $0A, $0F, $05 */;
}

void func_015_59B9(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_59B9_jr_59D3;
    func_015_542E();
    gb.regs.a = 1;
    gb_write(0xD49A, gb.regs.a);
    gb.regs.a = 6;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState(); return;
  func_015_59B9_jr_59D3:;
    gb.regs.a = gb_read(0xD4A1);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) goto func_015_59B9_jr_59DE;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD4A1, gb.regs.a);
  func_015_59B9_jr_59DE:;
    gb.regs.a = gb_read(0xD4A1);
    gb.regs.hl = 0xD4A2;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    if (!GET_FLAG_C()) goto func_015_59B9_jr_59EC;
    gb.regs.hl = 0xD4A3;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_015_59B9_jr_59EC:;
    gb.regs.a = gb_read(0xD4A3);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x59B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    label_015_582B(); return;
}

void func_015_5A05(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_5A05_jr_5A10;
    func_015_5128();
    IncrementEntityState(); return;
  func_015_5A05_jr_5A10:;
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto func_015_5A05_jr_5A1C;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    SetEntitySpriteVariant();
  func_015_5A05_jr_5A1C:;
    func_015_572B(); return;
}

void func_015_5A1F(void) {
    func_015_572B();
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x50;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xFF99;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_015_5A1F_jr_5A5E;
    gb.regs.hl = 0xFF98;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_015_5A1F_jr_5A5E;
    func_015_52BB();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x31);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    func_015_5F9A();
  func_015_5A1F_jr_5A5E:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_15(); return;
}

void func_015_5A67(void) {
    func_015_5D8D();
    func_015_5B2C();
    func_015_5B0B();
    label_015_5D48(); return;
}

void Unknown049SpriteVariants(void) {
  Unknown049SpriteVariants_variant0:;
    /* data: db $6A, $00 */;
    /* data: db $6C, $00 */;
  Unknown049SpriteVariants_variant1:;
    /* data: db $6C, $20 */;
    /* data: db $6A, $20 */;
  Unknown049SpriteVariants_variant2:;
    /* data: db $6A, $00 */;
    /* data: db $FF, $FF */;
  Unknown049SpriteVariants_variant3:;
    /* data: db $6A, $20 */;
    /* data: db $FF, $FF */;
    Data_015_5A83(); return;
}

void Data_015_5A83(void) {
    /* data: db $00, $00, $6A, $00, $08, $08, $7A, $00, $08, $00, $7A, $20, $00, $08, $6A, $20 */;
}

void Data_015_5A93(void) {
    /* data: db $00, $00, $00, $00, $02, $00, $00, $00, $00, $02, $04, $04, $04, $04, $04, $05 */;
    /* data: db $05, $05, $05, $05 */;
}

void Data_015_5AA7(void) {
    /* data: db $F0, $F3, $F3, $F0, $F5, $F0, $F3, $F3, $F0, $F5, $F1, $F0, $F1, $F2, $F0, $0F */;
    /* data: db $10, $0F, $0E, $10 */;
}

void Data_015_5ABB(void) {
    /* data: db $ED, $ED, $F1, $F1, $FD, $ED, $ED, $F1, $F1, $FD, $F4, $F6, $F7, $F6, $F8, $F4 */;
    /* data: db $F6, $F7, $F6, $F8 */;
}

void Data_015_5ACF(void) {
    /* data: db $01, $01, $01, $01, $03, $01, $01, $01, $01, $03, $02, $02, $02, $02, $02, $03 */;
    /* data: db $03, $03, $03, $03 */;
}

void Data_015_5AE3(void) {
    /* data: db $10, $0D, $0D, $10, $13, $10, $0D, $0D, $10, $13, $F5, $F6, $F5, $F4, $F3, $13 */;
    /* data: db $12, $13, $14, $15 */;
}

void Data_015_5AF7(void) {
    /* data: db $ED, $ED, $F1, $F1, $FD, $ED, $ED, $F1, $F1, $FD, $EB, $EC, $ED, $EC, $F2, $EB */;
    /* data: db $EC, $ED, $EC, $F2 */;
}

void func_015_5B0B(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5AE3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x5AF7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x5ACF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    jr_015_5B4B(); return;
}

void func_015_5B2C(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5AA7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x5ABB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x5A93;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    jr_015_5B4B(); return;
}

void jr_015_5B4B(void) {
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto jr_015_5B4B_jr_5B5A;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x5A02;
    RenderActiveEntitySpritesPair();
    jr_015_5B6C(); return;
  jr_015_5B4B_jr_5B5A:;
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5A83;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 2;
    RenderActiveEntitySpritesRect();
    jr_015_5B6C(); return;
}

void jr_015_5B6C(void) {
    gb.regs.a = 2;
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition(); return;
}

void Data_015_5B74(void) {
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00, $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $05, $F8, $6E, $00, $08, $00, $64, $00, $08, $08, $64, $20, $05, $10, $6E, $20 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00, $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $05, $F9, $6E, $00, $08, $00, $64, $00, $08, $08, $64, $20, $05, $0F, $6E, $20 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00, $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $06, $F9, $6E, $00, $08, $00, $64, $00, $08, $08, $64, $20, $06, $0F, $6E, $20 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00, $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $06, $F8, $6E, $00, $08, $00, $64, $00, $08, $08, $64, $20, $06, $10, $6E, $20 */;
    /* data: db $FA, $F8, $60, $00, $FA, $00, $62, $00, $FA, $08, $62, $20, $FA, $10, $60, $20 */;
    /* data: db $08, $F8, $6E, $00, $08, $00, $64, $00, $08, $08, $64, $20, $08, $10, $6E, $20 */;
    /* data: db $FA, $F8, $60, $00, $FA, $00, $66, $00, $FA, $08, $66, $20, $FA, $10, $60, $20 */;
    /* data: db $05, $F8, $6E, $00, $08, $00, $68, $00, $08, $08, $68, $20, $05, $10, $6E, $20 */;
    /* data: db $FA, $F8, $60, $00, $FA, $00, $66, $00, $FA, $08, $66, $20, $FA, $10, $60, $20 */;
    /* data: db $05, $F9, $6E, $00, $08, $00, $68, $00, $08, $08, $68, $20, $05, $0F, $6E, $20 */;
    /* data: db $FA, $F8, $60, $00, $FA, $00, $66, $00, $FA, $08, $66, $20, $FA, $10, $60, $20 */;
    /* data: db $06, $F9, $6E, $00, $08, $00, $68, $00, $08, $08, $68, $20, $06, $0F, $6E, $20 */;
    /* data: db $FA, $F8, $60, $00, $FA, $00, $66, $00, $FA, $08, $66, $20, $FA, $10, $60, $20 */;
    /* data: db $06, $F8, $6E, $00, $08, $00, $68, $00, $08, $08, $68, $20, $06, $10, $6E, $20 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $66, $00, $F8, $08, $66, $20, $F8, $10, $60, $20 */;
    /* data: db $04, $F8, $6E, $00, $08, $00, $68, $00, $08, $08, $68, $20, $04, $10, $6E, $20 */;
    /* data: db $F8, $FC, $72, $00, $F8, $04, $74, $00, $08, $00, $76, $00, $08, $08, $78, $00 */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $FA, $FB, $72, $00, $FA, $03, $74, $00, $08, $00, $76, $00, $08, $08, $78, $00 */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $F8, $04, $74, $20, $F8, $0C, $72, $20, $08, $00, $78, $20, $08, $08, $76, $20 */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $FA, $05, $74, $20, $FA, $0D, $72, $20, $08, $00, $78, $20, $08, $08, $76, $20 */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
}

void Data_015_5D34(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $06, $07, $08, $09, $0A, $0A, $0A, $0A, $0B, $0C */;
    /* data: db $0C, $0C, $0C, $0D */;
}

void label_015_5D48(void) {
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5D34;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.e = gb.regs.a;
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
    gb.regs.hl = 0x5B74;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 8;
    func_015_7964_trampoline(); return;
}

void Unknown050SpriteVariants(void) {
  Unknown050SpriteVariants_variant0:;
    /* data: db $1E, $00 */;
    /* data: db $1E, $60 */;
  Unknown050SpriteVariants_variant1:;
    /* data: db $7C, $00 */;
    /* data: db $7C, $20 */;
  Unknown050SpriteVariants_variant2:;
    /* data: db $7E, $00 */;
    /* data: db $7E, $20 */;
    Data_015_5D85(); return;
}

void Data_015_5D85(void) {
    /* data: db $14, $EC, $00, $00 */;
}

void Data_015_5D89(void) {
    /* data: db $00, $00, $F0, $04 */;
}

void func_015_5D8D(void) {
    gb.regs.a = gb_read(0xFFED);
    gb_push16(gb.regs.af);
    func_015_5D97();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFFED, gb.regs.a);
    return;
}

void func_015_5D97(void) {
    gb.regs.a = gb_read(0xD49D);
  func_015_5D97_jr_5D9A:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x50);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.a = gb_read(0xD49E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5D85;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x5D89;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x5D01;
    RenderActiveEntitySpritesPair();
    gb.regs.a = 2;
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition(); return;
}

void Data_015_5DCD(void) {
    /* data: db $46, $00, $46, $60, $70, $00, $FF, $FF */;
}

void label_015_5DD5(void) {
    gb.regs.de = 0x5DCD;
    return;
}

void Unknown051SpriteVariants(void) {
  Unknown051SpriteVariants_variant0:;
    /* data: db $7E, $00 */;
    /* data: db $7E, $20 */;
  Unknown051SpriteVariants_variant1:;
    /* data: db $7C, $00 */;
    /* data: db $7C, $20 */;
  Unknown051SpriteVariants_variant2:;
    /* data: db $1E, $00 */;
    /* data: db $1E, $60 */;
  Unknown051SpriteVariants_variant3:;
    /* data: db $58, $00 */;
    /* data: db $58, $20 */;
  Unknown051SpriteVariants_variant4:;
    /* data: db $5A, $00 */;
    /* data: db $5A, $20 */;
    label_015_5DED(); return;
}

void label_015_5DED(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x50);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.de = 0x5D59;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { jr_015_5E24(); return; };
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) { ClearEntityStatus_15(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    alu_bit(0, gb.regs.a);
    gb.regs.e = 0xFF;
    if (GET_FLAG_Z()) goto label_015_5DED_jr_5E20;
    GetEntityPrivateCountdown1();
    gb.regs.e = 1;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto label_015_5DED_jr_5E20;
    gb.regs.e = 2;
  label_015_5DED_jr_5E20:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void jr_015_5E24(void) {
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_5E35(); return;
        case 0x01: func_015_5E85(); return;
        case 0x02: func_015_5EAC(); return;
        case 0x03: func_015_5F22(); return;
    }
}

void func_015_5E35(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    func_015_5E38(); return;
}

void func_015_5E38(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_015_5E38_jr_5E79;
    gb.regs.a = 0xE6;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.d);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0F);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 4);
  func_015_5E38_jr_5E79:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_015_5E38_ret_5E84;
    ClearEntityStatus_15(); return;
  func_015_5E38_ret_5E84:;
    return;
}

void func_015_5E85(void) {
    gb.regs.a = 8;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = 0x18;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFF9B, gb.regs.a);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFF9A, gb.regs.a);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xC13E, gb.regs.a);
    IncrementEntityState(); return;
}

void func_015_5EAC(void) {
    func_015_5E38();
    gb.regs.a = gb_read(0xD49A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { ret_015_5F19(); return; };
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { ret_015_5F19(); return; };
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.hl = 0xC3F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.hl = 0xC400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x12);
    ClearEntityStatus_15();
    gb.regs.a = gb_read(0xD4A0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD4A0, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) { jr_015_5F0F(); return; };
    gb.regs.hl = 0xC290;
  func_015_5EAC_jr_5F02:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 7);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC0);
    gb.regs.a = 0x36;
    gb_write(0xFFF2, gb.regs.a);
    jr_015_5F0F(); return;
}

void jr_015_5F0F(void) {
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x14);
    gb.regs.a = 7;
    gb_write(0xFFF3, gb.regs.a);
    ret_015_5F19(); return;
}

void ret_015_5F19(void) {
    return;
}

void Data_015_5F1A(void) {
    /* data: db $20, $20, $E0, $E0 */;
}

void Data_015_5F1E(void) {
    /* data: db $20, $E0, $20, $E0 */;
}

void func_015_5F22(void) {
    label_3B44();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_015_5F3F(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_015_5F3F(); return; };
    gb.regs.a = 0x18;
  func_015_5F22_jr_5F3C:;
    ApplyVectorTowardsLink_trampoline();
    jr_015_5F3F(); return;
}

void jr_015_5F3F(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_015_5F99(); return; };
    gb.regs.a = 0x36;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  jr_015_5F3F_loop_5F4C:;
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = 0x7D;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto jr_015_5F3F_jr_5F96;
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
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x5F1A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5F1E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto jr_015_5F3F_loop_5F4C;
  jr_015_5F3F_jr_5F96:;
    ClearEntityStatus_15(); return;
}

void ret_015_5F99(void) {
    return;
}

void func_015_5F9A(void) {
    gb.regs.e = 0x80;
    gb.regs.hl = 0xD300;
  func_015_5F9A_loop_5F9F:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_015_5F9A_loop_5F9F;
    return;
}

void Data_015_5FA5(void) {
    /* data: db $03, $03, $05, $05, $00, $00, $04, $04, $02, $02, $06, $06, $01, $01, $07, $07 */;
}

void Data_015_5FB5(void) {
    /* data: db $00, $06, $0C, $0E */;
}

void Data_015_5FB9(void) {
    /* data: db $10, $0E, $0C, $06, $00, $FA, $F4, $F2, $F0, $F2, $F4, $FA, $00, $06, $0C, $0E */;
}

void Data_015_5FC9(void) {
    /* data: db $06, $07, $00, $01, $02, $03, $04, $05 */;
}

void func_015_5FD1(void) {
    ReturnIfNonInteractive_15();
    DefaultEnemyDamageCollisionHandler_trampoline(); return;
}

void FinalNightmareFormMoldormHandler(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_604A(); return;
        case 0x01: func_015_60D4(); return;
        case 0x02: func_015_60C1(); return;
        case 0x03: func_015_608C(); return;
    }
}

void Data_015_5FE2(void) {
    /* data: db $00, $00, $4A, $00, $00, $08, $4A, $20, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $00, $00, $4C, $00, $00, $08, $4C, $20 */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $00, $00, $4E, $00, $00, $08, $4E, $20, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $00, $F8, $78, $00, $F8, $00, $7A, $00 */;
    /* data: db $F8, $08, $7A, $20, $00, $10, $78, $20, $08, $00, $7C, $00, $08, $08, $7C, $20 */;
}

void Data_015_6042(void) {
    /* data: db $03, $03, $02, $01, $00, $00, $00, $00 */;
}

void func_015_604A(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_604A_jr_6055;
    IncrementEntityState(); return;
  func_015_604A_jr_6055:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto func_015_604A_jr_605F;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    func_015_52B1();
    gb.regs.a = 0x20;
  func_015_604A_jr_605F:;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6042;
    jr_015_6069(); return;
}

void jr_015_6069(void) {
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
    gb.regs.hl = 0x5FE2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 6;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 6;
    func_015_7964_trampoline(); return;
}

void Data_015_6084(void) {
    /* data: db $00, $00, $01, $01, $02, $02, $03, $03 */;
}

void func_015_608C(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_608C_jr_60B5;
    func_015_52BB();
    func_015_5128();
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0A);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_NO_GROUND_INTERACTION);
    ConfigureEntityHitbox(); return;
  func_015_608C_jr_60B5:;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6084;
    jr_015_6069(); return;
}

void func_015_60C1(void) {
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_015_60D4(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x1F);
    func_015_542E();
    IncrementEntityState(); return;
}

void func_015_60D4(void) {
    func_015_5FD1();
    func_015_6245();
    DecrementEntityIgnoreHitsCountdown();
    CopyEntityPositionToActivePosition();
    ReturnIfNonInteractive_15();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3D6, gb.regs.a);
    gb.regs.e = 0x0C;
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_015_60D4_jr_60FB;
    jr_015_6109();
    gb.regs.a = 1;
    gb_write(0xD3D6, gb.regs.a);
    gb.regs.e = 0x0C;
  func_015_60D4_jr_60FB:;
    gb.regs.hl = 0xD482;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_C()) { jr_015_6109(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x38;
    gb_write(0xFFF2, gb.regs.a);
    jr_015_6109(); return;
}

void jr_015_6109(void) {
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
    func_015_6331();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.e = alu_srl(gb.regs.e);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5FC9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void Data_015_6135(void) {
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00, $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $64, $00, $08, $00, $66, $00, $08, $08, $66, $20, $08, $10, $64, $20 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00, $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $6C, $00, $08, $00, $6E, $00, $08, $08, $62, $60, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $68, $00, $F8, $00, $6A, $00, $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $68, $40, $08, $00, $6A, $40, $08, $08, $62, $60, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $6C, $40, $F8, $00, $6E, $40, $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $62, $40, $08, $08, $62, $60, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $64, $40, $F8, $00, $66, $40, $F8, $08, $66, $60, $F8, $10, $64, $60 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $62, $40, $08, $08, $62, $60, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00, $F8, $08, $6E, $60, $F8, $10, $6C, $60 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $62, $40, $08, $08, $62, $60, $08, $10, $60, $60 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00, $F8, $08, $6A, $20, $F8, $10, $68, $20 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $62, $40, $08, $08, $6A, $60, $08, $10, $68, $60 */;
    /* data: db $F8, $F8, $60, $00, $F8, $00, $62, $00, $F8, $08, $62, $20, $F8, $10, $60, $20 */;
    /* data: db $08, $F8, $60, $40, $08, $00, $62, $40, $08, $08, $6E, $20, $08, $10, $6C, $20 */;
}

void Unknown053SpriteVariants(void) {
  Unknown053SpriteVariants_variant0:;
    /* data: db $70, $00 */;
    /* data: db $70, $20 */;
  Unknown053SpriteVariants_variant1:;
    /* data: db $72, $00 */;
    /* data: db $72, $20 */;
  Unknown053SpriteVariants_variant2:;
    /* data: db $74, $00 */;
    /* data: db $74, $20 */;
  Unknown053SpriteVariants_variant3:;
    /* data: db $76, $00 */;
    /* data: db $76, $20 */;
    func_015_6245(); return;
}

void func_015_6245(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x48);
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
    gb.regs.hl = 0x6135;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x42);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
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
    gb.regs.de = 0x61B7;
    RenderActiveEntitySpritesPair();
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
    gb.regs.de = 0x61B7;
  func_015_6245_jr_62AC:;
    RenderActiveEntitySpritesPair();
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
    gb.regs.de = 0x61B7;
    RenderActiveEntitySpritesPair();
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
    gb.regs.de = 0x61B7;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { ret_015_6330(); return; };
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_015_6245_jr_6324;
    if (!GET_FLAG_Z()) { ret_015_6330(); return; };
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_NO_GROUND_INTERACTION);
    label_3B70();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_NO_GROUND_INTERACTION);
  func_015_6245_jr_6324:;
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xF0);
    if (!GET_FLAG_C()) { ret_015_6330(); return; };
    IncrementEntityState();
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x50);
    ret_015_6330(); return;
}

void ret_015_6330(void) {
    return;
}

void func_015_6331(void) {
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto func_015_6331_jr_6342;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_015_6331_jr_6342;
    UpdateEntityPosWithSpeed_15();
  func_015_6331_jr_6342:;
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_015_6379(); return; };
    gb.regs.e = 8;
    alu_bit(0, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_015_6331_jr_6361;
    gb.regs.e = 0;
    alu_bit(1, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_015_6331_jr_6361;
    gb.regs.e = 4;
    alu_bit(2, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_015_6331_jr_6361;
    gb.regs.e = 0x0C;
  func_015_6331_jr_6361:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    GetRandomByte();
    alu_rra();
    if (GET_FLAG_C()) goto func_015_6331_jr_6374;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  func_015_6331_jr_6374:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    jr_015_6379(); return;
}

void jr_015_6379(void) {
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto jr_015_6379_jr_63AF;
    gb_write(gb.regs.hl, 6);
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
    gb.regs.hl = 0x5FA5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.hl = 0x5FB5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5FB9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  jr_015_6379_jr_63AF:;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto jr_015_6379_ret_63C7;
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
  jr_015_6379_ret_63C7:;
    return;
}

void FinalNightmareFormGanonLanmolaHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { FinalNightmareFormLanmolaHandler(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { FinalNightmareGanonBatHandler(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { FinalNightmareGanonTridentHandler(); return; };
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) { jr_015_6425(); return; };
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto FinalNightmareFormGanonLanmolaHandler_jr_63E9;
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) { jr_015_63F2(); return; };
  FinalNightmareFormGanonLanmolaHandler_jr_63E9:;
    gb.regs.a = 6;
    gb_write(0xFFF1, gb.regs.a);
    func_015_572B();
    jr_015_63F5(); return;
}

void jr_015_63F2(void) {
    func_015_692A();
    jr_015_63F5(); return;
}

void jr_015_63F5(void) {
    ReturnIfNonInteractive_15();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_C()) { jr_015_6425(); return; };
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xE8);
    if (!GET_FLAG_C()) { jr_015_6425(); return; };
    IncrementEntityState();
    gb_write(gb.regs.hl, 9);
    gb.regs.a = 9;
    gb_write(0xFFF0, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xFFF3, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x80);
    jr_015_6425(); return;
}

void jr_015_6425(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_64BC(); return;
        case 0x01: func_015_650E(); return;
        case 0x02: func_015_6553(); return;
        case 0x03: func_015_65A6(); return;
        case 0x04: func_015_6618(); return;
        case 0x05: func_015_66CC(); return;
        case 0x06: func_015_6753(); return;
        case 0x07: func_015_678F(); return;
        case 0x08: func_015_67E2(); return;
        case 0x09: func_015_67E3(); return;
        case 0x0A: func_015_67FA(); return;
        case 0x0B: func_015_6811(); return;
        case 0x0C: func_015_6896(); return;
        case 0x0D: func_015_68E7(); return;
    }
}

void Data_015_6444(void) {
    /* data: db $00, $00, $4A, $00, $00, $08, $4A, $20, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $00, $00, $4C, $00, $00, $08, $4C, $20 */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $00, $00, $4E, $00, $00, $08, $4E, $20, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $F0, $00, $5C, $00, $F0, $08, $5C, $20 */;
    /* data: db $00, $00, $5E, $00, $00, $08, $5E, $20, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $00, $FC, $6A, $00, $00, $04, $6C, $20, $00, $0C, $6A, $20, $F3, $FC, $50, $00 */;
    /* data: db $F3, $04, $52, $00, $F3, $0C, $6E, $00 */;
}

void func_015_64BC(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    SetEntitySpriteVariant();
    func_015_572B();
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x50;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xFF99;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_015_64BC_jr_64F8;
    gb.regs.hl = 0xFF98;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_015_64BC_jr_64F8;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x60);
    IncrementEntityState();
  func_015_64BC_jr_64F8:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_15(); return;
}

void Data_015_6501(void) {
    /* data: db $04, $03, $02, $01, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void func_015_650E(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_650E_jr_652E;
    gb_write(0xD4A4, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
    gb.regs.a = 4;
    SetEntitySpriteVariant();
    func_015_52B1();
    IncrementEntityState(); return;
  func_015_650E_jr_652E:;
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6501;
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
    gb.regs.hl = 0x6444;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 6;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 6;
    func_015_7964_trampoline(); return;
}

void func_015_6553(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_015_6565(); return; };
    gb_write(gb.regs.hl, 0x7F);
    IncrementEntityState(); return;
}

void func_015_655D(void) {
    GetEntityXDistanceToLink_15();
    gb.regs.a = gb.regs.e;
    gb_write(0xD49E, gb.regs.a);
    return;
}

void ret_015_6565(void) {
    return;
}

void Data_015_6566(void) {
    /* data: db $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void Data_015_6586(void) {
    /* data: db $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05 */;
    /* data: db $02, $07, $08, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void func_015_65A6(void) {
    gb.regs.a = 0;
    gb_write(0xD49E, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_65A6_jr_65BB;
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x4C);
    func_015_655D();
    IncrementEntityState(); return;
  func_015_65A6_jr_65BB:;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto func_015_65A6_jr_65C4;
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x19);
  func_015_65A6_jr_65C4:;
    alu_cp8(gb.regs.a, 0x58);
    if (!GET_FLAG_Z()) goto func_015_65A6_jr_65CD;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x39);
  func_015_65A6_jr_65CD:;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6586;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD4A4, gb.regs.a);
    gb.regs.hl = 0x6566;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xD4A4);
  func_015_65A6_jr_65E6:;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto func_015_65A6_jr_65F5;
    gb.regs.a = 0xF3;
    gb_write(0xD4A5, gb.regs.a);
    gb.regs.a = 0xF0;
    gb_write(0xD4A6, gb.regs.a);
    return;
  func_015_65A6_jr_65F5:;
    gb.regs.a = 0xF8;
    gb_write(0xD4A5, gb.regs.a);
    gb.regs.a = 0xFE;
    gb_write(0xD4A6, gb.regs.a);
    return;
}

void Data_015_6600(void) {
    /* data: db $03, $02, $01, $00 */;
}

void Data_015_6604(void) {
    /* data: db $00, $01, $02, $03 */;
}

void Data_015_6608(void) {
    /* data: db $E8, $00, $18, $18, $00, $E8, $E8, $00 */;
}

void Data_015_6610(void) {
    /* data: db $10, $18, $10, $F0, $E8, $F0, $10, $18 */;
}

void func_015_6618(void) {
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_015_6628(); return; };
    gb_write(0xD4A1, gb.regs.a);
    GetEntityTransitionCountdown();
  func_015_6618_jr_6623:;
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState(); return;
}

void jr_015_6628(void) {
    gb.regs.a = gb_read(0xD49E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0xF5;
    if (GET_FLAG_Z()) goto jr_015_6628_jr_6632;
    gb.regs.a = 0x0B;
  jr_015_6628_jr_6632:;
    gb_write(0xD4A5, gb.regs.a);
    gb.regs.a = 0xEE;
    gb_write(0xD4A6, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xD49E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.hl = 0x6600;
    if (GET_FLAG_Z()) goto jr_015_6628_jr_6651;
    gb.regs.hl = 0x6604;
  jr_015_6628_jr_6651:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD4A4, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) { ret_015_66C7(); return; };
    gb.regs.a = gb_read(0xD4A1);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { ret_015_66C7(); return; };
    gb.regs.a = 0xE6;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x42);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb_push16(gb.regs.de);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    ConfigureEntityHitbox();
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xD49E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xD4A1);
    if (!GET_FLAG_Z()) goto jr_015_6628_jr_66A0;
    gb.regs.a = alu_xor8(gb.regs.a, 7);
  jr_015_6628_jr_66A0:;
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x6610;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xD4A5);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6608;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb.regs.hl = 0xFFD8;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xD4A1;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.bc = gb_pop16();
    ret_015_66C7(); return;
}

void ret_015_66C7(void) {
    return;
}

void Data_015_66C8(void) {
    /* data: db $0B, $0A, $02, $0A */;
}

void func_015_66CC(void) {
    gb.regs.a = gb_read(0xD49E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0xFD;
    if (GET_FLAG_Z()) goto func_015_66CC_jr_66D6;
    gb.regs.a = 3;
  func_015_66CC_jr_66D6:;
    gb_write(0xD4A5, gb.regs.a);
    gb.regs.a = 0xEC;
    gb_write(0xD4A6, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x66C8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD4A4, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_015_674E(); return; };
    gb_write(gb.regs.hl, 0x40);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD4A4, gb.regs.a);
    IncrementEntityState();
    gb.regs.a = 0xE6;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { jr_015_674E(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD49E);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 8;
    if (!GET_FLAG_Z()) goto func_015_66CC_jr_6724;
    gb.regs.a = 0xF8;
  func_015_66CC_jr_6724:;
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    ConfigureEntityHitbox();
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = 0x27;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.bc = gb_pop16();
    jr_015_674E(); return;
}

void jr_015_674E(void) {
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void func_015_6753(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_6753_jr_676A;
    gb_write(gb.regs.hl, 0x1F);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    func_015_5128();
    IncrementEntityState();
  func_015_6753_jr_676A:;
    gb.regs.a = 3;
    SetEntitySpriteVariant(); return;
}

void Data_015_676F(void) {
    /* data: db $28, $50, $78, $28, $78, $28, $50, $78 */;
}

void Data_015_6777(void) {
    /* data: db $20, $28, $20, $30, $30, $50, $50, $50 */;
}

void Data_015_677F(void) {
    /* data: db $20, $1E, $1C, $1A, $18, $16, $14, $12, $10, $0E, $0C, $0A, $08, $06, $04, $02 */;
}

void func_015_678F(void) {
    gb.regs.a = 4;
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
  func_015_678F_jr_679F:;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x676F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0x6777;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  func_015_678F_jr_67AB:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF99, gb.regs.a);
    GetEntityTransitionCountdown();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x677F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xFFEE;
  func_015_678F_jr_67C1:;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
  func_015_678F_jr_67C6:;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { jr_015_67D9(); return; };
    gb.regs.hl = 0xFFEC;
  func_015_678F_jr_67CD:;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { jr_015_67D9(); return; };
    IncrementEntityState();
    jr_015_67D9(); return;
}

void jr_015_67D9(void) {
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_15(); return;
}

void func_015_67E2(void) {
    return;
}

void func_015_67E3(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_67E3_ret_67F9;
    gb_write(gb.regs.hl, 0x40);
    func_015_542E();
    IncrementEntityState();
    gb.regs.a = 0;
    SetEntitySpriteVariant();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD4A4, gb.regs.a);
  func_015_67E3_ret_67F9:;
    return;
}

void func_015_67FA(void) {
    gb.regs.a = 6;
    gb_write(0xFFF1, gb.regs.a);
    func_015_572B();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
    IncrementEntityState();
    ClearEntitySpeed(); return;
}

void func_015_6811(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_015_683F(); return; };
    gb.regs.a = 0x18;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC250;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_015_6811_jr_6831;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_015_6811_jr_6831:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC240;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_015_6811_jr_683E;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_015_6811_jr_683E:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_015_683F(); return;
}

void jr_015_683F(void) {
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_015_683F_jr_685F;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    label_27F2();
    gb.regs.a = 0x10;
    gb_write(0xFFF3, gb.regs.a);
    func_015_5383();
    IncrementEntityState(); return;
  jr_015_683F_jr_685F:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0xE6;
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
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x1F);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    return;
}

void func_015_6896(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_015_6896_jr_68A1;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    func_015_5128(); return;
  func_015_6896_jr_68A1:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x50;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x0C;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xFF99;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_015_6896_jr_68D6;
    gb.regs.hl = 0xFF98;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto func_015_6896_jr_68D6;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x5F);
    IncrementEntityState();
  func_015_6896_jr_68D6:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_15(); return;
}

void Data_015_68DF(void) {
    /* data: db $00, $00, $00, $01, $01, $01, $02, $02 */;
}

void func_015_68E7(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_68E7_jr_6914;
    ClearEntitySpeed();
    func_015_52BB();
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF);
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x90);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD4A3, gb.regs.a);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x3F);
    return;
  func_015_68E7_jr_6914:;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) goto func_015_68E7_jr_691A;
    gb.regs.a = 0x1F;
  func_015_68E7_jr_691A:;
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x68DF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    func_015_572B(); return;
}

void func_015_692A(void) {
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD49E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = gb_read(0xFFF1);
    if (GET_FLAG_Z()) goto func_015_692A_jr_693D;
    gb.regs.a = alu_add8(gb.regs.a, 5);
  func_015_692A_jr_693D:;
    gb_write(0xFFF1, gb.regs.a);
    func_015_69D2();
    func_015_6A69();
    func_015_6C10(); return;
}

void Data_015_6948(void) {
    /* data: db $F8, $FC, $50, $00, $F8, $04, $52, $00, $F8, $0C, $6E, $00, $08, $F8, $6A, $00 */;
    /* data: db $08, $00, $6C, $00, $08, $08, $6C, $20, $08, $10, $6A, $20, $FF, $FF, $FF, $FF */;
    /* data: db $FB, $FE, $50, $00, $FB, $06, $52, $00, $FB, $0E, $6E, $00, $08, $F8, $6A, $00 */;
    /* data: db $08, $00, $6C, $00, $08, $08, $6C, $20, $08, $10, $6A, $20, $FF, $FF, $FF, $FF */;
    /* data: db $F8, $FC, $6E, $20, $F8, $04, $52, $20, $F8, $0C, $50, $20, $08, $F8, $6A, $00 */;
    /* data: db $08, $00, $6C, $00, $08, $08, $6C, $20, $08, $10, $6A, $20, $FF, $FF, $FF, $FF */;
    /* data: db $FB, $FA, $6E, $20, $FB, $02, $52, $20, $FB, $0A, $50, $20, $08, $F8, $6A, $00 */;
    /* data: db $08, $00, $6C, $00, $08, $08, $6C, $20, $08, $10, $6A, $20, $FF, $FF, $FF, $FF */;
}

void Data_015_69C8(void) {
    /* data: db $00, $00, $02, $01, $00, $02, $02, $00, $03, $02 */;
}

void func_015_69D2(void) {
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x69C8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x70);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x6948;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 7;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 7;
    func_015_7964_trampoline(); return;
}

void Data_015_69F1(void) {
    /* data: db $F4, $F8, $64, $00, $FE, $11, $60, $00, $FE, $19, $62, $00, $F4, $F9, $64, $00 */;
    /* data: db $FE, $11, $60, $00, $FE, $19, $62, $00, $F0, $00, $64, $20, $FF, $FF, $FF, $FF */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FB, $10, $60, $00, $FB, $18, $62, $00 */;
    /* data: db $00, $F8, $66, $00, $FE, $10, $66, $20, $FF, $FF, $FF, $FF, $F4, $10, $64, $20 */;
    /* data: db $FE, $EF, $62, $20, $FE, $F7, $60, $20, $F4, $0F, $64, $20, $FE, $EF, $62, $20 */;
    /* data: db $FE, $F7, $60, $20, $F0, $08, $64, $00, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $FF, $FF, $FF, $FF, $FB, $F0, $62, $20, $FB, $F8, $60, $20, $FE, $F8, $66, $00 */;
    /* data: db $00, $10, $66, $20, $FF, $FF, $FF, $FF */;
}

void func_015_6A69(void) {
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
    gb.regs.hl = 0x69F1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 3;
    func_015_7964_trampoline(); return;
}

void Data_015_6A84(void) {
    /* data: db $EC, $00, $70, $00, $EC, $08, $70, $20, $F4, $00, $7C, $00, $F4, $08, $7C, $20 */;
    /* data: db $08, $00, $7C, $40, $08, $08, $7C, $60, $14, $00, $70, $40, $14, $08, $70, $60 */;
    /* data: db $00, $00, $7E, $40, $00, $08, $7E, $20, $F3, $0D, $78, $20, $F3, $15, $76, $20 */;
    /* data: db $0D, $F3, $76, $40, $0D, $FB, $78, $40, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $00, $EC, $72, $00, $00, $F4, $74, $00, $00, $FC, $7A, $00, $00, $0C, $7A, $00 */;
    /* data: db $00, $14, $74, $20, $00, $1C, $72, $20, $00, $00, $FF, $FF, $00, $00, $FF, $FF */;
    /* data: db $00, $00, $7E, $00, $00, $08, $7E, $60, $F3, $F3, $76, $00, $F3, $FB, $78, $00 */;
    /* data: db $0D, $0D, $78, $60, $0D, $15, $76, $60, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $F1, $0F, $78, $20, $F1, $17, $76, $20, $0D, $F3, $76, $40, $0D, $FB, $78, $40 */;
    /* data: db $00, $00, $FF, $FF, $00, $08, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $F1, $F1, $76, $00, $F1, $F9, $78, $00, $0D, $0D, $78, $60, $0D, $15, $76, $60 */;
    /* data: db $00, $00, $FF, $FF, $00, $08, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $F8, $08, $78, $20, $F8, $10, $76, $20, $08, $F8, $76, $40, $08, $00, $78, $40 */;
    /* data: db $00, $00, $FF, $40, $00, $08, $FF, $20, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $FC, $04, $78, $20, $FC, $0C, $76, $20, $04, $FC, $76, $40, $04, $04, $78, $40 */;
    /* data: db $00, $00, $FF, $40, $00, $08, $FF, $20, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $F8, $F8, $76, $00, $F8, $00, $78, $00, $08, $08, $78, $60, $08, $10, $76, $60 */;
    /* data: db $00, $00, $FF, $00, $00, $08, $FF, $60, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $FC, $FC, $76, $00, $FC, $04, $78, $00, $04, $04, $78, $60, $04, $0C, $76, $60 */;
    /* data: db $00, $00, $FF, $00, $00, $08, $FF, $60, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF */;
    /* data: db $00, $F8, $72, $00, $00, $00, $74, $00, $00, $08, $74, $20, $00, $10, $72, $20 */;
    /* data: db $00, $08, $FF, $FF, $00, $10, $FF, $FF, $00, $00, $FF, $FF, $00, $00, $FF, $FF */;
    /* data: db $00, $FB, $72, $00, $00, $03, $74, $00, $00, $05, $74, $20, $00, $0D, $72, $20 */;
    /* data: db $00, $FC, $FF, $FF, $00, $0C, $FF, $FF, $00, $00, $FF, $FF, $00, $00, $FF, $FF */;
}

void Data_015_6C04(void) {
    /* data: db $08, $06, $06, $06, $04, $04, $04, $04, $04, $04, $04, $04 */;
}

void func_015_6C10(void) {
    gb.regs.a = gb_read(0xD4A4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD4A5);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD4A6);
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD4A4);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6C04;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb_read(gb.regs.hl);
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
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x6A84;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.bc);
    RenderActiveEntitySpritesRect();
    gb.regs.de = gb_pop16();
    gb.regs.a = gb.regs.e;
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition(); return;
}

void Data_015_6C59(void) {
    /* data: db $03, $02, $01, $00 */;
}

void Data_015_6C5D(void) {
    /* data: db $00, $01, $02, $03 */;
}

void FinalNightmareGanonTridentHandler(void) {
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_C()) { ClearEntityStatus_15(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.hl = 0x6C59;
    if (GET_FLAG_Z()) goto FinalNightmareGanonTridentHandler_jr_6C8A;
    gb.regs.hl = 0x6C5D;
  FinalNightmareGanonTridentHandler_jr_6C8A:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD4A4, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD4A5, gb.regs.a);
    gb_write(0xD4A6, gb.regs.a);
    func_015_6C10();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD4A4, gb.regs.a);
    ReturnIfNonInteractive_15();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto FinalNightmareGanonTridentHandler_jr_6CAB;
    gb.regs.a = 0x3A;
    gb_write(0xFFF4, gb.regs.a);
  FinalNightmareGanonTridentHandler_jr_6CAB:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    UpdateEntityPosWithSpeed_15();
    label_3B44();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto FinalNightmareGanonTridentHandler_jr_6CBC;
    return;
  FinalNightmareGanonTridentHandler_jr_6CBC:;
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x10;
    GetVectorTowardsLink_trampoline();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto FinalNightmareGanonTridentHandler_jr_6CE9;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  FinalNightmareGanonTridentHandler_jr_6CE9:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto FinalNightmareGanonTridentHandler_jr_6CF7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  FinalNightmareGanonTridentHandler_jr_6CF7:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xFF99;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto FinalNightmareGanonTridentHandler_jr_6D29;
    gb.regs.hl = 0xFF98;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 3);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto FinalNightmareGanonTridentHandler_jr_6D29;
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto FinalNightmareGanonTridentHandler_jr_6D29;
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x4C);
    ClearEntityStatus_15();
  FinalNightmareGanonTridentHandler_jr_6D29:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    return;
}

void Unknown054SpriteVariants(void) {
  Unknown054SpriteVariants_variant0:;
    /* data: db $4A, $00 */;
    /* data: db $4A, $20 */;
  Unknown054SpriteVariants_variant1:;
    /* data: db $4C, $00 */;
    /* data: db $4C, $20 */;
  Unknown054SpriteVariants_variant2:;
    /* data: db $4E, $00 */;
    /* data: db $4E, $20 */;
    Data_015_6D3C(); return;
}

void Data_015_6D3C(void) {
    /* data: db $00, $00, $01, $01 */;
}

void FinalNightmareFormLanmolaHandler(void) {
    gb.regs.de = 0x6C87;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatus_15(); return; };
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6D3C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
}

void Unknown055SpriteVariants(void) {
  Unknown055SpriteVariants_variant0:;
    /* data: db $1E, $00 */;
    /* data: db $1E, $60 */;
  Unknown055SpriteVariants_variant1:;
    /* data: db $34, $00 */;
    /* data: db $34, $20 */;
  Unknown055SpriteVariants_variant2:;
    /* data: db $54, $00 */;
    /* data: db $54, $20 */;
  Unknown055SpriteVariants_variant3:;
    /* data: db $56, $00 */;
    /* data: db $56, $20 */;
    FinalNightmareGanonBatHandler(); return;
}

void FinalNightmareGanonBatHandler(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
    gb.regs.de = 0x6CB8;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    gb.regs.a = gb_read(0xFFF0);
  FinalNightmareGanonBatHandler_jr_6D81:;
    switch(gb.regs.a) {
        case 0x00: func_015_6D86(); return;
        case 0x01: func_015_6D9C(); return;
    }
}

void func_015_6D86(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_6D86_jr_6D90;
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState(); return;
  func_015_6D86_jr_6D90:;
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto func_015_6D86_jr_6D98;
    gb.regs.e = 1;
  func_015_6D86_jr_6D98:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void func_015_6D9C(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_015_6D9C_jr_6DB8;
    gb.regs.a = 0x28;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = 0x30;
    ApplyVectorTowardsLink_trampoline();
  func_015_6D9C_jr_6DB8:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
  func_015_6D9C_jr_6DBB:;
    alu_rra();
    if (!GET_FLAG_C()) { jr_015_6DC4(); return; };
    UpdateEntityPosWithSpeed_15();
  func_015_6D9C_jr_6DC1:;
    label_3B44();
    jr_015_6DC4(); return;
}

void jr_015_6DC4(void) {
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xA8);
    if (!GET_FLAG_C()) { ClearEntityStatus_15(); return; };
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) { ClearEntityStatus_15(); return; };
    return;
}

void Data_015_6DD3(void) {
    /* data: db $01, $02, $03, $03, $03, $03, $02, $01 */;
}

void Data_015_6DDB(void) {
    /* data: db $20, $23, $26, $29, $2C, $2F, $32, $35, $38, $38, $38, $38, $38, $38, $38, $38 */;
    /* data: db $38, $38, $38, $38, $38, $38, $38, $38 */;
}

void Data_015_6DF3(void) {
    /* data: db $20, $23, $26, $29, $2C, $2F, $32, $34, $34, $34, $34, $34, $34, $34, $34, $34 */;
    /* data: db $34, $34, $34, $34, $34, $34, $34, $34 */;
}

void Data_015_6E0B(void) {
    /* data: db $28, $27, $26, $25, $24, $23, $22, $21, $20, $1F, $1E, $1D, $1C, $1B, $1A, $19 */;
    /* data: db $18, $18, $18, $18, $18, $18, $18, $18 */;
}

void Data_015_6E23(void) {
    /* data: db $03, $02, $01, $00, $00, $00, $00, $00 */;
}

void FinalNightmareFormDethlHandler(void) {
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_015_6E4E(); return; };
    alu_cp8(gb.regs.a, 0x10);
  FinalNightmareFormDethlHandler_jr_6E35:;
    if (!GET_FLAG_Z()) { jr_015_6E3D(); return; };
  FinalNightmareFormDethlHandler_jr_6E37:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    func_015_52B1();
  FinalNightmareFormDethlHandler_jr_6E3B:;
    gb.regs.a = 0x10;
    jr_015_6E3D(); return;
}

void jr_015_6E3D(void) {
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6E23;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    func_015_572B(); return;
}

void jr_015_6E4E(void) {
    func_015_7056();
  jr_015_6E4E_jr_6E5A:;
    ReturnIfNonInteractive_15();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_6E66(); return;
        case 0x01: func_015_6FA1(); return;
        case 0x02: func_015_6FBC(); return;
    }
}

void func_015_6E66(void) {
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xF0);
    if (!GET_FLAG_C()) goto func_015_6E66_jr_6E9B;
    gb.regs.a = 3;
    gb_write(0xC5A7, gb.regs.a);
    /* call_open_dialog Dialog0F6 */;
    gb.regs.a = 0x5E;
    gb_write(0xD368, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    label_27F2();
    IncrementEntityState(); return;
  func_015_6E66_jr_6E9B:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto func_015_6E66_jr_6EB5;
    gb.regs.a = gb_read(0xD4A3);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto func_015_6E66_jr_6EB5;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD4A3, gb.regs.a);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_015_6E66_jr_6EB5;
    gb.regs.hl = 0xD368;
    gb_write(gb.regs.hl, 0x50);
  func_015_6E66_jr_6EB5:;
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    alu_cp8(gb.regs.a, 0x17);
    if (GET_FLAG_C()) goto func_015_6E66_jr_6EC4;
    gb.regs.a = 0x17;
  func_015_6E66_jr_6EC4:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6DDB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6DF3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6E0B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xD490);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_C()) goto func_015_6E66_jr_6EEA;
    gb.regs.a = 0x3D;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_015_6E66_jr_6EEA:;
    gb_write(0xD490, gb.regs.a);
    gb.regs.a = 0;
    SetEntitySpriteVariant();
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_6E66_jr_6F0B;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_015_6E66_jr_6F0B;
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x7F);
  func_015_6E66_jr_6F0B:;
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) goto func_015_6E66_jr_6F30;
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6DD3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_015_6E66_jr_6F30;
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
  func_015_6E66_jr_6F30:;
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.e = 0x0F;
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xF8);
    if (!GET_FLAG_C()) goto func_015_6E66_jr_6F40;
    gb.regs.e = 7;
  func_015_6E66_jr_6F40:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) { jr_015_6F70(); return; };
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 8;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_015_6E66_jr_6F5E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_015_6E66_jr_6F5E:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_015_6E66_jr_6F6C;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_015_6E66_jr_6F6C:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    jr_015_6F70(); return;
}

void jr_015_6F70(void) {
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    if (!GET_FLAG_C()) goto jr_015_6F70_jr_6F8B;
    gb.regs.a = gb_read(0xD4A1);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD4A1, gb.regs.a);
  jr_015_6F70_jr_6F8B:;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    if (!GET_FLAG_C()) goto jr_015_6F70_ret_6FA0;
    gb.regs.a = gb_read(0xD4A2);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD4A2, gb.regs.a);
  jr_015_6F70_ret_6FA0:;
    return;
}

void func_015_6FA1(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_015_6FA1_jr_6FAD;
    gb.regs.hl = 0xD368;
    gb_write(gb.regs.hl, 0x5F);
  func_015_6FA1_jr_6FAD:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x80);
    gb.regs.a = 0x3D;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xFFF3, gb.regs.a);
    IncrementEntityState(); return;
}

void func_015_6FBC(void) {
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { ret_015_6FF5(); return; };
    gb.regs.a = gb_read(0xD4A3);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto func_015_6FBC_jr_6FF1;
    PlayBombExplosionSfx();
    func_015_5383();
    ClearEntityStatus_15();
    gb.regs.a = 0xE6;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xFF);
    return;
  func_015_6FBC_jr_6FF1:;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD4A3, gb.regs.a);
    ret_015_6FF5(); return;
}

void ret_015_6FF5(void) {
    return;
}

void Data_015_6FF6(void) {
    /* data: db $F0, $FC, $60, $00, $F0, $04, $62, $00, $F0, $0C, $60, $20, $F0, $FC, $64, $00 */;
    /* data: db $F0, $04, $66, $00, $F0, $0C, $64, $20, $F0, $FC, $68, $00, $F0, $04, $6A, $00 */;
    /* data: db $F0, $0C, $68, $20, $F0, $FC, $64, $00, $F0, $04, $66, $00, $F0, $0C, $64, $20 */;
}

void Data_015_7026(void) {
    /* data: db $00, $FC, $6C, $00, $00, $04, $6E, $00, $00, $0C, $6C, $20, $00, $FC, $70, $00 */;
    /* data: db $00, $04, $72, $00, $00, $0C, $70, $20, $00, $FC, $74, $00, $00, $04, $76, $00 */;
    /* data: db $00, $0C, $74, $20, $00, $FC, $78, $00, $00, $04, $7A, $00, $00, $0C, $78, $20 */;
}

void func_015_7056(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6FF6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 3;
    func_015_7964_trampoline();
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
    gb.regs.hl = 0x7026;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 3;
    func_015_7964_trampoline();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    CopyEntityPositionToActivePosition();
    func_015_717B();
    gb.regs.hl = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    CopyEntityPositionToActivePosition(); return;
}

void Data_015_70A7(void) {
    /* data: db $D0, $D1, $D4, $D9, $DF, $E6, $EE, $F7 */;
}

void Data_015_70AF(void) {
    /* data: db $00, $09, $12, $1A, $21, $27, $2C, $2F, $30, $2F, $2C, $27, $21, $1A, $12, $09 */;
    /* data: db $00, $F7, $EE, $E6, $DF, $D9, $D4, $D1, $D0, $D1, $D4, $D9, $DF, $E6, $EE, $F7 */;
}

void Data_015_70CF(void) {
    /* data: db $DA, $DB, $DD, $E1, $E6, $EB, $F2, $F9 */;
}

void Data_015_70D7(void) {
    /* data: db $00, $07, $0E, $15, $1A, $1F, $23, $25, $26, $25, $23, $1F, $1A, $15, $0E, $07 */;
    /* data: db $00, $F9, $F2, $EB, $E6, $E1, $DD, $DB, $DA, $DB, $DD, $E1, $E6, $EB, $F2, $F9 */;
}

void Data_015_70F7(void) {
    /* data: db $E4, $E5, $E7, $E9, $ED, $F1, $F6, $FB */;
}

void Data_015_70FF(void) {
    /* data: db $00, $05, $0A, $0F, $13, $17, $19, $1B, $1C, $1B, $19, $17, $13, $0F, $0A, $05 */;
    /* data: db $00, $FB, $F6, $F1, $ED, $E9, $E7, $E5, $E4, $E5, $E7, $E9, $ED, $F1, $F6, $FB */;
}

void Data_015_711F(void) {
    /* data: db $EE, $EF, $F0, $F2, $F4, $F6, $FA, $FD */;
}

void Data_015_7127(void) {
    /* data: db $00, $03, $06, $0A, $0C, $0E, $10, $11, $12, $11, $10, $0E, $0C, $0A, $06, $03 */;
    /* data: db $00, $FD, $FA, $F6, $F4, $F2, $F0, $EF, $EE, $EF, $F0, $F2, $F4, $F6, $FA, $FD */;
    /* data: db $F8, $F9, $FA, $FB, $FB, $FC, $FD, $FF, $00, $01, $03, $04, $05, $05, $06, $07 */;
    /* data: db $08, $07, $06, $05, $05, $04, $03, $01, $00, $FF, $FD, $FC, $FB, $FB, $FA, $F9 */;
    /* data: db $F8, $F9, $FA, $FB, $FB, $FC, $FD, $FF */;
}

void Unknown056SpriteVariants(void) {
  Unknown056SpriteVariants_variant0:;
    /* data: db $4E, $00 */;
    /* data: db $4E, $20 */;
  Unknown056SpriteVariants_variant1:;
    /* data: db $4C, $00 */;
    /* data: db $4C, $20 */;
  Unknown056SpriteVariants_variant2:;
    /* data: db $7C, $02 */;
    /* data: db $7C, $22 */;
    func_015_717B(); return;
}

void func_015_717B(void) {
    gb.regs.a = gb_read(0xD4A3);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto func_015_717B_jr_71A0;
    gb.regs.a = gb_read(0xD4A1);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x70AF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x70A7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 2;
    func_015_72CF();
  func_015_717B_jr_71A0:;
    gb.regs.a = gb_read(0xD4A3);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) { jr_015_71C5(); return; };
    gb.regs.a = gb_read(0xD4A1);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x70D7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x70CF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
  func_015_717B_jr_71C0:;
    gb.regs.a = 1;
    func_015_72CF();
    jr_015_71C5(); return;
}

void jr_015_71C5(void) {
    gb.regs.a = gb_read(0xD4A3);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto jr_015_71C5_jr_71EA;
    gb.regs.a = gb_read(0xD4A1);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x70FF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x70F7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 1;
    func_015_72CF();
  jr_015_71C5_jr_71EA:;
    gb.regs.a = gb_read(0xD4A3);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_C()) { jr_015_7226(); return; };
    gb.regs.a = gb_read(0xD4A1);
  jr_015_71C5_jr_71F4:;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto jr_015_71C5_jr_7202;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto jr_015_71C5_jr_7202;
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) { jr_015_7208(); return; };
  jr_015_71C5_jr_7202:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_015_7226(); return; };
}

void jr_015_7208(void) {
    gb.regs.a = gb_read(0xD4A1);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7127;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x711F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 0;
    func_015_72CF();
    jr_015_7226(); return;
}

void jr_015_7226(void) {
    gb.regs.a = gb_read(0xD4A3);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto jr_015_7226_jr_724B;
    gb.regs.a = gb_read(0xD4A2);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x70AF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x70A7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 2;
    func_015_72CF();
  jr_015_7226_jr_724B:;
    gb.regs.a = gb_read(0xD4A3);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) goto jr_015_7226_jr_7270;
    gb.regs.a = gb_read(0xD4A2);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x70D7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x70CF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 1;
    func_015_72CF();
  jr_015_7226_jr_7270:;
    gb.regs.a = gb_read(0xD4A3);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto jr_015_7226_jr_7295;
    gb.regs.a = gb_read(0xD4A2);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x70FF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x70F7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 1;
    func_015_72CF();
  jr_015_7226_jr_7295:;
    gb.regs.a = gb_read(0xD4A3);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xD4A2);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto jr_015_7226_jr_72AC;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto jr_015_7226_jr_72AC;
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) { jr_015_72B1(); return; };
  jr_015_7226_jr_72AC:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
}

void jr_015_72B1(void) {
    gb.regs.a = gb_read(0xD4A2);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7127;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.hl = 0x711F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = 0;
    func_015_72CF(); return;
}

void func_015_72CF(void) {
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x70BD;
    RenderActiveEntitySpritesPair();
    gb.regs.a = 2;
    func_015_7964_trampoline();
    gb.regs.hl = 0xFF98;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_015_72CF_jr_731D;
    gb.regs.hl = 0xFF99;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_015_72CF_jr_731D;
    gb.regs.hl = 0xC146;
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_015_72CF_jr_731D;
    gb.regs.a = 8;
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = 0x20;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = 0x30;
    gb_write(0xDC6F, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFF3, gb.regs.a);
  func_015_72CF_jr_731D:;
    CopyEntityPositionToActivePosition(); return;
}

void SandCrabSpriteVariants(void) {
    /* data: db $58, $02 */;
    /* data: db $58, $22 */;
    /* data: db $5A, $02 */;
    /* data: db $5A, $22 */;
}

void Data_015_7328(void) {
    /* data: db $10, $F0, $00, $00 */;
}

void Data_015_732C(void) {
    /* data: db $00, $00, $FB, $05 */;
}

void SandCrabEntityHandler(void) {
    gb.regs.de = 0x7243;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    ApplyRecoilIfNeeded_15();
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SandCrabEntityHandler_jr_735C;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_015_7382(); return; };
  SandCrabEntityHandler_jr_735C:;
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7328;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x732C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    ret_015_7382(); return;
}

void ret_015_7382(void) {
    return;
}

void Urchin2SpriteVariants(void) {
  Urchin2SpriteVariants_variant0:;
    /* data: db $5C, $03 */;
    /* data: db $5E, $03 */;
  Urchin2SpriteVariants_variant1:;
    /* data: db $5E, $23 */;
    /* data: db $5C, $23 */;
  Urchin2SpriteVariants_variant2:;
    /* data: db $5E, $63 */;
    /* data: db $5C, $63 */;
  Urchin2SpriteVariants_variant3:;
    /* data: db $5C, $43 */;
    /* data: db $5E, $43 */;
    Urchin1SpriteVariants(); return;
}

void Urchin1SpriteVariants(void) {
  Urchin1SpriteVariants_variant0:;
    /* data: db $2C, $03 */;
    /* data: db $2E, $03 */;
  Urchin1SpriteVariants_variant1:;
    /* data: db $2E, $23 */;
    /* data: db $2C, $23 */;
  Urchin1SpriteVariants_variant2:;
    /* data: db $2E, $63 */;
    /* data: db $2C, $63 */;
  Urchin1SpriteVariants_variant3:;
    /* data: db $2C, $43 */;
    /* data: db $2E, $43 */;
    Data_015_73A3(); return;
}

void Data_015_73A3(void) {
    /* data: db $FD, $03, $00, $00 */;
}

void Data_015_73A7(void) {
    /* data: db $00, $00, $03, $FD */;
}

void UrchinEntityHandler(void) {
    gb.regs.de = 0x72AD;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto UrchinEntityHandler_render;
    gb.regs.de = 0x72BD;
  UrchinEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    ApplyRecoilIfNeeded_15();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    SetEntitySpriteVariant();
    GetEntityDirectionToLink_15();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xC15B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UrchinEntityHandler_jr_73E9;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) goto UrchinEntityHandler_jr_73E9;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
  UrchinEntityHandler_jr_73E9:;
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) { jr_015_7428(); return; };
    CopyLinkFinalPositionToPosition();
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x73A3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  UrchinEntityHandler_jr_7408:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x73A7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x3E;
    gb_write(0xFFF2, gb.regs.a);
    UpdateEntityPosWithSpeed_15();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    jr_015_7428(); return;
}

void jr_015_7428(void) {
    gb.regs.a = gb_read(0xC16A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_015_7428_jr_7433;
    gb.regs.a = gb_read(0xC15B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
  jr_015_7428_jr_7433:;
    label_3B70(); return;
}

void Data_015_7436(void) {
    /* data: db $30, $D0 */;
}

void HookshotBridgeHandler(void) {
    ReturnIfNonInteractive_15();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7436;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    UpdateEntityYPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x9D);
    if (GET_FLAG_Z()) goto HookshotBridgeHandler_jr_746A;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 1;
    GetObjectPhysicsFlags_trampoline();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto HookshotBridgeHandler_jr_746A;
    ClearEntityStatus_15();
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFEA, gb.regs.a);
  HookshotBridgeHandler_jr_746A:;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x9D);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HookshotBridgeHandler_jr_749D;
    gb_push16(gb.regs.bc);
    gb.regs.a = 0x9D;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 0x15;
    func_91D();
    gb.regs.bc = gb_pop16();
  HookshotBridgeHandler_jr_749D:;
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
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_015_74E6(); return; };
    gb.regs.a = 4;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 8;
    if (!GET_FLAG_Z()) goto HookshotBridgeHandler_jr_74CB;
    gb.regs.a = 4;
  HookshotBridgeHandler_jr_74CB:;
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
    gb.regs.a = gb_read(0xFFEA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 9;
    if (!GET_FLAG_Z()) goto HookshotBridgeHandler_jr_74E2;
    gb.regs.a = 5;
  HookshotBridgeHandler_jr_74E2:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
}

void jr_015_74E6(void) {
    gb.regs.a = gb_read(0xFFEA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x0A;
    if (!GET_FLAG_Z()) goto jr_015_74E6_jr_74EF;
    gb.regs.a = 4;
  jr_015_74E6_jr_74EF:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 4;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    gb.regs.a = 0x0B;
    if (!GET_FLAG_Z()) goto jr_015_74E6_jr_7506;
    gb.regs.a = 5;
  jr_015_74E6_jr_7506:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 5;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
}

void BeetleSpawnerEntityHandler(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { BeetleSpawnerBeetleHandler(); return; };
    ReturnIfNonInteractive_15();
    GetEntityXDistanceToLink_15();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto BeetleSpawnerEntityHandler_ret_756E;
    GetEntityRealYDistanceToLink_15();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto BeetleSpawnerEntityHandler_ret_756E;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto BeetleSpawnerEntityHandler_ret_756E;
    gb.regs.a = 0xB2;
    gb.regs.e = 4;
    SpawnNewEntityInRange_trampoline();
    if (GET_FLAG_C()) goto BeetleSpawnerEntityHandler_ret_756E;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
  BeetleSpawnerEntityHandler_ret_756E:;
    return;
}

void BeetleXSpeeds(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void BeetleYSpeeds(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void BeetleSpriteVariants(void) {
  BeetleSpriteVariants_variant0:;
    /* data: db $70, $00 */;
    /* data: db $72, $00 */;
  BeetleSpriteVariants_variant1:;
    /* data: db $72, $20 */;
    /* data: db $70, $20 */;
    BeetleSpawnerBeetleHandler(); return;
}

void BeetleSpawnerBeetleHandler(void) {
    gb.regs.de = 0x74A2;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    ApplyRecoilIfNeeded_15();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_15();
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto BeetleSpawnerBeetleHandler_jr_75A0;
    ApplyEntityInteractionWithBackground_trampoline();
  BeetleSpawnerBeetleHandler_jr_75A0:;
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BeetleSpawnerBeetleHandler_jr_75CB;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x749A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x749E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  BeetleSpawnerBeetleHandler_jr_75CB:;
    return;
    gb.regs.a = 1;
    Data_015_75CE(); return;
}

void Data_015_75CE(void) {
    /* data: db $F8, $08, $00, $00 */;
}

void Data_015_75D2(void) {
    /* data: db $00, $00, $08, $F8 */;
}

void LaserBeamEntityHandler(void) {
    ReturnIfNonInteractive_15();
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LaserBeamEntityHandler_jr_75E1;
    CheckLinkCollisionWithProjectile_trampoline();
  LaserBeamEntityHandler_jr_75E1:;
    UpdateEntityPosWithSpeed_15();
    label_3B2E();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_015_7639(); return; };
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 5;
    AddTranscientVfx();
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { ClearEntityStatus_15(); return; };
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto LaserBeamEntityHandler_jr_7616;
    gb.regs.hl = 0xC240;
    jr_015_7619(); return;
  LaserBeamEntityHandler_jr_7616:;
    gb.regs.hl = 0xC250;
    jr_015_7619(); return;
}

void jr_015_7619(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    ResetSpinAttack();
    gb.regs.a = 0x10;
    gb_write(0xC13E, gb.regs.a);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x75CE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0x75D2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9B, gb.regs.a);
    return;
}

void jr_015_7639(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 6;
    AddTranscientVfx();
    gb_write(gb.regs.hl, 0x10);
    return;
}

void Data_015_764B(void) {
    /* data: db $00, $00, $74, $02, $00, $08, $74, $22, $00, $00, $FF, $02, $F0, $08, $7A, $02 */;
    /* data: db $00, $00, $76, $02, $00, $08, $78, $02, $F0, $00, $7A, $22, $00, $00, $78, $22 */;
    /* data: db $00, $08, $76, $22, $00, $00, $74, $42, $00, $08, $74, $62, $00, $00, $FF, $02 */;
}

void MonkeyEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_015_7825(); return; };
    gb.regs.hl = 0x764B;
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    label_3CD9();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto MonkeyEntityHandler_jr_76EF;
    gb.regs.a = gb_read(0xC157);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MonkeyEntityHandler_jr_76EF;
    gb.regs.a = gb_read(0xC178);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MonkeyEntityHandler_jr_76EF;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.hl = 0xC179;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto MonkeyEntityHandler_jr_76EF;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.hl = 0xC17A;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto MonkeyEntityHandler_jr_76EF;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x15);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFA);
    return;
  MonkeyEntityHandler_jr_76EF:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_76FA(); return;
        case 0x01: func_015_770A(); return;
        case 0x02: func_015_7793(); return;
        case 0x03: func_015_77BF(); return;
    }
}

void func_015_76FA(void) {
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState(); return;
}

void func_015_770A(void) {
    ReturnIfNonInteractive_15();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_015_770A_jr_771E;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_015_770A_jr_771E:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { ret_015_7792(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x28);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto func_015_770A_jr_7738;
    gb.regs.a = 2;
    jr_015_773A(); return;
  func_015_770A_jr_7738:;
    gb.regs.a = 0xE0;
    jr_015_773A(); return;
}

void jr_015_773A(void) {
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 1);
    gb.regs.a = 0xF8;
    if (GET_FLAG_Z()) goto jr_015_773A_jr_776B;
    gb.regs.a = 8;
  jr_015_773A_jr_776B:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_set(0, gb_read(gb.regs.hl)));
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    ret_015_7792(); return;
}

void ret_015_7792(void) {
    return;
}

void func_015_7793(void) {
    gb.regs.a = 3;
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_15();
    AddEntityZSpeedToPos_15();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { ret_015_77BE(); return; };
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    ClearEntitySpeed();
    IncrementEntityState();
    jr_015_77BA(); return;
}

void jr_015_77BA(void) {
    gb.regs.a = 0x14;
    gb_write(0xFFF3, gb.regs.a);
    ret_015_77BE(); return;
}

void ret_015_77BE(void) {
    return;
}

void func_015_77BF(void) {
    gb.regs.a = 0;
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_15();
    AddEntityZSpeedToPos_15();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_015_77BF_jr_77FE;
    gb_write(gb.regs.hl, 1);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
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
  func_015_77BF_jr_77FE:;
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xA8);
    if (!GET_FLAG_C()) { ClearEntityStatus_15(); return; };
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) { ClearEntityStatus_15(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { jr_015_77BA(); return; };
    return;
}

void Unknown057SpriteVariants(void) {
  Unknown057SpriteVariants_variant0:;
    /* data: db $7C, $01 */;
    /* data: db $7E, $01 */;
  Unknown057SpriteVariants_variant1:;
    /* data: db $7E, $21 */;
    /* data: db $7C, $21 */;
    Data_015_781B(); return;
}

void Data_015_781B(void) {
    /* data: db $00, $0C */;
}

void Data_015_781D(void) {
    /* data: db $10, $0C, $00, $F4, $F0, $F4, $00, $0C */;
}

void label_015_7825(void) {
    gb.regs.de = 0x773A;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    ApplyRecoilIfNeeded_15();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_15();
    AddEntityZSpeedToPos_15();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto label_015_7825_ret_788C;
    gb_write(gb.regs.hl, gb.regs.b);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x781D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x781B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { ClearEntityStatus_15(); return; };
    gb.regs.a = 9;
    gb_write(0xFFF2, gb.regs.a);
  label_015_7825_ret_788C:;
    return;
}

void WitchRatSpriteVariants(void) {
  WitchRatSpriteVariants_variant0:;
    /* data: db $50, $03 */;
    /* data: db $52, $03 */;
  WitchRatSpriteVariants_variant1:;
    /* data: db $54, $03 */;
    /* data: db $56, $03 */;
  WitchRatSpriteVariants_variant2:;
    /* data: db $52, $23 */;
    /* data: db $50, $23 */;
  WitchRatSpriteVariants_variant3:;
    /* data: db $56, $23 */;
    /* data: db $54, $23 */;
    WitchRatEntityHandler(); return;
}

void WitchRatEntityHandler(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WitchRatEntityHandler_jr_78AB;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xFFF1, gb.regs.a);
  WitchRatEntityHandler_jr_78AB:;
    gb.regs.de = 0x77BC;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_15();
    AddEntityZSpeedToPos_15();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto WitchRatEntityHandler_jr_78CF;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  WitchRatEntityHandler_jr_78CF:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_78DE(); return;
        case 0x01: func_015_792E(); return;
    }
}

void Data_015_78D6(void) {
    /* data: db $02, $08, $0C, $08, $FE, $F8, $F4, $F8 */;
}

void func_015_78DE(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_78DE_jr_791A;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x78D6;
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
    gb.regs.hl = 0x78D6;
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
    IncrementEntityState(); return;
  func_015_78DE_jr_791A:;
    gb.regs.a = 1;
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto func_015_78DE_ret_792D;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
  func_015_78DE_ret_792D:;
    return;
}

void func_015_792E(void) {
    UpdateEntityPosWithSpeed_15();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_015_7950(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_792E_jr_7945;
    gb_write(gb.regs.hl, 0x48);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  func_015_792E_jr_7945:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_015_7950(); return;
}

void jr_015_7950(void) {
    gb.regs.a = 0;
    SetEntitySpriteVariant(); return;
}

void Data_015_7955(void) {
    /* data: db $00, $08, $10, $18, $20, $28, $30, $38 */;
}

void func_015_795D(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, -241);
    func_015_7964(); return;
}

void func_015_7964(void) {
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_C()) goto func_015_7964_overflowEnd;
    gb.regs.a = alu_sub8(gb.regs.a, 0x60);
  func_015_7964_overflowEnd:;
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = gb_read(0xC3C1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xC3C1, gb.regs.a);
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_C()) goto func_015_7964_return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.hl = 0xC123;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x7955;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC3C0, gb.regs.a);
  func_015_7964_return:;
    return;
}

void func_015_7995(void) {
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_015_79DF(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_015_7A27(); return; };
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    gb.regs.de = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x26;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 1;
    func_015_7964(); return;
}

void label_015_79DF(void) {
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { func_015_79F0(); return; };
    gb.regs.hl = 0xFFEC;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    func_015_79F0();
    CopyEntityPositionToActivePosition(); return;
}

void func_015_79F0(void) {
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    gb.regs.de = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_015_79F0_jr_7A04;
    gb.regs.e = 0x10;
  func_015_79F0_jr_7A04:;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 2;
    func_015_7964(); return;
}

void label_015_7A27(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb.regs.b;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto label_015_7A27_jr_7A40;
    gb.regs.a = gb.regs.e;
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    gb.regs.c = gb.regs.a;
  label_015_7A27_jr_7A40:;
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    gb.regs.de = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 7);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.c;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.a = 2;
    func_015_7964(); return;
    return;
}

void PushLinkOutOfEntity_15(void) {
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) { jr_015_7A9A(); return; };
    CopyLinkFinalPositionToPosition();
    gb.regs.a = gb_read(0xC1A6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PushLinkOutOfEntity_15_jr_7A8D;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC39F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto PushLinkOutOfEntity_15_jr_7A8D;
    gb.regs.hl = 0xC28F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
  PushLinkOutOfEntity_15_jr_7A8D:;
    gb.regs.a = gb_read(0xC14A);
    gb.regs.e = gb.regs.a;
    ResetPegasusBoots();
    ClearLinkPositionIncrement();
    gb.regs.a = gb.regs.e;
    alu_scf();
    return;
}

void jr_015_7A9A(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void EntityVariantForDirection_15(void) {
  EntityVariantForDirection_15_right:;
    /* data: db 6 */;
  EntityVariantForDirection_15_left:;
    /* data: db 4 */;
  EntityVariantForDirection_15_up:;
    /* data: db 2 */;
  EntityVariantForDirection_15_down:;
    /* data: db 0 */;
    SetEntityVariantForDirection_15(); return;
}

void SetEntityVariantForDirection_15(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x79D8;
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

void ShouldLinkTalkToEntity_15(void) {
    gb.regs.e = gb.regs.b;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_C()) goto ShouldLinkTalkToEntity_15_jr_7B0B;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto ShouldLinkTalkToEntity_15_jr_7B0B;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb_push16(gb.regs.de);
    GetEntityDirectionToLink_15();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    gb.regs.de = gb_pop16();
    if (!GET_FLAG_Z()) goto ShouldLinkTalkToEntity_15_jr_7B0B;
    gb.regs.hl = 0xC1AD;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC134;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xDEAD;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ShouldLinkTalkToEntity_15_jr_7B0B;
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto ShouldLinkTalkToEntity_15_jr_7B0B;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto ShouldLinkTalkToEntity_15_jr_7B0B;
    alu_scf();
    return;
  ShouldLinkTalkToEntity_15_jr_7B0B:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void ReturnIfNonInteractive_15(void) {
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_15_skip;
  ReturnIfNonInteractive_15_allowInactiveEntity:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_15_skip;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_15_creditsEnd;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_15_skip;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_15_skip;
  ReturnIfNonInteractive_15_creditsEnd:;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_15_skip;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_15_return;
  ReturnIfNonInteractive_15_skip:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ReturnIfNonInteractive_15_return:;
    return;
}

void ApplyRecoilIfNeeded_15(void) {
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyRecoilIfNeeded_15_return;
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
    UpdateEntityPosWithSpeed_15();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto ApplyRecoilIfNeeded_15_restoreOriginalSpeed;
    ApplyEntityInteractionWithBackground_trampoline();
  ApplyRecoilIfNeeded_15_restoreOriginalSpeed:;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ApplyRecoilIfNeeded_15_return:;
    return;
}

void UpdateEntityPosWithSpeed_15(void) {
    AddEntitySpeedToPos_15();
    UpdateEntityYPosWithSpeed_15(); return;
}

void UpdateEntityYPosWithSpeed_15(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.c = gb.regs.a;
    AddEntitySpeedToPos_15();
    gb.regs.bc = gb_pop16();
    return;
}

void AddEntitySpeedToPos_15(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_15_return;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC260;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC200;
  AddEntitySpeedToPos_15_updatePosition:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_15_positive;
    gb.regs.e = 0xF0;
  AddEntitySpeedToPos_15_positive:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  AddEntitySpeedToPos_15_return:;
    return;
}

void AddEntityZSpeedToPos_15(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { AddEntitySpeedToPos_15_return(); return; };
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC330;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC310;
    AddEntitySpeedToPos_15_updatePosition(); return;
}

void GetEntityXDistanceToLink_15(void) {
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityXDistanceToLink_15_positive;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityXDistanceToLink_15_positive:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityRealYDistanceToLink_15(void) {
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto GetEntityRealYDistanceToLink_15_negative;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityRealYDistanceToLink_15_negative:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityVisualYDistanceToLink_15(void) {
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto GetEntityVisualYDistanceToLink_15_negative;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityVisualYDistanceToLink_15_negative:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityDirectionToLink_15(void) {
    GetEntityXDistanceToLink_15();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_15_positiveX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_15_positiveX:;
    gb_push16(gb.regs.af);
    GetEntityRealYDistanceToLink_15();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_15_positiveY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_15_positiveY:;
    gb.regs.de = gb_pop16();
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto GetEntityDirectionToLink_15_vertical;
    gb.regs.a = gb_read(0xFFD7);
    goto GetEntityDirectionToLink_15_verticalEnd;
  GetEntityDirectionToLink_15_vertical:;
    gb.regs.a = gb_read(0xFFD8);
  GetEntityDirectionToLink_15_verticalEnd:;
    gb.regs.e = gb.regs.a;
    return;
}

void ClearEntityStatus_15(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void label_015_7C37(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_015_7C43(); return;
        case 0x01: func_015_7C54(); return;
        case 0x02: func_015_7C63(); return;
    }
}

void func_015_7C43(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    label_015_7C4E(); return;
}

void label_015_7C4E(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void func_015_7C54(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0xC0);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    label_015_7C4E(); return;
}

void func_015_7C63(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_7C63_jr_7C6E;
    PlayBombExplosionSfx();
    DidKillEnemy(); return;
  func_015_7C63_jr_7C6E:;
    label_015_7C71(); return;
}

void label_015_7C71(void) {
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
    label_015_7C91(); return;
}

void label_015_7C91(void) {
    ReturnIfNonInteractive_15_allowInactiveEntity();
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
    if (GET_FLAG_Z()) goto label_015_7C91_jr_7CC6;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF0);
    jr_015_7CD2(); return;
  label_015_7C91_jr_7CC6:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    jr_015_7CD2(); return;
}

void jr_015_7CD2(void) {
    ClearEntityStatus_15();
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x1A);
    return;
}

void func_015_7CDB(void) {
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto func_015_7CDB_jr_7CF0;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto func_015_7CDB_jr_7CF0;
    gb.regs.d = alu_inc8(gb.regs.d);
  func_015_7CDB_jr_7CF0:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    return;
}

void DreamShrineBedEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_7D01(); return;
        case 0x01: func_015_7D78(); return;
        case 0x02: func_015_7E31(); return;
    }
}

void func_015_7D01(void) {
    GetEntityXDistanceToLink_15();
    gb.regs.a = alu_add8(gb.regs.a, 0x0E);
    alu_cp8(gb.regs.a, 0x1C);
    if (!GET_FLAG_C()) goto func_015_7D01_ret_7D4F;
    GetEntityRealYDistanceToLink_15();
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto func_015_7D01_ret_7D4F;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_015_7D01_ret_7D4F;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_015_7D01_ret_7D4F;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    gb.regs.a = 1;
    gb_write(0xFFA2, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = 0x12;
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC10A, gb.regs.a);
    gb.regs.a = 0x1E;
    gb_write(0xD368, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
  func_015_7D01_ret_7D4F:;
    return;
}

void Unknown061SpriteVariants(void) {
  Unknown061SpriteVariants_variant0:;
    /* data: db $50, $07 */;
    /* data: db $52, $07 */;
  Unknown061SpriteVariants_variant1:;
    /* data: db $54, $00 */;
    /* data: db $56, $00 */;
    Unknown059SpriteVariants(); return;
}

void Unknown059SpriteVariants(void) {
  Unknown059SpriteVariants_variant0:;
    /* data: db $50, $07 */;
    /* data: db $52, $07 */;
  Unknown059SpriteVariants_variant1:;
    /* data: db $54, $02 */;
    /* data: db $56, $02 */;
    Unknown060SpriteVariants(); return;
}

void Unknown060SpriteVariants(void) {
  Unknown060SpriteVariants_variant0:;
    /* data: db $50, $07 */;
    /* data: db $52, $07 */;
  Unknown060SpriteVariants_variant1:;
    /* data: db $54, $03 */;
    /* data: db $56, $03 */;
    Data_015_7D68(); return;
}

void Data_015_7D68(void) {
    /* data: db $00, $00, $5E, $06, $00, $08, $5E, $26 */;
}

void Data_015_7D70(void) {
    /* data: db $98, $42, $98, $50, $99, $90, $99, $82 */;
}

void func_015_7D78(void) {
    gb.regs.a = gb_read(0xC146);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_015_7D78_jr_7D94;
    gb.regs.a = 1;
    gb_write(0xC17F, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC180, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xC3CA, gb.regs.a);
    IncrementEntityState();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_015_7D78_jr_7D94:;
    gb_push16(gb.regs.af);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) { jr_015_7DEC(); return; };
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto func_015_7D78_jr_7DAF;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto func_015_7D78_jr_7DAF;
    gb.regs.a = 3;
    gb_write(0xC16C, gb.regs.a);
    gb_push16(gb.regs.bc);
    func_1A22();
    gb.regs.bc = gb_pop16();
  func_015_7D78_jr_7DAF:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_015_7DEC(); return; };
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_015_7DEC(); return; };
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7D70;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x64;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x65;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    jr_015_7DEC(); return;
}

void jr_015_7DEC(void) {
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto jr_015_7DEC_jr_7DF4;
    gb.regs.e = alu_inc8(gb.regs.e);
  jr_015_7DEC_jr_7DF4:;
    gb.regs.a = gb.regs.e;
    func_015_7DF5(); return;
}

void func_015_7DF5(void) {
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = 0x58;
    gb_write(0xFFEE, gb.regs.a);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x44;
    gb_write(0xFFEC, gb.regs.a);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.de = 0x7C84;
    gb.regs.a = gb_read(0xDCB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_015_7DF5_render;
    gb.regs.de = 0x7C8C;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_015_7DF5_render;
    gb.regs.de = 0x7C94;
  func_015_7DF5_render:;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_015_7DF5_jr_7E2E;
    gb.regs.hl = 0x7D68;
    gb.regs.c = 2;
    RenderActiveEntitySpritesRect();
  func_015_7DF5_jr_7E2E:;
    CopyEntityPositionToActivePosition(); return;
}

void func_015_7E31(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    func_015_7DF5();
    gb.regs.a = gb_read(0xC17F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.hl = 0xD401;
    gb.regs.a = 1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFF7);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xCE;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7C;
    gb_write(gb.regs.hl, gb.regs.a);
    ClearEntityStatus_15();
    disableMovementInTransition(); return;
}

void Data_015_7E55(void) {
    /* data: db $58, $00 */;
}

void Data_015_7E57(void) {
    /* data: db $58, $01 */;
}

void Data_015_7E59(void) {
    /* data: db $58, $02 */;
}

void Data_015_7E5B(void) {
    /* data: db $58, $03 */;
}

void Data_015_7E5D(void) {
    /* data: db $58, $01 */;
}

void Data_015_7E5F(void) {
    /* data: dw Data_015_7E55 */;
    /* data: dw Data_015_7E57 */;
    /* data: dw Data_015_7E59 */;
    /* data: dw Data_015_7E5B */;
    /* data: dw Data_015_7E59 */;
    /* data: dw Data_015_7E5B */;
    /* data: dw Data_015_7E55 */;
}

void BookSpriteVariants(void) {
    /* data: dw Data_015_7E5D */;
}

void Data_015_7E6F(void) {
    /* data: db $58, $00, $5A, $00, $5A, $20 */;
}

void BookEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BookEntityHandler_jr_7E82;
    gb.regs.de = 0x7D9B;
    RenderActiveEntitySpritesPair();
    jr_015_7EA6(); return;
  BookEntityHandler_jr_7E82:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_015_7EA0(); return; };
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0x7E5F;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB5);
    if (GET_FLAG_Z()) goto BookEntityHandler_jr_7E96;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  BookEntityHandler_jr_7E96:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.a;
    gb.regs.bc = gb_pop16();
    RenderActiveEntitySprite();
    jr_015_7EA6(); return;
}

void jr_015_7EA0(void) {
    gb.regs.de = 0x7E6F;
    RenderActiveEntitySprite();
    jr_015_7EA6(); return;
}

void jr_015_7EA6(void) {
    ReturnIfNonInteractive_15();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_015_7EB9(); return;
        case 0x01: func_015_7F04(); return;
    }
}

void Data_015_7EB0(void) {
    /* data: db $02, $04, $06, $00, $0A, $08, $0C, $0D, $2B */;
}

void func_015_7EB9(void) {
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto func_015_7EB9_jr_7EC4;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC5A2, gb.regs.a);
  func_015_7EB9_jr_7EC4:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    ShouldLinkTalkToEntity_15();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB5);
    if (!GET_FLAG_Z()) goto func_015_7EB9_jr_7ED6;
    gb.regs.e = 8;
    jr_015_7EF3(); return;
  func_015_7EB9_jr_7ED6:;
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) goto func_015_7EB9_jr_7EE9;
    gb.regs.e = alu_inc8(gb.regs.e);
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) goto func_015_7EB9_jr_7EE9;
    gb.regs.e = alu_inc8(gb.regs.e);
    alu_cp8(gb.regs.a, 0x70);
    if (GET_FLAG_C()) goto func_015_7EB9_jr_7EE9;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_015_7EB9_jr_7EE9:;
    gb.regs.a = gb_read(0xFFEF);
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) { jr_015_7EF3(); return; };
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    jr_015_7EF3(); return;
}

void jr_015_7EF3(void) {
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7EB0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    OpenDialogInTable2();
    IncrementEntityState(); return;
}

void func_015_7F04(void) {
    gb.regs.a = 1;
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_015_7F82(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) { jr_015_7F4F(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) { jr_015_7F4F(); return; };
    gb.regs.a = gb_read(0xDC27);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_015_7F4F(); return; };
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto func_015_7F04_jr_7F44;
    func_015_7CDB();
    GetRandomByte();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x18);
    gb_write(0xDC24, gb.regs.a);
  func_015_7F04_jr_7F44:;
    gb.regs.a = gb_read(0xDC24);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_add8(gb.regs.a, 0x17);
    gb.regs.e = gb.regs.a;
    jr_015_7F4F(); return;
}

void jr_015_7F4F(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xB5);
    if (GET_FLAG_Z()) { jr_015_7F72(); return; };
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) goto jr_015_7F4F_jr_7F6F;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 7;
    gb_write(0xDC3D, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC5A2, gb.regs.a);
    return;
  jr_015_7F4F_jr_7F6F:;
    OpenDialogInTable2(); return;
}

void jr_015_7F72(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xDC3D, gb.regs.a);
    return;
}

void jr_015_7F82(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void AnimalD1SpriteVariants(void) {
  AnimalD1SpriteVariants_variant0:;
    /* data: db $74, $03 */;
    /* data: db $76, $03 */;
  AnimalD1SpriteVariants_variant1:;
    /* data: db $70, $03 */;
    /* data: db $72, $03 */;
  AnimalD1SpriteVariants_variant2:;
    /* data: db $76, $23 */;
    /* data: db $74, $23 */;
  AnimalD1SpriteVariants_variant3:;
    /* data: db $72, $23 */;
    /* data: db $70, $23 */;
    AnimalD1EntityHandler(); return;
}

void AnimalD1EntityHandler(void) {
    gb.regs.a = gb_read(0xDC1C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ClearEntityStatus_15(); return; };
    gb.regs.de = 0x7EA1;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xC50F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) goto AnimalD1EntityHandler_jr_7FB5;
    gb.regs.e = 2;
  AnimalD1EntityHandler_jr_7FB5:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    SetEntitySpriteVariant();
    PushLinkOutOfEntity_15();
    ShouldLinkTalkToEntity_15();
    if (!GET_FLAG_C()) return;
    /* jp_open_dialog Dialog196 */;
}
