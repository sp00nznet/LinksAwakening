/* Fixup header for undeclared symbols from DX-only banks, WRAM sub-fields,
   and other missing declarations needed for compilation. */
#ifndef FIXUPS_H
#define FIXUPS_H

#include "gb_runtime.h"

/* ═══════════════════════════════════════════════════════════════════════
   DX-only functions - stubs (these exist in banks $20+ which are GBC-only)
   ═══════════════════════════════════════════════════════════════════════ */

/* GBC/SGB initialization */
static inline void SuperGameBoyInit(void) { /* DMG: no SGB */ }

/* GBC palette functions */
static inline void ChangeBGColumnPalette(void) { /* GBC only */ }
static inline void CopyPalettesToVRAM(void) { /* GBC only */ }
static inline void CopyLinkTunicPalette(void) { /* GBC only */ }
static inline void LoadBGMapAttributes(void) { /* GBC only */ }
static inline void LoadPaletteForTilemap(void) { /* GBC only */ }
static inline void LoadRoomPalettes(void) { /* GBC only */ }
static inline void LoadBGPalettes(void) { /* GBC only */ }
static inline void ApplyFadeToWhite_GBC(void) { /* GBC only */ }
static inline void FillBGMapAttributesWhite(void) { /* GBC only */ }
static inline void UpdateIntroSeaBGPalettes(void) { /* GBC only */ }
static inline void MadBatterReplaceScenePalettes(void) { /* GBC only */ }
static inline void cycleInstrumentItemColor(void) { /* GBC only */ }

/* GBC WRAM/memory functions */
static inline void ClearWRAMBank5(void) { /* GBC only */ }

/* Color Dungeon (DX exclusive) */
static inline void LoadColorDungeonTiles(void) { /* DX only */ }
static inline void GetColorDungeonTilesAddress(void) { /* DX only */ }

/* Title screen DX additions */
static inline void PositionTitleScreenSprites(void) { /* DX only */ }
static inline void UpdateBGRegionOrigin(void) { /* DX only */ }

/* Photo Album (DX exclusive) */
static inline void SpawnPhotographer(void) { /* DX only */ }
static inline void PhotoAlbumEntryPoint(void) { /* DX only */ }
static inline void PhotosEntryPoint(void) { /* DX only */ }
static inline void LoadPhotoBgMap(void) { /* DX only */ }

/* Printer (DX exclusive) */
static inline void PrinterInterruptSerial(void) { /* DX only */ }
static inline void PrinterInterruptVBlank(void) { /* DX only */ }

/* Magic Powder DX additions */
static inline void SprinkleMagicPowder(void) { /* DX only */ }

/* Entity/object DX additions */
static inline void Spawn2x2RubbleEntities(void) { /* DX only */ }
static inline void ConvertToBombArrowIfNeeded(void) { /* DX only */ }

/* Credits/Ending DX additions */
static inline void EndCreditsEntryPoint(void) { /* DX only */ }
static inline void LoadCreditsMarinPortraitTiles(void) { /* DX only */ }
static inline void LoadThanksForPlayingTiles(void) { /* DX only */ }
static inline void FadeOutMusic(void) { /* DX only */ }

/* Audio DX additions */
static inline void PlayBoomerangSfx(void) { /* DX only */ }

/* Map/Room DX additions */
static inline void LoadWorldMapBGMap(void) { /* DX only */ }
static inline void LoadFileMenuBG(void) { /* DX only */ }
static inline void LoadRoomObjectsAttributes(void) { /* DX only */ }
static inline void ResetRoomVariables(void) { /* DX only */ }
static inline void IsInteractiveMotionAllowed(void) { /* DX only */ }

/* Entity/handler tables from DX banks */
static inline void GetEntityInitHandler(void) { /* DX only */ }
static inline void EntityInitGenie(void) { /* DX only */ }
static inline void GetOwlStatueDialogId(void) { /* DX only */ }
static inline void GetTilesetHandlerAddress(void) { /* DX only */ }
static inline void GetBGCopyRequest(void) { /* DX only */ }
static inline void CheckOverworldObjectIgnoreList(void) { /* DX only */ }
static inline void ExpandOverworldObjectMacro(void) { /* DX only */ }
static inline void ReplaceObjects56and57(void) { /* DX only */ }
static inline void DrawInventorySlots(void) { /* DX only */ }
static inline void InventoryEntryPoint(void) { /* DX only */ }
static inline void CheckPushedTombStone(void) { /* DX only */ }

/* Inventory/Item DX functions */
static inline void ConfigureAnimatedTilesCopy(void) { /* DX only */ }

/* ═══════════════════════════════════════════════════════════════════════
   Functions from DX-only banks (func_0XX_XXXX pattern, banks $20+)
   ═══════════════════════════════════════════════════════════════════════ */

/* Bank $20 functions */
static inline void func_020_4303(void) { }
static inline void func_020_4874(void) { }
static inline void func_020_48CA(void) { }
static inline void func_020_4954(void) { }
static inline void func_020_49BA(void) { }
static inline void func_020_49D9(void) { }
static inline void func_020_4A76(void) { }
static inline void func_020_4AB3(void) { }
static inline void func_020_4B4A(void) { }
static inline void func_020_4BFF(void) { }
static inline void func_020_54F5(void) { }
static inline void func_020_563B(void) { }
static inline void func_020_6352(void) { }
static inline void func_020_6A30(void) { }
static inline void func_020_6AC1(void) { }
static inline void func_020_6BDC(void) { }
static inline void func_020_6C4F(void) { }
static inline void func_020_6C7A(void) { }
static inline void func_020_6D0E(void) { }
static inline void func_020_6D52(void) { }
static inline void func_020_78ED(void) { }
static inline void func_020_7BA5(void) { }
static inline void func_020_7C26(void) { }
static inline void func_020_7D1C(void) { }
static inline void func_020_7D7C(void) { }
static inline void func_20_4B1F(void) { }

/* Bank $21 functions */
static inline void func_021_53CF(void) { }
static inline void func_021_53F3(void) { }
static inline void func_021_5355(void) { }
static inline void func_021_53B6(void) { }

/* Bank $23 functions */
static inline void func_023_7E95(void) { }

/* Bank $24 functions */
static inline void func_024_7801(void) { }
static inline void func_024_7A40(void) { }

/* Bank $27 functions */
static inline void func_027_72E4(void) { }
static inline void func_027_7306(void) { }
static inline void func_027_734B(void) { }
static inline void func_027_73C7(void) { }
static inline void func_027_74E3(void) { }
static inline void func_027_7660(void) { }
static inline void func_027_774C(void) { }
static inline void func_027_782E(void) { }
static inline void func_027_7854(void) { }

/* Bank $36 functions */
static inline void func_036_4A77(void) { }
static inline void func_036_4BE8(void) { }
static inline void func_036_4F68(void) { }
static inline void func_036_4F9B(void) { }
static inline void func_036_505F(void) { }
static inline void func_036_6D4D(void) { }
static inline void func_036_703E(void) { }
static inline void func_036_72BA(void) { }

/* Bank $38 functions */
static inline void func_038_7830(void) { }
static inline void func_038_785A(void) { }

/* ═══════════════════════════════════════════════════════════════════════
   Data/Table labels from DX-only banks (used as addresses)
   ═══════════════════════════════════════════════════════════════════════ */

#ifndef PhotoAlbumTiles
#define PhotoAlbumTiles 0x4000
#endif
#ifndef ColorDungeonNpcTiles
#define ColorDungeonNpcTiles 0x4000
#endif
#ifndef TitleDXTilesDMG
#define TitleDXTilesDMG 0x4000
#endif
#ifndef TitleDXTilesCGB
#define TitleDXTilesCGB 0x4000
#endif
#ifndef TitleDXOAMTiles
#define TitleDXOAMTiles 0x4000
#endif
#ifndef CameraShopIndoorTiles
#define CameraShopIndoorTiles 0x4000
#endif
#ifndef ColorDungeonTiles
#define ColorDungeonTiles 0x4000
#endif
#ifndef CreditsRollTiles
#define CreditsRollTiles 0x4000
#endif
#ifndef EndingCGBAltTiles
#define EndingCGBAltTiles 0x4000
#endif

/* Entity/Tileset table addresses from DX banks */
#ifndef EntityHandlersTable
#define EntityHandlersTable 0x4000
#endif
#ifndef IndoorEntitySpritesheetsTable
#define IndoorEntitySpritesheetsTable 0x4000
#endif
#ifndef OverworldEntitySpritesheetsTable
#define OverworldEntitySpritesheetsTable 0x4000
#endif
#ifndef IndoorsTilesetsTable
#define IndoorsTilesetsTable 0x4000
#endif
#ifndef OverworldTilesetsTable
#define OverworldTilesetsTable 0x4000
#endif
#ifndef ColorDungeonTilesetsTable
#define ColorDungeonTilesetsTable 0x4000
#endif
#ifndef ColorDungeonWallsTilesPointers
#define ColorDungeonWallsTilesPointers 0x4000
#endif
#ifndef DungeonFloorTilesPointers
#define DungeonFloorTilesPointers 0x4000
#endif
#ifndef DungeonItemsTilesPointers
#define DungeonItemsTilesPointers 0x4000
#endif
#ifndef DungeonWallsTilesPointers
#define DungeonWallsTilesPointers 0x4000
#endif
#ifndef RoomSpritesheetGroupsTable
#define RoomSpritesheetGroupsTable 0x4000
#endif
/* Data_019_7AB6 is a function in bank_19.c - no define needed */

/* ═══════════════════════════════════════════════════════════════════════
   WRAM sub-field addresses (derived from struct offsets)
   ═══════════════════════════════════════════════════════════════════════ */

#ifndef wInventoryItems_AButtonSlot
#define wInventoryItems_AButtonSlot 0xDB00
#endif
#ifndef wInventoryItems_BButtonSlot
#define wInventoryItems_BButtonSlot 0xDB01
#endif
#ifndef wLinkOAMBuffer_8
#define wLinkOAMBuffer_8 0xC020
#endif
#ifndef wLinkOAMBuffer__10
#define wLinkOAMBuffer__10 0xC028
#endif
#ifndef wKillOrder_end
#define wKillOrder_end 0xD600
#endif
#ifndef wDrawCommand_length
#define wDrawCommand_length 0xDC00
#endif
#ifndef wDrawCommand_length__1
#define wDrawCommand_length__1 0xDC00
#endif
#ifndef wDrawCommand_destinationLow
#define wDrawCommand_destinationLow 0xDC01
#endif
#ifndef wDrawCommand_destinationHigh
#define wDrawCommand_destinationHigh 0xDC02
#endif
#ifndef wDrawCommand_data
#define wDrawCommand_data 0xDC03
#endif

/* Dialog box origin addresses are local labels within DialogBoxOrigin function,
   not standalone symbols - no defines needed here */

/* ═══════════════════════════════════════════════════════════════════════
   Tileset/Misc constants
   ═══════════════════════════════════════════════════════════════════════ */

#ifndef W_TILESET_CAMERA_SHOP
#define W_TILESET_CAMERA_SHOP 0x0F
#endif

#ifndef TILE_WIDTH_
#define TILE_WIDTH_ 8
#endif

#ifndef _SCRN_X
#define _SCRN_X 160
#endif

#ifndef _ThiefString
#define _ThiefString 0x00
#endif

/* Dialog charmap characters - used as data, not code */
#ifndef ___
#define ___ 0x00
#endif
#ifndef __ask__
#define __ask__ 0x00
#endif

/* Debug save file constants (from bank1.asm) */
#ifndef DEBUG_SAVE_FILE_SIZE
#define DEBUG_SAVE_FILE_SIZE 0x43
#endif
#ifndef CHARVAL_STRCHAR__DEBUG_SAVE_FILE_NAME
#define CHARVAL_STRCHAR__DEBUG_SAVE_FILE_NAME 0x00
#endif
#ifndef INDEX
#define INDEX 0
#endif

/* Name entry table size (from file_menus.asm: NameEntryCharacterTable.end - NameEntryCharacterTable) */
#ifndef NameEntryCharacterTableSize
#define NameEntryCharacterTableSize 0x40
#endif

/* DMA routine address modulo - hDMARoutine ($FFC0) % $100 = $C0 */
#ifndef hDMARoutine____100
#define hDMARoutine____100 0xC0
#endif

/* ═══════════════════════════════════════════════════════════════════════
   Mangled expression constants (transpiler artifacts)
   ═══════════════════════════════════════════════════════════════════════ */

/* ONE_HEART * 16 = $08 * 16 = $80 */
#ifndef ONE_HEART_16
#define ONE_HEART_16 0x80
#endif

/* 3 FULL_HEARTS = 3 * 8 = $18 */
#ifndef _3_FULL_HEARTS
#define _3_FULL_HEARTS 0x18
#endif

/* -$14 = $EC (negation of 0x14) */
#ifndef __14
#define __14 0xEC
#endif

/* Multiplication expressions: N * 2 */
#ifndef _3_2
#define _3_2 6
#endif
#ifndef _2_2
#define _2_2 4
#endif
#ifndef _1_2
#define _1_2 2
#endif

/* ═══════════════════════════════════════════════════════════════════════
   Label-offset addresses (label +/- constant)
   ═══════════════════════════════════════════════════════════════════════ */

/* RandomDropChanceTable - 1 = $55AA */
#ifndef RandomDropChanceTable__1
#define RandomDropChanceTable__1 0x55AB
#endif
/* RandomDropChanceTableLowHealth - 1 = $55B8 */
#ifndef RandomDropChanceTableLowHealth__1
#define RandomDropChanceTableLowHealth__1 0x55B9
#endif
/* Data_004_7B56 - 1 = $7B55 */
#ifndef Data_004_7B56__1
#define Data_004_7B56__1 0x7B55
#endif

/* ═══════════════════════════════════════════════════════════════════════
   OR'd entity option flag combinations
   ═══════════════════════════════════════════════════════════════════════ */

#ifndef ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_NO_WALL_COLLISION
#define ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_NO_WALL_COLLISION (0x80 | 0x01)
#endif
#ifndef ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_NO_GROUND_INTERACTION
#define ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_NO_GROUND_INTERACTION (0x80 | 0x10)
#endif
#ifndef ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF
#define ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF (0x80 | 0x40)
#endif
#ifndef ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_NO_GROUND_INTERACTION
#define ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_NO_GROUND_INTERACTION (0x80 | 0x40 | 0x10)
#endif
#ifndef ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_IS_MINI_BOSS
#define ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_IS_MINI_BOSS (0x80 | 0x40 | 0x04)
#endif
#ifndef ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_IS_MINI_BOSS
#define ENTITY_OPT1_IS_BOSS_ENTITY_OPT1_IS_MINI_BOSS (0x80 | 0x04)
#endif
#ifndef ENTITY_OPT1_NO_GROUND_INTERACTION_ENTITY_OPT1_NO_WALL_COLLISION
#define ENTITY_OPT1_NO_GROUND_INTERACTION_ENTITY_OPT1_NO_WALL_COLLISION (0x10 | 0x01)
#endif
#ifndef ENTITY_OPT1_SPLASH_IN_WATER_ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL
#define ENTITY_OPT1_SPLASH_IN_WATER_ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL (0x08 | 0x02)
#endif
#ifndef ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_IS_BOSS
#define ENTITY_OPT1_EXCLUDED_FROM_KILL_ALL_ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_IS_BOSS (0x02 | 0x40 | 0x80)
#endif
#ifndef ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_SPLASH_IN_WATER
#define ENTITY_OPT1_SWORD_CLINK_OFF_ENTITY_OPT1_SPLASH_IN_WATER (0x40 | 0x08)
#endif

/* OR'd room status flag combinations */
#ifndef ROOM_STATUS_EVENT_2_ROOM_STATUS_EVENT_1
#define ROOM_STATUS_EVENT_2_ROOM_STATUS_EVENT_1 (0x20 | 0x10)
#endif

/* ═══════════════════════════════════════════════════════════════════════
   WRAM: Music channel sub-field addresses
   ═══════════════════════════════════════════════════════════════════════ */

/* Channel 1 (base 0xD310) */
#ifndef wMusicChannel1_definitionPointerLow
#define wMusicChannel1_definitionPointerLow 0xD314
#endif
#ifndef wMusicChannel1_lengthCountdown
#define wMusicChannel1_lengthCountdown 0xD312
#endif
#ifndef wMusicChannel1_lengthCounterUp
#define wMusicChannel1_lengthCounterUp 0xD31E
#endif
#ifndef wMusicChannel1_loopCounter
#define wMusicChannel1_loopCounter 0xD31F
#endif
#ifndef wMusicChannel1_noteBaseFrequencyHigh
#define wMusicChannel1_noteBaseFrequencyHigh 0xD31A
#endif
#ifndef wMusicChannel1_playingRest
#define wMusicChannel1_playingRest 0xD31B
#endif
#ifndef wMusicChannel1_softwareEnvelope
#define wMusicChannel1_softwareEnvelope 0xD317
#endif

/* Channel 2 (base 0xD320) */
#ifndef wMusicChannel2_definitionPointerLow
#define wMusicChannel2_definitionPointerLow 0xD324
#endif
#ifndef wMusicChannel2_lengthCounterUp
#define wMusicChannel2_lengthCounterUp 0xD32E
#endif
#ifndef wMusicChannel2_loopCounter
#define wMusicChannel2_loopCounter 0xD32F
#endif
#ifndef wMusicChannel2_noteBaseFrequencyHigh
#define wMusicChannel2_noteBaseFrequencyHigh 0xD32A
#endif
#ifndef wMusicChannel2_playingRest
#define wMusicChannel2_playingRest 0xD32B
#endif
#ifndef wMusicChannel2_softwareEnvelope
#define wMusicChannel2_softwareEnvelope 0xD327
#endif

/* Channel 3 (base 0xD330) */
#ifndef wMusicChannel3_definitionPointerLow
#define wMusicChannel3_definitionPointerLow 0xD334
#endif
#ifndef wMusicChannel3_lengthCounterUp
#define wMusicChannel3_lengthCounterUp 0xD33E
#endif
#ifndef wMusicChannel3_loopCounter
#define wMusicChannel3_loopCounter 0xD33F
#endif
#ifndef wMusicChannel3_volumeEffect
#define wMusicChannel3_volumeEffect 0xD338
#endif
#ifndef wMusicChannel3_waveformPointerLow
#define wMusicChannel3_waveformPointerLow 0xD336
#endif
#ifndef wMusicChannel3_waveformPointerHigh
#define wMusicChannel3_waveformPointerHigh 0xD337
#endif

/* Channel 4 (base 0xD340) */
#ifndef wMusicChannel4_definitionPointerLow
#define wMusicChannel4_definitionPointerLow 0xD344
#endif

/* ═══════════════════════════════════════════════════════════════════════
   WRAM: Animated scrolling tiles storage sub-fields
   ═══════════════════════════════════════════════════════════════════════ */

#ifndef wAnimatedScrollingTilesStorage_tile1
#define wAnimatedScrollingTilesStorage_tile1 0xDCD0
#endif
#ifndef wAnimatedScrollingTilesStorage_tile2
#define wAnimatedScrollingTilesStorage_tile2 0xDCE0
#endif
#ifndef wAnimatedScrollingTilesStorage_tile3
#define wAnimatedScrollingTilesStorage_tile3 0xDCF0
#endif

/* ═══════════════════════════════════════════════════════════════════════
   HRAM routines called as functions
   The original GB copies a DMA routine to HRAM and calls it.
   We stub it since our PPU handles OAM DMA differently.
   ═══════════════════════════════════════════════════════════════════════ */

/* Undefine hDMARoutine if it was defined as an address constant,
   and redefine as a function for call sites */
#ifdef hDMARoutine
#undef hDMARoutine
#endif
static inline void hDMARoutine(void) {
    /* OAM DMA transfer - handled by our PPU implementation */
    /* In the original GB, this copies OAM data from wOAMBuffer to OAM */
    /* Our gb_write handles OAM DMA when writing to $FF46 */
}

#endif /* FIXUPS_H */
