/* Auto-generated from LADX Disassembly - Bank 0x17 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void Data_017_4000(void);
void Data_017_4040(void);
void Data_017_4048(void);
void AnimateCreditsIslandFadeTiles(void);
void Data_017_40A1(void);
void Data_017_40B1(void);
void jr_017_40c1(void);
void jr_017_40cb(void);
void NewStaffRoles(void);
void DebugStaffRoles(void);
void OriginalStaffRoles(void);
void NewStaffPeople(void);
void func_017_448B(void);
void Data_017_44AC(void);
void Data_017_44D4(void);
void func_017_44FC(void);
void jr_017_4519(void);
void Data_017_453D(void);
void Data_017_456D(void);
void func_017_457D(void);
void func_017_4594(void);
void func_017_45B5(void);
void func_017_45BA(void);
void jr_017_45E8(void);
void jr_017_45F9(void);
void jr_017_4612(void);
void func_017_4630(void);
void jr_017_466B(void);
void func_017_4678(void);
void CreditsRolesCharmap(void);
void LayoutRoleLetters(void);
void CreditsStaffCharmap(void);
void CreditsStaffAttrmap(void);
void LayoutStaffLetters(void);
void LayoutRowOfStaffLetters(void);
void func_017_4839(void);
void Data_017_4862(void);
void Data_017_4877(void);
void func_017_488C(void);
void ret_017_48CC(void);
void Data_017_48CD(void);
void ApplyWindFishVfx(void);
void jr_017_4911(void);
void jr_017_4964(void);
void Data_017_49B7(void);
void Data_017_4B3A(void);
void Data_017_4BBA(void);
void Data_017_4BCA(void);
void CreditsInitHandler(void);
void CreditsFadeoutHandler(void);
void jr_017_4C03(void);
void label_017_4C22(void);
void IncrementCreditsGameplaySubtype(void);
void IncrementCreditsGameplaySubtypeAndReturn(void);
void CreditsWindFishHandler(void);
void CreditsStairsPrepare1Handler(void);
void IncrementCreditsSubscene(void);
void IncrementCreditsSubsceneAndReturn(void);
void CreditsStairsPrepare2Handler(void);
void Data_017_4D09(void);
void Data_017_4D19(void);
void Data_017_4D29(void);
void CreditsStairsFadeInHandler(void);
void CreditsStairsClimbingHandler(void);
void ResetCreditsSceneVariables(void);
void ret_017_4DD0(void);
void Data_017_4DD1(void);
void CreditsStairsReachingPlatformHandler(void);
void CreditsStairsOwlSpeechHandler(void);
void CreditsWindFishPrepare1Handler(void);
void func_017_4E93(void);
void Data_017_4EB8(void);
void CreditsWindFishPrepare2Handler(void);
void Data_017_4EEF(void);
void Data_017_4FDF(void);
void CreditsWindFishPrepare3Handler(void);
void Data_017_5130(void);
void CreditsWindFishApparitionHandler(void);
void jr_017_5160(void);
void WindfishPalettes(void);
void func_017_53A7(void);
void jr_017_53B8(void);
void CreditsWindFishFloatingHandler(void);
void CreditsOpenWindFishDialog(void);
void ret_017_53F2(void);
void CreditsWindFishSpeechHandler(void);
void CreditsWindFishPrepareDisapparitionHandler(void);
void Data_017_541E(void);
void CreditsWindFishDisapparitionHandler(void);
void jr_017_544D(void);
void Data_017_5494(void);
void CreditsWindFishDisappearedHandler(void);
void CreditsPlayInstrumentsDialogHandler(void);
void CreditsLinkTurnsToPlayHandler(void);
void Data_017_553B(void);
void Data_017_5543(void);
void Data_017_554B(void);
void Data_017_5553(void);
void Data_017_555B(void);
void Data_017_5563(void);
void CreditsLinkPreparesToPlayHandler(void);
void jr_017_557A(void);
void ret_017_55E9(void);
void CreditsLinkShowsInstrumentsHandler(void);
void CreditsInstrumentsPlayingHandler(void);
void IncrementD000AndReturn(void);
void DisableAllEntities(void);
void Data_017_5635(void);
void Data_017_5645(void);
void Data_017_5655(void);
void func_017_5665(void);
void jr_017_5695(void);
void label_017_56BA(void);
void MrsMeowMeowsHouseSceneHandler(void);
void jr_017_56DC(void);
void func_017_5728(void);
void func_017_5736(void);
void KidsSceneHandler(void);
void jr_017_575A(void);
void ret_017_5793(void);
void func_017_5794(void);
void BeachSceneHandler(void);
void jr_017_57BF(void);
void ret_017_57F8(void);
void func_017_57F9(void);
void TarinSceneHandler(void);
void jr_017_5824(void);
void ret_017_583B(void);
void func_017_583C(void);
void MarinSingingSceneHandler(void);
void jr_017_5867(void);
void ret_017_58C2(void);
void func_017_58C3(void);
void func_017_58D1(void);
void func_017_58F0(void);
void func_017_58F8(void);
void func_017_590B(void);
void func_017_5938(void);
void ret_017_594F(void);
void Data_017_5950(void);
void Data_017_5960(void);
void func_017_5970(void);
void jr_017_598F(void);
void func_017_59A9(void);
void Data_017_59DD(void);
void Data_017_59ED(void);
void func_017_59FD(void);
void jr_017_5A1B(void);
void jr_017_5A32(void);
void jr_017_5A37(void);
void func_017_5A66(void);
void func_017_5ACD(void);
void CreditsWaterAppearingHandler(void);
void func_017_5B00(void);
void Data_017_5B0F(void);
void CreditsLoadBGMap(void);
void Data_017_5B32(void);
void func_017_5B37(void);
void Data_017_5B54(void);
void Data_017_5B57(void);
void CreditsWaterSplashingHandler(void);
void func_017_5B96(void);
void label_017_5BD0(void);
void func_017_5BE2(void);
void Data_017_5BED(void);
void Data_017_5EED(void);
void CreditsWaterMovingUpHandler(void);
void Data_017_5F99(void);
void Data_017_5FA9(void);
void Data_017_5FB9(void);
void CreditsWaterFadeToWhiteHandler(void);
void jr_017_5FFF(void);
void CreditsWaterNoiseFadingOutHandler(void);
void CreditsLinkOnSeaLargeHandler(void);
void LinkOnSeaLarge0Handler(void);
void LinkOnSeaLarge1Handler(void);
void Data_017_60CA(void);
void Data_017_60DA(void);
void LinkOnSeaLarge2Handler(void);
void LinkOnSeaLarge3Handler(void);
void CreditsSunAboveHandler(void);
void CreditsSunAbove0Handler(void);
void CreditsSunAbove1Handler(void);
void Data_017_61AD(void);
void Data_017_61C1(void);
void CreditsSunAbove2Handler(void);
void jr_017_61FE(void);
void CreditsSunAbove3Handler(void);
void CreditsSunAbove4Handler(void);
void CreditsLinkOnSeaCloseHandler(void);
void jr_017_6271(void);
void func_017_6292(void);
void func_017_629E(void);
void Data_017_634C(void);
void Data_017_637C(void);
void func_017_63BC(void);
void jr_017_63EE(void);
void jr_017_63F1(void);
void func_017_63FB(void);
void label_017_6401(void);
void ret_017_6405(void);
void Data_017_6406(void);
void Data_017_6412(void);
void func_017_641E(void);
void ret_017_6446(void);
void func_017_6447(void);
void Data_017_6456(void);
void Data_017_6466(void);
void func_017_6476(void);
void jr_017_64B3(void);
void func_017_64D8(void);
void TransitionToNextEndingScene(void);
void Data_017_651E(void);
void Data_017_6554(void);
void Data_017_658A(void);
void Data_017_65C0(void);
void Data_017_65F6(void);
void Data_017_662C(void);
void Data_017_6662(void);
void Data_017_6698(void);
void Data_017_66CE(void);
void Data_017_6704(void);
void Data_017_6716(void);
void Data_017_674C(void);
void Data_017_6782(void);
void Data_017_67B8(void);
void func_017_67CA(void);
void ret_017_6808(void);
void CreditsLinkSeatedOnLogHandler(void);
void LinkSeatedOnLog0Handler(void);
void LinkSeatedOnLog1Handler(void);
void LinkSeatedOnLog2Handler(void);
void jr_017_687C(void);
void LinkSeatedOnLog3Handler(void);
void Data_017_68B7(void);
void LinkSeatedOnLog4Handler(void);
void jr_017_68EB(void);
void Data_017_6900(void);
void label_017_6A80(void);
void LinkSeatedOnLog5Handler(void);
void LinkSeatedOnLog6Handler(void);
void Data_017_6AE1(void);
void Data_017_6B41(void);
void Data_017_6BA1(void);
void LinkSeatedOnLog7Handler(void);
void func_017_6C85(void);
void LinkSeatedOnLog8Handler(void);
void ret_017_6D0A(void);
void func_017_6D0B(void);
void CreditsLinkFaceCloseUpHandler(void);
void CreditsLinkFaceCloseUp0Handler(void);
void CreditsLinkFaceCloseUp1Handler(void);
void CreditsLinkFaceCloseUp2Handler(void);
void func_017_6D7C(void);
void jr_017_6D8E(void);
void Data_017_6D9D(void);
void CreditsLinkFaceCloseUp3Handler(void);
void func_017_6DDB(void);
void CreditsLinkFaceCloseUp4Handler(void);
void ret_017_6E13(void);
void CreditsLinkFaceCloseUp5Handler(void);
void jr_017_6E40(void);
void CreditsLinkFaceCloseUp6Handler(void);
void CreditsRollHandler(void);
void CreditsRollLoadHandler(void);
void CreditsRoll1Handler(void);
void Data_017_6ED8(void);
void CreditsRoll2Handler(void);
void jr_017_6F10(void);
void CreditsRoll3Handler(void);
void ret_017_6F67(void);
void CreditsRoll4Handler(void);
void CreditsRoll5Handler(void);
void Data_017_6F6A(void);
void Data_017_6F8E(void);
void label_017_6F9F(void);
void CreditsTheEndHandler(void);
void CreditsTheEnd0Handler(void);
void CreditsTheEnd1Handler(void);
void CreditsTheEnd2Handler(void);
void CreditsTheEnd3Handler(void);
void CreditsTheEnd4Handler(void);
void Data_017_705D(void);
void Data_017_70A0(void);
void CreditsTheEnd5Handler(void);
void CreditsTheEnd6Handler(void);
void Data_017_70D1(void);
void func_017_7171(void);
void jr_017_71AC(void);
void func_017_71CD(void);
void Data_017_71DF(void);
void func_017_725F(void);
void jr_017_72BD(void);
void Data_017_72D8(void);
void func_017_7398(void);
void jr_017_73AF(void);
void Data_017_73FF(void);
void Data_017_746B(void);
void func_017_74CB(void);
void Data_017_7521(void);
void func_017_7545(void);
void ret_017_7571(void);
void Data_017_7572(void);
void func_017_75AA(void);
void ret_017_75E0(void);
void Data_017_75E1(void);
void Data_017_76AD(void);
void func_017_76DE(void);
void jr_017_76FD(void);
void Data_017_774B(void);
void func_017_7757(void);
void Data_017_7766(void);
void func_017_7772(void);
void jr_017_7784(void);
void Data_017_77A9(void);
void Data_017_77C5(void);
void Data_017_77E1(void);
void Data_017_77E9(void);
void func_017_77F1(void);
void jr_017_7826(void);
void Data_017_7838(void);
void func_017_783C(void);
void Unknow001SpriteVariants(void);
void func_017_7885(void);
void jr_017_7898(void);
void jr_017_78A1(void);
void jr_017_78B7(void);
void jr_017_78C4(void);
void jr_017_78DD(void);
void Unknown002SpriteVariants(void);
void Data_017_7907(void);
void func_017_790D(void);
void jr_017_7923(void);
void jr_017_793E(void);
void func_017_795E(void);
void func_017_7970(void);
void func_017_7971(void);
void Data_017_7987(void);
void func_017_79A7(void);
void Data_017_79C1(void);
void func_017_7A01(void);
void func_017_7A29(void);
void EndingOwlStairClimbingEntityHandler(void);
void func_017_7AB1(void);
void func_017_7AC1(void);
void func_017_7AEF(void);
void func_017_7AFA(void);
void func_017_7B06(void);
void func_017_7B41(void);
void func_017_7B43(void);
void func_017_7B5B(void);
void func_017_7B5B_2(void);
void func_017_7B5F(void);
void Data_017_7B71(void);
void Data_017_7B81(void);
void Data_017_7B91(void);
void func_017_7B99(void);
void jr_017_7BA2(void);
void Data_017_7BDB(void);
void func_017_7C1B(void);
void func_017_7C4D(void);
void Data_017_7C6B(void);
void func_017_7C7B(void);
void func_017_7C8D(void);
void func_017_7CA5(void);
void func_017_7CB7(void);
void jr_017_7CBF(void);
void label_017_7CC2(void);
void jr_017_7CC8(void);
void ret_017_7CEF(void);
void CreditsOpenDialog(void);
void Data_017_7D00(void);
void func_017_7D34(void);
void DialogArrowOAMYTable(void);
void DrawDialogArrow(void);
void ChoiceSelectionMarkerYTable(void);
void ChoiceSelectionMarkerXTable(void);
void DrawDialogChoiceMarker(void);
void UpdateEntityPosWithSpeed_17(void);
void UpdateEntityYPosWithSpeed_17(void);
void AddEntitySpeedToPos_17(void);
void AddEntityZSpeedToPos_17(void);
void CreditsBlendPalettes(void);
void jr_017_7EA0(void);
void func_017_7F30(void);
void jr_017_7F52(void);
void func_017_7FA9(void);

void Data_017_4000(void) {
    /* data: db $18, $05, $37, $20, $36, $0E, $1E, $2B, $25, $14, $1F, $12, $15, $2C, $31, $3F */;
    /* data: db $0C, $30, $01, $33, $04, $27, $08, $1D, $38, $17, $3E, $28, $11, $00, $3A, $3D */;
    /* data: db $2A, $0B, $1B, $0A, $34, $07, $22, $0F, $1C, $23, $2F, $3B, $2D, $16, $3C, $32 */;
    /* data: db $10, $29, $02, $2E, $0D, $19, $09, $26, $24, $06, $13, $21, $1A, $03, $39, $35 */;
}

void Data_017_4040(void) {
    /* data: db $7F, $BF, $DF, $EF, $F7, $FB, $FD, $FE */;
}

void Data_017_4048(void) {
    /* data: db $50, $91, $60, $90, $70, $90, $80, $90, $90, $90, $A0, $90, $F0, $91, $60, $91 */;
    /* data: db $70, $91, $80, $91, $90, $91, $A0, $91, $40, $94 */;
}

void AnimateCreditsIslandFadeTiles(void) {
    gb.regs.a = gb_read(0xFFA5);
    alu_cp8(gb.regs.a, 0x11);
    if (!GET_FLAG_C()) { jr_017_40c1(); return; };
    gb.regs.a = gb_read(0xD20B);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0E);
    gb.regs.b = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4040;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb.regs.d = gb.regs.a;
  AnimateCreditsIslandFadeTiles_loop_407D:;
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4048;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.b);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) goto AnimateCreditsIslandFadeTiles_loop_407D;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA5, gb.regs.a);
    return;
}

void Data_017_40A1(void) {
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $F3, $F3, $ED, $ED, $FF, $FF */;
}

void Data_017_40B1(void) {
    /* data: db $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FD, $FD, $FB, $FB, $FF, $FF */;
}

void jr_017_40c1(void) {
    if (!GET_FLAG_Z()) goto jr_017_40c1_jr_40c8;
    gb.regs.hl = 0x40A1;
    jr_017_40cb(); return;
  jr_017_40c1_jr_40c8:;
    gb.regs.hl = 0x40B1;
    jr_017_40cb(); return;
}

void jr_017_40cb(void) {
    gb.regs.de = 0x8C80;
    gb.regs.bc = 0x10;
    CopyData();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA5, gb.regs.a);
    DrawLinkSpriteAndReturn(); return;
    /* TODO: PUSHC  */;
}

void NewStaffRoles(void) {
    /* data: db "    1998 STAFF    " */;
    /* data: db "    SUPERVISOR    " */;
    /* data: db "     DIRECTOR     " */;
    /* data: db "  SCRIPT WRITER   " */;
    /* data: db "    PROGRAMMER    " */;
    /* data: db "CHARACTER DESIGNER" */;
    /* data: db "  SOUND COMPOSER  " */;
    /* data: db "     ART WORK     " */;
    /* data: db "TECHNICAL SUPPORT " */;
    /* data: db "  ENGLISH SCRIPT  " */;
    /* data: db "SPECIAL THANKS TO " */;
}

void DebugStaffRoles(void) {
    /* data: db "   DEBUG STAFF    " */;
}

void OriginalStaffRoles(void) {
    /* data: db "    1993 STAFF    " */;
    /* data: db " DUNGEON DESIGNER " */;
    /* data: db "   ILLUSTRATOR    " */;
    /* data: db "     PRODUCER     " */;
    /* data: db "EXECUTIVE PRODUCER" */;
    /* data: db "                  " */;
}

void NewStaffPeople(void) {
    /* data: db "                  " */;
    /* data: db "  TAKASHI TEZUKA  " */;
    /* data: db "YOSINORI TUTIYAMA " */;
    /* data: db " NOBUO MATSUMIYA  " */;
    /* data: db "    EIJI NOTO     " */;
    /* data: db "   KIYOSHI KODA   " */;
    /* data: db "SIGEHIRO KASAMATU " */;
    /* data: db "  MIKIO MISHIMA   " */;
    /* data: db "   KYOKO KIMURA   " */;
    /* data: db "   YUICHI OZAKI   " */;
    /* data: db "   KEIKO IZAWA    " */;
    /* data: db "   N KOGANEZAWA   " */;
    /* data: db "   JIM WORNELL    " */;
    /* data: db "   KEIKO TAMURA   " */;
    /* data: db "    TAMAYO ITO    " */;
    /* data: db "  AKIYA SAKAMOTO  " */;
    /* data: db " R&D2 DEBUG STAFF " */;
    /* data: db " SUPER MARIO CLUB " */;
    /* data: db "YASUHISA YAMAMURA " */;
    /* data: db "  KENSUKE TANABE  " */;
    /* data: db " YOSHIAKI KOIZUMI " */;
    /* data: db "  KAZUAKI MORITA  " */;
    /* data: db "TAKAMITSU KUZUHARA" */;
    /* data: db " MASANAO ARIMOTO  " */;
    /* data: db "  SHIGEFUMI HINO  " */;
    /* data: db "  KAZUMI TOTAKA   " */;
    /* data: db "  MINAKO HAMANO   " */;
    /* data: db "  KOZUE ISHIKAWA  " */;
    /* data: db "  YOUICHI KOTABE  " */;
    /* data: db "    DAN OWSEN     " */;
    /* data: db " TOSHIHIKO NAKAGO " */;
    /* data: db "    KOJI KONDO    " */;
    /* data: db " TOMOAKI KUROUME  " */;
    /* data: db " MASAICHI OKUMURA " */;
    /* data: db "    KANAE WADA    " */;
    /* data: db " SHIGERU MIYAMOTO " */;
    /* data: db " HIROSHI YAMAUCHI " */;
    /* data: db "THE  END          " */;
    /* TODO: POPC  */;
}

void func_017_448B(void) {
    gb.regs.a = gb_read(0xD209);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD21E);
  func_017_448B_jr_4493:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_017_448B_jr_449C;
    LayoutRoleLetters();
    LayoutStaffLetters();
  func_017_448B_jr_449C:;
    gb.regs.a = gb_read(0xD212);
    switch(gb.regs.a) {
        case 0x00: func_017_44FC(); return;
        case 0x01: func_017_457D(); return;
        case 0x02: func_017_4594(); return;
        case 0x03: func_017_45BA(); return;
        case 0x04: func_017_4630(); return;
        case 0x05: func_017_4678(); return;
    }
}

void Data_017_44AC(void) {
    /* data: db $00, $01, $02, $03, $04, $04, $04, $05, $05, $06, $07, $08, $09, $09, $09, $0A */;
    /* data: db $0A, $0B, $0C, $02, $0D, $03, $03, $04, $04, $05, $05, $06, $06, $06, $0E, $09 */;
    /* data: db $0A, $0A, $0A, $0A, $0A, $0F, $10, $11 */;
}

void Data_017_44D4(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $06, $07, $08, $09, $0A, $0B, $0C, $0D, $0E, $0F */;
    /* data: db $10, $11, $00, $01, $12, $13, $14, $15, $16, $17, $18, $19, $1A, $1B, $1C, $1D */;
    /* data: db $1E, $1F, $20, $21, $22, $23, $24, $25 */;
}

void func_017_44FC(void) {
    gb.regs.a = gb_read(0xD208);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.c = 0;
    gb.regs.a = gb_read(0xD20A);
    gb.regs.e = gb.regs.a;
    alu_cp8(gb.regs.a, 0x25);
  func_017_44FC_jr_4509:;
    if (GET_FLAG_C()) { jr_017_4519(); return; };
    alu_cp8(gb.regs.a, 0x27);
    if (!GET_FLAG_Z()) goto func_017_44FC_jr_4514;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_4519(); return; };
  func_017_44FC_jr_4514:;
    gb.regs.a = 0x0C;
    gb_write(0xD21E, gb.regs.a);
    jr_017_4519(); return;
}

void jr_017_4519(void) {
    gb.regs.d = 0;
    gb.regs.hl = 0x44AC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xD210);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_017_4519_jr_4526;
    gb.regs.c = alu_inc8(gb.regs.c);
  jr_017_4519_jr_4526:;
    gb.regs.a = gb.regs.c;
    gb_write(0xD205, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD210, gb.regs.a);
    gb.regs.hl = 0x44D4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD211, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    func_017_45B5(); return;
}

void Data_017_453D(void) {
    /* data: db $00, $00, $00, $00, $04, $04, $04, $04, $19, $19, $19, $19, $1E, $1E, $1E, $1E */;
    /* data: db $FF, $FF, $FF, $FF, $AF, $AF, $AF, $AF, $5A, $5A, $5A, $5A, $1E, $1E, $1E, $1E */;
    /* data: db $1E, $1E, $1E, $1E, $19, $19, $19, $19, $04, $04, $04, $04, $00, $00, $00, $00 */;
}

void Data_017_456D(void) {
    /* data: db $1E, $1E, $1E, $1E, $6F, $6F, $6F, $6F, $BF, $BF, $BF, $BF, $FF, $FF, $FF, $FF */;
}

void func_017_457D(void) {
    gb.regs.a = 0xB0;
    gb_write(0xD208, gb.regs.a);
    func_017_45B5();
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 0x27);
    if (!GET_FLAG_Z()) goto func_017_457D_jr_458E;
    gb_write(gb.regs.hl, 4);
  func_017_457D_jr_458E:;
    gb.regs.a = 0x1E;
    gb_write(0xDC41, gb.regs.a);
    return;
}

void func_017_4594(void) {
    gb.regs.a = gb_read(0xD208);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.c = 0;
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x44AC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xD210);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_017_4594_jr_45AD;
    gb.regs.c = alu_inc8(gb.regs.c);
  func_017_4594_jr_45AD:;
    gb.regs.a = gb.regs.c;
    gb_write(0xD205, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    func_017_45B5(); return;
}

void func_017_45B5(void) {
    gb.regs.hl = 0xD212;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void func_017_45BA(void) {
    gb.regs.a = gb_read(0xD20A);
    gb_write(0xFFE4, gb.regs.a);
    alu_cp8(gb.regs.a, 0x26);
    if (GET_FLAG_C()) { jr_017_45F9(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_45E8(); return; };
    gb.regs.hl = 0xDBFF;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) { jr_017_45F9(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_017_4612(); return; };
    func_017_7FA9();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto func_017_45BA_jr_45E3;
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
  func_017_45BA_jr_45E3:;
    gb.regs.a = gb_read(0xD20A);
    gb_write(0xFFE4, gb.regs.a);
    jr_017_45E8(); return;
}

void jr_017_45E8(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_017_4612(); return; };
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) { jr_017_4612(); return; };
}

void jr_017_45F9(void) {
    gb.regs.a = gb_read(0xFFE4);
    alu_cp8(gb.regs.a, 0x26);
    gb.regs.a = 0x10;
    if (GET_FLAG_C()) goto jr_017_45F9_jr_4603;
    gb.regs.a = 0x80;
  jr_017_45F9_jr_4603:;
    gb_write(0xD208, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xD212, gb.regs.a);
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    jr_017_4612(); return;
}

void jr_017_4612(void) {
    gb.regs.a = gb_read(0xD200);
    gb.regs.e = gb.regs.a;
    /* TODO: CREDITS_MACRO  */;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xFFE4);
    alu_cp8(gb.regs.a, 0x26);
    if (GET_FLAG_C()) goto jr_017_4612_ret_462F;
    gb.regs.hl = 0x456D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
  jr_017_4612_ret_462F:;
    return;
}

void func_017_4630(void) {
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xE0);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { func_017_45B5(); return; };
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xF8);
    gb.regs.hl = 0xDBFF;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_017_4630_jr_466A;
    gb.regs.a = 0x3C;
    jr_017_466B(); return;
  func_017_4630_jr_466A:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    jr_017_466B(); return;
}

void jr_017_466B(void) {
    gb_write(0xD21E, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD20E, gb.regs.a);
    ResetCreditsSceneVariables();
    IncrementCreditsGameplaySubtype(); return;
}

void func_017_4678(void) {
    return;
}

void CreditsRolesCharmap(void) {
    /* data: db $40 */;
    /* data: db $18 */;
    /* data: db $41 */;
    /* data: db $42 */;
    /* data: db $43 */;
    /* data: db $19 */;
    /* data: db $44 */;
    /* data: db $45 */;
    /* data: db $46 */;
    /* data: db $00 */;
    /* data: db $47 */;
    /* data: db $48 */;
    /* data: db $49 */;
    /* data: db $4A */;
    /* data: db $4B */;
    /* data: db $50 */;
    /* data: db $00 */;
    /* data: db $51 */;
    /* data: db $52 */;
    /* data: db $53 */;
    /* data: db $54 */;
    /* data: db $55 */;
    /* data: db $2F */;
    /* data: db $3F */;
    /* data: db $00 */;
    /* data: db $00 */;
    /* data: db $00 */;
    /* data: db $1A */;
    /* data: db $00 */;
    /* data: db $1C */;
    /* data: db $00 */;
    /* data: db $00 */;
    /* data: db $00 */;
    /* data: db $00 */;
    /* data: db $1D */;
    /* data: db $1B */;
}

void LayoutRoleLetters(void) {
    gb.regs.a = gb_read(0xD210);
    alu_cp8(gb.regs.a, -1);
    if (GET_FLAG_Z()) return;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFE);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.d = gb.regs.a;
    gb.regs.hl = 0x40EB;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xC030;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LayoutRoleLetters_oamEnd;
    gb.regs.de = 0xC000;
  LayoutRoleLetters_oamEnd:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = 0x10;
    if (GET_FLAG_Z()) goto LayoutRoleLetters_oddFrameEnd;
    gb.regs.hl++;
    gb.regs.a = 0x18;
  LayoutRoleLetters_oddFrameEnd:;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.c = 9;
  LayoutRoleLetters_loop:;
    gb.regs.a = 0x40;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.hl++;
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    alu_cp8(gb.regs.a, 0x2E);
    if (!GET_FLAG_Z()) goto LayoutRoleLetters_jr_017_46EA;
    gb.regs.a = 0x14;
    goto LayoutRoleLetters_jr_017_4708;
  LayoutRoleLetters_jr_017_46EA:;
    alu_cp8(gb.regs.a, 0x30);
    if (GET_FLAG_C()) goto LayoutRoleLetters_jr_017_46F6;
    alu_cp8(gb.regs.a, 0x3A);
    if (!GET_FLAG_C()) goto LayoutRoleLetters_jr_017_46F6;
    gb.regs.a = alu_sub8(gb.regs.a, 0x30);
    gb.regs.a = alu_add8(gb.regs.a, 0x1A);
    goto LayoutRoleLetters_jr_017_4700;
  LayoutRoleLetters_jr_017_46F6:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto LayoutRoleLetters_jr_017_46FE;
    gb.regs.a = 0x0F;
    goto LayoutRoleLetters_jr_017_4708;
  LayoutRoleLetters_jr_017_46FE:;
    gb.regs.a = alu_sub8(gb.regs.a, 0x41);
  LayoutRoleLetters_jr_017_4700:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x42DF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
  LayoutRoleLetters_jr_017_4708:;
    gb.regs.de = gb_pop16();
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 0x10;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto LayoutRoleLetters_loop;
    return;
}

void CreditsStaffCharmap(void) {
    /* data: db $20, $30 */;
    /* data: db $21, $31 */;
    /* data: db $22, $22 */;
    /* data: db $23, $33 */;
    /* data: db $24, $34 */;
    /* data: db $24, $35 */;
    /* data: db $22, $32 */;
    /* data: db $36, $30 */;
    /* data: db $27, $27 */;
    /* data: db $28, $38 */;
    /* data: db $29, $39 */;
    /* data: db $16, $17 */;
    /* data: db $2A, $3A */;
    /* data: db $2B, $3B */;
    /* data: db $20, $20 */;
    /* data: db $21, $35 */;
    /* data: db $00, $00 */;
    /* data: db $21, $26 */;
    /* data: db $2C, $3C */;
    /* data: db $2D, $3D */;
    /* data: db $36, $20 */;
    /* data: db $00, $00 */;
    /* data: db $2E, $3E */;
    /* data: db $00, $00 */;
    /* data: db $36, $25 */;
    /* data: db $37, $37 */;
    /* data: db $14, $15 */;
    /* data: db $12, $13 */;
}

void CreditsStaffAttrmap(void) {
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $50 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $50, $10 */;
    /* data: db $10, $50 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $50 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $50, $50 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
    /* data: db $50, $10 */;
    /* data: db $10, $70 */;
    /* data: db $10, $10 */;
    /* data: db $10, $10 */;
}

void LayoutStaffLetters(void) {
    gb.regs.a = gb_read(0xD211);
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFE);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    alu_rla();
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.d = gb.regs.a;
    gb.regs.hl = 0x40FD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.de = 0xC054;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LayoutStaffLetters_topOAMBufferEnd;
    gb.regs.de = 0xC024;
  LayoutStaffLetters_topOAMBufferEnd:;
    gb.regs.a = 0x55;
    LayoutRowOfStaffLetters();
    gb.regs.hl = 0xFFD8;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = gb_pop16();
    gb.regs.de = 0xC078;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LayoutStaffLetters_bottomOAMBufferEnd;
    gb.regs.de = 0xC048;
  LayoutStaffLetters_bottomOAMBufferEnd:;
    gb.regs.a = 0x5D;
    LayoutRowOfStaffLetters(); return;
}

void LayoutRowOfStaffLetters(void) {
    gb_write(0xFFE9, gb.regs.a);
    gb.regs.c = 0x12;
    gb.regs.b = 8;
    gb.regs.a = gb_read(0xD211);
    alu_cp8(gb.regs.a, 0x25);
    gb.regs.a = 0x38;
    if (GET_FLAG_Z()) goto LayoutRowOfStaffLetters_jr_017_47E6;
    gb.regs.c = 9;
    gb.regs.b = 0x10;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = 0x10;
    if (GET_FLAG_Z()) goto LayoutRowOfStaffLetters_jr_017_47E6;
    gb.regs.hl++;
    gb.regs.a = 0x18;
  LayoutRowOfStaffLetters_jr_017_47E6:;
    gb_write(0xFFD7, gb.regs.a);
  LayoutRowOfStaffLetters_loop:;
    gb.regs.a = gb_read(0xFFE9);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.b);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xD211);
    alu_cp8(gb.regs.a, 0x25);
    gb.regs.a = gb_read(gb.regs.hl++);
    if (GET_FLAG_Z()) goto LayoutRowOfStaffLetters_jr_017_47FC;
    gb.regs.hl++;
  LayoutRowOfStaffLetters_jr_017_47FC:;
    gb_push16(gb.regs.hl);
    gb_push16(gb.regs.de);
    alu_cp8(gb.regs.a, 0x26);
    if (!GET_FLAG_Z()) goto LayoutRowOfStaffLetters_jr_017_4806;
    gb.regs.a = 0x1F;
    goto LayoutRowOfStaffLetters_jr_017_4818;
  LayoutRowOfStaffLetters_jr_017_4806:;
    alu_cp8(gb.regs.a, 0x32);
    if (!GET_FLAG_Z()) goto LayoutRowOfStaffLetters_jr_017_480E;
    gb.regs.a = 0x20;
    goto LayoutRowOfStaffLetters_jr_017_4818;
  LayoutRowOfStaffLetters_jr_017_480E:;
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto LayoutRowOfStaffLetters_jr_017_4816;
    gb.regs.a = 0x13;
    goto LayoutRowOfStaffLetters_jr_017_482D;
  LayoutRowOfStaffLetters_jr_017_4816:;
    gb.regs.a = alu_sub8(gb.regs.a, 0x41);
  LayoutRowOfStaffLetters_jr_017_4818:;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.hl = 0xFFD8;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x43E4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.hl = 0x43AC;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
  LayoutRowOfStaffLetters_jr_017_482D:;
    gb.regs.de = gb_pop16();
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFE8);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto LayoutRowOfStaffLetters_loop;
    return;
}

void func_017_4839(void) {
    gb.regs.a = gb_read(0xC114);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xC0);
    if (GET_FLAG_C()) goto func_017_4839_jr_4846;
    gb.regs.a = 0x0F;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_017_4839_jr_4846:;
    gb_write(0xC114, gb.regs.a);
    gb.regs.a = gb_read(0xD466);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_017_4839_jr_485D;
    gb.regs.a = 0x21;
    gb_write(0xFFF2, gb.regs.a);
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    gb.regs.a = alu_add8(gb.regs.a, 0x50);
    gb_write(0xD466, gb.regs.a);
  func_017_4839_jr_485D:;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD466, gb.regs.a);
    return;
}

void Data_017_4862(void) {
    /* data: db $92, $93, $92, $93, $92, $93, $92, $93, $92, $93, $92, $93, $92, $93, $92, $93 */;
    /* data: db $92, $93, $92, $93, $92 */;
}

void Data_017_4877(void) {
    /* data: db $82, $83, $82, $83, $82, $83, $82, $83, $82, $83, $82, $83, $82, $83, $82, $83 */;
    /* data: db $82, $83, $82, $83, $82 */;
}

void func_017_488C(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) { ret_017_48CC(); return; };
    gb_push16(gb.regs.de);
    gb.regs.hl = 0xD5C2;
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x13;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de = 0x4862;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto func_017_488C_jr_48A9;
    gb.regs.de++;
  func_017_488C_jr_48A9:;
    gb.regs.c = 0x14;
  func_017_488C_loop_48AB:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_017_488C_loop_48AB;
    gb.regs.de = gb_pop16();
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x13;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de = 0x4877;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto func_017_488C_jr_48C4;
    gb.regs.de++;
  func_017_488C_jr_48C4:;
    gb.regs.c = 0x14;
  func_017_488C_loop_48C6:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_017_488C_loop_48C6;
    gb_write(gb.regs.hl, gb.regs.c);
    ret_017_48CC(); return;
}

void ret_017_48CC(void) {
    return;
}

void Data_017_48CD(void) {
    /* data: db $F4, $F4, $F5, $F6, $F7, $F7, $F8, $F8, $F8, $F8, $F7, $F7, $F6, $F5, $F4, $F4 */;
}

void ApplyWindFishVfx(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x48CD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 5);
    gb_write(0xFF42, gb.regs.a);
    gb_write(0xFFE8, gb.regs.a);
    gb.regs.a = gb_read(0xC17F);
    alu_cp8(gb.regs.a, 0xFE);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC180);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC180, gb.regs.a);
    gb.regs.a = gb_read(0xD205);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.hl = 0xC17C;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_017_4964(); return; };
}

void jr_017_4911(void) {
    loop_start: ;
    gb.regs.a = gb_read(0xFF41);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb.regs.d = 0;
  jr_017_4911_loop_4919:;
    gb.regs.a = gb_read(0xC17E);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC17E, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_017_4911_loop_4919;
    gb.regs.a = gb_read(0xC17C);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(0xC17C, gb.regs.a);
    gb.regs.a = gb_read(0xC17D);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(0xC17D, gb.regs.a);
    gb.regs.a = gb_read(0xC17C);
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) goto jr_017_4911_jr_4960;
    gb.regs.hl = 0xC180;
    gb.regs.a = gb_read(0xC17C);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.hl = 0xFFD8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x49B7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xFF96;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF43, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.hl = 0xFFE8;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF42, gb.regs.a);
    goto loop_start;
  jr_017_4911_jr_4960:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF43, gb.regs.a);
    return;
}

void jr_017_4964(void) {
    loop_start: ;
    gb.regs.a = gb_read(0xFF41);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb.regs.d = 0;
  jr_017_4964_loop_496C:;
    gb.regs.a = gb_read(0xC17E);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC17E, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_017_4964_loop_496C;
    gb.regs.a = gb_read(0xC17C);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(0xC17C, gb.regs.a);
    gb.regs.a = gb_read(0xC17D);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(0xC17D, gb.regs.a);
    gb.regs.a = gb_read(0xC17C);
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_Z()) goto jr_017_4964_jr_49B3;
    gb.regs.hl = 0xC180;
    gb.regs.a = gb_read(0xC17C);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.hl = 0xFFD8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x49B7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xFF96;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF43, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.hl = 0xFFE8;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF42, gb.regs.a);
    goto loop_start;
  jr_017_4964_jr_49B3:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF43, gb.regs.a);
    return;
}

void Data_017_49B7(void) {
    /* data: db $00, $05, $09, $0C, $0D, $0E, $0E, $0F, $0F, $0F, $0E, $0E, $0D, $0C, $09, $05 */;
    /* data: db $00, $FB, $F7, $F4, $F3, $F2, $F2, $F1, $F1, $F1, $F2, $F2, $F3, $F4, $F7, $FB */;
    /* data: db $00, $04, $07, $09, $0B, $0C, $0C, $0D, $0D, $0D, $0C, $0C, $0B, $09, $07, $04 */;
    /* data: db $00, $FC, $F9, $F7, $F5, $F4, $F4, $F3, $F3, $F3, $F4, $F4, $F5, $F7, $F9, $FC */;
    /* data: db $00, $03, $05, $07, $08, $09, $0A, $0B, $0B, $0B, $0A, $09, $08, $07, $05, $03 */;
    /* data: db $00, $FD, $FB, $F9, $F8, $F7, $F6, $F5, $F5, $F5, $F6, $F7, $F8, $F9, $FB, $FD */;
    /* data: db $00, $03, $05, $06, $07, $08, $08, $09, $09, $09, $08, $08, $07, $06, $05, $03 */;
    /* data: db $00, $FD, $FB, $FA, $F9, $F8, $F8, $F7, $F7, $F7, $F8, $F8, $F9, $FA, $FB, $FD */;
    /* data: db $00, $02, $04, $05, $05, $06, $06, $07, $07, $07, $06, $06, $05, $05, $04, $02 */;
    /* data: db $00, $FE, $FC, $FB, $FB, $FA, $FA, $F9, $F9, $F9, $FA, $FA, $FB, $FB, $FC, $FE */;
    /* data: db $00, $01, $02, $03, $03, $04, $04, $05, $05, $05, $04, $04, $03, $03, $02, $01 */;
    /* data: db $00, $FF, $FE, $FD, $FD, $FC, $FC, $FB, $FB, $FB, $FC, $FC, $FD, $FD, $FE, $FF */;
    /* data: db $00, $01, $01, $01, $02, $02, $02, $03, $03, $03, $02, $02, $02, $01, $01, $01 */;
    /* data: db $00, $FF, $FF, $FF, $FE, $FE, $FE, $FD, $FD, $FD, $FE, $FE, $FE, $FF, $FF, $FF */;
    /* data: db $00, $00, $00, $00, $01, $01, $01, $01, $01, $01, $01, $01, $01, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $00, $00, $00 */;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto Data_017_49B7_debugResetEnd;
    gb.regs.a = gb_read(4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto Data_017_49B7_debugResetEnd;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3E, gb.regs.a);
  Data_017_49B7_debugResetEnd:;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto Data_017_49B7_debugSkipEnd;
    gb.regs.a = gb_read(4);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto Data_017_49B7_debugSkipEnd;
    TransitionToNextEndingScene();
  Data_017_49B7_debugSkipEnd:;
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto Data_017_49B7_decrementwD006End;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD206, gb.regs.a);
  Data_017_49B7_decrementwD006End:;
    gb.regs.a = gb_read(0xD207);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto Data_017_49B7_decrementwD007End;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD207, gb.regs.a);
  Data_017_49B7_decrementwD007End:;
    gb.regs.a = gb_read(0xD208);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto Data_017_49B7_decrementwD008End;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD208, gb.regs.a);
  Data_017_49B7_decrementwD008End:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto Data_017_49B7_decrementwD009End;
    gb.regs.a = gb_read(0xD209);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto Data_017_49B7_decrementwD009End;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD209, gb.regs.a);
  Data_017_49B7_decrementwD009End:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto Data_017_49B7_decrementwD013End;
    gb.regs.a = gb_read(0xD213);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto Data_017_49B7_decrementwD013End;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD213, gb.regs.a);
  Data_017_49B7_decrementwD013End:;
    gb.regs.a = gb_read(0xD21E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto Data_017_49B7_jr_4B22;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD21E, gb.regs.a);
    gb.regs.hl = 0xD208;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  Data_017_49B7_jr_4B22:;
    gb.regs.a = gb_read(0xDC3E);
    switch(gb.regs.a) {
        case 0x00: CreditsInitHandler(); return;
        case 0x01: CreditsFadeoutHandler(); return;
        case 0x02: CreditsWindFishHandler(); return;
        case 0x03: CreditsSunAboveHandler(); return;
        case 0x04: CreditsLinkOnSeaLargeHandler(); return;
        case 0x05: CreditsLinkOnSeaCloseHandler(); return;
        case 0x06: CreditsLinkSeatedOnLogHandler(); return;
        case 0x07: CreditsLinkFaceCloseUpHandler(); return;
        case 0x08: CreditsRollHandler(); return;
        case 0x09: CreditsTheEndHandler(); return;
    }
}

void Data_017_4B3A(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01 */;
    /* data: db $01, $01, $00, $00, $00, $00, $00, $00, $00, $00, $01, $01, $01, $01, $01, $01 */;
    /* data: db $01, $01, $00, $01, $01, $01, $01, $01, $01, $00, $01, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $00, $01, $01, $01, $01, $01, $01, $00, $01, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $00, $01, $01, $01, $01, $01, $01, $00, $01, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $00, $00, $00, $00, $00, $00, $00, $00, $01, $00, $00, $00, $00, $00 */;
}

void Data_017_4BBA(void) {
    /* TODO: CREDITS_FADE $E4, $94, $40, $00 */;
}

void Data_017_4BCA(void) {
    /* TODO: CREDITS_FADE $1C, $18, $04, $00 */;
}

void CreditsInitHandler(void) {
    ResetCreditsSceneVariables();
    IncrementCreditsGameplaySubtype(); return;
}

void CreditsFadeoutHandler(void) {
    AnimateEntitiesAndRestoreBank17();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_017_4C03(); return; };
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD201, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) goto CreditsFadeoutHandler_jr_4BF7;
    label_017_4C22(); return;
  CreditsFadeoutHandler_jr_4BF7:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_4C03(); return; };
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_dec8(gb.regs.a);
    func_017_7F30(); return;
}

void jr_017_4C03(void) {
    gb.regs.a = gb_read(0xD201);
    gb.regs.e = gb.regs.a;
    /* TODO: CREDITS_MACRO  */;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4BBA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.hl = 0x4BCA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    return;
}

void label_017_4C22(void) {
    ClearLowerAndMiddleWRAM();
    gb.regs.hl = 0xD7B5;
    gb.regs.de = 0x4B3A;
    gb.regs.c = 0x80;
    gb.regs.a = 1;
  label_017_4C22_loop_4C2F:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto label_017_4C22_loop_4C2F;
    label_27F2();
    gb.regs.a = 1;
    gb_write(0xFFFF, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xFF45, gb.regs.a);
    gb.regs.hl = 0xD7B2;
    gb_write(gb.regs.hl, alu_res(3, gb_read(gb.regs.hl)));
    ResetCreditsSceneVariables();
    IncrementCreditsGameplaySubtype();
    gb.regs.a = 0x59;
    gb_write(0xD368, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xC16B, gb.regs.a);
    return;
}

void IncrementCreditsGameplaySubtype(void) {
    gb.regs.hl = 0xDC3E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    IncrementCreditsGameplaySubtypeAndReturn(); return;
}

void IncrementCreditsGameplaySubtypeAndReturn(void) {
    gb.regs.hl = 0xDC3E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void CreditsWindFishHandler(void) {
    gb.regs.a = 0x80;
    gb_write(0xDBFE, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC4D, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xC3C8, gb.regs.a);
    gb.regs.a = 0x92;
    gb_write(0xFFF6, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDC6F, gb.regs.a);
    AnimateEntitiesAndRestoreBank17();
    gb.regs.a = gb_read(0xD20E);
    switch(gb.regs.a) {
        case 0x00: CreditsStairsPrepare1Handler(); return;
        case 0x01: CreditsStairsPrepare2Handler(); return;
        case 0x02: CreditsStairsFadeInHandler(); return;
        case 0x03: CreditsStairsClimbingHandler(); return;
        case 0x04: CreditsStairsReachingPlatformHandler(); return;
        case 0x05: CreditsStairsOwlSpeechHandler(); return;
        case 0x06: CreditsWindFishPrepare1Handler(); return;
        case 0x07: CreditsWindFishPrepare2Handler(); return;
        case 0x08: CreditsWindFishPrepare3Handler(); return;
        case 0x09: CreditsWindFishApparitionHandler(); return;
        case 0x0A: CreditsWindFishFloatingHandler(); return;
        case 0x0B: CreditsWindFishSpeechHandler(); return;
        case 0x0C: CreditsWindFishPrepareDisapparitionHandler(); return;
        case 0x0D: CreditsWindFishDisapparitionHandler(); return;
        case 0x0E: CreditsWindFishDisappearedHandler(); return;
        case 0x0F: CreditsPlayInstrumentsDialogHandler(); return;
        case 0x10: CreditsLinkTurnsToPlayHandler(); return;
        case 0x11: CreditsLinkPreparesToPlayHandler(); return;
        case 0x12: CreditsLinkShowsInstrumentsHandler(); return;
        case 0x13: CreditsInstrumentsPlayingHandler(); return;
        case 0x14: CreditsWaterAppearingHandler(); return;
        case 0x15: CreditsWaterSplashingHandler(); return;
        case 0x16: CreditsWaterMovingUpHandler(); return;
        case 0x17: CreditsWaterFadeToWhiteHandler(); return;
        case 0x18: CreditsWaterNoiseFadingOutHandler(); return;
    }
}

void CreditsStairsPrepare1Handler(void) {
    gb.regs.a = 0xFF;
    gb_write(0xDC42, gb.regs.a);
    gb.regs.a = 0x1F;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xC155, gb.regs.a);
    gb_write(0xC156, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb.regs.hl = 0xC124;
    gb.regs.e = 0;
  CreditsStairsPrepare1Handler_loop:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto CreditsStairsPrepare1Handler_loop;
}

void IncrementCreditsSubscene(void) {
    gb.regs.hl = 0xD20E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    IncrementCreditsSubsceneAndReturn(); return;
}

void IncrementCreditsSubsceneAndReturn(void) {
    gb.regs.hl = 0xD20E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void CreditsStairsPrepare2Handler(void) {
    gb.regs.a = 0x16;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xE0);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x50;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x98;
    gb_write(0xFF99, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void Data_017_4D09(void) {
    /* data: db $00, $00, $01, $01, $16, $16, $27, $27, $27, $27, $27, $27, $27, $27 */;
}

void Data_017_4D19(void) {
    /* TODO: CREDITS_FADE $00, $04, $18, $1C */;
}

void Data_017_4D29(void) {
    /* TODO: CREDITS_FADE $00, $00, $50, $90 */;
}

void CreditsStairsFadeInHandler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_Z()) goto CreditsStairsFadeInHandler_fadeInDMGPalettes;
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD201, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto CreditsStairsFadeInHandler_jr_017_4D52;
    IncrementCreditsSubscene();
  CreditsStairsFadeInHandler_jr_017_4D52:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreditsStairsFadeInHandler_fadeInDMGPalettes;
    gb.regs.a = gb_read(0xD201);
    gb.regs.a = alu_dec8(gb.regs.a);
    CreditsBlendPalettes(); return;
  CreditsStairsFadeInHandler_fadeInDMGPalettes:;
    gb.regs.a = gb_read(0xD201);
    gb.regs.e = gb.regs.a;
    /* TODO: CREDITS_MACRO  */;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4D09;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x4D19;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.hl = 0x4D29;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC41, gb.regs.a);
    CreditsStairsClimbingHandler(); return;
}

void CreditsStairsClimbingHandler(void) {
    gb.regs.a = gb_read(0xD203);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    gb_write(0xD203, gb.regs.a);
    if (!GET_FLAG_C()) goto CreditsStairsClimbingHandler_jr_4D8F;
    gb.regs.hl = 0xC21E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  CreditsStairsClimbingHandler_jr_4D8F:;
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_add8(gb.regs.a, 0x40);
    gb_write(0xD202, gb.regs.a);
    if (!GET_FLAG_C()) { ret_017_4DD0(); return; };
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    alu_cp8(gb.regs.a, 0x90);
    if (!GET_FLAG_Z()) { ret_017_4DD0(); return; };
    IncrementCreditsSubscene();
    ResetCreditsSceneVariables(); return;
}

void ResetCreditsSceneVariables(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    gb_write(0xD201, gb.regs.a);
    gb_write(0xD202, gb.regs.a);
    gb_write(0xD203, gb.regs.a);
    gb_write(0xD204, gb.regs.a);
    gb_write(0xD205, gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    gb_write(0xD20B, gb.regs.a);
    gb_write(0xD20C, gb.regs.a);
    gb_write(0xD20D, gb.regs.a);
    gb_write(0xD206, gb.regs.a);
    gb_write(0xD207, gb.regs.a);
    gb_write(0xD208, gb.regs.a);
    gb_write(0xD209, gb.regs.a);
    ret_017_4DD0(); return;
}

void ret_017_4DD0(void) {
    return;
}

void Data_017_4DD1(void) {
    /* data: db $98, $00, $53, $A0, $98, $20, $53, $A0, $98, $40, $53, $A0, $98, $60, $53, $A0 */;
    /* data: db $98, $80, $53, $A0, $98, $A0, $53, $A0, $98, $C0, $53, $A0, $98, $E0, $53, $A0 */;
    /* data: db $99, $00, $53, $A0, $99, $20, $53, $A0, $99, $40, $53, $A0, $99, $60, $53, $A0 */;
    /* data: db $99, $80, $53, $A0, $99, $A0, $53, $A0, $99, $C0, $53, $A0, $99, $E0, $53, $A0 */;
    /* data: db $9A, $00, $53, $A0, $9A, $20, $53, $A0 */;
}

void CreditsStairsReachingPlatformHandler(void) {
    gb.regs.a = gb_read(0xD200);
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) goto CreditsStairsReachingPlatformHandler_jr_4E27;
    gb.regs.a = 0xF0;
    gb_write(0xFF97, gb.regs.a);
    IncrementCreditsSubscene(); return;
  CreditsStairsReachingPlatformHandler_jr_4E27:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = 0;
    gb.regs.hl = 0x4DD1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xD5C2;
    gb.regs.c = 8;
  CreditsStairsReachingPlatformHandler_loop_4E3D:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreditsStairsReachingPlatformHandler_loop_4E3D;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void CreditsStairsOwlSpeechHandler(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD214);
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) return;
    gb.regs.bc = 0xD5C2;
    gb.regs.de = 0xDD39;
    gb.regs.hl = 0x9880;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb_push16(gb.regs.af);
    gb.regs.a = gb.regs.h;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.h = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.l);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb.regs.h;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(gb.regs.bc, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.bc++;
  CreditsStairsOwlSpeechHandler_jr_4E6B:;
    gb.regs.de++;
    gb.regs.a = gb.regs.l;
    gb_write(gb.regs.bc, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.bc++;
    gb.regs.de++;
    gb.regs.a = 0x53;
    gb_write(gb.regs.bc, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.bc++;
    gb.regs.de++;
    gb.regs.a = 0xA0;
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.bc++;
    gb.regs.de++;
    gb_write(gb.regs.bc, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl = 0xD214;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void CreditsWindFishPrepare1Handler(void) {
    ResetCreditsSceneVariables();
    gb.regs.a = 8;
    gb_write(0xD206, gb.regs.a);
    func_017_4E93();
    IncrementCreditsSubscene(); return;
}

void func_017_4E93(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xDCB8;
    gb.regs.b = 0x40;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_017_4E93_loop:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto func_017_4E93_loop;
    gb.regs.hl = (0xDCC0 + _3_2);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x47;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7B, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xDE7C, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(0xDE79, gb.regs.a);
    return;
}

void Data_017_4EB8(void) {
    /* data: db $27, $27, $EB, $FF, $FF, $FF */;
}

void CreditsWindFishPrepare2Handler(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD $01 */;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4EB8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreditsWindFishPrepare2Handler_ret_4EEE;
    gb.regs.a = 8;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto CreditsWindFishPrepare2Handler_ret_4EEE;
    ResetCreditsSceneVariables();
    IncrementCreditsSubscene(); return;
  CreditsWindFishPrepare2Handler_ret_4EEE:;
    return;
}

void Data_017_4EEF(void) {
    /* data: db $9B, $C0, $13, $A0, $A0, $A0, $A0, $A0, $A0, $A0, $A0, $A0, $A0, $72, $73, $74 */;
    /* data: db $A0, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9B, $E0, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $A0, $A0, $A0, $A0, $7B, $7C, $7D, $A0, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $98, $00, $13, $A0, $A0, $A0, $A0, $A0, $A0, $A0, $05, $06, $07, $08, $09, $0A */;
    /* data: db $0B, $0C, $0D, $0E, $A0, $A0, $A0, $00, $98, $20, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $13, $14, $15, $16, $17, $18, $19, $1A, $1B, $1C, $1D, $1E, $1F, $A0, $A0, $00 */;
    /* data: db $98, $40, $13, $A0, $A0, $A0, $A0, $22, $23, $24, $25, $26, $27, $28, $29, $2A */;
    /* data: db $2B, $2C, $2D, $2E, $2F, $A0, $A0, $00, $98, $60, $13, $A0, $A0, $A0, $31, $32 */;
    /* data: db $33, $34, $35, $36, $37, $38, $39, $3A, $3B, $3C, $3D, $3E, $3F, $A0, $A0, $00 */;
    /* data: db $98, $80, $13, $A0, $A0, $40, $41, $42, $43, $44, $45, $46, $47, $48, $49, $4A */;
    /* data: db $4B, $4C, $4D, $4E, $4F, $A0, $A0, $00, $98, $A0, $13, $A0, $A0, $50, $51, $52 */;
    /* data: db $53, $54, $55, $56, $57, $58, $59, $A0, $5B, $5C, $5D, $5E, $5F, $A0, $A0, $00 */;
    /* data: db $98, $C0, $13, $A0, $A0, $60, $61, $62, $63, $64, $65, $66, $67, $68, $69, $6A */;
    /* data: db $A0, $6C, $6D, $6E, $6F, $A0, $A0, $00, $98, $E0, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $A0, $75, $76, $77, $78, $79, $7A, $A0, $A0, $A0, $7E, $AF, $A0, $A0, $00 */;
}

void Data_017_4FDF(void) {
    /* data: db $9B, $C0, $13, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $03, $03, $03 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $9B, $E0, $13, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $03, $03, $03, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $98, $00, $13, $00, $00, $00, $00, $00, $00, $00, $01, $01, $04, $05, $05, $05 */;
    /* data: db $05, $05, $04, $04, $00, $00, $00, $00, $98, $20, $13, $00, $00, $00, $00, $00 */;
    /* data: db $01, $01, $01, $07, $04, $06, $06, $06, $06, $06, $04, $04, $05, $00, $00 */;
    /* data: db $00, $98, $40, $13, $00, $00, $00, $00, $01, $07, $07, $07, $02, $04, $04, $04 */;
    /* data: db $04, $04, $04, $04, $04, $05, $00, $00, $00, $98, $60, $13, $00, $00, $00, $03 */;
    /* data: db $03, $02, $02, $02, $02, $04, $00, $02, $03, $03, $00, $00, $04, $03, $00, $00 */;
    /* data: db $00, $98, $80, $13, $00, $00, $03, $03, $03, $03, $03, $03, $04, $05, $03, $03 */;
    /* data: db $03, $03, $05, $05, $03, $03, $00, $00, $00, $98, $A0, $13, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $05, $05, $05, $05, $05, $00, $00 */;
    /* data: db $00, $98, $C0, $13, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $05, $05, $05, $05, $00, $00, $00, $98, $E0, $13, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $05, $00, $00 */;
    /* data: db $00 */;
}

void CreditsWindFishPrepare3Handler(void) {
    gb.regs.a = gb_read(0xD200);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto CreditsWindFishPrepare3Handler_jr_50F9;
    gb.regs.a = 0xF0;
    gb_write(0xFF97, gb.regs.a);
    ResetCreditsSceneVariables();
    gb.regs.a = 1;
    gb_write(0xFFFF, gb.regs.a);
    gb.regs.a = 0x56;
    gb_write(0xFF45, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xC17F, gb.regs.a);
    gb.regs.a = 9;
    gb_write(0xD20E, gb.regs.a);
    gb.regs.a = 0x1F;
    gb_write(0xFFF3, gb.regs.a);
    return;
  CreditsWindFishPrepare3Handler_jr_50F9:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4EEF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.de);
    gb.regs.de = 0xD5C2;
    gb.regs.c = 0x18;
  CreditsWindFishPrepare3Handler_loop_5115:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreditsWindFishPrepare3Handler_loop_5115;
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0x4FDF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xDD39;
    gb.regs.c = 0x18;
  CreditsWindFishPrepare3Handler_loop_5129:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreditsWindFishPrepare3Handler_loop_5129;
    return;
}

void Data_017_5130(void) {
    /* data: db $FF, $FF, $FF, $FF, $BF, $BF, $BF, $BF, $6B, $6B, $6B, $6B, $27, $27, $27, $27 */;
}

void CreditsWindFishApparitionHandler(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreditsWindFishApparitionHandler_jr_5151;
    gb.regs.a = 1;
    func_017_53A7();
    jr_017_5160(); return;
  CreditsWindFishApparitionHandler_jr_5151:;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5130;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    jr_017_5160(); return;
}

void jr_017_5160(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_017_5160_jr_5176;
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto jr_017_5160_jr_5176;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xD206, gb.regs.a);
  jr_017_5160_jr_5176:;
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_C()) goto jr_017_5160_ret_51A6;
    gb.regs.a = gb_read(0xD20B);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20B, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto jr_017_5160_ret_51A6;
    gb.regs.a = gb_read(0xD205);
    gb.regs.a = alu_add8(gb.regs.a, 0x20);
    gb_write(0xD205, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_017_5160_ret_51A6;
    gb.regs.a = 0xFE;
    gb_write(0xC17F, gb.regs.a);
    ResetCreditsSceneVariables();
    gb.regs.a = 0x40;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xFFFF, gb.regs.a);
    IncrementCreditsSubscene(); return;
  jr_017_5160_ret_51A6:;
    return;
}

void WindfishPalettes(void) {
  WindfishPalettes_step0:;
    /* rgb #000000, #007880, #383838, #F0F8E0 */;
    /* rgb #000000, #F83070, #801838, #F8F888 */;
    /* rgb #78B840, #A8A800, #383838, #F0F8E0 */;
    /* rgb #000000, #78B840, #383838, #F0F8E0 */;
    /* rgb #000000, #A00058, #383838, #F0F8E0 */;
    /* rgb #000000, #7800F8, #383838, #F0F8E0 */;
    /* rgb #A00058, #7800F8, #383838, #F0F8E0 */;
    /* rgb #A8A800, #F83070, #801838, #F0F8E0 */;
  WindfishPalettes_step1:;
    /* rgb #000000, #006870, #303030, #D0D8C0 */;
    /* rgb #000000, #D83060, #701830, #F8F888 */;
    /* rgb #68A038, #909000, #303030, #D0D8C0 */;
    /* rgb #000000, #68A038, #303030, #D0D8C0 */;
    /* rgb #000000, #900050, #303030, #D0D8C0 */;
    /* rgb #000000, #6800D8, #303030, #D0D8C0 */;
    /* rgb #900050, #6800D8, #303030, #D0D8C0 */;
    /* rgb #909000, #D83060, #701830, #D0D8C0 */;
  WindfishPalettes_step2:;
    /* rgb #000000, #005860, #282828, #B0B8A0 */;
    /* rgb #000000, #B82850, #601828, #F8F888 */;
    /* rgb #588830, #787800, #282828, #B0B8A0 */;
    /* rgb #000000, #588830, #282828, #B0B8A0 */;
    /* rgb #000000, #780040, #282828, #B0B8A0 */;
    /* rgb #000000, #5800B8, #282828, #B0B8A0 */;
    /* rgb #780040, #5800B8, #282828, #B0B8A0 */;
    /* rgb #787800, #B82850, #601828, #B0B8A0 */;
  WindfishPalettes_step3:;
    /* rgb #000000, #004850, #202020, #909080 */;
    /* rgb #000000, #902040, #501020, #F8F888 */;
    /* rgb #487028, #606000, #202020, #909080 */;
    /* rgb #000000, #487028, #202020, #909080 */;
    /* rgb #000000, #600038, #202020, #909080 */;
    /* rgb #000000, #480090, #202020, #909080 */;
    /* rgb #600038, #480090, #202020, #909080 */;
    /* rgb #606000, #902040, #501020, #909080 */;
  WindfishPalettes_step4:;
    /* rgb #000000, #003838, #181818, #687060 */;
    /* rgb #000000, #701830, #381018, #F8F888 */;
    /* rgb #385020, #484800, #181818, #687060 */;
    /* rgb #000000, #385020, #181818, #687060 */;
    /* rgb #000000, #480028, #181818, #687060 */;
    /* rgb #000000, #380070, #181818, #687060 */;
    /* rgb #480028, #380070, #181818, #687060 */;
    /* rgb #484800, #701830, #381018, #687060 */;
  WindfishPalettes_step5:;
    /* rgb #000000, #002828, #101010, #484840 */;
    /* rgb #000000, #481020, #280810, #F8F888 */;
    /* rgb #283818, #303000, #101010, #484840 */;
    /* rgb #000000, #283818, #101010, #484840 */;
    /* rgb #000000, #300020, #101010, #484840 */;
    /* rgb #000000, #280048, #101010, #484840 */;
    /* rgb #300020, #280048, #101010, #484840 */;
    /* rgb #303000, #481020, #280810, #484840 */;
  WindfishPalettes_step6:;
    /* rgb #000000, #001818, #080808, #282820 */;
    /* rgb #000000, #280810, #180808, #F8F888 */;
    /* rgb #182010, #181800, #080808, #282820 */;
    /* rgb #000000, #182010, #080808, #282820 */;
    /* rgb #000000, #180010, #080808, #282820 */;
    /* rgb #000000, #180028, #080808, #282820 */;
    /* rgb #180010, #180028, #080808, #282820 */;
    /* rgb #181800, #280810, #180808, #282820 */;
  WindfishPalettes_step7:;
    /* rgb #000000, #000000, #000000, #000000 */;
    /* rgb #000000, #000000, #000000, #F8F888 */;
    /* rgb #000000, #000000, #000000, #000000 */;
    /* rgb #000000, #000000, #000000, #000000 */;
    /* rgb #000000, #000000, #000000, #000000 */;
    /* rgb #000000, #000000, #000000, #000000 */;
    /* rgb #000000, #000000, #000000, #000000 */;
    /* rgb #000000, #000000, #000000, #000000 */;
    func_017_53A7(); return;
}

void func_017_53A7(void) {
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_017_53A7_jr_53B3;
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, 0x0F);
    jr_017_53B8(); return;
  func_017_53A7_jr_53B3:;
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    jr_017_53B8(); return;
}

void jr_017_53B8(void) {
    gb.regs.a = alu_and8(gb.regs.a, 0xFE);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.a = 0;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.b = gb.regs.a;
    gb.regs.hl = 0x4D06;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = 0x40;
    gb.regs.de = 0xDCB8;
    CopyData();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7B, gb.regs.a);
    gb.regs.a = 0x20;
    gb_write(0xDE7C, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(0xDE79, gb.regs.a);
    return;
}

void CreditsWindFishFloatingHandler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_53F2(); return; };
    IncrementCreditsSubscene();
    /* ld_dialog_low a, Dialog0D0 */;
    CreditsOpenWindFishDialog(); return;
}

void CreditsOpenWindFishDialog(void) {
    CreditsOpenDialog();
    gb.regs.a = 0x17;
    gb_write(0xFFF3, gb.regs.a);
    ret_017_53F2(); return;
}

void ret_017_53F2(void) {
    return;
}

void CreditsWindFishSpeechHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreditsWindFishSpeechHandler_ret_53FC;
    IncrementCreditsSubscene();
  CreditsWindFishSpeechHandler_ret_53FC:;
    return;
}

void CreditsWindFishPrepareDisapparitionHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreditsWindFishPrepareDisapparitionHandler_ret_541D;
    gb.regs.a = 1;
    gb_write(0xFFFF, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xC17F, gb.regs.a);
    gb.regs.a = 0xE0;
    gb_write(0xD205, gb.regs.a);
    gb.regs.a = 0x50;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = 0x1F;
    gb_write(0xFFF3, gb.regs.a);
    IncrementCreditsSubscene();
  CreditsWindFishPrepareDisapparitionHandler_ret_541D:;
    return;
}

void Data_017_541E(void) {
    /* data: db $27, $27, $27, $27, $6B, $6B, $6B, $6B, $BF, $BF, $BF, $BF, $FF, $FF, $FF, $FF */;
}

void CreditsWindFishDisapparitionHandler(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreditsWindFishDisapparitionHandler_jr_543E;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    func_017_53A7();
    jr_017_544D(); return;
  CreditsWindFishDisapparitionHandler_jr_543E:;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x541E;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    jr_017_544D(); return;
}

void jr_017_544D(void) {
    gb.regs.a = gb_read(0xD205);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_C()) goto jr_017_544D_jr_547D;
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_017_544D_jr_547D;
    gb.regs.a = 0x0C;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) goto jr_017_544D_jr_547D;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC17F, gb.regs.a);
    ResetCreditsSceneVariables();
    gb.regs.a = 0x30;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xFFFF, gb.regs.a);
    IncrementCreditsSubsceneAndReturn(); return;
  jr_017_544D_jr_547D:;
    gb.regs.a = gb_read(0xD20B);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20B, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto jr_017_544D_ret_5493;
    gb.regs.a = gb_read(0xD205);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_017_544D_ret_5493;
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb_write(0xD205, gb.regs.a);
  jr_017_544D_ret_5493:;
    return;
}

void Data_017_5494(void) {
    /* data: db $9B, $C0, $53, $A0, $9B, $E0, $53, $A0, $98, $00, $53, $A0, $98, $20, $53, $A0 */;
    /* data: db $98, $40, $53, $A0, $98, $60, $53, $A0, $98, $80, $53, $A0, $98, $A0, $53, $A0 */;
    /* data: db $98, $C0, $53, $A0, $98, $E0, $53, $A0 */;
}

void CreditsWindFishDisappearedHandler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD200);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto CreditsWindFishDisappearedHandler_jr_54D5;
    /* ld_dialog_low a, Dialog0D2 */;
    CreditsOpenWindFishDialog();
    gb.regs.a = 0x27;
    gb_write(0xDC3F, gb.regs.a);
    IncrementCreditsSubscene(); return;
  CreditsWindFishDisappearedHandler_jr_54D5:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = 0;
    gb.regs.hl = 0x5494;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xD5C2;
    gb.regs.c = 4;
  CreditsWindFishDisappearedHandler_loop_54EA:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreditsWindFishDisappearedHandler_loop_54EA;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
  CreditsWindFishDisappearedHandler_jr_54F6:;
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0x5494;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = 0xDD39;
    gb.regs.c = 3;
  CreditsWindFishDisappearedHandler_loop_5500:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreditsWindFishDisappearedHandler_loop_5500;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb_write(gb.regs.de, gb.regs.a);
    return;
}

void CreditsPlayInstrumentsDialogHandler(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreditsPlayInstrumentsDialogHandler_ret_551F;
    ResetCreditsSceneVariables();
    gb.regs.a = 3;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xFFA5, gb.regs.a);
    IncrementCreditsSubscene();
  CreditsPlayInstrumentsDialogHandler_ret_551F:;
    return;
}

void CreditsLinkTurnsToPlayHandler(void) {
    gb.regs.a = gb_read(0xD200);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto CreditsLinkTurnsToPlayHandler_jr_5532;
    ResetCreditsSceneVariables();
    gb.regs.a = 0x80;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubsceneAndReturn(); return;
  CreditsLinkTurnsToPlayHandler_jr_5532:;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xFFA5, gb.regs.a);
    return;
}

void Data_017_553B(void) {
    /* data: db $48, $58, $60, $60, $58, $48, $40, $40 */;
}

void Data_017_5543(void) {
    /* data: db $40, $40, $48, $58, $60, $60, $58, $48 */;
}

void Data_017_554B(void) {
    /* data: db $FF, $01, $02, $02, $01, $FF, $FE, $FE */;
}

void Data_017_5553(void) {
    /* data: db $FE, $FE, $FF, $01, $02, $02, $01, $FF */;
}

void Data_017_555B(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $06, $07 */;
}

void Data_017_5563(void) {
    /* data: db $00, $08, $10, $18, $20, $28, $30, $38 */;
}

void CreditsLinkPreparesToPlayHandler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_55E9(); return; };
    gb.regs.a = 4;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 0x3F;
    gb_write(0xD368, gb.regs.a);
    jr_017_557A(); return;
}

void jr_017_557A(void) {
    loop_start: ;
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.a = gb_read(0xD200);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x553B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5543;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_sub8(gb.regs.a, 0x20);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x554B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
  jr_017_557A_jr_55A3:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5553;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x555B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5563;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) { goto loop_start; };
    ResetCreditsSceneVariables();
    gb.regs.a = 0xA0;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubscene();
    ret_017_55E9(); return;
}

void ret_017_55E9(void) {
    return;
}

void CreditsLinkShowsInstrumentsHandler(void) {
    gb.regs.a = gb_read(0xD206);
    alu_cp8(gb.regs.a, 0x9E);
    if (!GET_FLAG_Z()) goto CreditsLinkShowsInstrumentsHandler_jr_55F6;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x34);
  CreditsLinkShowsInstrumentsHandler_jr_55F6:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreditsLinkShowsInstrumentsHandler_ret_55FC;
    IncrementCreditsSubscene();
  CreditsLinkShowsInstrumentsHandler_ret_55FC:;
    return;
}

void CreditsInstrumentsPlayingHandler(void) {
    gb.regs.a = gb_read(0xD200);
    switch(gb.regs.a) {
        case 0x00: func_017_5665(); return;
        case 0x01: MrsMeowMeowsHouseSceneHandler(); return;
        case 0x02: func_017_5728(); return;
        case 0x03: KidsSceneHandler(); return;
        case 0x04: func_017_5794(); return;
        case 0x05: BeachSceneHandler(); return;
        case 0x06: func_017_57F9(); return;
        case 0x07: TarinSceneHandler(); return;
        case 0x08: func_017_583C(); return;
        case 0x09: MarinSingingSceneHandler(); return;
        case 0x0A: func_017_58C3(); return;
        case 0x0B: func_017_58D1(); return;
        case 0x0C: func_017_58F0(); return;
        case 0x0D: func_017_58F8(); return;
        case 0x0E: func_017_590B(); return;
        case 0x0F: func_017_5938(); return;
        case 0x10: func_017_5A66(); return;
        case 0x11: func_017_5ACD(); return;
    }
}

void IncrementD000AndReturn(void) {
    gb.regs.hl = 0xD200;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void DisableAllEntities(void) {
    gb.regs.e = 0x10;
    gb.regs.hl = 0xC280;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  DisableAllEntities_loop:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto DisableAllEntities_loop;
    return;
}

void Data_017_5635(void) {
    /* TODO: CREDITS_FADE $FF, $AA, $55, $00 */;
}

void Data_017_5645(void) {
    /* TODO: CREDITS_FADE $1C, $18, $04, $00 */;
}

void Data_017_5655(void) {
    /* TODO: CREDITS_FADE $90, $50, $00, $00 */;
}

void func_017_5665(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_017_5695(); return; };
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto func_017_5665_jr_5689;
    gb.regs.a = 0x1D;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    DisableAllEntities();
    IncrementD000AndReturn(); return;
  func_017_5665_jr_5689:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_5695(); return; };
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_dec8(gb.regs.a);
    func_017_7F30(); return;
}

void jr_017_5695(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5635;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x5645;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.hl = 0x5655;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC41, gb.regs.a);
    return;
}

void label_017_56BA(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.e = 1;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto label_017_56BA_jr_56C4;
    gb.regs.e = 0xFE;
  label_017_56BA_jr_56C4:;
    gb.regs.hl = 0xC155;
    gb_write(gb.regs.hl, gb.regs.e);
    return;
}

void MrsMeowMeowsHouseSceneHandler(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MrsMeowMeowsHouseSceneHandler_jr_56D7;
    func_017_5B00();
    jr_017_56DC(); return;
  MrsMeowMeowsHouseSceneHandler_jr_56D7:;
    gb.regs.a = 0x20;
    gb_write(0xD7B4, gb.regs.a);
    jr_017_56DC(); return;
}

void jr_017_56DC(void) {
    gb.regs.a = 0x6D;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x48);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.a = 0x6F;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x68);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = 0x78;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x2C);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x58);
    gb.regs.a = 0x78;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x52);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    IncrementD000AndReturn(); return;
}

void func_017_5728(void) {
    func_017_5970();
    if (!GET_FLAG_Z()) goto func_017_5728_ret_5735;
    gb.regs.a = 0x50;
    gb_write(0xD206, gb.regs.a);
    IncrementD000AndReturn(); return;
  func_017_5728_ret_5735:;
    return;
}

void func_017_5736(void) {
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) return;
    /* nop */;
    return;
}

void KidsSceneHandler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_5793(); return; };
    func_017_5736();
    func_017_59FD();
    if (!GET_FLAG_Z()) { ret_017_5793(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto KidsSceneHandler_jr_5755;
    func_017_5B00();
    jr_017_575A(); return;
  KidsSceneHandler_jr_5755:;
    gb.regs.a = 0x1E;
    gb_write(0xD7B4, gb.regs.a);
    jr_017_575A(); return;
}

void jr_017_575A(void) {
    DisableAllEntities();
    gb.regs.a = 0x71;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x48);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.a = 0x72;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x78);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    IncrementD000AndReturn(); return;
}

void ret_017_5793(void) {
    return;
}

void func_017_5794(void) {
    func_017_5970();
    if (!GET_FLAG_Z()) goto func_017_5794_ret_57A1;
    gb.regs.a = 0x50;
    gb_write(0xD206, gb.regs.a);
    IncrementD000AndReturn(); return;
  func_017_5794_ret_57A1:;
    return;
}

void BeachSceneHandler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_57F8(); return; };
    func_017_5736();
    func_017_59FD();
    if (!GET_FLAG_Z()) { ret_017_57F8(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto BeachSceneHandler_jr_57BA;
    func_017_5B00();
    jr_017_57BF(); return;
  BeachSceneHandler_jr_57BA:;
    gb.regs.a = 0x22;
    gb_write(0xD7B4, gb.regs.a);
    jr_017_57BF(); return;
}

void jr_017_57BF(void) {
    DisableAllEntities();
    gb.regs.a = 0xC5;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x28);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.a = 9;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x48);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.a = 9;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x68);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    IncrementD000AndReturn(); return;
}

void ret_017_57F8(void) {
    return;
}

void func_017_57F9(void) {
    func_017_5970();
    if (!GET_FLAG_Z()) goto func_017_57F9_ret_5806;
    gb.regs.a = 0x50;
    gb_write(0xD206, gb.regs.a);
    IncrementD000AndReturn(); return;
  func_017_57F9_ret_5806:;
    return;
}

void TarinSceneHandler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_583B(); return; };
    func_017_5736();
    func_017_59FD();
    if (!GET_FLAG_Z()) { ret_017_583B(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto TarinSceneHandler_jr_581F;
    func_017_5B00();
    jr_017_5824(); return;
  TarinSceneHandler_jr_581F:;
    gb.regs.a = 0x21;
    gb_write(0xD7B4, gb.regs.a);
    jr_017_5824(); return;
}

void jr_017_5824(void) {
    DisableAllEntities();
    gb.regs.a = 0x3F;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x78);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    IncrementD000AndReturn(); return;
}

void ret_017_583B(void) {
    return;
}

void func_017_583C(void) {
    func_017_5970();
    if (!GET_FLAG_Z()) goto func_017_583C_ret_5849;
    gb.regs.a = 0x50;
    gb_write(0xD206, gb.regs.a);
    IncrementD000AndReturn(); return;
  func_017_583C_ret_5849:;
    return;
}

void MarinSingingSceneHandler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_58C2(); return; };
    func_017_5736();
    func_017_59FD();
    if (!GET_FLAG_Z()) { ret_017_58C2(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto MarinSingingSceneHandler_jr_5862;
    func_017_5B00();
    jr_017_5867(); return;
  MarinSingingSceneHandler_jr_5862:;
    gb.regs.a = 0x1F;
    gb_write(0xD7B4, gb.regs.a);
    jr_017_5867(); return;
}

void jr_017_5867(void) {
    DisableAllEntities();
    gb.regs.a = 0x3E;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x28);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.a = 0x6E;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x4C);
    gb.regs.a = 0x6E;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x38);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x54);
    gb.regs.a = 0x6E;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x28);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x30);
    gb.regs.a = 0x6F;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x78);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    IncrementD000AndReturn(); return;
}

void ret_017_58C2(void) {
    return;
}

void func_017_58C3(void) {
    func_017_5970();
    if (!GET_FLAG_Z()) goto func_017_58C3_ret_58D0;
    gb.regs.a = 0xC0;
    gb_write(0xD206, gb.regs.a);
    IncrementD000AndReturn(); return;
  func_017_58C3_ret_58D0:;
    return;
}

void func_017_58D1(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_017_58D1_ret_58EF;
    func_017_5736();
    func_017_59FD();
    if (!GET_FLAG_Z()) goto func_017_58D1_ret_58EF;
    gb.regs.a = 0x1E;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    DisableAllEntities();
    IncrementD000AndReturn(); return;
  func_017_58D1_ret_58EF:;
    return;
}

void func_017_58F0(void) {
    gb.regs.a = 1;
    gb_write(0xD7B4, gb.regs.a);
    IncrementD000AndReturn(); return;
}

void func_017_58F8(void) {
    func_017_59A9();
    if (!GET_FLAG_Z()) goto func_017_58F8_ret_590A;
    gb.regs.a = 0xA0;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xD20B, gb.regs.a);
    IncrementD000AndReturn(); return;
  func_017_58F8_ret_590A:;
    return;
}

void func_017_590B(void) {
    gb.regs.a = gb_read(0xD206);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto func_017_590B_jr_5917;
    gb.regs.hl = 0xFFF4;
    gb_write(gb.regs.hl, 0x35);
  func_017_590B_jr_5917:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_594F(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { ret_017_594F(); return; };
    gb.regs.a = gb_read(0xD20B);
    alu_cp8(gb.regs.a, 0x3F);
    if (GET_FLAG_Z()) goto func_017_590B_jr_5930;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20B, gb.regs.a);
    gb.regs.a = 0x0E;
    gb_write(0xFFA5, gb.regs.a);
    return;
  func_017_590B_jr_5930:;
    gb.regs.a = 0x40;
    gb_write(0xD206, gb.regs.a);
    IncrementD000AndReturn(); return;
}

void func_017_5938(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC40, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = 23;
    ClearFileMenuBG_trampoline();
    IncrementD000AndReturn(); return;
}

void ret_017_594F(void) {
    return;
}

void Data_017_5950(void) {
    /* TODO: CREDITS_FADE $00, $40, $94, $E4 */;
}

void Data_017_5960(void) {
    /* TODO: CREDITS_FADE $00, $04, $18, $1C */;
}

void func_017_5970(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { jr_017_598F(); return; };
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_598F(); return; };
  func_017_5970_jr_5982:;
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) return;
    gb.regs.a = alu_dec8(gb.regs.a);
    CreditsBlendPalettes();
    jr_017_5A32(); return;
}

void jr_017_598F(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5950;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x5960;
    jr_017_5A32(); return;
}

void func_017_59A9(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_017_59A9_jr_59C7;
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_017_59A9_jr_59C7;
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) return;
    gb.regs.a = alu_dec8(gb.regs.a);
    CreditsBlendPalettes();
    jr_017_5A32(); return;
  func_017_59A9_jr_59C7:;
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6ED8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    jr_017_5A37(); return;
}

void Data_017_59DD(void) {
    /* TODO: CREDITS_FADE $E4, $94, $40, $00 */;
}

void Data_017_59ED(void) {
    /* TODO: CREDITS_FADE $1C, $18, $04, $00 */;
}

void func_017_59FD(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_017_5A1B(); return; };
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
  func_017_59FD_jr_5A0D:;
    if (GET_FLAG_Z()) { jr_017_5A1B(); return; };
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) return;
    gb.regs.a = alu_dec8(gb.regs.a);
    func_017_7F30();
    jr_017_5A37(); return;
}

void jr_017_5A1B(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x59DD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x59ED;
    jr_017_5A32(); return;
}

void jr_017_5A32(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    jr_017_5A37(); return;
}

void jr_017_5A37(void) {
    loop_start: ;
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto jr_017_5A37_jr_5A42;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
  jr_017_5A37_jr_5A42:;
    return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto jr_017_5A37_jr_5A50;
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
  jr_017_5A37_jr_5A50:;
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6456;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    goto loop_start;
}

void func_017_5A66(void) {
    gb.regs.a = 0xC9;
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = 0x90;
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_017_56BA(); return; };
    gb.regs.a = 0;
    gb_write(0xC155, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 0x15;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7D, gb.regs.a);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC290;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x50;
    gb_write(0xFF98, gb.regs.a);
    gb.regs.hl = 0xD7B2;
    gb_write(gb.regs.hl, alu_set(3, gb_read(gb.regs.hl)));
    gb.regs.a = 0xA0;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = 0x5C;
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x34;
    gb_write(0xFFF4, gb.regs.a);
    IncrementD000AndReturn(); return;
}

void func_017_5ACD(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_017_56BA(); return; };
    gb_write(0xC155, gb.regs.a);
    ResetCreditsSceneVariables();
    IncrementCreditsSubscene(); return;
}

void CreditsWaterAppearingHandler(void) {
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xFF97, gb.regs.a);
    alu_cp8(gb.regs.a, 0x60);
    if (!GET_FLAG_Z()) goto CreditsWaterAppearingHandler_jr_5AFC;
    gb.regs.a = gb_read(0xC29F);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC29F, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xD209, gb.regs.a);
    IncrementCreditsSubscene();
  CreditsWaterAppearingHandler_jr_5AFC:;
    func_017_5B96();
    return;
}

void func_017_5B00(void) {
    LCDOff();
    CreditsLoadBGMap();
    func_017_5B37();
    gb.regs.a = gb_read(0xD7B2);
    gb_write(0xFF40, gb.regs.a);
    return;
}

void Data_017_5B0F(void) {
    /* data: dw CreditsBGMaps._04 */;
    /* data: dw CreditsBGMaps._01 */;
    /* data: dw CreditsBGMaps._02 */;
    /* data: dw CreditsBGMaps._03 */;
    /* data: dw CreditsBGMaps._00 */;
}

void CreditsLoadBGMap(void) {
    gb.regs.hl = 0x5B0F;
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.b = gb.regs.a;
    gb.regs.a = 0;
    gb_write(0xFFE6, gb.regs.a);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.b;
    gb.regs.a = 35;
    CopyBGMapFromBank();
    return;
}

void Data_017_5B32(void) {
    /* data: db $00, $00, $9F, $A0, $A1 */;
}

void func_017_5B37(void) {
    gb.regs.hl = 0x5B32;
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.d = 0;
    gb.regs.e = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb_write(0xDE7A, gb.regs.a);
    return;
    gb.regs.b = gb.regs.e;
    gb.regs.de++;
    alu_rlca();
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.hl++;
    gb.regs.bc--;
    gb.regs.d = gb.regs.e;
    alu_rla();
    gb.regs.b = gb.regs.a;
    Data_017_5B54(); return;
}

void Data_017_5B54(void) {
    /* data: db $27, $4B, $93 */;
}

void Data_017_5B57(void) {
    /* data: db $60, $60, $61, $62, $63, $64, $65, $65, $65, $65, $64, $63, $62, $61, $60, $60 */;
}

void CreditsWaterSplashingHandler(void) {
    func_017_5B96();
    gb.regs.a = gb_read(0xD209);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreditsWaterSplashingHandler_jr_5B73;
    IncrementCreditsSubsceneAndReturn(); return;
  CreditsWaterSplashingHandler_jr_5B73:;
    gb.regs.a = gb_read(0xC21E);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(0xC21E, gb.regs.a);
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5B57;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF97, gb.regs.a);
    func_017_5BE2();
    return;
}

void func_017_5B96(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_add8(gb.regs.a, 5);
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_017_5B96_jr_5BBB;
    gb.regs.a = 3;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_017_5B96_jr_5BBB;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD200, gb.regs.a);
  func_017_5B96_jr_5BBB:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_017_5BD0(); return; };
    gb.regs.a = gb_read(0xD200);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5B54;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    return;
}

void label_017_5BD0(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 32;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x78;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xED;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void func_017_5BE2(void) {
    gb.regs.a = gb_read(0xFF97);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sub8(gb.regs.a, 0xA0);
    gb.regs.a = alu_add8(gb.regs.a, 0x3C);
    gb_write(0xFF99, gb.regs.a);
    return;
}

void Data_017_5BED(void) {
    /* data: db $9C, $00, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9C, $20, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9C, $40, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9C, $60, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9C, $80, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9C, $A0, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9C, $C0, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9C, $E0, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9D, $00, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9D, $20, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9D, $40, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9D, $60, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9D, $80, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9D, $A0, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9D, $C0, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9D, $E0, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9E, $00, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9E, $20, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9E, $40, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9E, $60, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9E, $80, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9E, $A0, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9E, $C0, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9E, $E0, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9F, $00, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9F, $20, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9F, $40, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9F, $60, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9F, $80, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9F, $A0, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
    /* data: db $9F, $C0, $13, $A0, $A0, $A0, $A0, $A0, $A0, $80, $81, $80, $81, $80, $81, $80 */;
    /* data: db $81, $A0, $A0, $A0, $A0, $A0, $A0, $00, $9F, $E0, $13, $A0, $A0, $A0, $A0, $A0 */;
    /* data: db $A0, $90, $91, $90, $91, $90, $91, $90, $91, $A0, $A0, $A0, $A0, $A0, $A0, $00 */;
}

void Data_017_5EED(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $02, $01, $00, $00, $00, $00, $01, $02, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00 */;
}

void CreditsWaterMovingUpHandler(void) {
    func_017_5B96();
    gb.regs.a = gb_read(0xC21E);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xC21E, gb.regs.a);
    gb.regs.a = gb_read(0xD20B);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20B, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto CreditsWaterMovingUpHandler_jr_5F23;
    gb.regs.a = gb_read(0xD20C);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) goto CreditsWaterMovingUpHandler_jr_5F23;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20C, gb.regs.a);
  CreditsWaterMovingUpHandler_jr_5F23:;
    gb.regs.a = gb_read(0xD20C);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFF97, gb.regs.a);
    func_017_5BE2();
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0xF0);
    if (GET_FLAG_C()) goto CreditsWaterMovingUpHandler_jr_5F39;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC28F, gb.regs.a);
  CreditsWaterMovingUpHandler_jr_5F39:;
    gb.regs.a = gb_read(0xD20B);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD201);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto CreditsWaterMovingUpHandler_jr_5F4D;
    ResetCreditsSceneVariables();
    IncrementCreditsSubscene();
    return;
  CreditsWaterMovingUpHandler_jr_5F4D:;
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD201, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = gb.regs.e;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.d = gb.regs.a;
    gb.regs.hl = 0x5BED;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.de = 0xD5C2;
    gb.regs.c = 0x18;
  CreditsWaterMovingUpHandler_loop_5F75:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreditsWaterMovingUpHandler_loop_5F75;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.de = 0xDD39;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = 0x13;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.hl = 0x5EED;
    gb.regs.c = 0x15;
  CreditsWaterMovingUpHandler_loop_5F92:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreditsWaterMovingUpHandler_loop_5F92;
    return;
}

void Data_017_5F99(void) {
    /* TODO: CREDITS_FADE $27, $16, $01, $00 */;
}

void Data_017_5FA9(void) {
    /* data: db $1C, $1C, $1C, $1C, $1C, $1C, $18, $18, $08, $08, $08, $08, $00, $00, $00, $00 */;
}

void Data_017_5FB9(void) {
    /* TODO: CREDITS_FADE $90, $50, $00, $00 */;
}

void CreditsWaterFadeToWhiteHandler(void) {
    gb.regs.a = gb_read(0xC21E);
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(0xC21E, gb.regs.a);
    gb.regs.a = gb_read(0xFF97);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xFF97, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_017_5FFF(); return; };
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto CreditsWaterFadeToWhiteHandler_jr_5FEF;
    ResetCreditsSceneVariables();
    gb.regs.a = 0xC0;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubscene(); return;
  CreditsWaterFadeToWhiteHandler_jr_5FEF:;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_5FFF(); return; };
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_dec8(gb.regs.a);
    func_017_7F30(); return;
}

void jr_017_5FFF(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x5F99;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x5FA9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.hl = 0x5FB9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC41, gb.regs.a);
    return;
}

void CreditsWaterNoiseFadingOutHandler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreditsWaterNoiseFadingOutHandler_ret_6045;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD20E, gb.regs.a);
    gb_write(0xC28E, gb.regs.a);
    gb_write(0xC28F, gb.regs.a);
    gb_write(0xC114, gb.regs.a);
    gb.regs.a = 0x80;
    gb_write(0xD466, gb.regs.a);
    gb.regs.hl = 0xD7B2;
    gb_write(gb.regs.hl, alu_res(3, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xDC3E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  CreditsWaterNoiseFadingOutHandler_ret_6045:;
    return;
}

void CreditsLinkOnSeaLargeHandler(void) {
    func_017_4839();
    gb.regs.de = 0x98E0;
    func_017_488C();
    AnimateEntitiesAndRestoreBank17();
    gb.regs.a = gb_read(0xD20E);
    switch(gb.regs.a) {
        case 0x00: LinkOnSeaLarge0Handler(); return;
        case 0x01: LinkOnSeaLarge1Handler(); return;
        case 0x02: LinkOnSeaLarge2Handler(); return;
        case 0x03: LinkOnSeaLarge3Handler(); return;
    }
}

void LinkOnSeaLarge0Handler(void) {
    gb.regs.a = 0x16;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7D, gb.regs.a);
    ResetCreditsSceneVariables();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { IncrementCreditsSubscene(); return; };
    gb.regs.hl = 0xD7B2;
    gb_write(gb.regs.hl, alu_res(2, gb_read(gb.regs.hl)));
    IncrementCreditsSubscene(); return;
}

void LinkOnSeaLarge1Handler(void) {
    gb.regs.a = 0x17;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x48);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 4);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x28);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x68);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 5);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x78);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 5);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    IncrementCreditsSubscene(); return;
}

void Data_017_60CA(void) {
    /* data: db $00, $00, $00, $00, $05, $05, $05, $05, $19, $19, $1A, $1A, $1E, $1E, $1E, $1E */;
}

void Data_017_60DA(void) {
    /* data: db $00, $00, $00, $00, $00, $01, $01, $01, $51, $51, $52, $52, $92, $92, $92, $92 */;
}

void LinkOnSeaLarge2Handler(void) {
    ResetCreditsSceneVariables();
    gb.regs.a = 0x60;
    gb_write(0xD209, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void LinkOnSeaLarge3Handler(void) {
    gb.regs.a = gb_read(0xD209);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkOnSeaLarge3Handler_ret_6114;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD20E, gb.regs.a);
    gb_write(0xC28C, gb.regs.a);
    gb_write(0xC28D, gb.regs.a);
    gb_write(0xC28E, gb.regs.a);
    gb_write(0xC28F, gb.regs.a);
    gb.regs.a = 23;
    ClearFileMenuBG_trampoline();
    gb.regs.hl = 0xDC3E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  LinkOnSeaLarge3Handler_ret_6114:;
    return;
}

void CreditsSunAboveHandler(void) {
    func_017_4839();
    AnimateEntitiesAndRestoreBank17();
    gb.regs.a = gb_read(0xD20E);
    switch(gb.regs.a) {
        case 0x00: CreditsSunAbove0Handler(); return;
        case 0x01: CreditsSunAbove1Handler(); return;
        case 0x02: CreditsSunAbove2Handler(); return;
        case 0x03: CreditsSunAbove3Handler(); return;
        case 0x04: CreditsSunAbove4Handler(); return;
    }
}

void CreditsSunAbove0Handler(void) {
    gb.regs.a = 0x17;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xC155, gb.regs.a);
    gb_write(0xC156, gb.regs.a);
    gb.regs.a = 0x3D;
    gb_write(0xD368, gb.regs.a);
    ResetCreditsSceneVariables();
    IncrementCreditsSubscene(); return;
}

void CreditsSunAbove1Handler(void) {
    gb.regs.a = 0x18;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x20);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 6);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x78);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x78);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 6);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xFD);
    gb.regs.hl = 0xC3B0;
  CreditsSunAbove1Handler_jr_618B:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 3);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x68);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 7);
    gb.regs.a = 0x60;
    gb_write(0xD209, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void Data_017_61AD(void) {
    /* data: db $00, $00, $00, $00, $05, $05, $05, $05, $05, $05, $05, $05, $19, $19, $1A, $1A */;
    /* data: db $1E, $1E, $1E, $1E */;
}

void Data_017_61C1(void) {
    /* data: db $00, $00, $00, $00, $00, $01, $01, $01, $01, $01, $01, $01, $51, $51, $51, $52 */;
    /* data: db $52, $92, $92, $92, $92 */;
}

void CreditsSunAbove2Handler(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) { jr_017_61FE(); return; };
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) goto CreditsSunAbove2Handler_jr_61EE;
    ResetCreditsSceneVariables();
    gb.regs.a = 0x60;
    gb_write(0xD209, gb.regs.a);
    IncrementCreditsSubscene(); return;
  CreditsSunAbove2Handler_jr_61EE:;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_61FE(); return; };
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_dec8(gb.regs.a);
    CreditsBlendPalettes(); return;
}

void jr_017_61FE(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x61AD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x61AD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.hl = 0x61C1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC41, gb.regs.a);
    return;
}

void CreditsSunAbove3Handler(void) {
    gb.regs.a = gb_read(0xD209);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreditsSunAbove3Handler_ret_622F;
    ResetCreditsSceneVariables();
    IncrementCreditsSubscene(); return;
  CreditsSunAbove3Handler_ret_622F:;
    return;
}

void CreditsSunAbove4Handler(void) {
    ResetCreditsSceneVariables();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD20E, gb.regs.a);
    gb_write(0xC28D, gb.regs.a);
    gb_write(0xC28E, gb.regs.a);
    gb_write(0xC28F, gb.regs.a);
    gb.regs.a = 0x17;
    ClearFileMenuBG_trampoline();
    gb.regs.hl = 0xDC3E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void CreditsLinkOnSeaCloseHandler(void) {
    func_017_4839();
    gb.regs.de = 0x98E0;
    func_017_488C();
    AnimateEntitiesAndRestoreBank17();
    gb.regs.a = gb_read(0xD20F);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20F, gb.regs.a);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_C()) { jr_017_6271(); return; };
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD20F, gb.regs.a);
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x2B);
    if (!GET_FLAG_Z()) goto CreditsLinkOnSeaCloseHandler_jr_626E;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  CreditsLinkOnSeaCloseHandler_jr_626E:;
    gb_write(0xD20A, gb.regs.a);
    jr_017_6271(); return;
}

void jr_017_6271(void) {
    gb.regs.a = gb_read(0xD20A);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x634C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb_write(0xD200, gb.regs.a);
    func_017_7971();
    gb.regs.a = gb_read(0xD20E);
    switch(gb.regs.a) {
        case 0x00: func_017_6292(); return;
        case 0x01: func_017_629E(); return;
        case 0x02: func_017_63BC(); return;
        case 0x03: func_017_6476(); return;
        case 0x04: func_017_64D8(); return;
    }
}

void func_017_6292(void) {
    gb.regs.a = 0x18;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7D, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void func_017_629E(void) {
    gb.regs.a = 0x19;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.hl = 0xFFFF;
    gb_write(gb.regs.hl, alu_set(1, gb_read(gb.regs.hl)));
    gb.regs.a = 0x42;
    gb_write(0xFF45, gb.regs.a);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x55);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x68);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x58);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x88);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 9);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xF8);
    ResetCreditsSceneVariables();
    gb.regs.a = 0x50;
    gb_write(0xD209, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { IncrementCreditsSubscene(); return; };
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x70);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x11);
    gb.regs.hl = 0xD7B2;
    gb_write(gb.regs.hl, alu_res(2, gb_read(gb.regs.hl)));
    IncrementCreditsSubscene(); return;
}

void Data_017_634C(void) {
    /* data: db $00, $00, $00, $00, $01, $01, $01, $02, $02, $03, $03, $04, $05, $06, $07, $08 */;
    /* data: db $09, $0A, $0A, $0B, $0B, $0C, $0C, $0C, $0B, $0B, $0A, $0A, $09, $08, $07, $06 */;
    /* data: db $05, $04, $03, $03, $02, $02, $01, $01, $01, $00, $00, $00, $00, $00, $00, $00 */;
}

void Data_017_637C(void) {
    /* data: db $0D, $4C, $4D, $4E, $4F, $4C, $4D, $4E, $4F, $4C, $4D, $4E, $4F, $4C, $4D, $00 */;
    /* data: db $0D, $5C, $5D, $5E, $5F, $5C, $5D, $5E, $5F, $5C, $5D, $5E, $5F, $5C, $5D, $00 */;
    /* data: db $0D, $6C, $6D, $6E, $6F, $6C, $6D, $6E, $6F, $6C, $6D, $6E, $6F, $6C, $6D, $00 */;
    /* data: db $0D, $7C, $7D, $7E, $7F, $7C, $7D, $7E, $7F, $7C, $7D, $7E, $7F, $7C, $7D, $00 */;
}

void func_017_63BC(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_017_63EE(); return; };
    gb.regs.hl = 0xD5C2;
    gb.regs.a = 0x9A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x23;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xD20B);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb_write(0xD20B, gb.regs.a);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x637C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = wDrawCommand_length;
    gb.regs.c = 0x10;
  func_017_63BC_loop_63E6:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_017_63BC_loop_63E6;
    jr_017_63F1(); return;
}

void jr_017_63EE(void) {
    func_017_67CA();
    jr_017_63F1(); return;
}

void jr_017_63F1(void) {
    gb.regs.a = gb_read(0xD201);
    switch(gb.regs.a) {
        case 0x00: func_017_63FB(); return;
        case 0x01: func_017_641E(); return;
        case 0x02: func_017_6447(); return;
    }
}

void func_017_63FB(void) {
    gb.regs.a = gb_read(0xD209);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_6405(); return; };
}

void label_017_6401(void) {
    gb.regs.hl = 0xD201;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    ret_017_6405(); return;
}

void ret_017_6405(void) {
    return;
}

void Data_017_6406(void) {
    /* data: db $01, $00, $01, $02, $01, $02, $03, $04, $05, $06, $07, $08 */;
}

void Data_017_6412(void) {
    /* data: db $20, $18, $20, $18, $18, $18, $20, $40, $0C, $0C, $0C, $40 */;
}

void func_017_641E(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_6446(); return; };
    gb.regs.a = gb_read(0xD20D);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6406;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
  func_017_641E_jr_642E:;
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD202, gb.regs.a);
    gb.regs.hl = 0x6412;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20D, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) { ret_017_6446(); return; };
    label_017_6401(); return;
}

void ret_017_6446(void) {
    return;
}

void func_017_6447(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_017_6447_ret_6455;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD205, gb.regs.a);
    IncrementCreditsSubscene();
    return;
  func_017_6447_ret_6455:;
    return;
}

void Data_017_6456(void) {
    /* data: db $1E, $1E, $1E, $1E, $1A, $1A, $19, $19, $05, $05, $05, $05, $00, $00, $00, $00 */;
}

void Data_017_6466(void) {
    /* data: db $92, $92, $92, $92, $92, $92, $51, $51, $41, $41, $00, $00, $00, $00, $00, $00 */;
}

void func_017_6476(void) {
    gb.regs.a = gb_read(0xD21F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_017_7F30(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_017_64B3(); return; };
    gb.regs.a = gb_read(0xD205);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto func_017_6476_jr_649C;
    gb.regs.a = 0xC0;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC40, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    IncrementCreditsSubscene(); return;
  func_017_6476_jr_649C:;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD205, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_64B3(); return; };
    gb.regs.a = gb_read(0xD205);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xD21F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    func_017_7F30(); return;
}

void jr_017_64B3(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD205);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6456;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x6456;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.hl = 0x6466;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC41, gb.regs.a);
    return;
}

void func_017_64D8(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { TransitionToNextEndingScene_return(); return; };
}

void TransitionToNextEndingScene(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD20E, gb.regs.a);
    gb_write(0xC287, gb.regs.a);
    gb_write(0xC288, gb.regs.a);
    gb_write(0xC289, gb.regs.a);
    gb_write(0xC28A, gb.regs.a);
    gb_write(0xC28B, gb.regs.a);
    gb_write(0xC28C, gb.regs.a);
    gb_write(0xC28D, gb.regs.a);
    gb_write(0xC28E, gb.regs.a);
    gb_write(0xC28F, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb_write(0xD20F, gb.regs.a);
    gb_write(0xD20F, gb.regs.a);
    ResetCreditsSceneVariables();
    gb.regs.hl = 0xFFFF;
    gb_write(gb.regs.hl, alu_res(1, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xD7B2;
    gb_write(gb.regs.hl, alu_set(2, gb_read(gb.regs.hl)));
    gb.regs.hl = 0xDC3E;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) goto TransitionToNextEndingScene_return;
    gb_write(gb.regs.hl, 0);
  TransitionToNextEndingScene_return:;
    return;
}

void Data_017_651E(void) {
    /* data: db $99, $46, $05, $AC, $AC, $AC, $AC, $AC */;
    /* data: db $AC, $99, $66, $05, $AC, $AC, $86, $87 */;
    /* data: db $88, $89, $99, $86, $05, $94, $95, $96 */;
    /* data: db $97, $98, $99, $99, $A6, $05, $A4, $A5 */;
    /* data: db $A6, $A7, $A8, $A9, $99, $C6, $05, $B4 */;
    /* data: db $B5, $B6, $B7, $B8, $B9, $99, $E6, $05 */;
    /* data: db $C4, $C5, $C6, $C7, $C8, $C9 */;
}

void Data_017_6554(void) {
    /* data: db $99, $46 */;
    /* data: db $05, $AC, $AC, $AC, $AC, $AC, $AC, $99 */;
    /* data: db $66, $05, $AC, $AC, $86, $87, $88, $89 */;
    /* data: db $99, $86, $05, $94, $95, $96, $97, $98 */;
    /* data: db $99, $99, $A6, $05, $A4, $A5, $A6, $A7 */;
    /* data: db $A8, $A9, $99, $C6, $05, $B4, $B5, $8A */;
    /* data: db $8B, $B8, $B9, $99, $E6, $05, $C4, $C5 */;
    /* data: db $9A, $9B, $C8, $C9 */;
}

void Data_017_658A(void) {
    /* data: db $99, $46, $05, $AC */;
    /* data: db $AC, $AC, $AC, $AC, $AC, $99, $66, $05 */;
    /* data: db $AC, $AC, $86, $87, $88, $89, $99, $86 */;
    /* data: db $05, $94, $95, $96, $97, $98, $99, $99 */;
    /* data: db $A6, $05, $A4, $A5, $A6, $A7, $A8, $A9 */;
    /* data: db $99, $C6, $05, $B4, $B5, $8C, $8D, $B8 */;
    /* data: db $B9, $99, $E6, $05, $C4, $C5, $9C, $C7 */;
    /* data: db $C8, $C9 */;
}

void Data_017_65C0(void) {
    /* data: db $99, $46, $05, $AC, $AC, $AC */;
    /* data: db $AC, $AC, $AC, $99, $66, $05, $AC, $AC */;
    /* data: db $86, $87, $88, $89, $99, $86, $05, $94 */;
    /* data: db $95, $96, $97, $98, $99, $99, $A6, $05 */;
    /* data: db $A4, $A5, $A6, $A7, $A8, $A9, $99, $C6 */;
    /* data: db $05, $B4, $B5, $8E, $8F, $B8, $B9, $99 */;
    /* data: db $E6, $05, $C4, $C5, $9E, $C7, $C8, $C9 */;
}

void Data_017_65F6(void) {
    /* data: db $99, $46, $05, $AC, $AC, $AC, $AC, $AC */;
    /* data: db $AC, $99, $66, $05, $AC, $AC, $86, $87 */;
    /* data: db $88, $89, $99, $86, $05, $94, $95, $96 */;
    /* data: db $97, $98, $99, $99, $A6, $05, $A4, $A5 */;
    /* data: db $A6, $A7, $A8, $A9, $99, $C6, $05, $B4 */;
    /* data: db $B5, $E9, $EA, $B8, $B9, $99, $E6, $05 */;
    /* data: db $C4, $C5, $F9, $C7, $C8, $C9 */;
}

void Data_017_662C(void) {
    /* data: db $99, $46 */;
    /* data: db $05, $AC, $AC, $AC, $AC, $AC, $AC, $99 */;
    /* data: db $66, $05, $AC, $AC, $86, $87, $88, $89 */;
    /* data: db $99, $86, $05, $94, $95, $96, $97, $98 */;
    /* data: db $99, $99, $A6, $05, $A4, $A5, $A6, $A7 */;
    /* data: db $A8, $A9, $99, $C6, $05, $B4, $B5, $EB */;
    /* data: db $EC, $B8, $B9, $99, $E6, $05, $C4, $C5 */;
    /* data: db $FB, $C7, $C8, $C9 */;
}

void Data_017_6662(void) {
    /* data: db $99, $46, $05, $AC */;
    /* data: db $AC, $AC, $AC, $AC, $AC, $99, $66, $05 */;
    /* data: db $AC, $AC, $86, $87, $88, $89, $99, $86 */;
    /* data: db $05, $94, $95, $96, $97, $98, $99, $99 */;
    /* data: db $A6, $05, $A4, $A5, $A6, $A7, $A8, $A9 */;
    /* data: db $99, $C6, $05, $B4, $B5, $ED, $EE, $B8 */;
    /* data: db $B9, $99, $E6, $05, $C4, $C5, $FB, $C7 */;
    /* data: db $C8, $C9 */;
}

void Data_017_6698(void) {
    /* data: db $99, $46, $05, $AC, $AC, $AC */;
    /* data: db $AC, $AC, $AC, $99, $66, $05, $00, $01 */;
    /* data: db $02, $03, $04, $AC, $99, $86, $05, $10 */;
    /* data: db $11, $12, $13, $14, $15, $99, $A6, $05 */;
    /* data: db $20, $21, $22, $23, $24, $25, $99, $C6 */;
    /* data: db $05, $30, $31, $32, $33, $34, $35, $99 */;
    /* data: db $E6, $05, $40, $41, $42, $43, $44, $C9 */;
}

void Data_017_66CE(void) {
    /* data: db $99, $46, $05, $0C, $0D, $1C, $1D, $AC */;
    /* data: db $AC, $99, $66, $05, $06, $07, $08, $09 */;
    /* data: db $0A, $AC, $99, $86, $05, $16, $17, $18 */;
    /* data: db $19, $1A, $1B, $99, $A6, $05, $26, $27 */;
    /* data: db $28, $29, $2A, $2B, $99, $C6, $05, $36 */;
    /* data: db $37, $38, $39, $3A, $3B, $99, $E6, $05 */;
    /* data: db $46, $47, $48, $49, $4A, $C9 */;
}

void Data_017_6704(void) {
    /* data: dw Data_017_651E */;
    /* data: dw Data_017_6554 */;
    /* data: dw Data_017_658A */;
    /* data: dw Data_017_65C0 */;
    /* data: dw Data_017_65F6 */;
    /* data: dw Data_017_662C */;
    /* data: dw Data_017_6662 */;
    /* data: dw Data_017_6698 */;
    /* data: dw Data_017_66CE */;
}

void Data_017_6716(void) {
    /* data: db $99, $46, $05, $04, $04, $04, $04, $04 */;
    /* data: db $04, $99, $66, $05, $04, $04, $03, $03 */;
    /* data: db $03, $03, $99, $86, $05, $01, $01, $01 */;
    /* data: db $05, $05, $03, $99, $A6, $05, $01, $01 */;
    /* data: db $05, $05, $05, $02, $99, $C6, $05, $01 */;
    /* data: db $01, $05, $05, $01, $02, $99, $E6, $05 */;
    /* data: db $02, $02, $05, $05, $02, $02 */;
}

void Data_017_674C(void) {
    /* data: db $99, $46, $05, $04, $04, $04, $04, $04 */;
    /* data: db $04, $99, $66, $05, $01, $07, $03, $03 */;
    /* data: db $03, $03, $99, $86, $05, $01, $01, $01 */;
    /* data: db $01, $05, $03, $99, $A6, $05, $01, $01 */;
    /* data: db $05, $05, $05, $02, $99, $C6, $05, $07 */;
    /* data: db $07, $05, $05, $05, $02, $99, $E6, $05 */;
    /* data: db $02, $02, $02, $02, $02, $02 */;
}

void Data_017_6782(void) {
    /* data: db $99, $46, $05, $07, $01, $07, $07, $04 */;
    /* data: db $04, $99, $66, $05, $01, $01, $01, $01 */;
    /* data: db $07, $04, $99, $86, $05, $01, $05, $05 */;
    /* data: db $01, $07, $03, $99, $A6, $05, $01, $05 */;
    /* data: db $05, $05, $07, $02, $99, $C6, $05, $07 */;
    /* data: db $05, $05, $05, $05, $02, $99, $E6, $05 */;
    /* data: db $02, $02, $02, $02, $02, $02 */;
}

void Data_017_67B8(void) {
    /* data: dw Data_017_6716 */;
    /* data: dw Data_017_6716 */;
    /* data: dw Data_017_6716 */;
    /* data: dw Data_017_6716 */;
    /* data: dw Data_017_6716 */;
    /* data: dw Data_017_6716 */;
    /* data: dw Data_017_6716 */;
    /* data: dw Data_017_674C */;
    /* data: dw Data_017_6782 */;
}

void func_017_67CA(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { ret_017_6808(); return; };
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb_push16(gb.regs.de);
    gb.regs.hl = 0x6704;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.de = 0xD5C2;
    gb.regs.c = 0x36;
  func_017_67CA_loop_67E7:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_017_67CA_loop_67E7;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0x67B8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.h = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.de = 0xDD39;
    gb.regs.c = 0x36;
  func_017_67CA_loop_6800:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto func_017_67CA_loop_6800;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    ret_017_6808(); return;
}

void ret_017_6808(void) {
    return;
}

void CreditsLinkSeatedOnLogHandler(void) {
    AnimateEntitiesAndRestoreBank17();
    gb.regs.a = gb_read(0xD20E);
    switch(gb.regs.a) {
        case 0x00: LinkSeatedOnLog0Handler(); return;
        case 0x01: LinkSeatedOnLog1Handler(); return;
        case 0x02: LinkSeatedOnLog2Handler(); return;
        case 0x03: LinkSeatedOnLog3Handler(); return;
        case 0x04: LinkSeatedOnLog4Handler(); return;
        case 0x05: LinkSeatedOnLog5Handler(); return;
        case 0x06: LinkSeatedOnLog6Handler(); return;
        case 0x07: LinkSeatedOnLog7Handler(); return;
        case 0x08: LinkSeatedOnLog8Handler(); return;
    }
}

void LinkSeatedOnLog0Handler(void) {
    gb.regs.a = 0x19;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void LinkSeatedOnLog1Handler(void) {
    gb.regs.a = 0x1A;
    gb_write(0xD7B4, gb.regs.a);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x4E);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0A);
    IncrementCreditsSubscene(); return;
}

void LinkSeatedOnLog2Handler(void) {
    gb.regs.de = 0x9960;
    func_017_488C();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_017_687C(); return; };
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto LinkSeatedOnLog2Handler_jr_686C;
    ResetCreditsSceneVariables();
    gb.regs.a = 0x60;
    gb_write(0xD209, gb.regs.a);
    IncrementCreditsSubscene(); return;
  LinkSeatedOnLog2Handler_jr_686C:;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_687C(); return; };
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_dec8(gb.regs.a);
    CreditsBlendPalettes(); return;
}

void jr_017_687C(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x60CA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.hl = 0x60CA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.hl = 0x60DA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC41, gb.regs.a);
    return;
}

void LinkSeatedOnLog3Handler(void) {
    gb.regs.de = 0x9960;
    func_017_488C();
    gb.regs.a = gb_read(0xD209);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkSeatedOnLog3Handler_ret_68B6;
    ResetCreditsSceneVariables();
    IncrementCreditsSubscene(); return;
  LinkSeatedOnLog3Handler_ret_68B6:;
    return;
}

void Data_017_68B7(void) {
    /* data: db $1E, $1E, $1E, $1E, $2E, $2E, $2E, $2E, $6E, $6E, $6E, $6E */;
}

void LinkSeatedOnLog4Handler(void) {
    gb.regs.de = 0x9960;
    func_017_488C();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_017_68EB(); return; };
    gb.regs.a = gb_read(0xD20A);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_Z()) goto LinkSeatedOnLog4Handler_jr_68E1;
    ResetCreditsSceneVariables();
    gb.regs.a = 0x20;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubscene(); return;
  LinkSeatedOnLog4Handler_jr_68E1:;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { label_017_6A80(); return; };
}

void jr_017_68EB(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20A);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x68B7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    return;
}

void Data_017_6900(void) {
    /* data: db $C5, $4C, $FF, $7F, $AB, $56, $E0, $41, $B3, $7E, $00, $00, $00, $31, $28, $32 */;
    /* data: db $B3, $7E, $00, $00, $1F, $12, $FE, $27, $B3, $7E, $00, $00, $BF, $21, $1F, $4B */;
    /* data: db $B3, $7E, $00, $00, $6B, $04, $15, $19, $B3, $7E, $00, $00, $15, $19, $1F, $4B */;
    /* data: db $C5, $4C, $FF, $7F, $8B, $52, $C0, $3D, $B3, $7E, $00, $00, $00, $2D, $08, $2E */;
    /* data: db $B3, $7E, $00, $00, $FD, $11, $BC, $27, $B3, $7E, $00, $00, $9D, $21, $DD, $46 */;
    /* data: db $B3, $7E, $00, $00, $6A, $04, $13, $19, $B3, $7E, $00, $00, $13, $19, $DD, $46 */;
    /* data: db $C5, $4C, $FF, $7F, $4A, $4A, $A0, $39, $B3, $7E, $00, $00, $E0, $28, $C7, $29 */;
    /* data: db $B3, $7E, $00, $00, $DA, $11, $59, $23, $B3, $7E, $00, $00, $7A, $1D, $9A, $3E */;
    /* data: db $B3, $7E, $00, $00, $69, $04, $F1, $14, $B3, $7E, $00, $00, $F1, $14, $9A, $3E */;
    /* data: db $C5, $4C, $FF, $7F, $09, $42, $60, $31, $B3, $7E, $00, $00, $C0, $24, $A6, $25 */;
    /* data: db $B3, $7E, $00, $00, $97, $11, $F6, $1E, $B3, $7E, $00, $00, $57, $19, $57, $36 */;
    /* data: db $B3, $7E, $00, $00, $68, $04, $CF, $14, $B3, $7E, $00, $00, $CF, $14, $57, $36 */;
    /* data: db $C5, $4C, $FF, $7F, $E8, $3D, $40, $2D, $B3, $7E, $00, $00, $C0, $20, $66, $21 */;
    /* data: db $B3, $7E, $00, $00, $74, $0D, $93, $1A, $B3, $7E, $00, $00, $34, $19, $F4, $31 */;
    /* data: db $B3, $7E, $00, $00, $47, $04, $CD, $10, $B3, $7E, $00, $00, $CD, $10, $F4, $31 */;
    /* data: db $C5, $4C, $FF, $7F, $A7, $35, $00, $25, $B3, $7E, $00, $00, $A0, $1C, $45, $1D */;
    /* data: db $B3, $7E, $00, $00, $31, $0D, $30, $16, $B3, $7E, $00, $00, $11, $15, $B1, $29 */;
    /* data: db $B3, $7E, $00, $00, $46, $04, $AB, $10, $B3, $7E, $00, $00, $AB, $10, $B1, $29 */;
    /* data: db $C5, $4C, $FF, $7F, $66, $2D, $E0, $20, $B3, $7E, $00, $00, $80, $18, $04, $19 */;
    /* data: db $B3, $7E, $00, $00, $0E, $0D, $CD, $11, $B3, $7E, $00, $00, $EE, $10, $6E, $21 */;
    /* data: db $B3, $7E, $00, $00, $45, $04, $89, $0C, $B3, $7E, $00, $00, $89, $0C, $6E, $21 */;
    /* data: db $C5, $4C, $FF, $7F, $25, $25, $A0, $18, $B3, $7E, $00, $00, $60, $10, $C3, $10 */;
    /* data: db $B3, $7E, $00, $00, $CB, $08, $6A, $0D, $B3, $7E, $00, $00, $AB, $0C, $0B, $19 */;
    /* data: db $B3, $7E, $00, $00, $24, $04, $67, $08, $B3, $7E, $00, $00, $67, $08, $0B, $19 */;
}

void label_017_6A80(void) {
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    gb.regs.c = gb.regs.a;
    gb.regs.a = 0;
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb.regs.b = gb.regs.a;
    gb.regs.hl = 0x6900;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = 0x30;
    gb.regs.de = 0xDCF8;
    CopyData();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7B, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xDE7C, gb.regs.a);
    gb.regs.a = 0x82;
    gb_write(0xDE79, gb.regs.a);
    return;
}

void LinkSeatedOnLog5Handler(void) {
    gb.regs.de = 0x9960;
    func_017_488C();
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkSeatedOnLog5Handler_ret_6AD0;
    gb.regs.a = 0x0A;
    gb_write(0xD206, gb.regs.a);
    gb.regs.a = gb_read(0xD200);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD200, gb.regs.a);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto LinkSeatedOnLog5Handler_ret_6AD0;
    gb.regs.a = 0x20;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubscene(); return;
  LinkSeatedOnLog5Handler_ret_6AD0:;
    return;
}

void LinkSeatedOnLog6Handler(void) {
    gb.regs.de = 0x9960;
    func_017_488C();
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkSeatedOnLog6Handler_ret_6AE0;
    IncrementCreditsSubscene(); return;
  LinkSeatedOnLog6Handler_ret_6AE0:;
    return;
}

void Data_017_6AE1(void) {
    /* data: db $02, $04, $06, $08, $0A, $0C, $0E, $10, $12, $14, $16, $18, $1A, $1C, $1E, $20 */;
    /* data: db $22, $24, $26, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28 */;
    /* data: db $28, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28, $28 */;
    /* data: db $28, $28, $28, $27, $26, $25, $24, $23, $22, $21, $20, $1F, $1E, $1D, $1C, $1B */;
    /* data: db $1A, $19, $18, $17, $16, $15, $14, $13, $12, $11, $10, $0F, $0E, $0D, $0C, $0B */;
    /* data: db $0A, $09, $08, $07, $06, $05, $04, $04, $04, $04, $04, $04, $00, $00, $00, $00 */;
}

void Data_017_6B41(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01 */;
    /* data: db $02, $02, $02, $02, $02, $02, $02, $02, $02, $02, $03, $03, $03, $03, $03, $03 */;
    /* data: db $03, $03, $03, $03, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04 */;
    /* data: db $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04 */;
    /* data: db $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04, $04 */;
}

void Data_017_6BA1(void) {
    /* data: db $1E, $1E, $1E, $1E, $1F, $1F, $1F, $1F, $1A, $1A, $1A, $1A, $15, $15, $15, $15 */;
    /* data: db $10, $10, $10, $10, $10, $10, $10, $10, $10, $10, $10, $10, $15, $15, $15, $15 */;
    /* data: db $19, $19, $1A, $1A, $1E, $1E, $1E, $1E */;
}

void LinkSeatedOnLog7Handler(void) {
    gb.regs.a = gb_read(0xD20D);
    alu_cp8(gb.regs.a, 0x0E);
    if (!GET_FLAG_C()) goto LinkSeatedOnLog7Handler_jr_6BD6;
    gb.regs.de = 0x9960;
    func_017_488C();
  LinkSeatedOnLog7Handler_jr_6BD6:;
    gb.regs.a = gb_read(0xD20D);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6B41;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xD20C, gb.regs.a);
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20C);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6BA1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = gb_read(0xD20D);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    alu_cp8(gb.regs.a, 0x59);
    if (!GET_FLAG_Z()) goto LinkSeatedOnLog7Handler_jr_6C15;
    gb.regs.a = gb_read(0xFF97);
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) goto LinkSeatedOnLog7Handler_jr_6C15;
    gb.regs.a = 0xFF;
    gb_write(0xD208, gb.regs.a);
    gb.regs.a = 0xA8;
    gb_write(0xD209, gb.regs.a);
    IncrementCreditsSubscene(); return;
  LinkSeatedOnLog7Handler_jr_6C15:;
    gb.regs.hl = 0x6AE1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb_write(0xC240, gb.regs.a);
    gb.regs.bc = 0;
    gb.regs.a = gb_read(0xC200);
    gb_push16(gb.regs.af);
    AddEntitySpeedToPos_17();
    gb.regs.a = gb_read(0xC200);
    gb_write(0xFF97, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    alu_cp8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD20D);
    alu_cp8(gb.regs.a, 0x59);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20D, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkSeatedOnLog7Handler_jr_6C4A;
    func_017_6C85();
  LinkSeatedOnLog7Handler_jr_6C4A:;
    gb.regs.a = gb_read(0xD20D);
    alu_cp8(gb.regs.a, 0x44);
    if (!GET_FLAG_Z()) goto LinkSeatedOnLog7Handler_jr_6C73;
    gb.regs.a = 0xE3;
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0B);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xA8);
  LinkSeatedOnLog7Handler_jr_6C73:;
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 35;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x95;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void func_017_6C85(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 32;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x26;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void LinkSeatedOnLog8Handler(void) {
    gb.regs.a = gb_read(0xD209);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto LinkSeatedOnLog8Handler_jr_6CA9;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = 0x17;
    ClearFileMenuBG_trampoline();
    TransitionToNextEndingScene(); return;
  LinkSeatedOnLog8Handler_jr_6CA9:;
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD20C);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6BA1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = gb_read(0xD208);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_6D0A(); return; };
    gb.regs.a = gb_read(0xD20B);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20B, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { ret_017_6D0A(); return; };
    gb.regs.a = gb_read(0xD20C);
    alu_cp8(gb.regs.a, 0x24);
    if (GET_FLAG_Z()) { ret_017_6D0A(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto LinkSeatedOnLog8Handler_jr_6CDD;
    func_017_6D0B();
  LinkSeatedOnLog8Handler_jr_6CDD:;
    gb.regs.a = gb_read(0xD20C);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20C, gb.regs.a);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { ret_017_6D0A(); return; };
    gb.regs.a = 0x1E;
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x62);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x5A);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0C);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x60);
    ret_017_6D0A(); return;
}

void ret_017_6D0A(void) {
    return;
}

void func_017_6D0B(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 36;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x78;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x01;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void CreditsLinkFaceCloseUpHandler(void) {
    AnimateEntitiesAndRestoreBank17();
    gb.regs.a = gb_read(0xD20E);
    switch(gb.regs.a) {
        case 0x00: CreditsLinkFaceCloseUp0Handler(); return;
        case 0x01: CreditsLinkFaceCloseUp1Handler(); return;
        case 0x02: CreditsLinkFaceCloseUp2Handler(); return;
        case 0x03: CreditsLinkFaceCloseUp3Handler(); return;
        case 0x04: CreditsLinkFaceCloseUp4Handler(); return;
        case 0x05: CreditsLinkFaceCloseUp5Handler(); return;
        case 0x06: CreditsLinkFaceCloseUp6Handler(); return;
    }
}

void CreditsLinkFaceCloseUp0Handler(void) {
    gb.regs.a = 0x1A;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7D, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD222, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void CreditsLinkFaceCloseUp1Handler(void) {
    gb.regs.a = 0x1B;
    gb_write(0xD7B4, gb.regs.a);
    ResetCreditsSceneVariables();
    gb.regs.a = 0x1E;
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.a = 0x6E;
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x38);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0D);
    gb.regs.a = 0x20;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void CreditsLinkFaceCloseUp2Handler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_017_6D7C(); return; };
    IncrementCreditsSubscene();
    func_017_6D7C(); return;
}

void func_017_6D7C(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_017_6D8E(); return; };
    gb.regs.a = gb_read(0xD20F);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x31);
    if (!GET_FLAG_Z()) goto func_017_6D7C_jr_6D8B;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_017_6D7C_jr_6D8B:;
    gb_write(0xD20F, gb.regs.a);
    jr_017_6D8E(); return;
}

void jr_017_6D8E(void) {
    gb.regs.a = gb_read(0xD20F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x76AD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    return;
}

void Data_017_6D9D(void) {
    /* data: db $6E, $6E, $6E, $6E, $1E, $1E, $1E, $1E */;
}

void CreditsLinkFaceCloseUp3Handler(void) {
    func_017_6D7C();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto CreditsLinkFaceCloseUp3Handler_jr_6DC1;
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD20A, gb.regs.a);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto CreditsLinkFaceCloseUp3Handler_jr_6DC1;
    gb.regs.a = 0xFF;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubscene(); return;
  CreditsLinkFaceCloseUp3Handler_jr_6DC1:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { func_017_6DDB(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6D9D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    return;
}

void func_017_6DDB(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 36;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void CreditsLinkFaceCloseUp4Handler(void) {
    func_017_6D7C();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto CreditsLinkFaceCloseUp4Handler_jr_6DF8;
    func_017_6DDB();
  CreditsLinkFaceCloseUp4Handler_jr_6DF8:;
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreditsLinkFaceCloseUp4Handler_jr_6E07;
    gb.regs.a = 0xE0;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubscene(); return;
    return;
  CreditsLinkFaceCloseUp4Handler_jr_6E07:;
    alu_cp8(gb.regs.a, 0x44);
    if (GET_FLAG_Z()) goto CreditsLinkFaceCloseUp4Handler_jr_6E0F;
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_Z()) { ret_017_6E13(); return; };
  CreditsLinkFaceCloseUp4Handler_jr_6E0F:;
    gb.regs.hl = 0xD203;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    ret_017_6E13(); return;
}

void ret_017_6E13(void) {
    return;
}

void CreditsLinkFaceCloseUp5Handler(void) {
    func_017_6D7C();
    gb.regs.hl = 0xD206;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { jr_017_6E40(); return; };
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD202, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto CreditsLinkFaceCloseUp5Handler_jr_6E34;
    gb.regs.a = 0x40;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubscene();
  CreditsLinkFaceCloseUp5Handler_jr_6E34:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_6E40(); return; };
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_dec8(gb.regs.a);
    func_017_7F30(); return;
}

void jr_017_6E40(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD202);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6456;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb.regs.hl = 0x6456;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    gb.regs.hl = 0x6466;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC41, gb.regs.a);
    return;
}

void CreditsLinkFaceCloseUp6Handler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto CreditsLinkFaceCloseUp6Handler_ret_6E6E;
    TransitionToNextEndingScene(); return;
  CreditsLinkFaceCloseUp6Handler_ret_6E6E:;
    return;
}

void CreditsRollHandler(void) {
    gb.regs.de = 0x99A0;
    func_017_488C();
    func_017_448B();
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) return;
    AnimateEntitiesAndRestoreBank17();
    gb.regs.a = gb_read(0xD20E);
    switch(gb.regs.a) {
        case 0x00: CreditsRollLoadHandler(); return;
        case 0x01: CreditsRoll1Handler(); return;
        case 0x02: CreditsRoll2Handler(); return;
        case 0x03: CreditsRoll3Handler(); return;
        case 0x04: CreditsRoll4Handler(); return;
        case 0x05: CreditsRoll5Handler(); return;
    }
}

void CreditsRollLoadHandler(void) {
    gb.regs.a = 0x1B;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7D, gb.regs.a);
    gb.regs.hl = 0xD7B2;
    gb_write(gb.regs.hl, alu_res(2, gb_read(gb.regs.hl)));
    IncrementCreditsSubscene(); return;
}

void CreditsRoll1Handler(void) {
    gb.regs.a = 0x1C;
    gb_write(0xD7B4, gb.regs.a);
    ResetCreditsSceneVariables();
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x78);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0E);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD212, gb.regs.a);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD210, gb.regs.a);
    gb.regs.a = 0xB0;
    gb_write(0xD209, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE7, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void Data_017_6ED8(void) {
    /* TODO: CREDITS_FADE $00, $04, $19, $1E */;
}

void CreditsRoll2Handler(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_017_6F10(); return; };
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD202, gb.regs.a);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto CreditsRoll2Handler_jr_6F04;
    gb.regs.a = 0xFF;
    gb_write(0xD213, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFE7, gb.regs.a);
    IncrementCreditsSubscene();
  CreditsRoll2Handler_jr_6F04:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_017_6F10(); return; };
    gb.regs.a = gb_read(0xD202);
    gb.regs.a = alu_dec8(gb.regs.a);
    CreditsBlendPalettes(); return;
}

void jr_017_6F10(void) {
    /* TODO: CREDITS_MACRO_LDH_AND_LD  */;
    gb.regs.a = gb_read(0xD202);
    /* TODO: CREDITS_MACRO_ADD  */;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x6ED8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC40, gb.regs.a);
    return;
}

void CreditsRoll3Handler(void) {
    gb.regs.a = gb_read(0xD213);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { ret_017_6F67(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { ret_017_6F67(); return; };
    gb.regs.hl = 0xFF97;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x70);
    if (!GET_FLAG_Z()) goto CreditsRoll3Handler_jr_6F40;
    IncrementCreditsSubscene(); return;
  CreditsRoll3Handler_jr_6F40:;
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto CreditsRoll3Handler_jr_6F4C;
    gb.regs.hl = 0xC28F;
    gb_write(gb.regs.hl, 0);
    label_017_6F9F(); return;
  CreditsRoll3Handler_jr_6F4C:;
    alu_cp8(gb.regs.a, 0xC0);
    if (!GET_FLAG_Z()) { ret_017_6F67(); return; };
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xB0);
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x0F);
    ret_017_6F67(); return;
}

void ret_017_6F67(void) {
    return;
}

void CreditsRoll4Handler(void) {
    return;
}

void CreditsRoll5Handler(void) {
    return;
}

void Data_017_6F6A(void) {
    /* data: db $99, $C1, $05, $58, $59, $5A, $5B, $5C, $5D, $99, $E1, $05, $68, $69, $6A, $6B */;
    /* data: db $6C, $6D, $99, $F1, $02, $58, $59, $5A, $9A, $11, $02, $68, $69, $6A, $9A, $20 */;
    /* data: db $01, $5C, $5D, $00 */;
}

void Data_017_6F8E(void) {
    /* data: db $99, $C0, $53, $00, $99, $E0, $53, $00, $9A, $00, $53, $00, $9A, $20, $53, $00 */;
    /* data: db $00 */;
}

void label_017_6F9F(void) {
    gb.regs.hl = 0x6F6A;
    gb.regs.de = 0xD5C2;
    gb.regs.c = 0x24;
  label_017_6F9F_loop_6FA7:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto label_017_6F9F_loop_6FA7;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0x6F8E;
    gb.regs.de = 0xDD39;
    gb.regs.c = 0x11;
  label_017_6F9F_loop_6FB9:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto label_017_6F9F_loop_6FB9;
    return;
}

void CreditsTheEndHandler(void) {
    gb.regs.a = gb_read(0xD20E);
    switch(gb.regs.a) {
        case 0x00: CreditsTheEnd0Handler(); return;
        case 0x01: CreditsTheEnd1Handler(); return;
        case 0x02: CreditsTheEnd2Handler(); return;
        case 0x03: CreditsTheEnd3Handler(); return;
        case 0x04: CreditsTheEnd4Handler(); return;
        case 0x05: CreditsTheEnd5Handler(); return;
        case 0x06: CreditsTheEnd6Handler(); return;
    }
}

void CreditsTheEnd0Handler(void) {
    gb.regs.a = gb_read(0xD21E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = (0xDCF8 + _3_2);
    gb.regs.a = 0xFF;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xDE7B, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7C, gb.regs.a);
    gb.regs.a = 0x82;
    gb_write(0xDE79, gb.regs.a);
    gb.regs.a = 0xB4;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void CreditsTheEnd1Handler(void) {
    LayoutRoleLetters();
    LayoutStaffLetters();
    gb.regs.hl = 0xDBFF;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 7;
    gb_write(0xFFA9, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb_write(0xFFAA, gb.regs.a);
    gb.regs.a = 0xB4;
    gb_write(0xD206, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void CreditsTheEnd2Handler(void) {
    gb.regs.a = gb_read(0xD206);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    AnimateEntitiesAndRestoreBank17();
    return;
}

void CreditsTheEnd3Handler(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) return;
    func_017_7FA9();
    gb.regs.a = gb_read(0xD21F);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xD21F, gb.regs.a);
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { IncrementCreditsSubscene(); return; };
    return;
}

void CreditsTheEnd4Handler(void) {
    gb.regs.a = 0x23;
    gb_write(0xD7B3, gb.regs.a);
    gb.regs.hl = 0xDCC0;
    gb.regs.a = 0xFF;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x47;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 4;
    gb_write(0xDE7B, gb.regs.a);
    gb.regs.a = 1;
    gb_write(0xDE7C, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(0xDE79, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF96, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    gb.regs.a = 0xFA;
    gb_write(0xFF96, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF97, gb.regs.a);
    IncrementCreditsSubscene(); return;
}

void Data_017_705D(void) {
    /* data: db $98, $A2, $0E, $01, $02, $03, $00, $04, $05, $06, $07, $08, $09, $0A, $0B, $0C */;
    /* data: db $0D, $0E, $98, $E2, $0E, $0E, $10, $11, $12, $00, $13, $14, $15, $16, $17, $00 */;
    /* data: db $18, $19, $1A, $1B, $99, $22, $0B, $1C, $1D, $00, $1E, $1F, $20, $21, $22, $00 */;
    /* data: db $23, $24, $25, $99, $62, $0B, $26, $27, $28, $00, $29, $2A, $2B, $2C, $2D, $2E */;
    /* data: db $2F, $0F, $00 */;
  Data_017_705D_end:;
    Data_017_70A0(); return;
}

void Data_017_70A0(void) {
    /* data: db $98, $A2, $4E, $01, $98, $E2, $4E, $01, $99, $22, $4B, $01, $99, $62, $4B, $01 */;
    /* data: db $00 */;
  Data_017_70A0_end:;
    CreditsTheEnd5Handler(); return;
}

void CreditsTheEnd5Handler(void) {
    gb.regs.hl = 0x705D;
    gb.regs.de = 0xD5C2;
    gb.regs.c = -2183;
  CreditsTheEnd5Handler_loop_017_70B9:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreditsTheEnd5Handler_loop_017_70B9;
    gb.regs.hl = 0x70A0;
    gb.regs.de = 0xDD39;
    gb.regs.c = -2233;
  CreditsTheEnd5Handler_loop_017_70C7:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto CreditsTheEnd5Handler_loop_017_70C7;
    IncrementCreditsSubscene(); return;
}

void CreditsTheEnd6Handler(void) {
    return;
}

void Data_017_70D1(void) {
    /* data: db $08, $00, $5C, $00, $10, $00, $5D, $00 */;
    /* data: db $00, $08, $C0, $00, $08, $08, $C1, $00 */;
    /* data: db $00, $10, $CE, $00, $08, $10, $CF, $00 */;
    /* data: db $00, $18, $DE, $00, $08, $18, $DF, $00 */;
    /* data: db $00, $20, $EA, $00, $08, $20, $EB, $00 */;
    /* data: db $08, $00, $5E, $00, $10, $00, $5F, $00 */;
    /* data: db $00, $08, $C0, $00, $08, $08, $C1, $00 */;
    /* data: db $00, $10, $CE, $00, $08, $10, $CF, $00 */;
    /* data: db $00, $18, $DE, $00, $08, $18, $DF, $00 */;
    /* data: db $00, $20, $EA, $00, $08, $20, $EB, $00 */;
    /* data: db $08, $00, $EC, $00, $10, $00, $ED, $00 */;
    /* data: db $00, $08, $D0, $00, $08, $08, $D1, $00 */;
    /* data: db $00, $10, $CE, $00, $08, $10, $CF, $00 */;
    /* data: db $00, $18, $DE, $00, $08, $18, $DF, $00 */;
    /* data: db $00, $20, $EA, $00, $08, $20, $EB, $00 */;
    /* data: db $08, $00, $EE, $00, $10, $00, $EF, $00 */;
    /* data: db $00, $08, $D0, $00, $08, $08, $D1, $00 */;
    /* data: db $00, $10, $CE, $00, $08, $10, $CF, $00 */;
    /* data: db $00, $18, $DE, $00, $08, $18, $DF, $00 */;
    /* data: db $00, $20, $EA, $00, $08, $20, $EB, $00 */;
}

void func_017_7171(void) {
    gb.regs.a = 0x3C;
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = gb_read(0xFF97);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.e);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_017_7171_jr_7188;
    func_017_71CD();
    jr_017_71AC(); return;
  func_017_7171_jr_7188:;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.e = gb.regs.a;
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x70D1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 0x0A;
    RenderActiveEntitySpritesRectUsingAllOAM();
    gb.regs.a = 0x0A;
    func_015_7964_trampoline();
    jr_017_71AC(); return;
}

void jr_017_71AC(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto jr_017_71AC_ret_71CC;
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 4);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
    UpdateEntityPosWithSpeed_17();
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_C()) return;
    IncrementCreditsSubscene();
    label_017_7CC2(); return;
  jr_017_71AC_ret_71CC:;
    return;
}

void func_017_71CD(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 32;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7D;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void Data_017_71DF(void) {
    /* data: db $00, $00, $00, $00, $08, $00, $01, $00, $00, $08, $02, $00, $08, $08, $03, $00 */;
    /* data: db $00, $FA, $10, $00, $08, $FA, $11, $00, $00, $0E, $10, $20, $08, $0E, $11, $20 */;
    /* data: db $00, $00, $00, $00, $08, $00, $01, $00, $00, $08, $02, $00, $08, $08, $03, $00 */;
    /* data: db $08, $FA, $10, $40, $00, $FA, $11, $40, $08, $0E, $10, $60, $00, $0E, $11, $60 */;
    /* data: db $00, $08, $00, $20, $08, $08, $01, $20, $00, $00, $02, $20, $08, $00, $03, $20 */;
    /* data: db $00, $FA, $10, $00, $08, $FA, $11, $00, $00, $0E, $10, $20, $08, $0E, $11, $20 */;
    /* data: db $00, $08, $00, $20, $08, $08, $01, $20, $00, $00, $02, $20, $08, $00, $03, $20 */;
    /* data: db $08, $FA, $10, $40, $00, $FA, $11, $40, $08, $0E, $10, $60, $00, $0E, $11, $60 */;
}

void func_017_725F(void) {
    gb.regs.hl = 0xDBFF;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto func_017_725F_jr_7293;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_017_72BD(); return; };
    gb.regs.a = 0x1C;
    gb_write(0xDC40, gb.regs.a);
    gb.regs.a = 0x3C;
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x71DF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 8;
    RenderActiveEntitySpritesRectUsingAllOAM();
    gb.regs.a = 8;
    func_015_7964_trampoline();
  func_017_725F_jr_7293:;
    UpdateEntityPosWithSpeed_17();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto func_017_725F_jr_72A6;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFC);
    if (GET_FLAG_Z()) goto func_017_725F_jr_72A6;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  func_017_725F_jr_72A6:;
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) { label_017_7CC2(); return; };
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    if (!GET_FLAG_Z()) goto func_017_725F_ret_72BC;
    gb.regs.a = 0x21;
    gb_write(0xFFF2, gb.regs.a);
  func_017_725F_ret_72BC:;
    return;
}

void jr_017_72BD(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 39;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(0xDC57, gb.regs.a);
    gb.regs.a = 0x78;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x54;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall();
    gb.regs.a = 0;
    gb_write(0xDC57, gb.regs.a);
    return;
}

void Data_017_72D8(void) {
    /* data: db $00, $00, $4C, $00, $08, $00, $4D, $00, $00, $08, $4E, $00, $08, $08, $4F, $00 */;
    /* data: db $10, $F8, $60, $00, $18, $F8, $61, $00, $10, $00, $62, $00, $18, $00, $63, $00 */;
    /* data: db $10, $08, $64, $00, $18, $08, $65, $00, $10, $10, $66, $00, $18, $10, $67, $00 */;
    /* data: db $00, $00, $4C, $00, $08, $00, $4D, $00, $00, $08, $4E, $00, $08, $08, $4F, $00 */;
    /* data: db $10, $F8, $68, $00, $18, $F8, $69, $00, $10, $00, $6A, $00, $18, $00, $6B, $00 */;
    /* data: db $10, $08, $6C, $00, $18, $08, $6D, $00, $10, $10, $6E, $00, $18, $10, $6F, $00 */;
    /* data: db $00, $00, $4C, $00, $08, $00, $4D, $00, $00, $08, $4E, $00, $08, $08, $4F, $00 */;
    /* data: db $10, $F8, $70, $00, $18, $F8, $71, $00, $10, $00, $72, $00, $18, $00, $73, $00 */;
    /* data: db $10, $08, $74, $00, $18, $08, $75, $00, $10, $10, $76, $00, $18, $10, $77, $00 */;
    /* data: db $00, $00, $4C, $00, $08, $00, $4D, $00, $00, $08, $4E, $00, $08, $08, $4F, $00 */;
    /* data: db $10, $F8, $78, $00, $18, $F8, $79, $00, $10, $00, $7A, $00, $18, $00, $7B, $00 */;
    /* data: db $10, $08, $7C, $00, $18, $08, $7D, $00, $10, $10, $7E, $00, $18, $10, $7F, $00 */;
}

void func_017_7398(void) {
    gb.regs.a = 0x3C;
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_017_73AF(); return; };
    gb.regs.a = gb_read(0xD20F);
  func_017_7398_jr_73A6:;
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x31);
    if (GET_FLAG_C()) goto func_017_7398_jr_73AC;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_017_7398_jr_73AC:;
    gb_write(0xD20F, gb.regs.a);
    jr_017_73AF(); return;
}

void jr_017_73AF(void) {
    gb.regs.a = gb_read(0xD20F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x76AD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF97);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.d);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_017_73AF_jr_73ED;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
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
    gb.regs.hl = 0x72D8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 0x0C;
    RenderActiveEntitySpritesRectUsingAllOAM();
    gb.regs.a = 0x0C;
    func_015_7964_trampoline();
    return;
  jr_017_73AF_jr_73ED:;
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 39;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x78;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x2E;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void Data_017_73FF(void) {
    /* data: db $00, $00, $00, $00, $00, $08, $02, $00, $00, $10, $04, $00, $00, $18, $06, $00 */;
    /* data: db $00, $20, $08, $00, $00, $28, $0A, $00, $10, $20, $14, $00, $10, $28, $16, $00 */;
    /* data: db $20, $20, $1E, $00, $20, $28, $20, $00, $30, $00, $50, $00, $30, $08, $22, $00 */;
    /* data: db $30, $10, $24, $00, $30, $18, $26, $00, $30, $20, $28, $00, $30, $28, $2A, $00 */;
    /* data: db $30, $30, $2C, $00, $30, $38, $2E, $00, $40, $00, $30, $00, $40, $08, $32, $00 */;
    /* data: db $40, $10, $34, $00, $40, $18, $36, $00, $40, $20, $38, $00, $40, $28, $3A, $00 */;
    /* data: db $40, $30, $3C, $00, $40, $38, $3E, $00, $40, $40, $40, $00 */;
}

void Data_017_746B(void) {
    /* data: db $10, $00, $0C, $00, $10, $08, $0E, $00, $10, $10, $10, $00, $10, $18, $12, $00 */;
    /* data: db $20, $08, $18, $00, $20, $10, $1A, $00, $20, $18, $1C, $00, $FF, $FF, $FF, $FF */;
    /* data: db $10, $00, $0C, $00, $10, $08, $42, $00, $10, $10, $44, $00, $10, $18, $46, $00 */;
    /* data: db $20, $08, $18, $00, $20, $10, $48, $00, $20, $18, $4A, $00, $FF, $FF, $FF, $FF */;
    /* data: db $10, $00, $0C, $00, $10, $08, $52, $00, $10, $10, $54, $00, $10, $18, $56, $00 */;
    /* data: db $20, $08, $18, $00, $20, $10, $58, $00, $20, $18, $5A, $00, $FF, $FF, $FF, $FF */;
}

void func_017_74CB(void) {
    gb.regs.a = gb_read(0xD20F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x76AD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFFEC, gb.regs.a);
  func_017_74CB_jr_74DD:;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
  func_017_74CB_jr_74E0:;
    if (!GET_FLAG_Z()) goto func_017_74CB_jr_750F;
    gb.regs.hl = 0x73FF;
    gb.regs.c = 0x1B;
    RenderActiveEntitySpritesRectUsingAllOAM();
    gb.regs.a = 0x1B;
    func_015_7964_trampoline();
    gb.regs.a = gb_read(0xD203);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x746B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 7;
    gb.regs.a = 0x40;
    gb_write(0xC3C0, gb.regs.a);
    RenderActiveEntitySpritesRect();
    gb.regs.a = 7;
    func_015_7964_trampoline();
    return;
  func_017_74CB_jr_750F:;
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 39;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x77;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x4C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void Data_017_7521(void) {
    /* data: db $00, $00, $70, $07, $00, $00, $70, $07, $00, $00, $70, $07, $00, $00, $70, $07 */;
    /* data: db $08, $08, $5C, $07, $08, $08, $5C, $07, $00, $00, $70, $07, $08, $08, $5E, $07 */;
    /* data: db $08, $10, $60, $07 */;
}

void func_017_7545(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC3);
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
    gb.regs.hl = 0x7521;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    GetEntityTransitionCountdown();
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_017_7545_jr_756C;
    alu_cp8(gb.regs.a, 0x30);
    if (!GET_FLAG_Z()) { ret_017_7571(); return; };
  func_017_7545_jr_756C:;
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    ret_017_7571(); return;
}

void ret_017_7571(void) {
    return;
}

void Data_017_7572(void) {
    /* data: db $00, $00, $62, $10, $00, $08, $62, $30 */;
    /* data: db $10, $F0, $64, $10, $10, $F8, $66, $10 */;
    /* data: db $10, $00, $68, $10, $10, $08, $68, $30 */;
    /* data: db $10, $10, $66, $30, $10, $18, $64, $30 */;
    /* data: db $20, $00, $6A, $10, $20, $08, $6A, $30 */;
    /* data: db $30, $F8, $6C, $10, $30, $00, $6E, $10 */;
    /* data: db $30, $08, $6E, $30, $30, $10, $6C, $30 */;
}

void func_017_75AA(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.hl = 0xFF97;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.hl = 0x7572;
    gb.regs.c = 0x0E;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 0x0E;
    func_015_7964_trampoline();
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFE);
    UpdateEntityYPosWithSpeed_17();
    gb.regs.a = gb_read(0xFFF0);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { ret_017_75E0(); return; };
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ret_017_75E0(); return; };
  func_017_75AA_jr_75D7:;
    gb_write(gb.regs.hl, 0xC0);
    IncrementEntityState();
    gb.regs.a = 0x17;
    gb_write(0xFFF3, gb.regs.a);
    ret_017_75E0(); return;
}

void ret_017_75E0(void) {
    return;
}

void Data_017_75E1(void) {
    /* data: db $00, $08, $B2, $00, $00, $10, $B4, $00 */;
    /* data: db $00, $18, $B6, $00, $00, $20, $B8, $00 */;
    /* data: db $10, $10, $BA, $00, $10, $18, $BC, $00 */;
    /* data: db $10, $20, $86, $00, $20, $00, $88, $00 */;
    /* data: db $20, $08, $8A, $00, $20, $10, $8C, $00 */;
    /* data: db $20, $18, $8E, $00, $20, $20, $94, $00 */;
    /* data: db $30, $00, $98, $00, $30, $08, $9A, $00 */;
    /* data: db $30, $10, $A4, $00, $30, $18, $A8, $00 */;
    /* data: db $30, $20, $AA, $00, $00, $08, $C2, $00 */;
    /* data: db $00, $10, $C4, $00, $00, $18, $C6, $00 */;
    /* data: db $00, $20, $C8, $00, $10, $10, $CA, $00 */;
    /* data: db $10, $18, $CC, $00, $10, $20, $96, $00 */;
    /* data: db $20, $00, $88, $00, $20, $08, $8A, $00 */;
    /* data: db $20, $10, $8C, $00, $20, $18, $8E, $00 */;
    /* data: db $20, $20, $94, $00, $30, $00, $98, $00 */;
    /* data: db $30, $08, $9A, $00, $30, $10, $A4, $00 */;
    /* data: db $30, $18, $A8, $00, $30, $20, $AA, $00 */;
    /* data: db $00, $08, $D2, $00, $00, $10, $D4, $00 */;
    /* data: db $00, $18, $D6, $00, $00, $20, $D8, $00 */;
    /* data: db $10, $10, $DA, $00, $10, $18, $DC, $00 */;
    /* data: db $10, $20, $A6, $00, $20, $00, $88, $00 */;
    /* data: db $20, $08, $8A, $00, $20, $10, $8C, $00 */;
    /* data: db $20, $18, $8E, $00, $20, $20, $94, $00 */;
    /* data: db $30, $00, $98, $00, $30, $08, $9A, $00 */;
    /* data: db $30, $10, $A4, $00, $30, $18, $A8, $00 */;
    /* data: db $30, $20, $AA, $00 */;
}

void Data_017_76AD(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $01, $01 */;
    /* data: db $01, $01, $02, $02, $02, $03, $03, $04 */;
    /* data: db $05, $05, $06, $06, $06, $07, $07, $07 */;
    /* data: db $07, $08, $08, $08, $08, $08, $08, $07 */;
    /* data: db $07, $07, $07, $06, $06, $06, $05, $05 */;
    /* data: db $04, $03, $02, $02, $02, $01, $01, $01 */;
    /* data: db $01 */;
}

void func_017_76DE(void) {
    gb.regs.a = 0;
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = gb_read(0xFF97);
    gb.regs.d = gb.regs.a;
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.d);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { jr_017_76FD(); return; };
    gb.regs.a = gb_read(0xD20F);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x31);
    if (GET_FLAG_C()) goto func_017_76DE_jr_76FA;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_017_76DE_jr_76FA:;
    gb_write(0xD20F, gb.regs.a);
    jr_017_76FD(); return;
}

void jr_017_76FD(void) {
    gb.regs.a = gb_read(0xD20F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x76AD;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xFFD7;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    alu_cp8(gb.regs.a, 0xA8);
    if (!GET_FLAG_C()) { label_017_7CC2(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_017_76FD_jr_7739;
    gb.regs.a = gb_read(0xD200);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xC0);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x75E1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 0x11;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 0x11;
    func_015_7964_trampoline();
    return;
  jr_017_76FD_jr_7739:;
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 39;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x76;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x60;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void Data_017_774B(void) {
    /* data: db $00, $00, $70, $07, $08, $08, $5E, $07 */;
    /* data: db $08, $10, $60, $07 */;
}

void func_017_7757(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC3);
    gb.regs.hl = 0x774B;
    gb.regs.c = 3;
    RenderActiveEntitySpritesRect();
    return;
}

void Data_017_7766(void) {
    /* data: db $50, $00, $52, $00, $54, $00, $56, $00 */;
    /* data: db $57, $00, $5A, $00 */;
}

void func_017_7772(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { jr_017_7784(); return; };
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto func_017_7772_jr_7783;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  func_017_7772_jr_7783:;
    gb_write(gb.regs.hl, gb.regs.a);
    jr_017_7784(); return;
}

void jr_017_7784(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC1);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto jr_017_7784_jr_7798;
    gb.regs.hl = 0xFFED;
    gb_write(gb.regs.hl, alu_set(5, gb_read(gb.regs.hl)));
  jr_017_7784_jr_7798:;
    gb.regs.de = 0x7766;
    RenderActiveEntitySprite();
    AddEntitySpeedToPos_17();
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xB0);
    if (!GET_FLAG_C()) { label_017_7CC2(); return; };
    return;
}

void Data_017_77A9(void) {
    /* data: db $00, $08, $0E, $00, $00, $10, $1E, $00 */;
    /* data: db $00, $18, $2E, $00, $10, $00, $50, $00 */;
    /* data: db $10, $08, $52, $00, $10, $10, $54, $00 */;
    /* data: db $10, $18, $58, $00 */;
}

void Data_017_77C5(void) {
    /* data: db $00, $08, $0E, $00, $00, $10, $1E, $00 */;
    /* data: db $00, $18, $2E, $00, $10, $00, $60, $00 */;
    /* data: db $10, $08, $62, $00, $10, $10, $64, $00 */;
    /* data: db $10, $18, $68, $00 */;
}

void Data_017_77E1(void) {
    /* data: db $00, $00, $00, $01, $02, $02, $02, $01 */;
}

void Data_017_77E9(void) {
    /* data: db $00, $00, $00, $00, $01, $01, $01, $01 */;
}

void func_017_77F1(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC7);
    gb.regs.a = 0;
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
  func_017_77F1_jr_77FE:;
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x77E1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_017_7826(); return; };
    gb.regs.hl = 0x77A9;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto func_017_77F1_jr_7820;
    gb.regs.hl = 0x77C5;
  func_017_77F1_jr_7820:;
    gb.regs.c = 7;
    RenderActiveEntitySpritesRect();
    return;
}

void jr_017_7826(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 39;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x72;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xE4;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void Data_017_7838(void) {
    /* data: db $5A, $03, $6A, $03 */;
}

void func_017_783C(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC1);
    gb.regs.a = gb.regs.c;
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 6);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x77E9;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_017_783C_jr_7867;
    gb.regs.de = 0x7838;
    RenderActiveEntitySprite();
    return;
  func_017_783C_jr_7867:;
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 39;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x73;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x06;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void Unknow001SpriteVariants(void) {
  Unknow001SpriteVariants_variant0:;
    /* data: db $54, OAM_GBC_PAL_4 */;
    /* data: db $64, OAM_GBC_PAL_4 */;
  Unknow001SpriteVariants_variant1:;
    /* data: db $64, OAM_GBC_PAL_4 | OAMF_XFLIP */;
    /* data: db $54, OAM_GBC_PAL_4 | OAMF_XFLIP */;
  Unknow001SpriteVariants_variant2:;
    /* data: db $4E, OAM_GBC_PAL_4 */;
    /* data: db $7E, OAM_GBC_PAL_4 */;
    func_017_7885(); return;
}

void func_017_7885(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.a = gb_read(0xFFF1);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { jr_017_78B7(); return; };
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { jr_017_78C4(); return; };
    gb.regs.a = gb_read(0xD20A);
    jr_017_7898(); return;
}

void jr_017_7898(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x634C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    jr_017_78A1(); return;
}

void jr_017_78A1(void) {
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFFEC, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_017_78DD(); return; };
    gb.regs.de = 0x7027;
    RenderActiveEntitySpritesPair();
    return;
}

void jr_017_78B7(void) {
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_add8(gb.regs.a, 6);
    alu_cp8(gb.regs.a, 0x2B);
    if (GET_FLAG_C()) goto jr_017_78B7_jr_78C2;
    gb.regs.a = alu_sub8(gb.regs.a, 0x2B);
  jr_017_78B7_jr_78C2:;
    jr_017_7898(); return;
}

void jr_017_78C4(void) {
    gb.regs.a = gb_read(0xD20A);
    gb.regs.a = alu_add8(gb.regs.a, 0x18);
    alu_cp8(gb.regs.a, 0x2B);
    if (GET_FLAG_C()) goto jr_017_78C4_jr_78CF;
    gb.regs.a = alu_sub8(gb.regs.a, 0x2B);
  jr_017_78C4_jr_78CF:;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x634C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb.regs.a = alu_sra(gb.regs.a);
    jr_017_78A1(); return;
}

void jr_017_78DD(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 39;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x73;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x4B;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void Unknown002SpriteVariants(void) {
  Unknown002SpriteVariants_variant0:;
    /* data: db $72, OAMF_PAL0 */;
    /* data: db $72, OAMF_PAL0 | OAMF_XFLIP */;
  Unknown002SpriteVariants_variant1:;
    /* data: db $74, OAMF_PAL0 */;
    /* data: db $74, OAMF_PAL0 | OAMF_XFLIP */;
  Unknown002SpriteVariants_variant2:;
    /* data: db $76, OAMF_PAL0 */;
    /* data: db $76, OAMF_PAL0 | OAMF_XFLIP */;
  Unknown002SpriteVariants_variant3:;
    /* data: db $78, OAMF_PAL0 */;
    /* data: db $78, OAMF_PAL0 | OAMF_XFLIP */;
  Unknown002SpriteVariants_variant4:;
    /* data: db $7A, OAMF_PAL0 */;
    /* data: db $7A, OAMF_PAL0 | OAMF_XFLIP */;
  Unknown002SpriteVariants_variant5:;
    /* data: db $7C, OAMF_PAL0 */;
    /* data: db $7C, OAMF_PAL0 | OAMF_XFLIP */;
    Data_017_7907(); return;
}

void Data_017_7907(void) {
    /* data: db $08, $06, $06, $06, $06, $08 */;
}

void func_017_790D(void) {
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xC2);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_017_790D_jr_791D;
    func_017_795E();
    jr_017_7923(); return;
  func_017_790D_jr_791D:;
    gb.regs.de = 0x709B;
    RenderActiveEntitySpritesPair();
    jr_017_7923(); return;
}

void jr_017_7923(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_017_793E(); return; };
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto jr_017_7923_jr_7934;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  jr_017_7923_jr_7934:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7907;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    jr_017_793E(); return;
}

void jr_017_793E(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    if (!GET_FLAG_Z()) goto jr_017_793E_jr_7953;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto jr_017_793E_jr_7953;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  jr_017_793E_jr_7953:;
    UpdateEntityPosWithSpeed_17();
    gb.regs.a = gb_read(0xFFEE);
    alu_cp8(gb.regs.a, 0xB0);
    if (!GET_FLAG_C()) { label_017_7CC2(); return; };
    return;
}

void func_017_795E(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 39;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x73;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xC7;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void func_017_7970(void) {
    return;
}

void func_017_7971(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
  func_017_7971_jr_7974:;
    if (GET_FLAG_Z()) return;
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 39;
  func_017_7971_jr_797A:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x74;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xE3;
  func_017_7971_jr_7980:;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void Data_017_7987(void) {
    /* data: db $D0, $01, $D2, $01, $D4, $01, $D6, $01, $D8, $01, $DA, $01, $DC, $01, $DE, $01 */;
    /* data: db $E0, $01, $E2, $01, $E4, $01, $E6, $01, $E8, $01, $EA, $01, $EC, $01, $EE, $01 */;
}

void func_017_79A7(void) {
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 0x50);
    gb_write(0xFFD7, gb.regs.a);
    func_017_7A01();
    gb.regs.de = 0x7987;
    func_017_7A29();
    GetEntitySlowTransitionCountdown();
    if (GET_FLAG_Z()) return;
    UpdateEntityPosWithSpeed_17();
    return;
}

void Data_017_79C1(void) {
    /* data: db $80, $26, $95, $63, $20, $3A, $75, $6B, $A0, $51, $35, $73, $08, $7D, $18, $7F */;
    /* data: db $AD, $78, $F9, $7E, $50, $5C, $DA, $76, $12, $40, $BB, $6A, $15, $30, $BC, $66 */;
    /* data: db $17, $14, $BD, $5E, $D7, $04, $FD, $56, $37, $05, $1D, $57, $97, $09, $3D, $5B */;
    /* data: db $F5, $09, $5C, $5B, $10, $0A, $5A, $5B, $4B, $06, $79, $57, $A0, $02, $95, $57 */;
}

void func_017_7A01(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xD20E);
    alu_cp8(gb.regs.a, 0x13);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x3C);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x79C1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.de = (0xDD00 + _2_2);
  func_017_7A01_loop_7A1B:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_017_7A01_loop_7A1B;
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
    return;
}

void func_017_7A29(void) {
    gb_push16(gb.regs.bc);
    gb_push16(gb.regs.de);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.de = gb_pop16();
    gb.regs.a = gb_read(0xFFEC);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xC155);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    alu_rra();
    alu_rra();
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFF1);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = gb_pop16();
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xFFED;
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFEC);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(0xC155);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    gb.regs.a = alu_xor8(gb.regs.a, 0x20);
    alu_rra();
    alu_rra();
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFFED;
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.bc = gb_pop16();
    return;
}

void EndingOwlStairClimbingEntityHandler(void) {
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    switch(gb.regs.a) {
        case 0x00: func_017_7AB1(); return;
        case 0x01: func_017_7B99(); return;
        case 0x02: func_017_7C1B(); return;
        case 0x03: func_017_79A7(); return;
        case 0x04: func_017_77F1(); return;
        case 0x05: func_017_783C(); return;
        case 0x06: func_017_7772(); return;
        case 0x07: func_017_7757(); return;
        case 0x08: func_017_7885(); return;
        case 0x09: func_017_790D(); return;
        case 0x0A: func_017_76DE(); return;
        case 0x0B: func_017_75AA(); return;
        case 0x0C: func_017_7545(); return;
        case 0x0D: func_017_74CB(); return;
        case 0x0E: func_017_7398(); return;
        case 0x0F: func_017_7171(); return;
        case 0x10: func_017_725F(); return;
        case 0x11: func_017_7970(); return;
    }
}

void func_017_7AB1(void) {
    func_017_7B5F();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_017_7AC1(); return;
        case 0x01: func_017_7B06(); return;
        case 0x02: func_017_7B41(); return;
        case 0x03: func_017_7B43(); return;
        case 0x04: func_017_7B5B_2(); return;
    }
}

void func_017_7AC1(void) {
    gb.regs.a = gb_read(0xFFEC);
    alu_cp8(gb.regs.a, 0x60);
    if (GET_FLAG_Z()) { IncrementEntityState(); return; };
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 8);
    UpdateEntityYPosWithSpeed_17();
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xF0);
    if (!GET_FLAG_Z()) goto func_017_7AC1_jr_7AEB;
    gb.regs.hl = 0xC2C0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 8);
    if (!GET_FLAG_C()) goto func_017_7AC1_jr_7AEB;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xE0);
  func_017_7AC1_jr_7AEB:;
    gb.regs.a = 0xFF;
    gb_write(0xFF9B, gb.regs.a);
    func_017_7AEF(); return;
}

void func_017_7AEF(void) {
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.a = alu_add8(gb.regs.a, 0);
    gb_write(0xFF9D, gb.regs.a);
    func_017_7AFA(); return;
}

void func_017_7AFA(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9A, gb.regs.a);
    UpdateFinalLinkPosition();
    func_017_7D34();
    gb.regs.bc = gb_pop16();
    return;
}

void func_017_7B06(void) {
    gb.regs.a = 0xF8;
    gb_write(0xFF9B, gb.regs.a);
    func_017_7AEF();
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x5C);
    if (!GET_FLAG_Z()) goto func_017_7B06_ret_7B40;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF9B, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFF9D, gb.regs.a);
    gb.regs.a = 0xE8;
    SpawnNewEntity_trampoline();
    gb.regs.hl = 0xC2B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 2);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x50);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x14);
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x30);
    IncrementEntityState();
  func_017_7B06_ret_7B40:;
    return;
}

void func_017_7B41(void) {
    func_017_7B5B_2(); return;
}

void func_017_7B43(void) {
    func_017_7AFA();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { func_017_7B5B(); return; };
    gb_write(gb.regs.hl, 8);
    gb.regs.hl = 0xC3B0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) { func_017_7B5B(); return; };
    IncrementEntityState();
    func_017_7B5B(); return;
}

void func_017_7B5B(void) {
    func_017_7AFA();
    return;
}

void func_017_7B5B_2(void) {
    func_017_7AFA();
    return;
}

void func_017_7B5F(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 32;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7B;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xA5;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}

void Data_017_7B71(void) {
    /* data: db $20, $40, $60, $78, $10, $48, $68, $90, $30, $50, $80, $90, $18, $38, $68, $78 */;
}

void Data_017_7B81(void) {
    /* data: db $28, $08, $28, $00, $48, $40, $4C, $38, $68, $70, $58, $68, $78, $88, $98, $80 */;
}

void Data_017_7B91(void) {
    /* data: db $1E, $1E, $1E, $2E, $2E, $3E, $2E, $2E */;
}

void func_017_7B99(void) {
    gb.regs.de = 0xC090;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    gb.regs.c = gb.regs.a;
    jr_017_7BA2(); return;
}

void jr_017_7BA2(void) {
    loop_start: ;
    gb.regs.hl = 0x7B81;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    alu_cp8(gb.regs.a, 0x98);
    if (GET_FLAG_C()) goto jr_017_7BA2_jr_7BAF;
    gb.regs.a = alu_sub8(gb.regs.a, 0x88);
  jr_017_7BA2_jr_7BAF:;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.hl = 0x7B71;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.de, gb.regs.a);
  jr_017_7BA2_jr_7BB7:;
    gb.regs.de++;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    alu_rra();
    /* nop */;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0x7B91;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
  jr_017_7BA2_jr_7BCB:;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.bc = gb_pop16();
    gb.regs.a = 0x96;
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.c = alu_inc8(gb.regs.c);
    gb.regs.a = gb.regs.c;
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_C()) { goto loop_start; };
    gb.regs.bc = gb_pop16();
    return;
}

void Data_017_7BDB(void) {
    /* data: db $00, $F8, $58, $01, $00, $00, $68, $01, $00, $08, $68, $21, $00, $10, $58, $21 */;
    /* data: db $00, $F8, $5A, $01, $00, $00, $6A, $01, $00, $08, $6A, $21, $00, $10, $5A, $21 */;
    /* data: db $00, $F8, $5C, $01, $00, $00, $6C, $01, $00, $08, $6C, $21, $00, $10, $5C, $21 */;
    /* data: db $00, $F8, $5E, $01, $00, $00, $6E, $01, $00, $08, $6E, $21, $00, $10, $5E, $21 */;
}

void func_017_7C1B(void) {
    gb.regs.a = 0x50;
    gb_write(0xC3C0, gb.regs.a);
    gb.regs.hl = 0x7BDB;
    gb.regs.a = gb_read(0xFFF1);
    alu_rla();
    alu_rla();
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.c = 4;
    RenderActiveEntitySpritesRect();
    gb.regs.a = 4;
    func_015_7964_trampoline();
    gb.regs.a = gb_read(0xFFE7);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    SetEntitySpriteVariant();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_017_7C4D(); return;
        case 0x01: func_017_7C7B(); return;
        case 0x02: func_017_7CA5(); return;
        case 0x03: func_017_7CB7(); return;
    }
}

void func_017_7C4D(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) goto func_017_7C4D_ret_7C6A;
    UpdateEntityYPosWithSpeed_17();
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto func_017_7C4D_ret_7C6A;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (!GET_FLAG_Z()) goto func_017_7C4D_ret_7C6A;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x80);
    IncrementEntityState();
  func_017_7C4D_ret_7C6A:;
    return;
}

void Data_017_7C6B(void) {
    /* data: db $00, $00, $00, $01, $01, $02, $03, $03, $04, $04, $04, $03, $03, $02, $01, $01 */;
}

void func_017_7C7B(void) {
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { func_017_7C8D(); return; };
    /* ld_dialog_low a, Dialog0CF */;
    CreditsOpenDialog();
    gb.regs.a = 0x19;
    gb_write(0xC5AB, gb.regs.a);
    IncrementEntityState();
    func_017_7C8D(); return;
}

void func_017_7C8D(void) {
    gb.regs.hl = 0xC3D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x7C6B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void func_017_7CA5(void) {
    func_017_7C8D();
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_017_7CA5_ret_7CB6;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xFF);
    IncrementEntityState();
  func_017_7CA5_ret_7CB6:;
    return;
}

void func_017_7CB7(void) {
    func_017_7C8D();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { jr_017_7CC8(); return; };
}

void jr_017_7CBF(void) {
    IncrementCreditsSubscene();
    label_017_7CC2(); return;
}

void label_017_7CC2(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.b);
    return;
}

void jr_017_7CC8(void) {
    alu_cp8(gb.regs.a, 0xE0);
    if (!GET_FLAG_C()) { ret_017_7CEF(); return; };
    alu_cp8(gb.regs.a, 0xDF);
    if (!GET_FLAG_Z()) goto jr_017_7CC8_jr_7CD4;
    gb.regs.a = 0x26;
    gb_write(0xFFF2, gb.regs.a);
  jr_017_7CC8_jr_7CD4:;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFC);
    if (!GET_FLAG_C()) { jr_017_7CBF(); return; };
    gb.regs.a = alu_add8(gb.regs.a, 2);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xC440;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(gb.regs.hl, gb.regs.a);
    if (!GET_FLAG_C()) { ret_017_7CEF(); return; };
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    ret_017_7CEF(); return;
}

void ret_017_7CEF(void) {
    return;
}

void CreditsOpenDialog(void) {
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

void Data_017_7D00(void) {
    /* data: db $00, $00, $02, $00, $02, $20, $00, $20, $44, $00, $46, $00, $48, $00, $4A, $00 */;
    /* data: db $4C, $00, $4C, $20, $D8, $20, $D6, $20, $D4, $00, $D4, $20, $D6, $00, $D8, $00 */;
    /* data: db $DA, $00, $DC, $00, $DE, $00, $E0, $00, $E2, $00, $E2, $20, $E0, $20, $DE, $20 */;
    /* data: db $DC, $20, $DA, $20 */;
}

void func_017_7D34(void) {
    gb.regs.a = gb_read(0xFF9D);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0xFC);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x7D00;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.de = gb_pop16();
    gb.regs.hl = 0xC004;
    gb.regs.a = gb_read(0xFF99);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xC155);
    gb.regs.c = gb.regs.a;
  func_017_7D34_jr_7D4D:;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = gb_read(0xDCB7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_017_7D34_jr_7D5F;
    gb.regs.a = alu_inc8(gb.regs.a);
  func_017_7D34_jr_7D5F:;
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = gb_pop16();
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.de++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xFFD7;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void DialogArrowOAMYTable(void) {
    /* data: db $37 */;
    /* data: db $7F */;
}

void DrawDialogArrow(void) {
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (!GET_FLAG_Z()) return;
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto DrawDialogArrow_doneSettingY;
    gb.regs.e = alu_inc8(gb.regs.e);
  DrawDialogArrow_doneSettingY:;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto DrawDialogArrow_credits;
    gb.regs.hl = 0x750D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC018, gb.regs.a);
    gb.regs.a = 0x97;
    gb_write(0xC019, gb.regs.a);
    gb.regs.a = 0xA2;
    gb_write(0xC01A, gb.regs.a);
    gb.regs.a = 0x42;
    gb_write(0xC01B, gb.regs.a);
    return;
  DrawDialogArrow_credits:;
    gb.regs.hl = 0x750D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF97;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC000, gb.regs.a);
    gb.regs.a = 0x97;
    gb_write(0xC001, gb.regs.a);
    gb.regs.a = 0xFE;
    gb_write(0xC002, gb.regs.a);
    gb.regs.a = 0x40;
    gb_write(0xC003, gb.regs.a);
    return;
}

void ChoiceSelectionMarkerYTable(void) {
    /* data: db $30 */;
    /* data: db $78 */;
}

void ChoiceSelectionMarkerXTable(void) {
    /* data: db $30 */;
    /* data: db $58 */;
}

void DrawDialogChoiceMarker(void) {
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) goto DrawDialogChoiceMarker_doneSettingY;
    gb.regs.e = alu_inc8(gb.regs.e);
  DrawDialogChoiceMarker_doneSettingY:;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto DrawDialogChoiceMarker_credits;
    gb.regs.hl = 0x754B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC018, gb.regs.a);
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto DrawDialogChoiceMarker_doneSettingX;
    gb.regs.e = alu_inc8(gb.regs.e);
  DrawDialogChoiceMarker_doneSettingX:;
    gb.regs.hl = 0x754D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC019, gb.regs.a);
    gb.regs.a = 0x3E;
    gb_write(0xC01A, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC01B, gb.regs.a);
    return;
  DrawDialogChoiceMarker_credits:;
    gb.regs.hl = 0x754B;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xFF97;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xC000, gb.regs.a);
    gb.regs.e = 0;
    gb.regs.a = gb_read(0xC177);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto DrawDialogChoiceMarker_jr_7E1A;
    gb.regs.e = alu_inc8(gb.regs.e);
  DrawDialogChoiceMarker_jr_7E1A:;
    gb.regs.hl = 0x754D;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC001, gb.regs.a);
    gb.regs.a = 0x9E;
    gb_write(0xC002, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC003, gb.regs.a);
    return;
}

void UpdateEntityPosWithSpeed_17(void) {
    AddEntitySpeedToPos_17();
    UpdateEntityYPosWithSpeed_17(); return;
}

void UpdateEntityYPosWithSpeed_17(void) {
    gb_push16(gb.regs.bc);
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.c = gb.regs.a;
    AddEntitySpeedToPos_17();
    gb.regs.bc = gb_pop16();
    return;
}

void AddEntitySpeedToPos_17(void) {
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_17_return;
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC260;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC200;
  AddEntitySpeedToPos_17_updatePosition:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto AddEntitySpeedToPos_17_positive;
    gb.regs.e = 0xF0;
  AddEntitySpeedToPos_17_positive:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
  AddEntitySpeedToPos_17_return:;
    return;
}

void AddEntityZSpeedToPos_17(void) {
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { AddEntitySpeedToPos_17_return(); return; };
    gb_push16(gb.regs.af);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.hl = 0xC330;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = 0xC310;
    AddEntitySpeedToPos_17_updatePosition(); return;
}

void CreditsBlendPalettes(void) {
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto CreditsBlendPalettes_jr_7E88;
    gb.regs.a = 2;
    jr_017_7EA0(); return;
  CreditsBlendPalettes_jr_7E88:;
    gb.regs.a = 6;
    gb_write(0xFFE4, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xFFE6, gb.regs.a);
    gb.regs.hl = 0xDCB8;
    gb.regs.a = 0x40;
    gb_write(0xFFDA, gb.regs.a);
    func_017_7EA4();
    gb.regs.a = 1;
    jr_017_7EA0(); return;
}

void jr_017_7EA0(void) {
    gb_write(0xDE79, gb.regs.a);
    return;
}

void func_017_7F30(void) {
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto func_017_7F30_jr_7F3C;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD21F, gb.regs.a);
    gb.regs.a = 2;
    jr_017_7F52(); return;
  func_017_7F30_jr_7F3C:;
    gb.regs.a = 6;
    gb_write(0xFFE4, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xFFE5, gb.regs.a);
    gb.regs.a = 0x18;
    gb_write(0xFFE6, gb.regs.a);
    gb.regs.hl = 0xDCB8;
    gb.regs.d = 0x40;
    func_017_7F57();
    gb.regs.a = 1;
    jr_017_7F52(); return;
}

void jr_017_7F52(void) {
    gb_write(0xDE79, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    return;
}

void func_017_7FA9(void) {
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 32;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7D;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7C;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall(); return;
}
