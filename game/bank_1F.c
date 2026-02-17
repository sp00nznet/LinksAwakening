/* Auto-generated from LADX Disassembly - Bank 0x1F */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void SoundSystemInit(void);
void func_01F_4003(void);
void PlaySfx(void);
void _SoundSystemInit(void);
void _PlaySfx(void);
void SfxPointersTable1(void);
void SfxPointersTable2(void);
void PlayActiveJingle(void);
void BeginJingleTreasureFound(void);
void ContinueJingleTreasureFound(void);
void Data_01F_42D3(void);
void Data_01F_42D9(void);
void Data_01F_42DF(void);
void Data_01F_42E5(void);
void Data_01F_42EB(void);
void Data_01F_42F0(void);
void Data_01F_42F5(void);
void Data_01F_42FA(void);
void Data_01F_42FF(void);
void Data_01F_4305(void);
void Data_01F_430B(void);
void Data_01F_4311(void);
void Data_01F_4317(void);
void Data_01F_431D(void);
void BeginJinglePuzzleSolved(void);
void ContinueJinglePuzzleSolved(void);
void Data_01F_4345(void);
void Data_01F_4353(void);
void Data_01F_4359(void);
void Data_01F_435C(void);
void Data_01F_435F(void);
void Data_01F_4362(void);
void Data_01F_4365(void);
void Data_01F_4368(void);
void Data_01F_436B(void);
void BeginJingleBowWowChomp(void);
void ContinueJingleBowWowChomp(void);
void Data_01F_4385(void);
void Data_01F_439D(void);
void BeginJingleChargingSword(void);
void ContinueJingleChargingSword(void);
void Data_01F_43D8(void);
void Data_01F_43DC(void);
void BeginJinglePowder(void);
void ContinueJinglePowder(void);
void Data_01F_440F(void);
void Data_01F_4417(void);
void BeginJingleEnemyMorphIn(void);
void ContinueJingleEnemyMorphIn(void);
void Data_01F_4443(void);
void Data_01F_4453(void);
void BeginJingleSwordPoking(void);
void ContinueJingleSwordPoking(void);
void Data_01F_4471(void);
void Data_01F_4477(void);
void BeginJingleJumpDown(void);
void ContinueJingleJumpDown(void);
void Data_01F_4495(void);
void Data_01F_449B(void);
void BeginJingleBump(void);
void ContinueJingleBump(void);
void Data_01F_44B8(void);
void Data_01F_44C8(void);
void BeginJingleMoveSelection(void);
void ContinueJingleMoveSelection(void);
void Data_01F_4509(void);
void Data_01F_450F(void);
void BeginJingleHugeBump(void);
void ContinueJingleHugeBump(void);
void Data_01F_4542(void);
void Data_01F_454E(void);
void BeginJingleRevolvingDoor(void);
void ContinueJingleRevolvingDoor(void);
void Data_01F_4589(void);
void Data_01F_458F(void);
void Data_01F_4595(void);
void BeginJingleFeatherJump(void);
void ContinueJingleFeatherJump(void);
void Data_01F_45A8(void);
void BeginJingleWaterDive(void);
void ContinueJingleWaterDive(void);
void Data_01F_45C6(void);
void BeginJingleWaterSwim(void);
void ContinueJingleWaterSwim(void);
void Data_01F_45E4(void);
void Data_01F_45EA(void);
void BeginJingleUnknown10(void);
void BeginJingleOpenInventory(void);
void ContinueJingleOpenInventory(void);
void Data_01F_4630(void);
void Data_01F_4632(void);
void Data_01F_4637(void);
void label_01F_463D(void);
void BeginJingleCloseInventory(void);
void ContinueJingleCloseInventory(void);
void Data_01F_4690(void);
void Data_01F_4692(void);
void Data_01F_4697(void);
void BeginJingleValidate(void);
void ContinueJingleValidate(void);
void Data_01F_46D5(void);
void Data_01F_46DB(void);
void Data_01F_46E1(void);
void BeginJingleGotHeart(void);
void ContinueJingleGotHeart(void);
void Data_01F_46FB(void);
void BeginJingleDialogBreak(void);
void ContinueJingleDialogBreak(void);
void Data_01F_471C(void);
void Data_01F_4720(void);
void Data_01F_4726(void);
void Data_01F_472C(void);
void BeginJingleShieldTing(void);
void ContinueJingleShieldTing(void);
void Data_01F_473F(void);
void BeginJingleGotPowerUp(void);
void ContinueJingleGotPowerUp(void);
void Data_01F_477E(void);
void Data_01F_4784(void);
void BeginJingleItemFalling(void);
void ContinueJingleItemFalling(void);
void Data_01F_47A2(void);
void Data_01F_47A8(void);
void BeginJingleNewHeart(void);
void ContinueJingleNewHeart(void);
void Data_01F_47C9(void);
void Data_01F_47D1(void);
void Data_01F_47D7(void);
void Data_01F_47DD(void);
void Data_01F_47E3(void);
void Data_01F_47E9(void);
void BeginJingleFairyHealing(void);
void ContinueJingleFairyHealing(void);
void Data_01F_480F(void);
void Data_01F_4815(void);
void BeginJingleClearMidboss(void);
void ContinueJingleClearMidboss(void);
void Data_01F_4855(void);
void Data_01F_4863(void);
void Data_01F_4869(void);
void Data_01F_486F(void);
void BeginJingleMidbossWarp(void);
void ContinueJingleMidbossWarp(void);
void Data_01F_48BB(void);
void Data_01F_48C3(void);
void Data_01F_48C9(void);
void BeginJingleWrongAnswer(void);
void ContinueJingleWrongAnswer(void);
void Data_01F_48FD(void);
void Data_01F_4901(void);
void Data_01F_4904(void);
void Data_01F_4907(void);
void BeginJingleForestLost(void);
void ContinueJingleForestLost(void);
void Data_01F_4925(void);
void Data_01F_492D(void);
void Data_01F_4930(void);
void Data_01F_4933(void);
void Data_01F_4936(void);
void BeginJingleEnemyMorphOut(void);
void ContinueJingleEnemyMorphOut(void);
void Data_01F_495F(void);
void Data_01F_496F(void);
void BeginJingleBigBump(void);
void ContinueJingleBigBump(void);
void Data_01F_49A6(void);
void Data_01F_49AA(void);
void BeginJingleSeagull(void);
void ContinueJingleSeagull(void);
void Data_01F_49F4(void);
void Data_01F_49F6(void);
void Data_01F_49FC(void);
void Data_01F_4A02(void);
void BeginJingleHoneycomb(void);
void ContinueJingleHoneycomb(void);
void Data_01F_4A52(void);
void Data_01F_4A58(void);
void Data_01F_4A5E(void);
void Data_01F_4A64(void);
void BeginJingleDungeonOpened(void);
void ContinueJingleDungeonOpened(void);
void Data_01F_4A9F(void);
void Data_01F_4AAD(void);
void Data_01F_4AB3(void);
void Data_01F_4AB8(void);
void Data_01F_4ABE(void);
void Data_01F_4AC3(void);
void Data_01F_4AC9(void);
void Data_01F_4ACE(void);
void Data_01F_4AD4(void);
void BeginJingleJump(void);
void ContinueJingleJump(void);
void Data_01F_4AE6(void);
void BeginJingleOverworldWarp(void);
void ContinueJingleOverworldWarp(void);
void Data_01F_4B1F(void);
void Data_01F_4B2B(void);
void Data_01F_4B31(void);
void Data_01F_4B34(void);
void Data_01F_4B37(void);
void Data_01F_4B3A(void);
void Data_01F_4B3D(void);
void Data_01F_4B40(void);
void BeginJingleDisappear(void);
void ContinueJingleDisappear(void);
void Data_01F_4B7F(void);
void Data_01F_4B85(void);
void Data_01F_4B8B(void);
void BeginJingleWalrus(void);
void ContinueJingleWalrus(void);
void Data_01F_4BAB(void);
void BeginJingleMasterStalfos(void);
void ContinueJingleMasterStalfos(void);
void Data_01F_4BD0(void);
void Data_01F_4BDE(void);
void Data_01F_4BE4(void);
void Data_01F_4BE7(void);
void Data_01F_4BEA(void);
void Data_01F_4BED(void);
void Data_01F_4BF0(void);
void Data_01F_4BF3(void);
void Data_01F_4BF6(void);
void BeginJingleSlimeEelPull(void);
void ContinueJingleSlimeEelPull(void);
void Data_01F_4C13(void);
void BeginJingleDodongoEatBomb(void);
void ContinueJingleDodongoEatBomb(void);
void Data_01F_4C26(void);
void BeginJingleInstrumentWarp(void);
void ContinueJingleInstrumentWarp(void);
void Data_01F_4C61(void);
void Data_01F_4C75(void);
void Data_01F_4C7B(void);
void BeginJingleManboWarp(void);
void ContinueJingleManboWarp(void);
void Data_01F_4CC3(void);
void Data_01F_4CCF(void);
void Data_01F_4CD5(void);
void Data_01F_4CDB(void);
void BeginJingleGhostPresence(void);
void ContinueJingleGhostPresence(void);
void Data_01F_4D18(void);
void Data_01F_4D20(void);
void BeginJingleEagleTowerOpen(void);
void ContinueJingleEagleTowerOpen(void);
void Data_01F_4D5B(void);
void Data_01F_4DAB(void);
void Data_01F_4DB1(void);
void BeginJinglePoof(void);
void ContinueJinglePoof(void);
void Data_01F_4DDD(void);
void Data_01F_4DE9(void);
void BeginJingleEvilEagle(void);
void ContinueJingleEvilEagle(void);
void Data_01F_4E0A(void);
void BeginJingleGrimCreeper(void);
void ContinueJingleGrimCreeper(void);
void Data_01F_4E46(void);
void Data_01F_4E4A(void);
void Data_01F_4E50(void);
void BeginJingleHotHeadSplash(void);
void ContinueJingleHotHeadSplash(void);
void Data_01F_4E71(void);
void Data_01F_4E75(void);
void Data_01F_4E7B(void);
void Data_01F_4E81(void);
void BeginJingleBlainoPunch(void);
void ContinueJingleBlainoPunch(void);
void Data_01F_4EBC(void);
void Data_01F_4EC4(void);
void BeginJingleShowInstruments(void);
void ContinueJingleShowInstruments(void);
void Data_01F_4F05(void);
void Data_01F_4F17(void);
void Data_01F_4F1D(void);
void BeginJingleShadowNext(void);
void ContinueJingleShadowNext(void);
void Data_01F_4F66(void);
void Data_01F_4F78(void);
void Data_01F_4F7E(void);
void BeginJingleShadow2Defeat(void);
void ContinueJingleShadow2Defeat(void);
void Data_01F_4FE7(void);
void Data_01F_4FEF(void);
void BeginJingleShadow1Hurt(void);
void ContinueJingleShadow1Hurt(void);
void Data_01F_5024(void);
void Data_01F_5036(void);
void BeginJingleShadow3BG(void);
void ContinueJingleShadow3BG(void);
void Data_01F_506E(void);
void Data_01F_5082(void);
void Data_01F_5088(void);
void BeginJingleShadow4Intro(void);
void ContinueJingleShadow4Intro(void);
void Data_01F_50DC(void);
void Data_01F_50F8(void);
void Data_01F_5114(void);
void Data_01F_511A(void);
void BeginJingleUnknown3A(void);
void ContinueJingleUnknown3A(void);
void Data_01F_514F(void);
void Data_01F_5161(void);
void BeginJingleSwordBeam(void);
void ContinueJingleSwordBeam(void);
void Data_01F_5196(void);
void Data_01F_51AE(void);
void BeginJingleEnemyShriek(void);
void ContinueJingleEnemyShriek(void);
void Data_01F_51E0(void);
void Data_01F_51F0(void);
void Data_01F_51F6(void);
void BeginJingleShadow6BG(void);
void ContinueJingleShadow6BG(void);
void label_01F_5253(void);
void Data_01F_525A(void);
void Data_01F_5262(void);
void Data_01F_5268(void);
void BeginJingleUrchinPush(void);
void ContinueJingleUrchinPush(void);
void Data_01F_5283(void);
void BeginJingleFlyingTile(void);
void ContinueJingleFlyingTile(void);
void Data_01F_52C7(void);
void Data_01F_52CD(void);
void Data_01F_52D3(void);
void BeginJingleFacadeHole(void);
void ContinueJingleFacadeHole(void);
void Data_01F_5327(void);
void Data_01F_532B(void);
void Data_01F_5331(void);
void BeginJingleUnknown41(void);
void ContinueJingleUnknown41(void);
void Data_01F_5352(void);
void Data_01F_5360(void);
void Data_01F_5366(void);
void Data_01F_536C(void);
void Data_01F_5372(void);
void Data_01F_5378(void);
void Data_01F_537E(void);
void Data_01F_5384(void);
void Data_01F_538A(void);
void label_01F_5395(void);
void label_01F_539A(void);
void label_01F_53B5(void);
void func_01F_53BB(void);
void Data_01F_53D9(void);
void WriteChannel1FrequencyAndDE(void);
void label_01F_53E6(void);
void PlayActiveWaveSfx(void);
void WaveSfxHandlersTable1(void);
void WaveSfxHandlersTable2(void);
void func_01F_54A7(void);
void func_01F_54B0(void);
void Data_01F_54C5(void);
void Data_01F_54CF(void);
void Data_01F_54D5(void);
void Data_01F_54DB(void);
void Data_01F_54E1(void);
void Data_01F_54E7(void);
void Data_01F_54ED(void);
void func_01F_54F3(void);
void func_01F_5504(void);
void jr_01F_5510(void);
void jr_01F_5516(void);
void Data_01F_5520(void);
void Data_01F_5532(void);
void func_01F_5538(void);
void func_01F_554A(void);
void Data_01F_5558(void);
void Data_01F_555E(void);
void func_01F_5564(void);
void func_01F_5585(void);
void Data_01F_55A4(void);
void Data_01F_55AA(void);
void Data_01F_55AD(void);
void func_01F_55B3(void);
void func_01F_55BC(void);
void jr_01F_55D2(void);
void label_01F_55DB(void);
void jr_01F_55DD(void);
void label_01F_55E2(void);
void Data_01F_55E6(void);
void Data_01F_55F0(void);
void Data_01F_55F3(void);
void Data_01F_55F6(void);
void func_01F_55F9(void);
void func_01F_5610(void);
void jr_01F_5617(void);
void jr_01F_561D(void);
void jr_01F_5628(void);
void Data_01F_5637(void);
void Data_01F_5639(void);
void Data_01F_563F(void);
void func_01F_5645(void);
void func_01F_565E(void);
void jr_01F_5670(void);
void jr_01F_5676(void);
void jr_01F_5688(void);
void Data_01F_568D(void);
void Data_01F_56C5(void);
void Data_01F_56CB(void);
void func_01F_56D1(void);
void func_01F_56E2(void);
void jr_01F_56E9(void);
void jr_01F_56EF(void);
void Data_01F_56FA(void);
void Data_01F_5716(void);
void Data_01F_571C(void);
void func_01F_572C(void);
void func_01F_5732(void);
void func_01F_5740(void);
void label_01F_5751(void);
void label_01F_575C(void);
void Data_01F_576A(void);
void Data_01F_5790(void);
void Data_01F_5796(void);
void Data_01F_579C(void);
void Data_01F_57A2(void);
void Data_01F_57A8(void);
void Data_01F_57AE(void);
void Data_01F_57B4(void);
void Data_01F_57BA(void);
void Data_01F_57C0(void);
void Data_01F_57C6(void);
void Data_01F_57CC(void);
void Data_01F_57D1(void);
void Data_01F_57D6(void);
void Data_01F_57DB(void);
void Data_01F_57E0(void);
void Data_01F_57E5(void);
void Data_01F_57EA(void);
void Data_01F_57EF(void);
void Data_01F_57F4(void);
void Data_01F_57F9(void);
void func_01F_57FE(void);
void func_01F_580C(void);
void Data_01F_5821(void);
void Data_01F_584B(void);
void Data_01F_5851(void);
void Data_01F_5857(void);
void Data_01F_585D(void);
void Data_01F_5863(void);
void Data_01F_5869(void);
void Data_01F_586F(void);
void Data_01F_5875(void);
void Data_01F_587B(void);
void Data_01F_5880(void);
void Data_01F_5885(void);
void Data_01F_588A(void);
void Data_01F_588F(void);
void Data_01F_5894(void);
void Data_01F_5899(void);
void Data_01F_589E(void);
void func_01F_58A3(void);
void func_01F_58AF(void);
void Data_01F_58C4(void);
void Data_01F_58E6(void);
void Data_01F_58EC(void);
void Data_01F_58F2(void);
void Data_01F_58F8(void);
void Data_01F_58FE(void);
void Data_01F_5904(void);
void Data_01F_590A(void);
void Data_01F_5910(void);
void Data_01F_5916(void);
void Data_01F_591C(void);
void Data_01F_5921(void);
void Data_01F_5926(void);
void Data_01F_592B(void);
void Data_01F_5930(void);
void Data_01F_5935(void);
void Data_01F_593A(void);
void Data_01F_593F(void);
void Data_01F_5944(void);
void func_01F_5949(void);
void func_01F_595A(void);
void jr_01F_5961(void);
void jr_01F_5967(void);
void Data_01F_597D(void);
void Data_01F_598D(void);
void func_01F_5999(void);
void func_01F_59AA(void);
void jr_01F_59B1(void);
void jr_01F_59B7(void);
void Data_01F_59D1(void);
void Data_01F_59D5(void);
void Data_01F_59DB(void);
void func_01F_59E1(void);
void func_01F_59EA(void);
void Data_01F_59FF(void);
void Data_01F_5A07(void);
void Data_01F_5A0D(void);
void Data_01F_5A13(void);
void func_01F_5A19(void);
void func_01F_5A2A(void);
void Data_01F_5A38(void);
void Data_01F_5A3E(void);
void func_01F_5A44(void);
void func_01F_5A55(void);
void Data_01F_5A7B(void);
void Data_01F_5B5B(void);
void Data_01F_5B61(void);
void func_01F_5B67(void);
void func_01F_5B78(void);
void label_01F_5B9E(void);
void jr_01F_5BA1(void);
void label_01F_5BA9(void);
void Data_01F_5BAE(void);
void Data_01F_5BB2(void);
void Data_01F_5BB8(void);
void Data_01F_5BBE(void);
void func_01F_5BC4(void);
void func_01F_5BD5(void);
void jr_01F_5BDC(void);
void jr_01F_5BE2(void);
void Data_01F_5BFC(void);
void Data_01F_5C00(void);
void Data_01F_5C06(void);
void func_01F_5C0C(void);
void func_01F_5C1D(void);
void jr_01F_5C35(void);
void jr_01F_5C46(void);
void jr_01F_5C4E(void);
void jr_01F_5C5F(void);
void Data_01F_5C64(void);
void Data_01F_5C6E(void);
void Data_01F_5C74(void);
void Data_01F_5C7A(void);
void func_01F_5C80(void);
void func_01F_5C99(void);
void Data_01F_5CA8(void);
void Data_01F_5CAA(void);
void func_01F_5CB0(void);
void func_01F_5CB9(void);
void Data_01F_5CCE(void);
void Data_01F_5CD8(void);
void Data_01F_5CDE(void);
void Data_01F_5CE4(void);
void Data_01F_5CEA(void);
void Data_01F_5CF0(void);
void Data_01F_5CF6(void);
void func_01F_5CFC(void);
void func_01F_5D1A(void);
void jr_01F_5D26(void);
void jr_01F_5D33(void);
void jr_01F_5D38(void);
void Data_01F_5D4A(void);
void Data_01F_5D68(void);
void Data_01F_5D6E(void);
void Data_01F_5D74(void);
void func_01F_5D84(void);
void func_01F_5DA6(void);
void jr_01F_5DB5(void);
void jr_01F_5DBB(void);
void jr_01F_5DBD(void);
void jr_01F_5DC4(void);
void jr_01F_5DCE(void);
void jr_01F_5DFB(void);
void Data_01F_5E09(void);
void Data_01F_5EB1(void);
void Data_01F_5EB6(void);
void Data_01F_5EBB(void);
void Data_01F_5EC0(void);
void Data_01F_5EC5(void);
void Data_01F_5ECB(void);
void Data_01F_5ED1(void);
void func_01F_5ED7(void);
void func_01F_5EE8(void);
void jr_01F_5EEF(void);
void jr_01F_5EF5(void);
void Data_01F_5F0F(void);
void Data_01F_5F13(void);
void func_01F_5F19(void);
void func_01F_5F25(void);
void jr_01F_5F39(void);
void jr_01F_5F3F(void);
void jr_01F_5F41(void);
void jr_01F_5F46(void);
void jr_01F_5F4A(void);
void Data_01F_5F4E(void);
void Data_01F_5F72(void);
void func_01F_5F78(void);
void func_01F_5F93(void);
void Data_01F_5FA8(void);
void Data_01F_5FAE(void);
void Data_01F_5FB4(void);
void Data_01F_5FBA(void);
void func_01F_5FC0(void);
void func_01F_5FC9(void);
void Data_01F_5FDE(void);
void Data_01F_5FEC(void);
void Data_01F_5FF2(void);
void Data_01F_5FF8(void);
void Data_01F_5FFE(void);
void Data_01F_6004(void);
void Data_01F_600A(void);
void Data_01F_6010(void);
void Data_01F_6016(void);
void func_01F_601C(void);
void func_01F_602D(void);
void jr_01F_6047(void);
void jr_01F_604F(void);
void Data_01F_6054(void);
void Data_01F_6060(void);
void Data_01F_6066(void);
void func_01F_606C(void);
void func_01F_606D(void);
void func_01F_606E(void);
void func_01F_6084(void);
void jr_01F_608A(void);
void jr_01F_6097(void);
void jr_01F_609E(void);
void jr_01F_60A2(void);
void label_01F_60A6(void);
void Data_01F_60B8(void);
void Data_01F_60BE(void);
void Data_01F_60C4(void);
void func_01F_60D4(void);
void func_01F_60EF(void);
void jr_01F_6103(void);
void jr_01F_610D(void);
void jr_01F_6111(void);
void jr_01F_6115(void);
void jr_01F_6135(void);
void Data_01F_613D(void);
void Data_01F_6147(void);
void func_01F_614D(void);
void func_01F_6163(void);
void jr_01F_6168(void);
void jr_01F_6175(void);
void jr_01F_617C(void);
void jr_01F_6180(void);
void jr_01F_6184(void);
void Data_01F_6196(void);
void Data_01F_619C(void);
void func_01F_61A2(void);
void func_01F_61CF(void);
void jr_01F_61DA(void);
void jr_01F_61E0(void);
void jr_01F_61E8(void);
void jr_01F_61ED(void);
void Data_01F_6205(void);
void Data_01F_6217(void);
void func_01F_621C(void);
void func_01F_6231(void);
void jr_01F_6236(void);
void jr_01F_6247(void);
void jr_01F_624E(void);
void jr_01F_6262(void);
void jr_01F_6266(void);
void jr_01F_626A(void);
void Data_01F_626E(void);
void Data_01F_6276(void);
void func_01F_627C(void);
void func_01F_6285(void);
void Data_01F_62B1(void);
void Data_01F_62C9(void);
void Data_01F_62CF(void);
void Data_01F_62D5(void);
void Data_01F_62DB(void);
void Data_01F_62E1(void);
void Data_01F_62E7(void);
void Data_01F_62EA(void);
void Data_01F_62ED(void);
void Data_01F_62F0(void);
void label_01F_62F3(void);
void label_01F_62F8(void);
void Data_01F_6311(void);
void label_01F_6327(void);
void label_01F_632D(void);
void WriteWavePattern(void);
void Data_01F_6354(void);
void func_01F_635A(void);
void func_01F_6360(void);
void func_01F_6365(void);
void func_01F_636A(void);
void func_01F_636F(void);
void func_01F_6374(void);
void func_01F_6379(void);
void WriteChannel3FrequencyAndDE(void);
void label_01F_6385(void);
void Data_01F_638C(void);
void Data_01F_639C(void);
void Data_01F_63AC(void);
void Data_01F_63BC(void);
void Data_01F_63CC(void);
void Data_01F_63DC(void);
void NoiseSfxHandlersTable1(void);
void NoiseSfxHandlersTable2(void);
void PlayActiveNoiseSfx(void);
void jr_01F_6508(void);
void jr_01F_6512(void);
void func_01F_651E(void);
void func_01F_6529(void);
void Data_01F_6533(void);
void Data_01F_6538(void);
void func_01F_653D(void);
void func_01F_6543(void);
void Data_01F_6558(void);
void Data_01F_6564(void);
void Data_01F_6569(void);
void Data_01F_656E(void);
void Data_01F_6573(void);
void Data_01F_6578(void);
void Data_01F_657D(void);
void Data_01F_6582(void);
void func_01F_6587(void);
void func_01F_658D(void);
void Data_01F_65A2(void);
void Data_01F_65C2(void);
void Data_01F_65C7(void);
void Data_01F_65CC(void);
void Data_01F_65D1(void);
void Data_01F_65D6(void);
void Data_01F_65DB(void);
void Data_01F_65E0(void);
void Data_01F_65E5(void);
void Data_01F_65EA(void);
void func_01F_65EF(void);
void func_01F_65F5(void);
void Data_01F_660A(void);
void Data_01F_6610(void);
void Data_01F_6615(void);
void Data_01F_661A(void);
void func_01F_661F(void);
void func_01F_663C(void);
void Data_01F_6651(void);
void Data_01F_6659(void);
void Data_01F_665E(void);
void Data_01F_6663(void);
void Data_01F_6668(void);
void func_01F_666D(void);
void func_01F_6673(void);
void Data_01F_6688(void);
void Data_01F_668E(void);
void Data_01F_6693(void);
void Data_01F_6698(void);
void Data_01F_669D(void);
void func_01F_66A2(void);
void func_01F_66C4(void);
void Data_01F_66D6(void);
void Data_01F_66DB(void);
void func_01F_66E0(void);
void func_01F_66F3(void);
void jr_01F_66FE(void);
void jr_01F_6707(void);
void Data_01F_6712(void);
void Data_01F_6718(void);
void Data_01F_671D(void);
void Data_01F_6720(void);
void Data_01F_6723(void);
void func_01F_6726(void);
void func_01F_672C(void);
void Data_01F_6745(void);
void Data_01F_674F(void);
void Data_01F_6754(void);
void Data_01F_6757(void);
void Data_01F_675A(void);
void Data_01F_675D(void);
void func_01F_6760(void);
void func_01F_6766(void);
void Data_01F_677B(void);
void Data_01F_6783(void);
void Data_01F_6788(void);
void Data_01F_678D(void);
void func_01F_6792(void);
void func_01F_6798(void);
void Data_01F_67AA(void);
void Data_01F_67AF(void);
void func_01F_67B4(void);
void func_01F_67C7(void);
void Data_01F_67DC(void);
void Data_01F_67E4(void);
void Data_01F_67E9(void);
void Data_01F_67EC(void);
void Data_01F_67EF(void);
void Data_01F_67F2(void);
void func_01F_67F5(void);
void func_01F_6800(void);
void jr_01F_680B(void);
void jr_01F_6814(void);
void Data_01F_681F(void);
void Data_01F_6823(void);
void Data_01F_6828(void);
void Data_01F_682B(void);
void func_01F_682E(void);
void func_01F_6834(void);
void Data_01F_6849(void);
void Data_01F_684D(void);
void Data_01F_6852(void);
void Data_01F_6857(void);
void func_01F_685C(void);
void func_01F_6869(void);
void Data_01F_687E(void);
void Data_01F_6882(void);
void Data_01F_6887(void);
void Data_01F_688C(void);
void func_01F_6891(void);
void func_01F_689C(void);
void jr_01F_68BD(void);
void jr_01F_68C3(void);
void Data_01F_68C8(void);
void Data_01F_68D2(void);
void Data_01F_68D7(void);
void Data_01F_68DA(void);
void Data_01F_68DD(void);
void Data_01F_68E0(void);
void Data_01F_68E3(void);
void Data_01F_68E6(void);
void Data_01F_68EB(void);
void func_01F_68F0(void);
void func_01F_68F6(void);
void Data_01F_68FD(void);
void func_01F_6902(void);
void func_01F_6908(void);
void Data_01F_691D(void);
void Data_01F_692B(void);
void Data_01F_6930(void);
void Data_01F_6933(void);
void Data_01F_6936(void);
void Data_01F_6939(void);
void Data_01F_693C(void);
void func_01F_693F(void);
void func_01F_6945(void);
void Data_01F_696A(void);
void Data_01F_699C(void);
void Data_01F_69A1(void);
void Data_01F_69A6(void);
void Data_01F_69AB(void);
void Data_01F_69B0(void);
void Data_01F_69B5(void);
void Data_01F_69BA(void);
void Data_01F_69BF(void);
void Data_01F_69C4(void);
void func_01F_69C9(void);
void func_01F_69CF(void);
void Data_01F_69E0(void);
void Data_01F_69EC(void);
void Data_01F_69F1(void);
void Data_01F_69F6(void);
void Data_01F_69FB(void);
void Data_01F_6A00(void);
void Data_01F_6A05(void);
void Data_01F_6A0A(void);
void func_01F_6A0F(void);
void func_01F_6A15(void);
void Data_01F_6A26(void);
void Data_01F_6A30(void);
void Data_01F_6A35(void);
void Data_01F_6A3A(void);
void Data_01F_6A3F(void);
void Data_01F_6A44(void);
void Data_01F_6A49(void);
void func_01F_6A4E(void);
void func_01F_6A5C(void);
void Data_01F_6A6D(void);
void Data_01F_6A71(void);
void Data_01F_6A76(void);
void Data_01F_6A7B(void);
void func_01F_6A80(void);
void func_01F_6A86(void);
void Data_01F_6A98(void);
void Data_01F_6A9D(void);
void func_01F_6AA2(void);
void func_01F_6AA8(void);
void Data_01F_6ABD(void);
void Data_01F_6AC9(void);
void Data_01F_6ACE(void);
void Data_01F_6AD3(void);
void Data_01F_6AD8(void);
void Data_01F_6ADD(void);
void Data_01F_6AE2(void);
void Data_01F_6AE7(void);
void func_01F_6AEC(void);
void func_01F_6AF2(void);
void Data_01F_6B07(void);
void Data_01F_6B1B(void);
void Data_01F_6B20(void);
void Data_01F_6B23(void);
void Data_01F_6B26(void);
void Data_01F_6B29(void);
void Data_01F_6B2C(void);
void Data_01F_6B2F(void);
void func_01F_6B32(void);
void func_01F_6B38(void);
void Data_01F_6B4D(void);
void Data_01F_6B77(void);
void Data_01F_6B7C(void);
void Data_01F_6B7F(void);
void Data_01F_6B82(void);
void Data_01F_6B85(void);
void Data_01F_6B88(void);
void Data_01F_6B8B(void);
void Data_01F_6B8E(void);
void Data_01F_6B91(void);
void Data_01F_6B94(void);
void func_01F_6B97(void);
void jr_01F_6BA7(void);
void jr_01F_6BAA(void);
void func_01F_6BAF(void);
void jr_01F_6BC5(void);
void jr_01F_6BC8(void);
void jr_01F_6BCF(void);
void jr_01F_6BD4(void);
void label_01F_6BDD(void);
void Data_01F_6BE7(void);
void Data_01F_6BF1(void);
void Data_01F_6BF5(void);
void Data_01F_6BFA(void);
void Data_01F_6BFF(void);
void Data_01F_6C04(void);
void Data_01F_6C09(void);
void func_01F_6C13(void);
void func_01F_6C1E(void);
void jr_01F_6C29(void);
void jr_01F_6C32(void);
void Data_01F_6C3D(void);
void Data_01F_6C41(void);
void Data_01F_6C46(void);
void Data_01F_6C49(void);
void func_01F_6C4C(void);
void func_01F_6C57(void);
void jr_01F_6C62(void);
void jr_01F_6C6B(void);
void Data_01F_6C83(void);
void Data_01F_6C87(void);
void Data_01F_6C8C(void);
void Data_01F_6C91(void);
void Data_01F_6C94(void);
void func_01F_6C97(void);
void func_01F_6CA4(void);
void Data_01F_6CBA(void);
void Data_01F_6CBF(void);
void func_01F_6CC4(void);
void func_01F_6CCF(void);
void jr_01F_6CD6(void);
void jr_01F_6CDF(void);
void Data_01F_6CF7(void);
void Data_01F_6CFB(void);
void Data_01F_6D00(void);
void Data_01F_6D05(void);
void Data_01F_6D08(void);
void func_01F_6D0B(void);
void func_01F_6D11(void);
void jr_01F_6D18(void);
void jr_01F_6D21(void);
void Data_01F_6D26(void);
void Data_01F_6D2A(void);
void Data_01F_6D2F(void);
void Data_01F_6D32(void);
void func_01F_6D35(void);
void func_01F_6D3B(void);
void Data_01F_6D58(void);
void Data_01F_6D60(void);
void Data_01F_6D65(void);
void Data_01F_6D6A(void);
void Data_01F_6D6D(void);
void Data_01F_6D70(void);
void func_01F_6D73(void);
void func_01F_6D79(void);
void Data_01F_6D8B(void);
void Data_01F_6D90(void);
void func_01F_6D95(void);
void func_01F_6D9B(void);
void Data_01F_6DAD(void);
void Data_01F_6DB2(void);
void func_01F_6DB7(void);
void func_01F_6DBD(void);
void Data_01F_6DDA(void);
void Data_01F_6E20(void);
void Data_01F_6E25(void);
void Data_01F_6E28(void);
void Data_01F_6E2B(void);
void Data_01F_6E2E(void);
void Data_01F_6E31(void);
void Data_01F_6E34(void);
void Data_01F_6E37(void);
void Data_01F_6E3A(void);
void Data_01F_6E3F(void);
void Data_01F_6E42(void);
void Data_01F_6E45(void);
void Data_01F_6E48(void);
void Data_01F_6E4B(void);
void func_01F_6E4E(void);
void func_01F_6E59(void);
void jr_01F_6E64(void);
void jr_01F_6E6D(void);
void Data_01F_6E78(void);
void Data_01F_6E7C(void);
void Data_01F_6E81(void);
void Data_01F_6E84(void);
void func_01F_6E87(void);
void func_01F_6E8D(void);
void Data_01F_6EA2(void);
void Data_01F_6EBA(void);
void Data_01F_6EBF(void);
void Data_01F_6EC2(void);
void Data_01F_6EC5(void);
void Data_01F_6EC8(void);
void Data_01F_6ECB(void);
void Data_01F_6ECE(void);
void Data_01F_6ED1(void);
void Data_01F_6ED4(void);
void Data_01F_6ED7(void);
void Data_01F_6EDA(void);
void func_01F_6EDD(void);
void func_01F_6EE8(void);
void jr_01F_6EF3(void);
void jr_01F_6EFC(void);
void Data_01F_6F07(void);
void Data_01F_6F1D(void);
void Data_01F_6F22(void);
void Data_01F_6F25(void);
void Data_01F_6F28(void);
void Data_01F_6F2B(void);
void Data_01F_6F2E(void);
void func_01F_6F31(void);
void func_01F_6F3C(void);
void jr_01F_6F47(void);
void jr_01F_6F50(void);
void Data_01F_6F5B(void);
void Data_01F_6F67(void);
void Data_01F_6F6C(void);
void Data_01F_6F6F(void);
void Data_01F_6F72(void);
void Data_01F_6F75(void);
void func_01F_6F78(void);
void func_01F_6F83(void);
void jr_01F_6F8E(void);
void jr_01F_6F9F(void);
void Data_01F_6FAA(void);
void Data_01F_6FBE(void);
void Data_01F_6FC3(void);
void Data_01F_6FC8(void);
void Data_01F_6FCB(void);
void Data_01F_6FCE(void);
void Data_01F_6FD1(void);
void Data_01F_6FD4(void);
void Data_01F_6FD7(void);
void Data_01F_6FDA(void);
void func_01F_6FDD(void);
void func_01F_6FE3(void);
void Data_01F_6FEA(void);
void func_01F_6FEF(void);
void func_01F_6FF5(void);
void Data_01F_7012(void);
void Data_01F_7038(void);
void Data_01F_703D(void);
void Data_01F_7040(void);
void Data_01F_7043(void);
void Data_01F_7046(void);
void Data_01F_7049(void);
void Data_01F_704C(void);
void Data_01F_704F(void);
void Data_01F_7052(void);
void Data_01F_7055(void);
void Data_01F_7058(void);
void Data_01F_705B(void);
void Data_01F_705E(void);
void Data_01F_7061(void);
void Data_01F_7064(void);
void Data_01F_7067(void);
void Data_01F_706A(void);
void Data_01F_706D(void);
void Data_01F_7070(void);
void Data_01F_7073(void);
void func_01F_7078(void);
void func_01F_707E(void);
void Data_01F_7093(void);
void Data_01F_70A1(void);
void Data_01F_70A6(void);
void Data_01F_70AB(void);
void Data_01F_70B0(void);
void Data_01F_70B5(void);
void Data_01F_70BA(void);
void Data_01F_70BF(void);
void func_01F_70C4(void);
void func_01F_70CF(void);
void jr_01F_70DA(void);
void jr_01F_70EB(void);
void Data_01F_70F6(void);
void Data_01F_710C(void);
void Data_01F_7111(void);
void func_01F_7114(void);
void func_01F_711A(void);
void Data_01F_712C(void);
void Data_01F_7131(void);
void func_01F_7136(void);
void func_01F_713C(void);
void Data_01F_7151(void);
void Data_01F_7195(void);
void Data_01F_719A(void);
void Data_01F_719F(void);
void Data_01F_71A4(void);
void Data_01F_71A9(void);
void Data_01F_71AE(void);
void Data_01F_71B3(void);
void Data_01F_71B8(void);
void Data_01F_71BD(void);
void Data_01F_71C2(void);
void func_01F_71C7(void);
void func_01F_71CD(void);
void Data_01F_71E2(void);
void Data_01F_7216(void);
void Data_01F_721B(void);
void Data_01F_7220(void);
void Data_01F_7225(void);
void Data_01F_722A(void);
void Data_01F_722F(void);
void Data_01F_7234(void);
void Data_01F_7239(void);
void func_01F_723E(void);
void func_01F_7244(void);
void Data_01F_7259(void);
void Data_01F_726D(void);
void Data_01F_7272(void);
void Data_01F_7277(void);
void Data_01F_727C(void);
void Data_01F_7281(void);
void Data_01F_7286(void);
void Data_01F_728B(void);
void Data_01F_7290(void);
void func_01F_7295(void);
void func_01F_729B(void);
void Data_01F_72B8(void);
void Data_01F_72CE(void);
void Data_01F_72D3(void);
void Data_01F_72D6(void);
void Data_01F_72D9(void);
void Data_01F_72DC(void);
void Data_01F_72DF(void);
void func_01F_72E4(void);
void func_01F_72F4(void);
void jr_01F_730C(void);
void jr_01F_733B(void);
void jr_01F_734A(void);
void jr_01F_7359(void);
void jr_01F_735E(void);
void jr_01F_7363(void);
void Data_01F_7373(void);
void Data_01F_7415(void);
void Data_01F_741A(void);
void Data_01F_741D(void);
void Data_01F_7420(void);
void Data_01F_7423(void);
void Data_01F_7426(void);
void Data_01F_7429(void);
void Data_01F_742C(void);
void Data_01F_742F(void);
void Data_01F_7432(void);
void Data_01F_7435(void);
void Data_01F_7438(void);
void Data_01F_743B(void);
void Data_01F_743E(void);
void Data_01F_7441(void);
void Data_01F_7444(void);
void Data_01F_7447(void);
void Data_01F_744A(void);
void Data_01F_744D(void);
void Data_01F_7450(void);
void Data_01F_7453(void);
void Data_01F_7456(void);
void Data_01F_7459(void);
void Data_01F_745C(void);
void Data_01F_7461(void);
void Data_01F_7464(void);
void Data_01F_7467(void);
void Data_01F_746A(void);
void Data_01F_746D(void);
void Data_01F_7472(void);
void Data_01F_7477(void);
void Data_01F_747C(void);
void Data_01F_7481(void);
void Data_01F_7486(void);
void func_01F_748B(void);
void func_01F_7496(void);
void Data_01F_74AB(void);
void Data_01F_74EB(void);
void Data_01F_74F0(void);
void Data_01F_74F5(void);
void Data_01F_74FA(void);
void Data_01F_74FF(void);
void Data_01F_7504(void);
void Data_01F_7509(void);
void Data_01F_750E(void);
void Data_01F_7513(void);
void Data_01F_7518(void);
void Data_01F_751D(void);
void Data_01F_7522(void);
void Data_01F_7527(void);
void Data_01F_752C(void);
void Data_01F_7531(void);
void Data_01F_7536(void);
void Data_01F_753B(void);
void Data_01F_7540(void);
void Data_01F_7545(void);
void Data_01F_754A(void);
void Data_01F_754F(void);
void Data_01F_7554(void);
void Data_01F_7559(void);
void Data_01F_755E(void);
void Data_01F_7563(void);
void Data_01F_7568(void);
void Data_01F_756D(void);
void Data_01F_7572(void);
void Data_01F_7577(void);
void Data_01F_757C(void);
void Data_01F_7581(void);
void Data_01F_7586(void);
void Data_01F_758B(void);
void func_01F_7590(void);
void func_01F_759B(void);
void jr_01F_75A2(void);
void jr_01F_75AB(void);
void Data_01F_75B6(void);
void Data_01F_75C6(void);
void Data_01F_75CB(void);
void Data_01F_75CE(void);
void Data_01F_75D1(void);
void Data_01F_75D4(void);
void Data_01F_75D7(void);
void func_01F_75DA(void);
void func_01F_75EB(void);
void jr_01F_75F6(void);
void jr_01F_75FC(void);
void jr_01F_7605(void);
void func_01F_760A(void);
void func_01F_7610(void);
void Data_01F_7625(void);
void Data_01F_7647(void);
void Data_01F_764C(void);
void Data_01F_7651(void);
void Data_01F_7656(void);
void Data_01F_765B(void);
void Data_01F_7660(void);
void Data_01F_7665(void);
void Data_01F_766A(void);
void Data_01F_766F(void);
void Data_01F_7674(void);
void Data_01F_7679(void);
void Data_01F_767E(void);
void Data_01F_7683(void);
void Data_01F_7688(void);
void Data_01F_768D(void);
void Data_01F_7692(void);
void Data_01F_7697(void);
void Data_01F_769C(void);
void func_01F_76A1(void);
void func_01F_76A7(void);
void Data_01F_76BC(void);
void Data_01F_76D6(void);
void Data_01F_76DB(void);
void Data_01F_76E0(void);
void Data_01F_76E5(void);
void Data_01F_76EA(void);
void Data_01F_76EF(void);
void Data_01F_76F4(void);
void Data_01F_76F9(void);
void Data_01F_76FE(void);
void Data_01F_7703(void);
void Data_01F_7708(void);
void Data_01F_770D(void);
void Data_01F_7712(void);
void Data_01F_7717(void);
void func_01F_771C(void);
void func_01F_7730(void);
void Data_01F_775A(void);
void Data_01F_775E(void);
void Data_01F_7763(void);
void Data_01F_7769(void);
void func_01F_776E(void);
void func_01F_7790(void);
void jr_01F_77A8(void);
void jr_01F_77AF(void);
void jr_01F_77B3(void);
void func_01F_77C0(void);
void Data_01F_77D2(void);
void Data_01F_77D6(void);
void Data_01F_77DB(void);
void Data_01F_77E0(void);
void func_01F_77E6(void);
void func_01F_77EC(void);
void Data_01F_7801(void);
void Data_01F_78A3(void);
void Data_01F_78A8(void);
void Data_01F_78AB(void);
void Data_01F_78AE(void);
void Data_01F_78B1(void);
void Data_01F_78B4(void);
void Data_01F_78B7(void);
void Data_01F_78BA(void);
void Data_01F_78BD(void);
void Data_01F_78C0(void);
void Data_01F_78C3(void);
void Data_01F_78C6(void);
void Data_01F_78C9(void);
void Data_01F_78CC(void);
void Data_01F_78CF(void);
void Data_01F_78D2(void);
void Data_01F_78D5(void);
void Data_01F_78D8(void);
void Data_01F_78DB(void);
void Data_01F_78DE(void);
void Data_01F_78E1(void);
void Data_01F_78E4(void);
void Data_01F_78E7(void);
void Data_01F_78EA(void);
void Data_01F_78ED(void);
void Data_01F_78F0(void);
void Data_01F_78F3(void);
void Data_01F_78F6(void);
void Data_01F_78F9(void);
void Data_01F_78FC(void);
void Data_01F_78FF(void);
void Data_01F_7902(void);
void func_01F_7905(void);
void func_01F_790B(void);
void Data_01F_7925(void);
void Data_01F_7933(void);
void Data_01F_7938(void);
void Data_01F_793D(void);
void Data_01F_7942(void);
void Data_01F_7947(void);
void Data_01F_794C(void);
void Data_01F_7951(void);
void Data_01F_7956(void);
void func_01F_795B(void);
void func_01F_7961(void);
void Data_01F_7976(void);
void Data_01F_7994(void);
void Data_01F_7999(void);
void Data_01F_799E(void);
void Data_01F_79A3(void);
void Data_01F_79A8(void);
void Data_01F_79AD(void);
void Data_01F_79B2(void);
void Data_01F_79B7(void);
void Data_01F_79BC(void);
void Data_01F_79C1(void);
void Data_01F_79C6(void);
void Data_01F_79CB(void);
void Data_01F_79D0(void);
void Data_01F_79D5(void);
void Data_01F_79DA(void);
void Data_01F_79DF(void);
void func_01F_79E4(void);
void label_01F_79E9(void);
void func_01F_7A01(void);
void func_01F_7A07(void);
void Data_01F_7A20(void);
void func_01F_7A25(void);
void label_01F_7A2C(void);
void func_01F_7A33(void);
void label_01F_7A51(void);
void GetHandlerAddressInTable(void);
void DecrementValueAtDE(void);
void IncrementValueAtBC(void);
void WriteChannel1AndDE(void);
void WriteChannel2AndDE(void);
void WriteChannel3AndDE(void);
void WriteChannel4AndDE(void);
void WriteIOAndDE(void);
void func_01F_7A9A(void);
void func_01F_7AA6(void);
void func_01F_7AAC(void);
void jr_01F_7AB2(void);
void func_01F_7AB7(void);
void func_01F_7ABD(void);
void jr_01F_7AC1(void);
void func_01F_7AD0(void);
void func_01F_7AE1(void);
void label_01F_7AEB(void);
void jr_01F_7AF5(void);
void func_01F_7B11(void);
void func_01F_7B1B(void);
void func_01F_7B21(void);
void Data_01F_7B36(void);
void Data_01F_7B3E(void);
void Data_01F_7B48(void);
void Data_01F_7B4D(void);
void Data_01F_7B52(void);
void Data_01F_7B57(void);
void func_01F_7B5C(void);
void func_01F_7F80(void);
void jr_01F_7F9E(void);
void jr_01F_7FBE(void);

void SoundSystemInit(void) {
    _SoundSystemInit(); return;
}

void func_01F_4003(void) {
    func_01F_7B5C(); return;
}

void PlaySfx(void) {
    _PlaySfx(); return;
}

void _SoundSystemInit(void) {
    gb.regs.hl = 0xD300;
  _SoundSystemInit_loop:;
    gb_write(gb.regs.hl, 0);
    gb.regs.l = alu_inc8(gb.regs.l);
    if (!GET_FLAG_Z()) goto _SoundSystemInit_loop;
    gb.regs.a = 0x80;
    gb_write(0xFF26, gb.regs.a);
    gb.regs.a = 0x77;
    gb_write(0xFF24, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xFF25, gb.regs.a);
    return;
}

void _PlaySfx(void) {
    PlayActiveJingle();
    PlayActiveWaveSfx();
    PlayActiveNoiseSfx();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD360, gb.regs.a);
    gb_write(0xD370, gb.regs.a);
    gb_write(0xD378, gb.regs.a);
    return;
}

void SfxPointersTable1(void) {
    /* data: dw BeginJingleTreasureFound */;
    /* data: dw BeginJinglePuzzleSolved */;
    /* data: dw BeginJingleBowWowChomp */;
    /* data: dw BeginJingleChargingSword */;
    /* data: dw BeginJinglePowder */;
    /* data: dw BeginJingleEnemyMorphIn */;
    /* data: dw BeginJingleSwordPoking */;
    /* data: dw BeginJingleJumpDown */;
    /* data: dw BeginJingleBump */;
    /* data: dw BeginJingleMoveSelection */;
    /* data: dw BeginJingleHugeBump */;
    /* data: dw BeginJingleRevolvingDoor */;
    /* data: dw BeginJingleFeatherJump */;
    /* data: dw BeginJingleWaterDive */;
    /* data: dw BeginJingleWaterSwim */;
    /* data: dw BeginJingleUnknown10 */;
    /* data: dw BeginJingleOpenInventory */;
    /* data: dw BeginJingleCloseInventory */;
    /* data: dw BeginJingleValidate */;
    /* data: dw BeginJingleGotHeart */;
    /* data: dw BeginJingleDialogBreak */;
    /* data: dw BeginJingleShieldTing */;
    /* data: dw BeginJingleGotPowerUp */;
    /* data: dw BeginJingleItemFalling */;
    /* data: dw BeginJingleNewHeart */;
    /* data: dw BeginJingleFairyHealing */;
    /* data: dw BeginJingleClearMidboss */;
    /* data: dw BeginJingleMidbossWarp */;
    /* data: dw BeginJingleWrongAnswer */;
    /* data: dw BeginJingleForestLost */;
    /* data: dw BeginJingleEnemyMorphOut */;
    /* data: dw BeginJingleBigBump */;
    /* data: dw BeginJingleSeagull */;
    /* data: dw BeginJingleHoneycomb */;
    /* data: dw BeginJingleDungeonOpened */;
    /* data: dw BeginJingleJump */;
    /* data: dw BeginJingleOverworldWarp */;
    /* data: dw BeginJingleDisappear */;
    /* data: dw BeginJingleWalrus */;
    /* data: dw BeginJingleMasterStalfos */;
    /* data: dw BeginJingleSlimeEelPull */;
    /* data: dw BeginJingleDodongoEatBomb */;
    /* data: dw BeginJingleInstrumentWarp */;
    /* data: dw BeginJingleManboWarp */;
    /* data: dw BeginJingleGhostPresence */;
    /* data: dw BeginJingleEagleTowerOpen */;
    /* data: dw BeginJinglePoof */;
    /* data: dw BeginJingleEvilEagle */;
    /* data: dw BeginJingleGrimCreeper */;
    /* data: dw BeginJingleHotHeadSplash */;
    /* data: dw BeginJingleBlainoPunch */;
    /* data: dw BeginJingleShowInstruments */;
    /* data: dw BeginJingleShadowNext */;
    /* data: dw BeginJingleShadow2Defeat */;
    /* data: dw BeginJingleShadow1Hurt */;
    /* data: dw BeginJingleShadow3BG */;
    /* data: dw BeginJingleShadow4Intro */;
    /* data: dw BeginJingleUnknown3A */;
    /* data: dw BeginJingleSwordBeam */;
    /* data: dw BeginJingleEnemyShriek */;
    /* data: dw BeginJingleShadow6BG */;
    /* data: dw BeginJingleUrchinPush */;
    /* data: dw BeginJingleFlyingTile */;
    /* data: dw BeginJingleFacadeHole */;
    /* data: dw BeginJingleUnknown41 */;
}

void SfxPointersTable2(void) {
    /* data: dw ContinueJingleTreasureFound */;
    /* data: dw ContinueJinglePuzzleSolved */;
    /* data: dw ContinueJingleBowWowChomp */;
    /* data: dw ContinueJingleChargingSword */;
    /* data: dw ContinueJinglePowder */;
    /* data: dw ContinueJingleEnemyMorphIn */;
    /* data: dw ContinueJingleSwordPoking */;
    /* data: dw ContinueJingleJumpDown */;
    /* data: dw ContinueJingleBump */;
    /* data: dw ContinueJingleMoveSelection */;
    /* data: dw ContinueJingleHugeBump */;
    /* data: dw ContinueJingleRevolvingDoor */;
    /* data: dw ContinueJingleFeatherJump */;
    /* data: dw ContinueJingleWaterDive */;
    /* data: dw ContinueJingleWaterSwim */;
    /* data: dw func_01F_53BB */;
    /* data: dw ContinueJingleOpenInventory */;
    /* data: dw ContinueJingleCloseInventory */;
    /* data: dw ContinueJingleValidate */;
    /* data: dw ContinueJingleGotHeart */;
    /* data: dw ContinueJingleDialogBreak */;
    /* data: dw ContinueJingleShieldTing */;
    /* data: dw ContinueJingleGotPowerUp */;
    /* data: dw ContinueJingleItemFalling */;
    /* data: dw ContinueJingleNewHeart */;
    /* data: dw ContinueJingleFairyHealing */;
    /* data: dw ContinueJingleClearMidboss */;
    /* data: dw ContinueJingleMidbossWarp */;
    /* data: dw ContinueJingleWrongAnswer */;
    /* data: dw ContinueJingleForestLost */;
    /* data: dw ContinueJingleEnemyMorphOut */;
    /* data: dw ContinueJingleBigBump */;
    /* data: dw ContinueJingleSeagull */;
    /* data: dw ContinueJingleHoneycomb */;
    /* data: dw ContinueJingleDungeonOpened */;
    /* data: dw ContinueJingleJump */;
    /* data: dw ContinueJingleOverworldWarp */;
    /* data: dw ContinueJingleDisappear */;
    /* data: dw ContinueJingleWalrus */;
    /* data: dw ContinueJingleMasterStalfos */;
    /* data: dw ContinueJingleSlimeEelPull */;
    /* data: dw ContinueJingleDodongoEatBomb */;
    /* data: dw ContinueJingleInstrumentWarp */;
    /* data: dw ContinueJingleManboWarp */;
    /* data: dw ContinueJingleGhostPresence */;
    /* data: dw ContinueJingleEagleTowerOpen */;
    /* data: dw ContinueJinglePoof */;
    /* data: dw ContinueJingleEvilEagle */;
    /* data: dw ContinueJingleGrimCreeper */;
    /* data: dw ContinueJingleHotHeadSplash */;
    /* data: dw ContinueJingleBlainoPunch */;
    /* data: dw ContinueJingleShowInstruments */;
    /* data: dw ContinueJingleShadowNext */;
    /* data: dw ContinueJingleShadow2Defeat */;
    /* data: dw ContinueJingleShadow1Hurt */;
    /* data: dw ContinueJingleShadow3BG */;
    /* data: dw ContinueJingleShadow4Intro */;
    /* data: dw ContinueJingleUnknown3A */;
    /* data: dw ContinueJingleSwordBeam */;
    /* data: dw ContinueJingleEnemyShriek */;
    /* data: dw ContinueJingleShadow6BG */;
    /* data: dw ContinueJingleUrchinPush */;
    /* data: dw ContinueJingleFlyingTile */;
    /* data: dw ContinueJingleFacadeHole */;
    /* data: dw ContinueJingleUnknown41 */;
}

void PlayActiveJingle(void) {
    gb.regs.hl = 0xD360;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PlayActiveJingle_jr_01F_421C;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto PlayActiveJingle_jr_01F_4216;
    gb.regs.a = gb_read(0xD3C6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_53E6(); return; };
  PlayActiveJingle_jr_01F_4216:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x4100;
    goto PlayActiveJingle_jr_01F_4223;
  PlayActiveJingle_jr_01F_421C:;
    gb.regs.hl++;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0x4182;
  PlayActiveJingle_jr_01F_4223:;
    GetHandlerAddressInTable();
    gb.regs.de = 0xD390;
    gb.regs.bc = 0xD394;
    /* jp hl - dynamic dispatch */;
}

void BeginJingleTreasureFound(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD370, gb.regs.a);
    gb_write(0xD371, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD3C8, gb.regs.a);
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.hl = wMusicChannel3_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0x42EB;
    WriteChannel2AndDE();
    func_01F_636A();
    gb.regs.hl = 0x42FF;
    WriteChannel3AndDE();
    gb.regs.hl = 0x42D3;
    label_01F_5395(); return;
}

void ContinueJingleTreasureFound(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto ContinueJingleTreasureFound_jr_01F_4273;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto ContinueJingleTreasureFound_jr_01F_4285;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ContinueJingleTreasureFound_jr_01F_4297;
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto ContinueJingleTreasureFound_jr_01F_42A9;
    goto ContinueJingleTreasureFound_jr_01F_42BB;
  ContinueJingleTreasureFound_jr_01F_4273:;
    gb.regs.hl = 0x42D9;
    WriteChannel1AndDE();
    gb.regs.hl = 0x42F0;
    WriteChannel2AndDE();
    gb.regs.hl = 0x4305;
    WriteChannel3AndDE(); return;
  ContinueJingleTreasureFound_jr_01F_4285:;
    gb.regs.hl = 0x42DF;
    WriteChannel1AndDE();
    gb.regs.hl = 0x42F5;
    WriteChannel2AndDE();
    gb.regs.hl = 0x430B;
    WriteChannel3AndDE(); return;
  ContinueJingleTreasureFound_jr_01F_4297:;
    gb.regs.hl = 0x42E5;
    WriteChannel1AndDE();
    gb.regs.hl = 0x42FA;
    WriteChannel2AndDE();
    gb.regs.hl = 0x4311;
    WriteChannel3AndDE(); return;
  ContinueJingleTreasureFound_jr_01F_42A9:;
    gb.regs.hl = 0x4317;
    WriteChannel1AndDE();
    gb.regs.hl = 0x431D;
    WriteChannel2AndDE();
    gb.regs.hl = 0x4317;
    WriteChannel3AndDE(); return;
  ContinueJingleTreasureFound_jr_01F_42BB:;
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = wMusicChannel3_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    gb_write(0xD3C8, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD3E7, gb.regs.a);
    func_01F_53BB(); return;
}

void Data_01F_42D3(void) {
    /* data: db $00, $80, $80, $89, $86, $0A */;
}

void Data_01F_42D9(void) {
    /* data: db $00, $80, $80, $9E, $86, $0A */;
}

void Data_01F_42DF(void) {
    /* data: db $00, $80, $80, $B2, $86, $0A */;
}

void Data_01F_42E5(void) {
    /* data: db $00, $80, $80, $C4, $86, $30 */;
}

void Data_01F_42EB(void) {
    /* data: db $00, $C0, $06, $87, $0A */;
}

void Data_01F_42F0(void) {
    /* data: db $00, $C0, $14, $87, $0A */;
}

void Data_01F_42F5(void) {
    /* data: db $00, $C0, $21, $87, $0A */;
}

void Data_01F_42FA(void) {
    /* data: db $00, $C0, $2D, $87, $30 */;
}

void Data_01F_42FF(void) {
    /* data: db $80, $00, $20, $6B, $87, $0A */;
}

void Data_01F_4305(void) {
    /* data: db $80, $00, $20, $73, $87, $0A */;
}

void Data_01F_430B(void) {
    /* data: db $80, $00, $20, $7B, $87, $0A */;
}

void Data_01F_4311(void) {
    /* data: db $80, $00, $20, $83, $87, $30 */;
}

void Data_01F_4317(void) {
    /* data: db $00, $00, $00, $00, $C0, $20 */;
}

void Data_01F_431D(void) {
    /* data: db $3F, $00, $00, $C1, $20 */;
}

void BeginJinglePuzzleSolved(void) {
    gb.regs.hl = 0x4353;
    label_01F_5395(); return;
}

void ContinueJinglePuzzleSolved(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.hl = 0x4345;
    GetHandlerAddressInTable();
    gb.regs.a = 0x80;
    gb_write(0xFF11, gb.regs.a);
    gb.regs.a = 0xF1;
    gb_write(0xFF12, gb.regs.a);
    WriteChannel1FrequencyAndDE(); return;
}

void Data_01F_4345(void) {
    /* data: dw Data_01F_4359 */;
    /* data: dw Data_01F_435C */;
    /* data: dw Data_01F_435F */;
    /* data: dw Data_01F_4362 */;
    /* data: dw Data_01F_4365 */;
    /* data: dw Data_01F_4368 */;
    /* data: dw Data_01F_436B */;
}

void Data_01F_4353(void) {
    /* data: db $00, $80, $F1, $A7, $C7, $08 */;
}

void Data_01F_4359(void) {
    /* data: db $A2, $C7, $08 */;
}

void Data_01F_435C(void) {
    /* data: db $90, $C7, $08 */;
}

void Data_01F_435F(void) {
    /* data: db $7B, $C7, $08 */;
}

void Data_01F_4362(void) {
    /* data: db $59, $C7, $08 */;
}

void Data_01F_4365(void) {
    /* data: db $97, $C7, $08 */;
}

void Data_01F_4368(void) {
    /* data: db $AC, $C7, $08 */;
}

void Data_01F_436B(void) {
    /* data: db $BE, $C7, $20 */;
}

void BeginJingleBowWowChomp(void) {
    gb.regs.hl = 0x439D;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleBowWowChomp(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.hl = 0x4385;
    func_01F_7AE1(); return;
}

void Data_01F_4385(void) {
    /* data: db $FF, $C0, $FF, $80, $FF, $00, $FE, $00, $01, $00, $FF, $00, $01, $00, $FF, $00 */;
    /* data: db $00, $C0, $00, $C0, $00, $C0, $00, $C0 */;
}

void Data_01F_439D(void) {
    /* data: db $00, $00, $C0, $80, $86, $01 */;
}

void BeginJingleChargingSword(void) {
    gb.regs.a = 0x0E;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x43DC;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleChargingSword(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD379);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 2;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ContinueJingleChargingSword_jr_01F_43CD;
  ContinueJingleChargingSword_jr_01F_43C7:;
    gb.regs.hl = 0x43D8;
    func_01F_7AE1(); return;
  ContinueJingleChargingSword_jr_01F_43CD:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleChargingSword_jr_01F_43C7;
}

void Data_01F_43D8(void) {
    /* data: db $00, $20, $FF, $F0 */;
}

void Data_01F_43DC(void) {
    /* data: db $00, $80, $87, $C0, $86, $02 */;
}

void BeginJinglePowder(void) {
    gb.regs.a = 4;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4417;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJinglePowder(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 4;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto ContinueJinglePowder_jr_01F_4404;
  ContinueJinglePowder_jr_01F_43FE:;
    gb.regs.hl = 0x440F;
    func_01F_7AE1(); return;
  ContinueJinglePowder_jr_01F_4404:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJinglePowder_jr_01F_43FE;
}

void Data_01F_440F(void) {
    /* data: db $00, $06, $00, $04, $00, $02, $FF, $F4 */;
}

void Data_01F_4417(void) {
    /* data: db $00, $00, $C5, $D8, $87, $04 */;
}

void BeginJingleEnemyMorphIn(void) {
    gb.regs.a = 0x0A;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4453;
    func_01F_7AB7();
    label_01F_5395(); return;
}

void ContinueJingleEnemyMorphIn(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto ContinueJingleEnemyMorphIn_jr_01F_4438;
  ContinueJingleEnemyMorphIn_jr_01F_4432:;
    gb.regs.hl = 0x4443;
    func_01F_7AE1(); return;
  ContinueJingleEnemyMorphIn_jr_01F_4438:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleEnemyMorphIn_jr_01F_4432;
}

void Data_01F_4443(void) {
    /* data: db $00, $40, $00, $80, $00, $80, $00, $40, $FF, $D0, $FF, $A0, $FF, $A0, $FF, $D0 */;
}

void Data_01F_4453(void) {
    /* data: db $00, $80, $1B, $00, $82, $01 */;
}

void BeginJingleSwordPoking(void) {
    gb.regs.hl = 0x4471;
    label_01F_539A(); return;
}

void ContinueJingleSwordPoking(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.hl = 0x4477;
    WriteChannel1AndDE(); return;
}

void Data_01F_4471(void) {
    /* data: db $00, $3D, $F0, $D8, $C7, $03 */;
}

void Data_01F_4477(void) {
    /* data: db $00, $00, $81, $E0, $87, $08 */;
}

void BeginJingleJumpDown(void) {
    gb.regs.hl = 0x4495;
    label_01F_539A(); return;
}

void ContinueJingleJumpDown(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.hl = 0x449B;
    WriteChannel1AndDE(); return;
}

void Data_01F_4495(void) {
    /* data: db $3F, $9E, $29, $80, $C7, $08 */;
}

void Data_01F_449B(void) {
    /* data: db $1F, $9F, $81, $20, $87, $10 */;
}

void BeginJingleBump(void) {
    gb.regs.hl = 0x44C8;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleBump(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.hl = 0x44B8;
    func_01F_7AE1(); return;
}

void Data_01F_44B8(void) {
    /* data: db $01, $00, $00, $C0, $00, $80, $00, $40, $FF, $C0, $FF, $80, $FF, $40, $FF, $00 */;
}

void Data_01F_44C8(void) {
    /* data: db $00, $9F, $A0, $00, $C2, $01 */;
}

void BeginJingleMoveSelection(void) {
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 0x13);
    if (GET_FLAG_Z()) { label_01F_53E6(); return; };
    gb.regs.a = gb_read(0xFF24);
    alu_cp8(gb.regs.a, 0x77);
    if (!GET_FLAG_Z()) goto BeginJingleMoveSelection_jr_01F_44E2;
    gb.regs.hl = 0x4509;
  BeginJingleMoveSelection_jr_01F_44DF:;
    label_01F_539A(); return;
  BeginJingleMoveSelection_jr_01F_44E2:;
    gb.regs.hl = 0x450F;
    goto BeginJingleMoveSelection_jr_01F_44DF;
}

void ContinueJingleMoveSelection(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.a = gb_read(0xFF24);
    alu_cp8(gb.regs.a, 0x77);
    if (!GET_FLAG_Z()) goto ContinueJingleMoveSelection_jr_01F_4505;
    gb.regs.a = 0x10;
  ContinueJingleMoveSelection_jr_01F_44FB:;
    gb_write(0xFF12, gb.regs.a);
    gb.regs.a = 0xC7;
    gb_write(0xFF14, gb.regs.a);
    gb.regs.a = 8;
    gb_write(gb.regs.de, gb.regs.a);
    return;
  ContinueJingleMoveSelection_jr_01F_4505:;
    gb.regs.a = 0x20;
    goto ContinueJingleMoveSelection_jr_01F_44FB;
}

void Data_01F_4509(void) {
    /* data: db $00, $9F, $80, $A0, $C7, $02 */;
}

void Data_01F_450F(void) {
    /* data: db $00, $9F, $F0, $A0, $C7, $02 */;
}

void BeginJingleHugeBump(void) {
    gb.regs.a = 5;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x454E;
    func_01F_7AB7();
    label_01F_5395(); return;
}

void ContinueJingleHugeBump(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 2;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ContinueJingleHugeBump_jr_01F_4537;
  ContinueJingleHugeBump_jr_01F_4531:;
    gb.regs.hl = 0x4542;
    func_01F_7AE1(); return;
  ContinueJingleHugeBump_jr_01F_4537:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleHugeBump_jr_01F_4531;
}

void Data_01F_4542(void) {
    /* data: db $FF, $C0, $FF, $80, $FF, $40, $00, $C0, $00, $80, $00, $40 */;
}

void Data_01F_454E(void) {
    /* data: db $00, $80, $F4, $80, $83, $01 */;
}

void BeginJingleRevolvingDoor(void) {
    gb.regs.a = 0x16;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x458F;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleRevolvingDoor(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto ContinueJingleRevolvingDoor_jr_01F_456F;
  ContinueJingleRevolvingDoor_jr_01F_4569:;
    gb.regs.hl = 0x4589;
    func_01F_7AE1(); return;
  ContinueJingleRevolvingDoor_jr_01F_456F:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto ContinueJingleRevolvingDoor_jr_01F_457E;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleRevolvingDoor_jr_01F_4569;
  ContinueJingleRevolvingDoor_jr_01F_457E:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x4595;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_4589(void) {
    /* data: db $00, $28, $00, $00, $FF, $F0 */;
}

void Data_01F_458F(void) {
    /* data: db $00, $83, $47, $C0, $86, $02 */;
}

void Data_01F_4595(void) {
    /* data: db $00, $83, $47, $00, $87, $02 */;
}

void BeginJingleFeatherJump(void) {
    gb.regs.hl = 0x45A8;
    label_01F_539A(); return;
}

void ContinueJingleFeatherJump(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    func_01F_53BB(); return;
}

void Data_01F_45A8(void) {
    /* data: db $27, $80, $C2, $48, $86, $18 */;
}

void BeginJingleWaterDive(void) {
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto BeginJingleWaterDive_jr_01F_45B9;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_53E6(); return; };
  BeginJingleWaterDive_jr_01F_45B9:;
    gb.regs.hl = 0x45C6;
    label_01F_539A(); return;
}

void ContinueJingleWaterDive(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    func_01F_53BB(); return;
}

void Data_01F_45C6(void) {
    /* data: db $16, $AB, $20, $80, $C6, $05 */;
}

void BeginJingleWaterSwim(void) {
    gb.regs.hl = 0x45E4;
    label_01F_539A(); return;
}

void ContinueJingleWaterSwim(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.hl = 0x45EA;
    WriteChannel1AndDE(); return;
}

void Data_01F_45E4(void) {
    /* data: db $17, $80, $0B, $00, $85, $10 */;
}

void Data_01F_45EA(void) {
    /* data: db $17, $80, $0E, $00, $C5, $10 */;
}

void BeginJingleUnknown10(void) {
    func_01F_7B5C(); return;
}

void BeginJingleOpenInventory(void) {
    gb.regs.a = 0x17;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0x4632;
    func_01F_7AD0();
    WriteChannel2AndDE();
    gb.regs.hl = 0x4637;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleOpenInventory(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto ContinueJingleOpenInventory_jr_01F_4625;
  ContinueJingleOpenInventory_jr_01F_4616:;
    gb.regs.hl = 0x4630;
    func_01F_7B11();
    gb.regs.bc = 0xD394;
    gb.regs.hl = 0x4630;
    func_01F_7AE1(); return;
  ContinueJingleOpenInventory_jr_01F_4625:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_463D(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleOpenInventory_jr_01F_4616;
}

void Data_01F_4630(void) {
    /* data: db $00, $21 */;
}

void Data_01F_4632(void) {
    /* data: db $45, $0C, $00, $84, $12 */;
}

void Data_01F_4637(void) {
    /* data: db $00, $85, $0B, $00, $81, $12 */;
}

void label_01F_463D(void) {
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0x431D;
    WriteChannel2AndDE();
    label_01F_53B5(); return;
}

void BeginJingleCloseInventory(void) {
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 0x13);
    if (GET_FLAG_Z()) { label_01F_53E6(); return; };
    gb.regs.a = 8;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0x4692;
    func_01F_7AD0();
    WriteChannel2AndDE();
    gb.regs.hl = 0x4697;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleCloseInventory(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto ContinueJingleCloseInventory_jr_01F_4685;
  ContinueJingleCloseInventory_jr_01F_4676:;
    gb.regs.hl = 0x4690;
    func_01F_7B11();
    gb.regs.bc = 0xD394;
    gb.regs.hl = 0x4690;
    func_01F_7AE1(); return;
  ContinueJingleCloseInventory_jr_01F_4685:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_463D(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleCloseInventory_jr_01F_4676;
}

void Data_01F_4690(void) {
    /* data: db $FF, $D0 */;
}

void Data_01F_4692(void) {
    /* data: db $40, $0A, $B0, $87, $12 */;
}

void Data_01F_4697(void) {
    /* data: db $00, $80, $09, $C0, $86, $12 */;
}

void BeginJingleValidate(void) {
    gb.regs.a = 5;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.a = gb_read(0xFF24);
    alu_cp8(gb.regs.a, 0x77);
    if (!GET_FLAG_Z()) goto BeginJingleValidate_jr_01F_46B1;
    gb.regs.hl = 0x46DB;
  BeginJingleValidate_jr_01F_46AB:;
    func_01F_7AB7();
    label_01F_539A(); return;
  BeginJingleValidate_jr_01F_46B1:;
    gb.regs.hl = 0x46E1;
    goto BeginJingleValidate_jr_01F_46AB;
}

void ContinueJingleValidate(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 3;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto ContinueJingleValidate_jr_01F_46CA;
  ContinueJingleValidate_jr_01F_46C4:;
    gb.regs.hl = 0x46D5;
    func_01F_7AE1(); return;
  ContinueJingleValidate_jr_01F_46CA:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleValidate_jr_01F_46C4;
}

void Data_01F_46D5(void) {
    /* data: db $00, $22, $00, $19, $FF, $C5 */;
}

void Data_01F_46DB(void) {
    /* data: db $00, $80, $A4, $7B, $87, $03 */;
}

void Data_01F_46E1(void) {
    /* data: db $00, $80, $F3, $7B, $87, $03 */;
}

void BeginJingleGotHeart(void) {
    gb.regs.a = gb_read(0xD361);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_53E6(); return; };
    gb.regs.hl = 0x46FB;
    label_01F_539A(); return;
}

void ContinueJingleGotHeart(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    func_01F_53BB(); return;
}

void Data_01F_46FB(void) {
    /* data: db $35, $B0, $60, $20, $C7, $04 */;
}

void BeginJingleDialogBreak(void) {
    gb.regs.hl = 0x4720;
    label_01F_539A(); return;
}

void ContinueJingleDialogBreak(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.hl = 0x471C;
    GetHandlerAddressInTable();
    WriteChannel1AndDE(); return;
}

void Data_01F_471C(void) {
    /* data: dw Data_01F_4726 */;
    /* data: dw Data_01F_472C */;
}

void Data_01F_4720(void) {
    /* data: db $00, $B0, $19, $4F, $C7, $06 */;
}

void Data_01F_4726(void) {
    /* data: db $00, $B0, $19, $7B, $C7, $06 */;
}

void Data_01F_472C(void) {
    /* data: db $00, $B0, $29, $9D, $C7, $03 */;
}

void BeginJingleShieldTing(void) {
    gb.regs.hl = 0x473F;
    label_01F_539A(); return;
}

void ContinueJingleShieldTing(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    func_01F_53BB(); return;
}

void Data_01F_473F(void) {
    /* data: db $00, $00, $81, $BB, $C7, $20 */;
}

void BeginJingleGotPowerUp(void) {
    gb.regs.a = 0x2A;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4784;
    func_01F_7AB7();
    label_01F_5395(); return;
}

void ContinueJingleGotPowerUp(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ContinueJingleGotPowerUp_jr_01F_4760;
  ContinueJingleGotPowerUp_jr_01F_475A:;
    gb.regs.hl = 0x477E;
    func_01F_7AE1(); return;
  ContinueJingleGotPowerUp_jr_01F_4760:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) goto ContinueJingleGotPowerUp_jr_01F_4773;
    alu_cp8(gb.regs.a, 0x1C);
    if (GET_FLAG_Z()) goto ContinueJingleGotPowerUp_jr_01F_4773;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleGotPowerUp_jr_01F_475A;
  ContinueJingleGotPowerUp_jr_01F_4773:;
    gb.regs.hl = 0x477E;
    func_01F_7AE1();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD394, gb.regs.a);
    return;
}

void Data_01F_477E(void) {
    /* data: db $00, $20, $FF, $E8, $FF, $90 */;
}

void Data_01F_4784(void) {
    /* data: db $00, $80, $D7, $68, $87, $01 */;
}

void BeginJingleItemFalling(void) {
    gb.regs.hl = 0x47A2;
    label_01F_539A(); return;
}

void ContinueJingleItemFalling(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.hl = 0x47A8;
    WriteChannel1AndDE(); return;
}

void Data_01F_47A2(void) {
    /* data: db $2F, $80, $60, $E0, $86, $14 */;
}

void Data_01F_47A8(void) {
    /* data: db $2F, $80, $10, $E0, $86, $14 */;
}

void BeginJingleNewHeart(void) {
    gb.regs.hl = 0x47D1;
    label_01F_5395(); return;
}

void ContinueJingleNewHeart(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.hl = 0x47C9;
    GetHandlerAddressInTable();
    WriteChannel1AndDE(); return;
}

void Data_01F_47C9(void) {
    /* data: dw Data_01F_47D7 */;
    /* data: dw Data_01F_47DD */;
    /* data: dw Data_01F_47E3 */;
    /* data: dw Data_01F_47E9 */;
}

void Data_01F_47D1(void) {
    /* data: db $00, $80, $C1, $A7, $87, $06 */;
}

void Data_01F_47D7(void) {
    /* data: db $00, $80, $C1, $B1, $87, $06 */;
}

void Data_01F_47DD(void) {
    /* data: db $00, $80, $C1, $BA, $87, $06 */;
}

void Data_01F_47E3(void) {
    /* data: db $00, $80, $C1, $BE, $87, $06 */;
}

void Data_01F_47E9(void) {
    /* data: db $00, $80, $A3, $C5, $87, $20 */;
}

void BeginJingleFairyHealing(void) {
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 0x1A);
    if (GET_FLAG_Z()) { label_01F_53E6(); return; };
    gb.regs.hl = 0x480F;
    label_01F_539A(); return;
}

void ContinueJingleFairyHealing(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.hl = 0x4815;
    WriteChannel1FrequencyAndDE(); return;
}

void Data_01F_480F(void) {
    /* data: db $00, $80, $34, $90, $87, $01 */;
}

void Data_01F_4815(void) {
    /* data: db $C8, $07, $04 */;
}

void BeginJingleClearMidboss(void) {
    gb.regs.a = 3;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4863;
    func_01F_7AB7();
    label_01F_5395(); return;
}

void ContinueJingleClearMidboss(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 4;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto ContinueJingleClearMidboss_jr_01F_483A;
    gb.regs.hl = 0x4855;
    func_01F_7AE1(); return;
  ContinueJingleClearMidboss_jr_01F_483A:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto ContinueJingleClearMidboss_jr_01F_4850;
    gb.regs.hl = 0x486F;
  ContinueJingleClearMidboss_jr_01F_4847:;
    func_01F_7AB7();
    gb.regs.a = 4;
    gb_write(gb.regs.bc, gb.regs.a);
    WriteChannel1AndDE(); return;
  ContinueJingleClearMidboss_jr_01F_4850:;
    gb.regs.hl = 0x4869;
    goto ContinueJingleClearMidboss_jr_01F_4847;
}

void Data_01F_4855(void) {
    /* data: db $00, $2A, $00, $2E, $00, $25, $00, $07, $00, $15, $00, $17, $00, $13 */;
}

void Data_01F_4863(void) {
    /* data: db $00, $00, $4C, $F7, $86, $04 */;
}

void Data_01F_4869(void) {
    /* data: db $00, $40, $40, $7B, $87, $04 */;
}

void Data_01F_486F(void) {
    /* data: db $00, $80, $10, $7B, $87, $04 */;
}

void BeginJingleMidbossWarp(void) {
    gb.regs.a = 0x2C;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x48C3;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleMidbossWarp(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ContinueJingleMidbossWarp_jr_01F_4894;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto ContinueJingleMidbossWarp_jr_01F_48B0;
  ContinueJingleMidbossWarp_jr_01F_488E:;
    gb.regs.hl = 0x48BB;
    func_01F_7AE1(); return;
  ContinueJingleMidbossWarp_jr_01F_4894:;
    func_01F_7A9A();
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_Z()) goto ContinueJingleMidbossWarp_jr_01F_48A4;
    alu_cp8(gb.regs.a, 0x17);
    if (GET_FLAG_Z()) goto ContinueJingleMidbossWarp_jr_01F_48B0;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleMidbossWarp_jr_01F_488E;
  ContinueJingleMidbossWarp_jr_01F_48A4:;
    gb.regs.a = 2;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x48C9;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
  ContinueJingleMidbossWarp_jr_01F_48B0:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.a = 3;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleMidbossWarp_jr_01F_488E;
}

void Data_01F_48BB(void) {
    /* data: db $00, $AE, $FF, $60, $00, $AA, $FF, $60 */;
}

void Data_01F_48C3(void) {
    /* data: db $00, $40, $0C, $00, $85, $01 */;
}

void Data_01F_48C9(void) {
    /* data: db $00, $40, $A4, $40, $86, $01 */;
}

void BeginJingleWrongAnswer(void) {
    gb.regs.a = 8;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4901;
    label_01F_539A(); return;
}

void ContinueJingleWrongAnswer(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x79;
    gb_write(0xFF11, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ContinueJingleWrongAnswer_jr_01F_48F2;
  ContinueJingleWrongAnswer_jr_01F_48E9:;
    gb.regs.hl = 0x48FD;
    GetHandlerAddressInTable();
    WriteChannel1FrequencyAndDE(); return;
  ContinueJingleWrongAnswer_jr_01F_48F2:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.a = 2;
  ContinueJingleWrongAnswer_jr_01F_48FA:;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleWrongAnswer_jr_01F_48E9;
}

void Data_01F_48FD(void) {
    /* data: dw Data_01F_4907 */;
    /* data: dw Data_01F_4904 */;
}

void Data_01F_4901(void) {
    /* data: db $00, $79, $E0 */;
}

void Data_01F_4904(void) {
    /* data: db $C0, $C4, $02 */;
}

void Data_01F_4907(void) {
    /* data: db $C0, $C4, $0C */;
}

void BeginJingleForestLost(void) {
    gb.regs.hl = 0x492D;
    label_01F_5395(); return;
}

void ContinueJingleForestLost(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.hl = 0x4925;
    GetHandlerAddressInTable();
    WriteChannel1FrequencyAndDE(); return;
}

void Data_01F_4925(void) {
    /* data: dw Data_01F_4933 */;
    /* data: dw Data_01F_4933 */;
    /* data: dw Data_01F_4936 */;
    /* data: dw Data_01F_4936 */;
}

void Data_01F_492D(void) {
    /* data: db $1F, $A6, $E1 */;
}

void Data_01F_4930(void) {
    /* data: db $00, $C7, $10 */;
}

void Data_01F_4933(void) {
    /* data: db $A0, $C6, $09 */;
}

void Data_01F_4936(void) {
    /* data: db $00, $C6, $18 */;
}

void BeginJingleEnemyMorphOut(void) {
    gb.regs.a = 0x0A;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x496F;
    func_01F_7AB7();
    label_01F_5395(); return;
}

void ContinueJingleEnemyMorphOut(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto ContinueJingleEnemyMorphOut_jr_01F_4954;
  ContinueJingleEnemyMorphOut_jr_01F_494E:;
    gb.regs.hl = 0x495F;
    func_01F_7AE1(); return;
  ContinueJingleEnemyMorphOut_jr_01F_4954:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleEnemyMorphOut_jr_01F_494E;
}

void Data_01F_495F(void) {
    /* data: db $00, $30, $00, $60, $00, $60, $00, $30, $FF, $C0, $FF, $80, $FF, $80, $FF, $C0 */;
}

void Data_01F_496F(void) {
    /* data: db $00, $80, $0B, $20, $86, $01 */;
}

void BeginJingleBigBump(void) {
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto BeginJingleBigBump_jr_01F_4980;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_53E6(); return; };
  BeginJingleBigBump_jr_01F_4980:;
    gb.regs.a = 8;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x49AA;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleBigBump(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ContinueJingleBigBump_jr_01F_499B;
  ContinueJingleBigBump_jr_01F_4995:;
    gb.regs.hl = 0x49A6;
    func_01F_7AE1(); return;
  ContinueJingleBigBump_jr_01F_499B:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleBigBump_jr_01F_4995;
}

void Data_01F_49A6(void) {
    /* data: db $00, $C0, $FF, $A0 */;
}

void Data_01F_49AA(void) {
    /* data: db $00, $80, $F1, $80, $83, $01 */;
}

void BeginJingleSeagull(void) {
    gb.regs.a = 0x1C;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x49F6;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleSeagull(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto ContinueJingleSeagull_jr_01F_49CB;
  ContinueJingleSeagull_jr_01F_49C5:;
    gb.regs.hl = 0x49F4;
    func_01F_7AE1(); return;
  ContinueJingleSeagull_jr_01F_49CB:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_Z()) goto ContinueJingleSeagull_jr_01F_49DE;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto ContinueJingleSeagull_jr_01F_49E9;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleSeagull_jr_01F_49C5;
  ContinueJingleSeagull_jr_01F_49DE:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x49FC;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
  ContinueJingleSeagull_jr_01F_49E9:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x4A02;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_49F4(void) {
    /* data: db $FF, $FF */;
}

void Data_01F_49F6(void) {
    /* data: db $00, $00, $19, $B0, $87, $01 */;
}

void Data_01F_49FC(void) {
    /* data: db $00, $00, $62, $A7, $87, $01 */;
}

void Data_01F_4A02(void) {
    /* data: db $00, $00, $10, $A7, $87, $01 */;
}

void BeginJingleHoneycomb(void) {
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 0x22);
    if (GET_FLAG_Z()) { label_01F_53E6(); return; };
    gb.regs.bc = 0xD3D7;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_C()) goto BeginJingleHoneycomb_jr_01F_4A20;
  BeginJingleHoneycomb_jr_01F_4A1A:;
    gb.regs.hl = 0x4A52;
    label_01F_539A(); return;
  BeginJingleHoneycomb_jr_01F_4A20:;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto BeginJingleHoneycomb_jr_01F_4A2A;
  BeginJingleHoneycomb_jr_01F_4A24:;
    gb.regs.hl = 0x4A58;
    label_01F_539A(); return;
  BeginJingleHoneycomb_jr_01F_4A2A:;
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto BeginJingleHoneycomb_jr_01F_4A34;
  BeginJingleHoneycomb_jr_01F_4A2E:;
    gb.regs.hl = 0x4A5E;
    label_01F_539A(); return;
  BeginJingleHoneycomb_jr_01F_4A34:;
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_C()) goto BeginJingleHoneycomb_jr_01F_4A3E;
    gb.regs.hl = 0x4A64;
    label_01F_539A(); return;
  BeginJingleHoneycomb_jr_01F_4A3E:;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_C()) goto BeginJingleHoneycomb_jr_01F_4A44;
    goto BeginJingleHoneycomb_jr_01F_4A2E;
  BeginJingleHoneycomb_jr_01F_4A44:;
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) goto BeginJingleHoneycomb_jr_01F_4A4A;
    goto BeginJingleHoneycomb_jr_01F_4A24;
  BeginJingleHoneycomb_jr_01F_4A4A:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto BeginJingleHoneycomb_jr_01F_4A1A;
}

void ContinueJingleHoneycomb(void) {
    func_01F_53BB(); return;
}

void Data_01F_4A52(void) {
    /* data: db $15, $38, $30, $40, $C6, $02 */;
}

void Data_01F_4A58(void) {
    /* data: db $15, $38, $40, $3C, $C6, $02 */;
}

void Data_01F_4A5E(void) {
    /* data: db $15, $38, $60, $38, $C6, $02 */;
}

void Data_01F_4A64(void) {
    /* data: db $15, $38, $90, $34, $C6, $02, $15, $38, $D0, $30, $C6, $02 */;
}

void BeginJingleDungeonOpened(void) {
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0x4AAD;
    label_01F_5395(); return;
}

void ContinueJingleDungeonOpened(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto ContinueJingleDungeonOpened_jr_01F_4A97;
    gb.regs.hl = 0x4A9F;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD394);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { WriteChannel2AndDE(); return; };
    WriteChannel1AndDE(); return;
  ContinueJingleDungeonOpened_jr_01F_4A97:;
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    label_01F_53B5(); return;
}

void Data_01F_4A9F(void) {
    /* data: dw Data_01F_4AB3 */;
    /* data: dw Data_01F_4AB8 */;
    /* data: dw Data_01F_4ABE */;
    /* data: dw Data_01F_4AC3 */;
    /* data: dw Data_01F_4AC9 */;
    /* data: dw Data_01F_4ACE */;
    /* data: dw Data_01F_4AD4 */;
}

void Data_01F_4AAD(void) {
    /* data: db $00, $80, $E2, $A7, $87, $09 */;
}

void Data_01F_4AB3(void) {
    /* data: db $80, $E2, $A2, $87, $08 */;
}

void Data_01F_4AB8(void) {
    /* data: db $00, $80, $E2, $90, $87, $08 */;
}

void Data_01F_4ABE(void) {
    /* data: db $80, $E2, $7B, $87, $08 */;
}

void Data_01F_4AC3(void) {
    /* data: db $00, $80, $B2, $59, $87, $09 */;
}

void Data_01F_4AC9(void) {
    /* data: db $80, $E2, $97, $87, $0A */;
}

void Data_01F_4ACE(void) {
    /* data: db $00, $80, $E2, $AC, $87, $0B */;
}

void Data_01F_4AD4(void) {
    /* data: db $80, $E2, $BE, $87, $10 */;
}

void BeginJingleJump(void) {
    gb.regs.hl = 0x4AE6;
    label_01F_539A(); return;
}

void ContinueJingleJump(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    func_01F_53BB(); return;
}

void Data_01F_4AE6(void) {
    /* data: db $27, $80, $83, $00, $86, $18 */;
}

void BeginJingleOverworldWarp(void) {
    gb.regs.a = 7;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4B2B;
    label_01F_5395(); return;
}

void ContinueJingleOverworldWarp(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto ContinueJingleOverworldWarp_jr_01F_4B0F;
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ContinueJingleOverworldWarp_jr_01F_4B1A;
  ContinueJingleOverworldWarp_jr_01F_4B06:;
    gb.regs.hl = 0x4B1F;
    GetHandlerAddressInTable();
    WriteChannel1FrequencyAndDE(); return;
  ContinueJingleOverworldWarp_jr_01F_4B0F:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 6;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleOverworldWarp_jr_01F_4B06;
  ContinueJingleOverworldWarp_jr_01F_4B1A:;
    gb.regs.a = 3;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleOverworldWarp_jr_01F_4B06;
}

void Data_01F_4B1F(void) {
    /* data: dw Data_01F_4B31 */;
    /* data: dw Data_01F_4B34 */;
    /* data: dw Data_01F_4B37 */;
    /* data: dw Data_01F_4B3A */;
    /* data: dw Data_01F_4B3D */;
    /* data: dw Data_01F_4B40 */;
}

void Data_01F_4B2B(void) {
    /* data: db $00, $80, $A5, $06, $87, $02 */;
}

void Data_01F_4B31(void) {
    /* data: db $21, $07, $02 */;
}

void Data_01F_4B34(void) {
    /* data: db $39, $07, $02 */;
}

void Data_01F_4B37(void) {
    /* data: db $4F, $07, $02 */;
}

void Data_01F_4B3A(void) {
    /* data: db $62, $07, $02 */;
}

void Data_01F_4B3D(void) {
    /* data: db $74, $07, $02 */;
}

void Data_01F_4B40(void) {
    /* data: db $06, $07, $02 */;
}

void BeginJingleDisappear(void) {
    gb.regs.a = 0x0E;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4B85;
    func_01F_7AB7();
    label_01F_5395(); return;
}

void ContinueJingleDisappear(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 3;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto ContinueJingleDisappear_jr_01F_4B65;
  ContinueJingleDisappear_jr_01F_4B5F:;
    gb.regs.hl = 0x4B7F;
    func_01F_7AE1(); return;
  ContinueJingleDisappear_jr_01F_4B65:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto ContinueJingleDisappear_jr_01F_4B74;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleDisappear_jr_01F_4B5F;
  ContinueJingleDisappear_jr_01F_4B74:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x4B8B;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_4B7F(void) {
    /* data: db $FF, $E0, $00, $20, $FF, $FC */;
}

void Data_01F_4B85(void) {
    /* data: db $00, $00, $0C, $F0, $87, $03 */;
}

void Data_01F_4B8B(void) {
    /* data: db $00, $00, $A7, $DC, $87, $03 */;
}

void BeginJingleWalrus(void) {
    gb.regs.hl = 0x4BAB;
    label_01F_539A(); return;
}

void ContinueJingleWalrus(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 0x1E;
    gb_write(0xFF10, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void Data_01F_4BAB(void) {
    /* data: db $14, $40, $C0, $00, $81, $0C */;
}

void BeginJingleMasterStalfos(void) {
    gb.regs.hl = 0x4BDE;
    label_01F_539A(); return;
}

void ContinueJingleMasterStalfos(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.hl = 0x4BD0;
    GetHandlerAddressInTable();
    gb.regs.a = 0xBD;
    gb_write(0xFF11, gb.regs.a);
    WriteChannel1FrequencyAndDE(); return;
}

void Data_01F_4BD0(void) {
    /* data: dw Data_01F_4BE4 */;
    /* data: dw Data_01F_4BE7 */;
    /* data: dw Data_01F_4BEA */;
    /* data: dw Data_01F_4BED */;
    /* data: dw Data_01F_4BF0 */;
    /* data: dw Data_01F_4BF3 */;
    /* data: dw Data_01F_4BF6 */;
}

void Data_01F_4BDE(void) {
    /* data: db $00, $BD, $F0, $E0, $C7, $0C */;
}

void Data_01F_4BE4(void) {
    /* data: db $E0, $C7, $03 */;
}

void Data_01F_4BE7(void) {
    /* data: db $C0, $C7, $03 */;
}

void Data_01F_4BEA(void) {
    /* data: db $A0, $C7, $04 */;
}

void Data_01F_4BED(void) {
    /* data: db $80, $C7, $04 */;
}

void Data_01F_4BF0(void) {
    /* data: db $60, $C7, $05 */;
}

void Data_01F_4BF3(void) {
    /* data: db $40, $C7, $06 */;
}

void Data_01F_4BF6(void) {
    /* data: db $20, $C7, $03 */;
}

void BeginJingleSlimeEelPull(void) {
    gb.regs.hl = 0x4C13;
    label_01F_539A(); return;
}

void ContinueJingleSlimeEelPull(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.a = 0x1E;
    gb_write(0xFF10, gb.regs.a);
    gb.regs.a = 6;
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void Data_01F_4C13(void) {
    /* data: db $17, $96, $49, $60, $C6, $04 */;
}

void BeginJingleDodongoEatBomb(void) {
    gb.regs.hl = 0x4C26;
    label_01F_539A(); return;
}

void ContinueJingleDodongoEatBomb(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    label_01F_53B5(); return;
}

void Data_01F_4C26(void) {
    /* data: db $16, $00, $F0, $00, $C2, $10 */;
}

void BeginJingleInstrumentWarp(void) {
    gb.regs.a = 0x2C;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4C75;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleInstrumentWarp(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto ContinueJingleInstrumentWarp_jr_01F_4C47;
  ContinueJingleInstrumentWarp_jr_01F_4C41:;
    gb.regs.hl = 0x4C61;
    func_01F_7AE1(); return;
  ContinueJingleInstrumentWarp_jr_01F_4C47:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto ContinueJingleInstrumentWarp_jr_01F_4C56;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleInstrumentWarp_jr_01F_4C41;
  ContinueJingleInstrumentWarp_jr_01F_4C56:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x4C7B;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_4C61(void) {
    /* data: db $00, $08, $FF, $F0, $00, $08, $FF, $FC, $00, $06, $FF, $F8, $00, $06, $FF, $FA */;
    /* data: db $00, $08, $FF, $FF */;
}

void Data_01F_4C75(void) {
    /* data: db $00, $00, $0F, $D0, $87, $02 */;
}

void Data_01F_4C7B(void) {
    /* data: db $00, $00, $F7, $F0, $87, $04 */;
}

void BeginJingleManboWarp(void) {
    gb.regs.a = 0x22;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4CCF;
    func_01F_7AB7();
    label_01F_5395(); return;
}

void ContinueJingleManboWarp(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ContinueJingleManboWarp_jr_01F_4C9C;
  ContinueJingleManboWarp_jr_01F_4C96:;
    gb.regs.hl = 0x4CC3;
    func_01F_7AE1(); return;
  ContinueJingleManboWarp_jr_01F_4C9C:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    alu_cp8(gb.regs.a, 0x1E);
    if (GET_FLAG_Z()) goto ContinueJingleManboWarp_jr_01F_4CB2;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto ContinueJingleManboWarp_jr_01F_4CBE;
    gb.regs.a = 1;
    gb.regs.bc = 0xD394;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleManboWarp_jr_01F_4C96;
  ContinueJingleManboWarp_jr_01F_4CB2:;
    gb.regs.hl = 0x4CD5;
  ContinueJingleManboWarp_jr_01F_4CB5:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
  ContinueJingleManboWarp_jr_01F_4CBE:;
    gb.regs.hl = 0x4CDB;
    goto ContinueJingleManboWarp_jr_01F_4CB5;
}

void Data_01F_4CC3(void) {
    /* data: db $00, $02, $00, $01, $FF, $F0, $FF, $E0, $FF, $C0, $00, $71 */;
}

void Data_01F_4CCF(void) {
    /* data: db $00, $00, $0F, $00, $87, $01 */;
}

void Data_01F_4CD5(void) {
    /* data: db $00, $00, $40, $10, $87, $01 */;
}

void Data_01F_4CDB(void) {
    /* data: db $00, $00, $47, $70, $87, $01 */;
}

void BeginJingleGhostPresence(void) {
    gb.regs.a = 3;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4D20;
    func_01F_7AB7();
    label_01F_5395(); return;
}

void ContinueJingleGhostPresence(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 8;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto ContinueJingleGhostPresence_jr_01F_4D03;
  ContinueJingleGhostPresence_jr_01F_4CFD:;
    gb.regs.hl = 0x4D18;
    func_01F_7AE1(); return;
  ContinueJingleGhostPresence_jr_01F_4D03:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto ContinueJingleGhostPresence_jr_01F_4D12;
  ContinueJingleGhostPresence_jr_01F_4D0D:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleGhostPresence_jr_01F_4CFD;
  ContinueJingleGhostPresence_jr_01F_4D12:;
    gb.regs.a = 0x65;
    gb_write(0xFF12, gb.regs.a);
    goto ContinueJingleGhostPresence_jr_01F_4D0D;
}

void Data_01F_4D18(void) {
    /* data: db $00, $04, $FF, $DD, $00, $06, $00, $19 */;
}

void Data_01F_4D20(void) {
    /* data: db $00, $80, $1F, $B6, $87, $08 */;
}

void BeginJingleEagleTowerOpen(void) {
    gb.regs.a = 9;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4DAB;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleEagleTowerOpen(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x29);
    if (GET_FLAG_Z()) goto ContinueJingleEagleTowerOpen_jr_01F_4D41;
  ContinueJingleEagleTowerOpen_jr_01F_4D3B:;
    gb.regs.hl = 0x4D5B;
    func_01F_7AE1(); return;
  ContinueJingleEagleTowerOpen_jr_01F_4D41:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ContinueJingleEagleTowerOpen_jr_01F_4D50;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleEagleTowerOpen_jr_01F_4D3B;
  ContinueJingleEagleTowerOpen_jr_01F_4D50:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x4DB1;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_4D5B(void) {
    /* data: db $00, $30, $00, $30, $00, $30, $00, $30 */;
    /* data: db $00, $28, $00, $28, $00, $28, $00, $28 */;
    /* data: db $00, $20, $00, $20, $00, $20, $00, $20 */;
    /* data: db $00, $18, $00, $18, $00, $18, $00, $18 */;
    /* data: db $00, $10, $00, $10, $00, $10, $00, $10 */;
    /* data: db $FF, $F0, $FF, $F0, $FF, $F0, $FF, $F0 */;
    /* data: db $FF, $E8, $FF, $E8, $FF, $E8, $FF, $E8 */;
    /* data: db $FF, $E0, $FF, $E0, $FF, $E0, $FF, $E0 */;
    /* data: db $FF, $D8, $FF, $D8, $FF, $D8, $FF, $D8 */;
    /* data: db $FF, $D0, $FF, $D0, $FF, $D0, $FF, $D0 */;
}

void Data_01F_4DAB(void) {
    /* data: db $00, $80, $1D, $00, $81, $10 */;
}

void Data_01F_4DB1(void) {
    /* data: db $00, $80, $F7, $00, $81, $10 */;
}

void BeginJinglePoof(void) {
    gb.regs.a = 7;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4DE9;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJinglePoof(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ContinueJinglePoof_jr_01F_4DD2;
  ContinueJinglePoof_jr_01F_4DCC:;
    gb.regs.hl = 0x4DDD;
    func_01F_7AE1(); return;
  ContinueJinglePoof_jr_01F_4DD2:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJinglePoof_jr_01F_4DCC;
}

void Data_01F_4DDD(void) {
    /* data: db $00, $80, $00, $60, $00, $40, $FF, $C0, $FF, $A0, $FF, $88 */;
}

void Data_01F_4DE9(void) {
    /* data: db $00, $80, $F2, $00, $85, $01 */;
}

void BeginJingleEvilEagle(void) {
    gb.regs.a = 0x0A;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4E0A;
    label_01F_539A(); return;
}

void ContinueJingleEvilEagle(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.hl = 0x4E0A;
    WriteChannel1AndDE(); return;
}

void Data_01F_4E0A(void) {
    /* data: db $17, $BC, $64, $44, $C7, $02 */;
}

void BeginJingleGrimCreeper(void) {
    gb.regs.a = 0x14;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4E4A;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleGrimCreeper(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ContinueJingleGrimCreeper_jr_01F_4E2B;
  ContinueJingleGrimCreeper_jr_01F_4E25:;
    gb.regs.hl = 0x4E46;
    func_01F_7AE1(); return;
  ContinueJingleGrimCreeper_jr_01F_4E2B:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto ContinueJingleGrimCreeper_jr_01F_4E3A;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleGrimCreeper_jr_01F_4E25;
  ContinueJingleGrimCreeper_jr_01F_4E3A:;
    gb.regs.hl = 0x4E50;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_4E46(void) {
    /* data: db $FF, $FC, $00, $02 */;
}

void Data_01F_4E4A(void) {
    /* data: db $00, $00, $19, $EA, $87, $01 */;
}

void Data_01F_4E50(void) {
    /* data: db $00, $00, $47, $E0, $87, $01 */;
}

void BeginJingleHotHeadSplash(void) {
    gb.regs.hl = 0x4E75;
    label_01F_5395(); return;
}

void ContinueJingleHotHeadSplash(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.hl = 0x4E71;
    GetHandlerAddressInTable();
    WriteChannel1AndDE(); return;
}

void Data_01F_4E71(void) {
    /* data: dw Data_01F_4E7B */;
    /* data: dw Data_01F_4E81 */;
}

void Data_01F_4E75(void) {
    /* data: db $1F, $80, $85, $A0, $87, $0C */;
}

void Data_01F_4E7B(void) {
    /* data: db $1F, $80, $47, $A0, $87, $0C */;
}

void Data_01F_4E81(void) {
    /* data: db $1F, $8D, $20, $A0, $C7, $0C */;
}

void BeginJingleBlainoPunch(void) {
    gb.regs.a = 2;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4EC4;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleBlainoPunch(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 8;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto ContinueJingleBlainoPunch_jr_01F_4EAD;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto ContinueJingleBlainoPunch_jr_01F_4EB8;
  ContinueJingleBlainoPunch_jr_01F_4EA7:;
    gb.regs.hl = 0x4EBC;
    func_01F_7AE1(); return;
  ContinueJingleBlainoPunch_jr_01F_4EAD:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 4;
  ContinueJingleBlainoPunch_jr_01F_4EB5:;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleBlainoPunch_jr_01F_4EA7;
  ContinueJingleBlainoPunch_jr_01F_4EB8:;
    gb.regs.a = 1;
    goto ContinueJingleBlainoPunch_jr_01F_4EB5;
}

void Data_01F_4EBC(void) {
    /* data: db $00, $08, $FF, $FD, $00, $03, $FF, $F8 */;
}

void Data_01F_4EC4(void) {
    /* data: db $00, $00, $60, $D1, $87, $08 */;
}

void BeginJingleShowInstruments(void) {
    gb.regs.a = 0x0C;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4F17;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleShowInstruments(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto ContinueJingleShowInstruments_jr_01F_4EE9;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto ContinueJingleShowInstruments_jr_01F_4F00;
  ContinueJingleShowInstruments_jr_01F_4EE3:;
    gb.regs.hl = 0x4F05;
    func_01F_7AE1(); return;
  ContinueJingleShowInstruments_jr_01F_4EE9:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto ContinueJingleShowInstruments_jr_01F_4EF5;
    goto ContinueJingleShowInstruments_jr_01F_4EE3;
  ContinueJingleShowInstruments_jr_01F_4EF5:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x4F1D;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
  ContinueJingleShowInstruments_jr_01F_4F00:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleShowInstruments_jr_01F_4EE3;
}

void Data_01F_4F05(void) {
    /* data: db $00, $01, $00, $01, $00, $01, $00, $01, $00, $01, $00, $01, $00, $01, $00, $01 */;
    /* data: db $FF, $FA */;
}

void Data_01F_4F17(void) {
    /* data: db $00, $00, $1F, $D0, $87, $01 */;
}

void Data_01F_4F1D(void) {
    /* data: db $00, $00, $A7, $D8, $87, $01 */;
}

void BeginJingleShadowNext(void) {
    gb.regs.a = 5;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4F78;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleShadowNext(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 2;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto ContinueJingleShadowNext_jr_01F_4F49;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto ContinueJingleShadowNext_jr_01F_4F56;
  ContinueJingleShadowNext_jr_01F_4F43:;
    gb.regs.hl = 0x4F66;
    func_01F_7AE1(); return;
  ContinueJingleShadowNext_jr_01F_4F49:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ContinueJingleShadowNext_jr_01F_4F5B;
    gb.regs.a = gb_read(gb.regs.bc);
    goto ContinueJingleShadowNext_jr_01F_4F43;
  ContinueJingleShadowNext_jr_01F_4F56:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleShadowNext_jr_01F_4F43;
  ContinueJingleShadowNext_jr_01F_4F5B:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x4F7E;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_4F66(void) {
    /* data: db $00, $10, $00, $10, $00, $10, $00, $10, $00, $0C, $00, $08, $00, $04, $00, $02 */;
    /* data: db $FF, $A2 */;
}

void Data_01F_4F78(void) {
    /* data: db $00, $80, $1F, $A0, $86, $02 */;
}

void Data_01F_4F7E(void) {
    /* data: db $00, $80, $87, $A0, $86, $02 */;
}

void BeginJingleShadow2Defeat(void) {
    gb.regs.a = 0x0B;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x4FEF;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleShadow2Defeat(void) {
    func_01F_7A9A();
    if (GET_FLAG_Z()) goto ContinueJingleShadow2Defeat_jr_01F_4FBB;
  ContinueJingleShadow2Defeat_jr_01F_4F97:;
    gb.regs.a = gb_read(0xD3E2);
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_C()) goto ContinueJingleShadow2Defeat_jr_01F_4FAF;
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ContinueJingleShadow2Defeat_jr_01F_4FAB;
    gb.regs.a = 1;
  ContinueJingleShadow2Defeat_jr_01F_4FA4:;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x4FE7;
    func_01F_7AE1(); return;
  ContinueJingleShadow2Defeat_jr_01F_4FAB:;
    gb.regs.a = 2;
    goto ContinueJingleShadow2Defeat_jr_01F_4FA4;
  ContinueJingleShadow2Defeat_jr_01F_4FAF:;
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto ContinueJingleShadow2Defeat_jr_01F_4FB7;
    gb.regs.a = 3;
    goto ContinueJingleShadow2Defeat_jr_01F_4FA4;
  ContinueJingleShadow2Defeat_jr_01F_4FB7:;
    gb.regs.a = 4;
    goto ContinueJingleShadow2Defeat_jr_01F_4FA4;
  ContinueJingleShadow2Defeat_jr_01F_4FBB:;
    gb_push16(gb.regs.bc);
    gb.regs.bc = 0xD3E2;
    IncrementValueAtBC();
    gb.regs.bc = gb_pop16();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto ContinueJingleShadow2Defeat_jr_01F_4FDB;
    alu_cp8(gb.regs.a, 0x22);
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    alu_cp8(gb.regs.a, 0x11);
    if (!GET_FLAG_C()) goto ContinueJingleShadow2Defeat_jr_01F_4FE3;
  ContinueJingleShadow2Defeat_jr_01F_4FD0:;
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = 0x0B;
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(0xD3BC, gb.regs.a);
    goto ContinueJingleShadow2Defeat_jr_01F_4F97;
  ContinueJingleShadow2Defeat_jr_01F_4FDB:;
    gb.regs.a = 0xA0;
    gb_write(0xFF12, gb.regs.a);
    gb.regs.a = 5;
    goto ContinueJingleShadow2Defeat_jr_01F_4FD0;
  ContinueJingleShadow2Defeat_jr_01F_4FE3:;
    gb.regs.a = 0x11;
    goto ContinueJingleShadow2Defeat_jr_01F_4FD0;
}

void Data_01F_4FE7(void) {
    /* data: db $00, $20, $FF, $E8, $00, $1C, $FF, $F0 */;
}

void Data_01F_4FEF(void) {
    /* data: db $00, $40, $1F, $80, $83, $01 */;
}

void BeginJingleShadow1Hurt(void) {
    gb.regs.a = 0x10;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x5036;
    func_01F_7AB7();
    label_01F_5395(); return;
}

void ContinueJingleShadow1Hurt(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto ContinueJingleShadow1Hurt_jr_01F_5014;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto ContinueJingleShadow1Hurt_jr_01F_501F;
  ContinueJingleShadow1Hurt_jr_01F_500E:;
    gb.regs.hl = 0x5024;
    func_01F_7AE1(); return;
  ContinueJingleShadow1Hurt_jr_01F_5014:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 9;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleShadow1Hurt_jr_01F_500E;
  ContinueJingleShadow1Hurt_jr_01F_501F:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleShadow1Hurt_jr_01F_500E;
}

void Data_01F_5024(void) {
    /* data: db $00, $40, $00, $30, $00, $20, $FF, $E0, $FF, $D0, $FF, $C0, $FF, $A0, $FF, $80 */;
    /* data: db $00, $D0 */;
}

void Data_01F_5036(void) {
    /* data: db $00, $80, $80, $00, $86, $01 */;
}

void BeginJingleShadow3BG(void) {
    gb.regs.a = gb_read(0xD361);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_53E6(); return; };
    gb.regs.a = gb_read(0xD3D6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto BeginJingleShadow3BG_jr_01F_5052;
    gb.regs.hl = 0x5082;
  BeginJingleShadow3BG_jr_01F_504C:;
    func_01F_7AB7();
    label_01F_539A(); return;
  BeginJingleShadow3BG_jr_01F_5052:;
    gb.regs.hl = 0x5088;
    goto BeginJingleShadow3BG_jr_01F_504C;
}

void ContinueJingleShadow3BG(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) goto ContinueJingleShadow3BG_jr_01F_5064;
    gb.regs.hl = 0x506E;
    func_01F_7AE1(); return;
  ContinueJingleShadow3BG_jr_01F_5064:;
    gb.regs.hl = 0xD360;
    gb.regs.a = 0x38;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    BeginJingleShadow3BG(); return;
}

void Data_01F_506E(void) {
    /* data: db $00, $C0, $00, $90, $00, $60, $00, $30, $00, $18, $FF, $E8, $FF, $D0, $FF, $A0 */;
    /* data: db $FF, $70, $FF, $40 */;
}

void Data_01F_5082(void) {
    /* data: db $00, $80, $A0, $00, $82, $01 */;
}

void Data_01F_5088(void) {
    /* data: db $00, $80, $C0, $00, $83, $01 */;
}

void BeginJingleShadow4Intro(void) {
    gb.regs.a = 4;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x5114;
    func_01F_7AB7();
    label_01F_5395(); return;
}

void ContinueJingleShadow4Intro(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) goto ContinueJingleShadow4Intro_jr_01F_50BA;
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) goto ContinueJingleShadow4Intro_jr_01F_50C5;
  ContinueJingleShadow4Intro_jr_01F_50A7:;
    gb.regs.a = gb_read(0xD3BC);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_C()) goto ContinueJingleShadow4Intro_jr_01F_50B4;
    gb.regs.hl = 0x50DC;
    func_01F_7AE1(); return;
  ContinueJingleShadow4Intro_jr_01F_50B4:;
    gb.regs.hl = 0x50F8;
    func_01F_7AE1(); return;
  ContinueJingleShadow4Intro_jr_01F_50BA:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 0x0E;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleShadow4Intro_jr_01F_50A7;
  ContinueJingleShadow4Intro_jr_01F_50C5:;
    gb.regs.a = gb_read(0xD3BC);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto ContinueJingleShadow4Intro_jr_01F_50D1;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleShadow4Intro_jr_01F_50A7;
  ContinueJingleShadow4Intro_jr_01F_50D1:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x511A;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_50DC(void) {
    /* data: db $00, $C0, $00, $A0, $00, $80, $00, $60, $00, $40, $00, $20, $FF, $E0, $FF, $E0 */;
    /* data: db $FF, $D0, $FF, $D0, $FF, $C0, $FF, $C0, $FF, $B0, $FF, $B0 */;
}

void Data_01F_50F8(void) {
    /* data: db $00, $60, $00, $50, $00, $40, $00, $30, $00, $20, $00, $10, $FF, $F0, $FF, $F0 */;
    /* data: db $FF, $F0, $FF, $F0, $FF, $E0, $FF, $E0, $FF, $D0, $FF, $D0 */;
}

void Data_01F_5114(void) {
    /* data: db $00, $40, $4D, $80, $83, $01 */;
}

void Data_01F_511A(void) {
    /* data: db $00, $80, $20, $C0, $84, $01 */;
}

void BeginJingleUnknown3A(void) {
    gb.regs.a = 4;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x5161;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleUnknown3A(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto ContinueJingleUnknown3A_jr_01F_513F;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) goto ContinueJingleUnknown3A_jr_01F_514A;
  ContinueJingleUnknown3A_jr_01F_5139:;
    gb.regs.hl = 0x514F;
    func_01F_7AE1(); return;
  ContinueJingleUnknown3A_jr_01F_513F:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.a = 9;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleUnknown3A_jr_01F_5139;
  ContinueJingleUnknown3A_jr_01F_514A:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleUnknown3A_jr_01F_5139;
}

void Data_01F_514F(void) {
    /* data: db $00, $12, $00, $0E, $00, $0A, $00, $08, $00, $06, $00, $04, $00, $02, $00, $01 */;
    /* data: db $FF, $C1 */;
}

void Data_01F_5161(void) {
    /* data: db $00, $00, $A4, $00, $87, $01 */;
}

void BeginJingleSwordBeam(void) {
    gb.regs.a = 5;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x51AE;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleSwordBeam(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto ContinueJingleSwordBeam_jr_01F_518B;
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) goto ContinueJingleSwordBeam_jr_01F_5186;
  ContinueJingleSwordBeam_jr_01F_5180:;
    gb.regs.hl = 0x5196;
    func_01F_7AE1(); return;
  ContinueJingleSwordBeam_jr_01F_5186:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleSwordBeam_jr_01F_5180;
  ContinueJingleSwordBeam_jr_01F_518B:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = 0x0C;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleSwordBeam_jr_01F_5180;
}

void Data_01F_5196(void) {
    /* data: db $FF, $C0, $FF, $A0, $00, $80, $FF, $C0, $FF, $A0, $00, $80, $FF, $C0, $FF, $A0 */;
    /* data: db $00, $80, $FF, $C0, $FF, $A0, $01, $00 */;
}

void Data_01F_51AE(void) {
    /* data: db $00, $00, $87, $80, $87, $01 */;
}

void BeginJingleEnemyShriek(void) {
    gb.regs.a = 2;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x51F0;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleEnemyShriek(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) goto ContinueJingleEnemyShriek_jr_01F_51CF;
    gb.regs.hl = 0x51E0;
    func_01F_7AE1(); return;
  ContinueJingleEnemyShriek_jr_01F_51CF:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x51F6;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_51E0(void) {
    /* data: db $00, $02, $00, $02, $00, $02, $00, $02, $00, $01, $00, $01, $00, $01, $00, $01 */;
}

void Data_01F_51F0(void) {
    /* data: db $00, $00, $60, $D0, $87, $02 */;
}

void Data_01F_51F6(void) {
    /* data: db $00, $40, $10, $D0, $87, $01 */;
}

void BeginJingleShadow6BG(void) {
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { label_01F_53E6(); return; };
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { label_01F_53E6(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { label_01F_53E6(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01F_53E6(); return; };
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) { label_01F_53E6(); return; };
    gb.regs.a = 0x0A;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x5262;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleShadow6BG(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto ContinueJingleShadow6BG_jr_01F_523C;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto ContinueJingleShadow6BG_jr_01F_5237;
  ContinueJingleShadow6BG_jr_01F_5231:;
    gb.regs.hl = 0x525A;
    func_01F_7AE1(); return;
  ContinueJingleShadow6BG_jr_01F_5237:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleShadow6BG_jr_01F_5231;
  ContinueJingleShadow6BG_jr_01F_523C:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_5253(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto ContinueJingleShadow6BG_jr_01F_5248;
    goto ContinueJingleShadow6BG_jr_01F_5231;
  ContinueJingleShadow6BG_jr_01F_5248:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x5268;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void label_01F_5253(void) {
    gb.regs.a = 0x3D;
    gb_write(0xD360, gb.regs.a);
    BeginJingleShadow6BG(); return;
}

void Data_01F_525A(void) {
    /* data: db $00, $C0, $00, $80, $00, $40, $FE, $80 */;
}

void Data_01F_5262(void) {
    /* data: db $00, $40, $19, $80, $83, $01 */;
}

void Data_01F_5268(void) {
    /* data: db $00, $40, $86, $80, $83, $01 */;
}

void BeginJingleUrchinPush(void) {
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 0x3E);
    if (GET_FLAG_Z()) { label_01F_53E6(); return; };
    gb.regs.hl = 0x5283;
    label_01F_539A(); return;
}

void ContinueJingleUrchinPush(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    func_01F_53BB(); return;
}

void Data_01F_5283(void) {
    /* data: db $27, $BE, $60, $C0, $C7, $03 */;
}

void BeginJingleFlyingTile(void) {
    gb.regs.a = 9;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x52CD;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleFlyingTile(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ContinueJingleFlyingTile_jr_01F_52A8;
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto ContinueJingleFlyingTile_jr_01F_52B7;
  ContinueJingleFlyingTile_jr_01F_52A2:;
    gb.regs.hl = 0x52C7;
    func_01F_7AE1(); return;
  ContinueJingleFlyingTile_jr_01F_52A8:;
    func_01F_7A9A();
    if (GET_FLAG_Z()) { label_01F_53B5(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto ContinueJingleFlyingTile_jr_01F_52BC;
    gb.regs.a = 3;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleFlyingTile_jr_01F_52A2;
  ContinueJingleFlyingTile_jr_01F_52B7:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    goto ContinueJingleFlyingTile_jr_01F_52A2;
  ContinueJingleFlyingTile_jr_01F_52BC:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x52D3;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_52C7(void) {
    /* data: db $00, $60, $00, $40, $FF, $70 */;
}

void Data_01F_52CD(void) {
    /* data: db $00, $80, $19, $00, $86, $01 */;
}

void Data_01F_52D3(void) {
    /* data: db $00, $80, $D1, $10, $86, $01 */;
}

void BeginJingleFacadeHole(void) {
    gb.regs.a = 4;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x532B;
    func_01F_7AB7();
    label_01F_539A(); return;
}

void ContinueJingleFacadeHole(void) {
    func_01F_7A9A();
    if (GET_FLAG_Z()) goto ContinueJingleFacadeHole_jr_01F_5300;
  ContinueJingleFacadeHole_jr_01F_52EC:;
    gb.regs.a = gb_read(0xD3E2);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_C()) goto ContinueJingleFacadeHole_jr_01F_52FC;
    gb.regs.a = 1;
  ContinueJingleFacadeHole_jr_01F_52F5:;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x5327;
    func_01F_7AE1(); return;
  ContinueJingleFacadeHole_jr_01F_52FC:;
    gb.regs.a = 2;
    goto ContinueJingleFacadeHole_jr_01F_52F5;
  ContinueJingleFacadeHole_jr_01F_5300:;
    gb_push16(gb.regs.bc);
    gb.regs.bc = 0xD3E2;
    IncrementValueAtBC();
    gb.regs.bc = gb_pop16();
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto ContinueJingleFacadeHole_label_01F_5319;
    gb.regs.a = 4;
    gb_write(0xD3BC, gb.regs.a);
    goto ContinueJingleFacadeHole_jr_01F_52EC;
  ContinueJingleFacadeHole_label_01F_5319:;
    gb.regs.a = 4;
    gb_write(0xD3BC, gb.regs.a);
    gb.regs.hl = 0x5331;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void Data_01F_5327(void) {
    /* data: db $00, $10, $FF, $F8 */;
}

void Data_01F_532B(void) {
    /* data: db $00, $80, $1A, $80, $82, $01 */;
}

void Data_01F_5331(void) {
    /* data: db $00, $80, $E5, $10, $84, $01 */;
}

void BeginJingleUnknown41(void) {
    gb.regs.hl = 0x5360;
    label_01F_5395(); return;
}

void ContinueJingleUnknown41(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { func_01F_53BB(); return; };
    gb.regs.hl = 0x5352;
    GetHandlerAddressInTable();
    WriteChannel1AndDE(); return;
}

void Data_01F_5352(void) {
    /* data: dw Data_01F_5378 */;
    /* data: dw Data_01F_5366 */;
    /* data: dw Data_01F_537E */;
    /* data: dw Data_01F_536C */;
    /* data: dw Data_01F_5384 */;
    /* data: dw Data_01F_5372 */;
    /* data: dw Data_01F_538A */;
}

void Data_01F_5360(void) {
    /* data: db $00, $00, $C1, $7B, $87, $06 */;
}

void Data_01F_5366(void) {
    /* data: db $00, $00, $C1, $8A, $87, $06 */;
}

void Data_01F_536C(void) {
    /* data: db $00, $00, $C1, $90, $87, $07 */;
}

void Data_01F_5372(void) {
    /* data: db $00, $00, $C1, $B6, $87, $07 */;
}

void Data_01F_5378(void) {
    /* data: db $00, $00, $62, $7B, $87, $04 */;
}

void Data_01F_537E(void) {
    /* data: db $00, $00, $62, $8A, $87, $04 */;
}

void Data_01F_5384(void) {
    /* data: db $00, $00, $62, $90, $87, $04 */;
}

void Data_01F_538A(void) {
    /* data: db $00, $00, $62, $B6, $87, $04, $3E, $01, $EA, $A0, $D3 */;
}

void label_01F_5395(void) {
    gb.regs.a = 1;
    gb_write(0xD3C6, gb.regs.a);
}

void label_01F_539A(void) {
    gb.regs.a = gb_read(0xD360);
    gb_write(0xD361, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD390, gb.regs.a);
    gb_write(0xD394, gb.regs.a);
    gb_write(0xD3E2, gb.regs.a);
    gb.regs.a = gb_read(wMusicChannel1_loopCounter);
    gb.regs.a = alu_set(7, gb.regs.a);
    gb_write(wMusicChannel1_loopCounter, gb.regs.a);
    WriteChannel1AndDE(); return;
}

void label_01F_53B5(void) {
    gb.regs.hl = 0x53D9;
    WriteChannel1AndDE();
}

void func_01F_53BB(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD361, gb.regs.a);
    gb_write(0xD390, gb.regs.a);
    gb_write(0xFF10, gb.regs.a);
    gb_write(0xD394, gb.regs.a);
    gb_write(0xD3BC, gb.regs.a);
    gb_write(0xD3A0, gb.regs.a);
    gb_write(0xD3C6, gb.regs.a);
    gb.regs.a = gb_read(wMusicChannel1_loopCounter);
    gb.regs.a = alu_res(7, gb.regs.a);
    gb_write(wMusicChannel1_loopCounter, gb.regs.a);
    return;
}

void Data_01F_53D9(void) {
    /* data: db $00, $3F, $00, $00, $C1, $01 */;
}

void WriteChannel1FrequencyAndDE(void) {
    gb.regs.b = 2;
    gb.regs.c = 0x13;
    WriteIOAndDE(); return;
}

void label_01F_53E6(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD360, gb.regs.a);
    PlayActiveJingle(); return;
}

void PlayActiveWaveSfx(void) {
    gb.regs.hl = 0xD370;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PlayActiveWaveSfx_jr_01F_5405;
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_Z()) goto PlayActiveWaveSfx_jr_01F_53FF;
    gb.regs.a = gb_read(0xD3C8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_6385(); return; };
  PlayActiveWaveSfx_jr_01F_53FF:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x539D;
    goto PlayActiveWaveSfx_jr_01F_540C;
  PlayActiveWaveSfx_jr_01F_5405:;
    gb.regs.hl++;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0x53E3;
  PlayActiveWaveSfx_jr_01F_540C:;
    GetHandlerAddressInTable();
    gb.regs.de = 0xD392;
    gb.regs.bc = 0xD396;
    gb.regs.a = gb_read(0xD3CD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    /* jp hl - dynamic dispatch */;
}

void WaveSfxHandlersTable1(void) {
    /* data: dw func_01F_54A7 */;
    /* data: dw func_01F_54F3 */;
    /* data: dw func_01F_5538 */;
    /* data: dw func_01F_5564 */;
    /* data: dw func_01F_55B3 */;
    /* data: dw func_01F_55F9 */;
    /* data: dw func_01F_5645 */;
    /* data: dw func_01F_56D1 */;
    /* data: dw func_01F_5732 */;
    /* data: dw func_01F_57FE */;
    /* data: dw func_01F_58A3 */;
    /* data: dw func_01F_5949 */;
    /* data: dw func_01F_5999 */;
    /* data: dw func_01F_59E1 */;
    /* data: dw func_01F_5A19 */;
    /* data: dw func_01F_5A44 */;
    /* data: dw func_01F_5B67 */;
    /* data: dw func_01F_5BC4 */;
    /* data: dw func_01F_5C0C */;
    /* data: dw func_01F_5C80 */;
    /* data: dw func_01F_5CB0 */;
    /* data: dw func_01F_5CFC */;
    /* data: dw func_01F_5D84 */;
    /* data: dw func_01F_5ED7 */;
    /* data: dw func_01F_5F19 */;
    /* data: dw func_01F_5F78 */;
    /* data: dw func_01F_5FC0 */;
    /* data: dw func_01F_601C */;
    /* data: dw func_01F_606C */;
    /* data: dw func_01F_606E */;
    /* data: dw func_01F_60D4 */;
    /* data: dw func_01F_614D */;
    /* data: dw func_01F_61A2 */;
    /* data: dw func_01F_621C */;
    /* data: dw func_01F_627C */;
}

void WaveSfxHandlersTable2(void) {
    /* data: dw func_01F_54B0 */;
    /* data: dw func_01F_5504 */;
    /* data: dw func_01F_554A */;
    /* data: dw func_01F_5585 */;
    /* data: dw func_01F_55BC */;
    /* data: dw func_01F_5610 */;
    /* data: dw func_01F_565E */;
    /* data: dw func_01F_56E2 */;
    /* data: dw func_01F_5740 */;
    /* data: dw func_01F_580C */;
    /* data: dw func_01F_58AF */;
    /* data: dw func_01F_595A */;
    /* data: dw func_01F_59AA */;
    /* data: dw func_01F_59EA */;
    /* data: dw func_01F_5A2A */;
    /* data: dw func_01F_5A55 */;
    /* data: dw func_01F_5B78 */;
    /* data: dw func_01F_5BD5 */;
    /* data: dw func_01F_5C1D */;
    /* data: dw func_01F_5C99 */;
    /* data: dw func_01F_5CB9 */;
    /* data: dw func_01F_5D1A */;
    /* data: dw func_01F_5DA6 */;
    /* data: dw func_01F_5EE8 */;
    /* data: dw func_01F_5F25 */;
    /* data: dw func_01F_5F93 */;
    /* data: dw func_01F_5FC9 */;
    /* data: dw func_01F_602D */;
    /* data: dw func_01F_606D */;
    /* data: dw func_01F_6084 */;
    /* data: dw func_01F_60EF */;
    /* data: dw func_01F_6163 */;
    /* data: dw func_01F_61CF */;
    /* data: dw func_01F_6231 */;
    /* data: dw func_01F_6285 */;
}

void func_01F_54A7(void) {
    func_01F_636A();
    gb.regs.hl = 0x54CF;
    label_01F_62F3(); return;
}

void func_01F_54B0(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { label_01F_632D(); return; };
    gb.regs.hl = 0x54C5;
    GetHandlerAddressInTable();
    WriteChannel3AndDE(); return;
}

void Data_01F_54C5(void) {
    /* data: dw Data_01F_54D5 */;
    /* data: dw Data_01F_54DB */;
    /* data: dw Data_01F_54E1 */;
    /* data: dw Data_01F_54E7 */;
    /* data: dw Data_01F_54ED */;
}

void Data_01F_54CF(void) {
    /* data: db $80, $EE, $20, $CB, $C7, $05 */;
}

void Data_01F_54D5(void) {
    /* data: db $80, $EE, $20, $D1, $C7, $05 */;
}

void Data_01F_54DB(void) {
    /* data: db $80, $EE, $20, $D6, $C7, $05 */;
}

void Data_01F_54E1(void) {
    /* data: db $80, $EE, $20, $DD, $C7, $07 */;
}

void Data_01F_54E7(void) {
    /* data: db $80, $EE, $40, $DD, $C7, $07 */;
}

void Data_01F_54ED(void) {
    /* data: db $80, $EE, $60, $DD, $C7, $07 */;
}

void func_01F_54F3(void) {
    gb.regs.a = 0x0C;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_636F();
    gb.regs.hl = 0x5532;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_5504(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_01F_5516(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
}

void jr_01F_5510(void) {
    gb.regs.hl = 0x5520;
    label_01F_7AEB(); return;
}

void jr_01F_5516(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { jr_01F_5510(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_5510(); return;
}

void Data_01F_5520(void) {
    /* data: db $00, $10, $00, $40, $00, $40, $00, $30, $00, $30, $00, $20, $00, $10, $FF, $F0 */;
    /* data: db $FF, $E0 */;
}

void Data_01F_5532(void) {
    /* data: db $80, $00, $20, $80, $85, $02 */;
}

void func_01F_5538(void) {
    gb.regs.hl = 0x63CC;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    WriteWavePattern();
    gb.regs.hl = 0x555E;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_554A(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { label_01F_632D(); return; };
    gb.regs.hl = 0x5558;
    label_01F_7AEB(); return;
}

void Data_01F_5558(void) {
    /* data: db $01, $80, $FF, $F0, $FF, $E0 */;
}

void Data_01F_555E(void) {
    /* data: db $80, $EF, $20, $00, $C6, $01 */;
}

void func_01F_5564(void) {
    gb.regs.a = gb_read(0xD371);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_6385(); return; };
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 2;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_636F();
    gb.regs.hl = 0x55A4;
    label_01F_62F8(); return;
}

void func_01F_5585(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto func_01F_5585_jr_5596;
    gb.regs.hl = 0x55AA;
    WriteChannel3FrequencyAndDE(); return;
  func_01F_5585_jr_5596:;
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_632D(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x55AD;
    WriteChannel3AndDE(); return;
}

void Data_01F_55A4(void) {
    /* data: db $80, $FA, $40, $C0, $C7, $04 */;
}

void Data_01F_55AA(void) {
    /* data: db $E0, $C7, $04 */;
}

void Data_01F_55AD(void) {
    /* data: db $80, $FA, $60, $C0, $C7, $04 */;
}

void func_01F_55B3(void) {
    func_01F_636A();
    gb.regs.hl = 0x55F0;
    label_01F_62F8(); return;
}

void func_01F_55BC(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { label_01F_632D(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01F_55DB(); return; };
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { label_01F_55E2(); return; };
}

void jr_01F_55D2(void) {
    gb.regs.hl = 0x55E6;
    GetHandlerAddressInTable();
    WriteChannel3FrequencyAndDE(); return;
}

void label_01F_55DB(void) {
    gb.regs.a = 0x40;
}

void jr_01F_55DD(void) {
    gb_write(0xFF1C, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.bc);
    jr_01F_55D2(); return;
}

void label_01F_55E2(void) {
    gb.regs.a = 0x60;
    jr_01F_55DD(); return;
}

void Data_01F_55E6(void) {
    /* data: dw Data_01F_55F6 */;
    /* data: dw Data_01F_55F3 */;
    /* data: dw Data_01F_55F6 */;
    /* data: dw Data_01F_55F3 */;
    /* data: dw Data_01F_55F6 */;
}

void Data_01F_55F0(void) {
    /* data: db $80, $FA, $20 */;
}

void Data_01F_55F3(void) {
    /* data: db $DA, $C7, $02 */;
}

void Data_01F_55F6(void) {
    /* data: db $EA, $C7, $02 */;
}

void func_01F_55F9(void) {
    gb.regs.a = gb_read(0xD361);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 0x0C;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_6365();
    gb.regs.hl = 0x5639;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_5610(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_01F_5628(); return; };
}

void jr_01F_5617(void) {
    gb.regs.hl = 0x5637;
    label_01F_7AEB(); return;
}

void jr_01F_561D(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x563F;
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
}

void jr_01F_5628(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { jr_01F_561D(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_5617(); return;
}

void Data_01F_5637(void) {
    /* data: db $00, $03 */;
}

void Data_01F_5639(void) {
    /* data: db $80, $D2, $40, $E0, $87, $01 */;
}

void Data_01F_563F(void) {
    /* data: db $80, $D2, $60, $E0, $87, $01 */;
}

void func_01F_5645(void) {
    gb.regs.a = gb_read(0xD371);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01F_6385(); return; };
    gb.regs.a = 2;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_6365();
    gb.regs.hl = 0x56C5;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_565E(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x1D);
    if (GET_FLAG_Z()) { jr_01F_5676(); return; };
    alu_cp8(gb.regs.a, 0x15);
    if (!GET_FLAG_C()) { jr_01F_5688(); return; };
}

void jr_01F_5670(void) {
    gb.regs.hl = 0x568D;
    label_01F_7AEB(); return;
}

void jr_01F_5676(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    gb.regs.a = 0x14;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x56CB;
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
}

void jr_01F_5688(void) {
    gb.regs.a = 2;
    gb_write(gb.regs.de, gb.regs.a);
    jr_01F_5670(); return;
}

void Data_01F_568D(void) {
    /* data: db $00, $40, $00, $40, $00, $40, $01, $00, $00, $20, $FF, $E0, $00, $40, $FF, $C0 */;
    /* data: db $00, $60, $FF, $A0, $00, $80, $FF, $80, $00, $A0, $FF, $60, $00, $C0, $FF, $40 */;
    /* data: db $01, $00, $FF, $00, $01, $00, $FF, $00, $FF, $E0, $FF, $C0, $FF, $A0, $FF, $80 */;
    /* data: db $FF, $60, $FF, $40, $FF, $20, $FF, $00 */;
}

void Data_01F_56C5(void) {
    /* data: db $80, $00, $20, $40, $84, $02 */;
}

void Data_01F_56CB(void) {
    /* data: db $80, $00, $60, $00, $86, $02 */;
}

void func_01F_56D1(void) {
    gb.regs.a = 8;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_6379();
    gb.regs.hl = 0x5716;
    func_01F_7ABD();
    label_01F_62F3(); return;
}

void func_01F_56E2(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { jr_01F_56EF(); return; };
}

void jr_01F_56E9(void) {
    gb.regs.hl = 0x56FA;
    label_01F_7AEB(); return;
}

void jr_01F_56EF(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_56E9(); return;
}

void Data_01F_56FA(void) {
    /* data: db $00, $0A, $00, $06, $FF, $F0, $00, $20, $00, $0A, $00, $06, $FF, $FA, $FF, $F6 */;
    /* data: db $00, $20, $00, $0A, $00, $06, $FF, $FA, $FF, $F6, $FF, $A8 */;
}

void Data_01F_5716(void) {
    /* data: db $80, $00, $20, $60, $87, $00 */;
}

void Data_01F_571C(void) {
    /* data: db $8A, $DF, $FD, $A8, $87, $42, $24, $78, $8A, $DF, $FD, $A8, $87, $42, $24, $78 */;
}

void func_01F_572C(void) {
    gb.regs.hl = 0x571C;
    func_01F_635A(); return;
}

void func_01F_5732(void) {
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    func_01F_572C();
    gb.regs.hl = 0x5790;
    label_01F_62F3(); return;
}

void func_01F_5740(void) {
    DecrementValueAtDE();
  func_01F_5740_jr_5743:;
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_Z()) { label_01F_575C(); return; };
    gb.regs.hl = 0x576A;
    GetHandlerAddressInTable();
}

void label_01F_5751(void) {
    gb.regs.a = gb_read(0xD396);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { WriteChannel2AndDE(); return; };
    WriteChannel3AndDE(); return;
}

void label_01F_575C(void) {
    gb.regs.hl = 0x431D;
    WriteChannel2AndDE();
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    label_01F_6327(); return;
}

void Data_01F_576A(void) {
    /* data: dw Data_01F_57CC */;
    /* data: dw Data_01F_5796 */;
    /* data: dw Data_01F_57D1 */;
    /* data: dw Data_01F_579C */;
    /* data: dw Data_01F_57D6 */;
    /* data: dw Data_01F_57A2 */;
    /* data: dw Data_01F_57DB */;
    /* data: dw Data_01F_57A8 */;
    /* data: dw Data_01F_57E0 */;
    /* data: dw Data_01F_57AE */;
    /* data: dw Data_01F_57E5 */;
    /* data: dw Data_01F_57B4 */;
    /* data: dw Data_01F_57EA */;
    /* data: dw Data_01F_57BA */;
    /* data: dw Data_01F_57EF */;
    /* data: dw Data_01F_57C0 */;
    /* data: dw Data_01F_57F4 */;
    /* data: dw Data_01F_57C6 */;
    /* data: dw Data_01F_57F9 */;
}

void Data_01F_5790(void) {
    /* data: db $80, $E6, $20, $8A, $C7, $08 */;
}

void Data_01F_5796(void) {
    /* data: db $80, $E6, $20, $97, $C7, $08 */;
}

void Data_01F_579C(void) {
    /* data: db $80, $60, $20, $9C, $C7, $08 */;
}

void Data_01F_57A2(void) {
    /* data: db $80, $E6, $20, $8A, $C7, $08 */;
}

void Data_01F_57A8(void) {
    /* data: db $80, $E6, $20, $97, $C7, $08 */;
}

void Data_01F_57AE(void) {
    /* data: db $80, $E6, $20, $9C, $C7, $08 */;
}

void Data_01F_57B4(void) {
    /* data: db $80, $E6, $20, $97, $C7, $08 */;
}

void Data_01F_57BA(void) {
    /* data: db $80, $E6, $20, $8A, $C7, $08 */;
}

void Data_01F_57C0(void) {
    /* data: db $80, $E6, $20, $62, $C7, $08 */;
}

void Data_01F_57C6(void) {
    /* data: db $80, $00, $20, $79, $C7, $08 */;
}

void Data_01F_57CC(void) {
    /* data: db $80, $20, $8A, $87, $02 */;
}

void Data_01F_57D1(void) {
    /* data: db $80, $20, $97, $87, $02 */;
}

void Data_01F_57D6(void) {
    /* data: db $80, $20, $9C, $87, $34 */;
}

void Data_01F_57DB(void) {
    /* data: db $80, $20, $8A, $87, $02 */;
}

void Data_01F_57E0(void) {
    /* data: db $80, $20, $97, $87, $02 */;
}

void Data_01F_57E5(void) {
    /* data: db $80, $20, $9C, $87, $02 */;
}

void Data_01F_57EA(void) {
    /* data: db $80, $20, $97, $87, $02 */;
}

void Data_01F_57EF(void) {
    /* data: db $80, $20, $8A, $87, $02 */;
}

void Data_01F_57F4(void) {
    /* data: db $80, $20, $62, $87, $02 */;
}

void Data_01F_57F9(void) {
    /* data: db $80, $20, $79, $87, $48 */;
}

void func_01F_57FE(void) {
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    func_01F_572C();
    gb.regs.hl = 0x584B;
    label_01F_62F3(); return;
}

void func_01F_580C(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x16);
    if (GET_FLAG_Z()) { label_01F_575C(); return; };
    gb.regs.hl = 0x5821;
    GetHandlerAddressInTable();
    label_01F_5751(); return;
}

void Data_01F_5821(void) {
    /* data: dw Data_01F_587B */;
    /* data: dw Data_01F_5851 */;
    /* data: dw Data_01F_5880 */;
    /* data: dw Data_01F_5857 */;
    /* data: dw Data_01F_5885 */;
    /* data: dw Data_01F_585D */;
    /* data: dw Data_01F_588A */;
    /* data: dw Data_01F_5863 */;
    /* data: dw Data_01F_588F */;
    /* data: dw Data_01F_5869 */;
    /* data: dw Data_01F_5894 */;
    /* data: dw Data_01F_586F */;
    /* data: dw Data_01F_5899 */;
    /* data: dw Data_01F_585D */;
    /* data: dw Data_01F_588A */;
    /* data: dw Data_01F_5857 */;
    /* data: dw Data_01F_5885 */;
    /* data: dw Data_01F_5851 */;
    /* data: dw Data_01F_5880 */;
    /* data: dw Data_01F_5875 */;
    /* data: dw Data_01F_589E */;
}

void Data_01F_584B(void) {
    /* data: db $80, $E0, $20, $9D, $C7, $04 */;
}

void Data_01F_5851(void) {
    /* data: db $80, $E0, $20, $A7, $C7, $04 */;
}

void Data_01F_5857(void) {
    /* data: db $80, $E0, $20, $B0, $C7, $04 */;
}

void Data_01F_585D(void) {
    /* data: db $80, $E0, $20, $B6, $C7, $04 */;
}

void Data_01F_5863(void) {
    /* data: db $80, $90, $20, $BD, $C7, $04 */;
}

void Data_01F_5869(void) {
    /* data: db $80, $E0, $20, $C4, $C7, $04 */;
}

void Data_01F_586F(void) {
    /* data: db $80, $E0, $20, $BD, $C7, $04 */;
}

void Data_01F_5875(void) {
    /* data: db $80, $80, $20, $9D, $C7, $04 */;
}

void Data_01F_587B(void) {
    /* data: db $80, $20, $9D, $87, $07 */;
}

void Data_01F_5880(void) {
    /* data: db $80, $20, $A7, $87, $07 */;
}

void Data_01F_5885(void) {
    /* data: db $80, $20, $B0, $87, $07 */;
}

void Data_01F_588A(void) {
    /* data: db $80, $20, $B6, $87, $07 */;
}

void Data_01F_588F(void) {
    /* data: db $80, $20, $BD, $87, $23 */;
}

void Data_01F_5894(void) {
    /* data: db $80, $20, $C4, $87, $07 */;
}

void Data_01F_5899(void) {
    /* data: db $80, $20, $BD, $87, $07 */;
}

void Data_01F_589E(void) {
    /* data: db $80, $20, $9D, $87, $35 */;
}

void func_01F_58A3(void) {
    func_01F_7B5C();
    func_01F_572C();
    gb.regs.hl = 0x584B;
    label_01F_62F3(); return;
}

void func_01F_58AF(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x12);
    if (GET_FLAG_Z()) { label_01F_575C(); return; };
    gb.regs.hl = 0x58C4;
    GetHandlerAddressInTable();
  func_01F_58AF_jr_58C1:;
    label_01F_5751(); return;
}

void Data_01F_58C4(void) {
    /* data: dw Data_01F_591C */;
    /* data: dw Data_01F_58EC */;
    /* data: dw Data_01F_5921 */;
    /* data: dw Data_01F_58F2 */;
    /* data: dw Data_01F_5926 */;
    /* data: dw Data_01F_58F8 */;
    /* data: dw Data_01F_592B */;
    /* data: dw Data_01F_58FE */;
    /* data: dw Data_01F_5930 */;
    /* data: dw Data_01F_5904 */;
    /* data: dw Data_01F_5935 */;
    /* data: dw Data_01F_590A */;
    /* data: dw Data_01F_593A */;
    /* data: dw Data_01F_5910 */;
    /* data: dw Data_01F_593F */;
    /* data: dw Data_01F_5916 */;
    /* data: dw Data_01F_5944 */;
}

void Data_01F_58E6(void) {
    /* data: db $80, $C0, $20, $9D, $C7, $04 */;
}

void Data_01F_58EC(void) {
    /* data: db $80, $F0, $20, $9D, $C7, $04 */;
}

void Data_01F_58F2(void) {
    /* data: db $80, $F0, $20, $7B, $C7, $04 */;
}

void Data_01F_58F8(void) {
    /* data: db $80, $F0, $20, $8E, $C7, $04 */;
}

void Data_01F_58FE(void) {
    /* data: db $80, $C0, $20, $A6, $C7, $04 */;
}

void Data_01F_5904(void) {
    /* data: db $80, $C0, $20, $9D, $C7, $04 */;
}

void Data_01F_590A(void) {
    /* data: db $80, $C0, $20, $BD, $C7, $04 */;
}

void Data_01F_5910(void) {
    /* data: db $80, $F0, $20, $BD, $C7, $04 */;
}

void Data_01F_5916(void) {
    /* data: db $80, $80, $20, $BD, $C7, $04 */;
}

void Data_01F_591C(void) {
    /* data: db $80, $20, $9D, $87, $14 */;
}

void Data_01F_5921(void) {
    /* data: db $80, $20, $9D, $87, $08 */;
}

void Data_01F_5926(void) {
    /* data: db $80, $20, $7B, $87, $08 */;
}

void Data_01F_592B(void) {
    /* data: db $80, $20, $8E, $87, $08 */;
}

void Data_01F_5930(void) {
    /* data: db $80, $20, $A6, $87, $14 */;
}

void Data_01F_5935(void) {
    /* data: db $80, $20, $9D, $87, $14 */;
}

void Data_01F_593A(void) {
    /* data: db $80, $20, $BD, $87, $14 */;
}

void Data_01F_593F(void) {
    /* data: db $80, $20, $BD, $87, $08 */;
}

void Data_01F_5944(void) {
    /* data: db $80, $20, $BD, $87, $2C */;
}

void func_01F_5949(void) {
    gb.regs.a = 8;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_636F();
    gb.regs.hl = 0x598D;
    func_01F_7ABD();
    label_01F_62F3(); return;
}

void func_01F_595A(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { jr_01F_5967(); return; };
}

void jr_01F_5961(void) {
    gb.regs.hl = 0x597D;
    label_01F_7AEB(); return;
}

void jr_01F_5967(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto jr_01F_5967_jr_5976;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_5961(); return;
  jr_01F_5967_jr_5976:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.a = 0x60;
    gb_write(0xFF1C, gb.regs.a);
    return;
}

void Data_01F_597D(void) {
    /* data: db $FF, $FE, $FF, $FC, $FF, $F8, $FF, $E8, $00, $14, $00, $02, $00, $04, $00, $06 */;
}

void Data_01F_598D(void) {
    /* data: db $80, $00, $40, $C0, $87, $01, $80, $00, $60, $C0, $87, $01 */;
}

void func_01F_5999(void) {
    gb.regs.a = 0x10;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_6360();
    gb.regs.hl = 0x59D5;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_59AA(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_59B7(); return; };
}

void jr_01F_59B1(void) {
    gb.regs.hl = 0x59D1;
    label_01F_7AEB(); return;
}

void jr_01F_59B7(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto jr_01F_59B7_jr_59C6;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_59B1(); return;
  jr_01F_59B7_jr_59C6:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x59DB;
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
}

void Data_01F_59D1(void) {
    /* data: db $FF, $A0, $00, $C0 */;
}

void Data_01F_59D5(void) {
    /* data: db $80, $00, $20, $70, $80, $02 */;
}

void Data_01F_59DB(void) {
    /* data: db $80, $00, $60, $70, $80, $02 */;
}

void func_01F_59E1(void) {
    func_01F_6360();
    gb.regs.hl = 0x5A07;
    label_01F_62F8(); return;
}

void func_01F_59EA(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { label_01F_632D(); return; };
    gb.regs.hl = 0x59FF;
    GetHandlerAddressInTable();
    WriteChannel3AndDE(); return;
}

void Data_01F_59FF(void) {
    /* data: dw Data_01F_5A0D */;
    /* data: dw Data_01F_5A13 */;
    /* data: dw Data_01F_5A0D */;
    /* data: dw Data_01F_5A07 */;
}

void Data_01F_5A07(void) {
    /* data: db $80, $FB, $20, $00, $C2, $03 */;
}

void Data_01F_5A0D(void) {
    /* data: db $80, $FD, $40, $80, $C3, $04 */;
}

void Data_01F_5A13(void) {
    /* data: db $80, $FD, $60, $00, $C4, $05 */;
}

void func_01F_5A19(void) {
    gb.regs.a = gb_read(0xD371);
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { label_01F_6385(); return; };
    func_01F_636F();
    gb.regs.hl = 0x5A38;
    label_01F_62F8(); return;
}

void func_01F_5A2A(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01F_632D(); return; };
    gb.regs.hl = 0x5A3E;
    WriteChannel3AndDE(); return;
}

void Data_01F_5A38(void) {
    /* data: db $80, $FB, $60, $D2, $C7, $01 */;
}

void Data_01F_5A3E(void) {
    /* data: db $80, $FB, $40, $D2, $C7, $02 */;
}

void func_01F_5A44(void) {
    gb.regs.a = 2;
    gb_write(0xD3BE, gb.regs.a);
  func_01F_5A44_jr_5A49:;
    func_01F_6365();
    gb.regs.hl = 0x5B5B;
    func_01F_7ABD();
    label_01F_62F3(); return;
}

void func_01F_5A55(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x71);
    if (GET_FLAG_Z()) goto func_01F_5A55_jr_5A69;
    gb.regs.hl = 0x5A7B;
    label_01F_7AEB(); return;
  func_01F_5A55_jr_5A69:;
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    gb.regs.a = 0x60;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x5B61;
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
}

void Data_01F_5A7B(void) {
    /* data: db $00, $B0, $00, $B0, $00, $B0, $00, $B0, $00, $60, $00, $60, $00, $60, $00, $60 */;
    /* data: db $00, $20, $FF, $E0, $00, $40, $FF, $C0, $00, $60, $FF, $A0, $00, $80, $FF, $80 */;
    /* data: db $00, $A0, $FF, $60, $00, $C0, $FF, $40, $00, $80, $FF, $88, $00, $80, $FF, $88 */;
    /* data: db $00, $90, $FF, $78, $00, $A0, $FF, $68, $00, $B0, $FF, $56, $00, $C0, $FF, $46 */;
    /* data: db $00, $C0, $FF, $44, $00, $C0, $FF, $44, $00, $C0, $FF, $43, $00, $C0, $FF, $43 */;
    /* data: db $00, $C0, $FF, $42, $00, $A0, $FF, $62, $00, $80, $FF, $82, $00, $80, $FF, $82 */;
    /* data: db $00, $80, $FF, $84, $00, $80, $FF, $84, $00, $80, $FF, $84, $00, $80, $FF, $84 */;
    /* data: db $00, $80, $FF, $B0, $00, $80, $FF, $B0, $00, $80, $FF, $80, $00, $80, $FF, $80 */;
    /* data: db $00, $80, $FF, $80, $00, $80, $FF, $80, $00, $80, $FF, $68, $00, $80, $FF, $68 */;
    /* data: db $00, $80, $FF, $68, $00, $80, $FF, $68, $00, $80, $FF, $78, $00, $80, $FF, $78 */;
    /* data: db $00, $A0, $FF, $40, $00, $A0, $FF, $40, $00, $A0, $FF, $40, $00, $A0, $FF, $40 */;
    /* data: db $00, $A0, $FF, $40, $00, $A0, $FF, $40, $00, $A0, $FF, $40, $00, $A0, $FF, $40 */;
    /* data: db $00, $A0, $FF, $40, $00, $A0, $FF, $40, $00, $A0, $FF, $00, $00, $A0, $FF, $00 */;
    /* data: db $00, $80, $FE, $80, $00, $80, $FE, $80, $00, $80, $FE, $80, $00, $80, $FE, $80 */;
}

void Data_01F_5B5B(void) {
    /* data: db $80, $00, $20, $A0, $81, $02 */;
}

void Data_01F_5B61(void) {
    /* data: db $80, $00, $60, $22, $86, $02 */;
}

void func_01F_5B67(void) {
    gb.regs.a = 0x0C;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_636A();
    gb.regs.hl = 0x5BB2;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_5B78(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto func_01F_5B78_jr_5B85;
    gb.regs.hl = 0x5BAE;
    label_01F_7AEB(); return;
  func_01F_5B78_jr_5B85:;
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { label_01F_5B9E(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01F_5BA9(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x5BAE;
    label_01F_7AEB(); return;
}

void label_01F_5B9E(void) {
    gb.regs.hl = 0x5BB8;
}

void jr_01F_5BA1(void) {
    func_01F_7ABD();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    WriteChannel3AndDE(); return;
}

void label_01F_5BA9(void) {
    gb.regs.hl = 0x5BBE;
    jr_01F_5BA1(); return;
}

void Data_01F_5BAE(void) {
    /* data: db $00, $E0, $FF, $A0 */;
}

void Data_01F_5BB2(void) {
    /* data: db $80, $00, $20, $00, $84, $01 */;
}

void Data_01F_5BB8(void) {
    /* data: db $80, $00, $40, $80, $85, $01 */;
}

void Data_01F_5BBE(void) {
    /* data: db $80, $00, $60, $80, $85, $01 */;
}

void func_01F_5BC4(void) {
    gb.regs.a = 0x12;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_636A();
    gb.regs.hl = 0x5C00;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_5BD5(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_5BE2(); return; };
}

void jr_01F_5BDC(void) {
    gb.regs.hl = 0x5BFC;
    label_01F_7AEB(); return;
}

void jr_01F_5BE2(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto jr_01F_5BE2_jr_5BF1;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_5BDC(); return;
  jr_01F_5BE2_jr_5BF1:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x5C06;
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
}

void Data_01F_5BFC(void) {
    /* data: db $01, $00, $FE, $C0 */;
}

void Data_01F_5C00(void) {
    /* data: db $80, $00, $20, $40, $86, $02 */;
}

void Data_01F_5C06(void) {
    /* data: db $80, $00, $60, $C0, $84, $02 */;
}

void func_01F_5C0C(void) {
    gb.regs.a = 4;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_6374();
    gb.regs.hl = 0x5C6E;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_5C1D(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { jr_01F_5C4E(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { jr_01F_5C35(); return; };
    gb.regs.hl = 0x5C64;
    label_01F_7AEB(); return;
}

void jr_01F_5C35(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_01F_5C5F(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01F_5C5F(); return; };
    gb.regs.hl = 0x5C74;
}

void jr_01F_5C46(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
}

void jr_01F_5C4E(void) {
    gb.regs.a = gb_read(0xD3BE);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01F_5C35(); return; };
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 6;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF1C, gb.regs.a);
    return;
}

void jr_01F_5C5F(void) {
    gb.regs.hl = 0x5C7A;
    jr_01F_5C46(); return;
}

void Data_01F_5C64(void) {
    /* data: db $02, $40, $01, $40, $FF, $F2, $00, $0E, $FF, $F2 */;
}

void Data_01F_5C6E(void) {
    /* data: db $80, $00, $20, $16, $84, $01 */;
}

void Data_01F_5C74(void) {
    /* data: db $80, $00, $20, $26, $84, $01 */;
}

void Data_01F_5C7A(void) {
    /* data: db $80, $00, $20, $08, $84, $01 */;
}

void func_01F_5C80(void) {
    gb.regs.a = gb_read(0xD371);
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_Z()) { label_01F_6385(); return; };
  func_01F_5C80_jr_5C88:;
    gb.regs.a = 4;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_636A();
    gb.regs.hl = 0x5CAA;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_5C99(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x5CA8;
    label_01F_7AEB(); return;
}

void Data_01F_5CA8(void) {
    /* data: db $00, $0E */;
}

void Data_01F_5CAA(void) {
    /* data: db $80, $00, $40, $80, $87, $01 */;
}

void func_01F_5CB0(void) {
    func_01F_6379();
    gb.regs.hl = 0x5CD8;
    label_01F_62F3(); return;
}

void func_01F_5CB9(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { label_01F_632D(); return; };
    gb.regs.hl = 0x5CCE;
    GetHandlerAddressInTable();
    WriteChannel3AndDE(); return;
}

void Data_01F_5CCE(void) {
    /* data: dw Data_01F_5CDE */;
    /* data: dw Data_01F_5CE4 */;
    /* data: dw Data_01F_5CEA */;
    /* data: dw Data_01F_5CF0 */;
    /* data: dw Data_01F_5CF6 */;
}

void Data_01F_5CD8(void) {
    /* data: db $80, $D0, $20, $40, $C7, $14 */;
}

void Data_01F_5CDE(void) {
    /* data: db $80, $C0, $20, $64, $C7, $0C */;
}

void Data_01F_5CE4(void) {
    /* data: db $80, $90, $40, $78, $C7, $40 */;
}

void Data_01F_5CEA(void) {
    /* data: db $80, $C0, $20, $54, $C7, $06 */;
}

void Data_01F_5CF0(void) {
    /* data: db $80, $C0, $40, $46, $C7, $0C */;
}

void Data_01F_5CF6(void) {
    /* data: db $80, $A0, $20, $5E, $C7, $20 */;
}

void func_01F_5CFC(void) {
    gb.regs.a = gb_read(0xD371);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01F_6385(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { label_01F_6385(); return; };
    gb.regs.a = 2;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_6365();
    gb.regs.hl = 0x5D68;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_5D1A(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.bc);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_C()) { jr_01F_5D33(); return; };
}

void jr_01F_5D26(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_01F_5D38(); return; };
    gb.regs.hl = 0x5D4A;
    label_01F_7AEB(); return;
}

void jr_01F_5D33(void) {
    gb.regs.a = 3;
    gb_write(gb.regs.de, gb.regs.a);
    jr_01F_5D26(); return;
}

void jr_01F_5D38(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    gb.regs.a = 3;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x5D6E;
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
}

void Data_01F_5D4A(void) {
    /* data: db $02, $00, $02, $00, $01, $00, $00, $C0, $FF, $40, $00, $C0, $FF, $40, $FF, $00 */;
    /* data: db $FF, $00, $FE, $00, $FF, $C0, $FF, $C0, $FF, $C0, $FF, $C0, $FF, $C0 */;
}

void Data_01F_5D68(void) {
    /* data: db $80, $00, $20, $60, $80, $02 */;
}

void Data_01F_5D6E(void) {
    /* data: db $80, $00, $60, $60, $85, $02 */;
}

void Data_01F_5D74(void) {
    /* data: db $02, $46, $8A, $CE, $FC, $96, $04, $04, $02, $46, $8A, $CE, $FC, $96, $04, $04 */;
}

void func_01F_5D84(void) {
    gb.regs.hl = 0xD34F;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.a = 3;
    gb_write(0xD3BE, gb.regs.a);
    gb.regs.hl = 0x5EB1;
    WriteChannel4AndDE();
    func_01F_636A();
    gb.regs.hl = 0x5D74;
    func_01F_635A();
    gb.regs.hl = 0x5EC5;
    func_01F_7ABD();
    label_01F_62F3(); return;
}

void func_01F_5DA6(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x55);
    if (GET_FLAG_Z()) { jr_01F_5DCE(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_5DBB(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { jr_01F_5DC4(); return; };
}

void jr_01F_5DB5(void) {
    gb.regs.hl = 0x5E09;
    label_01F_7AEB(); return;
}

void jr_01F_5DBB(void) {
    gb.regs.a = 0x40;
}

void jr_01F_5DBD(void) {
    gb_write(0xFF1C, gb.regs.a);
    gb.regs.bc = 0xD396;
    jr_01F_5DB5(); return;
}

void jr_01F_5DC4(void) {
    gb.regs.hl = 0x5EB6;
    WriteChannel4AndDE();
    gb.regs.a = 0x20;
  jr_01F_5DC4_jr_5DCC:;
    jr_01F_5DBD(); return;
}

void jr_01F_5DCE(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { jr_01F_5DFB(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto jr_01F_5DCE_jr_5DE9;
    gb.regs.a = 0x40;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x5EBB;
    WriteChannel4AndDE();
    gb.regs.hl = 0x5ECB;
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
  jr_01F_5DCE_jr_5DE9:;
    gb.regs.a = 0x40;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x5EC0;
    WriteChannel4AndDE();
    gb.regs.hl = 0x5ED1;
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
}

void jr_01F_5DFB(void) {
    gb.regs.hl = 0xD34F;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0x7A20;
    WriteChannel4AndDE();
    label_01F_6327(); return;
}

void Data_01F_5E09(void) {
    /* data: db $00, $40, $FF, $E0, $00, $40, $FF, $E0, $00, $30, $FF, $E8, $00, $30, $FF, $E8 */;
    /* data: db $00, $20, $FF, $F0, $00, $20, $FF, $F0, $00, $10, $FF, $F8, $00, $10, $FF, $F8 */;
    /* data: db $00, $08, $FF, $F9, $00, $08, $FF, $F9, $00, $08, $FF, $F9, $00, $08, $FF, $F9 */;
    /* data: db $00, $08, $FF, $F9, $00, $08, $FF, $F9, $00, $08, $FF, $F8, $00, $08, $FF, $F8 */;
    /* data: db $00, $08, $FF, $F8, $00, $08, $FF, $F8, $00, $08, $FF, $F7, $00, $08, $FF, $F7 */;
    /* data: db $00, $08, $FF, $F7, $00, $08, $FF, $F7, $00, $08, $FF, $F7, $00, $08, $FF, $F7 */;
    /* data: db $00, $10, $FF, $EE, $00, $10, $FF, $EE, $00, $10, $FF, $EE, $00, $10, $FF, $EE */;
    /* data: db $00, $10, $FF, $EE, $00, $10, $FF, $EE, $00, $10, $FF, $EE, $00, $10, $FF, $EE */;
    /* data: db $00, $10, $FF, $EE, $00, $10, $FF, $EE, $00, $10, $FF, $EC, $00, $10, $FF, $EC */;
    /* data: db $00, $10, $FF, $EC, $00, $10, $FF, $EC, $00, $10, $FF, $EC, $00, $10, $FF, $EC */;
    /* data: db $00, $10, $FF, $EC, $00, $10, $FF, $EC */;
}

void Data_01F_5EB1(void) {
    /* data: db $00, $19, $00, $80, $01 */;
}

void Data_01F_5EB6(void) {
    /* data: db $00, $A0, $00, $80, $01 */;
}

void Data_01F_5EBB(void) {
    /* data: db $00, $50, $00, $80, $01 */;
}

void Data_01F_5EC0(void) {
    /* data: db $00, $20, $00, $80, $01 */;
}

void Data_01F_5EC5(void) {
    /* data: db $80, $00, $60, $A0, $86, $02 */;
}

void Data_01F_5ECB(void) {
    /* data: db $80, $00, $40, $20, $87, $02 */;
}

void Data_01F_5ED1(void) {
    /* data: db $80, $00, $60, $20, $87, $02 */;
}

void func_01F_5ED7(void) {
    gb.regs.a = 0x0E;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_6365();
    gb.regs.hl = 0x5F13;
    func_01F_7ABD();
    label_01F_62F3(); return;
}

void func_01F_5EE8(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_5EF5(); return; };
}

void jr_01F_5EEF(void) {
    gb.regs.hl = 0x5F0F;
    label_01F_7AEB(); return;
}

void jr_01F_5EF5(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto jr_01F_5EF5_jr_5F04;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_5EEF(); return;
  jr_01F_5EF5_jr_5F04:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x5F13;
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
}

void Data_01F_5F0F(void) {
    /* data: db $00, $60, $FF, $00 */;
}

void Data_01F_5F13(void) {
    /* data: db $80, $00, $20, $40, $86, $00 */;
}

void func_01F_5F19(void) {
    func_01F_6379();
    gb.regs.hl = 0x5F72;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_5F25(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x13);
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_01F_5F3F(); return; };
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) { jr_01F_5F46(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { jr_01F_5F4A(); return; };
}

void jr_01F_5F39(void) {
    gb.regs.hl = 0x5F4E;
    label_01F_7AEB(); return;
}

void jr_01F_5F3F(void) {
    gb.regs.a = 0x20;
}

void jr_01F_5F41(void) {
    gb_write(0xFF1C, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.bc);
    jr_01F_5F39(); return;
}

void jr_01F_5F46(void) {
    gb.regs.a = 0x40;
    jr_01F_5F41(); return;
}

void jr_01F_5F4A(void) {
    gb.regs.a = 0x60;
    jr_01F_5F41(); return;
}

void Data_01F_5F4E(void) {
    /* data: db $FF, $F0, $00, $12, $FF, $F0, $00, $12, $FF, $F0, $00, $12, $FF, $E0, $00, $1E */;
    /* data: db $FF, $E0, $00, $1C, $FF, $E0, $00, $1A, $FF, $E0, $00, $18, $FF, $E0, $00, $12 */;
    /* data: db $FF, $E0, $00, $14 */;
}

void Data_01F_5F72(void) {
    /* data: db $80, $00, $40, $30, $87, $01 */;
}

void func_01F_5F78(void) {
    gb.regs.a = gb_read(0xD371);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01F_6385(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { label_01F_6385(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { label_01F_6385(); return; };
    func_01F_6360();
    gb.regs.hl = 0x5FAE;
    label_01F_62F8(); return;
}

void func_01F_5F93(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { label_01F_632D(); return; };
    gb.regs.hl = 0x5FA8;
    GetHandlerAddressInTable();
    WriteChannel3AndDE(); return;
}

void Data_01F_5FA8(void) {
    /* data: dw Data_01F_5FB4 */;
    /* data: dw Data_01F_5FBA */;
    /* data: dw Data_01F_5FB4 */;
}

void Data_01F_5FAE(void) {
    /* data: db $80, $FD, $40, $20, $C0, $02 */;
}

void Data_01F_5FB4(void) {
    /* data: db $80, $FD, $40, $80, $C1, $02 */;
}

void Data_01F_5FBA(void) {
    /* data: db $80, $FD, $40, $00, $C2, $02 */;
}

void func_01F_5FC0(void) {
    func_01F_6379();
    gb.regs.hl = 0x5FEC;
    label_01F_62F3(); return;
}

void func_01F_5FC9(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { label_01F_632D(); return; };
    gb.regs.hl = 0x5FDE;
    GetHandlerAddressInTable();
    WriteChannel3AndDE(); return;
}

void Data_01F_5FDE(void) {
    /* data: dw Data_01F_6004 */;
    /* data: dw Data_01F_5FF2 */;
    /* data: dw Data_01F_600A */;
    /* data: dw Data_01F_5FF8 */;
    /* data: dw Data_01F_6010 */;
    /* data: dw Data_01F_5FFE */;
    /* data: dw Data_01F_6016 */;
}

void Data_01F_5FEC(void) {
    /* data: db $80, $EA, $20, $62, $C7, $06 */;
}

void Data_01F_5FF2(void) {
    /* data: db $80, $EA, $20, $74, $C7, $06 */;
}

void Data_01F_5FF8(void) {
    /* data: db $80, $EA, $20, $7B, $C7, $06 */;
}

void Data_01F_5FFE(void) {
    /* data: db $80, $EA, $20, $A7, $C7, $06 */;
}

void Data_01F_6004(void) {
    /* data: db $80, $EA, $60, $62, $C7, $06 */;
}

void Data_01F_600A(void) {
    /* data: db $80, $EA, $60, $74, $C7, $06 */;
}

void Data_01F_6010(void) {
    /* data: db $80, $EA, $60, $7B, $C7, $06 */;
}

void Data_01F_6016(void) {
    /* data: db $80, $EA, $60, $A7, $C7, $06 */;
}

void func_01F_601C(void) {
    gb.regs.a = 4;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_6379();
    gb.regs.hl = 0x6060;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_602D(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto func_01F_602D_jr_603A;
    gb.regs.hl = 0x6054;
    label_01F_7AEB(); return;
  func_01F_602D_jr_603A:;
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_01F_604F(); return; };
    gb.regs.hl = 0x6066;
}

void jr_01F_6047(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    func_01F_7ABD();
    WriteChannel3AndDE(); return;
}

void jr_01F_604F(void) {
    gb.regs.hl = 0x6060;
    jr_01F_6047(); return;
}

void Data_01F_6054(void) {
    /* data: db $00, $06, $00, $04, $00, $02, $FF, $F8, $FF, $F0, $FF, $E8 */;
}

void Data_01F_6060(void) {
    /* data: db $80, $00, $20, $60, $87, $01 */;
}

void Data_01F_6066(void) {
    /* data: db $80, $00, $60, $60, $87, $01 */;
}

void func_01F_606C(void) {
    return;
}

void func_01F_606D(void) {
    return;
}

void func_01F_606E(void) {
    gb.regs.a = 7;
    gb_write(0xD3DC, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xD3BE, gb.regs.a);
    func_01F_6360();
    gb.regs.hl = 0x60BE;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_6084(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { label_01F_60A6(); return; };
}

void jr_01F_608A(void) {
    gb.regs.a = gb_read(0xD3DC);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { jr_01F_609E(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { jr_01F_60A2(); return; };
    gb.regs.a = 3;
}

void jr_01F_6097(void) {
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x60B8;
    label_01F_7AEB(); return;
}

void jr_01F_609E(void) {
    gb.regs.a = 1;
    jr_01F_6097(); return;
}

void jr_01F_60A2(void) {
    gb.regs.a = 2;
    jr_01F_6097(); return;
}

void label_01F_60A6(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3DC;
    DecrementValueAtDE();
    gb.regs.de = gb_pop16();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    gb.regs.a = 0x40;
    gb_write(0xD3BE, gb.regs.a);
    jr_01F_608A(); return;
}

void Data_01F_60B8(void) {
    /* data: db $FF, $FF, $FF, $FE, $FF, $FB */;
}

void Data_01F_60BE(void) {
    /* data: db $80, $00, $20, $FF, $87, $01 */;
}

void Data_01F_60C4(void) {
    /* data: db $06, $C6, $06, $C6, $06, $C6, $06, $C6 */;
    /* data: db $89, $BD, $ED, $B9, $87, $53, $23, $57 */;
}

void func_01F_60D4(void) {
    func_01F_7B5C();
    gb.regs.hl = 0x60C4;
    func_01F_635A();
    gb.regs.a = 5;
    gb_write(0xD3BE, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3DD, gb.regs.a);
    gb.regs.hl = 0x6147;
    func_01F_7ABD();
    label_01F_62F3(); return;
}

void func_01F_60EF(void) {
    func_01F_7AA6();
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01F_6115(); return; };
    gb.regs.a = gb_read(0xD3DD);
    alu_cp8(gb.regs.a, 0x11);
    if (GET_FLAG_Z()) { jr_01F_610D(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) { jr_01F_6111(); return; };
    gb.regs.a = 1;
}

void jr_01F_6103(void) {
    gb.regs.bc = 0xD396;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x613D;
    label_01F_7AEB(); return;
}

void jr_01F_610D(void) {
    gb.regs.a = 5;
    jr_01F_6103(); return;
}

void jr_01F_6111(void) {
    gb.regs.a = 3;
    jr_01F_6103(); return;
}

void jr_01F_6115(void) {
    gb_push16(gb.regs.bc);
    gb.regs.bc = 0xD3DD;
    IncrementValueAtBC();
    gb.regs.bc = gb_pop16();
    alu_cp8(gb.regs.a, 0x12);
    if (GET_FLAG_Z()) { jr_01F_6135(); return; };
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(0xD3BE, gb.regs.a);
    gb.regs.a = gb_read(0xD3DD);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_C()) goto jr_01F_6115_jr_6131;
    gb.regs.a = 2;
    jr_01F_6103(); return;
  jr_01F_6115_jr_6131:;
    gb.regs.a = 4;
    jr_01F_6103(); return;
}

void jr_01F_6135(void) {
    gb.regs.a = 0x59;
    gb_write(0xD368, gb.regs.a);
    label_01F_6327(); return;
}

void Data_01F_613D(void) {
    /* data: db $FF, $F4, $00, $32, $FF, $F0, $00, $70, $FF, $E8 */;
}

void Data_01F_6147(void) {
    /* data: db $80, $00, $40, $A0, $87, $01 */;
}

void func_01F_614D(void) {
    func_01F_6360();
    gb.regs.a = 3;
    gb_write(0xD3DE, gb.regs.a);
    gb.regs.a = 0x90;
    gb_write(0xD3BE, gb.regs.a);
    gb.regs.hl = 0x619C;
    func_01F_7ABD();
    label_01F_62F8(); return;
}

void func_01F_6163(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { jr_01F_6184(); return; };
}

void jr_01F_6168(void) {
    gb.regs.a = gb_read(0xD3DE);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_617C(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_01F_6180(); return; };
    gb.regs.a = 1;
}

void jr_01F_6175(void) {
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x6196;
    label_01F_7AEB(); return;
}

void jr_01F_617C(void) {
    gb.regs.a = 3;
    jr_01F_6175(); return;
}

void jr_01F_6180(void) {
    gb.regs.a = 2;
    jr_01F_6175(); return;
}

void jr_01F_6184(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3DE;
    DecrementValueAtDE();
    gb.regs.de = gb_pop16();
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    gb.regs.a = 0x90;
    gb_write(0xD3BE, gb.regs.a);
    jr_01F_6168(); return;
}

void Data_01F_6196(void) {
    /* data: db $00, $01, $00, $02, $00, $03 */;
}

void Data_01F_619C(void) {
    /* data: db $80, $00, $60, $80, $84, $02 */;
}

void func_01F_61A2(void) {
    gb.regs.a = 7;
    gb_write(0xD3BE, gb.regs.a);
    gb.regs.a = gb_read(0xD370);
    gb_write(0xD371, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xD3C8, gb.regs.a);
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD392, gb.regs.a);
    gb_write(0xD396, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    gb.regs.hl = 0x6354;
    WriteChannel3AndDE();
    gb.regs.hl = 0x6217;
    func_01F_7AD0();
    WriteChannel2AndDE(); return;
}

void func_01F_61CF(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { jr_01F_61E0(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { jr_01F_61E8(); return; };
}

void jr_01F_61DA(void) {
    gb.regs.hl = 0x6205;
    func_01F_7B11(); return;
}

void jr_01F_61E0(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { jr_01F_61ED(); return; };
    gb.regs.a = gb_read(gb.regs.bc);
    jr_01F_61DA(); return;
}

void jr_01F_61E8(void) {
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_61DA(); return;
}

void jr_01F_61ED(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD392, gb.regs.a);
    gb_write(0xD396, gb.regs.a);
    gb_write(0xD371, gb.regs.a);
    gb_write(0xD3C8, gb.regs.a);
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    return;
}

void Data_01F_6205(void) {
    /* data: db $FF, $FF, $FF, $FE, $FF, $FD, $FF, $FC, $FF, $FA, $FF, $F6, $FF, $F2, $FF, $EE */;
    /* data: db $00, $3A */;
}

void Data_01F_6217(void) {
    /* data: db $00, $97, $80, $87, $01 */;
}

void func_01F_621C(void) {
    gb.regs.a = 0x2E;
    gb_write(0xD3BE, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3E1, gb.regs.a);
    func_01F_6360();
    gb.regs.hl = 0x6276;
    func_01F_7ABD();
    label_01F_62F3(); return;
}

void func_01F_6231(void) {
    func_01F_7AA6();
    if (GET_FLAG_Z()) { jr_01F_624E(); return; };
}

void jr_01F_6236(void) {
    gb.regs.a = gb_read(0xD3E1);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01F_6262(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_01F_6266(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_626A(); return; };
    gb.regs.a = 1;
}

void jr_01F_6247(void) {
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x626E;
    label_01F_7AEB(); return;
}

void jr_01F_624E(void) {
    gb_push16(gb.regs.bc);
    gb.regs.bc = 0xD3E1;
    IncrementValueAtBC();
    gb.regs.bc = gb_pop16();
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    gb.regs.a = 0x2E;
    gb_write(0xD3BE, gb.regs.a);
    jr_01F_6236(); return;
}

void jr_01F_6262(void) {
    gb.regs.a = 2;
    jr_01F_6247(); return;
}

void jr_01F_6266(void) {
    gb.regs.a = 3;
    jr_01F_6247(); return;
}

void jr_01F_626A(void) {
    gb.regs.a = 4;
    jr_01F_6247(); return;
}

void Data_01F_626E(void) {
    /* data: db $00, $08, $00, $06, $00, $04, $00, $02 */;
}

void Data_01F_6276(void) {
    /* data: db $80, $00, $40, $30, $84, $01 */;
}

void func_01F_627C(void) {
    func_01F_6365();
    gb.regs.hl = 0x62C9;
    label_01F_62F3(); return;
}

void func_01F_6285(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) { label_01F_6327(); return; };
    gb.regs.hl = 0x62B1;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD396);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { WriteChannel3AndDE(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { WriteChannel3AndDE(); return; };
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { WriteChannel3AndDE(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { WriteChannel3AndDE(); return; };
    WriteChannel3FrequencyAndDE(); return;
}

void Data_01F_62B1(void) {
    /* data: dw Data_01F_62CF */;
    /* data: dw Data_01F_62D5 */;
    /* data: dw Data_01F_62E7 */;
    /* data: dw Data_01F_62EA */;
    /* data: dw Data_01F_62ED */;
    /* data: dw Data_01F_62F0 */;
    /* data: dw Data_01F_62DB */;
    /* data: dw Data_01F_62ED */;
    /* data: dw Data_01F_62F0 */;
    /* data: dw Data_01F_62E1 */;
    /* data: dw Data_01F_62ED */;
    /* data: dw Data_01F_62F0 */;
}

void Data_01F_62C9(void) {
    /* data: db $80, $F2, $60, $DF, $87, $02 */;
}

void Data_01F_62CF(void) {
    /* data: db $80, $F2, $40, $DF, $87, $02 */;
}

void Data_01F_62D5(void) {
    /* data: db $80, $F2, $20, $DF, $87, $03 */;
}

void Data_01F_62DB(void) {
    /* data: db $80, $F2, $40, $A2, $87, $03 */;
}

void Data_01F_62E1(void) {
    /* data: db $80, $F2, $60, $A2, $87, $03 */;
}

void Data_01F_62E7(void) {
    /* data: db $BE, $87, $03 */;
}

void Data_01F_62EA(void) {
    /* data: db $A2, $87, $03 */;
}

void Data_01F_62ED(void) {
    /* data: db $83, $87, $03 */;
}

void Data_01F_62F0(void) {
    /* data: db $A7, $C7, $03 */;
}

void label_01F_62F3(void) {
    gb.regs.a = 1;
    gb_write(0xD3C8, gb.regs.a);
}

void label_01F_62F8(void) {
    gb.regs.a = gb_read(0xD370);
    gb_write(0xD371, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = wMusicChannel3_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.hl = gb_pop16();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD392, gb.regs.a);
    gb_write(0xD396, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    WriteChannel3AndDE(); return;
}

void Data_01F_6311(void) {
    /* data: db $80, $00, $00, $00, $01, $01, $00, $00 */;
    /* data: db $00, $00, $FF, $FF, $FF, $FF, $00, $00 */;
    /* data: db $00, $00, $FF, $FF, $FF, $FF */;
}

void label_01F_6327(void) {
    gb.regs.hl = 0x6354;
    WriteChannel3AndDE();
}

void label_01F_632D(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD392, gb.regs.a);
    gb_write(0xD396, gb.regs.a);
    gb_write(0xD371, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    gb_write(0xD3C8, gb.regs.a);
    gb.regs.hl = wMusicChannel3_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.a = 1;
    gb_write(0xD3E7, gb.regs.a);
    return;
}

void WriteWavePattern(void) {
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x30;
  WriteWavePattern_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto WriteWavePattern_loop;
    gb.regs.bc = gb_pop16();
    return;
}

void Data_01F_6354(void) {
    /* data: db $80, $00, $00, $00, $81, $01 */;
}

void func_01F_635A(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    WriteWavePattern(); return;
}

void func_01F_6360(void) {
    gb.regs.hl = 0x63AC;
    func_01F_635A(); return;
}

void func_01F_6365(void) {
    gb.regs.hl = 0x63BC;
    func_01F_635A(); return;
}

void func_01F_636A(void) {
    gb.regs.hl = 0x639C;
    func_01F_635A(); return;
}

void func_01F_636F(void) {
    gb.regs.hl = 0x63CC;
    func_01F_635A(); return;
}

void func_01F_6374(void) {
    gb.regs.hl = 0x63DC;
    func_01F_635A(); return;
}

void func_01F_6379(void) {
    gb.regs.hl = 0x638C;
    func_01F_635A(); return;
}

void WriteChannel3FrequencyAndDE(void) {
    gb.regs.c = 0x1D;
    gb.regs.b = 2;
    WriteIOAndDE(); return;
}

void label_01F_6385(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD370, gb.regs.a);
    PlayActiveWaveSfx(); return;
}

void Data_01F_638C(void) {
    /* data: db $8C, $EF, $FE, $C8, $84, $21, $12, $48, $8C, $EF, $FE, $C8, $84, $21, $12, $48 */;
}

void Data_01F_639C(void) {
    /* data: db $00, $22, $44, $66, $88, $AA, $CC, $CC, $00, $22, $44, $66, $88, $AA, $CC, $CC */;
}

void Data_01F_63AC(void) {
    /* data: db $0F, $0F, $1F, $1F, $2F, $2F, $3F, $3F, $40, $40, $50, $50, $60, $60, $70, $70 */;
}

void Data_01F_63BC(void) {
    /* data: db $0C, $0C, $00, $22, $44, $88, $AA, $CC, $EE, $00, $6C, $60, $00, $6C, $60, $00 */;
}

void Data_01F_63CC(void) {
    /* data: db $FF, $FF, $EE, $DD, $EE, $DD, $EE, $FF, $FF, $C9, $63, $21, $00, $00, $04, $8C */;
}

void Data_01F_63DC(void) {
    /* data: db $01, $23, $45, $67, $89, $AC, $EE, $EE, $FE, $DC, $BA, $98, $76, $54, $32, $10 */;
}

void NoiseSfxHandlersTable1(void) {
    /* data: dw func_01F_651E */;
    /* data: dw func_01F_653D */;
    /* data: dw func_01F_6587 */;
    /* data: dw func_01F_65EF */;
    /* data: dw func_01F_661F */;
    /* data: dw func_01F_666D */;
    /* data: dw func_01F_66A2 */;
    /* data: dw func_01F_66E0 */;
    /* data: dw func_01F_6726 */;
    /* data: dw func_01F_6760 */;
    /* data: dw func_01F_6792 */;
    /* data: dw func_01F_67B4 */;
    /* data: dw func_01F_67F5 */;
    /* data: dw func_01F_682E */;
    /* data: dw func_01F_685C */;
    /* data: dw func_01F_6891 */;
    /* data: dw func_01F_68F0 */;
    /* data: dw func_01F_6902 */;
    /* data: dw func_01F_693F */;
    /* data: dw func_01F_69C9 */;
    /* data: dw func_01F_6A0F */;
    /* data: dw func_01F_6A4E */;
    /* data: dw func_01F_6A80 */;
    /* data: dw func_01F_6AA2 */;
    /* data: dw func_01F_6AEC */;
    /* data: dw func_01F_6B32 */;
    /* data: dw func_01F_6B97 */;
    /* data: dw func_01F_6C13 */;
    /* data: dw func_01F_6C4C */;
    /* data: dw func_01F_6C97 */;
    /* data: dw func_01F_6CC4 */;
    /* data: dw func_01F_6D0B */;
    /* data: dw func_01F_7A01 */;
    /* data: dw func_01F_6D35 */;
    /* data: dw func_01F_6D73 */;
    /* data: dw func_01F_6D95 */;
    /* data: dw func_01F_6DB7 */;
    /* data: dw func_01F_6E4E */;
    /* data: dw func_01F_6E87 */;
    /* data: dw func_01F_6EDD */;
    /* data: dw func_01F_6F31 */;
    /* data: dw func_01F_6F78 */;
    /* data: dw func_01F_6FDD */;
    /* data: dw func_01F_6FEF */;
    /* data: dw func_01F_7078 */;
    /* data: dw func_01F_70C4 */;
    /* data: dw func_01F_7114 */;
    /* data: dw func_01F_7136 */;
    /* data: dw func_01F_71C7 */;
    /* data: dw func_01F_723E */;
    /* data: dw func_01F_7295 */;
    /* data: dw func_01F_72E4 */;
    /* data: dw func_01F_748B */;
    /* data: dw func_01F_7590 */;
    /* data: dw func_01F_75DA */;
    /* data: dw func_01F_76A1 */;
    /* data: dw func_01F_760A */;
    /* data: dw func_01F_771C */;
    /* data: dw func_01F_776E */;
    /* data: dw func_01F_77C0 */;
    /* data: dw func_01F_77E6 */;
    /* data: dw func_01F_7905 */;
    /* data: dw func_01F_795B */;
    /* data: dw func_01F_7B1B */;
}

void NoiseSfxHandlersTable2(void) {
    /* data: dw func_01F_6529 */;
    /* data: dw func_01F_6543 */;
    /* data: dw func_01F_658D */;
    /* data: dw func_01F_65F5 */;
    /* data: dw func_01F_663C */;
    /* data: dw func_01F_6673 */;
    /* data: dw func_01F_66C4 */;
    /* data: dw func_01F_66F3 */;
    /* data: dw func_01F_672C */;
    /* data: dw func_01F_6766 */;
    /* data: dw func_01F_6798 */;
    /* data: dw func_01F_67C7 */;
    /* data: dw func_01F_6800 */;
    /* data: dw func_01F_6834 */;
    /* data: dw func_01F_6869 */;
    /* data: dw func_01F_689C */;
    /* data: dw func_01F_68F6 */;
    /* data: dw func_01F_6908 */;
    /* data: dw func_01F_6945 */;
    /* data: dw func_01F_69CF */;
    /* data: dw func_01F_6A15 */;
    /* data: dw func_01F_6A5C */;
    /* data: dw func_01F_6A86 */;
    /* data: dw func_01F_6AA8 */;
    /* data: dw func_01F_6AF2 */;
    /* data: dw func_01F_6B38 */;
    /* data: dw func_01F_6BAF */;
    /* data: dw func_01F_6C1E */;
    /* data: dw func_01F_6C57 */;
    /* data: dw func_01F_6CA4 */;
    /* data: dw func_01F_6CCF */;
    /* data: dw func_01F_6D11 */;
    /* data: dw func_01F_7A01 */;
    /* data: dw func_01F_6D3B */;
    /* data: dw func_01F_6D79 */;
    /* data: dw func_01F_6D9B */;
    /* data: dw func_01F_6DBD */;
    /* data: dw func_01F_6E59 */;
    /* data: dw func_01F_6E8D */;
    /* data: dw func_01F_6EE8 */;
    /* data: dw func_01F_6F3C */;
    /* data: dw func_01F_6F83 */;
    /* data: dw func_01F_6FE3 */;
    /* data: dw func_01F_6FF5 */;
    /* data: dw func_01F_707E */;
    /* data: dw func_01F_70CF */;
    /* data: dw func_01F_711A */;
    /* data: dw func_01F_713C */;
    /* data: dw func_01F_71CD */;
    /* data: dw func_01F_7244 */;
    /* data: dw func_01F_729B */;
    /* data: dw func_01F_72F4 */;
    /* data: dw func_01F_7496 */;
    /* data: dw func_01F_759B */;
    /* data: dw func_01F_75EB */;
    /* data: dw func_01F_76A7 */;
    /* data: dw func_01F_7610 */;
    /* data: dw func_01F_7730 */;
    /* data: dw func_01F_7790 */;
    /* data: dw func_01F_7A07 */;
    /* data: dw func_01F_77EC */;
    /* data: dw func_01F_790B */;
    /* data: dw func_01F_7961 */;
    /* data: dw func_01F_7B21 */;
}

void PlayActiveNoiseSfx(void) {
    gb.regs.hl = 0xD378;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PlayActiveNoiseSfx_jr_6500;
    gb.regs.a = gb_read(0xD3C9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_7A2C(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0x6300;
    jr_01F_6508(); return;
  PlayActiveNoiseSfx_jr_6500:;
    gb.regs.hl++;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_01F_6512(); return; };
    gb.regs.hl = 0x6380;
}

void jr_01F_6508(void) {
    GetHandlerAddressInTable();
  jr_01F_6508_jr_650B:;
    gb.regs.de = 0xD393;
    gb.regs.bc = 0xD398;
    /* jp hl - dynamic dispatch */;
}

void jr_01F_6512(void) {
    gb.regs.a = gb_read(0xC50E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 0x1E;
    gb_write(0xD378, gb.regs.a);
    PlayActiveNoiseSfx(); return;
}

void func_01F_651E(void) {
    gb.regs.a = 1;
    gb_write(0xD379, gb.regs.a);
    gb.regs.hl = 0x6533;
    WriteChannel4AndDE(); return;
}

void func_01F_6529(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD379, gb.regs.a);
    gb.regs.hl = 0x6538;
    WriteChannel4AndDE(); return;
}

void Data_01F_6533(void) {
    /* data: db $3B, $80, $07, $C0, $01 */;
}

void Data_01F_6538(void) {
    /* data: db $00, $42, $02, $C0, $04 */;
}

void func_01F_653D(void) {
    gb.regs.hl = 0x6564;
    label_01F_79E9(); return;
}

void func_01F_6543(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6558;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_6558(void) {
    /* data: dw Data_01F_6569 */;
    /* data: dw Data_01F_656E */;
    /* data: dw Data_01F_6573 */;
    /* data: dw Data_01F_6578 */;
    /* data: dw Data_01F_657D */;
    /* data: dw Data_01F_6582 */;
}

void Data_01F_6564(void) {
    /* data: db $00, $40, $21, $80, $01 */;
}

void Data_01F_6569(void) {
    /* data: db $00, $50, $22, $80, $01 */;
}

void Data_01F_656E(void) {
    /* data: db $00, $60, $23, $80, $01 */;
}

void Data_01F_6573(void) {
    /* data: db $00, $70, $24, $80, $01 */;
}

void Data_01F_6578(void) {
    /* data: db $00, $80, $25, $80, $01 */;
}

void Data_01F_657D(void) {
    /* data: db $00, $90, $26, $80, $01 */;
}

void Data_01F_6582(void) {
    /* data: db $3C, $A0, $27, $C0, $01 */;
}

void func_01F_6587(void) {
    gb.regs.hl = 0x65C2;
    label_01F_79E9(); return;
}

void func_01F_658D(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x11);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x65A2;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_65A2(void) {
    /* data: dw Data_01F_65C7 */;
    /* data: dw Data_01F_65CC */;
    /* data: dw Data_01F_65D1 */;
    /* data: dw Data_01F_65D6 */;
    /* data: dw Data_01F_65DB */;
    /* data: dw Data_01F_65E0 */;
    /* data: dw Data_01F_65E5 */;
    /* data: dw Data_01F_65EA */;
    /* data: dw Data_01F_65E5 */;
    /* data: dw Data_01F_65E0 */;
    /* data: dw Data_01F_65DB */;
    /* data: dw Data_01F_65D6 */;
    /* data: dw Data_01F_65D1 */;
    /* data: dw Data_01F_65CC */;
    /* data: dw Data_01F_65C7 */;
    /* data: dw Data_01F_65C2 */;
}

void Data_01F_65C2(void) {
    /* data: db $37, $10, $04, $C0, $02 */;
}

void Data_01F_65C7(void) {
    /* data: db $00, $20, $06, $80, $02 */;
}

void Data_01F_65CC(void) {
    /* data: db $00, $30, $14, $80, $02 */;
}

void Data_01F_65D1(void) {
    /* data: db $00, $40, $16, $80, $02 */;
}

void Data_01F_65D6(void) {
    /* data: db $00, $50, $24, $80, $02 */;
}

void Data_01F_65DB(void) {
    /* data: db $00, $60, $26, $80, $02 */;
}

void Data_01F_65E0(void) {
    /* data: db $00, $70, $34, $80, $02 */;
}

void Data_01F_65E5(void) {
    /* data: db $00, $80, $36, $80, $02 */;
}

void Data_01F_65EA(void) {
    /* data: db $00, $90, $44, $80, $02 */;
}

void func_01F_65EF(void) {
    gb.regs.hl = 0x6610;
    label_01F_79E9(); return;
}

void func_01F_65F5(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x660A;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_660A(void) {
    /* data: dw Data_01F_6615 */;
    /* data: dw Data_01F_6610 */;
    /* data: dw Data_01F_661A */;
}

void Data_01F_6610(void) {
    /* data: db $3B, $C0, $3E, $C0, $01 */;
}

void Data_01F_6615(void) {
    /* data: db $33, $F0, $6E, $C0, $06 */;
}

void Data_01F_661A(void) {
    /* data: db $36, $70, $4E, $C0, $03 */;
}

void func_01F_661F(void) {
    gb.regs.a = gb_read(0xD379);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
  func_01F_661F_jr_6627:;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    alu_cp8(gb.regs.a, 0x13);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    gb.regs.hl = 0x6659;
    label_01F_79E9(); return;
}

void func_01F_663C(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6651;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_6651(void) {
    /* data: dw Data_01F_665E */;
    /* data: dw Data_01F_6663 */;
    /* data: dw Data_01F_6668 */;
    /* data: dw Data_01F_6668 */;
}

void Data_01F_6659(void) {
    /* data: db $30, $49, $60, $C0, $06 */;
}

void Data_01F_665E(void) {
    /* data: db $30, $49, $40, $C0, $06 */;
}

void Data_01F_6663(void) {
    /* data: db $30, $49, $20, $C0, $06 */;
}

void Data_01F_6668(void) {
    /* data: db $30, $49, $00, $C0, $06 */;
}

void func_01F_666D(void) {
    gb.regs.hl = 0x668E;
    label_01F_79E9(); return;
}

void func_01F_6673(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6688;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_6688(void) {
    /* data: dw Data_01F_6693 */;
    /* data: dw Data_01F_6698 */;
    /* data: dw Data_01F_669D */;
}

void Data_01F_668E(void) {
    /* data: db $00, $61, $24, $80, $0C */;
}

void Data_01F_6693(void) {
    /* data: db $00, $51, $25, $80, $0C */;
}

void Data_01F_6698(void) {
    /* data: db $00, $32, $27, $80, $0C */;
}

void Data_01F_669D(void) {
    /* data: db $00, $22, $34, $80, $0C */;
}

void func_01F_66A2(void) {
    gb.regs.a = gb_read(0xD379);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    alu_cp8(gb.regs.a, 0x13);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    gb.regs.hl = 0x66D6;
    label_01F_79E9(); return;
}

void func_01F_66C4(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x66DB;
    WriteChannel4AndDE(); return;
}

void Data_01F_66D6(void) {
    /* data: db $3B, $F0, $20, $C0, $02 */;
}

void Data_01F_66DB(void) {
    /* data: db $39, $40, $20, $C0, $08 */;
}

void func_01F_66E0(void) {
    gb.regs.a = gb_read(0xD379);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    gb.regs.a = 3;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x6718;
    label_01F_79E9(); return;
}

void func_01F_66F3(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_01F_6707(); return; };
}

void jr_01F_66FE(void) {
    gb.regs.hl = 0x6712;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void jr_01F_6707(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_66FE(); return;
}

void Data_01F_6712(void) {
    /* data: dw Data_01F_671D */;
    /* data: dw Data_01F_6720 */;
    /* data: dw Data_01F_6723 */;
}

void Data_01F_6718(void) {
    /* data: db $00, $A3, $3C, $80, $03 */;
}

void Data_01F_671D(void) {
    /* data: db $3D, $00, $03 */;
}

void Data_01F_6720(void) {
    /* data: db $3E, $00, $03 */;
}

void Data_01F_6723(void) {
    /* data: db $3F, $00, $03 */;
}

void func_01F_6726(void) {
    gb.regs.hl = 0x674F;
    label_01F_79E9(); return;
}

void func_01F_672C(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 0x33;
    gb_write(0xFF20, gb.regs.a);
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6745;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void Data_01F_6745(void) {
    /* data: dw Data_01F_6754 */;
    /* data: dw Data_01F_6757 */;
    /* data: dw Data_01F_675A */;
    /* data: dw Data_01F_675D */;
    /* data: dw Data_01F_675D */;
}

void Data_01F_674F(void) {
    /* data: db $33, $A0, $72, $C0, $04 */;
}

void Data_01F_6754(void) {
    /* data: db $52, $C0, $04 */;
}

void Data_01F_6757(void) {
    /* data: db $50, $C0, $04 */;
}

void Data_01F_675A(void) {
    /* data: db $30, $C0, $04 */;
}

void Data_01F_675D(void) {
    /* data: db $10, $C0, $04 */;
}

void func_01F_6760(void) {
    gb.regs.hl = 0x6783;
    label_01F_79E9(); return;
}

void func_01F_6766(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x677B;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_677B(void) {
    /* data: dw Data_01F_6788 */;
    /* data: dw Data_01F_678D */;
    /* data: dw Data_01F_6788 */;
    /* data: dw Data_01F_6783 */;
}

void Data_01F_6783(void) {
    /* data: db $37, $40, $47, $C0, $01 */;
}

void Data_01F_6788(void) {
    /* data: db $00, $60, $27, $80, $02 */;
}

void Data_01F_678D(void) {
    /* data: db $00, $A0, $15, $80, $02 */;
}

void func_01F_6792(void) {
    gb.regs.hl = 0x67AA;
    label_01F_79E9(); return;
}

void func_01F_6798(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x67AF;
    WriteChannel4AndDE(); return;
}

void Data_01F_67AA(void) {
    /* data: db $3C, $C0, $18, $C0, $01 */;
}

void Data_01F_67AF(void) {
    /* data: db $3C, $60, $18, $C0, $02 */;
}

void func_01F_67B4(void) {
    gb.regs.a = gb_read(0xD379);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    gb.regs.hl = 0x67E4;
    label_01F_79E9(); return;
}

void func_01F_67C7(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x67DC;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void Data_01F_67DC(void) {
    /* data: dw Data_01F_67E9 */;
    /* data: dw Data_01F_67EC */;
    /* data: dw Data_01F_67EF */;
    /* data: dw Data_01F_67F2 */;
}

void Data_01F_67E4(void) {
    /* data: db $00, $C6, $6A, $80, $04 */;
}

void Data_01F_67E9(void) {
    /* data: db $6B, $00, $05 */;
}

void Data_01F_67EC(void) {
    /* data: db $6C, $00, $06 */;
}

void Data_01F_67EF(void) {
    /* data: db $6D, $00, $07 */;
}

void Data_01F_67F2(void) {
    /* data: db $6E, $00, $38 */;
}

void func_01F_67F5(void) {
    gb.regs.a = 0x0E;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x6823;
    label_01F_79E9(); return;
}

void func_01F_6800(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_6814(); return; };
}

void jr_01F_680B(void) {
    gb.regs.hl = 0x681F;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void jr_01F_6814(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_680B(); return;
}

void Data_01F_681F(void) {
    /* data: dw Data_01F_6828 */;
    /* data: dw Data_01F_682B */;
}

void Data_01F_6823(void) {
    /* data: db $00, $67, $0F, $80, $02 */;
}

void Data_01F_6828(void) {
    /* data: db $60, $00, $02 */;
}

void Data_01F_682B(void) {
    /* data: db $0F, $00, $02 */;
}

void func_01F_682E(void) {
    gb.regs.hl = 0x684D;
    label_01F_79E9(); return;
}

void func_01F_6834(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6849;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_6849(void) {
    /* data: dw Data_01F_6852 */;
    /* data: dw Data_01F_6857 */;
}

void Data_01F_684D(void) {
    /* data: db $1E, $29, $46, $C0, $10 */;
}

void Data_01F_6852(void) {
    /* data: db $00, $29, $64, $80, $08 */;
}

void Data_01F_6857(void) {
    /* data: db $00, $81, $64, $80, $06 */;
}

void func_01F_685C(void) {
    gb.regs.a = gb_read(0xD379);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_7A2C(); return; };
    gb.regs.hl = 0x6882;
    label_01F_79E9(); return;
}

void func_01F_6869(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x687E;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_687E(void) {
    /* data: dw Data_01F_6887 */;
    /* data: dw Data_01F_688C */;
}

void Data_01F_6882(void) {
    /* data: db $00, $0F, $30, $80, $20 */;
}

void Data_01F_6887(void) {
    /* data: db $00, $60, $03, $80, $30 */;
}

void Data_01F_688C(void) {
    /* data: db $00, $67, $03, $80, $20 */;
}

void func_01F_6891(void) {
    gb.regs.a = 3;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x68D2;
    label_01F_79E9(); return;
}

void func_01F_689C(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto func_01F_689C_jr_68B0;
    gb.regs.hl = 0x68C8;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
  func_01F_689C_jr_68B0:;
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01F_68C3(); return; };
    gb.regs.hl = 0x68E6;
}

void jr_01F_68BD(void) {
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    WriteChannel4AndDE(); return;
}

void jr_01F_68C3(void) {
    gb.regs.hl = 0x68EB;
    jr_01F_68BD(); return;
}

void Data_01F_68C8(void) {
    /* data: dw Data_01F_68D7 */;
    /* data: dw Data_01F_68DA */;
    /* data: dw Data_01F_68DD */;
    /* data: dw Data_01F_68E0 */;
    /* data: dw Data_01F_68E3 */;
}

void Data_01F_68D2(void) {
    /* data: db $00, $E0, $48, $80, $01 */;
}

void Data_01F_68D7(void) {
    /* data: db $4B, $00, $01 */;
}

void Data_01F_68DA(void) {
    /* data: db $5E, $00, $01 */;
}

void Data_01F_68DD(void) {
    /* data: db $5D, $00, $02 */;
}

void Data_01F_68E0(void) {
    /* data: db $6C, $00, $02 */;
}

void Data_01F_68E3(void) {
    /* data: db $6F, $00, $02 */;
}

void Data_01F_68E6(void) {
    /* data: db $00, $70, $4B, $80, $01 */;
}

void Data_01F_68EB(void) {
    /* data: db $00, $20, $4B, $80, $01 */;
}

void func_01F_68F0(void) {
    gb.regs.hl = 0x68FD;
    label_01F_79E9(); return;
}

void func_01F_68F6(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    func_01F_7A01(); return;
}

void Data_01F_68FD(void) {
    /* data: db $00, $F0, $A0, $80, $20 */;
}

void func_01F_6902(void) {
    gb.regs.hl = 0x692B;
    label_01F_79E9(); return;
}

void func_01F_6908(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.hl = 0x691D;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void Data_01F_691D(void) {
    /* data: dw Data_01F_6930 */;
    /* data: dw Data_01F_6933 */;
    /* data: dw Data_01F_6936 */;
    /* data: dw Data_01F_6933 */;
    /* data: dw Data_01F_6930 */;
    /* data: dw Data_01F_6939 */;
    /* data: dw Data_01F_693C */;
}

void Data_01F_692B(void) {
    /* data: db $00, $69, $B8, $80, $02 */;
}

void Data_01F_6930(void) {
    /* data: db $A8, $00, $02 */;
}

void Data_01F_6933(void) {
    /* data: db $98, $00, $02 */;
}

void Data_01F_6936(void) {
    /* data: db $88, $00, $02 */;
}

void Data_01F_6939(void) {
    /* data: db $B8, $00, $02 */;
}

void Data_01F_693C(void) {
    /* data: db $C8, $00, $02 */;
}

void func_01F_693F(void) {
    gb.regs.hl = 0x699C;
    label_01F_79E9(); return;
}

void func_01F_6945(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x1A);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x696A;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD398);
    alu_cp8(gb.regs.a, 0x11);
    if (!GET_FLAG_C()) goto func_01F_6945_jr_6961;
    WriteChannel4AndDE(); return;
  func_01F_6945_jr_6961:;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.a = 0x20;
    gb_write(0xFF21, gb.regs.a);
    func_01F_7A25(); return;
}

void Data_01F_696A(void) {
    /* data: dw Data_01F_69A1 */;
    /* data: dw Data_01F_69A6 */;
    /* data: dw Data_01F_69AB */;
    /* data: dw Data_01F_69B0 */;
    /* data: dw Data_01F_69B5 */;
    /* data: dw Data_01F_69BA */;
    /* data: dw Data_01F_69BF */;
    /* data: dw Data_01F_69C4 */;
    /* data: dw Data_01F_69BF */;
    /* data: dw Data_01F_69BA */;
    /* data: dw Data_01F_69B5 */;
    /* data: dw Data_01F_69B0 */;
    /* data: dw Data_01F_69AB */;
    /* data: dw Data_01F_69A6 */;
    /* data: dw Data_01F_69A1 */;
    /* data: dw Data_01F_699C */;
    /* data: dw Data_01F_69C4 */;
    /* data: dw Data_01F_69BF */;
    /* data: dw Data_01F_69BA */;
    /* data: dw Data_01F_69B5 */;
    /* data: dw Data_01F_69B0 */;
    /* data: dw Data_01F_69AB */;
    /* data: dw Data_01F_69A6 */;
    /* data: dw Data_01F_69A1 */;
    /* data: dw Data_01F_699C */;
}

void Data_01F_699C(void) {
    /* data: db $37, $20, $25, $C0, $01 */;
}

void Data_01F_69A1(void) {
    /* data: db $00, $40, $27, $80, $01 */;
}

void Data_01F_69A6(void) {
    /* data: db $00, $60, $35, $80, $01 */;
}

void Data_01F_69AB(void) {
    /* data: db $00, $80, $37, $80, $01 */;
}

void Data_01F_69B0(void) {
    /* data: db $00, $A0, $4D, $80, $02 */;
}

void Data_01F_69B5(void) {
    /* data: db $00, $B0, $4F, $80, $02 */;
}

void Data_01F_69BA(void) {
    /* data: db $00, $C0, $5D, $80, $02 */;
}

void Data_01F_69BF(void) {
    /* data: db $00, $D0, $5F, $80, $02 */;
}

void Data_01F_69C4(void) {
    /* data: db $00, $E0, $6D, $80, $02 */;
}

void func_01F_69C9(void) {
    gb.regs.hl = 0x69EC;
    label_01F_79E9(); return;
}

void func_01F_69CF(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x69E0;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_69E0(void) {
    /* data: dw Data_01F_69F1 */;
    /* data: dw Data_01F_69F6 */;
    /* data: dw Data_01F_69FB */;
    /* data: dw Data_01F_6A00 */;
    /* data: dw Data_01F_6A05 */;
    /* data: dw Data_01F_6A0A */;
}

void Data_01F_69EC(void) {
    /* data: db $00, $40, $5F, $80, $01 */;
}

void Data_01F_69F1(void) {
    /* data: db $00, $50, $5D, $80, $01 */;
}

void Data_01F_69F6(void) {
    /* data: db $00, $60, $4F, $80, $01 */;
}

void Data_01F_69FB(void) {
    /* data: db $00, $70, $4D, $80, $01 */;
}

void Data_01F_6A00(void) {
    /* data: db $00, $80, $3F, $80, $01 */;
}

void Data_01F_6A05(void) {
    /* data: db $00, $90, $3C, $80, $01 */;
}

void Data_01F_6A0A(void) {
    /* data: db $3C, $A0, $2E, $C0, $01 */;
}

void func_01F_6A0F(void) {
    gb.regs.hl = 0x6A30;
    label_01F_79E9(); return;
}

void func_01F_6A15(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6A26;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_6A26(void) {
    /* data: dw Data_01F_6A35 */;
    /* data: dw Data_01F_6A3A */;
    /* data: dw Data_01F_6A3F */;
    /* data: dw Data_01F_6A44 */;
    /* data: dw Data_01F_6A49 */;
}

void Data_01F_6A30(void) {
    /* data: db $00, $20, $47, $80, $02 */;
}

void Data_01F_6A35(void) {
    /* data: db $00, $40, $37, $80, $01 */;
}

void Data_01F_6A3A(void) {
    /* data: db $00, $60, $27, $80, $01 */;
}

void Data_01F_6A3F(void) {
    /* data: db $00, $80, $17, $80, $01 */;
}

void Data_01F_6A44(void) {
    /* data: db $00, $A0, $07, $80, $01 */;
}

void Data_01F_6A49(void) {
    /* data: db $3C, $C0, $03, $C0, $01 */;
}

void func_01F_6A4E(void) {
    gb.regs.a = gb_read(0xD379);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01F_7A2C(); return; };
    gb.regs.hl = 0x6A71;
    label_01F_79E9(); return;
}

void func_01F_6A5C(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6A6D;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_6A6D(void) {
    /* data: dw Data_01F_6A76 */;
    /* data: dw Data_01F_6A7B */;
}

void Data_01F_6A71(void) {
    /* data: db $00, $29, $68, $80, $10 */;
}

void Data_01F_6A76(void) {
    /* data: db $3C, $C0, $50, $C0, $01 */;
}

void Data_01F_6A7B(void) {
    /* data: db $3C, $C1, $18, $C0, $01 */;
}

void func_01F_6A80(void) {
    gb.regs.hl = 0x6A98;
    label_01F_79E9(); return;
}

void func_01F_6A86(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6A9D;
    WriteChannel4AndDE(); return;
}

void Data_01F_6A98(void) {
    /* data: db $00, $F1, $09, $80, $0E */;
}

void Data_01F_6A9D(void) {
    /* data: db $00, $62, $09, $80, $10 */;
}

void func_01F_6AA2(void) {
    gb.regs.hl = 0x6AC9;
    label_01F_79E9(); return;
}

void func_01F_6AA8(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6ABD;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_6ABD(void) {
    /* data: dw Data_01F_6ACE */;
    /* data: dw Data_01F_6AD3 */;
    /* data: dw Data_01F_6AD8 */;
    /* data: dw Data_01F_6ADD */;
    /* data: dw Data_01F_6AE2 */;
    /* data: dw Data_01F_6AE7 */;
}

void Data_01F_6AC9(void) {
    /* data: db $00, $20, $11, $80, $01 */;
}

void Data_01F_6ACE(void) {
    /* data: db $00, $40, $21, $80, $01 */;
}

void Data_01F_6AD3(void) {
    /* data: db $00, $60, $39, $80, $01 */;
}

void Data_01F_6AD8(void) {
    /* data: db $00, $80, $49, $80, $01 */;
}

void Data_01F_6ADD(void) {
    /* data: db $00, $A0, $4B, $80, $01 */;
}

void Data_01F_6AE2(void) {
    /* data: db $00, $C0, $4D, $80, $01 */;
}

void Data_01F_6AE7(void) {
    /* data: db $3C, $E0, $4F, $C0, $01 */;
}

void func_01F_6AEC(void) {
    gb.regs.hl = 0x6B1B;
    label_01F_79E9(); return;
}

void func_01F_6AF2(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6B07;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void Data_01F_6B07(void) {
    /* data: dw Data_01F_6B20 */;
    /* data: dw Data_01F_6B23 */;
    /* data: dw Data_01F_6B26 */;
    /* data: dw Data_01F_6B29 */;
    /* data: dw Data_01F_6B2C */;
    /* data: dw Data_01F_6B29 */;
    /* data: dw Data_01F_6B26 */;
    /* data: dw Data_01F_6B23 */;
    /* data: dw Data_01F_6B20 */;
    /* data: dw Data_01F_6B2F */;
}

void Data_01F_6B1B(void) {
    /* data: db $00, $67, $2C, $80, $01 */;
}

void Data_01F_6B20(void) {
    /* data: db $3C, $00, $01 */;
}

void Data_01F_6B23(void) {
    /* data: db $4C, $00, $01 */;
}

void Data_01F_6B26(void) {
    /* data: db $5C, $00, $01 */;
}

void Data_01F_6B29(void) {
    /* data: db $6C, $00, $01 */;
}

void Data_01F_6B2C(void) {
    /* data: db $7C, $00, $01 */;
}

void Data_01F_6B2F(void) {
    /* data: db $09, $80, $30 */;
}

void func_01F_6B32(void) {
    gb.regs.hl = 0x6B77;
    func_01F_79E4(); return;
}

void func_01F_6B38(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x16);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6B4D;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void Data_01F_6B4D(void) {
    /* data: dw Data_01F_6B7C */;
    /* data: dw Data_01F_6B7F */;
    /* data: dw Data_01F_6B82 */;
    /* data: dw Data_01F_6B85 */;
    /* data: dw Data_01F_6B88 */;
    /* data: dw Data_01F_6B85 */;
    /* data: dw Data_01F_6B82 */;
    /* data: dw Data_01F_6B7F */;
    /* data: dw Data_01F_6B82 */;
    /* data: dw Data_01F_6B85 */;
    /* data: dw Data_01F_6B88 */;
    /* data: dw Data_01F_6B8B */;
    /* data: dw Data_01F_6B8E */;
    /* data: dw Data_01F_6B8B */;
    /* data: dw Data_01F_6B88 */;
    /* data: dw Data_01F_6B85 */;
    /* data: dw Data_01F_6B88 */;
    /* data: dw Data_01F_6B8B */;
    /* data: dw Data_01F_6B8E */;
    /* data: dw Data_01F_6B91 */;
    /* data: dw Data_01F_6B94 */;
}

void Data_01F_6B77(void) {
    /* data: db $00, $F7, $3D, $80, $04 */;
}

void Data_01F_6B7C(void) {
    /* data: db $60, $00, $04 */;
}

void Data_01F_6B7F(void) {
    /* data: db $61, $00, $04 */;
}

void Data_01F_6B82(void) {
    /* data: db $62, $00, $04 */;
}

void Data_01F_6B85(void) {
    /* data: db $63, $00, $04 */;
}

void Data_01F_6B88(void) {
    /* data: db $64, $00, $04 */;
}

void Data_01F_6B8B(void) {
    /* data: db $65, $00, $04 */;
}

void Data_01F_6B8E(void) {
    /* data: db $66, $00, $04 */;
}

void Data_01F_6B91(void) {
    /* data: db $67, $00, $04 */;
}

void Data_01F_6B94(void) {
    /* data: db $74, $00, $28 */;
}

void func_01F_6B97(void) {
    gb.regs.a = gb_read(0xD379);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_7A2C(); return; };
    gb.regs.a = gb_read(0xD3D6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_01F_6BAA(); return; };
    gb.regs.hl = 0x6BF5;
}

void jr_01F_6BA7(void) {
    label_01F_79E9(); return;
}

void jr_01F_6BAA(void) {
    gb.regs.hl = 0x6C09;
    jr_01F_6BA7(); return;
}

void func_01F_6BAF(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_6BD4(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { label_01F_6BDD(); return; };
    gb.regs.a = gb_read(0xD3D6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_01F_6BCF(); return; };
}

void jr_01F_6BC5(void) {
    gb.regs.hl = 0x6BE7;
}

void jr_01F_6BC8(void) {
    gb.regs.a = gb_read(gb.regs.bc);
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void jr_01F_6BCF(void) {
    gb.regs.hl = 0x6BF1;
    jr_01F_6BC8(); return;
}

void jr_01F_6BD4(void) {
    gb.regs.a = gb_read(0xD3D6);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_6BDD(); return; };
    jr_01F_6BC5(); return;
}

void label_01F_6BDD(void) {
    gb.regs.hl = 0xD378;
    gb.regs.a = 0x1B;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    func_01F_6B97(); return;
}

void Data_01F_6BE7(void) {
    /* data: dw Data_01F_6BFF */;
    /* data: dw Data_01F_6BFA */;
    /* data: dw Data_01F_6C04 */;
    /* data: dw Data_01F_6BFA */;
    /* data: dw Data_01F_6C04 */;
}

void Data_01F_6BF1(void) {
    /* data: db $0E, $6C, $0E, $6C */;
}

void Data_01F_6BF5(void) {
    /* data: db $37, $61, $30, $80, $03 */;
}

void Data_01F_6BFA(void) {
    /* data: db $37, $41, $14, $80, $03 */;
}

void Data_01F_6BFF(void) {
    /* data: db $37, $20, $30, $C0, $02 */;
}

void Data_01F_6C04(void) {
    /* data: db $37, $20, $14, $C0, $02 */;
}

void Data_01F_6C09(void) {
    /* data: db $37, $A1, $30, $80, $04, $37, $51, $14, $80, $04 */;
}

void func_01F_6C13(void) {
    gb.regs.a = 6;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x6C41;
  func_01F_6C13_jr_6C1B:;
    label_01F_79E9(); return;
}

void func_01F_6C1E(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_6C32(); return; };
}

void jr_01F_6C29(void) {
    gb.regs.hl = 0x6C3D;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void jr_01F_6C32(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_6C29(); return;
}

void Data_01F_6C3D(void) {
    /* data: dw Data_01F_6C46 */;
    /* data: dw Data_01F_6C49 */;
}

void Data_01F_6C41(void) {
    /* data: db $00, $C0, $58, $80, $02 */;
}

void Data_01F_6C46(void) {
    /* data: db $68, $80, $02 */;
}

void Data_01F_6C49(void) {
    /* data: db $58, $80, $02 */;
}

void func_01F_6C4C(void) {
    gb.regs.a = 0x78;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x6C87;
    func_01F_79E4(); return;
}

void func_01F_6C57(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_6C6B(); return; };
}

void jr_01F_6C62(void) {
    gb.regs.hl = 0x6C83;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void jr_01F_6C6B(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    alu_cp8(gb.regs.a, 0x18);
    if (GET_FLAG_Z()) goto jr_01F_6C6B_jr_6C7A;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_6C62(); return;
  jr_01F_6C6B_jr_6C7A:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x6C8C;
    WriteChannel4AndDE(); return;
}

void Data_01F_6C83(void) {
    /* data: dw Data_01F_6C91 */;
    /* data: dw Data_01F_6C94 */;
}

void Data_01F_6C87(void) {
    /* data: db $00, $2C, $7C, $80, $02 */;
}

void Data_01F_6C8C(void) {
    /* data: db $00, $F7, $7C, $80, $02 */;
}

void Data_01F_6C91(void) {
    /* data: db $7D, $00, $02 */;
}

void Data_01F_6C94(void) {
    /* data: db $7C, $00, $02 */;
}

void func_01F_6C97(void) {
    gb.regs.a = gb_read(0xD379);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01F_7A2C(); return; };
    gb.regs.hl = 0x6CBA;
    label_01F_79E9(); return;
}

void func_01F_6CA4(void) {
    gb.regs.a = gb_read(0xC50E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_01F_6CA4_jr_6CB1;
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    func_01F_7A07(); return;
  func_01F_6CA4_jr_6CB1:;
    gb.regs.hl = 0x6CBF;
    WriteChannel4AndDE();
    func_01F_7A07(); return;
}

void Data_01F_6CBA(void) {
    /* data: db $08, $60, $00, $C0, $0C */;
}

void Data_01F_6CBF(void) {
    /* data: db $00, $67, $00, $00, $20 */;
}

void func_01F_6CC4(void) {
    gb.regs.a = 0x14;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x6CFB;
    label_01F_79E9(); return;
}

void func_01F_6CCF(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_6CDF(); return; };
}

void jr_01F_6CD6(void) {
    gb.regs.hl = 0x6CF7;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void jr_01F_6CDF(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) goto jr_01F_6CDF_jr_6CEE;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_6CD6(); return;
  jr_01F_6CDF_jr_6CEE:;
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x6D00;
    WriteChannel4AndDE(); return;
}

void Data_01F_6CF7(void) {
    /* data: dw Data_01F_6D05 */;
    /* data: dw Data_01F_6D08 */;
}

void Data_01F_6CFB(void) {
    /* data: db $00, $1A, $06, $80, $01 */;
}

void Data_01F_6D00(void) {
    /* data: db $00, $64, $06, $80, $01 */;
}

void Data_01F_6D05(void) {
    /* data: db $06, $00, $01 */;
}

void Data_01F_6D08(void) {
    /* data: db $48, $00, $01 */;
}

void func_01F_6D0B(void) {
    gb.regs.hl = 0x6D2A;
    label_01F_79E9(); return;
}

void func_01F_6D11(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_6D21(); return; };
}

void jr_01F_6D18(void) {
    gb.regs.hl = 0x6D26;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void jr_01F_6D21(void) {
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_6D18(); return;
}

void Data_01F_6D26(void) {
    /* data: dw Data_01F_6D2F */;
    /* data: dw Data_01F_6D32 */;
}

void Data_01F_6D2A(void) {
    /* data: db $00, $50, $0B, $80, $01 */;
}

void Data_01F_6D2F(void) {
    /* data: db $0C, $00, $01 */;
}

void Data_01F_6D32(void) {
    /* data: db $0B, $00, $01 */;
}

void func_01F_6D35(void) {
    gb.regs.hl = 0x6D60;
    func_01F_79E4(); return;
}

void func_01F_6D3B(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6D58;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD398);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    func_01F_7A25(); return;
}

void Data_01F_6D58(void) {
    /* data: dw Data_01F_6D65 */;
    /* data: dw Data_01F_6D6A */;
    /* data: dw Data_01F_6D6D */;
    /* data: dw Data_01F_6D70 */;
}

void Data_01F_6D60(void) {
    /* data: db $00, $0F, $60, $80, $38 */;
}

void Data_01F_6D65(void) {
    /* data: db $00, $F6, $60, $80, $0C */;
}

void Data_01F_6D6A(void) {
    /* data: db $61, $00, $0C */;
}

void Data_01F_6D6D(void) {
    /* data: db $62, $00, $0C */;
}

void Data_01F_6D70(void) {
    /* data: db $63, $00, $38 */;
}

void func_01F_6D73(void) {
    gb.regs.hl = 0x6D8B;
    func_01F_79E4(); return;
}

void func_01F_6D79(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.hl = 0x6D90;
    WriteChannel4AndDE(); return;
}

void Data_01F_6D8B(void) {
    /* data: db $00, $0F, $A8, $80, $A0 */;
}

void Data_01F_6D90(void) {
    /* data: db $00, $F7, $A8, $80, $60 */;
}

void func_01F_6D95(void) {
    gb.regs.hl = 0x6DAD;
    label_01F_79E9(); return;
}

void func_01F_6D9B(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6DB2;
    WriteChannel4AndDE(); return;
}

void Data_01F_6DAD(void) {
    /* data: db $00, $29, $07, $80, $08 */;
}

void Data_01F_6DB2(void) {
    /* data: db $00, $A7, $05, $80, $50 */;
}

void func_01F_6DB7(void) {
    gb.regs.hl = 0x6E20;
    func_01F_79E4(); return;
}

void func_01F_6DBD(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.hl = 0x6DDA;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD398);
    alu_cp8(gb.regs.a, 0x1E);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    func_01F_7A25(); return;
}

void Data_01F_6DDA(void) {
    /* data: dw Data_01F_6E2B */;
    /* data: dw Data_01F_6E2E */;
    /* data: dw Data_01F_6E31 */;
    /* data: dw Data_01F_6E2E */;
    /* data: dw Data_01F_6E2B */;
    /* data: dw Data_01F_6E28 */;
    /* data: dw Data_01F_6E2B */;
    /* data: dw Data_01F_6E2E */;
    /* data: dw Data_01F_6E31 */;
    /* data: dw Data_01F_6E2E */;
    /* data: dw Data_01F_6E2B */;
    /* data: dw Data_01F_6E28 */;
    /* data: dw Data_01F_6E2B */;
    /* data: dw Data_01F_6E31 */;
    /* data: dw Data_01F_6E34 */;
    /* data: dw Data_01F_6E31 */;
    /* data: dw Data_01F_6E2B */;
    /* data: dw Data_01F_6E28 */;
    /* data: dw Data_01F_6E2B */;
    /* data: dw Data_01F_6E31 */;
    /* data: dw Data_01F_6E34 */;
    /* data: dw Data_01F_6E31 */;
    /* data: dw Data_01F_6E2B */;
    /* data: dw Data_01F_6E25 */;
    /* data: dw Data_01F_6E2B */;
    /* data: dw Data_01F_6E2E */;
    /* data: dw Data_01F_6E31 */;
    /* data: dw Data_01F_6E34 */;
    /* data: dw Data_01F_6E37 */;
    /* data: dw Data_01F_6E3A */;
    /* data: dw Data_01F_6E3F */;
    /* data: dw Data_01F_6E42 */;
    /* data: dw Data_01F_6E45 */;
    /* data: dw Data_01F_6E48 */;
    /* data: dw Data_01F_6E4B */;
}

void Data_01F_6E20(void) {
    /* data: db $00, $F0, $8C, $80, $5C */;
}

void Data_01F_6E25(void) {
    /* data: db $8C, $00, $08 */;
}

void Data_01F_6E28(void) {
    /* data: db $8C, $00, $0C */;
}

void Data_01F_6E2B(void) {
    /* data: db $7E, $00, $04 */;
}

void Data_01F_6E2E(void) {
    /* data: db $7C, $00, $04 */;
}

void Data_01F_6E31(void) {
    /* data: db $6E, $00, $04 */;
}

void Data_01F_6E34(void) {
    /* data: db $6D, $00, $04 */;
}

void Data_01F_6E37(void) {
    /* data: db $6C, $00, $04 */;
}

void Data_01F_6E3A(void) {
    /* data: db $00, $F7, $6B, $80, $0C */;
}

void Data_01F_6E3F(void) {
    /* data: db $6C, $00, $0C */;
}

void Data_01F_6E42(void) {
    /* data: db $6D, $00, $0C */;
}

void Data_01F_6E45(void) {
    /* data: db $6E, $00, $0C */;
}

void Data_01F_6E48(void) {
    /* data: db $7C, $00, $0C */;
}

void Data_01F_6E4B(void) {
    /* data: db $7E, $00, $34 */;
}

void func_01F_6E4E(void) {
    gb.regs.a = 0x40;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x6E7C;
    label_01F_79E9(); return;
}

void func_01F_6E59(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
  func_01F_6E59_jr_6E60:;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01F_6E6D(); return; };
}

void jr_01F_6E64(void) {
    gb.regs.hl = 0x6E78;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void jr_01F_6E6D(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_6E64(); return;
}

void Data_01F_6E78(void) {
    /* data: dw Data_01F_6E81 */;
    /* data: dw Data_01F_6E84 */;
}

void Data_01F_6E7C(void) {
    /* data: db $00, $80, $3A, $80, $01 */;
}

void Data_01F_6E81(void) {
    /* data: db $39, $80, $02 */;
}

void Data_01F_6E84(void) {
    /* data: db $3A, $80, $01 */;
}

void func_01F_6E87(void) {
    gb.regs.hl = 0x6EBA;
    label_01F_79E9(); return;
}

void func_01F_6E8D(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x6EA2;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void Data_01F_6EA2(void) {
    /* data: dw Data_01F_6EBF */;
    /* data: dw Data_01F_6EC2 */;
    /* data: dw Data_01F_6EC5 */;
    /* data: dw Data_01F_6EC2 */;
    /* data: dw Data_01F_6EBF */;
    /* data: dw Data_01F_6EC8 */;
    /* data: dw Data_01F_6ECB */;
    /* data: dw Data_01F_6ECE */;
    /* data: dw Data_01F_6ED1 */;
    /* data: dw Data_01F_6ED4 */;
    /* data: dw Data_01F_6ED7 */;
    /* data: dw Data_01F_6EDA */;
}

void Data_01F_6EBA(void) {
    /* data: db $00, $C2, $5D, $80, $01 */;
}

void Data_01F_6EBF(void) {
    /* data: db $5C, $00, $01 */;
}

void Data_01F_6EC2(void) {
    /* data: db $4F, $00, $01 */;
}

void Data_01F_6EC5(void) {
    /* data: db $4E, $00, $01 */;
}

void Data_01F_6EC8(void) {
    /* data: db $5D, $00, $01 */;
}

void Data_01F_6ECB(void) {
    /* data: db $5E, $00, $01 */;
}

void Data_01F_6ECE(void) {
    /* data: db $5F, $00, $01 */;
}

void Data_01F_6ED1(void) {
    /* data: db $6C, $00, $01 */;
}

void Data_01F_6ED4(void) {
    /* data: db $6D, $00, $01 */;
}

void Data_01F_6ED7(void) {
    /* data: db $6E, $00, $01 */;
}

void Data_01F_6EDA(void) {
    /* data: db $6F, $00, $10 */;
}

void func_01F_6EDD(void) {
    gb.regs.a = 5;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x6F1D;
    label_01F_79E9(); return;
}

void func_01F_6EE8(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { jr_01F_6EFC(); return; };
}

void jr_01F_6EF3(void) {
    gb.regs.hl = 0x6F07;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void jr_01F_6EFC(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.a = 4;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_6EF3(); return;
}

void Data_01F_6F07(void) {
    /* data: dw Data_01F_6F25 */;
    /* data: dw Data_01F_6F28 */;
    /* data: dw Data_01F_6F2B */;
    /* data: dw Data_01F_6F2E */;
    /* data: dw Data_01F_6F2B */;
    /* data: dw Data_01F_6F28 */;
    /* data: dw Data_01F_6F25 */;
    /* data: dw Data_01F_6F22 */;
    /* data: dw Data_01F_6F25 */;
    /* data: dw Data_01F_6F28 */;
    /* data: dw Data_01F_6F2B */;
}

void Data_01F_6F1D(void) {
    /* data: db $00, $67, $6C, $80, $01 */;
}

void Data_01F_6F22(void) {
    /* data: db $6C, $00, $01 */;
}

void Data_01F_6F25(void) {
    /* data: db $6B, $00, $01 */;
}

void Data_01F_6F28(void) {
    /* data: db $6A, $00, $01 */;
}

void Data_01F_6F2B(void) {
    /* data: db $69, $00, $01 */;
}

void Data_01F_6F2E(void) {
    /* data: db $68, $00, $02 */;
}

void func_01F_6F31(void) {
    gb.regs.a = 5;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x6F67;
    func_01F_79E4(); return;
}

void func_01F_6F3C(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { jr_01F_6F50(); return; };
}

void jr_01F_6F47(void) {
    gb.regs.hl = 0x6F5B;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void jr_01F_6F50(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_6F47(); return;
}

void Data_01F_6F5B(void) {
    /* data: dw Data_01F_6F6C */;
    /* data: dw Data_01F_6F6F */;
    /* data: dw Data_01F_6F6C */;
    /* data: dw Data_01F_6F72 */;
    /* data: dw Data_01F_6F6C */;
    /* data: dw Data_01F_6F75 */;
}

void Data_01F_6F67(void) {
    /* data: db $00, $F4, $68, $80, $02 */;
}

void Data_01F_6F6C(void) {
    /* data: db $6F, $00, $02 */;
}

void Data_01F_6F6F(void) {
    /* data: db $69, $00, $02 */;
}

void Data_01F_6F72(void) {
    /* data: db $6A, $00, $02 */;
}

void Data_01F_6F75(void) {
    /* data: db $68, $00, $02 */;
}

void func_01F_6F78(void) {
    gb.regs.a = 8;
  func_01F_6F78_jr_6F7A:;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x6FBE;
    func_01F_79E4(); return;
}

void func_01F_6F83(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
  func_01F_6F83_jr_6F8A:;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { jr_01F_6F9F(); return; };
}

void jr_01F_6F8E(void) {
    gb.regs.hl = 0x6FAA;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD398);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    func_01F_7A25(); return;
}

void jr_01F_6F9F(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.a = 2;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_6F8E(); return;
}

void Data_01F_6FAA(void) {
    /* data: dw Data_01F_6FC3 */;
    /* data: dw Data_01F_6FC8 */;
    /* data: dw Data_01F_6FCE */;
    /* data: dw Data_01F_6FD4 */;
    /* data: dw Data_01F_6FDA */;
    /* data: dw Data_01F_6FD7 */;
    /* data: dw Data_01F_6FD4 */;
    /* data: dw Data_01F_6FD1 */;
    /* data: dw Data_01F_6FCE */;
    /* data: dw Data_01F_6FCB */;
}

void Data_01F_6FBE(void) {
    /* data: db $00, $C0, $7F, $80, $88 */;
}

void Data_01F_6FC3(void) {
    /* data: db $00, $F4, $6D, $80, $01 */;
}

void Data_01F_6FC8(void) {
    /* data: db $74, $00, $01 */;
}

void Data_01F_6FCB(void) {
    /* data: db $5F, $00, $01 */;
}

void Data_01F_6FCE(void) {
    /* data: db $66, $00, $01 */;
}

void Data_01F_6FD1(void) {
    /* data: db $5D, $00, $01 */;
}

void Data_01F_6FD4(void) {
    /* data: db $64, $00, $01 */;
}

void Data_01F_6FD7(void) {
    /* data: db $4F, $00, $01 */;
}

void Data_01F_6FDA(void) {
    /* data: db $62, $00, $01 */;
}

void func_01F_6FDD(void) {
    gb.regs.hl = 0x6FEA;
    label_01F_79E9(); return;
}

void func_01F_6FE3(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    func_01F_7A07(); return;
}

void Data_01F_6FEA(void) {
    /* data: db $00, $F4, $7D, $80, $40 */;
}

void func_01F_6FEF(void) {
    gb.regs.hl = 0x7038;
    label_01F_79E9(); return;
}

void func_01F_6FF5(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x14);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.hl = 0x7012;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD398);
    alu_cp8(gb.regs.a, 0x13);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    func_01F_7A25(); return;
}

void Data_01F_7012(void) {
    /* data: dw Data_01F_703D */;
    /* data: dw Data_01F_7040 */;
    /* data: dw Data_01F_7043 */;
    /* data: dw Data_01F_7046 */;
    /* data: dw Data_01F_7049 */;
    /* data: dw Data_01F_704C */;
    /* data: dw Data_01F_704F */;
    /* data: dw Data_01F_7052 */;
    /* data: dw Data_01F_7055 */;
    /* data: dw Data_01F_7058 */;
    /* data: dw Data_01F_705B */;
    /* data: dw Data_01F_705E */;
    /* data: dw Data_01F_7061 */;
    /* data: dw Data_01F_7064 */;
    /* data: dw Data_01F_7067 */;
    /* data: dw Data_01F_706A */;
    /* data: dw Data_01F_706D */;
    /* data: dw Data_01F_7070 */;
    /* data: dw Data_01F_7073 */;
}

void Data_01F_7038(void) {
    /* data: db $26, $40, $37, $80, $06 */;
}

void Data_01F_703D(void) {
    /* data: db $36, $80, $06 */;
}

void Data_01F_7040(void) {
    /* data: db $35, $80, $06 */;
}

void Data_01F_7043(void) {
    /* data: db $34, $80, $06 */;
}

void Data_01F_7046(void) {
    /* data: db $27, $80, $06 */;
}

void Data_01F_7049(void) {
    /* data: db $26, $80, $06 */;
}

void Data_01F_704C(void) {
    /* data: db $25, $80, $06 */;
}

void Data_01F_704F(void) {
    /* data: db $24, $80, $06 */;
}

void Data_01F_7052(void) {
    /* data: db $17, $80, $06 */;
}

void Data_01F_7055(void) {
    /* data: db $16, $80, $06 */;
}

void Data_01F_7058(void) {
    /* data: db $15, $80, $06 */;
}

void Data_01F_705B(void) {
    /* data: db $14, $80, $06 */;
}

void Data_01F_705E(void) {
    /* data: db $07, $80, $06 */;
}

void Data_01F_7061(void) {
    /* data: db $06, $00, $06 */;
}

void Data_01F_7064(void) {
    /* data: db $05, $00, $06 */;
}

void Data_01F_7067(void) {
    /* data: db $04, $00, $06 */;
}

void Data_01F_706A(void) {
    /* data: db $03, $00, $06 */;
}

void Data_01F_706D(void) {
    /* data: db $02, $00, $06 */;
}

void Data_01F_7070(void) {
    /* data: db $01, $00, $06 */;
}

void Data_01F_7073(void) {
    /* data: db $00, $47, $00, $80, $20 */;
}

void func_01F_7078(void) {
    gb.regs.hl = 0x70A1;
    label_01F_79E9(); return;
}

void func_01F_707E(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x7093;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_7093(void) {
    /* data: dw Data_01F_70A6 */;
    /* data: dw Data_01F_70AB */;
    /* data: dw Data_01F_70B0 */;
    /* data: dw Data_01F_70B5 */;
    /* data: dw Data_01F_70BA */;
    /* data: dw Data_01F_70AB */;
    /* data: dw Data_01F_70BF */;
}

void Data_01F_70A1(void) {
    /* data: db $26, $29, $40, $C0, $04 */;
}

void Data_01F_70A6(void) {
    /* data: db $26, $10, $40, $C0, $02 */;
}

void Data_01F_70AB(void) {
    /* data: db $26, $29, $10, $C0, $04 */;
}

void Data_01F_70B0(void) {
    /* data: db $26, $10, $10, $C0, $02 */;
}

void Data_01F_70B5(void) {
    /* data: db $26, $19, $60, $C0, $04 */;
}

void Data_01F_70BA(void) {
    /* data: db $26, $10, $60, $C0, $02 */;
}

void Data_01F_70BF(void) {
    /* data: db $26, $10, $10, $C0, $03 */;
}

void func_01F_70C4(void) {
    gb.regs.a = 8;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x710C;
    func_01F_79E4(); return;
}

void func_01F_70CF(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { jr_01F_70EB(); return; };
}

void jr_01F_70DA(void) {
    gb.regs.hl = 0x70F6;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD398);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    func_01F_7A25(); return;
}

void jr_01F_70EB(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.a = 3;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_70DA(); return;
}

void Data_01F_70F6(void) {
    /* data: dw Data_01F_7111 */;
    /* data: dw Data_01F_6FC3 */;
    /* data: dw Data_01F_6FC8 */;
    /* data: dw Data_01F_6FCE */;
    /* data: dw Data_01F_6FD4 */;
    /* data: dw Data_01F_6FDA */;
    /* data: dw Data_01F_6FD7 */;
    /* data: dw Data_01F_6FD4 */;
    /* data: dw Data_01F_6FD1 */;
    /* data: dw Data_01F_6FCE */;
    /* data: dw Data_01F_6FCB */;
}

void Data_01F_710C(void) {
    /* data: db $00, $C0, $7F, $80, $FF */;
}

void Data_01F_7111(void) {
    /* data: db $7F, $80, $34 */;
}

void func_01F_7114(void) {
    gb.regs.hl = 0x712C;
    label_01F_79E9(); return;
}

void func_01F_711A(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.hl = 0x7131;
    WriteChannel4AndDE(); return;
}

void Data_01F_712C(void) {
    /* data: db $00, $19, $50, $80, $06 */;
}

void Data_01F_7131(void) {
    /* data: db $00, $65, $50, $80, $20 */;
}

void func_01F_7136(void) {
    gb.regs.hl = 0x7195;
    label_01F_79E9(); return;
}

void func_01F_713C(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x23);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x7151;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_7151(void) {
    /* data: dw Data_01F_719A */;
    /* data: dw Data_01F_71BD */;
    /* data: dw Data_01F_719F */;
    /* data: dw Data_01F_71BD */;
    /* data: dw Data_01F_71A4 */;
    /* data: dw Data_01F_71BD */;
    /* data: dw Data_01F_71A9 */;
    /* data: dw Data_01F_71BD */;
    /* data: dw Data_01F_71A9 */;
    /* data: dw Data_01F_71BD */;
    /* data: dw Data_01F_71AE */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71B3 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71B8 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71B3 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71AE */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71B3 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71B8 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71B3 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71AE */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71B3 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71B8 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_71B3 */;
    /* data: dw Data_01F_71C2 */;
}

void Data_01F_7195(void) {
    /* data: db $00, $1C, $60, $80, $18 */;
}

void Data_01F_719A(void) {
    /* data: db $00, $19, $50, $80, $0A */;
}

void Data_01F_719F(void) {
    /* data: db $00, $19, $30, $80, $09 */;
}

void Data_01F_71A4(void) {
    /* data: db $00, $19, $40, $80, $07 */;
}

void Data_01F_71A9(void) {
    /* data: db $00, $19, $50, $80, $06 */;
}

void Data_01F_71AE(void) {
    /* data: db $00, $19, $60, $80, $06 */;
}

void Data_01F_71B3(void) {
    /* data: db $00, $19, $60, $80, $04 */;
}

void Data_01F_71B8(void) {
    /* data: db $00, $19, $50, $80, $02 */;
}

void Data_01F_71BD(void) {
    /* data: db $37, $40, $20, $C0, $02 */;
}

void Data_01F_71C2(void) {
    /* data: db $37, $20, $20, $C0, $02 */;
}

void func_01F_71C7(void) {
    gb.regs.hl = 0x7216;
    func_01F_79E4(); return;
}

void func_01F_71CD(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x1B);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.hl = 0x71E2;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_71E2(void) {
    /* data: dw Data_01F_721B */;
    /* data: dw Data_01F_71BD */;
    /* data: dw Data_01F_7220 */;
    /* data: dw Data_01F_71BD */;
    /* data: dw Data_01F_7225 */;
    /* data: dw Data_01F_71BD */;
    /* data: dw Data_01F_722A */;
    /* data: dw Data_01F_71BD */;
    /* data: dw Data_01F_722A */;
    /* data: dw Data_01F_71BD */;
    /* data: dw Data_01F_722F */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_7234 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_7239 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_7234 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_722F */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_7234 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_7239 */;
    /* data: dw Data_01F_71C2 */;
    /* data: dw Data_01F_7234 */;
    /* data: dw Data_01F_71C2 */;
}

void Data_01F_7216(void) {
    /* data: db $00, $00, $00, $80, $20 */;
}

void Data_01F_721B(void) {
    /* data: db $00, $19, $27, $80, $0A */;
}

void Data_01F_7220(void) {
    /* data: db $00, $19, $26, $80, $09 */;
}

void Data_01F_7225(void) {
    /* data: db $00, $19, $24, $80, $08 */;
}

void Data_01F_722A(void) {
    /* data: db $00, $19, $23, $80, $07 */;
}

void Data_01F_722F(void) {
    /* data: db $00, $19, $17, $80, $06 */;
}

void Data_01F_7234(void) {
    /* data: db $00, $19, $17, $80, $04 */;
}

void Data_01F_7239(void) {
    /* data: db $00, $19, $16, $80, $02 */;
}

void func_01F_723E(void) {
    gb.regs.hl = 0x726D;
    label_01F_79E9(); return;
}

void func_01F_7244(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x7259;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_7259(void) {
    /* data: dw Data_01F_7272 */;
    /* data: dw Data_01F_7277 */;
    /* data: dw Data_01F_727C */;
    /* data: dw Data_01F_7277 */;
    /* data: dw Data_01F_7272 */;
    /* data: dw Data_01F_726D */;
    /* data: dw Data_01F_7290 */;
    /* data: dw Data_01F_728B */;
    /* data: dw Data_01F_7286 */;
    /* data: dw Data_01F_7281 */;
}

void Data_01F_726D(void) {
    /* data: db $00, $20, $30, $80, $02 */;
}

void Data_01F_7272(void) {
    /* data: db $00, $40, $40, $80, $03 */;
}

void Data_01F_7277(void) {
    /* data: db $00, $80, $50, $80, $04 */;
}

void Data_01F_727C(void) {
    /* data: db $00, $C0, $60, $80, $05 */;
}

void Data_01F_7281(void) {
    /* data: db $37, $10, $30, $C0, $02 */;
}

void Data_01F_7286(void) {
    /* data: db $00, $10, $40, $80, $03 */;
}

void Data_01F_728B(void) {
    /* data: db $00, $10, $50, $80, $04 */;
}

void Data_01F_7290(void) {
    /* data: db $00, $10, $60, $80, $05 */;
}

void func_01F_7295(void) {
    gb.regs.hl = 0x72CE;
    label_01F_79E9(); return;
}

void func_01F_729B(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.hl = 0x72B8;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD398);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    func_01F_7A25(); return;
}

void Data_01F_72B8(void) {
    /* data: dw Data_01F_72D6 */;
    /* data: dw Data_01F_72D3 */;
    /* data: dw Data_01F_72D9 */;
    /* data: dw Data_01F_72D6 */;
    /* data: dw Data_01F_72DC */;
    /* data: dw Data_01F_72DF */;
    /* data: dw Data_01F_72D6 */;
    /* data: dw Data_01F_72D3 */;
    /* data: dw Data_01F_72D9 */;
    /* data: dw Data_01F_72D6 */;
    /* data: dw Data_01F_72DC */;
}

void Data_01F_72CE(void) {
    /* data: db $00, $80, $48, $80, $02 */;
}

void Data_01F_72D3(void) {
    /* data: db $49, $80, $02 */;
}

void Data_01F_72D6(void) {
    /* data: db $4A, $80, $02 */;
}

void Data_01F_72D9(void) {
    /* data: db $4B, $80, $02 */;
}

void Data_01F_72DC(void) {
    /* data: db $4C, $80, $02 */;
}

void Data_01F_72DF(void) {
    /* data: db $00, $20, $48, $80, $02 */;
}

void func_01F_72E4(void) {
    gb.regs.a = 0x2B;
    gb_write(0xD3DF, gb.regs.a);
    gb.regs.a = 0x15;
    gb_write(0xD3E0, gb.regs.a);
    gb.regs.hl = 0x7415;
    label_01F_79E9(); return;
}

void func_01F_72F4(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_01F_733B(); return; };
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) { jr_01F_7363(); return; };
    alu_cp8(gb.regs.a, 0x1A);
    if (GET_FLAG_Z()) { jr_01F_734A(); return; };
    alu_cp8(gb.regs.a, 0x52);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
}

void jr_01F_730C(void) {
    gb.regs.hl = 0x7373;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD398);
    alu_cp8(gb.regs.a, 0x1A);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    alu_cp8(gb.regs.a, 0x22);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    alu_cp8(gb.regs.a, 0x2A);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    alu_cp8(gb.regs.a, 0x32);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    alu_cp8(gb.regs.a, 0x3A);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    alu_cp8(gb.regs.a, 0x42);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    alu_cp8(gb.regs.a, 0x4A);
    if (GET_FLAG_Z()) { WriteChannel4AndDE(); return; };
    func_01F_7A25(); return;
}

void jr_01F_733B(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3DF;
    DecrementValueAtDE();
    gb.regs.de = gb_pop16();
    if (GET_FLAG_Z()) { jr_01F_7359(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_730C(); return;
}

void jr_01F_734A(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3E0;
    DecrementValueAtDE();
    gb.regs.de = gb_pop16();
    if (GET_FLAG_Z()) { jr_01F_735E(); return; };
    gb.regs.a = 0x12;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_730C(); return;
}

void jr_01F_7359(void) {
    gb.regs.a = 5;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_730C(); return;
}

void jr_01F_735E(void) {
    gb.regs.a = 0x1A;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_730C(); return;
}

void jr_01F_7363(void) {
    gb.regs.a = 0x20;
    gb_write(0xD370, gb.regs.a);
    PlayActiveWaveSfx();
    gb.regs.bc = 0xD398;
    gb.regs.de = 0xD393;
    jr_01F_730C(); return;
}

void Data_01F_7373(void) {
    /* data: dw Data_01F_741A */;
    /* data: dw Data_01F_741D */;
    /* data: dw Data_01F_7420 */;
    /* data: dw Data_01F_7423 */;
    /* data: dw Data_01F_7426 */;
    /* data: dw Data_01F_7429 */;
    /* data: dw Data_01F_742C */;
    /* data: dw Data_01F_742F */;
    /* data: dw Data_01F_7432 */;
    /* data: dw Data_01F_7435 */;
    /* data: dw Data_01F_7438 */;
    /* data: dw Data_01F_743B */;
    /* data: dw Data_01F_743E */;
    /* data: dw Data_01F_7441 */;
    /* data: dw Data_01F_7444 */;
    /* data: dw Data_01F_7447 */;
    /* data: dw Data_01F_744A */;
    /* data: dw Data_01F_744D */;
    /* data: dw Data_01F_7450 */;
    /* data: dw Data_01F_7453 */;
    /* data: dw Data_01F_7456 */;
    /* data: dw Data_01F_7459 */;
    /* data: dw Data_01F_7456 */;
    /* data: dw Data_01F_7453 */;
    /* data: dw Data_01F_7450 */;
    /* data: dw Data_01F_745C */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_746A */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_746D */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_746A */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7472 */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_746A */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7477 */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_746A */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_747C */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_746A */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7481 */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_746A */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7486 */;
    /* data: dw Data_01F_7461 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_746A */;
    /* data: dw Data_01F_7467 */;
    /* data: dw Data_01F_7464 */;
    /* data: dw Data_01F_7461 */;
}

void Data_01F_7415(void) {
    /* data: db $00, $80, $9C, $80, $01 */;
}

void Data_01F_741A(void) {
    /* data: db $8E, $00, $01 */;
}

void Data_01F_741D(void) {
    /* data: db $7E, $00, $01 */;
}

void Data_01F_7420(void) {
    /* data: db $8C, $00, $01 */;
}

void Data_01F_7423(void) {
    /* data: db $7C, $00, $01 */;
}

void Data_01F_7426(void) {
    /* data: db $6F, $00, $01 */;
}

void Data_01F_7429(void) {
    /* data: db $6D, $00, $01 */;
}

void Data_01F_742C(void) {
    /* data: db $5F, $00, $01 */;
}

void Data_01F_742F(void) {
    /* data: db $5D, $00, $01 */;
}

void Data_01F_7432(void) {
    /* data: db $4F, $00, $01 */;
}

void Data_01F_7435(void) {
    /* data: db $4D, $00, $01 */;
}

void Data_01F_7438(void) {
    /* data: db $3F, $00, $01 */;
}

void Data_01F_743B(void) {
    /* data: db $3D, $00, $01 */;
}

void Data_01F_743E(void) {
    /* data: db $37, $80, $02 */;
}

void Data_01F_7441(void) {
    /* data: db $35, $80, $02 */;
}

void Data_01F_7444(void) {
    /* data: db $27, $80, $02 */;
}

void Data_01F_7447(void) {
    /* data: db $25, $80, $02 */;
}

void Data_01F_744A(void) {
    /* data: db $17, $80, $02 */;
}

void Data_01F_744D(void) {
    /* data: db $15, $80, $02 */;
}

void Data_01F_7450(void) {
    /* data: db $14, $80, $02 */;
}

void Data_01F_7453(void) {
    /* data: db $07, $80, $02 */;
}

void Data_01F_7456(void) {
    /* data: db $06, $80, $02 */;
}

void Data_01F_7459(void) {
    /* data: db $05, $80, $02 */;
}

void Data_01F_745C(void) {
    /* data: db $00, $70, $15, $80, $02 */;
}

void Data_01F_7461(void) {
    /* data: db $14, $80, $02 */;
}

void Data_01F_7464(void) {
    /* data: db $07, $80, $02 */;
}

void Data_01F_7467(void) {
    /* data: db $06, $80, $02 */;
}

void Data_01F_746A(void) {
    /* data: db $05, $80, $02 */;
}

void Data_01F_746D(void) {
    /* data: db $00, $60, $15, $80, $02 */;
}

void Data_01F_7472(void) {
    /* data: db $00, $50, $15, $80, $02 */;
}

void Data_01F_7477(void) {
    /* data: db $00, $40, $15, $80, $02 */;
}

void Data_01F_747C(void) {
    /* data: db $00, $30, $15, $80, $02 */;
}

void Data_01F_7481(void) {
    /* data: db $00, $20, $15, $80, $02 */;
}

void Data_01F_7486(void) {
    /* data: db $00, $10, $15, $80, $02 */;
}

void func_01F_748B(void) {
    gb.regs.a = 0x40;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x74EB;
    label_01F_79E9(); return;
}

void func_01F_7496(void) {
    DecrementValueAtDE();
  func_01F_7496_jr_7499:;
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x21);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.hl = 0x74AB;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_74AB(void) {
    /* data: dw Data_01F_74F0 */;
    /* data: dw Data_01F_74F5 */;
    /* data: dw Data_01F_74FA */;
    /* data: dw Data_01F_74FF */;
    /* data: dw Data_01F_7504 */;
    /* data: dw Data_01F_7509 */;
    /* data: dw Data_01F_750E */;
    /* data: dw Data_01F_7513 */;
    /* data: dw Data_01F_7518 */;
    /* data: dw Data_01F_751D */;
    /* data: dw Data_01F_7522 */;
    /* data: dw Data_01F_7527 */;
    /* data: dw Data_01F_752C */;
    /* data: dw Data_01F_7531 */;
    /* data: dw Data_01F_7536 */;
    /* data: dw Data_01F_753B */;
    /* data: dw Data_01F_7540 */;
    /* data: dw Data_01F_7545 */;
    /* data: dw Data_01F_754A */;
    /* data: dw Data_01F_754F */;
    /* data: dw Data_01F_7554 */;
    /* data: dw Data_01F_7559 */;
    /* data: dw Data_01F_755E */;
    /* data: dw Data_01F_7563 */;
    /* data: dw Data_01F_7568 */;
    /* data: dw Data_01F_756D */;
    /* data: dw Data_01F_7572 */;
    /* data: dw Data_01F_7577 */;
    /* data: dw Data_01F_757C */;
    /* data: dw Data_01F_7581 */;
    /* data: dw Data_01F_7586 */;
    /* data: dw Data_01F_758B */;
}

void Data_01F_74EB(void) {
    /* data: db $00, $20, $67, $80, $02 */;
}

void Data_01F_74F0(void) {
    /* data: db $00, $20, $66, $80, $02 */;
}

void Data_01F_74F5(void) {
    /* data: db $00, $20, $65, $80, $02 */;
}

void Data_01F_74FA(void) {
    /* data: db $00, $20, $64, $80, $03 */;
}

void Data_01F_74FF(void) {
    /* data: db $00, $20, $57, $80, $03 */;
}

void Data_01F_7504(void) {
    /* data: db $00, $20, $56, $80, $03 */;
}

void Data_01F_7509(void) {
    /* data: db $00, $20, $55, $80, $04 */;
}

void Data_01F_750E(void) {
    /* data: db $00, $20, $54, $80, $04 */;
}

void Data_01F_7513(void) {
    /* data: db $00, $20, $47, $80, $04 */;
}

void Data_01F_7518(void) {
    /* data: db $00, $20, $46, $80, $05 */;
}

void Data_01F_751D(void) {
    /* data: db $00, $20, $45, $80, $05 */;
}

void Data_01F_7522(void) {
    /* data: db $00, $20, $44, $80, $05 */;
}

void Data_01F_7527(void) {
    /* data: db $00, $20, $37, $80, $06 */;
}

void Data_01F_752C(void) {
    /* data: db $00, $20, $36, $80, $06 */;
}

void Data_01F_7531(void) {
    /* data: db $00, $20, $35, $80, $06 */;
}

void Data_01F_7536(void) {
    /* data: db $00, $20, $34, $80, $08 */;
}

void Data_01F_753B(void) {
    /* data: db $00, $20, $27, $80, $08 */;
}

void Data_01F_7540(void) {
    /* data: db $00, $20, $26, $80, $0A */;
}

void Data_01F_7545(void) {
    /* data: db $00, $20, $25, $80, $0A */;
}

void Data_01F_754A(void) {
    /* data: db $00, $20, $24, $80, $0C */;
}

void Data_01F_754F(void) {
    /* data: db $00, $20, $17, $80, $0C */;
}

void Data_01F_7554(void) {
    /* data: db $00, $20, $16, $80, $0E */;
}

void Data_01F_7559(void) {
    /* data: db $00, $20, $15, $80, $0E */;
}

void Data_01F_755E(void) {
    /* data: db $00, $20, $14, $80, $10 */;
}

void Data_01F_7563(void) {
    /* data: db $00, $20, $07, $80, $10 */;
}

void Data_01F_7568(void) {
    /* data: db $00, $20, $06, $80, $12 */;
}

void Data_01F_756D(void) {
    /* data: db $00, $20, $05, $80, $12 */;
}

void Data_01F_7572(void) {
    /* data: db $00, $20, $04, $80, $14 */;
}

void Data_01F_7577(void) {
    /* data: db $00, $20, $03, $80, $14 */;
}

void Data_01F_757C(void) {
    /* data: db $00, $20, $02, $80, $16 */;
}

void Data_01F_7581(void) {
    /* data: db $00, $20, $01, $80, $16 */;
}

void Data_01F_7586(void) {
    /* data: db $00, $20, $00, $80, $18 */;
}

void Data_01F_758B(void) {
    /* data: db $00, $10, $00, $80, $20 */;
}

void func_01F_7590(void) {
    gb.regs.a = 7;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x75C6;
    func_01F_79E4(); return;
}

void func_01F_759B(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { jr_01F_75AB(); return; };
}

void jr_01F_75A2(void) {
    gb.regs.hl = 0x75B6;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void jr_01F_75AB(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_75A2(); return;
}

void Data_01F_75B6(void) {
    /* data: dw Data_01F_75CB */;
    /* data: dw Data_01F_75CE */;
    /* data: dw Data_01F_75D1 */;
    /* data: dw Data_01F_75D4 */;
    /* data: dw Data_01F_75D7 */;
    /* data: dw Data_01F_75D4 */;
    /* data: dw Data_01F_75D1 */;
    /* data: dw Data_01F_75CE */;
}

void Data_01F_75C6(void) {
    /* data: db $00, $F4, $0F, $80, $01 */;
}

void Data_01F_75CB(void) {
    /* data: db $0E, $00, $01 */;
}

void Data_01F_75CE(void) {
    /* data: db $0D, $00, $01 */;
}

void Data_01F_75D1(void) {
    /* data: db $0C, $00, $01 */;
}

void Data_01F_75D4(void) {
    /* data: db $0B, $00, $01 */;
}

void Data_01F_75D7(void) {
    /* data: db $0A, $00, $01 */;
}

void func_01F_75DA(void) {
    gb.regs.a = 7;
    gb_write(0xD3BF, gb.regs.a);
    func_01F_7A33();
    gb.regs.hl = 0x6217;
    func_01F_7AD0();
    WriteChannel2AndDE(); return;
}

void func_01F_75EB(void) {
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { jr_01F_75FC(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { jr_01F_7605(); return; };
}

void jr_01F_75F6(void) {
    gb.regs.hl = 0x6205;
    func_01F_7B11(); return;
}

void jr_01F_75FC(void) {
    func_01F_7AAC();
    if (GET_FLAG_Z()) { label_01F_7A51(); return; };
    gb.regs.a = gb_read(gb.regs.bc);
    jr_01F_75F6(); return;
}

void jr_01F_7605(void) {
    gb.regs.a = 1;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01F_75F6(); return;
}

void func_01F_760A(void) {
    gb.regs.hl = 0x7647;
    label_01F_79E9(); return;
}

void func_01F_7610(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x12);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x7625;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_7625(void) {
    /* data: dw Data_01F_764C */;
    /* data: dw Data_01F_7651 */;
    /* data: dw Data_01F_7656 */;
    /* data: dw Data_01F_765B */;
    /* data: dw Data_01F_7660 */;
    /* data: dw Data_01F_7665 */;
    /* data: dw Data_01F_766A */;
    /* data: dw Data_01F_766F */;
    /* data: dw Data_01F_7674 */;
    /* data: dw Data_01F_7679 */;
    /* data: dw Data_01F_767E */;
    /* data: dw Data_01F_7683 */;
    /* data: dw Data_01F_7688 */;
    /* data: dw Data_01F_768D */;
    /* data: dw Data_01F_7692 */;
    /* data: dw Data_01F_7697 */;
    /* data: dw Data_01F_769C */;
}

void Data_01F_7647(void) {
    /* data: db $00, $20, $0C, $80, $01 */;
}

void Data_01F_764C(void) {
    /* data: db $00, $40, $0D, $80, $01 */;
}

void Data_01F_7651(void) {
    /* data: db $00, $60, $0E, $80, $01 */;
}

void Data_01F_7656(void) {
    /* data: db $00, $80, $0F, $80, $01 */;
}

void Data_01F_765B(void) {
    /* data: db $00, $A0, $1C, $80, $01 */;
}

void Data_01F_7660(void) {
    /* data: db $00, $E0, $1D, $80, $01 */;
}

void Data_01F_7665(void) {
    /* data: db $00, $C0, $1E, $80, $02 */;
}

void Data_01F_766A(void) {
    /* data: db $00, $B0, $1F, $80, $02 */;
}

void Data_01F_766F(void) {
    /* data: db $00, $A0, $2C, $80, $02 */;
}

void Data_01F_7674(void) {
    /* data: db $00, $90, $2D, $80, $02 */;
}

void Data_01F_7679(void) {
    /* data: db $00, $80, $2E, $80, $02 */;
}

void Data_01F_767E(void) {
    /* data: db $00, $70, $2F, $80, $02 */;
}

void Data_01F_7683(void) {
    /* data: db $00, $60, $3C, $80, $02 */;
}

void Data_01F_7688(void) {
    /* data: db $00, $50, $3D, $80, $02 */;
}

void Data_01F_768D(void) {
    /* data: db $00, $40, $3E, $80, $02 */;
}

void Data_01F_7692(void) {
    /* data: db $00, $30, $3F, $80, $02 */;
}

void Data_01F_7697(void) {
    /* data: db $00, $20, $4C, $80, $02 */;
}

void Data_01F_769C(void) {
    /* data: db $37, $10, $4D, $C0, $02 */;
}

void func_01F_76A1(void) {
    gb.regs.hl = 0x76D6;
    label_01F_79E9(); return;
}

void func_01F_76A7(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x76BC;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_76BC(void) {
    /* data: dw Data_01F_76DB */;
    /* data: dw Data_01F_76E0 */;
    /* data: dw Data_01F_76E5 */;
    /* data: dw Data_01F_76EA */;
    /* data: dw Data_01F_76EF */;
    /* data: dw Data_01F_76F4 */;
    /* data: dw Data_01F_76F9 */;
    /* data: dw Data_01F_76FE */;
    /* data: dw Data_01F_7703 */;
    /* data: dw Data_01F_7708 */;
    /* data: dw Data_01F_770D */;
    /* data: dw Data_01F_7712 */;
    /* data: dw Data_01F_7717 */;
}

void Data_01F_76D6(void) {
    /* data: db $00, $30, $3D, $80, $02 */;
}

void Data_01F_76DB(void) {
    /* data: db $00, $60, $3F, $80, $02 */;
}

void Data_01F_76E0(void) {
    /* data: db $00, $90, $3D, $80, $02 */;
}

void Data_01F_76E5(void) {
    /* data: db $00, $C0, $3F, $80, $02 */;
}

void Data_01F_76EA(void) {
    /* data: db $00, $F0, $3D, $80, $02 */;
}

void Data_01F_76EF(void) {
    /* data: db $00, $D0, $3F, $80, $02 */;
}

void Data_01F_76F4(void) {
    /* data: db $00, $B0, $3D, $80, $02 */;
}

void Data_01F_76F9(void) {
    /* data: db $00, $90, $3F, $80, $02 */;
}

void Data_01F_76FE(void) {
    /* data: db $00, $70, $3D, $80, $03 */;
}

void Data_01F_7703(void) {
    /* data: db $00, $50, $3F, $80, $03 */;
}

void Data_01F_7708(void) {
    /* data: db $00, $40, $3D, $80, $04 */;
}

void Data_01F_770D(void) {
    /* data: db $00, $30, $3F, $80, $04 */;
}

void Data_01F_7712(void) {
    /* data: db $00, $20, $3D, $80, $04 */;
}

void Data_01F_7717(void) {
    /* data: db $2F, $10, $3F, $C0, $04 */;
}

void func_01F_771C(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD361, gb.regs.a);
    gb.regs.hl = wMusicChannel1_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.a = 1;
    gb_write(0xD3C6, gb.regs.a);
    gb.regs.hl = 0x775E;
    func_01F_79E4(); return;
}

void func_01F_7730(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto func_01F_7730_jr_774C;
    gb.regs.hl = 0x775A;
    GetHandlerAddressInTable();
    gb.regs.a = gb_read(0xD398);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { WriteChannel1AndDE(); return; };
    WriteChannel4AndDE(); return;
  func_01F_7730_jr_774C:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF10, gb.regs.a);
  func_01F_7730_jr_774F:;
    gb_write(0xD3C6, gb.regs.a);
  func_01F_7730_jr_7752:;
    gb.regs.hl = wMusicChannel1_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    func_01F_7A07(); return;
}

void Data_01F_775A(void) {
    /* data: dw Data_01F_7763 */;
    /* data: dw Data_01F_7769 */;
}

void Data_01F_775E(void) {
    /* data: db $00, $20, $70, $80, $01 */;
}

void Data_01F_7763(void) {
    /* data: db $1D, $51, $82, $59, $C7, $03 */;
}

void Data_01F_7769(void) {
    /* data: db $00, $42, $50, $80, $08 */;
}

void func_01F_776E(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD361, gb.regs.a);
    gb.regs.hl = wMusicChannel1_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.a = 1;
    gb_write(0xD3C6, gb.regs.a);
    gb.regs.hl = 0x77D6;
    func_01F_79E4();
    gb.regs.a = 0xF0;
    gb_write(0xD3BF, gb.regs.a);
    gb.regs.hl = 0x77E0;
    func_01F_7AB7();
    WriteChannel1AndDE(); return;
}

void func_01F_7790(void) {
    gb.regs.hl = 0xD3E6;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { func_01F_77C0(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    func_01F_7AAC();
    if (GET_FLAG_Z()) { func_01F_77C0(); return; };
    alu_cp8(gb.regs.a, 0xE0);
    if (GET_FLAG_Z()) { jr_01F_77B3(); return; };
    alu_cp8(gb.regs.a, 0xD8);
    if (!GET_FLAG_C()) { jr_01F_77AF(); return; };
    gb.regs.a = 2;
}

void jr_01F_77A8(void) {
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.hl = 0x77D2;
    func_01F_7AE1(); return;
}

void jr_01F_77AF(void) {
    gb.regs.a = 1;
    jr_01F_77A8(); return;
}

void jr_01F_77B3(void) {
    gb.regs.hl = 0x77DB;
    WriteChannel4AndDE();
    gb.regs.a = 1;
    gb.regs.bc = 0xD398;
    jr_01F_77A8(); return;
}

void func_01F_77C0(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3C6, gb.regs.a);
    gb.regs.hl = wMusicChannel1_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    gb.regs.hl = 0x53D9;
    WriteChannel1AndDE();
    func_01F_7A01(); return;
}

void Data_01F_77D2(void) {
    /* data: db $00, $02, $00, $00 */;
}

void Data_01F_77D6(void) {
    /* data: db $00, $1D, $20, $80, $01 */;
}

void Data_01F_77DB(void) {
    /* data: db $00, $60, $20, $80, $01 */;
}

void Data_01F_77E0(void) {
    /* data: db $00, $40, $10, $A0, $87, $01 */;
}

void func_01F_77E6(void) {
    gb.regs.hl = 0x78A3;
    func_01F_79E4(); return;
}

void func_01F_77EC(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x51);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.hl = 0x7801;
    GetHandlerAddressInTable();
    func_01F_7A25(); return;
}

void Data_01F_7801(void) {
    /* data: dw Data_01F_78A8 */;
    /* data: dw Data_01F_78AB */;
    /* data: dw Data_01F_78AE */;
    /* data: dw Data_01F_78B1 */;
    /* data: dw Data_01F_78B4 */;
    /* data: dw Data_01F_78B7 */;
    /* data: dw Data_01F_78B4 */;
    /* data: dw Data_01F_78B1 */;
    /* data: dw Data_01F_78AE */;
    /* data: dw Data_01F_78B1 */;
    /* data: dw Data_01F_78B4 */;
    /* data: dw Data_01F_78B7 */;
    /* data: dw Data_01F_78BA */;
    /* data: dw Data_01F_78BD */;
    /* data: dw Data_01F_78C0 */;
    /* data: dw Data_01F_78BD */;
    /* data: dw Data_01F_78BA */;
    /* data: dw Data_01F_78B7 */;
    /* data: dw Data_01F_78BA */;
    /* data: dw Data_01F_78BD */;
    /* data: dw Data_01F_78C0 */;
    /* data: dw Data_01F_78C3 */;
    /* data: dw Data_01F_78C6 */;
    /* data: dw Data_01F_78C9 */;
    /* data: dw Data_01F_78C6 */;
    /* data: dw Data_01F_78C3 */;
    /* data: dw Data_01F_78C0 */;
    /* data: dw Data_01F_78C3 */;
    /* data: dw Data_01F_78C6 */;
    /* data: dw Data_01F_78C9 */;
    /* data: dw Data_01F_78CC */;
    /* data: dw Data_01F_78CF */;
    /* data: dw Data_01F_78D2 */;
    /* data: dw Data_01F_78CF */;
    /* data: dw Data_01F_78CC */;
    /* data: dw Data_01F_78C9 */;
    /* data: dw Data_01F_78CC */;
    /* data: dw Data_01F_78CF */;
    /* data: dw Data_01F_78D2 */;
    /* data: dw Data_01F_78D5 */;
    /* data: dw Data_01F_78D8 */;
    /* data: dw Data_01F_78DB */;
    /* data: dw Data_01F_78D8 */;
    /* data: dw Data_01F_78D5 */;
    /* data: dw Data_01F_78D2 */;
    /* data: dw Data_01F_78D5 */;
    /* data: dw Data_01F_78D8 */;
    /* data: dw Data_01F_78DB */;
    /* data: dw Data_01F_78DE */;
    /* data: dw Data_01F_78E1 */;
    /* data: dw Data_01F_78E4 */;
    /* data: dw Data_01F_78E1 */;
    /* data: dw Data_01F_78DE */;
    /* data: dw Data_01F_78DB */;
    /* data: dw Data_01F_78DE */;
    /* data: dw Data_01F_78E1 */;
    /* data: dw Data_01F_78E4 */;
    /* data: dw Data_01F_78E7 */;
    /* data: dw Data_01F_78EA */;
    /* data: dw Data_01F_78ED */;
    /* data: dw Data_01F_78EA */;
    /* data: dw Data_01F_78E7 */;
    /* data: dw Data_01F_78E4 */;
    /* data: dw Data_01F_78E7 */;
    /* data: dw Data_01F_78EA */;
    /* data: dw Data_01F_78ED */;
    /* data: dw Data_01F_78F0 */;
    /* data: dw Data_01F_78F3 */;
    /* data: dw Data_01F_78F6 */;
    /* data: dw Data_01F_78F3 */;
    /* data: dw Data_01F_78F0 */;
    /* data: dw Data_01F_78ED */;
    /* data: dw Data_01F_78F0 */;
    /* data: dw Data_01F_78F3 */;
    /* data: dw Data_01F_78F6 */;
    /* data: dw Data_01F_78F9 */;
    /* data: dw Data_01F_78FC */;
    /* data: dw Data_01F_78FF */;
    /* data: dw Data_01F_7902 */;
    /* data: dw Data_01F_78FF */;
    /* data: dw Data_01F_7902 */;
}

void Data_01F_78A3(void) {
    /* data: db $38, $80, $24, $80, $02 */;
}

void Data_01F_78A8(void) {
    /* data: db $25, $80, $02 */;
}

void Data_01F_78AB(void) {
    /* data: db $26, $80, $02 */;
}

void Data_01F_78AE(void) {
    /* data: db $27, $80, $02 */;
}

void Data_01F_78B1(void) {
    /* data: db $34, $80, $02 */;
}

void Data_01F_78B4(void) {
    /* data: db $35, $80, $02 */;
}

void Data_01F_78B7(void) {
    /* data: db $36, $80, $02 */;
}

void Data_01F_78BA(void) {
    /* data: db $37, $80, $02 */;
}

void Data_01F_78BD(void) {
    /* data: db $44, $80, $02 */;
}

void Data_01F_78C0(void) {
    /* data: db $45, $80, $02 */;
}

void Data_01F_78C3(void) {
    /* data: db $46, $80, $02 */;
}

void Data_01F_78C6(void) {
    /* data: db $47, $80, $02 */;
}

void Data_01F_78C9(void) {
    /* data: db $3C, $80, $03 */;
}

void Data_01F_78CC(void) {
    /* data: db $3D, $80, $03 */;
}

void Data_01F_78CF(void) {
    /* data: db $3E, $80, $03 */;
}

void Data_01F_78D2(void) {
    /* data: db $3F, $80, $03 */;
}

void Data_01F_78D5(void) {
    /* data: db $4C, $80, $03 */;
}

void Data_01F_78D8(void) {
    /* data: db $4D, $80, $03 */;
}

void Data_01F_78DB(void) {
    /* data: db $4E, $80, $03 */;
}

void Data_01F_78DE(void) {
    /* data: db $4F, $80, $03 */;
}

void Data_01F_78E1(void) {
    /* data: db $5C, $80, $03 */;
}

void Data_01F_78E4(void) {
    /* data: db $5D, $80, $03 */;
}

void Data_01F_78E7(void) {
    /* data: db $5E, $80, $03 */;
}

void Data_01F_78EA(void) {
    /* data: db $5F, $80, $03 */;
}

void Data_01F_78ED(void) {
    /* data: db $6C, $80, $03 */;
}

void Data_01F_78F0(void) {
    /* data: db $6D, $C0, $03 */;
}

void Data_01F_78F3(void) {
    /* data: db $6E, $C0, $03 */;
}

void Data_01F_78F6(void) {
    /* data: db $6F, $C0, $03 */;
}

void Data_01F_78F9(void) {
    /* data: db $7C, $C0, $03 */;
}

void Data_01F_78FC(void) {
    /* data: db $7D, $C0, $03 */;
}

void Data_01F_78FF(void) {
    /* data: db $7E, $C0, $03 */;
}

void Data_01F_7902(void) {
    /* data: db $7F, $C0, $03 */;
}

void func_01F_7905(void) {
    gb.regs.hl = 0x7933;
    func_01F_79E4(); return;
}

void func_01F_790B(void) {
    gb.regs.a = gb_read(0xD3E8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x7925;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_7925(void) {
    /* data: dw Data_01F_7938 */;
    /* data: dw Data_01F_793D */;
    /* data: dw Data_01F_7942 */;
    /* data: dw Data_01F_7947 */;
    /* data: dw Data_01F_794C */;
    /* data: dw Data_01F_7951 */;
    /* data: dw Data_01F_7956 */;
}

void Data_01F_7933(void) {
    /* data: db $00, $1F, $7F, $80, $01 */;
}

void Data_01F_7938(void) {
    /* data: db $00, $E0, $44, $80, $06 */;
}

void Data_01F_793D(void) {
    /* data: db $00, $C0, $45, $80, $06 */;
}

void Data_01F_7942(void) {
    /* data: db $00, $A0, $46, $80, $06 */;
}

void Data_01F_7947(void) {
    /* data: db $00, $80, $47, $80, $06 */;
}

void Data_01F_794C(void) {
    /* data: db $00, $60, $54, $80, $06 */;
}

void Data_01F_7951(void) {
    /* data: db $00, $40, $55, $80, $06 */;
}

void Data_01F_7956(void) {
    /* data: db $38, $20, $56, $C0, $06 */;
}

void func_01F_795B(void) {
    gb.regs.hl = 0x7994;
    func_01F_79E4(); return;
}

void func_01F_7961(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { func_01F_7A07(); return; };
    gb.regs.hl = 0x7976;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_7976(void) {
    /* data: dw Data_01F_7999 */;
    /* data: dw Data_01F_799E */;
    /* data: dw Data_01F_79A3 */;
    /* data: dw Data_01F_79A8 */;
    /* data: dw Data_01F_79AD */;
    /* data: dw Data_01F_79B2 */;
    /* data: dw Data_01F_79B7 */;
    /* data: dw Data_01F_79BC */;
    /* data: dw Data_01F_79C1 */;
    /* data: dw Data_01F_79C6 */;
    /* data: dw Data_01F_79CB */;
    /* data: dw Data_01F_79D0 */;
    /* data: dw Data_01F_79D5 */;
    /* data: dw Data_01F_79DA */;
    /* data: dw Data_01F_79DF */;
}

void Data_01F_7994(void) {
    /* data: db $00, $20, $27, $80, $02 */;
}

void Data_01F_7999(void) {
    /* data: db $00, $40, $25, $80, $02 */;
}

void Data_01F_799E(void) {
    /* data: db $00, $60, $17, $80, $02 */;
}

void Data_01F_79A3(void) {
    /* data: db $00, $80, $15, $80, $02 */;
}

void Data_01F_79A8(void) {
    /* data: db $00, $A0, $17, $80, $02 */;
}

void Data_01F_79AD(void) {
    /* data: db $00, $C0, $25, $80, $04 */;
}

void Data_01F_79B2(void) {
    /* data: db $00, $B0, $27, $80, $04 */;
}

void Data_01F_79B7(void) {
    /* data: db $00, $A0, $25, $80, $04 */;
}

void Data_01F_79BC(void) {
    /* data: db $00, $90, $17, $80, $04 */;
}

void Data_01F_79C1(void) {
    /* data: db $00, $80, $15, $C0, $04 */;
}

void Data_01F_79C6(void) {
    /* data: db $00, $70, $17, $80, $04 */;
}

void Data_01F_79CB(void) {
    /* data: db $00, $60, $25, $80, $04 */;
}

void Data_01F_79D0(void) {
    /* data: db $00, $50, $27, $80, $04 */;
}

void Data_01F_79D5(void) {
    /* data: db $00, $40, $25, $80, $04 */;
}

void Data_01F_79DA(void) {
    /* data: db $00, $30, $17, $80, $04 */;
}

void Data_01F_79DF(void) {
    /* data: db $2F, $20, $15, $C0, $04 */;
}

void func_01F_79E4(void) {
    gb.regs.a = 1;
    gb_write(0xD3C9, gb.regs.a);
}

void label_01F_79E9(void) {
    gb.regs.a = gb_read(0xD378);
    gb_write(0xD379, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD393, gb.regs.a);
    gb_write(0xD398, gb.regs.a);
    gb.regs.a = gb_read(0xD34F);
    gb.regs.a = alu_set(7, gb.regs.a);
    gb_write(0xD34F, gb.regs.a);
    WriteChannel4AndDE(); return;
}

void func_01F_7A01(void) {
    gb.regs.hl = 0x7A20;
    WriteChannel4AndDE();
}

void func_01F_7A07(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD379, gb.regs.a);
    gb_write(0xD393, gb.regs.a);
    gb_write(0xD398, gb.regs.a);
    gb_write(0xD3BF, gb.regs.a);
    gb_write(0xD3C9, gb.regs.a);
    gb.regs.a = gb_read(0xD34F);
    gb.regs.a = alu_res(7, gb.regs.a);
    gb_write(0xD34F, gb.regs.a);
    return;
}

void Data_01F_7A20(void) {
    /* data: db $00, $00, $00, $00, $01 */;
}

void func_01F_7A25(void) {
    gb.regs.b = 2;
    gb.regs.c = 0x22;
    WriteIOAndDE(); return;
}

void label_01F_7A2C(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD378, gb.regs.a);
    PlayActiveNoiseSfx(); return;
}

void func_01F_7A33(void) {
    gb.regs.a = gb_read(0xD378);
    gb_write(0xD379, gb.regs.a);
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_set(7, gb_read(gb.regs.hl)));
    gb.regs.a = 1;
    gb_write(0xD3C9, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD393, gb.regs.a);
    gb_write(0xD398, gb.regs.a);
    gb.regs.hl = 0x7A20;
    WriteChannel4AndDE();
    return;
}

void label_01F_7A51(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD393, gb.regs.a);
    gb_write(0xD398, gb.regs.a);
    gb_write(0xD379, gb.regs.a);
    gb_write(0xD3C9, gb.regs.a);
    gb.regs.hl = wMusicChannel2_loopCounter;
    gb_write(gb.regs.hl, alu_res(7, gb_read(gb.regs.hl)));
    return;
}

void GetHandlerAddressInTable(void) {
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.hl++;
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.h = gb.regs.b;
    gb.regs.l = gb.regs.c;
    return;
}

void DecrementValueAtDE(void) {
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void IncrementValueAtBC(void) {
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    return;
}

void WriteChannel1AndDE(void) {
    gb.regs.b = 5;
    gb.regs.c = 0x10;
    WriteIOAndDE(); return;
}

void WriteChannel2AndDE(void) {
    gb.regs.b = 4;
    gb.regs.c = 0x16;
    WriteIOAndDE(); return;
}

void WriteChannel3AndDE(void) {
    gb.regs.b = 5;
    gb.regs.c = 0x1A;
    WriteIOAndDE(); return;
}

void WriteChannel4AndDE(void) {
    gb.regs.b = 4;
    gb.regs.c = 0x20;
    WriteIOAndDE(); return;
}

void WriteIOAndDE(void) {
  WriteIOAndDE_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto WriteIOAndDE_loop;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void func_01F_7A9A(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3BC;
    jr_01F_7AB2(); return;
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3BD;
    jr_01F_7AB2(); return;
}

void func_01F_7AA6(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3BE;
    jr_01F_7AB2(); return;
}

void func_01F_7AAC(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3BF;
    jr_01F_7AB2(); return;
}

void jr_01F_7AB2(void) {
    DecrementValueAtDE();
    gb.regs.de = gb_pop16();
    return;
}

void func_01F_7AB7(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3C0;
    jr_01F_7AC1(); return;
}

void func_01F_7ABD(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3C4;
}

void jr_01F_7AC1(void) {
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.hl--);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl--;
    gb.regs.hl--;
    gb.regs.hl--;
    gb.regs.de = gb_pop16();
    return;
}

void func_01F_7AD0(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3C2;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.hl--);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl--;
    gb.regs.hl--;
    gb.regs.de = gb_pop16();
    return;
}

void func_01F_7AE1(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3C1;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.c = 0x13;
    gb_push16(gb.regs.bc);
    jr_01F_7AF5(); return;
}

void label_01F_7AEB(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3C5;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.c = 0x1D;
    gb_push16(gb.regs.bc);
    jr_01F_7AF5(); return;
}

void jr_01F_7AF5(void) {
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.b = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.l = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb.regs.l;
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.h;
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de = gb_pop16();
    return;
}

void func_01F_7B11(void) {
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3C3;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.c = 0x18;
    gb_push16(gb.regs.bc);
    jr_01F_7AF5(); return;
}

void func_01F_7B1B(void) {
    gb.regs.hl = 0x7B3E;
    label_01F_79E9(); return;
}

void func_01F_7B21(void) {
    DecrementValueAtDE();
    if (!GET_FLAG_Z()) return;
    IncrementValueAtBC();
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { func_01F_7A01(); return; };
    gb.regs.hl = 0x7B36;
    GetHandlerAddressInTable();
    WriteChannel4AndDE(); return;
}

void Data_01F_7B36(void) {
    /* data: dw Data_01F_7B48 */;
    /* data: dw Data_01F_7B4D */;
    /* data: dw Data_01F_7B52 */;
    /* data: dw Data_01F_7B57 */;
}

void Data_01F_7B3E(void) {
    /* data: db $00, $F8, $1D, $80, $01, $00, $F8, $1D, $80, $01 */;
}

void Data_01F_7B48(void) {
    /* data: db $00, $F8, $01, $80, $01 */;
}

void Data_01F_7B4D(void) {
    /* data: db $00, $59, $11, $80, $03 */;
}

void Data_01F_7B52(void) {
    /* data: db $01, $C8, $17, $80, $01 */;
}

void Data_01F_7B57(void) {
    /* data: db $00, $F5, $11, $80, $01 */;
}

void func_01F_7B5C(void) {
    gb.regs.a = 0xFF;
    gb_write(0xFF25, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xD355, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD369, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD361, gb.regs.a);
    gb_write(0xD371, gb.regs.a);
    gb_write(0xD379, gb.regs.a);
    gb_write(wMusicChannel1_loopCounter, gb.regs.a);
    gb_write(wMusicChannel2_loopCounter, gb.regs.a);
    gb_write(wMusicChannel3_loopCounter, gb.regs.a);
    gb_write(0xD34F, gb.regs.a);
    gb_write(0xD39E, gb.regs.a);
    gb_write(0xD39F, gb.regs.a);
    gb_write(0xD3D9, gb.regs.a);
    gb_write(0xD3DA, gb.regs.a);
    gb_write(0xD3B6, gb.regs.a);
    gb_write(0xD3B7, gb.regs.a);
    gb_write(0xD3B8, gb.regs.a);
    gb_write(0xD3B9, gb.regs.a);
    gb_write(0xD3BA, gb.regs.a);
    gb_write(0xD3BB, gb.regs.a);
    gb_write(0xD394, gb.regs.a);
    gb_write(0xD395, gb.regs.a);
    gb_write(0xD396, gb.regs.a);
    gb_write(0xD398, gb.regs.a);
    gb_write(0xD390, gb.regs.a);
    gb_write(0xD391, gb.regs.a);
    gb_write(0xD392, gb.regs.a);
    gb_write(0xD393, gb.regs.a);
    gb_write(0xD3C6, gb.regs.a);
    gb_write(0xD3C7, gb.regs.a);
    gb_write(0xD3C8, gb.regs.a);
    gb_write(0xD3C9, gb.regs.a);
    gb_write(0xD3A0, gb.regs.a);
    gb_write(0xD3A1, gb.regs.a);
    gb_write(0xD3A2, gb.regs.a);
    gb_write(0xD3A3, gb.regs.a);
    gb_write(0xD3CD, gb.regs.a);
    gb_write(0xD3D6, gb.regs.a);
    gb_write(0xD3D7, gb.regs.a);
    gb_write(0xD3D8, gb.regs.a);
    gb_write(0xD3DC, gb.regs.a);
    gb_write(0xD3E7, gb.regs.a);
    gb_write(0xD3E2, gb.regs.a);
    gb_write(0xD3E3, gb.regs.a);
    gb_write(0xD3E4, gb.regs.a);
    gb_write(0xD3E5, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFF12, gb.regs.a);
    gb_write(0xFF17, gb.regs.a);
    gb_write(0xFF21, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xFF14, gb.regs.a);
    gb_write(0xFF19, gb.regs.a);
    gb_write(0xFF23, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF10, gb.regs.a);
    gb_write(0xFF00, gb.regs.a);
}

void func_01F_7F80(void) {
    gb.regs.a = gb_read(0xFFA8);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_01F_7F9E(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 1);
    gb_write(0xFFA8, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_01F_7F9E(); return; };
    gb.regs.a = gb_read(0xFFA9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_01F_7F80_jr_7F95;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFFA9, gb.regs.a);
  func_01F_7F80_jr_7F95:;
    gb.regs.a = gb_read(0xFFAA);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_01F_7F9E(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 0x10);
    gb_write(0xFFAA, gb.regs.a);
}

void jr_01F_7F9E(void) {
    gb.regs.a = gb_read(0xFFAB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_01F_7FBE(); return; };
    gb.regs.a = alu_sub8(gb.regs.a, 1);
    gb_write(0xFFAB, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_01F_7FBE(); return; };
    gb.regs.a = gb_read(0xFFA9);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_C()) goto jr_01F_7F9E_jr_7FB4;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFA9, gb.regs.a);
  jr_01F_7F9E_jr_7FB4:;
    gb.regs.a = gb_read(0xFFAA);
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_C()) { jr_01F_7FBE(); return; };
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFAA, gb.regs.a);
}

void jr_01F_7FBE(void) {
    gb.regs.hl = 0xFFA9;
    gb.regs.a = gb_read(0xFF24);
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl++;
    gb.regs.a = alu_and8(gb.regs.a, 0x8F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF24, gb.regs.a);
    gb.regs.a = gb_read(0xFFF2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_01F_7FBE_jr_7FD7;
    gb_write(0xD360, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF2, gb.regs.a);
  jr_01F_7FBE_jr_7FD7:;
    gb.regs.a = gb_read(0xFFF3);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_01F_7FBE_jr_7FE2;
    gb_write(0xD370, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF3, gb.regs.a);
  jr_01F_7FBE_jr_7FE2:;
    gb.regs.a = gb_read(0xFFF4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_01F_7FBE_ret_7FED;
    gb_write(0xD378, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFF4, gb.regs.a);
  jr_01F_7FBE_ret_7FED:;
    return;
}
