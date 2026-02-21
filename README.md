# Link's Awakening - Static Recompilation

A static recompilation of *The Legend of Zelda: Link's Awakening* (Game Boy) into a native Windows application. The game logic runs as compiled C code — no emulator or ROM interpretation at runtime. Supports both the original DMG ROM (US v1.2, 512KB) and the DX ROM (GBC, 1MB/64 banks).

## Screenshots

| Intro | Title Screen | File Select | Gameplay |
|-------|-------------|-------------|----------|
| ![Intro](screenshots/intro_sea.png) | ![Title](screenshots/title_screen.png) | ![File Select](screenshots/file_select.png) | ![Gameplay](screenshots/gameplay.png) |

## Current Status

**Work in progress.** The full intro sequence, title screen, file select, and gameplay are running. Link is visible and positioned correctly on the overworld. Key milestones completed:

- Full intro animation (sea, Link portrait, title screen) plays through
- File select and file creation screens functional
- Gameplay loads and renders the overworld with GBC color palettes
- **Link sprite visible** at correct screen position (C145 screen Y coordinate fixed)
- **WorldInteractiveHandler** runs every frame during gameplay (game logic, entity animation, item handling)
- 11,251 functions transpiled from SM83 assembly to C
- 77 cross-function stubs bridging label references across functions
- 1,575 assembly fallthroughs restored, 42 self-recursive loops fixed
- 140 empty alias functions resolved, 253 jump table dispatches implemented
- GBC DX ROM banking support (64 banks, VRAM/WRAM/SRAM bank switching)
- GBC palette loading (BG/OBJ palettes from ROM) and BCPS/BCPD transfer
- GBC BG map attributes (per-tile palette, flip, VRAM bank) via CopyBGMapFromBank
- Scanline PPU with GBC palette rendering, H-flip, V-flip, and BG priority

## How It Works

The original Game Boy ROM is statically recompiled into C:

1. **ROM Data Extraction** — The ROM is sliced into 16KB banks and embedded as C arrays (32 banks for DMG, 64 for DX)
2. **Assembly Transpilation** — Using the [LADX Disassembly](https://github.com/zladx/LADX-Disassembly) as reference, each SM83 assembly instruction is translated to equivalent C code
3. **GB Runtime** — A lightweight runtime provides CPU registers, memory mapping (WRAM/HRAM/VRAM/OAM), MBC5 bank switching, and I/O dispatch
4. **Hardware Abstraction** — PPU (scanline renderer), APU (4-channel synthesis), and input are implemented on top of SDL2
5. **Native Integration** — Win32 menu bar, configurable controls, and save system

```
┌──────────────────────────────────────┐
│        Windows Application           │
│  Win32 Menu │ Config │ Save System   │
├──────────────────────────────────────┤
│     Transpiled Game Code (32 banks)  │
│     11,251 functions from assembly   │
├──────────────────────────────────────┤
│          GB Runtime Library          │
│   Registers │ Memory │ Bank Switch   │
├──────────────────────────────────────┤
│       Hardware Abstraction           │
│   PPU/SDL2 │ APU/SDL2 │ Input/SDL2  │
└──────────────────────────────────────┘
```

## Building

### Prerequisites

- [MSYS2](https://www.msys2.org/) with MinGW64 toolchain
- CMake 3.16+
- SDL2
- Python 3 (for transpiler tools)

Install dependencies in MSYS2:
```bash
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake mingw-w64-x86_64-SDL2 mingw-w64-x86_64-python
```

### Build Steps

You need a copy of one of the supported ROMs:
- **DMG**: `Legend of Zelda, The - Link's Awakening (U) (V1.2) [!].gb` (512KB)
- **DX**: `Legend of Zelda, The - Link's Awakening DX (U) (V1.0) [C][!].gbc` (1MB)

```bash
# 1. Clone and enter the repo
git clone https://github.com/sp00nznet/LinksAwakening.git
cd LinksAwakening

# 2. Place your ROM file in the project root

# 3. Clone the LADX disassembly (used by transpiler)
git clone https://github.com/zladx/LADX-Disassembly.git disasm

# 4. Extract ROM data
python tools/extract_rom.py "Legend of Zelda, The - Link's Awakening (U) (V1.2) [!].gb"

# 5. Transpile assembly to C
python tools/transpile.py

# 6. Build
cmake -S . -B build -G "MinGW Makefiles"
cmake --build build
```

The executable will be at `build/zelda_la.exe`.

### Controls

| Game Boy | Keyboard | Xbox Controller |
|----------|----------|-----------------|
| D-pad    | Arrow keys | D-pad / Left stick |
| A        | Z        | A               |
| B        | X        | B               |
| Start    | Enter    | Start           |
| Select   | Right Shift | Back         |

Controls are configurable via the Config menu.

## Project Structure

```
├── CMakeLists.txt
├── src/                    # Core engine
│   ├── main.c              # Entry point & game loop
│   ├── gb_runtime.c/h      # CPU registers, memory map, bank switching
│   ├── gb_cpu.c/h           # SM83 ALU & instruction helpers
│   ├── gb_ppu.c/h           # Scanline PPU renderer
│   ├── gb_apu.c/h           # 4-channel audio synthesis
│   ├── gb_input.c/h         # Keyboard & gamepad input
│   ├── win32_menu.c/h       # Native Win32 menu bar
│   ├── save_system.c/h      # SRAM save/load
│   └── config.c/h           # Settings persistence
├── tools/
│   ├── extract_rom.py       # ROM → C data arrays
│   └── transpile.py         # RGBDS assembly → C transpiler
├── game/                    # Generated (by tools) + manual fixes
│   ├── bank_00.c..bank_1F.c # Transpiled game logic (32 banks, 11,251 functions)
│   ├── cross_func_stubs.c   # Cross-function label stubs (77 stubs)
│   ├── fixups.h             # Manual fixups for DX stubs, palette, ROM tables
│   ├── rom_data.c/h         # Embedded ROM data
│   └── game_labels.h        # Constants & declarations
└── disasm/                  # LADX Disassembly (cloned)
```

## Technical Details

- **ROM**: DMG (512KB, 32 banks) or DX (1MB, 64 banks), MBC5 mapper
- **CPU**: SM83 instructions transpiled to C function calls and inline helpers
- **PPU**: Scanline-accurate renderer (background, window, sprites with priority)
- **APU**: 2× pulse, 1× wave, 1× noise channels at 44.1kHz
- **Display**: 160×144 scaled via SDL2 (configurable 2×–4×)
- **Frame rate**: 59.7 FPS (original Game Boy timing)

### Transpiler Fix Classes

The assembly-to-C transpilation required systematic fixes for patterns that don't translate directly:

| Fix Class | Count | Description |
|-----------|-------|-------------|
| Jump table dispatch | 253 | `jp hl` with data pointer tables → C switch statements |
| Assembly fallthrough | 1,575 | Sequential function fallthrough → explicit tail calls |
| Self-recursive loops | 42 | `jr`/`jp` backward branches → `goto` loops |
| Empty alias functions | 140 | Same-address labels → forwarding calls |
| Cross-function stubs | 77 | Local labels referenced from other functions → stub functions |
| Cross-stub recursion | 2 | Mutual recursion between stub and parent → `goto` in parent |
| Duplicate-body aliases | 6 | Redundant function copies → forwarding calls |

### Known Limitations

- BG tilemap only half populated (upper 8 of 16 tile rows render; lower half is blank)
- VRAM bank 1 attributes empty during gameplay (GBC per-tile attributes not applied)
- InterruptLCDStatus not triggered (PPU doesn't fire STAT interrupts for mid-frame effects)
- Room scrolling/transitions between rooms not yet working (DX bank $20 stubs)
- Entity rendering partially working (Link visible, other sprites limited)
- Dialog, inventory, and menu systems untested
- Some DX-only function stubs (bank $20+) are no-ops and need implementation

## Credits

- Game: Nintendo / Grezzo
- Disassembly: [LADX-Disassembly](https://github.com/zladx/LADX-Disassembly) contributors
- This project is for educational and preservation purposes

## License

This project does not include any copyrighted game data. You must supply your own legally obtained ROM.
