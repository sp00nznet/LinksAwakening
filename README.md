# Link's Awakening - Static Recompilation

A static recompilation of *The Legend of Zelda: Link's Awakening* (Game Boy, US v1.2) into a native Windows application. The game logic runs as compiled C code — no emulator or ROM interpretation at runtime.

## How It Works

The original Game Boy ROM is statically recompiled into C:

1. **ROM Data Extraction** — The 512KB ROM is sliced into 32 × 16KB banks and embedded as C arrays
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

You need a copy of the original ROM: `Legend of Zelda, The - Link's Awakening (U) (V1.2) [!].gb` (512KB, CRC32: `3211B3A4`).

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
├── game/                    # Generated (by tools)
│   ├── bank_00.c..bank_1F.c # Transpiled game logic
│   ├── cross_func_stubs.c   # Cross-function label stubs
│   ├── fixups.h             # Compilation fixups
│   ├── rom_data.c/h         # Embedded ROM data
│   └── game_labels.h        # Constants & declarations
└── disasm/                  # LADX Disassembly (cloned)
```

## Technical Details

- **ROM**: 512KB, 32 banks, MBC5 mapper
- **CPU**: SM83 instructions transpiled to C function calls and inline helpers
- **PPU**: Scanline-accurate renderer (background, window, sprites with priority)
- **APU**: 2× pulse, 1× wave, 1× noise channels at 44.1kHz
- **Display**: 160×144 scaled via SDL2 (configurable 2×–4×)
- **Frame rate**: 59.7 FPS (original Game Boy timing)

## Credits

- Game: Nintendo / Grezzo
- Disassembly: [LADX-Disassembly](https://github.com/zladx/LADX-Disassembly) contributors
- This project is for educational and preservation purposes

## License

This project does not include any copyrighted game data. You must supply your own legally obtained ROM.
