# Link's Awakening DX — Static Recompilation

A static recompilation of *The Legend of Zelda: Link's Awakening DX* (Game Boy Color,
1998) into a native Windows application. The entire ROM is decompiled to ~4.2 million
lines of native C code running at full speed on your CPU — **no emulator or ROM
interpretation at runtime**, only a small fallback interpreter for the handful of
unresolved indirect jumps the recompiler can't statically resolve.

## Status

**Completely playable.** Tested from boot through dungeons. Full GBC color (palette
RAM, VRAM banking, HDMA), CGB double-speed, 4-channel audio, save/load to SRAM, save
states, gamepad + keyboard with rebinding, ImGui debug overlay + asset viewer.

## How it works

This project is the **game-specific glue**. The heavy lifting lives in two other repos:

- **[`sp00nznet/gb-recompiled`](https://github.com/sp00nznet/gb-recompiled)** (fork of
  [`arcanite24/gb-recompiled`](https://github.com/arcanite24/gb-recompiled)) — the
  runtime engine. Provides the SM83 CPU model, scanline PPU with full CGB support,
  4-channel APU, interpreter fallback, ImGui menu, asset viewer, hwtrace debugger,
  and the SDL2 platform layer. Lives at `gbrecomp/` as a git submodule.
- **The recompiler itself** lives inside that same submodule at `gbrecomp/recompiler/`.
  Point it at your ROM, get `rom.c` and `rom_rom.c` out.
- **This repo** holds `rom_main.c` (40-line entrypoint), `rom.h` (function declarations),
  `CMakeLists.txt`, and debug tools.

```
your ROM (rom.gbc)
        |
        v
gbrecomp/recompiler/        →  rom.c          (~115 MB of C, gitignored)
                            →  rom_rom.c      (~6 MB ROM bytes as C array, gitignored)
                            →  rom.h          (committed)
        |
        v
CMakeLists.txt links rom.c + rom_main.c against libgbrt (built from gbrecomp/runtime/)
        |
        v
rom.exe — runs at native speed
```

## Building

### Prerequisites

- Windows 10/11
- MSYS2 with MinGW64 (`pacman -S mingw-w64-x86_64-toolchain mingw-w64-x86_64-cmake mingw-w64-x86_64-ninja mingw-w64-x86_64-SDL2`)
- A legally obtained Link's Awakening DX ROM (`*.gbc`)

### One-time setup

```bash
git clone --recurse-submodules https://github.com/sp00nznet/LinksAwakening.git
cd LinksAwakening
```

If you forgot `--recurse-submodules`:

```bash
git submodule update --init --recursive
```

### Generate rom.c + rom_rom.c from your ROM

See the [gb-recompiled README](https://github.com/sp00nznet/gb-recompiled) for the
recompiler invocation. It produces `rom.c`, `rom.h`, and `rom_rom.c`; drop them at
the root of this repo. (The `rom.h` shipped here is a baseline; the recompiler may
overwrite it with a more complete version.)

### Build and run

```bash
PATH="/c/msys64/mingw64/bin:$PATH"
cmake -S . -B build -G Ninja
cmake --build build
./build/rom.exe
```

## CLI flags

```
rom.exe [--trace] [--trace-entries FILE] [--limit N] [--input SCRIPT]
        [--dump-frames DIR] [--screenshot-prefix PFX] [--hw-trace FILE]
        [--frames N]
```

| Flag                    | Purpose                                                       |
| ----------------------- | ------------------------------------------------------------- |
| `--trace`               | Enable runtime instruction trace                              |
| `--trace-entries FILE`  | Write per-function trace to FILE                              |
| `--limit N`             | Halt after N instructions (for crash bisection)               |
| `--input SCRIPT`        | Replay a deterministic input script                           |
| `--dump-frames DIR`     | Write every frame as a PNG into DIR                           |
| `--screenshot-prefix P` | Prefix for any screenshots captured at runtime                |
| `--hw-trace FILE`       | Write per-scanline PPU state to FILE (compare with SameBoy)   |
| `--frames N`            | Exit after rendering N frames                                 |

## Controls

| Game Boy | Keyboard            | Gamepad           |
| -------- | ------------------- | ----------------- |
| D-pad    | Arrows / WASD       | D-pad / left stick|
| A        | Z / J               | A / Cross         |
| B        | X / K               | B / Circle        |
| Start    | Enter               | Start             |
| Select   | Right Shift         | Back / Select     |

Save combo (Game Boy A+B+Start+Select) → on gamepad: **A+B+X+Y**.

All bindings are rebindable from the **Controller** menu and persist to
`bindings.cfg` next to the executable.

## Multiplayer

The 4-player co-op overlay is **built in by default** — `platform_sdl.cpp` and
`menu_gui.cpp` in the runtime call the multiplayer hooks (`mp_session_init`,
`mp_menu_init`, player indicator compositing, etc.) unconditionally, so the
overlay is effectively part of the runtime. The actual `mp_*.cpp` sources live
in `gbrecomp/runtime/src/multiplayer/` and ship with the gb-recompiled submodule
(synced from [sp00nznet/la-mp](https://github.com/sp00nznet/la-mp), which is the
upstream source of truth for the overlay code if you want to fork or update it).

To open the multiplayer menu, use the in-game ImGui menu bar:
**Multiplayer → Host Game / Join Game / Settings**. ENet defaults to UDP 21384.

Building with `-DLA_MULTIPLAYER=OFF` is not currently supported — it requires
upstream patches to gate the unconditional multiplayer calls in the runtime.

## Repository layout

```
.
├── README.md
├── CMakeLists.txt          # LA_MULTIPLAYER on by default (the runtime hard-wires it)
├── rom_main.c              # 100-line entrypoint
├── rom.h                   # Generated function declarations (regenerate from your ROM)
├── rom.c                   # gitignored — recompiler output, ~115 MB
├── rom_rom.c               # gitignored — ROM bytes as C array, ~6 MB
├── gbrecomp/               # submodule → sp00nznet/gb-recompiled
│   ├── runtime/            #   the actual runtime engine
│   ├── recompiler/         #   the tool that produces rom.c from a ROM
│   └── tools/
└── tools/                  # Debug tools (SameBoy reference tracer + comparator)
```

## Hardware features implemented

| Feature                      | Notes                                                |
| ---------------------------- | ---------------------------------------------------- |
| SM83 CPU                     | All instructions; interpreter fallback for JP HL etc.|
| MBC5 mapper                  | Full ROM/RAM banking with bounds clamping            |
| Scanline PPU                 | BG + window + sprites, 8×8 / 8×16, DMG and CGB       |
| CGB BG palette RAM           | FF68 BCPS, FF69 BCPD                                 |
| CGB OBJ palette RAM          | FF6A OCPS, FF6B OCPD                                 |
| VRAM bank switching          | FF4F VBK                                             |
| WRAM bank switching          | FF70 SVBK                                            |
| General-purpose DMA          | FF51-FF55                                            |
| HBlank DMA                   | FF55 bit 7                                           |
| BG map tile attributes       | VRAM bank 1                                          |
| OBJ VRAM bank + palette      | OAM bits 0-3                                         |
| Double-speed mode            | FF4D KEY1                                            |
| APU                          | Pulse ×2, wave, noise — 44.1 kHz output              |
| OAM DMA                      | FF46                                                 |
| Joypad                       | FF00                                                 |
| Save SRAM                    | Persists to `<rom>.sav` next to the exe              |
| Save states                  | Full snapshot to `savestate.bin`                     |

## Credits

- Game: Nintendo / Grezzo (Link's Awakening DX, 1998)
- Recompiler: [arcanite24/gb-recompiled](https://github.com/arcanite24/gb-recompiled)
  (with fixes upstreamed and additional runtime features in
  [sp00nznet/gb-recompiled](https://github.com/sp00nznet/gb-recompiled))
- Disassembly: [LADX-Disassembly](https://github.com/zladx/LADX-Disassembly) contributors
- Reference emulator: [SameBoy](https://github.com/LIJI32/SameBoy) by LIJI32
- Multiplayer overlay: [sp00nznet/la-mp](https://github.com/sp00nznet/la-mp)

## License

The code in this repository (`rom_main.c`, `CMakeLists.txt`, build glue) is MIT.
The recompiled `rom.c` / `rom_rom.c` are derived from the original ROM and are
**not distributed** — generate them locally from your own legally obtained copy.
This project is for educational and preservation purposes.
