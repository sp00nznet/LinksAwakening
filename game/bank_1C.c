/* Auto-generated from LADX Disassembly - Bank 0x1C */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void DialogPointerTable(void);
void DialogCharacterXTable(void);
void DialogCharacterYTable(void);
void Data_01C_45A1(void);
void Data_01C_45C1(void);
void Data_01C_4601(void);
void CodepointToTileMap(void);
void CodepointToDiacritic(void);
void DialogBankTable(void);
void ClearLetterPixels(void);
void Data_01C_4A18(void);
void Data_01C_4A22(void);
void DialogOpenAnimationEnd(void);
void func_01C_4A3D(void);
void func_01C_4A6C(void);
void func_01C_4A71(void);
void func_01C_4A76(void);
void DialogRestoreBGMapLocationTable(void);
void DialogSavedBGMapOffsetTable(void);
void AnimateDialogClosing(void);
void AnimateDialogClosingAttrs(void);
void Dialog108(void);
void Dialog109(void);
void Dialog10A(void);
void Dialog10B(void);
void Dialog10C(void);
void Dialog10D(void);
void Dialog10E(void);
void Dialog10F(void);
void Dialog110(void);
void Dialog111(void);
void Dialog112(void);
void Dialog113(void);
void Dialog114(void);
void Dialog115(void);
void Dialog116(void);
void Dialog117(void);
void Dialog118(void);
void Dialog119(void);
void Dialog11A(void);
void Dialog11B(void);
void Dialog11C(void);
void Dialog11D(void);
void Dialog11E(void);
void Dialog11F(void);
void Dialog120(void);
void Dialog121(void);
void Dialog122(void);
void Dialog123(void);
void Dialog124(void);
void Dialog125(void);
void Dialog126(void);
void Dialog127(void);
void Dialog128(void);
void Dialog129(void);
void Dialog12A(void);
void Dialog12B(void);
void Dialog12C(void);
void Dialog12D(void);
void Dialog12E(void);
void Dialog12F(void);
void Dialog130(void);
void Dialog131(void);
void Dialog132(void);
void Dialog133(void);
void Dialog134(void);
void Dialog135(void);
void Dialog136(void);
void Dialog137(void);
void Dialog138(void);
void Dialog139(void);
void Dialog13A(void);
void Dialog13B(void);
void Dialog13C(void);
void Dialog13D(void);
void Dialog13E(void);
void Dialog13F(void);
void Dialog140(void);
void Dialog141(void);
void Dialog142(void);
void Dialog143(void);
void Dialog144(void);
void Dialog145(void);
void Dialog146(void);
void Dialog147(void);
void Dialog148(void);
void Dialog149(void);
void Dialog14A(void);
void Dialog14B(void);
void Dialog14C(void);
void Dialog14D(void);
void Dialog14E(void);
void Dialog14F(void);
void Dialog150(void);
void Dialog151(void);
void Dialog152(void);
void Dialog153(void);
void Dialog154(void);
void Dialog155(void);
void Dialog156(void);
void Dialog157(void);
void Dialog158(void);
void Dialog159(void);
void Dialog15A(void);
void Dialog15B(void);
void Dialog15C(void);
void Dialog15D(void);
void Dialog15E(void);
void Dialog15F(void);
void Dialog160(void);
void Dialog161(void);
void Dialog162(void);
void Dialog163(void);
void Dialog164(void);
void Dialog165(void);
void Dialog166(void);
void Dialog167(void);
void Dialog168(void);
void Dialog169(void);
void Dialog16A(void);
void Dialog16B(void);
void Dialog16C(void);
void Dialog16D(void);
void Dialog16E(void);
void Dialog16F(void);
void Dialog170(void);
void Dialog171(void);
void Dialog172(void);
void Dialog173(void);
void Dialog174(void);
void Dialog175(void);
void Dialog176(void);
void Dialog177(void);
void Dialog178(void);
void Dialog179(void);
void Dialog17A(void);
void Dialog17B(void);
void Dialog17C(void);
void Dialog17D(void);
void Dialog17E(void);
void Dialog17F(void);
void Dialog180(void);
void Dialog181(void);
void Dialog182(void);
void Dialog183(void);
void Dialog184(void);
void Dialog185(void);
void Dialog186(void);
void Dialog187(void);
void Dialog188(void);
void Dialog189(void);
void Dialog18A(void);
void Dialog18B(void);
void Dialog18C(void);
void Dialog18D(void);
void Dialog18E(void);
void Dialog18F(void);

void DialogPointerTable(void) {
    /* TODO: dialog_pointer Dialog000 */;
    /* TODO: dialog_pointer Dialog001 */;
    /* TODO: dialog_pointer Dialog002 */;
    /* TODO: dialog_pointer Dialog003 */;
    /* TODO: dialog_pointer Dialog004 */;
    /* TODO: dialog_pointer Dialog005 */;
    /* TODO: dialog_pointer Dialog006 */;
    /* TODO: dialog_pointer Dialog007 */;
    /* TODO: dialog_pointer Dialog008 */;
    /* TODO: dialog_pointer Dialog009 */;
    /* TODO: dialog_pointer Dialog00A */;
    /* TODO: dialog_pointer Dialog00B */;
    /* TODO: dialog_pointer Dialog00C */;
    /* TODO: dialog_pointer Dialog00D */;
    /* TODO: dialog_pointer Dialog00E */;
    /* TODO: dialog_pointer Dialog00F */;
    /* TODO: dialog_pointer Dialog010 */;
    /* TODO: dialog_pointer Dialog011 */;
    /* TODO: dialog_pointer Dialog012 */;
    /* TODO: dialog_pointer Dialog013 */;
    /* TODO: dialog_pointer Dialog014 */;
    /* TODO: dialog_pointer Dialog015 */;
    /* TODO: dialog_pointer Dialog016 */;
    /* TODO: dialog_pointer Dialog017 */;
    /* TODO: dialog_pointer Dialog018 */;
    /* TODO: dialog_pointer Dialog019 */;
    /* TODO: dialog_pointer Dialog01A */;
    /* TODO: dialog_pointer Dialog01B */;
    /* TODO: dialog_pointer Dialog01C */;
    /* TODO: dialog_pointer Dialog01D */;
    /* TODO: dialog_pointer Dialog01E */;
    /* TODO: dialog_pointer Dialog01F */;
    /* TODO: dialog_pointer Dialog020 */;
    /* TODO: dialog_pointer Dialog021 */;
    /* TODO: dialog_pointer Dialog022 */;
    /* TODO: dialog_pointer Dialog023 */;
    /* TODO: dialog_pointer Dialog024 */;
    /* TODO: dialog_pointer Dialog025 */;
    /* TODO: dialog_pointer Dialog026 */;
    /* TODO: dialog_pointer Dialog027 */;
    /* TODO: dialog_pointer Dialog028 */;
    /* TODO: dialog_pointer Dialog029 */;
    /* TODO: dialog_pointer Dialog02A */;
    /* TODO: dialog_pointer Dialog02B */;
    /* TODO: dialog_pointer Dialog02C */;
    /* TODO: dialog_pointer Dialog02D */;
    /* TODO: dialog_pointer Dialog02E */;
    /* TODO: dialog_pointer Dialog02F */;
    /* TODO: dialog_pointer Dialog030 */;
    /* TODO: dialog_pointer Dialog031 */;
    /* TODO: dialog_pointer Dialog032 */;
    /* TODO: dialog_pointer Dialog033 */;
    /* TODO: dialog_pointer Dialog034 */;
    /* TODO: dialog_pointer Dialog035 */;
    /* TODO: dialog_pointer Dialog036 */;
    /* TODO: dialog_pointer Dialog037 */;
    /* TODO: dialog_pointer Dialog038 */;
    /* TODO: dialog_pointer Dialog039 */;
    /* TODO: dialog_pointer Dialog03A */;
    /* TODO: dialog_pointer Dialog03B */;
    /* TODO: dialog_pointer Dialog03C */;
    /* TODO: dialog_pointer Dialog03D */;
    /* TODO: dialog_pointer Dialog03E */;
    /* TODO: dialog_pointer Dialog03F */;
    /* TODO: dialog_pointer Dialog040 */;
    /* TODO: dialog_pointer Dialog041 */;
    /* TODO: dialog_pointer Dialog042 */;
    /* TODO: dialog_pointer Dialog043 */;
    /* TODO: dialog_pointer Dialog044 */;
    /* TODO: dialog_pointer Dialog045 */;
    /* TODO: dialog_pointer Dialog046 */;
    /* TODO: dialog_pointer Dialog047 */;
    /* TODO: dialog_pointer Dialog048 */;
    /* TODO: dialog_pointer Dialog049 */;
    /* TODO: dialog_pointer Dialog04A */;
    /* TODO: dialog_pointer Dialog04B */;
    /* TODO: dialog_pointer Dialog04C */;
    /* TODO: dialog_pointer Dialog04D */;
    /* TODO: dialog_pointer Dialog04E */;
    /* TODO: dialog_pointer Dialog04F */;
    /* TODO: dialog_pointer Dialog050 */;
    /* TODO: dialog_pointer Dialog051 */;
    /* TODO: dialog_pointer Dialog052 */;
    /* TODO: dialog_pointer Dialog053 */;
    /* TODO: dialog_pointer Dialog054 */;
    /* TODO: dialog_pointer Dialog055 */;
    /* TODO: dialog_pointer Dialog056 */;
    /* TODO: dialog_pointer Dialog057 */;
    /* TODO: dialog_pointer Dialog058 */;
    /* TODO: dialog_pointer Dialog059 */;
    /* TODO: dialog_pointer Dialog05A */;
    /* TODO: dialog_pointer Dialog05B */;
    /* TODO: dialog_pointer Dialog05C */;
    /* TODO: dialog_pointer Dialog05D */;
    /* TODO: dialog_pointer Dialog05E */;
    /* TODO: dialog_pointer Dialog05F */;
    /* TODO: dialog_pointer Dialog060 */;
    /* TODO: dialog_pointer Dialog061 */;
    /* TODO: dialog_pointer Dialog062 */;
    /* TODO: dialog_pointer Dialog063 */;
    /* TODO: dialog_pointer Dialog064 */;
    /* TODO: dialog_pointer Dialog065 */;
    /* TODO: dialog_pointer Dialog066 */;
    /* TODO: dialog_pointer Dialog067 */;
    /* TODO: dialog_pointer Dialog068 */;
    /* TODO: dialog_pointer Dialog069 */;
    /* TODO: dialog_pointer Dialog06A */;
    /* TODO: dialog_pointer Dialog06B */;
    /* TODO: dialog_pointer Dialog06C */;
    /* TODO: dialog_pointer Dialog06D */;
    /* TODO: dialog_pointer Dialog06E */;
    /* TODO: dialog_pointer Dialog06F */;
    /* TODO: dialog_pointer Dialog070 */;
    /* TODO: dialog_pointer Dialog071 */;
    /* TODO: dialog_pointer Dialog072 */;
    /* TODO: dialog_pointer Dialog073 */;
    /* TODO: dialog_pointer Dialog074 */;
    /* TODO: dialog_pointer Dialog075 */;
    /* TODO: dialog_pointer Dialog076 */;
    /* TODO: dialog_pointer Dialog077 */;
    /* TODO: dialog_pointer Dialog078 */;
    /* TODO: dialog_pointer Dialog079 */;
    /* TODO: dialog_pointer Dialog07A */;
    /* TODO: dialog_pointer Dialog07B */;
    /* TODO: dialog_pointer Dialog07C */;
    /* TODO: dialog_pointer Dialog07D */;
    /* TODO: dialog_pointer Dialog07E */;
    /* TODO: dialog_pointer Dialog07F */;
    /* TODO: dialog_pointer Dialog080 */;
    /* TODO: dialog_pointer Dialog081 */;
    /* TODO: dialog_pointer Dialog082 */;
    /* TODO: dialog_pointer Dialog083 */;
    /* TODO: dialog_pointer Dialog084 */;
    /* TODO: dialog_pointer Dialog085 */;
    /* TODO: dialog_pointer Dialog086 */;
    /* TODO: dialog_pointer Dialog087 */;
    /* TODO: dialog_pointer Dialog088 */;
    /* TODO: dialog_pointer Dialog089 */;
    /* TODO: dialog_pointer Dialog08A */;
    /* TODO: dialog_pointer Dialog08B */;
    /* TODO: dialog_pointer Dialog08C */;
    /* TODO: dialog_pointer Dialog08D */;
    /* TODO: dialog_pointer Dialog08E */;
    /* TODO: dialog_pointer Dialog08F */;
    /* TODO: dialog_pointer Dialog090 */;
    /* TODO: dialog_pointer Dialog091 */;
    /* TODO: dialog_pointer Dialog092 */;
    /* TODO: dialog_pointer Dialog093 */;
    /* TODO: dialog_pointer Dialog094 */;
    /* TODO: dialog_pointer Dialog095 */;
    /* TODO: dialog_pointer Dialog096 */;
    /* TODO: dialog_pointer Dialog097 */;
    /* TODO: dialog_pointer Dialog098 */;
    /* TODO: dialog_pointer Dialog099 */;
    /* TODO: dialog_pointer Dialog09A */;
    /* TODO: dialog_pointer Dialog09B */;
    /* TODO: dialog_pointer Dialog09C */;
    /* TODO: dialog_pointer Dialog09D */;
    /* TODO: dialog_pointer Dialog09E */;
    /* TODO: dialog_pointer Dialog09F */;
    /* TODO: dialog_pointer Dialog0A0 */;
    /* TODO: dialog_pointer Dialog0A1 */;
    /* TODO: dialog_pointer Dialog0A2 */;
    /* TODO: dialog_pointer Dialog0A3 */;
    /* TODO: dialog_pointer Dialog0A4 */;
    /* TODO: dialog_pointer Dialog0A5 */;
    /* TODO: dialog_pointer Dialog0A6 */;
    /* TODO: dialog_pointer Dialog0A7 */;
    /* TODO: dialog_pointer Dialog0A8 */;
    /* TODO: dialog_pointer Dialog0A9 */;
    /* TODO: dialog_pointer Dialog0AA */;
    /* TODO: dialog_pointer Dialog0AB */;
    /* TODO: dialog_pointer Dialog0AC */;
    /* TODO: dialog_pointer Dialog0AD */;
    /* TODO: dialog_pointer Dialog0AE */;
    /* TODO: dialog_pointer Dialog0AF */;
    /* TODO: dialog_pointer Dialog0B0 */;
    /* TODO: dialog_pointer Dialog0B1 */;
    /* TODO: dialog_pointer Dialog0B2 */;
    /* TODO: dialog_pointer Dialog0B3 */;
    /* TODO: dialog_pointer Dialog0B4 */;
    /* TODO: dialog_pointer Dialog0B5 */;
    /* TODO: dialog_pointer Dialog0B6 */;
    /* TODO: dialog_pointer Dialog0B7 */;
    /* TODO: dialog_pointer Dialog0B8 */;
    /* TODO: dialog_pointer Dialog0B9 */;
    /* TODO: dialog_pointer Dialog0BA */;
    /* TODO: dialog_pointer Dialog0BB */;
    /* TODO: dialog_pointer Dialog0BC */;
    /* TODO: dialog_pointer Dialog0BD */;
    /* TODO: dialog_pointer Dialog0BE */;
    /* TODO: dialog_pointer Dialog0BF */;
    /* TODO: dialog_pointer Dialog0C0 */;
    /* TODO: dialog_pointer Dialog0C1 */;
    /* TODO: dialog_pointer Dialog0C2 */;
    /* TODO: dialog_pointer Dialog0C3 */;
    /* TODO: dialog_pointer Dialog0C4 */;
    /* TODO: dialog_pointer Dialog0C5 */;
    /* TODO: dialog_pointer Dialog0C6 */;
    /* TODO: dialog_pointer Dialog0C7 */;
    /* TODO: dialog_pointer Dialog0C8 */;
    /* TODO: dialog_pointer Dialog0C9 */;
    /* TODO: dialog_pointer Dialog0CA */;
    /* TODO: dialog_pointer Dialog0CB */;
    /* TODO: dialog_pointer Dialog0CC */;
    /* TODO: dialog_pointer Dialog0CD */;
    /* TODO: dialog_pointer Dialog0CE */;
    /* TODO: dialog_pointer Dialog0CF */;
    /* TODO: dialog_pointer Dialog0D0 */;
    /* TODO: dialog_pointer Dialog0D1 */;
    /* TODO: dialog_pointer Dialog0D2 */;
    /* TODO: dialog_pointer Dialog0D3 */;
    /* TODO: dialog_pointer Dialog0D4 */;
    /* TODO: dialog_pointer Dialog0D5 */;
    /* TODO: dialog_pointer Dialog0D6 */;
    /* TODO: dialog_pointer Dialog0D7 */;
    /* TODO: dialog_pointer Dialog0D8 */;
    /* TODO: dialog_pointer Dialog0D9 */;
    /* TODO: dialog_pointer Dialog0DA */;
    /* TODO: dialog_pointer Dialog0DB */;
    /* TODO: dialog_pointer Dialog0DC */;
    /* TODO: dialog_pointer Dialog0DD */;
    /* TODO: dialog_pointer Dialog0DE */;
    /* TODO: dialog_pointer Dialog0DF */;
    /* TODO: dialog_pointer Dialog0E0 */;
    /* TODO: dialog_pointer Dialog0E1 */;
    /* TODO: dialog_pointer Dialog0E2 */;
    /* TODO: dialog_pointer Dialog0E3 */;
    /* TODO: dialog_pointer Dialog0E4 */;
    /* TODO: dialog_pointer Dialog0E5 */;
    /* TODO: dialog_pointer Dialog0E6 */;
    /* TODO: dialog_pointer Dialog0E7 */;
    /* TODO: dialog_pointer Dialog0E8 */;
    /* TODO: dialog_pointer Dialog0E9 */;
    /* TODO: dialog_pointer Dialog0EA */;
    /* TODO: dialog_pointer Dialog0EB */;
    /* TODO: dialog_pointer Dialog0EC */;
    /* TODO: dialog_pointer Dialog0ED */;
    /* TODO: dialog_pointer Dialog0EE */;
    /* TODO: dialog_pointer Dialog0EF */;
    /* TODO: dialog_pointer Dialog0F0 */;
    /* TODO: dialog_pointer Dialog0F1 */;
    /* TODO: dialog_pointer Dialog0F2 */;
    /* TODO: dialog_pointer Dialog0F3 */;
    /* TODO: dialog_pointer Dialog0F4 */;
    /* TODO: dialog_pointer Dialog0F5 */;
    /* TODO: dialog_pointer Dialog0F6 */;
    /* TODO: dialog_pointer Dialog0F7 */;
    /* TODO: dialog_pointer Dialog0F8 */;
    /* TODO: dialog_pointer Dialog0F9 */;
    /* TODO: dialog_pointer Dialog0FA */;
    /* TODO: dialog_pointer Dialog0FB */;
    /* TODO: dialog_pointer Dialog0FC */;
    /* TODO: dialog_pointer Dialog0FD */;
    /* TODO: dialog_pointer Dialog0FE */;
    /* TODO: dialog_pointer Dialog0FF */;
    /* TODO: dialog_pointer Dialog100 */;
    /* TODO: dialog_pointer Dialog101 */;
    /* TODO: dialog_pointer Dialog102 */;
    /* TODO: dialog_pointer Dialog103 */;
    /* TODO: dialog_pointer Dialog104 */;
    /* TODO: dialog_pointer Dialog105 */;
    /* TODO: dialog_pointer Dialog106 */;
    /* TODO: dialog_pointer Dialog107 */;
    /* TODO: dialog_pointer Dialog108 */;
    /* TODO: dialog_pointer Dialog109 */;
    /* TODO: dialog_pointer Dialog10A */;
    /* TODO: dialog_pointer Dialog10B */;
    /* TODO: dialog_pointer Dialog10C */;
    /* TODO: dialog_pointer Dialog10D */;
    /* TODO: dialog_pointer Dialog10E */;
    /* TODO: dialog_pointer Dialog10F */;
    /* TODO: dialog_pointer Dialog110 */;
    /* TODO: dialog_pointer Dialog111 */;
    /* TODO: dialog_pointer Dialog112 */;
    /* TODO: dialog_pointer Dialog113 */;
    /* TODO: dialog_pointer Dialog114 */;
    /* TODO: dialog_pointer Dialog115 */;
    /* TODO: dialog_pointer Dialog116 */;
    /* TODO: dialog_pointer Dialog117 */;
    /* TODO: dialog_pointer Dialog118 */;
    /* TODO: dialog_pointer Dialog119 */;
    /* TODO: dialog_pointer Dialog11A */;
    /* TODO: dialog_pointer Dialog11B */;
    /* TODO: dialog_pointer Dialog11C */;
    /* TODO: dialog_pointer Dialog11D */;
    /* TODO: dialog_pointer Dialog11E */;
    /* TODO: dialog_pointer Dialog11F */;
    /* TODO: dialog_pointer Dialog120 */;
    /* TODO: dialog_pointer Dialog121 */;
    /* TODO: dialog_pointer Dialog122 */;
    /* TODO: dialog_pointer Dialog123 */;
    /* TODO: dialog_pointer Dialog124 */;
    /* TODO: dialog_pointer Dialog125 */;
    /* TODO: dialog_pointer Dialog126 */;
    /* TODO: dialog_pointer Dialog127 */;
    /* TODO: dialog_pointer Dialog128 */;
    /* TODO: dialog_pointer Dialog129 */;
    /* TODO: dialog_pointer Dialog12A */;
    /* TODO: dialog_pointer Dialog12B */;
    /* TODO: dialog_pointer Dialog12C */;
    /* TODO: dialog_pointer Dialog12D */;
    /* TODO: dialog_pointer Dialog12E */;
    /* TODO: dialog_pointer Dialog12F */;
    /* TODO: dialog_pointer Dialog130 */;
    /* TODO: dialog_pointer Dialog131 */;
    /* TODO: dialog_pointer Dialog132 */;
    /* TODO: dialog_pointer Dialog133 */;
    /* TODO: dialog_pointer Dialog134 */;
    /* TODO: dialog_pointer Dialog135 */;
    /* TODO: dialog_pointer Dialog136 */;
    /* TODO: dialog_pointer Dialog137 */;
    /* TODO: dialog_pointer Dialog138 */;
    /* TODO: dialog_pointer Dialog139 */;
    /* TODO: dialog_pointer Dialog13A */;
    /* TODO: dialog_pointer Dialog13B */;
    /* TODO: dialog_pointer Dialog13C */;
    /* TODO: dialog_pointer Dialog13D */;
    /* TODO: dialog_pointer Dialog13E */;
    /* TODO: dialog_pointer Dialog13F */;
    /* TODO: dialog_pointer Dialog140 */;
    /* TODO: dialog_pointer Dialog141 */;
    /* TODO: dialog_pointer Dialog142 */;
    /* TODO: dialog_pointer Dialog143 */;
    /* TODO: dialog_pointer Dialog144 */;
    /* TODO: dialog_pointer Dialog145 */;
    /* TODO: dialog_pointer Dialog146 */;
    /* TODO: dialog_pointer Dialog147 */;
    /* TODO: dialog_pointer Dialog148 */;
    /* TODO: dialog_pointer Dialog149 */;
    /* TODO: dialog_pointer Dialog14A */;
    /* TODO: dialog_pointer Dialog14B */;
    /* TODO: dialog_pointer Dialog14C */;
    /* TODO: dialog_pointer Dialog14D */;
    /* TODO: dialog_pointer Dialog14E */;
    /* TODO: dialog_pointer Dialog14F */;
    /* TODO: dialog_pointer Dialog150 */;
    /* TODO: dialog_pointer Dialog151 */;
    /* TODO: dialog_pointer Dialog152 */;
    /* TODO: dialog_pointer Dialog153 */;
    /* TODO: dialog_pointer Dialog154 */;
    /* TODO: dialog_pointer Dialog155 */;
    /* TODO: dialog_pointer Dialog156 */;
    /* TODO: dialog_pointer Dialog157 */;
    /* TODO: dialog_pointer Dialog158 */;
    /* TODO: dialog_pointer Dialog159 */;
    /* TODO: dialog_pointer Dialog15A */;
    /* TODO: dialog_pointer Dialog15B */;
    /* TODO: dialog_pointer Dialog15C */;
    /* TODO: dialog_pointer Dialog15D */;
    /* TODO: dialog_pointer Dialog15E */;
    /* TODO: dialog_pointer Dialog15F */;
    /* TODO: dialog_pointer Dialog160 */;
    /* TODO: dialog_pointer Dialog161 */;
    /* TODO: dialog_pointer Dialog162 */;
    /* TODO: dialog_pointer Dialog163 */;
    /* TODO: dialog_pointer Dialog164 */;
    /* TODO: dialog_pointer Dialog165 */;
    /* TODO: dialog_pointer Dialog166 */;
    /* TODO: dialog_pointer Dialog167 */;
    /* TODO: dialog_pointer Dialog168 */;
    /* TODO: dialog_pointer Dialog169 */;
    /* TODO: dialog_pointer Dialog16A */;
    /* TODO: dialog_pointer Dialog16B */;
    /* TODO: dialog_pointer Dialog16C */;
    /* TODO: dialog_pointer Dialog16D */;
    /* TODO: dialog_pointer Dialog16E */;
    /* TODO: dialog_pointer Dialog16F */;
    /* TODO: dialog_pointer Dialog170 */;
    /* TODO: dialog_pointer Dialog171 */;
    /* TODO: dialog_pointer Dialog172 */;
    /* TODO: dialog_pointer Dialog173 */;
    /* TODO: dialog_pointer Dialog174 */;
    /* TODO: dialog_pointer Dialog175 */;
    /* TODO: dialog_pointer Dialog176 */;
    /* TODO: dialog_pointer Dialog177 */;
    /* TODO: dialog_pointer Dialog178 */;
    /* TODO: dialog_pointer Dialog179 */;
    /* TODO: dialog_pointer Dialog17A */;
    /* TODO: dialog_pointer Dialog17B */;
    /* TODO: dialog_pointer Dialog17C */;
    /* TODO: dialog_pointer Dialog17D */;
    /* TODO: dialog_pointer Dialog17E */;
    /* TODO: dialog_pointer Dialog17F */;
    /* TODO: dialog_pointer Dialog180 */;
    /* TODO: dialog_pointer Dialog181 */;
    /* TODO: dialog_pointer Dialog182 */;
    /* TODO: dialog_pointer Dialog183 */;
    /* TODO: dialog_pointer Dialog184 */;
    /* TODO: dialog_pointer Dialog185 */;
    /* TODO: dialog_pointer Dialog186 */;
    /* TODO: dialog_pointer Dialog187 */;
    /* TODO: dialog_pointer Dialog188 */;
    /* TODO: dialog_pointer Dialog189 */;
    /* TODO: dialog_pointer Dialog18A */;
    /* TODO: dialog_pointer Dialog18B */;
    /* TODO: dialog_pointer Dialog18C */;
    /* TODO: dialog_pointer Dialog18D */;
    /* TODO: dialog_pointer Dialog18E */;
    /* TODO: dialog_pointer Dialog18F */;
    /* TODO: dialog_pointer Dialog190 */;
    /* TODO: dialog_pointer Dialog191 */;
    /* TODO: dialog_pointer Dialog192 */;
    /* TODO: dialog_pointer Dialog193 */;
    /* TODO: dialog_pointer Dialog194 */;
    /* TODO: dialog_pointer Dialog195 */;
    /* TODO: dialog_pointer Dialog196 */;
    /* TODO: dialog_pointer Dialog197 */;
    /* TODO: dialog_pointer Dialog198 */;
    /* TODO: dialog_pointer Dialog199 */;
    /* TODO: dialog_pointer Dialog19A */;
    /* TODO: dialog_pointer Dialog19B */;
    /* TODO: dialog_pointer Dialog19C */;
    /* TODO: dialog_pointer Dialog19D */;
    /* TODO: dialog_pointer Dialog19E */;
    /* TODO: dialog_pointer Dialog19F */;
    /* TODO: dialog_pointer Dialog1A0 */;
    /* TODO: dialog_pointer Dialog1A1 */;
    /* TODO: dialog_pointer Dialog1A2 */;
    /* TODO: dialog_pointer Dialog1A3 */;
    /* TODO: dialog_pointer Dialog1A4 */;
    /* TODO: dialog_pointer Dialog1A5 */;
    /* TODO: dialog_pointer Dialog1A6 */;
    /* TODO: dialog_pointer Dialog1A7 */;
    /* TODO: dialog_pointer Dialog1A8 */;
    /* TODO: dialog_pointer Dialog1A9 */;
    /* TODO: dialog_pointer Dialog1AA */;
    /* TODO: dialog_pointer Dialog1AB */;
    /* TODO: dialog_pointer Dialog1AC */;
    /* TODO: dialog_pointer Dialog1AD */;
    /* TODO: dialog_pointer Dialog1AE */;
    /* TODO: dialog_pointer Dialog1AF */;
    /* TODO: dialog_pointer Dialog1B0 */;
    /* TODO: dialog_pointer Dialog1B1 */;
    /* TODO: dialog_pointer Dialog1B2 */;
    /* TODO: dialog_pointer Dialog1B3 */;
    /* TODO: dialog_pointer Dialog1B4 */;
    /* TODO: dialog_pointer Dialog1B5 */;
    /* TODO: dialog_pointer Dialog1B6 */;
    /* TODO: dialog_pointer Dialog1B7 */;
    /* TODO: dialog_pointer Dialog1B8 */;
    /* TODO: dialog_pointer Dialog1B9 */;
    /* TODO: dialog_pointer Dialog1BA */;
    /* TODO: dialog_pointer Dialog1BB */;
    /* TODO: dialog_pointer Dialog1BC */;
    /* TODO: dialog_pointer Dialog1BD */;
    /* TODO: dialog_pointer Dialog1BE */;
    /* TODO: dialog_pointer Dialog1BF */;
    /* TODO: dialog_pointer Dialog1C0 */;
    /* TODO: dialog_pointer Dialog1C1 */;
    /* TODO: dialog_pointer Dialog1C2 */;
    /* TODO: dialog_pointer Dialog1C3 */;
    /* TODO: dialog_pointer Dialog1C4 */;
    /* TODO: dialog_pointer Dialog1C5 */;
    /* TODO: dialog_pointer Dialog1C6 */;
    /* TODO: dialog_pointer Dialog1C7 */;
    /* TODO: dialog_pointer Dialog1C8 */;
    /* TODO: dialog_pointer Dialog1C9 */;
    /* TODO: dialog_pointer Dialog1CA */;
    /* TODO: dialog_pointer Dialog1CB */;
    /* TODO: dialog_pointer Dialog1CC */;
    /* TODO: dialog_pointer Dialog1CD */;
    /* TODO: dialog_pointer Dialog1CE */;
    /* TODO: dialog_pointer Dialog1CF */;
    /* TODO: dialog_pointer Dialog1D0 */;
    /* TODO: dialog_pointer Dialog1D1 */;
    /* TODO: dialog_pointer Dialog1D2 */;
    /* TODO: dialog_pointer Dialog1D3 */;
    /* TODO: dialog_pointer Dialog1D4 */;
    /* TODO: dialog_pointer Dialog1D5 */;
    /* TODO: dialog_pointer Dialog1D6 */;
    /* TODO: dialog_pointer Dialog1D7 */;
    /* TODO: dialog_pointer Dialog1D8 */;
    /* TODO: dialog_pointer Dialog1D9 */;
    /* TODO: dialog_pointer Dialog1DA */;
    /* TODO: dialog_pointer Dialog1DB */;
    /* TODO: dialog_pointer Dialog1DC */;
    /* TODO: dialog_pointer Dialog1DD */;
    /* TODO: dialog_pointer Dialog1DE */;
    /* TODO: dialog_pointer Dialog1DF */;
    /* TODO: dialog_pointer Dialog1E0 */;
    /* TODO: dialog_pointer Dialog1E1 */;
    /* TODO: dialog_pointer Dialog1E2 */;
    /* TODO: dialog_pointer Dialog1E3 */;
    /* TODO: dialog_pointer Dialog1E4 */;
    /* TODO: dialog_pointer Dialog1E5 */;
    /* TODO: dialog_pointer Dialog1E6 */;
    /* TODO: dialog_pointer Dialog1E7 */;
    /* TODO: dialog_pointer Dialog1E8 */;
    /* TODO: dialog_pointer Dialog1E9 */;
    /* TODO: dialog_pointer Dialog1EA */;
    /* TODO: dialog_pointer Dialog1EB */;
    /* TODO: dialog_pointer Dialog1EC */;
    /* TODO: dialog_pointer Dialog1ED */;
    /* TODO: dialog_pointer Dialog1EE */;
    /* TODO: dialog_pointer Dialog1EF */;
    /* TODO: dialog_pointer Dialog1F0 */;
    /* TODO: dialog_pointer Dialog1F1 */;
    /* TODO: dialog_pointer Dialog1F2 */;
    /* TODO: dialog_pointer Dialog1F3 */;
    /* TODO: dialog_pointer Dialog1F4 */;
    /* TODO: dialog_pointer Dialog1F5 */;
    /* TODO: dialog_pointer Dialog1F6 */;
    /* TODO: dialog_pointer Dialog1F7 */;
    /* TODO: dialog_pointer Dialog1F8 */;
    /* TODO: dialog_pointer Dialog1F9 */;
    /* TODO: dialog_pointer Dialog1FA */;
    /* TODO: dialog_pointer Dialog1FB */;
    /* TODO: dialog_pointer Dialog1FC */;
    /* TODO: dialog_pointer Dialog1FD */;
    /* TODO: dialog_pointer Dialog1FE */;
    /* TODO: dialog_pointer Dialog1FF */;
    /* TODO: dialog_pointer Dialog200 */;
    /* TODO: dialog_pointer Dialog201 */;
    /* TODO: dialog_pointer Dialog202 */;
    /* TODO: dialog_pointer Dialog203 */;
    /* TODO: dialog_pointer Dialog204 */;
    /* TODO: dialog_pointer Dialog205 */;
    /* TODO: dialog_pointer Dialog206 */;
    /* TODO: dialog_pointer Dialog207 */;
    /* TODO: dialog_pointer Dialog208 */;
    /* TODO: dialog_pointer Dialog209 */;
    /* TODO: dialog_pointer Dialog20A */;
    /* TODO: dialog_pointer Dialog20B */;
    /* TODO: dialog_pointer Dialog20C */;
    /* TODO: dialog_pointer Dialog20D */;
    /* TODO: dialog_pointer Dialog20E */;
    /* TODO: dialog_pointer Dialog20F */;
    /* TODO: dialog_pointer Dialog210 */;
    /* TODO: dialog_pointer Dialog211 */;
    /* TODO: dialog_pointer Dialog212 */;
    /* TODO: dialog_pointer Dialog213 */;
    /* TODO: dialog_pointer Dialog214 */;
    /* TODO: dialog_pointer Dialog215 */;
    /* TODO: dialog_pointer Dialog216 */;
    /* TODO: dialog_pointer Dialog217 */;
    /* TODO: dialog_pointer Dialog218 */;
    /* TODO: dialog_pointer Dialog219 */;
    /* TODO: dialog_pointer Dialog21A */;
    /* TODO: dialog_pointer Dialog21B */;
    /* TODO: dialog_pointer Dialog21C */;
    /* TODO: dialog_pointer Dialog21D */;
    /* TODO: dialog_pointer Dialog21E */;
    /* TODO: dialog_pointer Dialog21F */;
    /* TODO: dialog_pointer Dialog220 */;
    /* TODO: dialog_pointer Dialog221 */;
    /* TODO: dialog_pointer Dialog222 */;
    /* TODO: dialog_pointer Dialog223 */;
    /* TODO: dialog_pointer Dialog224 */;
    /* TODO: dialog_pointer Dialog225 */;
    /* TODO: dialog_pointer Dialog226 */;
    /* TODO: dialog_pointer Dialog227 */;
    /* TODO: dialog_pointer Dialog228 */;
    /* TODO: dialog_pointer Dialog229 */;
    /* TODO: dialog_pointer Dialog22A */;
    /* TODO: dialog_pointer Dialog22B */;
    /* TODO: dialog_pointer Dialog22C */;
    /* TODO: dialog_pointer Dialog22D */;
    /* TODO: dialog_pointer Dialog22E */;
    /* TODO: dialog_pointer Dialog22F */;
    /* TODO: dialog_pointer Dialog230 */;
    /* TODO: dialog_pointer Dialog231 */;
    /* TODO: dialog_pointer Dialog232 */;
    /* TODO: dialog_pointer Dialog233 */;
    /* TODO: dialog_pointer Dialog234 */;
    /* TODO: dialog_pointer Dialog235 */;
    /* TODO: dialog_pointer Dialog236 */;
    /* TODO: dialog_pointer Dialog237 */;
    /* TODO: dialog_pointer Dialog238 */;
    /* TODO: dialog_pointer Dialog239 */;
    /* TODO: dialog_pointer Dialog23A */;
    /* TODO: dialog_pointer Dialog23B */;
    /* TODO: dialog_pointer Dialog23C */;
    /* TODO: dialog_pointer Dialog23D */;
    /* TODO: dialog_pointer Dialog23E */;
    /* TODO: dialog_pointer Dialog23F */;
    /* TODO: dialog_pointer Dialog240 */;
    /* TODO: dialog_pointer Dialog241 */;
    /* TODO: dialog_pointer Dialog242 */;
    /* TODO: dialog_pointer Dialog243 */;
    /* TODO: dialog_pointer Dialog244 */;
    /* TODO: dialog_pointer Dialog245 */;
    /* TODO: dialog_pointer Dialog246 */;
    /* TODO: dialog_pointer Dialog247 */;
    /* TODO: dialog_pointer Dialog248 */;
    /* TODO: dialog_pointer Dialog249 */;
    /* TODO: dialog_pointer Dialog24A */;
    /* TODO: dialog_pointer Dialog24B */;
    /* TODO: dialog_pointer Dialog24C */;
    /* TODO: dialog_pointer Dialog24D */;
    /* TODO: dialog_pointer Dialog24E */;
    /* TODO: dialog_pointer Dialog24F */;
    /* TODO: dialog_pointer Dialog250 */;
    /* TODO: dialog_pointer Dialog251 */;
    /* TODO: dialog_pointer Dialog252 */;
    /* TODO: dialog_pointer Dialog253 */;
    /* TODO: dialog_pointer Dialog254 */;
    /* TODO: dialog_pointer Dialog255 */;
    /* TODO: dialog_pointer Dialog256 */;
    /* TODO: dialog_pointer Dialog257 */;
    /* TODO: dialog_pointer Dialog258 */;
    /* TODO: dialog_pointer Dialog259 */;
    /* TODO: dialog_pointer Dialog25A */;
    /* TODO: dialog_pointer Dialog25B */;
    /* TODO: dialog_pointer Dialog25C */;
    /* TODO: dialog_pointer Dialog25D */;
    /* TODO: dialog_pointer Dialog25E */;
    /* TODO: dialog_pointer Dialog25F */;
    /* TODO: dialog_pointer Dialog260 */;
    /* TODO: dialog_pointer Dialog261 */;
    /* TODO: dialog_pointer Dialog262 */;
    /* TODO: dialog_pointer Dialog263 */;
    /* TODO: dialog_pointer Dialog264 */;
    /* TODO: dialog_pointer Dialog265 */;
    /* TODO: dialog_pointer Dialog266 */;
    /* TODO: dialog_pointer Dialog267 */;
    /* TODO: dialog_pointer Dialog268 */;
    /* TODO: dialog_pointer Dialog269 */;
    /* TODO: dialog_pointer Dialog26A */;
    /* TODO: dialog_pointer Dialog26B */;
    /* TODO: dialog_pointer Dialog26C */;
    /* TODO: dialog_pointer Dialog26D */;
    /* TODO: dialog_pointer Dialog26E */;
    /* TODO: dialog_pointer Dialog26F */;
    /* TODO: dialog_pointer Dialog270 */;
    /* TODO: dialog_pointer Dialog271 */;
    /* TODO: dialog_pointer Dialog272 */;
    /* TODO: dialog_pointer Dialog273 */;
    /* TODO: dialog_pointer Dialog274 */;
    /* TODO: dialog_pointer Dialog275 */;
    /* TODO: dialog_pointer Dialog276 */;
    /* TODO: dialog_pointer Dialog277 */;
    /* TODO: dialog_pointer Dialog278 */;
    /* TODO: dialog_pointer Dialog279 */;
    /* TODO: dialog_pointer Dialog27A */;
    /* TODO: dialog_pointer Dialog27B */;
    /* TODO: dialog_pointer Dialog27C */;
    /* TODO: dialog_pointer Dialog27D */;
    /* TODO: dialog_pointer Dialog27E */;
    /* TODO: dialog_pointer Dialog27F */;
    /* TODO: dialog_pointer Dialog280 */;
    /* TODO: dialog_pointer Dialog281 */;
    /* TODO: dialog_pointer Dialog282 */;
    /* TODO: dialog_pointer Dialog283 */;
    /* TODO: dialog_pointer Dialog284 */;
    /* TODO: dialog_pointer Dialog285 */;
    /* TODO: dialog_pointer Dialog286 */;
    /* TODO: dialog_pointer Dialog287 */;
    /* TODO: dialog_pointer Dialog288 */;
    /* TODO: dialog_pointer Dialog289 */;
    /* TODO: dialog_pointer Dialog28A */;
    /* TODO: dialog_pointer Dialog28B */;
    /* TODO: dialog_pointer Dialog28C */;
    /* TODO: dialog_pointer Dialog28D */;
    /* TODO: dialog_pointer Dialog28E */;
    /* TODO: dialog_pointer Dialog28F */;
    /* TODO: dialog_pointer Dialog290 */;
    /* TODO: dialog_pointer Dialog291 */;
    /* TODO: dialog_pointer Dialog292 */;
    /* TODO: dialog_pointer Dialog293 */;
    /* TODO: dialog_pointer Dialog294 */;
    /* TODO: dialog_pointer Dialog295 */;
    /* TODO: dialog_pointer Dialog296 */;
    /* TODO: dialog_pointer Dialog297 */;
    /* TODO: dialog_pointer Dialog298 */;
    /* TODO: dialog_pointer Dialog299 */;
    /* TODO: dialog_pointer Dialog29A */;
    /* TODO: dialog_pointer Dialog29B */;
    /* TODO: dialog_pointer Dialog29C */;
    /* TODO: dialog_pointer Dialog29D */;
    /* TODO: dialog_pointer Dialog29E */;
    /* TODO: dialog_pointer Dialog29F */;
    /* TODO: dialog_pointer Dialog2A0 */;
    /* TODO: dialog_pointer Dialog2A1 */;
    /* TODO: dialog_pointer Dialog2A2 */;
    /* TODO: dialog_pointer Dialog2A3 */;
    /* TODO: dialog_pointer Dialog2A4 */;
    /* TODO: dialog_pointer Dialog2A5 */;
    /* TODO: dialog_pointer Dialog2A6 */;
    /* TODO: dialog_pointer Dialog2A7 */;
    /* TODO: dialog_pointer Dialog2A8 */;
    /* TODO: dialog_pointer Dialog2A9 */;
    /* TODO: dialog_pointer Dialog2AA */;
    /* TODO: dialog_pointer Dialog2AB */;
    /* TODO: dialog_pointer Dialog2AC */;
    /* TODO: dialog_pointer Dialog2AD */;
    /* TODO: dialog_pointer Dialog2AE */;
    /* TODO: dialog_pointer Dialog2AF */;
}

void DialogCharacterXTable(void) {
    /* data: db $00, $10, $20, $30, $40, $50, $60, $70 */;
    /* data: db $80, $90, $A0, $B0, $C0, $D0, $E0, $F0 */;
    /* data: db $00, $10, $20, $30, $40, $50, $60, $70 */;
    /* data: db $80, $90, $A0, $B0, $C0, $D0, $E0, $F0 */;
}

void DialogCharacterYTable(void) {
    /* data: db $8D, $8D, $8D, $8D, $8D, $8D, $8D, $8D */;
    /* data: db $8D, $8D, $8D, $8D, $8D, $8D, $8D, $8D */;
    /* data: db $8E, $8E, $8E, $8E, $8E, $8E, $8E, $8E */;
    /* data: db $8E, $8E, $8E, $8E, $8E, $8E, $8E, $8E */;
}

void Data_01C_45A1(void) {
    /* data: db $D0, $D1, $D2, $D3, $D4, $D5, $D6, $D7 */;
    /* data: db $D8, $D9, $DA, $DB, $DC, $DD, $DE, $DF */;
    /* data: db $E0, $E1, $E2, $E3, $E4, $E5, $E6, $E7 */;
    /* data: db $E8, $E9, $EA, $EB, $EC, $ED, $EE, $EF */;
}

void Data_01C_45C1(void) {
    /* data: db $98, $98, $98, $98, $98, $98, $98, $98 */;
    /* data: db $98, $98, $98, $98, $98, $98, $98, $98 */;
    /* data: db $98, $98, $98, $98, $98, $98, $98, $98 */;
    /* data: db $98, $98, $98, $98, $98, $98, $98, $98 */;
    /* data: db $99, $99, $99, $99, $99, $99, $99, $99 */;
    /* data: db $99, $99, $99, $99, $99, $99, $99, $99 */;
    /* data: db $99, $99, $99, $99, $99, $99, $99, $99 */;
    /* data: db $99, $99, $99, $99, $99, $99, $99, $99 */;
}

void Data_01C_4601(void) {
    /* data: db $42, $43, $44, $45, $46, $47, $48, $49 */;
    /* data: db $4A, $4B, $4C, $4D, $4E, $4F, $50, $51 */;
    /* data: db $82, $83, $84, $85, $86, $87, $88, $89 */;
    /* data: db $8A, $8B, $8C, $8D, $8E, $8F, $90, $91 */;
    /* data: db $62, $63, $64, $65, $66, $67, $68, $69 */;
    /* data: db $6A, $6B, $6C, $6D, $6E, $6F, $70, $71 */;
    /* data: db $A2, $A3, $A4, $A5, $A6, $A7, $A8, $A9 */;
    /* data: db $AA, $AB, $AC, $AD, $AE, $AF, $B0, $B1 */;
}

void CodepointToTileMap(void) {
    /* data: db 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0 */;
    /* data: db 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0 */;
    /* data: db $7e, $3d, $41, 0  , $8a, $8b, $44, $40, $45, $46, $8c, $8d, $3a, $3f, $3b, 0 */;
    /* data: db $70, $71, $72, $73, $74, $75, $76, $77, $78, $79, $42, $43, $8e, 0  , $8f, $3c */;
    /* data: db 0  , 0  , $01, $02, $03, $04, $05, $06, $07, $08, $09, $0a, $0b, $0c, $0d, $0e */;
    /* data: db $0f, $10, $11, $12, $13, $14, $15, $16, $17, $18, $19, 0  , 0  , 0  , $40, 0 */;
    /* data: db 0  , $1a, $1b, $1c, $1d, $1e, $1f, $20, $21, $22, $23, $24, $25, $26, $27, $28 */;
    /* data: db $29, $2a, $2b, $2c, $2d, $2e, $2f, $30, $31, $32, $3e, 0  , 0  , 0  , 0  , 0 */;
    /* data: db $47, $48, $49, $4a, $4b, $4c, $4d, $4e, $4f, $50, $51, $52, $53, $59, $5a, $5b */;
    /* data: db $5c, $5d, $59, $5a, $5b, $5c, $5d, $32, $6f, $6d, $6e, 0  , 0  , 0  , 0  , 0 */;
    /* data: db $3d, $3c, $3f, $7e, $39, $3a, $3b, $7a, $7b, 0  , 0  , 0  , 0  , 0  , 0  , 0 */;
    /* data: db $70, $71, $72, $73, $74, $75, $76, $77, $78, $79, $9b, $9c, $9d, $9e, $9f, $38 */;
    /* data: db 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0 */;
    /* data: db $80, $81, $82, $83, $84, $85, $86, $87, $88, $89, $8a, $8b, $8c, $8d, $8e, $8f */;
    /* data: db $88, $90, $91, $92, $93, $94, $95, $89, $96, $97, $98, $99, $9a, $87, $86, 0 */;
    /* data: db $34, $35, $36, $37, 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , $7e, 0  , 0 */;
}

void CodepointToDiacritic(void) {
    DialogBankTable();
}

void DialogBankTable(void) {
    /* data: db BANK(Dialog000) */;
    /* data: db BANK(Dialog001) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog002) */;
    /* data: db BANK(Dialog003) */;
    /* data: db BANK(Dialog004) */;
    /* data: db BANK(Dialog005) */;
    /* data: db BANK(Dialog006) */;
    /* data: db BANK(Dialog007) */;
    /* data: db BANK(Dialog008) */;
    /* data: db BANK(Dialog009) */;
    /* data: db BANK(Dialog00A) */;
    /* data: db BANK(Dialog00B) */;
    /* data: db BANK(Dialog00C) */;
    /* data: db BANK(Dialog00D) */;
    /* data: db BANK(Dialog00E) */;
    /* data: db BANK(Dialog00F) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog010) */;
    /* data: db BANK(Dialog011) */;
    /* data: db BANK(Dialog012) */;
    /* data: db BANK(Dialog013) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog014) */;
    /* data: db BANK(Dialog015) */;
    /* data: db BANK(Dialog016) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog017) */;
    /* data: db BANK(Dialog018) */;
    /* data: db BANK(Dialog019) */;
    /* data: db BANK(Dialog01A) */;
    /* data: db BANK(Dialog01B) */;
    /* data: db BANK(Dialog01C) */;
    /* data: db BANK(Dialog01D) */;
    /* data: db BANK(Dialog01E) */;
    /* data: db BANK(Dialog01F) */;
    /* data: db BANK(Dialog020) */;
    /* data: db BANK(Dialog021) */;
    /* data: db BANK(Dialog022) */;
    /* data: db BANK(Dialog023) */;
    /* data: db BANK(Dialog024) */;
    /* data: db BANK(Dialog025) */;
    /* data: db BANK(Dialog026) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog027) */;
    /* data: db BANK(Dialog028) */;
    /* data: db BANK(Dialog029) */;
    /* data: db BANK(Dialog02A) */;
    /* data: db BANK(Dialog02B) */;
    /* data: db BANK(Dialog02C) */;
    /* data: db BANK(Dialog02D) */;
    /* data: db BANK(Dialog02E) */;
    /* data: db BANK(Dialog02F) */;
    /* data: db BANK(Dialog030) */;
    /* data: db BANK(Dialog031) */;
    /* data: db BANK(Dialog032) */;
    /* data: db BANK(Dialog033) */;
    /* data: db BANK(Dialog034) */;
    /* data: db BANK(Dialog035) */;
    /* data: db BANK(Dialog036) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog037) */;
    /* data: db BANK(Dialog038) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog039) */;
    /* data: db BANK(Dialog03A) */;
    /* data: db BANK(Dialog03B) */;
    /* data: db BANK(Dialog03C) */;
    /* data: db BANK(Dialog03D) */;
    /* data: db BANK(Dialog03E) */;
    /* data: db BANK(Dialog03F) */;
    /* data: db BANK(Dialog040) */;
    /* data: db BANK(Dialog041) */;
    /* data: db BANK(Dialog042) */;
    /* data: db BANK(Dialog043) */;
    /* data: db BANK(Dialog044) */;
    /* data: db BANK(Dialog045) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog046) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog047) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog048) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog049) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog04A) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog04B) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog04C) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog04D) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog04E) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog04F) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog050) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog051) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog052) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog053) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog054) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog055) */;
    /* data: db BANK(Dialog056) */;
    /* data: db BANK(Dialog057) */;
    /* data: db BANK(Dialog058) */;
    /* data: db BANK(Dialog059) */;
    /* data: db BANK(Dialog05A) */;
    /* data: db BANK(Dialog05B) */;
    /* data: db BANK(Dialog05C) */;
    /* data: db BANK(Dialog05D) */;
    /* data: db BANK(Dialog05E) */;
    /* data: db BANK(Dialog05F) */;
    /* data: db BANK(Dialog060) */;
    /* data: db BANK(Dialog061) */;
    /* data: db BANK(Dialog062) */;
    /* data: db BANK(Dialog063) */;
    /* data: db BANK(Dialog064) */;
    /* data: db BANK(Dialog065) */;
    /* data: db BANK(Dialog066) */;
    /* data: db BANK(Dialog067) */;
    /* data: db BANK(Dialog068) */;
    /* data: db BANK(Dialog069) */;
    /* data: db BANK(Dialog06A) */;
    /* data: db BANK(Dialog06B) */;
    /* data: db BANK(Dialog06C) */;
    /* data: db BANK(Dialog06D) */;
    /* data: db BANK(Dialog06E) */;
    /* data: db BANK(Dialog06F) */;
    /* data: db BANK(Dialog070) */;
    /* data: db BANK(Dialog071) */;
    /* data: db BANK(Dialog072) */;
    /* data: db BANK(Dialog073) */;
    /* data: db BANK(Dialog074) */;
    /* data: db BANK(Dialog075) */;
    /* data: db BANK(Dialog076) */;
    /* data: db BANK(Dialog077) */;
    /* data: db BANK(Dialog078) */;
    /* data: db BANK(Dialog079) */;
    /* data: db BANK(Dialog07A) */;
    /* data: db BANK(Dialog07B) */;
    /* data: db BANK(Dialog07C) */;
    /* data: db BANK(Dialog07D) */;
    /* data: db BANK(Dialog07E) */;
    /* data: db BANK(Dialog07F) */;
    /* data: db BANK(Dialog080) */;
    /* data: db BANK(Dialog081) */;
    /* data: db BANK(Dialog082) */;
    /* data: db BANK(Dialog083) */;
    /* data: db BANK(Dialog084) */;
    /* data: db BANK(Dialog085) */;
    /* data: db BANK(Dialog086) */;
    /* data: db BANK(Dialog087) */;
    /* data: db BANK(Dialog088) */;
    /* data: db BANK(Dialog089) */;
    /* data: db BANK(Dialog08A) */;
    /* data: db BANK(Dialog08B) */;
    /* data: db BANK(Dialog08C) */;
    /* data: db BANK(Dialog08D) */;
    /* data: db BANK(Dialog08E) */;
    /* data: db BANK(Dialog08F) */;
    /* data: db BANK(Dialog090) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog091) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog092) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog093) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog094) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog095) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog096) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog097) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog098) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog099) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog09A) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog09B) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog09C) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog09D) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog09E) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog09F) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0A0) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0A1) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0A2) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0A3) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0A4) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0A5) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0A6) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0A7) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0A8) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0A9) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0AA) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0AB) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0AC) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0AD) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0AE) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0AF) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0B0) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0B1) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0B2) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0B3) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0B4) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0B5) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0B6) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0B7) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0B8) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0B9) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0BA) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0BB) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0BC) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0BD) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0BE) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0BF) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0C0) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0C1) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0C2) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0C3) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0C4) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0C5) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0C6) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0C7) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0C8) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0C9) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0CA) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0CB) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0CC) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0CD) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0CE) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0CF) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0D0) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0D1) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0D2) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0D3) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0D4) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0D5) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0D6) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0D7) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0D8) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0D9) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0DA) */;
    /* data: db BANK(Dialog0DB) */;
    /* data: db BANK(Dialog0DC) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0DD) */;
    /* data: db BANK(Dialog0DE) */;
    /* data: db BANK(Dialog0DF) */;
    /* data: db BANK(Dialog0E0) */;
    /* data: db BANK(Dialog0E1) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0E2) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0E3) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0E4) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0E5) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0E6) */;
    /* data: db BANK(Dialog0E7) */;
    /* data: db BANK(Dialog0E8) */;
    /* data: db BANK(Dialog0E9) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0EA) */;
    /* data: db BANK(Dialog0EB) */;
    /* data: db BANK(Dialog0EC) */;
    /* data: db BANK(Dialog0ED) */;
    /* data: db BANK(Dialog0EE) */;
    /* data: db BANK(Dialog0EF) */;
    /* data: db BANK(Dialog0F0) */;
    /* data: db BANK(Dialog0F1) */;
    /* data: db BANK(Dialog0F2) */;
    /* data: db BANK(Dialog0F3) */;
    /* data: db BANK(Dialog0F4) */;
    /* data: db BANK(Dialog0F5) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0F6) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0F7) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0F8) */;
    /* data: db BANK(Dialog0F9) */;
    /* data: db BANK(Dialog0FA) */;
    /* data: db BANK(Dialog0FB) */;
    /* data: db BANK(Dialog0FC) */;
    /* data: db BANK(Dialog0FD) */;
    /* data: db BANK(Dialog0FE) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog0FF) */;
    /* data: db BANK(Dialog100) */;
    /* data: db BANK(Dialog101) */;
    /* data: db BANK(Dialog102) */;
    /* data: db BANK(Dialog103) */;
    /* data: db BANK(Dialog104) */;
    /* data: db BANK(Dialog105) */;
    /* data: db BANK(Dialog106) */;
    /* data: db BANK(Dialog107) */;
    /* data: db BANK(Dialog108) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog109) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog10A) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog10B) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog10C) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog10D) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog10E) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog10F) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog110) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog111) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog112) */;
    /* data: db BANK(Dialog113) */;
    /* data: db BANK(Dialog114) */;
    /* data: db BANK(Dialog115) */;
    /* data: db BANK(Dialog116) */;
    /* data: db BANK(Dialog117) */;
    /* data: db BANK(Dialog118) */;
    /* data: db BANK(Dialog119) */;
    /* data: db BANK(Dialog11A) */;
    /* data: db BANK(Dialog11B) */;
    /* data: db BANK(Dialog11C) */;
    /* data: db BANK(Dialog11D) */;
    /* data: db BANK(Dialog11E) */;
    /* data: db BANK(Dialog11F) */;
    /* data: db BANK(Dialog120) */;
    /* data: db BANK(Dialog121) */;
    /* data: db BANK(Dialog122) */;
    /* data: db BANK(Dialog123) */;
    /* data: db BANK(Dialog124) */;
    /* data: db BANK(Dialog125) */;
    /* data: db BANK(Dialog126) */;
    /* data: db BANK(Dialog127) */;
    /* data: db BANK(Dialog128) */;
    /* data: db BANK(Dialog129) */;
    /* data: db BANK(Dialog12A) */;
    /* data: db BANK(Dialog12B) */;
    /* data: db BANK(Dialog12C) */;
    /* data: db BANK(Dialog12D) */;
    /* data: db BANK(Dialog12E) */;
    /* data: db BANK(Dialog12F) */;
    /* data: db BANK(Dialog130) */;
    /* data: db BANK(Dialog131) */;
    /* data: db BANK(Dialog132) */;
    /* data: db BANK(Dialog133) */;
    /* data: db BANK(Dialog134) */;
    /* data: db BANK(Dialog135) */;
    /* data: db BANK(Dialog136) */;
    /* data: db BANK(Dialog137) */;
    /* data: db BANK(Dialog138) */;
    /* data: db BANK(Dialog139) */;
    /* data: db BANK(Dialog13A) */;
    /* data: db BANK(Dialog13B) */;
    /* data: db BANK(Dialog13C) */;
    /* data: db BANK(Dialog13D) */;
    /* data: db BANK(Dialog13E) */;
    /* data: db BANK(Dialog13F) */;
    /* data: db BANK(Dialog140) */;
    /* data: db BANK(Dialog141) */;
    /* data: db BANK(Dialog142) */;
    /* data: db BANK(Dialog143) */;
    /* data: db BANK(Dialog144) */;
    /* data: db BANK(Dialog145) */;
    /* data: db BANK(Dialog146) */;
    /* data: db BANK(Dialog147) */;
    /* data: db BANK(Dialog148) */;
    /* data: db BANK(Dialog149) */;
    /* data: db BANK(Dialog14A) */;
    /* data: db BANK(Dialog14B) */;
    /* data: db BANK(Dialog14C) */;
    /* data: db BANK(Dialog14D) */;
    /* data: db BANK(Dialog14E) */;
    /* data: db BANK(Dialog14F) */;
    /* data: db BANK(Dialog150) */;
    /* data: db BANK(Dialog151) */;
    /* data: db BANK(Dialog152) */;
    /* data: db BANK(Dialog153) */;
    /* data: db BANK(Dialog154) */;
    /* data: db BANK(Dialog155) */;
    /* data: db BANK(Dialog156) */;
    /* data: db BANK(Dialog157) */;
    /* data: db BANK(Dialog158) */;
    /* data: db BANK(Dialog159) */;
    /* data: db BANK(Dialog15A) */;
    /* data: db BANK(Dialog15B) */;
    /* data: db BANK(Dialog15C) */;
    /* data: db BANK(Dialog15D) */;
    /* data: db BANK(Dialog15E) */;
    /* data: db BANK(Dialog15F) */;
    /* data: db BANK(Dialog160) */;
    /* data: db BANK(Dialog161) */;
    /* data: db BANK(Dialog162) */;
    /* data: db BANK(Dialog163) */;
    /* data: db BANK(Dialog164) */;
    /* data: db BANK(Dialog165) */;
    /* data: db BANK(Dialog166) */;
    /* data: db BANK(Dialog167) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog168) */;
    /* data: db BANK(Dialog169) */;
    /* data: db BANK(Dialog16A) */;
    /* data: db BANK(Dialog16B) */;
    /* data: db BANK(Dialog16C) */;
    /* data: db BANK(Dialog16D) */;
    /* data: db BANK(Dialog16E) */;
    /* data: db BANK(Dialog16F) */;
    /* data: db BANK(Dialog170) */;
    /* data: db BANK(Dialog171) */;
    /* data: db BANK(Dialog172) */;
    /* data: db BANK(Dialog173) */;
    /* data: db BANK(Dialog174) */;
    /* data: db BANK(Dialog175) */;
    /* data: db BANK(Dialog176) */;
    /* data: db BANK(Dialog177) */;
    /* data: db BANK(Dialog178) */;
    /* data: db BANK(Dialog179) */;
    /* data: db BANK(Dialog17A) */;
    /* data: db BANK(Dialog17B) */;
    /* data: db BANK(Dialog17C) */;
    /* data: db BANK(Dialog17D) */;
    /* data: db BANK(Dialog17E) */;
    /* data: db BANK(Dialog17F) */;
    /* data: db BANK(Dialog180) */;
    /* data: db BANK(Dialog181) */;
    /* data: db BANK(Dialog182) */;
    /* data: db BANK(Dialog183) */;
    /* data: db BANK(Dialog184) */;
    /* data: db BANK(Dialog185) */;
    /* data: db BANK(Dialog186) */;
    /* data: db BANK(Dialog187) */;
    /* data: db BANK(Dialog188) */;
    /* data: db BANK(Dialog189) */;
    /* data: db BANK(Dialog18A) */;
    /* data: db BANK(Dialog18B) */;
    /* data: db BANK(Dialog18C) */;
    /* data: db BANK(Dialog18D) */;
    /* data: db BANK(Dialog18E) */;
    /* data: db BANK(Dialog18F) */;
    /* data: db BANK(Dialog190) */;
    /* data: db BANK(Dialog191) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog192) */;
    /* data: db BANK(Dialog193) */;
    /* data: db BANK(Dialog194) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog195) */;
    /* data: db BANK(Dialog196) */;
    /* data: db BANK(Dialog197) */;
    /* data: db BANK(Dialog198) */;
    /* data: db BANK(Dialog199) */;
    /* data: db BANK(Dialog19A) */;
    /* data: db BANK(Dialog19B) */;
    /* data: db BANK(Dialog19C) */;
    /* data: db BANK(Dialog19D) */;
    /* data: db BANK(Dialog19E) */;
    /* data: db BANK(Dialog19F) */;
    /* data: db BANK(Dialog1A0) */;
    /* data: db BANK(Dialog1A1) */;
    /* data: db BANK(Dialog1A2) */;
    /* data: db BANK(Dialog1A3) */;
    /* data: db BANK(Dialog1A4) */;
    /* data: db BANK(Dialog1A5) */;
    /* data: db BANK(Dialog1A6) */;
    /* data: db BANK(Dialog1A7) */;
    /* data: db BANK(Dialog1A8) */;
    /* data: db BANK(Dialog1A9) */;
    /* data: db BANK(Dialog1AA) */;
    /* data: db BANK(Dialog1AB) */;
    /* data: db BANK(Dialog1AC) */;
    /* data: db BANK(Dialog1AD) */;
    /* data: db BANK(Dialog1AE) */;
    /* data: db BANK(Dialog1AF) */;
    /* data: db BANK(Dialog1B0) */;
    /* data: db BANK(Dialog1B1) */;
    /* data: db BANK(Dialog1B2) */;
    /* data: db BANK(Dialog1B3) */;
    /* data: db BANK(Dialog1B4) */;
    /* data: db BANK(Dialog1B5) */;
    /* data: db BANK(Dialog1B6) */;
    /* data: db BANK(Dialog1B7) */;
    /* data: db BANK(Dialog1B8) */;
    /* data: db BANK(Dialog1B9) */;
    /* data: db BANK(Dialog1BA) */;
    /* data: db BANK(Dialog1BB) */;
    /* data: db BANK(Dialog1BC) */;
    /* data: db BANK(Dialog1BD) */;
    /* data: db BANK(Dialog1BE) */;
    /* data: db BANK(Dialog1BF) */;
    /* data: db BANK(Dialog1C0) */;
    /* data: db BANK(Dialog1C1) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog1C2) */;
    /* data: db BANK(Dialog1C3) */;
    /* data: db BANK(Dialog1C4) */;
    /* data: db BANK(Dialog1C5) */;
    /* data: db BANK(Dialog1C6) */;
    /* data: db BANK(Dialog1C7) */;
    /* data: db BANK(Dialog1C8) */;
    /* data: db BANK(Dialog1C9) */;
    /* data: db BANK(Dialog1CA) */;
    /* data: db BANK(Dialog1CB) */;
    /* data: db BANK(Dialog1CC) */;
    /* data: db BANK(Dialog1CD) */;
    /* data: db BANK(Dialog1CE) */;
    /* data: db BANK(Dialog1CF) */;
    /* data: db BANK(Dialog1D0) */;
    /* data: db BANK(Dialog1D1) */;
    /* data: db BANK(Dialog1D2) */;
    /* data: db BANK(Dialog1D3) */;
    /* data: db BANK(Dialog1D4) */;
    /* data: db BANK(Dialog1D5) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog1D6) */;
    /* data: db BANK(Dialog1D7) */;
    /* data: db BANK(Dialog1D8) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog1D9) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog1DA) */;
    /* data: db BANK(Dialog1DB) */;
    /* data: db BANK(Dialog1DC) */;
    /* data: db BANK(Dialog1DD) */;
    /* data: db BANK(Dialog1DE) */;
    /* data: db BANK(Dialog1DF) */;
    /* data: db BANK(Dialog1E0) */;
    /* data: db BANK(Dialog1E1) */;
    /* data: db BANK(Dialog1E2) */;
    /* data: db BANK(Dialog1E3) */;
    /* data: db BANK(Dialog1E4) */;
    /* data: db BANK(Dialog1E5) */;
    /* data: db BANK(Dialog1E6) */;
    /* data: db BANK(Dialog1E7) */;
    /* data: db BANK(Dialog1E8) */;
    /* data: db BANK(Dialog1E9) */;
    /* data: db BANK(Dialog1EA) */;
    /* data: db BANK(Dialog1EB) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog1EC) */;
    /* data: db BANK(Dialog1ED) */;
    /* data: db BANK(Dialog1EE) */;
    /* data: db BANK(Dialog1EF) */;
    /* data: db BANK(Dialog1F0) */;
    /* data: db BANK(Dialog1F1) */;
    /* data: db BANK(Dialog1F2) */;
    /* data: db BANK(Dialog1F3) */;
    /* data: db BANK(Dialog1F4) */;
    /* data: db BANK(Dialog1F5) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog1F6) */;
    /* data: db BANK(Dialog1F7) */;
    /* data: db BANK(Dialog1F8) */;
    /* data: db BANK(Dialog1F9) */;
    /* data: db BANK(Dialog1FA) */;
    /* data: db BANK(Dialog1FB) */;
    /* data: db BANK(Dialog1FC) */;
    /* data: db BANK(Dialog1FD) */;
    /* data: db BANK(Dialog1FE) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog1FF) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog200) */;
    /* data: db BANK(Dialog201) */;
    /* data: db BANK(Dialog202) */;
    /* data: db BANK(Dialog203) */;
    /* data: db BANK(Dialog204) */;
    /* data: db BANK(Dialog205) */;
    /* data: db BANK(Dialog206) */;
    /* data: db BANK(Dialog207) */;
    /* data: db BANK(Dialog208) */;
    /* data: db BANK(Dialog209) */;
    /* data: db BANK(Dialog20A) */;
    /* data: db BANK(Dialog20B) */;
    /* data: db BANK(Dialog20C) */;
    /* data: db BANK(Dialog20D) */;
    /* data: db BANK(Dialog20E) */;
    /* data: db BANK(Dialog20F) */;
    /* data: db BANK(Dialog210) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog211) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog212) */;
    /* data: db BANK(Dialog213) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog214) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog215) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog216) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog217) */;
    /* data: db BANK(Dialog218) */;
    /* data: db BANK(Dialog219) */;
    /* data: db BANK(Dialog21A) */;
    /* data: db BANK(Dialog21B) */;
    /* data: db BANK(Dialog21C) */;
    /* data: db BANK(Dialog21D) */;
    /* data: db BANK(Dialog21E) */;
    /* data: db BANK(Dialog21F) */;
    /* data: db BANK(Dialog220) */;
    /* data: db BANK(Dialog221) */;
    /* data: db BANK(Dialog222) */;
    /* data: db BANK(Dialog223) */;
    /* data: db BANK(Dialog224) */;
    /* data: db BANK(Dialog225) */;
    /* data: db BANK(Dialog226) */;
    /* data: db BANK(Dialog227) */;
    /* data: db BANK(Dialog228) */;
    /* data: db BANK(Dialog229) */;
    /* data: db BANK(Dialog22A) */;
    /* data: db BANK(Dialog22B) */;
    /* data: db BANK(Dialog22C) */;
    /* data: db BANK(Dialog22D) */;
    /* data: db BANK(Dialog22E) */;
    /* data: db BANK(Dialog22F) */;
    /* data: db BANK(Dialog230) */;
    /* data: db BANK(Dialog231) */;
    /* data: db BANK(Dialog232) */;
    /* data: db BANK(Dialog233) */;
    /* data: db BANK(Dialog234) */;
    /* data: db BANK(Dialog235) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog236) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog237) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog238) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog239) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog23A) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog23B) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog23C) */;
    /* data: db BANK(Dialog23D) */;
    /* data: db BANK(Dialog23E) */;
    /* data: db BANK(Dialog23F) */;
    /* data: db BANK(Dialog240) */;
    /* data: db BANK(Dialog241) */;
    /* data: db BANK(Dialog242) */;
    /* data: db BANK(Dialog243) */;
    /* data: db BANK(Dialog244) */;
    /* data: db BANK(Dialog245) */;
    /* data: db BANK(Dialog246) */;
    /* data: db BANK(Dialog247) */;
    /* data: db BANK(Dialog248) */;
    /* data: db BANK(Dialog249) */;
    /* data: db BANK(Dialog24A) */;
    /* data: db BANK(Dialog24B) */;
    /* data: db BANK(Dialog24C) */;
    /* data: db BANK(Dialog24D) */;
    /* data: db BANK(Dialog24E) */;
    /* data: db BANK(Dialog24F) */;
    /* data: db BANK(Dialog250) */;
    /* data: db BANK(Dialog251) */;
    /* data: db BANK(Dialog252) */;
    /* data: db BANK(Dialog253) */;
    /* data: db BANK(Dialog254) */;
    /* data: db BANK(Dialog255) */;
    /* data: db BANK(Dialog256) */;
    /* data: db BANK(Dialog257) */;
    /* data: db BANK(Dialog258) */;
    /* data: db BANK(Dialog259) */;
    /* data: db BANK(Dialog25A) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog25B) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog25C) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog25D) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog25E) */;
    /* data: db BANK(Dialog25F) */;
    /* data: db BANK(Dialog260) */;
    /* data: db BANK(Dialog261) */;
    /* data: db BANK(Dialog262) */;
    /* data: db BANK(Dialog263) */;
    /* data: db BANK(Dialog264) */;
    /* data: db BANK(Dialog265) */;
    /* data: db BANK(Dialog266) */;
    /* data: db BANK(Dialog267) */;
    /* data: db BANK(Dialog268) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog269) */;
    /* data: db BANK(Dialog26A) */;
    /* data: db BANK(Dialog26B) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog26C) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog26D) */;
    /* data: db BANK(Dialog26E) */;
    /* data: db BANK(Dialog26F) */;
    /* data: db BANK(Dialog270) */;
    /* data: db BANK(Dialog271) */;
    /* data: db BANK(Dialog272) */;
    /* data: db BANK(Dialog273) */;
    /* data: db BANK(Dialog274) */;
    /* data: db BANK(Dialog275) */;
    /* data: db BANK(Dialog276) */;
    /* data: db BANK(Dialog277) */;
    /* data: db BANK(Dialog278) */;
    /* data: db BANK(Dialog279) */;
    /* data: db BANK(Dialog27A) */;
    /* data: db BANK(Dialog27B) */;
    /* data: db BANK(Dialog27C) */;
    /* data: db BANK(Dialog27D) */;
    /* data: db BANK(Dialog27E) */;
    /* data: db BANK(Dialog27F) */;
    /* data: db BANK(Dialog280) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog281) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog282) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog283) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog284) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog285) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog286) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog287) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog288) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog289) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog28A) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog28B) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog28C) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog28D) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog28E) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog28F) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog290) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog291) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog292) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog293) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog294) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog295) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog296) */;
    /* data: db BANK(Dialog297) */;
    /* data: db BANK(Dialog298) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog299) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog29A) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog29B) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog29C) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog29D) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog29E) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog29F) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog2A0) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog2A1) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog2A2) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog2A3) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog2A4) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog2A5) | DIALOG_UNSKIPPABLE */;
    /* data: db BANK(Dialog2A6) */;
    /* data: db BANK(Dialog2A7) */;
    /* data: db BANK(Dialog2A8) */;
    /* data: db BANK(Dialog2A9) */;
    /* data: db BANK(Dialog2AA) */;
    /* data: db BANK(Dialog2AB) */;
    /* data: db BANK(Dialog2AC) */;
    /* data: db BANK(Dialog2AD) */;
    /* data: db BANK(Dialog2AE) */;
    /* data: db BANK(Dialog2AF) | DIALOG_UNSKIPPABLE */;
}

void ClearLetterPixels(void) {
    gb.regs.a = gb_read(0xC170);
    gb.regs.a = alu_and8(gb.regs.a, 0x1F);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.c = 1;
    gb.regs.b = 0;
    gb.regs.hl = 0x42D1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xD5C1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x42B1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x4F;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0xFF;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    return;
}

void Data_01C_4A18(void) {
    /* data: db $61, $41, $81, $21, $A1, $81, $61, $A1, $41, $C1 */;
}

void Data_01C_4A22(void) {
    /* data: db $98, $98, $98, $98, $98, $99, $99, $99, $99, $99 */;
}

void DialogOpenAnimationEnd(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xC16F);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { func_01C_4A71(); return; };
    alu_bit(7, gb.regs.c);
    if (GET_FLAG_Z()) { func_01C_4A3D(); return; };
    gb.regs.a = alu_add8(gb.regs.a, 5);
}

void func_01C_4A3D(void) {
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.e = 1;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xC12E);
    gb.regs.hl = 0x4A22;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xD5C1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC12F);
    gb.regs.hl = 0x4A18;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x51;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFE8);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_write(gb.regs.hl, 0);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { func_01C_4A6C(); return; };
    func_01C_4A76();
}

void func_01C_4A6C(void) {
    gb.regs.hl = 0xC16F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void func_01C_4A71(void) {
    gb.regs.hl = 0xC19F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void func_01C_4A76(void) {
    gb.regs.hl = 0xDD38;
    gb.regs.de = 0xD5C1;
    gb.regs.b = 4;
  func_01C_4A76_loop_4A7E_1C:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto func_01C_4A76_loop_4A7E_1C;
    gb.regs.a = 1;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
}

void DialogRestoreBGMapLocationTable(void) {
  DialogRestoreBGMapLocationTable_low:;
    /* data: db LOW(vBGMap0 + $00A1) */;
    /* data: db LOW(vBGMap0 + $0021) */;
    /* data: db LOW(vBGMap0 + $0081) */;
    /* data: db LOW(vBGMap0 + $0041) */;
    /* data: db LOW(vBGMap0 + $0061) */;
    /* data: db LOW(vBGMap0 + $01C1) */;
    /* data: db LOW(vBGMap0 + $0141) */;
    /* data: db LOW(vBGMap0 + $01A1) */;
    /* data: db LOW(vBGMap0 + $0161) */;
    /* data: db LOW(vBGMap0 + $0181) */;
  DialogRestoreBGMapLocationTable_high:;
    /* data: db HIGH(vBGMap0 + $00A1) */;
    /* data: db HIGH(vBGMap0 + $0021) */;
    /* data: db HIGH(vBGMap0 + $0081) */;
    /* data: db HIGH(vBGMap0 + $0041) */;
    /* data: db HIGH(vBGMap0 + $0061) */;
    /* data: db HIGH(vBGMap0 + $01C1) */;
    /* data: db HIGH(vBGMap0 + $0141) */;
    /* data: db HIGH(vBGMap0 + $01A1) */;
    /* data: db HIGH(vBGMap0 + $0161) */;
    /* data: db HIGH(vBGMap0 + $0181) */;
}

void DialogSavedBGMapOffsetTable(void) {
    /* data: db $48 */;
    /* data: db $00 */;
    /* data: db $36 */;
    /* data: db $12 */;
    /* data: db $24 */;
    /* data: db $48 */;
    /* data: db $00 */;
    /* data: db $36 */;
    /* data: db $12 */;
    /* data: db $24 */;
}

void AnimateDialogClosing(void) {
    gb.regs.a = gb_read(0xC19F);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xC16F);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { func_01C_4A71(); return; };
    alu_bit(7, gb.regs.c);
    if (GET_FLAG_Z()) goto AnimateDialogClosing_cEnd;
    gb.regs.a = alu_add8(gb.regs.a, 5);
  AnimateDialogClosing_cEnd:;
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.e = 1;
    gb.regs.d = 0;
    gb.regs.a = gb_read(0xC12E);
    gb.regs.hl = 0x47E4;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xD5C1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.a = gb_read(0xC12F);
    gb.regs.hl = 0x47DA;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = gb_pop16();
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x11;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x47EE;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb.regs.hl = 0xD500;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.c = gb.regs.l;
    gb.regs.b = gb.regs.h;
    gb_push16(gb.regs.hl);
    gb.regs.bc = gb_pop16();
    gb.regs.hl = gb_pop16();
    gb.regs.e = 0x12;
  AnimateDialogClosing_loop:;
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.bc++;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto AnimateDialogClosing_loop;
    gb_write(gb.regs.hl, 0);
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto AnimateDialogClosing_gbcEnd;
    AnimateDialogClosingAttrs();
  AnimateDialogClosing_gbcEnd:;
    gb.regs.hl = 0xC16F;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
}

void AnimateDialogClosingAttrs(void) {
    gb_push16(gb.regs.bc);
    gb.regs.hl = 0xDD38;
    gb.regs.de = 0xD5C1;
    gb.regs.b = 4;
  AnimateDialogClosingAttrs_loop_4B0B_1C:;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.b = alu_dec8(gb.regs.b);
    if (!GET_FLAG_Z()) goto AnimateDialogClosingAttrs_loop_4B0B_1C;
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb.regs.c;
    gb.regs.a = alu_sub8(gb.regs.a, 0x12);
    gb.regs.c = gb.regs.a;
    gb.regs.e = 0x12;
  AnimateDialogClosingAttrs_loop_4B18_1C:;
    gb.regs.a = 2;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.bc);
    gb.regs.d = gb.regs.a;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFF70, gb.regs.a);
    gb.regs.a = gb.regs.d;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.bc++;
    gb.regs.e = alu_dec8(gb.regs.e);
    if (!GET_FLAG_Z()) goto AnimateDialogClosingAttrs_loop_4B18_1C;
    gb_write(gb.regs.hl, 0);
    return;
}

void Dialog108(void) {
    /* data: db "Hi! It's me, the" */;
    /* data: db "photographer!   " */;
    /* data: db "You seem curious" */;
    /* data: db "about Grandpa   " */;
    /* data: db "Ulrira.@" */;
}

void Dialog109(void) {
    /* data: db "I'll call this  " */;
    /* data: db "'##### Dis-     " */;
    /* data: db "covers Ulrira's " */;
    /* data: db "Secret!'@" */;
}

void Dialog10A(void) {
    /* data: db "#####, now run  " */;
    /* data: db "away before he  " */;
    /* data: db "finds you.@" */;
}

void Dialog10B(void) {
    /* data: db "I'll go develop " */;
    /* data: db "this. Come see  " */;
    /* data: db "it later, OK?@" */;
}

void Dialog10C(void) {
    /* data: db "I just LOVE to  " */;
    /* data: db "take pictures.  " */;
    /* data: db "Will you let me " */;
    /* data: db "take your       " */;
    /* data: db "picture?        " */;
    /* data: db "    YES  NO<ask>" */;
}

void Dialog10D(void) {
    /* data: db "Go to the back  " */;
    /* data: db "of the room and " */;
    /* data: db "stand in front  " */;
    /* data: db "of the screen.@" */;
}

void Dialog10E(void) {
    /* data: db "Hey! I haven't  " */;
    /* data: db "taken your      " */;
    /* data: db "picture yet! Go " */;
    /* data: db "back and stand  " */;
    /* data: db "in front of the " */;
    /* data: db "screen!@" */;
}

void Dialog10F(void) {
    /* data: db "I'll call this  " */;
    /* data: db "'Here Stands A  " */;
    /* data: db "Brave Man.'     " */;
    /* data: db "Say cheese!@" */;
}

void Dialog110(void) {
    /* data: db "This owl statue " */;
    /* data: db "is trying to say" */;
    /* data: db "something, but  " */;
    /* data: db "you can't       " */;
    /* data: db "understand it   " */;
    /* data: db "because it has  " */;
    /* data: db "no beak.@" */;
}

void Dialog111(void) {
    /* data: db "'I've got what  " */;
    /* data: db "was inside this " */;
    /* data: db "box.  Come and  " */;
    /* data: db "get it, if you  " */;
    /* data: db "can!'  Master <skull>@" */;
}

void Dialog112(void) {
    /* data: db "Gulp!  You found" */;
    /* data: db "me!  You're a   " */;
    /* data: db "real pesky kid, " */;
    /* data: db "you know that?!@" */;
}

void Dialog113(void) {
    /* data: db "Arrgh!  I can't " */;
    /* data: db "beat you!  I'm  " */;
    /* data: db "outta here!@" */;
}

void Dialog114(void) {
    /* data: db "You again?!  You" */;
    /* data: db "keep going and  " */;
    /* data: db "going... I can't" */;
    /* data: db "outlast you!    " */;
    /* data: db "All right, let's" */;
    /* data: db "do it!@" */;
}

void Dialog115(void) {
    /* data: db "WOOF! Dig! RUFF!@" */;
}

void Dialog116(void) {
    /* data: db "You put the     " */;
    /* data: db "missing scale in" */;
    /* data: db "the mermaid     " */;
    /* data: db "statue!@" */;
}

void Dialog117(void) {
    /* data: db "Hey! Be more    " */;
    /* data: db "careful next    " */;
    /* data: db "time!@" */;
}

void Dialog118(void) {
    /* data: db "Hey, man!  When " */;
    /* data: db "you want to save" */;
    /* data: db "just push all   " */;
    /* data: db "the Buttons at  " */;
    /* data: db "once!  Uhh...   " */;
    /* data: db "Don't ask me    " */;
    /* data: db "what that means," */;
    /* data: db "I'm just a kid!@" */;
}

void Dialog119(void) {
    /* data: db "Well, it seems  " */;
    /* data: db "that after you  " */;
    /* data: db "save, you will  " */;
    /* data: db "start at the    " */;
    /* data: db "last door you   " */;
    /* data: db "went through... " */;
    /* data: db "I'm not really  " */;
    /* data: db "sure why that is" */;
    /* data: db "'cause I'm just " */;
    /* data: db "a kid!@" */;
}

void Dialog11A(void) {
    /* data: db "I heard that you" */;
    /* data: db "can press SELECT" */;
    /* data: db "to look at the  " */;
    /* data: db "island map...   " */;
    /* data: db "But, I don't    " */;
    /* data: db "understand what " */;
    /* data: db "they mean by    " */;
    /* data: db "that...@" */;
}

void Dialog11B(void) {
    /* data: db "When you're     " */;
    /* data: db "running out of  " */;
    /* data: db "Hearts, you'd   " */;
    /* data: db "better enter a  " */;
    /* data: db "house or cave..." */;
    /* data: db "Why?  I have no " */;
    /* data: db "idea, I'm just a" */;
    /* data: db "kid!@" */;
}

void Dialog11C(void) {
    /* data: db "Hey, dude! What " */;
    /* data: db "do you think of " */;
    /* data: db "Marin?  Uhh...  " */;
    /* data: db "I don't know,   " */;
    /* data: db "I'm just a kid!@" */;
}

void Dialog11D(void) {
    /* data: db "Where are you   " */;
    /* data: db "from, brother?  " */;
    /* data: db "...Outside the  " */;
    /* data: db "island?  What is" */;
    /* data: db "'outside?'  I've" */;
    /* data: db "never thought   " */;
    /* data: db "about it...@" */;
}

void Dialog11E(void) {
    /* data: db "The giant egg on" */;
    /* data: db "top of Tamaranch" */;
    /* data: db "Mountain?  They " */;
    /* data: db "say the Wind    " */;
    /* data: db "Fish is sleeping" */;
    /* data: db "inside of it... " */;
    /* data: db "Why?  I don't   " */;
    /* data: db "know either...@" */;
}

void Dialog11F(void) {
    /* data: db "Dude!  You're   " */;
    /* data: db "asking me when  " */;
    /* data: db "we started to   " */;
    /* data: db "live on this    " */;
    /* data: db "island?  What do" */;
    /* data: db "you mean by     " */;
    /* data: db "'when?'  Whoa!  " */;
    /* data: db "The concept just" */;
    /* data: db "makes my head   " */;
    /* data: db "hurt!@" */;
}

void Dialog120(void) {
    /* data: db "Marin? She likes" */;
    /* data: db "to go stare at  " */;
    /* data: db "the ocean all by" */;
    /* data: db "herself...  Why?" */;
    /* data: db "Hey, I'm just a " */;
    /* data: db "kid, don't ask  " */;
    /* data: db "me!@" */;
}

void Dialog121(void) {
    /* data: db "Hey... Where're " */;
    /* data: db "you two going   " */;
    /* data: db "together?  Hunh?" */;
    /* data: db "Uh, I didn't    " */;
    /* data: db "mean anything..." */;
    /* data: db "I'm just a kid!@" */;
}

void Dialog122(void) {
    /* data: db "Hey hey, bro!   " */;
    /* data: db "About the Dream " */;
    /* data: db "Shrine there... " */;
    /* data: db "They say there's" */;
    /* data: db "something good  " */;
    /* data: db "inside... ...   " */;
    /* data: db "I better not say" */;
    /* data: db "anything else   " */;
    /* data: db "as I'm just a   " */;
    /* data: db "kid!@" */;
}

void Dialog123(void) {
    /* data: db "Hunh?!  Marin's " */;
    /* data: db "not with you?   " */;
    /* data: db "What happened to" */;
    /* data: db "her?@" */;
}

void Dialog124(void) {
    /* data: db "WHOA! That's a  " */;
    /* data: db "big one! Hey,   " */;
    /* data: db "photo guy! Can  " */;
    /* data: db "you take a      " */;
    /* data: db "picture of this?@" */;
}

void Dialog125(void) {
    /* data: db "I have a        " */;
    /* data: db "feelin' that    " */;
    /* data: db "I'll catch a big" */;
    /* data: db "fish again.@" */;
}

void Dialog126(void) {
    /* data: db "If you keep me a" */;
    /* data: db "secret, I'll    " */;
    /* data: db "tell you some-  " */;
    /* data: db "thing useful.   " */;
    /* data: db "Go to Toronbo   " */;
    /* data: db "Shores, use the " */;
    /* data: db "magnifying glass" */;
    /* data: db "and you will    " */;
    /* data: db "find someone    " */;
    /* data: db "like me.@" */;
}

void Dialog127(void) {
    /* data: db "Tsk tsk...  What" */;
    /* data: db "a shame...@" */;
}

void Dialog128(void) {
    /* data: db "Oh thank you!   " */;
    /* data: db "You are indeed a" */;
    /* data: db "generous person!" */;
    /* data: db "Ah!  I will give" */;
    /* data: db "you this in     " */;
    /* data: db "return!@" */;
}

void Dialog129(void) {
    /* data: db "You traded your " */;
    /* data: db "<yoshi> for <ribbon>!  Maybe " */;
    /* data: db "you can trade   " */;
    /* data: db "the ribbon for  " */;
    /* data: db "something else!@" */;
}

void Dialog12A(void) {
    /* data: db "Because they all" */;
    /* data: db "look alike, even" */;
    /* data: db "I am sometimes  " */;
    /* data: db "confused. . .   " */;
    /* data: db "By the way, my  " */;
    /* data: db "baby wants a    " */;
    /* data: db "Yoshi Doll.     " */;
    /* data: db "I saw one at the" */;
    /* data: db "Trendy Game,    " */;
    /* data: db "but I couldn't  " */;
    /* data: db "get it.@" */;
}

void Dialog12B(void) {
    /* data: db "Oh!  Will you   " */;
    /* data: db "give that doll  " */;
    /* data: db "to my baby?!    " */;
    /* data: db "    Yes  No<ask>" */;
}

void Dialog12C(void) {
    /* data: db "Because they all" */;
    /* data: db "look alike, even" */;
    /* data: db "I am sometimes  " */;
    /* data: db "confused...     @" */;
}

void Dialog12D(void) {
    /* data: db "Ahem!  Really, I" */;
    /* data: db "must insist that" */;
    /* data: db "you not bring   " */;
    /* data: db "that awful beast" */;
    /* data: db "in here!  Leave " */;
    /* data: db "that creature   " */;
    /* data: db "outside and then" */;
    /* data: db "we can talk!    " */;
    /* data: db "Good Bye!@" */;
}

void Dialog12E(void) {
    /* data: db "You want to know" */;
    /* data: db "about that      " */;
    /* data: db "ghost? I'll bet " */;
    /* data: db "he's happy      " */;
    /* data: db "thanks to you.  " */;
    /* data: db "Are you ready   " */;
    /* data: db "for a picture?@" */;
}

void Dialog12F(void) {
    /* data: db "Ho ho ho!       " */;
    /* data: db "I really appre- " */;
    /* data: db "ciate what you  " */;
    /* data: db "did for my poor," */;
    /* data: db "precious BowWow!" */;
    /* data: db "You are such a  " */;
    /* data: db "nice boy!  How  " */;
    /* data: db "can I ever repay" */;
    /* data: db "you?  I know... " */;
    /* data: db "  SMOOOOOOOCH!  " */;
    /* data: db "You got a reward" */;
    /* data: db "from Madam Meow-" */;
    /* data: db "Meow... ... ... " */;
    /* data: db "L-l-lucky!@" */;
}

void Dialog130(void) {
    /* data: db "Ho ho ho!  My   " */;
    /* data: db "BowWow is so    " */;
    /* data: db "proud of his    " */;
    /* data: db "fine fur coat!@" */;
}

void Dialog131(void) {
    /* data: db "AIEEEEEEEE!     " */;
    /* data: db "It's terrrrible!" */;
    /* data: db "My BowWow was   " */;
    /* data: db "dognapped by... " */;
    /* data: db "Mo-mo-MOBLINS!! " */;
    /* data: db "OHHH!  AHHHH!   " */;
    /* data: db "Please! Somebody" */;
    /* data: db "help my poor    " */;
    /* data: db "BowWow!!@" */;
}

void Dialog132(void) {
    /* data: db "Oh thank you!   " */;
    /* data: db "I'm so happy you" */;
    /* data: db "brought my baby " */;
    /* data: db "back! Now, would" */;
    /* data: db "you be a dear   " */;
    /* data: db "and take him for" */;
    /* data: db "a walk? It would" */;
    /* data: db "really help me  " */;
    /* data: db "out a lot!  You " */;
    /* data: db "will?!  Thanks!@" */;
}

void Dialog133(void) {
    /* data: db "Well... I pretty" */;
    /* data: db "much stick to   " */;
    /* data: db "myself, me and  " */;
    /* data: db "my letters...   " */;
    /* data: db "My name's Write!" */;
    /* data: db "The only thing I" */;
    /* data: db "don't like about" */;
    /* data: db "my hobby is that" */;
    /* data: db "I never receive " */;
    /* data: db "a response...@" */;
}

void Dialog134(void) {
    /* data: db "What's this?!  A" */;
    /* data: db "letter for me?! " */;
    /* data: db "I'm so happy!   " */;
    /* data: db "...And look! The" */;
    /* data: db "letter came with" */;
    /* data: db "a photograph!@" */;
}

void Dialog135(void) {
    /* data: db "Mmm... She's so " */;
    /* data: db "beautiful...    " */;
    /* data: db "I must give you " */;
    /* data: db "something for   " */;
    /* data: db "your trouble... " */;
    /* data: db "Hmm...  Well, it" */;
    /* data: db "looks like all I" */;
    /* data: db "have is this    " */;
    /* data: db "broom... how'll " */;
    /* data: db "that be?        " */;
    /* data: db "    Fine No...<ask>" */;
}

void Dialog136(void) {
    /* data: db "You got a Broom " */;
    /* data: db "as your reward  " */;
    /* data: db "from Mr. Write! " */;
    /* data: db "But that photo  " */;
    /* data: db "was not of...@" */;
}

void Dialog137(void) {
    /* data: db "Please! I really" */;
    /* data: db "must insist you " */;
    /* data: db "have this <broom>!    " */;
    /* data: db "    Okay No Way<ask>" */;
}

void Dialog138(void) {
    /* data: db "Oh boy!  Letter " */;
    /* data: db "writing is such " */;
    /* data: db "a great hobby!@" */;
}

void Dialog139(void) {
    /* data: db "Hello!  I'm     " */;
    /* data: db "writing back to " */;
    /* data: db "Christine now!@" */;
}

void Dialog13A(void) {
    /* data: db "Salutations!    " */;
    /* data: db "You wouldn't    " */;
    /* data: db "know by the look" */;
    /* data: db "of me, but I    " */;
    /* data: db "used to live in " */;
    /* data: db "the castle! My  " */;
    /* data: db "servants went   " */;
    /* data: db "berserk and I   " */;
    /* data: db "was forced to   " */;
    /* data: db "flee to my      " */;
    /* data: db "villa... So, you" */;
    /* data: db "want the key to " */;
    /* data: db "Ukuku Prairie,  " */;
    /* data: db "do you?  I may  " */;
    /* data: db "be able to help " */;
    /* data: db "you...  Let's   " */;
    /* data: db "make... a deal, " */;
    /* data: db "shall we? I want" */;
    /* data: db "you to retrieve " */;
    /* data: db "the Golden Leaf " */;
    /* data: db "I left behind in" */;
    /* data: db "the castle when " */;
    /* data: db "I fled...       " */;
    /* data: db "    Okay No Way<ask>" */;
}

void Dialog13B(void) {
    /* data: db "I am impressed. " */;
    /* data: db "There are five  " */;
    /* data: db "leaves in all.  " */;
    /* data: db "Remember to buy " */;
    /* data: db "a shovel on your" */;
    /* data: db "way back.@" */;
}

void Dialog13C(void) {
    /* data: db "Well, I never!  " */;
    /* data: db "I thought you   " */;
    /* data: db "looked cowardly," */;
    /* data: db "but...  Please, " */;
    /* data: db "leave me... just" */;
    /* data: db "get out here!@" */;
}

void Dialog13D(void) {
    /* data: db "Ahh!  Tres Bien!" */;
    /* data: db "I see you have  " */;
    /* data: db "recovered all of" */;
    /* data: db "the leaves! Now," */;
    /* data: db "move this box   " */;
    /* data: db "and you will    " */;
    /* data: db "find your       " */;
    /* data: db "reward!@" */;
}

void Dialog13E(void) {
    /* data: db "I am forever in " */;
    /* data: db "your debt for   " */;
    /* data: db "getting my      " */;
    /* data: db "leaves back!@" */;
}

void Dialog13F(void) {
    /* data: db "Ah!  Bonjour!   " */;
    /* data: db "#####, for the  " */;
    /* data: db "love of justice," */;
    /* data: db "and my own sake," */;
    /* data: db "you must find   " */;
    /* data: db "all the leaves!@" */;
}

void Dialog140(void) {
    /* data: db "Er...Uh...Hmm..." */;
    /* data: db "How to say...   " */;
    /* data: db "Please call...  " */;
    /* data: db "Outside...  ... " */;
    /* data: db "It seems that   " */;
    /* data: db "old man Ulrira  " */;
    /* data: db "is a shy guy,   " */;
    /* data: db "in person...@" */;
}

void Dialog141(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Hello!  It's me," */;
    /* data: db "Ulrira!  Ask me " */;
    /* data: db "anything about  " */;
    /* data: db "the island!  If " */;
    /* data: db "you get lost,   " */;
    /* data: db "give me a call! " */;
    /* data: db "Bye! CLICK!'@" */;
}

void Dialog142(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Hello, this is  " */;
    /* data: db "Ulrira! ...Well," */;
    /* data: db "most Moblins    " */;
    /* data: db "live in the Mys-" */;
    /* data: db "terious Forest, " */;
    /* data: db "but some live in" */;
    /* data: db "the caves of Tal" */;
    /* data: db "Tal Heights...  " */;
    /* data: db "I hope that is  " */;
    /* data: db "what you wanted " */;
    /* data: db "to know! CLICK!'@" */;
}

void Dialog143(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Yes, this is    " */;
    /* data: db "Ulrira.  The    " */;
    /* data: db "Indigestible    " */;
    /* data: db "Flowers of      " */;
    /* data: db "Goponga Swamp..." */;
    /* data: db "Those flowers   " */;
    /* data: db "are BowWow's    " */;
    /* data: db "favorite.  Why  " */;
    /* data: db "don't you take  " */;
    /* data: db "him for a walk  " */;
    /* data: db "there?  CLICK!'@" */;
}

void Dialog144(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Hi, it's Ulrira!" */;
    /* data: db "...Have you met " */;
    /* data: db "everyone on the " */;
    /* data: db "island?  There's" */;
    /* data: db "a man named     " */;
    /* data: db "Richard who     " */;
    /* data: db "lives in Pothole" */;
    /* data: db "Field, southeast" */;
    /* data: db "of the village. " */;
    /* data: db "Why not pay him " */;
    /* data: db "a visit?  That's" */;
    /* data: db "all I can tell  " */;
    /* data: db "you for now!    " */;
    /* data: db "Bye!  CLICK!'@" */;
}

void Dialog145(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Old man Ulrira  " */;
    /* data: db "here! ...Do you " */;
    /* data: db "like bananas?   " */;
    /* data: db "Try talking to  " */;
    /* data: db "people in the   " */;
    /* data: db "village again!  " */;
    /* data: db "Bye!  CLICK!'@" */;
}

void Dialog146(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Ulrira speaking!" */;
    /* data: db "You know, there " */;
    /* data: db "is a library in " */;
    /* data: db "the village that" */;
    /* data: db "might have some " */;
    /* data: db "good information" */;
    /* data: db "for you!  Talk  " */;
    /* data: db "to you later!   " */;
    /* data: db "CLICK!'@" */;
}

void Dialog147(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Ya, it's Ulrira!" */;
    /* data: db "You say you     " */;
    /* data: db "haven't found   " */;
    /* data: db "all five Golden " */;
    /* data: db "Leaves? Go ask  " */;
    /* data: db "the crow at the " */;
    /* data: db "castle. I'm sure" */;
    /* data: db "he can help you." */;
    /* data: db "Bye!            " */;
    /* data: db "CLICK!'@" */;
}

void Dialog148(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Ulrira here! ..." */;
    /* data: db "Shovel...  Did  " */;
    /* data: db "you purchase a  " */;
    /* data: db "shovel?  You may" */;
    /* data: db "find something  " */;
    /* data: db "if you dig here " */;
    /* data: db "and there!  Bye!" */;
    /* data: db "CLICK!'@" */;
}

void Dialog149(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Ya, it's Ulrira!" */;
    /* data: db "The cave in the " */;
    /* data: db "Ukuku Prairie is" */;
    /* data: db "the key!  Yes, I" */;
    /* data: db "mean the key    " */;
    /* data: db "cave, no pun    " */;
    /* data: db "intended!  Bye! " */;
    /* data: db "CLICK!'@" */;
}

void Dialog14A(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Hi, this is     " */;
    /* data: db "Ulrira!  In the " */;
    /* data: db "Yarna Desert,   " */;
    /* data: db "which is located" */;
    /* data: db "in the southeast" */;
    /* data: db "of the island,  " */;
    /* data: db "you will find   " */;
    /* data: db "something called" */;
    /* data: db "the Angler Key. " */;
    /* data: db "Hmmm... How much" */;
    /* data: db "more obvious do " */;
    /* data: db "I have to be?   " */;
    /* data: db "Bye! CLICK!'@" */;
}

void Dialog14B(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "This is Ulrira! " */;
    /* data: db "Now you're being" */;
    /* data: db "haunted by a    " */;
    /* data: db "ghost?! Well,   " */;
    /* data: db "how about taking" */;
    /* data: db "him where he    " */;
    /* data: db "wants to go?    " */;
    /* data: db "Bye! CLICK!'@" */;
}

void Dialog14C(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Hi, it's Ulrira!" */;
    /* data: db "The Catfish's   " */;
    /* data: db "mouth is wide   " */;
    /* data: db "open?  It sounds" */;
    /* data: db "like a great    " */;
    /* data: db "place to dive!  " */;
    /* data: db "Bye!  CLICK!'@" */;
}

void Dialog14D(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Ulrira here! ..." */;
    /* data: db "Have you been to" */;
    /* data: db "the Face Shrine?" */;
    /* data: db "It is north of  " */;
    /* data: db "Animal Village. " */;
    /* data: db "That is a very  " */;
    /* data: db "interesting     " */;
    /* data: db "ruin... CLICK!'@" */;
}

void Dialog14E(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Hi, it's Ulrira!" */;
    /* data: db "Have you heard  " */;
    /* data: db "of the Flying   " */;
    /* data: db "Rooster of Mabe " */;
    /* data: db "Village?  In the" */;
    /* data: db "good old days,  " */;
    /* data: db "it used to give " */;
    /* data: db "us rides if we  " */;
    /* data: db "held it above   " */;
    /* data: db "our heads... Now" */;
    /* data: db "it is lying     " */;
    /* data: db "under the       " */;
    /* data: db "Weathercock...  " */;
    /* data: db "Is that useful  " */;
    /* data: db "for you?  I hope" */;
    /* data: db "so! Bye! CLICK!'@" */;
}

void Dialog14F(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Hi, it's Ulrira!" */;
    /* data: db "The head of the " */;
    /* data: db "turtle is in    " */;
    /* data: db "your way?  Put  " */;
    /* data: db "life into it and" */;
    /* data: db "it will move!   " */;
    /* data: db "It's true! True!" */;
    /* data: db "Bye!  CLICK!'@" */;
}

void Dialog150(void) {
    /* data: db "   ...SWAMP...  " */;
    /* data: db " A path opens..." */;
    /* data: db "in the blooms...@" */;
}

void Dialog151(void) {
    /* data: db "  ...PRAIRIE... " */;
    /* data: db "  ...PRAIRIE... " */;
    /* data: db " The Prairie is " */;
    /* data: db "     waiting...@" */;
}

void Dialog152(void) {
    /* data: db "...WATERFALL... " */;
    /* data: db "It is hidden in " */;
    /* data: db "the waterfall...@" */;
}

void Dialog153(void) {
    /* data: db "    ...BAY...   " */;
    /* data: db "Your road goes  " */;
    /* data: db "into the bay... @" */;
}

void Dialog154(void) {
    /* data: db "   ...SHRINE... " */;
    /* data: db "An island secret" */;
    /* data: db "in the shrine...@" */;
}

void Dialog155(void) {
    /* data: db " ...MOUNTAIN... " */;
    /* data: db "Something calls " */;
    /* data: db "  ...from the   " */;
    /* data: db "  mountains...@" */;
}

void Dialog156(void) {
    /* data: db "  ...OCARINA... " */;
    /* data: db "The music of the" */;
    /* data: db "Ocarina leads...@" */;
}

void Dialog157(void) {
    /* data: db "    ...EGG....  " */;
    /* data: db "The Egg on the  " */;
    /* data: db "mountain calls!@" */;
}

void Dialog158(void) {
    Dialog159();
}

void Dialog159(void) {
    /* data: db "Then YOU sweep  " */;
    /* data: db "the island!@" */;
}

void Dialog15A(void) {
    /* data: db "YAHOO!   I'm    " */;
    /* data: db "fine, and you?!@" */;
}

void Dialog15B(void) {
    /* data: db "YAHOO!  I worked" */;
    /* data: db "too hard and now" */;
    /* data: db "my broom is worn" */;
    /* data: db "to the handle!@" */;
}

void Dialog15C(void) {
    /* data: db "YAHOO!  YAHOO!  " */;
    /* data: db "A new broom?!   " */;
    /* data: db "For me?  It is, " */;
    /* data: db "isn't it?!      " */;
    /* data: db "    Yes  No<ask>" */;
}

void Dialog15D(void) {
    /* data: db "Okay!  In return" */;
    /* data: db "you can have    " */;
    /* data: db "this fishing    " */;
    /* data: db "hook I found    " */;
    /* data: db "when I swept by " */;
    /* data: db "the river bank!@" */;
}

void Dialog15E(void) {
    /* data: db "You exchanged <broom> " */;
    /* data: db "for the fishing " */;
    /* data: db "hook <fishhook>!  What   " */;
    /* data: db "will the fishing" */;
    /* data: db "hook become?@" */;
}

void Dialog15F(void) {
    /* data: db "YAHOO!  A new   " */;
    /* data: db "broom!  Superb!@" */;
}

void Dialog160(void) {
    /* data: db "Kiiiki!  What?! " */;
    /* data: db "All right, mutt!" */;
    /* data: db "Let's battle!!@" */;
}

void Dialog161(void) {
    /* data: db "Chi-kiita! Chi- " */;
    /* data: db "kiita!  Kiki the" */;
    /* data: db "monkey!  Hungry!" */;
    /* data: db "Kiki the monkey!@" */;
}

void Dialog162(void) {
    /* data: db "    <bananas>!    <bananas>!    " */;
    /* data: db "Oooh! Ooh! Kiki!" */;
    /* data: db "Monkeys!  Come! " */;
    /* data: db "Repay him! Kiki!@" */;
}

void Dialog163(void) {
    /* data: db "Monkey business!" */;
    /* data: db "Done!  Bye bye! " */;
    /* data: db "Oooh!  Kiki!@" */;
}

void Dialog164(void) {
    /* data: db "You found a     " */;
    /* data: db "stick a monkey  " */;
    /* data: db "left behind...  " */;
    /* data: db "You take it!@" */;
}

void Dialog165(void) {
    /* data: db "    <bananas>!    <bananas>!    " */;
    /* data: db "  Oooh!  Oooh!  " */;
    /* data: db " Give to Kiki!? " */;
    /* data: db "    Yes  No!<ask>" */;
}

void Dialog166(void) {
    /* data: db "You don't know  " */;
    /* data: db "the proper      " */;
    /* data: db "etiquette when  " */;
    /* data: db "dealing with a  " */;
    /* data: db "lady, do you?   " */;
    /* data: db "You should have " */;
    /* data: db "brought flowers " */;
    /* data: db "or something,   " */;
    /* data: db "then I might be " */;
    /* data: db "more inclined to" */;
    /* data: db "talk with you..." */;
    /* data: db "Oh yes, in my   " */;
    /* data: db "case, hibiscus  " */;
    /* data: db "are best...@" */;
}

void Dialog167(void) {
    /* data: db "Oh, you brought " */;
    /* data: db "me a hibiscus!  " */;
    /* data: db "How sweet! Well," */;
    /* data: db "since you are   " */;
    /* data: db "such a gentleman" */;
    /* data: db "I have a request" */;
    /* data: db "to make of you. " */;
    /* data: db "Will you listen?" */;
    /* data: db "    Yes  No<ask>" */;
}

void Dialog168(void) {
    /* data: db "I would like you" */;
    /* data: db "to take this    " */;
    /* data: db "letter to a Mr. " */;
    /* data: db "Write who lives " */;
    /* data: db "on the border of" */;
    /* data: db "the Mysterious  " */;
    /* data: db "Forest, please!@" */;
}

void Dialog169(void) {
    /* data: db "...Is that so?  " */;
    /* data: db "And I thought   " */;
    /* data: db "you were a      " */;
    /* data: db "gentleman...@" */;
}

void Dialog16A(void) {
    /* data: db "You traded <flower2> for" */;
    /* data: db "a goat's letter " */;
    /* data: db "<letter>!  ...Great!?@" */;
}

void Dialog16B(void) {
    /* data: db "You know, some- " */;
    /* data: db "times I can't   " */;
    /* data: db "help eating a   " */;
    /* data: db "delicious piece " */;
    /* data: db "of paper, even  " */;
    /* data: db "if it's a letter" */;
    /* data: db "to my darling   " */;
    /* data: db "Mr. Write... How" */;
    /* data: db "embarrassing!@" */;
}

void Dialog16C(void) {
    /* data: db "You've saved    " */;
    /* data: db "BowWow!  What a " */;
    /* data: db "fearsome beast!@" */;
}

void Dialog16D(void) {
    /* data: db "Wow! The Rooster" */;
    /* data: db "has recovered!  " */;
    /* data: db "He seems very   " */;
    /* data: db "friendly!@" */;
}

void Dialog16E(void) {
    /* data: db "'BRRING! BRRING!" */;
    /* data: db "Ya, it's Ulrira!" */;
    /* data: db "My wife went to " */;
    /* data: db "the Animal      " */;
    /* data: db "Village and left" */;
    /* data: db "me all alone.   " */;
    /* data: db "Can you tell    " */;
    /* data: db "her to come home" */;
    /* data: db "as soon as she  " */;
    /* data: db "is done         " */;
    /* data: db "cleaning?       " */;
    /* data: db "Bye!            " */;
    /* data: db "CLICK!'@" */;
}

void Dialog16F(void) {
    /* data: db "Grandma's not   " */;
    /* data: db "here. She's in  " */;
    /* data: db "the Animal      " */;
    /* data: db "Village. That's " */;
    /* data: db "what Grandpa    " */;
    /* data: db "Ulrira said on  " */;
    /* data: db "the phone!@" */;
}

void Dialog170(void) {
    /* data: db "Yep, Papahl got " */;
    /* data: db "lost, just like " */;
    /* data: db "he said!  Now, I" */;
    /* data: db "am so famished I" */;
    /* data: db "can't move!  Can" */;
    /* data: db "you give me some" */;
    /* data: db "vittles?        " */;
    /* data: db "    Yes  Nope<ask>" */;
}

void Dialog171(void) {
    /* data: db "You're one cold " */;
    /* data: db "hombre...@" */;
}

void Dialog172(void) {
    /* data: db "This <pineapple> is so    " */;
    /* data: db "delicious!  I'm " */;
    /* data: db "going to eat the" */;
    /* data: db "<pineapple> right now!    " */;
    /* data: db " Bon Appetit!@" */;
}

void Dialog173(void) {
    /* data: db "AH!  This isn't " */;
    /* data: db "meant to be a   " */;
    /* data: db "reward...  Here," */;
    /* data: db "take this <flower2>!    " */;
    /* data: db "It's a hibiscus!@" */;
}

void Dialog174(void) {
    /* data: db "You traded the <pineapple>" */;
    /* data: db "for the <flower2>!@" */;
}

void Dialog175(void) {
    /* data: db "Delicious!  Yum!" */;
    /* data: db "I'm filled with " */;
    /* data: db "energy, now!@" */;
}

void Dialog176(void) {
    /* data: db "I've got to say," */;
    /* data: db "thanks again!@" */;
}

void Dialog177(void) {
    /* data: db "Yep, Papahl got " */;
    /* data: db "lost, just like " */;
    /* data: db "he said!  Now, I" */;
    /* data: db "am so famished I" */;
    /* data: db "can't move!  Can" */;
    /* data: db "you give me some" */;
    /* data: db "vittles?        " */;
    /* data: db "    Nope Can't<ask>" */;
}

void Dialog178(void) {
    /* data: db "She's had an    " */;
    /* data: db "awful tragedy   " */;
    /* data: db "in the house    " */;
    /* data: db "across the way! " */;
    /* data: db "It's just awful," */;
    /* data: db "and all I can do" */;
    /* data: db "is sweep!@" */;
}

void Dialog179(void) {
    /* data: db "I am the spirit " */;
    /* data: db "of the mansion. " */;
    /* data: db "I have been     " */;
    /* data: db "waiting for     " */;
    /* data: db "someone to      " */;
    /* data: db "overcome the    " */;
    /* data: db "darkness. Find  " */;
    /* data: db "all the secret  " */;
    /* data: db "shells and go   " */;
    /* data: db "through the     " */;
    /* data: db "gate to receive " */;
    /* data: db "the ultimate    " */;
    /* data: db "sword!@" */;
}

void Dialog17A(void) {
    /* data: db "Hmmm. No        " */;
    /* data: db "response. You   " */;
    /* data: db "must not have   " */;
    /* data: db "enough shells.@" */;
}

void Dialog17B(void) {
    /* data: db "My job here     " */;
    /* data: db "is finished.@" */;
}

void Dialog17C(void) {
    /* data: db "Hey you! Have   " */;
    /* data: db "you been to the " */;
    /* data: db "Camera Shop in  " */;
    /* data: db "Tal Tal Heights?" */;
    /* data: db "Iyoung people   " */;
    /* data: db " like to go ther" */;
    /* data: db "eand take       " */;
    /* data: db " pictures of    " */;
    /* data: db " themselves.    " */;
    /* data: db " Seems kinda    " */;
    /* data: db " funny to me.@" */;
}

void Dialog17D(void) {
    /* data: db "Step right up   " */;
    /* data: db "and get your    " */;
    /* data: db "souvenir photo!@" */;
}

void Dialog17E(void) {
    /* data: db "Good job!       " */;
    /* data: db "Use it on your  " */;
    /* data: db "enemies and see " */;
    /* data: db "what happens.   " */;
    /* data: db "If you run out, " */;
    /* data: db "go to the for-  " */;
    /* data: db "est, pick some  " */;
    /* data: db "mushrooms, and  " */;
    /* data: db "I will make you " */;
    /* data: db "more.@" */;
}

void Dialog17F(void) {
    /* data: db ". . . .! I can't" */;
    /* data: db "move! But I am  " */;
    /* data: db "still all right." */;
    /* data: db "Your little     " */;
    /* data: db "sword won't     " */;
    /* data: db "break this      " */;
    /* data: db "bottle!@" */;
}

void Dialog180(void) {
    /* data: db "Make-up! Jewels!" */;
    /* data: db "Dresses!  I want" */;
    /* data: db "it all!  Sigh..." */;
    /* data: db "And some new    " */;
    /* data: db "accessories     " */;
    /* data: db "would be nice...@" */;
}

void Dialog181(void) {
    /* data: db "Make-up! Jewels!" */;
    /* data: db "Dresses!  I want" */;
    /* data: db "it all!  Sigh..." */;
    /* data: db "And some new    " */;
    /* data: db "accessories     " */;
    /* data: db "would be nice..." */;
    /* data: db "Oh! That Ribbon!" */;
    /* data: db "I need it!  Will" */;
    /* data: db "you trade for my" */;
    /* data: db "dog food?       " */;
    /* data: db "    Yes  No!<ask>" */;
}

void Dialog182(void) {
    /* data: db "You exchanged <ribbon> " */;
    /* data: db "for <dogfood>! It's full" */;
    /* data: db "of juicy beef!@" */;
}

void Dialog183(void) {
    /* data: db "Lucky!  Thanks! " */;
    /* data: db "Well, here's    " */;
    /* data: db "your <dogfood>!@" */;
}

void Dialog184(void) {
    /* data: db "Eh?!  I can't   " */;
    /* data: db "believe it!  You" */;
    /* data: db "are the worst!!@" */;
}

void Dialog185(void) {
    /* data: db "I am Manbo,     " */;
    /* data: db "child of the Sun" */;
    /* data: db "Fish!  Have you " */;
    /* data: db "got an Ocarina? " */;
    /* data: db "    Yes  No<ask>" */;
}

void Dialog186(void) {
    /* data: db "Very well...    " */;
    /* data: db "Glub Blub Bloop!@" */;
}

void Dialog187(void) {
    /* data: db "Ahaha!  Then I  " */;
    /* data: db "can teach you my" */;
    /* data: db "song! Bloop!@" */;
}

void Dialog188(void) {
    /* data: db "You've learned  " */;
    /* data: db "Manbo's Mambo!  " */;
    /* data: db "When you get out" */;
    /* data: db "of the water,   " */;
    /* data: db "play it!@" */;
}

void Dialog189(void) {
    /* data: db "I am Manbo,     " */;
    /* data: db "child of the Sun" */;
    /* data: db "Fish!  When you " */;
    /* data: db "play my Mambo,  " */;
    /* data: db "you can warp to " */;
    /* data: db "Manbo Pond!  Try" */;
    /* data: db "this tune in the" */;
    /* data: db "dungeons, too!  " */;
    /* data: db "Cha-cha-cha!@" */;
}

void Dialog18A(void) {
    /* data: db "Aha... You don't" */;
    /* data: db "have an Ocarina," */;
    /* data: db "so...Glub glub!@" */;
}

void Dialog18B(void) {
    /* data: db "Chickens these  " */;
    /* data: db "days don't have " */;
    /* data: db "the fighting    " */;
    /* data: db "spirit they used" */;
    /* data: db "to!  In the old " */;
    /* data: db "days, they could" */;
    /* data: db "fly, flap flap! " */;
    /* data: db "But now, see?   " */;
    /* data: db "Cluck cluck!@" */;
}

void Dialog18C(void) {
    /* data: db "Wow!  Amazing!  " */;
    /* data: db "That rooster is " */;
    /* data: db "actually flying!" */;
    /* data: db "It's just like I" */;
    /* data: db "said, eh?  Have " */;
    /* data: db "you tried to    " */;
    /* data: db "hold him over   " */;
    /* data: db "your head? Cluck" */;
    /* data: db "Cluck!@" */;
}

void Dialog18D(void) {
    /* data: db "Wooo!  Finally! " */;
    /* data: db "This flying     " */;
    /* data: db "rooster is the  " */;
    /* data: db "greatest!@" */;
}

void Dialog18E(void) {
    /* data: db " Here Sleeps The" */;
    /* data: db " Flying Rooster@" */;
}

void Dialog18F(void) {
    /* data: db "Iz zat zee      " */;
    /* data: db "Mermaid scale?  " */;
    /* data: db "I can't use it  " */;
    /* data: db "now. I have to  " */;
    /* data: db "werk on zis     " */;
    /* data: db "drawing. You    " */;
    /* data: db "should go finish" */;
    /* data: db "zee mermaid     " */;
    /* data: db "statue for me.@" */;
}
