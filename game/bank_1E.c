/* Auto-generated from LADX Disassembly - Bank 0x1E */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void PlayMusicTrack_1E(void);
void label_01E_4009(void);
void PlayMusicTrack_1E_EntryPoint(void);
void jr_01E_4028(void);
void DontPlayAudio_1E(void);
void BeginMusicTrack_1E(void);
void func_01E_403F(void);
void jr_01E_405B(void);
void Data_0E1_4068(void);
void Data_0E1_406D(void);
void label_01E_4072(void);
void jr_01E_4072(void);
void MusicDataPointerTable_1E(void);
void func_01E_40FF(void);
void func_01E_410E(void);
void func_01E_411B(void);
void func_01E_4137(void);
void jr_01E_4137(void);
void BeginMusicTrack_Dispatch_1E(void);
void Data_01E_41AF(void);
void label_01E_432F(void);
void label_01E_4359(void);
void func_01E_4387(void);
void func_01E_43AF(void);
void func_01E_43BA(void);
void func_01E_43C0(void);
void jr_01E_4445(void);
void label_01E_4457(void);
void jr_01E_4481(void);
void func_01E_4487(void);
void jr_01E_448D(void);
void func_01E_4493(void);
void func_01E_449C(void);
void jr_01E_44A3(void);
void label_01E_44A6(void);
void label_01E_44D7(void);
void jr_01E_44D7(void);
void label_01E_44DC(void);
void jr_01E_44E3(void);
void jr_01E_450E(void);
void label_01E_451F(void);
void label_01E_4533(void);
void jr_01E_453C(void);
void label_01E_4541(void);
void label_01E_4565(void);
void func_01E_4581(void);
void label_01E_4599(void);
void label_01E_45A3(void);
void label_01E_45A5(void);
void jr_01E_45A5(void);
void jr_01E_4633(void);
void jr_01E_463C(void);
void jr_01E_467A(void);
void jr_01E_467B(void);
void jr_01E_46AB(void);
void jr_01E_46B8(void);
void label_01E_46BD(void);
void jr_01E_46DB(void);
void label_01E_46EE(void);
void jr_01E_46EE(void);
void jr_01E_4715(void);
void jr_01E_4719(void);
void jr_01E_471C(void);
void jr_01E_4723(void);
void label_01E_473F(void);
void label_01E_474D(void);
void jr_01E_474D(void);
void label_01E_4752(void);
void label_01E_4770(void);
void func_01E_4772(void);
void label_01E_4794(void);
void jr_01E_4794(void);
void label_01E_47BD(void);
void jr_01E_47D6(void);
void func_01E_47F6(void);
void func_01E_4841(void);
void ContinueCurrentScreenMusic_1E(void);
void label_01E_4860(void);
void jr_01E_4862(void);
void label_01E_486B(void);
void label_01E_486E(void);
void jr_01E_4870(void);
void label_01E_4879(void);
void label_01E_4882(void);
void label_01E_48AF(void);
void jr_01E_48AF(void);
void func_01E_48B4(void);
void label_01E_48B8(void);
void label_01E_48C3(void);
void label_01E_48ED(void);
void jr_01E_48F5(void);
void label_01E_48FC(void);
void label_01E_4905(void);
void jr_01E_4911(void);
void jr_01E_491B(void);
void func_01E_4920(void);
void func_01E_492B(void);
void func_01E_493C(void);
void func_01E_4945(void);
void label_01E_4952(void);
void jr_01E_496A(void);
void jr_01E_498B(void);
void jr_01E_4992(void);
void Data_01E_4997(void);
void Data_01E_49BF(void);
void Data_01E_4A51(void);
void MusicSpeedData_1e_4a9d(void);
void MusicSpeedData_1e_4aac(void);
void MusicSpeedData_1e_4abb(void);
void MusicSpeedData_1e_4aca(void);
void MusicSpeedData_1e_4ad9(void);
void MusicSpeedData_1e_4ae8(void);
void MusicSpeedData_1e_4af7(void);
void MusicSpeedData_1e_4b06(void);
void HardcodedData_1e_4b15(void);
void MusicTailCave_Channel1_rest_1C0(void);
void MusicAnglersTunnel_Channel3_rest_1C0(void);
void MusicIntroWakeUp_Channel3_rest_1C0(void);
void MusicDreamShrineSleep_Channel3_rest_1C0(void);
void MusicSouthernShrine_Channel3_rest_1C0(void);
void MusicSouthernShrine_Channel4_rest_1C0(void);
void MusicInstrumentFullMoonCello_Channel1_rest_1C0(void);
void Music2dUnderground_Channel1_rest_1C0(void);
void Music2dUnderground_Channel3_rest_1C0(void);
void MusicOwl_Channel3_rest_1C0(void);
void MusicDreamShrineBed_Channel3_rest_1C0(void);
void MusicCave_Channel3_rest_1C0(void);
void MusicInstrumentConchHorn_Channel1_rest_1C0(void);
void MusicInstrumentSeaLilysBell_Channel1_rest_1C0(void);
void MusicInstrumentSurfHarp_Channel1_rest_1C0(void);
void MusicInstrumentCoralTriangle_Channel1_rest_1C0(void);
void MusicInstrumentOrganOfEveningCalm_Channel1_rest_1C0(void);
void MusicInstrumentThunderDrum_Channel1_rest_1C0(void);
void MusicInstrumentThunderDrum_Channel3_rest_1C0(void);
void MusicEggBalladDefault_Channel2_rest_1C0(void);
void MusicL2Sword_Channel3_rest_1C0(void);
void MusicFaceShrine_Channel3_rest_1C0(void);
void MusicWindFish_Channel3_rest_1C0(void);
void MusicEagleBossLoop_Channel3_rest_1C0(void);
void MusicFinalBossIntro_Channel1_rest_1C0(void);
void MusicFinalBossIntro_Channel3_rest_1C0(void);
void MusicBossDefeat_Channel3_rest_1C0(void);
void ChannelDefinition_1e_rest_1C0_1(void);
void MusicActivePowerUp(void);
void MusicObtainPowerup(void);
void MusicObtainPowerup_Channel1(void);
void MusicLoop_1e_4b40(void);
void MusicActivePowerUp_Channel1(void);
void MusicObtainPowerup_Channel2(void);
void MusicLoop_1e_4b48(void);
void MusicActivePowerUp_Channel2(void);
void MusicObtainPowerup_Channel3(void);
void MusicLoop_1e_4b50(void);
void MusicActivePowerUp_Channel3(void);
void MusicObtainPowerup_Channel4(void);
void MusicLoop_1e_4b58(void);
void MusicActivePowerUp_Channel4(void);
void ChannelDefinition_1e_4b5e(void);
void ChannelDefinition_1e_4b65(void);
void ChannelDefinition_1e_4b87(void);
void ChannelDefinition_1e_4b97(void);
void waveform_1e_4bf9(void);
void waveform_1e_4c09(void);
void ChannelDefinition_1e_4c19(void);
void ChannelDefinition_1e_4c1e(void);
void ChannelDefinition_1e_4c2a(void);
void ChannelDefinition_1e_4c2f(void);
void MusicMiniboss(void);
void MusicMiniboss_Channel1(void);
void MusicLoop_1e_4c45(void);
void MusicMiniboss_Channel2(void);
void MusicMiniboss_Channel3(void);
void MusicMiniboss_Channel4(void);
void ChannelDefinition_1e_4c71(void);
void ChannelDefinition_1e_4c78(void);
void ChannelDefinition_1e_4c7d(void);
void ChannelDefinition_1e_4c82(void);
void ChannelDefinition_1e_4c87(void);
void ChannelDefinition_1e_4c99(void);
void ChannelDefinition_1e_4cab(void);
void ChannelDefinition_1e_4cbd(void);
void ChannelDefinition_1e_4cf0(void);
void label_01E_4CFF(void);
void label_01E_4D1D(void);
void func_01E_4D2A(void);
void MusicTitleCutscene(void);
void MusicTitleCutscene_Channel1(void);
void MusicTitleCutscene_Channel2(void);
void MusicTitleCutscene_Channel3(void);
void ChannelDefinition_1e_506f(void);
void ChannelDefinition_1e_50a1(void);
void ChannelDefinition_1e_50a8(void);
void ChannelDefinition_1e_50b7(void);
void ChannelDefinition_1e_50ed(void);
void ChannelDefinition_1e_50f2(void);
void ChannelDefinition_1e_5100(void);
void ChannelDefinition_1e_5131(void);
void ChannelDefinition_1e_5138(void);
void ChannelDefinition_1e_5147(void);
void ChannelDefinition_1e_5151(void);
void ChannelDefinition_1e_51e3(void);
void MusicFileSelect(void);
void MusicFileSelect_Channel1(void);
void MusicLoop_1e_5216(void);
void MusicFileSelect_Channel2(void);
void MusicFileSelect_Channel3(void);
void MusicFileSelect_Channel4(void);
void ChannelDefinition_1e_5234(void);
void ChannelDefinition_1e_5253(void);
void ChannelDefinition_1e_5274(void);
void ChannelDefinition_1e_5293(void);
void MusicFinalBossIntro(void);
void MusicFinalBossIntro_Channel2(void);
void MusicFinalBoss(void);
void MusicFinalBoss_Channel2(void);
void MusicLoop_1e_52d6(void);
void MusicFinalBoss_Channel1(void);
void MusicLoop_1e_52fe(void);
void MusicFinalBoss_Channel3(void);
void MusicLoop_1e_53a6(void);
void MusicFinalBoss_Channel4(void);
void MusicLoop_1e_53c8(void);
void ChannelDefinition_1e_53ce(void);
void ChannelDefinition_1e_53da(void);
void ChannelDefinition_1e_5411(void);
void ChannelDefinition_1e_541d(void);
void ChannelDefinition_1e_542a(void);
void ChannelDefinition_1e_543b(void);
void ChannelDefinition_1e_5450(void);
void ChannelDefinition_1e_5461(void);
void ChannelDefinition_1e_5472(void);
void ChannelDefinition_1e_5482(void);
void ChannelDefinition_1e_5498(void);
void ChannelDefinition_1e_54ab(void);
void ChannelDefinition_1e_54ba(void);
void ChannelDefinition_1e_54c2(void);
void ChannelDefinition_1e_54d7(void);
void ChannelDefinition_1e_54de(void);
void ChannelDefinition_1e_54f3(void);
void ChannelDefinition_1e_5508(void);
void ChannelDefinition_1e_5518(void);
void ChannelDefinition_1e_551d(void);
void ChannelDefinition_1e_5520(void);
void MusicLoop_1e_5531(void);
void MusicLoop_1e_553b(void);
void MusicLoop_1e_5545(void);
void ChannelDefinition_1e_5551(void);
void ChannelDefinition_1e_5561(void);
void ChannelDefinition_1e_557c(void);
void ChannelDefinition_1e_55a8(void);
void ChannelDefinition_1e_55ec(void);
void ChannelDefinition_1e_5615(void);
void MusicEggMaze(void);
void MusicEggMaze_Channel1(void);
void MusicEggMaze_Channel2(void);
void MusicEggMaze_Channel3(void);
void ChannelDefinition_1e_56a7(void);
void ChannelDefinition_1e_56bc(void);
void ChannelDefinition_1e_56c7(void);
void ChannelDefinition_1e_56d2(void);
void ChannelDefinition_1e_56e3(void);
void ChannelDefinition_1e_56ed(void);
void ChannelDefinition_1e_56f9(void);
void ChannelDefinition_1e_5724(void);
void ChannelDefinition_1e_5735(void);
void MusicLoop_1e_5745(void);
void MusicLoop_1e_575f(void);
void MusicLoop_1e_5791(void);
void ChannelDefinition_1e_57b1(void);
void ChannelDefinition_1e_57db(void);
void ChannelDefinition_1e_5808(void);
void ChannelDefinition_1e_5814(void);
void ChannelDefinition_1e_583e(void);
void ChannelDefinition_1e_586b(void);
void ChannelDefinition_1e_589b(void);
void MusicTurtleRock(void);
void MusicTurtleRock_Channel1(void);
void MusicLoop_1e_58d6(void);
void MusicTurtleRock_Channel2(void);
void MusicTurtleRock_Channel3(void);
void ChannelDefinition_1e_5918(void);
void ChannelDefinition_1e_5921(void);
void ChannelDefinition_1e_5929(void);
void ChannelDefinition_1e_5931(void);
void ChannelDefinition_1e_5939(void);
void ChannelDefinition_1e_5961(void);
void ChannelDefinition_1e_rest_3C(void);
void MusicTailCave(void);
void MusicTailCaveCopy(void);
void MusicTailCave_Channel2(void);
void MusicTailCave_Channel3(void);
void ChannelDefinition_1e_5a3f(void);
void ChannelDefinition_1e_5a47(void);
void ChannelDefinition_1e_5a51(void);
void ChannelDefinition_1e_5a6a(void);
void ChannelDefinition_1e_5a77(void);
void ChannelDefinition_1e_5a7e(void);
void ChannelDefinition_1e_5a84(void);
void ChannelDefinition_1e_5a8a(void);
void ChannelDefinition_1e_5a90(void);
void ChannelDefinition_1e_5a96(void);
void ChannelDefinition_1e_5a9f(void);
void MusicBottleGrotto(void);
void MusicBottleGrotto_Channel1(void);
void MusicBottleGrotto_Channel2(void);
void MusicBottleGrotto_Channel3(void);
void ChannelDefinition_1e_5bdf(void);
void ChannelDefinition_1e_5c00(void);
void ChannelDefinition_1e_5c0b(void);
void ChannelDefinition_1e_5c2f(void);
void ChannelDefinition_1e_5c35(void);
void ChannelDefinition_1e_5c3a(void);
void ChannelDefinition_1e_5c3f(void);
void ChannelDefinition_1e_5c44(void);
void ChannelDefinition_1e_5c49(void);
void ChannelDefinition_1e_5c4e(void);
void ChannelDefinition_1e_5c5e(void);
void ChannelDefinition_1e_5c8d(void);
void ChannelDefinition_1e_5c96(void);
void ChannelDefinition_1e_5ca1(void);
void MusicKeyCavern(void);
void MusicKeyCavern_Channel1(void);
void MusicKeyCavern_Channel2(void);
void MusicKeyCavern_Channel3(void);
void ChannelDefinition_1e_5d36(void);
void ChannelDefinition_1e_5d4d(void);
void ChannelDefinition_1e_rest_2D(void);
void ChannelDefinition_1e_5d6d(void);
void ChannelDefinition_1e_5d75(void);
void ChannelDefinition_1e_5d86(void);
void ChannelDefinition_1e_5d98(void);
void MusicAnglersTunnel(void);
void MusicAnglersTunnel_Channel1(void);
void MusicAnglersTunnel_Channel2(void);
void ChannelDefinition_1e_5dd6(void);
void ChannelDefinition_1e_5e20(void);
void ChannelDefinition_1e_5e4d(void);
void ChannelDefinition_1e_5e5f(void);
void MusicKanaletCastle(void);
void MusicKanaletCastleCopy(void);
void MusicKanaletCastle_Channel2(void);
void MusicKanaletCastle_Channel1(void);
void MusicLoop_1e_5e8b(void);
void MusicKanaletCastle_Channel3(void);
void ChannelDefinition_1e_5e9b(void);
void ChannelDefinition_1e_5ead(void);
void ChannelDefinition_1e_5ebe(void);
void ChannelDefinition_1e_5ecf(void);
void ChannelDefinition_1e_5ee0(void);
void MusicAfterBoss(void);
void MusicAfterBoss_Channel1(void);
void MusicLoop_1e_5efb(void);
void MusicAfterBoss_Channel2(void);
void MusicLoop_1e_5f0d(void);
void ChannelDefinition_1e_5f19(void);
void ChannelDefinition_1e_5f2b(void);
void MusicBoss(void);
void MusicBoss_Channel1(void);
void MusicBoss_Channel2(void);
void MusicBoss_Channel3(void);
void MusicBoss_Channel4(void);
void ChannelDefinition_1e_5f9d(void);
void ChannelDefinition_1e_5fbc(void);
void ChannelDefinition_1e_5fc7(void);
void ChannelDefinition_1e_5fe6(void);
void ChannelDefinition_1e_5ff1(void);
void ChannelDefinition_1e_6003(void);
void ChannelDefinition_1e_6015(void);
void ChannelDefinition_1e_6022(void);
void ChannelDefinition_1e_602d(void);
void ChannelDefinition_1e_6030(void);
void ChannelDefinition_1e_6048(void);
void ChannelDefinition_1e_6053(void);
void MusicObtainInstrument(void);
void MusicObtainInstrument_Channel1(void);
void MusicObtainInstrument_Channel2(void);
void MusicObtainInstrument_Channel3(void);
void ChannelDefinition_1e_6087(void);
void MusicIntroWakeUp(void);
void MusicIntroWakeUp_Channel1(void);
void MusicLoop_1e_60d3(void);
void MusicIntroWakeUp_Channel2(void);
void ChannelDefinition_1e_60e3(void);
void MusicOverworldSwordless(void);
void MusicOverworldSwordless_Channel1(void);
void MusicOverworldSwordless_Channel2(void);
void MusicOverworldSwordless_Channel3(void);
void ChannelDefinition_1e_6154(void);
void ChannelDefinition_1e_618f(void);
void ChannelDefinition_1e_6196(void);
void ChannelDefinition_1e_619d(void);
void ChannelDefinition_1e_61e2(void);
void ChannelDefinition_1e_6226(void);
void ChannelDefinition_1e_6267(void);
void MusicDreamShrineSleep(void);
void MusicDreamShrineSleep_Channel1(void);
void MusicDreamShrineSleep_Channel2(void);
void ChannelDefinition_1e_62f2(void);
void ChannelDefinition_1e_6304(void);
void MusicCatfishsMaw(void);
void MusicCatfishsMaw_Channel1(void);
void MusicCatfishsMaw_Channel2(void);
void MusicCatfishsMaw_Channel3(void);
void ChannelDefinition_1e_6365(void);
void ChannelDefinition_1e_638b(void);
void ChannelDefinition_1e_63a9(void);
void ChannelDefinition_1e_63c7(void);
void ChannelDefinition_1e_63e7(void);
void ChannelDefinition_1e_6418(void);
void ChannelDefinition_1e_6433(void);
void ChannelDefinition_1e_rest_60(void);
void ChannelDefinition_1e_645a(void);
void MusicSouthernShrine(void);
void MusicSouthernShrine_Channel1(void);
void MusicLoop_1e_6488(void);
void MusicSouthernShrine_Channel2(void);
void MusicLoop_1e_64b8(void);
void ChannelDefinition_1e_64c0(void);
void ChannelDefinition_1e_64ca(void);
void ChannelDefinition_1e_64d7(void);
void ChannelDefinition_1e_64e0(void);
void ChannelDefinition_1e_64e9(void);
void ChannelDefinition_1e_64f2(void);
void ChannelDefinition_1e_64fb(void);
void ChannelDefinition_1e_6504(void);
void ChannelDefinition_1e_650d(void);
void ChannelDefinition_1e_6516(void);
void ChannelDefinition_1e_651f(void);
void ChannelDefinition_1e_6528(void);
void ChannelDefinition_1e_6531(void);
void ChannelDefinition_1e_6542(void);
void ChannelDefinition_1e_654b(void);
void MusicFaceShrine(void);
void MusicFaceShrine_Channel1(void);
void MusicLoop_1e_6588(void);
void MusicFaceShrine_Channel2(void);
void Music2dUnderground(void);
void Music2dUnderground_Channel2(void);
void ChannelDefinition_1e_6625(void);
void MusicOwl(void);
void MusicOwl_Channel1(void);
void MusicLoop_1e_6647(void);
void MusicOwl_Channel2(void);
void ChannelDefinition_1e_6653(void);
void MusicDreamShrineBed(void);
void MusicDreamShrineBed_Channel1(void);
void MusicLoop_1e_6675(void);
void MusicDreamShrineBed_Channel2(void);
void MusicLoop_1e_667f(void);
void ChannelDefinition_1e_6685(void);
void ChannelDefinition_1e_668f(void);
void ChannelDefinition_1e_669b(void);
void ChannelDefinition_1e_66ab(void);
void MusicDreamShrineDream(void);
void MusicDreamShrineDream_Channel1(void);
void MusicDreamShrineDream_Channel2(void);
void MusicDreamShrineDream_Channel3(void);
void ChannelDefinition_1e_66f6(void);
void ChannelDefinition_1e_6700(void);
void ChannelDefinition_1e_6719(void);
void ChannelDefinition_1e_6745(void);
void MusicCave(void);
void MusicCave_Channel1(void);
void MusicCave_Channel2(void);
void MusicLoop_1e_6792(void);
void MusicEaglesTower(void);
void MusicEaglesTower_Channel1(void);
void MusicLoop_1e_67a9(void);
void MusicEaglesTower_Channel3(void);
void MusicEaglesTower_Channel2(void);
void ChannelDefinition_1e_6825(void);
void ChannelDefinition_1e_6839(void);
void ChannelDefinition_1e_6856(void);
void ChannelDefinition_1e_6866(void);
void ChannelDefinition_1e_6873(void);
void ChannelDefinition_1e_687f(void);
void ChannelDefinition_1e_688b(void);
void ChannelDefinition_1e_6897(void);
void ChannelDefinition_1e_68c4(void);
void ChannelDefinition_1e_68db(void);
void ChannelDefinition_1e_68fc(void);
void ChannelDefinition_1e_6935(void);
void ChannelDefinition_1e_6965(void);
void ChannelDefinition_1e_rest_78(void);
void MusicOpenAnglersTunnel(void);
void MusicOpenAnglersTunnel_Channel1(void);
void MusicOpenAnglersTunnel_Channel2(void);
void MusicOpenAnglersTunnel_Channel3(void);
void ChannelDefinition_1e_69a2(void);
void ChannelDefinition_1e_69b4(void);
void ChannelDefinition_1e_69b7(void);
void ChannelDefinition_1e_69c9(void);
void ChannelDefinition_1e_69cc(void);
void ChannelDefinition_1e_69da(void);
void MusicMarinOnBeach(void);
void MusicMarinOnBeach_Channel1(void);
void MusicMarinOnBeach_Channel2(void);
void MusicLoop_1e_69f8(void);
void MusicMarinOnBeach_Channel3(void);
void ChannelDefinition_1e_6a08(void);
void ChannelDefinition_1e_6a12(void);
void ChannelDefinition_1e_6a1c(void);
void MusicMarinBeachTalk(void);
void MusicMarinBeachTalk_Channel2(void);
void MusicLoop_1e_6a32(void);
void MusicMarinBeachTalk_Channel1(void);
void MusicLoop_1e_6a5c(void);
void MusicMarinBeachTalk_Channel3(void);
void MusicLoop_1e_6a80(void);
void ChannelDefinition_1e_6a96(void);
void ChannelDefinition_1e_6a9b(void);
void ChannelDefinition_1e_6aa5(void);
void ChannelDefinition_1e_6aa8(void);
void ChannelDefinition_1e_rest_44(void);
void ChannelDefinition_1e_6b28(void);
void ChannelDefinition_1e_6b40(void);
void ChannelDefinition_1e_6b46(void);
void ChannelDefinition_1e_6b78(void);
void MusicMarinUnused(void);
void MusicMarinUnused_Channel1(void);
void MusicMarinUnused_Channel2(void);
void MusicLoop_1e_6c20(void);
void MusicLoop_1e_6c22(void);
void MusicMarinUnused_Channel3(void);
void ChannelDefinition_1e_6c2e(void);
void ChannelDefinition_1e_6c38(void);
void ChannelDefinition_1e_6c40(void);
void MusicEagleBossLoop(void);
void MusicEagleBossLoop_Channel1(void);
void MusicEagleBossLoop_Channel2(void);
void MusicEagleBossTransition(void);
void MusicEagleBossTransition_Channel1(void);
void MusicEagleBossTransition_Channel2(void);
void MusicEagleBossTransition_Channel3(void);
void MusicEagleBossTransition_Channel4(void);
void ChannelDefinition_1e_6ce9(void);
void ChannelDefinition_1e_6cf6(void);
void ChannelDefinition_1e_6d03(void);
void ChannelDefinition_1e_rest_23(void);
void ChannelDefinition_1e_rest_A_1(void);
void ChannelDefinition_1e_rest_5(void);
void ChannelDefinition_1e_rest_4(void);
void ChannelDefinition_1e_rest_A_2(void);
void ChannelDefinition_1e_rest_2(void);
void ChannelDefinition_1e_rest_6(void);
void ChannelDefinition_1e_rest_1(void);
void ChannelDefinition_1e_rest_0(void);
void MusicLoop_1e_6d30(void);
void waveform_1e_6d38(void);
void waveform_1e_6d48(void);
void waveform_1e_6d58(void);
void waveform_1e_6d68(void);
void ChannelDefinition_1e_6d78(void);
void ChannelDefinition_1e_6d7d(void);
void ChannelDefinition_1e_6d82(void);
void ChannelDefinition_1e_6d87(void);
void ChannelDefinition_1e_6d8c(void);
void ChannelDefinition_1e_6d91(void);
void ChannelDefinition_1e_6d96(void);
void ChannelDefinition_1e_6d9b(void);
void ChannelDefinition_1e_6da0(void);
void ChannelDefinition_1e_6da5(void);
void ChannelDefinition_1e_6daa(void);
void ChannelDefinition_1e_6daf(void);
void ChannelDefinition_1e_6db4(void);
void ChannelDefinition_1e_6db9(void);
void ChannelDefinition_1e_6dbe(void);
void ChannelDefinition_1e_6dc3(void);
void ChannelDefinition_1e_6dc8(void);
void ChannelDefinition_1e_6dcd(void);
void ChannelDefinition_1e_6dd2(void);
void ChannelDefinition_1e_6de1(void);
void ChannelDefinition_1e_6de6(void);
void ChannelDefinition_1e_6deb(void);
void ChannelDefinition_1e_6df0(void);
void ChannelDefinition_1e_6df5(void);
void ChannelDefinition_1e_6dfa(void);
void ChannelDefinition_1e_6dff(void);
void ChannelDefinition_1e_6e09(void);
void ChannelDefinition_1e_6e0e(void);
void ChannelDefinition_1e_6e13(void);
void ChannelDefinition_1e_6e18(void);
void ChannelDefinition_1e_6e1d(void);
void ChannelDefinition_1e_6e22(void);
void ChannelDefinition_1e_6e27(void);
void ChannelDefinition_1e_6e2c(void);
void ChannelDefinition_1e_6e31(void);
void ChannelDefinition_1e_6e36(void);
void ChannelDefinition_1e_6e3b(void);
void ChannelDefinition_1e_6e40(void);
void ChannelDefinition_1e_6e45(void);
void ChannelDefinition_1e_6e4a(void);
void ChannelDefinition_1e_6e4f(void);
void ChannelDefinition_1e_6e54(void);
void ChannelDefinition_1e_6e59(void);
void ChannelDefinition_1e_6e5e(void);
void ChannelDefinition_1e_6e63(void);
void ChannelDefinition_1e_6e68(void);
void ChannelDefinition_1e_6e6d(void);
void ChannelDefinition_1e_6e72(void);
void ChannelDefinition_1e_6e77(void);
void ChannelDefinition_1e_6e7c(void);
void ChannelDefinition_1e_6e7f(void);
void ChannelDefinition_1e_6e85(void);
void ChannelDefinition_1e_6e88(void);
void ChannelDefinition_1e_6e8b(void);
void ChannelDefinition_1e_6e8e(void);
void ChannelDefinition_1e_6e91(void);
void ChannelDefinition_1e_6e94(void);
void ChannelDefinition_1e_6e97(void);
void ChannelDefinition_1e_6e9a(void);
void ChannelDefinition_1e_6e9d(void);
void ChannelDefinition_1e_6ea0(void);
void ChannelDefinition_1e_6ea4(void);
void ChannelDefinition_1e_6ea8(void);
void ChannelDefinition_1e_6eac(void);
void ChannelDefinition_1e_6eb0(void);
void ChannelDefinition_1e_6eb4(void);
void MusicEggBalladDefault(void);
void MusicEggBalladDefault_Channel1(void);
void MusicEggBalladDefault_Channel3(void);
void ChannelDefinition_1e_701d(void);
void ChannelDefinition_1e_7026(void);
void MusicEggBalladBell(void);
void MusicEggBalladBell_Channel1(void);
void MusicEggBalladBell_Channel2(void);
void MusicEggBalladHarp_Channel1(void);
void MusicEggBalladBell_Channel3(void);
void MusicEggBalladHarp_Channel3(void);
void MusicEggBalladMarimba_Channel3(void);
void MusicEggBalladTriangle_Channel3(void);
void MusicEggBalladOrgan_Channel3(void);
void MusicEggBalladAll_Channel3(void);
void ChannelDefinition_1e_704d(void);
void ChannelDefinition_1e_7058(void);
void ChannelDefinition_1e_7089(void);
void ChannelDefinition_1e_7091(void);
void ChannelDefinition_1e_7097(void);
void ChannelDefinition_1e_70c0(void);
void MusicEggBalladHarp(void);
void MusicEggBalladHarp_Channel2(void);
void MusicEggBalladMarimba_Channel2(void);
void MusicEggBalladTriangle_Channel2(void);
void MusicEggBalladAll_Channel1(void);
void ChannelDefinition_1e_7107(void);
void ChannelDefinition_1e_7114(void);
void ChannelDefinition_1e_7123(void);
void ChannelDefinition_1e_7133(void);
void MusicEggBalladMarimba(void);
void MusicEggBalladMarimba_Channel1(void);
void MusicEggBalladTriangle_Channel1(void);
void ChannelDefinition_1e_716d(void);
void ChannelDefinition_1e_7176(void);
void ChannelDefinition_1e_718a(void);
void MusicEggBalladTriangle(void);
void MusicEggBalladTriangle_Channel4(void);
void MusicEggBalladOrgan_Channel4(void);
void ChannelDefinition_1e_71b5(void);
void MusicEggBalladOrgan(void);
void MusicEggBalladOrgan_Channel1(void);
void MusicEggBalladOrgan_Channel2(void);
void ChannelDefinition_1e_71f7(void);
void ChannelDefinition_1e_7204(void);
void ChannelDefinition_1e_7213(void);
void ChannelDefinition_1e_7237(void);
void MusicEggBalladAll(void);
void MusicEggBalladAll_Channel2(void);
void MusicEggBalladAll_Channel4(void);
void ChannelDefinition_1e_727d(void);
void ChannelDefinition_1e_7282(void);
void ChannelDefinition_1e_7295(void);
void MusicInstrumentFullMoonCello(void);
void MusicInstrumentFullMoonCello_Channel2(void);
void MusicInstrumentFullMoonCello_Channel3(void);
void ChannelDefinition_1e_72ba(void);
void ChannelDefinition_1e_72c3(void);
void ChannelDefinition_1e_72c8(void);
void waveform_1e_72e1(void);
void MusicInstrumentConchHorn(void);
void MusicInstrumentConchHorn_Channel2(void);
void MusicInstrumentConchHorn_Channel3(void);
void ChannelDefinition_1e_7306(void);
void waveform_1e_730f(void);
void ChannelDefinition_1e_731f(void);
void ChannelDefinition_1e_7324(void);
void MusicInstrumentSeaLilysBell(void);
void MusicInstrumentSeaLilysBell_Channel2(void);
void MusicInstrumentSeaLilysBell_Channel3(void);
void ChannelDefinition_1e_735a(void);
void ChannelDefinition_1e_736a(void);
void ChannelDefinition_1e_7380(void);
void MusicInstrumentSurfHarp(void);
void MusicInstrumentSurfHarp_Channel2(void);
void MusicInstrumentSurfHarp_Channel3(void);
void ChannelDefinition_1e_73b3(void);
void waveform_1e_73bc(void);
void ChannelDefinition_1e_73cc(void);
void ChannelDefinition_1e_73d1(void);
void MusicInstrumentWindMarimba(void);
void MusicInstrumentWindMarimba_Channel1(void);
void MusicInstrumentWindMarimba_Channel2(void);
void MusicInstrumentWindMarimba_Channel3(void);
void ChannelDefinition_1e_7433(void);
void ChannelDefinition_1e_7458(void);
void waveform_1e_747c(void);
void ChannelDefinition_1e_748c(void);
void MusicInstrumentCoralTriangle(void);
void MusicInstrumentCoralTriangle_Channel2(void);
void MusicInstrumentCoralTriangle_Channel3(void);
void ChannelDefinition_1e_74d3(void);
void ChannelDefinition_1e_74ec(void);
void ChannelDefinition_1e_74fe(void);
void ChannelDefinition_1e_7505(void);
void waveform_1e_750c(void);
void ChannelDefinition_1e_751c(void);
void ChannelDefinition_1e_rest_1C0_2(void);
void MusicInstrumentOrganOfEveningCalm(void);
void MusicInstrumentOrganOfEveningCalm_Channel2(void);
void MusicInstrumentOrganOfEveningCalm_Channel3(void);
void ChannelDefinition_1e_755f(void);
void waveform_1e_7568(void);
void ChannelDefinition_1e_7578(void);
void ChannelDefinition_1e_757d(void);
void MusicInstrumentThunderDrum(void);
void MusicInstrumentThunderDrum_Channel2(void);
void MusicInstrumentThunderDrum_Channel4(void);
void ChannelDefinition_1e_75b5(void);
void ChannelDefinition_1e_75cb(void);
void ChannelDefinition_1e_75e2(void);
void ChannelDefinition_1e_rest_1C0_3(void);
void MusicMarinSing(void);
void MusicMarinSing_Channel1(void);
void MusicLoop_1e_760d(void);
void MusicMarinSing_Channel2(void);
void MusicMarinSing_Channel3(void);
void ChannelDefinition_1e_7627(void);
void ChannelDefinition_1e_7630(void);
void ChannelDefinition_1e_7634(void);
void ChannelDefinition_1e_764a(void);
void ChannelDefinition_1e_765d(void);
void ChannelDefinition_1e_768a(void);
void MusicLearnBallad(void);
void MusicLearnBallad_Channel1(void);
void MusicLoop_1e_76a0(void);
void MusicLearnBallad_Channel2(void);
void MusicLearnBallad_Channel3(void);
void ChannelDefinition_1e_76be(void);
void ChannelDefinition_1e_76c7(void);
void waveform_1e_76db(void);
void ChannelDefinition_1e_76eb(void);
void MusicManbosMambo(void);
void MusicManbosMambo_Channel1(void);
void MusicManbosMambo_Channel2(void);
void MusicManbosMambo_Channel3(void);
void MusicManbosMambo_Channel4(void);
void ChannelDefinition_1e_7758(void);
void ChannelDefinition_1e_77a3(void);
void ChannelDefinition_1e_7827(void);
void ChannelDefinition_1e_788c(void);
void MusicLoop_1e_78bb(void);
void ChannelDefinition_1e_rest_1C0_4(void);
void MusicLoop_1e_78c7(void);
void ChannelDefinition_1e_rest_1C0_5(void);
void MusicGhostHouse(void);
void MusicGhostHouse_Channel1(void);
void MusicGhostHouse_Channel2(void);
void MusicGhostHouse_Channel3(void);
void MusicLoop_1e_78ec(void);
void ChannelDefinition_1e_78f2(void);
void ChannelDefinition_1e_7960(void);
void waveform_1e_79a7(void);
void ChannelDefinition_1e_79b7(void);
void ChannelDefinition_1e_79be(void);
void MusicRoosterRevival(void);
void MusicRoosterRevival_Channel1(void);
void MusicRoosterRevival_Channel2(void);
void MusicRoosterRevival_Channel3(void);
void MusicLoop_1e_7a2c(void);
void ChannelDefinition_1e_7a32(void);
void ChannelDefinition_1e_7a3e(void);
void ChannelDefinition_1e_7a43(void);
void ChannelDefinition_1e_7a48(void);
void ChannelDefinition_1e_7a4d(void);
void ChannelDefinition_1e_7a51(void);
void MusicL2Sword(void);
void MusicL2Sword_Channel1(void);
void MusicLoop_1e_7a69(void);
void MusicL2Sword_Channel2(void);
void MusicLoop_1e_7a75(void);
void ChannelDefinition_1e_7a7b(void);
void ChannelDefinition_1e_7a82(void);
void ChannelDefinition_1e_7a87(void);
void ChannelDefinition_1e_7b16(void);
void ChannelDefinition_1e_7b1b(void);
void ChannelDefinition_1e_7b1f(void);
void MusicHenhouse(void);
void MusicHenhouse_Channel1(void);
void MusicHenhouse_Channel2(void);
void MusicHenhouse_Channel3(void);
void ChannelDefinition_1e_7b45(void);
void ChannelDefinition_1e_7b61(void);
void ChannelDefinition_1e_7b90(void);
void MusicHeartContainer(void);
void MusicHeartContainer_Channel1(void);
void MusicHeartContainer_Channel2(void);
void MusicHeartContainer_Channel3(void);
void MusicHeartContainer_Channel4(void);
void ChannelDefinition_1e_7bc9(void);
void ChannelDefinition_1e_7be0(void);
void waveform_1e_7bf6(void);
void ChannelDefinition_1e_7c06(void);
void ChannelDefinition_1e_7c1a(void);
void MusicWindFish(void);
void MusicWindFish_Channel1(void);
void MusicLoop_1e_7c35(void);
void MusicWindFish_Channel2(void);
void MusicWindFish_Channel4(void);
void ChannelDefinition_1e_7c47(void);
void ChannelDefinition_1e_7c4e(void);
void ChannelDefinition_1e_7c93(void);
void ChannelDefinition_1e_7cf9(void);
void MusicBossDefeat(void);
void MusicBossDefeat_Channel1(void);
void MusicLoop_1e_7d0c(void);
void MusicBossDefeat_Channel2(void);
void MusicLoop_1e_7d14(void);
void ChannelDefinition_1e_7d28(void);
void ChannelDefinition_1e_7d33(void);
void ChannelDefinition_1e_7d36(void);
void ChannelDefinition_1e_7d3c(void);
void ChannelDefinition_1e_7d41(void);
void ChannelDefinition_1e_7d46(void);
void MusicFinalBossDefeat(void);
void MusicFinalBossDefeat_Channel1(void);
void MusicLoop_1e_7d58(void);
void MusicFinalBossDefeat_Channel2(void);
void MusicLoop_1e_7d60(void);
void MusicFinalBossDefeat_Channel3(void);
void MusicLoop_1e_7d68(void);
void ChannelDefinition_1e_7d6e(void);
void ChannelDefinition_1e_7d7a(void);
void ChannelDefinition_1e_7d84(void);
void ChannelDefinition_1e_7df8(void);
void MusicFileSelectZelda(void);
void MusicFileSelectZelda_Channel1(void);
void MusicLoop_1e_7e11(void);
void MusicFileSelectZelda_Channel2(void);
void MusicLoop_1e_7e19(void);
void MusicFileSelectZelda_Channel3(void);
void MusicLoop_1e_7e21(void);
void MusicFileSelectZelda_Channel4(void);
void MusicLoop_1e_7e29(void);
void ChannelDefinition_1e_7e2f(void);
void ChannelDefinition_1e_7e3a(void);
void waveform_1e_7e45(void);
void ChannelDefinition_1e_7e55(void);
void ChannelDefinition_1e_7e60(void);
void ChannelDefinition_1e_7e70(void);
void ChannelDefinition_1e_7e96(void);
void waveform_1e_7eee(void);
void ChannelDefinition_1e_7efe(void);
void ChannelDefinition_1e_7f76(void);

void PlayMusicTrack_1E(void) {
    PlayMusicTrack_1E_EntryPoint(); return;
}

void label_01E_4009(void) {
    gb.regs.hl = 0xD300;
  label_01E_4009_loop_400C:;
    gb_write(gb.regs.hl, 0);
    gb.regs.l = alu_inc8(gb.regs.l);
    if (!GET_FLAG_Z()) goto label_01E_4009_loop_400C;
    gb.regs.a = 0x80;
    gb_write(0xFF26, gb.regs.a);
    gb.regs.a = 0x77;
    gb_write(0xFF24, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xFF25, gb.regs.a);
    return;
}

void PlayMusicTrack_1E_EntryPoint(void) {
    gb.regs.hl = 0xD368;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { BeginMusicTrack_1E(); return; };
    func_01E_403F();
}

void jr_01E_4028(void) {
    func_01E_4581();
}

void DontPlayAudio_1E(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD360, gb.regs.a);
    gb_write(0xD368, gb.regs.a);
    gb_write(0xD370, gb.regs.a);
    gb_write(0xD378, gb.regs.a);
    return;
}

void BeginMusicTrack_1E(void) {
    gb_write(gb.regs.hl, gb.regs.a);
    BeginMusicTrack_Dispatch_1E();
    jr_01E_4028(); return;
}

void func_01E_403F(void) {
    gb.regs.de = 0xD393;
    gb.regs.hl = 0xD378;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_01E_403F_jr_4050;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01E_405B(); return; };
    return;
  func_01E_403F_jr_4050:;
    gb.regs.a = 1;
    gb_write(0xD379, gb.regs.a);
    gb.regs.hl = 0x4068;
    label_01E_4072(); return;
}

void jr_01E_405B(void) {
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD379, gb.regs.a);
    gb.regs.hl = 0x406D;
    jr_01E_4072(); return;
}

void Data_0E1_4068(void) {
    /* data: db $3B */;
    /* data: db $80 */;
    /* data: db $07 */;
    /* data: db $C0 */;
    /* data: db $02 */;
}

void Data_0E1_406D(void) {
    /* data: db $00 */;
    /* data: db $42 */;
    /* data: db $02 */;
    /* data: db $C0 */;
    /* data: db $04 */;
}

void label_01E_4072(void) {
    jr_01E_4072();
}

void jr_01E_4072(void) {
    gb.regs.b = 4;
    gb.regs.c = 0x20;
  jr_01E_4072_loop_4076:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto jr_01E_4072_loop_4076;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void MusicDataPointerTable_1E(void) {
    /* data: dw MusicFileSelect */;
    /* data: dw MusicEggMaze */;
    /* data: dw MusicKanaletCastle */;
    /* data: dw MusicTailCave */;
    /* data: dw MusicBottleGrotto */;
    /* data: dw MusicKeyCavern */;
    /* data: dw MusicAnglersTunnel */;
    /* data: dw MusicAfterBoss */;
    /* data: dw MusicBoss */;
    /* data: dw MusicTitleCutscene */;
    /* data: dw MusicObtainInstrument */;
    /* data: dw MusicIntroWakeUp */;
    /* data: dw MusicOverworldSwordless */;
    /* data: dw MusicDreamShrineSleep */;
    /* data: dw MusicSouthernShrine */;
    /* data: dw MusicInstrumentFullMoonCello */;
    /* data: dw Music2dUnderground */;
    /* data: dw MusicOwl */;
    /* data: dw MusicFinalBoss */;
    /* data: dw MusicDreamShrineBed */;
    /* data: dw MusicHeartContainer */;
    /* data: dw MusicCave */;
    /* data: dw MusicObtainPowerup */;
    /* data: dw MusicInstrumentConchHorn */;
    /* data: dw MusicInstrumentSeaLilysBell */;
    /* data: dw MusicInstrumentSurfHarp */;
    /* data: dw MusicInstrumentWindMarimba */;
    /* data: dw MusicInstrumentCoralTriangle */;
    /* data: dw MusicInstrumentOrganOfEveningCalm */;
    /* data: dw MusicInstrumentThunderDrum */;
    /* data: dw MusicMarinSing */;
    /* data: dw MusicManbosMambo */;
    /* data: dw MusicEggBalladDefault */;
    /* data: dw MusicEggBalladBell */;
    /* data: dw MusicEggBalladHarp */;
    /* data: dw MusicEggBalladMarimba */;
    /* data: dw MusicEggBalladTriangle */;
    /* data: dw MusicEggBalladOrgan */;
    /* data: dw MusicEggBalladAll */;
    /* data: dw MusicGhostHouse */;
    /* data: dw MusicActivePowerUp */;
    /* data: dw MusicLearnBallad */;
    /* data: dw MusicCatfishsMaw */;
    /* data: dw MusicOpenAnglersTunnel */;
    /* data: dw MusicMarinOnBeach */;
    /* data: dw MusicMarinBeachTalk */;
    /* data: dw MusicMarinUnused */;
    /* data: dw MusicMiniboss */;
    /* data: dw MusicKanaletCastleCopy */;
    /* data: dw MusicTailCaveCopy */;
    /* data: dw MusicDreamShrineDream */;
    /* data: dw MusicEagleBossTransition */;
    /* data: dw MusicRoosterRevival */;
    /* data: dw MusicL2Sword */;
    /* data: dw MusicHenhouse */;
    /* data: dw MusicFaceShrine */;
    /* data: dw MusicWindFish */;
    /* data: dw MusicTurtleRock */;
    /* data: dw MusicEaglesTower */;
    /* data: dw MusicEagleBossLoop */;
    /* data: dw MusicFinalBossIntro */;
    /* data: dw MusicBossDefeat */;
    /* data: dw MusicFinalBossDefeat */;
    /* data: dw MusicFileSelectZelda */;
}

void func_01E_40FF(void) {
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.hl++;
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.c;
    gb.regs.h = gb.regs.b;
    gb.regs.a = gb.regs.h;
    return;
}

void func_01E_410E(void) {
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x30;
  func_01E_410E_loop_4111:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto func_01E_410E_loop_4111;
    gb.regs.bc = gb_pop16();
    return;
}

void func_01E_411B(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD379, gb.regs.a);
    gb_write(0xD34F, gb.regs.a);
    gb_write(0xD398, gb.regs.a);
    gb_write(0xD393, gb.regs.a);
    gb_write(0xD3C9, gb.regs.a);
    gb_write(0xD3A3, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFF21, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xFF23, gb.regs.a);
    return;
}

void func_01E_4137(void) {
    jr_01E_4137();
}

void jr_01E_4137(void) {
    gb.regs.a = gb_read(0xD379);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { label_01E_4D1D(); return; };
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { label_01E_4D1D(); return; };
    alu_cp8(gb.regs.a, 0x1A);
    if (GET_FLAG_Z()) { label_01E_4D1D(); return; };
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_Z()) { label_01E_4D1D(); return; };
    alu_cp8(gb.regs.a, 0x2A);
    if (GET_FLAG_Z()) { label_01E_4D1D(); return; };
    alu_cp8(gb.regs.a, 0x2E);
    if (GET_FLAG_Z()) { label_01E_4D1D(); return; };
    alu_cp8(gb.regs.a, 0x3F);
    if (GET_FLAG_Z()) { label_01E_4D1D(); return; };
    func_01E_411B();
    label_01E_4D1D(); return;
}

void BeginMusicTrack_Dispatch_1E(void) {
    gb.regs.b = gb.regs.a;
    gb.regs.a = gb_read(0xD3CE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { DontPlayAudio_1E(); return; };
    gb.regs.a = gb.regs.b;
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { jr_01E_4137(); return; };
    alu_cp8(gb.regs.a, 0x11);
    if (!GET_FLAG_C()) goto BeginMusicTrack_Dispatch_1E_above10;
    DontPlayAudio_1E(); return;
  BeginMusicTrack_Dispatch_1E_above10:;
    alu_cp8(gb.regs.a, 0x21);
    if (!GET_FLAG_C()) goto BeginMusicTrack_Dispatch_1E_above20;
    gb.regs.a = alu_add8(gb.regs.a, 0xF0);
    goto BeginMusicTrack_Dispatch_1E_playAudio;
  BeginMusicTrack_Dispatch_1E_above20:;
    alu_cp8(gb.regs.a, 0x31);
    if (!GET_FLAG_C()) goto BeginMusicTrack_Dispatch_1E_above30;
    gb.regs.a = alu_add8(gb.regs.a, 0xF0);
    goto BeginMusicTrack_Dispatch_1E_playAudio;
  BeginMusicTrack_Dispatch_1E_above30:;
    alu_cp8(gb.regs.a, 0x41);
    if (GET_FLAG_C()) { DontPlayAudio_1E(); return; };
    alu_cp8(gb.regs.a, 0x61);
    if (!GET_FLAG_C()) { DontPlayAudio_1E(); return; };
    gb.regs.a = alu_add8(gb.regs.a, 0xE0);
  BeginMusicTrack_Dispatch_1E_playAudio:;
    gb.regs.hl--;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl--, gb.regs.a);
    gb.regs.a = gb_read(0xD3CA);
    gb_write(0xD3CB, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xD3CA, gb.regs.a);
    gb.regs.b = gb.regs.a;
    gb.regs.hl = 0x407A;
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    func_01E_40FF();
    func_01E_43C0();
    label_01E_4359(); return;
}

void Data_01E_41AF(void) {
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
    /* data: db $01, $00, $FF, $FF, $00, $00 */;
}

void label_01E_432F(void) {
    gb.regs.a = gb_read(0xD3E7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_01E_473F(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    gb_write(0xD3E7, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(wMusicChannel3_waveformPointerLow);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(wMusicChannel3_waveformPointerHigh);
    gb.regs.h = gb.regs.a;
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x30;
  label_01E_432F_loop_4348:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto label_01E_432F_loop_4348;
    gb.regs.a = 0x80;
    gb_write(0xFF1A, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = gb_pop16();
    label_01E_473F(); return;
}

void label_01E_4359(void) {
    gb.regs.a = gb_read(0xD369);
    gb.regs.hl = 0x41AF;
  label_01E_4359_loop_435F:;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (GET_FLAG_Z()) goto label_01E_4359_jr_436A;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    goto label_01E_4359_loop_435F;
  label_01E_4359_jr_436A:;
    gb.regs.bc = 0xD355;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb_write(0xFF25, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    return;
}

void func_01E_4387(void) {
    gb.regs.hl = 0xD355;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.l = alu_dec8(gb.regs.l);
    gb_write(gb.regs.hl, 0);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.c = gb.regs.l;
    gb.regs.b = gb.regs.h;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_01E_4387_jr_43AB;
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_01E_4387_jr_43AB;
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto func_01E_4387_jr_43AB;
    gb.regs.c = alu_inc8(gb.regs.c);
  func_01E_4387_jr_43AB:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(0xFF25, gb.regs.a);
    return;
}

void func_01E_43AF(void) {
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.b = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.bc++;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void func_01E_43BA(void) {
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void func_01E_43C0(void) {
    gb.regs.a = gb_read(0xD379);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto func_01E_43C0_jr_43E2;
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto func_01E_43C0_jr_43E2;
    alu_cp8(gb.regs.a, 0x1A);
    if (GET_FLAG_Z()) goto func_01E_43C0_jr_43E2;
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_Z()) goto func_01E_43C0_jr_43E2;
    alu_cp8(gb.regs.a, 0x2A);
    if (GET_FLAG_Z()) goto func_01E_43C0_jr_43E2;
    alu_cp8(gb.regs.a, 0x2E);
    if (GET_FLAG_Z()) goto func_01E_43C0_jr_43E2;
    alu_cp8(gb.regs.a, 0x3F);
    if (GET_FLAG_Z()) goto func_01E_43C0_jr_43E2;
    func_01E_411B();
  func_01E_43C0_jr_43E2:;
    func_01E_4D2A();
    gb.regs.de = 0xD300;
    gb.regs.b = 0;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    func_01E_43BA();
    gb.regs.de = 0xD310;
    func_01E_43BA();
    gb.regs.de = 0xD320;
    func_01E_43BA();
    gb.regs.de = 0xD330;
    func_01E_43BA();
    gb.regs.de = 0xD340;
    func_01E_43BA();
    gb.regs.hl = 0xD310;
    gb.regs.de = wMusicChannel1_definitionPointerLow;
    func_01E_43AF();
    gb.regs.hl = 0xD320;
    gb.regs.de = wMusicChannel2_definitionPointerLow;
    func_01E_43AF();
    gb.regs.hl = 0xD330;
    gb.regs.de = wMusicChannel3_definitionPointerLow;
    func_01E_43AF();
    gb.regs.hl = 0xD340;
    gb.regs.de = wMusicChannel4_definitionPointerLow;
    func_01E_43AF();
    gb.regs.bc = 0x0410;
    gb.regs.hl = wMusicChannel1_lengthCountdown;
  func_01E_43C0_loop_4432:;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.l);
    gb.regs.l = gb.regs.a;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto func_01E_43C0_loop_4432;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(wMusicChannel1_lengthCounterUp, gb.regs.a);
    gb_write(wMusicChannel2_lengthCounterUp, gb.regs.a);
    gb_write(wMusicChannel3_lengthCounterUp, gb.regs.a);
    return;
}

void jr_01E_4445(void) {
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xD371);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_01E_4445_jr_4454;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    gb.regs.l = gb.regs.e;
    gb.regs.h = gb.regs.d;
    func_01E_410E();
  jr_01E_4445_jr_4454:;
    gb.regs.hl = gb_pop16();
    jr_01E_4481(); return;
}

void label_01E_4457(void) {
    func_01E_4487();
    func_01E_449C();
    gb.regs.e = gb.regs.a;
    func_01E_4487();
    func_01E_449C();
    gb.regs.d = gb.regs.a;
    func_01E_4487();
    func_01E_449C();
    gb.regs.c = gb.regs.a;
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb_write(gb.regs.hl, gb.regs.e);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb_write(gb.regs.hl, gb.regs.d);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb_write(gb.regs.hl, gb.regs.c);
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xD350;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01E_4445(); return; };
}

void jr_01E_4481(void) {
    func_01E_4487();
    label_01E_45A5(); return;
}

void func_01E_4487(void) {
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb.regs.d = gb.regs.a;
    gb.regs.de++;
}

void jr_01E_448D(void) {
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl--, gb.regs.a);
    gb.regs.de = gb_pop16();
    return;
}

void func_01E_4493(void) {
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb.regs.d = gb.regs.a;
    gb.regs.de++;
    gb.regs.de++;
    jr_01E_448D(); return;
}

void func_01E_449C(void) {
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb.regs.b = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.b = gb.regs.a;
    return;
}

void jr_01E_44A3(void) {
    gb.regs.hl = gb_pop16();
    jr_01E_44D7(); return;
}

void label_01E_44A6(void) {
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto label_01E_44A6_jr_44BD;
    gb.regs.a = gb_read(wMusicChannel3_volumeEffect);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto label_01E_44A6_jr_44BD;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto label_01E_44A6_jr_44BD;
    gb.regs.a = 0x40;
    gb_write(0xFF1C, gb.regs.a);
  label_01E_44A6_jr_44BD:;
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 9);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_01E_44A3(); return; };
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.l = gb.regs.a;
    alu_bit(7, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_01E_44A3(); return; };
    gb.regs.hl = gb_pop16();
    func_01E_4772();
    gb_push16(gb.regs.hl);
    func_01E_47F6();
    gb.regs.hl = gb_pop16();
}

void label_01E_44D7(void) {
    jr_01E_44D7();
}

void jr_01E_44D7(void) {
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    label_01E_4752(); return;
}

void label_01E_44DC(void) {
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    func_01E_4493();
}

void jr_01E_44E3(void) {
    loop_start: ;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.h;
    func_01E_43AF();
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { jr_01E_450E(); return; };
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto jr_01E_44E3_jr_44F7;
    gb.regs.l = alu_inc8(gb.regs.l);
    label_01E_45A3(); return;
  jr_01E_44E3_jr_44F7:;
    gb.regs.l = alu_dec8(gb.regs.l);
    gb_push16(gb.regs.hl);
    func_01E_4493();
    func_01E_449C();
    gb.regs.e = gb.regs.a;
    func_01E_4487();
    func_01E_449C();
    gb.regs.d = gb.regs.a;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl--, gb.regs.a);
    goto loop_start;
}

void jr_01E_450E(void) {
    gb.regs.a = gb_read(0xD3CA);
    alu_cp8(gb.regs.a, 0x15);
    if (GET_FLAG_Z()) { ContinueCurrentScreenMusic_1E(); return; };
    gb.regs.hl = 0xD369;
    gb_write(gb.regs.hl, 0);
    func_01E_4137();
    return;
}

void label_01E_451F(void) {
    func_01E_4487();
    func_01E_449C();
    gb_write(0xD301, gb.regs.a);
    func_01E_4487();
    func_01E_449C();
    gb_write(0xD302, gb.regs.a);
    jr_01E_453C(); return;
}

void label_01E_4533(void) {
    func_01E_4487();
    func_01E_449C();
    gb_write(0xD300, gb.regs.a);
}

void jr_01E_453C(void) {
    func_01E_4487();
    jr_01E_45A5(); return;
}

void label_01E_4541(void) {
    func_01E_4487();
    func_01E_449C();
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    gb.regs.l = gb.regs.a;
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.b = gb.regs.h;
    gb.regs.c = gb.regs.l;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb.regs.d = gb.regs.a;
    gb.regs.de++;
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl--, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.bc, gb.regs.a);
    jr_01E_45A5(); return;
}

void label_01E_4565(void) {
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    if (GET_FLAG_Z()) goto label_01E_4565_jr_457E;
    gb.regs.b = gb.regs.h;
    gb.regs.c = gb.regs.l;
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.c = alu_dec8(gb.regs.c);
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(gb.regs.hl--, gb.regs.a);
    jr_01E_45A5(); return;
  label_01E_4565_jr_457E:;
    gb.regs.hl = gb_pop16();
    jr_01E_453C(); return;
}

void func_01E_4581(void) {
    gb.regs.hl = 0xD369;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD3CE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { DontPlayAudio_1E(); return; };
    func_01E_4387();
    gb.regs.a = 1;
    gb_write(0xD350, gb.regs.a);
    gb.regs.hl = 0xD310;
}

void label_01E_4599(void) {
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_01E_44D7(); return; };
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) { label_01E_44A6(); return; };
}

void label_01E_45A3(void) {
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
}

void label_01E_45A5(void) {
    jr_01E_45A5();
}

void jr_01E_45A5(void) {
    func_01E_449C();
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { label_01E_44DC(); return; };
    alu_cp8(gb.regs.a, 0x9D);
    if (GET_FLAG_Z()) { label_01E_4457(); return; };
    alu_cp8(gb.regs.a, 0x9E);
    if (GET_FLAG_Z()) { label_01E_451F(); return; };
    alu_cp8(gb.regs.a, 0x9F);
    if (GET_FLAG_Z()) { label_01E_4533(); return; };
    alu_cp8(gb.regs.a, 0x9B);
    if (GET_FLAG_Z()) { label_01E_4541(); return; };
    alu_cp8(gb.regs.a, 0x9C);
    if (GET_FLAG_Z()) { label_01E_4565(); return; };
    alu_cp8(gb.regs.a, 0x99);
    if (GET_FLAG_Z()) { label_01E_486E(); return; };
    alu_cp8(gb.regs.a, 0x9A);
    if (GET_FLAG_Z()) { label_01E_4879(); return; };
    alu_cp8(gb.regs.a, 0x94);
    if (GET_FLAG_Z()) { label_01E_48B8(); return; };
    alu_cp8(gb.regs.a, 0x97);
    if (GET_FLAG_Z()) { label_01E_48ED(); return; };
    alu_cp8(gb.regs.a, 0x98);
    if (GET_FLAG_Z()) { label_01E_48FC(); return; };
    alu_cp8(gb.regs.a, 0x96);
    if (GET_FLAG_Z()) { label_01E_4860(); return; };
    alu_cp8(gb.regs.a, 0x95);
    if (GET_FLAG_Z()) { label_01E_486B(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) { jr_01E_463C(); return; };
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb_push16(gb.regs.hl);
    gb.regs.de = 0xD301;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.l = gb.regs.a;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.h = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.hl);
    gb.regs.d = gb.regs.a;
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    if (!GET_FLAG_Z()) goto jr_01E_45A5_jr_460E;
    gb.regs.a = gb.regs.d;
    jr_01E_4633(); return;
  jr_01E_45A5_jr_460E:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.e = alu_sla(gb.regs.e);
    if (GET_FLAG_C()) goto jr_01E_45A5_jr_461F;
    gb.regs.d = gb.regs.a;
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.e = alu_sla(gb.regs.e);
    if (GET_FLAG_C()) goto jr_01E_45A5_jr_461F;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.d);
  jr_01E_45A5_jr_461F:;
    gb.regs.c = gb.regs.a;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_01E_45A5_jr_4625;
    gb.regs.c = 2;
  jr_01E_45A5_jr_4625:;
    gb.regs.de = 0xD350;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD307;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.c);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}

void jr_01E_4633(void) {
    gb.regs.hl = gb_pop16();
    gb.regs.l = alu_dec8(gb.regs.l);
    gb_write(gb.regs.hl++, gb.regs.a);
    func_01E_4487();
    func_01E_449C();
}

void jr_01E_463C(void) {
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_01E_467B(); return; };
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3B0;
    func_01E_493C();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de = 0xD3B6;
    func_01E_493C();
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_01E_467A(); return; };
    gb.regs.de = 0xD39E;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_01E_463C_jr_466C;
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD39F, gb.regs.a);
  jr_01E_463C_jr_466C:;
    gb.regs.de = 0xD3D9;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_01E_467A(); return; };
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3DA, gb.regs.a);
}

void jr_01E_467A(void) {
    gb.regs.de = gb_pop16();
}

void jr_01E_467B(void) {
    gb.regs.c = gb.regs.b;
    gb.regs.b = 0;
    func_01E_4487();
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { label_01E_46BD(); return; };
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb.regs.l = gb.regs.a;
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01E_46B8(); return; };
    gb_write(gb.regs.hl, 0);
    gb.regs.a = gb_read(0xD300);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_01E_46AB(); return; };
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    alu_bit(7, gb.regs.l);
    if (GET_FLAG_Z()) goto jr_01E_467B_jr_46A8;
    gb.regs.h = 0xFF;
  jr_01E_467B_jr_46A8:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.b = gb.regs.h;
    gb.regs.c = gb.regs.l;
}

void jr_01E_46AB(void) {
    gb.regs.hl = 0x49BF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl = gb_pop16();
    label_01E_46EE(); return;
}

void jr_01E_46B8(void) {
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = gb_pop16();
    jr_01E_46EE(); return;
}

void label_01E_46BD(void) {
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { jr_01E_46DB(); return; };
    gb.regs.de = 0xD346;
    gb.regs.hl = 0x4A51;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  label_01E_46BD_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, (0xD34B & 0xFF));
    if (!GET_FLAG_Z()) goto label_01E_46BD_loop;
    gb.regs.c = 0x20;
    gb.regs.hl = wMusicChannel4_definitionPointerLow;
    gb.regs.b = 0;
    jr_01E_471C(); return;
}

void jr_01E_46DB(void) {
    gb.regs.a = gb_read(0xD34F);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01E_474D(); return; };
    gb.regs.a = 1;
    gb_write(0xD378, gb.regs.a);
    func_01E_403F();
    label_01E_474D(); return;
}

void label_01E_46EE(void) {
    jr_01E_46EE();
}

void jr_01E_46EE(void) {
    gb_push16(gb.regs.hl);
    gb.regs.b = 0;
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01E_4719(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_01E_4715(); return; };
    gb.regs.c = 0x1A;
    gb.regs.a = gb_read(wMusicChannel3_loopCounter);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_01E_46EE_jr_470A;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
  jr_01E_46EE_jr_470A:;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    jr_01E_4723(); return;
}

void jr_01E_4715(void) {
    gb.regs.c = 0x16;
    jr_01E_471C(); return;
}

void jr_01E_4719(void) {
    gb.regs.c = 0x10;
    gb.regs.c = alu_inc8(gb.regs.c);
}

void jr_01E_471C(void) {
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb.regs.a;
}

void jr_01E_4723(void) {
    gb_push16(gb.regs.hl);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_01E_4723_jr_472C;
    gb.regs.e = 8;
  jr_01E_4723_jr_472C:;
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb_write(gb.regs.hl, 0);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_01E_474D(); return; };
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01E_432F(); return; };
}

void label_01E_473F(void) {
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.b);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.e;
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 0x80);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
}

void label_01E_474D(void) {
    jr_01E_474D();
}

void jr_01E_474D(void) {
    gb.regs.hl = gb_pop16();
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl--);
    gb_write(gb.regs.hl--, gb.regs.a);
    gb.regs.l = alu_dec8(gb.regs.l);
}

void label_01E_4752(void) {
    gb.regs.de = 0xD350;
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto label_01E_4752_jr_4763;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = 0x10;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.l);
    gb.regs.l = gb.regs.a;
    label_01E_4599(); return;
  label_01E_4752_jr_4763:;
    gb.regs.hl = wMusicChannel1_lengthCounterUp;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = wMusicChannel2_lengthCounterUp;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = wMusicChannel3_lengthCounterUp;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void label_01E_4770(void) {
    gb.regs.hl = gb_pop16();
    return;
}

void func_01E_4772(void) {
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 6);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { jr_01E_4794(); return; };
    gb_write(0xD351, gb.regs.a);
    gb.regs.a = gb_read(0xD350);
    gb.regs.c = 0x13;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01E_47D6(); return; };
    gb.regs.c = 0x18;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_01E_47D6(); return; };
    gb.regs.c = 0x1D;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01E_47D6(); return; };
}

void label_01E_4794(void) {
    jr_01E_4794();
}

void jr_01E_4794(void) {
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { label_01E_4770(); return; };
    gb.regs.de = 0xD3B6;
    func_01E_493C();
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_01E_47BD(); return; };
    gb.regs.a = gb_read(0xD350);
    gb.regs.c = 0x13;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { label_01E_4905(); return; };
    gb.regs.c = 0x18;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01E_4905(); return; };
    gb.regs.c = 0x1D;
    label_01E_4905(); return;
}

void label_01E_47BD(void) {
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { label_01E_4770(); return; };
    gb.regs.a = gb_read(0xD39E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01E_4882(); return; };
    gb.regs.a = gb_read(0xD3D9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01E_48C3(); return; };
    label_01E_4770(); return;
}

void jr_01E_47D6(void) {
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.d = gb.regs.a;
    gb_push16(gb.regs.de);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.l = gb.regs.a;
    gb.regs.b = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(0xD351);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { label_01E_4952(); return; };
    gb.regs.hl = 0xFFFF;
    gb.regs.de = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    func_01E_492B();
    label_01E_4794(); return;
}

void func_01E_47F6(void) {
    gb.regs.a = gb_read(wMusicChannel1_playingRest);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_01E_47F6_jr_481D;
    gb.regs.a = gb_read(wMusicChannel1_softwareEnvelope);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_01E_47F6_jr_481D;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.b = gb.regs.a;
    gb.regs.hl = 0xD307;
    gb.regs.a = gb_read(wMusicChannel1_lengthCounterUp);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_01E_47F6_jr_481D;
    gb.regs.c = 0x12;
    gb.regs.de = wMusicChannel1_noteBaseFrequencyHigh;
    gb.regs.a = gb_read(wMusicChannel1_loopCounter);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_01E_47F6_jr_481D;
    func_01E_4841();
  func_01E_47F6_jr_481D:;
    gb.regs.a = gb_read(wMusicChannel2_playingRest);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(wMusicChannel2_softwareEnvelope);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.b = gb.regs.a;
    gb.regs.hl = 0xD308;
    gb.regs.a = gb_read(wMusicChannel2_lengthCounterUp);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(wMusicChannel2_loopCounter);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.c = 0x17;
    gb.regs.de = wMusicChannel2_noteBaseFrequencyHigh;
    func_01E_4841();
    return;
}

void func_01E_4841(void) {
    gb_push16(gb.regs.bc);
    gb.regs.b = alu_dec8(gb.regs.b);
    gb.regs.c = gb.regs.b;
    gb.regs.b = 0;
    gb.regs.hl = 0x4B78;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.bc = gb_pop16();
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_or8(gb.regs.a, 0x80);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    return;
}

void ContinueCurrentScreenMusic_1E(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3CE, gb.regs.a);
    gb.regs.a = gb_read(0xFFBF);
    gb_write(0xD368, gb.regs.a);
    PlayMusicTrack_1E_EntryPoint(); return;
}

void label_01E_4860(void) {
    gb.regs.a = 1;
}

void jr_01E_4862(void) {
    gb_write(0xD3CD, gb.regs.a);
    func_01E_4487();
    label_01E_45A5(); return;
}

void label_01E_486B(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_01E_4862(); return;
}

void label_01E_486E(void) {
    gb.regs.a = 1;
}

void jr_01E_4870(void) {
    gb_write(0xD39E, gb.regs.a);
    func_01E_4487();
    label_01E_45A5(); return;
}

void label_01E_4879(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3D9, gb.regs.a);
    gb_write(0xD3DA, gb.regs.a);
    jr_01E_4870(); return;
}

void label_01E_4882(void) {
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01E_4770(); return; };
    gb.regs.bc = 0xD39F;
    func_01E_48B4();
    gb.regs.c = 0x1C;
    gb.regs.b = 0x40;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01E_48AF(); return; };
    gb.regs.b = 0x60;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_01E_48AF(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { jr_01E_48AF(); return; };
    gb.regs.b = 0;
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { jr_01E_48AF(); return; };
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) { label_01E_4770(); return; };
    gb.regs.a = 2;
    gb_write(0xD39E, gb.regs.a);
}

void label_01E_48AF(void) {
    jr_01E_48AF();
}

void jr_01E_48AF(void) {
    gb.regs.a = gb.regs.b;
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    label_01E_4770(); return;
}

void func_01E_48B4(void) {
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    return;
}

void label_01E_48B8(void) {
    gb.regs.a = 1;
    gb_write(0xD3D9, gb.regs.a);
    func_01E_4487();
    label_01E_45A5(); return;
}

void label_01E_48C3(void) {
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01E_4770(); return; };
    gb.regs.bc = 0xD3DA;
    func_01E_48B4();
    gb.regs.c = 0x1C;
    gb.regs.b = 0x60;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01E_48AF(); return; };
    gb.regs.b = 0x40;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { label_01E_48AF(); return; };
    gb.regs.b = 0x20;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) { label_01E_4770(); return; };
    gb.regs.a = 2;
    gb_write(0xD3D9, gb.regs.a);
    label_01E_48AF(); return;
}

void label_01E_48ED(void) {
    gb.regs.de = 0xD3B6;
    func_01E_493C();
    gb.regs.a = 1;
}

void jr_01E_48F5(void) {
    gb_write(gb.regs.de, gb.regs.a);
    func_01E_4487();
    label_01E_45A5(); return;
}

void label_01E_48FC(void) {
    gb.regs.de = 0xD3B6;
    func_01E_493C();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_01E_48F5(); return;
}

void label_01E_4905(void) {
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_01E_491B(); return; };
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.hl);
    func_01E_4920();
}

void jr_01E_4911(void) {
    gb.regs.hl = 0xFF9C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    func_01E_492B();
    label_01E_4770(); return;
}

void jr_01E_491B(void) {
    func_01E_4945();
    jr_01E_4911(); return;
}

void func_01E_4920(void) {
    gb.regs.a = 7;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.l);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.d = gb.regs.a;
    return;
}

void func_01E_492B(void) {
    gb.regs.de = 0xD3A4;
    func_01E_493C();
    gb.regs.a = gb.regs.l;
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.h;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void func_01E_493C(void) {
    gb.regs.a = gb_read(0xD350);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    return;
}

void func_01E_4945(void) {
    gb.regs.de = 0xD3A4;
    func_01E_493C();
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.l = gb.regs.a;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.d = gb.regs.a;
    gb.regs.e = gb.regs.l;
    return;
}

void label_01E_4952(void) {
    gb.regs.de = gb_pop16();
    gb.regs.de = 0xD3B0;
    func_01E_493C();
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    alu_cp8(gb.regs.a, 0x19);
    if (GET_FLAG_Z()) { jr_01E_4992(); return; };
    alu_cp8(gb.regs.a, 0x2D);
    if (GET_FLAG_Z()) { jr_01E_498B(); return; };
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_01E_4794(); return; };
}

void jr_01E_496A(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 0x19);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    gb.regs.de = 0x4997;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    func_01E_4920();
    gb.regs.h = gb.regs.d;
    gb.regs.l = gb.regs.e;
    gb.regs.de = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    func_01E_492B();
    label_01E_4794(); return;
}

void jr_01E_498B(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = 0x19;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    jr_01E_496A(); return;
}

void jr_01E_4992(void) {
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    jr_01E_496A(); return;
}

void Data_01E_4997(void) {
    /* data: db $00, $00, $00, $00, $00, $01, $00, $01 */;
    /* data: db $00, $02, $00, $02, $00, $00, $00, $00 */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FE, $FF, $FE */;
    /* data: db $00, $00, $00, $01, $00, $02, $00, $01 */;
    /* data: db $00, $00, $FF, $FF, $FF, $FE, $FF, $FF */;
}

void Data_01E_49BF(void) {
    /* data: db $00, $0F, $2C, $00, $9C, $00, $06, $01 */;
    /* data: db $6B, $01, $C9, $01, $23, $02, $77, $02 */;
    /* data: db $C6, $02, $12, $03, $56, $03, $9B, $03 */;
    /* data: db $DA, $03, $16, $04, $4E, $04, $83, $04 */;
    /* data: db $B5, $04, $E5, $04, $11, $05, $3B, $05 */;
    /* data: db $63, $05, $89, $05, $AC, $05, $CE, $05 */;
    /* data: db $ED, $05, $0A, $06, $27, $06, $42, $06 */;
    /* data: db $5B, $06, $72, $06, $89, $06, $9E, $06 */;
    /* data: db $B2, $06, $C4, $06, $D6, $06, $E7, $06 */;
    /* data: db $F7, $06, $06, $07, $14, $07, $21, $07 */;
    /* data: db $2D, $07, $39, $07, $44, $07, $4F, $07 */;
    /* data: db $59, $07, $62, $07, $6B, $07, $74, $07 */;
    /* data: db $7B, $07, $83, $07, $8A, $07, $90, $07 */;
    /* data: db $97, $07, $9D, $07, $A2, $07, $A7, $07 */;
    /* data: db $AC, $07, $B1, $07, $B6, $07, $BA, $07 */;
    /* data: db $BE, $07, $C1, $07, $C5, $07, $C8, $07 */;
    /* data: db $CB, $07, $CE, $07, $D1, $07, $D4, $07 */;
    /* data: db $D6, $07, $D9, $07, $DB, $07, $DD, $07 */;
    /* data: db $DF, $07 */;
}

void Data_01E_4A51(void) {
    /* data: db $00, $00, $00, $00, $00, $C0, $09, $00 */;
    /* data: db $38, $34, $C0, $19, $00, $38, $33, $C0 */;
    /* data: db $46, $00, $13, $10, $C0, $23, $00, $20 */;
    /* data: db $40, $80, $51, $00, $20, $07, $80, $A1 */;
    /* data: db $00, $00, $18, $80, $F2, $00, $00, $18 */;
    /* data: db $80, $81, $00, $3A, $10, $C0, $80, $00 */;
    /* data: db $00, $10, $C0, $57, $00, $00, $60, $80 */;
    /* data: db $10, $00, $00, $10, $80, $01, $02, $04 */;
    /* data: db $08, $10, $20, $06, $0C, $18, $01, $01 */;
    /* data: db $01, $01, $01, $30 */;
}

void MusicSpeedData_1e_4a9d(void) {
    /* data: db $01, $03, $06, $0c, $18, $30, $09, $12, $24, $02, $04, $08, $01, $01, $48 */;
}

void MusicSpeedData_1e_4aac(void) {
    /* data: db $02, $04, $08, $10, $20, $40, $0c, $18, $30, $02, $05, $03, $01, $01, $60 */;
}

void MusicSpeedData_1e_4abb(void) {
    /* data: db $03, $05, $0a, $14, $28, $50, $0f, $1e, $3c, $02, $08, $10, $02, $01, $78 */;
}

void MusicSpeedData_1e_4aca(void) {
    /* data: db $03, $06, $0c, $18, $30, $60, $12, $24, $48, $03, $08, $10, $02, $04, $90 */;
}

void MusicSpeedData_1e_4ad9(void) {
    /* data: db $03, $07, $0e, $1c, $38, $70, $15, $2a, $54, $04, $09, $12, $02, $01, $a8 */;
}

void MusicSpeedData_1e_4ae8(void) {
    /* data: db $04, $08, $10, $20, $40, $80, $18, $30, $60, $04, $02, $01, $01, $00, $c0 */;
}

void MusicSpeedData_1e_4af7(void) {
    /* data: db $04, $09, $12, $24, $48, $90, $1b, $36, $6c, $05, $0c, $18, $18, $06, $d8 */;
}

void MusicSpeedData_1e_4b06(void) {
    /* data: db $05, $0a, $14, $28, $50, $a0, $1e, $3c, $78, $05, $01, $01, $01, $01, $f0 */;
}

void HardcodedData_1e_4b15(void) {
    /* data: db $10, $32, $22, $47, $60, $20, $00 */;
}

void MusicTailCave_Channel1_rest_1C0(void) {
    MusicAnglersTunnel_Channel3_rest_1C0();
}

void MusicAnglersTunnel_Channel3_rest_1C0(void) {
    MusicIntroWakeUp_Channel3_rest_1C0();
}

void MusicIntroWakeUp_Channel3_rest_1C0(void) {
    MusicDreamShrineSleep_Channel3_rest_1C0();
}

void MusicDreamShrineSleep_Channel3_rest_1C0(void) {
    MusicSouthernShrine_Channel3_rest_1C0();
}

void MusicSouthernShrine_Channel3_rest_1C0(void) {
    MusicSouthernShrine_Channel4_rest_1C0();
}

void MusicSouthernShrine_Channel4_rest_1C0(void) {
    MusicInstrumentFullMoonCello_Channel1_rest_1C0();
}

void MusicInstrumentFullMoonCello_Channel1_rest_1C0(void) {
    Music2dUnderground_Channel1_rest_1C0();
}

void Music2dUnderground_Channel1_rest_1C0(void) {
    Music2dUnderground_Channel3_rest_1C0();
}

void Music2dUnderground_Channel3_rest_1C0(void) {
    MusicOwl_Channel3_rest_1C0();
}

void MusicOwl_Channel3_rest_1C0(void) {
    MusicDreamShrineBed_Channel3_rest_1C0();
}

void MusicDreamShrineBed_Channel3_rest_1C0(void) {
    MusicCave_Channel3_rest_1C0();
}

void MusicCave_Channel3_rest_1C0(void) {
    MusicInstrumentConchHorn_Channel1_rest_1C0();
}

void MusicInstrumentConchHorn_Channel1_rest_1C0(void) {
    MusicInstrumentSeaLilysBell_Channel1_rest_1C0();
}

void MusicInstrumentSeaLilysBell_Channel1_rest_1C0(void) {
    MusicInstrumentSurfHarp_Channel1_rest_1C0();
}

void MusicInstrumentSurfHarp_Channel1_rest_1C0(void) {
    MusicInstrumentCoralTriangle_Channel1_rest_1C0();
}

void MusicInstrumentCoralTriangle_Channel1_rest_1C0(void) {
    MusicInstrumentOrganOfEveningCalm_Channel1_rest_1C0();
}

void MusicInstrumentOrganOfEveningCalm_Channel1_rest_1C0(void) {
    MusicInstrumentThunderDrum_Channel1_rest_1C0();
}

void MusicInstrumentThunderDrum_Channel1_rest_1C0(void) {
    MusicInstrumentThunderDrum_Channel3_rest_1C0();
}

void MusicInstrumentThunderDrum_Channel3_rest_1C0(void) {
    MusicEggBalladDefault_Channel2_rest_1C0();
}

void MusicEggBalladDefault_Channel2_rest_1C0(void) {
    MusicL2Sword_Channel3_rest_1C0();
}

void MusicL2Sword_Channel3_rest_1C0(void) {
    MusicFaceShrine_Channel3_rest_1C0();
}

void MusicFaceShrine_Channel3_rest_1C0(void) {
    MusicWindFish_Channel3_rest_1C0();
}

void MusicWindFish_Channel3_rest_1C0(void) {
    MusicEagleBossLoop_Channel3_rest_1C0();
}

void MusicEagleBossLoop_Channel3_rest_1C0(void) {
    MusicFinalBossIntro_Channel1_rest_1C0();
}

void MusicFinalBossIntro_Channel1_rest_1C0(void) {
    MusicFinalBossIntro_Channel3_rest_1C0();
}

void MusicFinalBossIntro_Channel3_rest_1C0(void) {
    MusicBossDefeat_Channel3_rest_1C0();
}

void MusicBossDefeat_Channel3_rest_1C0(void) {
    /* data: dw ChannelDefinition_1e_rest_1C0_1 */;
    /* data: dw $ffff, MusicTailCave_Channel1_rest_1C0 */;
}

void ChannelDefinition_1e_rest_1C0_1(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicActivePowerUp(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicActivePowerUp_Channel1 */;
    /* data: dw MusicActivePowerUp_Channel2 */;
    /* data: dw MusicActivePowerUp_Channel3 */;
    /* data: dw MusicActivePowerUp_Channel4 */;
}

void MusicObtainPowerup(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicObtainPowerup_Channel1 */;
    /* data: dw MusicObtainPowerup_Channel2 */;
    /* data: dw MusicObtainPowerup_Channel3 */;
    /* data: dw MusicObtainPowerup_Channel4 */;
}

void MusicObtainPowerup_Channel1(void) {
    /* data: dw ChannelDefinition_1e_4b5e */;
}

void MusicLoop_1e_4b40(void) {
    MusicActivePowerUp_Channel1();
}

void MusicActivePowerUp_Channel1(void) {
    /* data: dw ChannelDefinition_1e_4b65 */;
    /* data: dw $ffff, MusicLoop_1e_4b40 */;
}

void MusicObtainPowerup_Channel2(void) {
    /* data: dw ChannelDefinition_1e_4b87 */;
}

void MusicLoop_1e_4b48(void) {
    MusicActivePowerUp_Channel2();
}

void MusicActivePowerUp_Channel2(void) {
    /* data: dw ChannelDefinition_1e_4b97 */;
    /* data: dw $ffff, MusicLoop_1e_4b48 */;
}

void MusicObtainPowerup_Channel3(void) {
    /* data: dw ChannelDefinition_1e_4c19 */;
}

void MusicLoop_1e_4b50(void) {
    MusicActivePowerUp_Channel3();
}

void MusicActivePowerUp_Channel3(void) {
    /* data: dw ChannelDefinition_1e_4c1e */;
    /* data: dw $ffff, MusicLoop_1e_4b50 */;
}

void MusicObtainPowerup_Channel4(void) {
    /* data: dw ChannelDefinition_1e_4c2a */;
}

void MusicLoop_1e_4b58(void) {
    MusicActivePowerUp_Channel4();
}

void MusicActivePowerUp_Channel4(void) {
    /* data: dw ChannelDefinition_1e_4c2f */;
    /* data: dw $ffff, MusicLoop_1e_4b58 */;
}

void ChannelDefinition_1e_4b5e(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4b65(void) {
    /* TODO: set_envelope_duty $10, $00, 2, 0 */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#6 */;
    /* TODO: note A#5 */;
    /* TODO: note F#5 */;
    /* TODO: note C#5 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note D_6 */;
    /* TODO: note B_5 */;
    /* TODO: note G_5 */;
    /* TODO: note D_5 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note C#6 */;
    /* TODO: note A#5 */;
    /* TODO: note F#5 */;
    /* TODO: note C#5 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note B_5 */;
    /* TODO: note G#5 */;
    /* TODO: note E_5 */;
    /* TODO: note B_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4b87(void) {
    /* TODO: set_envelope_duty $60, $81, 1, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: note F#4 */;
    /* TODO: note B_4 */;
    /* TODO: note E_5 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 5 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4b97(void) {
    /* TODO: set_envelope_duty $34, $00, 0, 0 */;
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#6 */;
    /* TODO: note A#5 */;
    /* TODO: note F#5 */;
    /* TODO: note C#5 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $43, $00, 0, 0 */;
    /* TODO: note C#6 */;
    /* TODO: note A#5 */;
    /* TODO: note F#5 */;
    /* TODO: note C#5 */;
    /* TODO: set_envelope_duty $62, $00, 0, 0 */;
    /* TODO: note D_6 */;
    /* TODO: note B_5 */;
    /* TODO: note G_5 */;
    /* TODO: note D_5 */;
    /* TODO: set_envelope_duty $43, $00, 0, 0 */;
    /* TODO: note D_6 */;
    /* TODO: note B_5 */;
    /* TODO: note G_5 */;
    /* TODO: note D_5 */;
    /* TODO: set_envelope_duty $34, $00, 0, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note D_6 */;
    /* TODO: note B_5 */;
    /* TODO: note G_5 */;
    /* TODO: note D_5 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note C#6 */;
    /* TODO: note A#5 */;
    /* TODO: note F#5 */;
    /* TODO: note C#5 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $43, $00, 0, 0 */;
    /* TODO: note C#6 */;
    /* TODO: note A#5 */;
    /* TODO: note F#5 */;
    /* TODO: note C#5 */;
    /* TODO: set_envelope_duty $62, $00, 0, 0 */;
    /* TODO: note C#6 */;
    /* TODO: note A#5 */;
    /* TODO: note F#5 */;
    /* TODO: note C#5 */;
    /* TODO: set_envelope_duty $82, $00, 0, 0 */;
    /* TODO: note B_5 */;
    /* TODO: note G#5 */;
    /* TODO: note E_5 */;
    /* TODO: note B_4 */;
    /* TODO: set_envelope_duty $62, $00, 0, 0 */;
    /* TODO: note B_5 */;
    /* TODO: note G#5 */;
    /* TODO: note E_5 */;
    /* TODO: note B_4 */;
    /* TODO: set_envelope_duty $43, $00, 0, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note B_5 */;
    /* TODO: note G#5 */;
    /* TODO: note E_5 */;
    /* TODO: note B_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void waveform_1e_4bf9(void) {
    /* data: db $66, $66, $66, $66, $00, $00, $00, $00, $66, $66, $66, $66, $00, $00, $00, $00 */;
}

void waveform_1e_4c09(void) {
    /* data: db $00, $22, $44, $55, $66, $66, $88, $88, $aa, $aa, $cc, $cc, $04, $84, $04, $84 */;
}

void ChannelDefinition_1e_4c19(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4c1e(void) {
    /* TODO: set_waveform waveform_1e_4bf9, $20 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#1 */;
    /* TODO: note C#2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4c2a(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4c2f(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicMiniboss(void) {
    /* data: db $02 */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicMiniboss_Channel1 */;
    /* data: dw MusicMiniboss_Channel2 */;
    /* data: dw MusicMiniboss_Channel3 */;
    /* data: dw MusicMiniboss_Channel4 */;
}

void MusicMiniboss_Channel1(void) {
    /* data: dw ChannelDefinition_1e_4c71 */;
}

void MusicLoop_1e_4c45(void) {
    /* data: dw ChannelDefinition_1e_4c87 */;
    /* data: dw ChannelDefinition_1e_4c99 */;
    /* data: dw ChannelDefinition_1e_4cab */;
    /* data: dw ChannelDefinition_1e_4c99 */;
    /* data: dw $ffff, MusicLoop_1e_4c45 */;
}

void MusicMiniboss_Channel2(void) {
    /* data: dw ChannelDefinition_1e_4c78 */;
    /* data: dw ChannelDefinition_1e_4c87 */;
    /* data: dw ChannelDefinition_1e_4c7d */;
    /* data: dw ChannelDefinition_1e_4c99 */;
    /* data: dw ChannelDefinition_1e_4c82 */;
    /* data: dw ChannelDefinition_1e_4cab */;
    /* data: dw ChannelDefinition_1e_4c7d */;
    /* data: dw ChannelDefinition_1e_4c99 */;
    /* data: dw $ffff, MusicMiniboss_Channel2 */;
}

void MusicMiniboss_Channel3(void) {
    /* data: dw ChannelDefinition_1e_4cbd */;
    /* data: dw $ffff, MusicMiniboss_Channel3 */;
}

void MusicMiniboss_Channel4(void) {
    /* data: dw ChannelDefinition_1e_4cf0 */;
    /* data: dw $ffff, MusicMiniboss_Channel4 */;
}

void ChannelDefinition_1e_4c71(void) {
    /* TODO: set_envelope_duty $43, $00, 0, 3 */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4c78(void) {
    /* TODO: set_envelope_duty $43, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4c7d(void) {
    /* TODO: set_envelope_duty $71, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4c82(void) {
    /* TODO: set_envelope_duty $91, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4c87(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4c99(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4cab(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 6 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 6 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4cbd(void) {
    /* TODO: set_waveform waveform_1e_4c09, $20 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note B_1 */;
    /* TODO: note B_1 */;
    /* TODO: note B_2 */;
    /* TODO: note B_1 */;
    /* TODO: note B_1 */;
    /* TODO: note B_2 */;
    /* TODO: note B_1 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note C#3 */;
    /* TODO: note C#2 */;
    /* TODO: note C#2 */;
    /* TODO: note C#3 */;
    /* TODO: note C#2 */;
    /* TODO: note C#2 */;
    /* TODO: note C#3 */;
    /* TODO: note C#2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note D#3 */;
    /* TODO: note D#2 */;
    /* TODO: note D#2 */;
    /* TODO: note D#3 */;
    /* TODO: note D#2 */;
    /* TODO: note D#2 */;
    /* TODO: note D#3 */;
    /* TODO: note D#2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note C#3 */;
    /* TODO: note C#2 */;
    /* TODO: note C#2 */;
    /* TODO: note C#3 */;
    /* TODO: note C#2 */;
    /* TODO: note C#2 */;
    /* TODO: note C#3 */;
    /* TODO: note C#2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_4cf0(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: end_def  */;
}

void label_01E_4CFF(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD379, gb.regs.a);
  label_01E_4CFF_jr_4D03:;
    gb_write(0xD34F, gb.regs.a);
    gb_write(0xD398, gb.regs.a);
    gb_write(0xD393, gb.regs.a);
    gb_write(0xD3C9, gb.regs.a);
    gb_write(0xD3A3, gb.regs.a);
    gb_write(0xD3E5, gb.regs.a);
    gb.regs.a = 8;
  label_01E_4CFF_jr_4D17:;
    gb_write(0xFF21, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xFF23, gb.regs.a);
}

void label_01E_4D1D(void) {
    gb.regs.a = 0xFF;
    gb_write(0xFF25, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xD355, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD369, gb.regs.a);
}

void func_01E_4D2A(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD361, gb.regs.a);
    gb_write(0xD371, gb.regs.a);
    gb_write(wMusicChannel1_loopCounter, gb.regs.a);
    gb_write(wMusicChannel2_loopCounter, gb.regs.a);
    gb_write(wMusicChannel3_loopCounter, gb.regs.a);
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
    gb_write(0xD390, gb.regs.a);
    gb_write(0xD391, gb.regs.a);
    gb_write(0xD392, gb.regs.a);
    gb_write(0xD3C6, gb.regs.a);
    gb_write(0xD3C7, gb.regs.a);
    gb_write(0xD3C8, gb.regs.a);
    gb_write(0xD3A0, gb.regs.a);
    gb_write(0xD3A1, gb.regs.a);
    gb_write(0xD3A2, gb.regs.a);
    gb_write(0xD3CD, gb.regs.a);
    gb_write(0xD3D6, gb.regs.a);
    gb_write(0xD3D7, gb.regs.a);
    gb_write(0xD3D8, gb.regs.a);
    gb_write(0xD3DC, gb.regs.a);
    gb_write(0xD3E7, gb.regs.a);
    gb_write(0xD3E2, gb.regs.a);
    gb_write(0xD3E3, gb.regs.a);
    gb_write(0xD3E4, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFF12, gb.regs.a);
    gb_write(0xFF17, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xFF14, gb.regs.a);
    gb_write(0xFF19, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF10, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    return;
}

void MusicTitleCutscene(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ae8 */;
    /* data: dw MusicTitleCutscene_Channel1 */;
    /* data: dw MusicTitleCutscene_Channel2 */;
    /* data: dw MusicTitleCutscene_Channel3 */;
    /* data: dw $0000 */;
}

void MusicTitleCutscene_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_506f */;
    /* data: dw ChannelDefinition_1e_6eac */;
    /* data: dw ChannelDefinition_1e_50a1 */;
    /* data: dw ChannelDefinition_1e_6ea8 */;
    /* data: dw ChannelDefinition_1e_6e22 */;
    /* data: dw ChannelDefinition_1e_50a8 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_rest_1 */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_6eb0 */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5151 */;
    /* data: dw ChannelDefinition_1e_51e3 */;
    /* data: dw $0000 */;
}

void MusicTitleCutscene_Channel2(void) {
    /* data: dw ChannelDefinition_1e_50b7 */;
    /* data: dw ChannelDefinition_1e_6eac */;
    /* data: dw ChannelDefinition_1e_6dff */;
    /* data: dw ChannelDefinition_1e_50ed */;
    /* data: dw ChannelDefinition_1e_6ea8 */;
    /* data: dw ChannelDefinition_1e_50f2 */;
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_6eb0 */;
    /* data: dw ChannelDefinition_1e_6dbe */;
    /* data: dw ChannelDefinition_1e_5151 */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
    /* data: dw ChannelDefinition_1e_6e18 */;
    /* data: dw ChannelDefinition_1e_51e3 */;
    /* data: dw $0000 */;
}

void MusicTitleCutscene_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e63 */;
    /* data: dw ChannelDefinition_1e_5100 */;
    /* data: dw ChannelDefinition_1e_6eac */;
    /* data: dw ChannelDefinition_1e_5131 */;
    /* data: dw ChannelDefinition_1e_6ea8 */;
    /* data: dw ChannelDefinition_1e_6e54 */;
    /* data: dw ChannelDefinition_1e_5138 */;
    /* data: dw ChannelDefinition_1e_6e72 */;
    /* data: dw ChannelDefinition_1e_rest_6 */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_6e77 */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw $ffff, MusicLoop_1e_6d30 */;
}

void ChannelDefinition_1e_506f(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#1 */;
    /* TODO: note G#2 */;
    /* TODO: note G#1 */;
    /* TODO: note B_1 */;
    /* TODO: note B_2 */;
    /* TODO: next_loop  */;
    /* TODO: note A#1 */;
    /* TODO: note A#2 */;
    /* TODO: note A#1 */;
    /* TODO: note C#2 */;
    /* TODO: note C#3 */;
    /* TODO: note A#1 */;
    /* TODO: note A#2 */;
    /* TODO: note A_1 */;
    /* TODO: note A_2 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#1 */;
    /* TODO: note G#2 */;
    /* TODO: note G#1 */;
    /* TODO: note B_1 */;
    /* TODO: note B_2 */;
    /* TODO: next_loop  */;
    /* TODO: note C_2 */;
    /* TODO: note C_3 */;
    /* TODO: note C_2 */;
    /* TODO: note D#2 */;
    /* TODO: note D#3 */;
    /* TODO: note C_2 */;
    /* TODO: note C_3 */;
    /* TODO: note B_1 */;
    /* TODO: note B_2 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note A#1 */;
    /* TODO: note A#2 */;
    /* TODO: note A#1 */;
    /* TODO: note C#2 */;
    /* TODO: note C#3 */;
    /* TODO: next_loop  */;
    /* TODO: note E_2 */;
    /* TODO: note E_3 */;
    /* TODO: note E_2 */;
    /* TODO: note G_2 */;
    /* TODO: note G_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_50a1(void) {
    /* TODO: notelen 2 */;
    /* TODO: note A#1 */;
    /* TODO: note A#2 */;
    /* TODO: note A#1 */;
    /* TODO: note C#2 */;
    /* TODO: note C#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_50a8(void) {
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: note E_3 */;
    /* TODO: note E_2 */;
    /* TODO: note G_2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#2 */;
    /* TODO: note A#3 */;
    /* TODO: note A#2 */;
    /* TODO: note C#3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_50b7(void) {
    /* TODO: set_envelope_duty $97, $86, 2, 0 */;
    /* TODO: notelen 7 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note D#3 */;
    /* TODO: note E_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: note G#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note D#3 */;
    /* TODO: note E_3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $b7, $86, 2, 0 */;
    /* TODO: notelen 7 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F#3 */;
    /* TODO: note G_3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_50ed(void) {
    /* TODO: notelen 3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note C_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_50f2(void) {
    /* TODO: set_envelope_duty $89, $86, 2, 1 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D#6 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5100(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#1 */;
    /* TODO: note C#2 */;
    /* TODO: note C#1 */;
    /* TODO: note E_1 */;
    /* TODO: note E_2 */;
    /* TODO: next_loop  */;
    /* TODO: note D#1 */;
    /* TODO: note D#2 */;
    /* TODO: note D#1 */;
    /* TODO: note F#1 */;
    /* TODO: note F#2 */;
    /* TODO: note D#1 */;
    /* TODO: note D#2 */;
    /* TODO: note D_1 */;
    /* TODO: note D_2 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note C#1 */;
    /* TODO: note C#2 */;
    /* TODO: note C#1 */;
    /* TODO: note E_1 */;
    /* TODO: note E_2 */;
    /* TODO: next_loop  */;
    /* TODO: note F_1 */;
    /* TODO: note F_2 */;
    /* TODO: note F_1 */;
    /* TODO: note G#1 */;
    /* TODO: note G#2 */;
    /* TODO: note F_1 */;
    /* TODO: note F_2 */;
    /* TODO: note E_1 */;
    /* TODO: note E_2 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note D#1 */;
    /* TODO: note D#2 */;
    /* TODO: note D#1 */;
    /* TODO: note F#1 */;
    /* TODO: note F#2 */;
    /* TODO: next_loop  */;
    /* TODO: note A_1 */;
    /* TODO: note A_2 */;
    /* TODO: note A_1 */;
    /* TODO: note C_2 */;
    /* TODO: note C_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5131(void) {
    /* TODO: notelen 2 */;
    /* TODO: note D#1 */;
    /* TODO: note D#2 */;
    /* TODO: note D#1 */;
    /* TODO: note F#1 */;
    /* TODO: note F#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5138(void) {
    /* TODO: notelen 2 */;
    /* TODO: note A_1 */;
    /* TODO: note A_2 */;
    /* TODO: note A_1 */;
    /* TODO: note C_2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#2 */;
    /* TODO: note D#3 */;
    /* TODO: note D#2 */;
    /* TODO: note F#2 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5147(void) {
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note D#5 */;
    /* TODO: note F_5 */;
    /* TODO: note A_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5151(void) {
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: note A#2 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note A#2 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note D#3 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#2 */;
    /* TODO: note A#2 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note F_5 */;
    /* TODO: note A#4 */;
    /* TODO: note F_2 */;
    /* TODO: note A#1 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 6 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#5 */;
    /* TODO: note G#4 */;
    /* TODO: note D#2 */;
    /* TODO: note G#1 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note F_6 */;
    /* TODO: note A#5 */;
    /* TODO: note F_3 */;
    /* TODO: note A#2 */;
    /* TODO: note A#5 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#5 */;
    /* TODO: note C_6 */;
    /* TODO: note D_6 */;
    /* TODO: notelen 6 */;
    /* TODO: note D#6 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#6 */;
    /* TODO: note G#5 */;
    /* TODO: note D#3 */;
    /* TODO: note G#2 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#5 */;
    /* TODO: note A#5 */;
    /* TODO: note C_6 */;
    /* TODO: note D_6 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#3 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note D#3 */;
    /* TODO: note D#2 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note C_5 */;
    /* TODO: note F_4 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: note A#4 */;
    /* TODO: note D#4 */;
    /* TODO: note C_3 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#2 */;
    /* TODO: note A_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#2 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#2 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_51e3(void) {
    /* TODO: set_speed MusicSpeedData_1e_4ad9 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note F_3 */;
    /* TODO: note A#3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: note F_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: rest  */;
    /* TODO: note F_1 */;
    /* TODO: note F_3 */;
    /* TODO: note A#3 */;
    /* TODO: note D#4 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: note D#4 */;
    /* TODO: note G#4 */;
    /* TODO: rest  */;
    /* TODO: note F_1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicFileSelect(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicFileSelect_Channel1 */;
    /* data: dw MusicFileSelect_Channel2 */;
    /* data: dw MusicFileSelect_Channel3 */;
    /* data: dw MusicFileSelect_Channel4 */;
}

void MusicFileSelect_Channel1(void) {
    /* data: dw ChannelDefinition_1e_rest_5 */;
}

void MusicLoop_1e_5216(void) {
    /* data: dw ChannelDefinition_1e_6de1 */;
    /* data: dw ChannelDefinition_1e_5253 */;
    /* data: dw $ffff, MusicLoop_1e_5216 */;
}

void MusicFileSelect_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e31 */;
    /* data: dw ChannelDefinition_1e_5234 */;
    /* data: dw $ffff, MusicFileSelect_Channel2 */;
}

void MusicFileSelect_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e63 */;
    /* data: dw ChannelDefinition_1e_5274 */;
    /* data: dw $ffff, MusicFileSelect_Channel3 */;
}

void MusicFileSelect_Channel4(void) {
    /* data: dw ChannelDefinition_1e_5293 */;
    /* data: dw $ffff, MusicFileSelect_Channel4 */;
}

void ChannelDefinition_1e_5234(void) {
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A#4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#4 */;
    /* TODO: rest  */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5253(void) {
    /* TODO: notelen 2 */;
    /* TODO: note G#2 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#2 */;
    /* TODO: rest  */;
    /* TODO: note G#2 */;
    /* TODO: note A#2 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G#3 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#3 */;
    /* TODO: note D#3 */;
    /* TODO: note C_3 */;
    /* TODO: note G#2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5274(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note A#1 */;
    /* TODO: note A#1 */;
    /* TODO: rest  */;
    /* TODO: note A#1 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G#1 */;
    /* TODO: note G#1 */;
    /* TODO: rest  */;
    /* TODO: note G#1 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note F#1 */;
    /* TODO: note F#1 */;
    /* TODO: rest  */;
    /* TODO: note F#1 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G#1 */;
    /* TODO: note G#1 */;
    /* TODO: rest  */;
    /* TODO: note G#1 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5293(void) {
    /* TODO: begin_loop $07 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $06 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $08 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicFinalBossIntro(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ae8 */;
    /* data: dw MusicFinalBossIntro_Channel1_rest_1C0 */;
    /* data: dw MusicFinalBossIntro_Channel2 */;
    /* data: dw MusicFinalBossIntro_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicFinalBossIntro_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e2c */;
    /* data: dw ChannelDefinition_1e_53da */;
    /* data: dw $ffff, MusicFinalBossIntro_Channel2 */;
}

void MusicFinalBoss(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aac */;
    /* data: dw MusicFinalBoss_Channel1 */;
    /* data: dw MusicFinalBoss_Channel2 */;
    /* data: dw MusicFinalBoss_Channel3 */;
    /* data: dw MusicFinalBoss_Channel4 */;
}

void MusicFinalBoss_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6de1 */;
    /* data: dw ChannelDefinition_1e_53ce */;
    /* data: dw ChannelDefinition_1e_6ea0 */;
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_6eac */;
    /* data: dw ChannelDefinition_1e_rest_6 */;
}

void MusicLoop_1e_52d6(void) {
    /* data: dw ChannelDefinition_1e_6deb */;
    /* data: dw ChannelDefinition_1e_5498 */;
    /* data: dw ChannelDefinition_1e_54d7 */;
    /* data: dw ChannelDefinition_1e_54d7 */;
    /* data: dw ChannelDefinition_1e_54d7 */;
    /* data: dw ChannelDefinition_1e_54de */;
    /* data: dw ChannelDefinition_1e_5498 */;
    /* data: dw ChannelDefinition_1e_54d7 */;
    /* data: dw ChannelDefinition_1e_54d7 */;
    /* data: dw ChannelDefinition_1e_54d7 */;
    /* data: dw ChannelDefinition_1e_54de */;
    /* data: dw $ffff, MusicLoop_1e_553b */;
}

void MusicFinalBoss_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_6dd2 */;
    /* data: dw ChannelDefinition_1e_5411 */;
    /* data: dw ChannelDefinition_1e_6ea0 */;
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_6eac */;
    /* data: dw ChannelDefinition_1e_rest_6 */;
}

void MusicLoop_1e_52fe(void) {
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_542a */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_rest_1 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_5450 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_5461 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_542a */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_rest_1 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_5450 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_5461 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e91 */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_5472 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_rest_1 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6df0 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_54ab */;
    /* data: dw ChannelDefinition_1e_6e94 */;
    /* data: dw ChannelDefinition_1e_54ab */;
    /* data: dw ChannelDefinition_1e_6e8e */;
    /* data: dw ChannelDefinition_1e_54ba */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_6df0 */;
    /* data: dw ChannelDefinition_1e_54c2 */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_542a */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_rest_1 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_5450 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_5461 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_542a */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_rest_1 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_5450 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_5461 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6e91 */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_5472 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_rest_1 */;
    /* data: dw ChannelDefinition_1e_543b */;
    /* data: dw ChannelDefinition_1e_6df0 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_54ab */;
    /* data: dw ChannelDefinition_1e_6e94 */;
    /* data: dw ChannelDefinition_1e_54ab */;
    /* data: dw ChannelDefinition_1e_6e8e */;
    /* data: dw ChannelDefinition_1e_54ba */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_6de1 */;
    /* data: dw ChannelDefinition_1e_54c2 */;
    /* data: dw $ffff, MusicLoop_1e_5531 */;
}

void MusicFinalBoss_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e54 */;
    /* data: dw ChannelDefinition_1e_541d */;
    /* data: dw ChannelDefinition_1e_6ea0 */;
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_6eac */;
    /* data: dw ChannelDefinition_1e_rest_6 */;
}

void MusicLoop_1e_53a6(void) {
    /* data: dw ChannelDefinition_1e_6e59 */;
    /* data: dw ChannelDefinition_1e_5482 */;
    /* data: dw ChannelDefinition_1e_54f3 */;
    /* data: dw ChannelDefinition_1e_6e54 */;
    /* data: dw ChannelDefinition_1e_5508 */;
    /* data: dw ChannelDefinition_1e_6e59 */;
    /* data: dw ChannelDefinition_1e_5482 */;
    /* data: dw ChannelDefinition_1e_54f3 */;
    /* data: dw ChannelDefinition_1e_6e54 */;
    /* data: dw ChannelDefinition_1e_5508 */;
    /* data: dw $ffff, MusicLoop_1e_5545 */;
}

void MusicFinalBoss_Channel4(void) {
    /* data: dw ChannelDefinition_1e_5518 */;
    /* data: dw ChannelDefinition_1e_6ea0 */;
    /* data: dw ChannelDefinition_1e_602d */;
    /* data: dw ChannelDefinition_1e_6eac */;
    /* data: dw ChannelDefinition_1e_551d */;
}

void MusicLoop_1e_53c8(void) {
    /* data: dw ChannelDefinition_1e_5520 */;
    /* data: dw $ffff, MusicLoop_1e_53c8 */;
}

void ChannelDefinition_1e_53ce(void) {
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_53da(void) {
    /* TODO: begin_loop $06 */;
    /* TODO: notelen 0 */;
    /* TODO: note B_3 */;
    /* TODO: note A#3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $0a */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $68, $00, 2, 1 */;
    /* TODO: begin_loop $06 */;
    /* TODO: note A_3 */;
    /* TODO: note G#3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $0a */;
    /* TODO: note G#3 */;
    /* TODO: note G_3 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $a8, $00, 2, 1 */;
    /* TODO: begin_loop $06 */;
    /* TODO: notelen 0 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $0a */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $78, $00, 2, 1 */;
    /* TODO: begin_loop $06 */;
    /* TODO: note B_3 */;
    /* TODO: note A#3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $0a */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5411(void) {
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_541d(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note G#4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_542a(void) {
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note C#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_543b(void) {
    /* TODO: set_envelope_duty $92, $00, 3, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_1 */;
    /* TODO: rest  */;
    /* TODO: note G_1 */;
    /* TODO: note G_2 */;
    /* TODO: rest  */;
    /* TODO: note C_2 */;
    /* TODO: note C#2 */;
    /* TODO: rest  */;
    /* TODO: note G_1 */;
    /* TODO: rest  */;
    /* TODO: note G#1 */;
    /* TODO: rest  */;
    /* TODO: note G#1 */;
    /* TODO: note C#1 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5450(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note A#4 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5461(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note C#5 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5472(void) {
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5482(void) {
    /* TODO: begin_loop $14 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: note C_3 */;
    /* TODO: note C_4 */;
    /* TODO: rest  */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: note C#3 */;
    /* TODO: rest  */;
    /* TODO: note C#3 */;
    /* TODO: note F#2 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5498(void) {
    /* TODO: notelen 1 */;
    /* TODO: note C#1 */;
    /* TODO: begin_loop $7f */;
    /* TODO: note C_1 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 1 */;
    /* TODO: note C#1 */;
    /* TODO: begin_loop $7f */;
    /* TODO: note C_1 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 1 */;
    /* TODO: note C#1 */;
    /* TODO: begin_loop $3f */;
    /* TODO: note C_1 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_54ab(void) {
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note C#4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_54ba(void) {
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_54c2(void) {
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: note D#4 */;
    /* TODO: rest  */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#4 */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note D_3 */;
    /* TODO: note A_2 */;
    /* TODO: note F_2 */;
    /* TODO: disable_unknown2  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_54d7(void) {
    /* TODO: notelen 1 */;
    /* TODO: note G_1 */;
    /* TODO: begin_loop $0f */;
    /* TODO: note F#1 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_54de(void) {
    /* TODO: notelen 1 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: rest  */;
    /* TODO: note F_3 */;
    /* TODO: rest  */;
    /* TODO: note F_3 */;
    /* TODO: rest  */;
    /* TODO: note F_3 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note A_2 */;
    /* TODO: note F_2 */;
    /* TODO: note D_2 */;
    /* TODO: disable_unknown2  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_54f3(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#3 */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: note F#3 */;
    /* TODO: note F#4 */;
    /* TODO: rest  */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: rest  */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5508(void) {
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: note F_3 */;
    /* TODO: rest  */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5518(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_551d(void) {
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5520(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: end_def  */;
}

void MusicLoop_1e_5531(void) {
    /* data: dw ChannelDefinition_1e_5551 */;
    /* data: dw ChannelDefinition_1e_5551 */;
    /* data: dw ChannelDefinition_1e_5561 */;
    /* data: dw $ffff, MusicLoop_1e_52fe */;
}

void MusicLoop_1e_553b(void) {
    /* data: dw ChannelDefinition_1e_557c */;
    /* data: dw ChannelDefinition_1e_557c */;
    /* data: dw ChannelDefinition_1e_55a8 */;
    /* data: dw $ffff, MusicLoop_1e_52d6 */;
}

void MusicLoop_1e_5545(void) {
    /* data: dw ChannelDefinition_1e_6e59 */;
    /* data: dw ChannelDefinition_1e_55ec */;
    /* data: dw ChannelDefinition_1e_55ec */;
    /* data: dw ChannelDefinition_1e_5615 */;
    /* data: dw $ffff, MusicLoop_1e_53a6 */;
}

void ChannelDefinition_1e_5551(void) {
    /* TODO: set_envelope_duty $c4, $83, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#1 */;
    /* TODO: begin_loop $1f */;
    /* TODO: note C_1 */;
    /* TODO: next_loop  */;
    /* TODO: note E_1 */;
    /* TODO: begin_loop $1f */;
    /* TODO: note D#1 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5561(void) {
    /* TODO: notelen 1 */;
    /* TODO: note G_1 */;
    /* TODO: begin_loop $0d */;
    /* TODO: note F#1 */;
    /* TODO: next_loop  */;
    /* TODO: note G_1 */;
    /* TODO: note G#1 */;
    /* TODO: begin_loop $0f */;
    /* TODO: note A_1 */;
    /* TODO: next_loop  */;
    /* TODO: note G_1 */;
    /* TODO: begin_loop $0e */;
    /* TODO: note F#1 */;
    /* TODO: next_loop  */;
    /* TODO: note G_1 */;
    /* TODO: note G#1 */;
    /* TODO: begin_loop $07 */;
    /* TODO: note A_1 */;
    /* TODO: next_loop  */;
    /* TODO: note A#1 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_557c(void) {
    /* TODO: set_envelope_duty $84, $86, 2, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_1 */;
    /* TODO: note G_1 */;
    /* TODO: rest  */;
    /* TODO: note G_1 */;
    /* TODO: note G_2 */;
    /* TODO: rest  */;
    /* TODO: note C_2 */;
    /* TODO: note C#2 */;
    /* TODO: rest  */;
    /* TODO: note G_1 */;
    /* TODO: rest  */;
    /* TODO: note G#1 */;
    /* TODO: rest  */;
    /* TODO: note G#1 */;
    /* TODO: note C#1 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note A#1 */;
    /* TODO: note A#1 */;
    /* TODO: rest  */;
    /* TODO: note A#1 */;
    /* TODO: note A#2 */;
    /* TODO: rest  */;
    /* TODO: note D#2 */;
    /* TODO: note E_2 */;
    /* TODO: rest  */;
    /* TODO: note A#1 */;
    /* TODO: rest  */;
    /* TODO: note B_1 */;
    /* TODO: rest  */;
    /* TODO: note B_1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_55a8(void) {
    /* TODO: notelen 1 */;
    /* TODO: note C#2 */;
    /* TODO: note C#2 */;
    /* TODO: rest  */;
    /* TODO: note C#2 */;
    /* TODO: note C#3 */;
    /* TODO: rest  */;
    /* TODO: note F#2 */;
    /* TODO: note G#2 */;
    /* TODO: rest  */;
    /* TODO: note C#2 */;
    /* TODO: begin_loop $02 */;
    /* TODO: rest  */;
    /* TODO: note D_2 */;
    /* TODO: next_loop  */;
    /* TODO: note G#1 */;
    /* TODO: rest  */;
    /* TODO: note E_2 */;
    /* TODO: note E_2 */;
    /* TODO: rest  */;
    /* TODO: note E_2 */;
    /* TODO: note E_3 */;
    /* TODO: rest  */;
    /* TODO: note A_2 */;
    /* TODO: note A#2 */;
    /* TODO: rest  */;
    /* TODO: note E_2 */;
    /* TODO: begin_loop $02 */;
    /* TODO: rest  */;
    /* TODO: note F_2 */;
    /* TODO: next_loop  */;
    /* TODO: note B_1 */;
    /* TODO: rest  */;
    /* TODO: note C#2 */;
    /* TODO: note C#2 */;
    /* TODO: rest  */;
    /* TODO: note C#2 */;
    /* TODO: note C#3 */;
    /* TODO: rest  */;
    /* TODO: note F#2 */;
    /* TODO: note G#2 */;
    /* TODO: rest  */;
    /* TODO: note C#2 */;
    /* TODO: begin_loop $02 */;
    /* TODO: rest  */;
    /* TODO: note D_2 */;
    /* TODO: next_loop  */;
    /* TODO: note G#1 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: note E_2 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_2 */;
    /* TODO: note F#2 */;
    /* TODO: rest  */;
    /* TODO: note F#2 */;
    /* TODO: notelen 6 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#2 */;
    /* TODO: note F#1 */;
    /* TODO: note F#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_55ec(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: note C_3 */;
    /* TODO: note C_4 */;
    /* TODO: rest  */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: note C#3 */;
    /* TODO: rest  */;
    /* TODO: note C#3 */;
    /* TODO: note F#2 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note D#3 */;
    /* TODO: note D#3 */;
    /* TODO: rest  */;
    /* TODO: note D#3 */;
    /* TODO: note D#4 */;
    /* TODO: rest  */;
    /* TODO: note G#3 */;
    /* TODO: note A_3 */;
    /* TODO: rest  */;
    /* TODO: note D#3 */;
    /* TODO: rest  */;
    /* TODO: note E_3 */;
    /* TODO: rest  */;
    /* TODO: note E_3 */;
    /* TODO: note A#2 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5615(void) {
    /* TODO: notelen 1 */;
    /* TODO: note F#3 */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: note F#3 */;
    /* TODO: note F#4 */;
    /* TODO: rest  */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: rest  */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: note C#3 */;
    /* TODO: rest  */;
    /* TODO: note A_3 */;
    /* TODO: note A_3 */;
    /* TODO: rest  */;
    /* TODO: note A_3 */;
    /* TODO: note A_4 */;
    /* TODO: rest  */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: rest  */;
    /* TODO: note A_3 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: note E_3 */;
    /* TODO: rest  */;
    /* TODO: note F#3 */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: note F#3 */;
    /* TODO: note F#4 */;
    /* TODO: rest  */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: rest  */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: note C#3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: note B_3 */;
    /* TODO: rest  */;
    /* TODO: note B_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: note B_2 */;
    /* TODO: note B_3 */;
    /* TODO: end_def  */;
}

void MusicEggMaze(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4af7 */;
    /* data: dw MusicEggMaze_Channel1 */;
    /* data: dw MusicEggMaze_Channel2 */;
    /* data: dw MusicEggMaze_Channel3 */;
    /* data: dw $0000 */;
}

void MusicEggMaze_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6de1 */;
    /* data: dw ChannelDefinition_1e_56a7 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw $ffff, MusicLoop_1e_5745 */;
}

void MusicEggMaze_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_56bc */;
    /* data: dw ChannelDefinition_1e_6e45 */;
    /* data: dw ChannelDefinition_1e_56c7 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_56d2 */;
    /* data: dw ChannelDefinition_1e_56bc */;
    /* data: dw ChannelDefinition_1e_6e45 */;
    /* data: dw ChannelDefinition_1e_56c7 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_56d2 */;
    /* data: dw ChannelDefinition_1e_6e27 */;
    /* data: dw ChannelDefinition_1e_56e3 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_56d2 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_56ed */;
    /* data: dw $ffff, MusicLoop_1e_575f */;
}

void MusicEggMaze_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e59 */;
    /* data: dw ChannelDefinition_1e_56f9 */;
    /* data: dw ChannelDefinition_1e_56f9 */;
    /* data: dw ChannelDefinition_1e_6e54 */;
    /* data: dw ChannelDefinition_1e_5735 */;
    /* data: dw ChannelDefinition_1e_6e59 */;
    /* data: dw ChannelDefinition_1e_5724 */;
    /* data: dw ChannelDefinition_1e_5724 */;
    /* data: dw $ffff, MusicLoop_1e_5791 */;
}

void ChannelDefinition_1e_56a7(void) {
    /* TODO: begin_loop $10 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F_1 */;
    /* TODO: note B_1 */;
    /* TODO: note F_2 */;
    /* TODO: note B_2 */;
    /* TODO: note F_3 */;
    /* TODO: note B_3 */;
    /* TODO: note F_4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_56bc(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_5 */;
    /* TODO: note G_5 */;
    /* TODO: note F#5 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_56c7(void) {
    /* TODO: notelen 1 */;
    /* TODO: note E_3 */;
    /* TODO: note G_3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note D#4 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_56d2(void) {
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note B_5 */;
    /* TODO: note A#5 */;
    /* TODO: begin_loop $0d */;
    /* TODO: notelen 0 */;
    /* TODO: note B_5 */;
    /* TODO: note A#5 */;
    /* TODO: next_loop  */;
    /* TODO: note B_5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_56e3(void) {
    /* TODO: notelen 1 */;
    /* TODO: note E_5 */;
    /* TODO: note G_5 */;
    /* TODO: note B_5 */;
    /* TODO: note A#5 */;
    /* TODO: notelen 5 */;
    /* TODO: note D_6 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_56ed(void) {
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $0d */;
    /* TODO: notelen 0 */;
    /* TODO: note B_5 */;
    /* TODO: note A#5 */;
    /* TODO: next_loop  */;
    /* TODO: note B_5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_56f9(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note E_1 */;
    /* TODO: note E_1 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: note E_1 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note E_1 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note E_1 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
}

void ChannelDefinition_1e_5724(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: note E_1 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note E_1 */;
    /* TODO: note E_1 */;
    /* TODO: note E_1 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5735(void) {
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 1 */;
    /* TODO: note E_1 */;
    /* TODO: note G_1 */;
    /* TODO: note B_1 */;
    /* TODO: note A#1 */;
    /* TODO: notelen 5 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note D#2 */;
    /* TODO: note B_1 */;
    /* TODO: note G_1 */;
    /* TODO: note E_1 */;
    /* TODO: end_def  */;
}

void MusicLoop_1e_5745(void) {
    /* data: dw ChannelDefinition_1e_6e36 */;
    /* data: dw ChannelDefinition_1e_57b1 */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_57db */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_6eb4 */;
    /* data: dw ChannelDefinition_1e_5808 */;
    /* data: dw ChannelDefinition_1e_6de1 */;
    /* data: dw ChannelDefinition_1e_56a7 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw $ffff, MusicEggMaze_Channel1 */;
}

void MusicLoop_1e_575f(void) {
    /* data: dw ChannelDefinition_1e_6e36 */;
    /* data: dw ChannelDefinition_1e_5814 */;
    /* data: dw ChannelDefinition_1e_6e40 */;
    /* data: dw ChannelDefinition_1e_583e */;
    /* data: dw ChannelDefinition_1e_6eb4 */;
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_56bc */;
    /* data: dw ChannelDefinition_1e_6e45 */;
    /* data: dw ChannelDefinition_1e_56c7 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_56d2 */;
    /* data: dw ChannelDefinition_1e_56bc */;
    /* data: dw ChannelDefinition_1e_6e45 */;
    /* data: dw ChannelDefinition_1e_56c7 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_56d2 */;
    /* data: dw ChannelDefinition_1e_6e27 */;
    /* data: dw ChannelDefinition_1e_56e3 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_56d2 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_56ed */;
    /* data: dw $ffff, MusicEggMaze_Channel2 */;
}

void MusicLoop_1e_5791(void) {
    /* data: dw ChannelDefinition_1e_6e63 */;
    /* data: dw ChannelDefinition_1e_586b */;
    /* data: dw ChannelDefinition_1e_6e54 */;
    /* data: dw ChannelDefinition_1e_589b */;
    /* data: dw ChannelDefinition_1e_6eb4 */;
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_6e59 */;
    /* data: dw ChannelDefinition_1e_56f9 */;
    /* data: dw ChannelDefinition_1e_56f9 */;
    /* data: dw ChannelDefinition_1e_6e54 */;
    /* data: dw ChannelDefinition_1e_5735 */;
    /* data: dw ChannelDefinition_1e_6e59 */;
    /* data: dw ChannelDefinition_1e_5724 */;
    /* data: dw ChannelDefinition_1e_5724 */;
    /* data: dw $ffff, MusicEggMaze_Channel3 */;
}

void ChannelDefinition_1e_57b1(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_1 */;
    /* TODO: note C#2 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_1 */;
    /* TODO: note C#2 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note F#2 */;
    /* TODO: note B_1 */;
    /* TODO: notelen 4 */;
    /* TODO: note C#2 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_1 */;
    /* TODO: note C#2 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_1 */;
    /* TODO: note C#2 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#2 */;
    /* TODO: note B_2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#2 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_57db(void) {
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#3 */;
    /* TODO: note F_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5808(void) {
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note B_5 */;
    /* TODO: note A#5 */;
    /* TODO: begin_loop $09 */;
    /* TODO: notelen 0 */;
    /* TODO: note B_5 */;
    /* TODO: note A#5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5814(void) {
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note E_3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_3 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_583e(void) {
    /* TODO: notelen 1 */;
    /* TODO: note E_3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note E_3 */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: note A#3 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_4 */;
    /* TODO: note A#4 */;
    /* TODO: note E_5 */;
    /* TODO: note F_5 */;
    /* TODO: note F#5 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_586b(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: note E_1 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_1 */;
    /* TODO: note D_1 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: note E_1 */;
    /* TODO: rest  */;
    /* TODO: note E_1 */;
    /* TODO: rest  */;
    /* TODO: note E_1 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_1 */;
    /* TODO: note E_1 */;
    /* TODO: note E_1 */;
    /* TODO: note E_1 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_2 */;
    /* TODO: note C_2 */;
    /* TODO: rest  */;
    /* TODO: note C_2 */;
    /* TODO: rest  */;
    /* TODO: note C_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_2 */;
    /* TODO: note C_2 */;
    /* TODO: note C_2 */;
    /* TODO: note C_2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_589b(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_1 */;
    /* TODO: next_loop  */;
    /* TODO: note E_2 */;
    /* TODO: begin_loop $07 */;
    /* TODO: note E_1 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note E_1 */;
    /* TODO: next_loop  */;
    /* TODO: note E_2 */;
    /* TODO: begin_loop $07 */;
    /* TODO: note E_1 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note E_1 */;
    /* TODO: next_loop  */;
    /* TODO: note E_2 */;
    /* TODO: begin_loop $07 */;
    /* TODO: note E_1 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note E_1 */;
    /* TODO: next_loop  */;
    /* TODO: note E_2 */;
    /* TODO: begin_loop $07 */;
    /* TODO: note E_1 */;
    /* TODO: next_loop  */;
    /* TODO: note E_2 */;
    /* TODO: note F_2 */;
    /* TODO: note F#2 */;
    /* TODO: note B_1 */;
    /* TODO: note C_2 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicTurtleRock(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicTurtleRock_Channel1 */;
    /* data: dw MusicTurtleRock_Channel2 */;
    /* data: dw MusicTurtleRock_Channel3 */;
    /* data: dw $0000 */;
}

void MusicTurtleRock_Channel1(void) {
    /* data: dw ChannelDefinition_1e_rest_6 */;
}

void MusicLoop_1e_58d6(void) {
    /* data: dw ChannelDefinition_1e_6d78 */;
    /* data: dw ChannelDefinition_1e_5918 */;
    /* data: dw ChannelDefinition_1e_5921 */;
    /* data: dw ChannelDefinition_1e_5918 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5929 */;
    /* data: dw ChannelDefinition_1e_5931 */;
    /* data: dw ChannelDefinition_1e_5931 */;
    /* data: dw ChannelDefinition_1e_5931 */;
    /* data: dw ChannelDefinition_1e_5931 */;
    /* data: dw $ffff, MusicLoop_1e_58d6 */;
}

void MusicTurtleRock_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5918 */;
    /* data: dw ChannelDefinition_1e_5921 */;
    /* data: dw ChannelDefinition_1e_6dc3 */;
    /* data: dw ChannelDefinition_1e_5918 */;
    /* data: dw ChannelDefinition_1e_5929 */;
    /* data: dw ChannelDefinition_1e_6da5 */;
    /* data: dw ChannelDefinition_1e_5931 */;
    /* data: dw ChannelDefinition_1e_5931 */;
    /* data: dw ChannelDefinition_1e_6dc3 */;
    /* data: dw ChannelDefinition_1e_5931 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5931 */;
    /* data: dw $ffff, MusicTurtleRock_Channel2 */;
}

void MusicTurtleRock_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e54 */;
    /* data: dw ChannelDefinition_1e_rest_3C */;
    /* data: dw ChannelDefinition_1e_5939 */;
    /* data: dw ChannelDefinition_1e_5961 */;
    /* data: dw $ffff, MusicTurtleRock_Channel3 */;
}

void ChannelDefinition_1e_5918(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5921(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5929(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5931(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5939(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 7 */;
    /* TODO: note B_1 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_1 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A#1 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_1 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_1 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_1 */;
    /* TODO: notelen 7 */;
    /* TODO: note E_1 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_1 */;
    /* TODO: note C_1 */;
    /* TODO: note C_1 */;
    /* TODO: rest  */;
    /* TODO: note C_1 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5961(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#1 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_3C(void) {
    /* TODO: begin_loop $0c */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicTailCave(void) {
    MusicTailCaveCopy();
}

void MusicTailCaveCopy(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicTailCave_Channel1_rest_1C0 */;
    /* data: dw MusicTailCave_Channel2 */;
    /* data: dw MusicTailCave_Channel3 */;
    /* data: dw $0000 */;
}

void MusicTailCave_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_5a47 */;
    /* data: dw ChannelDefinition_1e_5a51 */;
    /* data: dw ChannelDefinition_1e_6e1d */;
    /* data: dw ChannelDefinition_1e_6e94 */;
    /* data: dw ChannelDefinition_1e_5a47 */;
    /* data: dw ChannelDefinition_1e_5a51 */;
    /* data: dw ChannelDefinition_1e_6dfa */;
    /* data: dw ChannelDefinition_1e_6e8b */;
    /* data: dw ChannelDefinition_1e_5a47 */;
    /* data: dw ChannelDefinition_1e_6e88 */;
    /* data: dw ChannelDefinition_1e_5a47 */;
    /* data: dw ChannelDefinition_1e_6de6 */;
    /* data: dw ChannelDefinition_1e_6e85 */;
    /* data: dw ChannelDefinition_1e_5a47 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_5a47 */;
    /* data: dw ChannelDefinition_1e_5a51 */;
    /* data: dw ChannelDefinition_1e_6e1d */;
    /* data: dw ChannelDefinition_1e_6e94 */;
    /* data: dw ChannelDefinition_1e_5a47 */;
    /* data: dw ChannelDefinition_1e_5a51 */;
    /* data: dw ChannelDefinition_1e_6dfa */;
    /* data: dw ChannelDefinition_1e_6e8b */;
    /* data: dw ChannelDefinition_1e_5a47 */;
    /* data: dw ChannelDefinition_1e_6e88 */;
    /* data: dw ChannelDefinition_1e_5a47 */;
    /* data: dw ChannelDefinition_1e_6de6 */;
    /* data: dw ChannelDefinition_1e_6e85 */;
    /* data: dw ChannelDefinition_1e_5a47 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5a77 */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5a7e */;
    /* data: dw ChannelDefinition_1e_6d91 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5a8a */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5a90 */;
    /* data: dw ChannelDefinition_1e_6d91 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6e94 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5a77 */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5a7e */;
    /* data: dw ChannelDefinition_1e_6d91 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5a8a */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5a90 */;
    /* data: dw ChannelDefinition_1e_6d91 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5a84 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_6db9 */;
    /* data: dw ChannelDefinition_1e_5a3f */;
    /* data: dw ChannelDefinition_1e_6e27 */;
    /* data: dw ChannelDefinition_1e_5a96 */;
    /* data: dw $ffff, MusicTailCave_Channel2 */;
}

void MusicTailCave_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e5e */;
    /* data: dw ChannelDefinition_1e_5a6a */;
    /* data: dw ChannelDefinition_1e_5a9f */;
    /* data: dw ChannelDefinition_1e_6e59 */;
    /* data: dw ChannelDefinition_1e_5a3f */;
    /* data: dw ChannelDefinition_1e_5a96 */;
    /* data: dw $ffff, MusicTailCave_Channel3 */;
}

void ChannelDefinition_1e_5a3f(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_1 */;
    /* TODO: note C#2 */;
    /* TODO: note D_2 */;
    /* TODO: note A_1 */;
    /* TODO: note B_1 */;
    /* TODO: note C_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5a47(void) {
    /* TODO: notelen 3 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_3 */;
    /* TODO: note B_1 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5a51(void) {
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note G#3 */;
    /* TODO: note B_1 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_3 */;
    /* TODO: note B_1 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note G#3 */;
    /* TODO: note B_1 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5a6a(void) {
    /* TODO: begin_loop $18 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note B_1 */;
    /* TODO: note B_1 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note B_1 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5a77(void) {
    /* TODO: begin_loop $0c */;
    /* TODO: notelen 1 */;
    /* TODO: note F_2 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5a7e(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note F_2 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5a84(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note E_2 */;
    /* TODO: note G#2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5a8a(void) {
    /* TODO: begin_loop $0c */;
    /* TODO: note D#2 */;
    /* TODO: note G_2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5a90(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note D#2 */;
    /* TODO: note G_2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5a96(void) {
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: note F_1 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5a9f(void) {
    /* TODO: begin_loop $08 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note B_1 */;
    /* TODO: note B_1 */;
    /* TODO: rest  */;
    /* TODO: note B_1 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_1 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicBottleGrotto(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicBottleGrotto_Channel1 */;
    /* data: dw MusicBottleGrotto_Channel2 */;
    /* data: dw MusicBottleGrotto_Channel3 */;
    /* data: dw $0000 */;
}

void MusicBottleGrotto_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5bdf */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5bdf */;
    /* data: dw ChannelDefinition_1e_5bdf */;
    /* data: dw ChannelDefinition_1e_5c00 */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c0b */;
    /* data: dw ChannelDefinition_1e_5c0b */;
    /* data: dw ChannelDefinition_1e_5c0b */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_5c0b */;
    /* data: dw $ffff, MusicBottleGrotto_Channel1 */;
}

void MusicBottleGrotto_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c2f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c35 */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3a */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c3f */;
    /* data: dw ChannelDefinition_1e_6d82 */;
    /* data: dw ChannelDefinition_1e_5c44 */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c44 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c49 */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_5c49 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_5c4e */;
    /* data: dw ChannelDefinition_1e_6e94 */;
    /* data: dw ChannelDefinition_1e_5c4e */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw $ffff, MusicBottleGrotto_Channel2 */;
}

void MusicBottleGrotto_Channel3(void) {
    /* data: dw ChannelDefinition_1e_rest_2D */;
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_6e63 */;
    /* data: dw ChannelDefinition_1e_5c5e */;
    /* data: dw ChannelDefinition_1e_6e72 */;
    /* data: dw ChannelDefinition_1e_5c8d */;
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_5ca1 */;
    /* data: dw ChannelDefinition_1e_6e72 */;
    /* data: dw ChannelDefinition_1e_5c8d */;
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_5ca1 */;
    /* data: dw ChannelDefinition_1e_rest_4 */;
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_5c96 */;
    /* data: dw ChannelDefinition_1e_6e77 */;
    /* data: dw ChannelDefinition_1e_5ca1 */;
    /* data: dw ChannelDefinition_1e_rest_4 */;
    /* data: dw $ffff, MusicBottleGrotto_Channel3 */;
}

void ChannelDefinition_1e_5bdf(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c00(void) {
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note A#4 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note B_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c0b(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_1 */;
    /* TODO: note D#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $a2, $83, 3, 0 */;
    /* TODO: note C_1 */;
    /* TODO: note D#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: set_envelope_duty $c2, $83, 3, 0 */;
    /* TODO: note C_1 */;
    /* TODO: note D#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: set_envelope_duty $81, $83, 3, 0 */;
    /* TODO: begin_loop $03 */;
    /* TODO: note C_1 */;
    /* TODO: note D#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c2f(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c35(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note A#4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c3a(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note C#5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c3f(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note C_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c44(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note E_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c49(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note F_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c4e(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note G#3 */;
    /* TODO: note C#3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c5e(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_1 */;
    /* TODO: note C#2 */;
    /* TODO: note D_2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_1 */;
    /* TODO: note C#2 */;
    /* TODO: note D_2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C#2 */;
    /* TODO: note D#2 */;
    /* TODO: note E_2 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C#2 */;
    /* TODO: note D#2 */;
    /* TODO: note E_2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note F#2 */;
    /* TODO: note G#2 */;
    /* TODO: note A_2 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A#2 */;
    /* TODO: note F_3 */;
    /* TODO: begin_loop $09 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5c8d(void) {
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: note D_5 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
}

void ChannelDefinition_1e_5c96(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#4 */;
    /* TODO: note B_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5ca1(void) {
    /* TODO: notelen 2 */;
    /* TODO: note G#4 */;
    /* TODO: note B_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: end_def  */;
}

void MusicKeyCavern(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicKeyCavern_Channel1 */;
    /* data: dw MusicKeyCavern_Channel2 */;
    /* data: dw MusicKeyCavern_Channel3 */;
    /* data: dw $0000 */;
}

void MusicKeyCavern_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6d87 */;
    /* data: dw ChannelDefinition_1e_5d75 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_rest_4 */;
    /* data: dw ChannelDefinition_1e_rest_2 */;
    /* data: dw ChannelDefinition_1e_rest_2 */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6d87 */;
    /* data: dw ChannelDefinition_1e_5d86 */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_rest_2 */;
    /* data: dw ChannelDefinition_1e_rest_2 */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_5d98 */;
    /* data: dw $ffff, MusicKeyCavern_Channel1 */;
}

void MusicKeyCavern_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e45 */;
    /* data: dw ChannelDefinition_1e_5d36 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_5d4d */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_5d6d */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
    /* data: dw $ffff, MusicKeyCavern_Channel2 */;
}

void MusicKeyCavern_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e5e */;
    /* data: dw ChannelDefinition_1e_5d36 */;
    /* data: dw ChannelDefinition_1e_rest_2D */;
    /* data: dw $ffff, MusicKeyCavern_Channel3 */;
}

void ChannelDefinition_1e_5d36(void) {
    /* TODO: notelen 4 */;
    /* TODO: note B_1 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#2 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 5 */;
    /* TODO: note A#1 */;
    /* TODO: begin_loop $04 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 4 */;
    /* TODO: note B_1 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#2 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 5 */;
    /* TODO: note F_2 */;
    /* TODO: begin_loop $04 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5d4d(void) {
    /* TODO: notelen 4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_5 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 4 */;
    /* TODO: note G#5 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#5 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note E_6 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_5 */;
    /* TODO: note A#5 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_2D(void) {
    /* TODO: begin_loop $09 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5d6d(void) {
    /* TODO: notelen 10 */;
    /* TODO: note B_3 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: note B_4 */;
    /* TODO: note F#4 */;
    /* TODO: note F_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5d75(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note A_5 */;
    /* TODO: note G#5 */;
    /* TODO: rest  */;
    /* TODO: note A_5 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_5 */;
    /* TODO: note G#5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5d86(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note C_6 */;
    /* TODO: note B_5 */;
    /* TODO: rest  */;
    /* TODO: note C_6 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C_6 */;
    /* TODO: note B_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5d98(void) {
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_3 */;
    /* TODO: note F_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $03 */;
    /* TODO: note A#3 */;
    /* TODO: note E_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $03 */;
    /* TODO: note F#3 */;
    /* TODO: note C_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $06 */;
    /* TODO: note G_3 */;
    /* TODO: note C#3 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicAnglersTunnel(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicAnglersTunnel_Channel1 */;
    /* data: dw MusicAnglersTunnel_Channel2 */;
    /* data: dw MusicAnglersTunnel_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicAnglersTunnel_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5dd6 */;
    /* data: dw $ffff, MusicAnglersTunnel_Channel1 */;
}

void MusicAnglersTunnel_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_5e20 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_5e4d */;
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_5e5f */;
    /* data: dw $ffff, MusicAnglersTunnel_Channel2 */;
}

void ChannelDefinition_1e_5dd6(void) {
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note A_4 */;
    /* TODO: rest  */;
    /* TODO: note F_5 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note G#4 */;
    /* TODO: rest  */;
    /* TODO: note E_5 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note B_4 */;
    /* TODO: rest  */;
    /* TODO: note G_5 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note A#4 */;
    /* TODO: rest  */;
    /* TODO: note F#5 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: note A_4 */;
    /* TODO: note E_5 */;
    /* TODO: rest  */;
    /* TODO: note A#5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note F_5 */;
    /* TODO: rest  */;
    /* TODO: note B_5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: note F_6 */;
    /* TODO: note E_6 */;
    /* TODO: note D#6 */;
    /* TODO: note D_6 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5e20(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A#5 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C#6 */;
    /* TODO: notelen 4 */;
    /* TODO: note C#6 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C_6 */;
    /* TODO: notelen 4 */;
    /* TODO: note C_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5e4d(void) {
    /* TODO: notelen 2 */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: note A_4 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_6 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note F_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5e5f(void) {
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: note D_5 */;
    /* TODO: note A_6 */;
    /* TODO: note G#6 */;
    /* TODO: note G_6 */;
    /* TODO: note F#6 */;
    /* TODO: note F_6 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicKanaletCastle(void) {
    MusicKanaletCastleCopy();
}

void MusicKanaletCastleCopy(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ae8 */;
    /* data: dw MusicKanaletCastle_Channel1 */;
    /* data: dw MusicKanaletCastle_Channel2 */;
    /* data: dw MusicKanaletCastle_Channel3 */;
    /* data: dw $0000 */;
}

void MusicKanaletCastle_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6daa */;
    /* data: dw ChannelDefinition_1e_5e9b */;
    /* data: dw ChannelDefinition_1e_6daf */;
    /* data: dw ChannelDefinition_1e_5ead */;
    /* data: dw ChannelDefinition_1e_6db4 */;
    /* data: dw ChannelDefinition_1e_5ebe */;
    /* data: dw ChannelDefinition_1e_6daf */;
    /* data: dw ChannelDefinition_1e_5ecf */;
    /* data: dw $ffff, MusicKanaletCastle_Channel2 */;
}

void MusicKanaletCastle_Channel1(void) {
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
}

void MusicLoop_1e_5e8b(void) {
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_5e9b */;
    /* data: dw $ffff, MusicLoop_1e_5e8b */;
}

void MusicKanaletCastle_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e54 */;
    /* data: dw ChannelDefinition_1e_5ee0 */;
    /* data: dw $ffff, MusicKanaletCastle_Channel3 */;
}

void ChannelDefinition_1e_5e9b(void) {
    /* TODO: notelen 2 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note D#2 */;
    /* TODO: note C_2 */;
    /* TODO: note A_1 */;
    /* TODO: note F#1 */;
    /* TODO: note D#1 */;
    /* TODO: note C#1 */;
    /* TODO: note C_1 */;
    /* TODO: note D#1 */;
    /* TODO: note F#1 */;
    /* TODO: note A_1 */;
    /* TODO: note C_2 */;
    /* TODO: note D#2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5ead(void) {
    /* TODO: note A#2 */;
    /* TODO: note F#2 */;
    /* TODO: note D#2 */;
    /* TODO: note C_2 */;
    /* TODO: note A#1 */;
    /* TODO: note F#1 */;
    /* TODO: note D#1 */;
    /* TODO: note C#1 */;
    /* TODO: note C_1 */;
    /* TODO: note D#1 */;
    /* TODO: note F#1 */;
    /* TODO: note A#1 */;
    /* TODO: note C_2 */;
    /* TODO: note D#2 */;
    /* TODO: note F#2 */;
    /* TODO: note A#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5ebe(void) {
    /* TODO: note B_2 */;
    /* TODO: note F#2 */;
    /* TODO: note D#2 */;
    /* TODO: note C_2 */;
    /* TODO: note B_1 */;
    /* TODO: note F#1 */;
    /* TODO: note D#1 */;
    /* TODO: note C#1 */;
    /* TODO: note C_1 */;
    /* TODO: note D#1 */;
    /* TODO: note F#1 */;
    /* TODO: note B_1 */;
    /* TODO: note C_2 */;
    /* TODO: note D#2 */;
    /* TODO: note F#2 */;
    /* TODO: note B_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5ecf(void) {
    /* TODO: note A#2 */;
    /* TODO: note F#2 */;
    /* TODO: note D#2 */;
    /* TODO: note C_2 */;
    /* TODO: note A#1 */;
    /* TODO: note F#1 */;
    /* TODO: note D#1 */;
    /* TODO: note C#1 */;
    /* TODO: note C_1 */;
    /* TODO: note D#1 */;
    /* TODO: note F#1 */;
    /* TODO: note A#1 */;
    /* TODO: note C_2 */;
    /* TODO: note D#2 */;
    /* TODO: note F#2 */;
    /* TODO: note A#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5ee0(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note C_1 */;
    /* TODO: note C_1 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicAfterBoss(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicAfterBoss_Channel1 */;
    /* data: dw MusicAfterBoss_Channel2 */;
    /* data: dw $0000 */;
    /* data: dw $0000 */;
}

void MusicAfterBoss_Channel1(void) {
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
}

void MusicLoop_1e_5efb(void) {
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_5f19 */;
    /* data: dw ChannelDefinition_1e_5f19 */;
    /* data: dw $ffff, MusicLoop_1e_5efb */;
}

void MusicAfterBoss_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5f19 */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_5f2b */;
}

void MusicLoop_1e_5f0d(void) {
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_5f19 */;
    /* data: dw ChannelDefinition_1e_6e22 */;
    /* data: dw ChannelDefinition_1e_5f2b */;
    /* data: dw $ffff, MusicLoop_1e_5f0d */;
}

void ChannelDefinition_1e_5f19(void) {
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: note A_3 */;
    /* TODO: note F#3 */;
    /* TODO: note D#3 */;
    /* TODO: note B_2 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note D#2 */;
    /* TODO: note B_1 */;
    /* TODO: note D#2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note B_2 */;
    /* TODO: note D#3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5f2b(void) {
    /* TODO: note C#4 */;
    /* TODO: note B_3 */;
    /* TODO: note A_3 */;
    /* TODO: note F#3 */;
    /* TODO: note D#3 */;
    /* TODO: note B_2 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note D#2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note C#3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: end_def  */;
}

void MusicBoss(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4a9d */;
    /* data: dw MusicBoss_Channel1 */;
    /* data: dw MusicBoss_Channel2 */;
    /* data: dw MusicBoss_Channel3 */;
    /* data: dw MusicBoss_Channel4 */;
}

void MusicBoss_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e4f */;
    /* data: dw ChannelDefinition_1e_6003 */;
    /* data: dw ChannelDefinition_1e_6dc8 */;
    /* data: dw ChannelDefinition_1e_5f9d */;
    /* data: dw ChannelDefinition_1e_6e27 */;
    /* data: dw ChannelDefinition_1e_5fbc */;
    /* data: dw ChannelDefinition_1e_6dc8 */;
    /* data: dw ChannelDefinition_1e_5f9d */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw $ffff, MusicBoss_Channel1 */;
}

void MusicBoss_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e4f */;
    /* data: dw ChannelDefinition_1e_5ff1 */;
    /* data: dw ChannelDefinition_1e_6dc8 */;
    /* data: dw ChannelDefinition_1e_5fc7 */;
    /* data: dw ChannelDefinition_1e_6e27 */;
    /* data: dw ChannelDefinition_1e_5fe6 */;
    /* data: dw ChannelDefinition_1e_6e8e */;
    /* data: dw ChannelDefinition_1e_6dc8 */;
    /* data: dw ChannelDefinition_1e_5fc7 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw $ffff, MusicBoss_Channel2 */;
}

void MusicBoss_Channel3(void) {
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_6e5e */;
    /* data: dw ChannelDefinition_1e_6015 */;
    /* data: dw ChannelDefinition_1e_6e59 */;
    /* data: dw ChannelDefinition_1e_6022 */;
    /* data: dw ChannelDefinition_1e_6e5e */;
    /* data: dw ChannelDefinition_1e_6015 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw $ffff, MusicBoss_Channel3 */;
}

void MusicBoss_Channel4(void) {
    /* data: dw ChannelDefinition_1e_602d */;
    /* data: dw ChannelDefinition_1e_6030 */;
    /* data: dw ChannelDefinition_1e_6030 */;
    /* data: dw ChannelDefinition_1e_6048 */;
    /* data: dw ChannelDefinition_1e_6030 */;
    /* data: dw ChannelDefinition_1e_6030 */;
    /* data: dw ChannelDefinition_1e_6053 */;
    /* data: dw $ffff, MusicBoss_Channel4 */;
}

void ChannelDefinition_1e_5f9d(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: note E_2 */;
    /* TODO: note E_2 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note D_2 */;
    /* TODO: note C#2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#2 */;
    /* TODO: note F#2 */;
    /* TODO: note F#2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note E_2 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5fbc(void) {
    /* TODO: notelen 7 */;
    /* TODO: note B_3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5fc7(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note A_2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#3 */;
    /* TODO: note C#3 */;
    /* TODO: note C#3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note B_2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5fe6(void) {
    /* TODO: notelen 7 */;
    /* TODO: note E_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_5ff1(void) {
    /* TODO: notelen 1 */;
    /* TODO: note F_5 */;
    /* TODO: note E_5 */;
    /* TODO: note D#5 */;
    /* TODO: note D_5 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note B_4 */;
    /* TODO: note A#4 */;
    /* TODO: note A_4 */;
    /* TODO: note G#4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6003(void) {
    /* TODO: notelen 1 */;
    /* TODO: note D_5 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note B_4 */;
    /* TODO: note A#4 */;
    /* TODO: note A_4 */;
    /* TODO: note G#4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6015(void) {
    /* TODO: begin_loop $10 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_1 */;
    /* TODO: note F#1 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $10 */;
    /* TODO: note C#1 */;
    /* TODO: note C#2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6022(void) {
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 7 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: note D#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_602d(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6030(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: begin_loop $04 */;
    /* TODO: note NOISE_FF */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6048(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note NOISE_FF */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6053(void) {
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: rest  */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: rest  */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: begin_loop $04 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicObtainInstrument(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aac */;
    /* data: dw MusicObtainInstrument_Channel1 */;
    /* data: dw MusicObtainInstrument_Channel2 */;
    /* data: dw MusicObtainInstrument_Channel3 */;
    /* data: dw $0000 */;
}

void MusicObtainInstrument_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_rest_2 */;
    /* data: dw ChannelDefinition_1e_rest_6 */;
    /* data: dw ChannelDefinition_1e_6087 */;
    /* data: dw $0000 */;
}

void MusicObtainInstrument_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_6087 */;
    /* data: dw $0000 */;
}

void MusicObtainInstrument_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e77 */;
    /* data: dw ChannelDefinition_1e_rest_6 */;
    /* data: dw ChannelDefinition_1e_6087 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_6087(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_6 */;
    /* TODO: note G#6 */;
    /* TODO: note E_6 */;
    /* TODO: note C#6 */;
    /* TODO: note B_5 */;
    /* TODO: note G#5 */;
    /* TODO: note E_5 */;
    /* TODO: note C#5 */;
    /* TODO: note B_4 */;
    /* TODO: note G#4 */;
    /* TODO: note E_4 */;
    /* TODO: note C#4 */;
    /* TODO: note B_3 */;
    /* TODO: note G#3 */;
    /* TODO: note E_3 */;
    /* TODO: note C#3 */;
    /* TODO: note A#6 */;
    /* TODO: note G_6 */;
    /* TODO: note E_6 */;
    /* TODO: note C_6 */;
    /* TODO: note A#5 */;
    /* TODO: note G_5 */;
    /* TODO: note E_5 */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note G_3 */;
    /* TODO: note E_3 */;
    /* TODO: note C_3 */;
    /* TODO: next_loop  */;
    /* TODO: note A#2 */;
    /* TODO: note G_2 */;
    /* TODO: note E_2 */;
    /* TODO: note C_2 */;
    /* TODO: note A#1 */;
    /* TODO: note G_1 */;
    /* TODO: note E_1 */;
    /* TODO: note C_1 */;
    /* TODO: notelen 6 */;
    /* TODO: note B_3 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C#5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#5 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 5 */;
    /* TODO: note B_5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicIntroWakeUp(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicIntroWakeUp_Channel1 */;
    /* data: dw MusicIntroWakeUp_Channel2 */;
    /* data: dw MusicIntroWakeUp_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicIntroWakeUp_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_6003 */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
}

void MusicLoop_1e_60d3(void) {
    /* data: dw ChannelDefinition_1e_60e3 */;
    /* data: dw $ffff, MusicLoop_1e_60d3 */;
}

void MusicIntroWakeUp_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_6e9d */;
    /* data: dw ChannelDefinition_1e_5ff1 */;
    /* data: dw $ffff, MusicLoop_1e_60d3 */;
}

void ChannelDefinition_1e_60e3(void) {
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: note D_5 */;
    /* TODO: note E_5 */;
    /* TODO: note F#2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_5 */;
    /* TODO: note A_4 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_4 */;
    /* TODO: note C#4 */;
    /* TODO: note A_3 */;
    /* TODO: note F#3 */;
    /* TODO: note E_3 */;
    /* TODO: note C#3 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note E_2 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: note E_2 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: note D_2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#5 */;
    /* TODO: note F#4 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: note A_3 */;
    /* TODO: note F#3 */;
    /* TODO: note D_3 */;
    /* TODO: note C#3 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note D_2 */;
    /* TODO: end_def  */;
}

void MusicOverworldSwordless(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aac */;
    /* data: dw MusicOverworldSwordless_Channel1 */;
    /* data: dw MusicOverworldSwordless_Channel2 */;
    /* data: dw MusicOverworldSwordless_Channel3 */;
    /* data: dw $0000 */;
}

void MusicOverworldSwordless_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6154 */;
    /* data: dw $ffff, MusicOverworldSwordless_Channel1 */;
}

void MusicOverworldSwordless_Channel2(void) {
    /* data: dw ChannelDefinition_1e_618f */;
    /* data: dw ChannelDefinition_1e_60e3 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_619d */;
    /* data: dw ChannelDefinition_1e_6196 */;
    /* data: dw ChannelDefinition_1e_61e2 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_6226 */;
    /* data: dw $ffff, MusicOverworldSwordless_Channel2 */;
}

void MusicOverworldSwordless_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e68 */;
    /* data: dw ChannelDefinition_1e_6267 */;
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_6267 */;
    /* data: dw $ffff, MusicOverworldSwordless_Channel3 */;
}

void ChannelDefinition_1e_6154(void) {
    /* TODO: set_envelope_duty $32, $83, 2, 0 */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: rest  */;
    /* TODO: note B_3 */;
    /* TODO: note B_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note A_3 */;
    /* TODO: rest  */;
    /* TODO: note A_3 */;
    /* TODO: note A_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note G_3 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: note F#3 */;
    /* TODO: note F#3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note A_2 */;
    /* TODO: rest  */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $07 */;
    /* TODO: note A#2 */;
    /* TODO: rest  */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: next_loop  */;
    /* TODO: note A_2 */;
    /* TODO: rest  */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_618f(void) {
    /* TODO: set_envelope_duty $67, $86, 2, 0 */;
    /* TODO: set_transpose -12 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6196(void) {
    /* TODO: set_envelope_duty $47, $86, 2, 0 */;
    /* TODO: set_transpose -12 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_619d(void) {
    /* TODO: notelen 2 */;
    /* TODO: note G_1 */;
    /* TODO: note B_1 */;
    /* TODO: note D_2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_1 */;
    /* TODO: note D_2 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_1 */;
    /* TODO: note D_2 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D_1 */;
    /* TODO: note F#1 */;
    /* TODO: note A_1 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_1 */;
    /* TODO: note A#1 */;
    /* TODO: note C_2 */;
    /* TODO: note D_2 */;
    /* TODO: note F_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#1 */;
    /* TODO: note F_1 */;
    /* TODO: note F_2 */;
    /* TODO: note A#2 */;
    /* TODO: note F_3 */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 7 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_5 */;
    /* TODO: note E_1 */;
    /* TODO: note A#1 */;
    /* TODO: note C_2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 7 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_6 */;
    /* TODO: note D#1 */;
    /* TODO: note A_1 */;
    /* TODO: note C_2 */;
    /* TODO: note F#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_61e2(void) {
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: rest  */;
    /* TODO: note F#6 */;
    /* TODO: note B_5 */;
    /* TODO: note B_6 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_6 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: note E_3 */;
    /* TODO: note C#3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note E_3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note E_2 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6226(void) {
    /* TODO: notelen 4 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_1 */;
    /* TODO: note B_1 */;
    /* TODO: note D_2 */;
    /* TODO: note F#2 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note F#5 */;
    /* TODO: note D_5 */;
    /* TODO: note A_5 */;
    /* TODO: note A_6 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note A#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#6 */;
    /* TODO: note F_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#1 */;
    /* TODO: note F_1 */;
    /* TODO: note F_2 */;
    /* TODO: note A#2 */;
    /* TODO: note F_3 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 7 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: note E_2 */;
    /* TODO: note F_2 */;
    /* TODO: note G_2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 7 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_5 */;
    /* TODO: note D#3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6267(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: note F#3 */;
    /* TODO: note F#3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note E_3 */;
    /* TODO: rest  */;
    /* TODO: note E_3 */;
    /* TODO: note E_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note G_2 */;
    /* TODO: rest  */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note F#2 */;
    /* TODO: rest  */;
    /* TODO: note F#2 */;
    /* TODO: note F#2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note F_2 */;
    /* TODO: rest  */;
    /* TODO: note F_2 */;
    /* TODO: note F_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note E_2 */;
    /* TODO: rest  */;
    /* TODO: note E_2 */;
    /* TODO: note E_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note D#2 */;
    /* TODO: rest  */;
    /* TODO: note D#2 */;
    /* TODO: note D#2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicDreamShrineSleep(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicDreamShrineSleep_Channel1 */;
    /* data: dw MusicDreamShrineSleep_Channel2 */;
    /* data: dw MusicDreamShrineSleep_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicDreamShrineSleep_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_62f2 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_62f2 */;
    /* data: dw ChannelDefinition_1e_6304 */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
    /* data: dw ChannelDefinition_1e_6ea8 */;
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw $0000 */;
}

void MusicDreamShrineSleep_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6df0 */;
    /* data: dw ChannelDefinition_1e_62f2 */;
    /* data: dw ChannelDefinition_1e_6de1 */;
    /* data: dw ChannelDefinition_1e_6e94 */;
    /* data: dw ChannelDefinition_1e_62f2 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_6304 */;
    /* data: dw ChannelDefinition_1e_6e22 */;
    /* data: dw ChannelDefinition_1e_6ea8 */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_5147 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_62f2(void) {
    /* TODO: notelen 1 */;
    /* TODO: note A#2 */;
    /* TODO: note C#3 */;
    /* TODO: note F_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: note G#3 */;
    /* TODO: note A_3 */;
    /* TODO: note G#3 */;
    /* TODO: note E_3 */;
    /* TODO: note C_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6304(void) {
    /* TODO: notelen 1 */;
    /* TODO: note D#3 */;
    /* TODO: note F#3 */;
    /* TODO: note A#3 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note F#4 */;
    /* TODO: note A#4 */;
    /* TODO: note D_5 */;
    /* TODO: end_def  */;
}

void MusicCatfishsMaw(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicCatfishsMaw_Channel1 */;
    /* data: dw MusicCatfishsMaw_Channel2 */;
    /* data: dw MusicCatfishsMaw_Channel3 */;
    /* data: dw $0000 */;
}

void MusicCatfishsMaw_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6da0 */;
    /* data: dw ChannelDefinition_1e_63c7 */;
    /* data: dw ChannelDefinition_1e_6e3b */;
    /* data: dw ChannelDefinition_1e_63e7 */;
    /* data: dw ChannelDefinition_1e_6da0 */;
    /* data: dw ChannelDefinition_1e_6418 */;
    /* data: dw $ffff, MusicCatfishsMaw_Channel1 */;
}

void MusicCatfishsMaw_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6daa */;
    /* data: dw ChannelDefinition_1e_6365 */;
    /* data: dw ChannelDefinition_1e_6daa */;
    /* data: dw ChannelDefinition_1e_6365 */;
    /* data: dw ChannelDefinition_1e_6daa */;
    /* data: dw ChannelDefinition_1e_638b */;
    /* data: dw ChannelDefinition_1e_6daa */;
    /* data: dw ChannelDefinition_1e_6365 */;
    /* data: dw ChannelDefinition_1e_6daa */;
    /* data: dw ChannelDefinition_1e_6365 */;
    /* data: dw ChannelDefinition_1e_6daa */;
    /* data: dw ChannelDefinition_1e_6365 */;
    /* data: dw ChannelDefinition_1e_6daa */;
    /* data: dw ChannelDefinition_1e_638b */;
    /* data: dw ChannelDefinition_1e_6daf */;
    /* data: dw ChannelDefinition_1e_63a9 */;
    /* data: dw ChannelDefinition_1e_6daa */;
    /* data: dw ChannelDefinition_1e_638b */;
    /* data: dw ChannelDefinition_1e_6daf */;
    /* data: dw ChannelDefinition_1e_63a9 */;
    /* data: dw $ffff, MusicCatfishsMaw_Channel2 */;
}

void MusicCatfishsMaw_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_6433 */;
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_rest_60 */;
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_645a */;
    /* data: dw $ffff, MusicCatfishsMaw_Channel3 */;
}

void ChannelDefinition_1e_6365(void) {
    /* TODO: notelen 2 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note C#1 */;
    /* TODO: set_envelope_duty $92, $00, 3, 0 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note C#1 */;
    /* TODO: set_envelope_duty $b2, $00, 3, 0 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note C#1 */;
    /* TODO: set_envelope_duty $92, $00, 3, 0 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note C#1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_638b(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note C#1 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $92, $00, 3, 0 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note C#1 */;
    /* TODO: set_envelope_duty $b2, $00, 3, 0 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note C#1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_63a9(void) {
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note C#1 */;
    /* TODO: set_envelope_duty $92, $00, 3, 0 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note C#1 */;
    /* TODO: set_envelope_duty $62, $00, 3, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note C#1 */;
    /* TODO: note F_1 */;
    /* TODO: rest  */;
    /* TODO: note C#1 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_63c7(void) {
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C#3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_63e7(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note D#5 */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: note E_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6418(void) {
    /* TODO: notelen 1 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A#2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note E_2 */;
    /* TODO: note E_2 */;
    /* TODO: note E_2 */;
    /* TODO: note E_2 */;
    /* TODO: note F_2 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6433(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note B_2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_60(void) {
    /* TODO: begin_loop $0c */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_645a(void) {
    /* TODO: notelen 1 */;
    /* TODO: note F_2 */;
    /* TODO: note F_2 */;
    /* TODO: note F_2 */;
    /* TODO: note F_2 */;
    /* TODO: note F#2 */;
    /* TODO: note F_2 */;
    /* TODO: note F_2 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C_2 */;
    /* TODO: note C_2 */;
    /* TODO: note C_2 */;
    /* TODO: note C_2 */;
    /* TODO: note C#3 */;
    /* TODO: note C_2 */;
    /* TODO: note C_2 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicSouthernShrine(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicSouthernShrine_Channel1 */;
    /* data: dw MusicSouthernShrine_Channel2 */;
    /* data: dw MusicSouthernShrine_Channel3_rest_1C0 */;
    /* data: dw MusicSouthernShrine_Channel4_rest_1C0 */;
}

void MusicSouthernShrine_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e7f */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_64c0 */;
    /* data: dw ChannelDefinition_1e_64c0 */;
}

void MusicLoop_1e_6488(void) {
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_64c0 */;
    /* data: dw ChannelDefinition_1e_64d7 */;
    /* data: dw ChannelDefinition_1e_64e0 */;
    /* data: dw ChannelDefinition_1e_64e9 */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_64f2 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_64fb */;
    /* data: dw ChannelDefinition_1e_6e1d */;
    /* data: dw ChannelDefinition_1e_6504 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_650d */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_6516 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_651f */;
    /* data: dw ChannelDefinition_1e_6e1d */;
    /* data: dw ChannelDefinition_1e_6528 */;
    /* data: dw ChannelDefinition_1e_6542 */;
    /* data: dw $ffff, MusicLoop_1e_6488 */;
}

void MusicSouthernShrine_Channel2(void) {
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
}

void MusicLoop_1e_64b8(void) {
    /* data: dw ChannelDefinition_1e_6e2c */;
    /* data: dw ChannelDefinition_1e_654b */;
    /* data: dw $ffff, MusicLoop_1e_64b8 */;
}

void ChannelDefinition_1e_64c0(void) {
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_64ca(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_64d7(void) {
    /* TODO: note G#2 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_64e0(void) {
    /* TODO: note G#2 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_64e9(void) {
    /* TODO: note G_2 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: note G_3 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_64f2(void) {
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: note G#3 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_64fb(void) {
    /* TODO: note G#2 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6504(void) {
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_650d(void) {
    /* TODO: note A#2 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: note G_3 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6516(void) {
    /* TODO: note G#2 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: note G#3 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_651f(void) {
    /* TODO: note A_2 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6528(void) {
    /* TODO: note G_2 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note G_3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6531(void) {
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note G_4 */;
    /* TODO: note F_4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note F_3 */;
    /* TODO: note D_3 */;
    /* TODO: note B_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6542(void) {
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_654b(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 14 */;
    /* TODO: note D#4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 5 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 14 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 14 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 5 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 5 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 14 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: note F_4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicFaceShrine(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ae8 */;
    /* data: dw MusicFaceShrine_Channel1 */;
    /* data: dw MusicFaceShrine_Channel2 */;
    /* data: dw MusicFaceShrine_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicFaceShrine_Channel1(void) {
    /* data: dw ChannelDefinition_1e_rest_2 */;
}

void MusicLoop_1e_6588(void) {
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_64ca */;
    /* data: dw ChannelDefinition_1e_64d7 */;
    /* data: dw ChannelDefinition_1e_64d7 */;
    /* data: dw ChannelDefinition_1e_64e0 */;
    /* data: dw ChannelDefinition_1e_64e0 */;
    /* data: dw ChannelDefinition_1e_64e9 */;
    /* data: dw ChannelDefinition_1e_64e9 */;
    /* data: dw ChannelDefinition_1e_64f2 */;
    /* data: dw ChannelDefinition_1e_64f2 */;
    /* data: dw ChannelDefinition_1e_64fb */;
    /* data: dw ChannelDefinition_1e_64fb */;
    /* data: dw ChannelDefinition_1e_6504 */;
    /* data: dw ChannelDefinition_1e_6504 */;
    /* data: dw ChannelDefinition_1e_650d */;
    /* data: dw ChannelDefinition_1e_650d */;
    /* data: dw ChannelDefinition_1e_6516 */;
    /* data: dw ChannelDefinition_1e_6516 */;
    /* data: dw ChannelDefinition_1e_651f */;
    /* data: dw ChannelDefinition_1e_651f */;
    /* data: dw ChannelDefinition_1e_6528 */;
    /* data: dw ChannelDefinition_1e_6528 */;
    /* data: dw ChannelDefinition_1e_6531 */;
    /* data: dw $ffff, MusicLoop_1e_6588 */;
}

void MusicFaceShrine_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_64ca */;
    /* data: dw ChannelDefinition_1e_64d7 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_64d7 */;
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_64e0 */;
    /* data: dw ChannelDefinition_1e_6dfa */;
    /* data: dw ChannelDefinition_1e_64e0 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_64e9 */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_64e9 */;
    /* data: dw ChannelDefinition_1e_64f2 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_64f2 */;
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_64fb */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_64fb */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_6504 */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_6504 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_650d */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_650d */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_6516 */;
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_6516 */;
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_651f */;
    /* data: dw ChannelDefinition_1e_6dfa */;
    /* data: dw ChannelDefinition_1e_651f */;
    /* data: dw ChannelDefinition_1e_6528 */;
    /* data: dw ChannelDefinition_1e_6de6 */;
    /* data: dw ChannelDefinition_1e_6528 */;
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw ChannelDefinition_1e_6531 */;
    /* data: dw $ffff, MusicFaceShrine_Channel2 */;
}

void Music2dUnderground(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ae8 */;
    /* data: dw Music2dUnderground_Channel1_rest_1C0 */;
    /* data: dw Music2dUnderground_Channel2 */;
    /* data: dw Music2dUnderground_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void Music2dUnderground_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6df5 */;
    /* data: dw ChannelDefinition_1e_6625 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw $ffff, Music2dUnderground_Channel2 */;
}

void ChannelDefinition_1e_6625(void) {
    /* TODO: notelen 2 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: note F_1 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C_1 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_1 */;
    /* TODO: note F#1 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_1 */;
    /* TODO: note B_1 */;
    /* TODO: end_def  */;
}

void MusicOwl(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicOwl_Channel1 */;
    /* data: dw MusicOwl_Channel2 */;
    /* data: dw MusicOwl_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicOwl_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_rest_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
}

void MusicLoop_1e_6647(void) {
    /* data: dw ChannelDefinition_1e_6653 */;
    /* data: dw $ffff, MusicLoop_1e_6647 */;
}

void MusicOwl_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6dcd */;
    /* data: dw $ffff, MusicLoop_1e_6647 */;
}

void ChannelDefinition_1e_6653(void) {
    /* TODO: notelen 3 */;
    /* TODO: note C_3 */;
    /* TODO: note A#3 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note A#2 */;
    /* TODO: note G#3 */;
    /* TODO: note F_4 */;
    /* TODO: note C_5 */;
    /* TODO: note F_5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicDreamShrineBed(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicDreamShrineBed_Channel1 */;
    /* data: dw MusicDreamShrineBed_Channel2 */;
    /* data: dw MusicDreamShrineBed_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicDreamShrineBed_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_6685 */;
    /* data: dw ChannelDefinition_1e_669b */;
}

void MusicLoop_1e_6675(void) {
    /* data: dw ChannelDefinition_1e_66ab */;
    /* data: dw $ffff, MusicLoop_1e_6675 */;
}

void MusicDreamShrineBed_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_6685 */;
}

void MusicLoop_1e_667f(void) {
    /* data: dw ChannelDefinition_1e_668f */;
    /* data: dw $ffff, MusicLoop_1e_667f */;
}

void ChannelDefinition_1e_6685(void) {
    /* TODO: notelen 1 */;
    /* TODO: note A#6 */;
    /* TODO: note A_6 */;
    /* TODO: note F_6 */;
    /* TODO: note C#6 */;
    /* TODO: note A#5 */;
    /* TODO: note A_5 */;
    /* TODO: note F_5 */;
    /* TODO: note C#5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_668f(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_5 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_669b(void) {
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 7 */;
    /* TODO: note F_4 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_66ab(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 7 */;
    /* TODO: note F_4 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicDreamShrineDream(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicDreamShrineDream_Channel1 */;
    /* data: dw MusicDreamShrineDream_Channel2 */;
    /* data: dw MusicDreamShrineDream_Channel3 */;
    /* data: dw $0000 */;
}

void MusicDreamShrineDream_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_66f6 */;
    /* data: dw ChannelDefinition_1e_6ea4 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_6745 */;
    /* data: dw ChannelDefinition_1e_6ea8 */;
    /* data: dw $ffff, MusicDreamShrineDream_Channel1 */;
}

void MusicDreamShrineDream_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6da0 */;
    /* data: dw ChannelDefinition_1e_66f6 */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_6ea4 */;
    /* data: dw ChannelDefinition_1e_6dbe */;
    /* data: dw ChannelDefinition_1e_6719 */;
    /* data: dw ChannelDefinition_1e_6ea8 */;
    /* data: dw $ffff, MusicDreamShrineDream_Channel2 */;
}

void MusicDreamShrineDream_Channel3(void) {
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_rest_4 */;
    /* data: dw ChannelDefinition_1e_6ea4 */;
    /* data: dw ChannelDefinition_1e_6e68 */;
    /* data: dw ChannelDefinition_1e_6700 */;
    /* data: dw ChannelDefinition_1e_6ea8 */;
    /* data: dw $ffff, MusicDreamShrineDream_Channel3 */;
}

void ChannelDefinition_1e_66f6(void) {
    /* TODO: notelen 1 */;
    /* TODO: note A#6 */;
    /* TODO: note A_6 */;
    /* TODO: note F_6 */;
    /* TODO: note C#6 */;
    /* TODO: note A#5 */;
    /* TODO: note A_5 */;
    /* TODO: note F_5 */;
    /* TODO: note C#5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6700(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: note G_6 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: note G_6 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6719(void) {
    /* TODO: set_envelope_duty $61, $86, 2, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_5 */;
    /* TODO: note E_6 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note D#6 */;
    /* TODO: note C#6 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: note C#5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note D#5 */;
    /* TODO: note C#5 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note D#5 */;
    /* TODO: note E_5 */;
    /* TODO: note F#5 */;
    /* TODO: note G_5 */;
    /* TODO: note G_6 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6745(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: note C#4 */;
    /* TODO: note A_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_4 */;
    /* TODO: note D#5 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A#3 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note C#4 */;
    /* TODO: note A#3 */;
    /* TODO: note G_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $03 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_4 */;
    /* TODO: note D#5 */;
    /* TODO: next_loop  */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: end_def  */;
}

void MusicCave(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicCave_Channel1 */;
    /* data: dw MusicCave_Channel2 */;
    /* data: dw MusicCave_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicCave_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_5dd6 */;
    /* data: dw $ffff, MusicCave_Channel1 */;
}

void MusicCave_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e13 */;
    /* data: dw ChannelDefinition_1e_6e9a */;
    /* data: dw $ffff, MusicLoop_1e_6792 */;
}

void MusicLoop_1e_6792(void) {
    /* data: dw ChannelDefinition_1e_5e20 */;
    /* data: dw ChannelDefinition_1e_5e4d */;
    /* data: dw ChannelDefinition_1e_5e5f */;
    /* data: dw $ffff, MusicLoop_1e_6792 */;
}

void MusicEaglesTower(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicEaglesTower_Channel1 */;
    /* data: dw MusicEaglesTower_Channel2 */;
    /* data: dw MusicEaglesTower_Channel3 */;
    /* data: dw $0000 */;
}

void MusicEaglesTower_Channel1(void) {
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
}

void MusicLoop_1e_67a9(void) {
    /* data: dw ChannelDefinition_1e_6d78 */;
    /* data: dw ChannelDefinition_1e_68db */;
    /* data: dw ChannelDefinition_1e_68db */;
    /* data: dw ChannelDefinition_1e_68db */;
    /* data: dw ChannelDefinition_1e_68db */;
    /* data: dw ChannelDefinition_1e_68db */;
    /* data: dw ChannelDefinition_1e_68db */;
    /* data: dw ChannelDefinition_1e_6d78 */;
    /* data: dw ChannelDefinition_1e_68db */;
    /* data: dw ChannelDefinition_1e_68db */;
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_6897 */;
    /* data: dw ChannelDefinition_1e_6d78 */;
    /* data: dw ChannelDefinition_1e_68db */;
    /* data: dw ChannelDefinition_1e_68c4 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw $ffff, MusicLoop_1e_67a9 */;
}

void MusicEaglesTower_Channel3(void) {
    /* data: dw ChannelDefinition_1e_rest_78 */;
    /* data: dw ChannelDefinition_1e_6e68 */;
    /* data: dw ChannelDefinition_1e_6856 */;
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_6856 */;
    /* data: dw ChannelDefinition_1e_6e68 */;
    /* data: dw ChannelDefinition_1e_6825 */;
    /* data: dw ChannelDefinition_1e_6e77 */;
    /* data: dw ChannelDefinition_1e_6825 */;
    /* data: dw ChannelDefinition_1e_6e68 */;
    /* data: dw ChannelDefinition_1e_6839 */;
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_6866 */;
    /* data: dw ChannelDefinition_1e_6e68 */;
    /* data: dw ChannelDefinition_1e_6873 */;
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_687f */;
    /* data: dw ChannelDefinition_1e_6e77 */;
    /* data: dw ChannelDefinition_1e_688b */;
    /* data: dw $ffff, MusicEaglesTower_Channel3 */;
}

void MusicEaglesTower_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_68fc */;
    /* data: dw ChannelDefinition_1e_68fc */;
    /* data: dw ChannelDefinition_1e_68fc */;
    /* data: dw ChannelDefinition_1e_68fc */;
    /* data: dw ChannelDefinition_1e_68fc */;
    /* data: dw ChannelDefinition_1e_68fc */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_68fc */;
    /* data: dw ChannelDefinition_1e_68fc */;
    /* data: dw ChannelDefinition_1e_6897 */;
    /* data: dw ChannelDefinition_1e_68fc */;
    /* data: dw ChannelDefinition_1e_6e0e */;
    /* data: dw ChannelDefinition_1e_68c4 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_6935 */;
    /* data: dw ChannelDefinition_1e_6d78 */;
    /* data: dw ChannelDefinition_1e_6965 */;
    /* data: dw $ffff, MusicEaglesTower_Channel2 */;
}

void ChannelDefinition_1e_6825(void) {
    /* TODO: notelen 3 */;
    /* TODO: note D#4 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: note B_4 */;
    /* TODO: note A#4 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6839(void) {
    /* TODO: notelen 3 */;
    /* TODO: note C#4 */;
    /* TODO: note A_4 */;
    /* TODO: note G#4 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: note G#4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note B_3 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: note G#4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6856(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note C#4 */;
    /* TODO: note A_4 */;
    /* TODO: note G#4 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: note G#4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6866(void) {
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6873(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_687f(void) {
    /* TODO: notelen 2 */;
    /* TODO: note C#3 */;
    /* TODO: note D#3 */;
    /* TODO: note E_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_688b(void) {
    /* TODO: notelen 2 */;
    /* TODO: note C#3 */;
    /* TODO: note D#3 */;
    /* TODO: note E_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6897(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_68c4(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: note F#3 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: note B_3 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note G_3 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: note G#3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_68db(void) {
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: set_envelope_duty $20, $00, 2, 0 */;
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $03 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $10, $00, 2, 0 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_68fc(void) {
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: set_envelope_duty $37, $00, 2, 0 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: set_envelope_duty $53, $00, 2, 0 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: set_envelope_duty $64, $00, 2, 0 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: set_envelope_duty $53, $00, 2, 0 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: set_envelope_duty $37, $00, 2, 0 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: set_envelope_duty $27, $00, 2, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6935(void) {
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: note D_5 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: note D_5 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note C#3 */;
    /* TODO: note D#3 */;
    /* TODO: note E_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note C#5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_5 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6965(void) {
    /* TODO: note C#3 */;
    /* TODO: note D#3 */;
    /* TODO: note E_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note C#5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_5 */;
    /* TODO: note A#5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_78(void) {
    /* TODO: begin_loop $18 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicOpenAnglersTunnel(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicOpenAnglersTunnel_Channel1 */;
    /* data: dw MusicOpenAnglersTunnel_Channel2 */;
    /* data: dw MusicOpenAnglersTunnel_Channel3 */;
    /* data: dw $0000 */;
}

void MusicOpenAnglersTunnel_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6dff */;
    /* data: dw ChannelDefinition_1e_69a2 */;
    /* data: dw ChannelDefinition_1e_6e4a */;
    /* data: dw ChannelDefinition_1e_69b4 */;
    /* data: dw $0000 */;
}

void MusicOpenAnglersTunnel_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6dff */;
    /* data: dw ChannelDefinition_1e_69b7 */;
    /* data: dw ChannelDefinition_1e_6e4a */;
    /* data: dw ChannelDefinition_1e_69c9 */;
    /* data: dw $0000 */;
}

void MusicOpenAnglersTunnel_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e54 */;
    /* data: dw ChannelDefinition_1e_69cc */;
    /* data: dw ChannelDefinition_1e_6e59 */;
    /* data: dw ChannelDefinition_1e_69da */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_69a2(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note C#2 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 8 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note E_2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 7 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_69b4(void) {
    /* TODO: notelen 14 */;
    /* TODO: note C_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_69b7(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note A#2 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 8 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note C#3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 7 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_69c9(void) {
    /* TODO: notelen 14 */;
    /* TODO: note G#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_69cc(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 1 */;
    /* TODO: note F#1 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 5 */;
    /* TODO: note F#1 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#1 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_69da(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: note A_1 */;
    /* TODO: end_def  */;
}

void MusicMarinOnBeach(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ae8 */;
    /* data: dw MusicMarinOnBeach_Channel1 */;
    /* data: dw MusicMarinOnBeach_Channel2 */;
    /* data: dw MusicMarinOnBeach_Channel3 */;
    /* data: dw $0000 */;
}

void MusicMarinOnBeach_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_6a08 */;
    /* data: dw $ffff, MusicLoop_1e_69f8 */;
}

void MusicMarinOnBeach_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6d87 */;
    /* data: dw ChannelDefinition_1e_6a08 */;
}

void MusicLoop_1e_69f8(void) {
    /* data: dw ChannelDefinition_1e_6a12 */;
    /* data: dw $ffff, MusicLoop_1e_6d30 */;
}

void MusicMarinOnBeach_Channel3(void) {
    /* data: dw ChannelDefinition_1e_rest_4 */;
    /* data: dw ChannelDefinition_1e_6e77 */;
    /* data: dw ChannelDefinition_1e_6a1c */;
    /* data: dw $ffff, MusicLoop_1e_6d30 */;
}

void ChannelDefinition_1e_6a08(void) {
    /* TODO: notelen 1 */;
    /* TODO: note D#6 */;
    /* TODO: note B_5 */;
    /* TODO: note G#5 */;
    /* TODO: note E_5 */;
    /* TODO: note D#5 */;
    /* TODO: note B_4 */;
    /* TODO: note G#4 */;
    /* TODO: note D#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6a12(void) {
    /* TODO: notelen 1 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note E_5 */;
    /* TODO: note F_5 */;
    /* TODO: note A_5 */;
    /* TODO: note C_6 */;
    /* TODO: note E_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6a1c(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note F_4 */;
    /* TODO: end_def  */;
}

void MusicMarinBeachTalk(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicMarinBeachTalk_Channel1 */;
    /* data: dw MusicMarinBeachTalk_Channel2 */;
    /* data: dw MusicMarinBeachTalk_Channel3 */;
    /* data: dw $0000 */;
}

void MusicMarinBeachTalk_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6da0 */;
    /* data: dw ChannelDefinition_1e_6a9b */;
    /* data: dw ChannelDefinition_1e_6aa5 */;
}

void MusicLoop_1e_6a32(void) {
    /* data: dw ChannelDefinition_1e_6eb0 */;
    /* data: dw ChannelDefinition_1e_6d96 */;
    /* data: dw ChannelDefinition_1e_6aa8 */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_6a08 */;
    /* data: dw ChannelDefinition_1e_rest_2 */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
    /* data: dw ChannelDefinition_1e_6a96 */;
    /* data: dw ChannelDefinition_1e_6b78 */;
    /* data: dw ChannelDefinition_1e_6da0 */;
    /* data: dw ChannelDefinition_1e_6b28 */;
    /* data: dw ChannelDefinition_1e_6e09 */;
    /* data: dw ChannelDefinition_1e_6b40 */;
    /* data: dw ChannelDefinition_1e_rest_6 */;
    /* data: dw $ffff, MusicLoop_1e_6a32 */;
}

void MusicMarinBeachTalk_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_6a9b */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
}

void MusicLoop_1e_6a5c(void) {
    /* data: dw ChannelDefinition_1e_6eb0 */;
    /* data: dw ChannelDefinition_1e_rest_44 */;
    /* data: dw ChannelDefinition_1e_6d87 */;
    /* data: dw ChannelDefinition_1e_6a08 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_6d7d */;
    /* data: dw ChannelDefinition_1e_6b28 */;
    /* data: dw ChannelDefinition_1e_rest_6 */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw $ffff, MusicLoop_1e_6a5c */;
}

void MusicMarinBeachTalk_Channel3(void) {
    /* data: dw ChannelDefinition_1e_rest_4 */;
    /* data: dw ChannelDefinition_1e_rest_2 */;
}

void MusicLoop_1e_6a80(void) {
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_6eb0 */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw ChannelDefinition_1e_rest_2D */;
    /* data: dw ChannelDefinition_1e_6b46 */;
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_rest_0 */;
    /* data: dw ChannelDefinition_1e_rest_4 */;
    /* data: dw ChannelDefinition_1e_rest_2 */;
    /* data: dw $ffff, MusicLoop_1e_6a80 */;
}

void ChannelDefinition_1e_6a96(void) {
    /* TODO: set_envelope_duty $c2, $83, 3, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6a9b(void) {
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6aa5(void) {
    /* TODO: note D#5 */;
    /* TODO: note F#5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6aa8(void) {
    /* TODO: set_envelope_duty $b1, $83, 2, 0 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: note C#5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_5 */;
    /* TODO: set_envelope_duty $81, $83, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: note G#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $b1, $83, 2, 0 */;
    /* TODO: notelen 6 */;
    /* TODO: note C#5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_5 */;
    /* TODO: set_envelope_duty $81, $83, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: set_envelope_duty $b1, $83, 2, 0 */;
    /* TODO: note D#5 */;
    /* TODO: note C#5 */;
    /* TODO: note G#4 */;
    /* TODO: note B_4 */;
    /* TODO: set_envelope_duty $81, $83, 2, 0 */;
    /* TODO: note E_3 */;
    /* TODO: note G#3 */;
    /* TODO: note C#5 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C#3 */;
    /* TODO: note F_3 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: set_envelope_duty $b1, $83, 2, 0 */;
    /* TODO: note C#5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_5 */;
    /* TODO: set_envelope_duty $81, $83, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: note G#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: set_envelope_duty $b1, $83, 2, 0 */;
    /* TODO: note B_4 */;
    /* TODO: note E_5 */;
    /* TODO: note A_5 */;
    /* TODO: set_envelope_duty $81, $83, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note F#4 */;
    /* TODO: set_envelope_duty $b1, $83, 2, 0 */;
    /* TODO: note G#5 */;
    /* TODO: note F#5 */;
    /* TODO: note G#5 */;
    /* TODO: set_envelope_duty $81, $83, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_3 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note G#4 */;
    /* TODO: note B_4 */;
    /* TODO: note D#5 */;
    /* TODO: note B_5 */;
    /* TODO: rest  */;
    /* TODO: note B_6 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_44(void) {
    /* TODO: begin_loop $11 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6b28(void) {
    /* TODO: notelen 1 */;
    /* TODO: note C#2 */;
    /* TODO: note E_2 */;
    /* TODO: note G#2 */;
    /* TODO: note B_2 */;
    /* TODO: note D#3 */;
    /* TODO: note E_3 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: note B_3 */;
    /* TODO: note G#3 */;
    /* TODO: note E_3 */;
    /* TODO: note D#3 */;
    /* TODO: note B_2 */;
    /* TODO: note G#2 */;
    /* TODO: note E_2 */;
    /* TODO: note B_1 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note C#3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6b40(void) {
    /* TODO: note C#4 */;
    /* TODO: note F#4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 9 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6b46(void) {
    /* TODO: notelen 9 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note D#6 */;
    /* TODO: note C#6 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 7 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note F#6 */;
    /* TODO: note E_6 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 7 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: note F_5 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note C#6 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note C_6 */;
    /* TODO: note A_6 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6b78(void) {
    /* TODO: set_envelope_duty $c2, $83, 3, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#6 */;
    /* TODO: note C#6 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#5 */;
    /* TODO: set_envelope_duty $72, $00, 2, 0 */;
    /* TODO: note F#2 */;
    /* TODO: note C#3 */;
    /* TODO: set_envelope_duty $c2, $83, 3, 0 */;
    /* TODO: note A_5 */;
    /* TODO: set_envelope_duty $72, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#3 */;
    /* TODO: note G#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: note A_4 */;
    /* TODO: note E_5 */;
    /* TODO: note C#3 */;
    /* TODO: note G#3 */;
    /* TODO: note D#4 */;
    /* TODO: note B_4 */;
    /* TODO: set_envelope_duty $c2, $83, 3, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#6 */;
    /* TODO: note E_6 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#5 */;
    /* TODO: set_envelope_duty $72, $00, 2, 0 */;
    /* TODO: note F#3 */;
    /* TODO: note C#4 */;
    /* TODO: set_envelope_duty $c2, $83, 3, 0 */;
    /* TODO: note A_5 */;
    /* TODO: set_envelope_duty $72, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C#5 */;
    /* TODO: set_envelope_duty $c2, $83, 3, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_5 */;
    /* TODO: note B_5 */;
    /* TODO: set_envelope_duty $72, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note B_4 */;
    /* TODO: set_envelope_duty $c2, $83, 3, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: note F_5 */;
    /* TODO: note B_5 */;
    /* TODO: note G#5 */;
    /* TODO: set_envelope_duty $72, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note E_4 */;
    /* TODO: note G#4 */;
    /* TODO: note B_4 */;
    /* TODO: note E_5 */;
    /* TODO: note G#5 */;
    /* TODO: note B_5 */;
    /* TODO: note D_6 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_6 */;
    /* TODO: set_envelope_duty $c2, $83, 3, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_5 */;
    /* TODO: note C#6 */;
    /* TODO: set_envelope_duty $72, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_2 */;
    /* TODO: note C#3 */;
    /* TODO: note E_3 */;
    /* TODO: note G#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: note G#4 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: note G#4 */;
    /* TODO: note A_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C#5 */;
    /* TODO: set_envelope_duty $c2, $83, 3, 0 */;
    /* TODO: notelen 7 */;
    /* TODO: note C_6 */;
    /* TODO: note A_6 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#6 */;
}

void MusicMarinUnused(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicMarinUnused_Channel1 */;
    /* data: dw MusicMarinUnused_Channel2 */;
    /* data: dw MusicMarinUnused_Channel3 */;
    /* data: dw $0000 */;
}

void MusicMarinUnused_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_6c40 */;
    /* data: dw ChannelDefinition_1e_rest_1 */;
    /* data: dw $ffff, MusicLoop_1e_6c22 */;
}

void MusicMarinUnused_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6db9 */;
}

void MusicLoop_1e_6c20(void) {
    /* data: dw ChannelDefinition_1e_6c2e */;
}

void MusicLoop_1e_6c22(void) {
    /* data: dw ChannelDefinition_1e_6c38 */;
    /* data: dw $0000 */;
}

void MusicMarinUnused_Channel3(void) {
    /* data: dw ChannelDefinition_1e_6e6d */;
    /* data: dw ChannelDefinition_1e_rest_A_1 */;
    /* data: dw $ffff, MusicLoop_1e_6c20 */;
}

void ChannelDefinition_1e_6c2e(void) {
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: note G#4 */;
    /* TODO: note B_4 */;
    /* TODO: note D#5 */;
    /* TODO: note E_5 */;
    /* TODO: note G#5 */;
    /* TODO: note B_5 */;
    /* TODO: note D#6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6c38(void) {
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note G#6 */;
    /* TODO: note B_6 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6c40(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_3 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note G#3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicEagleBossLoop(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicEagleBossLoop_Channel1 */;
    /* data: dw MusicEagleBossLoop_Channel2 */;
    /* data: dw MusicEagleBossLoop_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicEagleBossLoop_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6de1 */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw ChannelDefinition_1e_6df0 */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw ChannelDefinition_1e_6de1 */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw $ffff, MusicEagleBossLoop_Channel1 */;
}

void MusicEagleBossLoop_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_6ce9 */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_6e9d */;
    /* data: dw ChannelDefinition_1e_6ce9 */;
    /* data: dw ChannelDefinition_1e_6e94 */;
    /* data: dw ChannelDefinition_1e_6ce9 */;
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_6e97 */;
    /* data: dw ChannelDefinition_1e_6ce9 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw $ffff, MusicEagleBossLoop_Channel2 */;
}

void MusicEagleBossTransition(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicEagleBossTransition_Channel1 */;
    /* data: dw MusicEagleBossTransition_Channel2 */;
    /* data: dw MusicEagleBossTransition_Channel3 */;
    /* data: dw MusicEagleBossTransition_Channel4 */;
}

void MusicEagleBossTransition_Channel1(void) {
    /* data: dw ChannelDefinition_1e_6de1 */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw ChannelDefinition_1e_6df0 */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw ChannelDefinition_1e_6dff */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw ChannelDefinition_1e_6d03 */;
    /* data: dw ChannelDefinition_1e_6ea0 */;
    /* data: dw $ffff, MusicBoss_Channel1 */;
}

void MusicEagleBossTransition_Channel2(void) {
    /* data: dw ChannelDefinition_1e_6d9b */;
    /* data: dw ChannelDefinition_1e_6ce9 */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_6e9d */;
    /* data: dw ChannelDefinition_1e_6ce9 */;
    /* data: dw ChannelDefinition_1e_6deb */;
    /* data: dw ChannelDefinition_1e_6e94 */;
    /* data: dw ChannelDefinition_1e_6ce9 */;
    /* data: dw ChannelDefinition_1e_6e97 */;
    /* data: dw ChannelDefinition_1e_6ce9 */;
    /* data: dw ChannelDefinition_1e_6d8c */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_6cf6 */;
    /* data: dw ChannelDefinition_1e_6db9 */;
    /* data: dw ChannelDefinition_1e_6e9d */;
    /* data: dw ChannelDefinition_1e_6cf6 */;
    /* data: dw ChannelDefinition_1e_6deb */;
    /* data: dw ChannelDefinition_1e_6e94 */;
    /* data: dw ChannelDefinition_1e_6cf6 */;
    /* data: dw ChannelDefinition_1e_6e7c */;
    /* data: dw ChannelDefinition_1e_6ea0 */;
    /* data: dw $ffff, MusicBoss_Channel2 */;
}

void MusicEagleBossTransition_Channel3(void) {
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_A_2 */;
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw ChannelDefinition_1e_6ea0 */;
    /* data: dw $ffff, MusicBoss_Channel3 */;
}

void MusicEagleBossTransition_Channel4(void) {
    /* data: dw ChannelDefinition_1e_rest_23 */;
    /* data: dw ChannelDefinition_1e_6ea0 */;
    /* data: dw $ffff, MusicBoss_Channel4 */;
}

void ChannelDefinition_1e_6ce9(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_1 */;
    /* TODO: note F_1 */;
    /* TODO: note G#1 */;
    /* TODO: note C_2 */;
    /* TODO: note D_2 */;
    /* TODO: note F_2 */;
    /* TODO: note G#2 */;
    /* TODO: note C_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6cf6(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_2 */;
    /* TODO: note F_2 */;
    /* TODO: note G#2 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note G#3 */;
    /* TODO: note C_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6d03(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_1 */;
    /* TODO: note D_1 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_23(void) {
    /* TODO: begin_loop $07 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_A_1(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_5(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_4(void) {
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
    /* data: db $a5, $01, $a8, $01, $00 */;
}

void ChannelDefinition_1e_rest_A_2(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_2(void) {
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_6(void) {
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_1(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_0(void) {
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicLoop_1e_6d30(void) {
    /* data: dw ChannelDefinition_1e_rest_5 */;
    /* data: dw $ffff, MusicLoop_1e_6d30 */;
    /* data: db $99, $00 */;
}

void waveform_1e_6d38(void) {
    /* data: db $ff, $ff, $ff, $ff, $00, $00, $00, $00, $ff, $ff, $ff, $ff, $00, $00, $00, $00 */;
}

void waveform_1e_6d48(void) {
    /* data: db $ff, $ff, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void waveform_1e_6d58(void) {
    /* data: db $99, $99, $99, $99, $00, $00, $00, $00, $99, $99, $99, $99, $00, $00, $00, $00 */;
}

void waveform_1e_6d68(void) {
    /* data: db $44, $44, $44, $44, $00, $00, $00, $00, $44, $44, $44, $44, $00, $00, $00, $00 */;
}

void ChannelDefinition_1e_6d78(void) {
    /* TODO: set_envelope_duty $10, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6d7d(void) {
    /* TODO: set_envelope_duty $20, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6d82(void) {
    /* TODO: set_envelope_duty $24, $83, 3, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6d87(void) {
    /* TODO: set_envelope_duty $46, $86, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6d8c(void) {
    /* TODO: set_envelope_duty $81, $83, 3, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6d91(void) {
    /* TODO: set_envelope_duty $a2, $83, 3, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6d96(void) {
    /* TODO: set_envelope_duty $91, $83, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6d9b(void) {
    /* TODO: set_envelope_duty $52, $83, 3, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6da0(void) {
    /* TODO: set_envelope_duty $62, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6da5(void) {
    /* TODO: set_envelope_duty $82, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6daa(void) {
    /* TODO: set_envelope_duty $62, $00, 3, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6daf(void) {
    /* TODO: set_envelope_duty $92, $00, 3, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6db4(void) {
    /* TODO: set_envelope_duty $b2, $00, 3, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6db9(void) {
    /* TODO: set_envelope_duty $c1, $83, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6dbe(void) {
    /* TODO: set_envelope_duty $45, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6dc3(void) {
    /* TODO: set_envelope_duty $53, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6dc8(void) {
    /* TODO: set_envelope_duty $93, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6dcd(void) {
    /* TODO: set_envelope_duty $64, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6dd2(void) {
    /* TODO: set_envelope_duty $84, $86, 2, 0 */;
    /* TODO: end_def  */;
    /* data: db $9d, $b4, $86, $80, $00, $9d, $e4, $86, $80, $00 */;
}

void ChannelDefinition_1e_6de1(void) {
    /* TODO: set_envelope_duty $75, $86, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6de6(void) {
    /* TODO: set_envelope_duty $a5, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6deb(void) {
    /* TODO: set_envelope_duty $f5, $86, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6df0(void) {
    /* TODO: set_envelope_duty $a5, $86, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6df5(void) {
    /* TODO: set_envelope_duty $a5, $46, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6dfa(void) {
    /* TODO: set_envelope_duty $85, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6dff(void) {
    /* TODO: set_envelope_duty $e7, $86, 2, 0 */;
    /* TODO: end_def  */;
    /* data: db $9d, $17, $00, $80, $00 */;
}

void ChannelDefinition_1e_6e09(void) {
    /* TODO: set_envelope_duty $27, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e0e(void) {
    /* TODO: set_envelope_duty $37, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e13(void) {
    /* TODO: set_envelope_duty $47, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e18(void) {
    /* TODO: set_envelope_duty $86, $00, 3, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e1d(void) {
    /* TODO: set_envelope_duty $66, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e22(void) {
    /* TODO: set_envelope_duty $87, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e27(void) {
    /* TODO: set_envelope_duty $48, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e2c(void) {
    /* TODO: set_envelope_duty $38, $00, 2, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e31(void) {
    /* TODO: set_envelope_duty $48, $86, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e36(void) {
    /* TODO: set_envelope_duty $48, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e3b(void) {
    /* TODO: set_envelope_duty $58, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e40(void) {
    /* TODO: set_envelope_duty $a8, $86, 3, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e45(void) {
    /* TODO: set_envelope_duty $88, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e4a(void) {
    /* TODO: set_envelope_duty $1f, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e4f(void) {
    /* TODO: set_envelope_duty $5f, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e54(void) {
    /* TODO: set_waveform waveform_1e_6d38, $20 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e59(void) {
    /* TODO: set_waveform waveform_1e_6d48, $20 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e5e(void) {
    /* TODO: set_waveform waveform_1e_6d48, $40 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e63(void) {
    /* TODO: set_waveform waveform_1e_6d58, $20 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e68(void) {
    /* TODO: set_waveform waveform_1e_6d58, $40 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e6d(void) {
    /* TODO: set_waveform waveform_1e_6d58, $60 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e72(void) {
    /* TODO: set_waveform waveform_1e_6d68, $40 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e77(void) {
    /* TODO: set_waveform waveform_1e_6d68, $60 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e7c(void) {
    /* TODO: set_transpose 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e7f(void) {
    /* TODO: set_transpose 12 */;
    /* TODO: end_def  */;
    /* data: db $9f, $16, $00 */;
}

void ChannelDefinition_1e_6e85(void) {
    /* TODO: set_transpose 7 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e88(void) {
    /* TODO: set_transpose 6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e8b(void) {
    /* TODO: set_transpose 5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e8e(void) {
    /* TODO: set_transpose 4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e91(void) {
    /* TODO: set_transpose 3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e94(void) {
    /* TODO: set_transpose 2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e97(void) {
    /* TODO: set_transpose 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e9a(void) {
    /* TODO: set_transpose -24 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6e9d(void) {
    /* TODO: set_transpose -1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6ea0(void) {
    /* TODO: set_speed MusicSpeedData_1e_4a9d */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6ea4(void) {
    /* TODO: set_speed MusicSpeedData_1e_4aac */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6ea8(void) {
    /* TODO: set_speed MusicSpeedData_1e_4aca */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6eac(void) {
    /* TODO: set_speed MusicSpeedData_1e_4ad9 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6eb0(void) {
    /* TODO: set_speed MusicSpeedData_1e_4ae8 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_6eb4(void) {
    /* TODO: set_speed MusicSpeedData_1e_4af7 */;
    /* TODO: end_def  */;
}

void MusicEggBalladDefault(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicEggBalladDefault_Channel1 */;
    /* data: dw MusicEggBalladDefault_Channel2_rest_1C0 */;
    /* data: dw MusicEggBalladDefault_Channel3 */;
    /* data: dw $0000 */;
}

void MusicEggBalladDefault_Channel1(void) {
    /* data: dw ChannelDefinition_1e_701d */;
    /* data: dw ChannelDefinition_1e_7097 */;
    /* data: dw ChannelDefinition_1e_70c0 */;
    /* data: dw $0000 */;
}

void MusicEggBalladDefault_Channel3(void) {
    /* data: dw ChannelDefinition_1e_7026 */;
    /* data: dw ChannelDefinition_1e_7097 */;
    /* data: dw ChannelDefinition_1e_7091 */;
    /* data: dw ChannelDefinition_1e_70c0 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_701d(void) {
    /* TODO: set_envelope_duty $20, $00, 2, 1 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7026(void) {
    /* TODO: set_waveform waveform_1e_730f, $01 */;
    /* TODO: unknownop_94  */;
    /* TODO: end_def  */;
}

void MusicEggBalladBell(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicEggBalladBell_Channel1 */;
    /* data: dw MusicEggBalladBell_Channel2 */;
    /* data: dw MusicEggBalladBell_Channel3 */;
    /* data: dw $0000 */;
}

void MusicEggBalladBell_Channel1(void) {
    /* data: dw ChannelDefinition_1e_704d */;
    /* data: dw ChannelDefinition_1e_7097 */;
    /* data: dw ChannelDefinition_1e_70c0 */;
    /* data: dw $0000 */;
}

void MusicEggBalladBell_Channel2(void) {
    MusicEggBalladHarp_Channel1();
}

void MusicEggBalladHarp_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7058 */;
    /* data: dw $0000 */;
}

void MusicEggBalladBell_Channel3(void) {
    MusicEggBalladHarp_Channel3();
}

void MusicEggBalladHarp_Channel3(void) {
    MusicEggBalladMarimba_Channel3();
}

void MusicEggBalladMarimba_Channel3(void) {
    MusicEggBalladTriangle_Channel3();
}

void MusicEggBalladTriangle_Channel3(void) {
    MusicEggBalladOrgan_Channel3();
}

void MusicEggBalladOrgan_Channel3(void) {
    MusicEggBalladAll_Channel3();
}

void MusicEggBalladAll_Channel3(void) {
    /* data: dw ChannelDefinition_1e_7089 */;
    /* data: dw ChannelDefinition_1e_7097 */;
    /* data: dw ChannelDefinition_1e_7091 */;
    /* data: dw ChannelDefinition_1e_70c0 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_704d(void) {
    /* TODO: set_envelope_duty $20, $00, 2, 1 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7058(void) {
    /* TODO: set_envelope_duty $47, $00, 2, 0 */;
    /* TODO: enable_unknown1  */;
    /* TODO: begin_loop $0a */;
    /* TODO: notelen 3 */;
    /* TODO: note A_5 */;
    /* TODO: note D_5 */;
    /* TODO: note E_5 */;
    /* TODO: note B_5 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note F#5 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: note F#5 */;
    /* TODO: note G_5 */;
    /* TODO: note B_4 */;
    /* TODO: note E_5 */;
    /* TODO: note G_5 */;
    /* TODO: next_loop  */;
    /* TODO: note A_5 */;
    /* TODO: note C_5 */;
    /* TODO: note E_5 */;
    /* TODO: note A_5 */;
    /* TODO: note C_6 */;
    /* TODO: note D#5 */;
    /* TODO: note F#5 */;
    /* TODO: note A_5 */;
    /* TODO: note G_5 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_5 */;
    /* TODO: note E_5 */;
    /* TODO: note A#4 */;
    /* TODO: note C#5 */;
    /* TODO: note A#5 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note A_5 */;
    /* TODO: note D_5 */;
    /* TODO: note E_5 */;
    /* TODO: note B_5 */;
    /* TODO: next_loop  */;
    /* TODO: disable_unknown1  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7089(void) {
    /* TODO: set_waveform waveform_1e_730f, $01 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: unknownop_94  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7091(void) {
    /* TODO: set_waveform waveform_1e_72e1, $01 */;
    /* TODO: unknownop_94  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7097(void) {
    /* TODO: enable_unknown1  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#3 */;
    /* TODO: note B_2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 5 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 5 */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_70c0(void) {
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note C#5 */;
    /* TODO: note B_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 7 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 5 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_5 */;
    /* TODO: note D_5 */;
    /* TODO: note C#5 */;
    /* TODO: note B_4 */;
    /* TODO: note F#4 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note D_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: note A#4 */;
    /* TODO: note G_5 */;
    /* TODO: note F#5 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: disable_unknown1  */;
    /* TODO: end_def  */;
}

void MusicEggBalladHarp(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicEggBalladHarp_Channel1 */;
    /* data: dw MusicEggBalladHarp_Channel2 */;
    /* data: dw MusicEggBalladHarp_Channel3 */;
    /* data: dw $0000 */;
}

void MusicEggBalladHarp_Channel2(void) {
    MusicEggBalladMarimba_Channel2();
}

void MusicEggBalladMarimba_Channel2(void) {
    MusicEggBalladTriangle_Channel2();
}

void MusicEggBalladTriangle_Channel2(void) {
    MusicEggBalladAll_Channel1();
}

void MusicEggBalladAll_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7107 */;
    /* data: dw ChannelDefinition_1e_7114 */;
    /* data: dw ChannelDefinition_1e_7123 */;
    /* data: dw ChannelDefinition_1e_7123 */;
    /* data: dw ChannelDefinition_1e_7133 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_7107(void) {
    /* TODO: set_envelope_duty $71, $82, 2, 0 */;
    /* TODO: enable_unknown1  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note C#5 */;
    /* TODO: note A_4 */;
    /* TODO: next_loop  */;
}

void ChannelDefinition_1e_7114(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note B_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note C#5 */;
    /* TODO: note B_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7123(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note B_4 */;
    /* TODO: note F#4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note B_3 */;
    /* TODO: note E_4 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7133(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D#4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: note F#4 */;
    /* TODO: note D_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: note E_4 */;
    /* TODO: note C#4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note C#5 */;
    /* TODO: note A_4 */;
    /* TODO: next_loop  */;
    /* TODO: disable_unknown1  */;
    /* TODO: end_def  */;
}

void MusicEggBalladMarimba(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicEggBalladMarimba_Channel1 */;
    /* data: dw MusicEggBalladMarimba_Channel2 */;
    /* data: dw MusicEggBalladMarimba_Channel3 */;
    /* data: dw $0000 */;
}

void MusicEggBalladMarimba_Channel1(void) {
    MusicEggBalladTriangle_Channel1();
}

void MusicEggBalladTriangle_Channel1(void) {
    /* data: dw ChannelDefinition_1e_716d */;
    /* data: dw ChannelDefinition_1e_7176 */;
    /* data: dw ChannelDefinition_1e_7176 */;
    /* data: dw ChannelDefinition_1e_718a */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_716d(void) {
    /* TODO: set_envelope_duty $87, $00, 2, 0 */;
    /* TODO: enable_unknown1  */;
    /* TODO: notelen 5 */;
    /* TODO: note A_6 */;
    /* TODO: note A_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7176(void) {
    /* TODO: set_envelope_duty $87, $00, 2, 0 */;
    /* TODO: notelen 5 */;
    /* TODO: note A_6 */;
    /* TODO: note A_6 */;
    /* TODO: set_envelope_duty $37, $00, 2, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_5 */;
    /* TODO: note D_5 */;
    /* TODO: note E_5 */;
    /* TODO: note B_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_718a(void) {
    /* TODO: set_envelope_duty $76, $00, 2, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 4 */;
    /* TODO: note B_6 */;
    /* TODO: note F#6 */;
    /* TODO: note B_6 */;
    /* TODO: note G_6 */;
    /* TODO: next_loop  */;
    /* TODO: note A_6 */;
    /* TODO: note G_6 */;
    /* TODO: note F#6 */;
    /* TODO: note A_6 */;
    /* TODO: note B_6 */;
    /* TODO: note G_6 */;
    /* TODO: note A#6 */;
    /* TODO: note G_6 */;
    /* TODO: set_envelope_duty $87, $00, 2, 0 */;
    /* TODO: notelen 5 */;
    /* TODO: note A_6 */;
    /* TODO: note A_6 */;
    /* TODO: end_def  */;
}

void MusicEggBalladTriangle(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicEggBalladTriangle_Channel1 */;
    /* data: dw MusicEggBalladTriangle_Channel2 */;
    /* data: dw MusicEggBalladTriangle_Channel3 */;
    /* data: dw MusicEggBalladTriangle_Channel4 */;
}

void MusicEggBalladTriangle_Channel4(void) {
    MusicEggBalladOrgan_Channel4();
}

void MusicEggBalladOrgan_Channel4(void) {
    /* data: dw ChannelDefinition_1e_71b5 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_71b5(void) {
    /* TODO: begin_loop $0a */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_7 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_8 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_7 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_8 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_8 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_8 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicEggBalladOrgan(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicEggBalladOrgan_Channel1 */;
    /* data: dw MusicEggBalladOrgan_Channel2 */;
    /* data: dw MusicEggBalladOrgan_Channel3 */;
    /* data: dw MusicEggBalladOrgan_Channel4 */;
}

void MusicEggBalladOrgan_Channel1(void) {
    /* data: dw ChannelDefinition_1e_716d */;
    /* data: dw ChannelDefinition_1e_7176 */;
    /* data: dw ChannelDefinition_1e_7176 */;
    /* data: dw ChannelDefinition_1e_7237 */;
    /* data: dw ChannelDefinition_1e_7123 */;
    /* data: dw ChannelDefinition_1e_7123 */;
    /* data: dw ChannelDefinition_1e_7133 */;
    /* data: dw $0000 */;
}

void MusicEggBalladOrgan_Channel2(void) {
    /* data: dw ChannelDefinition_1e_71f7 */;
    /* data: dw ChannelDefinition_1e_7204 */;
    /* data: dw ChannelDefinition_1e_7213 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_71f7(void) {
    /* TODO: set_envelope_duty $19, $45, 1, 0 */;
    /* TODO: enable_unknown1  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
}

void ChannelDefinition_1e_7204(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: note E_2 */;
    /* TODO: note B_2 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note D_2 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7213(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_1 */;
    /* TODO: note F#2 */;
    /* TODO: note D_2 */;
    /* TODO: note F#2 */;
    /* TODO: note B_1 */;
    /* TODO: note G_2 */;
    /* TODO: note E_2 */;
    /* TODO: note G_2 */;
    /* TODO: next_loop  */;
    /* TODO: note A_2 */;
    /* TODO: note E_2 */;
    /* TODO: note C_2 */;
    /* TODO: note E_2 */;
    /* TODO: note A_2 */;
    /* TODO: note D#2 */;
    /* TODO: note C_2 */;
    /* TODO: note D#2 */;
    /* TODO: note G_2 */;
    /* TODO: note D_2 */;
    /* TODO: note B_1 */;
    /* TODO: note D_2 */;
    /* TODO: note G_2 */;
    /* TODO: note C#2 */;
    /* TODO: note A#1 */;
    /* TODO: note C#2 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note D_2 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7237(void) {
    /* TODO: set_envelope_duty $61, $82, 2, 0 */;
    /* TODO: end_def  */;
}

void MusicEggBalladAll(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicEggBalladAll_Channel1 */;
    /* data: dw MusicEggBalladAll_Channel2 */;
    /* data: dw MusicEggBalladAll_Channel3 */;
    /* data: dw MusicEggBalladAll_Channel4 */;
}

void MusicEggBalladAll_Channel2(void) {
    /* data: dw ChannelDefinition_1e_716d */;
    /* data: dw ChannelDefinition_1e_7176 */;
    /* data: dw ChannelDefinition_1e_7176 */;
    /* data: dw ChannelDefinition_1e_727d */;
    /* data: dw ChannelDefinition_1e_7213 */;
    /* data: dw $0000 */;
}

void MusicEggBalladAll_Channel4(void) {
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7295 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7295 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw ChannelDefinition_1e_7282 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_727d(void) {
    /* TODO: set_envelope_duty $19, $45, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7282(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7295(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: note NOISE_7 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_7 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_8 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_7 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_8 */;
    /* TODO: end_def  */;
}

void MusicInstrumentFullMoonCello(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ae8 */;
    /* data: dw MusicInstrumentFullMoonCello_Channel1_rest_1C0 */;
    /* data: dw MusicInstrumentFullMoonCello_Channel2 */;
    /* data: dw MusicInstrumentFullMoonCello_Channel3 */;
    /* data: dw $0000 */;
}

void MusicInstrumentFullMoonCello_Channel2(void) {
    /* data: dw ChannelDefinition_1e_72ba */;
    /* data: dw ChannelDefinition_1e_72c8 */;
    /* data: dw $0000 */;
}

void MusicInstrumentFullMoonCello_Channel3(void) {
    /* data: dw ChannelDefinition_1e_72c3 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_72ba(void) {
    /* TODO: set_envelope_duty $20, $00, 1, 1 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_72c3(void) {
    /* TODO: set_waveform waveform_1e_72e1, $01 */;
    /* TODO: unknownop_94  */;
}

void ChannelDefinition_1e_72c8(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 6 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 14 */;
    /* TODO: note F#5 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void waveform_1e_72e1(void) {
    /* data: db $01, $35, $66, $53, $10, $02, $46, $8a, $01, $35, $66, $53, $10, $02, $46, $8a */;
}

void MusicInstrumentConchHorn(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4af7 */;
    /* data: dw MusicInstrumentConchHorn_Channel1_rest_1C0 */;
    /* data: dw MusicInstrumentConchHorn_Channel2 */;
    /* data: dw MusicInstrumentConchHorn_Channel3 */;
    /* data: dw $0000 */;
}

void MusicInstrumentConchHorn_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7306 */;
    /* data: dw ChannelDefinition_1e_7324 */;
    /* data: dw $0000 */;
}

void MusicInstrumentConchHorn_Channel3(void) {
    /* data: dw ChannelDefinition_1e_731f */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_7306(void) {
    /* TODO: set_envelope_duty $20, $00, 1, 1 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void waveform_1e_730f(void) {
    /* data: db $06, $9b, $cd, $de, $ee, $ff, $ff, $fe, $06, $9b, $cd, $de, $ee, $ff, $ff, $fe */;
}

void ChannelDefinition_1e_731f(void) {
    /* TODO: set_waveform waveform_1e_730f, $01 */;
    /* TODO: unknownop_94  */;
}

void ChannelDefinition_1e_7324(void) {
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 6 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: note F#3 */;
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicInstrumentSeaLilysBell(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicInstrumentSeaLilysBell_Channel1_rest_1C0 */;
    /* data: dw MusicInstrumentSeaLilysBell_Channel2 */;
    /* data: dw MusicInstrumentSeaLilysBell_Channel3 */;
    /* data: dw $0000 */;
}

void MusicInstrumentSeaLilysBell_Channel2(void) {
    /* data: dw ChannelDefinition_1e_735a */;
    /* data: dw ChannelDefinition_1e_735a */;
    /* data: dw ChannelDefinition_1e_736a */;
    /* data: dw $ffff, MusicLoop_1e_78bb */;
}

void MusicInstrumentSeaLilysBell_Channel3(void) {
    /* data: dw ChannelDefinition_1e_7380 */;
    /* data: dw $ffff, MusicLoop_1e_78bb */;
}

void ChannelDefinition_1e_735a(void) {
    /* TODO: set_envelope_duty $81, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_5 */;
    /* TODO: note D_5 */;
    /* TODO: note E_5 */;
    /* TODO: note B_5 */;
    /* TODO: set_envelope_duty $a6, $00, 2, 0 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_736a(void) {
    /* TODO: set_envelope_duty $82, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 6 */;
    /* TODO: note E_5 */;
    /* TODO: set_envelope_duty $85, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_5 */;
    /* TODO: set_envelope_duty $a6, $00, 2, 0 */;
    /* TODO: notelen 14 */;
    /* TODO: note A_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7380(void) {
    /* TODO: set_waveform waveform_1e_750c, $23 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_5 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 4 */;
    /* TODO: note E_5 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_5 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 14 */;
    /* TODO: note E_5 */;
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicInstrumentSurfHarp(void) {
    /* data: db $18 */;
    /* data: dw MusicSpeedData_1e_4a9d */;
    /* data: dw MusicInstrumentSurfHarp_Channel1_rest_1C0 */;
    /* data: dw MusicInstrumentSurfHarp_Channel2 */;
    /* data: dw MusicInstrumentSurfHarp_Channel3 */;
    /* data: dw $0000 */;
}

void MusicInstrumentSurfHarp_Channel2(void) {
    /* data: dw ChannelDefinition_1e_73b3 */;
    /* data: dw ChannelDefinition_1e_73d1 */;
    /* data: dw $0000 */;
}

void MusicInstrumentSurfHarp_Channel3(void) {
    /* data: dw ChannelDefinition_1e_73cc */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_73b3(void) {
    /* TODO: set_envelope_duty $10, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void waveform_1e_73bc(void) {
    /* data: db $46, $79, $98, $64, $43, $10, $01, $34, $46, $79, $98, $64, $43, $10, $01, $34 */;
}

void ChannelDefinition_1e_73cc(void) {
    /* TODO: set_waveform waveform_1e_73bc, $20 */;
    /* TODO: enable_software_envelope  */;
}

void ChannelDefinition_1e_73d1(void) {
    /* TODO: notelen 3 */;
    /* TODO: note C_5 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 11 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note A#4 */;
    /* TODO: note F#4 */;
    /* TODO: note D#4 */;
    /* TODO: note B_3 */;
    /* TODO: note A#3 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: note F#4 */;
    /* TODO: next_loop  */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: note C_4 */;
    /* TODO: note G#3 */;
    /* TODO: note G_3 */;
    /* TODO: note G#3 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 11 */;
    /* TODO: note F_4 */;
    /* TODO: note C#4 */;
    /* TODO: note A#3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 6 */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note D#4 */;
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicInstrumentWindMarimba(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicInstrumentWindMarimba_Channel1 */;
    /* data: dw MusicInstrumentWindMarimba_Channel2 */;
    /* data: dw MusicInstrumentWindMarimba_Channel3 */;
    /* data: dw $0000 */;
}

void MusicInstrumentWindMarimba_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7433 */;
    /* data: dw $ffff, MusicLoop_1e_78bb */;
}

void MusicInstrumentWindMarimba_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7458 */;
    /* data: dw $ffff, MusicLoop_1e_78bb */;
}

void MusicInstrumentWindMarimba_Channel3(void) {
    /* data: dw ChannelDefinition_1e_748c */;
    /* data: dw $ffff, MusicLoop_1e_78bb */;
}

void ChannelDefinition_1e_7433(void) {
    /* TODO: set_envelope_duty $81, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note F#5 */;
    /* TODO: set_envelope_duty $c1, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $a2, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note C#5 */;
    /* TODO: note E_5 */;
    /* TODO: note A_5 */;
    /* TODO: note E_5 */;
    /* TODO: note B_5 */;
    /* TODO: set_envelope_duty $a7, $00, 2, 0 */;
    /* TODO: notelen 14 */;
    /* TODO: note A_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7458(void) {
    /* TODO: set_envelope_duty $61, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#5 */;
    /* TODO: set_envelope_duty $a1, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#5 */;
    /* TODO: set_envelope_duty $e5, $00, 2, 0 */;
    /* TODO: notelen 8 */;
    /* TODO: note F#5 */;
    /* TODO: set_envelope_duty $a2, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: note F#5 */;
    /* TODO: note G#5 */;
    /* TODO: note F#5 */;
    /* TODO: note E_6 */;
    /* TODO: set_envelope_duty $a7, $00, 2, 0 */;
    /* TODO: notelen 14 */;
    /* TODO: note F#6 */;
    /* TODO: end_def  */;
}

void waveform_1e_747c(void) {
    /* data: db $66, $00, $66, $00, $66, $00, $66, $00, $66, $00, $66, $00, $66, $00, $66, $00 */;
}

void ChannelDefinition_1e_748c(void) {
    /* TODO: set_waveform waveform_1e_747c, $23 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 1 */;
    /* TODO: note C#5 */;
    /* TODO: note C#5 */;
    /* TODO: note C#5 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 8 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_5 */;
    /* TODO: note C#5 */;
    /* TODO: note E_5 */;
    /* TODO: note D#5 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: note F#5 */;
    /* TODO: note B_5 */;
    /* TODO: note E_6 */;
    /* TODO: notelen 14 */;
    /* TODO: note C#6 */;
    /* TODO: end_def  */;
}

void MusicInstrumentCoralTriangle(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicInstrumentCoralTriangle_Channel1_rest_1C0 */;
    /* data: dw MusicInstrumentCoralTriangle_Channel2 */;
    /* data: dw MusicInstrumentCoralTriangle_Channel3 */;
    /* data: dw $0000 */;
}

void MusicInstrumentCoralTriangle_Channel2(void) {
    /* data: dw ChannelDefinition_1e_74d3 */;
    /* data: dw ChannelDefinition_1e_74ec */;
    /* data: dw ChannelDefinition_1e_74d3 */;
    /* data: dw ChannelDefinition_1e_74fe */;
    /* data: dw ChannelDefinition_1e_74d3 */;
    /* data: dw ChannelDefinition_1e_74fe */;
    /* data: dw ChannelDefinition_1e_74d3 */;
    /* data: dw ChannelDefinition_1e_74ec */;
    /* data: dw ChannelDefinition_1e_74d3 */;
    /* data: dw ChannelDefinition_1e_74fe */;
    /* data: dw ChannelDefinition_1e_74d3 */;
    /* data: dw ChannelDefinition_1e_7505 */;
    /* data: dw ChannelDefinition_1e_rest_1C0_2 */;
    /* data: dw $0000 */;
}

void MusicInstrumentCoralTriangle_Channel3(void) {
    /* data: dw ChannelDefinition_1e_751c */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_74d3(void) {
    /* TODO: set_envelope_duty $21, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_5 */;
    /* TODO: set_envelope_duty $41, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_5 */;
    /* TODO: set_envelope_duty $71, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_5 */;
    /* TODO: set_envelope_duty $a1, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_74ec(void) {
    /* TODO: set_envelope_duty $a1, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_5 */;
    /* TODO: set_envelope_duty $c3, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_5 */;
    /* TODO: set_envelope_duty $82, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_5 */;
}

void ChannelDefinition_1e_74fe(void) {
    /* TODO: set_envelope_duty $d2, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7505(void) {
    /* TODO: set_envelope_duty $e3, $00, 2, 0 */;
    /* TODO: notelen 14 */;
    /* TODO: note B_5 */;
    /* TODO: end_def  */;
}

void waveform_1e_750c(void) {
    /* data: db $00, $0c, $00, $0c, $00, $0c, $00, $0c, $06, $06, $06, $06, $06, $06, $06, $06 */;
}

void ChannelDefinition_1e_751c(void) {
    /* TODO: set_waveform waveform_1e_750c, $20 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#6 */;
    /* TODO: note F#6 */;
    /* TODO: note F#6 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#6 */;
    /* TODO: note F#6 */;
    /* TODO: note F#6 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#6 */;
    /* TODO: note F#6 */;
    /* TODO: note F#6 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#6 */;
    /* TODO: next_loop  */;
    /* TODO: disable_software_envelope  */;
}

void ChannelDefinition_1e_rest_1C0_2(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicInstrumentOrganOfEveningCalm(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ae8 */;
    /* data: dw MusicInstrumentOrganOfEveningCalm_Channel1_rest_1C0 */;
    /* data: dw MusicInstrumentOrganOfEveningCalm_Channel2 */;
    /* data: dw MusicInstrumentOrganOfEveningCalm_Channel3 */;
    /* data: dw $0000 */;
}

void MusicInstrumentOrganOfEveningCalm_Channel2(void) {
    /* data: dw ChannelDefinition_1e_755f */;
    /* data: dw ChannelDefinition_1e_757d */;
    /* data: dw $ffff, MusicLoop_1e_78bb */;
}

void MusicInstrumentOrganOfEveningCalm_Channel3(void) {
    /* data: dw ChannelDefinition_1e_7578 */;
    /* data: dw $ffff, MusicLoop_1e_78bb */;
}

void ChannelDefinition_1e_755f(void) {
    /* TODO: set_envelope_duty $20, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void waveform_1e_7568(void) {
    /* data: db $88, $88, $88, $84, $00, $00, $00, $00, $88, $88, $88, $84, $00, $00, $00, $00 */;
}

void ChannelDefinition_1e_7578(void) {
    /* TODO: set_waveform waveform_1e_7568, $00 */;
    /* TODO: unknownop_94  */;
}

void ChannelDefinition_1e_757d(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: note C#4 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: note F#4 */;
    /* TODO: end_def  */;
}

void MusicInstrumentThunderDrum(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicInstrumentThunderDrum_Channel1_rest_1C0 */;
    /* data: dw MusicInstrumentThunderDrum_Channel2 */;
    /* data: dw MusicInstrumentThunderDrum_Channel3_rest_1C0 */;
    /* data: dw MusicInstrumentThunderDrum_Channel4 */;
}

void MusicInstrumentThunderDrum_Channel2(void) {
    /* data: dw ChannelDefinition_1e_75b5 */;
    /* data: dw ChannelDefinition_1e_75b5 */;
    /* data: dw ChannelDefinition_1e_75cb */;
    /* data: dw ChannelDefinition_1e_75b5 */;
    /* data: dw ChannelDefinition_1e_75b5 */;
    /* data: dw ChannelDefinition_1e_75cb */;
    /* data: dw $ffff, MusicLoop_1e_78bb */;
}

void MusicInstrumentThunderDrum_Channel4(void) {
    /* data: dw ChannelDefinition_1e_75e2 */;
    /* data: dw ChannelDefinition_1e_75e2 */;
    /* data: dw ChannelDefinition_1e_rest_1C0_3 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_75b5(void) {
    /* TODO: set_envelope_duty $a1, $00, 2, 0 */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: set_envelope_duty $61, $00, 2, 0 */;
    /* TODO: notelen 9 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note A_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_75cb(void) {
    /* TODO: notelen 1 */;
    /* TODO: note A_2 */;
    /* TODO: set_envelope_duty $a1, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: set_envelope_duty $61, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: set_envelope_duty $a1, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_75e2(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_rest_1C0_3(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicMarinSing(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicMarinSing_Channel1 */;
    /* data: dw MusicMarinSing_Channel2 */;
    /* data: dw MusicMarinSing_Channel3 */;
    /* data: dw $0000 */;
}

void MusicMarinSing_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7627 */;
}

void MusicLoop_1e_760d(void) {
    /* data: dw ChannelDefinition_1e_7634 */;
    /* data: dw ChannelDefinition_1e_764a */;
    /* data: dw ChannelDefinition_1e_765d */;
    /* data: dw $ffff, MusicLoop_1e_760d */;
}

void MusicMarinSing_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7630 */;
    /* data: dw ChannelDefinition_1e_764a */;
    /* data: dw ChannelDefinition_1e_765d */;
    /* data: dw $ffff, MusicMarinSing_Channel2 */;
}

void MusicMarinSing_Channel3(void) {
    /* data: dw ChannelDefinition_1e_768a */;
    /* data: dw $ffff, MusicLoop_1e_760d */;
}

void ChannelDefinition_1e_7627(void) {
    /* TODO: set_envelope_duty $20, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7630(void) {
    /* TODO: set_envelope_duty $60, $21, 2, 0 */;
}

void ChannelDefinition_1e_7634(void) {
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#5 */;
    /* TODO: note B_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 5 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_764a(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#5 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 5 */;
    /* TODO: note F#5 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_765d(void) {
    /* TODO: notelen 3 */;
    /* TODO: note C#6 */;
    /* TODO: note B_5 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 7 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 5 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_6 */;
    /* TODO: note D_6 */;
    /* TODO: note C#6 */;
    /* TODO: note B_5 */;
    /* TODO: note F#5 */;
    /* TODO: note E_5 */;
    /* TODO: note F#5 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note C_5 */;
    /* TODO: note E_5 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 8 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note D_5 */;
    /* TODO: notelen 5 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note A#5 */;
    /* TODO: note G_6 */;
    /* TODO: note F#6 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_768a(void) {
    /* TODO: set_waveform waveform_1e_6d68, $60 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicLearnBallad(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicLearnBallad_Channel1 */;
    /* data: dw MusicLearnBallad_Channel2 */;
    /* data: dw MusicLearnBallad_Channel3 */;
    /* data: dw $0000 */;
}

void MusicLearnBallad_Channel1(void) {
    /* data: dw ChannelDefinition_1e_76be */;
}

void MusicLoop_1e_76a0(void) {
    /* data: dw ChannelDefinition_1e_7114 */;
    /* data: dw ChannelDefinition_1e_7114 */;
    /* data: dw ChannelDefinition_1e_7123 */;
    /* data: dw ChannelDefinition_1e_7123 */;
    /* data: dw ChannelDefinition_1e_7133 */;
    /* data: dw $ffff, MusicLoop_1e_76a0 */;
}

void MusicLearnBallad_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7630 */;
    /* data: dw ChannelDefinition_1e_76c7 */;
    /* data: dw ChannelDefinition_1e_765d */;
    /* data: dw $ffff, MusicLearnBallad_Channel2 */;
}

void MusicLearnBallad_Channel3(void) {
    /* data: dw ChannelDefinition_1e_76eb */;
    /* data: dw $ffff, MusicLearnBallad_Channel3 */;
}

void ChannelDefinition_1e_76be(void) {
    /* TODO: set_envelope_duty $19, $42, 1, 0 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_76c7(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 14 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void waveform_1e_76db(void) {
    /* data: db $01, $37, $9a, $bb, $bb, $bb, $a6, $21, $01, $37, $9a, $bb, $bb, $bb, $a6, $21 */;
}

void ChannelDefinition_1e_76eb(void) {
    /* TODO: set_waveform waveform_1e_76db, $40 */;
    /* TODO: begin_loop $08 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note E_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 6 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note G_5 */;
    /* TODO: rest  */;
    /* TODO: note F#5 */;
    /* TODO: rest  */;
    /* TODO: note E_5 */;
    /* TODO: rest  */;
    /* TODO: note D_5 */;
    /* TODO: rest  */;
    /* TODO: note A_4 */;
    /* TODO: rest  */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: note A_4 */;
    /* TODO: rest  */;
    /* TODO: note D_5 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: note B_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: rest  */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: note C_5 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicManbosMambo(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4b06 */;
    /* data: dw MusicManbosMambo_Channel1 */;
    /* data: dw MusicManbosMambo_Channel2 */;
    /* data: dw MusicManbosMambo_Channel3 */;
    /* data: dw MusicManbosMambo_Channel4 */;
}

void MusicManbosMambo_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7758 */;
    /* data: dw $0000 */;
}

void MusicManbosMambo_Channel2(void) {
    /* data: dw ChannelDefinition_1e_77a3 */;
    /* data: dw $0000 */;
}

void MusicManbosMambo_Channel3(void) {
    /* data: dw ChannelDefinition_1e_7827 */;
    /* data: dw $0000 */;
}

void MusicManbosMambo_Channel4(void) {
    /* data: dw ChannelDefinition_1e_788c */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1e_7758(void) {
    /* TODO: set_envelope_duty $62, $00, 0, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_2 */;
    /* TODO: note E_2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 6 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#2 */;
    /* TODO: note G_2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 6 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_2 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: enable_unknown2  */;
    /* TODO: note F_3 */;
    /* TODO: disable_unknown2  */;
    /* TODO: set_envelope_duty $41, $00, 2, 0 */;
    /* TODO: begin_loop $06 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_6 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_5 */;
    /* TODO: note D_6 */;
    /* TODO: note B_5 */;
    /* TODO: note D_6 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_5 */;
    /* TODO: note D_6 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $61, $00, 1, 0 */;
    /* TODO: notelen 6 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_5 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_5 */;
    /* TODO: note G_5 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_5 */;
    /* TODO: note A_5 */;
    /* TODO: note G_6 */;
    /* TODO: note G_6 */;
    /* TODO: note F_6 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_6 */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 3 */;
    /* TODO: note A_2 */;
    /* TODO: disable_unknown2  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_77a3(void) {
    /* TODO: set_envelope_duty $81, $00, 1, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#3 */;
    /* TODO: note G_3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 6 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: disable_unknown2  */;
    /* TODO: notelen 6 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: enable_unknown2  */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: disable_unknown2  */;
    /* TODO: notelen 6 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: enable_unknown2  */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: disable_unknown2  */;
    /* TODO: notelen 6 */;
    /* TODO: note G_1 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_1 */;
    /* TODO: note F_1 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_1 */;
    /* TODO: note G_1 */;
    /* TODO: note G_1 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_1 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_1 */;
    /* TODO: note A_1 */;
    /* TODO: note G_1 */;
    /* TODO: note G_1 */;
    /* TODO: note F_1 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_1 */;
    /* TODO: set_envelope_duty $a1, $00, 2, 0 */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: disable_unknown2  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7827(void) {
    /* TODO: set_waveform waveform_1e_730f, $20 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 6 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_5 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 6 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_2 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 6 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 6 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_3 */;
    /* TODO: note A_3 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_788c(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note NOISE_FF */;
    /* TODO: begin_loop $06 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: next_loop  */;
    /* TODO: notelen 6 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 7 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_FF */;
    /* TODO: end_def  */;
}

void MusicLoop_1e_78bb(void) {
    /* data: dw ChannelDefinition_1e_rest_1C0_4 */;
    /* data: dw $ffff, MusicLoop_1e_78bb */;
}

void ChannelDefinition_1e_rest_1C0_4(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicLoop_1e_78c7(void) {
    /* data: dw ChannelDefinition_1e_rest_1C0_5 */;
    /* data: dw $ffff, MusicLoop_1e_78c7 */;
}

void ChannelDefinition_1e_rest_1C0_5(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicGhostHouse(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicGhostHouse_Channel1 */;
    /* data: dw MusicGhostHouse_Channel2 */;
    /* data: dw MusicGhostHouse_Channel3 */;
    /* data: dw $0000 */;
}

void MusicGhostHouse_Channel1(void) {
    /* data: dw ChannelDefinition_1e_78f2 */;
    /* data: dw $ffff, MusicGhostHouse_Channel1 */;
}

void MusicGhostHouse_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7960 */;
    /* data: dw $ffff, MusicGhostHouse_Channel2 */;
}

void MusicGhostHouse_Channel3(void) {
    /* data: dw ChannelDefinition_1e_79b7 */;
}

void MusicLoop_1e_78ec(void) {
    /* data: dw ChannelDefinition_1e_79be */;
    /* data: dw $ffff, MusicLoop_1e_78ec */;
}

void ChannelDefinition_1e_78f2(void) {
    /* TODO: set_envelope_duty $42, $82, 2, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note E_4 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note C#4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note E_4 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G#3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D_4 */;
    /* TODO: note A#3 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: note C#4 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note C_4 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: note C_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7960(void) {
    /* TODO: set_envelope_duty $50, $44, 2, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note G_5 */;
    /* TODO: note A_5 */;
    /* TODO: note G_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_5 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note E_5 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_5 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void waveform_1e_79a7(void) {
    /* data: db $11, $11, $11, $10, $00, $00, $00, $00, $11, $11, $11, $10, $00, $00, $00, $00 */;
}

void ChannelDefinition_1e_79b7(void) {
    /* TODO: set_waveform waveform_1e_79a7, $20 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_79be(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_5 */;
    /* TODO: note A_5 */;
    /* TODO: note G_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_5 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note E_5 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note F#4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_5 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note B_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicRoosterRevival(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicRoosterRevival_Channel1 */;
    /* data: dw MusicRoosterRevival_Channel2 */;
    /* data: dw MusicRoosterRevival_Channel3 */;
    /* data: dw $0000 */;
}

void MusicRoosterRevival_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7a3e */;
    /* data: dw ChannelDefinition_1e_7a32 */;
    /* data: dw ChannelDefinition_1e_7a43 */;
    /* data: dw ChannelDefinition_1e_7a32 */;
    /* data: dw ChannelDefinition_1e_7a48 */;
    /* data: dw ChannelDefinition_1e_7a32 */;
    /* data: dw ChannelDefinition_1e_7a43 */;
    /* data: dw ChannelDefinition_1e_7a32 */;
    /* data: dw $ffff, MusicRoosterRevival_Channel1 */;
}

void MusicRoosterRevival_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7a4d */;
    /* data: dw $ffff, MusicRoosterRevival_Channel2 */;
}

void MusicRoosterRevival_Channel3(void) {
    /* data: dw ChannelDefinition_1e_79b7 */;
}

void MusicLoop_1e_7a2c(void) {
    /* data: dw ChannelDefinition_1e_7a51 */;
    /* data: dw $ffff, MusicLoop_1e_7a2c */;
}

void ChannelDefinition_1e_7a32(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 12 */;
    /* TODO: note C#6 */;
    /* TODO: note D_6 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note E_6 */;
    /* TODO: note F_6 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7a3e(void) {
    /* TODO: set_envelope_duty $10, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7a43(void) {
    /* TODO: set_envelope_duty $20, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7a48(void) {
    /* TODO: set_envelope_duty $30, $00, 0, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7a4d(void) {
    /* TODO: set_envelope_duty $1a, $81, 1, 0 */;
}

void ChannelDefinition_1e_7a51(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_5 */;
    /* TODO: note F_5 */;
    /* TODO: note A#5 */;
    /* TODO: note B_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicL2Sword(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4af7 */;
    /* data: dw MusicL2Sword_Channel1 */;
    /* data: dw MusicL2Sword_Channel2 */;
    /* data: dw MusicL2Sword_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicL2Sword_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7a7b */;
    /* data: dw ChannelDefinition_1e_7a87 */;
}

void MusicLoop_1e_7a69(void) {
    /* data: dw ChannelDefinition_1e_7b16 */;
    /* data: dw ChannelDefinition_1e_7b1f */;
    /* data: dw $ffff, MusicLoop_1e_7a69 */;
}

void MusicL2Sword_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7a82 */;
    /* data: dw ChannelDefinition_1e_7a87 */;
}

void MusicLoop_1e_7a75(void) {
    /* data: dw ChannelDefinition_1e_7b1b */;
    /* data: dw $ffff, MusicLoop_1e_7a75 */;
}

void ChannelDefinition_1e_7a7b(void) {
    /* TODO: set_envelope_duty $42, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7a82(void) {
    /* TODO: set_envelope_duty $81, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7a87(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 0 */;
    /* TODO: note A#2 */;
    /* TODO: note B_2 */;
    /* TODO: note F#3 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: note G_3 */;
    /* TODO: note D#3 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: note C#3 */;
    /* TODO: note F_3 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note A_3 */;
    /* TODO: note F_3 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note D#3 */;
    /* TODO: note E_3 */;
    /* TODO: note F_3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: note C#4 */;
    /* TODO: note A_3 */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: note F#4 */;
    /* TODO: note D#4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note G#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note F_4 */;
    /* TODO: note C#4 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note A_4 */;
    /* TODO: note F_4 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note C#5 */;
    /* TODO: note E_5 */;
    /* TODO: note C#5 */;
    /* TODO: note A_4 */;
    /* TODO: note F_4 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_4 */;
    /* TODO: note D#5 */;
    /* TODO: note F#5 */;
    /* TODO: note D#5 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D#4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: next_loop  */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_4 */;
    /* TODO: note D#5 */;
    /* TODO: note F#5 */;
    /* TODO: note D#5 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#5 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D#4 */;
    /* TODO: note B_3 */;
    /* TODO: note F#4 */;
    /* TODO: note D#4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note D#4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note D#3 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note F#3 */;
    /* TODO: note D#3 */;
    /* TODO: note G_3 */;
    /* TODO: note F#3 */;
    /* TODO: note D#3 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 5 */;
    /* TODO: note G_2 */;
    /* TODO: disable_unknown2  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7b16(void) {
    /* TODO: set_envelope_duty $10, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7b1b(void) {
    /* TODO: set_envelope_duty $1a, $81, 1, 0 */;
}

void ChannelDefinition_1e_7b1f(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_5 */;
    /* TODO: note F_5 */;
    /* TODO: note A#5 */;
    /* TODO: note B_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicHenhouse(void) {
    /* data: db $0e */;
    /* data: dw MusicSpeedData_1e_4abb */;
    /* data: dw MusicHenhouse_Channel1 */;
    /* data: dw MusicHenhouse_Channel2 */;
    /* data: dw MusicHenhouse_Channel3 */;
    /* data: dw $0000 */;
}

void MusicHenhouse_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7b45 */;
    /* data: dw $ffff, MusicHenhouse_Channel1 */;
}

void MusicHenhouse_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7b61 */;
    /* data: dw $ffff, MusicHenhouse_Channel2 */;
}

void MusicHenhouse_Channel3(void) {
    /* data: dw ChannelDefinition_1e_7b90 */;
    /* data: dw $ffff, MusicHenhouse_Channel3 */;
}

void ChannelDefinition_1e_7b45(void) {
    /* TODO: set_envelope_duty $62, $00, 1, 0 */;
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 8 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7b61(void) {
    /* TODO: set_envelope_duty $50, $21, 2, 0 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 5 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 5 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 14 */;
    /* TODO: note C_4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7b90(void) {
    /* TODO: set_waveform waveform_1e_4bf9, $40 */;
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note G_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicHeartContainer(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ae8 */;
    /* data: dw MusicHeartContainer_Channel1 */;
    /* data: dw MusicHeartContainer_Channel2 */;
    /* data: dw MusicHeartContainer_Channel3 */;
    /* data: dw MusicHeartContainer_Channel4 */;
}

void MusicHeartContainer_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7bc9 */;
    /* data: dw $ffff, MusicAfterBoss_Channel1 */;
}

void MusicHeartContainer_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7be0 */;
    /* data: dw $ffff, MusicAfterBoss_Channel2 */;
}

void MusicHeartContainer_Channel3(void) {
    /* data: dw ChannelDefinition_1e_7c06 */;
    /* data: dw $ffff, MusicLoop_1e_78bb */;
}

void MusicHeartContainer_Channel4(void) {
    /* data: dw ChannelDefinition_1e_7c1a */;
    /* data: dw $ffff, MusicLoop_1e_78c7 */;
}

void ChannelDefinition_1e_7bc9(void) {
    /* TODO: set_envelope_duty $80, $81, 0, 0 */;
    /* TODO: enable_unknown1  */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: note B_4 */;
    /* TODO: note E_5 */;
    /* TODO: note A_5 */;
    /* TODO: set_envelope_duty $80, $00, 0, 0 */;
    /* TODO: notelen 4 */;
    /* TODO: note F#5 */;
    /* TODO: rest  */;
    /* TODO: set_speed MusicSpeedData_1e_4ad9 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7be0(void) {
    /* TODO: set_envelope_duty $40, $81, 1, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#3 */;
    /* TODO: note C#4 */;
    /* TODO: note F#4 */;
    /* TODO: note D#4 */;
    /* TODO: note G#4 */;
    /* TODO: note C#5 */;
    /* TODO: set_envelope_duty $40, $00, 1, 0 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#4 */;
    /* TODO: rest  */;
    /* TODO: set_speed MusicSpeedData_1e_4ad9 */;
    /* TODO: end_def  */;
}

void waveform_1e_7bf6(void) {
    /* data: db $aa, $aa, $aa, $a8, $00, $00, $00, $00, $aa, $aa, $aa, $a8, $00, $00, $00, $00 */;
}

void ChannelDefinition_1e_7c06(void) {
    /* TODO: set_waveform waveform_1e_7bf6, $20 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note E_3 */;
    /* TODO: note A_3 */;
    /* TODO: note F#3 */;
    /* TODO: note B_3 */;
    /* TODO: note E_4 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 4 */;
    /* TODO: note C#4 */;
    /* TODO: rest  */;
    /* TODO: set_speed MusicSpeedData_1e_4ad9 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7c1a(void) {
    /* TODO: begin_loop $06 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $10 */;
    /* TODO: notelen 0 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: set_speed MusicSpeedData_1e_4ad9 */;
    /* TODO: end_def  */;
}

void MusicWindFish(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicWindFish_Channel1 */;
    /* data: dw MusicWindFish_Channel2 */;
    /* data: dw MusicWindFish_Channel3_rest_1C0 */;
    /* data: dw MusicWindFish_Channel4 */;
}

void MusicWindFish_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7c47 */;
}

void MusicLoop_1e_7c35(void) {
    /* data: dw ChannelDefinition_1e_7c4e */;
    /* data: dw $ffff, MusicLoop_1e_7c35 */;
}

void MusicWindFish_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7c93 */;
    /* data: dw $ffff, MusicWindFish_Channel2 */;
}

void MusicWindFish_Channel4(void) {
    /* data: dw ChannelDefinition_1e_7cf9 */;
    /* data: dw $ffff, MusicWindFish_Channel4 */;
}

void ChannelDefinition_1e_7c47(void) {
    /* TODO: set_envelope_duty $10, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7c4e(void) {
    /* TODO: notelen 12 */;
    /* TODO: note B_6 */;
    /* TODO: note F#6 */;
    /* TODO: note A#6 */;
    /* TODO: note F_6 */;
    /* TODO: note A_6 */;
    /* TODO: note E_6 */;
    /* TODO: note G#6 */;
    /* TODO: note D#6 */;
    /* TODO: note G_6 */;
    /* TODO: note D_6 */;
    /* TODO: note F#6 */;
    /* TODO: note B_5 */;
    /* TODO: note F_6 */;
    /* TODO: note A#5 */;
    /* TODO: note E_6 */;
    /* TODO: note A_5 */;
    /* TODO: note D#6 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 12 */;
    /* TODO: note F#6 */;
    /* TODO: note B_5 */;
    /* TODO: note F_6 */;
    /* TODO: note A#5 */;
    /* TODO: note E_6 */;
    /* TODO: note A_5 */;
    /* TODO: note D#6 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 13 */;
    /* TODO: note C#6 */;
    /* TODO: note C_6 */;
    /* TODO: note G#5 */;
    /* TODO: note F_5 */;
    /* TODO: note D#5 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note G#4 */;
    /* TODO: note F_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 13 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note G#4 */;
    /* TODO: note F_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 13 */;
    /* TODO: note C_6 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 13 */;
    /* TODO: note C_6 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 13 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: note G#5 */;
    /* TODO: note F_5 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: note G#5 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7c93(void) {
    /* TODO: set_envelope_duty $39, $00, 0, 0 */;
    /* TODO: notelen 12 */;
    /* TODO: note B_6 */;
    /* TODO: note F#6 */;
    /* TODO: note A#6 */;
    /* TODO: note F_6 */;
    /* TODO: note A_6 */;
    /* TODO: note E_6 */;
    /* TODO: note G#6 */;
    /* TODO: note D#6 */;
    /* TODO: note G_6 */;
    /* TODO: note D_6 */;
    /* TODO: note F#6 */;
    /* TODO: note B_5 */;
    /* TODO: note F_6 */;
    /* TODO: note A#5 */;
    /* TODO: note E_6 */;
    /* TODO: note A_5 */;
    /* TODO: note D#6 */;
    /* TODO: note G#5 */;
    /* TODO: set_envelope_duty $20, $00, 1, 0 */;
    /* TODO: notelen 12 */;
    /* TODO: note F#6 */;
    /* TODO: note B_5 */;
    /* TODO: note F_6 */;
    /* TODO: note A#5 */;
    /* TODO: note E_6 */;
    /* TODO: note A_5 */;
    /* TODO: note D#6 */;
    /* TODO: note G#5 */;
    /* TODO: set_envelope_duty $29, $00, 0, 0 */;
    /* TODO: notelen 13 */;
    /* TODO: note C#6 */;
    /* TODO: note C_6 */;
    /* TODO: note G#5 */;
    /* TODO: note F_5 */;
    /* TODO: note D#5 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note G#4 */;
    /* TODO: note F_4 */;
    /* TODO: note D#4 */;
    /* TODO: set_envelope_duty $20, $00, 1, 0 */;
    /* TODO: notelen 13 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note G#4 */;
    /* TODO: note F_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $29, $00, 0, 0 */;
    /* TODO: notelen 13 */;
    /* TODO: note C_6 */;
    /* TODO: note G#5 */;
    /* TODO: set_envelope_duty $20, $00, 1, 0 */;
    /* TODO: notelen 13 */;
    /* TODO: note C_6 */;
    /* TODO: note G#5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $29, $00, 0, 0 */;
    /* TODO: notelen 13 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: note G#5 */;
    /* TODO: note F_5 */;
    /* TODO: set_envelope_duty $20, $00, 1, 0 */;
    /* TODO: notelen 13 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: note G#5 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7cf9(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_12 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicBossDefeat(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aca */;
    /* data: dw MusicBossDefeat_Channel1 */;
    /* data: dw MusicBossDefeat_Channel2 */;
    /* data: dw MusicBossDefeat_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicBossDefeat_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7d28 */;
}

void MusicLoop_1e_7d0c(void) {
    /* data: dw ChannelDefinition_1e_7d36 */;
    /* data: dw $ffff, MusicLoop_1e_7d0c */;
}

void MusicBossDefeat_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7d33 */;
}

void MusicLoop_1e_7d14(void) {
    /* data: dw ChannelDefinition_1e_7d3c */;
    /* data: dw ChannelDefinition_1e_7d36 */;
    /* data: dw ChannelDefinition_1e_7d41 */;
    /* data: dw ChannelDefinition_1e_7d36 */;
    /* data: dw ChannelDefinition_1e_7d46 */;
    /* data: dw ChannelDefinition_1e_7d36 */;
    /* data: dw ChannelDefinition_1e_7d41 */;
    /* data: dw ChannelDefinition_1e_7d36 */;
    /* data: dw $ffff, MusicLoop_1e_7d14 */;
}

void ChannelDefinition_1e_7d28(void) {
    /* TODO: set_envelope_duty $20, $00, 1, 3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7d33(void) {
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7d36(void) {
    /* TODO: notelen 1 */;
    /* TODO: note D#2 */;
    /* TODO: note E_2 */;
    /* TODO: note D#2 */;
    /* TODO: note E_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7d3c(void) {
    /* TODO: set_envelope_duty $20, $00, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7d41(void) {
    /* TODO: set_envelope_duty $30, $00, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7d46(void) {
    /* TODO: set_envelope_duty $40, $00, 1, 0 */;
    /* TODO: end_def  */;
}

void MusicFinalBossDefeat(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4aac */;
    /* data: dw MusicFinalBossDefeat_Channel1 */;
    /* data: dw MusicFinalBossDefeat_Channel2 */;
    /* data: dw MusicFinalBossDefeat_Channel3 */;
    /* data: dw $0000 */;
}

void MusicFinalBossDefeat_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7d6e */;
}

void MusicLoop_1e_7d58(void) {
    /* data: dw ChannelDefinition_1e_7d84 */;
    /* data: dw $ffff, MusicLoop_1e_7d58 */;
}

void MusicFinalBossDefeat_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7d7a */;
}

void MusicLoop_1e_7d60(void) {
    /* data: dw ChannelDefinition_1e_7d84 */;
    /* data: dw $ffff, MusicLoop_1e_7d60 */;
}

void MusicFinalBossDefeat_Channel3(void) {
    /* data: dw ChannelDefinition_1e_7df8 */;
}

void MusicLoop_1e_7d68(void) {
    /* data: dw ChannelDefinition_1e_7d84 */;
    /* data: dw $ffff, MusicLoop_1e_7d68 */;
}

void ChannelDefinition_1e_7d6e(void) {
    /* TODO: set_envelope_duty $10, $00, 1, 0 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7d7a(void) {
    /* TODO: set_envelope_duty $20, $00, 0, 0 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7d84(void) {
    /* TODO: notelen 1 */;
    /* TODO: note A#6 */;
    /* TODO: note G#6 */;
    /* TODO: note G_6 */;
    /* TODO: note D#6 */;
    /* TODO: note C_6 */;
    /* TODO: note A#5 */;
    /* TODO: note G#5 */;
    /* TODO: note G_5 */;
    /* TODO: note D#5 */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: note G#4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note G#3 */;
    /* TODO: note G_3 */;
    /* TODO: note D#3 */;
    /* TODO: note C_3 */;
    /* TODO: note A#2 */;
    /* TODO: note G#2 */;
    /* TODO: note A#2 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note G_3 */;
    /* TODO: note G#3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note G#4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: note D#5 */;
    /* TODO: note G_5 */;
    /* TODO: note G#5 */;
    /* TODO: note A#5 */;
    /* TODO: note C_6 */;
    /* TODO: note D#6 */;
    /* TODO: note G_6 */;
    /* TODO: note G#6 */;
    /* TODO: note A#6 */;
    /* TODO: note G#6 */;
    /* TODO: note F#6 */;
    /* TODO: note D#6 */;
    /* TODO: note B_5 */;
    /* TODO: note A#5 */;
    /* TODO: note G#5 */;
    /* TODO: note F#5 */;
    /* TODO: note D#5 */;
    /* TODO: note B_4 */;
    /* TODO: note A#4 */;
    /* TODO: note G#4 */;
    /* TODO: note F#4 */;
    /* TODO: note D#4 */;
    /* TODO: note B_3 */;
    /* TODO: note A#3 */;
    /* TODO: note G#3 */;
    /* TODO: note F#3 */;
    /* TODO: note D#3 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D#3 */;
    /* TODO: note F#3 */;
    /* TODO: note G#3 */;
    /* TODO: note A#3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#3 */;
    /* TODO: note D#4 */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: note A#4 */;
    /* TODO: note B_4 */;
    /* TODO: note C#3 */;
    /* TODO: note D#5 */;
    /* TODO: note F#5 */;
    /* TODO: note G#5 */;
    /* TODO: note A#5 */;
    /* TODO: note A#5 */;
    /* TODO: note G#5 */;
    /* TODO: note F_5 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: note G#4 */;
    /* TODO: note F_4 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note G#3 */;
    /* TODO: note F_3 */;
    /* TODO: note C#3 */;
    /* TODO: note C_3 */;
    /* TODO: note A#2 */;
    /* TODO: note C_3 */;
    /* TODO: note C#3 */;
    /* TODO: note F_3 */;
    /* TODO: note G#3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: note F_5 */;
    /* TODO: note G#5 */;
    /* TODO: note A#5 */;
    /* TODO: note C_6 */;
    /* TODO: note C#6 */;
    /* TODO: note F_6 */;
    /* TODO: note G#6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7df8(void) {
    /* TODO: set_waveform waveform_1e_79a7, $20 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicFileSelectZelda(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1e_4ad9 */;
    /* data: dw MusicFileSelectZelda_Channel1 */;
    /* data: dw MusicFileSelectZelda_Channel2 */;
    /* data: dw MusicFileSelectZelda_Channel3 */;
    /* data: dw MusicFileSelectZelda_Channel4 */;
}

void MusicFileSelectZelda_Channel1(void) {
    /* data: dw ChannelDefinition_1e_7e2f */;
}

void MusicLoop_1e_7e11(void) {
    /* data: dw ChannelDefinition_1e_7e70 */;
    /* data: dw $ffff, MusicLoop_1e_7e11 */;
}

void MusicFileSelectZelda_Channel2(void) {
    /* data: dw ChannelDefinition_1e_7e3a */;
}

void MusicLoop_1e_7e19(void) {
    /* data: dw ChannelDefinition_1e_7e96 */;
    /* data: dw $ffff, MusicLoop_1e_7e19 */;
}

void MusicFileSelectZelda_Channel3(void) {
    /* data: dw ChannelDefinition_1e_7e55 */;
}

void MusicLoop_1e_7e21(void) {
    /* data: dw ChannelDefinition_1e_7efe */;
    /* data: dw $ffff, MusicLoop_1e_7e21 */;
}

void MusicFileSelectZelda_Channel4(void) {
    /* data: dw ChannelDefinition_1e_7e60 */;
}

void MusicLoop_1e_7e29(void) {
    /* data: dw ChannelDefinition_1e_7f76 */;
    /* data: dw $ffff, MusicLoop_1e_7e29 */;
}

void ChannelDefinition_1e_7e2f(void) {
    /* TODO: set_envelope_duty $60, $00, 1, 1 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 14 */;
    /* TODO: note D#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7e3a(void) {
    /* TODO: set_envelope_duty $40, $00, 0, 1 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 14 */;
    /* TODO: note D_5 */;
    /* TODO: end_def  */;
}

void waveform_1e_7e45(void) {
    /* data: db $8a, $df, $da, $86, $31, $01, $36, $86, $8a, $df, $da, $86, $31, $01, $36, $86 */;
}

void ChannelDefinition_1e_7e55(void) {
    /* TODO: set_waveform waveform_1e_7e45, $20 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 14 */;
    /* TODO: note A_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7e60(void) {
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7e70(void) {
    /* TODO: set_envelope_duty $41, $00, 2, 0 */;
    /* TODO: begin_loop $07 */;
    /* TODO: notelen 6 */;
    /* TODO: note E_6 */;
    /* TODO: note E_6 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_6 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_6 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_6 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $61, $00, 2, 0 */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: disable_unknown2  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7e96(void) {
    /* TODO: set_envelope_duty $60, $21, 1, 1 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 7 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 10 */;
    /* TODO: note A#4 */;
    /* TODO: note G#4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#4 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: set_envelope_duty $62, $00, 1, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: end_def  */;
}

void waveform_1e_7eee(void) {
    /* data: db $00, $11, $22, $33, $44, $55, $67, $89, $00, $00, $00, $05, $00, $00, $00, $05 */;
}

void ChannelDefinition_1e_7efe(void) {
    /* TODO: set_waveform waveform_1e_7eee, $20 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note A#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note G_4 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#4 */;
    /* TODO: note F#4 */;
    /* TODO: note D#4 */;
    /* TODO: note F#3 */;
    /* TODO: note B_3 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1e_7f76(void) {
    /* TODO: begin_loop $07 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_FF */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 6 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: end_def  */;
}
