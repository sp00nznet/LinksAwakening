/* Fixup header for undeclared symbols from DX-only banks, WRAM sub-fields,
   and other missing declarations needed for compilation. */
#ifndef FIXUPS_H
#define FIXUPS_H

#include "gb_runtime.h"
#include "rom_data.h"

/* Forward declarations for cross-function stubs used by fixups */
extern void ExecuteDrawCommands_noRoomTransition(void);

/* WRAM bank 2 is used for GBC palette data (wBGPal1, wObjPal1, wPaletteDataFlags).
   All fixup functions that access palette WRAM must switch to bank 2. */

/* ═══════════════════════════════════════════════════════════════════════
   DX-only functions - stubs (these exist in banks $20+ which are GBC-only)
   ═══════════════════════════════════════════════════════════════════════ */

/* GBC/SGB initialization */
static inline void SuperGameBoyInit(void) { /* DMG: no SGB */ }

/* GBC palette functions */
static inline void ChangeBGColumnPalette(void) { /* GBC only */ }
static inline void CopyPalettesToVRAM(void) {
    /* Bank $21 address $4000: copies BG/OBJ palette data from WRAM to hardware.
       Reads wPaletteDataFlags ($DE79) to determine what to copy.
       CRITICAL: Palette data (wBGPal1/wObjPal1) lives in WRAM bank 2.
       wPaletteDataFlags is also in the banked region, accessed via bank 2. */
    uint8_t saved_wram_bank = gb.wram_bank;
    gb.wram_bank = 2;

    uint8_t flags = gb_read(0xDE79);
    if (flags == 0) { gb.wram_bank = saved_wram_bank; return; }

    if (flags & 0x80) {
        /* Partial copy mode. Simplified: do full copy. */
        flags = (flags & 0x03) ? (flags & 0x03) : 0x03;
    }

    if (flags & 0x01) {
        /* Copy 64 bytes from wBGPal1 ($DCB8) to BCPS/BCPD */
        gb_write(0xFF68, 0x80); /* BCPS: index 0, auto-increment */
        for (int i = 0; i < 64; i++) {
            gb_write(0xFF69, gb_read(0xDCB8 + i)); /* BCPD */
        }
    }
    if (flags & 0x02) {
        /* Copy 64 bytes from wObjPal1 ($DCF8) to OCPS/OCPD */
        gb_write(0xFF6A, 0x80); /* OCPS: index 0, auto-increment */
        for (int i = 0; i < 64; i++) {
            gb_write(0xFF6B, gb_read(0xDCF8 + i)); /* OCPD */
        }
    }
    gb_write(0xDE79, 0); /* Clear flags */
    gb.wram_bank = saved_wram_bank;
}
static inline void CopyLinkTunicPalette(void) { /* GBC only */ }
static inline void LoadBGMapAttributes(void) {
    /* Bank $24, address $5C2C: Load GBC BG map attributes to VRAM bank 1.
       Called via gb_call_bank(36, ...) so ROM bank is already $24.
       AttrmapsPointersTable at $5C4B: indexed by wBGMapToLoad. */
    if (gb_read(0xFFFE) == 0) return; /* Not GBC */

    uint8_t saved_vram_bank = gb.vram_bank;
    gb.vram_bank = 1;

    uint8_t idx = gb_read(0xD7B4); /* wBGMapToLoad (transpiled) */
    uint16_t tbl_off = 0x5C4B + (uint16_t)idx * 2;
    uint16_t attr_ptr = gb_read(tbl_off) | ((uint16_t)gb_read(tbl_off + 1) << 8);

    if (attr_ptr != 0) {
        gb.regs.de = attr_ptr;
        ExecuteDrawCommands_noRoomTransition();
    }

    gb.vram_bank = 0;
}
static inline void LoadPaletteForTilemap(void) { /* GBC only */ }
static inline void LoadRoomPalettes(void) {
    /* Implements bank $21 LoadRoomPalettes: loads GBC palette data from ROM
       into WRAM palette buffers, then flags CopyPalettesToVRAM to push them
       to hardware BCPS/BCPD registers.
       CRITICAL: Palette data lives in WRAM bank 2. LoadRoom's zeroing loop
       clears bank 1 at $DC5D-$DCFF, overlapping wBGPal1 in bank 1.
       Transpiled WRAM addresses used (disasm + $A8 offset):
         wIsIndoor=$DC4D, wBGPal1=$DCB8, wObjPal1=$DCF8,
         wPaletteDataFlags=$DE79, wPaletteToLoadForTileMap=$DE7A
       ROM data tables in bank $21 (offsets from $4000):
         OverworldPaletteMap=$42EF, OverworldPalettes=$42B1,
         ObjectPalettes=$5518, DungeonPalettesA=$43EF,
         IndoorPaletteMaps=$4413, InteriorPalettes=$443F */

    /* Save current WRAM bank and switch to bank 2 (where palette data lives).
       Original game stores wBGPal1/wObjPal1 in WRAM bank 2.
       LoadRoom's zeroing loop clears bank 1 at $DC5D-$DCFF, which overlaps
       wBGPal1 ($DCB8) in bank 1 - so we MUST use bank 2. */
    uint8_t saved_wram_bank = gb.wram_bank;
    gb.wram_bank = 2;

    /* Early return if palette flags already pending */
    uint8_t flags = gb_read(0xDE79); /* wPaletteDataFlags */
    uint8_t ptlm = gb_read(0xDE7A);  /* wPaletteToLoadForTileMap */
    if ((flags | ptlm) != 0) {
        gb.wram_bank = saved_wram_bank;
        return;
    }

    /* Determine palette data pointer from ROM tables */
    uint8_t isIndoor = gb_read(0xDC4D); /* wIsIndoor */
    uint16_t pal_ptr = 0;

    if (isIndoor == 0) {
        /* Overworld: OverworldPaletteMap[hMapRoom] → index → OverworldPalettes[idx] */
        uint8_t room = gb_read(0xFFF6); /* hMapRoom */
        uint8_t pal_idx = rom_bank_21[0x42EF - 0x4000 + room];
        uint16_t tbl_off = 0x42B1 - 0x4000 + (uint16_t)pal_idx * 2;
        pal_ptr = rom_bank_21[tbl_off] | ((uint16_t)rom_bank_21[tbl_off + 1] << 8);
    } else {
        /* Indoor: only load palettes on room entry (direction $04) */
        uint8_t dir = gb_read(0xC125); /* wRoomTransitionDirection */
        if (dir != 0x04) {
            gb.wram_bank = saved_wram_bank;
            return;
        }

        uint8_t mapId = gb_read(0xFFF7); /* hMapId */
        if (mapId < 0x0A) {
            /* Dungeon */
            uint16_t tbl_off = 0x43EF - 0x4000 + (uint16_t)mapId * 2;
            pal_ptr = rom_bank_21[tbl_off] | ((uint16_t)rom_bank_21[tbl_off + 1] << 8);
        } else {
            /* Interior building */
            uint16_t map_off = 0x4413 - 0x4000 + (uint16_t)(mapId - 0x0A) * 2;
            uint16_t map_ptr = rom_bank_21[map_off] | ((uint16_t)rom_bank_21[map_off + 1] << 8);
            if (map_ptr < 0x4000 || map_ptr >= 0x8000) {
                gb.wram_bank = saved_wram_bank;
                return;
            }
            uint8_t room = gb_read(0xFFF6); /* hMapRoom */
            uint8_t pal_idx = rom_bank_21[map_ptr - 0x4000 + room];
            uint16_t tbl_off = 0x443F - 0x4000 + (uint16_t)pal_idx * 2;
            pal_ptr = rom_bank_21[tbl_off] | ((uint16_t)rom_bank_21[tbl_off + 1] << 8);
        }
    }

    if (pal_ptr < 0x4000 || pal_ptr >= 0x8000) {
        gb.wram_bank = saved_wram_bank;
        return;
    }
    uint16_t rom_off = pal_ptr - 0x4000;

    /* Copy 64 bytes BG palette data → wBGPal1 ($DCB8) */
    for (int i = 0; i < 64; i++) {
        gb_write(0xDCB8 + i, rom_bank_21[rom_off + i]);
    }

    /* Copy 48 bytes common OBJ palettes (ObjectPalettes $5518) → wObjPal1 ($DCF8) */
    for (int i = 0; i < 48; i++) {
        gb_write(0xDCF8 + i, rom_bank_21[0x5518 - 0x4000 + i]);
    }

    /* Copy 16 bytes room-specific OBJ palettes → wObjPal1+48 ($DD28) */
    for (int i = 0; i < 16; i++) {
        gb_write(0xDCF8 + 48 + i, rom_bank_21[rom_off + 64 + i]);
    }

    /* Set flags to trigger CopyPalettesToVRAM on next VBlank */
    gb_write(0xDE79, 0x03); /* wPaletteDataFlags: copy both BG and OBJ */
    gb_write(0xDE7A, 0x00); /* wPaletteToLoadForTileMap: clear */

    gb.wram_bank = saved_wram_bank;
}
static inline void LoadBGPalettes(void) { /* GBC only */ }
static inline void ApplyFadeToWhite_GBC(void) { /* GBC only */ }
static inline void FillBGMapAttributesWhite(void) {
    /* Bank $24: fills entire VRAM bank 1 BG map with $00 (palette 0, no flip, bank 0).
       Used during screen transitions to reset tile attributes. */
    if (gb_read(0xFFFE) == 0) return; /* Not GBC */
    uint8_t saved_vram_bank = gb.vram_bank;
    gb.vram_bank = 1;
    for (uint16_t addr = 0x9800; addr < 0x9C00; addr++) {
        gb_write(addr, 0x00);
    }
    gb.vram_bank = saved_vram_bank;
}
static inline void UpdateIntroSeaBGPalettes(void) {
    /* Bank $20 address $6BA4: updates BG palette for intro sea sequence.
       In DMG mode: just copy wBGPalette to BGP register.
       In GBC mode: blend palettes from WRAM bank 2 → bank 0, set flags.
       For now, use DMG fallback path (IgnorePaletteChange_DMG). */
    uint8_t bgpal = gb_read(0xDC3F); /* wBGPalette */
    gb_write(0xFF47, bgpal);          /* Write to BGP register */
}
static inline void MadBatterReplaceScenePalettes(void) { /* GBC only */ }
static inline void cycleInstrumentItemColor(void) { /* GBC only */ }

/* GBC WRAM/memory functions */
static inline void ClearWRAMBank5(void) { /* GBC only */ }

/* Color Dungeon (DX exclusive) */
static inline void LoadColorDungeonTiles(void) { /* DX only */ }
static inline void GetColorDungeonTilesAddress(void) { /* DX only */ }

/* Title screen DX additions */
static inline void PositionTitleScreenSprites(void) {
    /* GBC bank $20: increments wC17E every 2 frames (caps at $10).
       TitleScreenSfxHandler waits for wC17E >= $10 to advance. */
    uint8_t sub = gb_read(0xDC3E);
    if (sub >= 0x0A) return;
    gb_write(0xC17C, 0);
    gb_write(0xC17D, 0);
    if (gb_read(0xFFE7) & 1) return;
    uint8_t val = gb_read(0xC17E) + 1;
    if (val > 0x10) val = 0x10;
    gb_write(0xC17E, val);
}
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
static inline void EndCreditsHandler(void) { /* DX only - unreachable in non-DX */ }
static inline void EndCreditsEntryPoint(void) { /* DX only */ }
static inline void LoadCreditsMarinPortraitTiles(void) { /* DX only */ }
static inline void LoadThanksForPlayingTiles(void) { /* DX only */ }
static inline void FadeOutMusic(void) { /* DX only */ }

/* Audio DX additions */
static inline void PlayBoomerangSfx(void) { /* DX only */ }

/* Map/Room DX additions */
static inline void LoadWorldMapBGMap(void) { /* DX only */ }
static inline void LoadFileMenuBG(void) { /* DX only */ }
static inline void LoadRoomObjectsAttributes(void) {
    /* Bank $20, address $6DAF: Load GBC BG tile attributes for overworld rooms.
       Reads per-room overlay data from ROM banks $26/$27, copies to WRAM bank 2
       wRoomObjects, and expands to VRAM bank 1 BG map attributes. */
    if (gb_read(0xFFFE) == 0) return; /* Not GBC */

    uint8_t isIndoor = gb_read(0xDC4D); /* wIsIndoor (transpiled) */
    if (isIndoor != 0) return; /* Overworld only */

    uint8_t room = gb_read(0xFFF6); /* hMapRoom */
    const uint8_t *rom_src = NULL;

    /* Check 6 special rooms with alternate overlays (bank $27) when
       OW_ROOM_STATUS_CHANGED ($10) is set in wOverworldRoomStatus */
    if (room == 0x0E && (gb_read(0xD8C3) & 0x10))
        rom_src = &rom_bank_27[0x5090 - 0x4000]; /* RoomGBCOverlay0EAlt */
    else if (room == 0x8C && (gb_read(0xD941) & 0x10))
        rom_src = &rom_bank_27[0x51D0 - 0x4000]; /* RoomGBCOverlay8CAlt */
    else if (room == 0x79 && (gb_read(0xD92E) & 0x10))
        rom_src = &rom_bank_27[0x5180 - 0x4000]; /* RoomGBCOverlay79Alt */
    else if (room == 0x06 && (gb_read(0xD8BB) & 0x10))
        rom_src = &rom_bank_27[0x5040 - 0x4000]; /* RoomGBCOverlay06Alt */
    else if (room == 0x1B && (gb_read(0xD8E0) & 0x10))
        rom_src = &rom_bank_27[0x50E0 - 0x4000]; /* RoomGBCOverlay1BAlt */
    else if (room == 0x2B && (gb_read(0xD8E0) & 0x10))
        rom_src = &rom_bank_27[0x5130 - 0x4000]; /* RoomGBCOverlay2BAlt */

    if (rom_src == NULL) {
        /* Standard overlay: RoomGBCOverlaysA in bank $26/$27 */
        if (room < 0xCC)
            rom_src = &rom_bank_26[(uint16_t)room * 0x50];
        else
            rom_src = &rom_bank_27[(uint16_t)(room - 0xCC) * 0x50];
    }

    /* Copy overlay data to WRAM bank 2 at wRoomObjects ($D7C6 transpiled).
       8 rows × 10 cols, stride $10 per row in WRAM. */
    uint8_t saved_wram_bank = gb.wram_bank;
    gb.wram_bank = 2;
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 10; col++) {
            gb_write(0xD7C6 + row * 0x10 + col, rom_src[row * 10 + col]);
        }
    }
    gb.wram_bank = saved_wram_bank;

    /* Note: VRAM bank 1 per-tile attributes are written by CopyBGMapFromBank
       (bank_00.c line 2003) which copies ROM-embedded attribute data alongside
       tiles. The overlay data in WRAM bank 2 is used by ChangeBGColumnPalette
       for scroll-based updates. */
}
static inline void ResetRoomVariables(void) { /* DX only */ }
static inline void IsInteractiveMotionAllowed(void) { /* DX only */ }

/* Entity/handler tables from DX banks */
static inline void GetEntityInitHandler(void) { /* DX only */ }
static inline void EntityInitGenie(void) { /* DX only */ }
static inline void GetOwlStatueDialogId(void) { /* DX only */ }
static inline void GetTilesetHandlerAddress(void) {
    /* Now handled inline by _executeTilesetLoadHandler() dispatch */
}
static inline void GetBGCopyRequest(void) {
    /* Original: bank $20, address $4577.
       Reads wBGMapToLoad index, looks up 16-bit pointer from
       TilemapsPointersTable at $452B in bank $20, sets DE = pointer.
       Pointers reference tilemap draw command data in bank $08 (BGTilemaps). */
    uint8_t idx = gb_read(0xD7B4); /* wBGMapToLoad */
    /* Read pointer from ROM: TilemapsPointersTable is at $452B in current bank ($20) */
    uint16_t table_addr = 0x452B + ((uint16_t)idx * 2);
    gb.regs.e = gb_read(table_addr);
    gb.regs.d = gb_read(table_addr + 1);
}
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
static inline void func_020_6BDC(void) {
    /* Bank $20 addr $6BDC: "ClearFileMenuBG" - fills BG+OBJ palette data with $FF (white).
       Only runs in GBC mode. Sets wPaletteDataFlags to copy both.
       CRITICAL: Palette data lives in WRAM bank 2. */
    if (gb_read(0xFFFE) == 0) return; /* Not GBC */
    uint8_t saved_wram_bank = gb.wram_bank;
    gb.wram_bank = 2;
    /* Fill wBGPal1 ($DCB8, 64 bytes) and wObjPal1 ($DCF8, 64 bytes) with $FF */
    for (int i = 0; i < 64; i++) {
        gb_write(0xDCB8 + i, 0xFF);
        gb_write(0xDCF8 + i, 0xFF);
    }
    gb_write(0xDE79, 0x03); /* wPaletteDataFlags: copy both BG and OBJ */
    gb_write(0xDE7D, 0x01); /* wPaletteUnknownE */
    gb.wram_bank = saved_wram_bank;
}
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
    /* OAM DMA: copy 160 bytes from wOAMBuffer ($C000) to OAM.
       The original HRAM routine writes $C0 to $FF46.
       We do the copy directly for efficiency. */
    gb_write(0xFF46, 0xC0);
}

#endif /* FIXUPS_H */
