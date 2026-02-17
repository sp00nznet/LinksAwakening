/* Auto-generated from LADX Disassembly - Bank 0x09 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void OverworldRoomPointers(void);
void OverworldRoomsFirstHalf(void);
void Overworld00(void);
void Overworld01(void);
void Overworld02(void);
void Overworld03(void);
void Overworld04(void);
void Overworld05(void);
void Overworld06(void);
void Overworld06Alt(void);
void Overworld07(void);
void Overworld08(void);
void Overworld09(void);
void Overworld0A(void);
void Overworld0B(void);
void Overworld0C(void);
void Overworld0D(void);
void Overworld0E(void);
void Overworld0EAlt(void);
void Overworld0F(void);
void Overworld10(void);
void Overworld11(void);
void Overworld12(void);
void Overworld13(void);
void Overworld14(void);
void Overworld15(void);
void Overworld16(void);
void Overworld17(void);
void Overworld18(void);
void Overworld19(void);
void Overworld1A(void);
void Overworld1B(void);
void Overworld1BAlt(void);
void Overworld1C(void);
void Overworld1D(void);
void Overworld1E(void);
void Overworld1F(void);
void Overworld20(void);
void Overworld21(void);
void Overworld22(void);
void Overworld23(void);
void Overworld24(void);
void Overworld25(void);
void Overworld26(void);
void Overworld27(void);
void Overworld28(void);
void Overworld29(void);
void Overworld2A(void);
void Overworld2B(void);
void Overworld2BAlt(void);
void Overworld2C(void);
void Overworld2D(void);
void Overworld2E(void);
void Overworld2F(void);
void Overworld30(void);
void Overworld31(void);
void Overworld32(void);
void Overworld33(void);
void Overworld34(void);
void Overworld35(void);
void Overworld36(void);
void Overworld37(void);
void Overworld38(void);
void Overworld39(void);
void Overworld3A(void);
void Overworld3B(void);
void Overworld3C(void);
void Overworld3D(void);
void Overworld3E(void);
void Overworld3F(void);
void Overworld40(void);
void Overworld41(void);
void Overworld42(void);
void Overworld43(void);
void Overworld44(void);
void Overworld45(void);
void Overworld46(void);
void Overworld47(void);
void Overworld48(void);
void Overworld49(void);
void Overworld4A(void);
void Overworld4B(void);
void Overworld4C(void);
void Overworld4D(void);
void Overworld4E(void);
void Overworld4F(void);
void Overworld50(void);
void Overworld63(void);
void Overworld52(void);
void Overworld53(void);
void Overworld54(void);
void Overworld55(void);
void Overworld56(void);
void Overworld57(void);
void Overworld58(void);
void Overworld59(void);
void Overworld5A(void);
void Overworld5B(void);
void Overworld5C(void);
void Overworld5D(void);
void Overworld5E(void);
void Overworld5F(void);
void Overworld60(void);
void Overworld61(void);
void Overworld62(void);
void Overworld64(void);
void Overworld65(void);
void Overworld66(void);
void Overworld67(void);
void Overworld68(void);
void Overworld69(void);
void Overworld6A(void);
void Overworld6B(void);
void Overworld6C(void);
void Overworld6D(void);
void Overworld6E(void);
void Overworld6F(void);
void Overworld70(void);
void Overworld71(void);
void Overworld72(void);
void Overworld73(void);
void Overworld74(void);
void Overworld75(void);
void Overworld76(void);
void Overworld77(void);
void Overworld78(void);
void Overworld79(void);
void Overworld79Alt(void);
void Overworld7A(void);
void Overworld7B(void);
void Overworld7C(void);
void Overworld7D(void);
void Overworld7E(void);
void Overworld7F(void);
void Dialog24E(void);
void Dialog24F(void);
void Dialog250(void);
void Dialog251(void);
void Dialog252(void);
void Dialog253(void);
void Dialog254(void);
void Dialog255(void);
void Dialog256(void);
void Dialog257(void);
void Dialog258(void);
void Dialog259(void);
void Dialog25A(void);
void Dialog25B(void);
void Dialog25C(void);
void Dialog25D(void);
void Dialog25E(void);
void Dialog25F(void);
void Dialog260(void);
void Dialog261(void);
void Dialog262(void);
void Dialog263(void);
void Dialog264(void);
void Dialog265(void);
void Dialog266(void);
void Dialog267(void);
void Dialog268(void);
void Dialog269(void);
void Dialog26A(void);
void Dialog26B(void);
void Dialog26C(void);
void Dialog26D(void);
void Dialog26E(void);
void Dialog26F(void);
void Dialog270(void);
void Dialog271(void);
void Dialog272(void);
void Dialog273(void);
void Dialog274(void);
void Dialog275(void);
void Dialog276(void);
void Dialog277(void);
void Dialog278(void);
void Dialog279(void);
void Dialog27A(void);
void Dialog27B(void);
void Dialog27C(void);
void Dialog27D(void);
void Dialog27E(void);
void Dialog27F(void);
void Dialog280(void);
void Dialog281(void);
void Dialog282(void);
void Dialog283(void);
void Dialog284(void);
void Dialog285(void);
void Dialog286(void);
void Dialog287(void);
void Dialog288(void);
void Dialog289(void);
void Dialog28A(void);
void Dialog28B(void);
void Dialog28C(void);
void Dialog28D(void);
void Dialog28E(void);
void Dialog28F(void);
void Dialog290(void);
void Dialog291(void);
void Dialog292(void);
void Dialog293(void);
void Dialog294(void);
void Dialog295(void);
void Dialog296(void);
void Dialog297(void);
void Dialog298(void);
void Dialog299(void);
void Dialog29A(void);
void Dialog29B(void);
void Dialog29C(void);
void Dialog29D(void);
void Dialog29E(void);
void Dialog29F(void);
void Dialog2A0(void);
void Dialog2A1(void);
void Dialog2A2(void);
void Dialog2A3(void);
void Dialog2A4(void);
void Dialog2A5(void);
void Dialog2A6(void);
void Dialog2A7(void);
void Dialog2A8(void);
void Dialog2A9(void);
void Dialog2AA(void);
void Dialog2AB(void);
void Dialog2AC(void);
void Dialog2AD(void);
void Dialog2AE(void);
void Dialog2AF(void);

void OverworldRoomPointers(void) {
    /* data: dw Overworld00 */;
    /* data: dw Overworld01 */;
    /* data: dw Overworld02 */;
    /* data: dw Overworld03 */;
    /* data: dw Overworld04 */;
    /* data: dw Overworld05 */;
    /* data: dw Overworld06 */;
    /* data: dw Overworld07 */;
    /* data: dw Overworld08 */;
    /* data: dw Overworld09 */;
    /* data: dw Overworld0A */;
    /* data: dw Overworld0B */;
    /* data: dw Overworld0C */;
    /* data: dw Overworld0D */;
    /* data: dw Overworld0E */;
    /* data: dw Overworld0F */;
    /* data: dw Overworld10 */;
    /* data: dw Overworld11 */;
    /* data: dw Overworld12 */;
    /* data: dw Overworld13 */;
    /* data: dw Overworld14 */;
    /* data: dw Overworld15 */;
    /* data: dw Overworld16 */;
    /* data: dw Overworld17 */;
    /* data: dw Overworld18 */;
    /* data: dw Overworld19 */;
    /* data: dw Overworld1A */;
    /* data: dw Overworld1B */;
    /* data: dw Overworld1C */;
    /* data: dw Overworld1D */;
    /* data: dw Overworld1E */;
    /* data: dw Overworld1F */;
    /* data: dw Overworld20 */;
    /* data: dw Overworld21 */;
    /* data: dw Overworld22 */;
    /* data: dw Overworld23 */;
    /* data: dw Overworld24 */;
    /* data: dw Overworld25 */;
    /* data: dw Overworld26 */;
    /* data: dw Overworld27 */;
    /* data: dw Overworld28 */;
    /* data: dw Overworld29 */;
    /* data: dw Overworld2A */;
    /* data: dw Overworld2B */;
    /* data: dw Overworld2C */;
    /* data: dw Overworld2D */;
    /* data: dw Overworld2E */;
    /* data: dw Overworld2F */;
    /* data: dw Overworld30 */;
    /* data: dw Overworld31 */;
    /* data: dw Overworld32 */;
    /* data: dw Overworld33 */;
    /* data: dw Overworld34 */;
    /* data: dw Overworld35 */;
    /* data: dw Overworld36 */;
    /* data: dw Overworld37 */;
    /* data: dw Overworld38 */;
    /* data: dw Overworld39 */;
    /* data: dw Overworld3A */;
    /* data: dw Overworld3B */;
    /* data: dw Overworld3C */;
    /* data: dw Overworld3D */;
    /* data: dw Overworld3E */;
    /* data: dw Overworld3F */;
    /* data: dw Overworld40 */;
    /* data: dw Overworld41 */;
    /* data: dw Overworld42 */;
    /* data: dw Overworld43 */;
    /* data: dw Overworld44 */;
    /* data: dw Overworld45 */;
    /* data: dw Overworld46 */;
    /* data: dw Overworld47 */;
    /* data: dw Overworld48 */;
    /* data: dw Overworld49 */;
    /* data: dw Overworld4A */;
    /* data: dw Overworld4B */;
    /* data: dw Overworld4C */;
    /* data: dw Overworld4D */;
    /* data: dw Overworld4E */;
    /* data: dw Overworld4F */;
    /* data: dw Overworld50 */;
    /* data: dw Overworld63 */;
    /* data: dw Overworld52 */;
    /* data: dw Overworld53 */;
    /* data: dw Overworld54 */;
    /* data: dw Overworld55 */;
    /* data: dw Overworld56 */;
    /* data: dw Overworld57 */;
    /* data: dw Overworld58 */;
    /* data: dw Overworld59 */;
    /* data: dw Overworld5A */;
    /* data: dw Overworld5B */;
    /* data: dw Overworld5C */;
    /* data: dw Overworld5D */;
    /* data: dw Overworld5E */;
    /* data: dw Overworld5F */;
    /* data: dw Overworld60 */;
    /* data: dw Overworld61 */;
    /* data: dw Overworld62 */;
    /* data: dw Overworld63 */;
    /* data: dw Overworld64 */;
    /* data: dw Overworld65 */;
    /* data: dw Overworld66 */;
    /* data: dw Overworld67 */;
    /* data: dw Overworld68 */;
    /* data: dw Overworld69 */;
    /* data: dw Overworld6A */;
    /* data: dw Overworld6B */;
    /* data: dw Overworld6C */;
    /* data: dw Overworld6D */;
    /* data: dw Overworld6E */;
    /* data: dw Overworld6F */;
    /* data: dw Overworld70 */;
    /* data: dw Overworld71 */;
    /* data: dw Overworld72 */;
    /* data: dw Overworld73 */;
    /* data: dw Overworld74 */;
    /* data: dw Overworld75 */;
    /* data: dw Overworld76 */;
    /* data: dw Overworld77 */;
    /* data: dw Overworld78 */;
    /* data: dw Overworld79 */;
    /* data: dw Overworld7A */;
    /* data: dw Overworld7B */;
    /* data: dw Overworld7C */;
    /* data: dw Overworld7D */;
    /* data: dw Overworld7E */;
    /* data: dw Overworld7F */;
    /* data: dw Overworld80 */;
    /* data: dw Overworld81 */;
    /* data: dw Overworld82 */;
    /* data: dw Overworld83 */;
    /* data: dw Overworld84 */;
    /* data: dw Overworld85 */;
    /* data: dw Overworld86 */;
    /* data: dw Overworld87 */;
    /* data: dw Overworld88 */;
    /* data: dw Overworld89 */;
    /* data: dw Overworld8A */;
    /* data: dw Overworld8B */;
    /* data: dw Overworld8C */;
    /* data: dw Overworld8D */;
    /* data: dw Overworld8E */;
    /* data: dw Overworld8F */;
    /* data: dw Overworld90 */;
    /* data: dw Overworld91 */;
    /* data: dw Overworld92 */;
    /* data: dw Overworld93 */;
    /* data: dw Overworld94 */;
    /* data: dw Overworld95 */;
    /* data: dw Overworld96 */;
    /* data: dw Overworld97 */;
    /* data: dw Overworld98 */;
    /* data: dw Overworld99 */;
    /* data: dw Overworld9A */;
    /* data: dw Overworld9B */;
    /* data: dw Overworld9C */;
    /* data: dw Overworld9D */;
    /* data: dw Overworld9E */;
    /* data: dw Overworld9F */;
    /* data: dw OverworldA0 */;
    /* data: dw OverworldA1 */;
    /* data: dw OverworldA2 */;
    /* data: dw OverworldA3 */;
    /* data: dw OverworldA4 */;
    /* data: dw OverworldA5 */;
    /* data: dw OverworldA6 */;
    /* data: dw OverworldA7 */;
    /* data: dw OverworldA8 */;
    /* data: dw OverworldA9 */;
    /* data: dw OverworldAA */;
    /* data: dw OverworldAB */;
    /* data: dw OverworldAC */;
    /* data: dw OverworldAD */;
    /* data: dw OverworldAE */;
    /* data: dw OverworldAF */;
    /* data: dw OverworldB0 */;
    /* data: dw OverworldB1 */;
    /* data: dw OverworldB2 */;
    /* data: dw OverworldB3 */;
    /* data: dw OverworldB4 */;
    /* data: dw OverworldB5 */;
    /* data: dw OverworldB6 */;
    /* data: dw OverworldB7 */;
    /* data: dw OverworldB8 */;
    /* data: dw OverworldB9 */;
    /* data: dw OverworldBA */;
    /* data: dw OverworldBB */;
    /* data: dw OverworldBC */;
    /* data: dw OverworldBD */;
    /* data: dw OverworldBE */;
    /* data: dw OverworldBF */;
    /* data: dw OverworldC0 */;
    /* data: dw OverworldC1 */;
    /* data: dw OverworldC2 */;
    /* data: dw OverworldC3 */;
    /* data: dw OverworldC4 */;
    /* data: dw OverworldC5 */;
    /* data: dw OverworldC6 */;
    /* data: dw OverworldC7 */;
    /* data: dw OverworldC8 */;
    /* data: dw OverworldC9 */;
    /* data: dw OverworldCA */;
    /* data: dw OverworldCB */;
    /* data: dw OverworldCC */;
    /* data: dw OverworldCD */;
    /* data: dw OverworldCE */;
    /* data: dw OverworldCF */;
    /* data: dw OverworldD0 */;
    /* data: dw OverworldD1 */;
    /* data: dw OverworldD2 */;
    /* data: dw OverworldD3 */;
    /* data: dw OverworldD4 */;
    /* data: dw OverworldD5 */;
    /* data: dw OverworldD6 */;
    /* data: dw OverworldD7 */;
    /* data: dw OverworldD8 */;
    /* data: dw OverworldD9 */;
    /* data: dw OverworldDA */;
    /* data: dw OverworldDB */;
    /* data: dw OverworldDC */;
    /* data: dw OverworldDD */;
    /* data: dw OverworldDE */;
    /* data: dw OverworldDF */;
    /* data: dw OverworldE0 */;
    /* data: dw OverworldE1 */;
    /* data: dw OverworldE2 */;
    /* data: dw OverworldE3 */;
    /* data: dw OverworldE4 */;
    /* data: dw OverworldE5 */;
    /* data: dw OverworldE6 */;
    /* data: dw OverworldE7 */;
    /* data: dw OverworldE8 */;
    /* data: dw OverworldE9 */;
    /* data: dw OverworldEA */;
    /* data: dw OverworldEB */;
    /* data: dw OverworldEC */;
    /* data: dw OverworldED */;
    /* data: dw OverworldEE */;
    /* data: dw OverworldEF */;
    /* data: dw OverworldF0 */;
    /* data: dw OverworldF1 */;
    /* data: dw OverworldF2 */;
    /* data: dw OverworldF3 */;
    /* data: dw OverworldF4 */;
    /* data: dw OverworldF5 */;
    /* data: dw OverworldF6 */;
    /* data: dw OverworldF7 */;
    /* data: dw OverworldF8 */;
    /* data: dw OverworldF9 */;
    /* data: dw OverworldFA */;
    /* data: dw OverworldFB */;
    /* data: dw OverworldFC */;
    /* data: dw OverworldFD */;
    /* data: dw OverworldFE */;
    /* data: dw OverworldFF */;
}

void OverworldRoomsFirstHalf(void) {
}

void Overworld00(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $8A, $20, $EF */;
    /* data: db $10, $7C */;
    /* data: db $11, $7D */;
    /* data: db $19, $7C */;
    /* data: db $13, $80 */;
    /* data: db $84, $14, $4D */;
    /* data: db $17, $81 */;
    /* data: db $23, $37 */;
    /* data: db $83, $24, $0A */;
    /* data: db $27, $38 */;
    /* data: db $32, $1D */;
    /* data: db $33, $2E */;
    /* data: db $34, $48 */;
    /* data: db $36, $49 */;
    /* data: db $37, $4E */;
    /* data: db $38, $5D */;
    /* data: db $41, $1D */;
    /* data: db $42, $37 */;
    /* data: db $43, $39 */;
    /* data: db $44, $E1 */;
    /* data: db $E1, $07, $3A, $58, $10 */;
    /* data: db $82, $45, $3A */;
    /* data: db $C2, $35, $E0 */;
    /* data: db $47, $3B */;
    /* data: db $48, $38 */;
    /* data: db $50, $1D */;
    /* data: db $C3, $51, $37 */;
    /* data: db $C2, $52, $37 */;
    /* data: db $85, $53, $09 */;
    /* data: db $82, $58, $7A */;
    /* data: db $C2, $60, $37 */;
    /* data: db $85, $63, $09 */;
    /* data: db $68, $38 */;
    /* data: db $72, $2E */;
    /* data: db $85, $73, $2F */;
    /* data: db $78, $4E */;
    /* data: db $69, $50 */;
    /* data: db $79, $09 */;
    /* data: db ROOM_END */;
}

void Overworld01(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $8A, $20, $EF */;
    /* data: db $00, $7C */;
    /* data: db $01, $7D */;
    /* data: db $03, $7C */;
    /* data: db $04, $7D */;
    /* data: db $10, $1C */;
    /* data: db $82, $10, $1C */;
    /* data: db $12, $7E */;
    /* data: db $82, $13, $1C */;
    /* data: db $15, $7E */;
    /* data: db $16, $7D */;
    /* data: db $35, $1D */;
    /* data: db $36, $50 */;
    /* data: db $37, $5D */;
    /* data: db $43, $1D */;
    /* data: db $86, $44, $50 */;
    /* data: db $45, $37 */;
    /* data: db $46, $E8 */;
    /* data: db $47, $38 */;
    /* data: db $84, $50, $7A */;
    /* data: db $54, $0A */;
    /* data: db $55, $33 */;
    /* data: db $56, $E0 */;
    /* data: db $57, $34 */;
    /* data: db $82, $58, $03 */;
    /* data: db $83, $60, $50 */;
    /* data: db $63, $37 */;
    /* data: db $86, $64, $0A */;
    /* data: db $83, $70, $09 */;
    /* data: db $73, $2E */;
    /* data: db $86, $74, $2F */;
    /* data: db ROOM_END */;
}

void Overworld02(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $8A, $20, $EF */;
    /* data: db $06, $7C */;
    /* data: db $07, $7D */;
    /* data: db $15, $7C */;
    /* data: db $82, $16, $1C */;
    /* data: db $18, $7E */;
    /* data: db $19, $7D */;
    /* data: db $12, $80 */;
    /* data: db $13, $4D */;
    /* data: db $14, $81 */;
    /* data: db $22, $37 */;
    /* data: db $23, $03 */;
    /* data: db $24, $38 */;
    /* data: db $31, $1D */;
    /* data: db $32, $2E */;
    /* data: db $33, $2F */;
    /* data: db $34, $4E */;
    /* data: db $35, $5D */;
    /* data: db $39, $1D */;
    /* data: db $40, $50 */;
    /* data: db $41, $4B */;
    /* data: db $42, $39 */;
    /* data: db $43, $E1 */;
    /* data: db $E1, $07, $3D, $58, $10 */;
    /* data: db $44, $3B */;
    /* data: db $C3, $45, $38 */;
    /* data: db $49, $37 */;
    /* data: db $85, $50, $03 */;
    /* data: db $83, $56, $50 */;
    /* data: db $59, $4B */;
    /* data: db $85, $60, $03 */;
    /* data: db $85, $70, $2F */;
    /* data: db $75, $4E */;
    /* data: db $84, $66, $03 */;
    /* data: db $84, $76, $03 */;
    /* data: db $79, $3D */;
    /* data: db $42, $CD */;
    /* data: db $44, $D7 */;
    /* data: db ROOM_END */;
}

void Overworld03(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $00, $80 */;
    /* data: db $82, $01, $4D */;
    /* data: db $03, $81 */;
    /* data: db $04, $00 */;
    /* data: db $05, $80 */;
    /* data: db $82, $06, $4D */;
    /* data: db $08, $81 */;
    /* data: db $09, $00 */;
    /* data: db $C3, $10, $37 */;
    /* data: db $87, $11, $03 */;
    /* data: db $87, $21, $03 */;
    /* data: db $87, $31, $03 */;
    /* data: db $13, $4C */;
    /* data: db $14, $4D */;
    /* data: db $15, $4B */;
    /* data: db $C3, $18, $38 */;
    /* data: db $40, $2E */;
    /* data: db $82, $41, $2F */;
    /* data: db $43, $4E */;
    /* data: db $33, $3D */;
    /* data: db $34, $2F */;
    /* data: db $35, $3C */;
    /* data: db $44, $3A */;
    /* data: db $45, $2E */;
    /* data: db $82, $46, $2F */;
    /* data: db $48, $4E */;
    /* data: db $50, $39 */;
    /* data: db $82, $51, $3A */;
    /* data: db $53, $3B */;
    /* data: db $55, $39 */;
    /* data: db $82, $56, $3A */;
    /* data: db $58, $3B */;
    /* data: db $39, $5D */;
    /* data: db $C4, $49, $38 */;
    /* data: db $69, $7A */;
    /* data: db $78, $09 */;
    /* data: db $19, $00 */;
    /* data: db $29, $EF */;
    /* data: db $66, $C8 */;
    /* data: db $8A, $70, $2F */;
    /* data: db $72, $48 */;
    /* data: db $73, $4A */;
    /* data: db $74, $49 */;
    /* data: db $76, $48 */;
    /* data: db $77, $4A */;
    /* data: db $78, $49 */;
    /* data: db $79, $4E */;
    /* data: db $44, $E1 */;
    /* data: db $E1, $1F, $EE, $18, $40 */;
    /* data: db ROOM_END */;
}

void Overworld04(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $8A, $20, $EF */;
    /* data: db $06, $7C */;
    /* data: db $07, $7D */;
    /* data: db $10, $7C */;
    /* data: db $11, $7D */;
    /* data: db $13, $7C */;
    /* data: db $14, $7D */;
    /* data: db $15, $7C */;
    /* data: db $82, $16, $1C */;
    /* data: db $18, $7E */;
    /* data: db $19, $7D */;
    /* data: db $32, $1D */;
    /* data: db $87, $33, $50 */;
    /* data: db $C2, $42, $37 */;
    /* data: db $87, $43, $03 */;
    /* data: db $87, $53, $03 */;
    /* data: db $87, $63, $03 */;
    /* data: db $45, $A0 */;
    /* data: db $70, $1D */;
    /* data: db $71, $50 */;
    /* data: db $72, $2E */;
    /* data: db $87, $73, $2F */;
    /* data: db $76, $48 */;
    /* data: db $77, $4A */;
    /* data: db $78, $49 */;
    /* data: db $83, $60, $7A */;
    /* data: db $66, $20 */;
    /* data: db $E1, $1F, $E2, $88, $50 */;
    /* data: db ROOM_END */;
}

void Overworld05(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $8A, $20, $EF */;
    /* data: db $13, $7C */;
    /* data: db $04, $7C */;
    /* data: db $05, $7D */;
    /* data: db $16, $7E */;
    /* data: db $17, $7D */;
    /* data: db $82, $14, $1C */;
    /* data: db $87, $30, $50 */;
    /* data: db $37, $5D */;
    /* data: db $82, $38, $E5 */;
    /* data: db $41, $09 */;
    /* data: db $C3, $47, $38 */;
    /* data: db $C4, $48, $E5 */;
    /* data: db $C4, $49, $E5 */;
    /* data: db $63, $09 */;
    /* data: db $87, $70, $2F */;
    /* data: db $73, $48 */;
    /* data: db $74, $E0 */;
    /* data: db $75, $49 */;
    /* data: db $77, $4E */;
    /* data: db $78, $50 */;
    /* data: db $79, $5D */;
    /* data: db $43, $20 */;
    /* data: db $46, $20 */;
    /* data: db $51, $20 */;
    /* data: db $54, $20 */;
    /* data: db $65, $20 */;
    /* data: db ROOM_END */;
}

void Overworld06(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $35, $E1 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $8A, $20, $EF */;
    /* data: db $04, $05 */;
    /* data: db $05, $06 */;
    /* data: db $06, $07 */;
    /* data: db $14, $63 */;
    /* data: db $15, $64 */;
    /* data: db $16, $65 */;
    /* data: db $24, $71 */;
    /* data: db $25, $1C */;
    /* data: db $26, $7F */;
    /* data: db $34, $A9 */;
    /* data: db $35, $AA */;
    /* data: db $36, $BF */;
    /* data: db $10, $7C */;
    /* data: db $11, $7D */;
    /* data: db $18, $7C */;
    /* data: db $19, $7D */;
    /* data: db $13, $80 */;
    /* data: db $17, $81 */;
    /* data: db $C2, $23, $37 */;
    /* data: db $C2, $27, $38 */;
    /* data: db $32, $1D */;
    /* data: db $38, $5D */;
    /* data: db $C2, $42, $37 */;
    /* data: db $C2, $48, $38 */;
    /* data: db $43, $2E */;
    /* data: db $44, $48 */;
    /* data: db $46, $49 */;
    /* data: db $47, $4E */;
    /* data: db $C2, $48, $38 */;
    /* data: db $53, $3E */;
    /* data: db $83, $54, $3A */;
    /* data: db $57, $3F */;
    /* data: db $61, $1D */;
    /* data: db $62, $2E */;
    /* data: db $63, $2F */;
    /* data: db $64, $48 */;
    /* data: db $66, $49 */;
    /* data: db $67, $2F */;
    /* data: db $68, $4E */;
    /* data: db $69, $5D */;
    /* data: db $71, $37 */;
    /* data: db $72, $3E */;
    /* data: db $85, $73, $3A */;
    /* data: db $78, $3B */;
    /* data: db $79, $38 */;
    /* data: db $C4, $45, $E0 */;
    /* data: db $E1, $08, $70, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld06Alt(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $8A, $20, $EF */;
    /* data: db $04, $05 */;
    /* data: db $05, $06 */;
    /* data: db $06, $07 */;
    /* data: db $14, $63 */;
    /* data: db $15, $64 */;
    /* data: db $16, $65 */;
    /* data: db $24, $71 */;
    /* data: db $26, $7F */;
    /* data: db $34, $A9 */;
    /* data: db $36, $BF */;
    /* data: db $10, $7C */;
    /* data: db $11, $7D */;
    /* data: db $18, $7C */;
    /* data: db $19, $7D */;
    /* data: db $13, $80 */;
    /* data: db $17, $81 */;
    /* data: db $C2, $23, $37 */;
    /* data: db $C2, $27, $38 */;
    /* data: db $32, $1D */;
    /* data: db $38, $5D */;
    /* data: db $C2, $42, $37 */;
    /* data: db $C2, $48, $38 */;
    /* data: db $43, $2E */;
    /* data: db $44, $48 */;
    /* data: db $46, $49 */;
    /* data: db $47, $4E */;
    /* data: db $C2, $48, $38 */;
    /* data: db $53, $3E */;
    /* data: db $83, $54, $3A */;
    /* data: db $57, $3F */;
    /* data: db $61, $1D */;
    /* data: db $62, $2E */;
    /* data: db $63, $2F */;
    /* data: db $64, $48 */;
    /* data: db $66, $49 */;
    /* data: db $67, $2F */;
    /* data: db $68, $4E */;
    /* data: db $69, $5D */;
    /* data: db $71, $37 */;
    /* data: db $72, $3E */;
    /* data: db $85, $73, $3A */;
    /* data: db $78, $3B */;
    /* data: db $79, $38 */;
    /* data: db $C4, $45, $E0 */;
    /* data: db $25, $C1 */;
    /* data: db $35, $CB */;
    /* data: db $E1, $08, $70, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld07(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $85, $20, $EF */;
    /* data: db $10, $7C */;
    /* data: db $11, $7D */;
    /* data: db $13, $80 */;
    /* data: db $85, $14, $4D */;
    /* data: db $19, $81 */;
    /* data: db $23, $37 */;
    /* data: db $85, $24, $03 */;
    /* data: db $25, $09 */;
    /* data: db $29, $38 */;
    /* data: db $32, $1D */;
    /* data: db $33, $4B */;
    /* data: db $85, $34, $03 */;
    /* data: db $39, $7A */;
    /* data: db $C3, $42, $37 */;
    /* data: db $43, $D3 */;
    /* data: db $E1, $0A, $EE, $78, $30 */;
    /* data: db $C3, $44, $03 */;
    /* data: db $45, $3D */;
    /* data: db $46, $48 */;
    /* data: db $47, $4A */;
    /* data: db $48, $49 */;
    /* data: db $49, $4E */;
    /* data: db $53, $03 */;
    /* data: db $C2, $55, $38 */;
    /* data: db $83, $56, $3A */;
    /* data: db $59, $3B */;
    /* data: db $63, $09 */;
    /* data: db $84, $66, $03 */;
    /* data: db $72, $2E */;
    /* data: db $82, $73, $2F */;
    /* data: db $75, $4E */;
    /* data: db $76, $E0 */;
    /* data: db $77, $3C */;
    /* data: db $82, $78, $03 */;
    /* data: db ROOM_END */;
}

void Overworld08(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $8A, $20, $EF */;
    /* data: db $12, $7C */;
    /* data: db $13, $7D */;
    /* data: db $18, $7C */;
    /* data: db $19, $7D */;
    /* data: db $20, $C8 */;
    /* data: db $82, $21, $7A */;
    /* data: db $24, $7A */;
    /* data: db $82, $28, $7A */;
    /* data: db $83, $30, $7A */;
    /* data: db $86, $33, $7B */;
    /* data: db $34, $7A */;
    /* data: db $82, $38, $7A */;
    /* data: db $29, $C8 */;
    /* data: db $82, $50, $50 */;
    /* data: db $52, $5D */;
    /* data: db $82, $60, $03 */;
    /* data: db $C2, $62, $38 */;
    /* data: db $82, $70, $03 */;
    /* data: db $71, $09 */;
    /* data: db $54, $1D */;
    /* data: db $85, $55, $50 */;
    /* data: db $64, $37 */;
    /* data: db $85, $65, $03 */;
    /* data: db $73, $1D */;
    /* data: db $74, $2E */;
    /* data: db $85, $75, $2F */;
    /* data: db ROOM_END */;
}

void Overworld09(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $8A, $20, $EF */;
    /* data: db $83, $20, $78 */;
    /* data: db $83, $30, $79 */;
    /* data: db $84, $33, $7B */;
    /* data: db $84, $40, $E5 */;
    /* data: db $44, $1D */;
    /* data: db $85, $45, $50 */;
    /* data: db $84, $50, $50 */;
    /* data: db $54, $4B */;
    /* data: db $84, $70, $2F */;
    /* data: db $73, $3C */;
    /* data: db $66, $09 */;
    /* data: db $02, $7C */;
    /* data: db $03, $7D */;
    /* data: db $11, $7C */;
    /* data: db $82, $12, $1C */;
    /* data: db $14, $7E */;
    /* data: db $15, $7D */;
    /* data: db $18, $80 */;
    /* data: db $19, $4D */;
    /* data: db $82, $27, $78 */;
    /* data: db $82, $37, $79 */;
    /* data: db $C2, $29, $03 */;
    /* data: db $48, $2E */;
    /* data: db $49, $2F */;
    /* data: db $58, $3E */;
    /* data: db $C2, $59, $3A */;
    /* data: db $68, $39 */;
    /* data: db $70, $48 */;
    /* data: db $71, $4A */;
    /* data: db $72, $49 */;
    /* data: db $20, $C8 */;
    /* data: db $38, $C8 */;
    /* data: db ROOM_END */;
}

void Overworld0A(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $8A, $00, $4D */;
    /* data: db $8A, $40, $2F */;
    /* data: db $43, $48 */;
    /* data: db $44, $4A */;
    /* data: db $45, $49 */;
    /* data: db $46, $3C */;
    /* data: db $47, $03 */;
    /* data: db $48, $3D */;
    /* data: db $8A, $50, $3A */;
    /* data: db $82, $60, $3A */;
    /* data: db $8A, $70, $03 */;
    /* data: db $C2, $62, $37 */;
    /* data: db $56, $2E */;
    /* data: db $57, $2F */;
    /* data: db $58, $4E */;
    /* data: db $61, $E1 */;
    /* data: db $E1, $0A, $8B, $50, $7C */;
    /* data: db $66, $39 */;
    /* data: db $67, $E1 */;
    /* data: db $E1, $0A, $7E, $60, $7C */;
    /* data: db $68, $3B */;
    /* data: db $03, $FD */;
    /* data: db $E1, $10, $9F, $50, $7C */;
    /* data: db $12, $09 */;
    /* data: db $16, $09 */;
    /* data: db $23, $09 */;
    /* data: db $38, $09 */;
    /* data: db $C2, $44, $E0 */;
    /* data: db $62, $DE */;
    /* data: db $00, $80 */;
    /* data: db $10, $4B */;
    /* data: db ROOM_END */;
}

void Overworld0B(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $83, $00, $4D */;
    /* data: db $03, $81 */;
    /* data: db $13, $4C */;
    /* data: db $14, $4D */;
    /* data: db $15, $81 */;
    /* data: db $85, $40, $2F */;
    /* data: db $45, $4E */;
    /* data: db $85, $35, $7A */;
    /* data: db $37, $7B */;
    /* data: db $85, $50, $3A */;
    /* data: db $87, $70, $03 */;
    /* data: db $55, $3F */;
    /* data: db $46, $50 */;
    /* data: db $47, $5D */;
    /* data: db $82, $48, $E5 */;
    /* data: db $82, $74, $09 */;
    /* data: db $66, $09 */;
    /* data: db $83, $57, $78 */;
    /* data: db $83, $67, $79 */;
    /* data: db $86, $04, $00 */;
    /* data: db $84, $16, $00 */;
    /* data: db $16, $7C */;
    /* data: db $17, $7D */;
    /* data: db $84, $26, $EF */;
    /* data: db $77, $38 */;
    /* data: db $82, $78, $E5 */;
    /* data: db $56, $03 */;
    /* data: db $25, $38 */;
    /* data: db $55, $3B */;
    /* data: db ROOM_END */;
}

void Overworld0C(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $10, $00 */;
    /* data: db $11, $7C */;
    /* data: db $12, $7D */;
    /* data: db $13, $00 */;
    /* data: db $14, $7C */;
    /* data: db $15, $7D */;
    /* data: db $16, $80 */;
    /* data: db $82, $17, $4D */;
    /* data: db $19, $81 */;
    /* data: db $20, $EF */;
    /* data: db $82, $21, $78 */;
    /* data: db $84, $23, $7A */;
    /* data: db $82, $27, $20 */;
    /* data: db $C2, $29, $38 */;
    /* data: db $30, $7A */;
    /* data: db $82, $31, $79 */;
    /* data: db $35, $1D */;
    /* data: db $36, $4B */;
    /* data: db $37, $03 */;
    /* data: db $38, $03 */;
    /* data: db $41, $1D */;
    /* data: db $82, $42, $50 */;
    /* data: db $44, $5D */;
    /* data: db $C2, $45, $37 */;
    /* data: db $82, $46, $03 */;
    /* data: db $48, $3D */;
    /* data: db $49, $4E */;
    /* data: db $82, $50, $78 */;
    /* data: db $82, $52, $03 */;
    /* data: db $C2, $54, $38 */;
    /* data: db $82, $56, $03 */;
    /* data: db $82, $48, $7A */;
    /* data: db $58, $38 */;
    /* data: db $59, $3F */;
    /* data: db $82, $60, $79 */;
    /* data: db $82, $62, $03 */;
    /* data: db $65, $2E */;
    /* data: db $82, $66, $2F */;
    /* data: db $68, $4E */;
    /* data: db $69, $3F */;
    /* data: db $71, $2E */;
    /* data: db $82, $72, $2F */;
    /* data: db $74, $4E */;
    /* data: db $75, $3E */;
    /* data: db $76, $E1 */;
    /* data: db $77, $3A */;
    /* data: db $82, $78, $3F */;
    /* data: db $73, $E0 */;
    /* data: db ROOM_END */;
}

void Overworld0D(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $16, $7C */;
    /* data: db $82, $17, $1C */;
    /* data: db $19, $7D */;
    /* data: db $07, $7C */;
    /* data: db $08, $7D */;
    /* data: db $8A, $20, $EF */;
    /* data: db $10, $80 */;
    /* data: db $83, $11, $4D */;
    /* data: db $14, $81 */;
    /* data: db $82, $36, $50 */;
    /* data: db $38, $5D */;
    /* data: db $30, $3E */;
    /* data: db $83, $31, $3A */;
    /* data: db $34, $3F */;
    /* data: db $20, $2E */;
    /* data: db $83, $21, $2F */;
    /* data: db $24, $4E */;
    /* data: db $35, $1D */;
    /* data: db $82, $46, $03 */;
    /* data: db $C2, $48, $38 */;
    /* data: db $86, $40, $7A */;
    /* data: db $82, $56, $03 */;
    /* data: db $50, $3E */;
    /* data: db $83, $51, $3A */;
    /* data: db $54, $3F */;
    /* data: db $55, $37 */;
    /* data: db $60, $3E */;
    /* data: db $83, $61, $3A */;
    /* data: db $64, $3F */;
    /* data: db $65, $2E */;
    /* data: db $82, $66, $2F */;
    /* data: db $68, $4E */;
    /* data: db $70, $37 */;
    /* data: db $83, $71, $03 */;
    /* data: db $74, $38 */;
    /* data: db $75, $3E */;
    /* data: db $82, $76, $3A */;
    /* data: db $78, $3F */;
    /* data: db $61, $E1 */;
    /* data: db $E1, $0A, $F2, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld0E(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $25, $E1 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $10, $7C */;
    /* data: db $11, $7E */;
    /* data: db $12, $7D */;
    /* data: db $18, $7C */;
    /* data: db $19, $7D */;
    /* data: db $8A, $20, $EF */;
    /* data: db $30, $1D */;
    /* data: db $89, $31, $50 */;
    /* data: db $C2, $40, $37 */;
    /* data: db $60, $2E */;
    /* data: db $61, $3C */;
    /* data: db $70, $3E */;
    /* data: db $71, $2E */;
    /* data: db $82, $72, $2F */;
    /* data: db $74, $48 */;
    /* data: db $75, $4A */;
    /* data: db $76, $49 */;
    /* data: db $77, $48 */;
    /* data: db $78, $4A */;
    /* data: db $79, $49 */;
    /* data: db $41, $54 */;
    /* data: db $42, $20 */;
    /* data: db $51, $20 */;
    /* data: db $56, $09 */;
    /* data: db $59, $09 */;
    /* data: db $63, $09 */;
    /* data: db $C4, $03, $72 */;
    /* data: db $43, $B6 */;
    /* data: db $C5, $04, $74 */;
    /* data: db $C5, $05, $74 */;
    /* data: db $C5, $06, $74 */;
    /* data: db $C4, $07, $73 */;
    /* data: db $47, $B7 */;
    /* data: db $14, $75 */;
    /* data: db $15, $D6 */;
    /* data: db $16, $76 */;
    /* data: db $E1, $06, $0E, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld0EAlt(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $10, $7C */;
    /* data: db $11, $7E */;
    /* data: db $12, $7D */;
    /* data: db $18, $7C */;
    /* data: db $19, $7D */;
    /* data: db $8A, $20, $EF */;
    /* data: db $30, $1D */;
    /* data: db $89, $31, $50 */;
    /* data: db $C2, $40, $37 */;
    /* data: db $60, $2E */;
    /* data: db $61, $3C */;
    /* data: db $70, $3E */;
    /* data: db $71, $2E */;
    /* data: db $82, $72, $2F */;
    /* data: db $74, $48 */;
    /* data: db $75, $4A */;
    /* data: db $76, $49 */;
    /* data: db $77, $48 */;
    /* data: db $78, $4A */;
    /* data: db $79, $49 */;
    /* data: db $41, $54 */;
    /* data: db $42, $20 */;
    /* data: db $51, $20 */;
    /* data: db $56, $09 */;
    /* data: db $59, $09 */;
    /* data: db $63, $09 */;
    /* data: db $C4, $03, $72 */;
    /* data: db $43, $B6 */;
    /* data: db $C5, $04, $74 */;
    /* data: db $C5, $05, $74 */;
    /* data: db $C5, $06, $74 */;
    /* data: db $C4, $07, $73 */;
    /* data: db $47, $B7 */;
    /* data: db $14, $75 */;
    /* data: db $15, $D6 */;
    /* data: db $16, $76 */;
    /* data: db $C2, $35, $77 */;
    /* data: db $25, $E1 */;
    /* data: db $E1, $06, $0E, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld0F(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $E5 */;
    /* data: db $8A, $00, $00 */;
    /* data: db $8A, $10, $00 */;
    /* data: db $06, $7C */;
    /* data: db $07, $7D */;
    /* data: db $10, $7C */;
    /* data: db $11, $7D */;
    /* data: db $15, $7E */;
    /* data: db $82, $16, $1C */;
    /* data: db $14, $7C */;
    /* data: db $18, $7D */;
    /* data: db $8A, $20, $EF */;
    /* data: db $88, $30, $50 */;
    /* data: db $38, $5D */;
    /* data: db $88, $40, $03 */;
    /* data: db $C2, $48, $38 */;
    /* data: db $41, $09 */;
    /* data: db $47, $09 */;
    /* data: db $33, $FD */;
    /* data: db $E1, $0A, $8E, $70, $7C */;
    /* data: db $43, $B6 */;
    /* data: db $45, $B7 */;
    /* data: db $88, $50, $03 */;
    /* data: db $86, $60, $03 */;
    /* data: db $66, $3D */;
    /* data: db $67, $2F */;
    /* data: db $68, $4E */;
    /* data: db $86, $70, $2F */;
    /* data: db $76, $4E */;
    /* data: db $77, $3A */;
    /* data: db $78, $3F */;
    /* data: db ROOM_END */;
}

void Overworld10(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $09 */;
    /* data: db $C7, $00, $37 */;
    /* data: db $70, $2E */;
    /* data: db $85, $71, $2F */;
    /* data: db $76, $3C */;
    /* data: db $C7, $01, $37 */;
    /* data: db $61, $33 */;
    /* data: db $88, $62, $2F */;
    /* data: db $02, $39 */;
    /* data: db $85, $03, $3A */;
    /* data: db $05, $E1 */;
    /* data: db $E1, $07, $5D, $50, $7C */;
    /* data: db $08, $3B */;
    /* data: db $03, $B6 */;
    /* data: db $07, $B6 */;
    /* data: db $13, $B7 */;
    /* data: db $17, $B7 */;
    /* data: db $22, $C8 */;
    /* data: db $28, $C8 */;
    /* data: db $83, $77, $0A */;
    /* data: db $09, $C8 */;
    /* data: db $83, $77, $04 */;
    /* data: db $82, $77, $F5 */;
    /* data: db $49, $3D */;
    /* data: db $59, $38 */;
    /* data: db $69, $34 */;
    /* data: db $83, $32, $03 */;
    /* data: db $43, $03 */;
    /* data: db $52, $03 */;
    /* data: db $83, $36, $03 */;
    /* data: db $47, $03 */;
    /* data: db $83, $56, $03 */;
    /* data: db ROOM_END */;
}

void Overworld11(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $03, $39 */;
    /* data: db $86, $04, $3A */;
    /* data: db $C4, $10, $09 */;
    /* data: db $15, $F5 */;
    /* data: db $16, $F5 */;
    /* data: db $16, $45 */;
    /* data: db $C2, $21, $09 */;
    /* data: db $C2, $23, $09 */;
    /* data: db $26, $E1 */;
    /* data: db $E1, $10, $99, $50, $7C */;
    /* data: db $82, $40, $2F */;
    /* data: db $42, $3C */;
    /* data: db $46, $3D */;
    /* data: db $83, $47, $2F */;
    /* data: db $C2, $50, $C8 */;
    /* data: db $51, $0A */;
    /* data: db $52, $2E */;
    /* data: db $53, $48 */;
    /* data: db $54, $4A */;
    /* data: db $55, $49 */;
    /* data: db $56, $4E */;
    /* data: db $83, $57, $3A */;
    /* data: db $62, $39 */;
    /* data: db $84, $63, $3A */;
    /* data: db $66, $3B */;
    /* data: db $7F, $F5 */;
    /* data: db $84, $71, $0A */;
    /* data: db $72, $09 */;
    /* data: db $75, $3D */;
    /* data: db $76, $48 */;
    /* data: db $77, $4A */;
    /* data: db $78, $49 */;
    /* data: db $79, $3C */;
    /* data: db $51, $6F */;
    /* data: db $83, $00, $C8 */;
    /* data: db ROOM_END */;
}

void Overworld12(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $85, $00, $3A */;
    /* data: db $05, $3B */;
    /* data: db $8A, $40, $2F */;
    /* data: db $8A, $50, $3A */;
    /* data: db $8A, $70, $2F */;
    /* data: db $14, $09 */;
    /* data: db $31, $09 */;
    /* data: db $70, $3D */;
    /* data: db $C4, $09, $38 */;
    /* data: db $48, $2F */;
    /* data: db $49, $4E */;
    /* data: db $58, $3A */;
    /* data: db $59, $3B */;
    /* data: db ROOM_END */;
}

void Overworld13(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $8A, $00, $3A */;
    /* data: db $09, $3B */;
    /* data: db $12, $09 */;
    /* data: db $68, $09 */;
    /* data: db $8A, $70, $2F */;
    /* data: db $10, $C8 */;
    /* data: db $C2, $12, $C8 */;
    /* data: db $C3, $16, $C8 */;
    /* data: db $18, $C8 */;
    /* data: db $24, $C8 */;
    /* data: db $C2, $29, $C8 */;
    /* data: db $31, $C8 */;
    /* data: db $C2, $40, $C8 */;
    /* data: db $43, $C8 */;
    /* data: db $45, $C8 */;
    /* data: db $48, $C8 */;
    /* data: db $C2, $59, $C8 */;
    /* data: db $64, $C8 */;
    /* data: db $67, $C8 */;
    /* data: db $05, $BA */;
    /* data: db $E1, $1F, $FE, $70, $7C */;
    /* data: db ROOM_END */;
}

void Overworld14(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $C2, $00, $37 */;
    /* data: db $02, $3E */;
    /* data: db $87, $03, $3A */;
    /* data: db $12, $39 */;
    /* data: db $87, $13, $3A */;
    /* data: db $20, $2E */;
    /* data: db $21, $3C */;
    /* data: db $30, $39 */;
    /* data: db $31, $2E */;
    /* data: db $88, $32, $2F */;
    /* data: db $33, $48 */;
    /* data: db $35, $49 */;
    /* data: db $40, $09 */;
    /* data: db $41, $39 */;
    /* data: db $88, $42, $3A */;
    /* data: db $C2, $34, $E0 */;
    /* data: db $50, $C8 */;
    /* data: db $61, $C8 */;
    /* data: db $65, $09 */;
    /* data: db $66, $3D */;
    /* data: db $83, $67, $2F */;
    /* data: db $87, $70, $2F */;
    /* data: db $76, $4E */;
    /* data: db $83, $77, $3A */;
    /* data: db ROOM_END */;
}

void Overworld15(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $87, $00, $3A */;
    /* data: db $07, $3F */;
    /* data: db $C2, $09, $38 */;
    /* data: db $87, $10, $3A */;
    /* data: db $17, $3B */;
    /* data: db $18, $09 */;
    /* data: db $C2, $04, $E0 */;
    /* data: db $21, $09 */;
    /* data: db $26, $3D */;
    /* data: db $82, $27, $2F */;
    /* data: db $29, $4E */;
    /* data: db $86, $30, $2F */;
    /* data: db $36, $4E */;
    /* data: db $82, $37, $3A */;
    /* data: db $39, $3B */;
    /* data: db $86, $40, $3A */;
    /* data: db $46, $3B */;
    /* data: db $38, $E1 */;
    /* data: db $E1, $0A, $EA, $50, $7C */;
    /* data: db $C2, $49, $C8 */;
    /* data: db $58, $09 */;
    /* data: db $8A, $60, $2F */;
    /* data: db $8A, $70, $3A */;
    /* data: db $69, $3C */;
    /* data: db $79, $2E */;
    /* data: db ROOM_END */;
}

void Overworld16(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $00, $1D */;
    /* data: db $01, $2E */;
    /* data: db $82, $02, $2F */;
    /* data: db $04, $48 */;
    /* data: db $06, $49 */;
    /* data: db $82, $07, $2F */;
    /* data: db $09, $4E */;
    /* data: db $C2, $10, $37 */;
    /* data: db $C2, $11, $3E */;
    /* data: db $87, $12, $3A */;
    /* data: db $87, $22, $3A */;
    /* data: db $C2, $19, $3F */;
    /* data: db $30, $2E */;
    /* data: db $83, $31, $2F */;
    /* data: db $34, $48 */;
    /* data: db $36, $49 */;
    /* data: db $83, $37, $2F */;
    /* data: db $40, $39 */;
    /* data: db $89, $41, $3A */;
    /* data: db $C5, $05, $E0 */;
    /* data: db $C2, $50, $C8 */;
    /* data: db $54, $D4 */;
    /* data: db $57, $09 */;
    /* data: db $C2, $59, $C8 */;
    /* data: db $61, $09 */;
    /* data: db $8A, $70, $2F */;
    /* data: db $74, $48 */;
    /* data: db $75, $E0 */;
    /* data: db $76, $49 */;
    /* data: db ROOM_END */;
}

void Overworld17(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $00, $5D */;
    /* data: db $01, $1D */;
    /* data: db $C2, $02, $3E */;
    /* data: db $C2, $03, $3A */;
    /* data: db $C3, $04, $3A */;
    /* data: db $C2, $05, $3F */;
    /* data: db $C2, $06, $E0 */;
    /* data: db $C2, $07, $37 */;
    /* data: db $09, $09 */;
    /* data: db $C2, $10, $38 */;
    /* data: db $C4, $11, $37 */;
    /* data: db $22, $39 */;
    /* data: db $25, $3B */;
    /* data: db $35, $09 */;
    /* data: db $27, $2E */;
    /* data: db $82, $28, $2F */;
    /* data: db $30, $4E */;
    /* data: db $32, $20 */;
    /* data: db $34, $20 */;
    /* data: db $43, $20 */;
    /* data: db $37, $39 */;
    /* data: db $38, $3A */;
    /* data: db $C2, $39, $38 */;
    /* data: db $39, $3A */;
    /* data: db $40, $3B */;
    /* data: db $51, $33 */;
    /* data: db $82, $52, $2F */;
    /* data: db $54, $48 */;
    /* data: db $56, $49 */;
    /* data: db $82, $57, $2F */;
    /* data: db $59, $4E */;
    /* data: db $86, $63, $3A */;
    /* data: db $86, $73, $3A */;
    /* data: db $C2, $69, $3F */;
    /* data: db $C3, $55, $E0 */;
    /* data: db $42, $09 */;
    /* data: db $23, $E1 */;
    /* data: db $E1, $0A, $B6, $50, $7C */;
    /* data: db $62, $38 */;
    /* data: db $82, $70, $2F */;
    /* data: db $72, $4E */;
    /* data: db $49, $DD */;
    /* data: db $62, $DD */;
    /* data: db ROOM_END */;
}

void Overworld18(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $C2, $02, $38 */;
    /* data: db $82, $20, $2F */;
    /* data: db $22, $4E */;
    /* data: db $C4, $30, $3A */;
    /* data: db $C4, $31, $3A */;
    /* data: db $C4, $03, $37 */;
    /* data: db $43, $33 */;
    /* data: db $86, $44, $2F */;
    /* data: db $04, $39 */;
    /* data: db $85, $05, $3A */;
    /* data: db $14, $A0 */;
    /* data: db $C3, $17, $C8 */;
    /* data: db $18, $09 */;
    /* data: db $26, $09 */;
    /* data: db $32, $37 */;
    /* data: db $C2, $42, $37 */;
    /* data: db $62, $2E */;
    /* data: db $85, $63, $2F */;
    /* data: db $85, $73, $3A */;
    /* data: db $87, $53, $1B */;
    /* data: db $68, $3C */;
    /* data: db $78, $2E */;
    /* data: db $79, $2F */;
    /* data: db $69, $1B */;
    /* data: db $72, $3E */;
    /* data: db $06, $E1 */;
    /* data: db $E1, $0A, $BB, $50, $7C */;
    /* data: db $08, $E1 */;
    /* data: db $E1, $0A, $BC, $30, $7C */;
    /* data: db $70, $F5 */;
    /* data: db ROOM_END */;
}

void Overworld19(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $83, $00, $3A */;
    /* data: db $C3, $03, $37 */;
    /* data: db $08, $09 */;
    /* data: db $22, $09 */;
    /* data: db $25, $09 */;
    /* data: db $27, $3D */;
    /* data: db $82, $28, $2F */;
    /* data: db $33, $2E */;
    /* data: db $83, $34, $2F */;
    /* data: db $37, $4E */;
    /* data: db $38, $E1 */;
    /* data: db $E1, $0A, $89, $40, $7C */;
    /* data: db $39, $3A */;
    /* data: db $40, $2F */;
    /* data: db $41, $48 */;
    /* data: db $42, $E0 */;
    /* data: db $43, $39 */;
    /* data: db $83, $44, $3A */;
    /* data: db $47, $3B */;
    /* data: db $82, $48, $1B */;
    /* data: db $8A, $50, $1B */;
    /* data: db $60, $1B */;
    /* data: db $61, $3D */;
    /* data: db $88, $62, $2F */;
    /* data: db $70, $2F */;
    /* data: db $71, $4E */;
    /* data: db $88, $72, $3A */;
    /* data: db ROOM_END */;
}

void Overworld1A(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $1B */;
    /* data: db $8A, $00, $03 */;
    /* data: db $8A, $10, $03 */;
    /* data: db $C2, $02, $37 */;
    /* data: db $14, $3D */;
    /* data: db $83, $15, $2F */;
    /* data: db $18, $3C */;
    /* data: db $82, $20, $2F */;
    /* data: db $22, $2E */;
    /* data: db $23, $2F */;
    /* data: db $24, $4E */;
    /* data: db $83, $25, $E1 */;
    /* data: db $28, $2E */;
    /* data: db $29, $2F */;
    /* data: db $82, $30, $3A */;
    /* data: db $32, $3E */;
    /* data: db $C2, $33, $3A */;
    /* data: db $34, $3F */;
    /* data: db $83, $35, $E9 */;
    /* data: db $38, $3E */;
    /* data: db $C2, $39, $3A */;
    /* data: db $42, $39 */;
    /* data: db $44, $3B */;
    /* data: db $83, $45, $E9 */;
    /* data: db $48, $39 */;
    /* data: db $83, $60, $2F */;
    /* data: db $63, $3C */;
    /* data: db $83, $70, $3A */;
    /* data: db $73, $2E */;
    /* data: db $86, $74, $2F */;
    /* data: db ROOM_END */;
}

void Overworld1B(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $1B */;
    /* data: db $87, $00, $03 */;
    /* data: db $87, $10, $03 */;
    /* data: db $20, $2F */;
    /* data: db $21, $4E */;
    /* data: db $11, $3D */;
    /* data: db $12, $2F */;
    /* data: db $13, $3C */;
    /* data: db $23, $2E */;
    /* data: db $83, $24, $2F */;
    /* data: db $27, $4E */;
    /* data: db $C2, $07, $38 */;
    /* data: db $82, $08, $50 */;
    /* data: db $22, $E1 */;
    /* data: db $C2, $30, $3A */;
    /* data: db $31, $3F */;
    /* data: db $C2, $32, $E9 */;
    /* data: db $33, $3E */;
    /* data: db $83, $34, $3A */;
    /* data: db $36, $E1 */;
    /* data: db $37, $3F */;
    /* data: db $41, $3B */;
    /* data: db $43, $39 */;
    /* data: db $83, $44, $3A */;
    /* data: db $46, $E9 */;
    /* data: db $47, $3B */;
    /* data: db $87, $51, $0E */;
    /* data: db $68, $0E */;
    /* data: db $8A, $70, $2F */;
    /* data: db $61, $3D */;
    /* data: db $62, $48 */;
    /* data: db $83, $63, $E9 */;
    /* data: db $66, $49 */;
    /* data: db $67, $3C */;
    /* data: db $71, $4E */;
    /* data: db $72, $3A */;
    /* data: db $83, $73, $E9 */;
    /* data: db $76, $3A */;
    /* data: db $77, $2E */;
    /* data: db ROOM_END */;
}

void Overworld1BAlt(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $82, $18, $1B */;
    /* data: db $29, $1B */;
    /* data: db $59, $1B */;
    /* data: db $C2, $50, $1B */;
    /* data: db $87, $00, $03 */;
    /* data: db $87, $10, $03 */;
    /* data: db $20, $2F */;
    /* data: db $21, $4E */;
    /* data: db $11, $3D */;
    /* data: db $12, $2F */;
    /* data: db $13, $3C */;
    /* data: db $23, $2E */;
    /* data: db $83, $24, $2F */;
    /* data: db $27, $4E */;
    /* data: db $C2, $07, $38 */;
    /* data: db $82, $08, $50 */;
    /* data: db $22, $E1 */;
    /* data: db $C2, $30, $3A */;
    /* data: db $31, $3F */;
    /* data: db $32, $3A */;
    /* data: db $33, $3E */;
    /* data: db $83, $34, $3A */;
    /* data: db $36, $E1 */;
    /* data: db $37, $3F */;
    /* data: db $41, $3B */;
    /* data: db $43, $39 */;
    /* data: db $83, $44, $3A */;
    /* data: db $47, $3B */;
    /* data: db $8A, $70, $2F */;
    /* data: db $61, $3D */;
    /* data: db $62, $48 */;
    /* data: db $66, $49 */;
    /* data: db $67, $3C */;
    /* data: db $71, $4E */;
    /* data: db $83, $63, $4A */;
    /* data: db $85, $72, $3A */;
    /* data: db $77, $2E */;
    /* data: db $52, $09 */;
    /* data: db $82, $55, $09 */;
    /* data: db $68, $09 */;
    /* data: db ROOM_END */;
}

void Overworld1C(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $0E */;
    /* data: db $00, $50 */;
    /* data: db $C4, $01, $3E */;
    /* data: db $C5, $02, $3A */;
    /* data: db $C4, $04, $3F */;
    /* data: db $C3, $05, $3E */;
    /* data: db $C4, $06, $E9 */;
    /* data: db $C4, $07, $3A */;
    /* data: db $C3, $08, $3F */;
    /* data: db $C2, $09, $3F */;
    /* data: db $C4, $13, $E9 */;
    /* data: db $41, $39 */;
    /* data: db $44, $3B */;
    /* data: db $35, $39 */;
    /* data: db $38, $3B */;
    /* data: db $8A, $60, $2F */;
    /* data: db $8A, $70, $3A */;
    /* data: db $29, $3B */;
    /* data: db $61, $3D */;
    /* data: db $70, $2F */;
    /* data: db $71, $4E */;
    /* data: db $C6, $10, $1B */;
    /* data: db $51, $1B */;
    /* data: db $48, $1B */;
    /* data: db $C3, $39, $1B */;
    /* data: db $C2, $63, $E9 */;
    /* data: db $C2, $65, $E9 */;
    /* data: db $C2, $67, $E9 */;
    /* data: db $C5, $03, $E0 */;
    /* data: db ROOM_END */;
}

void Overworld1D(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $00, $37 */;
    /* data: db $83, $01, $03 */;
    /* data: db $04, $32 */;
    /* data: db $05, $2C */;
    /* data: db $06, $2D */;
    /* data: db $C4, $07, $3A */;
    /* data: db $C4, $08, $3F */;
    /* data: db $C2, $09, $E5 */;
    /* data: db $10, $2E */;
    /* data: db $11, $2F */;
    /* data: db $12, $3C */;
    /* data: db $15, $A0 */;
    /* data: db $C2, $16, $38 */;
    /* data: db $20, $39 */;
    /* data: db $21, $E1 */;
    /* data: db $E1, $0A, $F9, $20, $7C */;
    /* data: db $22, $37 */;
    /* data: db $29, $50 */;
    /* data: db $C3, $30, $1B */;
    /* data: db $C3, $31, $1B */;
    /* data: db $32, $2E */;
    /* data: db $83, $33, $2F */;
    /* data: db $36, $4E */;
    /* data: db $42, $3E */;
    /* data: db $83, $43, $3A */;
    /* data: db $83, $53, $3A */;
    /* data: db $46, $3F */;
    /* data: db $47, $E1 */;
    /* data: db $E1, $0A, $FA, $70, $7C */;
    /* data: db $48, $3B */;
    /* data: db $52, $39 */;
    /* data: db $56, $3B */;
    /* data: db $8A, $60, $2F */;
    /* data: db $8A, $70, $3A */;
    /* data: db ROOM_END */;
}

void Overworld1E(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $C2, $00, $3E */;
    /* data: db $20, $39 */;
    /* data: db $C3, $01, $3E */;
    /* data: db $31, $39 */;
    /* data: db $88, $02, $3A */;
    /* data: db $12, $37 */;
    /* data: db $22, $2E */;
    /* data: db $32, $3E */;
    /* data: db $42, $39 */;
    /* data: db $03, $E1 */;
    /* data: db $E1, $0A, $80, $20, $7C */;
    /* data: db $13, $03 */;
    /* data: db $C3, $23, $E0 */;
    /* data: db $14, $38 */;
    /* data: db $24, $4E */;
    /* data: db $34, $3F */;
    /* data: db $44, $3B */;
    /* data: db $16, $37 */;
    /* data: db $26, $2E */;
    /* data: db $36, $3E */;
    /* data: db $46, $39 */;
    /* data: db $83, $27, $2F */;
    /* data: db $83, $17, $03 */;
    /* data: db $07, $E1 */;
    /* data: db $E1, $0A, $83, $80, $7C */;
    /* data: db $37, $37 */;
    /* data: db $47, $2E */;
    /* data: db $57, $39 */;
    /* data: db $82, $48, $2F */;
    /* data: db $82, $58, $3A */;
    /* data: db $39, $03 */;
    /* data: db $8A, $60, $2F */;
    /* data: db $8A, $70, $3A */;
    /* data: db $C3, $15, $3A */;
    /* data: db $45, $E1 */;
    /* data: db $E1, $1F, $F2, $48, $40 */;
    /* data: db $45, $E8 */;
    /* data: db $16, $DE */;
    /* data: db $37, $DE */;
    /* data: db $12, $DE */;
    /* data: db $14, $DD */;
    /* data: db $41, $6F */;
    /* data: db ROOM_END */;
}

void Overworld1F(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $03 */;
    /* data: db $C8, $09, $E5 */;
    /* data: db $86, $00, $3A */;
    /* data: db $02, $E1 */;
    /* data: db $E1, $0A, $82, $70, $7C */;
    /* data: db $C3, $06, $3F */;
    /* data: db $07, $E1 */;
    /* data: db $E1, $0A, $8C, $60, $7C */;
    /* data: db $08, $3F */;
    /* data: db $84, $10, $03 */;
    /* data: db $11, $09 */;
    /* data: db $14, $38 */;
    /* data: db $C2, $15, $3A */;
    /* data: db $C5, $18, $38 */;
    /* data: db $84, $20, $2F */;
    /* data: db $20, $48 */;
    /* data: db $21, $E0 */;
    /* data: db $22, $49 */;
    /* data: db $24, $4E */;
    /* data: db $82, $30, $03 */;
    /* data: db $32, $38 */;
    /* data: db $C2, $33, $3A */;
    /* data: db $34, $3F */;
    /* data: db $35, $E1 */;
    /* data: db $E1, $0A, $87, $60, $7C */;
    /* data: db $36, $3B */;
    /* data: db $82, $40, $2F */;
    /* data: db $42, $4E */;
    /* data: db $43, $BA */;
    /* data: db $E1, $1F, $FB, $50, $7C */;
    /* data: db $44, $3B */;
    /* data: db $82, $50, $3A */;
    /* data: db $52, $3B */;
    /* data: db $88, $60, $2F */;
    /* data: db $68, $4E */;
    /* data: db $88, $70, $3A */;
    /* data: db $78, $3F */;
    /* data: db $14, $DD */;
    /* data: db $32, $DD */;
    /* data: db ROOM_END */;
}

void Overworld20(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C3, $00, $37 */;
    /* data: db $86, $01, $3A */;
    /* data: db $06, $37 */;
    /* data: db $82, $F7, $F5 */;
    /* data: db $86, $11, $3A */;
    /* data: db $16, $2E */;
    /* data: db $83, $17, $2F */;
    /* data: db $26, $39 */;
    /* data: db $83, $27, $3A */;
    /* data: db $28, $E1 */;
    /* data: db $E1, $11, $AE, $50, $7C */;
    /* data: db $30, $2E */;
    /* data: db $31, $3C */;
    /* data: db $40, $39 */;
    /* data: db $C4, $41, $37 */;
    /* data: db $49, $2B */;
    /* data: db $C3, $50, $0E */;
    /* data: db $54, $20 */;
    /* data: db $57, $20 */;
    /* data: db $C3, $59, $37 */;
    /* data: db ROOM_END */;
}

void Overworld21(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $FF, $F5 */;
    /* data: db $86, $01, $0A */;
    /* data: db $05, $38 */;
    /* data: db $83, $06, $3A */;
    /* data: db $83, $16, $3A */;
    /* data: db $C8, $09, $37 */;
    /* data: db $85, $10, $2F */;
    /* data: db $12, $48 */;
    /* data: db $14, $49 */;
    /* data: db $15, $4E */;
    /* data: db $86, $20, $3A */;
    /* data: db $21, $E1 */;
    /* data: db $E1, $11, $AF, $50, $7C */;
    /* data: db $25, $3B */;
    /* data: db $82, $34, $5C */;
    /* data: db $40, $2D */;
    /* data: db $C4, $48, $0A */;
    /* data: db $C3, $50, $38 */;
    /* data: db $52, $5C */;
    /* data: db $56, $0A */;
    /* data: db $57, $5C */;
    /* data: db $83, $65, $0A */;
    /* data: db $C2, $13, $E0 */;
    /* data: db ROOM_END */;
}

void Overworld22(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $1B */;
    /* data: db $8A, $00, $3A */;
    /* data: db $8A, $10, $3A */;
    /* data: db $C6, $21, $04 */;
    /* data: db $83, $20, $04 */;
    /* data: db $C5, $30, $04 */;
    /* data: db $23, $11 */;
    /* data: db $32, $13 */;
    /* data: db $33, $17 */;
    /* data: db $C4, $42, $11 */;
    /* data: db $C3, $24, $30 */;
    /* data: db $C2, $43, $30 */;
    /* data: db $26, $30 */;
    /* data: db $C3, $25, $51 */;
    /* data: db $29, $51 */;
    /* data: db $82, $57, $51 */;
    /* data: db $49, $51 */;
    /* data: db $75, $51 */;
    /* data: db $82, $78, $51 */;
    /* data: db $C8, $00, $38 */;
    /* data: db ROOM_END */;
}

void Overworld23(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $1B */;
    /* data: db $8A, $00, $3A */;
    /* data: db $8A, $10, $3A */;
    /* data: db $20, $51 */;
    /* data: db $82, $21, $30 */;
    /* data: db $27, $51 */;
    /* data: db $31, $30 */;
    /* data: db $34, $51 */;
    /* data: db $39, $51 */;
    /* data: db $83, $40, $51 */;
    /* data: db $82, $48, $51 */;
    /* data: db $53, $51 */;
    /* data: db $C3, $59, $51 */;
    /* data: db $66, $51 */;
    /* data: db $70, $51 */;
    /* data: db $74, $51 */;
    /* data: db $76, $51 */;
    /* data: db ROOM_END */;
}

void Overworld24(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $1B */;
    /* data: db $8A, $00, $3A */;
    /* data: db $86, $10, $3A */;
    /* data: db $06, $3F */;
    /* data: db $16, $3B */;
    /* data: db $13, $E1 */;
    /* data: db $25, $12 */;
    /* data: db $35, $18 */;
    /* data: db $36, $14 */;
    /* data: db $C4, $46, $12 */;
    /* data: db $C7, $17, $04 */;
    /* data: db $C7, $18, $04 */;
    /* data: db $C7, $19, $04 */;
    /* data: db $C3, $37, $F5 */;
    /* data: db $29, $F5 */;
    /* data: db $79, $F5 */;
    /* data: db $C5, $30, $51 */;
    /* data: db $82, $71, $51 */;
    /* data: db $75, $51 */;
    /* data: db $82, $57, $04 */;
    /* data: db $82, $67, $04 */;
    /* data: db $82, $26, $20 */;
    /* data: db $C2, $57, $20 */;
    /* data: db $02, $B6 */;
    /* data: db $03, $D7 */;
    /* data: db $04, $B6 */;
    /* data: db $11, $B6 */;
    /* data: db $12, $B7 */;
    /* data: db $14, $B7 */;
    /* data: db $15, $B6 */;
    /* data: db $E1, $01, $36, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld25(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $8A, $00, $3A */;
    /* data: db $82, $2F, $F5 */;
    /* data: db $C2, $23, $20 */;
    /* data: db $35, $20 */;
    /* data: db $24, $36 */;
    /* data: db $25, $2F */;
    /* data: db $26, $3C */;
    /* data: db $36, $37 */;
    /* data: db $46, $2E */;
    /* data: db $47, $48 */;
    /* data: db $48, $4A */;
    /* data: db $49, $49 */;
    /* data: db $56, $39 */;
    /* data: db $83, $57, $3A */;
    /* data: db $7F, $F5 */;
    /* data: db $51, $36 */;
    /* data: db $C2, $62, $37 */;
    /* data: db $52, $3C */;
    /* data: db $34, $D4 */;
    /* data: db $09, $3E */;
    /* data: db $19, $39 */;
    /* data: db ROOM_END */;
}

void Overworld26(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $82, $40, $2F */;
    /* data: db $82, $50, $3A */;
    /* data: db $87, $33, $2F */;
    /* data: db $87, $43, $3A */;
    /* data: db $32, $3D */;
    /* data: db $42, $4E */;
    /* data: db $52, $3B */;
    /* data: db $34, $48 */;
    /* data: db $35, $4A */;
    /* data: db $36, $49 */;
    /* data: db $02, $09 */;
    /* data: db $17, $09 */;
    /* data: db $75, $3D */;
    /* data: db $66, $3D */;
    /* data: db $67, $35 */;
    /* data: db $76, $4E */;
    /* data: db $27, $09 */;
    /* data: db $8A, $00, $3A */;
    /* data: db $8A, $10, $3A */;
    /* data: db $C2, $05, $E0 */;
    /* data: db ROOM_END */;
}

void Overworld27(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $86, $30, $2F */;
    /* data: db $32, $48 */;
    /* data: db $33, $4A */;
    /* data: db $34, $49 */;
    /* data: db $86, $40, $3A */;
    /* data: db $C4, $46, $37 */;
    /* data: db $82, $52, $0A */;
    /* data: db $54, $5C */;
    /* data: db $55, $5C */;
    /* data: db $65, $5C */;
    /* data: db $17, $09 */;
    /* data: db $24, $09 */;
    /* data: db $38, $09 */;
    /* data: db $77, $09 */;
    /* data: db $01, $39 */;
    /* data: db $89, $00, $3A */;
    /* data: db $09, $3B */;
    /* data: db $05, $E0 */;
    /* data: db $02, $3F */;
    /* data: db $82, $10, $3A */;
    /* data: db $12, $3B */;
    /* data: db $36, $3C */;
    /* data: db $29, $2B */;
    /* data: db $C5, $39, $37 */;
    /* data: db ROOM_END */;
}

void Overworld28(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $86, $03, $3A */;
    /* data: db $02, $39 */;
    /* data: db $84, $15, $3A */;
    /* data: db $84, $25, $0E */;
    /* data: db $85, $35, $0E */;
    /* data: db $C3, $14, $38 */;
    /* data: db $44, $32 */;
    /* data: db $85, $45, $2C */;
    /* data: db $64, $3D */;
    /* data: db $83, $65, $2F */;
    /* data: db $68, $3C */;
    /* data: db $74, $38 */;
    /* data: db $83, $75, $3A */;
    /* data: db $78, $2E */;
    /* data: db $79, $2F */;
    /* data: db $C3, $09, $3A */;
    /* data: db $C2, $08, $3E */;
    /* data: db $28, $39 */;
    /* data: db $55, $20 */;
    /* data: db $F0, $F5 */;
    /* data: db $20, $2D */;
    /* data: db $C5, $30, $38 */;
    /* data: db $14, $DD */;
    /* data: db ROOM_END */;
}

void Overworld29(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $C3, $00, $3A */;
    /* data: db $C2, $01, $3F */;
    /* data: db $21, $3B */;
    /* data: db $88, $02, $3A */;
    /* data: db $88, $12, $3A */;
    /* data: db $88, $22, $0E */;
    /* data: db $8A, $30, $0E */;
    /* data: db $43, $0E */;
    /* data: db $82, $40, $2C */;
    /* data: db $42, $2D */;
    /* data: db $C2, $52, $38 */;
    /* data: db $70, $48 */;
    /* data: db $71, $E0 */;
    /* data: db $72, $4E */;
    /* data: db $53, $2C */;
    /* data: db $54, $31 */;
    /* data: db $44, $2B */;
    /* data: db $85, $45, $2C */;
    /* data: db $73, $0A */;
    /* data: db $74, $2B */;
    /* data: db $75, $2C */;
    /* data: db $76, $2D */;
    /* data: db $79, $2B */;
    /* data: db ROOM_END */;
}

void Overworld2A(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $0E */;
    /* data: db $8A, $00, $3A */;
    /* data: db $8A, $10, $3A */;
    /* data: db $86, $24, $3A */;
    /* data: db $C2, $03, $3E */;
    /* data: db $23, $39 */;
    /* data: db $40, $2C */;
    /* data: db $41, $2D */;
    /* data: db $51, $32 */;
    /* data: db $88, $52, $2C */;
    /* data: db $50, $04 */;
    /* data: db $8A, $60, $04 */;
    /* data: db $8A, $70, $04 */;
    /* data: db $14, $B6 */;
    /* data: db $15, $B7 */;
    /* data: db $17, $B6 */;
    /* data: db $18, $B7 */;
    /* data: db $26, $E1 */;
    /* data: db $E2, $0A, $FD, $0B, $30 */;
    /* data: db $70, $2C */;
    /* data: db $71, $2D */;
    /* data: db $74, $2B */;
    /* data: db $75, $2C */;
    /* data: db $76, $2D */;
    /* data: db $79, $2B */;
    /* data: db ROOM_END */;
}

void Overworld2B(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $0E */;
    /* data: db $8A, $00, $3A */;
    /* data: db $8A, $10, $3A */;
    /* data: db $8A, $20, $3A */;
    /* data: db $C2, $01, $3F */;
    /* data: db $C2, $07, $3E */;
    /* data: db $21, $3B */;
    /* data: db $27, $39 */;
    /* data: db $8A, $50, $2C */;
    /* data: db $8A, $60, $04 */;
    /* data: db $8A, $70, $04 */;
    /* data: db $54, $54 */;
    /* data: db $83, $03, $E9 */;
    /* data: db $83, $13, $E9 */;
    /* data: db $85, $22, $0E */;
    /* data: db $70, $2C */;
    /* data: db $71, $2D */;
    /* data: db $72, $2B */;
    /* data: db $73, $2C */;
    /* data: db $74, $2D */;
    /* data: db $75, $2B */;
    /* data: db $76, $2C */;
    /* data: db $77, $2D */;
    /* data: db $78, $2B */;
    /* data: db $79, $2C */;
    /* data: db ROOM_END */;
}

void Overworld2BAlt(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $0E */;
    /* data: db $8A, $00, $3A */;
    /* data: db $8A, $10, $3A */;
    /* data: db $8A, $20, $3A */;
    /* data: db $C2, $01, $3F */;
    /* data: db $C2, $07, $3E */;
    /* data: db $21, $3B */;
    /* data: db $27, $39 */;
    /* data: db $8A, $50, $2C */;
    /* data: db $8A, $60, $04 */;
    /* data: db $8A, $70, $04 */;
    /* data: db $54, $54 */;
    /* data: db $03, $D5 */;
    /* data: db $04, $D6 */;
    /* data: db $05, $D7 */;
    /* data: db $85, $22, $03 */;
    /* data: db $83, $34, $03 */;
    /* data: db $23, $09 */;
    /* data: db $25, $09 */;
    /* data: db $36, $09 */;
    /* data: db $82, $32, $1B */;
    /* data: db $84, $43, $1B */;
    /* data: db $13, $CD */;
    /* data: db $14, $E1 */;
    /* data: db $15, $CE */;
    /* data: db $E1, $03, $7A, $50, $7C */;
    /* data: db $70, $2C */;
    /* data: db $71, $2D */;
    /* data: db $72, $2B */;
    /* data: db $73, $2C */;
    /* data: db $74, $2D */;
    /* data: db $75, $2B */;
    /* data: db $76, $2C */;
    /* data: db $77, $2D */;
    /* data: db $78, $2B */;
    /* data: db $79, $2C */;
    /* data: db $26, $C6 */;
    /* data: db $E1, $1F, $E9, $28, $20 */;
    /* data: db ROOM_END */;
}

void Overworld2C(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $8A, $00, $3A */;
    /* data: db $8A, $10, $3A */;
    /* data: db $C2, $01, $3F */;
    /* data: db $21, $3B */;
    /* data: db $88, $22, $0E */;
    /* data: db $8A, $30, $0E */;
    /* data: db $83, $40, $0E */;
    /* data: db $43, $2B */;
    /* data: db $86, $44, $2C */;
    /* data: db $83, $50, $2C */;
    /* data: db $53, $31 */;
    /* data: db $20, $3A */;
    /* data: db $35, $FC */;
    /* data: db $39, $FC */;
    /* data: db $56, $E0 */;
    /* data: db $70, $2D */;
    /* data: db $71, $FC */;
    /* data: db $75, $FC */;
    /* data: db $79, $2B */;
    /* data: db $C2, $03, $E9 */;
    /* data: db $C2, $05, $E9 */;
    /* data: db $C2, $07, $E9 */;
    /* data: db $69, $0A */;
    /* data: db ROOM_END */;
}

void Overworld2D(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $8A, $00, $3A */;
    /* data: db $8A, $10, $3A */;
    /* data: db $8A, $20, $0E */;
    /* data: db $8A, $30, $0E */;
    /* data: db $8A, $40, $2C */;
    /* data: db $30, $2C */;
    /* data: db $31, $2D */;
    /* data: db $40, $E8 */;
    /* data: db $41, $38 */;
    /* data: db $50, $2F */;
    /* data: db $51, $34 */;
    /* data: db $34, $FC */;
    /* data: db $82, $60, $0A */;
    /* data: db $83, $64, $0A */;
    /* data: db $70, $2C */;
    /* data: db $71, $2D */;
    /* data: db $74, $FC */;
    /* data: db $45, $C6 */;
    /* data: db $55, $E0 */;
    /* data: db $E1, $1F, $EA, $88, $70 */;
    /* data: db $38, $2B */;
    /* data: db $39, $2C */;
    /* data: db $48, $31 */;
    /* data: db $49, $04 */;
    /* data: db ROOM_END */;
}

void Overworld2E(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $8A, $00, $3A */;
    /* data: db $8A, $10, $3A */;
    /* data: db $8A, $20, $0E */;
    /* data: db $8A, $30, $2C */;
    /* data: db $C5, $34, $0E */;
    /* data: db $C5, $35, $0E */;
    /* data: db $33, $2D */;
    /* data: db $36, $2B */;
    /* data: db $43, $F2 */;
    /* data: db $46, $EA */;
    /* data: db $51, $6E */;
    /* data: db $C2, $53, $F3 */;
    /* data: db $C2, $56, $F0 */;
    /* data: db $68, $6E */;
    /* data: db $69, $F5 */;
    /* data: db $73, $F4 */;
    /* data: db $76, $F1 */;
    /* data: db $75, $CA */;
    /* data: db $15, $E1 */;
    /* data: db $E1, $1F, $F2, $48, $7C */;
    /* data: db ROOM_END */;
}

void Overworld2F(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $88, $00, $3A */;
    /* data: db $08, $3F */;
    /* data: db $09, $2D */;
    /* data: db $88, $10, $3A */;
    /* data: db $C7, $18, $0E */;
    /* data: db $C7, $19, $38 */;
    /* data: db $88, $20, $0E */;
    /* data: db $C2, $36, $0E */;
    /* data: db $C5, $37, $0E */;
    /* data: db $85, $30, $2C */;
    /* data: db $35, $2D */;
    /* data: db $45, $38 */;
    /* data: db $55, $32 */;
    /* data: db $56, $2D */;
    /* data: db $C2, $66, $38 */;
    /* data: db $6F, $F5 */;
    /* data: db $82, $70, $F5 */;
    /* data: db $18, $3B */;
    /* data: db $57, $CA */;
    /* data: db $68, $CA */;
    /* data: db $61, $C6 */;
    /* data: db $E1, $1F, $E7, $48, $10 */;
    /* data: db ROOM_END */;
}

void Overworld30(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C2, $00, $0E */;
    /* data: db $C2, $01, $37 */;
    /* data: db $C5, $30, $37 */;
    /* data: db $83, $46, $E8 */;
    /* data: db $82, $55, $E8 */;
    /* data: db $C2, $51, $F5 */;
    /* data: db $62, $F5 */;
    /* data: db $68, $F5 */;
    /* data: db $79, $F5 */;
    /* data: db $34, $E8 */;
    /* data: db $54, $D4 */;
    /* data: db $21, $31 */;
    /* data: db $20, $2B */;
    /* data: db $12, $44 */;
    /* data: db $25, $44 */;
    /* data: db $41, $44 */;
    /* data: db $C4, $09, $37 */;
    /* data: db $39, $2E */;
    /* data: db $49, $39 */;
    /* data: db $25, $0A */;
    /* data: db $83, $36, $0A */;
    /* data: db $16, $FD */;
    /* data: db $E1, $10, $A8, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld31(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $60, $F5 */;
    /* data: db $68, $F5 */;
    /* data: db $86, $7F, $F5 */;
    /* data: db $C2, $49, $0A */;
    /* data: db $86, $43, $0A */;
    /* data: db $82, $55, $0A */;
    /* data: db $08, $0A */;
    /* data: db $22, $44 */;
    /* data: db $C4, $00, $38 */;
    /* data: db $30, $4E */;
    /* data: db $40, $3B */;
    /* data: db $C2, $09, $37 */;
    /* data: db $29, $2E */;
    /* data: db $39, $39 */;
    /* data: db $23, $F5 */;
    /* data: db $27, $F5 */;
    /* data: db $82, $31, $E8 */;
    /* data: db $35, $F5 */;
    /* data: db $36, $F5 */;
    /* data: db $36, $45 */;
    /* data: db $46, $E1 */;
    /* data: db $E1, $10, $9B, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld32(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C3, $02, $11 */;
    /* data: db $32, $15 */;
    /* data: db $33, $10 */;
    /* data: db $34, $19 */;
    /* data: db $C2, $44, $11 */;
    /* data: db $87, $03, $1B */;
    /* data: db $87, $13, $1B */;
    /* data: db $87, $23, $1B */;
    /* data: db $85, $35, $1B */;
    /* data: db $85, $45, $1B */;
    /* data: db $85, $55, $1B */;
    /* data: db $82, $68, $1B */;
    /* data: db $54, $15 */;
    /* data: db $55, $10 */;
    /* data: db $56, $19 */;
    /* data: db $67, $1B */;
    /* data: db $83, $77, $1B */;
    /* data: db $84, $60, $F5 */;
    /* data: db $86, $7F, $F5 */;
    /* data: db $C2, $13, $30 */;
    /* data: db $C2, $05, $51 */;
    /* data: db $19, $51 */;
    /* data: db $24, $30 */;
    /* data: db $26, $51 */;
    /* data: db $82, $45, $30 */;
    /* data: db $82, $48, $51 */;
    /* data: db $57, $30 */;
    /* data: db $C2, $58, $51 */;
    /* data: db $82, $08, $51 */;
    /* data: db $11, $44 */;
    /* data: db $33, $D4 */;
    /* data: db $C2, $00, $38 */;
    /* data: db $20, $4E */;
    /* data: db $30, $3B */;
    /* data: db $C2, $40, $0A */;
    /* data: db $51, $0A */;
    /* data: db $53, $44 */;
    /* data: db $37, $51 */;
    /* data: db ROOM_END */;
}

void Overworld33(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $1B */;
    /* data: db $84, $70, $1B */;
    /* data: db $86, $7F, $F5 */;
    /* data: db $C2, $00, $51 */;
    /* data: db $C3, $04, $51 */;
    /* data: db $C4, $06, $51 */;
    /* data: db $C2, $09, $51 */;
    /* data: db $33, $51 */;
    /* data: db $83, $40, $51 */;
    /* data: db $83, $47, $51 */;
    /* data: db $53, $51 */;
    /* data: db $82, $61, $30 */;
    /* data: db $65, $51 */;
    /* data: db $82, $67, $30 */;
    /* data: db ROOM_END */;
}

void Overworld34(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $86, $00, $1B */;
    /* data: db $86, $10, $1B */;
    /* data: db $84, $20, $1B */;
    /* data: db $83, $30, $1B */;
    /* data: db $83, $40, $1B */;
    /* data: db $83, $50, $1B */;
    /* data: db $83, $60, $1B */;
    /* data: db $83, $70, $1B */;
    /* data: db $83, $00, $51 */;
    /* data: db $05, $51 */;
    /* data: db $C2, $06, $12 */;
    /* data: db $82, $F7, $F5 */;
    /* data: db $10, $51 */;
    /* data: db $C2, $12, $51 */;
    /* data: db $15, $30 */;
    /* data: db $19, $F5 */;
    /* data: db $24, $1A */;
    /* data: db $25, $10 */;
    /* data: db $26, $16 */;
    /* data: db $27, $F5 */;
    /* data: db $31, $51 */;
    /* data: db $33, $1A */;
    /* data: db $34, $16 */;
    /* data: db $35, $F5 */;
    /* data: db $82, $40, $51 */;
    /* data: db $C2, $43, $12 */;
    /* data: db $C2, $44, $20 */;
    /* data: db $52, $30 */;
    /* data: db $59, $F5 */;
    /* data: db $61, $30 */;
    /* data: db $62, $F5 */;
    /* data: db $82, $66, $F5 */;
    /* data: db $82, $7F, $F5 */;
    /* data: db $82, $77, $F5 */;
    /* data: db $11, $A0 */;
    /* data: db ROOM_END */;
}

void Overworld35(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $60, $F5 */;
    /* data: db $C5, $FF, $F5 */;
    /* data: db $68, $F5 */;
    /* data: db $85, $71, $F5 */;
    /* data: db $C3, $02, $37 */;
    /* data: db $32, $2E */;
    /* data: db $87, $33, $2F */;
    /* data: db $36, $48 */;
    /* data: db $82, $37, $4A */;
    /* data: db $39, $49 */;
    /* data: db $42, $39 */;
    /* data: db $87, $43, $3A */;
    /* data: db $45, $B6 */;
    /* data: db $46, $E1 */;
    /* data: db $47, $B6 */;
    /* data: db $E1, $15, $F0, $50, $7C */;
    /* data: db $C2, $30, $04 */;
    /* data: db $83, $03, $0F */;
    /* data: db $06, $14 */;
    /* data: db $82, $13, $1B */;
    /* data: db $15, $30 */;
    /* data: db $16, $12 */;
    /* data: db $82, $23, $1B */;
    /* data: db $25, $1A */;
    /* data: db $26, $16 */;
    /* data: db $53, $6F */;
    /* data: db ROOM_END */;
}

void Overworld36(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $30, $2F */;
    /* data: db $40, $3A */;
    /* data: db $83, $22, $3A */;
    /* data: db $11, $3D */;
    /* data: db $12, $48 */;
    /* data: db $13, $4A */;
    /* data: db $14, $49 */;
    /* data: db $15, $4E */;
    /* data: db $05, $38 */;
    /* data: db $25, $3B */;
    /* data: db $06, $3B */;
    /* data: db $82, $32, $0A */;
    /* data: db $42, $0A */;
    /* data: db $16, $0A */;
    /* data: db $46, $E8 */;
    /* data: db $64, $E8 */;
    /* data: db $C2, $59, $F5 */;
    /* data: db $68, $F5 */;
    /* data: db $77, $F5 */;
    /* data: db $31, $4E */;
    /* data: db $41, $3B */;
    /* data: db $60, $F5 */;
    /* data: db $7F, $F5 */;
    /* data: db $24, $3A */;
    /* data: db $21, $38 */;
    /* data: db $43, $D4 */;
    /* data: db ROOM_END */;
}

void Overworld37(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $86, $7F, $F5 */;
    /* data: db $5F, $F5 */;
    /* data: db $C2, $06, $37 */;
    /* data: db $C2, $37, $37 */;
    /* data: db $26, $2E */;
    /* data: db $36, $39 */;
    /* data: db $27, $3C */;
    /* data: db $57, $2E */;
    /* data: db $67, $39 */;
    /* data: db $82, $58, $2F */;
    /* data: db $82, $68, $3A */;
    /* data: db $09, $09 */;
    /* data: db $28, $09 */;
    /* data: db $09, $37 */;
    /* data: db $19, $2E */;
    /* data: db $29, $39 */;
    /* data: db $13, $F7 */;
    /* data: db $14, $61 */;
    /* data: db $23, $40 */;
    /* data: db $24, $60 */;
    /* data: db $25, $42 */;
    /* data: db $44, $0C */;
    /* data: db $C2, $22, $62 */;
    /* data: db $E1, $10, $B5, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld38(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $C2, $04, $38 */;
    /* data: db $83, $05, $3A */;
    /* data: db $08, $3E */;
    /* data: db $C2, $09, $3A */;
    /* data: db $15, $3A */;
    /* data: db $18, $39 */;
    /* data: db $23, $3D */;
    /* data: db $24, $4E */;
    /* data: db $C2, $33, $38 */;
    /* data: db $53, $4E */;
    /* data: db $83, $50, $2F */;
    /* data: db $83, $60, $3A */;
    /* data: db $34, $3F */;
    /* data: db $44, $3B */;
    /* data: db $63, $3F */;
    /* data: db $73, $3F */;
    /* data: db $7F, $F5 */;
    /* data: db $72, $38 */;
    /* data: db $C3, $16, $37 */;
    /* data: db $46, $33 */;
    /* data: db $47, $3C */;
    /* data: db $57, $33 */;
    /* data: db $82, $58, $2F */;
    /* data: db $82, $28, $0A */;
    /* data: db $C3, $25, $0E */;
    /* data: db $83, $54, $0E */;
    /* data: db $86, $64, $0E */;
    /* data: db $74, $0E */;
    /* data: db $75, $2B */;
    /* data: db $84, $76, $2C */;
    /* data: db $00, $38 */;
    /* data: db $10, $4E */;
    /* data: db $20, $3B */;
    /* data: db $16, $DE */;
    /* data: db $72, $DD */;
    /* data: db ROOM_END */;
}

void Overworld39(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $82, $00, $3A */;
    /* data: db $82, $10, $3A */;
    /* data: db $C2, $01, $E0 */;
    /* data: db $02, $3F */;
    /* data: db $12, $3B */;
    /* data: db $84, $20, $0A */;
    /* data: db $03, $0A */;
    /* data: db $16, $F5 */;
    /* data: db $8A, $50, $2F */;
    /* data: db $8A, $60, $0E */;
    /* data: db $8A, $70, $2C */;
    /* data: db $04, $33 */;
    /* data: db $05, $2F */;
    /* data: db $06, $34 */;
    /* data: db $82, $07, $0A */;
    /* data: db $09, $33 */;
    /* data: db $82, $14, $0A */;
    /* data: db $19, $0A */;
    /* data: db ROOM_END */;
}

void Overworld3A(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $35, $3D */;
    /* data: db $84, $36, $2F */;
    /* data: db $45, $38 */;
    /* data: db $84, $46, $0E */;
    /* data: db $85, $50, $2F */;
    /* data: db $55, $34 */;
    /* data: db $82, $56, $0E */;
    /* data: db $58, $2B */;
    /* data: db $59, $2C */;
    /* data: db $88, $60, $0E */;
    /* data: db $68, $37 */;
    /* data: db $69, $F5 */;
    /* data: db $88, $70, $2C */;
    /* data: db $78, $31 */;
    /* data: db $8A, $00, $0A */;
    /* data: db $82, $10, $0A */;
    /* data: db $83, $14, $0A */;
    /* data: db $19, $0A */;
    /* data: db $00, $2F */;
    /* data: db $01, $34 */;
    /* data: db $04, $33 */;
    /* data: db $05, $2F */;
    /* data: db $06, $34 */;
    /* data: db $09, $33 */;
    /* data: db ROOM_END */;
}

void Overworld3B(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $86, $30, $2F */;
    /* data: db $36, $3C */;
    /* data: db $46, $33 */;
    /* data: db $47, $2F */;
    /* data: db $48, $3C */;
    /* data: db $C2, $58, $37 */;
    /* data: db $68, $2E */;
    /* data: db $69, $3C */;
    /* data: db $79, $37 */;
    /* data: db $78, $3E */;
    /* data: db $86, $40, $0E */;
    /* data: db $88, $50, $0E */;
    /* data: db $84, $64, $0E */;
    /* data: db $77, $0E */;
    /* data: db $83, $50, $2C */;
    /* data: db $51, $E0 */;
    /* data: db $53, $2D */;
    /* data: db $6F, $F5 */;
    /* data: db $63, $38 */;
    /* data: db $73, $32 */;
    /* data: db $82, $74, $2C */;
    /* data: db $76, $2D */;
    /* data: db $33, $48 */;
    /* data: db $34, $E0 */;
    /* data: db $35, $49 */;
    /* data: db $00, $2F */;
    /* data: db $01, $34 */;
    /* data: db $02, $33 */;
    /* data: db $03, $2F */;
    /* data: db $04, $34 */;
    /* data: db $05, $33 */;
    /* data: db $06, $2F */;
    /* data: db $07, $34 */;
    /* data: db $08, $37 */;
    /* data: db $09, $E8 */;
    /* data: db $88, $10, $0A */;
    /* data: db $18, $33 */;
    /* data: db $19, $2F */;
    /* data: db $85, $25, $0A */;
    /* data: db $82, $37, $0A */;
    /* data: db ROOM_END */;
}

void Overworld3C(void) {
    /* data: db ANIMATED_TILES_WATERFALL */;
    /* data: db $04 */;
    /* data: db $00, $38 */;
    /* data: db $10, $34 */;
    /* data: db $01, $37 */;
    /* data: db $02, $E8 */;
    /* data: db $03, $38 */;
    /* data: db $11, $33 */;
    /* data: db $12, $2F */;
    /* data: db $13, $34 */;
    /* data: db $05, $37 */;
    /* data: db $06, $E8 */;
    /* data: db $07, $38 */;
    /* data: db $15, $33 */;
    /* data: db $16, $2F */;
    /* data: db $17, $34 */;
    /* data: db $09, $37 */;
    /* data: db $19, $33 */;
    /* data: db $41, $3D */;
    /* data: db $88, $42, $2F */;
    /* data: db $51, $38 */;
    /* data: db $61, $4E */;
    /* data: db $60, $3D */;
    /* data: db $70, $38 */;
    /* data: db $71, $3F */;
    /* data: db $52, $0E */;
    /* data: db $87, $53, $0E */;
    /* data: db $83, $67, $0E */;
    /* data: db $83, $62, $E9 */;
    /* data: db $83, $72, $E9 */;
    /* data: db $65, $49 */;
    /* data: db $66, $3C */;
    /* data: db $75, $3A */;
    /* data: db $76, $2E */;
    /* data: db $83, $77, $2F */;
    /* data: db $84, $20, $0A */;
    /* data: db $14, $0A */;
    /* data: db $83, $25, $0A */;
    /* data: db $18, $0A */;
    /* data: db $29, $0A */;
    /* data: db ROOM_END */;
}

void Overworld3D(void) {
    /* data: db ANIMATED_TILES_WATERFALL */;
    /* data: db $04 */;
    /* data: db $00, $E8 */;
    /* data: db $01, $38 */;
    /* data: db $10, $2F */;
    /* data: db $11, $34 */;
    /* data: db $04, $37 */;
    /* data: db $05, $E8 */;
    /* data: db $06, $38 */;
    /* data: db $14, $33 */;
    /* data: db $15, $2F */;
    /* data: db $16, $34 */;
    /* data: db $8A, $40, $2F */;
    /* data: db $8A, $50, $0E */;
    /* data: db $60, $0E */;
    /* data: db $70, $2F */;
    /* data: db $71, $4E */;
    /* data: db $61, $3D */;
    /* data: db $62, $48 */;
    /* data: db $72, $3A */;
    /* data: db $82, $63, $E9 */;
    /* data: db $82, $73, $E9 */;
    /* data: db $65, $49 */;
    /* data: db $84, $66, $2F */;
    /* data: db $85, $75, $3A */;
    /* data: db $82, $20, $0A */;
    /* data: db $83, $24, $0A */;
    /* data: db ROOM_END */;
}

void Overworld3E(void) {
    /* data: db ANIMATED_TILES_WATERFALL_SLOW */;
    /* data: db $04 */;
    /* data: db $C2, $03, $38 */;
    /* data: db $C4, $04, $0E */;
    /* data: db $05, $2B */;
    /* data: db $06, $31 */;
    /* data: db $C2, $09, $F5 */;
    /* data: db $C3, $15, $37 */;
    /* data: db $21, $3D */;
    /* data: db $22, $E0 */;
    /* data: db $23, $34 */;
    /* data: db $31, $38 */;
    /* data: db $83, $32, $0E */;
    /* data: db $40, $2F */;
    /* data: db $41, $34 */;
    /* data: db $83, $42, $CA */;
    /* data: db $45, $33 */;
    /* data: db $84, $46, $2F */;
    /* data: db $8A, $50, $0E */;
    /* data: db $8A, $60, $2F */;
    /* data: db $8A, $70, $3A */;
    /* data: db ROOM_END */;
}

void Overworld3F(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C2, $0F, $F5 */;
    /* data: db $01, $FD */;
    /* data: db $82, $21, $0A */;
    /* data: db $14, $0A */;
    /* data: db $C2, $06, $38 */;
    /* data: db $25, $3D */;
    /* data: db $26, $34 */;
    /* data: db $35, $38 */;
    /* data: db $45, $34 */;
    /* data: db $84, $40, $2F */;
    /* data: db $44, $E0 */;
    /* data: db $89, $60, $2F */;
    /* data: db $89, $70, $3A */;
    /* data: db $C8, $09, $38 */;
    /* data: db $C6, $07, $0E */;
    /* data: db $C3, $36, $0E */;
    /* data: db $86, $50, $0E */;
    /* data: db $C6, $08, $0E */;
    /* data: db $23, $D4 */;
    /* data: db $69, $4E */;
    /* data: db $79, $3F */;
    /* data: db $E1, $10, $B0, $50, $7C */;
    /* data: db $01, $B6 */;
    /* data: db $02, $B7 */;
    /* data: db $03, $66 */;
    /* data: db ROOM_END */;
}

void Overworld40(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C8, $00, $37 */;
    /* data: db $C4, $01, $90 */;
    /* data: db $C4, $02, $90 */;
    /* data: db $41, $88 */;
    /* data: db $C3, $51, $87 */;
    /* data: db $03, $8E */;
    /* data: db $C2, $13, $87 */;
    /* data: db $33, $8A */;
    /* data: db $86, $34, $85 */;
    /* data: db $88, $42, $84 */;
    /* data: db $C2, $F1, $F5 */;
    /* data: db $14, $08 */;
    /* data: db $27, $08 */;
    /* data: db $52, $08 */;
    /* data: db $83, $53, $5C */;
    /* data: db $75, $0A */;
    /* data: db $76, $8F */;
    /* data: db $83, $77, $85 */;
    /* data: db $08, $8F */;
    /* data: db $09, $90 */;
    /* data: db $18, $8D */;
    /* data: db $19, $84 */;
    /* data: db $F9, $F5 */;
    /* data: db $35, $8E */;
    /* data: db $36, $04 */;
    /* data: db $37, $8F */;
    /* data: db $45, $8C */;
    /* data: db $46, $E8 */;
    /* data: db $47, $8D */;
    /* data: db $28, $44 */;
    /* data: db $72, $44 */;
    /* data: db ROOM_END */;
}

void Overworld41(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $8A, $00, $90 */;
    /* data: db $86, $FF, $F5 */;
    /* data: db $8A, $10, $84 */;
    /* data: db $16, $89 */;
    /* data: db $17, $88 */;
    /* data: db $26, $86 */;
    /* data: db $27, $87 */;
    /* data: db $36, $8D */;
    /* data: db $37, $8C */;
    /* data: db $C2, $47, $E8 */;
    /* data: db $82, $30, $85 */;
    /* data: db $32, $8E */;
    /* data: db $40, $84 */;
    /* data: db $41, $89 */;
    /* data: db $C4, $42, $87 */;
    /* data: db $C2, $51, $86 */;
    /* data: db $70, $85 */;
    /* data: db $71, $8B */;
    /* data: db $58, $8F */;
    /* data: db $59, $85 */;
    /* data: db $67, $8F */;
    /* data: db $77, $86 */;
    /* data: db $82, $68, $90 */;
    /* data: db $82, $78, $90 */;
    /* data: db $68, $F5 */;
    /* data: db $79, $F5 */;
    /* data: db $83, $33, $5C */;
    /* data: db $44, $5C */;
    /* data: db $34, $A0 */;
    /* data: db $28, $08 */;
    /* data: db $C2, $66, $0A */;
    /* data: db $65, $08 */;
    /* data: db $38, $44 */;
    /* data: db $73, $44 */;
    /* data: db ROOM_END */;
}

void Overworld42(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $8A, $00, $90 */;
    /* data: db $86, $FF, $F5 */;
    /* data: db $8A, $10, $84 */;
    /* data: db $11, $89 */;
    /* data: db $21, $86 */;
    /* data: db $31, $8D */;
    /* data: db $32, $8C */;
    /* data: db $22, $87 */;
    /* data: db $12, $88 */;
    /* data: db $13, $92 */;
    /* data: db $14, $89 */;
    /* data: db $24, $86 */;
    /* data: db $34, $8D */;
    /* data: db $35, $84 */;
    /* data: db $23, $E4 */;
    /* data: db $36, $8C */;
    /* data: db $26, $87 */;
    /* data: db $16, $88 */;
    /* data: db $50, $8E */;
    /* data: db $60, $8A */;
    /* data: db $61, $8E */;
    /* data: db $70, $90 */;
    /* data: db $71, $87 */;
    /* data: db $48, $8F */;
    /* data: db $49, $85 */;
    /* data: db $58, $86 */;
    /* data: db $68, $8B */;
    /* data: db $66, $8F */;
    /* data: db $67, $85 */;
    /* data: db $76, $86 */;
    /* data: db $83, $77, $90 */;
    /* data: db $C2, $59, $90 */;
    /* data: db $C2, $20, $0A */;
    /* data: db $41, $0A */;
    /* data: db $42, $20 */;
    /* data: db $44, $20 */;
    /* data: db $53, $20 */;
    /* data: db $C2, $47, $0A */;
    /* data: db $C2, $65, $0A */;
    /* data: db $51, $08 */;
    /* data: db $C2, $15, $90 */;
    /* data: db $59, $F5 */;
    /* data: db $82, $77, $F5 */;
    /* data: db $7F, $F5 */;
    /* data: db $33, $E3 */;
    /* data: db $E1, $11, $B3, $50, $7C */;
    /* data: db $56, $44 */;
    /* data: db $64, $44 */;
    /* data: db ROOM_END */;
}

void Overworld43(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $8A, $00, $90 */;
    /* data: db $85, $FF, $F5 */;
    /* data: db $8A, $10, $84 */;
    /* data: db $28, $8C */;
    /* data: db $40, $85 */;
    /* data: db $41, $8E */;
    /* data: db $51, $87 */;
    /* data: db $61, $8A */;
    /* data: db $86, $62, $85 */;
    /* data: db $88, $70, $90 */;
    /* data: db $86, $7F, $F5 */;
    /* data: db $67, $8E */;
    /* data: db $C2, $50, $90 */;
    /* data: db $5F, $F5 */;
    /* data: db $86, $52, $0A */;
    /* data: db $68, $0A */;
    /* data: db $32, $08 */;
    /* data: db $48, $08 */;
    /* data: db $69, $08 */;
    /* data: db $17, $89 */;
    /* data: db $27, $8D */;
    /* data: db $82, $18, $90 */;
    /* data: db $82, $28, $90 */;
    /* data: db $C2, $08, $F5 */;
    /* data: db $19, $F5 */;
    /* data: db $33, $44 */;
    /* data: db $46, $44 */;
    /* data: db ROOM_END */;
}

void Overworld44(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $82, $FF, $F5 */;
    /* data: db $82, $F7, $F5 */;
    /* data: db $85, $00, $F5 */;
    /* data: db $82, $04, $04 */;
    /* data: db $82, $14, $04 */;
    /* data: db $82, $1F, $F5 */;
    /* data: db $7F, $F5 */;
    /* data: db $C2, $59, $F5 */;
    /* data: db $83, $23, $E8 */;
    /* data: db $83, $63, $E8 */;
    /* data: db $C3, $32, $E8 */;
    /* data: db $C3, $36, $E8 */;
    /* data: db $83, $33, $0A */;
    /* data: db $83, $43, $0A */;
    /* data: db $83, $53, $0A */;
    /* data: db $82, $50, $0B */;
    /* data: db $82, $61, $0B */;
    /* data: db $72, $0B */;
    /* data: db $33, $E8 */;
    /* data: db $35, $E8 */;
    /* data: db $53, $E8 */;
    /* data: db $55, $E8 */;
    /* data: db $37, $44 */;
    /* data: db $58, $44 */;
    /* data: db $20, $F5 */;
    /* data: db $26, $20 */;
    /* data: db ROOM_END */;
}

void Overworld45(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $86, $FF, $F5 */;
    /* data: db $85, $00, $F5 */;
    /* data: db $C2, $5F, $F5 */;
    /* data: db $13, $F5 */;
    /* data: db $33, $20 */;
    /* data: db $42, $3D */;
    /* data: db $82, $43, $2F */;
    /* data: db $44, $E0 */;
    /* data: db $45, $3C */;
    /* data: db $84, $46, $0A */;
    /* data: db $51, $20 */;
    /* data: db $52, $38 */;
    /* data: db $82, $53, $1B */;
    /* data: db $55, $37 */;
    /* data: db $83, $56, $0A */;
    /* data: db $61, $0A */;
    /* data: db $62, $32 */;
    /* data: db $82, $63, $2C */;
    /* data: db $65, $31 */;
    /* data: db $66, $0A */;
    /* data: db $83, $73, $0A */;
    /* data: db $20, $44 */;
    /* data: db $78, $44 */;
    /* data: db $22, $D4 */;
    /* data: db $27, $FD */;
    /* data: db $E1, $0E, $AD, $50, $7C */;
    /* data: db $C2, $59, $F5 */;
    /* data: db ROOM_END */;
}

void Overworld46(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $FF, $F5 */;
    /* data: db $59, $0A */;
    /* data: db $C2, $00, $F5 */;
    /* data: db $82, $F7, $F5 */;
    /* data: db $14, $FB */;
    /* data: db $18, $FB */;
    /* data: db $36, $FB */;
    /* data: db $49, $FB */;
    /* data: db $53, $FB */;
    /* data: db $75, $FB */;
    /* data: db $79, $FB */;
    /* data: db $C3, $12, $0A */;
    /* data: db $23, $0A */;
    /* data: db $83, $33, $09 */;
    /* data: db $82, $42, $09 */;
    /* data: db $C2, $40, $0A */;
    /* data: db $51, $09 */;
    /* data: db $82, $67, $09 */;
    /* data: db $82, $38, $03 */;
    /* data: db $48, $03 */;
    /* data: db $82, $56, $03 */;
    /* data: db $82, $71, $03 */;
    /* data: db $C2, $5F, $F5 */;
    /* data: db $41, $20 */;
    /* data: db ROOM_END */;
}

void Overworld47(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $50, $0A */;
    /* data: db $86, $FF, $F5 */;
    /* data: db $C4, $08, $F5 */;
    /* data: db $10, $FB */;
    /* data: db $25, $FB */;
    /* data: db $3F, $FB */;
    /* data: db $52, $FB */;
    /* data: db $70, $B7 */;
    /* data: db $22, $E8 */;
    /* data: db $15, $09 */;
    /* data: db $23, $09 */;
    /* data: db $84, $30, $03 */;
    /* data: db $82, $44, $09 */;
    /* data: db $47, $03 */;
    /* data: db $55, $E8 */;
    /* data: db $67, $09 */;
    /* data: db $82, $56, $03 */;
    /* data: db $82, $64, $03 */;
    /* data: db $82, $72, $03 */;
    /* data: db $82, $74, $09 */;
    /* data: db $77, $03 */;
    /* data: db $06, $F5 */;
    /* data: db $17, $F5 */;
    /* data: db ROOM_END */;
}

void Overworld48(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $FF, $F5 */;
    /* data: db $10, $3D */;
    /* data: db $11, $2F */;
    /* data: db $12, $4E */;
    /* data: db $02, $38 */;
    /* data: db $03, $3B */;
    /* data: db $21, $3A */;
    /* data: db $22, $3B */;
    /* data: db $C6, $20, $38 */;
    /* data: db $C5, $31, $0E */;
    /* data: db $83, $32, $0E */;
    /* data: db $C3, $13, $0E */;
    /* data: db $C4, $04, $0E */;
    /* data: db $05, $9B */;
    /* data: db $84, $06, $99 */;
    /* data: db $84, $16, $96 */;
    /* data: db $84, $26, $93 */;
    /* data: db $C3, $15, $9A */;
    /* data: db $45, $9E */;
    /* data: db $82, $43, $99 */;
    /* data: db $42, $9B */;
    /* data: db $C3, $52, $9A */;
    /* data: db $82, $53, $96 */;
    /* data: db $55, $98 */;
    /* data: db $82, $63, $93 */;
    /* data: db $65, $95 */;
    /* data: db $59, $9B */;
    /* data: db $68, $9B */;
    /* data: db $78, $9A */;
    /* data: db $C2, $69, $9A */;
    /* data: db $73, $F5 */;
    /* data: db ROOM_END */;
}

void Overworld49(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $8A, $00, $99 */;
    /* data: db $8A, $10, $96 */;
    /* data: db $8A, $20, $93 */;
    /* data: db $82, $42, $F5 */;
    /* data: db $39, $44 */;
    /* data: db $8A, $50, $99 */;
    /* data: db $8A, $60, $0C */;
    /* data: db $8A, $70, $0C */;
    /* data: db $46, $C6 */;
    /* data: db $E2, $1F, $EB, $18, $30 */;
    /* data: db ROOM_END */;
}

void Overworld4A(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $86, $00, $99 */;
    /* data: db $06, $9C */;
    /* data: db $82, $07, $F5 */;
    /* data: db $86, $10, $96 */;
    /* data: db $C3, $16, $9A */;
    /* data: db $86, $20, $93 */;
    /* data: db $83, $27, $44 */;
    /* data: db $83, $37, $44 */;
    /* data: db $28, $D3 */;
    /* data: db $46, $9D */;
    /* data: db $82, $47, $99 */;
    /* data: db $49, $9C */;
    /* data: db $50, $9C */;
    /* data: db $56, $97 */;
    /* data: db $82, $57, $96 */;
    /* data: db $C3, $59, $9A */;
    /* data: db $C2, $60, $9A */;
    /* data: db $61, $9C */;
    /* data: db $71, $9A */;
    /* data: db $66, $94 */;
    /* data: db $82, $67, $93 */;
    /* data: db $E2, $1F, $EC, $68, $30 */;
    /* data: db ROOM_END */;
}

void Overworld4B(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $0F, $F5 */;
    /* data: db $C2, $06, $0E */;
    /* data: db $C8, $07, $0E */;
    /* data: db $08, $39 */;
    /* data: db $C7, $18, $0E */;
    /* data: db $C8, $09, $37 */;
    /* data: db $C2, $40, $F5 */;
    /* data: db $03, $F5 */;
    /* data: db $04, $F5 */;
    /* data: db $14, $E1 */;
    /* data: db $04, $45 */;
    /* data: db $E1, $10, $CC, $50, $7C */;
    /* data: db $C8, $06, $38 */;
    /* data: db ROOM_END */;
}

void Overworld4C(void) {
    /* data: db ANIMATED_TILES_WATERFALL */;
    /* data: db $EB */;
    /* data: db $C8, $00, $38 */;
    /* data: db $01, $3F */;
    /* data: db $11, $3B */;
    /* data: db $83, $02, $E9 */;
    /* data: db $83, $12, $E9 */;
    /* data: db $C2, $05, $3A */;
    /* data: db $C2, $06, $3E */;
    /* data: db $26, $39 */;
    /* data: db $83, $07, $3A */;
    /* data: db $83, $17, $3A */;
    /* data: db $83, $27, $3A */;
    /* data: db $C4, $21, $ED */;
    /* data: db $52, $ED */;
    /* data: db $82, $24, $ED */;
    /* data: db $46, $ED */;
    /* data: db $47, $C8 */;
    /* data: db $82, $61, $E9 */;
    /* data: db $82, $71, $E9 */;
    /* data: db $82, $67, $E9 */;
    /* data: db $82, $77, $E9 */;
    /* data: db $63, $2B */;
    /* data: db $69, $2B */;
    /* data: db $73, $2E */;
    /* data: db $79, $2E */;
    /* data: db $82, $64, $2C */;
    /* data: db $66, $2D */;
    /* data: db $82, $74, $2F */;
    /* data: db $76, $4E */;
    /* data: db $C2, $22, $ED */;
    /* data: db ROOM_END */;
}

void Overworld4D(void) {
    /* data: db ANIMATED_TILES_WATERFALL */;
    /* data: db $EB */;
    /* data: db $C3, $00, $3A */;
    /* data: db $C2, $01, $3F */;
    /* data: db $02, $3B */;
    /* data: db $C2, $02, $3A */;
    /* data: db $85, $05, $3A */;
    /* data: db $85, $15, $3A */;
    /* data: db $82, $03, $E9 */;
    /* data: db $82, $13, $E9 */;
    /* data: db $31, $ED */;
    /* data: db $32, $C8 */;
    /* data: db $C2, $25, $ED */;
    /* data: db $46, $ED */;
    /* data: db $58, $ED */;
    /* data: db $17, $21 */;
    /* data: db $18, $4F */;
    /* data: db $26, $B6 */;
    /* data: db $27, $4F */;
    /* data: db $28, $21 */;
    /* data: db $29, $B7 */;
    /* data: db $36, $CD */;
    /* data: db $37, $21 */;
    /* data: db $38, $4F */;
    /* data: db $39, $CE */;
    /* data: db $47, $CD */;
    /* data: db $48, $CE */;
    /* data: db $60, $2C */;
    /* data: db $61, $2D */;
    /* data: db $70, $2F */;
    /* data: db $71, $4E */;
    /* data: db $21, $3B */;
    /* data: db $62, $FB */;
    /* data: db $64, $FB */;
    /* data: db $66, $FB */;
    /* data: db $78, $B6 */;
    /* data: db $79, $B7 */;
    /* data: db ROOM_END */;
}

void Overworld4E(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $EB */;
    /* data: db $8A, $00, $3A */;
    /* data: db $8A, $10, $3A */;
    /* data: db $20, $FB */;
    /* data: db $C4, $24, $ED */;
    /* data: db $45, $FB */;
    /* data: db $47, $FB */;
    /* data: db $49, $B6 */;
    /* data: db $59, $CD */;
    /* data: db $70, $FB */;
    /* data: db $72, $FB */;
    /* data: db $74, $C8 */;
    /* data: db $75, $FB */;
    /* data: db $77, $FB */;
    /* data: db $79, $B6 */;
    /* data: db $C2, $24, $EB */;
    /* data: db ROOM_END */;
}

void Overworld4F(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $ED */;
    /* data: db $89, $00, $3A */;
    /* data: db $89, $10, $3A */;
    /* data: db $C2, $09, $3F */;
    /* data: db $C6, $29, $38 */;
    /* data: db $87, $20, $EB */;
    /* data: db $85, $30, $EB */;
    /* data: db $37, $EB */;
    /* data: db $82, $45, $EE */;
    /* data: db $82, $57, $EE */;
    /* data: db $36, $C8 */;
    /* data: db $47, $C8 */;
    /* data: db $55, $C8 */;
    /* data: db $66, $C8 */;
    /* data: db $56, $EC */;
    /* data: db $40, $B7 */;
    /* data: db $50, $CE */;
    /* data: db $70, $B7 */;
    /* data: db $41, $FB */;
    /* data: db $60, $EB */;
    /* data: db ROOM_END */;
}

void Overworld50(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C8, $00, $37 */;
    /* data: db $C5, $01, $87 */;
    /* data: db $C3, $05, $0A */;
    /* data: db $C2, $06, $86 */;
    /* data: db $07, $88 */;
    /* data: db $08, $92 */;
    /* data: db $09, $89 */;
    /* data: db $17, $87 */;
    /* data: db $18, $E4 */;
    /* data: db $C6, $19, $86 */;
    /* data: db $C3, $23, $5C */;
    /* data: db $26, $8D */;
    /* data: db $27, $8C */;
    /* data: db $83, $36, $0A */;
    /* data: db $51, $8A */;
    /* data: db $52, $85 */;
    /* data: db $53, $8E */;
    /* data: db $82, $61, $90 */;
    /* data: db $63, $87 */;
    /* data: db $82, $71, $90 */;
    /* data: db $73, $8A */;
    /* data: db $85, $74, $85 */;
    /* data: db $79, $8B */;
    /* data: db $61, $F5 */;
    /* data: db $12, $08 */;
    /* data: db $42, $08 */;
    /* data: db $64, $08 */;
    /* data: db $34, $44 */;
    /* data: db $45, $44 */;
    /* data: db $58, $44 */;
    /* data: db $28, $E3 */;
    /* data: db $E1, $0A, $AB, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld63(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $00, $90 */;
    /* data: db $01, $88 */;
    /* data: db $02, $8C */;
    /* data: db $C2, $06, $0A */;
    /* data: db $07, $86 */;
    /* data: db $08, $90 */;
    /* data: db $C8, $09, $90 */;
    /* data: db $C5, $F9, $F5 */;
    /* data: db $10, $88 */;
    /* data: db $11, $8C */;
    /* data: db $17, $8D */;
    /* data: db $18, $89 */;
    /* data: db $C5, $20, $87 */;
    /* data: db $21, $08 */;
    /* data: db $82, $23, $5C */;
    /* data: db $27, $44 */;
    /* data: db $C4, $28, $86 */;
    /* data: db $C2, $32, $5C */;
    /* data: db $33, $F5 */;
    /* data: db $C2, $35, $5C */;
    /* data: db $36, $44 */;
    /* data: db $C3, $37, $0A */;
    /* data: db $82, $53, $5C */;
    /* data: db $C2, $56, $0A */;
    /* data: db $63, $44 */;
    /* data: db $64, $08 */;
    /* data: db $67, $8F */;
    /* data: db $68, $8B */;
    /* data: db $70, $8A */;
    /* data: db $71, $85 */;
    /* data: db $72, $8E */;
    /* data: db $82, $75, $0A */;
    /* data: db $77, $86 */;
    /* data: db $78, $90 */;
    /* data: db ROOM_END */;
}

void Overworld52(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $83, $07, $90 */;
    /* data: db $C8, $00, $90 */;
    /* data: db $C8, $01, $87 */;
    /* data: db $06, $86 */;
    /* data: db $C5, $FF, $F5 */;
    /* data: db $82, $F7, $F5 */;
    /* data: db $C4, $19, $90 */;
    /* data: db $C2, $19, $F5 */;
    /* data: db $C3, $28, $86 */;
    /* data: db $85, $75, $85 */;
    /* data: db $73, $8F */;
    /* data: db $58, $8D */;
    /* data: db $59, $84 */;
    /* data: db $16, $8D */;
    /* data: db $17, $84 */;
    /* data: db $18, $89 */;
    /* data: db $C2, $05, $0A */;
    /* data: db $26, $0A */;
    /* data: db $C2, $52, $0A */;
    /* data: db $C2, $63, $0A */;
    /* data: db $24, $08 */;
    /* data: db $27, $08 */;
    /* data: db $56, $08 */;
    /* data: db $69, $08 */;
    /* data: db $72, $08 */;
    /* data: db $75, $8F */;
    /* data: db $83, $33, $44 */;
    /* data: db $83, $43, $44 */;
    /* data: db $83, $53, $44 */;
    /* data: db $27, $20 */;
    /* data: db $E1, $1F, $E1, $88, $50 */;
    /* data: db ROOM_END */;
}

void Overworld53(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $0A */;
    /* data: db $8A, $00, $90 */;
    /* data: db $86, $FF, $F5 */;
    /* data: db $C4, $10, $90 */;
    /* data: db $C2, $1F, $F5 */;
    /* data: db $C7, $19, $90 */;
    /* data: db $C4, $19, $F5 */;
    /* data: db $C3, $21, $87 */;
    /* data: db $86, $12, $84 */;
    /* data: db $C6, $28, $86 */;
    /* data: db $82, $70, $85 */;
    /* data: db $72, $8E */;
    /* data: db $51, $8C */;
    /* data: db $50, $84 */;
    /* data: db $11, $88 */;
    /* data: db $18, $89 */;
    /* data: db $82, $61, $04 */;
    /* data: db $67, $04 */;
    /* data: db $76, $04 */;
    /* data: db $60, $08 */;
    /* data: db $77, $8F */;
    /* data: db $78, $8B */;
    /* data: db $23, $3D */;
    /* data: db $82, $24, $2F */;
    /* data: db $26, $3C */;
    /* data: db $33, $38 */;
    /* data: db $82, $34, $0E */;
    /* data: db $36, $37 */;
    /* data: db $43, $32 */;
    /* data: db $82, $44, $2C */;
    /* data: db $46, $31 */;
    /* data: db ROOM_END */;
}

void Overworld54(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C5, $FF, $F5 */;
    /* data: db $60, $F5 */;
    /* data: db $85, $71, $F5 */;
    /* data: db $21, $3D */;
    /* data: db $83, $22, $2F */;
    /* data: db $25, $3C */;
    /* data: db $C2, $31, $38 */;
    /* data: db $51, $32 */;
    /* data: db $52, $2D */;
    /* data: db $62, $32 */;
    /* data: db $82, $63, $2C */;
    /* data: db $25, $3C */;
    /* data: db $C3, $35, $37 */;
    /* data: db $65, $31 */;
    /* data: db $83, $32, $0E */;
    /* data: db $83, $42, $0E */;
    /* data: db $82, $53, $0E */;
    /* data: db $02, $0B */;
    /* data: db $86, $12, $0B */;
    /* data: db $C4, $F9, $F5 */;
    /* data: db $84, $75, $04 */;
    /* data: db $C6, $27, $0B */;
    /* data: db ROOM_END */;
}

void Overworld55(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $86, $7F, $F5 */;
    /* data: db $C4, $FF, $F5 */;
    /* data: db $60, $F5 */;
    /* data: db $82, $14, $09 */;
    /* data: db $84, $41, $09 */;
    /* data: db $82, $52, $09 */;
    /* data: db $02, $44 */;
    /* data: db $59, $09 */;
    /* data: db $82, $67, $09 */;
    /* data: db $62, $E8 */;
    /* data: db $82, $45, $03 */;
    /* data: db $54, $03 */;
    /* data: db $83, $63, $03 */;
    /* data: db $26, $F5 */;
    /* data: db $32, $F5 */;
    /* data: db $38, $F5 */;
    /* data: db $C2, $F9, $F5 */;
    /* data: db $11, $F5 */;
    /* data: db $24, $20 */;
    /* data: db $35, $20 */;
    /* data: db $82, $77, $04 */;
    /* data: db ROOM_END */;
}

void Overworld56(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $01, $09 */;
    /* data: db $05, $CD */;
    /* data: db $06, $CE */;
    /* data: db $82, $02, $03 */;
    /* data: db $08, $09 */;
    /* data: db $09, $CD */;
    /* data: db $16, $FB */;
    /* data: db $19, $09 */;
    /* data: db $22, $FB */;
    /* data: db $30, $FB */;
    /* data: db $34, $FB */;
    /* data: db $36, $E8 */;
    /* data: db $42, $09 */;
    /* data: db $43, $E8 */;
    /* data: db $82, $50, $09 */;
    /* data: db $82, $52, $03 */;
    /* data: db $82, $56, $09 */;
    /* data: db $58, $03 */;
    /* data: db $82, $60, $03 */;
    /* data: db $82, $63, $09 */;
    /* data: db $83, $46, $03 */;
    /* data: db $86, $7F, $F5 */;
    /* data: db $59, $FB */;
    /* data: db $C2, $FF, $F5 */;
    /* data: db ROOM_END */;
}

void Overworld57(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C4, $08, $F5 */;
    /* data: db $85, $7F, $F5 */;
    /* data: db $82, $73, $04 */;
    /* data: db $00, $CE */;
    /* data: db $83, $04, $03 */;
    /* data: db $82, $10, $09 */;
    /* data: db $13, $03 */;
    /* data: db $14, $09 */;
    /* data: db $82, $16, $03 */;
    /* data: db $21, $03 */;
    /* data: db $22, $FB */;
    /* data: db $82, $25, $03 */;
    /* data: db $27, $09 */;
    /* data: db $82, $42, $09 */;
    /* data: db $44, $03 */;
    /* data: db $45, $FB */;
    /* data: db $4F, $FB */;
    /* data: db $51, $09 */;
    /* data: db $82, $52, $03 */;
    /* data: db $54, $09 */;
    /* data: db $57, $09 */;
    /* data: db $62, $09 */;
    /* data: db $63, $03 */;
    /* data: db $82, $66, $03 */;
    /* data: db $82, $34, $03 */;
    /* data: db $61, $03 */;
    /* data: db ROOM_END */;
}

void Overworld58(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C8, $00, $38 */;
    /* data: db $C8, $01, $0E */;
    /* data: db $C2, $62, $0E */;
    /* data: db $C3, $02, $9A */;
    /* data: db $C4, $43, $9A */;
    /* data: db $C7, $08, $9A */;
    /* data: db $09, $9D */;
    /* data: db $32, $9D */;
    /* data: db $78, $9D */;
    /* data: db $33, $9C */;
    /* data: db $42, $97 */;
    /* data: db $52, $94 */;
    /* data: db $19, $97 */;
    /* data: db $29, $94 */;
    /* data: db $C2, $F3, $F5 */;
    /* data: db $76, $F5 */;
    /* data: db $35, $44 */;
    /* data: db $64, $44 */;
    /* data: db $C4, $39, $0D */;
    /* data: db $79, $99 */;
    /* data: db $C2, $57, $20 */;
    /* data: db ROOM_END */;
}

void Overworld59(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $0D */;
    /* data: db $8A, $00, $99 */;
    /* data: db $03, $9C */;
    /* data: db $83, $04, $0C */;
    /* data: db $07, $9B */;
    /* data: db $10, $F9 */;
    /* data: db $E1, $14, $D5, $50, $7C */;
    /* data: db $13, $9D */;
    /* data: db $83, $14, $99 */;
    /* data: db $17, $9E */;
    /* data: db $82, $18, $96 */;
    /* data: db $23, $B7 */;
    /* data: db $24, $F9 */;
    /* data: db $E1, $14, $D6, $50, $7C */;
    /* data: db $27, $B7 */;
    /* data: db $82, $28, $93 */;
    /* data: db $33, $A2 */;
    /* data: db $37, $A2 */;
    /* data: db $43, $B6 */;
    /* data: db $47, $B6 */;
    /* data: db $83, $70, $99 */;
    /* data: db $82, $78, $99 */;
    /* data: db $73, $9C */;
    /* data: db $77, $9B */;
    /* data: db ROOM_END */;
}

void Overworld5A(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $00, $9E */;
    /* data: db $C7, $01, $9A */;
    /* data: db $C7, $09, $9A */;
    /* data: db $10, $98 */;
    /* data: db $20, $95 */;
    /* data: db $C4, $30, $0D */;
    /* data: db $70, $99 */;
    /* data: db $71, $9E */;
    /* data: db $77, $9B */;
    /* data: db $78, $99 */;
    /* data: db $79, $9E */;
    /* data: db $15, $E8 */;
    /* data: db $32, $E8 */;
    /* data: db $38, $E8 */;
    /* data: db $45, $E8 */;
    /* data: db $63, $E8 */;
    /* data: db $67, $E8 */;
    /* data: db $72, $F5 */;
    /* data: db ROOM_END */;
}

void Overworld5B(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C8, $09, $37 */;
    /* data: db $C2, $06, $38 */;
    /* data: db $C3, $34, $38 */;
    /* data: db $24, $3D */;
    /* data: db $25, $2F */;
    /* data: db $26, $34 */;
    /* data: db $83, $34, $38 */;
    /* data: db $64, $32 */;
    /* data: db $65, $2C */;
    /* data: db $66, $2D */;
    /* data: db $67, $38 */;
    /* data: db $C8, $07, $0E */;
    /* data: db $C8, $08, $0E */;
    /* data: db $C3, $35, $0E */;
    /* data: db $C3, $36, $0E */;
    /* data: db $13, $44 */;
    /* data: db $75, $44 */;
    /* data: db $76, $38 */;
    /* data: db $C4, $00, $F5 */;
    /* data: db $74, $F5 */;
    /* data: db ROOM_END */;
}

void Overworld5C(void) {
    /* data: db ANIMATED_TILES_WATERFALL */;
    /* data: db $EB */;
    /* data: db $C8, $00, $38 */;
    /* data: db $03, $3E */;
    /* data: db $82, $04, $3A */;
    /* data: db $06, $3F */;
    /* data: db $C3, $13, $37 */;
    /* data: db $C3, $16, $38 */;
    /* data: db $43, $33 */;
    /* data: db $44, $48 */;
    /* data: db $45, $E0 */;
    /* data: db $46, $34 */;
    /* data: db $C3, $14, $04 */;
    /* data: db $C3, $15, $04 */;
    /* data: db $82, $01, $E9 */;
    /* data: db $82, $07, $E9 */;
    /* data: db $09, $39 */;
    /* data: db $C5, $11, $ED */;
    /* data: db $C5, $12, $ED */;
    /* data: db $C3, $17, $ED */;
    /* data: db $56, $C8 */;
    /* data: db $47, $C8 */;
    /* data: db $24, $A0 */;
    /* data: db $68, $FB */;
    /* data: db $71, $FB */;
    /* data: db $73, $FB */;
    /* data: db $75, $FB */;
    /* data: db $77, $FB */;
    /* data: db $78, $4F */;
    /* data: db $79, $21 */;
    /* data: db ROOM_END */;
}

void Overworld5D(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $EB */;
    /* data: db $00, $3A */;
    /* data: db $01, $3B */;
    /* data: db $02, $2B */;
    /* data: db $84, $03, $2C */;
    /* data: db $07, $2D */;
    /* data: db $08, $CD */;
    /* data: db $09, $CE */;
    /* data: db $12, $37 */;
    /* data: db $84, $13, $04 */;
    /* data: db $16, $A0 */;
    /* data: db $C2, $17, $38 */;
    /* data: db $22, $33 */;
    /* data: db $23, $3C */;
    /* data: db $83, $24, $04 */;
    /* data: db $33, $33 */;
    /* data: db $34, $48 */;
    /* data: db $35, $E0 */;
    /* data: db $36, $49 */;
    /* data: db $37, $34 */;
    /* data: db $C2, $11, $ED */;
    /* data: db $32, $ED */;
    /* data: db $43, $ED */;
    /* data: db $46, $C8 */;
    /* data: db $60, $FB */;
    /* data: db $71, $FB */;
    /* data: db $73, $FB */;
    /* data: db $75, $FB */;
    /* data: db $77, $FB */;
    /* data: db $70, $4F */;
    /* data: db $71, $21 */;
    /* data: db $79, $B6 */;
    /* data: db $14, $6F */;
    /* data: db ROOM_END */;
}

void Overworld5E(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $EB */;
    /* data: db $C3, $40, $EC */;
    /* data: db $41, $2B */;
    /* data: db $42, $2C */;
    /* data: db $43, $2C */;
    /* data: db $44, $2D */;
    /* data: db $C2, $51, $37 */;
    /* data: db $C2, $54, $38 */;
    /* data: db $71, $33 */;
    /* data: db $82, $72, $2F */;
    /* data: db $74, $34 */;
    /* data: db $82, $52, $04 */;
    /* data: db $82, $62, $04 */;
    /* data: db $28, $C8 */;
    /* data: db $37, $C8 */;
    /* data: db $58, $C8 */;
    /* data: db $66, $C8 */;
    /* data: db $27, $EC */;
    /* data: db $31, $EC */;
    /* data: db $36, $EC */;
    /* data: db $57, $EC */;
    /* data: db $65, $EC */;
    /* data: db $00, $CD */;
    /* data: db $02, $CD */;
    /* data: db $05, $CD */;
    /* data: db $07, $CD */;
    /* data: db $09, $CD */;
    /* data: db $01, $CE */;
    /* data: db $03, $CE */;
    /* data: db $06, $CE */;
    /* data: db $08, $CE */;
    /* data: db $04, $C8 */;
    /* data: db $70, $B7 */;
    /* data: db $75, $FB */;
    /* data: db $77, $FB */;
    /* data: db $79, $B6 */;
    /* data: db ROOM_END */;
}

void Overworld5F(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $ED */;
    /* data: db $00, $CE */;
    /* data: db $C6, $10, $EB */;
    /* data: db $82, $31, $EB */;
    /* data: db $82, $06, $EB */;
    /* data: db $82, $46, $EB */;
    /* data: db $83, $03, $EE */;
    /* data: db $82, $37, $EE */;
    /* data: db $43, $EE */;
    /* data: db $13, $FB */;
    /* data: db $15, $FB */;
    /* data: db $24, $21 */;
    /* data: db $25, $4F */;
    /* data: db $34, $CD */;
    /* data: db $35, $CE */;
    /* data: db $44, $FB */;
    /* data: db $53, $FB */;
    /* data: db $55, $FB */;
    /* data: db $54, $4F */;
    /* data: db $55, $21 */;
    /* data: db $64, $21 */;
    /* data: db $65, $4F */;
    /* data: db $74, $CD */;
    /* data: db $75, $CE */;
    /* data: db $C2, $17, $C8 */;
    /* data: db $C2, $57, $C8 */;
    /* data: db $C8, $09, $38 */;
    /* data: db $70, $B7 */;
    /* data: db ROOM_END */;
}

void Overworld60(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C8, $00, $37 */;
    /* data: db $C8, $01, $90 */;
    /* data: db $C8, $02, $90 */;
    /* data: db $C8, $03, $90 */;
    /* data: db $C5, $04, $87 */;
    /* data: db $04, $88 */;
    /* data: db $85, $05, $84 */;
    /* data: db $38, $8F */;
    /* data: db $39, $85 */;
    /* data: db $C2, $48, $86 */;
    /* data: db $C2, $49, $90 */;
    /* data: db $49, $F5 */;
    /* data: db $C2, $51, $F5 */;
    /* data: db $53, $88 */;
    /* data: db $54, $8C */;
    /* data: db $C2, $63, $87 */;
    /* data: db $68, $8D */;
    /* data: db $69, $84 */;
    /* data: db $15, $08 */;
    /* data: db $36, $08 */;
    /* data: db $65, $08 */;
    /* data: db $25, $44 */;
    /* data: db $29, $44 */;
    /* data: db $56, $44 */;
    /* data: db $C2, $01, $F5 */;
    /* data: db $C2, $12, $F5 */;
    /* data: db ROOM_END */;
}

void Overworld61(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $82, $00, $84 */;
    /* data: db $02, $8C */;
    /* data: db $C4, $07, $86 */;
    /* data: db $C4, $08, $90 */;
    /* data: db $C4, $09, $90 */;
    /* data: db $C2, $11, $0A */;
    /* data: db $13, $08 */;
    /* data: db $22, $0A */;
    /* data: db $47, $8D */;
    /* data: db $82, $48, $84 */;
    /* data: db $83, $30, $85 */;
    /* data: db $33, $8E */;
    /* data: db $36, $5C */;
    /* data: db $83, $40, $90 */;
    /* data: db $C2, $43, $87 */;
    /* data: db $83, $50, $90 */;
    /* data: db $82, $4F, $F5 */;
    /* data: db $83, $60, $84 */;
    /* data: db $63, $8C */;
    /* data: db $65, $08 */;
    /* data: db $67, $8F */;
    /* data: db $82, $68, $85 */;
    /* data: db $77, $86 */;
    /* data: db $82, $78, $90 */;
    /* data: db $79, $F5 */;
    /* data: db $C2, $08, $F5 */;
    /* data: db $19, $F5 */;
    /* data: db $44, $44 */;
    /* data: db $56, $44 */;
    /* data: db ROOM_END */;
}

void Overworld62(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C4, $00, $90 */;
    /* data: db $C2, $FF, $F5 */;
    /* data: db $C4, $01, $87 */;
    /* data: db $84, $06, $90 */;
    /* data: db $84, $16, $90 */;
    /* data: db $84, $26, $90 */;
    /* data: db $84, $36, $84 */;
    /* data: db $C3, $05, $86 */;
    /* data: db $35, $8D */;
    /* data: db $45, $D4 */;
    /* data: db $86, $74, $85 */;
    /* data: db $73, $8F */;
    /* data: db $16, $88 */;
    /* data: db $17, $92 */;
    /* data: db $18, $89 */;
    /* data: db $26, $87 */;
    /* data: db $27, $E4 */;
    /* data: db $28, $86 */;
    /* data: db $36, $8C */;
    /* data: db $38, $8D */;
    /* data: db $37, $E3 */;
    /* data: db $E1, $0A, $BD, $50, $7C */;
    /* data: db $39, $89 */;
    /* data: db $C3, $49, $86 */;
    /* data: db $40, $84 */;
    /* data: db $41, $8C */;
    /* data: db $60, $85 */;
    /* data: db $61, $8E */;
    /* data: db $70, $90 */;
    /* data: db $71, $87 */;
    /* data: db $7F, $F5 */;
    /* data: db $72, $08 */;
    /* data: db $82, $65, $08 */;
    /* data: db $58, $08 */;
    /* data: db $79, $8B */;
    /* data: db $52, $44 */;
    /* data: db ROOM_END */;
}

void Overworld64(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $86, $FF, $F5 */;
    /* data: db $82, $00, $F5 */;
    /* data: db $82, $1F, $F5 */;
    /* data: db $C3, $3F, $F5 */;
    /* data: db $82, $20, $F5 */;
    /* data: db $33, $F5 */;
    /* data: db $44, $F5 */;
    /* data: db $55, $F5 */;
    /* data: db $C3, $18, $0B */;
    /* data: db $39, $0B */;
    /* data: db $27, $08 */;
    /* data: db $75, $3D */;
    /* data: db $76, $48 */;
    /* data: db $77, $E0 */;
    /* data: db $78, $49 */;
    /* data: db $79, $2F */;
    /* data: db $84, $05, $04 */;
    /* data: db $67, $20 */;
    /* data: db $C2, $07, $0B */;
    /* data: db $82, $41, $44 */;
    /* data: db $83, $51, $44 */;
    /* data: db $83, $61, $44 */;
    /* data: db $52, $C4 */;
    /* data: db ROOM_END */;
}

void Overworld65(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $86, $FF, $F5 */;
    /* data: db $13, $FB */;
    /* data: db $14, $FB */;
    /* data: db $14, $C8 */;
    /* data: db $24, $E1 */;
    /* data: db $32, $FB */;
    /* data: db $35, $FB */;
    /* data: db $20, $08 */;
    /* data: db $18, $08 */;
    /* data: db $86, $70, $2F */;
    /* data: db $76, $3C */;
    /* data: db $77, $0A */;
    /* data: db $30, $0B */;
    /* data: db $C3, $31, $0B */;
    /* data: db $83, $52, $0B */;
    /* data: db $C2, $34, $0B */;
    /* data: db $C2, $19, $F5 */;
    /* data: db $28, $F5 */;
    /* data: db $47, $20 */;
    /* data: db $C2, $56, $E8 */;
    /* data: db $79, $F5 */;
    /* data: db $48, $D4 */;
    /* data: db $E1, $0E, $A2, $50, $7C */;
    /* data: db $82, $07, $04 */;
    /* data: db ROOM_END */;
}

void Overworld66(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $0A */;
    /* data: db $8A, $00, $04 */;
    /* data: db $C7, $10, $04 */;
    /* data: db $86, $FF, $F5 */;
    /* data: db $C2, $1F, $F5 */;
    /* data: db $89, $11, $51 */;
    /* data: db $C6, $21, $51 */;
    /* data: db $85, $22, $09 */;
    /* data: db $33, $C4 */;
    /* data: db $34, $03 */;
    /* data: db $35, $C4 */;
    /* data: db $37, $C4 */;
    /* data: db $38, $03 */;
    /* data: db $45, $09 */;
    /* data: db $46, $03 */;
    /* data: db $C2, $51, $04 */;
    /* data: db $53, $C4 */;
    /* data: db $54, $03 */;
    /* data: db $55, $C4 */;
    /* data: db $57, $C4 */;
    /* data: db $82, $58, $09 */;
    /* data: db $65, $03 */;
    /* data: db $82, $66, $09 */;
    /* data: db $7F, $F5 */;
    /* data: db $82, $72, $09 */;
    /* data: db $82, $77, $03 */;
    /* data: db $79, $F5 */;
    /* data: db $29, $FB */;
    /* data: db $49, $FB */;
    /* data: db $69, $FB */;
    /* data: db ROOM_END */;
}

void Overworld67(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $0A */;
    /* data: db $8A, $00, $04 */;
    /* data: db $85, $FF, $F5 */;
    /* data: db $03, $08 */;
    /* data: db $04, $04 */;
    /* data: db $82, $18, $04 */;
    /* data: db $88, $10, $51 */;
    /* data: db $82, $13, $04 */;
    /* data: db $C6, $29, $51 */;
    /* data: db $82, $31, $03 */;
    /* data: db $33, $C4 */;
    /* data: db $35, $C4 */;
    /* data: db $37, $C4 */;
    /* data: db $82, $42, $03 */;
    /* data: db $44, $09 */;
    /* data: db $82, $47, $03 */;
    /* data: db $83, $50, $03 */;
    /* data: db $51, $0A */;
    /* data: db $53, $C4 */;
    /* data: db $55, $C4 */;
    /* data: db $57, $C4 */;
    /* data: db $82, $62, $09 */;
    /* data: db $7F, $F5 */;
    /* data: db $82, $75, $03 */;
    /* data: db $08, $F5 */;
    /* data: db $20, $B7 */;
    /* data: db $30, $CE */;
    /* data: db $40, $B7 */;
    /* data: db $50, $CE */;
    /* data: db $60, $B7 */;
    /* data: db $70, $CE */;
    /* data: db ROOM_END */;
}

void Overworld68(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C8, $00, $38 */;
    /* data: db $C8, $01, $0E */;
    /* data: db $C6, $02, $0E */;
    /* data: db $C6, $03, $9A */;
    /* data: db $62, $9B */;
    /* data: db $63, $9E */;
    /* data: db $72, $9A */;
    /* data: db $73, $9B */;
    /* data: db $86, $74, $99 */;
    /* data: db $C2, $F6, $F5 */;
    /* data: db $08, $B7 */;
    /* data: db $18, $A2 */;
    /* data: db $28, $B6 */;
    /* data: db $09, $96 */;
    /* data: db $19, $93 */;
    /* data: db ROOM_END */;
}

void Overworld69(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $8A, $70, $99 */;
    /* data: db $83, $74, $04 */;
    /* data: db $8A, $00, $96 */;
    /* data: db $8A, $10, $93 */;
    /* data: db $23, $B7 */;
    /* data: db $27, $B7 */;
    /* data: db $33, $A2 */;
    /* data: db $37, $A2 */;
    /* data: db $43, $B6 */;
    /* data: db $47, $B6 */;
    /* data: db $03, $9A */;
    /* data: db $07, $9A */;
    /* data: db $13, $9D */;
    /* data: db $17, $9E */;
    /* data: db $83, $14, $99 */;
    /* data: db $83, $04, $0D */;
    /* data: db $24, $F9 */;
    /* data: db $C3, $22, $5C */;
    /* data: db $C3, $28, $5C */;
    /* data: db $C2, $32, $5C */;
    /* data: db $C3, $44, $5C */;
    /* data: db $C4, $45, $0C */;
    /* data: db $C3, $46, $5C */;
    /* data: db $72, $9B */;
    /* data: db $73, $9C */;
    /* data: db $77, $9B */;
    /* data: db $78, $9C */;
    /* data: db $E1, $14, $D3, $50, $7C */;
    /* data: db ROOM_END */;
}

void Overworld6A(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $00, $96 */;
    /* data: db $10, $93 */;
    /* data: db $01, $B7 */;
    /* data: db $11, $A2 */;
    /* data: db $21, $B6 */;
    /* data: db $C2, $F2, $F5 */;
    /* data: db $C6, $70, $9A */;
    /* data: db $67, $9D */;
    /* data: db $68, $9C */;
    /* data: db $87, $70, $99 */;
    /* data: db $77, $9C */;
    /* data: db $78, $9A */;
    /* data: db $82, $48, $2F */;
    /* data: db $82, $58, $0E */;
    /* data: db $C2, $69, $0E */;
    /* data: db $C6, $07, $9A */;
    /* data: db $08, $96 */;
    /* data: db $09, $98 */;
    /* data: db $18, $93 */;
    /* data: db $19, $95 */;
    /* data: db $48, $E0 */;
    /* data: db ROOM_END */;
}

void Overworld6B(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C8, $09, $37 */;
    /* data: db $C2, $06, $38 */;
    /* data: db $C5, $37, $38 */;
    /* data: db $36, $32 */;
    /* data: db $27, $2D */;
    /* data: db $40, $2F */;
    /* data: db $41, $3C */;
    /* data: db $C3, $51, $37 */;
    /* data: db $C3, $50, $0E */;
    /* data: db $C2, $07, $0E */;
    /* data: db $C8, $08, $0E */;
    /* data: db $00, $F5 */;
    /* data: db $F4, $F5 */;
    /* data: db $C4, $03, $0D */;
    /* data: db $C4, $34, $0D */;
    /* data: db $C2, $36, $5C */;
    /* data: db $C2, $52, $5C */;
    /* data: db $63, $5C */;
    /* data: db $C2, $55, $F5 */;
    /* data: db $72, $F5 */;
    /* data: db $26, $32 */;
    /* data: db ROOM_END */;
}

void Overworld6C(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $EE */;
    /* data: db $01, $CD */;
    /* data: db $02, $CE */;
    /* data: db $03, $CD */;
    /* data: db $04, $CE */;
    /* data: db $05, $CD */;
    /* data: db $06, $CE */;
    /* data: db $07, $CD */;
    /* data: db $08, $CE */;
    /* data: db $09, $CD */;
    /* data: db $C8, $00, $38 */;
    /* data: db $C7, $11, $ED */;
    /* data: db $82, $26, $EC */;
    /* data: db $82, $36, $EC */;
    /* data: db $82, $46, $ED */;
    /* data: db $82, $56, $ED */;
    /* data: db $88, $62, $EB */;
    /* data: db $88, $72, $EB */;
    /* data: db $22, $2B */;
    /* data: db $82, $23, $2C */;
    /* data: db $25, $2D */;
    /* data: db $C2, $32, $37 */;
    /* data: db $52, $33 */;
    /* data: db $82, $53, $2F */;
    /* data: db $55, $34 */;
    /* data: db $C2, $35, $38 */;
    /* data: db $82, $43, $04 */;
    /* data: db $33, $A0 */;
    /* data: db $34, $C6 */;
    /* data: db $E1, $05, $B0, $78, $10 */;
    /* data: db $48, $FB */;
    /* data: db ROOM_END */;
}

void Overworld6D(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $EE */;
    /* data: db $25, $FB */;
    /* data: db $27, $FB */;
    /* data: db $34, $FB */;
    /* data: db $35, $4F */;
    /* data: db $40, $FB */;
    /* data: db $77, $FB */;
    /* data: db $79, $B6 */;
    /* data: db $00, $CE */;
    /* data: db $01, $CD */;
    /* data: db $02, $CE */;
    /* data: db $03, $CD */;
    /* data: db $04, $CE */;
    /* data: db $05, $CD */;
    /* data: db $06, $CE */;
    /* data: db $07, $CD */;
    /* data: db $08, $CE */;
    /* data: db $09, $CD */;
    /* data: db $82, $53, $C8 */;
    /* data: db $C2, $65, $C8 */;
    /* data: db $C2, $42, $ED */;
    /* data: db $C2, $64, $ED */;
    /* data: db $C4, $46, $ED */;
    /* data: db $55, $EB */;
    /* data: db $84, $60, $EB */;
    /* data: db $84, $70, $EB */;
    /* data: db $39, $C8 */;
    /* data: db $29, $EC */;
    /* data: db ROOM_END */;
}

void Overworld6E(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $EE */;
    /* data: db $00, $CE */;
    /* data: db $01, $FB */;
    /* data: db $03, $FB */;
    /* data: db $05, $CD */;
    /* data: db $06, $CE */;
    /* data: db $07, $CD */;
    /* data: db $08, $CE */;
    /* data: db $09, $CD */;
    /* data: db $83, $30, $C8 */;
    /* data: db $C5, $15, $ED */;
    /* data: db $C3, $46, $ED */;
    /* data: db $33, $ED */;
    /* data: db $34, $EC */;
    /* data: db $82, $26, $C8 */;
    /* data: db $28, $ED */;
    /* data: db $39, $C8 */;
    /* data: db $84, $41, $EB */;
    /* data: db $C2, $51, $EC */;
    /* data: db $83, $52, $C8 */;
    /* data: db $82, $67, $C8 */;
    /* data: db $69, $EC */;
    /* data: db $70, $B7 */;
    /* data: db $71, $FB */;
    /* data: db $73, $FB */;
    /* data: db $75, $FB */;
    /* data: db $77, $FB */;
    /* data: db $79, $B6 */;
    /* data: db ROOM_END */;
}

void Overworld6F(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $EE */;
    /* data: db $00, $CE */;
    /* data: db $C8, $09, $38 */;
    /* data: db $83, $01, $ED */;
    /* data: db $82, $04, $C8 */;
    /* data: db $C4, $06, $ED */;
    /* data: db $C4, $17, $C8 */;
    /* data: db $C5, $08, $ED */;
    /* data: db $C2, $15, $C8 */;
    /* data: db $83, $30, $C8 */;
    /* data: db $13, $EC */;
    /* data: db $24, $EC */;
    /* data: db $33, $EC */;
    /* data: db $84, $53, $C8 */;
    /* data: db $C3, $44, $EC */;
    /* data: db $82, $41, $ED */;
    /* data: db $82, $51, $ED */;
    /* data: db $57, $ED */;
    /* data: db $70, $B7 */;
    /* data: db $71, $FB */;
    /* data: db $73, $FB */;
    /* data: db $75, $FB */;
    /* data: db $77, $FB */;
    /* data: db ROOM_END */;
}

void Overworld70(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C4, $00, $37 */;
    /* data: db $40, $31 */;
    /* data: db $C3, $50, $90 */;
    /* data: db $C8, $01, $90 */;
    /* data: db $C8, $02, $90 */;
    /* data: db $C2, $33, $90 */;
    /* data: db $C2, $03, $87 */;
    /* data: db $23, $8A */;
    /* data: db $24, $8E */;
    /* data: db $C2, $34, $87 */;
    /* data: db $52, $88 */;
    /* data: db $53, $84 */;
    /* data: db $54, $8C */;
    /* data: db $62, $87 */;
    /* data: db $C3, $F1, $F5 */;
    /* data: db $C2, $50, $F5 */;
    /* data: db $82, $70, $F5 */;
    /* data: db $16, $08 */;
    /* data: db $27, $08 */;
    /* data: db $63, $08 */;
    /* data: db $38, $F5 */;
    /* data: db $C2, $49, $F5 */;
    /* data: db $C2, $58, $F5 */;
    /* data: db $C2, $67, $0A */;
    /* data: db $18, $44 */;
    /* data: db $45, $44 */;
    /* data: db $63, $44 */;
    /* data: db ROOM_END */;
}

void Overworld71(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C5, $07, $86 */;
    /* data: db $C5, $08, $90 */;
    /* data: db $C5, $09, $90 */;
    /* data: db $C2, $4F, $F5 */;
    /* data: db $61, $F5 */;
    /* data: db $C3, $30, $F5 */;
    /* data: db $32, $20 */;
    /* data: db $82, $23, $F5 */;
    /* data: db $C5, $F9, $F5 */;
    /* data: db $C4, $08, $F5 */;
    /* data: db $46, $F5 */;
    /* data: db $57, $F5 */;
    /* data: db $83, $53, $0A */;
    /* data: db $64, $0A */;
    /* data: db $12, $08 */;
    /* data: db $14, $08 */;
    /* data: db $83, $72, $F5 */;
    /* data: db $44, $44 */;
    /* data: db $53, $44 */;
    /* data: db $55, $44 */;
    /* data: db $64, $44 */;
    /* data: db $54, $A0 */;
    /* data: db ROOM_END */;
}

void Overworld72(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $C8, $00, $90 */;
    /* data: db $89, $71, $90 */;
    /* data: db $C4, $39, $90 */;
    /* data: db $C6, $01, $87 */;
    /* data: db $86, $62, $85 */;
    /* data: db $C2, $03, $86 */;
    /* data: db $C3, $38, $86 */;
    /* data: db $68, $8B */;
    /* data: db $61, $8A */;
    /* data: db $23, $8D */;
    /* data: db $28, $8F */;
    /* data: db $29, $85 */;
    /* data: db $47, $5C */;
    /* data: db $86, $52, $5C */;
    /* data: db $82, $24, $84 */;
    /* data: db $82, $14, $90 */;
    /* data: db $82, $04, $90 */;
    /* data: db $26, $8C */;
    /* data: db $16, $87 */;
    /* data: db $06, $88 */;
    /* data: db $60, $F5 */;
    /* data: db $83, $07, $84 */;
    /* data: db $04, $F5 */;
    /* data: db $C5, $FF, $F5 */;
    /* data: db $85, $71, $F5 */;
    /* data: db $C2, $39, $F5 */;
    /* data: db $35, $44 */;
    /* data: db $42, $44 */;
    /* data: db ROOM_END */;
}

void Overworld73(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $82, $00, $84 */;
    /* data: db $C5, $30, $90 */;
    /* data: db $C8, $09, $90 */;
    /* data: db $C5, $28, $86 */;
    /* data: db $78, $90 */;
    /* data: db $02, $8C */;
    /* data: db $C5, $F9, $F5 */;
    /* data: db $71, $90 */;
    /* data: db $C4, $31, $87 */;
    /* data: db $20, $85 */;
    /* data: db $21, $8E */;
    /* data: db $C3, $3F, $F5 */;
    /* data: db $86, $62, $85 */;
    /* data: db $61, $8A */;
    /* data: db $68, $8B */;
    /* data: db $87, $71, $90 */;
    /* data: db $85, $71, $F5 */;
    /* data: db $82, $05, $0A */;
    /* data: db $07, $8D */;
    /* data: db $08, $89 */;
    /* data: db $C5, $17, $0A */;
    /* data: db $56, $0A */;
    /* data: db $52, $08 */;
    /* data: db $18, $86 */;
    /* data: db $14, $E8 */;
    /* data: db $23, $08 */;
    /* data: db $25, $08 */;
    /* data: db $32, $E8 */;
    /* data: db $34, $5C */;
    /* data: db $36, $E8 */;
    /* data: db $43, $08 */;
    /* data: db $45, $08 */;
    /* data: db $54, $E8 */;
    /* data: db $12, $44 */;
    /* data: db ROOM_END */;
}

void Overworld74(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $03 */;
    /* data: db $C8, $00, $04 */;
    /* data: db $84, $06, $3A */;
    /* data: db $07, $E0 */;
    /* data: db $C5, $FF, $F5 */;
    /* data: db $05, $38 */;
    /* data: db $11, $3D */;
    /* data: db $12, $48 */;
    /* data: db $13, $E0 */;
    /* data: db $14, $49 */;
    /* data: db $15, $34 */;
    /* data: db $C5, $21, $38 */;
    /* data: db $83, $25, $0A */;
    /* data: db $26, $08 */;
    /* data: db $34, $0A */;
    /* data: db $83, $35, $08 */;
    /* data: db $38, $0A */;
    /* data: db $36, $5C */;
    /* data: db $83, $45, $0A */;
    /* data: db $46, $08 */;
    /* data: db $71, $32 */;
    /* data: db $88, $72, $2C */;
    /* data: db $26, $08 */;
    /* data: db ROOM_END */;
}

void Overworld75(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $86, $00, $3A */;
    /* data: db $C3, $06, $37 */;
    /* data: db $86, $10, $03 */;
    /* data: db $86, $20, $03 */;
    /* data: db $86, $30, $03 */;
    /* data: db $86, $40, $03 */;
    /* data: db $86, $50, $03 */;
    /* data: db $86, $60, $03 */;
    /* data: db $C4, $17, $0A */;
    /* data: db $C3, $F9, $F5 */;
    /* data: db $23, $20 */;
    /* data: db $C2, $32, $20 */;
    /* data: db $C2, $34, $20 */;
    /* data: db $35, $2B */;
    /* data: db $36, $31 */;
    /* data: db $38, $0A */;
    /* data: db $C3, $45, $37 */;
    /* data: db $53, $20 */;
    /* data: db $56, $0A */;
    /* data: db $C2, $58, $F5 */;
    /* data: db $69, $F5 */;
    /* data: db $85, $70, $2C */;
    /* data: db $75, $31 */;
    /* data: db $33, $C6 */;
    /* data: db $E1, $0A, $DE, $38, $40 */;
    /* data: db ROOM_END */;
}

void Overworld76(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $0A */;
    /* data: db $C8, $00, $04 */;
    /* data: db $C3, $FF, $F5 */;
    /* data: db $31, $04 */;
    /* data: db $C5, $01, $51 */;
    /* data: db $82, $04, $09 */;
    /* data: db $06, $03 */;
    /* data: db $09, $04 */;
    /* data: db $F9, $F5 */;
    /* data: db $13, $09 */;
    /* data: db $14, $C4 */;
    /* data: db $16, $C4 */;
    /* data: db $83, $17, $03 */;
    /* data: db $18, $0A */;
    /* data: db $26, $03 */;
    /* data: db $82, $27, $09 */;
    /* data: db $34, $C4 */;
    /* data: db $35, $03 */;
    /* data: db $36, $C5 */;
    /* data: db $37, $03 */;
    /* data: db $82, $43, $03 */;
    /* data: db $82, $47, $03 */;
    /* data: db $49, $09 */;
    /* data: db $C2, $51, $04 */;
    /* data: db $88, $52, $51 */;
    /* data: db $71, $08 */;
    /* data: db $72, $38 */;
    /* data: db $62, $3D */;
    /* data: db $87, $63, $2F */;
    /* data: db $87, $73, $3A */;
    /* data: db $C2, $50, $F5 */;
    /* data: db $6F, $F5 */;
    /* data: db $09, $FB */;
    /* data: db $E1, $0A, $DF, $38, $30 */;
    /* data: db ROOM_END */;
}

void Overworld77(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $0A */;
    /* data: db $FF, $F5 */;
    /* data: db $01, $09 */;
    /* data: db $82, $02, $03 */;
    /* data: db $C4, $09, $51 */;
    /* data: db $12, $03 */;
    /* data: db $13, $C5 */;
    /* data: db $14, $09 */;
    /* data: db $15, $C5 */;
    /* data: db $16, $03 */;
    /* data: db $21, $03 */;
    /* data: db $82, $22, $09 */;
    /* data: db $26, $09 */;
    /* data: db $27, $03 */;
    /* data: db $32, $03 */;
    /* data: db $33, $C5 */;
    /* data: db $35, $C5 */;
    /* data: db $17, $C5 */;
    /* data: db $E1, $FF, $12, $50, $5C */;
    /* data: db $E1, $FF, $12, $50, $5C */;
    /* data: db $E1, $FF, $12, $50, $5C */;
    /* data: db $E1, $FF, $12, $50, $5C */;
    /* data: db $36, $03 */;
    /* data: db $82, $44, $03 */;
    /* data: db $84, $46, $51 */;
    /* data: db $85, $50, $51 */;
    /* data: db $85, $60, $2F */;
    /* data: db $65, $4E */;
    /* data: db $55, $3D */;
    /* data: db $56, $35 */;
    /* data: db $85, $70, $3A */;
    /* data: db $75, $3F */;
    /* data: db $82, $68, $04 */;
    /* data: db $84, $76, $04 */;
    /* data: db $68, $F5 */;
    /* data: db $76, $F5 */;
    /* data: db $00, $B7 */;
    /* data: db $10, $CE */;
    /* data: db ROOM_END */;
}

void Overworld78(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $0E */;
    /* data: db $8A, $60, $04 */;
    /* data: db $8A, $70, $04 */;
    /* data: db $60, $F5 */;
    /* data: db $84, $72, $F5 */;
    /* data: db $C5, $00, $38 */;
    /* data: db $50, $32 */;
    /* data: db $89, $51, $2C */;
    /* data: db $86, $04, $96 */;
    /* data: db $86, $14, $93 */;
    /* data: db $02, $9D */;
    /* data: db $03, $9E */;
    /* data: db $12, $97 */;
    /* data: db $22, $94 */;
    /* data: db $13, $98 */;
    /* data: db $23, $95 */;
    /* data: db $62, $C6 */;
    /* data: db $E1, $1F, $FD, $58, $50 */;
    /* data: db $85, $64, $E8 */;
    /* data: db ROOM_END */;
}

void Overworld79(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $8A, $00, $96 */;
    /* data: db $8A, $10, $93 */;
    /* data: db $8A, $20, $0E */;
    /* data: db $8A, $30, $0E */;
    /* data: db $8A, $40, $0E */;
    /* data: db $03, $9E */;
    /* data: db $13, $98 */;
    /* data: db $23, $95 */;
    /* data: db $02, $9D */;
    /* data: db $12, $97 */;
    /* data: db $22, $94 */;
    /* data: db $07, $9D */;
    /* data: db $17, $97 */;
    /* data: db $27, $94 */;
    /* data: db $08, $9E */;
    /* data: db $18, $98 */;
    /* data: db $28, $95 */;
    /* data: db $8A, $50, $2C */;
    /* data: db $33, $9F */;
    /* data: db $37, $9F */;
    /* data: db $43, $9A */;
    /* data: db $47, $9A */;
    /* data: db $53, $A3 */;
    /* data: db $57, $A3 */;
    /* data: db $C6, $04, $0D */;
    /* data: db $C6, $06, $0D */;
    /* data: db $C8, $05, $0C */;
    /* data: db $70, $F5 */;
    /* data: db $79, $F5 */;
    /* data: db $83, $14, $AB */;
    /* data: db $83, $24, $AC */;
    /* data: db ROOM_END */;
}

void Overworld79Alt(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $8A, $00, $96 */;
    /* data: db $8A, $10, $93 */;
    /* data: db $8A, $20, $0E */;
    /* data: db $8A, $30, $0E */;
    /* data: db $8A, $40, $0E */;
    /* data: db $03, $9E */;
    /* data: db $13, $98 */;
    /* data: db $23, $95 */;
    /* data: db $02, $9D */;
    /* data: db $12, $97 */;
    /* data: db $22, $94 */;
    /* data: db $07, $9D */;
    /* data: db $17, $97 */;
    /* data: db $27, $94 */;
    /* data: db $08, $9E */;
    /* data: db $18, $98 */;
    /* data: db $28, $95 */;
    /* data: db $8A, $50, $2C */;
    /* data: db $33, $9F */;
    /* data: db $37, $9F */;
    /* data: db $43, $9A */;
    /* data: db $47, $9A */;
    /* data: db $53, $A3 */;
    /* data: db $57, $A3 */;
    /* data: db $C6, $04, $0D */;
    /* data: db $C6, $06, $0D */;
    /* data: db $C8, $05, $0C */;
    /* data: db $70, $F5 */;
    /* data: db $79, $F5 */;
    /* data: db ROOM_END */;
}

void Overworld7A(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $0E */;
    /* data: db $8A, $50, $2C */;
    /* data: db $8A, $60, $04 */;
    /* data: db $8A, $70, $04 */;
    /* data: db $87, $00, $96 */;
    /* data: db $87, $10, $93 */;
    /* data: db $86, $7F, $F5 */;
    /* data: db $07, $9D */;
    /* data: db $08, $9E */;
    /* data: db $17, $97 */;
    /* data: db $18, $98 */;
    /* data: db $27, $94 */;
    /* data: db $28, $95 */;
    /* data: db ROOM_END */;
}

void Overworld7B(void) {
    /* data: db ANIMATED_TILES_VILLAGE */;
    /* data: db $04 */;
    /* data: db $F2, $F5 */;
    /* data: db $F5, $F5 */;
    /* data: db $C5, $00, $0E */;
    /* data: db $C8, $08, $0E */;
    /* data: db $C3, $21, $0E */;
    /* data: db $C3, $27, $0E */;
    /* data: db $85, $22, $0E */;
    /* data: db $01, $37 */;
    /* data: db $11, $33 */;
    /* data: db $85, $12, $2F */;
    /* data: db $07, $38 */;
    /* data: db $17, $34 */;
    /* data: db $32, $2B */;
    /* data: db $36, $2D */;
    /* data: db $42, $37 */;
    /* data: db $46, $38 */;
    /* data: db $52, $31 */;
    /* data: db $56, $32 */;
    /* data: db $57, $2D */;
    /* data: db $82, $50, $2C */;
    /* data: db $C2, $67, $38 */;
    /* data: db $C8, $09, $37 */;
    /* data: db $83, $33, $2C */;
    /* data: db $14, $D8 */;
    /* data: db $24, $D9 */;
    /* data: db $34, $DA */;
    /* data: db $82, $7F, $F5 */;
    /* data: db ROOM_END */;
}

void Overworld7C(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $EB */;
    /* data: db $C5, $00, $38 */;
    /* data: db $50, $32 */;
    /* data: db $89, $51, $2C */;
    /* data: db $60, $3D */;
    /* data: db $70, $38 */;
    /* data: db $89, $61, $2F */;
    /* data: db $89, $71, $3A */;
    /* data: db $C4, $01, $ED */;
    /* data: db $85, $12, $EC */;
    /* data: db $85, $22, $EC */;
    /* data: db $85, $32, $EC */;
    /* data: db $83, $17, $C8 */;
    /* data: db ROOM_END */;
}

void Overworld7D(void) {
    /* data: db ANIMATED_TILES_CURRENTS */;
    /* data: db $EB */;
    /* data: db $8A, $50, $2C */;
    /* data: db $8A, $60, $2F */;
    /* data: db $8A, $70, $3A */;
    /* data: db $10, $C8 */;
    /* data: db $83, $21, $C8 */;
    /* data: db $C3, $05, $C8 */;
    /* data: db $26, $C8 */;
    /* data: db $82, $38, $C8 */;
    /* data: db $07, $CD */;
    /* data: db $08, $CE */;
    /* data: db $09, $CD */;
    /* data: db $C3, $04, $ED */;
    /* data: db $C2, $27, $ED */;
    /* data: db $06, $ED */;
    /* data: db $20, $ED */;
    /* data: db ROOM_END */;
}

void Overworld7E(void) {
    /* data: db ANIMATED_TILES_WATERFALL */;
    /* data: db $EB */;
    /* data: db $00, $CE */;
    /* data: db $01, $CD */;
    /* data: db $02, $CE */;
    /* data: db $03, $CD */;
    /* data: db $04, $CE */;
    /* data: db $05, $CD */;
    /* data: db $06, $CE */;
    /* data: db $07, $CD */;
    /* data: db $08, $CE */;
    /* data: db $09, $CD */;
    /* data: db $83, $30, $C8 */;
    /* data: db $88, $22, $C8 */;
    /* data: db $83, $45, $C8 */;
    /* data: db $8A, $50, $2C */;
    /* data: db $8A, $60, $2F */;
    /* data: db $8A, $70, $3A */;
    /* data: db ROOM_END */;
}

void Overworld7F(void) {
    /* data: db ANIMATED_TILES_WATERFALL */;
    /* data: db $ED */;
    /* data: db $00, $CE */;
    /* data: db $01, $CD */;
    /* data: db $02, $CE */;
    /* data: db $03, $CD */;
    /* data: db $04, $CE */;
    /* data: db $05, $CD */;
    /* data: db $06, $CE */;
    /* data: db $07, $CD */;
    /* data: db $08, $CE */;
    /* data: db $C8, $09, $38 */;
    /* data: db $84, $10, $ED */;
    /* data: db $20, $C8 */;
    /* data: db $83, $30, $ED */;
    /* data: db $83, $40, $ED */;
    /* data: db $33, $C8 */;
    /* data: db $83, $16, $C8 */;
    /* data: db $28, $C8 */;
    /* data: db $50, $2C */;
    /* data: db $51, $2D */;
    /* data: db $55, $2B */;
    /* data: db $82, $56, $2C */;
    /* data: db $58, $2D */;
    /* data: db $60, $2F */;
    /* data: db $61, $4E */;
    /* data: db $65, $2E */;
    /* data: db $82, $66, $2F */;
    /* data: db $68, $4E */;
    /* data: db $70, $3A */;
    /* data: db $71, $3F */;
    /* data: db $75, $3E */;
    /* data: db $82, $76, $3A */;
    /* data: db $78, $3F */;
    /* data: db $83, $62, $E9 */;
    /* data: db $83, $72, $E9 */;
    /* data: db $84, $10, $EB */;
    /* data: db $82, $30, $EB */;
    /* data: db $82, $40, $EB */;
    /* data: db ROOM_END */;
}

void Dialog24E(void) {
    /* data: db "Have you heard  " */;
    /* data: db "of the Flying   " */;
    /* data: db "Rooster?  They  " */;
    /* data: db "say it lived in " */;
    /* data: db "Mabe Village a  " */;
    /* data: db "long time ago..." */;
    /* data: db "I wonder if it's" */;
    /* data: db "true...@" */;
}

void Dialog24F(void) {
    /* data: db "Aaaah, Little   " */;
    /* data: db "Marin... I want " */;
    /* data: db "her to come back" */;
    /* data: db "again...Her song" */;
    /* data: db "is the best...@" */;
}

void Dialog250(void) {
    /* data: db "I dreamed that  " */;
    /* data: db "I turned into a " */;
    /* data: db "carrot last     " */;
    /* data: db "night...  What  " */;
    /* data: db "an odd dream...@" */;
}

void Dialog251(void) {
    /* data: db "Eh?  How can an " */;
    /* data: db "animal talk?    " */;
    /* data: db "How?  Hey, I'm  " */;
    /* data: db "just a rabbit,  " */;
    /* data: db "so I don't know!@" */;
}

void Dialog252(void) {
    /* data: db "Ahhh!  It's her!" */;
    /* data: db "Little Marin!!@" */;
}

void Dialog253(void) {
    /* data: db "If you have no  " */;
    /* data: db "courage,then    " */;
    /* data: db "you have no     " */;
    /* data: db "strength.       " */;
    /* data: db "Gravestones     " */;
    /* data: db "won't move for  " */;
    /* data: db "cowards.@" */;
}

void Dialog254(void) {
    /* data: db "I'm not afraid. " */;
    /* data: db "I just decided  " */;
    /* data: db "to wait at home.@" */;
}

void Dialog255(void) {
    /* data: db "This is my first" */;
    /* data: db "walk with you,  " */;
    /* data: db "#####.@" */;
}

void Dialog256(void) {
    /* data: db ". . . . .@" */;
}

void Dialog257(void) {
    /* data: db "This cliff will " */;
    /* data: db "be our secret   " */;
    /* data: db "place. @" */;
}

void Dialog258(void) {
    /* data: db "Aren't you going" */;
    /* data: db "to say anything?@" */;
}

void Dialog259(void) {
    /* data: db "Oh how I love   " */;
    /* data: db "pictures! Why   " */;
    /* data: db "don't you take  " */;
    /* data: db "a picture when  " */;
    /* data: db "no one is       " */;
    /* data: db "around? You can " */;
    /* data: db "call it . . .@" */;
}

void Dialog25A(void) {
    /* data: db "You've got the  " */;
    /* data: db "Blue Clothes!   " */;
    /* data: db "Your damage will" */;
    /* data: db "be reduced by   " */;
    /* data: db "half!@" */;
}

void Dialog25B(void) {
    /* data: db "You've got the  " */;
    /* data: db "Red Clothes!    " */;
    /* data: db "Your body is    " */;
    /* data: db "full of energy! @" */;
}

void Dialog25C(void) {
    /* data: db "Red for offense," */;
    /* data: db "blue for        " */;
    /* data: db "defense. Which  " */;
    /* data: db "do you choose?  " */;
    /* data: db "    RED  BLUE<ask>" */;
}

void Dialog25D(void) {
    /* data: db "Are you sure?   " */;
    /* data: db "    YES  NO<ask>" */;
}

void Dialog25E(void) {
    /* data: db "The fairy queen " */;
    /* data: db "is waiting for  " */;
    /* data: db "you.@" */;
}

void Dialog25F(void) {
    /* data: db "Do you have the " */;
    /* data: db "powder? If not, " */;
    /* data: db "you must go     " */;
    /* data: db "back.@" */;
}

void Dialog260(void) {
    /* data: db "Our colors are  " */;
    /* data: db "never the same! " */;
    /* data: db "If I am red, he " */;
    /* data: db "is blue! If he  " */;
    /* data: db "is red, I am    " */;
    /* data: db "blue! What color" */;
    /* data: db "is my cloth?    " */;
    /* data: db "    Red  Blue<ask>" */;
}

void Dialog261(void) {
    /* data: db "BOO! I am no    " */;
    /* data: db "weakling! Your  " */;
    /* data: db "pitiful sword is" */;
    /* data: db "no match for me!@" */;
}

void Dialog262(void) {
    /* data: db "I am sorry, but " */;
    /* data: db "this is the     " */;
    /* data: db "Color Dungeon.  " */;
    /* data: db "Only those with " */;
    /* data: db "the power of    " */;
    /* data: db "color may enter." */;
    /* data: db "If you can tell " */;
    /* data: db "who wears red   " */;
    /* data: db "and who wears   " */;
    /* data: db "blue, you may   " */;
    /* data: db "enter.          " */;
    /* data: db "Farewell.@" */;
}

void Dialog263(void) {
    /* data: db "Here is your    " */;
    /* data: db "clue. Make      " */;
    /* data: db "all the red     " */;
    /* data: db "blue.@" */;
}

void Dialog264(void) {
    /* data: db "No,  no. Take a " */;
    /* data: db "closer look and " */;
    /* data: db "try again.@" */;
}

void Dialog265(void) {
    /* data: db "Don't tell      " */;
    /* data: db "anyone.@" */;
}

void Dialog266(void) {
    /* data: db "Do you want to  " */;
    /* data: db "read this book? " */;
    /* data: db "    YES  NO<ask>" */;
}

void Dialog267(void) {
    /* data: db "New world of    " */;
    /* data: db "color under the " */;
    /* data: db "5 gravestones.  " */;
    /* data: db "                " */;
    /* data: db "   3<up>  4<right>  5<up>   " */;
    /* data: db "   2<left>  1<down>       " */;
    /* data: db "Try with all    " */;
    /* data: db "your might. Open" */;
    /* data: db "a new path!     " */;
    /* data: db "Whoever is      " */;
    /* data: db "worthy receives " */;
    /* data: db "the power of    " */;
    /* data: db "color. I wonder " */;
    /* data: db "what the world  " */;
    /* data: db "of color is?@" */;
}

void Dialog268(void) {
    /* data: db "Welcome, #####. " */;
    /* data: db "I admire you for" */;
    /* data: db "coming this far." */;
    /* data: db "I will give you " */;
    /* data: db "the power of    " */;
    /* data: db "color. If you   " */;
    /* data: db "want offense,   " */;
    /* data: db "choose red. If  " */;
    /* data: db "you want defense" */;
    /* data: db "choose blue.    " */;
    /* data: db "Which power do  " */;
    /* data: db "you want?       " */;
    /* data: db "    RED  BLUE<ask>" */;
}

void Dialog269(void) {
    /* data: db "You fool! Your  " */;
    /* data: db "sword won't     " */;
    /* data: db "work! Try       " */;
    /* data: db "something else!@" */;
}

void Dialog26A(void) {
    /* data: db "What a greedy   " */;
    /* data: db "fool! You want  " */;
    /* data: db "more power?! A  " */;
    /* data: db "buffoon like you" */;
    /* data: db "might as well   " */;
    /* data: db "give up and     " */;
    /* data: db "go home!@" */;
}

void Dialog26B(void) {
    /* data: db "Relax and close " */;
    /* data: db "your eyes.@" */;
}

void Dialog26C(void) {
    /* data: db "I will now take " */;
    /* data: db "you out.@" */;
}

void Dialog26D(void) {
    /* data: db "Blue is safe.   " */;
    /* data: db "Yellow is       " */;
    /* data: db "caution. Red is " */;
    /* data: db "danger.@" */;
}

void Dialog26E(void) {
    /* data: db "Yellow is       " */;
    /* data: db "caution. Red is " */;
    /* data: db "danger,Take     " */;
    /* data: db "your time.@" */;
}

void Dialog26F(void) {
    /* data: db "Blue. Start     " */;
    /* data: db "over. Yellow is " */;
    /* data: db "caution. Red is " */;
    /* data: db "danger.@" */;
}

void Dialog270(void) {
    /* data: db "Hey, that looks " */;
    /* data: db "great! I'll call" */;
    /* data: db "it '##### Plays " */;
    /* data: db "With BowWow!'   " */;
    /* data: db "Now get closer  " */;
    /* data: db "to BowWow!@" */;
}

void Dialog271(void) {
    /* data: db "Grrrr!@" */;
}

void Dialog272(void) {
    /* data: db "#####, get      " */;
    /* data: db "closer!@" */;
}

void Dialog273(void) {
    /* data: db "Grrrr! Grrrr!!@" */;
}

void Dialog274(void) {
    /* data: db "Much closer! OK," */;
    /* data: db "I'm ready.      " */;
    /* data: db "Smile!@" */;
}

void Dialog275(void) {
    /* data: db "Grrrr! Grrrr!!  " */;
    /* data: db "GRRRR!@" */;
}

void Dialog276(void) {
    /* data: db "Ha ha ha! Do it!" */;
    /* data: db "Do it!  Do it   " */;
    /* data: db "moooore! ... ..." */;
    /* data: db "Hunh?  No, it's " */;
    /* data: db "nothing... I    " */;
    /* data: db "didn't mean it.@" */;
}

void Dialog277(void) {
    /* data: db "Not very good..." */;
    /* data: db "Eh?  What?  Did " */;
    /* data: db "I say something?" */;
    /* data: db "No, you're hear-" */;
    /* data: db "ing things...@" */;
}

void Dialog278(void) {
    /* data: db "#####, do you   " */;
    /* data: db "always look in  " */;
    /* data: db "other people's  " */;
    /* data: db "drawers?@" */;
}

void Dialog279(void) {
    /* data: db "Great!  Dig it! " */;
    /* data: db "Dig it!  Dig to " */;
    /* data: db "the center of   " */;
    /* data: db "the earth!!@" */;
}

void Dialog27A(void) {
    /* data: db "Whew!  What a   " */;
    /* data: db "surprise!@" */;
}

void Dialog27B(void) {
    /* data: db "Ohh!  I'm sorry!" */;
    /* data: db "Are you okay?!  " */;
    /* data: db "#####?@" */;
}

void Dialog27C(void) {
    /* data: db "Hey Mon!@" */;
}

void Dialog27D(void) {
    /* data: db "You know me, I  " */;
    /* data: db "like short names" */;
    /* data: db "the best...@" */;
}

void Dialog27E(void) {
    /* data: db "It can display  " */;
    /* data: db "millions of     " */;
    /* data: db "polygons!@" */;
}

void Dialog27F(void) {
    /* data: db "I definitely    " */;
    /* data: db "need it, as soon" */;
    /* data: db "as possible!@" */;
}

void Dialog280(void) {
    /* data: db "Turn aside the  " */;
    /* data: db "spined ones with" */;
    /* data: db "a shield...@" */;
}

void Dialog281(void) {
    /* data: db "First, defeat   " */;
    /* data: db "the imprisoned  " */;
    /* data: db "Pols Voice,     " */;
    /* data: db "Last, Stalfos...@@" */;
}

void Dialog282(void) {
    /* data: db "Far away...     " */;
    /* data: db "Do not fear,    " */;
    /* data: db "dash and fly!@" */;
}

void Dialog283(void) {
    /* data: db "The glint of the" */;
    /* data: db "tile will be    " */;
    /* data: db "your guide...@" */;
}

void Dialog284(void) {
    /* data: db "Dive under where" */;
    /* data: db "torchlight beams" */;
    /* data: db "do cross...@" */;
}

void Dialog285(void) {
    /* data: db "Enter the space " */;
    /* data: db "where the eyes  " */;
    /* data: db "have walls...@" */;
}

void Dialog286(void) {
    /* data: db "The riddle is   " */;
    /* data: db "solved when the " */;
    /* data: db "pillars fall!@" */;
}

void Dialog287(void) {
    /* data: db "Fill all the    " */;
    /* data: db "holes with the  " */;
    /* data: db "rock that rolls," */;
    /* data: db "this (<dpad>) is the " */;
    /* data: db "key!@" */;
}

void Dialog288(void) {
    /* data: db "If there is a   " */;
    /* data: db "door that you   " */;
    /* data: db "can't open, move" */;
    /* data: db "a stone block.@" */;
}

void Dialog289(void) {
    /* data: db "Make every block" */;
    /* data: db "design the same." */;
    /* data: db "A new path will " */;
    /* data: db "open.@" */;
}

void Dialog28A(void) {
    /* data: db "Part of the     " */;
    /* data: db "floor is raised." */;
    /* data: db "Tap the blue    " */;
    /* data: db "crystal.@" */;
}

void Dialog28B(void) {
    /* data: db "To defeat the   " */;
    /* data: db "black monster   " */;
    /* data: db "with the hard   " */;
    /* data: db "shell, feed him " */;
    /* data: db "something ex-   " */;
    /* data: db "plosive.@" */;
}

void Dialog28C(void) {
    /* data: db "Poke suspicious " */;
    /* data: db "parts of the    " */;
    /* data: db "wall with your  " */;
    /* data: db "sword and listen" */;
    /* data: db "to the sounds it" */;
    /* data: db "makes.@" */;
}

void Dialog28D(void) {
    /* data: db "If you can't    " */;
    /* data: db "destroy a       " */;
    /* data: db "skeleton with   " */;
    /* data: db "your sword, try " */;
    /* data: db "using a bomb.@" */;
}

void Dialog28E(void) {
    /* data: db "To open a       " */;
    /* data: db "treasure chest, " */;
    /* data: db "use the pots    " */;
    /* data: db "around it.@" */;
}

void Dialog28F(void) {
    /* data: db "Hop on top of   " */;
    /* data: db "the crystals to " */;
    /* data: db "move forward.@" */;
}

void Dialog290(void) {
    /* data: db "If you can't go " */;
    /* data: db "over the poles, " */;
    /* data: db "try throwing    " */;
    /* data: db "things you have " */;
    /* data: db "in your hands.@" */;
}

void Dialog291(void) {
    /* data: db "Jump off the    " */;
    /* data: db "floor above to  " */;
    /* data: db "reach the chest " */;
    /* data: db "on the table.@" */;
}

void Dialog292(void) {
    /* data: db "To defeat the   " */;
    /* data: db "monsters who    " */;
    /* data: db "hold the key,   " */;
    /* data: db "attack them from" */;
    /* data: db "a higher place.@" */;
}

void Dialog293(void) {
    /* data: db "If the statue   " */;
    /* data: db "looks strange,  " */;
    /* data: db "shoot it with   " */;
    /* data: db "the bow.@" */;
}

void Dialog294(void) {
    /* data: db "Let's take a    " */;
    /* data: db "picture!        " */;
    /* data: db "    YES  NO<ask>" */;
}

void Dialog295(void) {
    /* data: db "No picture?! Are" */;
    /* data: db "you pullin' my  " */;
    /* data: db "leg?            " */;
    /* data: db "    Yes  No way<ask>" */;
}

void Dialog296(void) {
    /* data: db "What a bummer!@" */;
}

void Dialog297(void) {
    /* data: db "Beautiful! I'll " */;
    /* data: db "call this 'Game " */;
    /* data: db "Over.'@" */;
}

void Dialog298(void) {
    /* data: db "What's your     " */;
    /* data: db "name, young man?" */;
    /* data: db "#####? Well     " */;
    /* data: db "here's your     " */;
    /* data: db "album, #####.   " */;
    /* data: db "Give it a look  " */;
    /* data: db "before you      " */;
    /* data: db "leave!@" */;
}

void Dialog299(void) {
    /* data: db "Let's see if we " */;
    /* data: db "can fill that   " */;
    /* data: db "album!@" */;
}

void Dialog29A(void) {
    /* data: db "11 shots left!  " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog29B(void) {
    /* data: db "10 shots left!  " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog29C(void) {
    /* data: db "9 shots left!   " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog29D(void) {
    /* data: db "8 shots left!   " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog29E(void) {
    /* data: db "7 shots left!   " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog29F(void) {
    /* data: db "6 shots left!   " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog2A0(void) {
    /* data: db "5 shots left!   " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog2A1(void) {
    /* data: db "4 shots left!   " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog2A2(void) {
    /* data: db "3 shots left!   " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog2A3(void) {
    /* data: db "2 shots left!   " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog2A4(void) {
    /* data: db "1 shots left!   " */;
    /* data: db "What kind of    " */;
    /* data: db "picture should  " */;
    /* data: db "I take?@" */;
}

void Dialog2A5(void) {
    /* data: db "Oh no! You're   " */;
    /* data: db "out of film!    " */;
    /* data: db "Don't forget to " */;
    /* data: db "look at your    " */;
    /* data: db "album!@" */;
}

void Dialog2A6(void) {
    /* data: db "Hi! I'm the     " */;
    /* data: db "photographer!   " */;
    /* data: db "What a great    " */;
    /* data: db "photo moment!   " */;
    /* data: db "I'll call this  " */;
    /* data: db "'Heads Up!'@" */;
}

void Dialog2A7(void) {
    /* data: db "Hey, this       " */;
    /* data: db "represents your " */;
    /* data: db "adventures      " */;
    /* data: db "perfectly!@" */;
}

void Dialog2A8(void) {
    /* data: db "I'll call this  " */;
    /* data: db "one 'Close      " */;
    /* data: db "Call.' Hmm.@" */;
}

void Dialog2A9(void) {
    /* data: db "I'm too close.@" */;
}

void Dialog2AA(void) {
    /* data: db "I should back up" */;
    /* data: db ".@" */;
}

void Dialog2AB(void) {
    /* data: db "Aaaaaah!@" */;
}

void Dialog2AC(void) {
    /* data: db "I'm going back  " */;
    /* data: db "to the store.   " */;
    /* data: db "Bye!@" */;
}

void Dialog2AD(void) {
    /* data: db "See me later,   " */;
    /* data: db "when you're     " */;
    /* data: db "alone!@" */;
}

void Dialog2AE(void) {
    /* data: db "Are you sure?   " */;
    /* data: db "    YES  NO<ask>" */;
}

void Dialog2AF(void) {
    /* data: db "Ah how I love   " */;
    /* data: db "pictures. Hey,  " */;
    /* data: db "#####! What are " */;
    /* data: db "you doing here? @" */;
}
