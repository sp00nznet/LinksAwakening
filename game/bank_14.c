/* Auto-generated from LADX Disassembly - Bank 0x14 */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void DungeonEventsTable(void);
void ColorDungeonEventsTable(void);
void MapLayout0(void);
void MapLayout1(void);
void MapLayout2(void);
void MapLayout3(void);
void MapLayout4(void);
void MapLayout5(void);
void MapLayout6(void);
void MapLayout7(void);
void MapLayout8(void);
void MapLayout9(void);
void MapLayout10(void);
void MapLayout11(void);
void MapLayout12(void);
void RoomChestsTable(void);
void ColorDungeonRoomChestsTable(void);
void LoadRoomTemplate(void);
void RoomTemplateTopRightBottomLeftHandler(void);
void RoomTemplateRightBottomLeftHandler(void);
void RoomTemplateTopLeftBottomHandler(void);
void RoomTemplateLeftTopRightHandler(void);
void RoomTemplateTopRightBottomHandler(void);
void RoomTemplateBottomLeftHandler(void);
void RoomTemplateBottomRightHandler(void);
void RoomTemplateTopRightHandler(void);
void RoomTemplateTopLeftHandler(void);
void RoomTemplatNotImplementedHandler(void);
void RoomTemplateTopRightBottomLeftOffsets(void);
void RoomTemplateTopRightBottomLeftIds(void);
void RoomTemplateRightBottomLeftOffsets(void);
void RoomTemplateRightBottomLeftIds(void);
void RoomTemplateTopLeftBottomOffsets(void);
void RoomTemplateTopLeftBottomIds(void);
void RoomTemplateLeftTopRightOffsets(void);
void RoomTemplateLeftTopRightIds(void);
void RoomTemplateTopRightBottomOffsets(void);
void RoomTemplateTopRightBottomIds(void);
void RoomTemplateBottomLeftOffsets(void);
void RoomTemplateBottomLeftIds(void);
void RoomTemplateBottomRightOffsets(void);
void RoomTemplateBottomRightIds(void);
void RoomTemplateTopRightOffsets(void);
void RoomTemplateTopRightIds(void);
void RoomTemplateTopLeftOffsets(void);
void RoomTemplateTopLeftIds(void);
void HeartsToHealthTable(void);
void PerformOverworldAudioTasks(void);
void jr_014_4AE7(void);
void jr_014_4B5A(void);
void jr_014_4B8A(void);
void ret_014_4B8E(void);
void Data_014_4B8F(void);
void Data_014_4B97(void);
void Data_014_4B9F(void);
void func_014_4BA7(void);
void jr_014_4BD6(void);
void func_014_4BDA(void);
void func_014_4BEF(void);
void func_014_4C10(void);
void Data_014_4C20(void);
void PaletteEffectDisabledTable(void);
void UpdatePaletteEffectForInteractiveObjects(void);
void jr_014_4CB2(void);
void jr_014_4D0B(void);
void jr_014_4D22(void);
void jr_014_4D6F(void);
void UpdateEntityTimers(void);
void Data_014_4DF1(void);
void Data_014_4E3C(void);
void Data_014_4E41(void);
void TeleportToManboPond(void);
void jr_014_4E6F(void);
void jr_014_4E88(void);
void Data_014_4EA8(void);
void Data_014_4EB8(void);
void Data_014_4EC8(void);
void Data_014_4ED8(void);
void Data_014_4EE8(void);
void ApplyFadeToWhite_DMG(void);
void jr_014_5036(void);
void RenderTransitionEffect(void);
void label_014_5067(void);
void func_014_50C3(void);
void SignpostDialogTable(void);
void BowWowEatableEntitiesTable(void);
void Data_014_5313(void);
void Data_014_5323(void);
void Data_014_5333(void);
void Data_014_5343(void);
void func_014_5347(void);
void jr_014_5360(void);
void jr_014_5391(void);
void func_014_53A3(void);
void jr_014_53F6(void);
void jr_014_5409(void);
void label_014_5443(void);
void jr_014_5444(void);
void DialogOpenAnimationStart(void);
void func_014_54AC(void);
void jr_014_54DE(void);
void ret_014_54E7(void);
void Data_014_54E8(void);
void Data_014_54F0(void);
void func_014_54F8(void);
void RevealObjectUnderObject(void);
void jr_014_557D(void);
void jr_014_55E3(void);
void label_014_5630(void);
void jr_014_5643(void);
void jr_014_564E(void);
void jr_014_5673(void);
void jr_014_5677(void);
void jr_014_5679(void);
void jr_014_56B3(void);
void jr_014_56B7(void);
void jr_014_56B9(void);
void jr_014_56C9(void);
void jr_014_5712(void);
void jr_014_5729(void);
void label_014_573E(void);
void label_014_5743(void);
void label_014_5767(void);
void label_014_57E1(void);
void GetRoomStatusAddressForMapPosition(void);
void jr_014_5882(void);
void ret_014_5883(void);
void GetChestsStatusForRoom(void);
void jr_014_5894(void);
void func_014_5897(void);
void jr_014_58C7(void);
void jr_014_58D1(void);
void jr_014_58ED(void);
void func_014_5900(void);
void jr_014_5920(void);
void Dialog000(void);
void Dialog001(void);
void Dialog002(void);
void Dialog003(void);
void Dialog004(void);
void Dialog005(void);
void Dialog006(void);
void Dialog007(void);
void Dialog008(void);
void Dialog009(void);
void Dialog00A(void);
void Dialog00B(void);
void Dialog00C(void);
void Dialog00D(void);
void Dialog00E(void);
void Dialog00F(void);
void Dialog010(void);
void Dialog011(void);
void Dialog012(void);
void Dialog013(void);
void Dialog014(void);
void Dialog015(void);
void Dialog016(void);
void Dialog017(void);
void Dialog018(void);
void Dialog019(void);
void Dialog01A(void);
void Dialog01B(void);
void Dialog01C(void);
void Dialog01D(void);
void Dialog01E(void);
void Dialog01F(void);
void Dialog020(void);
void Dialog021(void);
void Dialog022(void);
void Dialog023(void);
void Dialog024(void);
void Dialog025(void);
void Dialog026(void);
void Dialog027(void);
void Dialog028(void);
void Dialog029(void);
void Dialog02A(void);
void Dialog02B(void);
void Dialog02C(void);
void Dialog02D(void);
void Dialog02E(void);
void Dialog02F(void);
void Dialog030(void);
void Dialog031(void);
void Dialog032(void);
void Dialog033(void);
void Dialog034(void);
void Dialog035(void);
void Dialog036(void);
void Dialog037(void);
void Dialog038(void);
void Dialog039(void);
void Dialog03A(void);
void Dialog03B(void);
void Dialog03C(void);
void Dialog03D(void);
void Dialog03E(void);
void Dialog03F(void);
void Dialog040(void);
void Dialog041(void);
void Dialog042(void);
void Dialog043(void);
void Dialog044(void);
void Dialog045(void);
void Dialog046(void);
void Dialog047(void);
void Dialog048(void);
void Dialog049(void);
void Dialog04A(void);
void Dialog04B(void);
void Dialog04C(void);
void Dialog04D(void);
void Dialog04E(void);
void Dialog04F(void);
void Dialog050(void);
void Dialog051(void);
void Dialog052(void);
void Dialog053(void);
void Dialog054(void);
void Dialog055(void);
void Dialog056(void);
void Dialog057(void);
void Dialog058(void);
void Dialog059(void);
void Dialog05A(void);
void Dialog05B(void);
void Dialog05C(void);
void Dialog05D(void);
void Dialog05E(void);
void Dialog05F(void);
void Dialog060(void);
void Dialog061(void);
void Dialog062(void);
void Dialog063(void);
void Dialog064(void);
void Dialog065(void);
void Dialog066(void);
void Dialog067(void);
void Dialog068(void);
void Dialog069(void);
void Dialog06A(void);
void Dialog06B(void);
void Dialog06C(void);
void Dialog06D(void);
void Dialog06E(void);
void Dialog06F(void);
void Dialog070(void);
void Dialog071(void);
void Dialog072(void);
void Dialog073(void);
void Dialog074(void);
void Dialog075(void);
void Dialog076(void);
void Dialog077(void);
void Dialog078(void);
void Dialog079(void);
void Dialog07A(void);
void Dialog07B(void);
void Dialog07C(void);
void Dialog07D(void);
void Dialog07E(void);
void Dialog07F(void);
void Dialog080(void);
void Dialog081(void);
void Dialog082(void);
void Dialog083(void);
void Dialog084(void);
void Dialog085(void);
void Dialog086(void);
void Dialog087(void);
void Dialog088(void);
void Dialog089(void);
void Dialog08A(void);
void Dialog08B(void);
void Dialog08C(void);
void Dialog08D(void);
void Dialog08E(void);
void Dialog08F(void);
void Dialog090(void);
void Dialog091(void);
void Dialog092(void);
void Dialog093(void);
void Dialog094(void);
void Dialog095(void);
void Dialog096(void);
void Dialog097(void);
void Dialog098(void);
void Dialog099(void);
void Dialog09A(void);
void Dialog09B(void);
void Dialog09C(void);
void Dialog09D(void);
void Dialog09E(void);
void Dialog09F(void);
void Dialog0A0(void);
void Dialog0A1(void);
void Dialog0A2(void);
void Dialog0A3(void);

void DungeonEventsTable(void) {
    /* data: db $00, $00, $21, $A1, $22, $00, $21, $00, $00, $00, $61, $00, $00, $61, $00, $00 */;
    /* data: db $00, $C1, $21, $63, $61, $21, $81, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $61, $00, $00, $00, $00, $A1, $00, $66, $C1, $00, $21, $21, $00, $00, $21, $A7 */;
    /* data: db $21, $25, $81, $00, $81, $00, $00, $61, $00, $63, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $81, $00, $21, $61, $C1, $00, $00, $81, $21, $00, $00, $00, $81, $61, $21 */;
    /* data: db $00, $61, $2B, $00, $81, $81, $00, $00, $81, $21, $21, $81, $21, $00, $00, $00 */;
    /* data: db $21, $00, $21, $29, $C1, $00, $2A, $A9, $00, $81, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $23, $00, $00, $00, $21, $21, $00, $00, $21, $00, $00, $00, $00 */;
    /* data: db $21, $87, $21, $21, $21, $21, $00, $21, $00, $00, $21, $00, $00, $00, $00, $00 */;
    /* data: db $00, $23, $21, $C1, $2B, $21, $00, $00, $2B, $2C, $21, $61, $21, $00, $21, $21 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $2C, $2C, $2B, $00, $81, $21, $0D, $00, $2B, $00, $2C, $2B, $21, $2B, $00, $21 */;
    /* data: db $61, $23, $A1, $81, $45, $C1, $00, $21, $2B, $2B, $21, $21, $00, $00, $00, $00 */;
    /* data: db $2B, $21, $21, $21, $00, $00, $21, $21, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $48, $00, $00, $00, $00, $00 */;
    /* data: db $81, $61, $6C, $21, $00, $00, $00, $00, $00, $00, $00, $81, $61, $00, $00, $00 */;
    /* data: db $61, $00, $00, $00, $67, $00, $00, $00, $C1, $00, $00, $00, $21, $00, $2A, $00 */;
    /* data: db $21, $00, $6E, $00, $21, $00, $00, $00, $21, $2B, $21, $00, $00, $61, $81, $C1 */;
    /* data: db $00, $8F, $21, $21, $00, $21, $65, $00, $00, $00, $00, $00, $81, $6E, $21, $00 */;
    /* data: db $00, $00, $6E, $23, $21, $00, $21, $21, $23, $00, $8E, $21, $00, $00, $A1, $21 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $21 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $21, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $81, $00, $00, $00, $2B, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $21, $21, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $21, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void ColorDungeonEventsTable(void) {
    /* data: db $21, $24, $00, $21, $00, $00, $61, $81, $90, $21, $30, $23, $21, $00, $21, $10 */;
    /* data: db $00, $61, $10, $00, $2B, $21, $00, $00, $00, $00, $10, $00, $00, $00, $00, $00 */;
}

void MapLayout0(void) {
    /* data: db 0,   0,   0,   0,   0, $18, $19,   0 */;
    /* data: db 0,   0,   0,   0,   0, $1A, $1B,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0, $02,   0 */;
    /* data: db 0, $03, $04, $05,   0,   0, $06,   0 */;
    /* data: db $1D,   0, $07, $08, $09, $0A, $0B,   0 */;
    /* data: db $1C, $0C, $0D, $0E, $0F, $10, $11,   0 */;
    /* data: db $01,   0, $12, $13, $14,   0,   0,   0 */;
    /* data: db 0, $15, $16, $17,   0,   0,   0,   0 */;
}

void MapLayout1(void) {
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0, $20, $21, $22, $23, $24, $25,   0 */;
    /* data: db 0,   0, $26,   0,   0, $27,   0,   0 */;
    /* data: db 0, $28, $29, $3A, $3B, $2A, $2B,   0 */;
    /* data: db 0, $2C,   0, $3C, $3D,   0, $2D,   0 */;
    /* data: db 0, $2E,   0, $3E, $3F,   0, $2F,   0 */;
    /* data: db 0, $30, $31, $32, $33, $34, $35,   0 */;
    /* data: db 0,   0, $36, $37, $38, $39,   0,   0 */;
}

void MapLayout2(void) {
    /* data: db $40, $41, $42, $43,   0, $AA, $AB,   0 */;
    /* data: db $44, $45, $46, $47,   0,   0,   0,   0 */;
    /* data: db $48, $49, $4A, $4B,   0,   0, $54,   0 */;
    /* data: db 0, $4C, $4D,   0,   0, $55, $56, $57 */;
    /* data: db 0, $4E,   0,   0,   0,   0, $58,   0 */;
    /* data: db 0, $4F, $50,   0,   0,   0, $59,   0 */;
    /* data: db 0, $51,   0,   0,   0,   0, $5A,   0 */;
    /* data: db 0, $52, $53,   0,   0,   0, $5B, $5C */;
}

void MapLayout3(void) {
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0, $60, $61,   0,   0,   0 */;
    /* data: db 0, $62,   0, $63, $64,   0, $65,   0 */;
    /* data: db $EF, $66, $67, $68, $69, $6A, $6B,   0 */;
    /* data: db $FF, $6C, $6D, $6E, $6F, $70, $71,   0 */;
    /* data: db $7C, $7D, $72, $73, $74, $75,   0,   0 */;
    /* data: db $1E, $1F, $76, $77, $78, $79,   0,   0 */;
    /* data: db $5E, $5F,   0, $7A, $7B,   0,   0,   0 */;
}

void MapLayout4(void) {
    /* data: db 0, $80, $81, $82, $83, $84,   0,   0 */;
    /* data: db 0,   0,   0, $85, $86, $87, $88,   0 */;
    /* data: db 0, $89, $8A, $8B, $8C, $8D, $8E, $8F */;
    /* data: db 0,   0,   0,   0,   0, $90, $91, $92 */;
    /* data: db $A2, $A3,   0, $93, $94, $95, $96,   0 */;
    /* data: db $A4, $A5, $97, $98, $99, $9A,   0,   0 */;
    /* data: db $A6, $A7,   0, $9B, $9C, $9D,   0,   0 */;
    /* data: db $A8, $A9,   0,   0, $9E, $9F, $A0, $A1 */;
}

void MapLayout5(void) {
    /* data: db $D8, $D9, $DA, $DB, $DC, $DD,   0,   0 */;
    /* data: db $B0,   0,   0,   0,   0,   0,   0, $B1 */;
    /* data: db $B2, $B3,   0, $B4, $B5,   0, $B6, $B7 */;
    /* data: db $B8, $B9, $BA, $BB, $BC, $BD, $BE, $BF */;
    /* data: db $C0, $C1, $C2, $C3, $C4, $C5, $C6, $C7 */;
    /* data: db 0, $C8, $C9, $CA, $CB, $CC, $CD,   0 */;
    /* data: db 0, $CE, $CF,   0,   0, $D0, $D1,   0 */;
    /* data: db 0, $D2, $D3, $D4, $D5, $D6, $D7,   0 */;
}

void MapLayout6(void) {
    /* data: db 0, $11, $12,   0,   0,   0,   0, $E8 */;
    /* data: db $13, $14, $15, $16,   0, $2B, $2C, $F8 */;
    /* data: db $17, $18, $19, $1A,   0, $2D, $2E,   0 */;
    /* data: db $1B, $1C, $1D, $1E,   0,   0,   0,   0 */;
    /* data: db $01, $02, $03, $04,   0, $1F, $20,   0 */;
    /* data: db $05, $06, $07, $08, $21, $22, $23, $24 */;
    /* data: db $09, $0A, $0B, $0C, $25, $26, $27, $28 */;
    /* data: db $0D, $0E, $0F, $10,   0, $29, $2A,   0 */;
}

void MapLayout7(void) {
    /* data: db $60, $61,   0, $30, $31,   0, $62, $63 */;
    /* data: db $32, $64, $65, $34, $35, $66, $67, $37 */;
    /* data: db $38, $39, $3A, $3B, $3C, $3D, $3E, $3F */;
    /* data: db 0, $40, $41, $42, $43, $44, $45,   0 */;
    /* data: db 0, $46, $47, $48, $49, $4A, $4B,   0 */;
    /* data: db $4C, $4D, $4E, $4F, $50, $51, $52, $53 */;
    /* data: db $54, $55, $56, $57, $58, $59, $5A, $5B */;
    /* data: db $5C, $68, $69, $5D, $5E, $6A, $6B, $5F */;
}

void MapLayout8(void) {
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0, $74,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0, $73,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0, $71,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0, $72,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0, $76,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0, $75,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0, $70,   0,   0,   0,   0 */;
}

void MapLayout9(void) {
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
}

void MapLayout10(void) {
    /* data: db $B6, $B7, $B8, $B9, $85, $86, $FD, $F3 */;
    /* data: db $ED, $EE, $EA, $EB, $EC, $87, $F1, $F2 */;
    /* data: db $FE, $EF, $BA, $BB, $BC, $8D, $F9, $FA */;
    /* data: db $80, $81, $82, $83, $84, $8C, $88, $8A */;
    /* data: db $90, $91, $92,   0, $8E, $9A, $89, $8B */;
    /* data: db $97, $93, $94, $95, $96,   0, $AB, $AC */;
    /* data: db $98, $7A, $7B,   0, $E6, $E7,   0, $BD */;
    /* data: db 0, $7C, $7D, $7E, $F6, $F7, $DE, $DF */;
}

void MapLayout11(void) {
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0,   0,   0,   0,   0,   0,   0,   0 */;
    /* data: db 0, $00, $01,   0,   0, $02, $03,   0 */;
    /* data: db 0, $04, $05, $06, $07, $08, $09,   0 */;
    /* data: db 0,   0, $0A, $0B, $0C, $0D,   0,   0 */;
    /* data: db 0,   0, $0E, $0F, $10, $11,   0,   0 */;
    /* data: db 0,   0, $12, $13, $14, $15,   0,   0 */;
}

void MapLayout12(void) {
    /* data: db 0, $11, $12,   0,   0,   0,   0, $E8 */;
    /* data: db $13, $14, $15, $16,   0,   0,   0, $F8 */;
    /* data: db $17, $18, $19, $1A,   0,   0,   0,   0 */;
    /* data: db $1B, $1C, $1D, $1E,   0,   0,   0,   0 */;
    /* data: db $01, $02, $03, $04,   0, $1F, $20,   0 */;
    /* data: db $05, $06, $07, $08, $21, $2B, $2C, $24 */;
    /* data: db $09, $0A, $0B, $0C, $25, $2D, $2E, $28 */;
    /* data: db $0D, $0E, $0F, $10,   0, $29, $2A,   0 */;
}

void RoomChestsTable(void) {
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db CHEST_RUPEES_100 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SEASHELL */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_TAIL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_20 */;
    /* data: db CHEST_RUPEES_20 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SEASHELL */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SEASHELL */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_NIGHTMARE_KEY */;
    /* data: db 0 */;
    /* data: db CHEST_STONE_BEAK */;
    /* data: db 0 */;
    /* data: db CHEST_SEASHELL */;
    /* data: db CHEST_RUPEES_20 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db CHEST_MAP */;
    /* data: db CHEST_COMPASS */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_FEATHER */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_POWER_BRACELET */;
    /* data: db CHEST_RUPEES_20 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_MAP */;
    /* data: db CHEST_NIGHTMARE_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_STONE_BEAK */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db CHEST_COMPASS */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_COMPASS */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db CHEST_PEGASUS_BOOTS */;
    /* data: db CHEST_NIGHTMARE_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_STONE_BEAK */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_200 */;
    /* data: db CHEST_ZOL */;
    /* data: db CHEST_MAP */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_FLIPPERS */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db CHEST_MAP */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_ZOL */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db CHEST_NIGHTMARE_KEY */;
    /* data: db 0 */;
    /* data: db CHEST_COMPASS */;
    /* data: db CHEST_STONE_BEAK */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_MAP */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_NIGHTMARE_KEY */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_MESSAGE */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_STONE_BEAK */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_COMPASS */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_200 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_100 */;
    /* data: db CHEST_RUPEES_200 */;
    /* data: db 0 */;
    /* data: db CHEST_COMPASS */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_NIGHTMARE_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_STONE_BEAK */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db CHEST_MAP */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_100 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_POWER_BRACELET */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db CHEST_MEDICINE */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_200 */;
    /* data: db CHEST_SEASHELL */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SEASHELL */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_STONE_BEAK */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_COMPASS */;
    /* data: db CHEST_MAP */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SHIELD */;
    /* data: db 0 */;
    /* data: db CHEST_BOMB */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_MEDICINE */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_NIGHTMARE_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_NIGHTMARE_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_MEDICINE */;
    /* data: db 0 */;
    /* data: db CHEST_MAGIC_ROD */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_20 */;
    /* data: db 0 */;
    /* data: db CHEST_MAP */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_ZOL */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_COMPASS */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_STONE_BEAK */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_ZOL */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_BOW */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_20 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_20 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db CHEST_OCARINA */;
    /* data: db CHEST_RUPEES_100 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SEASHELL */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_20 */;
    /* data: db 0 */;
    /* data: db CHEST_RUPEES_50 */;
    /* data: db 0 */;
    /* data: db CHEST_SHOVEL */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SEASHELL */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
}

void ColorDungeonRoomChestsTable(void) {
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_NIGHTMARE_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_MAP */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_COMPASS */;
    /* data: db 0 */;
    /* data: db CHEST_STONE_BEAK */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db CHEST_SMALL_KEY */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
    /* data: db 0 */;
}

void LoadRoomTemplate(void) {
    switch(gb.regs.a) {
        case 0x00: RoomTemplateTopRightBottomLeftHandler(); return;
        case 0x01: RoomTemplateRightBottomLeftHandler(); return;
        case 0x02: RoomTemplateTopLeftBottomHandler(); return;
        case 0x03: RoomTemplateLeftTopRightHandler(); return;
        case 0x04: RoomTemplateTopRightBottomHandler(); return;
        case 0x05: RoomTemplateBottomLeftHandler(); return;
        case 0x06: RoomTemplateBottomRightHandler(); return;
        case 0x07: RoomTemplateTopRightHandler(); return;
        case 0x08: RoomTemplateTopLeftHandler(); return;
        case 0x09: RoomTemplatNotImplementedHandler(); return;
        case 0x0A: RoomTemplatNotImplementedHandler(); return;
        case 0x0B: RoomTemplatNotImplementedHandler(); return;
        case 0x0C: RoomTemplatNotImplementedHandler(); return;
        case 0x0D: RoomTemplatNotImplementedHandler(); return;
        case 0x0E: RoomTemplatNotImplementedHandler(); return;
        case 0x0F: RoomTemplatNotImplementedHandler(); return;
    }
}

void RoomTemplateTopRightBottomLeftHandler(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xD7C6;
    gb.regs.bc = 0x48F9;
    gb.regs.de = 0x491A;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void RoomTemplateRightBottomLeftHandler(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xD7C6;
    gb.regs.bc = 0x493A;
    gb.regs.de = 0x4953;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void RoomTemplateTopLeftBottomHandler(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xD7C6;
    gb.regs.bc = 0x496B;
    gb.regs.de = 0x4986;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void RoomTemplateLeftTopRightHandler(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xD7C6;
    gb.regs.bc = 0x49A0;
    gb.regs.de = 0x49B9;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void RoomTemplateTopRightBottomHandler(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xD7C6;
    gb.regs.bc = 0x49D1;
    gb.regs.de = 0x49EC;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void RoomTemplateBottomLeftHandler(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xD7C6;
    gb.regs.bc = 0x4A06;
    gb.regs.de = 0x4A18;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void RoomTemplateBottomRightHandler(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xD7C6;
    gb.regs.bc = 0x4A29;
    gb.regs.de = 0x4A3B;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void RoomTemplateTopRightHandler(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xD7C6;
    gb.regs.bc = 0x4A4C;
    gb.regs.de = 0x4A5E;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void RoomTemplateTopLeftHandler(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xD7C6;
    gb.regs.bc = 0x4A6F;
    gb.regs.de = 0x4A81;
    CopyIndoorsMacroObjectsToRoom(); return;
}

void RoomTemplatNotImplementedHandler(void) {
    return;
}

void RoomTemplateTopRightBottomLeftOffsets(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $06, $07, $08, $09, $10, $19, $20, $29, $30, $39 */;
    /* data: db $40, $49, $50, $59, $60, $69, $70, $71, $72, $73, $74, $75, $76, $77, $78, $79 */;
    /* data: db $FF */;
}

void RoomTemplateTopRightBottomLeftIds(void) {
    /* data: db $25, $21, $21, $21, $21, $21, $21, $21, $21, $26, $23, $24, $23, $24, $23, $24 */;
    /* data: db $23, $24, $23, $24, $23, $24, $27, $22, $22, $22, $22, $22, $22, $22, $22, $28 */;
}

void RoomTemplateRightBottomLeftOffsets(void) {
    /* data: db $00, $09, $10, $19, $20, $29, $30, $39, $40, $49, $50, $59, $60, $69, $70, $71 */;
    /* data: db $72, $73, $74, $75, $76, $77, $78, $79, $FF */;
}

void RoomTemplateRightBottomLeftIds(void) {
    /* data: db $23, $24, $23, $24, $23, $24, $23, $24, $23, $24, $23, $24, $23, $24, $27, $22 */;
    /* data: db $22, $22, $22, $22, $22, $22, $22, $28 */;
}

void RoomTemplateTopLeftBottomOffsets(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $06, $07, $08, $09, $10, $20, $30, $40, $50, $60 */;
    /* data: db $70, $71, $72, $73, $74, $75, $76, $77, $78, $79, $FF */;
}

void RoomTemplateTopLeftBottomIds(void) {
    /* data: db $25, $21, $21, $21, $21, $21, $21, $21, $21, $21, $23, $23, $23, $23, $23, $23 */;
    /* data: db $27, $22, $22, $22, $22, $22, $22, $22, $22, $22 */;
}

void RoomTemplateLeftTopRightOffsets(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $06, $07, $08, $09, $10, $19, $20, $29, $30, $39 */;
    /* data: db $40, $49, $50, $59, $60, $69, $70, $79, $FF */;
}

void RoomTemplateLeftTopRightIds(void) {
    /* data: db $25, $21, $21, $21, $21, $21, $21, $21, $21, $26, $23, $24, $23, $24, $23, $24 */;
    /* data: db $23, $24, $23, $24, $23, $24, $23, $24 */;
}

void RoomTemplateTopRightBottomOffsets(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $06, $07, $08, $09, $19, $29, $39, $49, $59, $69 */;
    /* data: db $70, $71, $72, $73, $74, $75, $76, $77, $78, $79, $FF */;
}

void RoomTemplateTopRightBottomIds(void) {
    /* data: db $21, $21, $21, $21, $21, $21, $21, $21, $21, $26, $24, $24, $24, $24, $24, $24 */;
    /* data: db $22, $22, $22, $22, $22, $22, $22, $22, $22, $28 */;
}

void RoomTemplateBottomLeftOffsets(void) {
    /* data: db $00, $10, $20, $30, $40, $50, $60, $70, $71, $72, $73, $74, $75, $76, $77, $78 */;
    /* data: db $79, $FF */;
}

void RoomTemplateBottomLeftIds(void) {
    /* data: db $23, $23, $23, $23, $23, $23, $23, $27, $22, $22, $22, $22, $22, $22, $22, $22 */;
    /* data: db $22 */;
}

void RoomTemplateBottomRightOffsets(void) {
    /* data: db $09, $19, $29, $39, $49, $59, $69, $70, $71, $72, $73, $74, $75, $76, $77, $78 */;
    /* data: db $79, $FF */;
}

void RoomTemplateBottomRightIds(void) {
    /* data: db $24, $24, $24, $24, $24, $24, $24, $22, $22, $22, $22, $22, $22, $22, $22, $22 */;
    /* data: db $28 */;
}

void RoomTemplateTopRightOffsets(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $06, $07, $08, $09, $19, $29, $39, $49, $59, $69 */;
    /* data: db $79, $FF */;
}

void RoomTemplateTopRightIds(void) {
    /* data: db $21, $21, $21, $21, $21, $21, $21, $21, $21, $26, $24, $24, $24, $24, $24, $24 */;
    /* data: db $24 */;
}

void RoomTemplateTopLeftOffsets(void) {
    /* data: db $00, $01, $02, $03, $04, $05, $06, $07, $08, $09, $10, $20, $30, $40, $50, $60 */;
    /* data: db $70, $FF */;
}

void RoomTemplateTopLeftIds(void) {
    /* data: db $25, $21, $21, $21, $21, $21, $21, $21, $21, $21, $23, $23, $23, $23, $23, $23 */;
    /* data: db $23 */;
}

void HeartsToHealthTable(void) {
    /* data: db $18 */;
    /* data: db $20 */;
    /* data: db $28 */;
    /* data: db $30 */;
    /* data: db $38 */;
    /* data: db $40 */;
    /* data: db $48 */;
    /* data: db $50 */;
    /* data: db $58 */;
    /* data: db $60 */;
    /* data: db $68 */;
    /* data: db $70 */;
}

void PerformOverworldAudioTasks(void) {
    gb.regs.a = gb_read(0xD462);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PerformOverworldAudioTasks_compassSfxEnd;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xD462, gb.regs.a);
    if (!GET_FLAG_Z()) goto PerformOverworldAudioTasks_compassSfxEnd;
    gb.regs.a = 0x1B;
    gb_write(0xFFF3, gb.regs.a);
  PerformOverworldAudioTasks_compassSfxEnd:;
    gb.regs.a = gb_read(0xC502);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto PerformOverworldAudioTasks_C502End;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC502, gb.regs.a);
  PerformOverworldAudioTasks_C502End:;
    gb.regs.a = gb_read(0xC5AF);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_014_4AE7(); return; };
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC5AF, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_014_4AE7(); return; };
    gb.regs.a = gb_read(0xFFBF);
  PerformOverworldAudioTasks_jr_4AE4:;
    gb_write(0xD368, gb.regs.a);
}

void jr_014_4AE7(void) {
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_014_4AE7_wavesSfxEnd;
    gb.regs.a = gb_read(0xFFF6);
    gb_write(0xDBFC, gb.regs.a);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0xF0);
    if (GET_FLAG_C()) goto jr_014_4AE7_wavesSfxEnd;
    alu_cp8(gb.regs.a, 0xF6);
    if (!GET_FLAG_C()) goto jr_014_4AE7_wavesSfxEnd;
    gb.regs.a = gb_read(0xC114);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0xA0);
    if (!GET_FLAG_Z()) goto jr_014_4AE7_updateCounter;
    gb.regs.a = 0x0F;
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  jr_014_4AE7_updateCounter:;
    gb_write(0xC114, gb.regs.a);
  jr_014_4AE7_wavesSfxEnd:;
    gb.regs.a = gb_read(0xDC03);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4A8F;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xDC02);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = 0;
    if (!GET_FLAG_Z()) goto jr_014_4AE7_updateFullHearts;
    gb.regs.a = alu_inc8(gb.regs.a);
  jr_014_4AE7_updateFullHearts:;
    gb_write(0xC5A9, gb.regs.a);
    gb.regs.a = gb_read(0xC5AC);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_Z()) goto jr_014_4AE7_jr_4B2A;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
  jr_014_4AE7_jr_4B2A:;
    gb_write(0xC5AC, gb.regs.a);
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 0x3F);
    if (!GET_FLAG_Z()) goto jr_014_4AE7_jr_4B3E;
    gb.regs.a = gb_read(0xDBF3);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto jr_014_4AE7_jr_4B3E;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xDBF3, gb.regs.a);
  jr_014_4AE7_jr_4B3E:;
    gb.regs.a = gb_read(0xD464);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_014_4AE7_jr_4B4D;
    func_014_4BEF();
    jr_014_4B5A(); return;
  jr_014_4AE7_jr_4B4D:;
    gb.regs.a = 0xE4;
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(0xDC40, gb.regs.a);
}

void jr_014_4B5A(void) {
    gb.regs.hl = 0xD464;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC155;
    gb_write(gb.regs.hl, gb.regs.b);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { ret_014_4B8E(); return; };
    alu_rla();
    /* nop */;
    /* nop */;
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 4);
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(0xC155, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_014_4B5A_jr_4B7D;
    func_014_4BA7();
    jr_014_4B8A(); return;
  jr_014_4B5A_jr_4B7D:;
    gb.regs.a = 0xCC;
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xDC40, gb.regs.a);
}

void jr_014_4B8A(void) {
    gb.regs.a = 2;
    gb_write(0xFFA1, gb.regs.a);
}

void ret_014_4B8E(void) {
    return;
}

void Data_014_4B8F(void) {
    /* data: db $FF, $7F, $82, $18, $FF, $3F, $00, $00 */;
}

void Data_014_4B97(void) {
    /* data: db $E0, $7F, $00, $00, $FF, $3F, $FF, $7F */;
}

void Data_014_4B9F(void) {
    /* data: db $E0, $7F, $FF, $7F, $FF, $3F, $00, $00 */;
}

void func_014_4BA7(void) {
    gb.regs.a = gb_read(0xD464);
    alu_cp8(gb.regs.a, 0x3E);
    if (GET_FLAG_C()) return;
    if (GET_FLAG_Z()) goto func_014_4BA7_jr_4BBE;
    gb.regs.de = 0x4B8F;
    gb.regs.hl = 0xDCB8;
    gb.regs.b = 0x40;
    func_014_4BDA();
    gb.regs.a = 1;
    jr_014_4BD6(); return;
  func_014_4BA7_jr_4BBE:;
    gb.regs.de = 0x4B97;
    gb.regs.hl = 0xDCF8;
    gb.regs.b = 0x20;
    func_014_4BDA();
    gb.regs.de = 0x4B9F;
    gb.regs.hl = 0xDD18;
    gb.regs.b = 0x20;
    func_014_4BDA();
    gb.regs.a = 2;
}

void jr_014_4BD6(void) {
    gb_write(0xDE79, gb.regs.a);
    return;
}

void func_014_4BDA(void) {
    loop_start: ;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.b = alu_dec8(gb.regs.b);
    gb.regs.a = gb.regs.b;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) { goto loop_start; };
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb.regs.d;
    gb.regs.a = alu_sbc8(gb.regs.a, 0);
    gb.regs.d = gb.regs.a;
    goto loop_start;
}

void func_014_4BEF(void) {
    gb.regs.a = gb_read(0xD464);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) return;
    alu_cp8(gb.regs.a, 0x1E);
    if (GET_FLAG_C()) return;
    if (GET_FLAG_Z()) goto func_014_4BEF_jr_4C04;
    gb.regs.hl = 0xDCB8;
    func_014_4C10();
    gb.regs.a = 1;
    jr_014_4BD6(); return;
  func_014_4BEF_jr_4C04:;
    gb.regs.hl = 0xDCF8;
    func_014_4C10();
    gb.regs.a = 2;
    gb_write(0xDE79, gb.regs.a);
    return;
}

void func_014_4C10(void) {
    gb.regs.b = 0x40;
  func_014_4C10_loop_4C12:;
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.c = gb_read(gb.regs.hl);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.c);
    gb.regs.hl++;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto func_014_4C10_loop_4C12;
    return;
}

void Data_014_4C20(void) {
    /* data: db $E4, $E4, $E4, $E4, $F9, $F9, $F9, $F9, $FE, $FE, $FE, $FE, $FF, $FF, $FF, $FF */;
    /* data: db $E4, $E4, $E4, $E4, $94, $94, $94, $94, $40, $40, $40, $40, $00, $00, $00, $00 */;
}

void PaletteEffectDisabledTable(void) {
  PaletteEffectDisabledTable_LINK_MOTION_DEFAULT:;
    /* data: db 0 */;
  PaletteEffectDisabledTable_LINK_MOTION_SWIMMING:;
    /* data: db 0 */;
  PaletteEffectDisabledTable_LINK_MOTION_UNSTUCKING:;
    /* data: db 0 */;
  PaletteEffectDisabledTable_LINK_MOTION_MAP_FADE_OUT:;
    /* data: db 1 */;
  PaletteEffectDisabledTable_LINK_MOTION_MAP_FADE_IN:;
    /* data: db 1 */;
  PaletteEffectDisabledTable_LINK_MOTION_REVOLVING_DOOR:;
    /* data: db 0 */;
  PaletteEffectDisabledTable_LINK_MOTION_FALLING_DOWN:;
    /* data: db 0 */;
  PaletteEffectDisabledTable_LINK_MOTION_PASS_OUT:;
    /* data: db 0 */;
  PaletteEffectDisabledTable_LINK_MOTION_RECOVER:;
    /* data: db 0 */;
  PaletteEffectDisabledTable_LINK_MOTION_TELEPORT:;
    /* data: db 0 */;
  PaletteEffectDisabledTable_LINK_MOTION_UNKNOWN_0A:;
    /* data: db 0 */;
}

void UpdatePaletteEffectForInteractiveObjects(void) {
    gb.regs.a = gb_read(0xDC3E);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC3CB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdatePaletteEffectForInteractiveObjects_return;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xC11C);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4BFE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto UpdatePaletteEffectForInteractiveObjects_return;
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0);
    if (GET_FLAG_Z()) goto UpdatePaletteEffectForInteractiveObjects_jr_014_4C82;
    gb.regs.hl = 0xC17F;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto UpdatePaletteEffectForInteractiveObjects_jr_014_4C82;
    gb.regs.a = gb_read(0xC3CD);
    gb_write(0xFFD7, gb.regs.a);
  UpdatePaletteEffectForInteractiveObjects_jr_014_4C82:;
    gb.regs.a = gb_read(0xC3CC);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4C20;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xC5AD, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { jr_014_4CB2(); return; };
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto UpdatePaletteEffectForInteractiveObjects_return;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC3CC;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto UpdatePaletteEffectForInteractiveObjects_return;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto UpdatePaletteEffectForInteractiveObjects_jr_014_4CB0;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
  UpdatePaletteEffectForInteractiveObjects_jr_014_4CB0:;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  UpdatePaletteEffectForInteractiveObjects_return:;
    return;
}

void jr_014_4CB2(void) {
    gb.regs.hl = 0xC17F;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC3CC;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_014_4CB2_jr_4CC7;
    gb.regs.a = gb_read(0xDE7E);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
  jr_014_4CB2_jr_4CC7:;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC125);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto jr_014_4CB2_jr_4CDF;
    gb.regs.a = gb_read(0xC3CD);
    gb_write(0xC3CC, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC125, gb.regs.a);
    return;
  jr_014_4CB2_jr_4CDF:;
    gb.regs.a = gb_read(0xDE7F);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xDE7F, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_014_4CB2_jr_4CEB;
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) return;
  jr_014_4CB2_jr_4CEB:;
    gb.regs.a = gb_read(0xDE7E);
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) { jr_014_4D0B(); return; };
    gb.regs.a = gb_read(0xDE7F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_014_4D22(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 6);
    if (GET_FLAG_Z()) goto jr_014_4CB2_jr_4D01;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
    jr_014_4D22(); return;
  jr_014_4CB2_jr_4D01:;
    gb.regs.a = gb_read(0xC3CC);
    gb.regs.a = alu_sub8(gb.regs.a, 4);
    gb_write(0xC3CC, gb.regs.a);
    jr_014_4D22(); return;
}

void jr_014_4D0B(void) {
    gb.regs.a = gb_read(0xDE7F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_014_4D22(); return; };
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto jr_014_4D0B_jr_4D1A;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    jr_014_4D22(); return;
  jr_014_4D0B_jr_4D1A:;
    gb.regs.a = gb_read(0xC3CC);
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb_write(0xC3CC, gb.regs.a);
}

void jr_014_4D22(void) {
    gb.regs.a = gb_read(0xC3CD);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto jr_014_4D22_jr_4D32;
    gb.regs.a = gb_read(0xDE7F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto jr_014_4D22_jr_4D32;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xDE7E, gb.regs.a);
  jr_014_4D22_jr_4D32:;
    gb.regs.a = gb_read(0xDE7F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_014_4D22_jr_4D4A;
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 33;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x53;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x55;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl, gb.regs.a);
    Farcall();
  jr_014_4D22_jr_4D4A:;
    gb.regs.a = gb_read(0xDE7F);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    gb.regs.a = alu_swap(gb.regs.a);
    gb_write(0xDE7B, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xDE7C, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(0xDE79, gb.regs.a);
    gb.regs.a = gb_read(0xDE7F);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto jr_014_4D22_jr_4D6D;
    gb.regs.a = 0x0A;
    jr_014_4D6F(); return;
  jr_014_4D22_jr_4D6D:;
    gb.regs.a = 0x0B;
}

void jr_014_4D6F(void) {
    gb_write(0xDE7F, gb.regs.a);
    return;
}

void UpdateEntityTimers(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFBE, gb.regs.a);
    gb_write(0xFFF5, gb.regs.a);
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto UpdateEntityTimers_done;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto UpdateEntityTimers_jr_014_4D97;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto UpdateEntityTimers_done;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto UpdateEntityTimers_jr_014_4D97;
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x83);
    if (!GET_FLAG_Z()) goto UpdateEntityTimers_done;
  UpdateEntityTimers_jr_014_4D97:;
    gb.regs.a = gb_read(0xC124);
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC19F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC166;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto UpdateEntityTimers_done;
    gb.regs.hl = 0xC2E0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateEntityTimers_transitionCountdownEnd;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  UpdateEntityTimers_transitionCountdownEnd:;
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateEntityTimers_privateCountdown1End;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  UpdateEntityTimers_privateCountdown1End:;
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateEntityTimers_privateCountdown2End;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  UpdateEntityTimers_privateCountdown2End:;
    gb.regs.hl = 0xC480;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateEntityTimers_unknownCountdownEnd;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  UpdateEntityTimers_unknownCountdownEnd:;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto UpdateEntityTimers_slowTransitionCountdownEnd;
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateEntityTimers_slowTransitionCountdownEnd;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  UpdateEntityTimers_slowTransitionCountdownEnd:;
    gb.regs.hl = 0xC420;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto UpdateEntityTimers_flashCountdownEnd;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  UpdateEntityTimers_flashCountdownEnd:;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(0xFFED, gb.regs.a);
    return;
  UpdateEntityTimers_done:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFED, gb.regs.a);
    return;
}

void Data_014_4DF1(void) {
    /* data: db $01, $00, $17, $50, $7C, $01, $01, $36, $50, $7C, $01, $02, $52, $50, $7C, $01 */;
    /* data: db $03, $7A, $50, $7C, $01, $04, $A1, $50, $7C, $01, $05, $D4, $50, $7C, $01, $06 */;
    /* data: db $0E, $50, $7C, $01, $07, $5D, $50, $7C, $01, $08, $70, $50, $7C, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void Data_014_4E3C(void) {
    /* data: db $01, $FF, $12, $50, $5C */;
}

void Data_014_4E41(void) {
    /* data: db $3B, $3A, $39, $3B, $3F, $3B, $39, $3B, $3B, $00, $00, $00, $00, $00, $00, $00 */;
}

void TeleportToManboPond(void) {
    gb.regs.a = 1;
    gb_write(0xD474, gb.regs.a);
    gb.regs.a = 3;
    gb_write(0xC11C, gb.regs.a);
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_014_4E88(); return; };
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto TeleportToManboPond_jr_4E6B;
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    jr_014_4E6F(); return;
  TeleportToManboPond_jr_4E6B:;
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_C()) { jr_014_4E88(); return; };
}

void jr_014_4E6F(void) {
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x4DF1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.e = 5;
    gb.regs.bc = 0xD401;
  jr_014_4E6F_loop:;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_write(gb.regs.bc, gb.regs.a);
    gb.regs.bc++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto jr_014_4E6F_loop;
    return;
}

void jr_014_4E88(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD401, gb.regs.a);
    gb_write(0xD402, gb.regs.a);
    gb.regs.a = 0x45;
    gb_write(0xD403, gb.regs.a);
    gb.regs.a = 0x38;
    gb_write(0xD404, gb.regs.a);
    gb_write(0xFF98, gb.regs.a);
    gb.regs.a = 0x60;
    gb_write(0xD405, gb.regs.a);
    gb_write(0xFF99, gb.regs.a);
    gb.regs.a = 0x53;
    gb_write(0xD416, gb.regs.a);
    return;
}

void Data_014_4EA8(void) {
    /* data: db $E4, $E4, $E4, $E4, $94, $94, $94, $94, $40, $40, $40, $40, $00, $00, $00, $00 */;
}

void Data_014_4EB8(void) {
    /* data: db $1C, $1C, $1C, $1C, $18, $18, $18, $18, $04, $04, $04, $04, $00, $00, $00, $00 */;
}

void Data_014_4EC8(void) {
    /* data: db $00, $00, $00, $00, $40, $40, $40, $40, $94, $94, $94, $94, $E4, $E4, $E4, $E4 */;
}

void Data_014_4ED8(void) {
    /* data: db $00, $00, $00, $00, $04, $04, $04, $04, $18, $18, $18, $18, $1C, $1C, $1C, $1C */;
}

void Data_014_4EE8(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $00, $00 */;
    /* data: db $00, $00, $00, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $00, $00 */;
    /* data: db $00, $00, $00, $00, $01, $01, $02, $02, $02, $02, $02, $01, $01, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $FF, $FF, $FE, $FE, $FE, $FE, $FE, $FF, $FF, $00, $00, $00 */;
    /* data: db $00, $01, $01, $02, $02, $02, $03, $03, $03, $03, $03, $02, $02, $02, $01, $00 */;
    /* data: db $00, $FF, $FF, $FE, $FE, $FE, $FD, $FD, $FD, $FD, $FD, $FE, $FE, $FE, $FF, $00 */;
    /* data: db $00, $02, $02, $03, $03, $03, $04, $04, $04, $04, $04, $03, $03, $03, $02, $02 */;
    /* data: db $00, $FE, $FE, $FD, $FD, $FD, $FC, $FC, $FC, $FC, $FC, $FD, $FD, $FD, $FE, $FE */;
    /* data: db $00, $01, $01, $02, $02, $02, $03, $03, $03, $03, $03, $02, $02, $02, $01, $00 */;
    /* data: db $00, $FF, $FF, $FE, $FE, $FE, $FD, $FD, $FD, $FD, $FD, $FE, $FE, $FE, $FF, $00 */;
    /* data: db $00, $00, $00, $00, $01, $01, $02, $02, $02, $02, $02, $01, $01, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $FF, $FF, $FE, $FE, $FE, $FE, $FE, $FF, $FF, $00, $00, $00 */;
    /* data: db $00, $00, $00, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $01, $00, $00 */;
    /* data: db $00, $00, $00, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $00, $00 */;
}

void ApplyFadeToWhite_DMG(void) {
    gb.regs.a = gb_read(0xC180);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_and8(gb.regs.a, 7);
    if (!GET_FLAG_Z()) goto ApplyFadeToWhite_DMG_jr_4FFB;
    gb.regs.a = gb_read(0xC3CA);
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { jr_014_5036(); return; };
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC3CA, gb.regs.a);
  ApplyFadeToWhite_DMG_jr_4FFB:;
    gb.regs.a = gb_read(0xC3CA);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFE7);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xC17F);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto ApplyFadeToWhite_DMG_jr_5023;
    gb.regs.hl = 0x4EA8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.hl = 0x4EB8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
    jr_014_5036(); return;
  ApplyFadeToWhite_DMG_jr_5023:;
    gb.regs.hl = 0x4EC8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.hl = 0x4ED8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xDC40, gb.regs.a);
}

void jr_014_5036(void) {
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    return;
}

void RenderTransitionEffect(void) {
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xC180);
    /* nop */;
    gb.regs.a = alu_and8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xC17F);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) goto RenderTransitionEffect_jr_5050;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_xor8(gb.regs.a, 0xE0);
    gb.regs.e = gb.regs.a;
  RenderTransitionEffect_jr_5050:;
    gb.regs.a = gb.regs.e;
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.hl = 0xC17C;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x58;
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_014_5067(); return; };
    gb.regs.a = 0x88;
    gb_write(0xFFD9, gb.regs.a);
}

void label_014_5067(void) {
    gb.regs.a = gb_read(0xFF41);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (!GET_FLAG_Z()) { label_014_5067(); return; };
    gb.regs.d = 0;
  label_014_5067_loop_506F:;
    gb.regs.a = gb_read(0xC17E);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xC17E, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) goto label_014_5067_loop_506F;
    gb.regs.a = gb_read(0xC17C);
    gb.regs.a = alu_add8(gb.regs.a, 1);
    gb_write(0xC17C, gb.regs.a);
    gb.regs.a = gb_read(0xC17D);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(0xC17D, gb.regs.a);
    gb.regs.a = gb_read(0xFFD9);
    gb.regs.hl = 0xC17C;
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) return;
    gb.regs.c = 0;
    gb.regs.a = gb_read(0xC17F);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto label_014_5067_jr_509B;
    gb.regs.c = alu_inc8(gb.regs.c);
  label_014_5067_jr_509B:;
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.hl = 0xFFD8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.hl = 0x4EE8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xC180);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.c);
    gb.regs.a = gb_read(gb.regs.hl);
    if (GET_FLAG_Z()) goto label_014_5067_jr_50B2;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  label_014_5067_jr_50B2:;
    gb_push16(gb.regs.af);
    gb.regs.hl = 0xFF96;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF43, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.hl = 0xFF97;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFF42, gb.regs.a);
    label_014_5067(); return;
}

void func_014_50C3(void) {
    gb.regs.e = 0x0F;
    gb.regs.d = 0;
  func_014_50C3_loop:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 5);
    if (!GET_FLAG_Z()) goto func_014_50C3_continue;
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) goto func_014_50C3_continue;
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_014_50C3_continue;
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_014_50C3_continue;
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x10);
    if (!GET_FLAG_C()) goto func_014_50C3_continue;
    gb.regs.hl = 0xC450;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x80);
    gb.regs.hl = 0xC2D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.d);
    gb.regs.hl = 0xC2F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
  func_014_50C3_continue:;
    gb.regs.e = alu_dec8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto func_014_50C3_loop;
    return;
}

void SignpostDialogTable(void) {
  SignpostDialogTable__00:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__01:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__02:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__03:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__04:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__05:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__06:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__07:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__08:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__09:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__0A:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__0B:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__0C:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__0D:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__0E:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__0F:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__10:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__11:;
    /* db_dialog_low Dialog1B6 */;
  SignpostDialogTable__12:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__13:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__14:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__15:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__16:;
    /* db_dialog_low Dialog1A3 */;
  SignpostDialogTable__17:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__18:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__19:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__1A:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__1B:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__1C:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__1D:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__1E:;
    /* db_dialog_low Dialog22D */;
  SignpostDialogTable__1F:;
    /* db_dialog_low Dialog10C */;
  SignpostDialogTable__20:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__21:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__22:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__23:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__24:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__25:;
    /* db_dialog_low Dialog1B5 */;
  SignpostDialogTable__26:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__27:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__28:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__29:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__2A:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__2B:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__2C:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__2D:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__2E:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__2F:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__30:;
    /* db_dialog_low Dialog1A5 */;
  SignpostDialogTable__31:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__32:;
    /* db_dialog_low Dialog1A8 */;
  SignpostDialogTable__33:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__34:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__35:;
    /* db_dialog_low Dialog1B7 */;
  SignpostDialogTable__36:;
    /* db_dialog_low Dialog1B4 */;
  SignpostDialogTable__37:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__38:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__39:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__3A:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__3B:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__3C:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__3D:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__3E:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__3F:;
    /* db_dialog_low Dialog1A1 */;
  SignpostDialogTable__40:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__41:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__42:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__43:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__44:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__45:;
    /* db_dialog_low Dialog1B0 */;
  SignpostDialogTable__46:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__47:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__48:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__49:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__4A:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__4B:;
    /* db_dialog_low Dialog083 */;
  SignpostDialogTable__4C:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__4D:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__4E:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__4F:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__50:;
    /* db_dialog_low Dialog1A6 */;
  SignpostDialogTable__51:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__52:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__53:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__54:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__55:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__56:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__57:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__58:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__59:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__5A:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__5B:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__5C:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__5D:;
    /* db_dialog_low Dialog1BC */;
  SignpostDialogTable__5E:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__5F:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__60:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__61:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__62:;
    /* db_dialog_low Dialog1A6 */;
  SignpostDialogTable__63:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__64:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__65:;
    /* db_dialog_low Dialog1B3 */;
  SignpostDialogTable__66:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__67:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__68:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__69:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__6A:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__6B:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__6C:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__6D:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__6E:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__6F:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__70:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__71:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__72:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__73:;
    /* db_dialog_low Dialog108 */;
  SignpostDialogTable__74:;
    /* db_dialog_low Dialog1B8 */;
  SignpostDialogTable__75:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__76:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__77:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__78:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__79:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__7A:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__7B:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__7C:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__7D:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__7E:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__7F:;
    /* db_dialog_low Dialog104 */;
  SignpostDialogTable__80:;
    /* db_dialog_low Dialog1C4 */;
  SignpostDialogTable__81:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__82:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__83:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__84:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__85:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__86:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__87:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__88:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__89:;
    /* db_dialog_low Dialog1FC */;
  SignpostDialogTable__8A:;
    /* db_dialog_low Dialog19D */;
  SignpostDialogTable__8B:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__8C:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__8D:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__8E:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__8F:;
    /* db_dialog_low Dialog1BD */;
  SignpostDialogTable__90:;
    /* db_dialog_low Dialog1A0 */;
  SignpostDialogTable__91:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__92:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__93:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__94:;
    /* db_dialog_low Dialog1A2 */;
  SignpostDialogTable__95:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__96:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__97:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__98:;
    /* db_dialog_low Dialog1FB */;
  SignpostDialogTable__99:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__9A:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__9B:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__9C:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__9D:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__9E:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__9F:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__A0:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__A1:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__A2:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__A3:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__A4:;
    /* db_dialog_low Dialog083 */;
  SignpostDialogTable__A5:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__A6:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__A7:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__A8:;
    /* db_dialog_low Dialog1BA */;
  SignpostDialogTable__A9:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__AA:;
    /* db_dialog_low Dialog1B1 */;
  SignpostDialogTable__AB:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__AC:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__AD:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__AE:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__AF:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__B0:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__B1:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__B2:;
    /* db_dialog_low Dialog10A */;
  SignpostDialogTable__B3:;
    /* db_dialog_low Dialog083 */;
  SignpostDialogTable__B4:;
    /* db_dialog_low Dialog1A9 */;
  SignpostDialogTable__B5:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__B6:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__B7:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__B8:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__B9:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__BA:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__BB:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__BC:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__BD:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__BE:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__BF:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__C0:;
    /* db_dialog_low Dialog1A4 */;
  SignpostDialogTable__C1:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__C2:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__C3:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__C4:;
    /* db_dialog_low Dialog1AF */;
  SignpostDialogTable__C5:;
    /* db_dialog_low Dialog1AF */;
  SignpostDialogTable__C6:;
    /* db_dialog_low Dialog1B9 */;
  SignpostDialogTable__C7:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__C8:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__C9:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__CA:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__CB:;
    /* db_dialog_low Dialog1B2 */;
  SignpostDialogTable__CC:;
    /* db_dialog_low Dialog10B */;
  SignpostDialogTable__CD:;
    /* db_dialog_low Dialog10B */;
  SignpostDialogTable__CE:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__CF:;
    /* db_dialog_low Dialog1BE */;
  SignpostDialogTable__D0:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__D1:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__D2:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__D3:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__D4:;
    /* db_dialog_low Dialog1AF */;
  SignpostDialogTable__D5:;
    /* db_dialog_low Dialog1AF */;
  SignpostDialogTable__D6:;
    /* db_dialog_low Dialog1F9 */;
  SignpostDialogTable__D7:;
    /* db_dialog_low Dialog1FA */;
  SignpostDialogTable__D8:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__D9:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__DA:;
    /* db_dialog_low Dialog1BB */;
  SignpostDialogTable__DB:;
    /* db_dialog_low Dialog1DB */;
  SignpostDialogTable__DC:;
    /* db_dialog_low Dialog10B */;
  SignpostDialogTable__DD:;
    /* db_dialog_low Dialog10B */;
  SignpostDialogTable__DE:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__DF:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__E0:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__E1:;
    /* db_dialog_low Dialog1C3 */;
  SignpostDialogTable__E2:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__E3:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__E4:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__E5:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__E6:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__E7:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__E8:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__E9:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__EA:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__EB:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__EC:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__ED:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__EE:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__EF:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__F0:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__F1:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__F2:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__F3:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__F4:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__F5:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__F6:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__F7:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__F8:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__F9:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__FA:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__FB:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__FC:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__FD:;
    /* db_dialog_low Dialog19E */;
  SignpostDialogTable__FE:;
    /* db_dialog_low Dialog110 */;
  SignpostDialogTable__FF:;
    /* db_dialog_low Dialog110 */;
}

void BowWowEatableEntitiesTable(void) {
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $01, $00, $01, $00, $01, $01, $01 */;
    /* data: db $00, $00, $00, $00, $01, $00, $00, $00, $00, $01, $01, $01, $01, $01, $01, $01 */;
    /* data: db $01, $01, $00, $01, $01, $01, $01, $01, $01, $01, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $01, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $01, $00, $01, $00, $01, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $01 */;
    /* data: db $00, $01, $00, $00, $00, $00, $00, $00, $00, $01, $00, $01, $00, $00, $00, $01 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $01, $01, $00 */;
    /* data: db $01, $00, $00, $00, $00, $00, $00, $00, $00, $01, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $01, $00, $00, $00, $00, $00, $01, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $01, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 */;
    /* data: db $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void Data_014_5313(void) {
    /* data: db $30, $D0, $00, $00, $18, $E8, $00, $00, $30, $D0, $00, $00, $18, $E8, $00, $00 */;
}

void Data_014_5323(void) {
    /* data: db $00, $00, $D0, $30, $00, $00, $E8, $18, $F4, $F4, $D0, $00, $F8, $F8, $E8, $00 */;
}

void Data_014_5333(void) {
    /* data: db $04, $04, $04, $04, $10, $10, $10, $10, $00, $00, $00, $00, $00, $00, $00, $00 */;
}

void Data_014_5343(void) {
    /* data: db $02, $06, $00, $04 */;
}

void func_014_5347(void) {
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto func_014_5347_jr_5354;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) { jr_014_5360(); return; };
  func_014_5347_jr_5354:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) { jr_014_5360(); return; };
    func_014_53A3();
    ClearEntitySpeed(); return;
}

void jr_014_5360(void) {
    gb.regs.a = gb_read(0xC5AE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_014_5360_jr_536B;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC5AE, gb.regs.a);
    return;
  jr_014_5360_jr_536B:;
    gb.regs.a = gb_read(0xC15C);
    alu_cp8(gb.regs.a, 1);
    if (!GET_FLAG_Z()) { label_014_5443(); return; };
    gb.regs.d = 3;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_014_5360_jr_537D;
    gb.regs.d = 2;
  jr_014_5360_jr_537D:;
    gb.regs.e = 0x10;
    gb.regs.a = gb_read(wInventoryItems_BButtonSlot);
    alu_cp8(gb.regs.a, gb.regs.d);
    if (!GET_FLAG_Z()) goto jr_014_5360_checkAButtonSlot;
    gb.regs.e = alu_sla(gb.regs.e);
    jr_014_5391(); return;
  jr_014_5360_checkAButtonSlot:;
    gb.regs.a = gb_read(wInventoryItems_AButtonSlot);
    alu_cp8(gb.regs.a, gb.regs.d);
    if (GET_FLAG_Z()) { jr_014_5391(); return; };
    gb.regs.e = 0x30;
}

void jr_014_5391(void) {
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.e);
    if (GET_FLAG_Z()) { label_014_5443(); return; };
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 8);
}

void func_014_53A3(void) {
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 5);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto func_014_53A3_jr_53B6;
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0xA0);
    jr_014_5409(); return;
  func_014_53A3_jr_53B6:;
    gb.regs.hl = 0xC280;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_cp8(gb.regs.a, 0xD6);
    if (GET_FLAG_Z()) goto func_014_53A3_jr_53ED;
    alu_cp8(gb.regs.a, 0xD5);
    if (GET_FLAG_Z()) goto func_014_53A3_jr_53ED;
    alu_cp8(gb.regs.a, 0x6C);
    if (GET_FLAG_Z()) goto func_014_53A3_jr_53ED;
    alu_cp8(gb.regs.a, 0x9D);
    if (GET_FLAG_Z()) goto func_014_53A3_jr_53ED;
    alu_cp8(gb.regs.a, 0xA8);
    if (GET_FLAG_Z()) goto func_014_53A3_jr_53ED;
    alu_cp8(gb.regs.a, 0x98);
    if (!GET_FLAG_Z()) { jr_014_53F6(); return; };
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5343;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC380;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntityTransitionCountdown();
    GetRandomByte();
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.a = alu_add8(gb.regs.a, 0x30);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = gb_pop16();
  func_014_53A3_jr_53ED:;
    gb_write(gb.regs.hl, 5);
    IncrementEntityState();
    gb_write(gb.regs.hl, 2);
    jr_014_5409(); return;
}

void jr_014_53F6(void) {
    alu_cp8(gb.regs.a, 0x92);
    if (!GET_FLAG_Z()) goto jr_014_53F6_jr_5403;
    gb_write(gb.regs.hl, 5);
    IncrementEntityState();
    gb_write(gb.regs.hl, 3);
    jr_014_5409(); return;
  jr_014_53F6_jr_5403:;
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { jr_014_5409(); return; };
    gb_write(gb.regs.hl, 8);
}

void jr_014_5409(void) {
    gb.regs.e = gb.regs.b;
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_014_5409_jr_5411;
    gb.regs.e = 8;
  jr_014_5409_jr_5411:;
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_Z()) goto jr_014_5409_jr_541B;
    gb.regs.a = gb.regs.e;
    gb.regs.a = alu_add8(gb.regs.a, 4);
    gb.regs.e = gb.regs.a;
  jr_014_5409_jr_541B:;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5313;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5323;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x5333;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xC19B, gb.regs.a);
}

void label_014_5443(void) {
    return;
}

void jr_014_5444(void) {
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC19F, gb.regs.a);
    return;
}

void DialogOpenAnimationStart(void) {
    gb.regs.a = gb_read(0xC3C9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto DialogOpenAnimationStart_jr_545A;
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { jr_014_5444(); return; };
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_014_5444(); return; };
  DialogOpenAnimationStart_jr_545A:;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto DialogOpenAnimationStart_jr_547F;
    gb.regs.a = gb_read(0xC3CB);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto DialogOpenAnimationStart_jr_547F;
    gb.regs.a = gb_read(0xFF9D);
    alu_cp8(gb.regs.a, 0x6C);
    if (GET_FLAG_Z()) goto DialogOpenAnimationStart_jr_547F;
    gb.regs.a = 4;
    gb_write(0xC16B, gb.regs.a);
    gb.regs.a = 0xE4;
    gb_write(0xDC3F, gb.regs.a);
    gb_write(0xDC41, gb.regs.a);
    gb.regs.a = 0x1C;
    gb_write(0xDC40, gb.regs.a);
  DialogOpenAnimationStart_jr_547F:;
    gb.regs.a = gb_read(0xD5C2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC3CC);
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_C()) return;
    gb.regs.hl = 0xDEA9;
    gb.regs.a = 33;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x53;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xB6;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xDEAC, gb.regs.a);
    Farcall(); return;
}

void func_014_54AC(void) {
    gb.regs.hl = 0xC17B;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { ret_014_54E7(); return; };
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_sub8(gb.regs.a, 0x11);
    alu_cp8(gb.regs.a, 0x7E);
    if (GET_FLAG_C()) goto func_014_54AC_jr_014_54D1;
    gb.regs.a = gb_read(0xFF98);
    alu_cp8(gb.regs.a, 0x50);
    if (!GET_FLAG_C()) goto func_014_54AC_jr_54CA;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFF98, gb.regs.a);
    jr_014_54DE(); return;
  func_014_54AC_jr_54CA:;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFF98, gb.regs.a);
    jr_014_54DE(); return;
  func_014_54AC_jr_014_54D1:;
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_sub8(gb.regs.a, 0x16);
    alu_cp8(gb.regs.a, 0x5E);
    if (GET_FLAG_C()) { ret_014_54E7(); return; };
    gb.regs.a = gb_read(0xFF99);
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xFF99, gb.regs.a);
}

void jr_014_54DE(void) {
    gb.regs.a = 1;
    gb_write(0xFFA1, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xC111, gb.regs.a);
}

void ret_014_54E7(void) {
    return;
}

void Data_014_54E8(void) {
    /* data: db $00, $02, $00, $FE, $00, $00, $00, $00 */;
}

void Data_014_54F0(void) {
    /* data: db $00, $00, $00, $00, $00, $02, $00, $FE */;
}

void func_014_54F8(void) {
    gb.regs.a = gb_read(0xC178);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_014_54F8_jr_5502;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC178, gb.regs.a);
  func_014_54F8_jr_5502:;
    gb.regs.a = gb_read(0xC157);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto func_014_54F8_ret_5525;
    gb.regs.a = alu_dec8(gb.regs.a);
    gb_write(0xC157, gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    gb.regs.hl = 0xC158;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x54E8;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC155, gb.regs.a);
    gb.regs.hl = 0x54F0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC156, gb.regs.a);
  func_014_54F8_ret_5525:;
    return;
}

void RevealObjectUnderObject(void) {
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x8E);
    if (!GET_FLAG_Z()) { jr_014_557D(); return; };
    gb_write(gb.regs.hl, 0xAA);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto RevealObjectUnderObject_jr_554D;
    gb_push16(gb.regs.bc);
    gb.regs.c = 0xAA;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.a = 0x14;
    func_91D_jp_92E();
    gb.regs.bc = gb_pop16();
  RevealObjectUnderObject_jr_554D:;
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
    gb.regs.a = 0x14;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x16;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x15;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x17;
    label_014_573E(); return;
}

void jr_014_557D(void) {
    alu_cp8(gb.regs.a, 0xD3);
    if (!GET_FLAG_Z()) goto jr_014_557D_jr_5584;
    label_014_5743(); return;
  jr_014_557D_jr_5584:;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { label_014_5630(); return; };
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_014_55E3(); return; };
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x8A);
    if (!GET_FLAG_Z()) { jr_014_55E3(); return; };
    gb_write(gb.regs.hl, 4);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_014_557D_jr_55B3;
    gb_push16(gb.regs.bc);
    gb.regs.c = 4;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.a = 0x14;
    func_91D_jp_92E();
    gb.regs.bc = gb_pop16();
  jr_014_557D_jr_55B3:;
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
    label_014_573E(); return;
}

void jr_014_55E3(void) {
    gb_write(gb.regs.hl, 0x0D);
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto jr_014_55E3_jr_5600;
    gb_push16(gb.regs.bc);
    gb.regs.c = 0x0D;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.a = 0x14;
    func_91D_jp_92E();
    gb.regs.bc = gb_pop16();
  jr_014_55E3_jr_5600:;
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
    label_014_573E(); return;
}

void label_014_5630(void) {
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_014_564E(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x52);
    if (GET_FLAG_Z()) goto label_014_5630_jr_5640;
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) { jr_014_5643(); return; };
  label_014_5630_jr_5640:;
    label_014_5767(); return;
}

void jr_014_5643(void) {
    alu_cp8(gb.regs.a, 0x75);
    if (!GET_FLAG_Z()) { jr_014_564E(); return; };
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_014_5677(); return; };
    jr_014_5673(); return;
}

void jr_014_564E(void) {
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_014_5677(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { jr_014_5673(); return; };
    alu_cp8(gb.regs.a, 0xE0);
    if (GET_FLAG_Z()) { jr_014_5673(); return; };
    alu_cp8(gb.regs.a, 0xE1);
    if (GET_FLAG_Z()) { jr_014_5673(); return; };
    alu_cp8(gb.regs.a, 0xE3);
    if (GET_FLAG_Z()) { jr_014_5673(); return; };
    alu_cp8(gb.regs.a, 0xE4);
    if (GET_FLAG_Z()) { jr_014_5673(); return; };
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) { jr_014_5677(); return; };
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { jr_014_5677(); return; };
}

void jr_014_5673(void) {
    gb_write(gb.regs.hl, 3);
    jr_014_5679(); return;
}

void jr_014_5677(void) {
    gb_write(gb.regs.hl, 4);
}

void jr_014_5679(void) {
    gb.regs.a = 0x94;
    BackupObjectInRAM2();
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_014_56C9(); return; };
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { jr_014_56B3(); return; };
    alu_cp8(gb.regs.a, 0xE0);
    if (GET_FLAG_Z()) { jr_014_56B3(); return; };
    alu_cp8(gb.regs.a, 0xE1);
    if (GET_FLAG_Z()) { jr_014_56B3(); return; };
    alu_cp8(gb.regs.a, 0xE3);
    if (GET_FLAG_Z()) { jr_014_56B3(); return; };
    alu_cp8(gb.regs.a, 0xE4);
    if (GET_FLAG_Z()) { jr_014_56B3(); return; };
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto jr_014_5679_jr_56A9;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_014_56B3(); return; };
    jr_014_56B7(); return;
  jr_014_5679_jr_56A9:;
    alu_cp8(gb.regs.a, 0x75);
    if (!GET_FLAG_Z()) { jr_014_56B7(); return; };
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_014_56B7(); return; };
}

void jr_014_56B3(void) {
    gb.regs.c = 3;
    jr_014_56B9(); return;
}

void jr_014_56B7(void) {
    gb.regs.c = 4;
}

void jr_014_56B9(void) {
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.a = 0x14;
    func_91D_jp_92E();
    gb.regs.bc = gb_pop16();
}

void jr_014_56C9(void) {
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
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { jr_014_5712(); return; };
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_C()) { jr_014_5729(); return; };
    alu_cp8(gb.regs.a, 0xE0);
    if (GET_FLAG_Z()) { jr_014_5729(); return; };
    alu_cp8(gb.regs.a, 0xE1);
    if (GET_FLAG_Z()) { jr_014_5729(); return; };
    alu_cp8(gb.regs.a, 0xE3);
    if (GET_FLAG_Z()) { jr_014_5729(); return; };
    alu_cp8(gb.regs.a, 0xE4);
    if (GET_FLAG_Z()) { jr_014_5729(); return; };
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto jr_014_56C9_jr_5708;
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) { jr_014_5729(); return; };
    jr_014_5712(); return;
  jr_014_56C9_jr_5708:;
    alu_cp8(gb.regs.a, 0x75);
    if (!GET_FLAG_Z()) { jr_014_5712(); return; };
    gb.regs.a = gb_read(0xFFAF);
    alu_cp8(gb.regs.a, 0x20);
    if (GET_FLAG_Z()) { jr_014_5729(); return; };
}

void jr_014_5712(void) {
    gb.regs.a = 0x5A;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x7F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x5A;
    label_014_573E(); return;
}

void jr_014_5729(void) {
    gb.regs.a = 0x76;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x76;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x76;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x76;
}

void label_014_573E(void) {
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0;
    gb_write(gb.regs.hl++, gb.regs.a);
    return;
}

void label_014_5743(void) {
    gb.regs.a = gb_read(0xFFF6);
    alu_cp8(gb.regs.a, 0x75);
    if (GET_FLAG_Z()) goto label_014_5743_jr_5756;
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto label_014_5743_jr_5756;
    alu_cp8(gb.regs.a, 0xAA);
    if (GET_FLAG_Z()) goto label_014_5743_jr_5756;
    alu_cp8(gb.regs.a, 0x4A);
    if (!GET_FLAG_Z()) { label_014_57E1(); return; };
  label_014_5743_jr_5756:;
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD8B5;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, alu_set(4, gb_read(gb.regs.hl)));
    gb.regs.hl = gb_pop16();
}

void label_014_5767(void) {
    gb_write(gb.regs.hl, 0xC6);
    gb.regs.a = 0x94;
    BackupObjectInRAM2();
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_014_5767_jr_5789;
    gb_push16(gb.regs.bc);
    gb.regs.c = 0xC6;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.a = 0x14;
    func_91D_jp_92E();
    gb.regs.bc = gb_pop16();
  label_014_5767_jr_5789:;
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
    gb.regs.a = gb_read(0xFFCE);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFCD);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb_write(0xD416, gb.regs.a);
    gb.regs.a = 2;
    gb_write(0xFFF2, gb.regs.a);
    return;
}

void label_014_57E1(void) {
    gb.regs.hl = 0xD7C6;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0xE8);
    gb.regs.a = 0x94;
    BackupObjectInRAM2();
    label_2887();
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto label_014_57E1_jr_5807;
    gb_push16(gb.regs.bc);
    gb.regs.c = 0xE8;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.a = 0x14;
    func_91D_jp_92E();
    gb.regs.bc = gb_pop16();
  label_014_57E1_jr_5807:;
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
    gb.regs.a = 0x78;
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
    gb.regs.a = 0x79;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
    /* TODO: :  */;
}

void GetRoomStatusAddressForMapPosition(void) {
    gb.regs.hl = 0x44E0;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto GetRoomStatusAddressForMapPosition_jr_5866;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_C()) { ret_014_5883(); return; };
    gb.regs.hl = 0x4220;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.b = alu_rl(gb.regs.b);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto GetRoomStatusAddressForMapPosition_jr_5866;
    gb.regs.a = gb_read(0xDC13);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) goto GetRoomStatusAddressForMapPosition_jr_5866;
    gb.regs.hl = 0x4520;
  GetRoomStatusAddressForMapPosition_jr_5866:;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0xD9B5;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto GetRoomStatusAddressForMapPosition_jr_5879;
    gb.regs.hl = 0xDE88;
    jr_014_5882(); return;
  GetRoomStatusAddressForMapPosition_jr_5879:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) { jr_014_5882(); return; };
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) { jr_014_5882(); return; };
    gb.regs.d = alu_inc8(gb.regs.d);
}

void jr_014_5882(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
}

void ret_014_5883(void) {
    return;
}

void GetChestsStatusForRoom(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto GetChestsStatusForRoom_jr_5891;
    gb.regs.d = 0;
    gb.regs.hl = 0x4860;
    jr_014_5894(); return;
  GetChestsStatusForRoom_jr_5891:;
    gb.regs.hl = 0x4560;
}

void jr_014_5894(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    return;
}

void func_014_5897(void) {
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto func_014_5897_jr_58A2;
    gb.regs.hl = 0x44E0;
    jr_014_58C7(); return;
  func_014_5897_jr_58A2:;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_C()) { jr_014_58D1(); return; };
    gb.regs.hl = 0x4220;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.e = alu_sla(gb.regs.e);
    gb.regs.d = alu_rl(gb.regs.d);
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) { jr_014_58C7(); return; };
    gb.regs.a = gb_read(0xDC13);
    gb.regs.a = alu_and8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { jr_014_58C7(); return; };
    gb.regs.hl = 0x4520;
}

void jr_014_58C7(void) {
    gb.regs.a = gb_read(0xDC56);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFF6, gb.regs.a);
}

void jr_014_58D1(void) {
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto jr_014_58D1_jr_58E1;
    gb.regs.hl = 0x4200;
    jr_014_58ED(); return;
  jr_014_58D1_jr_58E1:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto jr_014_58D1_jr_58EA;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto jr_014_58D1_jr_58EA;
    gb.regs.b = alu_inc8(gb.regs.b);
  jr_014_58D1_jr_58EA:;
    gb.regs.hl = 0x4000;
}

void jr_014_58ED(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xC18E, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xC18A, gb.regs.a);
    gb_write(0xC18B, gb.regs.a);
    gb_write(0xC190, gb.regs.a);
    gb_write(0xC18F, gb.regs.a);
    return;
}

void func_014_5900(void) {
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto func_014_5900_jr_5914;
    gb.regs.d = 0;
    gb.regs.hl = 0x4860;
    jr_014_5920(); return;
  func_014_5900_jr_5914:;
    alu_cp8(gb.regs.a, 0x1A);
    if (!GET_FLAG_C()) goto func_014_5900_jr_591D;
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto func_014_5900_jr_591D;
    gb.regs.d = alu_inc8(gb.regs.d);
  func_014_5900_jr_591D:;
    gb.regs.hl = 0x4560;
}

void jr_014_5920(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_Z()) goto jr_014_5920_jr_5931;
    gb.regs.a = gb_read(0xDBFA);
    alu_cp8(gb.regs.a, 2);
    gb.regs.a = 0x20;
    if (GET_FLAG_C()) goto jr_014_5920_jr_5931;
    gb.regs.a = 0x1C;
  jr_014_5920_jr_5931:;
    gb_write(0xFFDF, gb.regs.a);
    return;
}

void Dialog000(void) {
    /* data: db "Whoa, boy! Where" */;
    /* data: db "ya off to in    " */;
    /* data: db "such a hurry?   " */;
    /* data: db "Set a spell, I  " */;
    /* data: db "got somethin' ta" */;
    /* data: db "tell ya!@" */;
}

void Dialog001(void) {
    /* data: db "What a relief! I" */;
    /* data: db "thought you'd   " */;
    /* data: db "never wake up!  " */;
    /* data: db "You were tossing" */;
    /* data: db "and turning...  " */;
    /* data: db "What?  Zelda?   " */;
    /* data: db "No, my name's   " */;
    /* data: db "Marin!  You must" */;
    /* data: db "still be feeling" */;
    /* data: db "a little woozy. " */;
    /* data: db "You are on      " */;
    /* data: db "Koholint Island!@" */;
}

void Dialog002(void) {
    /* data: db "Follow the lane " */;
    /* data: db "south to reach  " */;
    /* data: db "the beach where " */;
    /* data: db "I found you.    " */;
    /* data: db "Since you washed" */;
    /* data: db "ashore, lots of " */;
    /* data: db "nasty monsters  " */;
    /* data: db "have been in the" */;
    /* data: db "area, so be     " */;
    /* data: db "careful, okay?@" */;
}

void Dialog003(void) {
    /* data: db "Hi!  Tarin went " */;
    /* data: db "to the forest to" */;
    /* data: db "look for toad-  " */;
    /* data: db "stools, but I'd " */;
    /* data: db "rather sing.    " */;
    /* data: db "Listen to this, " */;
    /* data: db "it's called the " */;
    /* data: db "'Ballad of the  " */;
    /* data: db "Wind Fish.'@" */;
}

void Dialog004(void) {
    /* data: db "Hey!  That's a  " */;
    /* data: db "nice Ocarina you" */;
    /* data: db "have there! Will" */;
    /* data: db "you accompany   " */;
    /* data: db "me as I sing?@" */;
}

void Dialog005(void) {
    /* data: db "I just love to  " */;
    /* data: db "sing-- what can " */;
    /* data: db "I say?  What do " */;
    /* data: db "you like to do, " */;
    /* data: db "#####?@" */;
}

void Dialog006(void) {
    /* data: db "#####, Tarin's  " */;
    /* data: db "taking a nap at " */;
    /* data: db "home.  I don't  " */;
    /* data: db "know how he can " */;
    /* data: db "sleep on such a " */;
    /* data: db "nice day!  It   " */;
    /* data: db "makes me want to" */;
    /* data: db "sing a song...  " */;
    /* data: db "Yes, the song is" */;
    /* data: db "'Ballad of the  " */;
    /* data: db "Wind Fish!'@" */;
}

void Dialog007(void) {
    /* data: db "Eh? It's locked!" */;
    /* data: db "You can open the" */;
    /* data: db "door with the   " */;
    /* data: db "Nightmare Key.@" */;
}

void Dialog008(void) {
    /* data: db "You got a Piece " */;
    /* data: db "of Power!  You  " */;
    /* data: db "can feel the    " */;
    /* data: db "energy flowing  " */;
    /* data: db "through you!@" */;
}

void Dialog009(void) {
    /* data: db "Ahhh... It has  " */;
    /* data: db "the Sleepy Toad-" */;
    /* data: db "stool, it does! " */;
    /* data: db "We'll mix it up " */;
    /* data: db "something in a  " */;
    /* data: db "jiffy, we will!@" */;
}

void Dialog00A(void) {
    /* data: db "The last thing I" */;
    /* data: db "kin remember was" */;
    /* data: db "bitin' into a   " */;
    /* data: db "big juicy toad- " */;
    /* data: db "stool... Then, I" */;
    /* data: db "had the darndest" */;
    /* data: db "dream... I was a" */;
    /* data: db "raccoon!  Yeah, " */;
    /* data: db "sounds strange, " */;
    /* data: db "but it sure was " */;
    /* data: db "fun!@" */;
}

void Dialog00B(void) {
    /* data: db "I'm all tucker'd" */;
    /* data: db "out...  I think " */;
    /* data: db "I better set a  " */;
    /* data: db "spell before I  " */;
    /* data: db "head home...@" */;
}

void Dialog00C(void) {
    /* data: db "Double double,  " */;
    /* data: db "toil and trouble" */;
    /* data: db "a toadstool mix " */;
    /* data: db "makes powder for" */;
    /* data: db "tricks!@" */;
}

void Dialog00D(void) {
    /* data: db "As a raccoon, my" */;
    /* data: db "nose is verrry  " */;
    /* data: db "sensitive, ta   " */;
    /* data: db "stuff like dust " */;
    /* data: db "and powder...@" */;
}

void Dialog00E(void) {
    /* data: db "It's the toad-  " */;
    /* data: db "stool you picked" */;
    /* data: db "in the woods.   " */;
    /* data: db "What is it for? " */;
    /* data: db "You hold it over" */;
    /* data: db "your head and a " */;
    /* data: db "mellow aroma    " */;
    /* data: db "wafts into your " */;
    /* data: db "nostrils.@" */;
}

void Dialog00F(void) {
    /* data: db "You pick the    " */;
    /* data: db "toadstool... As " */;
    /* data: db "you hold it over" */;
    /* data: db "your head, a    " */;
    /* data: db "mellow aroma    " */;
    /* data: db "flows into your " */;
    /* data: db "nostrils.@" */;
}

void Dialog010(void) {
    /* data: db "Hrrrm...Snore..." */;
    /* data: db "Hunh?... If'n ya" */;
    /* data: db "don' know...call" */;
    /* data: db "old man Ulrira! " */;
    /* data: db "Zonk...Snore...@" */;
}

void Dialog011(void) {
    /* data: db "I'm tired... I'm" */;
    /* data: db "goin' ta sleep  " */;
    /* data: db "now... Zzzzzz...@" */;
}

void Dialog012(void) {
    /* data: db "Well that was a " */;
    /* data: db "surprise!  Hey! " */;
    /* data: db "I'll tell you a " */;
    /* data: db "secret! Use your" */;
    /* data: db "sword to poke at" */;
    /* data: db "dungeon walls..." */;
    /* data: db "If you hear a   " */;
    /* data: db "hollow clank,   " */;
    /* data: db "you can break   " */;
    /* data: db "the wall with a " */;
    /* data: db "Bomb!@" */;
}

void Dialog013(void) {
    /* data: db "You've learned  " */;
    /* data: db "the 'Ballad of  " */;
    /* data: db "the Wind Fish!' " */;
    /* data: db "This song will  " */;
    /* data: db "always remain in" */;
    /* data: db "your heart!@" */;
}

void Dialog014(void) {
    /* data: db "Please remember " */;
    /* data: db "this song!  You " */;
    /* data: db "should play it  " */;
    /* data: db "every once in a " */;
    /* data: db "while to keep it" */;
    /* data: db "fresh in your   " */;
    /* data: db "mind!@" */;
}

void Dialog015(void) {
    /* data: db "Please!  I want " */;
    /* data: db "you to learn it!" */;
    /* data: db "This song is my " */;
    /* data: db "favorite!@" */;
}

void Dialog016(void) {
    /* data: db "So, how do you  " */;
    /* data: db "like it?  It's  " */;
    /* data: db "really touching," */;
    /* data: db "isn't it?  Does " */;
    /* data: db "it stick in your" */;
    /* data: db "mind?           " */;
    /* data: db "    Yes  No<ask>" */;
}

void Dialog017(void) {
    /* data: db "Hi there, big   " */;
    /* data: db "guy!  I'm Crazy " */;
    /* data: db "Tracy!  I've got" */;
    /* data: db "a little secret " */;
    /* data: db "for sale that'll" */;
    /* data: db "pump you up!@" */;
}

void Dialog018(void) {
    /* data: db "Will you give me" */;
    /* data: db "28 Rupees for my" */;
    /* data: db "secret?         " */;
    /* data: db "    Give Don't<ask>" */;
}

void Dialog019(void) {
    /* data: db "How about it?   " */;
    /* data: db "42 Rupees for my" */;
    /* data: db "little secret..." */;
    /* data: db "    Give Don't<ask>" */;
}

void Dialog01A(void) {
    /* data: db "All right, come " */;
    /* data: db "here and I'll   " */;
    /* data: db "rub it on you!  " */;
    /* data: db "...There... I've" */;
    /* data: db "applied my own  " */;
    /* data: db "secret medicine!" */;
    /* data: db "It will take    " */;
    /* data: db "effect when you " */;
    /* data: db "lose all hearts!" */;
    /* data: db "lose all heart! " */;
    /* data: db "Drop by again,  " */;
    /* data: db "big guy!@" */;
}

void Dialog01B(void) {
    /* data: db "Beat it, then!  " */;
    /* data: db "Come back when  " */;
    /* data: db "you have some   " */;
    /* data: db "cash!@" */;
}

void Dialog01C(void) {
    /* data: db "... ... ... ... " */;
    /* data: db "But I won't sell" */;
    /* data: db "it to you!@" */;
}

void Dialog01D(void) {
    /* data: db "Well!  I'm only " */;
    /* data: db "offering you a  " */;
    /* data: db "secret that will" */;
    /* data: db "make you strong!" */;
    /* data: db "You're such a   " */;
    /* data: db "chicken!!@" */;
}

void Dialog01E(void) {
    /* data: db "...You're so    " */;
    /* data: db "cute!  I'll give" */;
    /* data: db "you a 7 Rupee   " */;
    /* data: db "discount!@" */;
}

void Dialog01F(void) {
    /* data: db "You got Marin!  " */;
    /* data: db "Is this your big" */;
    /* data: db "chance?@" */;
}

void Dialog020(void) {
    /* data: db "GRRRR...@" */;
}

void Dialog021(void) {
    /* data: db "Heh heh heh ho! " */;
    /* data: db "You're goin' ta " */;
    /* data: db "be lost, thanks " */;
    /* data: db "to me!  Heh heh!@" */;
}

void Dialog022(void) {
    /* data: db "BOW WOW!        " */;
    /* data: db "BOW WOW!@" */;
}

void Dialog023(void) {
    /* data: db "YIP YIP!        " */;
    /* data: db "YIP YIP!@" */;
}

void Dialog024(void) {
    /* data: db "Let's heal your " */;
    /* data: db "wounds and get  " */;
    /* data: db "rid of all that " */;
    /* data: db "stress... Close " */;
    /* data: db "your eyes and   " */;
    /* data: db "relax...@" */;
}

void Dialog025(void) {
    /* data: db "You dirty rat!  " */;
    /* data: db "You k-k-k...beat" */;
    /* data: db "my brothers!    " */;
    /* data: db "You'll pay!!    " */;
    /* data: db "I'll never      " */;
    /* data: db "forget you!@" */;
}

void Dialog026(void) {
    /* data: db "Hey runt!  You  " */;
    /* data: db "think you can   " */;
    /* data: db "take me?!  All  " */;
    /* data: db "right boys, get " */;
    /* data: db "this punk out   " */;
    /* data: db "of my face!@" */;
}

void Dialog027(void) {
    /* data: db "Yep!  Those're  " */;
    /* data: db "my boys!  I'm   " */;
    /* data: db "Papahl, pleased " */;
    /* data: db "ta meetcha! I'll" */;
    /* data: db "be lost in the  " */;
    /* data: db "hills later, so " */;
    /* data: db "keep a look out " */;
    /* data: db "for me, hear?@" */;
}

void Dialog028(void) {
    /* data: db "Yes!!  Yes!!    " */;
    /* data: db "Break them!     " */;
    /* data: db "Break them all! " */;
    /* data: db "... ... ... ... " */;
    /* data: db "What?  What's   " */;
    /* data: db "wrong?@" */;
}

void Dialog029(void) {
    /* data: db "Aye Caramba!    " */;
    /* data: db "Kid, you have a " */;
    /* data: db "lot to learn,   " */;
    /* data: db "trying to buy   " */;
    /* data: db "something you   " */;
    /* data: db "have no use for!@" */;
}

void Dialog02A(void) {
    /* data: db "You've got a    " */;
    /* data: db "Heart!  Thump!  " */;
    /* data: db "One of your     " */;
    /* data: db "Heart Containers" */;
    /* data: db "is filled!@" */;
}

void Dialog02B(void) {
}

void Dialog02C(void) {
    /* data: db "Bow & Arrow Set " */;
    /* data: db "Only 980 Rupees!" */;
    /* data: db "    Buy  No Way<ask>" */;
}

void Dialog02D(void) {
    /* data: db "   10 Arrows    " */;
    /* data: db "   10 Rupees    " */;
    /* data: db "    Buy  Don't<ask>" */;
}

void Dialog02E(void) {
    /* data: db "Hey!  Welcome!  " */;
    /* data: db "See something   " */;
    /* data: db "you like?!  Just" */;
    /* data: db "bring it here!@" */;
}

void Dialog02F(void) {
    /* data: db "Hey! You! Stop! " */;
    /* data: db "You gotta pay!  " */;
    /* data: db "Put it back!@" */;
}

void Dialog030(void) {
    /* data: db "  Deluxe Shovel " */;
    /* data: db "   200 Rupees!  " */;
    /* data: db "Seems expensive!" */;
    /* data: db "    Buy  No Way!" */;
    /* data: db "<ask>" */;
}

void Dialog031(void) {
    /* data: db "   Three Hearts " */;
    /* data: db "    10 Rupees!  " */;
    /* data: db "    Buy  Don't<ask>" */;
}

void Dialog032(void) {
    /* data: db "     Shield     " */;
    /* data: db "    20 Rupees!  " */;
    /* data: db "    Buy  Don't<ask>" */;
}

void Dialog033(void) {
    /* data: db "    Ten Bombs   " */;
    /* data: db "    10 Rupees   " */;
    /* data: db "    Buy  Don't<ask>" */;
}

void Dialog034(void) {
    /* data: db "Sorry, kid!  You" */;
    /* data: db "don't have the  " */;
    /* data: db "Rupees!  Come   " */;
    /* data: db "back when you   " */;
    /* data: db "have the cash!@" */;
}

void Dialog035(void) {
    /* data: db "Thanks a lot!   " */;
    /* data: db "And come again!@" */;
}

void Dialog036(void) {
    /* data: db "Guess what?  You" */;
    /* data: db "got it for free." */;
    /* data: db "Are you proud of" */;
    /* data: db "yourself?@" */;
}

void Dialog037(void) {
}

void Dialog038(void) {
    /* data: db "I wasn't kidding" */;
    /* data: db "when I said pay!" */;
    /* data: db "Now, you'll pay " */;
    /* data: db "the ultimate    " */;
    /* data: db "price!!@" */;
}

void Dialog039(void) {
    /* data: db "Hunh?  It sounds" */;
    /* data: db "like the castle " */;
    /* data: db "gate opened! You" */;
    /* data: db "can easily leave" */;
    /* data: db "the castle now!@" */;
}

void Dialog03A(void) {
}

void Dialog03B(void) {
    /* data: db "  TRENDY GAME!  " */;
    /* data: db " One Play 10 Rs." */;
    /* data: db "    Play No<ask>" */;
}

void Dialog03C(void) {
    /* data: db "The A and B     " */;
    /* data: db "Buttons move the" */;
    /* data: db "crane...The rest" */;
    /* data: db "is just timing! " */;
    /* data: db "Go over to the  " */;
    /* data: db "buttons to play!" */;
    /* data: db "Good Luck!@" */;
}

void Dialog03D(void) {
    /* data: db "It's a Shield!  " */;
    /* data: db "There is space  " */;
    /* data: db "for your name!@" */;
}

void Dialog03E(void) {
    /* data: db "Challenge Again?" */;
    /* data: db "    Play No<ask>" */;
}

void Dialog03F(void) {
    /* data: db "Good Luck!@" */;
}

void Dialog040(void) {
    /* data: db "We're closing up" */;
    /* data: db "for today!  Come" */;
    /* data: db "again, anytime!@" */;
}

void Dialog041(void) {
    /* data: db "You got some    " */;
    /* data: db "Magic Powder!   " */;
    /* data: db "Try to sprinkle " */;
    /* data: db "it on many      " */;
    /* data: db "things!@" */;
}

void Dialog042(void) {
    /* data: db "It's 30 Rupees! " */;
    /* data: db "You can play the" */;
    /* data: db "game three more " */;
    /* data: db "times with this!@" */;
}

void Dialog043(void) {
    /* data: db "Cough Cough...  " */;
    /* data: db "Don't sprinkle  " */;
    /* data: db "that on me...   " */;
    /* data: db "...I'll have to " */;
    /* data: db "curse you!      " */;
    /* data: db "Cough Cough...@" */;
}

void Dialog044(void) {
    /* data: db "You got a Yoshi " */;
    /* data: db "Doll!  Recently," */;
    /* data: db "he seems to be  " */;
    /* data: db "showing up in   " */;
    /* data: db "many games!@" */;
}

void Dialog045(void) {
    /* data: db "How about some  " */;
    /* data: db "fishing, little " */;
    /* data: db "buddy? I'll only" */;
    /* data: db "charge you 10   " */;
    /* data: db "Rupees...       " */;
    /* data: db "    Fish Not Now" */;
    /* data: db "<ask>" */;
}

void Dialog046(void) {
    /* data: db "You have to have" */;
    /* data: db "more passion!   " */;
    /* data: db "Live a little!@" */;
}

void Dialog047(void) {
    /* data: db "Okay, here's how" */;
    /* data: db "you do it.  Use " */;
    /* data: db "<left> and <right> on the <dpad>" */;
    /* data: db "to aim a cast.  " */;
    /* data: db "Once you hook a " */;
    /* data: db "fish, press the " */;
    /* data: db "Button rapidly  " */;
    /* data: db "to reel him in!@" */;
}

void Dialog048(void) {
    /* data: db "Why not try one " */;
    /* data: db "more time,      " */;
    /* data: db "little buddy?   " */;
    /* data: db "    Cast Not Now" */;
    /* data: db "<ask>" */;
}

void Dialog049(void) {
    /* data: db "Wow! That one   " */;
    /* data: db "got away!  Want " */;
    /* data: db "to try again?   " */;
    /* data: db "    Cast Not Now" */;
    /* data: db "<ask>" */;
}

void Dialog04A(void) {
    /* data: db "Wow! Nice Fish! " */;
    /* data: db "It's a lunker!! " */;
    /* data: db "I'll give you a " */;
    /* data: db "20 Rupee prize! " */;
    /* data: db "Try again?      " */;
    /* data: db "    Cast Not Now" */;
    /* data: db "<ask>" */;
}

void Dialog04B(void) {
    /* data: db "This pond's all " */;
    /* data: db "fished out.  Why" */;
    /* data: db "not try your    " */;
    /* data: db "luck in the sea?" */;
    /* data: db "    Okay No<ask>" */;
}

void Dialog04C(void) {
    /* data: db "Did I say that? " */;
    /* data: db "Forget it, okay?" */;
    /* data: db "Run along now...@" */;
}

void Dialog04D(void) {
    /* data: db "It's a runt!    " */;
    /* data: db "I'll only give  " */;
    /* data: db "you a 5 Rupees  " */;
    /* data: db "prize for that. " */;
    /* data: db "You should try  " */;
    /* data: db "again!          " */;
    /* data: db "    Okay No<ask>" */;
}

void Dialog04E(void) {
    /* data: db "You're short of " */;
    /* data: db "Rupees?  Don't  " */;
    /* data: db "worry about it. " */;
    /* data: db "You just come   " */;
    /* data: db "back when you   " */;
    /* data: db "have more money," */;
    /* data: db "little buddy.@" */;
}

void Dialog04F(void) {
    /* data: db "You've got a    " */;
    /* data: db "Piece of Heart! " */;
    /* data: db "Press SELECT on " */;
    /* data: db "the Subscreen   " */;
    /* data: db "to see.@" */;
}

void Dialog050(void) {
    /* data: db "You collected   " */;
    /* data: db "four Pieces of  " */;
    /* data: db "Heart.  Now, you" */;
    /* data: db "have a complete " */;
    /* data: db "Heart Container!@" */;
}

void Dialog051(void) {
    /* data: db "Brrrr... This is" */;
    /* data: db "a block of solid" */;
    /* data: db "ice!  It's very " */;
    /* data: db "cold!@" */;
}

void Dialog052(void) {
    /* data: db "NYAH NYAH! You  " */;
    /* data: db "can't hurt me as" */;
    /* data: db "long as I have  " */;
    /* data: db "my bottle!@" */;
}

void Dialog053(void) {
    /* data: db "Waaaah! You- you" */;
    /* data: db "broke my bottle!" */;
    /* data: db "Why, you... You " */;
    /* data: db "make me hopping " */;
    /* data: db "mad!!!@" */;
}

void Dialog054(void) {
    /* data: db "Well, #####, ya " */;
    /* data: db "finally snapped " */;
    /* data: db "out of it...    " */;
    /* data: db "Name's Tarin... " */;
    /* data: db "Hope yer feelin'" */;
    /* data: db "better...  What?" */;
    /* data: db "How did I know  " */;
    /* data: db "your name?  You " */;
    /* data: db "think it's weird" */;
    /* data: db "eh?  Well, I saw" */;
    /* data: db "it on the back  " */;
    /* data: db "of this shield!@" */;
    /* data: db "it on back of   " */;
    /* data: db "this shield!@" */;
}

void Dialog055(void) {
    /* data: db "Oh, yeah... Some" */;
    /* data: db "other stuff like" */;
    /* data: db "this washed up  " */;
    /* data: db "on the beach... " */;
    /* data: db "If'n you go look" */;
    /* data: db "watch out for   " */;
    /* data: db "monsters! Ever  " */;
    /* data: db "since you showed" */;
    /* data: db "up, #####, I've " */;
    /* data: db "seen 'em all    " */;
    /* data: db "over the place!@" */;
}

void Dialog056(void) {
    /* data: db "Level 1--       " */;
    /* data: db "     Tail Cave@" */;
}

void Dialog057(void) {
    /* data: db "Level 2--       " */;
    /* data: db "   Bottle Grotto@" */;
}

void Dialog058(void) {
    /* data: db "Level 3--       " */;
    /* data: db "      Key Cavern@" */;
}

void Dialog059(void) {
    /* data: db "Level 4--       " */;
    /* data: db " Angler's Tunnel@" */;
}

void Dialog05A(void) {
    /* data: db "Level 5--       " */;
    /* data: db "   Catfish's Maw@" */;
}

void Dialog05B(void) {
    /* data: db "Level 6--       " */;
    /* data: db "     Face Shrine@" */;
}

void Dialog05C(void) {
    /* data: db "Level 7--       " */;
    /* data: db "   Eagle's Tower@" */;
}

void Dialog05D(void) {
    /* data: db "Level 8--       " */;
    /* data: db "     Turtle Rock@" */;
}

void Dialog05E(void) {
    /* data: db "Wind Fish's Egg @" */;
}

void Dialog05F(void) {
}

void Dialog060(void) {
    /* data: db "Mountain Bridge @" */;
}

void Dialog061(void) {
    /* data: db "Sale's House O' " */;
    /* data: db "    Bananas@" */;
}

void Dialog062(void) {
    /* data: db "Pothole Field@" */;
}

void Dialog063(void) {
    /* data: db "    House By    " */;
    /* data: db "     The Bay@" */;
}

void Dialog064(void) {
    /* data: db "   Trendy Game@" */;
}

void Dialog065(void) {
    /* data: db "  Town Tool Shop@" */;
}

void Dialog066(void) {
    /* data: db "Marin and       " */;
    /* data: db "   Tarin's House@" */;
}

void Dialog067(void) {
    /* data: db "   Witch's Hut@" */;
}

void Dialog068(void) {
    /* data: db "  Yarna Desert@" */;
}

void Dialog069(void) {
    /* data: db "  Ukuku Prairie@" */;
}

void Dialog06A(void) {
    /* data: db "Mysterious Woods@" */;
}

void Dialog06B(void) {
    /* data: db "  Mt. Tamaranch @" */;
}

void Dialog06C(void) {
    /* data: db "     Tal Tal    " */;
    /* data: db " Mountain Range @" */;
}

void Dialog06D(void) {
    /* data: db "  Signpost Maze @" */;
}

void Dialog06E(void) {
    /* data: db "  Mabe Village  @" */;
}

void Dialog06F(void) {
    /* data: db " Animal Village @" */;
}

void Dialog070(void) {
    /* data: db "    Cemetery    @" */;
}

void Dialog071(void) {
    /* data: db "   Rapids Ride  @" */;
}

void Dialog072(void) {
    /* data: db "Koholint Prairie@" */;
}

void Dialog073(void) {
    /* data: db " Toronbo Shores@" */;
}

void Dialog074(void) {
    /* data: db "  Martha's Bay@" */;
}

void Dialog075(void) {
    /* data: db "East of the Bay@" */;
}

void Dialog076(void) {
    /* data: db "  Goponga Swamp@" */;
}

void Dialog077(void) {
    /* data: db "   Face Shrine @" */;
}

void Dialog078(void) {
    /* data: db " Kanalet Castle@" */;
}

void Dialog079(void) {
    /* data: db "Tal Tal Heights@" */;
}

void Dialog07A(void) {
    /* data: db "Tabahl Wasteland@" */;
}

void Dialog07B(void) {
    /* data: db "  South of the  " */;
    /* data: db "    Village@" */;
}

void Dialog07C(void) {
    /* data: db "  Fishing Pond  @" */;
}

void Dialog07D(void) {
    /* data: db "Madam MeowMeow's" */;
    /* data: db "     House      " */;
    /* data: db " Beware of Dog!@" */;
}

void Dialog07E(void) {
    /* data: db "Old Man Ulrira's" */;
    /* data: db "     House      @" */;
}

void Dialog07F(void) {
    /* data: db "Weird Mr. Write @" */;
}

void Dialog080(void) {
    /* data: db " Crazy Tracy's  " */;
    /* data: db "  Health Spa@" */;
}

void Dialog081(void) {
    /* data: db "Quadruplet's    " */;
    /* data: db "      House@" */;
}

void Dialog082(void) {
    /* data: db "  Dream Shrine  @" */;
}

void Dialog083(void) {
    /* data: db "Telephone Booth " */;
    /* data: db "<down> Signpost Maze @" */;
}

void Dialog084(void) {
    /* data: db "Seashell Mansion@" */;
}

void Dialog085(void) {
    /* data: db "Richard's Villa @" */;
}

void Dialog086(void) {
    /* data: db "     Hen House  @" */;
}

void Dialog087(void) {
    /* data: db "Village Library @" */;
}

void Dialog088(void) {
    /* data: db "    Raft Shop   @" */;
}

void Dialog089(void) {
    /* data: db "    Warp Hole   @" */;
}

void Dialog08A(void) {
    /* data: db "This rock has   " */;
    /* data: db "many cracks...  " */;
    /* data: db "There must be   " */;
    /* data: db "some way to     " */;
    /* data: db "shatter it...@" */;
}

void Dialog08B(void) {
    /* data: db "Oh? What a weird" */;
    /* data: db "object!  There  " */;
    /* data: db "must be some way" */;
    /* data: db "to tackle this  " */;
    /* data: db "obstacle.@" */;
}

void Dialog08C(void) {
    /* data: db "Hunh?  This rock" */;
    /* data: db "has a key hole! " */;
    /* data: db "You should come " */;
    /* data: db "back with a key!@" */;
}

void Dialog08D(void) {
    /* data: db "Wow!  This looks" */;
    /* data: db "pretty heavy!   " */;
    /* data: db "You won't be    " */;
    /* data: db "able to lift it " */;
    /* data: db "with just your  " */;
    /* data: db "bare hands...@" */;
}

void Dialog08E(void) {
    /* data: db "Well, it's an   " */;
    /* data: db "Ocarina, but you" */;
    /* data: db "don't know how  " */;
    /* data: db "to play it...@" */;
}

void Dialog08F(void) {
    /* data: db "No!  No!  Poor  " */;
    /* data: db "hen!  Stop that!@" */;
}

void Dialog090(void) {
    /* data: db "You found the   " */;
    /* data: db "Power Bracelet! " */;
    /* data: db "At last, you can" */;
    /* data: db "pick up pots and" */;
    /* data: db "stones!@" */;
}

void Dialog091(void) {
    /* data: db "You got your    " */;
    /* data: db "shield back!    " */;
    /* data: db "Press the button" */;
    /* data: db "and repel       " */;
    /* data: db "enemies with it!@" */;
}

void Dialog092(void) {
    /* data: db "Ahhh... Yess... " */;
    /* data: db "That dust was so" */;
    /* data: db "refreshing...   " */;
    /* data: db "For that, I'll  " */;
    /* data: db "tell you a hint!" */;
    /* data: db "Use a Bomb in a " */;
    /* data: db "place where the " */;
    /* data: db "sand swallows   " */;
    /* data: db "you... There is " */;
    /* data: db "a treat on the  " */;
    /* data: db "other side of   " */;
    /* data: db "the wall... Bye!@" */;
}

void Dialog093(void) {
    /* data: db "You've got the  " */;
    /* data: db "Hook Shot!  Its " */;
    /* data: db "chain stretches " */;
    /* data: db "long when you   " */;
    /* data: db "use it!@" */;
}

void Dialog094(void) {
    /* data: db "You've got the  " */;
    /* data: db "Magic Rod!  Now " */;
    /* data: db "you can burn    " */;
    /* data: db "things! Burn it!" */;
    /* data: db "Burn, baby burn!@" */;
}

void Dialog095(void) {
    /* data: db "You've got the  " */;
    /* data: db "Pegasus Boots!  " */;
    /* data: db "If you hold down" */;
    /* data: db "the Button, you " */;
    /* data: db "can dash!@" */;
}

void Dialog096(void) {
    /* data: db "You've got the  " */;
    /* data: db "Ocarina!  You   " */;
    /* data: db "should learn to " */;
    /* data: db "play many songs!@" */;
}

void Dialog097(void) {
    /* data: db "You've got the  " */;
    /* data: db "Roc's Feather!  " */;
    /* data: db "It feels like   " */;
    /* data: db "your body is a  " */;
    /* data: db "lot lighter!@" */;
}

void Dialog098(void) {
    /* data: db "You've got a    " */;
    /* data: db "Shovel!  Now you" */;
    /* data: db "can feel the joy" */;
    /* data: db "of digging!@" */;
}

void Dialog099(void) {
    /* data: db "You've got some " */;
    /* data: db "Magic Powder!   " */;
    /* data: db "Try sprinkling  " */;
    /* data: db "it on a variety " */;
    /* data: db "of things!@" */;
}

void Dialog09A(void) {
    /* data: db "You've got a    " */;
    /* data: db "bomb! Way to    " */;
    /* data: db "go!@" */;
}

void Dialog09B(void) {
    /* data: db "You found your  " */;
    /* data: db "Sword!  It must " */;
    /* data: db "be yours because" */;
    /* data: db "it has your name" */;
    /* data: db "engraved on it!@" */;
}

void Dialog09C(void) {
    /* data: db "You've got the  " */;
    /* data: db "Flippers! If you" */;
    /* data: db "press the B     " */;
    /* data: db "Button while you" */;
    /* data: db "swim, you can   " */;
    /* data: db "dive underwater!@" */;
}

void Dialog09D(void) {
    /* data: db "You've got the  " */;
    /* data: db "Magnifying Lens!" */;
    /* data: db "This will reveal" */;
    /* data: db "many things you " */;
    /* data: db "couldn't see    " */;
    /* data: db "before!@" */;
}

void Dialog09E(void) {
}

void Dialog09F(void) {
    /* data: db "You've got a    " */;
    /* data: db "new Sword!  You " */;
    /* data: db "should put your " */;
    /* data: db "name on it right" */;
    /* data: db "away!@" */;
}

void Dialog0A0(void) {
    /* data: db "You found the   " */;
    /* data: db "secret medicine!" */;
    /* data: db "You should apply" */;
    /* data: db "this and see    " */;
    /* data: db "what happens!@" */;
}

void Dialog0A1(void) {
    /* data: db "You've got the  " */;
    /* data: db "Tail Key!  Now  " */;
    /* data: db "you can open the" */;
    /* data: db "Tail Cave gate!@" */;
}

void Dialog0A2(void) {
    /* data: db "You've got the  " */;
    /* data: db "Slime Key!  Now " */;
    /* data: db "you can open the" */;
    /* data: db "gate in Ukuku   " */;
    /* data: db "Prairie!@" */;
}

void Dialog0A3(void) {
    /* data: db "You've got the  " */;
    /* data: db "Angler Key!@" */;
}
