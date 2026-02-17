/* Auto-generated from LADX Disassembly - Bank 0x1B */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void PlayMusicTrack_1B(void);
void label_01B_4009(void);
void PlayMusicTrack_1B_EntryPoint(void);
void jr_01B_4028(void);
void DontPlayAudio_1B(void);
void BeginMusicTrack_1B(void);
void func_01B_4037(void);
void jr_01B_4053(void);
void Data_01B_4060(void);
void Data_01B_4065(void);
void label_01B_406A(void);
void jr_01B_406A(void);
void MusicDataPointerTable_1B(void);
void GetMusicDataPtr_1B(void);
void SetWaveform_1B(void);
void StopNoiseChannel_1B(void);
void func_01B_410F(void);
void jr_01B_410F(void);
void BeginMusicTrack_Dispatch_1B(void);
void Data_1B_418B(void);
void label_01B_42AB(void);
void label_01B_42D5(void);
void func_01B_4303(void);
void LoadSoundDefinitionData(void);
void Copy2Bytes_1B(void);
void LoadMusicData_1B(void);
void soundOpcode9DChannel3Handler_1B(void);
void soundOpcode9D(void);
void IncChannelDefinitionPointer(void);
void saveSoundPointer(void);
void IncrementPointerBy2(void);
void ReadSoundPointerByte(void);
void jr_01B_4427(void);
void label_01B_442A(void);
void UpdateNextMusicChannelAfterHlDecrement(void);
void soundOpcode00(void);
void soundOpcode9E(void);
void soundOpcode9F(void);
void IncChannelDefinitonPointerAndParseNext(void);
void soundOpcode9B(void);
void soundOpcode9C(void);
void UpdateAllMusicChannels_1B(void);
void UpdateMusicChannel_1B(void);
void ParseSoundOpcodeAfterHlIncrement(void);
void ParseSoundOpcode(void);
void HandleNote(void);
void WriteChannelRegisters(void);
void label_01B_46D9(void);
void UpdateNextMusicChannel_1B(void);
void label_01B_46FC(void);
void func_01B_46FE(void);
void label_01B_4720(void);
void jr_01B_4720(void);
void label_01B_4749(void);
void jr_01B_4762(void);
void func_01B_4787(void);
void func_01B_47D2(void);
void ContinueCurrentScreenMusic_1B(void);
void soundOpcode96(void);
void soundOpcode95(void);
void soundOpcode99(void);
void soundOpcode9A(void);
void label_01B_4810(void);
void label_01B_483D(void);
void jr_01B_483D(void);
void func_01B_4842(void);
void soundOpcode97(void);
void soundOpcode98(void);
void label_01B_485E(void);
void jr_01B_486A(void);
void jr_01B_4874(void);
void func_01B_4879(void);
void func_01B_4884(void);
void IndexChannelArray(void);
void func_01B_489E(void);
void label_01B_48AB(void);
void jr_01B_48C3(void);
void jr_01B_48E4(void);
void jr_01B_48EB(void);
void Data_01B_48F0(void);
void label_01B_4918(void);
void jr_01B_4927(void);
void jr_01B_4946(void);
void Data_01B_494D(void);
void soundOpcode94(void);
void label_01B_4998(void);
void SquareAndWaveFrequencyTable(void);
void NoiseFrequencyTable(void);
void MusicSpeedData_1b_4aaa(void);
void MusicSpeedData_1b_4ab9(void);
void MusicSpeedData_1b_4ac8(void);
void MusicSpeedData_1b_4ad7(void);
void MusicSpeedData_1b_4ae6(void);
void MusicSpeedData_1b_4af5(void);
void MusicSpeedData_1b_4b04(void);
void HardcodedData_1b_4b13(void);
void MusicMabeVillage_Channel3_rest_1C0(void);
void MusicInsideBuilding_Channel3_rest_1C0(void);
void MusicMrWriteHouse_Channel3_rest_1C0(void);
void MusicUlrira_Channel3_rest_1C0(void);
void MusicTarinBees_Channel1_rest_1C0(void);
void MusicMonkeysBuildingBridge_Channel1_rest_1C0(void);
void MusicTotakaUnused_Channel1_rest_1C0(void);
void MusicTotakaUnused_Channel2_rest_1C0(void);
void MusicFishermanUnderBridge_Channel1_rest_1C0(void);
void ChannelDefinition_1b_rest_1C0(void);
void MusicObtainItem(void);
void MusicObtainItem_Channel1(void);
void MusicObtainItem_Channel2(void);
void MusicObtainItem_Channel3(void);
void MusicObtainItem_Channel4(void);
void ChannelDefinition_1b_4b51(void);
void ChannelDefinition_1b_4b61(void);
void ChannelDefinition_1b_4b6f(void);
void ChannelDefinition_1b_4b81(void);
void MusicRichardHouse(void);
void MusicRichardHouse_Channel1(void);
void MusicRichardHouse_Channel2(void);
void MusicRichardHouse_Channel3(void);
void ChannelDefinition_1b_4bd0(void);
void ChannelDefinition_1b_4bd5(void);
void ChannelDefinition_1b_4c05(void);
void ChannelDefinition_1b_4c0a(void);
void ChannelDefinition_1b_4c3f(void);
void ChannelDefinition_1b_rest_2C(void);
void MusicFileSelectTotaka(void);
void MusicFileSelectTotaka_Channel1(void);
void MusicLoop_1b_4c87(void);
void MusicFileSelectTotaka_Channel2(void);
void MusicLoop_1b_4c8f(void);
void MusicFileSelectTotaka_Channel3(void);
void MusicLoop_1b_4c97(void);
void MusicFileSelectTotaka_Channel4(void);
void MusicLoop_1b_4c9f(void);
void ChannelDefinition_1b_4ca5(void);
void ChannelDefinition_1b_4cb2(void);
void ChannelDefinition_1b_4cbf(void);
void ChannelDefinition_1b_4ccc(void);
void ChannelDefinition_1b_4cde(void);
void ChannelDefinition_1b_4cef(void);
void waveform_1b_4d2f(void);
void ChannelDefinition_1b_4d3f(void);
void ChannelDefinition_1b_4d88(void);
void MusicChristineHouse(void);
void MusicChristineHouse_Channel1(void);
void MusicChristineHouse_Channel2(void);
void MusicChristineHouse_Channel3(void);
void ChannelDefinition_1b_4dc9(void);
void ChannelDefinition_1b_4ddf(void);
void waveform_1b_4e05(void);
void ChannelDefinition_1b_4e15(void);
void label_01B_4E2C(void);
void label_01B_4E4A(void);
void StopSquareAndWaveChannels_1B(void);
void MusicTotakaUnused(void);
void MusicTotakaUnused_Channel3(void);
void ChannelDefinition_1b_500f(void);
void MusicTitleScreen(void);
void MusicTitleScreen_Channel1(void);
void MusicLoop_1b_5041(void);
void MusicTitleScreen_Channel2(void);
void MusicLoop_1b_5049(void);
void MusicTitleScreen_Channel3(void);
void MusicLoop_1b_5053(void);
void ChannelDefinition_1b_505b(void);
void ChannelDefinition_1b_50ab(void);
void ChannelDefinition_1b_50d9(void);
void ChannelDefinition_1b_513c(void);
void ChannelDefinition_1b_517e(void);
void MusicMinigame(void);
void MusicMinigame_Channel1(void);
void MusicMinigame_Channel2(void);
void MusicMinigame_Channel3(void);
void ChannelDefinition_1b_5241(void);
void ChannelDefinition_1b_524b(void);
void ChannelDefinition_1b_rest_1C_1(void);
void ChannelDefinition_1b_525d(void);
void ChannelDefinition_1b_527a(void);
void ChannelDefinition_1b_527d(void);
void ChannelDefinition_1b_5288(void);
void MusicGameOver(void);
void MusicGameOver_Channel1(void);
void MusicGameOver_Channel2(void);
void MusicGameOver_Channel3(void);
void MusicLoop_1b_52ae(void);
void ChannelDefinition_1b_52b6(void);
void ChannelDefinition_1b_52bb(void);
void ChannelDefinition_1b_52eb(void);
void ChannelDefinition_1b_5327(void);
void MusicMabeVillage(void);
void MusicMabeVillage_Channel1(void);
void MusicMabeVillage_Channel2(void);
void ChannelDefinition_1b_5343(void);
void ChannelDefinition_1b_53a5(void);
void MusicOverworld(void);
void MusicOverworld_Channel1(void);
void MusicLoop_1b_5412(void);
void MusicOverworld_Channel2(void);
void MusicLoop_1b_5420(void);
void MusicOverworld_Channel3(void);
void MusicLoop_1b_5430(void);
void ChannelDefinition_1b_5446(void);
void ChannelDefinition_1b_5471(void);
void ChannelDefinition_1b_54bc(void);
void ChannelDefinition_1b_54e9(void);
void ChannelDefinition_1b_5562(void);
void ChannelDefinition_1b_558f(void);
void ChannelDefinition_1b_55c4(void);
void ChannelDefinition_1b_55e8(void);
void ChannelDefinition_1b_5664(void);
void ChannelDefinition_1b_568d(void);
void ChannelDefinition_1b_56af(void);
void ChannelDefinition_1b_56dd(void);
void ChannelDefinition_1b_56ea(void);
void ChannelDefinition_1b_56f7(void);
void MusicTalTalRange(void);
void MusicTalTalRange_Channel1(void);
void MusicLoop_1b_5769(void);
void MusicTalTalRange_Channel2(void);
void MusicLoop_1b_5791(void);
void MusicTalTalRange_Channel3(void);
void MusicLoop_1b_57ab(void);
void MusicTalTalRange_Channel4(void);
void MusicLoop_1b_57c5(void);
void ChannelDefinition_1b_57d3(void);
void ChannelDefinition_1b_57f8(void);
void ChannelDefinition_1b_5816(void);
void ChannelDefinition_1b_586f(void);
void ChannelDefinition_1b_588e(void);
void ChannelDefinition_1b_591b(void);
void ChannelDefinition_1b_5926(void);
void ChannelDefinition_1b_5933(void);
void ChannelDefinition_1b_597f(void);
void ChannelDefinition_1b_5994(void);
void ChannelDefinition_1b_59a1(void);
void ChannelDefinition_1b_59b8(void);
void ChannelDefinition_1b_59c2(void);
void ChannelDefinition_1b_59d9(void);
void MusicShop(void);
void MusicShop_Channel1(void);
void MusicShop_Channel2(void);
void MusicShop_Channel3(void);
void ChannelDefinition_1b_5a0f(void);
void ChannelDefinition_1b_5a3f(void);
void ChannelDefinition_1b_5a7a(void);
void MusicRaftRideRapids(void);
void MusicRaftRideRapids_Channel1(void);
void MusicRaftRideRapids_Channel2(void);
void MusicRaftRideRapids_Channel3(void);
void MusicRaftRideRapids_Channel4(void);
void ChannelDefinition_1b_5ae0(void);
void ChannelDefinition_1b_5af9(void);
void ChannelDefinition_1b_5b00(void);
void ChannelDefinition_1b_5b21(void);
void ChannelDefinition_1b_5b28(void);
void ChannelDefinition_1b_5b2f(void);
void ChannelDefinition_1b_5b45(void);
void ChannelDefinition_1b_5b5a(void);
void ChannelDefinition_1b_5b68(void);
void MusicMysteriousForest(void);
void MusicMysteriousForest_Channel1(void);
void MusicLoop_1b_5b8a(void);
void MusicMysteriousForest_Channel2(void);
void MusicLoop_1b_5b96(void);
void MusicMysteriousForest_Channel3(void);
void MusicLoop_1b_5b9e(void);
void MusicMysteriousForest_Channel4(void);
void ChannelDefinition_1b_5bae(void);
void ChannelDefinition_1b_5bbe(void);
void ChannelDefinition_1b_5bd3(void);
void ChannelDefinition_1b_5bf4(void);
void ChannelDefinition_1b_5c26(void);
void ChannelDefinition_1b_5c44(void);
void ChannelDefinition_1b_5c61(void);
void MusicInsideBuilding(void);
void MusicInsideBuilding_Channel1(void);
void MusicLoop_1b_5c80(void);
void MusicInsideBuilding_Channel2(void);
void ChannelDefinition_1b_5c8e(void);
void MusicAnimalVillage(void);
void MusicAnimalVillage_Channel1(void);
void MusicLoop_1b_5d16(void);
void MusicAnimalVillage_Channel2(void);
void MusicLoop_1b_5d24(void);
void MusicAnimalVillage_Channel3(void);
void MusicLoop_1b_5d2e(void);
void MusicAnimalVillage_Channel4(void);
void ChannelDefinition_1b_5d3e(void);
void ChannelDefinition_1b_5d60(void);
void ChannelDefinition_1b_5d7b(void);
void ChannelDefinition_1b_5da5(void);
void MusicFairyFountain(void);
void MusicFairyFountain_Channel1(void);
void MusicLoop_1b_5dc7(void);
void MusicFairyFountain_Channel2(void);
void MusicFairyFountain_Channel3(void);
void MusicLoop_1b_5de3(void);
void ChannelDefinition_1b_5df1(void);
void ChannelDefinition_1b_5df6(void);
void MusicTitleScreenNoIntro(void);
void MusicTitleScreenNoIntro_Channel1(void);
void MusicTitleScreenNoIntro_Channel2(void);
void MusicTitleScreenNoIntro_Channel3(void);
void MusicBowwowKidnapped(void);
void MusicBowwowKidnapped_Channel1(void);
void MusicBowwowKidnapped_Channel2(void);
void MusicBowwowKidnapped_Channel3(void);
void ChannelDefinition_1b_5e6e(void);
void ChannelDefinition_1b_5e78(void);
void ChannelDefinition_1b_5e91(void);
void ChannelDefinition_1b_5ea0(void);
void MusicObtainSword(void);
void MusicObtainSword_Channel1(void);
void MusicObtainSword_Channel2(void);
void MusicObtainSword_Channel3(void);
void ChannelDefinition_1b_5ecc(void);
void ChannelDefinition_1b_5ed1(void);
void ChannelDefinition_1b_5ed6(void);
void ChannelDefinition_1b_5edb(void);
void MusicOverworldIntro(void);
void MusicOverworldIntro_Channel1(void);
void MusicOverworldIntro_Channel2(void);
void MusicOverworldIntro_Channel3(void);
void ChannelDefinition_1b_5f29(void);
void ChannelDefinition_1b_5f5c(void);
void ChannelDefinition_1b_5f85(void);
void MusicMrWriteHouse(void);
void MusicMrWriteHouse_Channel1(void);
void MusicMrWriteHouse_Channel2(void);
void ChannelDefinition_1b_5fdc(void);
void ChannelDefinition_1b_5ffe(void);
void MusicUlrira(void);
void MusicUlrira_Channel1(void);
void MusicUlrira_Channel2(void);
void ChannelDefinition_1b_rest_275(void);
void ChannelDefinition_1b_6059(void);
void ChannelDefinition_1b_6065(void);
void ChannelDefinition_1b_606a(void);
void ChannelDefinition_1b_606f(void);
void ChannelDefinition_1b_607e(void);
void ChannelDefinition_1b_608a(void);
void ChannelDefinition_1b_6090(void);
void MusicTarinBees(void);
void MusicTarinBees_Channel2(void);
void MusicTarinBees_Channel3(void);
void ChannelDefinition_1b_60c1(void);
void ChannelDefinition_1b_60d9(void);
void ChannelDefinition_1b_60fa(void);
void ChannelDefinition_1b_610f(void);
void ChannelDefinition_1b_611d(void);
void ChannelDefinition_1b_6129(void);
void ChannelDefinition_1b_614c(void);
void ChannelDefinition_1b_6159(void);
void MusicMamuFrogSong(void);
void MusicMamuFrogSong_Channel1(void);
void MusicMamuFrogSong_Channel2(void);
void MusicMamuFrogSong_Channel3(void);
void ChannelDefinition_1b_618c(void);
void ChannelDefinition_1b_619a(void);
void ChannelDefinition_1b_61c8(void);
void ChannelDefinition_1b_61d6(void);
void ChannelDefinition_1b_6204(void);
void ChannelDefinition_1b_6211(void);
void MusicMonkeysBuildingBridge(void);
void MusicMonkeysBuildingBridge_Channel2(void);
void MusicMonkeysBuildingBridge_Channel3(void);
void ChannelDefinition_1b_626c(void);
void ChannelDefinition_1b_6271(void);
void ChannelDefinition_1b_6282(void);
void ChannelDefinition_1b_62ba(void);
void ChannelDefinition_1b_62c7(void);
void ChannelDefinition_1b_62d9(void);
void ChannelDefinition_1b_6300(void);
void MusicTurtleRockEntranceBoss(void);
void MusicTurtleRockEntranceBoss_Channel1(void);
void MusicLoop_1b_632a(void);
void MusicTurtleRockEntranceBoss_Channel2(void);
void MusicLoop_1b_6344(void);
void MusicTurtleRockEntranceBoss_Channel3(void);
void MusicLoop_1b_635a(void);
void MusicTurtleRockEntranceBoss_Channel4(void);
void MusicLoop_1b_6368(void);
void ChannelDefinition_1b_636e(void);
void ChannelDefinition_1b_637f(void);
void ChannelDefinition_1b_6394(void);
void ChannelDefinition_1b_63a3(void);
void ChannelDefinition_1b_63b2(void);
void ChannelDefinition_1b_63c1(void);
void ChannelDefinition_1b_63d6(void);
void ChannelDefinition_1b_63e5(void);
void ChannelDefinition_1b_63f4(void);
void ChannelDefinition_1b_6404(void);
void ChannelDefinition_1b_rest_1C_2(void);
void ChannelDefinition_1b_rest_14_1(void);
void ChannelDefinition_1b_642e(void);
void MusicFishermanUnderBridge(void);
void MusicFishermanUnderBridge_Channel2(void);
void MusicFishermanUnderBridge_Channel3(void);
void MusicFishermanUnderBridge_Channel4(void);
void ChannelDefinition_1b_6461(void);
void ChannelDefinition_1b_6480(void);
void ChannelDefinition_1b_64b5(void);
void ChannelDefinition_1b_64d0(void);
void MusicObtainItemUnused(void);
void MusicObtainItemUnused_Channel1(void);
void MusicObtainItemUnused_Channel2(void);
void MusicObtainItemUnused_Channel3(void);
void ChannelDefinition_1b_64fc(void);
void ChannelDefinition_1b_6503(void);
void ChannelDefinition_1b_650a(void);
void MusicEnding(void);
void MusicEnding_Channel1(void);
void MusicEnding_Channel2(void);
void MusicEnding_Channel3(void);
void MusicEnding_Channel4(void);
void ChannelDefinition_1b_6656(void);
void ChannelDefinition_1b_665b(void);
void ChannelDefinition_1b_666d(void);
void ChannelDefinition_1b_668a(void);
void ChannelDefinition_1b_66ba(void);
void ChannelDefinition_1b_66d8(void);
void ChannelDefinition_1b_6716(void);
void ChannelDefinition_1b_671b(void);
void ChannelDefinition_1b_672f(void);
void ChannelDefinition_1b_676a(void);
void ChannelDefinition_1b_67d1(void);
void ChannelDefinition_1b_67f2(void);
void ChannelDefinition_1b_6832(void);
void ChannelDefinition_1b_6852(void);
void ChannelDefinition_1b_6863(void);
void ChannelDefinition_1b_6880(void);
void ChannelDefinition_1b_688f(void);
void ChannelDefinition_1b_68a5(void);
void ChannelDefinition_1b_68b9(void);
void ChannelDefinition_1b_68cc(void);
void ChannelDefinition_1b_68d1(void);
void ChannelDefinition_1b_68e8(void);
void ChannelDefinition_1b_6904(void);
void ChannelDefinition_1b_693d(void);
void ChannelDefinition_1b_698f(void);
void ChannelDefinition_1b_69ae(void);
void ChannelDefinition_1b_69ee(void);
void ChannelDefinition_1b_6a07(void);
void ChannelDefinition_1b_6a18(void);
void ChannelDefinition_1b_6a2d(void);
void ChannelDefinition_1b_6a3c(void);
void ChannelDefinition_1b_6a41(void);
void ChannelDefinition_1b_rest_18(void);
void ChannelDefinition_1b_rest_A(void);
void ChannelDefinition_1b_6a55(void);
void ChannelDefinition_1b_6a7c(void);
void ChannelDefinition_1b_6aa3(void);
void ChannelDefinition_1b_6ab7(void);
void ChannelDefinition_1b_6b15(void);
void ChannelDefinition_1b_6b30(void);
void ChannelDefinition_1b_6b7b(void);
void ChannelDefinition_1b_6b98(void);
void ChannelDefinition_1b_6ba4(void);
void ChannelDefinition_1b_6bba(void);
void ChannelDefinition_1b_rest_67(void);
void ChannelDefinition_1b_rest_21(void);
void ChannelDefinition_1b_6bd5(void);
void ChannelDefinition_1b_6be6(void);
void ChannelDefinition_1b_6bf7(void);
void ChannelDefinition_1b_6c02(void);
void ChannelDefinition_1b_6c10(void);
void MusicMoblinHideout(void);
void MusicMoblinHideout_Channel1(void);
void MusicMoblinHideout_Channel2(void);
void MusicMoblinHideout_Channel3(void);
void ChannelDefinition_1b_6c50(void);
void ChannelDefinition_1b_6c55(void);
void ChannelDefinition_1b_6c5f(void);
void MusicIslandDisappear(void);
void MusicIslandDisappear_Channel1(void);
void MusicIslandDisappear_Channel2(void);
void MusicIslandDisappear_Channel3(void);
void MusicIslandDisappear_Channel4(void);
void ChannelDefinition_1b_6cf6(void);
void ChannelDefinition_1b_6cfd(void);
void ChannelDefinition_1b_6d03(void);
void ChannelDefinition_1b_6d09(void);
void ChannelDefinition_1b_6d7a(void);
void ChannelDefinition_1b_6d81(void);
void ChannelDefinition_1b_6d88(void);
void ChannelDefinition_1b_6da7(void);
void ChannelDefinition_1b_6dc7(void);
void ChannelDefinition_1b_6dd4(void);
void ChannelDefinition_1b_6de0(void);
void ChannelDefinition_1b_6df3(void);
void ChannelDefinition_1b_6df8(void);
void ChannelDefinition_1b_6dfb(void);
void ChannelDefinition_1b_6e00(void);
void ChannelDefinition_1b_6e12(void);
void ChannelDefinition_1b_6e34(void);
void ChannelDefinition_1b_rest_37(void);
void ChannelDefinition_1b_6e56(void);
void ChannelDefinition_1b_6e6b(void);
void ChannelDefinition_1b_6e95(void);
void ChannelDefinition_1b_rest_1b(void);
void waveform_1b_6ea1(void);
void waveform_1b_6eb1(void);
void waveform_1b_6ec1(void);
void waveform_1b_6ed1(void);
void waveform_1b_6ee1(void);
void waveform_1b_6ef1(void);
void waveform_1b_6f01(void);
void waveform_1b_6f11(void);
void waveform_1b_6f21(void);
void waveform_1b_6f31(void);
void ChannelDefinition_1b_6f41(void);
void ChannelDefinition_1b_6f46(void);
void ChannelDefinition_1b_6f4b(void);
void ChannelDefinition_1b_6f55(void);
void ChannelDefinition_1b_6f5b(void);
void ChannelDefinition_1b_6f60(void);
void ChannelDefinition_1b_6f65(void);
void ChannelDefinition_1b_6f6b(void);
void ChannelDefinition_1b_6f70(void);
void ChannelDefinition_1b_6f75(void);
void ChannelDefinition_1b_6f7a(void);
void ChannelDefinition_1b_6f7f(void);
void ChannelDefinition_1b_6f84(void);
void ChannelDefinition_1b_6f89(void);
void ChannelDefinition_1b_6f8e(void);
void ChannelDefinition_1b_6f93(void);
void ChannelDefinition_1b_6f98(void);
void ChannelDefinition_1b_6f9d(void);
void ChannelDefinition_1b_6fa2(void);
void ChannelDefinition_1b_6fa7(void);
void ChannelDefinition_1b_6fac(void);
void ChannelDefinition_1b_6fb1(void);
void ChannelDefinition_1b_6fb6(void);
void ChannelDefinition_1b_6fbb(void);
void ChannelDefinition_1b_6fc0(void);
void ChannelDefinition_1b_6fc5(void);
void ChannelDefinition_1b_6fca(void);
void ChannelDefinition_1b_6fcf(void);
void ChannelDefinition_1b_6fd4(void);
void ChannelDefinition_1b_6fd9(void);
void ChannelDefinition_1b_6fde(void);
void ChannelDefinition_1b_6fe3(void);
void ChannelDefinition_1b_6fe8(void);
void ChannelDefinition_1b_6fed(void);
void ChannelDefinition_1b_6ff2(void);
void ChannelDefinition_1b_6ff7(void);
void ChannelDefinition_1b_6ffc(void);
void ChannelDefinition_1b_7001(void);
void ChannelDefinition_1b_7006(void);
void ChannelDefinition_1b_700b(void);
void ChannelDefinition_1b_7010(void);
void ChannelDefinition_1b_7015(void);
void ChannelDefinition_1b_701b(void);
void ChannelDefinition_1b_7021(void);
void ChannelDefinition_1b_7024(void);
void ChannelDefinition_1b_7027(void);
void ChannelDefinition_1b_702a(void);
void ChannelDefinition_1b_702d(void);
void ChannelDefinition_1b_7032(void);
void ChannelDefinition_1b_7037(void);
void ChannelDefinition_1b_rest_3b(void);
void ChannelDefinition_1b_rest_31_1(void);
void ChannelDefinition_1b_rest_31_2(void);
void ChannelDefinition_1b_rest_5_1(void);
void ChannelDefinition_1b_rest_A_2(void);
void ChannelDefinition_1b_rest_14(void);
void ChannelDefinition_1b_rest_32(void);
void ChannelDefinition_1b_rest_6(void);
void ChannelDefinition_1b_rest_7(void);
void ChannelDefinition_1b_rest_1(void);
void ChannelDefinition_1b_rest_2(void);
void ChannelDefinition_1b_rest_4(void);
void ChannelDefinition_1b_rest_3(void);
void ChannelDefinition_1b_rest_5_2(void);
void MusicLoop_1b_708f(void);
void MusicLoop_1b_7095(void);
void ChannelDefinition_1b_709b(void);
void ChannelDefinition_1b_709f(void);
void ChannelDefinition_1b_70a3(void);
void MusicColorDungeon(void);
void Music62(void);
void Music63(void);
void Music64(void);
void Music65(void);
void Music66(void);
void Music67(void);
void Music68(void);
void Music69(void);
void Music6a(void);
void Music6b(void);
void Music6c(void);
void Music6d(void);
void Music6e(void);
void Music6f(void);
void Music70(void);
void MusicColorDungeon_Channel1(void);
void MusicColorDungeon_Channel2(void);
void MusicLoop_1b_7113(void);
void MusicColorDungeon_Channel3(void);
void ChannelDefinition_1b_712f(void);
void ChannelDefinition_1b_7137(void);
void ChannelDefinition_1b_713c(void);
void ChannelDefinition_1b_71b2(void);
void ChannelDefinition_1b_7228(void);
void ChannelDefinition_1b_722d(void);
void ChannelDefinition_1b_726a(void);
void waveform_1b_7349(void);
void waveform_1b_7359(void);
void waveform_1b_7369(void);

void PlayMusicTrack_1B(void) {
    PlayMusicTrack_1B_EntryPoint(); return;
}

void label_01B_4009(void) {
    gb.regs.hl = 0xD300;
  label_01B_4009_loop_400C:;
    gb_write(gb.regs.hl, 0);
    gb.regs.l = alu_inc8(gb.regs.l);
    if (!GET_FLAG_Z()) goto label_01B_4009_loop_400C;
    gb.regs.a = 0x80;
    gb_write(0xFF26, gb.regs.a);
    gb.regs.a = 0x77;
    gb_write(0xFF24, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xFF25, gb.regs.a);
    return;
}

void PlayMusicTrack_1B_EntryPoint(void) {
    gb.regs.hl = 0xD368;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { BeginMusicTrack_1B(); return; };
    func_01B_4037();
}

void jr_01B_4028(void) {
    UpdateAllMusicChannels_1B();
    return;
}

void DontPlayAudio_1B(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3CE, gb.regs.a);
    return;
}

void BeginMusicTrack_1B(void) {
    gb_write(gb.regs.hl, gb.regs.a);
    BeginMusicTrack_Dispatch_1B();
    jr_01B_4028(); return;
}

void func_01B_4037(void) {
    gb.regs.de = 0xD393;
    gb.regs.hl = 0xD378;
    gb.regs.a = gb_read(gb.regs.hl++);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_01B_4037_jr_4048;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01B_4053(); return; };
    return;
  func_01B_4037_jr_4048:;
    gb.regs.a = 1;
    gb_write(0xD379, gb.regs.a);
    gb.regs.hl = 0x4060;
    label_01B_406A(); return;
}

void jr_01B_4053(void) {
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD379, gb.regs.a);
    gb.regs.hl = 0x4065;
    jr_01B_406A(); return;
}

void Data_01B_4060(void) {
    /* data: db $3B, $80, $07, $C0, $02 */;
}

void Data_01B_4065(void) {
    /* data: db $00, $42, $02, $C0, $04 */;
}

void label_01B_406A(void) {
}

void jr_01B_406A(void) {
    gb.regs.b = 4;
    gb.regs.c = 0x20;
  jr_01B_406A_loop_406E:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto jr_01B_406A_loop_406E;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void MusicDataPointerTable_1B(void) {
    /* data: dw MusicTitleScreen */;
    /* data: dw MusicMinigame */;
    /* data: dw MusicGameOver */;
    /* data: dw MusicMabeVillage */;
    /* data: dw MusicOverworld */;
    /* data: dw MusicTalTalRange */;
    /* data: dw MusicShop */;
    /* data: dw MusicRaftRideRapids */;
    /* data: dw MusicMysteriousForest */;
    /* data: dw MusicInsideBuilding */;
    /* data: dw MusicAnimalVillage */;
    /* data: dw MusicFairyFountain */;
    /* data: dw MusicTitleScreenNoIntro */;
    /* data: dw MusicBowwowKidnapped */;
    /* data: dw MusicObtainSword */;
    /* data: dw MusicObtainItem */;
    /* data: dw MusicOverworldIntro */;
    /* data: dw MusicMrWriteHouse */;
    /* data: dw MusicUlrira */;
    /* data: dw MusicTarinBees */;
    /* data: dw MusicMamuFrogSong */;
    /* data: dw MusicMonkeysBuildingBridge */;
    /* data: dw MusicChristineHouse */;
    /* data: dw MusicTotakaUnused */;
    /* data: dw MusicTurtleRockEntranceBoss */;
    /* data: dw MusicFishermanUnderBridge */;
    /* data: dw MusicObtainItemUnused */;
    /* data: dw MusicFileSelectTotaka */;
    /* data: dw MusicEnding */;
    /* data: dw MusicMoblinHideout */;
    /* data: dw MusicIslandDisappear */;
    /* data: dw MusicRichardHouse */;
    /* data: dw MusicColorDungeon */;
    /* data: dw Music62 */;
    /* data: dw Music63 */;
    /* data: dw Music64 */;
    /* data: dw Music65 */;
    /* data: dw Music66 */;
    /* data: dw Music67 */;
    /* data: dw Music68 */;
    /* data: dw Music69 */;
    /* data: dw Music6a */;
    /* data: dw Music6b */;
    /* data: dw Music6c */;
    /* data: dw Music6d */;
    /* data: dw Music6e */;
    /* data: dw Music6f */;
    /* data: dw Music70 */;
}

void GetMusicDataPtr_1B(void) {
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

void SetWaveform_1B(void) {
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x30;
  SetWaveform_1B_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto SetWaveform_1B_loop;
    gb.regs.bc = gb_pop16();
    return;
}

void StopNoiseChannel_1B(void) {
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

void func_01B_410F(void) {
}

void jr_01B_410F(void) {
    gb.regs.a = gb_read(0xD379);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { label_01B_4E4A(); return; };
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { label_01B_4E4A(); return; };
    alu_cp8(gb.regs.a, 0x1A);
    if (GET_FLAG_Z()) { label_01B_4E4A(); return; };
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_Z()) { label_01B_4E4A(); return; };
    alu_cp8(gb.regs.a, 0x2A);
    if (GET_FLAG_Z()) { label_01B_4E4A(); return; };
    alu_cp8(gb.regs.a, 0x2E);
    if (GET_FLAG_Z()) { label_01B_4E4A(); return; };
    alu_cp8(gb.regs.a, 0x3F);
    if (GET_FLAG_Z()) { label_01B_4E4A(); return; };
    StopNoiseChannel_1B();
    label_01B_4E4A(); return;
}

void BeginMusicTrack_Dispatch_1B(void) {
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { jr_01B_410F(); return; };
    gb.regs.a = gb_read(0xD3CA);
    gb_write(0xD3CB, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD3CA, gb.regs.a);
    alu_cp8(gb.regs.a, 0x11);
    if (!GET_FLAG_C()) goto BeginMusicTrack_Dispatch_1B_above10;
    goto BeginMusicTrack_Dispatch_1B_playAudio;
  BeginMusicTrack_Dispatch_1B_above10:;
    alu_cp8(gb.regs.a, 0x21);
    if (!GET_FLAG_C()) goto BeginMusicTrack_Dispatch_1B_above20;
    DontPlayAudio_1B(); return;
  BeginMusicTrack_Dispatch_1B_above20:;
    alu_cp8(gb.regs.a, 0x31);
    if (!GET_FLAG_C()) goto BeginMusicTrack_Dispatch_1B_above30;
    DontPlayAudio_1B(); return;
  BeginMusicTrack_Dispatch_1B_above30:;
    alu_cp8(gb.regs.a, 0x41);
    if (!GET_FLAG_C()) goto BeginMusicTrack_Dispatch_1B_above40;
    gb.regs.a = alu_add8(gb.regs.a, 0xE0);
    goto BeginMusicTrack_Dispatch_1B_playAudio;
  BeginMusicTrack_Dispatch_1B_above40:;
    alu_cp8(gb.regs.a, 0x61);
    if (GET_FLAG_C()) { DontPlayAudio_1B(); return; };
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_C()) { DontPlayAudio_1B(); return; };
    gb.regs.a = alu_add8(gb.regs.a, 0xC0);
  BeginMusicTrack_Dispatch_1B_playAudio:;
    gb.regs.hl--;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.b = gb.regs.a;
    gb.regs.a = 1;
    gb_write(0xD3CE, gb.regs.a);
    gb.regs.a = gb.regs.b;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.b = gb.regs.a;
    gb.regs.hl = 0x4079;
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    GetMusicDataPtr_1B();
    LoadMusicData_1B();
    label_01B_42D5(); return;
}

void Data_1B_418B(void) {
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

void label_01B_42AB(void) {
    gb.regs.a = gb_read(0xD3E7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { WriteChannelRegisters(); return; };
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
  label_01B_42AB_loop_42C4:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x40);
    if (!GET_FLAG_Z()) goto label_01B_42AB_loop_42C4;
    gb.regs.a = 0x80;
    gb_write(0xFF1A, gb.regs.a);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = gb_pop16();
    WriteChannelRegisters(); return;
}

void label_01B_42D5(void) {
    gb.regs.a = gb_read(0xD369);
    gb.regs.hl = 0x418B;
  label_01B_42D5_loop_42DB:;
    gb.regs.a = alu_dec8(gb.regs.a);
    if (GET_FLAG_Z()) goto label_01B_42D5_jr_42E6;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    gb.regs.hl++;
    goto label_01B_42D5_loop_42DB;
  label_01B_42D5_jr_42E6:;
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

void func_01B_4303(void) {
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
    if (GET_FLAG_Z()) goto func_01B_4303_jr_4327;
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_01B_4303_jr_4327;
    gb.regs.c = alu_inc8(gb.regs.c);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto func_01B_4303_jr_4327;
    gb.regs.c = alu_inc8(gb.regs.c);
  func_01B_4303_jr_4327:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb_write(0xFF25, gb.regs.a);
    return;
}

void LoadSoundDefinitionData(void) {
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

void Copy2Bytes_1B(void) {
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void LoadMusicData_1B(void) {
    gb.regs.a = gb_read(0xD379);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) goto LoadMusicData_1B_jr_435E;
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto LoadMusicData_1B_jr_435E;
    alu_cp8(gb.regs.a, 0x1A);
    if (GET_FLAG_Z()) goto LoadMusicData_1B_jr_435E;
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_Z()) goto LoadMusicData_1B_jr_435E;
    alu_cp8(gb.regs.a, 0x2A);
    if (GET_FLAG_Z()) goto LoadMusicData_1B_jr_435E;
    alu_cp8(gb.regs.a, 0x2E);
    if (GET_FLAG_Z()) goto LoadMusicData_1B_jr_435E;
    alu_cp8(gb.regs.a, 0x3F);
    if (GET_FLAG_Z()) goto LoadMusicData_1B_jr_435E;
    StopNoiseChannel_1B();
  LoadMusicData_1B_jr_435E:;
    StopSquareAndWaveChannels_1B();
    gb.regs.de = 0xD300;
    gb.regs.b = 0;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    Copy2Bytes_1B();
    gb.regs.de = 0xD310;
    Copy2Bytes_1B();
    gb.regs.de = 0xD320;
    Copy2Bytes_1B();
    gb.regs.de = 0xD330;
    Copy2Bytes_1B();
    gb.regs.de = 0xD340;
    Copy2Bytes_1B();
    gb.regs.hl = 0xD310;
    gb.regs.de = wMusicChannel1_definitionPointerLow;
    LoadSoundDefinitionData();
    gb.regs.hl = 0xD320;
    gb.regs.de = wMusicChannel2_definitionPointerLow;
    LoadSoundDefinitionData();
    gb.regs.hl = 0xD330;
    gb.regs.de = wMusicChannel3_definitionPointerLow;
    LoadSoundDefinitionData();
    gb.regs.hl = 0xD340;
    gb.regs.de = wMusicChannel4_definitionPointerLow;
    LoadSoundDefinitionData();
    gb.regs.bc = 0x0410;
    gb.regs.hl = wMusicChannel1_lengthCountdown;
  LoadMusicData_1B_loop:;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.l);
    gb.regs.l = gb.regs.a;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto LoadMusicData_1B_loop;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(wMusicChannel1_lengthCounterUp, gb.regs.a);
    gb_write(wMusicChannel2_lengthCounterUp, gb.regs.a);
    gb_write(wMusicChannel3_lengthCounterUp, gb.regs.a);
    return;
}

void soundOpcode9DChannel3Handler_1B(void) {
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.e;
    gb_write(wMusicChannel3_waveformPointerLow, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(wMusicChannel3_waveformPointerHigh, gb.regs.a);
    gb.regs.a = gb_read(0xD371);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto soundOpcode9DChannel3Handler_1B_nextOpcode;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF1A, gb.regs.a);
    gb.regs.l = gb.regs.e;
    gb.regs.h = gb.regs.d;
    SetWaveform_1B();
  soundOpcode9DChannel3Handler_1B_nextOpcode:;
    gb.regs.hl = gb_pop16();
    soundOpcode9D_nextOpcode(); return;
}

void soundOpcode9D(void) {
    IncChannelDefinitionPointer();
    ReadSoundPointerByte();
    gb.regs.e = gb.regs.a;
    IncChannelDefinitionPointer();
    ReadSoundPointerByte();
    gb.regs.d = gb.regs.a;
    IncChannelDefinitionPointer();
    ReadSoundPointerByte();
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
    if (GET_FLAG_Z()) { soundOpcode9DChannel3Handler_1B(); return; };
  soundOpcode9D_nextOpcode:;
    IncChannelDefinitionPointer();
    ParseSoundOpcode(); return;
}

void IncChannelDefinitionPointer(void) {
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb.regs.d = gb.regs.a;
    gb.regs.de++;
}

void saveSoundPointer(void) {
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl--, gb.regs.a);
    gb.regs.de = gb_pop16();
    return;
}

void IncrementPointerBy2(void) {
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb.regs.d = gb.regs.a;
    gb.regs.de++;
    gb.regs.de++;
    saveSoundPointer(); return;
}

void ReadSoundPointerByte(void) {
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl--);
    gb.regs.b = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.b = gb.regs.a;
    return;
}

void jr_01B_4427(void) {
    gb.regs.hl = gb_pop16();
    UpdateNextMusicChannelAfterHlDecrement(); return;
}

void label_01B_442A(void) {
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto label_01B_442A_channel3Done;
    gb.regs.a = gb_read(wMusicChannel3_volumeEffect);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto label_01B_442A_channel3Done;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto label_01B_442A_channel3Done;
    gb.regs.a = 0x40;
    gb_write(0xFF1C, gb.regs.a);
  label_01B_442A_channel3Done:;
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 9);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_01B_4427(); return; };
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.l = gb.regs.a;
    alu_bit(7, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_01B_4427(); return; };
    gb.regs.hl = gb_pop16();
    func_01B_46FE();
    gb_push16(gb.regs.hl);
    func_01B_4787();
    gb.regs.hl = gb_pop16();
}

void UpdateNextMusicChannelAfterHlDecrement(void) {
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    UpdateNextMusicChannel_1B(); return;
}

void soundOpcode00(void) {
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.l = alu_dec8(gb.regs.l);
    IncrementPointerBy2();
  soundOpcode00_readNext:;
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.h;
    LoadSoundDefinitionData();
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto soundOpcode00_val00;
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto soundOpcode00_valFF;
    gb.regs.l = alu_inc8(gb.regs.l);
    ParseSoundOpcodeAfterHlIncrement(); return;
  soundOpcode00_valFF:;
    gb.regs.l = alu_dec8(gb.regs.l);
    gb_push16(gb.regs.hl);
    IncrementPointerBy2();
    ReadSoundPointerByte();
    gb.regs.e = gb.regs.a;
    IncChannelDefinitionPointer();
    ReadSoundPointerByte();
    gb.regs.d = gb.regs.a;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl--, gb.regs.a);
    goto soundOpcode00_readNext;
  soundOpcode00_val00:;
    gb.regs.a = gb_read(0xD3CA);
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { ContinueCurrentScreenMusic_1B(); return; };
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { ContinueCurrentScreenMusic_1B(); return; };
    alu_cp8(gb.regs.a, 0x25);
    if (GET_FLAG_Z()) { ContinueCurrentScreenMusic_1B(); return; };
    gb.regs.hl = 0xD369;
    gb_write(gb.regs.hl, 0);
    func_01B_410F();
    return;
}

void soundOpcode9E(void) {
    IncChannelDefinitionPointer();
    ReadSoundPointerByte();
    gb_write(0xD301, gb.regs.a);
    IncChannelDefinitionPointer();
    ReadSoundPointerByte();
    gb_write(0xD302, gb.regs.a);
    IncChannelDefinitonPointerAndParseNext(); return;
}

void soundOpcode9F(void) {
    IncChannelDefinitionPointer();
    ReadSoundPointerByte();
    gb_write(0xD300, gb.regs.a);
}

void IncChannelDefinitonPointerAndParseNext(void) {
    IncChannelDefinitionPointer();
    ParseSoundOpcode(); return;
}

void soundOpcode9B(void) {
    IncChannelDefinitionPointer();
    ReadSoundPointerByte();
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
    ParseSoundOpcode(); return;
}

void soundOpcode9C(void) {
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 0x0B);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    if (GET_FLAG_Z()) goto soundOpcode9C_doneLooping;
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
    ParseSoundOpcode(); return;
  soundOpcode9C_doneLooping:;
    gb.regs.hl = gb_pop16();
    IncChannelDefinitonPointerAndParseNext(); return;
}

void UpdateAllMusicChannels_1B(void) {
    gb.regs.hl = 0xD369;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD3CE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    func_01B_4303();
    gb.regs.a = 1;
    gb_write(0xD350, gb.regs.a);
    gb.regs.hl = 0xD310;
}

void UpdateMusicChannel_1B(void) {
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { UpdateNextMusicChannelAfterHlDecrement(); return; };
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) { label_01B_442A(); return; };
}

void ParseSoundOpcodeAfterHlIncrement(void) {
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
}

void ParseSoundOpcode(void) {
    ReadSoundPointerByte();
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) { soundOpcode00(); return; };
    alu_cp8(gb.regs.a, 0x9D);
    if (GET_FLAG_Z()) { soundOpcode9D(); return; };
    alu_cp8(gb.regs.a, 0x9E);
    if (GET_FLAG_Z()) { soundOpcode9E(); return; };
    alu_cp8(gb.regs.a, 0x9F);
    if (GET_FLAG_Z()) { soundOpcode9F(); return; };
    alu_cp8(gb.regs.a, 0x9B);
    if (GET_FLAG_Z()) { soundOpcode9B(); return; };
    alu_cp8(gb.regs.a, 0x9C);
    if (GET_FLAG_Z()) { soundOpcode9C(); return; };
    alu_cp8(gb.regs.a, 0x99);
    if (GET_FLAG_Z()) { soundOpcode99(); return; };
    alu_cp8(gb.regs.a, 0x9A);
    if (GET_FLAG_Z()) { soundOpcode9A(); return; };
    alu_cp8(gb.regs.a, 0x94);
    if (GET_FLAG_Z()) { soundOpcode94(); return; };
    alu_cp8(gb.regs.a, 0x97);
    if (GET_FLAG_Z()) { soundOpcode97(); return; };
    alu_cp8(gb.regs.a, 0x98);
    if (GET_FLAG_Z()) { soundOpcode98(); return; };
    alu_cp8(gb.regs.a, 0x96);
    if (GET_FLAG_Z()) { soundOpcode96(); return; };
    alu_cp8(gb.regs.a, 0x95);
    if (GET_FLAG_Z()) { soundOpcode95(); return; };
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) { HandleNote(); return; };
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
    if (!GET_FLAG_Z()) goto ParseSoundOpcode_jr_01B_459A;
    gb.regs.a = gb.regs.d;
    goto ParseSoundOpcode_jr_01B_45BF;
  ParseSoundOpcode_jr_01B_459A:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.e = alu_sla(gb.regs.e);
    if (GET_FLAG_C()) goto ParseSoundOpcode_jr_01B_45AB;
    gb.regs.d = gb.regs.a;
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.e = alu_sla(gb.regs.e);
    if (GET_FLAG_C()) goto ParseSoundOpcode_jr_01B_45AB;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.d);
  ParseSoundOpcode_jr_01B_45AB:;
    gb.regs.c = gb.regs.a;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto ParseSoundOpcode_jr_01B_45B1;
    gb.regs.c = 2;
  ParseSoundOpcode_jr_01B_45B1:;
    gb.regs.de = 0xD350;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD307;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.c);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
  ParseSoundOpcode_jr_01B_45BF:;
    gb.regs.hl = gb_pop16();
    gb.regs.l = alu_dec8(gb.regs.l);
    gb_write(gb.regs.hl++, gb.regs.a);
    IncChannelDefinitionPointer();
    ReadSoundPointerByte();
}

void HandleNote(void) {
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto HandleNote_skippedForChannel4;
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD3B0;
    IndexChannelArray();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de = 0xD3B6;
    IndexChannelArray();
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto HandleNote_doneChannel3Handler;
    gb.regs.de = 0xD39E;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HandleNote_jr_01B_45F8;
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD39F, gb.regs.a);
  HandleNote_jr_01B_45F8:;
    gb.regs.de = 0xD3D9;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HandleNote_doneChannel3Handler;
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3DA, gb.regs.a);
  HandleNote_doneChannel3Handler:;
    gb.regs.de = gb_pop16();
  HandleNote_skippedForChannel4:;
    gb.regs.c = gb.regs.b;
    gb.regs.b = 0;
    IncChannelDefinitionPointer();
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto HandleNote_handleChannel4Note;
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
    if (GET_FLAG_Z()) goto HandleNote_jr_01B_4644;
    gb_write(gb.regs.hl, 0);
    gb.regs.a = gb_read(0xD300);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HandleNote_jr_01B_4637;
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    alu_bit(7, gb.regs.l);
    if (GET_FLAG_Z()) goto HandleNote_jr_01B_4634;
    gb.regs.h = 0xFF;
  HandleNote_jr_01B_4634:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.b = gb.regs.h;
    gb.regs.c = gb.regs.l;
  HandleNote_jr_01B_4637:;
    gb.regs.hl = 0x4A34;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl = gb_pop16();
    goto HandleNote_label_01B_467A;
  HandleNote_jr_01B_4644:;
    gb_write(gb.regs.hl, 1);
    gb.regs.hl = gb_pop16();
    goto HandleNote_label_01B_467A;
  HandleNote_handleChannel4Note:;
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto HandleNote_noiseNoteFF;
    gb.regs.de = 0xD346;
    gb.regs.hl = 0x4AC6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
  HandleNote_jr_01B_4656:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x4B);
    if (!GET_FLAG_Z()) goto HandleNote_jr_01B_4656;
    gb.regs.c = 0x20;
    gb.regs.hl = wMusicChannel4_definitionPointerLow;
    gb.regs.b = 0;
    goto HandleNote_jr_01B_46A8;
  HandleNote_noiseNoteFF:;
    gb.regs.a = gb_read(0xD34F);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01B_46D9(); return; };
    gb.regs.a = 1;
    gb_write(0xD378, gb.regs.a);
    func_01B_4037();
    label_01B_46D9(); return;
  HandleNote_label_01B_467A:;
    gb_push16(gb.regs.hl);
    gb.regs.b = 0;
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto HandleNote_channel1;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) goto HandleNote_channel2;
    gb.regs.c = 0x1A;
    gb.regs.a = gb_read(wMusicChannel3_loopCounter);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto HandleNote_jr_01B_4696;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
  HandleNote_jr_01B_4696:;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    goto HandleNote_jr_01B_46AF;
  HandleNote_channel2:;
    gb.regs.c = 0x16;
    goto HandleNote_jr_01B_46A8;
  HandleNote_channel1:;
    gb.regs.c = 0x10;
    gb.regs.c = alu_inc8(gb.regs.c);
  HandleNote_jr_01B_46A8:;
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.e = gb.regs.a;
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb.regs.a;
  HandleNote_jr_01B_46AF:;
    gb_push16(gb.regs.hl);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto HandleNote_jr_01B_46B8;
    gb.regs.e = 8;
  HandleNote_jr_01B_46B8:;
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb_write(gb.regs.hl, 0);
    gb.regs.l = alu_inc8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01B_46D9(); return; };
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01B_42AB(); return; };
}

void WriteChannelRegisters(void) {
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

void label_01B_46D9(void) {
    gb.regs.hl = gb_pop16();
    gb.regs.l = alu_dec8(gb.regs.l);
    gb.regs.a = gb_read(gb.regs.hl--);
    gb_write(gb.regs.hl--, gb.regs.a);
    gb.regs.l = alu_dec8(gb.regs.l);
}

void UpdateNextMusicChannel_1B(void) {
    gb.regs.de = 0xD350;
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto UpdateNextMusicChannel_1B_lastChannel;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.a = 0x10;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.l);
    gb.regs.l = gb.regs.a;
    UpdateMusicChannel_1B(); return;
  UpdateNextMusicChannel_1B_lastChannel:;
    gb.regs.hl = wMusicChannel1_lengthCounterUp;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = wMusicChannel2_lengthCounterUp;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = wMusicChannel3_lengthCounterUp;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void label_01B_46FC(void) {
    gb.regs.hl = gb_pop16();
    return;
}

void func_01B_46FE(void) {
    gb_push16(gb.regs.hl);
    gb.regs.a = gb.regs.l;
    gb.regs.a = alu_add8(gb.regs.a, 6);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { jr_01B_4720(); return; };
    gb_write(0xD351, gb.regs.a);
    gb.regs.a = gb_read(0xD350);
    gb.regs.c = 0x13;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_01B_4762(); return; };
    gb.regs.c = 0x18;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_01B_4762(); return; };
    gb.regs.c = 0x1D;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01B_4762(); return; };
}

void label_01B_4720(void) {
}

void jr_01B_4720(void) {
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { label_01B_46FC(); return; };
    gb.regs.de = 0xD3B6;
    IndexChannelArray();
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_01B_4749(); return; };
    gb.regs.a = gb_read(0xD350);
    gb.regs.c = 0x13;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { label_01B_485E(); return; };
    gb.regs.c = 0x18;
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01B_485E(); return; };
    gb.regs.c = 0x1D;
    label_01B_485E(); return;
}

void label_01B_4749(void) {
    gb.regs.a = gb_read(0xD350);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { label_01B_46FC(); return; };
    gb.regs.a = gb_read(0xD39E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01B_4810(); return; };
    gb.regs.a = gb_read(0xD3D9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_01B_4998(); return; };
    label_01B_46FC(); return;
}

void jr_01B_4762(void) {
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
    if (GET_FLAG_Z()) { label_01B_48AB(); return; };
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { label_01B_4918(); return; };
    gb.regs.hl = 0xFFFF;
    gb.regs.de = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    func_01B_4884();
    label_01B_4720(); return;
}

void func_01B_4787(void) {
    gb.regs.a = gb_read(wMusicChannel1_playingRest);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_01B_4787_jr_47AE;
    gb.regs.a = gb_read(wMusicChannel1_softwareEnvelope);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_01B_4787_jr_47AE;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.b = gb.regs.a;
    gb.regs.hl = 0xD307;
    gb.regs.a = gb_read(wMusicChannel1_lengthCounterUp);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_01B_4787_jr_47AE;
    gb.regs.c = 0x12;
    gb.regs.de = wMusicChannel1_noteBaseFrequencyHigh;
    gb.regs.a = gb_read(wMusicChannel1_loopCounter);
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_01B_4787_jr_47AE;
    func_01B_47D2();
  func_01B_4787_jr_47AE:;
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
    func_01B_47D2();
    return;
}

void func_01B_47D2(void) {
    gb_push16(gb.regs.bc);
    gb.regs.b = alu_dec8(gb.regs.b);
    gb.regs.c = gb.regs.b;
    gb.regs.b = 0;
    gb.regs.hl = 0x4B85;
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

void ContinueCurrentScreenMusic_1B(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD3CE, gb.regs.a);
    gb.regs.a = gb_read(0xFFBF);
    gb_write(0xD368, gb.regs.a);
    PlayMusicTrack_1B_EntryPoint(); return;
}

void soundOpcode96(void) {
    gb.regs.a = 1;
  soundOpcode96_setD3CDAndParseNext:;
    gb_write(0xD3CD, gb.regs.a);
    IncChannelDefinitionPointer();
    ParseSoundOpcode(); return;
}

void soundOpcode95(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    soundOpcode96_setD3CDAndParseNext(); return;
}

void soundOpcode99(void) {
    gb.regs.a = 1;
  soundOpcode99_setD39EAndParseNext:;
    gb_write(0xD39E, gb.regs.a);
    IncChannelDefinitionPointer();
    ParseSoundOpcode(); return;
}

void soundOpcode9A(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD39E, gb.regs.a);
    soundOpcode99_setD39EAndParseNext(); return;
}

void label_01B_4810(void) {
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01B_46FC(); return; };
    gb.regs.bc = 0xD39F;
    func_01B_4842();
    gb.regs.c = 0x1C;
    gb.regs.b = 0x40;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_01B_483D(); return; };
    gb.regs.b = 0x60;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_01B_483D(); return; };
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { jr_01B_483D(); return; };
    gb.regs.b = 0;
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) { jr_01B_483D(); return; };
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) { label_01B_46FC(); return; };
    gb.regs.a = 2;
    gb_write(0xD39E, gb.regs.a);
}

void label_01B_483D(void) {
}

void jr_01B_483D(void) {
    gb.regs.a = gb.regs.b;
    gb_write(0xFF00 + gb.regs.c, gb.regs.a);
    label_01B_46FC(); return;
}

void func_01B_4842(void) {
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.bc, gb.regs.a);
    return;
}

void soundOpcode97(void) {
    gb.regs.de = 0xD3B6;
    IndexChannelArray();
    gb.regs.a = 1;
  soundOpcode97_setDeAndParseNext:;
    gb_write(gb.regs.de, gb.regs.a);
    IncChannelDefinitionPointer();
    ParseSoundOpcode(); return;
}

void soundOpcode98(void) {
    gb.regs.de = 0xD3B6;
    IndexChannelArray();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    soundOpcode97_setDeAndParseNext(); return;
}

void label_01B_485E(void) {
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_01B_4874(); return; };
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.hl);
    func_01B_4879();
}

void jr_01B_486A(void) {
    gb.regs.hl = 0xFF9C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    func_01B_4884();
    label_01B_46FC(); return;
}

void jr_01B_4874(void) {
    func_01B_489E();
    jr_01B_486A(); return;
}

void func_01B_4879(void) {
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

void func_01B_4884(void) {
    gb.regs.de = 0xD3A4;
    IndexChannelArray();
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

void IndexChannelArray(void) {
    gb.regs.a = gb_read(0xD350);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    return;
}

void func_01B_489E(void) {
    gb.regs.de = 0xD3A4;
    IndexChannelArray();
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.l = gb.regs.a;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.d = gb.regs.a;
    gb.regs.e = gb.regs.l;
    return;
}

void label_01B_48AB(void) {
    gb.regs.de = gb_pop16();
    gb.regs.de = 0xD3B0;
    IndexChannelArray();
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    alu_cp8(gb.regs.a, 0x19);
    if (GET_FLAG_Z()) { jr_01B_48EB(); return; };
    alu_cp8(gb.regs.a, 0x2D);
    if (GET_FLAG_Z()) { jr_01B_48E4(); return; };
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_01B_4720(); return; };
}

void jr_01B_48C3(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 0x19);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    gb.regs.de = 0x48F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    func_01B_4879();
    gb.regs.h = gb.regs.d;
    gb.regs.l = gb.regs.e;
    gb.regs.de = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    func_01B_4884();
    label_01B_4720(); return;
}

void jr_01B_48E4(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = 0x19;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    jr_01B_48C3(); return;
}

void jr_01B_48EB(void) {
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    jr_01B_48C3(); return;
}

void Data_01B_48F0(void) {
    /* data: db $00, $00, $00, $00, $00, $01, $00, $01 */;
    /* data: db $00, $02, $00, $02, $00, $00, $00, $00 */;
    /* data: db $FF, $FF, $FF, $FF, $FF, $FE, $FF, $FE */;
    /* data: db $00, $00, $00, $01, $00, $02, $00, $01 */;
    /* data: db $00, $00, $FF, $FF, $FF, $FE, $FF, $FF */;
}

void label_01B_4918(void) {
    gb.regs.de = gb_pop16();
    gb.regs.de = 0xD3D0;
    IndexChannelArray();
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    alu_cp8(gb.regs.a, 0x21);
    if (GET_FLAG_Z()) { jr_01B_4946(); return; };
}

void jr_01B_4927(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0;
    gb.regs.de = 0x494D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    func_01B_4879();
    gb.regs.h = gb.regs.d;
    gb.regs.l = gb.regs.e;
    gb.regs.de = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    func_01B_4884();
    label_01B_4720(); return;
}

void jr_01B_4946(void) {
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = 1;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    jr_01B_4927(); return;
}

void Data_01B_494D(void) {
    /* data: db $00, $08, $00, $00, $FF, $F8, $00, $00 */;
    /* data: db $00, $0A, $00, $02, $FF, $FA, $00, $02 */;
    /* data: db $00, $0C, $00, $04, $FF, $FC, $00, $04 */;
    /* data: db $00, $0A, $00, $02, $FF, $FA, $00, $02 */;
    /* data: db $00, $08, $00, $00, $FF, $F8, $00, $00 */;
    /* data: db $00, $06, $FF, $FE, $FF, $F6, $FF, $FE */;
    /* data: db $00, $04, $FF, $FC, $FF, $F4, $FF, $FC */;
    /* data: db $00, $06, $FF, $FE, $FF, $F6, $FF, $FE */;
}

void soundOpcode94(void) {
    gb.regs.a = 1;
    gb_write(0xD3D9, gb.regs.a);
    IncChannelDefinitionPointer();
    ParseSoundOpcode(); return;
}

void label_01B_4998(void) {
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { label_01B_46FC(); return; };
    gb.regs.bc = 0xD3DA;
    func_01B_4842();
    gb.regs.c = 0x1C;
    gb.regs.b = 0x60;
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { label_01B_483D(); return; };
    gb.regs.b = 0x40;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { label_01B_483D(); return; };
    gb.regs.b = 0x20;
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) { label_01B_46FC(); return; };
    gb.regs.a = 2;
    gb_write(0xD3D9, gb.regs.a);
    label_01B_483D(); return;
}

void SquareAndWaveFrequencyTable(void) {
    /* data: dw $0F00, $002C, $009C, $0106 */;
    /* data: dw $016B, $01C9, $0223, $0277 */;
    /* data: dw $02C6, $0312, $0356, $039B */;
    /* data: dw $03DA, $0416, $044E, $0483 */;
    /* data: dw $04B5, $04E5, $0511, $053B */;
    /* data: dw $0563, $0589, $05AC, $05CE */;
    /* data: dw $05ED, $060A, $0627, $0642 */;
    /* data: dw $065B, $0672, $0689, $069E */;
    /* data: dw $06B2, $06C4, $06D6, $06E7 */;
    /* data: dw $06F7, $0706, $0714, $0721 */;
    /* data: dw $072D, $0739, $0744, $074F */;
    /* data: dw $0759, $0762, $076B, $0774 */;
    /* data: dw $077B, $0783, $078A, $0790 */;
    /* data: dw $0797, $079D, $07A2, $07A7 */;
    /* data: dw $07AC, $07B1, $07B6, $07BA */;
    /* data: dw $07BE, $07C1, $07C5, $07C8 */;
    /* data: dw $07CB, $07CE, $07D1, $07D4 */;
    /* data: dw $07D6, $07D9, $07DB, $07DD */;
    /* data: dw $07DF */;
}

void NoiseFrequencyTable(void) {
    /* data: db $00 */;
    /* data: db $00, $00, $00, $00, $C0 */;
    /* data: db $09, $00, $38, $34, $C0 */;
    /* data: db $19, $00, $38, $33, $C0 */;
    /* data: db $46, $00, $13, $10, $C0 */;
    /* data: db $23, $00, $20, $40, $80 */;
    /* data: db $51, $00, $20, $07, $80 */;
    /* data: db $A1, $00, $00, $18, $80 */;
    /* data: db $F2, $00, $00, $18, $80 */;
    /* data: db $81, $00, $3A, $10, $C0 */;
    /* data: db $80, $00, $00, $10, $C0 */;
    /* data: db $57, $00, $00, $60, $80 */;
    /* data: db $01, $02, $04, $08, $10 */;
    /* data: db $20, $06, $0C, $18, $01 */;
    /* data: db $01, $01, $01, $01, $30 */;
    /* data: db $01, $03, $06, $0C, $18 */;
    /* data: db $30, $09, $12, $24, $02 */;
    /* data: db $04, $08, $01, $01, $48 */;
}

void MusicSpeedData_1b_4aaa(void) {
    /* data: db $02, $04, $08, $10, $20, $40, $0c, $18, $30, $02, $05, $03, $01, $01, $60 */;
}

void MusicSpeedData_1b_4ab9(void) {
    /* data: db $03, $05, $0a, $14, $28, $50, $0f, $1e, $3c, $02, $08, $10, $02, $01, $78 */;
}

void MusicSpeedData_1b_4ac8(void) {
    /* data: db $03, $06, $0c, $18, $30, $60, $12, $24, $48, $03, $08, $10, $02, $04, $90 */;
}

void MusicSpeedData_1b_4ad7(void) {
    /* data: db $03, $07, $0e, $1c, $38, $70, $15, $2a, $54, $04, $09, $12, $02, $01, $a8 */;
}

void MusicSpeedData_1b_4ae6(void) {
    /* data: db $04, $08, $10, $20, $40, $80, $18, $30, $60, $04, $02, $01, $01, $00, $c0 */;
}

void MusicSpeedData_1b_4af5(void) {
    /* data: db $04, $09, $12, $24, $48, $90, $1b, $36, $6c, $05, $0c, $18, $18, $06, $d8 */;
}

void MusicSpeedData_1b_4b04(void) {
    /* data: db $05, $0a, $14, $28, $50, $a0, $1e, $3c, $78, $05, $01, $01, $01, $01, $f0 */;
}

void HardcodedData_1b_4b13(void) {
    /* data: db $10, $32, $22, $47, $81, $20, $00 */;
}

void MusicMabeVillage_Channel3_rest_1C0(void) {
}

void MusicInsideBuilding_Channel3_rest_1C0(void) {
}

void MusicMrWriteHouse_Channel3_rest_1C0(void) {
}

void MusicUlrira_Channel3_rest_1C0(void) {
}

void MusicTarinBees_Channel1_rest_1C0(void) {
}

void MusicMonkeysBuildingBridge_Channel1_rest_1C0(void) {
}

void MusicTotakaUnused_Channel1_rest_1C0(void) {
}

void MusicTotakaUnused_Channel2_rest_1C0(void) {
}

void MusicFishermanUnderBridge_Channel1_rest_1C0(void) {
    /* data: dw ChannelDefinition_1b_rest_1C0 */;
    /* data: dw $ffff, MusicMabeVillage_Channel3_rest_1C0 */;
}

void ChannelDefinition_1b_rest_1C0(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
    /* data: db $00, $22, $44, $55, $66, $66, $88, $88, $aa, $aa, $cc, $cc, $04, $84, $04, $84 */;
}

void MusicObtainItem(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ab9 */;
    /* data: dw MusicObtainItem_Channel1 */;
    /* data: dw MusicObtainItem_Channel2 */;
    /* data: dw MusicObtainItem_Channel3 */;
    /* data: dw MusicObtainItem_Channel4 */;
}

void MusicObtainItem_Channel1(void) {
    /* data: dw ChannelDefinition_1b_4b51 */;
    /* data: dw $0000 */;
}

void MusicObtainItem_Channel2(void) {
    /* data: dw ChannelDefinition_1b_4b61 */;
    /* data: dw $0000 */;
}

void MusicObtainItem_Channel3(void) {
    /* data: dw ChannelDefinition_1b_4b6f */;
    /* data: dw $0000 */;
}

void MusicObtainItem_Channel4(void) {
    /* data: dw ChannelDefinition_1b_4b81 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1b_4b51(void) {
    /* TODO: set_envelope_duty $60, $21, 0, 0 */;
    /* TODO: enable_unknown1  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 10 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 14 */;
    /* TODO: note D_5 */;
    /* TODO: disable_unknown1  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4b61(void) {
    /* TODO: set_envelope_duty $80, $21, 1, 1 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 14 */;
    /* TODO: note F_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4b6f(void) {
    /* TODO: set_waveform waveform_1b_6ec1, $20 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_3 */;
    /* TODO: note G#3 */;
    /* TODO: note A_3 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 5 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4b81(void) {
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: begin_loop $1e */;
    /* TODO: notelen 0 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicRichardHouse(void) {
    /* data: db $04 */;
    /* data: dw MusicSpeedData_1b_4af5 */;
    /* data: dw MusicRichardHouse_Channel1 */;
    /* data: dw MusicRichardHouse_Channel2 */;
    /* data: dw MusicRichardHouse_Channel3 */;
    /* data: dw $0000 */;
}

void MusicRichardHouse_Channel1(void) {
    /* data: dw ChannelDefinition_1b_4bd0 */;
    /* data: dw ChannelDefinition_1b_4c0a */;
    /* data: dw ChannelDefinition_1b_4c0a */;
    /* data: dw ChannelDefinition_1b_4c0a */;
    /* data: dw ChannelDefinition_1b_4c0a */;
    /* data: dw ChannelDefinition_1b_4c0a */;
    /* data: dw ChannelDefinition_1b_4c0a */;
    /* data: dw ChannelDefinition_1b_4c0a */;
    /* data: dw ChannelDefinition_1b_4c0a */;
    /* data: dw ChannelDefinition_1b_rest_2C */;
    /* data: dw $ffff, MusicRichardHouse_Channel1 */;
}

void MusicRichardHouse_Channel2(void) {
    /* data: dw ChannelDefinition_1b_4bd5 */;
    /* data: dw ChannelDefinition_1b_4c3f */;
    /* data: dw $ffff, MusicRichardHouse_Channel2 */;
}

void MusicRichardHouse_Channel3(void) {
    /* data: dw ChannelDefinition_1b_4c05 */;
    /* data: dw ChannelDefinition_1b_4c05 */;
    /* data: dw ChannelDefinition_1b_4c05 */;
    /* data: dw ChannelDefinition_1b_4c05 */;
    /* data: dw ChannelDefinition_1b_4c05 */;
    /* data: dw ChannelDefinition_1b_4c05 */;
    /* data: dw ChannelDefinition_1b_4c05 */;
    /* data: dw ChannelDefinition_1b_4c05 */;
    /* data: dw ChannelDefinition_1b_rest_2C */;
    /* data: dw $ffff, MusicRichardHouse_Channel3 */;
}

void ChannelDefinition_1b_4bd0(void) {
    /* TODO: set_envelope_duty $31, $00, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4bd5(void) {
    /* TODO: set_envelope_duty $30, $81, 2, 0 */;
    /* TODO: begin_loop $08 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 5 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note C_6 */;
    /* TODO: notelen 7 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_5 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_5 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 14 */;
    /* TODO: note A_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4c05(void) {
    /* TODO: set_waveform waveform_1b_6ed1, $40 */;
    /* TODO: enable_software_envelope  */;
}

void ChannelDefinition_1b_4c0a(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_2 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note F_2 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: note B_2 */;
    /* TODO: next_loop  */;
    /* TODO: note F_2 */;
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: note A#2 */;
    /* TODO: note E_2 */;
    /* TODO: note A#2 */;
    /* TODO: note C#3 */;
    /* TODO: note A#2 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: note G_3 */;
    /* TODO: note E_3 */;
    /* TODO: note F_3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note A_2 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_2 */;
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: note A#2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_2 */;
    /* TODO: note A#2 */;
    /* TODO: note C#3 */;
    /* TODO: note A#2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note F_2 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4c3f(void) {
    /* TODO: set_envelope_duty $61, $00, 2, 0 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 12 */;
    /* TODO: rest  */;
    /* TODO: notelen 13 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 12 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note A_2 */;
    /* TODO: disable_unknown2  */;
    /* TODO: notelen 12 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 13 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 12 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_3 */;
    /* TODO: note G_3 */;
    /* TODO: note E_3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 12 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 13 */;
    /* TODO: note G_3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 12 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_2C(void) {
    /* TODO: begin_loop $0b */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicFileSelectTotaka(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ae6 */;
    /* data: dw MusicFileSelectTotaka_Channel1 */;
    /* data: dw MusicFileSelectTotaka_Channel2 */;
    /* data: dw MusicFileSelectTotaka_Channel3 */;
    /* data: dw MusicFileSelectTotaka_Channel4 */;
}

void MusicFileSelectTotaka_Channel1(void) {
    /* data: dw ChannelDefinition_1b_4ca5 */;
}

void MusicLoop_1b_4c87(void) {
    /* data: dw ChannelDefinition_1b_4cde */;
    /* data: dw $ffff, MusicLoop_1b_4c87 */;
}

void MusicFileSelectTotaka_Channel2(void) {
    /* data: dw ChannelDefinition_1b_4cb2 */;
}

void MusicLoop_1b_4c8f(void) {
    /* data: dw ChannelDefinition_1b_4cef */;
    /* data: dw $ffff, MusicLoop_1b_4c8f */;
}

void MusicFileSelectTotaka_Channel3(void) {
    /* data: dw ChannelDefinition_1b_4cbf */;
}

void MusicLoop_1b_4c97(void) {
    /* data: dw ChannelDefinition_1b_4d3f */;
    /* data: dw $ffff, MusicLoop_1b_4c97 */;
}

void MusicFileSelectTotaka_Channel4(void) {
    /* data: dw ChannelDefinition_1b_4ccc */;
}

void MusicLoop_1b_4c9f(void) {
    /* data: dw ChannelDefinition_1b_4d88 */;
    /* data: dw $ffff, MusicLoop_1b_4c9f */;
}

void ChannelDefinition_1b_4ca5(void) {
    /* TODO: set_envelope_duty $60, $00, 1, 1 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: note D#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4cb2(void) {
    /* TODO: set_envelope_duty $40, $00, 0, 1 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: note D_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4cbf(void) {
    /* TODO: set_waveform waveform_1b_4d2f, $20 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: note A_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4ccc(void) {
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
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

void ChannelDefinition_1b_4cde(void) {
    /* TODO: set_envelope_duty $22, $00, 2, 0 */;
    /* TODO: enable_unknown2  */;
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_4 */;
    /* TODO: note E_5 */;
    /* TODO: note C_5 */;
    /* TODO: note A_4 */;
    /* TODO: note B_5 */;
    /* TODO: note G_5 */;
    /* TODO: note E_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4cef(void) {
    /* TODO: set_envelope_duty $81, $00, 1, 0 */;
    /* TODO: notelen 6 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 0 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: note F_4 */;
    /* TODO: note D_4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 0 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 6 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $61, $00, 2, 0 */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: disable_unknown2  */;
    /* TODO: end_def  */;
}

void waveform_1b_4d2f(void) {
    /* data: db $8a, $df, $da, $86, $31, $01, $36, $86, $8a, $df, $da, $86, $31, $01, $36, $86 */;
}

void ChannelDefinition_1b_4d3f(void) {
    /* TODO: set_waveform waveform_1b_4d2f, $20 */;
    /* TODO: enable_unknown2  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 10 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 10 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 10 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 10 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4d88(void) {
    /* TODO: begin_loop $07 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_5 */;
    /* TODO: end_def  */;
}

void MusicChristineHouse(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ab9 */;
    /* data: dw MusicChristineHouse_Channel1 */;
    /* data: dw MusicChristineHouse_Channel2 */;
    /* data: dw MusicChristineHouse_Channel3 */;
    /* data: dw $0000 */;
}

void MusicChristineHouse_Channel1(void) {
    /* data: dw ChannelDefinition_1b_4dc9 */;
    /* data: dw $ffff, MusicChristineHouse_Channel1 */;
}

void MusicChristineHouse_Channel2(void) {
    /* data: dw ChannelDefinition_1b_4ddf */;
    /* data: dw $ffff, MusicChristineHouse_Channel2 */;
}

void MusicChristineHouse_Channel3(void) {
    /* data: dw ChannelDefinition_1b_4e15 */;
    /* data: dw $ffff, MusicChristineHouse_Channel3 */;
}

void ChannelDefinition_1b_4dc9(void) {
    /* TODO: set_envelope_duty $43, $00, 2, 0 */;
    /* TODO: notelen 7 */;
    /* TODO: note C#4 */;
    /* TODO: note C#4 */;
    /* TODO: note C#4 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note G#3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_4ddf(void) {
    /* TODO: set_envelope_duty $40, $21, 2, 0 */;
    /* TODO: notelen 8 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_3 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 14 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void waveform_1b_4e05(void) {
    /* data: db $44, $44, $44, $42, $00, $00, $00, $00, $44, $44, $44, $42, $00, $00, $00, $00 */;
}

void ChannelDefinition_1b_4e15(void) {
    /* TODO: set_waveform waveform_1b_4e05, $20 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 7 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note G#3 */;
    /* TODO: note G#3 */;
    /* TODO: note G#3 */;
    /* TODO: note G#3 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: note F#3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: end_def  */;
}

void label_01B_4E2C(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD379, gb.regs.a);
    gb_write(0xD34F, gb.regs.a);
    gb_write(0xD398, gb.regs.a);
    gb_write(0xD393, gb.regs.a);
    gb_write(0xD3C9, gb.regs.a);
    gb_write(0xD3A3, gb.regs.a);
    gb_write(0xD3E5, gb.regs.a);
    gb.regs.a = 8;
    gb_write(0xFF21, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xFF23, gb.regs.a);
}

void label_01B_4E4A(void) {
    gb.regs.a = 0xFF;
    gb_write(0xFF25, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xD355, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD369, gb.regs.a);
}

void StopSquareAndWaveChannels_1B(void) {
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

void MusicTotakaUnused(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ae6 */;
    /* data: dw MusicTotakaUnused_Channel1_rest_1C0 */;
    /* data: dw MusicTotakaUnused_Channel2_rest_1C0 */;
    /* data: dw MusicTotakaUnused_Channel3 */;
    /* data: dw $0000 */;
}

void MusicTotakaUnused_Channel3(void) {
    /* data: dw ChannelDefinition_1b_500f */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1b_500f(void) {
    /* TODO: set_waveform waveform_1b_6f01, $01 */;
    /* TODO: unknownop_94  */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note C_4 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note C_4 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: end_def  */;
}

void MusicTitleScreen(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ac8 */;
    /* data: dw MusicTitleScreen_Channel1 */;
    /* data: dw MusicTitleScreen_Channel2 */;
    /* data: dw MusicTitleScreen_Channel3 */;
    /* data: dw $0000 */;
}

void MusicTitleScreen_Channel1(void) {
    /* data: dw ChannelDefinition_1b_rest_14 */;
}

void MusicLoop_1b_5041(void) {
    /* data: dw ChannelDefinition_1b_505b */;
    /* data: dw $ffff, MusicLoop_1b_5041 */;
}

void MusicTitleScreen_Channel2(void) {
    /* data: dw ChannelDefinition_1b_50ab */;
}

void MusicLoop_1b_5049(void) {
    /* data: dw ChannelDefinition_1b_50d9 */;
    /* data: dw $ffff, MusicLoop_1b_5049 */;
}

void MusicTitleScreen_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f60 */;
    /* data: dw ChannelDefinition_1b_513c */;
}

void MusicLoop_1b_5053(void) {
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_517e */;
    /* data: dw $ffff, MusicLoop_1b_5053 */;
}

void ChannelDefinition_1b_505b(void) {
    /* TODO: set_envelope_duty $66, $81, 2, 0 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C#5 */;
    /* TODO: note F#5 */;
    /* TODO: note G#5 */;
    /* TODO: note A#5 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#6 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C#5 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_5 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#5 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#5 */;
    /* TODO: next_loop  */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#5 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_5 */;
    /* TODO: next_loop  */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_5 */;
    /* TODO: note F_5 */;
    /* TODO: note G_5 */;
    /* TODO: note A_5 */;
    /* TODO: note A#5 */;
    /* TODO: note C_6 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_5 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_50ab(void) {
    /* TODO: set_envelope_duty $a0, $84, 2, 0 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 6 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_50d9(void) {
    /* TODO: set_envelope_duty $80, $21, 1, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note F_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note A#4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 6 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 6 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#4 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 6 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: set_envelope_duty $60, $81, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_513c(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#2 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#2 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#2 */;
    /* TODO: note C#4 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: note A_3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: note A_3 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_517e(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: note C_3 */;
    /* TODO: note C_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_3 */;
    /* TODO: note F_3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 1 */;
    /* TODO: note F_2 */;
    /* TODO: note F_2 */;
    /* TODO: note F_2 */;
    /* TODO: note F#2 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: end_def  */;
}

void MusicMinigame(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4aaa */;
    /* data: dw MusicMinigame_Channel1 */;
    /* data: dw MusicMinigame_Channel2 */;
    /* data: dw MusicMinigame_Channel3 */;
    /* data: dw $0000 */;
}

void MusicMinigame_Channel1(void) {
    /* data: dw ChannelDefinition_1b_6f7a */;
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_5241 */;
    /* data: dw ChannelDefinition_1b_5241 */;
    /* data: dw ChannelDefinition_1b_5241 */;
    /* data: dw ChannelDefinition_1b_5241 */;
    /* data: dw ChannelDefinition_1b_5241 */;
    /* data: dw ChannelDefinition_1b_5241 */;
    /* data: dw ChannelDefinition_1b_6f7f */;
    /* data: dw ChannelDefinition_1b_702a */;
    /* data: dw ChannelDefinition_1b_5241 */;
    /* data: dw ChannelDefinition_1b_5241 */;
    /* data: dw ChannelDefinition_1b_5241 */;
    /* data: dw ChannelDefinition_1b_524b */;
    /* data: dw $ffff, MusicMinigame_Channel1 */;
}

void MusicMinigame_Channel2(void) {
    /* data: dw ChannelDefinition_1b_6f84 */;
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_rest_1C_1 */;
    /* data: dw ChannelDefinition_1b_525d */;
    /* data: dw ChannelDefinition_1b_6f89 */;
    /* data: dw ChannelDefinition_1b_702a */;
    /* data: dw ChannelDefinition_1b_525d */;
    /* data: dw ChannelDefinition_1b_527a */;
    /* data: dw $ffff, MusicMinigame_Channel2 */;
}

void MusicMinigame_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f5b */;
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_527d */;
    /* data: dw ChannelDefinition_1b_527d */;
    /* data: dw ChannelDefinition_1b_527d */;
    /* data: dw ChannelDefinition_1b_527d */;
    /* data: dw ChannelDefinition_1b_527d */;
    /* data: dw ChannelDefinition_1b_527d */;
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_702a */;
    /* data: dw ChannelDefinition_1b_527d */;
    /* data: dw ChannelDefinition_1b_527d */;
    /* data: dw ChannelDefinition_1b_527d */;
    /* data: dw ChannelDefinition_1b_5288 */;
    /* data: dw $ffff, MusicMinigame_Channel3 */;
}

void ChannelDefinition_1b_5241(void) {
    /* TODO: notelen 7 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_2 */;
    /* TODO: note E_2 */;
    /* TODO: note D_2 */;
    /* TODO: note B_1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_524b(void) {
    /* TODO: notelen 7 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_2 */;
    /* TODO: note E_2 */;
    /* TODO: note D_2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_1C_1(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_525d(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: note G#3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_527a(void) {
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_527d(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 7 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#3 */;
    /* TODO: note C_3 */;
    /* TODO: note A#2 */;
    /* TODO: note G_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5288(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 7 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#3 */;
    /* TODO: note C_3 */;
    /* TODO: note A#2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicGameOver(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ae6 */;
    /* data: dw MusicGameOver_Channel1 */;
    /* data: dw MusicGameOver_Channel2 */;
    /* data: dw MusicGameOver_Channel3 */;
    /* data: dw $0000 */;
}

void MusicGameOver_Channel1(void) {
    /* data: dw ChannelDefinition_1b_52eb */;
    /* data: dw $ffff, MusicGameOver_Channel1 */;
}

void MusicGameOver_Channel2(void) {
    /* data: dw ChannelDefinition_1b_52b6 */;
    /* data: dw ChannelDefinition_1b_52bb */;
    /* data: dw $ffff, MusicGameOver_Channel2 */;
}

void MusicGameOver_Channel3(void) {
    /* data: dw ChannelDefinition_1b_rest_6 */;
}

void MusicLoop_1b_52ae(void) {
    /* data: dw ChannelDefinition_1b_5327 */;
    /* data: dw ChannelDefinition_1b_52bb */;
    /* data: dw $ffff, MusicLoop_1b_52ae */;
}

void ChannelDefinition_1b_52b6(void) {
    /* TODO: set_envelope_duty $57, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_52bb(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_5 */;
    /* TODO: note C#6 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_6 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_5 */;
    /* TODO: note C#6 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_6 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C#6 */;
    /* TODO: note B_5 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_5 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_5 */;
    /* TODO: note C#6 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_6 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_5 */;
    /* TODO: note D_6 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_6 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note F#6 */;
    /* TODO: note E_6 */;
    /* TODO: notelen 4 */;
    /* TODO: note F#6 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_52eb(void) {
    /* TODO: set_envelope_duty $37, $00, 2, 0 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_4 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_3 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_4 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C#5 */;
    /* TODO: note E_5 */;
    /* TODO: note F#5 */;
    /* TODO: note E_5 */;
    /* TODO: note F#5 */;
    /* TODO: note A_5 */;
    /* TODO: note A_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5327(void) {
    /* TODO: set_waveform waveform_1b_6f21, $20 */;
    /* TODO: end_def  */;
}

void MusicMabeVillage(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4af5 */;
    /* data: dw MusicMabeVillage_Channel1 */;
    /* data: dw MusicMabeVillage_Channel2 */;
    /* data: dw MusicMabeVillage_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicMabeVillage_Channel1(void) {
    /* data: dw ChannelDefinition_1b_5343 */;
    /* data: dw $ffff, MusicMabeVillage_Channel1 */;
}

void MusicMabeVillage_Channel2(void) {
    /* data: dw ChannelDefinition_1b_53a5 */;
    /* data: dw $ffff, MusicMabeVillage_Channel2 */;
}

void ChannelDefinition_1b_5343(void) {
    /* TODO: set_envelope_duty $52, $00, 2, 0 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_3 */;
    /* TODO: note E_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_3 */;
    /* TODO: note F#4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_3 */;
    /* TODO: note E_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_3 */;
    /* TODO: note D#4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note A_3 */;
    /* TODO: note E_4 */;
    /* TODO: next_loop  */;
    /* TODO: note D_4 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: note D_3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note C_3 */;
    /* TODO: note G_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note C_3 */;
    /* TODO: note A_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note B_2 */;
    /* TODO: note A_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note E_3 */;
    /* TODO: note B_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note A_2 */;
    /* TODO: note E_3 */;
    /* TODO: next_loop  */;
    /* TODO: note A_2 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: set_envelope_duty $40, $00, 2, 0 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: set_speed MusicSpeedData_1b_4b04 */;
    /* TODO: notelen 4 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_2 */;
    /* TODO: set_envelope_duty $52, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: set_speed MusicSpeedData_1b_4af5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_53a5(void) {
    /* TODO: set_envelope_duty $56, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_5 */;
    /* TODO: note A_5 */;
    /* TODO: note G_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_5 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_4 */;
    /* TODO: set_envelope_duty $42, $00, 2, 0 */;
    /* TODO: note F#4 */;
    /* TODO: set_envelope_duty $56, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_5 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: note D_5 */;
    /* TODO: note F#4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: begin_loop $04 */;
    /* TODO: note D_4 */;
    /* TODO: note D_5 */;
    /* TODO: next_loop  */;
    /* TODO: set_speed MusicSpeedData_1b_4b04 */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: note D_6 */;
    /* TODO: next_loop  */;
    /* TODO: set_speed MusicSpeedData_1b_4af5 */;
    /* TODO: end_def  */;
}

void MusicOverworld(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ac8 */;
    /* data: dw MusicOverworld_Channel1 */;
    /* data: dw MusicOverworld_Channel2 */;
    /* data: dw MusicOverworld_Channel3 */;
    /* data: dw $0000 */;
}

void MusicOverworld_Channel1(void) {
    /* data: dw ChannelDefinition_1b_5446 */;
}

void MusicLoop_1b_5412(void) {
    /* data: dw ChannelDefinition_1b_5471 */;
    /* data: dw ChannelDefinition_1b_54bc */;
    /* data: dw ChannelDefinition_1b_5471 */;
    /* data: dw ChannelDefinition_1b_54e9 */;
    /* data: dw $ffff, MusicLoop_1b_5412 */;
}

void MusicOverworld_Channel2(void) {
    /* data: dw ChannelDefinition_1b_5562 */;
}

void MusicLoop_1b_5420(void) {
    /* data: dw ChannelDefinition_1b_558f */;
    /* data: dw ChannelDefinition_1b_55c4 */;
    /* data: dw ChannelDefinition_1b_558f */;
    /* data: dw ChannelDefinition_1b_55e8 */;
    /* data: dw $ffff, MusicLoop_1b_5420 */;
}

void MusicOverworld_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_5664 */;
}

void MusicLoop_1b_5430(void) {
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_568d */;
    /* data: dw ChannelDefinition_1b_56af */;
    /* data: dw ChannelDefinition_1b_568d */;
    /* data: dw ChannelDefinition_1b_56dd */;
    /* data: dw ChannelDefinition_1b_6f46 */;
    /* data: dw ChannelDefinition_1b_56ea */;
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_56f7 */;
    /* data: dw $ffff, MusicLoop_1b_5430 */;
}

void ChannelDefinition_1b_5446(void) {
    /* TODO: set_envelope_duty $45, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note A_2 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#3 */;
    /* TODO: note D#3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: set_envelope_duty $40, $21, 2, 1 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5471(void) {
    /* TODO: set_envelope_duty $45, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 6 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note F_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#3 */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: rest  */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_3 */;
    /* TODO: note D#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_54bc(void) {
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_3 */;
    /* TODO: note F_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: set_envelope_duty $40, $21, 1, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_54e9(void) {
    /* TODO: set_envelope_duty $45, $00, 2, 0 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: note G_3 */;
    /* TODO: set_envelope_duty $70, $21, 2, 0 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_4 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note F#3 */;
    /* TODO: note E_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $50, $21, 2, 1 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_4 */;
    /* TODO: rest  */;
    /* TODO: note A#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_3 */;
    /* TODO: rest  */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note F#3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note C_4 */;
    /* TODO: rest  */;
    /* TODO: note D#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $40, $21, 1, 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5562(void) {
    /* TODO: set_envelope_duty $55, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_3 */;
    /* TODO: note D_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note F_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note A#3 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: set_envelope_duty $50, $21, 2, 1 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: note A_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_558f(void) {
    /* TODO: set_envelope_duty $65, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: note F_4 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: rest  */;
    /* TODO: note D#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_55c4(void) {
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: set_envelope_duty $60, $21, 0, 1 */;
    /* TODO: notelen 13 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note E_3 */;
    /* TODO: note E_3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_55e8(void) {
    /* TODO: set_envelope_duty $45, $00, 2, 0 */;
    /* TODO: notelen 10 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: set_envelope_duty $40, $00, 2, 1 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_4 */;
    /* TODO: set_envelope_duty $70, $21, 1, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 10 */;
    /* TODO: note A_4 */;
    /* TODO: rest  */;
    /* TODO: note F_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note F#3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note A#4 */;
    /* TODO: rest  */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: note A#3 */;
    /* TODO: note G_4 */;
    /* TODO: note G#4 */;
    /* TODO: rest  */;
    /* TODO: note A#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F_5 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 5 */;
    /* TODO: note D_5 */;
    /* TODO: set_envelope_duty $40, $21, 1, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 13 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5664(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#3 */;
    /* TODO: note D#3 */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_568d(void) {
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note F_2 */;
    /* TODO: note F_2 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_2 */;
    /* TODO: note F_2 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#2 */;
    /* TODO: note D#2 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#2 */;
    /* TODO: note D#2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 10 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_56af(void) {
    /* TODO: note G#2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_2 */;
    /* TODO: note F#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_56dd(void) {
    /* TODO: notelen 3 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G#3 */;
    /* TODO: note G#3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note G#3 */;
    /* TODO: note G#3 */;
    /* TODO: note G#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_56ea(void) {
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_3 */;
    /* TODO: note C_3 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_56f7(void) {
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: note G_3 */;
    /* TODO: rest  */;
    /* TODO: note D#2 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#3 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#2 */;
    /* TODO: note D#2 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 6 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#2 */;
    /* TODO: note G_2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#2 */;
    /* TODO: note D#2 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G#2 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note D#3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note A#2 */;
    /* TODO: note A_2 */;
    /* TODO: end_def  */;
}

void MusicTalTalRange(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ac8 */;
    /* data: dw MusicTalTalRange_Channel1 */;
    /* data: dw MusicTalTalRange_Channel2 */;
    /* data: dw MusicTalTalRange_Channel3 */;
    /* data: dw MusicTalTalRange_Channel4 */;
}

void MusicTalTalRange_Channel1(void) {
    /* data: dw ChannelDefinition_1b_6f98 */;
    /* data: dw ChannelDefinition_1b_57d3 */;
    /* data: dw ChannelDefinition_1b_57d3 */;
}

void MusicLoop_1b_5769(void) {
    /* data: dw ChannelDefinition_1b_6f98 */;
    /* data: dw ChannelDefinition_1b_57f8 */;
    /* data: dw ChannelDefinition_1b_5816 */;
    /* data: dw ChannelDefinition_1b_6f98 */;
    /* data: dw ChannelDefinition_1b_57f8 */;
    /* data: dw ChannelDefinition_1b_7027 */;
    /* data: dw ChannelDefinition_1b_6f7a */;
    /* data: dw ChannelDefinition_1b_57f8 */;
    /* data: dw ChannelDefinition_1b_6f9d */;
    /* data: dw ChannelDefinition_1b_57f8 */;
    /* data: dw ChannelDefinition_1b_5816 */;
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_6f98 */;
    /* data: dw ChannelDefinition_1b_57f8 */;
    /* data: dw ChannelDefinition_1b_57f8 */;
    /* data: dw $ffff, MusicLoop_1b_5769 */;
}

void MusicTalTalRange_Channel2(void) {
    /* data: dw ChannelDefinition_1b_rest_14 */;
    /* data: dw ChannelDefinition_1b_586f */;
}

void MusicLoop_1b_5791(void) {
    /* data: dw ChannelDefinition_1b_6fa2 */;
    /* data: dw ChannelDefinition_1b_588e */;
    /* data: dw ChannelDefinition_1b_rest_14 */;
    /* data: dw ChannelDefinition_1b_rest_14 */;
    /* data: dw ChannelDefinition_1b_6fa7 */;
    /* data: dw ChannelDefinition_1b_588e */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_rest_14 */;
    /* data: dw ChannelDefinition_1b_591b */;
    /* data: dw $ffff, MusicLoop_1b_5791 */;
}

void MusicTalTalRange_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f55 */;
    /* data: dw ChannelDefinition_1b_5926 */;
}

void MusicLoop_1b_57ab(void) {
    /* data: dw ChannelDefinition_1b_6f6b */;
    /* data: dw ChannelDefinition_1b_5933 */;
    /* data: dw ChannelDefinition_1b_597f */;
    /* data: dw ChannelDefinition_1b_rest_14 */;
    /* data: dw ChannelDefinition_1b_rest_32 */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_597f */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_rest_14 */;
    /* data: dw ChannelDefinition_1b_rest_14 */;
    /* data: dw $ffff, MusicLoop_1b_57ab */;
}

void MusicTalTalRange_Channel4(void) {
    /* data: dw ChannelDefinition_1b_5994 */;
}

void MusicLoop_1b_57c5(void) {
    /* data: dw ChannelDefinition_1b_59a1 */;
    /* data: dw ChannelDefinition_1b_59b8 */;
    /* data: dw ChannelDefinition_1b_59c2 */;
    /* data: dw ChannelDefinition_1b_59b8 */;
    /* data: dw ChannelDefinition_1b_59d9 */;
    /* data: dw $ffff, MusicLoop_1b_57c5 */;
}

void ChannelDefinition_1b_57d3(void) {
    /* TODO: set_envelope_duty $33, $00, 2, 0 */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_4 */;
    /* TODO: note F_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_57f8(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: note D_3 */;
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note G_2 */;
    /* TODO: note E_3 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note G_2 */;
    /* TODO: note F_3 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note G_2 */;
    /* TODO: note E_3 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5816(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: note D#2 */;
    /* TODO: note D_3 */;
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note F_2 */;
    /* TODO: note C_3 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note F_2 */;
    /* TODO: note D_3 */;
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_2 */;
    /* TODO: note E_3 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note A_2 */;
    /* TODO: note F#3 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note G_2 */;
    /* TODO: note D_3 */;
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note G#2 */;
    /* TODO: note D#3 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note G_2 */;
    /* TODO: note D_3 */;
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note E_2 */;
    /* TODO: note D_3 */;
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: note G#2 */;
    /* TODO: note D#3 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $50, $26, 0, 1 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_586f(void) {
    /* TODO: set_envelope_duty $40, $26, 1, 1 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 5 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 5 */;
    /* TODO: note D_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_588e(void) {
    /* TODO: notelen 6 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note E_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 5 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note D_4 */;
    /* TODO: note A#4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note D_5 */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 13 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 5 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: note F_5 */;
    /* TODO: note D#5 */;
    /* TODO: note D_5 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 6 */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 5 */;
    /* TODO: note G_4 */;
    /* TODO: note G_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_591b(void) {
    /* TODO: set_envelope_duty $56, $00, 2, 0 */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: note A_6 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5926(void) {
    /* TODO: begin_loop $1f */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: next_loop  */;
    /* TODO: rest  */;
    /* TODO: note C_2 */;
    /* TODO: note A#1 */;
    /* TODO: note A_1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5933(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: next_loop  */;
    /* TODO: note G_2 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note A#2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 4 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_2 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 4 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 4 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#2 */;
    /* TODO: note D_3 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: disable_software_envelope  */;
    /* TODO: note D_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_597f(void) {
    /* TODO: notelen 6 */;
    /* TODO: note G_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 6 */;
    /* TODO: note F_2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 6 */;
    /* TODO: note D#2 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 6 */;
    /* TODO: note F_2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5994(void) {
    /* TODO: begin_loop $1f */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_3 */;
    /* TODO: note NOISE_3 */;
    /* TODO: next_loop  */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_59a1(void) {
    /* TODO: begin_loop $0d */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_59b8(void) {
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_59c2(void) {
    /* TODO: begin_loop $17 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_59d9(void) {
    /* TODO: begin_loop $0c */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicShop(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4b04 */;
    /* data: dw MusicShop_Channel1 */;
    /* data: dw MusicShop_Channel2 */;
    /* data: dw MusicShop_Channel3 */;
    /* data: dw $0000 */;
}

void MusicShop_Channel1(void) {
    /* data: dw ChannelDefinition_1b_5a0f */;
    /* data: dw $ffff, MusicShop_Channel1 */;
}

void MusicShop_Channel2(void) {
    /* data: dw ChannelDefinition_1b_5a3f */;
    /* data: dw $ffff, MusicShop_Channel2 */;
}

void MusicShop_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f46 */;
    /* data: dw ChannelDefinition_1b_5a7a */;
    /* data: dw $ffff, MusicShop_Channel3 */;
}

void ChannelDefinition_1b_5a0f(void) {
    /* TODO: set_envelope_duty $44, $00, 2, 0 */;
    /* TODO: disable_unknown2  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_6 */;
    /* TODO: note G_6 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_6 */;
    /* TODO: note G_6 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $24, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: note A#4 */;
    /* TODO: note B_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note G#4 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: enable_unknown2  */;
    /* TODO: notelen 1 */;
    /* TODO: note G_6 */;
    /* TODO: note G_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5a3f(void) {
    /* TODO: set_envelope_duty $50, $84, 0, 0 */;
    /* TODO: notelen 6 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#5 */;
    /* TODO: note C_5 */;
    /* TODO: note G#4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_5 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: set_envelope_duty $24, $00, 0, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note D#5 */;
    /* TODO: note D_5 */;
    /* TODO: note C#5 */;
    /* TODO: note D_5 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: note A#4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note G#4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5a7a(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note C#4 */;
    /* TODO: note F#4 */;
    /* TODO: note C#4 */;
    /* TODO: note D_3 */;
    /* TODO: note C_4 */;
    /* TODO: note F_4 */;
    /* TODO: note C_4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicRaftRideRapids(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ad7 */;
    /* data: dw MusicRaftRideRapids_Channel1 */;
    /* data: dw MusicRaftRideRapids_Channel2 */;
    /* data: dw MusicRaftRideRapids_Channel3 */;
    /* data: dw MusicRaftRideRapids_Channel4 */;
}

void MusicRaftRideRapids_Channel1(void) {
    /* data: dw ChannelDefinition_1b_702a */;
    /* data: dw ChannelDefinition_1b_rest_5_1 */;
    /* data: dw ChannelDefinition_1b_6fb1 */;
    /* data: dw ChannelDefinition_1b_5af9 */;
    /* data: dw ChannelDefinition_1b_6fac */;
    /* data: dw ChannelDefinition_1b_5af9 */;
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_5ae0 */;
    /* data: dw ChannelDefinition_1b_702a */;
    /* data: dw ChannelDefinition_1b_5ae0 */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw $ffff, MusicRaftRideRapids_Channel1 */;
}

void MusicRaftRideRapids_Channel2(void) {
    /* data: dw ChannelDefinition_1b_6fb1 */;
    /* data: dw ChannelDefinition_1b_5b21 */;
    /* data: dw ChannelDefinition_1b_6fac */;
    /* data: dw ChannelDefinition_1b_5b28 */;
    /* data: dw ChannelDefinition_1b_5b00 */;
    /* data: dw ChannelDefinition_1b_5b00 */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw $ffff, MusicRaftRideRapids_Channel2 */;
}

void MusicRaftRideRapids_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_5b2f */;
    /* data: dw ChannelDefinition_1b_5b45 */;
    /* data: dw ChannelDefinition_1b_5b2f */;
    /* data: dw ChannelDefinition_1b_5b45 */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw $ffff, MusicRaftRideRapids_Channel3 */;
}

void MusicRaftRideRapids_Channel4(void) {
    /* data: dw ChannelDefinition_1b_5b68 */;
    /* data: dw ChannelDefinition_1b_5b5a */;
    /* data: dw ChannelDefinition_1b_5b68 */;
    /* data: dw $ffff, MusicRaftRideRapids_Channel4 */;
}

void ChannelDefinition_1b_5ae0(void) {
    /* TODO: set_envelope_duty $33, $00, 2, 0 */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5af9(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5b00(void) {
    /* TODO: set_envelope_duty $40, $81, 2, 0 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 7 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 7 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note D#6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5b21(void) {
    /* TODO: begin_loop $0c */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5b28(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5b2f(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note G#2 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note F_2 */;
    /* TODO: note F#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5b45(void) {
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note G#2 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note D_3 */;
    /* TODO: note G_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5b5a(void) {
    /* TODO: begin_loop $08 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5b68(void) {
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_9 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: end_def  */;
}

void MusicMysteriousForest(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4b04 */;
    /* data: dw MusicMysteriousForest_Channel1 */;
    /* data: dw MusicMysteriousForest_Channel2 */;
    /* data: dw MusicMysteriousForest_Channel3 */;
    /* data: dw MusicMysteriousForest_Channel4 */;
}

void MusicMysteriousForest_Channel1(void) {
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
}

void MusicLoop_1b_5b8a(void) {
    /* data: dw ChannelDefinition_1b_5bae */;
    /* data: dw ChannelDefinition_1b_5bae */;
    /* data: dw ChannelDefinition_1b_5bbe */;
    /* data: dw $ffff, MusicLoop_1b_5b8a */;
}

void MusicMysteriousForest_Channel2(void) {
    /* data: dw ChannelDefinition_1b_5bd3 */;
}

void MusicLoop_1b_5b96(void) {
    /* data: dw ChannelDefinition_1b_5bf4 */;
    /* data: dw $ffff, MusicLoop_1b_5b96 */;
}

void MusicMysteriousForest_Channel3(void) {
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
}

void MusicLoop_1b_5b9e(void) {
    /* data: dw ChannelDefinition_1b_6f6b */;
    /* data: dw ChannelDefinition_1b_5c26 */;
    /* data: dw ChannelDefinition_1b_5c44 */;
    /* data: dw $ffff, MusicLoop_1b_5b9e */;
}

void MusicMysteriousForest_Channel4(void) {
    /* data: dw ChannelDefinition_1b_5c61 */;
    /* data: dw $ffff, MusicMysteriousForest_Channel4 */;
}

void ChannelDefinition_1b_5bae(void) {
    /* TODO: set_envelope_duty $23, $00, 2, 0 */;
    /* TODO: begin_loop $20 */;
    /* TODO: notelen 0 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $20 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5bbe(void) {
    /* TODO: begin_loop $20 */;
    /* TODO: note A#4 */;
    /* TODO: note F_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $20 */;
    /* TODO: note A_4 */;
    /* TODO: note E_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $20 */;
    /* TODO: note A#4 */;
    /* TODO: note D#4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $20 */;
    /* TODO: note A_4 */;
    /* TODO: note E_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5bd3(void) {
    /* TODO: set_envelope_duty $81, $82, 0, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_1 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F_1 */;
    /* TODO: note F#1 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_1 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F_1 */;
    /* TODO: note F#1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5bf4(void) {
    /* TODO: set_envelope_duty $40, $00, 2, 1 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 0 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_5 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 6 */;
    /* TODO: note D#5 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#4 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $30, $00, 0, 1 */;
    /* TODO: notelen 5 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: note F#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5c26(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F_2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F#2 */;
    /* TODO: note G_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5c44(void) {
    /* TODO: notelen 2 */;
    /* TODO: note G#2 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F#2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F_2 */;
    /* TODO: note F#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5c61(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_9 */;
    /* TODO: next_loop  */;
    /* TODO: note NOISE_FF */;
    /* TODO: begin_loop $05 */;
    /* TODO: note NOISE_9 */;
    /* TODO: next_loop  */;
    /* TODO: note NOISE_FF */;
    /* TODO: begin_loop $05 */;
    /* TODO: note NOISE_9 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicInsideBuilding(void) {
    /* data: db $04 */;
    /* data: dw MusicSpeedData_1b_4ae6 */;
    /* data: dw MusicInsideBuilding_Channel1 */;
    /* data: dw MusicInsideBuilding_Channel2 */;
    /* data: dw MusicInsideBuilding_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicInsideBuilding_Channel1(void) {
    /* data: dw ChannelDefinition_1b_702d */;
    /* data: dw ChannelDefinition_1b_rest_6 */;
}

void MusicLoop_1b_5c80(void) {
    /* data: dw ChannelDefinition_1b_5c8e */;
    /* data: dw $ffff, MusicLoop_1b_5c80 */;
}

void MusicInsideBuilding_Channel2(void) {
    /* data: dw ChannelDefinition_1b_7032 */;
    /* data: dw ChannelDefinition_1b_5c8e */;
    /* data: dw $ffff, MusicInsideBuilding_Channel2 */;
}

void ChannelDefinition_1b_5c8e(void) {
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note F_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: note A_3 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note G_5 */;
    /* TODO: note F_5 */;
    /* TODO: note C_5 */;
    /* TODO: note D_3 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note A#4 */;
    /* TODO: note A_4 */;
    /* TODO: note A_4 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note G_3 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note F_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: note A_3 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_5 */;
    /* TODO: note G_5 */;
    /* TODO: note G_5 */;
    /* TODO: note D_3 */;
    /* TODO: note A_3 */;
    /* TODO: note F#5 */;
    /* TODO: note D#5 */;
    /* TODO: note D_5 */;
    /* TODO: note C_5 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note A#4 */;
    /* TODO: note A_4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note F_4 */;
    /* TODO: note A#3 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note A_5 */;
    /* TODO: note G_5 */;
    /* TODO: note A_3 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note E_5 */;
    /* TODO: note D_5 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note C#5 */;
    /* TODO: note C_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note C_5 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: note G_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 7 */;
    /* TODO: note C_6 */;
    /* TODO: note C_3 */;
    /* TODO: end_def  */;
}

void MusicAnimalVillage(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4b04 */;
    /* data: dw MusicAnimalVillage_Channel1 */;
    /* data: dw MusicAnimalVillage_Channel2 */;
    /* data: dw MusicAnimalVillage_Channel3 */;
    /* data: dw MusicAnimalVillage_Channel4 */;
}

void MusicAnimalVillage_Channel1(void) {
    /* data: dw ChannelDefinition_1b_rest_5_1 */;
}

void MusicLoop_1b_5d16(void) {
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_5d3e */;
    /* data: dw ChannelDefinition_1b_702a */;
    /* data: dw ChannelDefinition_1b_5d3e */;
    /* data: dw $ffff, MusicLoop_1b_5d16 */;
}

void MusicAnimalVillage_Channel2(void) {
    /* data: dw ChannelDefinition_1b_rest_5_1 */;
}

void MusicLoop_1b_5d24(void) {
    /* data: dw ChannelDefinition_1b_5d60 */;
    /* data: dw ChannelDefinition_1b_5d60 */;
    /* data: dw $ffff, MusicLoop_1b_5d24 */;
}

void MusicAnimalVillage_Channel3(void) {
    /* data: dw ChannelDefinition_1b_rest_5_1 */;
}

void MusicLoop_1b_5d2e(void) {
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_5d7b */;
    /* data: dw ChannelDefinition_1b_5d7b */;
    /* data: dw $ffff, MusicLoop_1b_5d2e */;
}

void MusicAnimalVillage_Channel4(void) {
    /* data: dw ChannelDefinition_1b_5da5 */;
    /* data: dw $ffff, MusicAnimalVillage_Channel4 */;
}

void ChannelDefinition_1b_5d3e(void) {
    /* TODO: set_envelope_duty $44, $00, 2, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5d60(void) {
    /* TODO: set_envelope_duty $64, $00, 0, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 0 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 0 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5d7b(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5da5(void) {
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_9 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_FF */;
    /* TODO: note NOISE_6 */;
    /* TODO: end_def  */;
}

void MusicFairyFountain(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ac8 */;
    /* data: dw MusicFairyFountain_Channel1 */;
    /* data: dw MusicFairyFountain_Channel2 */;
    /* data: dw MusicFairyFountain_Channel3 */;
    /* data: dw $0000 */;
}

void MusicFairyFountain_Channel1(void) {
    /* data: dw ChannelDefinition_1b_5df1 */;
    /* data: dw ChannelDefinition_1b_rest_1 */;
}

void MusicLoop_1b_5dc7(void) {
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_5df6 */;
    /* data: dw ChannelDefinition_1b_7021 */;
    /* data: dw ChannelDefinition_1b_5df6 */;
    /* data: dw $ffff, MusicLoop_1b_5dc7 */;
}

void MusicFairyFountain_Channel2(void) {
    /* data: dw ChannelDefinition_1b_7037 */;
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_5df6 */;
    /* data: dw ChannelDefinition_1b_7021 */;
    /* data: dw ChannelDefinition_1b_5df6 */;
    /* data: dw $ffff, MusicFairyFountain_Channel2 */;
}

void MusicFairyFountain_Channel3(void) {
    /* data: dw ChannelDefinition_1b_rest_6 */;
}

void MusicLoop_1b_5de3(void) {
    /* data: dw ChannelDefinition_1b_6f65 */;
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_5df6 */;
    /* data: dw ChannelDefinition_1b_7021 */;
    /* data: dw ChannelDefinition_1b_5df6 */;
    /* data: dw $ffff, MusicLoop_1b_5de3 */;
}

void ChannelDefinition_1b_5df1(void) {
    /* TODO: set_envelope_duty $44, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5df6(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note E_3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_4 */;
    /* TODO: note C#5 */;
    /* TODO: note E_5 */;
    /* TODO: note G_5 */;
    /* TODO: note B_5 */;
    /* TODO: note C#6 */;
    /* TODO: note E_6 */;
    /* TODO: note G_6 */;
    /* TODO: end_def  */;
}

void MusicTitleScreenNoIntro(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ac8 */;
    /* data: dw MusicTitleScreenNoIntro_Channel1 */;
    /* data: dw MusicTitleScreenNoIntro_Channel2 */;
    /* data: dw MusicTitleScreenNoIntro_Channel3 */;
    /* data: dw $0000 */;
}

void MusicTitleScreenNoIntro_Channel1(void) {
    /* data: dw ChannelDefinition_1b_505b */;
    /* data: dw $ffff, MusicTitleScreenNoIntro_Channel1 */;
}

void MusicTitleScreenNoIntro_Channel2(void) {
    /* data: dw ChannelDefinition_1b_50d9 */;
    /* data: dw $ffff, MusicTitleScreenNoIntro_Channel2 */;
}

void MusicTitleScreenNoIntro_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_517e */;
    /* data: dw $ffff, MusicTitleScreenNoIntro_Channel3 */;
}

void MusicBowwowKidnapped(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ab9 */;
    /* data: dw MusicBowwowKidnapped_Channel1 */;
    /* data: dw MusicBowwowKidnapped_Channel2 */;
    /* data: dw MusicBowwowKidnapped_Channel3 */;
    /* data: dw $0000 */;
}

void MusicBowwowKidnapped_Channel1(void) {
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_6f8e */;
    /* data: dw ChannelDefinition_1b_5e6e */;
    /* data: dw ChannelDefinition_1b_5e6e */;
    /* data: dw ChannelDefinition_1b_6f93 */;
    /* data: dw ChannelDefinition_1b_5e6e */;
    /* data: dw ChannelDefinition_1b_5e6e */;
    /* data: dw ChannelDefinition_1b_7021 */;
    /* data: dw ChannelDefinition_1b_6f8e */;
    /* data: dw ChannelDefinition_1b_5e6e */;
    /* data: dw ChannelDefinition_1b_5e6e */;
    /* data: dw ChannelDefinition_1b_6f93 */;
    /* data: dw ChannelDefinition_1b_5e6e */;
    /* data: dw ChannelDefinition_1b_5e6e */;
    /* data: dw $ffff, MusicBowwowKidnapped_Channel1 */;
}

void MusicBowwowKidnapped_Channel2(void) {
    /* data: dw ChannelDefinition_1b_5e78 */;
    /* data: dw ChannelDefinition_1b_5e91 */;
    /* data: dw ChannelDefinition_1b_5e78 */;
    /* data: dw ChannelDefinition_1b_5e91 */;
    /* data: dw $ffff, MusicBowwowKidnapped_Channel2 */;
}

void MusicBowwowKidnapped_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f6b */;
    /* data: dw ChannelDefinition_1b_5ea0 */;
    /* data: dw ChannelDefinition_1b_5ea0 */;
    /* data: dw ChannelDefinition_1b_6f75 */;
    /* data: dw ChannelDefinition_1b_5ea0 */;
    /* data: dw ChannelDefinition_1b_5ea0 */;
    /* data: dw $ffff, MusicBowwowKidnapped_Channel3 */;
}

void ChannelDefinition_1b_5e6e(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#2 */;
    /* TODO: note D#2 */;
    /* TODO: note D#2 */;
    /* TODO: next_loop  */;
    /* TODO: note C#2 */;
    /* TODO: note D#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5e78(void) {
    /* TODO: set_envelope_duty $70, $21, 1, 0 */;
    /* TODO: notelen 7 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5e91(void) {
    /* TODO: set_envelope_duty $20, $21, 2, 1 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 8 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#5 */;
    /* TODO: note C#6 */;
    /* TODO: notelen 8 */;
    /* TODO: note C#6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5ea0(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 7 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: end_def  */;
}

void MusicObtainSword(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ab9 */;
    /* data: dw MusicObtainSword_Channel1 */;
    /* data: dw MusicObtainSword_Channel2 */;
    /* data: dw MusicObtainSword_Channel3 */;
    /* data: dw $0000 */;
}

void MusicObtainSword_Channel1(void) {
    /* data: dw ChannelDefinition_1b_5ecc */;
    /* data: dw ChannelDefinition_1b_5ed1 */;
    /* data: dw ChannelDefinition_1b_5edb */;
    /* data: dw $0000 */;
}

void MusicObtainSword_Channel2(void) {
    /* data: dw ChannelDefinition_1b_5ed6 */;
    /* data: dw ChannelDefinition_1b_5edb */;
    /* data: dw ChannelDefinition_1b_5ed1 */;
    /* data: dw $0000 */;
}

void MusicObtainSword_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f55 */;
    /* data: dw ChannelDefinition_1b_rest_2 */;
    /* data: dw ChannelDefinition_1b_5edb */;
    /* data: dw ChannelDefinition_1b_rest_6 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1b_5ecc(void) {
    /* TODO: set_envelope_duty $26, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5ed1(void) {
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5ed6(void) {
    /* TODO: set_envelope_duty $67, $00, 2, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5edb(void) {
    /* TODO: enable_unknown1  */;
    /* TODO: notelen 1 */;
    /* TODO: note G_5 */;
    /* TODO: note F#5 */;
    /* TODO: note D_5 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: note A_5 */;
    /* TODO: note G_5 */;
    /* TODO: note E_5 */;
    /* TODO: note C_5 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: note C_4 */;
    /* TODO: note B_5 */;
    /* TODO: note A_5 */;
    /* TODO: note F#5 */;
    /* TODO: note D_5 */;
    /* TODO: note B_4 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D_4 */;
    /* TODO: note C_6 */;
    /* TODO: note B_5 */;
    /* TODO: note G_5 */;
    /* TODO: note E_5 */;
    /* TODO: note C_5 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_6 */;
    /* TODO: disable_unknown1  */;
    /* TODO: end_def  */;
}

void MusicOverworldIntro(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ac8 */;
    /* data: dw MusicOverworldIntro_Channel1 */;
    /* data: dw MusicOverworldIntro_Channel2 */;
    /* data: dw MusicOverworldIntro_Channel3 */;
    /* data: dw $0000 */;
}

void MusicOverworldIntro_Channel1(void) {
    /* data: dw ChannelDefinition_1b_5f29 */;
    /* data: dw $ffff, MusicLoop_1b_5412 */;
}

void MusicOverworldIntro_Channel2(void) {
    /* data: dw ChannelDefinition_1b_5f5c */;
    /* data: dw $ffff, MusicLoop_1b_5420 */;
}

void MusicOverworldIntro_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_5f85 */;
    /* data: dw $ffff, MusicLoop_1b_5430 */;
}

void ChannelDefinition_1b_5f29(void) {
    /* TODO: set_envelope_duty $70, $21, 2, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: note D_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note B_3 */;
    /* TODO: note B_3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: note F_3 */;
    /* TODO: note A#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C#4 */;
    /* TODO: note C#4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 8 */;
    /* TODO: note C_4 */;
    /* TODO: set_envelope_duty $40, $21, 2, 0 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note A_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5f5c(void) {
    /* TODO: set_envelope_duty $90, $21, 2, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note F_3 */;
    /* TODO: note A#3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note A#4 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note G#4 */;
    /* TODO: note G#4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 8 */;
    /* TODO: note A_4 */;
    /* TODO: set_envelope_duty $60, $21, 2, 0 */;
    /* TODO: notelen 10 */;
    /* TODO: note A_3 */;
    /* TODO: note G_3 */;
    /* TODO: note F#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5f85(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note D_4 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 10 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: note F_3 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note F_4 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note A#4 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 10 */;
    /* TODO: note A#3 */;
    /* TODO: note A#3 */;
    /* TODO: note G#3 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 10 */;
    /* TODO: note G#2 */;
    /* TODO: note G_2 */;
    /* TODO: note G#2 */;
    /* TODO: note C#3 */;
    /* TODO: note C_3 */;
    /* TODO: note C#3 */;
    /* TODO: note F_3 */;
    /* TODO: note E_3 */;
    /* TODO: note F_3 */;
    /* TODO: note G#3 */;
    /* TODO: note C#4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: end_def  */;
}

void MusicMrWriteHouse(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ae6 */;
    /* data: dw MusicMrWriteHouse_Channel1 */;
    /* data: dw MusicMrWriteHouse_Channel2 */;
    /* data: dw MusicMrWriteHouse_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicMrWriteHouse_Channel1(void) {
    /* data: dw ChannelDefinition_1b_6fb6 */;
    /* data: dw ChannelDefinition_1b_5fdc */;
    /* data: dw $ffff, MusicMrWriteHouse_Channel1 */;
}

void MusicMrWriteHouse_Channel2(void) {
    /* data: dw ChannelDefinition_1b_6fbb */;
    /* data: dw ChannelDefinition_1b_5ffe */;
    /* data: dw $ffff, MusicMrWriteHouse_Channel2 */;
}

void ChannelDefinition_1b_5fdc(void) {
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: note G_3 */;
    /* TODO: note E_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note E_2 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: note C_3 */;
    /* TODO: note D_2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note G_2 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: note F_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_5ffe(void) {
    /* TODO: notelen 4 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note F#5 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note G_5 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#4 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 5 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicUlrira(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ab9 */;
    /* data: dw MusicUlrira_Channel1 */;
    /* data: dw MusicUlrira_Channel2 */;
    /* data: dw MusicUlrira_Channel3_rest_1C0 */;
    /* data: dw $0000 */;
}

void MusicUlrira_Channel1(void) {
    /* data: dw ChannelDefinition_1b_6059 */;
    /* data: dw ChannelDefinition_1b_6065 */;
    /* data: dw ChannelDefinition_1b_rest_275 */;
    /* data: dw ChannelDefinition_1b_rest_275 */;
    /* data: dw ChannelDefinition_1b_6059 */;
    /* data: dw ChannelDefinition_1b_606a */;
    /* data: dw ChannelDefinition_1b_rest_275 */;
    /* data: dw ChannelDefinition_1b_rest_275 */;
    /* data: dw ChannelDefinition_1b_rest_275 */;
    /* data: dw $ffff, MusicUlrira_Channel1 */;
}

void MusicUlrira_Channel2(void) {
    /* data: dw ChannelDefinition_1b_607e */;
    /* data: dw ChannelDefinition_1b_608a */;
    /* data: dw ChannelDefinition_1b_606f */;
    /* data: dw ChannelDefinition_1b_606f */;
    /* data: dw ChannelDefinition_1b_607e */;
    /* data: dw ChannelDefinition_1b_6090 */;
    /* data: dw ChannelDefinition_1b_606f */;
    /* data: dw ChannelDefinition_1b_606f */;
    /* data: dw ChannelDefinition_1b_606f */;
    /* data: dw $ffff, MusicUlrira_Channel2 */;
}

void ChannelDefinition_1b_rest_275(void) {
    /* TODO: begin_loop $0c */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6059(void) {
    /* TODO: set_envelope_duty $40, $41, 2, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6065(void) {
    /* TODO: notelen 3 */;
    /* TODO: note B_2 */;
    /* TODO: note F#2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_606a(void) {
    /* TODO: notelen 3 */;
    /* TODO: note C#3 */;
    /* TODO: note G#2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_606f(void) {
    /* TODO: set_envelope_duty $42, $00, 2, 0 */;
    /* TODO: begin_loop $0c */;
    /* TODO: notelen 13 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_607e(void) {
    /* TODO: set_envelope_duty $40, $41, 2, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_2 */;
    /* TODO: note E_3 */;
    /* TODO: note E_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_608a(void) {
    /* TODO: notelen 3 */;
    /* TODO: note D#3 */;
    /* TODO: note A#2 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6090(void) {
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicTarinBees(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ad7 */;
    /* data: dw MusicTarinBees_Channel1_rest_1C0 */;
    /* data: dw MusicTarinBees_Channel2 */;
    /* data: dw MusicTarinBees_Channel3 */;
    /* data: dw $0000 */;
}

void MusicTarinBees_Channel2(void) {
    /* data: dw ChannelDefinition_1b_60c1 */;
    /* data: dw ChannelDefinition_1b_60d9 */;
    /* data: dw ChannelDefinition_1b_60d9 */;
    /* data: dw ChannelDefinition_1b_60fa */;
    /* data: dw ChannelDefinition_1b_7032 */;
    /* data: dw ChannelDefinition_1b_610f */;
    /* data: dw ChannelDefinition_1b_rest_1 */;
    /* data: dw $0000 */;
}

void MusicTarinBees_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f4b */;
    /* data: dw ChannelDefinition_1b_611d */;
    /* data: dw ChannelDefinition_1b_6129 */;
    /* data: dw ChannelDefinition_1b_6f55 */;
    /* data: dw ChannelDefinition_1b_614c */;
    /* data: dw ChannelDefinition_1b_6159 */;
    /* data: dw ChannelDefinition_1b_610f */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1b_60c1(void) {
    /* TODO: set_envelope_duty $43, $00, 2, 0 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note B_5 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C_6 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_6 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_60d9(void) {
    /* TODO: set_envelope_duty $55, $00, 0, 0 */;
    /* TODO: set_speed MusicSpeedData_1b_4ab9 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note D_5 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: note D_6 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_5 */;
    /* TODO: note F_5 */;
    /* TODO: note E_5 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_60fa(void) {
    /* TODO: set_envelope_duty $35, $00, 1, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note D_5 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: note C_5 */;
    /* TODO: note C#5 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_610f(void) {
    /* TODO: set_speed MusicSpeedData_1b_4ac8 */;
    /* TODO: notelen 0 */;
    /* TODO: note D_6 */;
    /* TODO: note C_6 */;
    /* TODO: note A#5 */;
    /* TODO: note G#5 */;
    /* TODO: note F#5 */;
    /* TODO: note E_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_611d(void) {
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note F_5 */;
    /* TODO: rest  */;
    /* TODO: note F#5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6129(void) {
    /* TODO: set_speed MusicSpeedData_1b_4ab9 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note D_3 */;
    /* TODO: note D_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G#3 */;
    /* TODO: note D#4 */;
    /* TODO: note D#3 */;
    /* TODO: note D#4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note A#3 */;
    /* TODO: note F_4 */;
    /* TODO: note F_3 */;
    /* TODO: note F_4 */;
    /* TODO: next_loop  */;
    /* TODO: note C_4 */;
    /* TODO: note G_4 */;
    /* TODO: note G_3 */;
    /* TODO: note G_4 */;
    /* TODO: note C_4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_3 */;
    /* TODO: note A_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_614c(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: note D_4 */;
    /* TODO: note D_3 */;
    /* TODO: note D_4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6159(void) {
    /* TODO: set_speed MusicSpeedData_1b_4ac8 */;
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicMamuFrogSong(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ad7 */;
    /* data: dw MusicMamuFrogSong_Channel1 */;
    /* data: dw MusicMamuFrogSong_Channel2 */;
    /* data: dw MusicMamuFrogSong_Channel3 */;
    /* data: dw $0000 */;
}

void MusicMamuFrogSong_Channel1(void) {
    /* data: dw ChannelDefinition_1b_6fc0 */;
    /* data: dw ChannelDefinition_1b_618c */;
    /* data: dw ChannelDefinition_1b_6fc5 */;
    /* data: dw ChannelDefinition_1b_619a */;
    /* data: dw ChannelDefinition_1b_619a */;
    /* data: dw $0000 */;
}

void MusicMamuFrogSong_Channel2(void) {
    /* data: dw ChannelDefinition_1b_6fc0 */;
    /* data: dw ChannelDefinition_1b_61c8 */;
    /* data: dw ChannelDefinition_1b_6fc5 */;
    /* data: dw ChannelDefinition_1b_61d6 */;
    /* data: dw ChannelDefinition_1b_61d6 */;
    /* data: dw $0000 */;
}

void MusicMamuFrogSong_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f70 */;
    /* data: dw ChannelDefinition_1b_6204 */;
    /* data: dw ChannelDefinition_1b_6211 */;
    /* data: dw ChannelDefinition_1b_6211 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1b_618c(void) {
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F#2 */;
    /* TODO: note G#2 */;
    /* TODO: note A#2 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: rest  */;
    /* TODO: note C#3 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_619a(void) {
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note C#3 */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 7 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#3 */;
    /* TODO: note G#3 */;
    /* TODO: note F#3 */;
    /* TODO: note F_3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_3 */;
    /* TODO: note F#3 */;
    /* TODO: note G#3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 7 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#4 */;
    /* TODO: note F_4 */;
    /* TODO: note D#4 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#3 */;
    /* TODO: note G#3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G#3 */;
    /* TODO: note G#3 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 5 */;
    /* TODO: note C#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_61c8(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 4 */;
    /* TODO: note D#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_61d6(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 7 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_5 */;
    /* TODO: note F#5 */;
    /* TODO: note E_5 */;
    /* TODO: note D_5 */;
    /* TODO: note C#5 */;
    /* TODO: notelen 7 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: note A_4 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: note A_4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 4 */;
    /* TODO: note D_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6204(void) {
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 1 */;
    /* TODO: note F_2 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A#2 */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: notelen 14 */;
    /* TODO: note C#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6211(void) {
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: note G_3 */;
    /* TODO: note F_3 */;
    /* TODO: note E_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note E_3 */;
    /* TODO: note F_3 */;
    /* TODO: note G_3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: next_loop  */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 14 */;
    /* TODO: note C_4 */;
    /* TODO: end_def  */;
}

void MusicMonkeysBuildingBridge(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ad7 */;
    /* data: dw MusicMonkeysBuildingBridge_Channel1_rest_1C0 */;
    /* data: dw MusicMonkeysBuildingBridge_Channel2 */;
    /* data: dw MusicMonkeysBuildingBridge_Channel3 */;
    /* data: dw $0000 */;
}

void MusicMonkeysBuildingBridge_Channel2(void) {
    /* data: dw ChannelDefinition_1b_626c */;
    /* data: dw ChannelDefinition_1b_6271 */;
    /* data: dw ChannelDefinition_1b_6fa2 */;
    /* data: dw ChannelDefinition_1b_6271 */;
    /* data: dw ChannelDefinition_1b_6282 */;
    /* data: dw ChannelDefinition_1b_6fb6 */;
    /* data: dw ChannelDefinition_1b_62ba */;
    /* data: dw $0000 */;
}

void MusicMonkeysBuildingBridge_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f55 */;
    /* data: dw ChannelDefinition_1b_62c7 */;
    /* data: dw ChannelDefinition_1b_6f4b */;
    /* data: dw ChannelDefinition_1b_62c7 */;
    /* data: dw ChannelDefinition_1b_62d9 */;
    /* data: dw ChannelDefinition_1b_6f55 */;
    /* data: dw ChannelDefinition_1b_6300 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1b_626c(void) {
    /* TODO: set_envelope_duty $40, $26, 0, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6271(void) {
    /* TODO: notelen 1 */;
    /* TODO: note B_6 */;
    /* TODO: notelen 6 */;
    /* TODO: note B_6 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_6 */;
    /* TODO: notelen 6 */;
    /* TODO: note G_6 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_6 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_6 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_6 */;
    /* TODO: notelen 6 */;
    /* TODO: note G_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6282(void) {
    /* TODO: notelen 6 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_4 */;
    /* TODO: note B_6 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_6 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_5 */;
    /* TODO: note B_6 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_62ba(void) {
    /* TODO: notelen 6 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_62c7(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 1 */;
    /* TODO: note A#6 */;
    /* TODO: notelen 6 */;
    /* TODO: note A#6 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 6 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#6 */;
    /* TODO: notelen 6 */;
    /* TODO: note C#6 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#6 */;
    /* TODO: notelen 6 */;
    /* TODO: note F#6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_62d9(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#2 */;
    /* TODO: note A#6 */;
    /* TODO: note A#6 */;
    /* TODO: note D_2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6300(void) {
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: end_def  */;
}

void MusicTurtleRockEntranceBoss(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ab9 */;
    /* data: dw MusicTurtleRockEntranceBoss_Channel1 */;
    /* data: dw MusicTurtleRockEntranceBoss_Channel2 */;
    /* data: dw MusicTurtleRockEntranceBoss_Channel3 */;
    /* data: dw MusicTurtleRockEntranceBoss_Channel4 */;
}

void MusicTurtleRockEntranceBoss_Channel1(void) {
    /* data: dw ChannelDefinition_1b_rest_14 */;
    /* data: dw ChannelDefinition_1b_6fac */;
    /* data: dw ChannelDefinition_1b_636e */;
    /* data: dw ChannelDefinition_1b_6fca */;
    /* data: dw ChannelDefinition_1b_637f */;
}

void MusicLoop_1b_632a(void) {
    /* data: dw ChannelDefinition_1b_6f8e */;
    /* data: dw ChannelDefinition_1b_7024 */;
    /* data: dw ChannelDefinition_1b_6394 */;
    /* data: dw ChannelDefinition_1b_6fd9 */;
    /* data: dw ChannelDefinition_1b_7027 */;
    /* data: dw ChannelDefinition_1b_6394 */;
    /* data: dw $ffff, MusicLoop_1b_632a */;
}

void MusicTurtleRockEntranceBoss_Channel2(void) {
    /* data: dw ChannelDefinition_1b_6fac */;
    /* data: dw ChannelDefinition_1b_63a3 */;
    /* data: dw ChannelDefinition_1b_63b2 */;
    /* data: dw ChannelDefinition_1b_6fca */;
    /* data: dw ChannelDefinition_1b_63c1 */;
}

void MusicLoop_1b_6344(void) {
    /* data: dw ChannelDefinition_1b_6fcf */;
    /* data: dw ChannelDefinition_1b_63d6 */;
    /* data: dw ChannelDefinition_1b_6fd4 */;
    /* data: dw ChannelDefinition_1b_63d6 */;
    /* data: dw $ffff, MusicLoop_1b_6344 */;
}

void MusicTurtleRockEntranceBoss_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f46 */;
    /* data: dw ChannelDefinition_1b_63e5 */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_63f4 */;
}

void MusicLoop_1b_635a(void) {
    /* data: dw ChannelDefinition_1b_6f41 */;
    /* data: dw ChannelDefinition_1b_6404 */;
    /* data: dw ChannelDefinition_1b_6404 */;
    /* data: dw $ffff, MusicLoop_1b_635a */;
}

void MusicTurtleRockEntranceBoss_Channel4(void) {
    /* data: dw ChannelDefinition_1b_rest_1C_2 */;
    /* data: dw ChannelDefinition_1b_rest_14_1 */;
}

void MusicLoop_1b_6368(void) {
    /* data: dw ChannelDefinition_1b_642e */;
    /* data: dw $ffff, MusicLoop_1b_6368 */;
}

void ChannelDefinition_1b_636e(void) {
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: note B_3 */;
    /* TODO: note A#4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_637f(void) {
    /* TODO: begin_loop $05 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_5 */;
    /* TODO: note G#5 */;
    /* TODO: note G_5 */;
    /* TODO: note F#5 */;
    /* TODO: next_loop  */;
    /* TODO: note G_5 */;
    /* TODO: note F#5 */;
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
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6394(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: note C_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_63a3(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $08 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_2 */;
    /* TODO: note D#2 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_63b2(void) {
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_5 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: note F_5 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_63c1(void) {
    /* TODO: begin_loop $05 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note G#4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: next_loop  */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: note C#4 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: note G#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_63d6(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note F#4 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: note G#4 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_63e5(void) {
    /* TODO: disable_software_envelope  */;
    /* TODO: begin_loop $10 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: note G#2 */;
    /* TODO: next_loop  */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 14 */;
    /* TODO: rest  */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_63f4(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: next_loop  */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note G#2 */;
    /* TODO: note G_2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6404(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_4 */;
    /* TODO: note C_4 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_1C_2(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_14_1(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_642e(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $08 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicFishermanUnderBridge(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4af5 */;
    /* data: dw MusicFishermanUnderBridge_Channel1_rest_1C0 */;
    /* data: dw MusicFishermanUnderBridge_Channel2 */;
    /* data: dw MusicFishermanUnderBridge_Channel3 */;
    /* data: dw MusicFishermanUnderBridge_Channel4 */;
}

void MusicFishermanUnderBridge_Channel2(void) {
    /* data: dw ChannelDefinition_1b_6fb6 */;
    /* data: dw ChannelDefinition_1b_6461 */;
    /* data: dw ChannelDefinition_1b_6480 */;
    /* data: dw $ffff, MusicFishermanUnderBridge_Channel2 */;
}

void MusicFishermanUnderBridge_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f6b */;
    /* data: dw ChannelDefinition_1b_64b5 */;
    /* data: dw $ffff, MusicFishermanUnderBridge_Channel3 */;
}

void MusicFishermanUnderBridge_Channel4(void) {
    /* data: dw ChannelDefinition_1b_64d0 */;
    /* data: dw $ffff, MusicFishermanUnderBridge_Channel4 */;
}

void ChannelDefinition_1b_6461(void) {
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 13 */;
    /* TODO: note G#4 */;
    /* TODO: note A#4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 1 */;
    /* TODO: note C_4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: notelen 13 */;
    /* TODO: note G#3 */;
    /* TODO: note A#3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: rest  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6480(void) {
    /* TODO: set_envelope_duty $40, $21, 0, 1 */;
    /* TODO: notelen 13 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 13 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 13 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 13 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 6 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_64b5(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 6 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note G_2 */;
    /* TODO: note G#2 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 6 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note G_2 */;
    /* TODO: note D_2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_3 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_64d0(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 13 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void MusicObtainItemUnused(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ab9 */;
    /* data: dw MusicObtainItemUnused_Channel1 */;
    /* data: dw MusicObtainItemUnused_Channel2 */;
    /* data: dw MusicObtainItemUnused_Channel3 */;
    /* data: dw $0000 */;
}

void MusicObtainItemUnused_Channel1(void) {
    /* data: dw ChannelDefinition_1b_6fcf */;
    /* data: dw ChannelDefinition_1b_64fc */;
    /* data: dw $0000 */;
}

void MusicObtainItemUnused_Channel2(void) {
    /* data: dw ChannelDefinition_1b_6fcf */;
    /* data: dw ChannelDefinition_1b_6503 */;
    /* data: dw $0000 */;
}

void MusicObtainItemUnused_Channel3(void) {
    /* data: dw ChannelDefinition_1b_6f6b */;
    /* data: dw ChannelDefinition_1b_650a */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1b_64fc(void) {
    /* TODO: notelen 2 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6503(void) {
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note C_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_650a(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: note C#3 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 8 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void MusicEnding(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ae6 */;
    /* data: dw MusicEnding_Channel1 */;
    /* data: dw MusicEnding_Channel2 */;
    /* data: dw MusicEnding_Channel3 */;
    /* data: dw MusicEnding_Channel4 */;
}

void MusicEnding_Channel1(void) {
    /* data: dw ChannelDefinition_1b_rest_31_1 */;
    /* data: dw ChannelDefinition_1b_rest_3b */;
    /* data: dw ChannelDefinition_1b_6656 */;
    /* data: dw ChannelDefinition_1b_665b */;
    /* data: dw ChannelDefinition_1b_666d */;
    /* data: dw ChannelDefinition_1b_668a */;
    /* data: dw ChannelDefinition_1b_66ba */;
    /* data: dw ChannelDefinition_1b_709f */;
    /* data: dw ChannelDefinition_1b_66d8 */;
    /* data: dw ChannelDefinition_1b_6716 */;
    /* data: dw ChannelDefinition_1b_671b */;
    /* data: dw ChannelDefinition_1b_rest_4 */;
    /* data: dw ChannelDefinition_1b_709b */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_672f */;
    /* data: dw ChannelDefinition_1b_676a */;
    /* data: dw ChannelDefinition_1b_676a */;
    /* data: dw ChannelDefinition_1b_67f2 */;
    /* data: dw ChannelDefinition_1b_676a */;
    /* data: dw ChannelDefinition_1b_676a */;
    /* data: dw ChannelDefinition_1b_67f2 */;
    /* data: dw ChannelDefinition_1b_676a */;
    /* data: dw ChannelDefinition_1b_676a */;
    /* data: dw ChannelDefinition_1b_67f2 */;
    /* data: dw ChannelDefinition_1b_67d1 */;
    /* data: dw ChannelDefinition_1b_6832 */;
    /* data: dw ChannelDefinition_1b_6852 */;
    /* data: dw ChannelDefinition_1b_709f */;
    /* data: dw ChannelDefinition_1b_6863 */;
    /* data: dw ChannelDefinition_1b_70a3 */;
    /* data: dw ChannelDefinition_1b_6880 */;
    /* data: dw $0000 */;
}

void MusicEnding_Channel2(void) {
    /* data: dw ChannelDefinition_1b_rest_31_1 */;
    /* data: dw ChannelDefinition_1b_6fe8 */;
    /* data: dw ChannelDefinition_1b_688f */;
    /* data: dw ChannelDefinition_1b_6fe3 */;
    /* data: dw ChannelDefinition_1b_68a5 */;
    /* data: dw ChannelDefinition_1b_6ff2 */;
    /* data: dw ChannelDefinition_1b_688f */;
    /* data: dw ChannelDefinition_1b_6fde */;
    /* data: dw ChannelDefinition_1b_68b9 */;
    /* data: dw ChannelDefinition_1b_68cc */;
    /* data: dw ChannelDefinition_1b_6fed */;
    /* data: dw ChannelDefinition_1b_68d1 */;
    /* data: dw ChannelDefinition_1b_709f */;
    /* data: dw ChannelDefinition_1b_68e8 */;
    /* data: dw ChannelDefinition_1b_5ecc */;
    /* data: dw ChannelDefinition_1b_rest_1 */;
    /* data: dw ChannelDefinition_1b_671b */;
    /* data: dw ChannelDefinition_1b_rest_6 */;
    /* data: dw ChannelDefinition_1b_709b */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_6904 */;
    /* data: dw ChannelDefinition_1b_693d */;
    /* data: dw ChannelDefinition_1b_693d */;
    /* data: dw ChannelDefinition_1b_69ae */;
    /* data: dw ChannelDefinition_1b_693d */;
    /* data: dw ChannelDefinition_1b_693d */;
    /* data: dw ChannelDefinition_1b_69ae */;
    /* data: dw ChannelDefinition_1b_693d */;
    /* data: dw ChannelDefinition_1b_693d */;
    /* data: dw ChannelDefinition_1b_69ae */;
    /* data: dw ChannelDefinition_1b_698f */;
    /* data: dw ChannelDefinition_1b_69ee */;
    /* data: dw ChannelDefinition_1b_6a07 */;
    /* data: dw ChannelDefinition_1b_709f */;
    /* data: dw ChannelDefinition_1b_6a18 */;
    /* data: dw ChannelDefinition_1b_70a3 */;
    /* data: dw ChannelDefinition_1b_6a2d */;
    /* data: dw $0000 */;
}

void MusicEnding_Channel3(void) {
    /* data: dw ChannelDefinition_1b_rest_31_1 */;
    /* data: dw ChannelDefinition_1b_rest_6 */;
    /* data: dw ChannelDefinition_1b_6a3c */;
    /* data: dw ChannelDefinition_1b_688f */;
    /* data: dw ChannelDefinition_1b_6a41 */;
    /* data: dw ChannelDefinition_1b_68a5 */;
    /* data: dw ChannelDefinition_1b_rest_18 */;
    /* data: dw ChannelDefinition_1b_6f55 */;
    /* data: dw ChannelDefinition_1b_665b */;
    /* data: dw ChannelDefinition_1b_666d */;
    /* data: dw ChannelDefinition_1b_rest_5_1 */;
    /* data: dw ChannelDefinition_1b_rest_A */;
    /* data: dw ChannelDefinition_1b_6a55 */;
    /* data: dw ChannelDefinition_1b_709f */;
    /* data: dw ChannelDefinition_1b_6a7c */;
    /* data: dw ChannelDefinition_1b_6f55 */;
    /* data: dw ChannelDefinition_1b_rest_2 */;
    /* data: dw ChannelDefinition_1b_671b */;
    /* data: dw ChannelDefinition_1b_rest_7 */;
    /* data: dw ChannelDefinition_1b_709b */;
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_6aa3 */;
    /* data: dw ChannelDefinition_1b_6ab7 */;
    /* data: dw ChannelDefinition_1b_6ab7 */;
    /* data: dw ChannelDefinition_1b_6b30 */;
    /* data: dw ChannelDefinition_1b_6ab7 */;
    /* data: dw ChannelDefinition_1b_6ab7 */;
    /* data: dw ChannelDefinition_1b_6b30 */;
    /* data: dw ChannelDefinition_1b_6ab7 */;
    /* data: dw ChannelDefinition_1b_6ab7 */;
    /* data: dw ChannelDefinition_1b_6b30 */;
    /* data: dw ChannelDefinition_1b_6b15 */;
    /* data: dw ChannelDefinition_1b_6b7b */;
    /* data: dw ChannelDefinition_1b_6b98 */;
    /* data: dw ChannelDefinition_1b_709f */;
    /* data: dw ChannelDefinition_1b_6ba4 */;
    /* data: dw ChannelDefinition_1b_70a3 */;
    /* data: dw ChannelDefinition_1b_6bba */;
    /* data: dw $0000 */;
}

void MusicEnding_Channel4(void) {
    /* data: dw ChannelDefinition_1b_rest_31_2 */;
    /* data: dw ChannelDefinition_1b_rest_67 */;
    /* data: dw ChannelDefinition_1b_709f */;
    /* data: dw ChannelDefinition_1b_rest_21 */;
    /* data: dw ChannelDefinition_1b_709b */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bf7 */;
    /* data: dw ChannelDefinition_1b_6bf7 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bf7 */;
    /* data: dw ChannelDefinition_1b_6bf7 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6bf7 */;
    /* data: dw ChannelDefinition_1b_6bf7 */;
    /* data: dw ChannelDefinition_1b_6be6 */;
    /* data: dw ChannelDefinition_1b_6bd5 */;
    /* data: dw ChannelDefinition_1b_6c02 */;
    /* data: dw ChannelDefinition_1b_709f */;
    /* data: dw ChannelDefinition_1b_6c02 */;
    /* data: dw ChannelDefinition_1b_6c02 */;
    /* data: dw ChannelDefinition_1b_70a3 */;
    /* data: dw ChannelDefinition_1b_6c10 */;
    /* data: dw $0000 */;
}

void ChannelDefinition_1b_6656(void) {
    /* TODO: set_envelope_duty $56, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_665b(void) {
    /* TODO: notelen 1 */;
    /* TODO: note B_2 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C#5 */;
    /* TODO: note D_5 */;
    /* TODO: note C#5 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D_4 */;
    /* TODO: note C#4 */;
    /* TODO: note A_3 */;
    /* TODO: note F#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_666d(void) {
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_5 */;
    /* TODO: note D_5 */;
    /* TODO: note B_4 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: note A_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_668a(void) {
    /* TODO: set_envelope_duty $42, $00, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_3 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note A_2 */;
    /* TODO: note B_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: note F#3 */;
    /* TODO: note E_3 */;
    /* TODO: note F#3 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: note F#3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: set_envelope_duty $52, $00, 2, 0 */;
    /* TODO: note D_4 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note A_3 */;
    /* TODO: note F#4 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D_4 */;
    /* TODO: set_envelope_duty $62, $00, 2, 0 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D_4 */;
    /* TODO: note D_5 */;
    /* TODO: note C#5 */;
    /* TODO: note A#4 */;
    /* TODO: note F#4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_66ba(void) {
    /* TODO: set_envelope_duty $60, $21, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_4 */;
    /* TODO: note D_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note E_4 */;
    /* TODO: note D_4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_66d8(void) {
    /* TODO: set_envelope_duty $52, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_4 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: note C_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note C_4 */;
    /* TODO: note A_3 */;
    /* TODO: note F#3 */;
    /* TODO: next_loop  */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: note A_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note F#3 */;
    /* TODO: note G#3 */;
    /* TODO: note A#3 */;
    /* TODO: note C#4 */;
    /* TODO: note F#4 */;
    /* TODO: note G#4 */;
    /* TODO: note A#4 */;
    /* TODO: note C#5 */;
    /* TODO: note F#5 */;
    /* TODO: note C#5 */;
    /* TODO: note A#4 */;
    /* TODO: note G#4 */;
    /* TODO: note F#4 */;
    /* TODO: note C#4 */;
    /* TODO: note A#3 */;
    /* TODO: note F#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6716(void) {
    /* TODO: set_envelope_duty $47, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_671b(void) {
    /* TODO: notelen 1 */;
    /* TODO: note D_2 */;
    /* TODO: note E_2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C_4 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note E_5 */;
    /* TODO: note F#5 */;
    /* TODO: note A_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_672f(void) {
    /* TODO: set_envelope_duty $52, $00, 2, 0 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: set_envelope_duty $72, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note E_2 */;
    /* TODO: begin_loop $06 */;
    /* TODO: notelen 10 */;
    /* TODO: note E_2 */;
    /* TODO: next_loop  */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: set_envelope_duty $92, $00, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: set_envelope_duty $92, $00, 1, 0 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: note F#3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_676a(void) {
    /* TODO: set_envelope_duty $90, $21, 1, 1 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note A_2 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note E_3 */;
    /* TODO: note F#3 */;
    /* TODO: note G#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note E_5 */;
    /* TODO: note G_5 */;
    /* TODO: note D#3 */;
    /* TODO: note F_3 */;
    /* TODO: note G_3 */;
    /* TODO: note F_3 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $77, $00, 2, 0 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 10 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: next_loop  */;
    /* TODO: note F#4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: set_envelope_duty $70, $21, 1, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: note E_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note C_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_67d1(void) {
    /* TODO: set_envelope_duty $90, $21, 1, 1 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note A_2 */;
    /* TODO: note B_2 */;
    /* TODO: rest  */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#3 */;
    /* TODO: set_envelope_duty $70, $21, 1, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_2 */;
    /* TODO: note D_2 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_67f2(void) {
    /* TODO: set_envelope_duty $70, $00, 2, 1 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: set_envelope_duty $90, $26, 2, 0 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#4 */;
    /* TODO: rest  */;
    /* TODO: note F_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 8 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: begin_loop $02 */;
    /* TODO: rest  */;
    /* TODO: note D#4 */;
    /* TODO: note D#4 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: set_envelope_duty $70, $21, 1, 0 */;
    /* TODO: notelen 10 */;
    /* TODO: note E_3 */;
    /* TODO: rest  */;
    /* TODO: note E_3 */;
    /* TODO: note D_3 */;
    /* TODO: rest  */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: rest  */;
    /* TODO: note C_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6832(void) {
    /* TODO: set_envelope_duty $80, $21, 1, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: begin_loop $04 */;
    /* TODO: note A#3 */;
    /* TODO: next_loop  */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: note G#4 */;
    /* TODO: note C_5 */;
    /* TODO: note D#5 */;
    /* TODO: note G#4 */;
    /* TODO: note G#4 */;
    /* TODO: note C_5 */;
    /* TODO: note C_5 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6852(void) {
    /* TODO: set_envelope_duty $70, $21, 1, 1 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6863(void) {
    /* TODO: set_envelope_duty $70, $21, 1, 1 */;
    /* TODO: notelen 3 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D#4 */;
    /* TODO: note D#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note C_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6880(void) {
    /* TODO: notelen 3 */;
    /* TODO: note D_5 */;
    /* TODO: set_envelope_duty $a0, $21, 1, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_688f(void) {
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

void ChannelDefinition_1b_68a5(void) {
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
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_68b9(void) {
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
    /* TODO: set_envelope_duty $50, $00, 2, 0 */;
    /* TODO: note F#5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_68cc(void) {
    /* TODO: notelen 5 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_68d1(void) {
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
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
    /* TODO: note G_5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_68e8(void) {
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
    /* TODO: set_envelope_duty $60, $00, 2, 0 */;
    /* TODO: notelen 4 */;
    /* TODO: note F#6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6904(void) {
    /* TODO: set_envelope_duty $62, $21, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note F#2 */;
    /* TODO: notelen 10 */;
    /* TODO: note F#2 */;
    /* TODO: note F#2 */;
    /* TODO: note F#2 */;
    /* TODO: set_envelope_duty $82, $21, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note E_3 */;
    /* TODO: note E_3 */;
    /* TODO: note E_3 */;
    /* TODO: set_envelope_duty $a2, $21, 2, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 10 */;
    /* TODO: note F#3 */;
    /* TODO: note F#3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_693d(void) {
    /* TODO: set_envelope_duty $a0, $21, 1, 1 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: note D_4 */;
    /* TODO: note E_4 */;
    /* TODO: note F_4 */;
    /* TODO: note E_4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note D#4 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_3 */;
    /* TODO: set_envelope_duty $57, $00, 2, 0 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: note G_5 */;
    /* TODO: note A_5 */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_5 */;
    /* TODO: note G_5 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_6 */;
    /* TODO: next_loop  */;
    /* TODO: set_envelope_duty $a0, $21, 1, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note B_4 */;
    /* TODO: note C_5 */;
    /* TODO: note B_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note A_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_698f(void) {
    /* TODO: set_envelope_duty $a0, $21, 1, 1 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: rest  */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: set_envelope_duty $80, $21, 1, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_69ae(void) {
    /* TODO: set_envelope_duty $a0, $26, 2, 1 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: note A_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: note A_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note A#4 */;
    /* TODO: notelen 6 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 14 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: note A_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D#5 */;
    /* TODO: notelen 10 */;
    /* TODO: note D#5 */;
    /* TODO: note D_5 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 5 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_5 */;
    /* TODO: set_envelope_duty $a0, $21, 1, 0 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_4 */;
    /* TODO: note D_4 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: note A_3 */;
    /* TODO: note B_3 */;
    /* TODO: note A_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_69ee(void) {
    /* TODO: set_envelope_duty $a0, $21, 1, 1 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: note G_4 */;
    /* TODO: note F_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note G#4 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: note A#4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F_5 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6a07(void) {
    /* TODO: set_envelope_duty $a0, $21, 0, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note F_4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6a18(void) {
    /* TODO: notelen 3 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 2 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_5 */;
    /* TODO: notelen 1 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F_5 */;
    /* TODO: set_envelope_duty $a0, $00, 0, 1 */;
    /* TODO: notelen 5 */;
    /* TODO: note G_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6a2d(void) {
    /* TODO: set_envelope_duty $a0, $21, 0, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_3 */;
    /* TODO: note G_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6a3c(void) {
    /* TODO: set_waveform waveform_1b_6f21, $20 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6a41(void) {
    /* TODO: set_waveform waveform_1b_6f11, $40 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_18(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_A(void) {
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6a55(void) {
    /* TODO: set_waveform waveform_1b_6ec1, $20 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: rest  */;
    /* TODO: note F#4 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_4 */;
    /* TODO: note D_4 */;
    /* TODO: note C#4 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6a7c(void) {
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 2 */;
    /* TODO: note F#2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6aa3(void) {
    /* TODO: set_waveform waveform_1b_6ec1, $20 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $06 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: note E_2 */;
    /* TODO: note F#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6ab7(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: note F_3 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note E_3 */;
    /* TODO: note E_2 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 3 */;
    /* TODO: note A_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: note D#2 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 10 */;
    /* TODO: note E_2 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: note E_4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_2 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note D_4 */;
    /* TODO: note A_3 */;
    /* TODO: note F#3 */;
    /* TODO: note E_3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: note E_4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_2 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note D_4 */;
    /* TODO: note A_3 */;
    /* TODO: note B_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 10 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: note D_2 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: note D_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A_3 */;
    /* TODO: note D_4 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: note F#3 */;
    /* TODO: note E_3 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6b15(void) {
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 10 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: note F#3 */;
    /* TODO: note E_3 */;
    /* TODO: note D_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6b30(void) {
    /* TODO: notelen 10 */;
    /* TODO: note D#3 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note D#5 */;
    /* TODO: note A#4 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note D#5 */;
    /* TODO: note A#4 */;
    /* TODO: note G_4 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note D#4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note A_4 */;
    /* TODO: note F_4 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note A_4 */;
    /* TODO: note F_4 */;
    /* TODO: next_loop  */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: note G_3 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note F_4 */;
    /* TODO: note D_4 */;
    /* TODO: note G_3 */;
    /* TODO: begin_loop $02 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 10 */;
    /* TODO: note C_3 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note D#5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: enable_software_envelope  */;
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 10 */;
    /* TODO: note G#2 */;
    /* TODO: note G#3 */;
    /* TODO: note G#3 */;
    /* TODO: note G#3 */;
    /* TODO: note A#3 */;
    /* TODO: note C_4 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: note D_4 */;
    /* TODO: note D_2 */;
    /* TODO: note E_2 */;
    /* TODO: note F#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6b7b(void) {
    /* TODO: note D#3 */;
    /* TODO: note G_3 */;
    /* TODO: note A#3 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note D#5 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 10 */;
    /* TODO: note D#3 */;
    /* TODO: note D#3 */;
    /* TODO: note D#3 */;
    /* TODO: note G#2 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note G#3 */;
    /* TODO: note C_4 */;
    /* TODO: note D#4 */;
    /* TODO: disable_software_envelope  */;
    /* TODO: notelen 3 */;
    /* TODO: note G#5 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 10 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: note G#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6b98(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: note D_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note F_2 */;
    /* TODO: note C_2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6ba4(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#2 */;
    /* TODO: note A#2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note F_2 */;
    /* TODO: note C_3 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G_2 */;
    /* TODO: note D_2 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $02 */;
    /* TODO: note G#2 */;
    /* TODO: note D#2 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6bba(void) {
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 1 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 3 */;
    /* TODO: note G_2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_67(void) {
    /* TODO: begin_loop $14 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_21(void) {
    /* TODO: begin_loop $06 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6bd5(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 10 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 10 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6be6(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 10 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: notelen 10 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_5 */;
    /* TODO: note NOISE_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6bf7(void) {
    /* TODO: begin_loop $08 */;
    /* TODO: notelen 10 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_9 */;
    /* TODO: note NOISE_9 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6c02(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6c10(void) {
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 3 */;
    /* TODO: note NOISE_6 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicMoblinHideout(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ab9 */;
    /* data: dw MusicMoblinHideout_Channel1 */;
    /* data: dw MusicMoblinHideout_Channel2 */;
    /* data: dw MusicMoblinHideout_Channel3 */;
    /* data: dw $0000 */;
}

void MusicMoblinHideout_Channel1(void) {
    /* data: dw ChannelDefinition_1b_6c50 */;
    /* data: dw ChannelDefinition_1b_6c55 */;
    /* data: dw ChannelDefinition_1b_6c55 */;
    /* data: dw ChannelDefinition_1b_6fc0 */;
    /* data: dw ChannelDefinition_1b_6c55 */;
    /* data: dw ChannelDefinition_1b_6ff7 */;
    /* data: dw ChannelDefinition_1b_6c55 */;
    /* data: dw $ffff, MusicBowwowKidnapped_Channel1 */;
}

void MusicMoblinHideout_Channel2(void) {
    /* data: dw ChannelDefinition_1b_6c50 */;
    /* data: dw ChannelDefinition_1b_6c5f */;
    /* data: dw ChannelDefinition_1b_6c5f */;
    /* data: dw ChannelDefinition_1b_6fc0 */;
    /* data: dw ChannelDefinition_1b_6c5f */;
    /* data: dw ChannelDefinition_1b_6ff7 */;
    /* data: dw ChannelDefinition_1b_6c5f */;
    /* data: dw $ffff, MusicBowwowKidnapped_Channel2 */;
}

void MusicMoblinHideout_Channel3(void) {
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw $ffff, MusicBowwowKidnapped_Channel3 */;
}

void ChannelDefinition_1b_6c50(void) {
    /* TODO: set_envelope_duty $40, $00, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6c55(void) {
    /* TODO: notelen 1 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note C#3 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note A#2 */;
    /* TODO: note B_2 */;
    /* TODO: note C_3 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6c5f(void) {
    /* TODO: notelen 1 */;
    /* TODO: note B_3 */;
    /* TODO: note C_4 */;
    /* TODO: note B_3 */;
    /* TODO: note A#3 */;
    /* TODO: note A_3 */;
    /* TODO: note G#3 */;
    /* TODO: note A_3 */;
    /* TODO: note A#3 */;
    /* TODO: end_def  */;
}

void MusicIslandDisappear(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ad7 */;
    /* data: dw MusicIslandDisappear_Channel1 */;
    /* data: dw MusicIslandDisappear_Channel2 */;
    /* data: dw MusicIslandDisappear_Channel3 */;
    /* data: dw MusicIslandDisappear_Channel4 */;
}

void MusicIslandDisappear_Channel1(void) {
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_6cf6 */;
    /* data: dw ChannelDefinition_1b_6e00 */;
    /* data: dw ChannelDefinition_1b_rest_3 */;
    /* data: dw ChannelDefinition_1b_7006 */;
    /* data: dw ChannelDefinition_1b_6cfd */;
    /* data: dw ChannelDefinition_1b_700b */;
    /* data: dw ChannelDefinition_1b_6d03 */;
    /* data: dw ChannelDefinition_1b_7001 */;
    /* data: dw ChannelDefinition_1b_6d09 */;
    /* data: dw ChannelDefinition_1b_6d7a */;
    /* data: dw ChannelDefinition_1b_6de0 */;
    /* data: dw ChannelDefinition_1b_6df3 */;
    /* data: dw ChannelDefinition_1b_6df8 */;
    /* data: dw $ffff, MusicLoop_1b_708f */;
}

void MusicIslandDisappear_Channel2(void) {
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_6d81 */;
    /* data: dw ChannelDefinition_1b_6e00 */;
    /* data: dw ChannelDefinition_1b_rest_3 */;
    /* data: dw ChannelDefinition_1b_6ffc */;
    /* data: dw ChannelDefinition_1b_6d88 */;
    /* data: dw ChannelDefinition_1b_7010 */;
    /* data: dw ChannelDefinition_1b_6da7 */;
    /* data: dw ChannelDefinition_1b_rest_2 */;
    /* data: dw ChannelDefinition_1b_6dfb */;
    /* data: dw ChannelDefinition_1b_6dc7 */;
    /* data: dw ChannelDefinition_1b_6dd4 */;
    /* data: dw ChannelDefinition_1b_6de0 */;
    /* data: dw ChannelDefinition_1b_rest_2 */;
    /* data: dw ChannelDefinition_1b_6df3 */;
    /* data: dw ChannelDefinition_1b_6df8 */;
    /* data: dw $ffff, MusicLoop_1b_708f */;
}

void MusicIslandDisappear_Channel3(void) {
    /* data: dw ChannelDefinition_1b_rest_A_2 */;
    /* data: dw ChannelDefinition_1b_7015 */;
    /* data: dw ChannelDefinition_1b_6e00 */;
    /* data: dw ChannelDefinition_1b_rest_2 */;
    /* data: dw ChannelDefinition_1b_rest_3 */;
    /* data: dw ChannelDefinition_1b_701b */;
    /* data: dw ChannelDefinition_1b_6e12 */;
    /* data: dw ChannelDefinition_1b_6e34 */;
    /* data: dw ChannelDefinition_1b_6f55 */;
    /* data: dw ChannelDefinition_1b_6dc7 */;
    /* data: dw ChannelDefinition_1b_6dd4 */;
    /* data: dw ChannelDefinition_1b_6de0 */;
    /* data: dw ChannelDefinition_1b_rest_3 */;
    /* data: dw ChannelDefinition_1b_6df8 */;
    /* data: dw $ffff, MusicLoop_1b_708f */;
}

void MusicIslandDisappear_Channel4(void) {
    /* data: dw ChannelDefinition_1b_rest_37 */;
    /* data: dw ChannelDefinition_1b_6e56 */;
    /* data: dw ChannelDefinition_1b_6e56 */;
    /* data: dw ChannelDefinition_1b_6e56 */;
    /* data: dw ChannelDefinition_1b_6e56 */;
    /* data: dw ChannelDefinition_1b_6e6b */;
    /* data: dw ChannelDefinition_1b_6e6b */;
    /* data: dw ChannelDefinition_1b_6e6b */;
    /* data: dw ChannelDefinition_1b_6e6b */;
    /* data: dw ChannelDefinition_1b_6e6b */;
    /* data: dw ChannelDefinition_1b_6e6b */;
    /* data: dw ChannelDefinition_1b_6e95 */;
    /* data: dw ChannelDefinition_1b_rest_1b */;
    /* data: dw $ffff, MusicLoop_1b_7095 */;
}

void ChannelDefinition_1b_6cf6(void) {
    /* TODO: set_envelope_duty $10, $00, 2, 1 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6cfd(void) {
    /* TODO: notelen 4 */;
    /* TODO: note B_6 */;
    /* TODO: note E_6 */;
    /* TODO: note F#6 */;
    /* TODO: note B_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6d03(void) {
    /* TODO: notelen 4 */;
    /* TODO: note B_6 */;
    /* TODO: note E_6 */;
    /* TODO: note F#6 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6d09(void) {
    /* TODO: set_envelope_duty $b1, $82, 0, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_1 */;
    /* TODO: note G_1 */;
    /* TODO: set_envelope_duty $71, $82, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#5 */;
    /* TODO: note B_4 */;
    /* TODO: note F#5 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $b1, $82, 0, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note D_1 */;
    /* TODO: note G_1 */;
    /* TODO: note G_1 */;
    /* TODO: set_envelope_duty $71, $82, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note F#5 */;
    /* TODO: note B_4 */;
    /* TODO: note F#5 */;
    /* TODO: note B_5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $b1, $82, 0, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note G_1 */;
    /* TODO: note B_1 */;
    /* TODO: note B_1 */;
    /* TODO: set_envelope_duty $71, $82, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_5 */;
    /* TODO: note A_4 */;
    /* TODO: note E_5 */;
    /* TODO: note F#5 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: set_envelope_duty $b1, $82, 0, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note F#1 */;
    /* TODO: note B_1 */;
    /* TODO: note B_1 */;
    /* TODO: set_envelope_duty $71, $82, 2, 0 */;
    /* TODO: notelen 1 */;
    /* TODO: note E_5 */;
    /* TODO: note A_4 */;
    /* TODO: note E_5 */;
    /* TODO: note F#5 */;
    /* TODO: set_envelope_duty $80, $00, 0, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: note B_1 */;
    /* TODO: note A_1 */;
    /* TODO: set_envelope_duty $a1, $82, 0, 0 */;
    /* TODO: notelen 2 */;
    /* TODO: note G_1 */;
    /* TODO: note G_1 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note D_1 */;
    /* TODO: note G_1 */;
    /* TODO: note G_1 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 3 */;
    /* TODO: note G_1 */;
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_1 */;
    /* TODO: note D_1 */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note A_1 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6d7a(void) {
    /* TODO: set_envelope_duty $26, $00, 0, 0 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6d81(void) {
    /* TODO: set_envelope_duty $40, $00, 1, 1 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6d88(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: note B_3 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 7 */;
    /* TODO: note A_3 */;
    /* TODO: notelen 8 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6da7(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 1 */;
    /* TODO: note B_4 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note A_4 */;
    /* TODO: next_loop  */;
    /* TODO: note B_4 */;
    /* TODO: note A_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note B_4 */;
    /* TODO: begin_loop $02 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note E_4 */;
    /* TODO: note D_4 */;
    /* TODO: note A_3 */;
    /* TODO: note D_4 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6dc7(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: notelen 1 */;
    /* TODO: note C#5 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note D_4 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6dd4(void) {
    /* TODO: begin_loop $02 */;
    /* TODO: note E_5 */;
    /* TODO: note C#5 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note E_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C#5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6de0(void) {
    /* TODO: notelen 1 */;
    /* TODO: note D_1 */;
    /* TODO: note A_1 */;
    /* TODO: note C#2 */;
    /* TODO: note D_2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note C#3 */;
    /* TODO: note D_3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note C#4 */;
    /* TODO: note D_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#5 */;
    /* TODO: note D_5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6df3(void) {
    /* TODO: set_envelope_duty $77, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6df8(void) {
    /* TODO: notelen 5 */;
    /* TODO: note A_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6dfb(void) {
    /* TODO: set_envelope_duty $40, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6e00(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 2 */;
    /* TODO: note C#4 */;
    /* TODO: note B_3 */;
    /* TODO: notelen 6 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 5 */;
    /* TODO: note F#4 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6e12(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 4 */;
    /* TODO: note F#3 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note E_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 7 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6e34(void) {
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note C#4 */;
    /* TODO: notelen 4 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note B_3 */;
    /* TODO: note D_4 */;
    /* TODO: notelen 4 */;
    /* TODO: note G_4 */;
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: note F#4 */;
    /* TODO: note E_4 */;
    /* TODO: notelen 5 */;
    /* TODO: note F#4 */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_37(void) {
    /* TODO: begin_loop $05 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6e56(void) {
    /* TODO: begin_loop $03 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_5 */;
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
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_5 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6e6b(void) {
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_8 */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 2 */;
    /* TODO: note NOISE_8 */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_5 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_6 */;
    /* TODO: notelen 13 */;
    /* TODO: rest  */;
    /* TODO: notelen 9 */;
    /* TODO: note NOISE_6 */;
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 1 */;
    /* TODO: note NOISE_6 */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6e95(void) {
    /* TODO: notelen 4 */;
    /* TODO: note NOISE_8 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_1b(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void waveform_1b_6ea1(void) {
    /* data: db $66, $66, $66, $66, $66, $66, $66, $66, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void waveform_1b_6eb1(void) {
    /* data: db $88, $88, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void waveform_1b_6ec1(void) {
    /* data: db $88, $88, $88, $88, $88, $88, $88, $88, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void waveform_1b_6ed1(void) {
    /* data: db $88, $88, $88, $88, $00, $00, $00, $00, $88, $88, $88, $88, $00, $00, $00, $00 */;
}

void waveform_1b_6ee1(void) {
    /* data: db $aa, $aa, $aa, $aa, $aa, $aa, $aa, $aa, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void waveform_1b_6ef1(void) {
    /* data: db $06, $9b, $cd, $de, $ee, $ff, $ff, $fe, $06, $9b, $cd, $de, $ee, $ff, $ff, $fe */;
}

void waveform_1b_6f01(void) {
    /* data: db $7f, $ff, $57, $73, $55, $34, $42, $21, $7f, $ff, $57, $73, $55, $34, $42, $21 */;
}

void waveform_1b_6f11(void) {
    /* data: db $33, $33, $33, $33, $00, $00, $00, $00, $33, $33, $33, $33, $00, $00, $00, $00 */;
}

void waveform_1b_6f21(void) {
    /* data: db $11, $11, $11, $11, $00, $00, $00, $00, $11, $11, $11, $11, $00, $00, $00, $00 */;
}

void waveform_1b_6f31(void) {
    /* data: db $44, $44, $44, $44, $00, $00, $00, $00, $44, $44, $44, $44, $00, $00, $00, $00 */;
}

void ChannelDefinition_1b_6f41(void) {
    /* TODO: set_waveform waveform_1b_6ec1, $20 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f46(void) {
    /* TODO: set_waveform waveform_1b_6ec1, $40 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f4b(void) {
    /* TODO: set_waveform waveform_1b_6ed1, $21 */;
    /* TODO: end_def  */;
    /* data: db $9d, $d1, $6e, $40, $00 */;
}

void ChannelDefinition_1b_6f55(void) {
    /* TODO: set_waveform waveform_1b_6ed1, $40 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f5b(void) {
    /* TODO: set_waveform waveform_1b_6ea1, $20 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f60(void) {
    /* TODO: set_waveform waveform_1b_6ee1, $20 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f65(void) {
    /* TODO: set_waveform waveform_1b_6f31, $40 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f6b(void) {
    /* TODO: set_waveform waveform_1b_6eb1, $21 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f70(void) {
    /* TODO: set_waveform waveform_1b_6eb1, $25 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f75(void) {
    /* TODO: set_waveform waveform_1b_6eb1, $40 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f7a(void) {
    /* TODO: set_envelope_duty $42, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f7f(void) {
    /* TODO: set_envelope_duty $53, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f84(void) {
    /* TODO: set_envelope_duty $50, $83, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f89(void) {
    /* TODO: set_envelope_duty $60, $81, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f8e(void) {
    /* TODO: set_envelope_duty $71, $00, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f93(void) {
    /* TODO: set_envelope_duty $42, $00, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f98(void) {
    /* TODO: set_envelope_duty $33, $00, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6f9d(void) {
    /* TODO: set_envelope_duty $62, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fa2(void) {
    /* TODO: set_envelope_duty $60, $26, 0, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fa7(void) {
    /* TODO: set_envelope_duty $60, $26, 2, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fac(void) {
    /* TODO: set_envelope_duty $40, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fb1(void) {
    /* TODO: set_envelope_duty $20, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fb6(void) {
    /* TODO: set_envelope_duty $43, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fbb(void) {
    /* TODO: set_envelope_duty $40, $21, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fc0(void) {
    /* TODO: set_envelope_duty $50, $00, 1, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fc5(void) {
    /* TODO: set_envelope_duty $60, $21, 1, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fca(void) {
    /* TODO: set_envelope_duty $60, $00, 2, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fcf(void) {
    /* TODO: set_envelope_duty $90, $21, 1, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fd4(void) {
    /* TODO: set_envelope_duty $b0, $21, 1, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fd9(void) {
    /* TODO: set_envelope_duty $91, $00, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fde(void) {
    /* TODO: set_envelope_duty $50, $26, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fe3(void) {
    /* TODO: set_envelope_duty $30, $21, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fe8(void) {
    /* TODO: set_envelope_duty $20, $21, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6fed(void) {
    /* TODO: set_envelope_duty $60, $26, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6ff2(void) {
    /* TODO: set_envelope_duty $40, $26, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6ff7(void) {
    /* TODO: set_envelope_duty $60, $00, 1, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_6ffc(void) {
    /* TODO: set_envelope_duty $a0, $21, 1, 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7001(void) {
    /* TODO: set_envelope_duty $82, $82, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7006(void) {
    /* TODO: set_envelope_duty $77, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_700b(void) {
    /* TODO: set_envelope_duty $97, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7010(void) {
    /* TODO: set_envelope_duty $51, $82, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7015(void) {
    /* TODO: set_waveform waveform_1b_6f01, $01 */;
    /* TODO: unknownop_94  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_701b(void) {
    /* TODO: set_waveform waveform_1b_6ef1, $01 */;
    /* TODO: unknownop_94  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7021(void) {
    /* TODO: set_transpose -1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7024(void) {
    /* TODO: set_transpose 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7027(void) {
    /* TODO: set_transpose 1 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_702a(void) {
    /* TODO: set_transpose 5 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_702d(void) {
    /* TODO: set_envelope_duty $10, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7032(void) {
    /* TODO: set_envelope_duty $37, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7037(void) {
    /* TODO: set_envelope_duty $43, $83, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_3b(void) {
    /* TODO: begin_loop $0b */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
    /* data: db $9b, $11, $a5, $01, $9c, $00 */;
}

void ChannelDefinition_1b_rest_31_1(void) {
    /* TODO: begin_loop $09 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_31_2(void) {
    /* TODO: begin_loop $09 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
    /* data: db $a5, $01, $01, $00 */;
}

void ChannelDefinition_1b_rest_5_1(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_A_2(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
    /* data: db $9b, $03, $a5, $01, $9c, $00 */;
}

void ChannelDefinition_1b_rest_14(void) {
    /* TODO: begin_loop $04 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_32(void) {
    /* TODO: begin_loop $10 */;
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: next_loop  */;
    /* TODO: end_def  */;
    /* data: db $a8, $01, $00 */;
}

void ChannelDefinition_1b_rest_6(void) {
    /* TODO: notelen 6 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_7(void) {
    /* TODO: notelen 7 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_1(void) {
    /* TODO: notelen 1 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_2(void) {
    /* TODO: notelen 2 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_4(void) {
    /* TODO: notelen 4 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_3(void) {
    /* TODO: notelen 3 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_rest_5_2(void) {
    /* TODO: notelen 5 */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void MusicLoop_1b_708f(void) {
    /* data: dw ChannelDefinition_1b_rest_5_1 */;
    /* data: dw $ffff, MusicLoop_1b_708f */;
}

void MusicLoop_1b_7095(void) {
    /* data: dw ChannelDefinition_1b_rest_5_2 */;
    /* data: dw $ffff, MusicLoop_1b_7095 */;
}

void ChannelDefinition_1b_709b(void) {
    /* TODO: set_speed MusicSpeedData_1b_4ac8 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_709f(void) {
    /* TODO: set_speed MusicSpeedData_1b_4ad7 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_70a3(void) {
    /* TODO: set_speed MusicSpeedData_1b_4af5 */;
    /* TODO: end_def  */;
}

void MusicColorDungeon(void) {
}

void Music62(void) {
}

void Music63(void) {
}

void Music64(void) {
}

void Music65(void) {
}

void Music66(void) {
}

void Music67(void) {
}

void Music68(void) {
}

void Music69(void) {
}

void Music6a(void) {
}

void Music6b(void) {
}

void Music6c(void) {
}

void Music6d(void) {
}

void Music6e(void) {
}

void Music6f(void) {
}

void Music70(void) {
    /* data: db $00 */;
    /* data: dw MusicSpeedData_1b_4ac8 */;
    /* data: dw MusicColorDungeon_Channel1 */;
    /* data: dw MusicColorDungeon_Channel2 */;
    /* data: dw MusicColorDungeon_Channel3 */;
    /* data: dw $0000 */;
}

void MusicColorDungeon_Channel1(void) {
    /* data: dw ChannelDefinition_1b_712f */;
    /* data: dw $ffff, MusicLoop_1b_7113 */;
}

void MusicColorDungeon_Channel2(void) {
    /* data: dw ChannelDefinition_1b_7137 */;
}

void MusicLoop_1b_7113(void) {
    /* data: dw ChannelDefinition_1b_713c */;
    /* data: dw ChannelDefinition_1b_713c */;
    /* data: dw ChannelDefinition_1b_71b2 */;
    /* data: dw $ffff, MusicLoop_1b_7113 */;
}

void MusicColorDungeon_Channel3(void) {
    /* data: dw ChannelDefinition_1b_7228 */;
    /* data: dw ChannelDefinition_1b_722d */;
    /* data: dw ChannelDefinition_1b_722d */;
    /* data: dw ChannelDefinition_1b_726a */;
    /* data: dw $ffff, MusicColorDungeon_Channel3 */;
    /* data: db $22, $73, $ff, $ff, $29, $71 */;
}

void ChannelDefinition_1b_712f(void) {
    /* TODO: set_envelope_duty $37, $00, 2, 0 */;
    /* TODO: notelen 10 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7137(void) {
    /* TODO: set_envelope_duty $47, $00, 2, 0 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_713c(void) {
    /* TODO: notelen 2 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note D#5 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D_5 */;
    /* TODO: note C_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D#5 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D#5 */;
    /* TODO: note C_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F#5 */;
    /* TODO: note D#5 */;
    /* TODO: note F#5 */;
    /* TODO: note A_5 */;
    /* TODO: note F#5 */;
    /* TODO: note A_5 */;
    /* TODO: note C_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_71b2(void) {
    /* TODO: notelen 2 */;
    /* TODO: note D_5 */;
    /* TODO: note A#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note D_5 */;
    /* TODO: note A#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note D_5 */;
    /* TODO: note A#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note D_5 */;
    /* TODO: note A#4 */;
    /* TODO: note G_4 */;
    /* TODO: note A#4 */;
    /* TODO: note D_5 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: note A_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note D_5 */;
    /* TODO: note G#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note D_5 */;
    /* TODO: note G#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note D_5 */;
    /* TODO: note G#4 */;
    /* TODO: note F_4 */;
    /* TODO: note G#4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note E_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note D#4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note D_5 */;
    /* TODO: note G_4 */;
    /* TODO: note D_4 */;
    /* TODO: note G_4 */;
    /* TODO: note C_4 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note F#4 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D#5 */;
    /* TODO: note A_4 */;
    /* TODO: note C_5 */;
    /* TODO: note D#5 */;
    /* TODO: note C_5 */;
    /* TODO: note D#5 */;
    /* TODO: note F#5 */;
    /* TODO: note D#5 */;
    /* TODO: note F#5 */;
    /* TODO: note A_5 */;
    /* TODO: note F#5 */;
    /* TODO: note A_5 */;
    /* TODO: note C_6 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_7228(void) {
    /* TODO: set_waveform waveform_1b_7349, $21 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_722d(void) {
    /* TODO: notelen 5 */;
    /* TODO: note G_2 */;
    /* TODO: notelen 4 */;
    /* TODO: note A#2 */;
    /* TODO: note D_3 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 14 */;
    /* TODO: note F#2 */;
    /* TODO: notelen 5 */;
    /* TODO: note F_2 */;
    /* TODO: notelen 7 */;
    /* TODO: note F_2 */;
    /* TODO: note G#2 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 4 */;
    /* TODO: note C_3 */;
    /* TODO: notelen 14 */;
    /* TODO: note E_2 */;
    /* TODO: notelen 2 */;
    /* TODO: note D#2 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 8 */;
    /* TODO: note D#2 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_2 */;
    /* TODO: note D#3 */;
    /* TODO: notelen 3 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_2 */;
    /* TODO: note C#2 */;
    /* TODO: notelen 8 */;
    /* TODO: note D_2 */;
    /* TODO: notelen 7 */;
    /* TODO: note G_2 */;
    /* TODO: note D_3 */;
    /* TODO: notelen 3 */;
    /* TODO: note C#3 */;
    /* TODO: notelen 2 */;
    /* TODO: note D_2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: note A_2 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note F#3 */;
    /* TODO: note A_3 */;
    /* TODO: note F#3 */;
    /* TODO: note D#3 */;
    /* TODO: note C_3 */;
    /* TODO: note D#3 */;
    /* TODO: note C_3 */;
    /* TODO: note A_2 */;
    /* TODO: note F#2 */;
    /* TODO: end_def  */;
}

void ChannelDefinition_1b_726a(void) {
    /* TODO: set_waveform waveform_1b_7359, $40 */;
    /* TODO: enable_software_envelope  */;
    /* TODO: notelen 2 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: set_waveform waveform_1b_7369, $40 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: set_waveform waveform_1b_7359, $40 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: set_waveform waveform_1b_7369, $40 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: set_waveform waveform_1b_7359, $40 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note C#3 */;
    /* TODO: note C#3 */;
    /* TODO: note C#3 */;
    /* TODO: note C#3 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: set_waveform waveform_1b_7369, $40 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: set_waveform waveform_1b_7359, $40 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: set_waveform waveform_1b_7369, $40 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: set_waveform waveform_1b_7359, $40 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note D_3 */;
    /* TODO: note D_3 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: set_waveform waveform_1b_7369, $40 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: note B_2 */;
    /* TODO: set_waveform waveform_1b_7359, $40 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: set_waveform waveform_1b_7369, $40 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: set_waveform waveform_1b_7359, $40 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note C_3 */;
    /* TODO: note C_3 */;
    /* TODO: note A#2 */;
    /* TODO: note A#2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: set_waveform waveform_1b_7369, $40 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: set_waveform waveform_1b_7359, $40 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note F#2 */;
    /* TODO: note F#2 */;
    /* TODO: note G_2 */;
    /* TODO: note G_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: set_waveform waveform_1b_7369, $40 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: note A_2 */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: rest  */;
    /* TODO: disable_software_envelope  */;
    /* TODO: end_def  */;
    /* data: db $9b, $07, $a3, $15, $15, $1f, $a2, $06, $a3, $15, $15, $a2, $15, $a3, $10, $9c */;
    /* data: db $a2, $15, $15, $15, $15, $a3, $01, $a2, $15, $15, $15, $15, $a3, $01, $a2, $15 */;
    /* data: db $15, $15, $15, $a3, $06, $06, $00 */;
}

void waveform_1b_7349(void) {
    /* data: db $66, $66, $66, $66, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void waveform_1b_7359(void) {
    /* data: db $09, $09, $09, $09, $09, $09, $09, $09, $09, $09, $09, $09, $09, $09, $09, $09 */;
}

void waveform_1b_7369(void) {
    /* data: db $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05, $05 */;
}
