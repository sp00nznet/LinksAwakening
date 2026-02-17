/* Auto-generated from LADX Disassembly - Bank 0x07 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void PlayDoorUnlockedSfx(void);
void GetEntitySpeedYAddress(void);
void Bushcrawler2SpriteVariants(void);
void BushcrawlerOutdoorSpriteVariants(void);
void BushcrawlerIndoorSpriteVariants(void);
void BushCrawlerEntityHandler(void);
void Data_007_40CE(void);
void Data_007_40D2(void);
void BushCrawlerState0Handler(void);
void jr_007_4128(void);
void jr_007_415A(void);
void label_007_4198(void);
void ret_007_41B8(void);
void BushCrawlerState1Handler(void);
void jr_007_41BE(void);
void jr_007_41C8(void);
void Data_007_41E6(void);
void Data_007_41E8(void);
void label_007_41F0(void);
void Data_007_4234(void);
void FishermanUnderBridgeEntityHandler(void);
void jr_007_42DC(void);
void label_007_4328(void);
void func_007_4335(void);
void func_007_434E(void);
void func_007_4356(void);
void jr_007_436D(void);
void func_007_4373(void);
void func_007_4377(void);
void func_007_4382(void);
void func_007_438C(void);
void func_007_43AD(void);
void func_007_43C5(void);
void func_007_43FD(void);
void func_007_441A(void);
void func_007_4429(void);
void func_007_4454(void);
void func_007_4475(void);
void func_007_4499(void);
void func_007_44B0(void);
void func_007_44DC(void);
void func_007_44E8(void);
void func_007_4509(void);
void func_007_4537(void);
void func_007_458B(void);
void func_007_4594(void);
void Data_007_45A7(void);
void Data_007_45EF(void);
void label_007_45F7(void);
void ret_007_4666(void);
void Data_007_4667(void);
void func_007_467B(void);
void Mermaid1SpriteVariants(void);
void Mermaid2SpriteVariants(void);
void Data_007_469B(void);
void Data_007_46B3(void);
void MermaidEntityHandler(void);
void jr_007_46E4(void);
void jr_007_470B(void);
void jr_007_4727(void);
void func_007_4750(void);
void func_007_4759(void);
void func_007_47AE(void);
void func_007_47B1(void);
void func_007_47D9(void);
void func_007_47F5(void);
void func_007_480A(void);
void jr_007_4854(void);
void func_007_4867(void);
void func_007_488E(void);
void func_007_48B0(void);
void func_007_48CA(void);
void func_007_48FD(void);
void label_007_490F(void);
void func_007_492E(void);
void func_007_4945(void);
void func_007_4959(void);
void func_007_4982(void);
void Data_007_499C(void);
void func_007_49DC(void);
void Papahl1SpriteVariants(void);
void PapahlDirectionSpriteVariants(void);
void Papahl2SpriteVariants(void);
void Papahl4SpriteVariants(void);
void PapahlEntityHandler(void);
void jr_007_4A69(void);
void func_007_4AB3(void);
void jr_007_4AE5(void);
void jr_007_4AE9(void);
void func_007_4AF3(void);
void func_007_4B1C(void);
void func_007_4B44(void);
void func_007_4B50(void);
void func_007_4B5B(void);
void Data_007_4B6B(void);
void Data_007_4B8B(void);
void Data_007_4BAB(void);
void Bear1SpriteVariants(void);
void Bear2SpriteVariants(void);
void BearEntityHandler(void);
void func_007_4C16(void);
void func_007_4C43(void);
void func_007_4C49(void);
void ret_007_4C6F(void);
void func_007_4C70(void);
void BearOpenDialog(void);
void HoneycombSpriteVariants(void);
void HoneycombEntityHandler(void);
void func_007_4CCC(void);
void func_007_4CEE(void);
void func_007_4D1F(void);
void func_007_4D27(void);
void func_007_4D4D(void);
void func_007_4D4E(void);
void Data_007_4D80(void);
void label_007_4D84(void);
void Data_007_4D9F(void);
void Data_007_4DA1(void);
void Data_007_4DA3(void);
void func_007_4DA5(void);
void jr_007_4DEA(void);
void Data_007_4DF5(void);
void Data_007_4E0D(void);
void func_007_4E25(void);
void func_007_4E8C(void);
void TarinBeekeeperSpriteVariants(void);
void TarinBeekeeperEntityHandler(void);
void func_007_4EFF(void);
void func_007_4F1F(void);
void ret_007_4F4D(void);
void Unknown102SpriteVariants(void);
void func_007_4F56(void);
void func_007_4FC6(void);
void jr_007_501B(void);
void Data_007_5032(void);
void Data_007_5036(void);
void Data_007_503A(void);
void Data_007_503D(void);
void Data_007_504A(void);
void func_007_504E(void);
void jr_007_506E(void);
void jr_007_509A(void);
void func_007_50B4(void);
void label_007_50DF(void);
void func_007_50E3(void);
void HoleFillerSpriteVariants(void);
void HoleFillerEntityHandler(void);
void HoleFillerDirectionToXSpeedTable(void);
void HoleFillerDirectionToYSpeedTable(void);
void HoleFillerIdleState(void);
void Data_007_5174(void);
void Data_007_5178(void);
void HoleFillerMovingState(void);
void jr_007_5198(void);
void jr_007_519F(void);
void jr_007_51AA(void);
void HorizontalLungeDirections(void);
void VerticalLungeDirections(void);
void PincerGetLungeDirection(void);
void PincerEntityHandler(void);
void PincerState0Handler(void);
void PincerState1Handler(void);
void PincerState2Handler(void);
void PincerState3Handler(void);
void PincerState4Handler(void);
void PincerState5Handler(void);
void PincerSpriteVariants(void);
void RenderPincer(void);
void TradingItemDialogs(void);
void TradingItem1SpriteVariants(void);
void TradingItem2SpriteVariants(void);
void TradingItem3SpriteVariants(void);
void TradingItemEntityHandler(void);
void jr_007_55BA(void);
void func_007_560D(void);
void Data_007_5625(void);
void Data_007_5629(void);
void WingedOctorokSpriteVariants(void);
void WingedOctorokEntityHandler(void);
void jr_007_56BD(void);
void jr_007_56E0(void);
void jr_007_56FF(void);
void jr_007_571E(void);
void label_007_5721(void);
void jr_007_5757(void);
void jr_007_5777(void);
void label_007_577A(void);
void Data_007_57A0(void);
void Data_007_57A4(void);
void Data_007_57A8(void);
void Data_007_57AC(void);
void func_007_57B0(void);
void Data_007_57F5(void);
void func_007_5805(void);
void KikiTheMonkey2SpriteVariants(void);
void KikiTheMonkey1SpriteVariants(void);
void KikiTheMonkeyEntityHandler(void);
void func_007_58A8(void);
void KikiOpenDialog(void);
void jr_007_58DE(void);
void func_007_58FA(void);
void func_007_591A(void);
void func_007_5934(void);
void KikiTheMonkey3SpriteVariants(void);
void func_007_5951(void);
void Data_007_5978(void);
void Data_007_597F(void);
void Data_007_5986(void);
void Data_007_598D(void);
void Data_007_5994(void);
void func_007_5997(void);
void jr_007_59C8(void);
void jr_007_5A2A(void);
void func_007_5AAC(void);
void jr_007_5ADE(void);
void func_007_5B08(void);
void jr_007_5B19(void);
void func_007_5B25(void);
void jr_007_5B64(void);
void func_007_5B69(void);
void jr_007_5BCA(void);
void func_007_5BD9(void);
void func_007_5BF0(void);
void BlooperSpriteVariants(void);
void BlooperEntityHandler(void);
void BlooperState0Handler(void);
void BlooperSpeedXPerDirection(void);
void BlooperState1Handler(void);
void RenderSmashablePillar(void);
void SmashablePillarSpriteVariants(void);
void SmashablePillarEntityHandler(void);
void SmashablePillarState0Handler(void);
void SmashablePillarState1Handler(void);
void SmashablePillarShakeScreen(void);
void SmashablePillarState2Handler(void);
void SmashablePillarDestroyed(void);
void SmashablePillarState3Handler(void);
void func_007_5EEA(void);
void SmashablePillarState4Handler(void);
void Data_007_5F09(void);
void SmashablePillarState5Handler(void);
void SmashablePillarDustSpriteVariants(void);
void SmashablePillarDustHandler(void);
void SmashablePillarSpawnDebris(void);
void SmashablePillarDebrisSpriteVariants(void);
void SmashablePillarDebrisZSpeeds(void);
void SmashablePillarDebrisXSpeeds(void);
void SmashablePillarDebrisYSpeeds(void);
void SmashablePillarDebrisHandler(void);
void WreckingBallSprite(void);
void WreckingBallEntityHandler(void);
void notLifted(void);
void WreckingBallState0Handler(void);
void WreckingBallState1Handler(void);
void WreckingBallState2Handler(void);
void WreckingBallHandlePillarCollision(void);
void SideViewWeightsSpriteVariants(void);
void SideViewWeightsEntityHandler(void);
void jr_007_620E(void);
void jr_007_6248(void);
void jr_007_6256(void);
void jr_007_625F(void);
void ret_007_62D1(void);
void jr_007_62D2(void);
void func_007_631C(void);
void jr_007_6327(void);
void ret_007_6347(void);
void Data_007_6348(void);
void SideViewPlatformHorizontalEntityHandler(void);
void SideViewPlatformVerticalEntityHandler(void);
void func_007_639E(void);
void Data_007_63F7(void);
void Data_007_63F9(void);
void label_007_63FB(void);
void Data_007_6422(void);
void SideViewPlatformEntityHandler(void);
void ret_007_6488(void);
void jr_007_6489(void);
void Data_007_6493(void);
void Data_007_64F6(void);
void label_007_6523(void);
void jr_007_6596(void);
void jr_007_659D(void);
void jr_007_65CB(void);
void GoombaSpriteVariants(void);
void GoombaEntityHandler(void);
void Data_007_65FE(void);
void Data_007_6602(void);
void func_007_6606(void);
void jr_007_6630(void);
void jr_007_6647(void);
void func_007_6649(void);
void label_007_6660(void);
void func_007_666B(void);
void label_007_6693(void);
void func_007_66A6(void);
void func_007_66B8(void);
void func_007_66F2(void);
void func_007_66FE(void);
void PeaHatSpriteVariants(void);
void PeaHatEntityHandler(void);
void PeaHatRestingHandler(void);
void PeaHatTakingOffHandler(void);
void AnimatePeaHat(void);
void PeaHatYSpeeds(void);
void PeaHatXSpeeds(void);
void PeaHatFlyingHandler(void);
void SnakeSpriteVariants(void);
void SnakeEntityHandler(void);
void SnakeXSpeeds(void);
void SnakeYSpeeds(void);
void SnakeDirections(void);
void SnakeState0Handler(void);
void SnakeState1Handler(void);
void AnimateSnake(void);
void SnakeStartDashIfNeeded(void);
void SnakeState2Handler(void);
void Data_007_6942(void);
void Data_007_695B(void);
void Data_007_695F(void);
void label_007_696A(void);
void func_007_697F(void);
void func_007_698A(void);
void func_007_6996(void);
void func_007_69A2(void);
void label_007_69D0(void);
void label_007_6A34(void);
void MasterStalfosEntityHandler(void);
void jr_007_6A89(void);
void func_007_6ADF(void);
void func_007_6AF5(void);
void jr_007_6B08(void);
void ret_007_6B15(void);
void func_007_6B16(void);
void jr_007_6B33(void);
void jr_007_6B42(void);
void jr_007_6B45(void);
void func_007_6B68(void);
void func_007_6B7D(void);
void func_007_6BA3(void);
void func_007_6BC8(void);
void label_007_6BDF(void);
void func_007_6BE7(void);
void func_007_6BF4(void);
void func_007_6C33(void);
void func_007_6C39(void);
void func_007_6C3E(void);
void jr_007_6C55(void);
void jr_007_6C9E(void);
void jr_007_6CB8(void);
void jr_007_6CFE(void);
void func_007_6D18(void);
void jr_007_6D46(void);
void func_007_6D5F(void);
void jr_007_6D70(void);
void func_007_6D7F(void);
void func_007_6D9F(void);
void jr_007_6DB8(void);
void jr_007_6DC7(void);
void func_007_6DD9(void);
void func_007_6DF6(void);
void jr_007_6E35(void);
void jr_007_6E48(void);
void ret_007_6E57(void);
void func_007_6E58(void);
void jr_007_6E6A(void);
void func_007_6E7F(void);
void jr_007_6E9A(void);
void ret_007_6EA1(void);
void func_007_6EA2(void);
void func_007_6ED0(void);
void func_007_6EF0(void);
void Unknown041SpriteVariants(void);
void Data_007_6F19(void);
void Data_007_6F39(void);
void Data_007_6F59(void);
void Data_007_6F79(void);
void Data_007_6F8D(void);
void Data_007_6FA1(void);
void func_007_6FB1(void);
void func_007_6FE6(void);
void func_007_7015(void);
void label_007_7034(void);
void func_007_703A(void);
void func_007_706F(void);
void func_007_7090(void);
void func_007_70B7(void);
void ret_007_7111(void);
void Data_007_7112(void);
void FireballShooterEntityHandler(void);
void jr_007_713E(void);
void jr_007_7168(void);
void ret_007_7197(void);
void KanaletBombableWallEntityHandler(void);
void func_007_7233(void);
void ret_007_7246(void);
void StarSpriteVariants(void);
void StarEntityHandler(void);
void HidingZol2SpriteVariants(void);
void HidingZol1SpriteVariants(void);
void HidingZolEntityHandler(void);
void jr_007_72C3(void);
void func_007_72F4(void);
void ret_007_731F(void);
void func_007_7320(void);
void func_007_733F(void);
void jr_007_7344(void);
void func_007_7350(void);
void func_007_735C(void);
void func_007_737C(void);
void func_007_73A0(void);
void func_007_73D7(void);
void func_007_73F7(void);
void FlyingTilesEntityHandler(void);
void func_007_7410(void);
void Data_007_741F(void);
void Data_007_749F(void);
void func_007_74A8(void);
void ret_007_752C(void);
void WaterTektiteSpriteVariants(void);
void WaterTektiteEntityHandler(void);
void func_007_7576(void);
void func_007_7597(void);
void ret_007_75B6(void);
void func_007_75B7(void);
void func_007_75D6(void);
void ret_007_75DD(void);
void HorsePieceSpriteVariants(void);
void HorsePieceEntityHandler(void);
void HorsePieceStateInit(void);
void HorsePieceRandomBounceX(void);
void HorsePieceRandomBounceY(void);
void HorsePieceRandomVariant(void);
void HorsePieceStateThrowing(void);
void HorsePieceStateWaitingForOther(void);
void HorsePieceStateFinished(void);
void HorsePieceCheckForPickup(void);
void SpikedBeetle1SpriteVariants(void);
void SpikedBeetle2SpriteVariants(void);
void SpikedBeetleEntityHandler(void);
void SpikedBeetleWalkingXSpeeds(void);
void SpikedBeetleWalkingYSpeeds(void);
void SpikedBeetleRestingHandler(void);
void SpikedBeetleWalkingHandler(void);
void SpikedBeetleNotFlipped(void);
void SpikedBeetleDashingXSpeeds(void);
void SpikedBeetleDashingYSpeeds(void);
void SpikedBeetleDashingHandler(void);
void SpikedBeetleWalk(void);
void SpikedBeetleFlippedHandler(void);
void Data_007_793D(void);
void MoblinSwordEntityHandler(void);
void jr_007_7966(void);
void Data_007_7978(void);
void Data_007_797C(void);
void func_007_7980(void);
void func_007_7996(void);
void ret_007_79B3(void);
void func_007_79B4(void);
void func_007_79D2(void);
void ret_007_79D6(void);
void func_007_79D7(void);
void jr_007_7A1E(void);
void Data_007_7A29(void);
void func_007_7A2D(void);
void func_007_7A55(void);
void ret_007_7A6C(void);
void Data_007_7A6D(void);
void Data_007_7A75(void);
void Data_007_7A7D(void);
void Data_007_7A85(void);
void Data_007_7A8D(void);
void Unknown042SpriteVariants(void);
void func_007_7AB5(void);
void jr_007_7AD1(void);
void func_007_7B30(void);
void ChestItemSpriteTableAlt(void);
void ChestItemSpriteTable(void);
void GotItemDialog(void);
void Data_007_7BBB(void);
void ChestWithItemEntityHandler(void);
void notZolChest(void);
void UseAltChestSprite(void);
void jr_007_7C58(void);
void jr_007_7C5B(void);
void jr_007_7C5E(void);
void jr_007_7C93(void);
void jr_007_7CE6(void);
void jr_007_7CE9(void);
void jr_007_7CEA(void);
void PushLinkOutOfEntity_07(void);
void EntityVariantForDirection_07(void);
void SetEntityVariantForDirection_07(void);
void func_007_7D36(void);
void func_007_7D43(void);
void jr_007_7D4E(void);
void jr_007_7D94(void);
void ReturnIfNonInteractive_07(void);
void ApplyRecoilIfNeeded_07(void);
void UpdateEntityPosWithSpeed_07(void);
void AddEntitySpeedToPos_07(void);
void AddEntityZSpeedToPos_07(void);
void GetEntityXDistanceToLink_07(void);
void GetEntityYDistanceToLink_07(void);
void GetEntityDirectionToLink_07(void);
void ClearEntityStatus_07(void);
void label_007_7EAA(void);
void func_007_7EB6(void);
void label_007_7EC1(void);
void func_007_7EC7(void);
void func_007_7ED6(void);
void jr_007_7F13(void);
void label_007_7F16(void);
void label_007_7F36(void);
void jr_007_7F76(void);

void PlayDoorUnlockedSfx(void) {
    gb.regs.a = 4;
    gb_write(0xFFF4, gb.regs.a);
    return;
}

void GetEntitySpeedYAddress(void) {
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    return;
}

void Bushcrawler2SpriteVariants(void) {
  Bushcrawler2SpriteVariants_variant0:;
    /* data: db $7C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  Bushcrawler2SpriteVariants_variant1:;
    /* data: db $7E, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $7C, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void BushcrawlerOutdoorSpriteVariants(void) {
  BushcrawlerOutdoorSpriteVariants_variant0:;
    /* data: db $F4, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $F6, OAM_GBC_PAL_6 | OAMF_PAL1 */;
  BushcrawlerOutdoorSpriteVariants_variant1:;
    /* data: db $F0, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $F2, OAM_GBC_PAL_7 | OAMF_PAL1 */;
}

void BushcrawlerIndoorSpriteVariants(void) {
  BushcrawlerIndoorSpriteVariants_variant0:;
    /* data: db $F4, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $F6, OAM_GBC_PAL_6 | OAMF_PAL1 */;
  BushcrawlerIndoorSpriteVariants_variant1:;
    /* data: db $F0, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $F2, OAM_GBC_PAL_6 | OAMF_PAL1 */;
}

void BushCrawlerEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_007_41F0(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BushCrawlerEntityHandler_jr_4053;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFEE);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  BushCrawlerEntityHandler_jr_4053:;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x4011;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BushCrawlerEntityHandler_render;
    gb.regs.de = 0x4019;
  BushCrawlerEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BushCrawlerEntityHandler_jr_408A;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x4009;
    RenderActiveEntitySpritesPair();
  BushCrawlerEntityHandler_jr_408A:;
    ReturnIfNonInteractive_07();
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BushCrawlerEntityHandler_jr_40C1;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 5);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x1F);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
    label_007_4198(); return;
  BushCrawlerEntityHandler_jr_40C1:;
    DecrementEntityIgnoreHitsCountdown();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: BushCrawlerState0Handler(); return;
        case 0x01: BushCrawlerState1Handler(); return;
    }
}

void Data_007_40CE(void) {
    /* data: db $10, $F0, $00, $00 */;
}

void Data_007_40D2(void) {
    /* data: db $00, $00, $F0, $10 */;
}

void BushCrawlerState0Handler(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_4128(); return; };
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) goto BushCrawlerState0Handler_jr_40F9;
    gb_push16(gb.regs.de);
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.de = gb_pop16();
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) { jr_007_4128(); return; };
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_007_4128(); return; };
  BushCrawlerState0Handler_jr_40F9:;
    IncrementEntityState();
    GetEntityDirectionToLink_07();
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x40CE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x40D2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(2, gb_read(gb.regs.hl)));
    ConfigureEntityHitbox();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    return;
}

void jr_007_4128(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(2, gb_read(gb.regs.hl)));
    ConfigureEntityHitbox();
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto jr_007_4128_checkAButtonSlot;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_007_415A(); return; };
    return;
  jr_007_4128_checkAButtonSlot:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { ret_007_41B8(); return; };
}

void jr_007_415A(void) {
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC3CF, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 7);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC490;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFF9E);
    gb_write(0xC15D, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    SetEntitySpriteVariant();
}

void label_007_4198(void) {
    gb.regs.a = 0xBB;
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
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
}

void ret_007_41B8(void) {
    return;
}

void BushCrawlerState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_41C8(); return; };
}

void jr_007_41BE(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void jr_007_41C8(void) {
    UpdateEntityPosWithSpeed_07();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_007_41BE(); return; };
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void Data_007_41E6(void) {
    /* data: db $F0, $F4 */;
}

void Data_007_41E8(void) {
    /* data: db $00, $0C, $10, $0C, $00, $F4, $F0, $F4 */;
}

void label_007_41F0(void) {
    gb.regs.de = 0x4009;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    ApplyRecoilIfNeeded_07();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_07();
    ApplyEntityInteractionWithBackground_trampoline();
    DefaultEnemyDamageCollisionHandler_trampoline();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto label_007_41F0_ret_4233;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x41E8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x41E6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
  label_007_41F0_ret_4233:;
    return;
}

void Data_007_4234(void) {
    /* data: db $00, $F0, $78, $01, $00, $F8, $7A, $01, $00, $00, $70, $01, $00, $08, $72, $01 */;
    /* data: db $00, $F0, $7C, $01, $00, $F8, $7E, $01, $00, $00, $70, $01, $00, $08, $72, $01 */;
    /* data: db $00, $F0, $78, $01, $00, $F8, $7A, $01, $00, $00, $74, $01, $00, $08, $76, $01 */;
    /* data: db $FC, $F0, $64, $01, $FC, $F8, $66, $01, $00, $00, $60, $01, $00, $08, $62, $01 */;
    /* data: db $FC, $F0, $64, $01, $FC, $F8, $66, $01, $00, $00, $74, $01, $00, $08, $76, $01 */;
}

void FishermanUnderBridgeEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_007_45F7(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto FishermanUnderBridgeEntityHandler_jr_42C4;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0xB8;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 6);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xAC);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    ConfigureEntityHitbox();
    gb.regs.bc = gb_pop16();
  FishermanUnderBridgeEntityHandler_jr_42C4:;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) { jr_007_42DC(); return; };
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_42DC(); return; };
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 3);
    gb.regs.a = 2;
    if (!GET_FLAG_Z()) goto FishermanUnderBridgeEntityHandler_jr_42DA;
    gb.regs.a = 4;
  FishermanUnderBridgeEntityHandler_jr_42DA:;
    gb_write(0xFFF1, gb.regs.a);
}

void jr_007_42DC(void) {
    func_007_4594();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto jr_007_42DC_jr_42E8;
    func_007_43FD();
  jr_007_42DC_jr_42E8:;
    ReturnIfNonInteractive_07();
    gb.regs.a = gb_read(0xDCB4);
    alu_bit(0, gb.regs.a);
    if (GET_FLAG_Z()) { label_007_4328(); return; };
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) { label_007_4328(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_C()) { label_007_4328(); return; };
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) goto jr_007_42DC_jr_4309;
    func_007_434E();
  jr_007_42DC_jr_4309:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_4335(); return;
        case 0x01: func_007_4356(); return;
        case 0x02: func_007_4373(); return;
        case 0x03: func_007_4377(); return;
        case 0x04: func_007_4382(); return;
        case 0x05: func_007_438C(); return;
        case 0x06: func_007_4509(); return;
        case 0x07: func_007_43AD(); return;
        case 0x08: func_007_43C5(); return;
        case 0x09: func_007_441A(); return;
        case 0x0A: func_007_4454(); return;
        case 0x0B: func_007_4454(); return;
        case 0x0C: func_007_4475(); return;
        case 0x0D: func_007_4499(); return;
    }
}

void label_007_4328(void) {
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_44B0(); return;
        case 0x01: func_007_44E8(); return;
        case 0x02: func_007_4509(); return;
        case 0x03: func_007_4537(); return;
        case 0x04: func_007_458B(); return;
    }
}

void func_007_4335(void) {
    gb.regs.hl = 0xC3A0;
  func_007_4335_loop_4338:;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 0xFA);
    if (GET_FLAG_Z()) goto func_007_4335_jr_4342;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto func_007_4335_loop_4338;
  func_007_4335_jr_4342:;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void func_007_434E(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    return;
}

void func_007_4356(void) {
    func_007_7D43();
    if (!GET_FLAG_C()) { func_007_44DC(); return; };
    gb.regs.a = gb_read(0xFF9D);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) { func_007_44DC(); return; };
    func_007_434E();
    gb.regs.a = 2;
    SetEntitySpriteVariant();
    /* ld_dialog_low a, Dialog125 */;
}

void jr_007_436D(void) {
    OpenDialogInTable1();
    IncrementEntityState(); return;
}

void func_007_4373(void) {
    /* ld_dialog_low a, Dialog1E9 */;
    jr_007_436D(); return;
}

void func_007_4377(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
    func_007_44DC(); return;
}

void func_007_4382(void) {
    func_007_44DC();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    IncrementEntityState(); return;
}

void func_007_438C(void) {
    func_007_44DC();
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x2A);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 8;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState(); return;
}

void func_007_43AD(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) return;
    IncrementEntityState(); return;
}

void func_007_43C5(void) {
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_007_43C5_jr_43D7;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_007_43C5_jr_43D7:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_C()) return;
    /* call_open_dialog Dialog124 */;
    gb.regs.a = 4;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState(); return;
}

void func_007_43FD(void) {
    gb_push16(gb.regs.bc);
    gb.regs.bc = 0xC010;
    gb.regs.a = gb_read(0xFF99);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 6;
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.h = 0xF0;
    gb.regs.l = 0xFC;
    func_1819();
    gb.regs.bc = gb_pop16();
    gb.regs.a = 0x6C;
    gb_write(0xFF9D, gb.regs.a);
    return;
}

void func_007_441A(void) {
    gb.regs.a = 4;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { func_007_4429(); return; };
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
}

void func_007_4429(void) {
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_C()) goto func_007_4429_jr_4436;
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) return;
  func_007_4429_jr_4436:;
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 0;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x1A);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void func_007_4454(void) {
    func_007_4429();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = 4;
    SetEntitySpriteVariant();
    IncrementEntityState();
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF8);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, 0xF8);
    return;
}

void func_007_4475(void) {
    func_007_4429();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x4C);
    if (GET_FLAG_C()) goto func_007_4475_jr_4491;
    func_007_48FD();
    /* call_open_dialog Dialog117 */;
    gb.regs.a = 4;
    SetEntitySpriteVariant();
    IncrementEntityState(); return;
  func_007_4475_jr_4491:;
    UpdateEntityPosWithSpeed_07();
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void func_007_4499(void) {
    func_007_4429();
    gb.regs.a = 0x40;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = 0x16;
    gb_write(0xDC3D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    return;
}

void func_007_44B0(void) {
    func_007_7D43();
    if (!GET_FLAG_C()) { func_007_44DC(); return; };
    gb.regs.a = gb_read(0xFF9D);
    alu_cp8(gb.regs.a, 0x58);
    if (GET_FLAG_C()) goto func_007_44B0_jr_44BF;
    alu_cp8(gb.regs.a, 0x5E);
    if (GET_FLAG_C()) { func_007_44DC(); return; };
  func_007_44B0_jr_44BF:;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto func_007_44B0_jr_44CE;
    /* call_open_dialog Dialog1E8 */;
    IncrementEntityState(); return;
  func_007_44B0_jr_44CE:;
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) goto func_007_44B0_jr_44D7;
    /* jp_open_dialog Dialog1E7 */;
  func_007_44B0_jr_44D7:;
    /* jp_open_dialog Dialog1ED */;
}

void func_007_44DC(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    gb.regs.e = gb.regs.b;
    if (GET_FLAG_Z()) goto func_007_44DC_jr_44E4;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_007_44DC_jr_44E4:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void func_007_44E8(void) {
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_44E8_jr_4503;
    gb.regs.a = 1;
    gb_write(0xDC27, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xD0);
    /* jp_open_dialog Dialog1E9 */;
  func_007_44E8_jr_4503:;
    gb_write(gb.regs.hl, gb.regs.b);
    /* jp_open_dialog Dialog1EA */;
}

void func_007_4509(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC10B, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_4509_jr_4521;
    gb_write(gb.regs.hl, 0x20);
    /* call_open_dialog Dialog1EB */;
    IncrementEntityState();
  func_007_4509_jr_4521:;
    gb.regs.e = 3;
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) goto func_007_4509_jr_4533;
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_C()) { func_007_44DC(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x18);
    gb.regs.e = gb.regs.b;
    if (GET_FLAG_Z()) goto func_007_4509_jr_4533;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_007_4509_jr_4533:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void func_007_4537(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_4537_jr_4586;
    gb_write(0xC10B, gb.regs.a);
    IncrementEntityState();
    gb.regs.a = 0x54;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x0A;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
    func_007_48FD();
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
  func_007_4537_jr_4586:;
    gb.regs.a = 3;
    SetEntitySpriteVariant(); return;
}

void func_007_458B(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void func_007_4594(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4234;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect(); return;
}

void Data_007_45A7(void) {
    /* data: db -02, -02, -02, -02, -01, -01, -01, -01 */;
    /* data: db -01,  00,  00,  01,  01,  01,  01,  01 */;
    /* data: db 02,  02,  02,  02,  02,  02,  02,  02 */;
    /* data: db 02,  02,  02,  02,  02,  02,  02,  02 */;
    /* data: db 02,  02,  01,  00,  00, -01, -02, -02 */;
    /* data: db 01,  01,  01,  00,  00, -01, -01, -01 */;
    /* data: db 00,  00,  00,  00,  00,  00,  00,  00 */;
    /* data: db -01, -01, -01,  00,  00,  01,  01,  01 */;
    /* data: db -02, -02, -01,  00,  00,  01,  02,  02 */;
}

void Data_007_45EF(void) {
    /* data: db $00, $00, $01, $02, $02, $02, $01, $00 */;
}

void label_007_45F7(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x45EF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xC290);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_C()) goto label_007_45F7_jr_461A;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xC210, gb.regs.a);
  label_007_45F7_jr_461A:;
    func_007_467B();
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto label_007_45F7_jr_4640;
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto label_007_45F7_jr_4640;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto label_007_45F7_jr_4640;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0F);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC147, gb.regs.a);
  label_007_45F7_jr_4640:;
    ReturnIfNonInteractive_07();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { ret_007_4666(); return; };
    gb.regs.e = 0x48;
    gb.regs.a = gb_read(0xC147);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_007_45F7_jr_4657;
    gb.regs.e = 0x4B;
  label_007_45F7_jr_4657:;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) { ret_007_4666(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto label_007_45F7_jr_4665;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  label_007_45F7_jr_4665:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void ret_007_4666(void) {
    return;
}

void Data_007_4667(void) {
    /* data: db $00, $F8, $68, $02, $00, $00, $6A, $02, $00, $08, $6A, $02, $00, $10, $6A, $02 */;
    /* data: db $00, $18, $6C, $02 */;
}

void func_007_467B(void) {
    gb.regs.hl = 0x4667;
    gb.regs.c = 5;
    RenderActiveEntitySpritesRect(); return;
}

void Mermaid1SpriteVariants(void) {
  Mermaid1SpriteVariants_variant0:;
    /* data: db $72, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  Mermaid1SpriteVariants_variant1:;
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  Mermaid1SpriteVariants_variant2:;
    /* data: db $76, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  Mermaid1SpriteVariants_variant3:;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $76, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Mermaid2SpriteVariants(void) {
  Mermaid2SpriteVariants_variant0:;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  Mermaid2SpriteVariants_variant1:;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL1 */;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL1 | OAMF_XFLIP */;
}

void Data_007_469B(void) {
    /* data: db $00, $FC, $7A, $01, $00, $04, $7C, $01, $00, $0C, $7E, $01, $00, $FC, $7E, $21 */;
    /* data: db $00, $04, $7C, $21, $00, $0C, $7A, $21 */;
}

void Data_007_46B3(void) {
    /* data: db $00, $00, $01, $02, $02, $02, $01, $00 */;
}

void MermaidEntityHandler(void) {
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_007_490F(); return; };
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { jr_007_46E4(); return; };
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto MermaidEntityHandler_jr_46D2;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  MermaidEntityHandler_jr_46D2:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x46B3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
}

void jr_007_46E4(void) {
    gb.regs.a = gb_read(0xFFF1);
  jr_007_46E4_jr_46E6:;
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto jr_007_46E4_jr_4702;
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x469B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    jr_007_470B(); return;
  jr_007_46E4_jr_4702:;
    gb.regs.de = 0x4636;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
}

void jr_007_470B(void) {
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto jr_007_470B_jr_4715;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) { jr_007_4727(); return; };
  jr_007_470B_jr_4715:;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x4646;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
}

void jr_007_4727(void) {
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_C()) goto jr_007_4727_jr_4734;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
  jr_007_4727_jr_4734:;
    ReturnIfNonInteractive_07();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_4750(); return;
        case 0x01: func_007_4759(); return;
        case 0x02: func_007_47AE(); return;
        case 0x03: func_007_47B1(); return;
        case 0x04: func_007_47D9(); return;
        case 0x05: func_007_47F5(); return;
        case 0x06: func_007_480A(); return;
        case 0x07: func_007_4867(); return;
        case 0x08: func_007_488E(); return;
        case 0x09: func_007_48B0(); return;
        case 0x0A: func_007_48CA(); return;
    }
}

void func_007_4750(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState(); return;
}

void func_007_4759(void) {
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    GetEntityXDistanceToLink_07();
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant();
    PushLinkOutOfEntity_07();
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_C()) goto func_007_4759_jr_4793;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x12);
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_C()) goto func_007_4759_jr_4793;
    gb.regs.a = gb_read(0xFF9C);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_4759_jr_4793;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x14);
    /* jp_open_dialog Dialog1F1 */;
  func_007_4759_jr_4793:;
    func_007_7D43();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto func_007_4759_jr_47A9;
    /* call_open_dialog Dialog1F2 */;
    IncrementEntityState();
    gb_write(gb.regs.hl, 5);
    return;
  func_007_4759_jr_47A9:;
    /* jp_open_dialog Dialog1F0 */;
}

void func_007_47AE(void) {
    IncrementEntityState(); return;
}

void func_007_47B1(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_47B1_jr_47C8;
    gb_write(gb.regs.hl, 0x40);
    func_007_48FD();
    IncrementEntityState();
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant(); return;
  func_007_47B1_jr_47C8:;
    gb.regs.e = 0xFF;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_007_47B1_jr_47D5;
    gb.regs.e = 2;
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto func_007_47B1_jr_47D5;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_007_47B1_jr_47D5:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void func_007_47D9(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFEE, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    func_007_48FD(); return;
}

void func_007_47F5(void) {
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_47F5_jr_4804;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    return;
  func_007_47F5_jr_4804:;
    gb_write(gb.regs.hl, gb.regs.b);
    /* jp_open_dialog Dialog1F4 */;
}

void func_007_480A(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_007_4854(); return; };
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_Z()) goto func_007_480A_jr_4820;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_push16(gb.regs.af);
    /* call_open_dialog Dialog1F3 */;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  func_007_480A_jr_4820:;
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_Z()) goto func_007_480A_jr_483A;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 3);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 1;
    AddTranscientVfx();
    GetEntityTransitionCountdown();
  func_007_480A_jr_483A:;
    gb.regs.e = 0;
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) goto func_007_480A_jr_4846;
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_C()) goto func_007_480A_jr_4846;
    gb.regs.e = 1;
  func_007_480A_jr_4846:;
    gb.regs.a = gb.regs.e;
    gb_write(0xFF9C, gb.regs.a);
    gb.regs.hl = 0xFFA1;
    gb_write(gb.regs.hl, 2);
    gb.regs.a = 4;
    gb_write(0xC13B, gb.regs.a);
    return;
}

void jr_007_4854(void) {
    gb.regs.a = 0x0D;
    gb_write(0xDBBA, gb.regs.a);
    gb_write(0xFFA5, gb.regs.a);
    CreateTradingItemEntity();
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    return;
}

void func_007_4867(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    SetEntitySpriteVariant();
    gb.regs.e = 8;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto func_007_4867_jr_487D;
    gb.regs.e = 0xF8;
  func_007_4867_jr_487D:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    func_007_48FD();
    func_007_733F(); return;
}

void func_007_488E(void) {
    UpdateEntityPosWithSpeed_07();
    AddEntityZSpeedToPos_07();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_007_488E_ret_48AF;
    gb_write(gb.regs.hl, gb.regs.b);
    IncrementEntityState();
    func_007_48FD();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
  func_007_488E_ret_48AF:;
    return;
}

void func_007_48B0(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_48B0_jr_48BF;
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    IncrementEntityState(); return;
  func_007_48B0_jr_48BF:;
    gb.regs.e = 2;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto func_007_48B0_jr_48C6;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_007_48B0_jr_48C6:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void func_007_48CA(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_007_48CA_jr_48E0;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    ClearEntityStatus_07(); return;
  func_007_48CA_jr_48E0:;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.e = 0x10;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_48CA_jr_48F0;
    gb.regs.e = 0xF0;
  func_007_48CA_jr_48F0:;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 7);
    return;
}

void func_007_48FD(void) {
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 1;
    AddTranscientVfx();
    gb.regs.a = 0x0E;
    gb_write(0xFFF2, gb.regs.a);
    return;
}

void label_007_490F(void) {
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.hl++;
    gb.regs.a = 0x0A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xFC;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_492E(); return;
        case 0x01: func_007_4945(); return;
        case 0x02: func_007_4959(); return;
        case 0x03: func_007_4982(); return;
    }
}

void func_007_492E(void) {
    ReturnIfNonInteractive_07();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x58);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.a = gb_read(0xC130);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    IncrementEntityState(); return;
}

void func_007_4945(void) {
    ReturnIfNonInteractive_07();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x20);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, 0xFC);
    func_007_48FD();
    IncrementEntityState(); return;
}

void func_007_4959(void) {
    func_007_49DC();
    ReturnIfNonInteractive_07();
    UpdateEntityPosWithSpeed_07();
    AddEntityZSpeedToPos_07();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_007_4959_jr_4977;
    gb_write(gb.regs.hl, gb.regs.b);
    IncrementEntityState();
  func_007_4959_jr_4977:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void func_007_4982(void) {
    PushLinkOutOfEntity_07();
    GetEntityXDistanceToLink_07();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xFFF1, gb.regs.a);
    func_007_49DC();
    ReturnIfNonInteractive_07();
    func_007_7D43();
    if (!GET_FLAG_C()) return;
    /* jp_open_dialog Dialog1F7 */;
}

void Data_007_499C(void) {
    /* data: db $F0, $00, $70, $01, $F0, $08, $72, $01, $00, $00, $74, $01, $00, $08, $76, $01 */;
    /* data: db $F0, $00, $72, $21, $F0, $08, $70, $21, $00, $00, $76, $21, $00, $08, $74, $21 */;
    /* data: db $F0, $FF, $72, $21, $F0, $07, $70, $21, $00, $00, $7A, $21, $00, $08, $78, $21 */;
    /* data: db $F0, $01, $70, $01, $F0, $09, $72, $01, $00, $00, $78, $01, $00, $08, $7A, $01 */;
}

void func_007_49DC(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x499C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect(); return;
}

void Papahl1SpriteVariants(void) {
  Papahl1SpriteVariants_variant0:;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  Papahl1SpriteVariants_variant1:;
    /* data: db $6C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
}

void PapahlDirectionSpriteVariants(void) {
  PapahlDirectionSpriteVariants_right:;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  PapahlDirectionSpriteVariants_up:;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  PapahlDirectionSpriteVariants_left:;
    /* data: db $78, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  PapahlDirectionSpriteVariants_down:;
    /* data: db $7C, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void Papahl2SpriteVariants(void) {
  Papahl2SpriteVariants_variant0:;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  Papahl2SpriteVariants_variant1:;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $74, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  Papahl2SpriteVariants_variant2:;
    /* data: db $7A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  Papahl2SpriteVariants_variant3:;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $7C, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void Papahl4SpriteVariants(void) {
  Papahl4SpriteVariants_variant0:;
    /* data: db $7E, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void PapahlEntityHandler(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_4A69(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto PapahlEntityHandler_jr_4A30;
    gb.regs.a = gb_read(0xDC0F);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
  PapahlEntityHandler_jr_4A30:;
    gb.regs.de = 0x4981;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto PapahlEntityHandler_render;
    GetEntityXDistanceToLink_07();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x4969;
  PapahlEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    PushLinkOutOfEntity_07();
    func_007_7D43();
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto PapahlEntityHandler_jr_4A64;
    /* jp_open_dialog Dialog027 */;
  PapahlEntityHandler_jr_4A64:;
    /* jp_open_dialog Dialog176 */;
}

void jr_007_4A69(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    gb.regs.de = 0x4971;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_007_4A69_render;
    gb.regs.de = 0x4981;
  jr_007_4A69_render:;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto jr_007_4A69_jr_4AA0;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x4991;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
  jr_007_4A69_jr_4AA0:;
    ReturnIfNonInteractive_07();
    PushLinkOutOfEntity_07();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_4AB3(); return;
        case 0x01: func_007_4AF3(); return;
        case 0x02: func_007_4B1C(); return;
        case 0x03: func_007_4B50(); return;
        case 0x04: func_007_4B5B(); return;
    }
}

void func_007_4AB3(void) {
    GetEntityXDistanceToLink_07();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, 0x24);
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_C()) { jr_007_4AE9(); return; };
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x24);
    alu_cp8(gb.regs.a, 0x48);
    if (!GET_FLAG_C()) { jr_007_4AE9(); return; };
    func_007_7D43();
    if (!GET_FLAG_C()) { jr_007_4AE5(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 7);
    /* ld_dialog_low a, Dialog170 */;
    if (GET_FLAG_Z()) goto func_007_4AB3_jr_4ADA;
    /* ld_dialog_low a, Dialog177 */;
  func_007_4AB3_jr_4ADA:;
    OpenDialogInTable1();
    IncrementEntityState();
    gb.regs.a = 1;
    gb_write(0xC167, gb.regs.a);
}

void jr_007_4AE5(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void jr_007_4AE9(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void func_007_4AF3(void) {
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_4AF3_jr_4B0E;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_007_4AF3_jr_4B0E;
    /* call_open_dialog Dialog172 */;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    return;
  func_007_4AF3_jr_4B0E:;
    /* call_open_dialog Dialog171 */;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void func_007_4B1C(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_007_4B44(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_4B1C_jr_4B3B;
    gb_write(0xC10B, gb.regs.a);
    /* call_open_dialog Dialog173 */;
    gb.regs.a = 8;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
    IncrementEntityState(); return;
  func_007_4B1C_jr_4B3B:;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC10B, gb.regs.a);
}

void func_007_4B44(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    SetEntitySpriteVariant(); return;
}

void func_007_4B50(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    CreateTradingItemEntity();
    IncrementEntityState(); return;
}

void func_007_4B5B(void) {
    func_007_4B44();
    func_007_7D43();
    if (!GET_FLAG_C()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    /* jp_open_dialog Dialog175 */;
}

void Data_007_4B6B(void) {
    /* data: db $FA, $00, $70, $03, $FA, $08, $72, $03, $FA, $10, $74, $03, $FA, $18, $70, $23 */;
    /* data: db $0A, $00, $76, $03, $0A, $08, $78, $03, $0A, $10, $78, $23, $0A, $18, $76, $23 */;
}

void Data_007_4B8B(void) {
    /* data: db $FA, $00, $70, $03, $FA, $08, $74, $23, $FA, $10, $72, $23, $FA, $18, $70, $23 */;
    /* data: db $0A, $00, $76, $03, $0A, $08, $78, $03, $0A, $10, $78, $23, $0A, $18, $76, $23 */;
}

void Data_007_4BAB(void) {
    /* data: db $7E, $07 */;
}

void Bear1SpriteVariants(void) {
  Bear1SpriteVariants_variant0:;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void Bear2SpriteVariants(void) {
  Bear2SpriteVariants_variant0:;
    /* data: db $7C, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void BearEntityHandler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = 0x4A;
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x4AF6;
    RenderActiveEntitySpritesPair();
    gb.regs.a = 0x68;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.de = 0x4AFA;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto BearEntityHandler_jr_4BE1;
    gb.regs.a = 0x74;
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = 0x38;
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x4BAB;
    RenderActiveEntitySprite();
  BearEntityHandler_jr_4BE1:;
    CopyEntityPositionToActivePosition();
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x4B6B;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BearEntityHandler_jr_4BF2;
    gb.regs.hl = 0x4B8B;
  BearEntityHandler_jr_4BF2:;
    gb.regs.c = 8;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 6;
    func_015_7964_trampoline();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
  BearEntityHandler_jr_4C00:;
    ReturnIfNonInteractive_07();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    SetEntitySpriteVariant();
    PushLinkOutOfEntity_07();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_4C16(); return;
        case 0x01: func_007_4C49(); return;
        case 0x02: func_007_4C70(); return;
    }
}

void func_007_4C16(void) {
    func_007_7D36();
    if (!GET_FLAG_C()) return;
    /* ld_dialog_low e, Dialog1D3 */;
    gb.regs.a = gb_read(0xD9B2);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) { func_007_4C43_openDialog(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto func_007_4C16_jr_4C32;
    /* ld_dialog_low a, Dialog1CF */;
    BearOpenDialog();
    IncrementEntityState(); return;
  func_007_4C16_jr_4C32:;
    /* ld_dialog_low e, Dialog1D4 */;
    gb.regs.a = gb_read(0xDC1B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_007_4C43_openDialog(); return; };
    /* ld_dialog_low e, Dialog1CE */;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { func_007_4C43_openDialog(); return; };
}

void func_007_4C43(void) {
    /* ld_dialog_low e, Dialog1D2 */;
  func_007_4C43_openDialog:;
    gb.regs.a = gb.regs.e;
    BearOpenDialog(); return;
}

void func_007_4C49(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_007_4C6F(); return; };
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_4C49_jr_4C5E;
    gb_write(gb.regs.hl, gb.regs.b);
    /* ld_dialog_low a, Dialog1D1 */;
    BearOpenDialog(); return;
  func_007_4C49_jr_4C5E:;
    gb.regs.a = 7;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
    CreateTradingItemEntity();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x70);
}

void ret_007_4C6F(void) {
    return;
}

void func_007_4C70(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_4C70_ret_4C82;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_4C70_ret_4C82;
    func_007_4C43();
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  func_007_4C70_ret_4C82:;
    return;
}

void BearOpenDialog(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = 0x10;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = gb.regs.e;
    OpenDialogInTable1();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    return;
}

void HoneycombSpriteVariants(void) {
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void HoneycombEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_007_4D84(); return; };
    gb.regs.a = gb.regs.c;
    gb_write(0xD481, gb.regs.a);
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto HoneycombEntityHandler_jr_4CB6;
    gb.regs.hl = 0xFFEE;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  HoneycombEntityHandler_jr_4CB6:;
    gb.regs.de = 0x4BCA;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_4CCC(); return;
        case 0x01: func_007_4D1F(); return;
        case 0x02: func_007_4D27(); return;
        case 0x03: func_007_4D4D(); return;
        case 0x04: func_007_4D4E(); return;
    }
}

void func_007_4CCC(void) {
    gb.regs.a = gb_read(0xDC27);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_007_4CCC_jr_4CE7;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    return;
  func_007_4CCC_jr_4CE7:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD482, gb.regs.a);
    IncrementEntityState();
}

void func_007_4CEE(void) {
    gb.regs.a = 0xB3;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto func_007_4CEE_jr_4D1D;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0E);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC1);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
  func_007_4CEE_jr_4D1D:;
    alu_scf();
    return;
}

void func_007_4D1F(void) {
    gb.regs.a = gb_read(0xD482);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { IncrementEntityState(); return; };
    return;
}

void func_007_4D27(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { IncrementEntityState(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto func_007_4D27_ret_4D4C;
    func_007_4CEE();
    if (GET_FLAG_C()) goto func_007_4D27_ret_4D4C;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.b);
  func_007_4D27_ret_4D4C:;
    return;
}

void func_007_4D4D(void) {
    return;
}

void func_007_4D4E(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    AddEntityZSpeedToPos_07();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC27, gb.regs.a);
    gb.regs.a = 6;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
    CreateTradingItemEntity();
    ClearEntityStatus_07(); return;
}

void Data_007_4D80(void) {
    /* data: db $72, $00, $72, $40 */;
}

void label_007_4D84(void) {
    gb.regs.de = 0x4D80;
    RenderActiveEntitySprite();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    ReturnIfNonInteractive_07();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_4DA5(); return;
        case 0x01: func_007_4E25(); return;
        case 0x02: func_007_4E8C(); return;
    }
}

void Data_007_4D9F(void) {
    /* data: db $01, $FF */;
}

void Data_007_4DA1(void) {
    /* data: db $10, $F0 */;
}

void Data_007_4DA3(void) {
    /* data: db $0B, $F5 */;
}

void func_007_4DA5(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_007_4DEA(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4D9F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4DA1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_007_4DA5_jr_4DCB;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
  func_007_4DA5_jr_4DCB:;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4D9F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4DA3;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_007_4DEA(); return; };
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_007_4DEA(void) {
    UpdateEntityPosWithSpeed_07();
    gb.regs.a = gb_read(0xD482);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { IncrementEntityState(); return; };
    return;
}

void Data_007_4DF5(void) {
    /* data: db $F0, $E8, $E8, $E0, $E0, $D8, $10, $18, $18, $20, $20, $28, $00, $F8, $08, $F8 */;
    /* data: db $08, $00, $00, $08, $F8, $08, $F8, $00 */;
}

void Data_007_4E0D(void) {
    /* data: db $00, $F8, $08, $F8, $08, $00, $00, $08, $F8, $08, $F8, $00, $10, $18, $18, $20 */;
    /* data: db $20, $28, $F0, $E8, $E8, $E0, $E0, $D8 */;
}

void func_007_4E25(void) {
    gb.regs.a = 0x22;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xD484);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
  func_007_4E25_jr_4E34:;
    if (GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.hl = 0xC3D0;
  func_007_4E25_jr_4E3E:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_007_4E25_jr_4E89;
    gb.regs.a = gb_read(0xD484);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xD484);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x4DF5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0x4E0D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF99, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.a = 0x24;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
  func_007_4E25_jr_4E89:;
    UpdateEntityPosWithSpeed_07(); return;
}

void func_007_4E8C(void) {
    return;
}

void TarinBeekeeperSpriteVariants(void) {
  TarinBeekeeperSpriteVariants_variant0:;
    /* data: db $5A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $58, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  TarinBeekeeperSpriteVariants_variant1:;
    /* data: db $5E, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $5C, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  TarinBeekeeperSpriteVariants_variant2:;
    /* data: db $58, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  TarinBeekeeperSpriteVariants_variant3:;
    /* data: db $5C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $5E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  TarinBeekeeperSpriteVariants_variant4:;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  TarinBeekeeperSpriteVariants_variant5:;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  TarinBeekeeperSpriteVariants_variant6:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  TarinBeekeeperSpriteVariants_variant7:;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  TarinBeekeeperSpriteVariants_variant8:;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 */;
}

void TarinBeekeeperEntityHandler(void) {
    gb.regs.a = gb.regs.c;
    gb_write(0xD484, gb.regs.a);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto TarinBeekeeperEntityHandler_jr_4EC5;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
  TarinBeekeeperEntityHandler_jr_4EC5:;
    gb.regs.a = gb_read(0xDC0F);
    gb.regs.a = alu_and8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    gb.regs.de = 0x4DC7;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    AddEntityZSpeedToPos_07();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto TarinBeekeeperEntityHandler_jr_4EEE;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  TarinBeekeeperEntityHandler_jr_4EEE:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_4EFF(); return;
        case 0x01: func_007_4F1F(); return;
        case 0x02: func_007_4F56(); return;
        case 0x03: func_007_4FC6(); return;
        case 0x04: func_007_504E(); return;
        case 0x05: func_007_50B4(); return;
        case 0x06: func_007_50E3(); return;
    }
}

void func_007_4EFF(void) {
    gb.regs.a = 2;
    SetEntitySpriteVariant();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x58);
    PushLinkOutOfEntity_07();
    func_007_7D43();
    if (!GET_FLAG_C()) return;
    /* call_open_dialog Dialog1C0 */;
    IncrementEntityState(); return;
}

void func_007_4F1F(void) {
    PushLinkOutOfEntity_07();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_007_4F4D(); return; };
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_4F1F_jr_4F44;
    gb.regs.a = 2;
    gb_write(0xDC27, gb.regs.a);
    gb.regs.hl = 0xD93C;
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    gb.regs.a = 1;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState(); return;
  func_007_4F1F_jr_4F44:;
    /* call_open_dialog Dialog1C2 */;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}

void ret_007_4F4D(void) {
    return;
}

void Unknown102SpriteVariants(void) {
  Unknown102SpriteVariants_variant0:;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $FF, OAM_GBC_PAL_0 | OAMF_PAL0 */;
  Unknown102SpriteVariants_variant1:;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void func_007_4F56(void) {
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) goto func_007_4F56_jr_4F7B;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x4E76;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
    gb.regs.a = 8;
    SetEntitySpriteVariant(); return;
  func_007_4F56_jr_4F7B:;
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) goto func_007_4F56_jr_4FA5;
    gb.regs.a = 2;
    gb_write(0xFF9E, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFE);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, 0xF4);
    UpdateEntityPosWithSpeed_07();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_4F56_jr_4FA5;
    gb.regs.a = 0x34;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFB0, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState(); return;
  func_007_4F56_jr_4FA5:;
    gb.regs.a = 1;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0C);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.de = 0x4E76;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
    GetEntityTransitionCountdown();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    SetEntitySpriteVariant(); return;
}

void func_007_4FC6(void) {
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_4FC6_jr_4FD4;
    gb_write(gb.regs.hl, 0x0C);
    IncrementEntityState();
  func_007_4FC6_jr_4FD4:;
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto func_007_4FC6_jr_4FE5;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    func_007_733F();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_007_4FC6_jr_4FE5:;
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_Z()) goto func_007_4FC6_jr_4FED;
    gb.regs.hl = 0xD482;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_007_4FC6_jr_4FED:;
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto func_007_4FC6_jr_4FFC;
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xA0);
  func_007_4FC6_jr_4FFC:;
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto func_007_4FC6_jr_5012;
    gb.regs.a = 1;
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0E);
    gb_write(0xFFEE, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFEC, gb.regs.a);
    jr_007_501B(); return;
  func_007_4FC6_jr_5012:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFEC, gb.regs.a);
}

void jr_007_501B(void) {
    gb.regs.de = 0x4E76;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
    GetEntityTransitionCountdown();
    gb.regs.e = 2;
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto jr_007_501B_jr_502E;
    gb.regs.e = alu_inc8(gb.regs.e);
  jr_007_501B_jr_502E:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void Data_007_5032(void) {
    /* data: db $20, $00, $E0, $00 */;
}

void Data_007_5036(void) {
    /* data: db $00, $E0, $00, $20 */;
}

void Data_007_503A(void) {
    /* data: db $00, $02, $01 */;
}

void Data_007_503D(void) {
    /* data: db $03, $16, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28 */;
}

void Data_007_504A(void) {
    /* data: db $00, $02, $04, $06 */;
}

void func_007_504E(void) {
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_506E(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) { IncrementEntityState(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x503D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  func_007_504E_jr_5069:;
    gb.regs.e = gb_read(gb.regs.hl);
    GetEntityTransitionCountdown();
  func_007_504E_jr_506D:;
    gb_write(gb.regs.hl, gb.regs.e);
}

void jr_007_506E(void) {
    gb.regs.hl = 0xC3D0;
  jr_007_506E_jr_5071:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5032;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5036;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x503A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityDirectionToLink_07();
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_xor8(gb.regs.a, 1);
}

void jr_007_509A(void) {
    gb_write(0xFF9E, gb.regs.a);
    UpdateEntityPosWithSpeed_07();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x504A;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    SetEntitySpriteVariant(); return;
}

void func_007_50B4(void) {
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 1;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xE4);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, 8);
    UpdateEntityPosWithSpeed_07();
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xC0);
    if (GET_FLAG_C()) { label_007_50DF(); return; };
    alu_cp8(gb.regs.a, 0xC4);
    if (!GET_FLAG_C()) { label_007_50DF(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    IncrementEntityState();
}

void label_007_50DF(void) {
    gb.regs.a = 1;
    jr_007_509A(); return;
}

void func_007_50E3(void) {
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    ClearEntityStatus_07(); return;
}

void HoleFillerSpriteVariants(void) {
  HoleFillerSpriteVariants_variant0:;
    /* data: db $40, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $40, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  HoleFillerSpriteVariants_variant1:;
    /* data: db $42, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $42, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void HoleFillerEntityHandler(void) {
    gb.regs.de = 0x502A;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: HoleFillerIdleState(); return;
        case 0x01: HoleFillerMovingState(); return;
    }
}

void HoleFillerDirectionToXSpeedTable(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void HoleFillerDirectionToYSpeedTable(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void HoleFillerIdleState(void) {
    PushLinkOutOfEntity_07();
    if (!GET_FLAG_C()) goto HoleFillerIdleState_doNotStartMovement;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto HoleFillerIdleState_doNotStartMovement;
    gb.regs.a = 1;
    gb_write(0xC144, gb.regs.a);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto HoleFillerIdleState_ret;
    IncrementEntityState();
    GetEntityDirectionToLink_07();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb.regs.e = gb.regs.a;
    gb_write(gb.regs.hl, gb.regs.e);
  HoleFillerIdleState_setSpeedByDirection:;
    /* TODO: :  */;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5049;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x504D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  HoleFillerIdleState_doNotStartMovement:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  HoleFillerIdleState_ret:;
    return;
}

void Data_007_5174(void) {
    /* data: db $10, $F0, $00, $00 */;
}

void Data_007_5178(void) {
    /* data: db $00, $00, $F0, $10 */;
}

void HoleFillerMovingState(void) {
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 0x3E;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.d = gb.regs.a;
    if (GET_FLAG_Z()) { jr_007_51AA(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_007_5198(); return; };
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto HoleFillerMovingState_jr_5196;
    gb.regs.e = alu_inc8(gb.regs.e);
  HoleFillerMovingState_jr_5196:;
    jr_007_519F(); return;
}

void jr_007_5198(void) {
    gb.regs.e = 2;
    alu_bit(2, gb.regs.d);
    if (!GET_FLAG_Z()) { jr_007_519F(); return; };
    gb.regs.e = alu_inc8(gb.regs.e);
}

void jr_007_519F(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.e);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_007_51AA(); return; };
    gb_write(gb.regs.hl, gb.regs.e);
}

void jr_007_51AA(void) {
    UpdateEntityPosWithSpeed_07();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto jr_007_51AA_ret;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0D);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_51AA_noGBC;
    gb_push16(gb.regs.bc);
    gb.regs.a = 0x0D;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 7;
    func_91D();
    gb.regs.bc = gb_pop16();
  jr_007_51AA_noGBC:;
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
    gb.regs.a = 0x10;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x12;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x11;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x13;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    HoleFillerIdleState_setSpeedByDirection();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5174;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0x5178;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = 1;
    GetObjectPhysicsFlags_trampoline();
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto jr_007_51AA_ret;
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) goto jr_007_51AA_ret;
    alu_cp8(gb.regs.a, 0x51);
    if (GET_FLAG_Z()) goto jr_007_51AA_ret;
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = 0x2F;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = 2;
    AddTranscientVfx();
    gb.regs.hl = 0xC520;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0F);
    ClearEntityStatus_07();
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_Z()) goto jr_007_51AA_ret;
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.b;
    gb.regs.hl = 0xD7B5;
  jr_007_51AA_loop_5287:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_push16(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 1;
    GetObjectPhysicsFlags_trampoline();
    gb.regs.hl = gb_pop16();
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) goto jr_007_51AA_jr_529E;
    alu_cp8(gb.regs.a, 0x51);
    if (GET_FLAG_Z()) goto jr_007_51AA_jr_529E;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto jr_007_51AA_loop_5287;
    MarkTriggerAsResolved();
  jr_007_51AA_jr_529E:;
    gb.regs.bc = gb_pop16();
  jr_007_51AA_ret:;
    return;
}

void HorizontalLungeDirections(void) {
    /* data: db $00, $00, $01, $01, $01, $02, $02, $02 */;
    /* data: db $00, $00, $0F, $0F, $0F, $0E, $0E, $0E */;
    /* data: db $08, $08, $07, $07, $07, $06, $06, $06 */;
    /* data: db $08, $08, $09, $09, $09, $0A, $0A, $0A */;
}

void VerticalLungeDirections(void) {
    /* data: db $04, $04, $03, $03, $03, $02, $02, $02 */;
    /* data: db $0C, $0C, $0D, $0D, $0D, $0E, $0E, $0E */;
    /* data: db $04, $04, $05, $05, $05, $06, $06, $06 */;
    /* data: db $0C, $0C, $0B, $0B, $0B, $0A, $0A, $0A */;
}

void PincerGetLungeDirection(void) {
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
    if (GET_FLAG_Z()) goto PincerGetLungeDirection_positiveX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  PincerGetLungeDirection_positiveX:;
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFD7);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto PincerGetLungeDirection_positiveY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  PincerGetLungeDirection_positiveY:;
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto PincerGetLungeDirection_vertical;
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.h);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x51C8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    return;
  PincerGetLungeDirection_vertical:;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.h);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x51E8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    return;
}

void PincerEntityHandler(void) {
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC3F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC400;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    RenderPincer();
    ReturnIfNonInteractive_07();
    DecrementEntityIgnoreHitsCountdown();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: PincerState0Handler(); return;
        case 0x01: PincerState1Handler(); return;
        case 0x02: PincerState2Handler(); return;
        case 0x03: PincerState3Handler(); return;
        case 0x04: PincerState4Handler(); return;
        case 0x05: PincerState5Handler(); return;
    }
}

void PincerState0Handler(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void PincerState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto PincerState1Handler_skipIncrementState;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto PincerState1Handler_skipIncrementState;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto PincerState1Handler_skipIncrementState;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
  PincerState1Handler_skipIncrementState:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void PincerState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto PincerState2Handler_skipIncrementState;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
    IncrementEntityState(); return;
  PincerState2Handler_skipIncrementState:;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto PincerState2Handler_initLungeEnd;
    gb.regs.a = 0x1F;
    ApplyVectorTowardsLink_trampoline();
    PincerGetLungeDirection();
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline();
  PincerState2Handler_initLungeEnd:;
    gb.regs.a = 1;
    SetEntitySpriteVariant(); return;
}

void PincerState3Handler(void) {
    UpdateEntityPosWithSpeed_07();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto PincerState3Handler_skipIncrementState;
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
  PincerState3Handler_skipIncrementState:;
    DefaultEnemyDamageCollisionHandler_trampoline(); return;
}

void PincerState4Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto PincerState4Handler_skipIncrementState;
    IncrementEntityState();
  PincerState4Handler_skipIncrementState:;
    DefaultEnemyDamageCollisionHandler_trampoline(); return;
}

void PincerState5Handler(void) {
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto PincerState5Handler_skipIncrementState;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto PincerState5Handler_skipIncrementState;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF98);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFF99);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
  PincerState5Handler_skipIncrementState:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    UpdateEntityPosWithSpeed_07();
    DefaultEnemyDamageCollisionHandler_trampoline(); return;
}

void PincerSpriteVariants(void) {
  PincerSpriteVariants_variant0:;
    /* data: db $FF, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $FF, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  PincerSpriteVariants_variant1:;
    /* data: db $6C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $6C, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  PincerSpriteVariants_variant2:;
    /* data: db $64, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $62, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  PincerSpriteVariants_variant3:;
    /* data: db $68, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $66, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  PincerSpriteVariants_variant4:;
    /* data: db $60, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $60, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  PincerSpriteVariants_variant5:;
    /* data: db $66, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $68, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  PincerSpriteVariants_variant6:;
    /* data: db $62, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $64, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  PincerSpriteVariants_variant7:;
    /* data: db $66, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $68, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
  PincerSpriteVariants_variant8:;
    /* data: db $60, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $60, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  PincerSpriteVariants_variant9:;
    /* data: db $68, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
    /* data: db $66, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
}

void RenderPincer(void) {
    gb.regs.de = 0x5347;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.hl = 0xC2C0;
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
    gb.regs.a = 3;
  RenderPincer_loop:;
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 0x6A;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 2;
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
    if (!GET_FLAG_Z()) goto RenderPincer_loop;
    gb.regs.a = 3;
    func_015_7964_trampoline(); return;
}

void TradingItemDialogs(void) {
  TradingItemDialogs__0:;
    /* db_dialog_low Dialog044 */;
  TradingItemDialogs__1:;
    /* db_dialog_low Dialog129 */;
  TradingItemDialogs__2:;
    /* db_dialog_low Dialog182 */;
  TradingItemDialogs__3:;
    /* db_dialog_low Dialog1CB */;
  TradingItemDialogs__4:;
    /* db_dialog_low Dialog164 */;
  TradingItemDialogs__5:;
    /* db_dialog_low Dialog1C1 */;
  TradingItemDialogs__6:;
    /* db_dialog_low Dialog1D0 */;
  TradingItemDialogs__7:;
    /* db_dialog_low Dialog174 */;
  TradingItemDialogs__8:;
    /* db_dialog_low Dialog16A */;
  TradingItemDialogs__9:;
    /* db_dialog_low Dialog136 */;
  TradingItemDialogs__A:;
    /* db_dialog_low Dialog15E */;
  TradingItemDialogs__B:;
    /* db_dialog_low Dialog1EC */;
  TradingItemDialogs__C:;
    /* db_dialog_low Dialog1F5 */;
  TradingItemDialogs__D:;
    /* db_dialog_low Dialog09D */;
}

void TradingItem1SpriteVariants(void) {
  TradingItem1SpriteVariants_variant0:;
    /* data: db $9A, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_6 | OAMF_PAL1 */;
}

void TradingItem2SpriteVariants(void) {
  TradingItem2SpriteVariants_variant0:;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 */;
}

void TradingItem3SpriteVariants(void) {
  TradingItem3SpriteVariants_variant0:;
    /* data: db $9A, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_7 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant1:;
    /* data: db $9A, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_7 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant2:;
    /* data: db $9A, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_7 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant3:;
    /* data: db $9A, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_7 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant4:;
    /* data: db $9A, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_4 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant5:;
    /* data: db $9A, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_4 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant6:;
    /* data: db $9A, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_7 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant7:;
    /* data: db $9A, OAM_GBC_PAL_4 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_4 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant8:;
    /* data: db $9A, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_7 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant9:;
    /* data: db $9A, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_6 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant10:;
    /* data: db $9A, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_7 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant11:;
    /* data: db $9A, OAM_GBC_PAL_6 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_6 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant12:;
    /* data: db $9A, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_7 | OAMF_PAL1 */;
  TradingItem3SpriteVariants_variant13:;
    /* data: db $9A, OAM_GBC_PAL_7 | OAMF_PAL1 */;
    /* data: db $9C, OAM_GBC_PAL_7 | OAMF_PAL1 */;
}

void TradingItemEntityHandler(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto TradingItemEntityHandler_jr_007_552E;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x6B);
    if (GET_FLAG_Z()) goto TradingItemEntityHandler_jr_007_5528;
    alu_cp8(gb.regs.a, 0x7A);
    if (GET_FLAG_Z()) goto TradingItemEntityHandler_jr_007_5528;
    alu_cp8(gb.regs.a, 0x8B);
    if (GET_FLAG_Z()) goto TradingItemEntityHandler_jr_007_5528;
    alu_cp8(gb.regs.a, 0x7B);
    if (!GET_FLAG_Z()) goto TradingItemEntityHandler_jr_007_552E;
  TradingItemEntityHandler_jr_007_5528:;
    gb.regs.a = gb_read(0xD930);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) return;
  TradingItemEntityHandler_jr_007_552E:;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TradingItemEntityHandler_jr_007_555A;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TradingItemEntityHandler_jr_007_5545;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xFFEC, gb.regs.a);
  TradingItemEntityHandler_jr_007_5545:;
    gb_push16(gb.regs.hl);
    gb.regs.de = 0x53D6;
    gb.regs.a = gb_read(0xDBBA);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = gb_pop16();
    goto TradingItemEntityHandler_render;
  TradingItemEntityHandler_jr_007_555A:;
    gb.regs.de = 0x53D2;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto TradingItemEntityHandler_render;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TradingItemEntityHandler_jr_007_556F;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xFFEC, gb.regs.a);
  TradingItemEntityHandler_jr_007_556F:;
    gb.regs.de = 0x53CE;
  TradingItemEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto TradingItemEntityHandler_openDialog;
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto TradingItemEntityHandler_return;
    gb.regs.a = 0x10;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFFBF);
    gb_write(0xFFB0, gb.regs.a);
    GetEntityTransitionCountdown();
    gb.regs.a = 0x68;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x66;
    gb_write(0xC111, gb.regs.a);
    ResetSpinAttack(); return;
  TradingItemEntityHandler_return:;
    return;
  TradingItemEntityHandler_openDialog:;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { jr_007_55BA(); return; };
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xDBBA);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x53CD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    /* cp_dialog_low Dialog09D */;
    if (GET_FLAG_Z()) goto TradingItemEntityHandler_openDialogInTable0;
    /* cp_dialog_low Dialog044 */;
    if (!GET_FLAG_Z()) goto TradingItemEntityHandler_openDialogInTable1;
  TradingItemEntityHandler_openDialogInTable0:;
    OpenDialogInTable0();
    goto TradingItemEntityHandler_dialogEnd;
  TradingItemEntityHandler_openDialogInTable1:;
    OpenDialogInTable1();
  TradingItemEntityHandler_dialogEnd:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
}

void jr_007_55BA(void) {
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_007_55BA_jr_55CD;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC27, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    func_007_560D();
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    ClearEntityStatus_07(); return;
  jr_007_55BA_jr_55CD:;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xC9);
    if (!GET_FLAG_Z()) goto jr_007_55BA_jr_55DF;
    gb.regs.a = 4;
    gb_write(0xC13B, gb.regs.a);
  jr_007_55BA_jr_55DF:;
    gb.regs.hl = 0xC13B;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
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
    return;
}

void func_007_560D(void) {
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto func_007_560D_indoorBEnd;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto func_007_560D_indoorBEnd;
    gb.regs.d = alu_inc8(gb.regs.d);
  func_007_560D_indoorBEnd:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    return;
}

void Data_007_5625(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void Data_007_5629(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void WingedOctorokSpriteVariants(void) {
  WingedOctorokSpriteVariants_variant0:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  WingedOctorokSpriteVariants_variant1:;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  WingedOctorokSpriteVariants_variant2:;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $50, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  WingedOctorokSpriteVariants_variant3:;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP */;
    /* data: db $52, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_YFLIP | OAMF_XFLIP */;
  WingedOctorokSpriteVariants_variant4:;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  WingedOctorokSpriteVariants_variant5:;
    /* data: db $58, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $5A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  WingedOctorokSpriteVariants_variant6:;
    /* data: db $56, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $54, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  WingedOctorokSpriteVariants_variant7:;
    /* data: db $5A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $58, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void WingedOctorokEntityHandler(void) {
    gb.regs.de = 0x550E;
    RenderActiveEntitySpritesPair();
    func_007_5805();
    ReturnIfNonInteractive_07();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto WingedOctorokEntityHandler_jr_566F;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = 1;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF0, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
  WingedOctorokEntityHandler_jr_566F:;
    ApplyRecoilIfNeeded_07();
    UpdateEntityPosWithSpeed_07();
    AddEntityZSpeedToPos_07();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto WingedOctorokEntityHandler_jr_5693;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  WingedOctorokEntityHandler_jr_5693:;
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_007_577A(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_56FF(); return; };
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_007_56BD(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto WingedOctorokEntityHandler_jr_56B7;
    GetEntityDirectionToLink_07();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto WingedOctorokEntityHandler_jr_56B7;
    func_007_57B0();
  WingedOctorokEntityHandler_jr_56B7:;
    ClearEntitySpeed();
    label_007_5721(); return;
}

void jr_007_56BD(void) {
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
    if (!GET_FLAG_Z()) goto jr_007_56BD_jr_56DD;
    GetEntityDirectionToLink_07();
    jr_007_56E0(); return;
  jr_007_56BD_jr_56DD:;
    GetRandomByte();
}

void jr_007_56E0(void) {
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5625;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5629;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
    label_007_5721(); return;
}

void jr_007_56FF(void) {
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto jr_007_56FF_jr_570D;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_571E(); return; };
  jr_007_56FF_jr_570D:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    ClearEntitySpeed();
}

void jr_007_571E(void) {
    SetEntityVariantForDirection_07();
}

void label_007_5721(void) {
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_007_5777(); return; };
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) { jr_007_5777(); return; };
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) { jr_007_5777(); return; };
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto label_007_5721_checkAButtonSlot;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_007_5757(); return; };
    jr_007_5777(); return;
  label_007_5721_checkAButtonSlot:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_007_5777(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_007_5777(); return; };
}

void jr_007_5757(void) {
    GetEntityDirectionToLink_07();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) { jr_007_5777(); return; };
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    func_007_733F(); return;
}

void jr_007_5777(void) {
    DefaultEnemyDamageCollisionHandler_trampoline(); return;
}

void label_007_577A(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityDirectionToLink_07();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    SetEntityVariantForDirection_07();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_007_577A_ret_579F;
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
  label_007_577A_ret_579F:;
    return;
}

void Data_007_57A0(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void Data_007_57A4(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void Data_007_57A8(void) {
    /* data: db $20, $E0, $00, $00 */;
}

void Data_007_57AC(void) {
    /* data: db $00, $00, $E0, $20 */;
}

void func_007_57B0(void) {
    gb.regs.a = 0x0A;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto func_007_57B0_ret_57F4;
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0x57A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x57A4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x57A8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x57AC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
  func_007_57B0_ret_57F4:;
    return;
}

void Data_007_57F5(void) {
    /* data: db $00, $FC, $22, $40, $00, $0C, $22, $60, $00, $FC, $22, $00, $00, $0C, $22, $20 */;
}

void func_007_5805(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x57F5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 2;
    RenderActiveEntitySpritesRect(); return;
}

void KikiTheMonkey2SpriteVariants(void) {
  KikiTheMonkey2SpriteVariants_variant0:;
    /* data: db $78, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  KikiTheMonkey2SpriteVariants_variant1:;
    /* data: db $7A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  KikiTheMonkey2SpriteVariants_variant2:;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  KikiTheMonkey2SpriteVariants_variant3:;
    /* data: db $7C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $7E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  KikiTheMonkey2SpriteVariants_variant4:;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 */;
}

void KikiTheMonkey1SpriteVariants(void) {
  KikiTheMonkey1SpriteVariants_variant0:;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $78, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  KikiTheMonkey1SpriteVariants_variant1:;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $7A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  KikiTheMonkey1SpriteVariants_variant2:;
    /* data: db $72, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $70, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  KikiTheMonkey1SpriteVariants_variant3:;
    /* data: db $7E, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $7C, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  KikiTheMonkey1SpriteVariants_variant4:;
    /* data: db $76, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $74, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void KikiTheMonkeyEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    gb.regs.de = 0x5716;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto KikiTheMonkeyEntityHandler_render;
    gb.regs.de = 0x572A;
  KikiTheMonkeyEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto KikiTheMonkeyEntityHandler_jr_5874;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, 0x0E);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x5830;
    RenderActiveEntitySpritesPair();
    CopyEntityPositionToActivePosition();
  KikiTheMonkeyEntityHandler_jr_5874:;
    ReturnIfNonInteractive_07();
    AddEntityZSpeedToPos_07();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto KikiTheMonkeyEntityHandler_jr_5891;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  KikiTheMonkeyEntityHandler_jr_5891:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_58A8(); return;
        case 0x01: func_007_591A(); return;
        case 0x02: func_007_5934(); return;
        case 0x03: func_007_5951(); return;
        case 0x04: func_007_5997(); return;
        case 0x05: func_007_5AAC(); return;
        case 0x06: func_007_5B25(); return;
        case 0x07: func_007_5B69(); return;
        case 0x08: func_007_5BD9(); return;
        case 0x09: func_007_5BF0(); return;
    }
}

void func_007_58A8(void) {
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_007_58DE(); return; };
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_58A8_jr_58C9;
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) { KikiOpenDialog_return(); return; };
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) { KikiOpenDialog_return(); return; };
  func_007_58A8_jr_58C9:;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    IncrementEntityState();
    gb_write(gb.regs.hl, 5);
    /* ld_dialog_low a, Dialog160 */;
}

void KikiOpenDialog(void) {
    OpenDialogInTable1();
    gb.regs.a = 0x14;
    gb_write(0xC5AB, gb.regs.a);
  KikiOpenDialog_return:;
    return;
}

void jr_007_58DE(void) {
    PushLinkOutOfEntity_07();
    func_007_7D43();
    if (!GET_FLAG_C()) { func_007_58FA(); return; };
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto jr_007_58DE_jr_58F5;
    /* ld_dialog_low a, Dialog165 */;
    KikiOpenDialog();
    IncrementEntityState(); return;
  jr_007_58DE_jr_58F5:;
    /* ld_dialog_low a, Dialog161 */;
    KikiOpenDialog();
}

void func_007_58FA(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto func_007_58FA_ret_5919;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_007_58FA_ret_5919;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
  func_007_58FA_ret_5919:;
    return;
}

void func_007_591A(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    IncrementEntityState();
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_591A_jr_592E;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    return;
  func_007_591A_jr_592E:;
    gb_write(gb.regs.hl, gb.regs.b);
    /* ld_dialog_low a, Dialog161 */;
    KikiOpenDialog(); return;
}

void func_007_5934(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_5934_jr_5948;
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.a = 1;
    gb_write(0xFFF2, gb.regs.a);
    IncrementEntityState();
  func_007_5934_jr_5948:;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    return;
}

void KikiTheMonkey3SpriteVariants(void) {
  KikiTheMonkey3SpriteVariants_variant0:;
    /* data: db $9A, $17 */;
    /* data: db $9C, $17 */;
}

void func_007_5951(void) {
    gb.regs.a = 3;
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_5951_jr_596A;
    gb.regs.a = 0x36;
    gb_write(0xD368, gb.regs.a);
    gb_write(0xFFB0, gb.regs.a);
    GetEntitySlowTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState(); return;
  func_007_5951_jr_596A:;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto func_007_5951_jr_5973;
    /* ld_dialog_low a, Dialog162 */;
    KikiOpenDialog();
  func_007_5951_jr_5973:;
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    return;
}

void Data_007_5978(void) {
    /* data: db $48, $48, $48, $48, $48, $48, $48 */;
}

void Data_007_597F(void) {
    /* data: db $18, $20, $28, $30, $38, $40, $48 */;
}

void Data_007_5986(void) {
    /* data: db $00, $78, $28, $58, $40, $30, $60 */;
}

void Data_007_598D(void) {
    /* data: db $00, $00, $80, $80, $00, $80, $00 */;
}

void Data_007_5994(void) {
    /* data: db $10, $30, $20 */;
}

void func_007_5997(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    func_007_58FA();
    GetEntitySlowTransitionCountdown();
  func_007_5997_jr_59A1:;
    if (!GET_FLAG_Z()) { jr_007_59C8(); return; };
    gb.regs.a = 2;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.a = gb_read(0xD930);
    gb.regs.a = alu_or8(gb.regs.a, 0x10);
    gb_write(0xD930, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDC27, gb.regs.a);
    /* ld_dialog_low a, Dialog163 */;
    gb_write(0xC168, gb.regs.a);
    KikiOpenDialog();
    IncrementEntityState();
    gb_write(gb.regs.hl, 5);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  func_007_5997_jr_59C5:;
    gb_write(gb.regs.hl, 6);
    return;
}

void jr_007_59C8(void) {
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_007_59C8_jr_59D5;
    gb.regs.a = 5;
    gb_write(0xDBBA, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
  jr_007_59C8_jr_59D5:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) { jr_007_5A2A(); return; };
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 7);
  jr_007_59C8_jr_59E2:;
    if (GET_FLAG_Z()) { jr_007_5A2A(); return; };
    gb.regs.a = 0xAD;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { jr_007_5A2A(); return; };
    gb_push16(gb.regs.bc);
    func_007_733F();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0x5978;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x597F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5986;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x598D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 7);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.bc = gb_pop16();
}

void jr_007_5A2A(void) {
    GetEntitySlowTransitionCountdown();
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) return;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0x5994;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xFFCE, gb.regs.a);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_5A2A_jr_5A5F;
    gb_push16(gb.regs.bc);
    gb.regs.a = 0xDB;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 7;
    func_91D();
    gb.regs.bc = gb_pop16();
  jr_007_5A2A_jr_5A5F:;
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
    gb.regs.a = 0x0C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x0D;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1D;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xD7DA;
    gb_write(gb.regs.hl, 0xDB);
    gb.regs.a = 0x87;
    BackupObjectInRAM2();
    gb.regs.hl = 0xD7EA;
    gb_write(gb.regs.hl, 0xDB);
    gb.regs.a = 0x87;
    BackupObjectInRAM2();
    gb.regs.hl = 0xD7FA;
    gb_write(gb.regs.hl, 0xDB);
    gb.regs.a = 0x87;
    BackupObjectInRAM2(); return;
}

void func_007_5AAC(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_5B19(); return; };
    IncrementEntityState();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) { jr_007_5ADE(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = 0x10;
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_007_5AAC_jr_5AD1;
    gb.regs.e = 0xF0;
  func_007_5AAC_jr_5AD1:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, 0xF0);
    func_007_5B08(); return;
}

void jr_007_5ADE(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xD354);
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
    gb.regs.a = 0x14;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
}

void func_007_5B08(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_007_5B08_jr_5B14;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_007_5B08_jr_5B14:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
}

void jr_007_5B19(void) {
    func_007_58FA();
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) return;
    gb.regs.a = 4;
    SetEntitySpriteVariant(); return;
}

void func_007_5B25(void) {
    UpdateEntityPosWithSpeed_07();
    gb.regs.a = gb_read(0xFFEF);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) { ClearEntityStatus_07(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) goto func_007_5B25_jr_5B3B;
    ApplyEntityInteractionWithBackground_trampoline();
  func_007_5B25_jr_5B3B:;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_5B64(); return; };
    IncrementEntityState();
    gb_write(gb.regs.hl, 5);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) goto func_007_5B25_jr_5B59;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x10);
    return;
  func_007_5B25_jr_5B59:;
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
}

void jr_007_5B64(void) {
    gb.regs.a = 3;
    SetEntitySpriteVariant(); return;
}

void func_007_5B69(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_5BCA(); return; };
    gb.regs.a = gb_read(0xFF98);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFF99);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC168);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = 0x10;
    gb.regs.e = 0x10;
    if (!GET_FLAG_Z()) goto func_007_5B69_jr_5B94;
    gb.regs.a = 8;
    gb.regs.e = 8;
  func_007_5B69_jr_5B94:;
    gb_push16(gb.regs.de);
    ApplyVectorTowardsLink_trampoline();
    gb.regs.de = gb_pop16();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.a = gb_read(0xC168);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_5B69_jr_5BBE;
    gb.regs.a = gb_read(0xFFD7);
    GetEntitySpeedYAddress();
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    alu_cp8(gb.regs.a, 0x90);
    if (GET_FLAG_C()) goto func_007_5B69_jr_5BBE;
    ClearEntityStatus_07();
  func_007_5B69_jr_5BBE:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF98, gb.regs.a);
    IncrementEntityState();
    func_007_5B08();
}

void jr_007_5BCA(void) {
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb.regs.a = 2;
    if (GET_FLAG_Z()) goto jr_007_5BCA_jr_5BD6;
    gb.regs.a = 4;
  jr_007_5BCA_jr_5BD6:;
    SetEntitySpriteVariant(); return;
}

void func_007_5BD9(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_5BD9_jr_5BE8;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
    IncrementEntityState();
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_007_5BD9_jr_5BE8:;
    gb.regs.a = 3;
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_07(); return;
}

void func_007_5BF0(void) {
    return;
}

void BlooperSpriteVariants(void) {
  BlooperSpriteVariants_variant0:;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $6A, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  BlooperSpriteVariants_variant1:;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $68, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void BlooperEntityHandler(void) {
    gb.regs.de = 0x5AC5;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    ApplyRecoilIfNeeded_07();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_07();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC470;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BlooperEntityHandler_underwater;
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  BlooperEntityHandler_underwater:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: BlooperState0Handler(); return;
        case 0x01: BlooperState1Handler(); return;
    }
}

void BlooperState0Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BlooperState0Handler_skipSwimUp;
    GetEntityYDistanceToLink_07();
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto BlooperState0Handler_skipSwimUp;
    ClearEntitySpeed();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x25);
    GetEntityXDistanceToLink_07();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    IncrementEntityState();
    gb_write(gb.regs.hl, 1);
    return;
  BlooperState0Handler_skipSwimUp:;
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto BlooperState0Handler_skipUpdateSpeedY;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto BlooperState0Handler_decSpeedY;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  BlooperState0Handler_decSpeedY:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  BlooperState0Handler_skipUpdateSpeedY:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BlooperState0Handler_skipUpdateSpeedX;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto BlooperState0Handler_decSpeedX;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  BlooperState0Handler_decSpeedX:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  BlooperState0Handler_skipUpdateSpeedX:;
    return;
}

void BlooperSpeedXPerDirection(void) {
    /* data: db $01, $FF */;
}

void BlooperState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto BlooperState1Handler_skipIncrementState;
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  BlooperState1Handler_skipIncrementState:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto BlooperState1Handler_oddFrame;
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5B50;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  BlooperState1Handler_oddFrame:;
    gb.regs.a = 1;
    SetEntitySpriteVariant(); return;
}

void RenderSmashablePillar(void) {
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) goto RenderSmashablePillar_invisible;
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = gb_pop16();
  RenderSmashablePillar_loop:;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    alu_cp8(gb.regs.a, 0x7E);
    if (GET_FLAG_C()) goto RenderSmashablePillar_positiveY;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  RenderSmashablePillar_positiveY:;
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
    if (!GET_FLAG_Z()) goto RenderSmashablePillar_visibleSprite;
    gb.regs.de--;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
  RenderSmashablePillar_visibleSprite:;
    gb.regs.bc = gb_pop16();
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl++;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto RenderSmashablePillar_loop;
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    gb.regs.a = 0x0A;
    func_015_7964_trampoline(); return;
  RenderSmashablePillar_invisible:;
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    return;
}

void SmashablePillarSpriteVariants(void) {
  SmashablePillarSpriteVariants_variant0:;
    /* data: db $00, $00, $4C, OAM_GBC_PAL_7 | OAMF_PAL0, $00, $08, $4C, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F0, $00, $4A, OAM_GBC_PAL_7 | OAMF_PAL0, $F0, $08, $4A, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $E0, $00, $4A, OAM_GBC_PAL_7 | OAMF_PAL0, $E0, $08, $4A, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $D0, $00, $4A, OAM_GBC_PAL_7 | OAMF_PAL0, $D0, $08, $4A, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $C0, $00, $48, OAM_GBC_PAL_7 | OAMF_PAL0, $C0, $08, $48, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
  SmashablePillarSpriteVariants_variant1:;
    /* data: db $00, $00, $4A, OAM_GBC_PAL_7 | OAMF_PAL0, $00, $08, $4A, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F0, $00, $4A, OAM_GBC_PAL_7 | OAMF_PAL0, $F0, $08, $4A, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $E0, $00, $4A, OAM_GBC_PAL_7 | OAMF_PAL0, $E0, $08, $4A, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $D0, $00, $48, OAM_GBC_PAL_7 | OAMF_PAL0, $D0, $08, $48, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $C0, $00, $FF, OAM_GBC_PAL_7 | OAMF_PAL0, $C0, $08, $FF, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
  SmashablePillarSpriteVariants_variant2:;
    /* data: db $00, $00, $4A, OAM_GBC_PAL_7 | OAMF_PAL0, $00, $08, $4A, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F0, $00, $4A, OAM_GBC_PAL_7 | OAMF_PAL0, $F0, $08, $4A, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $E0, $00, $48, OAM_GBC_PAL_7 | OAMF_PAL0, $E0, $08, $48, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $D0, $00, $FF, OAM_GBC_PAL_7 | OAMF_PAL0, $D0, $08, $FF, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $C0, $00, $FF, OAM_GBC_PAL_7 | OAMF_PAL0, $C0, $08, $FF, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
  SmashablePillarSpriteVariants_variant3:;
    /* data: db $00, $00, $4A, OAM_GBC_PAL_7 | OAMF_PAL0, $00, $08, $4A, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F0, $00, $48, OAM_GBC_PAL_7 | OAMF_PAL0, $F0, $08, $48, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $E0, $00, $FF, OAM_GBC_PAL_7 | OAMF_PAL0, $E0, $08, $FF, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $D0, $00, $FF, OAM_GBC_PAL_7 | OAMF_PAL0, $D0, $08, $FF, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $C0, $00, $FF, OAM_GBC_PAL_7 | OAMF_PAL0, $C0, $08, $FF, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
  SmashablePillarSpriteVariants_variant4:;
    /* data: db $00, $00, $48, OAM_GBC_PAL_7 | OAMF_PAL0, $00, $08, $48, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $F0, $00, $FF, OAM_GBC_PAL_7 | OAMF_PAL0, $F0, $08, $FF, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $E0, $00, $FF, OAM_GBC_PAL_7 | OAMF_PAL0, $E0, $08, $FF, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $D0, $00, $FF, OAM_GBC_PAL_7 | OAMF_PAL0, $D0, $08, $FF, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $C0, $00, $FF, OAM_GBC_PAL_7 | OAMF_PAL0, $C0, $08, $FF, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
}

void SmashablePillarEntityHandler(void) {
    gb.regs.a = gb_read(0xFF99);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_C()) goto SmashablePillarEntityHandler_aboveLink;
    gb.regs.a = 1;
    gb_write(0xDEA8, gb.regs.a);
  SmashablePillarEntityHandler_aboveLink:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { SmashablePillarDebrisHandler(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { SmashablePillarDustHandler(); return; };
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SmashablePillarEntityHandler_roomTransition;
    gb.regs.hl = 0xC3E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
  SmashablePillarEntityHandler_roomTransition:;
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_C()) goto SmashablePillarEntityHandler_variant5End;
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5BD8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 0x0A;
    RenderSmashablePillar();
  SmashablePillarEntityHandler_variant5End:;
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    PushLinkOutOfEntity_07();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: SmashablePillarState0Handler(); return;
        case 0x01: SmashablePillarState1Handler(); return;
        case 0x02: SmashablePillarState2Handler(); return;
        case 0x03: SmashablePillarState3Handler(); return;
        case 0x04: SmashablePillarState4Handler(); return;
        case 0x05: SmashablePillarState5Handler(); return;
    }
}

void SmashablePillarState0Handler(void) {
    return;
}

void SmashablePillarState1Handler(void) {
    func_007_5EEA();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { SmashablePillarShakeScreen(); return; };
    IncrementEntityState(); return;
}

void SmashablePillarShakeScreen(void) {
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto SmashablePillarShakeScreen_shakeRight;
    gb.regs.e = 2;
  SmashablePillarShakeScreen_shakeRight:;
    gb.regs.a = gb.regs.e;
    gb_write(0xC155, gb.regs.a);
    return;
}

void SmashablePillarState2Handler(void) {
    func_007_5EEA();
    gb.regs.a = gb_read(0xFFE7);
    SmashablePillarShakeScreen();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto SmashablePillarState2Handler_spawnDebrisEnd;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { SmashablePillarDestroyed(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto SmashablePillarState2Handler_spawnDebrisEnd;
    SmashablePillarSpawnDebris();
  SmashablePillarState2Handler_spawnDebrisEnd:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto SmashablePillarState2Handler_return;
    gb.regs.a = 0xA7;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto SmashablePillarState2Handler_return;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb.regs.hl = 0xFFD8;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 1);
  SmashablePillarState2Handler_return:;
    return;
}

void SmashablePillarDestroyed(void) {
    gb.regs.a = 0;
    gb_write(0xC155, gb.regs.a);
    gb.regs.a = gb_read(0xDC1A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xDC1A, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto SmashablePillarDestroyed_lastPillar;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState(); return;
  SmashablePillarDestroyed_lastPillar:;
    func_007_6E7F();
    ClearEntityStatus_07(); return;
}

void SmashablePillarState3Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SmashablePillarState3Handler_skipIncrementState;
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 8;
    gb_write(0xDC3D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC16B, gb.regs.a);
    gb_write(0xC16C, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
    IncrementEntityState(); return;
  SmashablePillarState3Handler_skipIncrementState:;
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto SmashablePillarState3Handler_shakeRight;
    gb.regs.e = 2;
  SmashablePillarState3Handler_shakeRight:;
    gb.regs.a = gb.regs.e;
    gb_write(0xC155, gb.regs.a);
}

void func_007_5EEA(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC111, gb.regs.a);
    return;
}

void SmashablePillarState4Handler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC155, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SmashablePillarState4Handler_skipCollapseTower;
    func_007_6E7F();
    gb.regs.hl = 0xDC13;
    gb_write(gb.regs.hl, alu_set(2, gb_read(gb.regs.hl)));
    ClearEntityStatus_07(); return;
  SmashablePillarState4Handler_skipCollapseTower:;
    func_007_5EEA(); return;
}

void Data_007_5F09(void) {
    /* data: db $00, $02, $04, $06, $06, $04, $02, $00 */;
}

void SmashablePillarState5Handler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC156, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SmashablePillarState5Handler_skipClearStatus;
    ClearEntityStatus_07(); return;
  SmashablePillarState5Handler_skipClearStatus:;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5F09;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC156, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto SmashablePillarState5Handler_skipSpawnDebris;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto SmashablePillarState5Handler_skipSpawnDebris;
    SmashablePillarSpawnDebris();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  SmashablePillarState5Handler_skipSpawnDebris:;
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) goto SmashablePillarState5Handler_return;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto SmashablePillarState5Handler_return;
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x0C);
  SmashablePillarState5Handler_return:;
    return;
}

void SmashablePillarDustSpriteVariants(void) {
  SmashablePillarDustSpriteVariants_variant0:;
    /* data: db $30, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $30, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  SmashablePillarDustSpriteVariants_variant1:;
    /* data: db $32, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $32, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
}

void SmashablePillarDustHandler(void) {
    gb.regs.de = 0x5E09;
    RenderActiveEntitySpritesPair();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 1;
    SetEntitySpriteVariant(); return;
}

void SmashablePillarSpawnDebris(void) {
    gb.regs.a = 0xA7;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) goto SmashablePillarSpawnDebris_return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xD1);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x70);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb.regs.hl = 0xFFD8;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
  SmashablePillarSpawnDebris_return:;
    return;
}

void SmashablePillarDebrisSpriteVariants(void) {
  SmashablePillarDebrisSpriteVariants_variant0:;
    /* data: db $16, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  SmashablePillarDebrisSpriteVariants_variant1:;
    /* data: db $16, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void SmashablePillarDebrisZSpeeds(void) {
    /* data: db $18, $10, $0C, $08 */;
}

void SmashablePillarDebrisXSpeeds(void) {
    /* data: db $0C, $F4, $0C, $F4 */;
}

void SmashablePillarDebrisYSpeeds(void) {
    /* data: db $F4, $F4, $0C, $0C */;
}

void SmashablePillarDebrisHandler(void) {
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.de = 0x5E61;
    RenderActiveEntitySprite();
    UpdateEntityPosWithSpeed_07();
    AddEntityZSpeedToPos_07();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5E65;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5E69;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5E6D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void WreckingBallSprite(void) {
    /* data: db $4E, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $4E, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void WreckingBallEntityHandler(void) {
  WreckingBallEntityHandler_default:;
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { notLifted(); return; };
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto WreckingBallEntityHandler_jr_6019;
    gb.regs.a = 0x10;
    gb_write(0xC5AE, gb.regs.a);
  WreckingBallEntityHandler_jr_6019:;
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
}

void notLifted(void) {
    gb.regs.de = 0x5ED4;
    RenderActiveEntitySpritesPair();
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF6);
    gb_write(0xDC17, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xDC18, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb_write(0xDC19, gb.regs.a);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) return;
    DecrementEntityIgnoreHitsCountdown();
    label_3B70();
    UpdateEntityPosWithSpeed_07();
    AddEntityZSpeedToPos_07();
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
    if (GET_FLAG_Z()) goto notLifted_hitGroundEnd;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cpl();
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_C()) goto notLifted_stopBouncing;
    gb_push16(gb.regs.af);
    gb.regs.a = 0x17;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    goto notLifted_stopBouncingEnd;
  notLifted_stopBouncing:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  notLifted_stopBouncingEnd:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
  notLifted_hitGroundEnd:;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    gb.regs.e = 3;
    gb.regs.a = gb.regs.e;
    gb_write(0xFFED, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFFEF, gb.regs.a);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFED);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(0xFFEF, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: WreckingBallState0Handler(); return;
        case 0x01: WreckingBallState1Handler(); return;
        case 0x02: WreckingBallState2Handler(); return;
    }
}

void WreckingBallState0Handler(void) {
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto WreckingBallState0Handler_notTouchingGround;
    gb.regs.hl = 0xC250;
    _updateSpeed();
    gb.regs.hl = 0xC240;
  WreckingBallState0Handler_updateSpeed:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto WreckingBallState0Handler_notTouchingGround;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto WreckingBallState0Handler_positiveSpeed;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  WreckingBallState0Handler_positiveSpeed:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  WreckingBallState0Handler_notTouchingGround:;
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto WreckingBallState0Handler_return;
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WreckingBallState0Handler_return;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto WreckingBallState0Handler_checkAButtonSlot;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto WreckingBallState0Handler_notGrabbing;
    goto WreckingBallState0Handler_return;
  WreckingBallState0Handler_checkAButtonSlot:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto WreckingBallState0Handler_return;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto WreckingBallState0Handler_return;
  WreckingBallState0Handler_notGrabbing:;
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WreckingBallState0Handler_return;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC3CF, gb.regs.a);
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto WreckingBallState0Handler_return;
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
  WreckingBallState0Handler_return:;
    return;
}

void WreckingBallState1Handler(void) {
    return;
}

void WreckingBallState2Handler(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WreckingBallState2Handler_touchingGround;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto WreckingBallState2Handler_noCollision;
  WreckingBallState2Handler_collided:;
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  WreckingBallState2Handler_touchingGround:;
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  WreckingBallState2Handler_noCollision:;
    ReturnIfNonInteractive_07();
    gb.regs.a = 0x0B;
    gb_write(0xC19E, gb.regs.a);
    label_3B7B();
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
  WreckingBallState2Handler_loop:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto WreckingBallState2Handler_hitPillarEnd;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xA7);
    if (!GET_FLAG_Z()) goto WreckingBallState2Handler_hitPillarEnd;
    gb_push16(gb.regs.de);
    WreckingBallHandlePillarCollision();
    gb.regs.de = gb_pop16();
  WreckingBallState2Handler_hitPillarEnd:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto WreckingBallState2Handler_loop;
    return;
}

void WreckingBallHandlePillarCollision(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto WreckingBallHandlePillarCollision_return;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto WreckingBallHandlePillarCollision_return;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_C()) goto WreckingBallHandlePillarCollision_return;
    WreckingBallState2Handler_collided();
    gb.regs.a = 0x25;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = 0x0B;
    gb_write(0xFFF2, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto WreckingBallHandlePillarCollision_return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
  WreckingBallHandlePillarCollision_return:;
    return;
}

void SideViewWeightsSpriteVariants(void) {
  SideViewWeightsSpriteVariants_variant0:;
    /* data: db $50, OAM_GBC_PAL_7 | OAMF_PAL0 */;
    /* data: db $50, OAM_GBC_PAL_7 | OAMF_PAL0 | OAMF_XFLIP */;
}

void SideViewWeightsEntityHandler(void) {
    gb.regs.de = 0x60AC;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    func_007_639E();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SideViewWeightsEntityHandler_jr_61FA;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_6248(); return; };
    func_007_631C();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xF0);
    gb.regs.e = 0x10;
  SideViewWeightsEntityHandler_jr_61FA:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_007_620E(); return; };
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) { jr_007_620E(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto SideViewWeightsEntityHandler_jr_620D;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  SideViewWeightsEntityHandler_jr_620D:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_007_620E(void) {
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 2);
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.af);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_620E_jr_6246;
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.b);
    func_007_631C();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
  jr_007_620E_jr_6246:;
    jr_007_625F(); return;
}

void jr_007_6248(void) {
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_6256(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_007_6248_jr_6255;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_007_6248_jr_6255:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_007_6256(void) {
    func_007_631C();
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
}

void jr_007_625F(void) {
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) { ret_007_62D1(); return; };
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_007_62D1(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_007_62D2(); return; };
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x4D);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_625F_jr_62A2;
    gb_push16(gb.regs.bc);
    gb.regs.a = 0x4D;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 7;
    func_91D();
    gb.regs.bc = gb_pop16();
  jr_007_625F_jr_62A2:;
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
    gb.regs.a = 0x44;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x54;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x45;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x55;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
}

void ret_007_62D1(void) {
    return;
}

void jr_007_62D2(void) {
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 4);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_62D2_jr_62EC;
    gb_push16(gb.regs.bc);
    gb.regs.a = 4;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 7;
    func_91D();
    gb.regs.bc = gb_pop16();
  jr_007_62D2_jr_62EC:;
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
    gb.regs.a = 0x7E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void func_007_631C(void) {
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.e = gb.regs.b;
    gb.regs.d = gb.regs.b;
}

void jr_007_6327(void) {
    loop_start: ;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_6327_jr_6341;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xA6);
    if (!GET_FLAG_Z()) goto jr_007_6327_jr_6341;
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { ret_007_6347(); return; };
  jr_007_6327_jr_6341:;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { goto loop_start; };
}

void ret_007_6347(void) {
    return;
}

void Data_007_6348(void) {
    /* data: db $00, $00, $50, $07, $00, $08, $52, $07, $00, $10, $52, $27, $00, $18, $50, $27 */;
}

void SideViewPlatformHorizontalEntityHandler(void) {
}

void SideViewPlatformVerticalEntityHandler(void) {
    gb.regs.hl = 0x6348;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    ReturnIfNonInteractive_07();
    GetEntityTransitionCountdown();
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) { func_007_639E(); return; };
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xA4);
    if (GET_FLAG_Z()) { label_007_63FB(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x63F7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x63F9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { func_007_639E(); return; };
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x6A);
}

void func_007_639E(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFFEE);
    gb_push16(gb.regs.af);
    UpdateEntityPosWithSpeed_07();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(0xFFE8, gb.regs.a);
    ApplyEntityInteractionWithBackground_trampoline();
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto func_007_639E_ret_63F6;
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto func_007_639E_ret_63F6;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_639E_ret_63F6;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = gb_read(0xFF9A);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xFFE8);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb_push16(gb.regs.bc);
    CheckPositionForMapTransition_trampoline();
    gb.regs.bc = gb_pop16();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC147, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
  func_007_639E_ret_63F6:;
    return;
}

void Data_007_63F7(void) {
    /* data: db $01, $FF */;
}

void Data_007_63F9(void) {
    /* data: db $06, $FA */;
}

void label_007_63FB(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x63F7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x63F9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto label_007_63FB_jr_641F;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x6A);
  label_007_63FB_jr_641F:;
    func_007_639E(); return;
}

void Data_007_6422(void) {
    /* data: db $00, $00, $50, $07, $00, $08, $52, $07, $00, $10, $52, $27, $00, $18, $50, $27 */;
}

void SideViewPlatformEntityHandler(void) {
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) goto SideViewPlatformEntityHandler_jr_643B;
    gb.regs.a = 4;
    gb_write(0xFFF5, gb.regs.a);
  SideViewPlatformEntityHandler_jr_643B:;
    gb.regs.hl = 0x6422;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    ReturnIfNonInteractive_07();
    func_007_639E();
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_6489(); return; };
    gb.regs.e = 4;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x3B);
    if (GET_FLAG_Z()) goto SideViewPlatformEntityHandler_jr_6466;
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 8);
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_6489(); return; };
    gb.regs.e = 4;
  SideViewPlatformEntityHandler_jr_6466:;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto SideViewPlatformEntityHandler_jr_6478;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto SideViewPlatformEntityHandler_jr_6478;
    gb.regs.a = 0x11;
    gb_write(0xFFF4, gb.regs.a);
  SideViewPlatformEntityHandler_jr_6478:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_007_6488(); return; };
    GetEntitySpeedYAddress();
  SideViewPlatformEntityHandler_jr_6481:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) { ret_007_6488(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void ret_007_6488(void) {
    return;
}

void jr_007_6489(void) {
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void Data_007_6493(void) {
    /* data: db $98, $00, $53, $7F */;
    /* data: db $98, $20, $53, $7F */;
    /* data: db $98, $40, $53, $7F */;
    /* data: db $98, $60, $53, $7F */;
    /* data: db $98, $80, $53, $7F */;
    /* data: db $98, $A0, $53, $7F */;
    /* data: db $98, $C0, $53, $7F */;
    /* data: db $98, $E0, $53, $7F */;
    /* data: db $99, $00, $53, $7F */;
    /* data: db $99, $20, $53, $7F */;
    /* data: db $99, $40, $53, $7F */;
    /* data: db $99, $60, $53, $7F */;
    /* data: db $99, $80, $53, $7F */;
    /* data: db $99, $A0, $53, $7F */;
    /* data: db $99, $C0, $53, $7F */;
    /* data: db $99, $E0, $53, $7F */;
    /* data: db $9A, $00, $53, $7F */;
    /* data: db $9A, $20, $53, $7F */;
}

void Data_007_64F6(void) {
    /* data: db $98, $00, $53, TILE */;
    /* data: db $98, $20, $53, TILE */;
    /* data: db $98, $40, $53, TILE */;
    /* data: db $98, $60, $53, TILE */;
    /* data: db $98, $80, $53, TILE */;
    /* data: db $98, $A0, $53, TILE */;
    /* data: db $98, $C0, $53, TILE */;
    /* data: db $98, $E0, $53, TILE */;
    /* data: db $99, $00, $53, TILE */;
    /* data: db $99, $20, $53, TILE */;
    /* data: db $99, $40, $53, TILE */;
    /* data: db $99, $60, $53, TILE */;
    /* data: db $99, $80, $53, TILE */;
    /* data: db $99, $A0, $53, TILE */;
    /* data: db $99, $C0, $53, TILE */;
    /* data: db $99, $E0, $53, TILE */;
    /* data: db $9A, $00, $53, TILE */;
    /* data: db $9A, $20, $53, TILE */;
}

void label_007_6523(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xC12F, gb.regs.a);
    gb_write(0xC12E, gb.regs.a);
    gb.regs.hl = 0xD7B2;
    gb_write(gb.regs.hl, alu_res(5, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { jr_007_659D(); return; };
    if (GET_FLAG_Z()) { jr_007_659D(); return; };
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.d = gb.regs.b;
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0x6493;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb.regs.l;
    gb.regs.b = gb.regs.h;
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = 8;
  label_007_6523_loop_655E:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto label_007_6523_loop_655E;
    gb_write(gb.regs.hl, 0);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_6596(); return; };
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xDD38);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xDD38, gb.regs.a);
    gb.regs.d = gb.regs.b;
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0x6493;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb.regs.l;
    gb.regs.b = gb.regs.h;
    gb.regs.hl = 0xDD39;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = 8;
  label_007_6523_loop_658E:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto label_007_6523_loop_658E;
    gb_write(gb.regs.hl, 0);
}

void jr_007_6596(void) {
    gb.regs.bc = gb_pop16();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void jr_007_659D(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.a = alu_add8(gb.regs.a, (0x0150 & 0xFF));
    OpenDialogInTable1();
    gb.regs.a = 0xE4;
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_65CB(); return; };
    gb.regs.de = 0xDCC0;
    gb.regs.hl = 0xFF70;
    gb.regs.ime = false;
  jr_007_659D_loop_65B9:;
    gb_write(gb.regs.hl, 2);
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto jr_007_659D_loop_65B9;
    gb.regs.a = 1;
    gb_write(0xDE79, gb.regs.a);
    gb.regs.ime = true;
}

void jr_007_65CB(void) {
    ClearEntityStatus_07(); return;
}

void GoombaSpriteVariants(void) {
  GoombaSpriteVariants_variant0:;
    /* data: db $4A, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $4C, OAM_GBC_PAL_2 | OAMF_PAL0 */;
  GoombaSpriteVariants_variant1:;
    /* data: db $4C, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $4A, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  GoombaSpriteVariants_variant2:;
    /* data: db $4E, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $4E, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void GoombaEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_007_6523(); return; };
    gb.regs.de = 0x64E0;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    ApplyRecoilIfNeeded_07();
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_007_6693(); return; };
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_6606(); return;
        case 0x01: func_007_6649(); return;
        case 0x02: func_007_666B(); return;
    }
}

void Data_007_65FE(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void Data_007_6602(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void func_007_6606(void) {
    label_3B70();
    func_007_66F2();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_6647(); return; };
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto func_007_6606_jr_662A;
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityDirectionToLink_07();
    jr_007_6630(); return;
  func_007_6606_jr_662A:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
}

void jr_007_6630(void) {
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x65FE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x6602;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
}

void jr_007_6647(void) {
    label_007_6660(); return;
}

void func_007_6649(void) {
    label_3B70();
    func_007_66F2();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_6649_jr_665A;
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  func_007_6649_jr_665A:;
    UpdateEntityPosWithSpeed_07();
    ApplyEntityInteractionWithBackground_trampoline();
}

void label_007_6660(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void func_007_666B(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC2);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_666B_jr_668E;
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x2D);
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
  func_007_666B_jr_668E:;
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void label_007_6693(void) {
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_007_666B(); return; };
    label_3B70();
    func_007_66FE();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_66A6(); return;
        case 0x01: func_007_66B8(); return;
    }
}

void func_007_66A6(void) {
    GetEntityXDistanceToLink_07();
    gb.regs.a = 8;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto func_007_66A6_jr_66B0;
    gb.regs.a = 0xF8;
  func_007_66A6_jr_66B0:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
}

void func_007_66B8(void) {
    UpdateEntityPosWithSpeed_07();
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto func_007_66B8_jr_66D4;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  func_007_66B8_jr_66D4:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto func_007_66B8_jr_66EE;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.b);
    label_007_6660(); return;
  func_007_66B8_jr_66EE:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant(); return;
}

void func_007_66F2(void) {
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { CheckLinkCollisionWithEnemy_trampoline(); return; };
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) { CheckLinkCollisionWithEnemy_trampoline(); return; };
    return;
}

void func_007_66FE(void) {
    CheckLinkCollisionWithEnemy_trampoline(); return;
}

void PeaHatSpriteVariants(void) {
  PeaHatSpriteVariants_variant0:;
    /* data: db $40, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $40, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
  PeaHatSpriteVariants_variant1:;
    /* data: db $42, OAM_GBC_PAL_2 | OAMF_PAL0 */;
    /* data: db $42, OAM_GBC_PAL_2 | OAMF_PAL0 | OAMF_XFLIP */;
}

void PeaHatEntityHandler(void) {
    gb.regs.de = 0x661E;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    ApplyRecoilIfNeeded_07();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_07();
    AddEntityZSpeedToPos_07();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: PeaHatRestingHandler(); return;
        case 0x01: PeaHatTakingOffHandler(); return;
        case 0x02: PeaHatFlyingHandler(); return;
    }
}

void PeaHatRestingHandler(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PeaHatRestingHandler_grounded;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto PeaHatRestingHandler_groundedEnd;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    goto PeaHatRestingHandler_groundedEnd;
  PeaHatRestingHandler_grounded:;
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
  PeaHatRestingHandler_groundedEnd:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto PeaHatRestingHandler_updateYSpeedEnd;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PeaHatRestingHandler_updateXSpeedEnd;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto PeaHatRestingHandler_positiveX;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  PeaHatRestingHandler_positiveX:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  PeaHatRestingHandler_updateXSpeedEnd:;
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PeaHatRestingHandler_updateYSpeedEnd;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto PeaHatRestingHandler_positiveY;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  PeaHatRestingHandler_positiveY:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  PeaHatRestingHandler_updateYSpeedEnd:;
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto PeaHatRestingHandler_skipIncrementState;
    IncrementEntityState();
  PeaHatRestingHandler_skipIncrementState:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PeaHatRestingHandler_decAnimationSpeedEnd;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto PeaHatRestingHandler_decAnimationSpeedEnd;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  PeaHatRestingHandler_decAnimationSpeedEnd:;
    AnimatePeaHat(); return;
}

void PeaHatTakingOffHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) goto PeaHatTakingOffHandler_skipIncrementState;
    GetEntitySlowTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x80);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState(); return;
  PeaHatTakingOffHandler_skipIncrementState:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { AnimatePeaHat(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void AnimatePeaHat(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void PeaHatYSpeeds(void) {
    /* data: db $00, $05, $0A, $0D */;
}

void PeaHatXSpeeds(void) {
    /* data: db $0E, $0D, $0A, $05, $00, $FB, $F6, $F3, $F2, $F3, $F6, $FB, $00, $05, $0A, $0D */;
}

void PeaHatFlyingHandler(void) {
    AnimatePeaHat();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto PeaHatFlyingHandler_reachedMaxHeight;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto PeaHatFlyingHandler_return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  PeaHatFlyingHandler_return:;
    return;
  PeaHatFlyingHandler_reachedMaxHeight:;
    GetEntitySlowTransitionCountdown();
    if (!GET_FLAG_Z()) goto PeaHatFlyingHandler_skipIncrementState;
    gb_write(gb.regs.hl, 0x60);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  PeaHatFlyingHandler_skipIncrementState:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_C()) goto PeaHatFlyingHandler_updateSpeedEnd;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x66DE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x66E2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto PeaHatFlyingHandler_updateSpeedEnd;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  PeaHatFlyingHandler_updateSpeedEnd:;
    return;
}

void SnakeSpriteVariants(void) {
  SnakeSpriteVariants_variant0:;
    /* data: db $44, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $46, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  SnakeSpriteVariants_variant1:;
    /* data: db $44, OAM_GBC_PAL_3 | OAMF_PAL0 */;
    /* data: db $48, OAM_GBC_PAL_3 | OAMF_PAL0 */;
  SnakeSpriteVariants_variant2:;
    /* data: db $46, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $44, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
  SnakeSpriteVariants_variant3:;
    /* data: db $48, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $44, OAM_GBC_PAL_3 | OAMF_PAL0 | OAMF_XFLIP */;
}

void SnakeEntityHandler(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFF1, gb.regs.a);
    gb.regs.de = 0x6763;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    ApplyRecoilIfNeeded_07();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_07();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SnakeEntityHandler_noCollision;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 8);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x20);
  SnakeEntityHandler_noCollision:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: SnakeState0Handler(); return;
        case 0x01: SnakeState1Handler(); return;
        case 0x02: SnakeState2Handler(); return;
    }
}

void SnakeXSpeeds(void) {
    /* data: db $08, $F8, $00, $00 */;
}

void SnakeYSpeeds(void) {
    /* data: db $00, $00, $F8, $08 */;
}

void SnakeDirections(void) {
    /* data: db $02, $00, $FF, $FF */;
}

void SnakeState0Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SnakeState0Handler_skipIncrementState;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
  SnakeState0Handler_updateSpeed:;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x67AC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x67B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x67B4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto SnakeState0Handler_return;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  SnakeState0Handler_return:;
    return;
  SnakeState0Handler_skipIncrementState:;
    ClearEntitySpeed();
    SnakeStartDashIfNeeded();
    AnimateSnake(); return;
}

void SnakeState1Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SnakeState1Handler_skipIncrementState;
    gb_write(gb.regs.hl, 0x18);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  SnakeState1Handler_skipIncrementState:;
    SnakeStartDashIfNeeded();
}

void AnimateSnake(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void SnakeStartDashIfNeeded(void) {
    GetEntityPrivateCountdown1();
    if (!GET_FLAG_Z()) goto SnakeStartDashIfNeeded_return;
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto SnakeStartDashIfNeeded_verticalDashEnd;
    GetEntityYDistanceToLink_07();
  SnakeStartDashIfNeeded_updateSpeedAndIncrementState:;
    SnakeState0Handler_updateSpeed();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sla(gb_read(gb.regs.hl)));
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, alu_sla(gb_read(gb.regs.hl)));
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
  SnakeStartDashIfNeeded_return:;
    return;
  SnakeStartDashIfNeeded_verticalDashEnd:;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto SnakeStartDashIfNeeded_return2;
    GetEntityXDistanceToLink_07();
    goto SnakeStartDashIfNeeded_updateSpeedAndIncrementState;
  SnakeStartDashIfNeeded_return2:;
    return;
}

void SnakeState2Handler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SnakeState2Handler_skipIncrementState;
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x40);
  SnakeState2Handler_skipIncrementState:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void Data_007_6942(void) {
    /* data: db $3A, $D5, $D6, $D7, $3A, $3A, $CD, $E1, $CE, $3A, $03, $09, $03, $09, $C6, $1B */;
    /* data: db $1B, $03, $03, $09, $0E, $1B, $1B, $1B, $1B */;
}

void Data_007_695B(void) {
    /* data: db $02, $12, $22, $32 */;
}

void Data_007_695F(void) {
    /* data: db $42, $00, $08, $10, $18, $20, $28, $30, $38, $40, $48 */;
}

void label_007_696A(void) {
    ReturnIfNonInteractive_07();
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_697F(); return;
        case 0x01: func_007_698A(); return;
        case 0x02: func_007_6996(); return;
        case 0x03: func_007_69A2(); return;
    }
}

void func_007_697F(void) {
    PlayDoorUnlockedSfx();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x28);
    IncrementEntityState(); return;
}

void func_007_698A(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x4C;
    gb_write(0xD368, gb.regs.a);
    IncrementEntityState(); return;
}

void func_007_6996(void) {
    gb.regs.a = 0x1D;
    gb_write(0xFFF4, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState(); return;
}

void func_007_69A2(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.e = 0;
    gb.regs.a = alu_and8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto func_007_69A2_jr_69AC;
    gb.regs.e = 2;
  func_007_69A2_jr_69AC:;
    gb.regs.a = gb.regs.e;
    gb_write(0xC155, gb.regs.a);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) { label_007_69D0(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { label_007_6A34(); return; };
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
}

void label_007_69D0(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x695F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xFFCE, gb.regs.a);
    label_2887();
    gb.regs.hl = gb_pop16();
    gb.regs.d = gb.regs.h;
    gb.regs.e = gb.regs.l;
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 26;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x62;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x34;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall();
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_dec8(gb.regs.a);
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb_push16(gb.regs.af);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x695B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb.regs.l;
    gb.regs.b = gb.regs.h;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6942;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = 5;
  label_007_69D0_loop_6A23:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.h = gb.regs.b;
    gb.regs.l = gb.regs.c;
    gb.regs.a = 0x87;
    BackupObjectInRAM2();
    gb.regs.hl = gb_pop16();
    gb.regs.bc++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto label_007_69D0_loop_6A23;
    gb.regs.bc = gb_pop16();
    return;
}

void label_007_6A34(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC155, gb.regs.a);
    gb_write(0xC167, gb.regs.a);
    label_27DD();
    ClearEntityStatus_07(); return;
}

void MasterStalfosEntityHandler(void) {
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { label_007_696A(); return; };
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto MasterStalfosEntityHandler_jr_6A52;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    func_007_6ED0();
  MasterStalfosEntityHandler_jr_6A52:;
    func_007_6FB1();
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { label_007_7EAA(); return; };
    ReturnIfNonInteractive_07();
    label_394D();
    BossIntro();
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x16);
    if (!GET_FLAG_Z()) { jr_007_6A89(); return; };
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_C()) goto MasterStalfosEntityHandler_jr_6A84;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    IncrementEntityState();
    gb.regs.a = 9;
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF0, gb.regs.a);
    jr_007_6A89(); return;
  MasterStalfosEntityHandler_jr_6A84:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
}

void jr_007_6A89(void) {
    ApplyRecoilIfNeeded_07();
    AddEntityZSpeedToPos_07();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_6A89_jr_6AA6;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  jr_007_6A89_jr_6AA6:;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_C()) goto jr_007_6A89_jr_6AC0;
    label_3B65();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xC13E);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_007_6A89_jr_6AC0;
    CheckLinkCollisionWithEnemy_trampoline();
    label_3B70();
  jr_007_6A89_jr_6AC0:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_6ADF(); return;
        case 0x01: func_007_6AF5(); return;
        case 0x02: func_007_6B16(); return;
        case 0x03: func_007_6B68(); return;
        case 0x04: func_007_6BC8(); return;
        case 0x05: func_007_6BF4(); return;
        case 0x06: func_007_6C39(); return;
        case 0x07: func_007_6D18(); return;
        case 0x08: func_007_6D5F(); return;
        case 0x09: func_007_6D7F(); return;
        case 0x0A: func_007_6D9F(); return;
        case 0x0B: func_007_6DD9(); return;
        case 0x0C: func_007_6DF6(); return;
        case 0x0D: func_007_6E58(); return;
    }
}

void func_007_6ADF(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_6ADF_ret_6AF4;
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x6F);
  func_007_6ADF_ret_6AF4:;
    return;
}

void func_007_6AF5(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_007_6B08(); return; };
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_007_6AF5_jr_6B02;
    gb.regs.a = 8;
    gb_write(0xFFF2, gb.regs.a);
  func_007_6AF5_jr_6B02:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void jr_007_6B08(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_007_6B15(); return; };
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    IncrementEntityState();
}

void ret_007_6B15(void) {
    return;
}

void func_007_6B16(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_007_6B33(); return; };
    /* ld_dialog_low e, Dialog112 */;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x92);
    if (GET_FLAG_Z()) goto func_007_6B16_jr_6B2F;
    alu_cp8(gb.regs.a, 0x84);
    if (GET_FLAG_Z()) goto func_007_6B16_jr_6B2F;
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_007_6B33(); return; };
    /* ld_dialog_low e, Dialog114 */;
  func_007_6B16_jr_6B2F:;
    gb.regs.a = gb.regs.e;
    OpenDialogInTable1();
}

void jr_007_6B33(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_6B45(); return; };
    gb_write(gb.regs.hl, 0xA0);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x95);
    if (GET_FLAG_Z()) { jr_007_6B42(); return; };
  jr_007_6B33_jr_6B40:;
    gb_write(gb.regs.hl, 0x20);
}

void jr_007_6B42(void) {
    IncrementEntityState(); return;
}

void jr_007_6B45(void) {
    gb.regs.hl = 0xD48E;
    gb_write(gb.regs.hl, 0xF0);
    gb.regs.hl = 0xD48B;
    gb_write(gb.regs.hl, 0xF8);
    gb.regs.hl = 0xD48D;
    gb_write(gb.regs.hl, 0xF0);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) goto jr_007_6B45_ret_6B67;
    gb.regs.hl = 0xD48E;
    gb_write(gb.regs.hl, 0xF2);
    gb.regs.hl = 0xD48B;
    gb_write(gb.regs.hl, 0xFA);
    gb.regs.hl = 0xD48D;
    gb_write(gb.regs.hl, 0xF2);
  jr_007_6B45_ret_6B67:;
    return;
}

void func_007_6B68(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_6B68_jr_6B72;
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState(); return;
  func_007_6B68_jr_6B72:;
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto func_007_6B68_jr_6B76;
  func_007_6B68_jr_6B76:;
    GetEntityTransitionCountdown();
    gb.regs.a = alu_and8(gb.regs.a, 0x40);
    if (GET_FLAG_Z()) { func_007_6BA3(); return; };
}

void func_007_6B7D(void) {
    func_007_6EF0();
    gb.regs.hl = 0xD488;
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = 0xD489;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xD48A;
    gb_write(gb.regs.hl, 0xF0);
    gb.regs.hl = 0xD48B;
    gb_write(gb.regs.hl, 0xF8);
    gb.regs.hl = 0xD48D;
    gb_write(gb.regs.hl, 0xF3);
    gb.regs.hl = 0xD48C;
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xD487;
    gb_write(gb.regs.hl, 0);
    return;
}

void func_007_6BA3(void) {
    func_007_6EF0();
    gb.regs.hl = 0xD488;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xD489;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xD48A;
    gb_write(gb.regs.hl, 0xF8);
    gb.regs.hl = 0xD48B;
    gb_write(gb.regs.hl, 0xF8);
    gb.regs.hl = 0xD48D;
    gb_write(gb.regs.hl, 0xF0);
    gb.regs.hl = 0xD48C;
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xD487;
    gb_write(gb.regs.hl, 0);
    return;
}

void func_007_6BC8(void) {
    func_007_6EA2();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    IncrementEntityState();
}

void label_007_6BDF(void) {
    GetEntityXDistanceToLink_07();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
}

void func_007_6BE7(void) {
    func_007_6B7D();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    func_007_6BA3(); return;
}

void func_007_6BF4(void) {
    func_007_6EA2();
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto func_007_6BF4_jr_6C14;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x1C);
    alu_cp8(gb.regs.a, 0x38);
    if (!GET_FLAG_C()) goto func_007_6BF4_jr_6C14;
    IncrementEntityState();
    gb_write(gb.regs.hl, 6);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    return;
  func_007_6BF4_jr_6C14:;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_6BF4_jr_6C27;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    return;
  func_007_6BF4_jr_6C27:;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { func_007_6C33(); return; };
    gb.regs.a = gb_read(0xD489);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(0xD489, gb.regs.a);
}

void func_007_6C33(void) {
    UpdateEntityPosWithSpeed_07();
    ApplyEntityInteractionWithBackground_trampoline(); return;
}

void func_007_6C39(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_6C55(); return; };
}

void func_007_6C3E(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(6, gb_read(gb.regs.hl)));
    return;
}

void jr_007_6C55(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_007_6CB8(); return; };
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_C()) goto jr_007_6C55_jr_6C77;
    func_007_6BA3();
    gb.regs.a = 8;
    gb_write(0xD48C, gb.regs.a);
    gb.regs.a = 0xE0;
    gb_write(0xD48D, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD487, gb.regs.a);
    return;
  jr_007_6C55_jr_6C77:;
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) { jr_007_6C9E(); return; };
    alu_cp8(gb.regs.a, 0x17);
    if (!GET_FLAG_Z()) goto jr_007_6C55_jr_6C89;
    gb.regs.a = 0x27;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
  jr_007_6C55_jr_6C89:;
    gb.regs.a = 0xFF;
    gb_write(0xD487, gb.regs.a);
    gb.regs.a = 0xF0;
    gb_write(0xD48A, gb.regs.a);
    gb.regs.a = 0xF4;
    gb_write(0xD48B, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD488, gb.regs.a);
    return;
}

void jr_007_6C9E(void) {
    gb.regs.a = 3;
    gb_write(0xD487, gb.regs.a);
    gb.regs.a = 0xF8;
    gb_write(0xD48C, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xD48D, gb.regs.a);
    gb.regs.a = 0xF0;
    gb_write(0xD48A, gb.regs.a);
    gb.regs.a = 0xF0;
    gb_write(0xD48B, gb.regs.a);
    return;
}

void jr_007_6CB8(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_C()) goto jr_007_6CB8_jr_6CD7;
    func_007_6B7D();
    gb.regs.a = 1;
    gb_write(0xD489, gb.regs.a);
    gb.regs.a = 0xF8;
    gb_write(0xD48C, gb.regs.a);
    gb.regs.a = 0xE8;
    gb_write(0xD48D, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xD487, gb.regs.a);
    return;
  jr_007_6CB8_jr_6CD7:;
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) { jr_007_6CFE(); return; };
    alu_cp8(gb.regs.a, 0x17);
    if (!GET_FLAG_Z()) goto jr_007_6CB8_jr_6CE9;
    gb.regs.a = 0x27;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
  jr_007_6CB8_jr_6CE9:;
    gb.regs.a = 0xFF;
    gb_write(0xD487, gb.regs.a);
    gb.regs.a = 0xF0;
    gb_write(0xD48A, gb.regs.a);
    gb.regs.a = 0xF0;
    gb_write(0xD48B, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xD488, gb.regs.a);
    return;
}

void jr_007_6CFE(void) {
    gb.regs.a = 2;
    gb_write(0xD487, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xD48C, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xD48D, gb.regs.a);
    gb.regs.a = 0xF0;
    gb_write(0xD48A, gb.regs.a);
    gb.regs.a = 0xEC;
    gb_write(0xD48B, gb.regs.a);
    return;
}

void func_007_6D18(void) {
    func_007_6BE7();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_6D46(); return; };
    IncrementEntityState();
    func_007_733F();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_6D18_jr_6D3B;
    gb_write(gb.regs.hl, 0x28);
    gb.regs.a = 0x18;
    ApplyVectorTowardsLink_trampoline(); return;
  func_007_6D18_jr_6D3B:;
    gb.regs.a = 8;
    ApplyVectorTowardsLink_trampoline();
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, 0xF0);
    return;
}

void jr_007_6D46(void) {
    gb.regs.a = gb_read(0xD48E);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xD48E, gb.regs.a);
    gb.regs.a = gb_read(0xD48B);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xD48B, gb.regs.a);
    gb.regs.a = gb_read(0xD48D);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xD48D, gb.regs.a);
    return;
}

void func_007_6D5F(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_007_6D70(); return; };
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_6D5F_jr_6D6A;
    func_007_6C3E();
  func_007_6D5F_jr_6D6A:;
    func_007_6BE7();
    jr_007_6D46(); return;
}

void jr_007_6D70(void) {
    func_007_6C33();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    ret_007_6B15(); return;
}

void func_007_6D7F(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_6D7F_jr_6D9C;
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(6, gb_read(gb.regs.hl)));
    gb.regs.a = 0x28;
    gb_write(0xFFF2, gb.regs.a);
  func_007_6D7F_jr_6D9C:;
    func_007_6C33(); return;
}

void func_007_6D9F(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_6D9F_jr_6DA9;
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState(); return;
  func_007_6D9F_jr_6DA9:;
    gb.regs.hl = 0xD48B;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_007_6DB8(); return; };
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_6D9F_jr_6DB7;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_007_6D9F_jr_6DB7:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_007_6DB8(void) {
    gb.regs.hl = 0xD48D;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_007_6DC7(); return; };
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_6DB8_jr_6DC6;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_007_6DB8_jr_6DC6:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_007_6DC7(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 0x14);
    if (!GET_FLAG_C()) goto jr_007_6DC7_ret_6DD8;
    gb.regs.a = gb_read(0xD48E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_6DC7_ret_6DD8;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD48E, gb.regs.a);
  jr_007_6DC7_ret_6DD8:;
    return;
}

void func_007_6DD9(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_6DD9_jr_6DE3;
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState(); return;
  func_007_6DD9_jr_6DE3:;
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_C()) goto func_007_6DD9_ret_6DF5;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_007_6DD9_ret_6DF5;
    gb.regs.a = gb_read(0xD48E);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD48E, gb.regs.a);
  func_007_6DD9_ret_6DF5:;
    return;
}

void func_007_6DF6(void) {
    gb.regs.a = gb_read(0xD48E);
    alu_cp8(gb.regs.a, 0xF0);
    if (GET_FLAG_Z()) goto func_007_6DF6_jr_6E01;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD48E, gb.regs.a);
  func_007_6DF6_jr_6E01:;
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_6E35(); return; };
    gb.regs.e = 0xFF;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto func_007_6DF6_jr_6E16;
    gb.regs.e = 3;
    alu_cp8(gb.regs.a, 0x95);
    if (GET_FLAG_Z()) goto func_007_6DF6_jr_6E16;
    gb.regs.e = 2;
  func_007_6DF6_jr_6E16:;
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_C()) goto func_007_6DF6_jr_6E32;
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    IncrementEntityState();
    /* call_open_dialog Dialog113 */;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 4);
    return;
  func_007_6DF6_jr_6E32:;
    func_007_6C3E(); return;
}

void jr_007_6E35(void) {
    alu_cp8(gb.regs.a, 0x24);
    if (!GET_FLAG_C()) { ret_007_6E57(); return; };
    gb.regs.hl = 0xD48B;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0xF8);
    if (GET_FLAG_Z()) { jr_007_6E48(); return; };
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_6E35_jr_6E47;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_007_6E35_jr_6E47:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void jr_007_6E48(void) {
    gb.regs.hl = 0xD48D;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 0xF0);
    if (GET_FLAG_Z()) { ret_007_6E57(); return; };
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_6E48_jr_6E56;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_007_6E48_jr_6E56:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void ret_007_6E57(void) {
    return;
}

void func_007_6E58(void) {
    func_007_6BE7();
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { jr_007_6E6A(); return; };
    gb.regs.a = alu_dec8(gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_6E58_jr_6E67;
    gb.regs.a = 0x3F;
    gb_write(0xFFF4, gb.regs.a);
  func_007_6E58_jr_6E67:;
    jr_007_6D46(); return;
}

void jr_007_6E6A(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x78);
    if (GET_FLAG_C()) { ret_007_6EA1(); return; };
    label_27DD();
    ClearEntityStatus_07();
}

void func_007_6E7F(void) {
    gb.regs.hl = 0xD9B5;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto func_007_6E7F_jr_6E8D;
    gb.regs.hl = 0xDE88;
    jr_007_6E9A(); return;
  func_007_6E7F_jr_6E8D:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) { jr_007_6E9A(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) { jr_007_6E9A(); return; };
    gb.regs.d = alu_inc8(gb.regs.d);
}

void jr_007_6E9A(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
}

void ret_007_6EA1(void) {
    return;
}

void func_007_6EA2(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) goto func_007_6EA2_jr_6EC3;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) goto func_007_6EA2_jr_6EC3;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 1);
  func_007_6EA2_jr_6EC3:;
    IncrementEntityState();
    gb_write(gb.regs.hl, 7);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    label_007_6BDF(); return;
}

void func_007_6ED0(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x7F);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    gb.regs.a = gb_read(0xFFB0);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC360;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { func_007_6EF0(); return; };
    gb_write(gb.regs.hl, 0xC0);
}

void func_007_6EF0(void) {
    gb.regs.a = 0xF8;
    gb_write(0xD48A, gb.regs.a);
    gb.regs.a = 0xF8;
    gb_write(0xD48B, gb.regs.a);
    gb.regs.a = 0xF0;
    gb_write(0xD48E, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xD487, gb.regs.a);
    gb_write(0xD488, gb.regs.a);
    gb_write(0xD489, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xD48C, gb.regs.a);
    gb.regs.a = 0xF0;
    gb_write(0xD48D, gb.regs.a);
    return;
}

void Unknown041SpriteVariants(void) {
  Unknown041SpriteVariants_variant0:;
    /* data: db $70, $01 */;
    /* data: db $70, $21 */;
}

void Data_007_6F19(void) {
    /* data: db $00, $F8, $60, $00, $00, $00, $62, $00, $00, $08, $64, $00, $00, $10, $66, $00 */;
    /* data: db $00, $F8, $66, $20, $00, $00, $64, $20, $00, $08, $62, $20, $00, $10, $60, $20 */;
}

void Data_007_6F39(void) {
    /* data: db $00, $F8, $68, $00, $00, $00, $6A, $00, $00, $08, $6C, $00, $00, $10, $6E, $00 */;
    /* data: db $00, $F8, $6E, $20, $00, $00, $6C, $20, $00, $08, $6A, $20, $00, $10, $68, $20 */;
}

void Data_007_6F59(void) {
    /* data: db $00, $00, $72, $03, $F8, $08, $74, $03, $F8, $00, $74, $23, $00, $08, $72, $23 */;
    /* data: db $00, $00, $72, $43, $08, $08, $74, $43, $08, $00, $74, $63, $00, $08, $72, $63 */;
}

void Data_007_6F79(void) {
    /* data: db $10, $00, $76, $00, $10, $08, $78, $00, $10, $10, $7A, $00, $08, $18, $7C, $00 */;
    /* data: db $F8, $18, $7E, $00 */;
}

void Data_007_6F8D(void) {
    /* data: db $10, $08, $76, $20, $10, $00, $78, $20, $10, $F8, $7A, $20, $08, $F0, $7C, $20 */;
    /* data: db $F8, $F0, $7E, $20 */;
}

void Data_007_6FA1(void) {
    /* data: db $0C, $FB, $26, $00, $0C, $01, $26, $00, $0C, $07, $26, $00, $0C, $0D, $26, $00 */;
}

void func_007_6FB1(void) {
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_C()) return;
    func_007_6FE6();
    func_007_7015();
    func_007_703A();
    func_007_706F();
    func_007_7090();
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_6FB1_jr_6FE3;
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x6FA1;
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
  func_007_6FB1_jr_6FE3:;
    CopyEntityPositionToActivePosition(); return;
}

void func_007_6FE6(void) {
    gb.regs.a = gb_read(0xD48C);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD48D);
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD487);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto func_007_6FE6_jr_7012;
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6F59;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 2;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 2;
    label_007_7034(); return;
  func_007_6FE6_jr_7012:;
    CopyEntityPositionToActivePosition(); return;
}

void func_007_7015(void) {
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    func_007_70B7();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x6F79;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_7015_jr_702D;
    gb.regs.hl = 0x6F8D;
  func_007_7015_jr_702D:;
    gb.regs.c = 5;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 5;
}

void label_007_7034(void) {
    func_015_7964_trampoline();
    CopyEntityPositionToActivePosition(); return;
}

void func_007_703A(void) {
    gb.regs.a = gb_read(0xD48A);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD48A);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    gb_write(0xD581, gb.regs.a);
    gb.regs.a = gb_read(0xD48B);
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD48B);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xD583, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xD582, gb.regs.a);
    gb.regs.a = 6;
    gb_write(0xD584, gb.regs.a);
    gb.regs.de = 0x6DC9;
    RenderActiveEntitySpritesPair();
    gb.regs.a = 2;
    label_007_7034(); return;
}

void func_007_706F(void) {
    gb.regs.a = gb_read(0xD48E);
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD488);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6F19;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    label_007_7034(); return;
}

void func_007_7090(void) {
    gb.regs.a = gb_read(0xD48E);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD48F);
    gb.regs.hl = 0xFFEC;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD489);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x6F39;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    label_007_7034(); return;
}

void func_007_70B7(void) {
    gb.regs.hl = 0xC146;
    gb.regs.a = gb_read(0xDC6F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { ret_007_7111(); return; };
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFA2;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, 0x0C);
    alu_cp8(gb.regs.a, 0x18);
    if (!GET_FLAG_C()) { ret_007_7111(); return; };
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = 8;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_70B7_jr_70E0;
    gb.regs.e = 0xF8;
  func_007_70B7_jr_70E0:;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x1A);
    alu_cp8(gb.regs.a, 0x34);
    if (!GET_FLAG_C()) { ret_007_7111(); return; };
    gb.regs.a = 0x28;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC146, gb.regs.a);
    gb.regs.a = 0x13;
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xDC3C, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xDC6F, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFF3, gb.regs.a);
}

void ret_007_7111(void) {
    return;
}

void Data_007_7112(void) {
    /* data: db $12, $14, $16, $18, $19, $1A, $1A, $1A, $1A, $1A */;
}

void FireballShooterEntityHandler(void) {
    ReturnIfNonInteractive_07();
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) goto FireballShooterEntityHandler_jr_7131;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (GET_FLAG_C()) { ret_007_7197(); return; };
  FireballShooterEntityHandler_jr_7131:;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    if (!GET_FLAG_Z()) return;
    gb.regs.e = 0x0F;
    gb.regs.d = gb.regs.b;
}

void jr_007_713E(void) {
    loop_start: ;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x82);
    if (GET_FLAG_Z()) goto jr_007_713E_jr_7161;
    alu_cp8(gb.regs.a, 0x9E);
    if (GET_FLAG_Z()) goto jr_007_713E_jr_7161;
    alu_cp8(gb.regs.a, 0x7D);
    if (GET_FLAG_Z()) goto jr_007_713E_jr_7161;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto jr_007_713E_jr_7161;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_007_7168(); return; };
  jr_007_713E_jr_7161:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { goto loop_start; };
    return;
}

void jr_007_7168(void) {
    gb.regs.a = gb_read(0xC18F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x7D;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { ret_007_7197(); return; };
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
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.e = gb.regs.a;
    gb.regs.a = 0x14;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) goto jr_007_7168_jr_7193;
    gb.regs.hl = 0x7112;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
  jr_007_7168_jr_7193:;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
}

void ret_007_7197(void) {
    return;
}

void KanaletBombableWallEntityHandler(void) {
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto KanaletBombableWallEntityHandler_jr_71B4;
    gb.regs.a = gb_read(0xFFF8);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x3C);
  KanaletBombableWallEntityHandler_jr_71B4:;
    ReturnIfNonInteractive_07();
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { ret_007_7246(); return; };
    gb.regs.a = 0x14;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { ret_007_7246(); return; };
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC4E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    SmashRock_trampoline();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb_write(0xFFCE, gb.regs.a);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFCD, gb.regs.a);
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x91);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto KanaletBombableWallEntityHandler_jr_721D;
    gb_push16(gb.regs.bc);
    gb.regs.a = 0x91;
    gb_write(0xDE80, gb.regs.a);
    gb.regs.a = 7;
    func_91D();
    gb.regs.bc = gb_pop16();
  KanaletBombableWallEntityHandler_jr_721D:;
    gb.regs.a = gb_read(0xD5C1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD5C2;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xD5C1, gb.regs.a);
    gb.regs.e = 8;
    func_007_7233();
    gb.regs.e = 9;
}

void func_007_7233(void) {
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFD0, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
}

void ret_007_7246(void) {
    return;
}

void StarSpriteVariants(void) {
  StarSpriteVariants_variant0:;
    /* data: db $74, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $74, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  StarSpriteVariants_variant1:;
    /* data: db $76, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 */;
  StarSpriteVariants_variant2:;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7A, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  StarSpriteVariants_variant3:;
    /* data: db $78, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
    /* data: db $76, OAM_GBC_PAL_1 | OAMF_PAL0 | OAMF_XFLIP */;
  StarSpriteVariants_variant4:;
    /* data: db $7C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
    /* data: db $7C, OAM_GBC_PAL_1 | OAMF_PAL0 */;
}

void StarEntityHandler(void) {
    gb.regs.de = 0x70ED;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    ApplyRecoilIfNeeded_07();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_07();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto StarEntityHandler_horizontalCollision;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto StarEntityHandler_verticalCollision;
    goto StarEntityHandler_collisionEnd;
  StarEntityHandler_horizontalCollision:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    goto StarEntityHandler_collisionEnd;
  StarEntityHandler_verticalCollision:;
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  StarEntityHandler_collisionEnd:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    SetEntitySpriteVariant(); return;
}

void HidingZol2SpriteVariants(void) {
  HidingZol2SpriteVariants_variant0:;
    /* data: db $FF, $FF */;
    /* data: db $FF, $FF */;
  HidingZol2SpriteVariants_variant1:;
    /* data: db $FF, $FF */;
    /* data: db $FF, $FF */;
  HidingZol2SpriteVariants_variant2:;
    /* data: db $54, $00 */;
    /* data: db $54, $20 */;
  HidingZol2SpriteVariants_variant3:;
    /* data: db $52, $00 */;
    /* data: db $52, $20 */;
}

void HidingZol1SpriteVariants(void) {
  HidingZol1SpriteVariants_variant0:;
    /* data: db $56, $00 */;
    /* data: db $56, $00 */;
}

void HidingZolEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto HidingZolEntityHandler_jr_72BD;
    gb.regs.de = 0x7158;
    RenderActiveEntitySprite();
    jr_007_72C3(); return;
  HidingZolEntityHandler_jr_72BD:;
    gb.regs.de = 0x7148;
    RenderActiveEntitySpritesPair();
}

void jr_007_72C3(void) {
    ReturnIfNonInteractive_07();
    ApplyRecoilIfNeeded_07();
    AddEntityZSpeedToPos_07();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    gb_write(0xFFE8, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_007_72C3_jr_72E3;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  jr_007_72C3_jr_72E3:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_72F4(); return;
        case 0x01: func_007_7320(); return;
        case 0x02: func_007_7350(); return;
        case 0x03: func_007_735C(); return;
        case 0x04: func_007_737C(); return;
        case 0x05: func_007_73A0(); return;
        case 0x06: func_007_73D7(); return;
    }
}

void func_007_72F4(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_007_731F(); return; };
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) { ret_007_731F(); return; };
  func_007_72F4_jr_7302:;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_C()) { ret_007_731F(); return; };
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_add8(gb.regs.a, 3);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
}

void ret_007_731F(void) {
    return;
}

void func_007_7320(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_7344(); return; };
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x12);
    gb.regs.a = 3;
    SetEntitySpriteVariant();
    IncrementEntityState();
}

void func_007_733F(void) {
    gb.regs.a = 0x24;
    gb_write(0xFFF2, gb.regs.a);
    return;
}

void jr_007_7344(void) {
    gb.regs.e = 1;
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto jr_007_7344_jr_734C;
    gb.regs.e = 2;
  jr_007_7344_jr_734C:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void func_007_7350(void) {
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState(); return;
}

void func_007_735C(void) {
    label_3B70();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_735C_jr_736C;
    gb_write(gb.regs.hl, 0x10);
    ClearEntitySpeed();
    IncrementEntityState(); return;
  func_007_735C_jr_736C:;
    gb.regs.e = 8;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_007_735C_jr_7374;
    gb.regs.e = 0xF8;
  func_007_735C_jr_7374:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    AddEntitySpeedToPos_07(); return;
}

void func_007_737C(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_07();
    func_007_73F7();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_737C_jr_739B;
    gb.regs.a = 0x0C;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    func_007_733F();
    IncrementEntityState();
  func_007_737C_jr_739B:;
    gb.regs.a = 3;
    SetEntitySpriteVariant(); return;
}

void func_007_73A0(void) {
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_07();
    func_007_73F7();
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_73A0_jr_73D2;
    ClearEntitySpeed();
    IncrementEntityState();
    gb_write(gb.regs.hl, 4);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) goto func_007_73A0_jr_73D2;
    IncrementEntityState();
    gb_write(gb.regs.hl, 6);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x30);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xD2);
  func_007_73A0_jr_73D2:;
    gb.regs.a = 2;
    SetEntitySpriteVariant(); return;
}

void func_007_73D7(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_73D7_jr_73E6;
    gb_write(gb.regs.hl, 0x50);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    SetEntitySpriteVariant(); return;
  func_007_73D7_jr_73E6:;
    gb.regs.e = 3;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto func_007_73D7_jr_73F3;
    gb.regs.e = 1;
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) goto func_007_73D7_jr_73F3;
    gb.regs.e = alu_inc8(gb.regs.e);
  func_007_73D7_jr_73F3:;
    gb.regs.a = gb.regs.e;
    SetEntitySpriteVariant(); return;
}

void func_007_73F7(void) {
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 3);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void FlyingTilesEntityHandler(void) {
    ReturnIfNonInteractive_07();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_7410(); return;
        case 0x01: func_007_74A8(); return;
    }
}

void func_007_7410(void) {
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_and8(gb.regs.a, 0x70);
    gb_write(0xD481, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState(); return;
}

void Data_007_741F(void) {
    /* data: db $23, $56, $26, $53, $32, $47, $42, $37, $33, $46, $43, $36, $24, $55, $25, $54 */;
    /* data: db $21, $28, $53, $56, $34, $45, $35, $44, $31, $48, $38, $41, $14, $66, $15, $63 */;
    /* data: db $31, $45, $38, $44, $13, $56, $16, $53, $27, $42, $47, $22, $65, $33, $64, $36 */;
    /* data: db $23, $56, $26, $53, $32, $47, $42, $37, $33, $46, $43, $36, $24, $55, $25, $54 */;
    /* data: db $23, $56, $26, $53, $32, $47, $42, $37, $33, $46, $43, $36, $24, $55, $25, $54 */;
    /* data: db $23, $56, $26, $53, $32, $47, $42, $37, $33, $46, $43, $36, $24, $55, $25, $54 */;
    /* data: db $23, $56, $26, $53, $32, $47, $42, $37, $33, $46, $43, $36, $24, $55, $25, $54 */;
    /* data: db $23, $56, $26, $53, $32, $47, $42, $37, $33, $46, $43, $36, $24, $55, $25, $54 */;
}

void Data_007_749F(void) {
    /* data: db $30, $30, $30, $30, $30, $30, $30, $28, $28 */;
}

void func_007_74A8(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_007_752C(); return; };
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFFF7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x749F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x5A;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { ret_007_752C(); return; };
  func_007_74A8_jr_74CA:;
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb_push16(gb.regs.bc);
  func_007_74A8_jr_74D1:;
    gb.regs.a = gb_read(0xD481);
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.c = gb.regs.a;
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEF);
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    if (GET_FLAG_Z()) goto func_007_74A8_jr_74E8;
    gb_write(gb.regs.hl, gb.regs.a);
  func_007_74A8_jr_74E8:;
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto func_007_74A8_jr_74F8;
    gb.regs.a = gb_read(0xC18E);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_007_74A8_jr_74F8;
    gb_write(gb.regs.hl, 1);
  func_007_74A8_jr_74F8:;
    gb.regs.hl = 0x741F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 8);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
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
    gb_write(gb.regs.hl, 0);
    gb.regs.bc = gb_pop16();
}

void ret_007_752C(void) {
    return;
}

void WaterTektiteSpriteVariants(void) {
  WaterTektiteSpriteVariants_variant0:;
    /* data: db $70, $00 */;
    /* data: db $70, $20 */;
  WaterTektiteSpriteVariants_variant1:;
    /* data: db $72, $00 */;
    /* data: db $72, $20 */;
}

void WaterTektiteEntityHandler(void) {
    gb.regs.de = 0x73D0;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    ApplyRecoilIfNeeded_07();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
  WaterTektiteEntityHandler_jr_7547:;
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant();
    UpdateEntityPosWithSpeed_07();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto WaterTektiteEntityHandler_jr_756A;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    ClearEntitySpeed();
    IncrementEntityState();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF0, gb.regs.a);
  WaterTektiteEntityHandler_jr_756A:;
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_7576(); return;
        case 0x01: func_007_7597(); return;
        case 0x02: func_007_75B7(); return;
    }
}

void func_007_7576(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_7576_ret_7596;
    gb_write(gb.regs.hl, 0x20);
    IncrementEntityState();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 2);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  func_007_7576_ret_7596:;
    return;
}

void func_007_7597(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) { IncrementEntityState(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ret_007_75B6(); return; };
    gb.regs.hl = 0xC2B0;
  func_007_7597_jr_75A4:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}

void ret_007_75B6(void) {
    return;
}

void func_007_75B7(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ret_007_75DD(); return; };
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_007_75B7_jr_75CF;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x10);
    return;
  func_007_75B7_jr_75CF:;
    func_007_75D6();
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
}

void func_007_75D6(void) {
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_75D6_jr_75DC;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  func_007_75D6_jr_75DC:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
}

void ret_007_75DD(void) {
    return;
}

void HorsePieceSpriteVariants(void) {
  HorsePieceSpriteVariants_variant0:;
    /* data: db $60, $03 */;
    /* data: db $62, $03 */;
  HorsePieceSpriteVariants_variant1:;
    /* data: db $64, $03 */;
    /* data: db $66, $03 */;
  HorsePieceSpriteVariants_variant2:;
    /* data: db $62, $63 */;
    /* data: db $60, $63 */;
  HorsePieceSpriteVariants_variant3:;
    /* data: db $66, $63 */;
    /* data: db $64, $63 */;
  HorsePieceSpriteVariants_variant4:;
    /* data: db $66, $23 */;
    /* data: db $64, $23 */;
}

void HorsePieceEntityHandler(void) {
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HorsePieceEntityHandler_firstHead;
    gb.regs.a = gb.regs.c;
    gb_write(0xD481, gb.regs.a);
  HorsePieceEntityHandler_firstHead:;
    gb.regs.de = 0x7485;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    UpdateEntityPosWithSpeed_07();
    AddEntityZSpeedToPos_07();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto HorsePieceEntityHandler_noBounce;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cpl();
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_C()) goto HorsePieceEntityHandler_doBounce;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  HorsePieceEntityHandler_doBounce:;
    gb_write(gb.regs.hl, gb.regs.a);
  HorsePieceEntityHandler_noBounce:;
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: HorsePieceStateInit(); return;
        case 0x01: HorsePieceStateInit(); return;
        case 0x02: HorsePieceStateThrowing(); return;
        case 0x03: HorsePieceStateWaitingForOther(); return;
        case 0x04: HorsePieceStateFinished(); return;
    }
}

void HorsePieceStateInit(void) {
    HorsePieceCheckForPickup(); return;
}

void HorsePieceRandomBounceX(void) {
    /* data: db $00, $0C, $10, $0C, $00, $F4, $F0, $F4 */;
}

void HorsePieceRandomBounceY(void) {
    /* data: db $F0, $F4, $00, $0C, $10, $0C, $00, $F4 */;
}

void HorsePieceRandomVariant(void) {
    /* data: db $00, $01, $04, $00 */;
}

void HorsePieceStateThrowing(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto HorsePieceStateThrowing_stateNotEnded;
    ClearEntitySpeed();
    IncrementEntityState();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x74F5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant(); return;
  HorsePieceStateThrowing_stateNotEnded:;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto HorsePieceStateThrowing_noVariantChange;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(gb.regs.hl, gb.regs.a);
  HorsePieceStateThrowing_noVariantChange:;
    gb.regs.a = gb_read(0xFFE8);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto HorsePieceStateThrowing_jr_76C2;
    _func_76E7();
    gb.regs.a = gb_read(0xFFE9);
    gb.regs.a = alu_sub8(gb.regs.a, 0xFC);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto HorsePieceStateThrowing_jr_7696;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto HorsePieceStateThrowing_jr_76C2;
  HorsePieceStateThrowing_jr_7696:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.e = 1;
    if (GET_FLAG_Z()) goto HorsePieceStateThrowing_jr_76A1;
    gb.regs.e = 0xFF;
  HorsePieceStateThrowing_jr_76A1:;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x74E5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x74ED;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
    _func_76E7();
  HorsePieceStateThrowing_jr_76C2:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HorsePieceStateThrowing_ret;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, alu_srl(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC240;
    _bounceSpeedAdjust();
    gb.regs.hl = 0xC250;
  HorsePieceStateThrowing_bounceSpeedAdjust:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
  HorsePieceStateThrowing_func_76E7:;
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
  HorsePieceStateThrowing_ret:;
    return;
}

void HorsePieceStateWaitingForOther(void) {
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD481);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    IncrementEntityState();
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto HorsePieceStateWaitingForOther_puzzleFailed;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { MarkTriggerAsResolved(); return; };
  HorsePieceStateWaitingForOther_puzzleFailed:;
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x40);
    PlayWrongAnswerJingle(); return;
}

void HorsePieceStateFinished(void) {
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto HorsePieceStateFinished_notFallDown;
    gb.regs.a = 1;
    SetEntitySpriteVariant();
  HorsePieceStateFinished_notFallDown:;
    HorsePieceCheckForPickup(); return;
}

void HorsePieceCheckForPickup(void) {
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto HorsePieceCheckForPickup_ret;
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto HorsePieceCheckForPickup_ret;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto HorsePieceCheckForPickup_noBraceletB;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto HorsePieceCheckForPickup_useBracelet;
    goto HorsePieceCheckForPickup_ret;
  HorsePieceCheckForPickup_noBraceletB:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto HorsePieceCheckForPickup_ret;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto HorsePieceCheckForPickup_ret;
  HorsePieceCheckForPickup_useBracelet:;
    gb.regs.a = gb_read(0xC3CF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto HorsePieceCheckForPickup_ret;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC3CF, gb.regs.a);
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
  HorsePieceCheckForPickup_ret:;
    return;
}

void SpikedBeetle1SpriteVariants(void) {
  SpikedBeetle1SpriteVariants_variant0:;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $70, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  SpikedBeetle1SpriteVariants_variant1:;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $72, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  SpikedBeetle1SpriteVariants_variant2:;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $74, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  SpikedBeetle1SpriteVariants_variant3:;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $76, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void SpikedBeetle2SpriteVariants(void) {
  SpikedBeetle2SpriteVariants_variant0:;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $60, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  SpikedBeetle2SpriteVariants_variant1:;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $62, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  SpikedBeetle2SpriteVariants_variant2:;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $64, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
  SpikedBeetle2SpriteVariants_variant3:;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 */;
    /* data: db $66, OAM_GBC_PAL_0 | OAMF_PAL0 | OAMF_XFLIP */;
}

void SpikedBeetleEntityHandler(void) {
    gb.regs.de = 0x7631;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto SpikedBeetleEntityHandler_render;
    gb.regs.de = 0x7641;
  SpikedBeetleEntityHandler_render:;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_07();
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto SpikedBeetleEntityHandler_jr_77C1;
    ClearEntitySpeed();
  SpikedBeetleEntityHandler_jr_77C1:;
    ApplyRecoilIfNeeded_07();
    DefaultEnemyDamageCollisionHandler_trampoline();
    UpdateEntityPosWithSpeed_07();
    AddEntityZSpeedToPos_07();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto SpikedBeetleEntityHandler_negativeZ;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto SpikedBeetleEntityHandler_bounceEnd;
  SpikedBeetleEntityHandler_negativeZ:;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto SpikedBeetleEntityHandler_notFlipped;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, alu_sra(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    alu_cpl();
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_C()) goto SpikedBeetleEntityHandler_bounceEnd;
    gb_write(gb.regs.hl, gb.regs.b);
    ClearEntitySpeed();
    goto SpikedBeetleEntityHandler_bounceEnd;
  SpikedBeetleEntityHandler_notFlipped:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
  SpikedBeetleEntityHandler_bounceEnd:;
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_C()) goto SpikedBeetleEntityHandler_state4End;
    return;
  SpikedBeetleEntityHandler_state4End:;
    switch(gb.regs.a) {
        case 0x00: SpikedBeetleRestingHandler(); return;
        case 0x01: SpikedBeetleWalkingHandler(); return;
        case 0x02: SpikedBeetleDashingHandler(); return;
        case 0x03: SpikedBeetleFlippedHandler(); return;
    }
}

void SpikedBeetleWalkingXSpeeds(void) {
    /* data: db $06, $FA, $00, $00 */;
}

void SpikedBeetleWalkingYSpeeds(void) {
    /* data: db $00, $00, $FA, $06 */;
}

void SpikedBeetleRestingHandler(void) {
    ClearEntitySpeed();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SpikedBeetleRestingHandler_skipIncrementState;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    IncrementEntityState();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto SpikedBeetleRestingHandler_chooseRandomDirection;
    GetEntityDirectionToLink_07();
    goto SpikedBeetleRestingHandler_chooseRandomDirectionEnd;
  SpikedBeetleRestingHandler_chooseRandomDirection:;
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
  SpikedBeetleRestingHandler_chooseRandomDirectionEnd:;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x76C7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x76CB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
  SpikedBeetleRestingHandler_skipIncrementState:;
    SpikedBeetleNotFlipped(); return;
}

void SpikedBeetleWalkingHandler(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SpikedBeetleWalkingHandler_skipSetState0;
    gb_write(gb.regs.hl, 0x18);
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
  SpikedBeetleWalkingHandler_skipSetState0:;
    SpikedBeetleWalk();
}

void SpikedBeetleNotFlipped(void) {
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_SPLASH_IN_WATER);
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 6);
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto SpikedBeetleNotFlipped_startDash;
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 6);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) goto SpikedBeetleNotFlipped_return;
  SpikedBeetleNotFlipped_startDash:;
    GetEntityDirectionToLink_07();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.e);
    IncrementEntityState();
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
  SpikedBeetleNotFlipped_return:;
    return;
}

void SpikedBeetleDashingXSpeeds(void) {
    /* data: db $18, $E8, $00, $00 */;
}

void SpikedBeetleDashingYSpeeds(void) {
    /* data: db $00, $00, $E8, $18 */;
}

void SpikedBeetleDashingHandler(void) {
    GetEntityTransitionCountdown();
    if (GET_FLAG_Z()) goto SpikedBeetleDashingHandler_setState0;
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x774D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto SpikedBeetleDashingHandler_updateXSpeedEnd;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto SpikedBeetleDashingHandler_positiveDifferenceX;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  SpikedBeetleDashingHandler_positiveDifferenceX:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  SpikedBeetleDashingHandler_updateXSpeedEnd:;
    gb.regs.hl = 0x7751;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto SpikedBeetleDashingHandler_updateYSpeedEnd;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto SpikedBeetleDashingHandler_positiveDifferenceY;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  SpikedBeetleDashingHandler_positiveDifferenceY:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  SpikedBeetleDashingHandler_updateYSpeedEnd:;
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { SpikedBeetleWalk(); return; };
  SpikedBeetleDashingHandler_setState0:;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}

void SpikedBeetleWalk(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    SetEntitySpriteVariant(); return;
}

void SpikedBeetleFlippedHandler(void) {
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    SetEntitySpriteVariant();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto SpikedBeetleFlippedHandler_skipSetState0;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
  SpikedBeetleFlippedHandler_skipSetState0:;
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) goto SpikedBeetleFlippedHandler_shakeEnd;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    gb.regs.a = 8;
    if (!GET_FLAG_Z()) goto SpikedBeetleFlippedHandler_shakeRight;
    gb.regs.a = 0xF8;
  SpikedBeetleFlippedHandler_shakeRight:;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
  SpikedBeetleFlippedHandler_shakeEnd:;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb_write(gb.regs.hl, 1);
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void Data_007_793D(void) {
    /* data: db $06, $04, $02, $00 */;
}

void MoblinSwordEntityHandler(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x15);
    if (!GET_FLAG_Z()) goto MoblinSwordEntityHandler_jr_794F;
    gb.regs.a = gb_read(0xDBFE);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { ClearEntityStatus_07(); return; };
  MoblinSwordEntityHandler_jr_794F:;
    func_007_7AB5();
    ReturnIfNonInteractive_07();
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x15);
    if (GET_FLAG_Z()) goto MoblinSwordEntityHandler_jr_7963;
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_7966(); return; };
  MoblinSwordEntityHandler_jr_7963:;
    func_007_7A55();
}

void jr_007_7966(void) {
    ApplyRecoilIfNeeded_07();
    label_3B65();
    DefaultEnemyDamageCollisionHandler_trampoline();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_007_7980(); return;
        case 0x01: func_007_79B4(); return;
        case 0x02: func_007_79D7(); return;
    }
}

void Data_007_7978(void) {
    /* data: db $06, $FA, $00, $00 */;
}

void Data_007_797C(void) {
    /* data: db $00, $00, $FA, $06 */;
}

void func_007_7980(void) {
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0);
    func_007_7A2D();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_007_79B3(); return; };
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState();
}

void func_007_7996(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7978;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x797C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
}

void ret_007_79B3(void) {
    return;
}

void func_007_79B4(void) {
    func_007_7A2D();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_007_79B4_jr_79C2;
    func_007_7996();
  func_007_79B4_jr_79C2:;
    UpdateEntityPosWithSpeed_07();
    ApplyEntityInteractionWithBackground_trampoline();
    SetEntityVariantForDirection_07();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_007_79D6(); return; };
    gb_write(gb.regs.hl, 0x30);
}

void func_007_79D2(void) {
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}

void ret_007_79D6(void) {
    return;
}

void func_007_79D7(void) {
    GetEntityPrivateCountdown1();
    if (GET_FLAG_Z()) goto func_007_79D7_jr_79F9;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto func_007_79D7_jr_79F9;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0x15);
    if (!GET_FLAG_Z()) goto func_007_79D7_jr_79F9;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_007_7A1E(); return; };
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    /* call_open_dialog Dialog190 */;
    jr_007_7A1E(); return;
  func_007_79D7_jr_79F9:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_007_7A1E(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_007_79D7_jr_7A07;
    gb_write(gb.regs.hl, 0x18);
    func_007_79D2();
  func_007_79D7_jr_7A07:;
    SetEntityVariantForDirection_07();
    SetEntityVariantForDirection_07();
    UpdateEntityPosWithSpeed_07();
    ApplyEntityInteractionWithBackground_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x0A;
    ApplyVectorTowardsLink_trampoline();
}

void jr_007_7A1E(void) {
    GetEntityDirectionToLink_07();
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    SetEntityVariantForDirection_07(); return;
}

void Data_007_7A29(void) {
    /* data: db $01, $00, $03, $02 */;
}

void func_007_7A2D(void) {
    gb.regs.a = gb_read(0xC502);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_007_7A55(); return; };
    GetEntityXDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) { ret_007_7A6C(); return; };
    GetEntityYDistanceToLink_07();
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_C()) { ret_007_7A6C(); return; };
    GetEntityDirectionToLink_07();
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7A29;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { ret_007_7A6C(); return; };
}

void func_007_7A55(void) {
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto func_007_7A55_jr_7A65;
    gb_push16(gb.regs.hl);
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = gb_pop16();
  func_007_7A55_jr_7A65:;
    gb_write(gb.regs.hl, 2);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
}

void ret_007_7A6C(void) {
    return;
}

void Data_007_7A6D(void) {
    /* data: db $00, $00, $F9, $F9, $F8, $F2, $08, $0E */;
}

void Data_007_7A75(void) {
    /* data: db $08, $0E, $F8, $F2, $00, $00, $00, $00 */;
}

void Data_007_7A7D(void) {
    /* data: db $02, $02, $06, $06, $04, $04, $00, $00 */;
}

void Data_007_7A85(void) {
    /* data: db $0C, $0C, $04, $04, $FC, $FC, $14, $14 */;
}

void Data_007_7A8D(void) {
    /* data: db $14, $14, $FC, $FC, $0C, $0C, $0C, $0C */;
}

void Unknown042SpriteVariants(void) {
  Unknown042SpriteVariants_variant0:;
    /* data: db $60, $03 */;
    /* data: db $62, $03 */;
  Unknown042SpriteVariants_variant1:;
    /* data: db $62, $23 */;
    /* data: db $60, $23 */;
  Unknown042SpriteVariants_variant2:;
    /* data: db $64, $03 */;
    /* data: db $66, $03 */;
  Unknown042SpriteVariants_variant3:;
    /* data: db $66, $23 */;
    /* data: db $64, $23 */;
  Unknown042SpriteVariants_variant4:;
    /* data: db $68, $03 */;
    /* data: db $6A, $03 */;
  Unknown042SpriteVariants_variant5:;
    /* data: db $6C, $03 */;
    /* data: db $6E, $03 */;
  Unknown042SpriteVariants_variant6:;
    /* data: db $6A, $23 */;
    /* data: db $68, $23 */;
  Unknown042SpriteVariants_variant7:;
    /* data: db $6E, $23 */;
    /* data: db $6C, $23 */;
}

void func_007_7AB5(void) {
    SkipDisabledEntityDuringRoomTransition();
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto func_007_7AB5_jr_7AC1;
    func_007_7B30();
  func_007_7AB5_jr_7AC1:;
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto func_007_7AB5_jr_7ACB;
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_007_7AD1(); return; };
  func_007_7AB5_jr_7ACB:;
    gb.regs.de = 0x7959;
    RenderActiveEntitySpritesPair();
}

void jr_007_7AD1(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7A85;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD581, gb.regs.a);
    gb.regs.hl = 0x7A8D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD583, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xD582, gb.regs.a);
    gb_write(0xD584, gb.regs.a);
    gb.regs.hl = 0x7A7D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.hl = 0x7A75;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x7A6D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.l = gb_read(gb.regs.hl);
    gb.regs.h = gb.regs.a;
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb.regs.l;
    gb.regs.b = gb.regs.h;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = gb_pop16();
    func_1819();
    gb.regs.a = 2;
    func_015_7964_trampoline();
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) return;
    gb.regs.de = 0x7959;
    RenderActiveEntitySpritesPair(); return;
}

void func_007_7B30(void) {
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xC3C0);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    gb.regs.de = 0xC030;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.d);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, 0xFE);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x86;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0x16);
    gb.regs.a = 1;
    func_015_7964_trampoline(); return;
}

void ChestItemSpriteTableAlt(void) {
    /* data: db $82, $17 */;
    /* data: db $86, $14 */;
}

void ChestItemSpriteTable(void) {
    /* data: db $82, $15 */;
    /* data: db $86, $15 */;
    /* data: db $88, $10 */;
    /* data: db $8A, $10 */;
    /* data: db $8C, $14 */;
    /* data: db $98, $16 */;
    /* data: db $90, $17 */;
    /* data: db $92, $16 */;
    /* data: db $96, $10 */;
    /* data: db $8E, $10 */;
    /* data: db $80, $15 */;
    /* data: db $84, $10 */;
    /* data: db $94, $15 */;
    /* data: db $9A, $10 */;
    /* data: db $AE, $10 */;
    /* data: db $9C, $10 */;
    /* data: db $A0, $14 */;
    /* data: db $C0, $14 */;
    /* data: db $C2, $14 */;
    /* data: db $C4, $14 */;
    /* data: db $C6, $14 */;
    /* data: db $CA, $14 */;
    /* data: db $C0, $14 */;
    /* data: db $C2, $15 */;
    /* data: db $C4, $14 */;
    /* data: db $C6, $14 */;
    /* data: db $CA, $17 */;
    /* data: db $A6, $15 */;
    /* data: db $A6, $15 */;
    /* data: db $A6, $15 */;
    /* data: db $A6, $15 */;
    /* data: db $A6, $15 */;
    /* data: db $9E, $14 */;
}

void GotItemDialog(void) {
  GotItemDialog__00:;
    /* db_dialog_low Dialog090 */;
  GotItemDialog__01:;
    /* db_dialog_low Dialog091 */;
  GotItemDialog__02:;
    /* db_dialog_low Dialog092 */;
  GotItemDialog__03:;
    /* db_dialog_low Dialog093 */;
  GotItemDialog__04:;
    /* db_dialog_low Dialog094 */;
  GotItemDialog__05:;
    /* db_dialog_low Dialog095 */;
  GotItemDialog__06:;
    /* db_dialog_low Dialog096 */;
  GotItemDialog__07:;
    /* db_dialog_low Dialog097 */;
  GotItemDialog__08:;
    /* db_dialog_low Dialog098 */;
  GotItemDialog__09:;
    /* db_dialog_low Dialog099 */;
  GotItemDialog__0A:;
    /* db_dialog_low Dialog09A */;
  GotItemDialog__0B:;
    /* db_dialog_low Dialog09B */;
  GotItemDialog__0C:;
    /* db_dialog_low Dialog09C */;
  GotItemDialog__0D:;
    /* db_dialog_low Dialog09D */;
  GotItemDialog__0E:;
    /* db_dialog_low Dialog09E */;
  GotItemDialog__0F:;
    /* db_dialog_low Dialog09F */;
  GotItemDialog__10:;
    /* db_dialog_low Dialog0A0 */;
  GotItemDialog__11:;
    /* db_dialog_low Dialog0A1 */;
  GotItemDialog__12:;
    /* db_dialog_low Dialog0A2 */;
  GotItemDialog__13:;
    /* db_dialog_low Dialog0A3 */;
  GotItemDialog__14:;
    /* db_dialog_low Dialog0A4 */;
  GotItemDialog__15:;
    /* db_dialog_low Dialog0A5 */;
  GotItemDialog__16:;
    /* db_dialog_low Dialog0A6 */;
  GotItemDialog__17:;
    /* db_dialog_low Dialog0A7 */;
  GotItemDialog__18:;
    /* db_dialog_low Dialog0A8 */;
  GotItemDialog__19:;
    /* db_dialog_low Dialog0A9 */;
  GotItemDialog__1A:;
    /* db_dialog_low Dialog0AA */;
  GotItemDialog__1B:;
    /* db_dialog_low Dialog0AC */;
  GotItemDialog__1C:;
    /* db_dialog_low Dialog0AB */;
  GotItemDialog__1D:;
    /* db_dialog_low Dialog0AD */;
  GotItemDialog__1E:;
    /* db_dialog_low Dialog0AE */;
  GotItemDialog__1F:;
    /* db_dialog_low Dialog0AE */;
  GotItemDialog__20:;
    /* db_dialog_low Dialog0EF */;
  GotItemDialog__21:;
    /* db_dialog_low Dialog006 */;
}

void Data_007_7BBB(void) {
    /* data: db $10, $10, $10, $10, $10, $10, $10, $10 */;
    /* data: db $10, $01, $01, $10, $10, $10, $10, $10 */;
    /* data: db $01, $10, $10, $10, $10, $10, $01, $01 */;
    /* data: db $01, $01, $01, $01, $01, $01, $01, $01 */;
    /* data: db $01, $00 */;
}

void ChestWithItemEntityHandler(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC137, gb.regs.a);
    gb_write(0xC16A, gb.regs.a);
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 0x22);
    if (!GET_FLAG_Z()) { notZolChest(); return; };
    gb.regs.a = 0x1B;
    SpawnNewEntity_trampoline();
    if (GET_FLAG_C()) { ClearEntityStatus_07(); return; };
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 6);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb.regs.a = 0x1D;
    gb_write(0xFFF2, gb.regs.a);
    ClearEntityStatus_07(); return;
}

void notZolChest(void) {
    alu_cp8(gb.regs.a, 0x21);
    if (GET_FLAG_Z()) { jr_007_7C5E(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto notZolChest_jr_7C36;
    gb.regs.a = 1;
    gb_write(0xDBB9, gb.regs.a);
  notZolChest_jr_7C36:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_7C58(); return; };
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto notZolChest_jr_7C49;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xCE);
    if (!GET_FLAG_Z()) { jr_007_7C58(); return; };
    UseAltChestSprite(); return;
  notZolChest_jr_7C49:;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) { jr_007_7C58(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_Z()) { jr_007_7C58(); return; };
}

void UseAltChestSprite(void) {
    gb.regs.de = 0x7A0C;
    jr_007_7C5B(); return;
}

void jr_007_7C58(void) {
    gb.regs.de = 0x7A10;
}

void jr_007_7C5B(void) {
    RenderActiveEntitySprite();
}

void jr_007_7C5E(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    UpdateEntityPosWithSpeed_07();
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto jr_007_7C5E_jr_7C76;
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, 0);
  jr_007_7C5E_jr_7C76:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { jr_007_7C93(); return; };
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7BBB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_007_7C93(); return; };
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_007_7C5E_jr_7C90;
    gb.regs.a = 1;
    gb_write(0xFFF2, gb.regs.a);
    jr_007_7C93(); return;
  jr_007_7C5E_jr_7C90:;
    gb_write(0xD368, gb.regs.a);
}

void jr_007_7C93(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x26);
    if (!GET_FLAG_Z()) { jr_007_7CEA(); return; };
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    alu_cp8(gb.regs.a, 0x21);
    if (!GET_FLAG_Z()) goto jr_007_7C93_jr_7CB1;
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x96);
    if (!GET_FLAG_Z()) goto jr_007_7C93_jr_7CB1;
    /* call_open_dialog Dialog111 */;
    jr_007_7CE9(); return;
  jr_007_7C93_jr_7CB1:;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_007_7C93_jr_7CC1;
    gb.regs.a = gb_read(0xDBF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_007_7C93_jr_7CC1;
    /* ld_dialog_low a, Dialog0ED */;
    jr_007_7CE6(); return;
  jr_007_7C93_jr_7CC1:;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto jr_007_7C93_jr_7CD1;
    gb.regs.a = gb_read(0xDBFA);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_007_7C93_jr_7CD1;
    /* ld_dialog_low a, Dialog09F */;
    jr_007_7CE6(); return;
  jr_007_7C93_jr_7CD1:;
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto jr_007_7C93_jr_7CE1;
    gb.regs.a = gb_read(0xDBEF);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_007_7C93_jr_7CE1;
    /* ld_dialog_low a, Dialog0EE */;
    jr_007_7CE6(); return;
  jr_007_7C93_jr_7CE1:;
    gb.regs.hl = 0x7A52;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
}

void jr_007_7CE6(void) {
    OpenDialogInTable0();
}

void jr_007_7CE9(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
}

void jr_007_7CEA(void) {
    alu_cp8(gb.regs.a, 0x28);
    if (!GET_FLAG_Z()) return;
    ClearEntityStatus_07(); return;
}

void PushLinkOutOfEntity_07(void) {
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) goto PushLinkOutOfEntity_07_jr_007_7D14;
    CopyLinkFinalPositionToPosition();
    ResetPegasusBoots();
    gb.regs.a = gb_read(0xC1A6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PushLinkOutOfEntity_07_jr_7D12;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC39F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto PushLinkOutOfEntity_07_jr_7D12;
    gb.regs.hl = 0xC28F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
  PushLinkOutOfEntity_07_jr_7D12:;
    alu_scf();
    return;
  PushLinkOutOfEntity_07_jr_007_7D14:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void EntityVariantForDirection_07(void) {
  EntityVariantForDirection_07_right:;
    /* data: db 6 */;
  EntityVariantForDirection_07_left:;
    /* data: db 4 */;
  EntityVariantForDirection_07_up:;
    /* data: db 2 */;
  EntityVariantForDirection_07_down:;
    /* data: db 0 */;
}

void SetEntityVariantForDirection_07(void) {
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7BA6;
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

void func_007_7D36(void) {
    gb.regs.e = gb.regs.b;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 0x38);
    jr_007_7D4E(); return;
}

void func_007_7D43(void) {
    gb.regs.e = gb.regs.b;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xFFEF;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x14);
    alu_cp8(gb.regs.a, 0x28);
}

void jr_007_7D4E(void) {
    if (!GET_FLAG_C()) { jr_007_7D94(); return; };
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) { jr_007_7D94(); return; };
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xB5);
    if (GET_FLAG_Z()) goto jr_007_7D4E_jr_7D6F;
    gb_push16(gb.regs.de);
    GetEntityDirectionToLink_07();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    gb.regs.de = gb_pop16();
    if (!GET_FLAG_Z()) { jr_007_7D94(); return; };
  jr_007_7D4E_jr_7D6F:;
    gb.regs.hl = 0xC1AD;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC134;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_007_7D94(); return; };
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_007_7D94(); return; };
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_007_7D94(); return; };
    alu_scf();
    return;
}

void jr_007_7D94(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    return;
}

void ReturnIfNonInteractive_07(void) {
    gb.regs.a = gb_read(0xFFEA);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_07_skip;
  ReturnIfNonInteractive_07_allowInactiveEntity:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_07_skip;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_07_skip;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_07_skip;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC1A8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto ReturnIfNonInteractive_07_skip;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ReturnIfNonInteractive_07_return;
  ReturnIfNonInteractive_07_skip:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ReturnIfNonInteractive_07_return:;
    return;
}

void ApplyRecoilIfNeeded_07(void) {
    gb.regs.hl = 0xC410;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto ApplyRecoilIfNeeded_07_return;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    label_3E8E();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    GetEntitySpeedYAddress();
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
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
    UpdateEntityPosWithSpeed_07();
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto ApplyRecoilIfNeeded_07_restoreOriginalSpeed;
    ApplyEntityInteractionWithBackground_trampoline();
  ApplyRecoilIfNeeded_07_restoreOriginalSpeed:;
    GetEntitySpeedYAddress();
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ApplyRecoilIfNeeded_07_return:;
    return;
}

void UpdateEntityPosWithSpeed_07(void) {
    AddEntitySpeedToPos_07();
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.c = gb.regs.a;
    AddEntitySpeedToPos_07();
    gb.regs.bc = gb_pop16();
    return;
}

void AddEntitySpeedToPos_07(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_07_return;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC260;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC200;
  AddEntitySpeedToPos_07_updatePosition:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_07_positive;
    gb.regs.e = 0xF0;
  AddEntitySpeedToPos_07_positive:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  AddEntitySpeedToPos_07_return:;
    return;
}

void AddEntityZSpeedToPos_07(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { AddEntitySpeedToPos_07_return(); return; };
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC330;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC310;
    AddEntitySpeedToPos_07_updatePosition(); return;
}

void GetEntityXDistanceToLink_07(void) {
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityXDistanceToLink_07_positive;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityXDistanceToLink_07_positive:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityYDistanceToLink_07(void) {
    gb.regs.e = 2;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto GetEntityYDistanceToLink_07_negative;
    gb.regs.e = alu_inc8(gb.regs.e);
  GetEntityYDistanceToLink_07_negative:;
    gb.regs.d = gb.regs.a;
    return;
}

void GetEntityDirectionToLink_07(void) {
    GetEntityXDistanceToLink_07();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_07_positiveX;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_07_positiveX:;
    gb_push16(gb.regs.af);
    GetEntityYDistanceToLink_07();
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = gb.regs.d;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto GetEntityDirectionToLink_07_positiveY;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  GetEntityDirectionToLink_07_positiveY:;
    gb.regs.de = gb_pop16();
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_C()) goto GetEntityDirectionToLink_07_vertical;
    gb.regs.a = gb_read(0xFFD7);
    goto GetEntityDirectionToLink_07_verticalEnd;
  GetEntityDirectionToLink_07_vertical:;
    gb.regs.a = gb_read(0xFFD8);
  GetEntityDirectionToLink_07_verticalEnd:;
    gb.regs.e = gb.regs.a;
    return;
}

void ClearEntityStatus_07(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void label_007_7EAA(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_007_7EB6(); return;
        case 0x01: func_007_7EC7(); return;
        case 0x02: func_007_7ED6(); return;
    }
}

void func_007_7EB6(void) {
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
}

void label_007_7EC1(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void func_007_7EC7(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, 0xC0);
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    label_007_7EC1(); return;
}

void func_007_7ED6(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_007_7F13(); return; };
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x5F);
    if (!GET_FLAG_Z()) goto func_007_7ED6_jr_7F0A;
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
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC390;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFB0, gb.regs.a);
    jr_007_7F76(); return;
  func_007_7ED6_jr_7F0A:;
    PlayBombExplosionSfx();
    label_27DD();
    DidKillEnemy(); return;
}

void jr_007_7F13(void) {
    label_007_7F16(); return;
}

void label_007_7F16(void) {
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
    label_007_7F36(); return;
}

void label_007_7F36(void) {
    ReturnIfNonInteractive_07_allowInactiveEntity();
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
    if (GET_FLAG_Z()) goto label_007_7F36_jr_7F6A;
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, 0xF0);
    jr_007_7F76(); return;
  label_007_7F36_jr_7F6A:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
}

void jr_007_7F76(void) {
    ClearEntityStatus_07();
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x1A);
    return;
}
