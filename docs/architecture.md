# Architecture

Three parts, two repos, one build.

| Part | Lives in | Owns |
|---|---|---|
| Recompiler (`gbrecomp`) | `gbrecomp/recompiler/` (submodule, sp00nznet/gb-recompiled) | Reads the ROM, finds code across all banks, emits C |
| Runtime (`gbrt`) | `gbrecomp/runtime/` (same submodule) | SM83 CPU state and memory map, PPU, APU, interpreter fallback, SDL2 window/input/audio, ImGui menu |
| Game glue | this repo | `rom_main.c` (entry point, CLI flags, headless/record), `CMakeLists.txt`, `Setup.cmd` |

## Data flow

```
rom.gbc (yours, gitignored)
   |  gbrecomp/build/bin/gbrecomp rom.gbc -o gen
   v
gen/rom.c      ~109 MB  every function in the ROM as C
gen/rom_rom.c  ~6.6 MB  the ROM bytes as a C array (data, and the interpreter's fallback)
gen/rom.h               rom_init() / rom_run()
   |  cmake --build build
   v
build/linksawakening.exe + SDL2.dll
```

## Why gen/ is never committed

`gen/` is a translation of Nintendo's code. The MIT licence can't cover it,
so it is generated on each user's machine from their own ROM and gitignored
(the house rule: the tool ships, the output never does). That includes
`rom.h`, which is why this repo no longer carries one.

## Multiplayer

The runtime has an optional co-op overlay (`gbrecomp/runtime/src/multiplayer/`,
from [sp00nznet/la-mp](https://github.com/sp00nznet/la-mp)). Every call into it
is behind `#ifdef LA_HAS_MULTIPLAYER`. This repo forces that option off in
`CMakeLists.txt`, so the game builds with no ENet and no networking code.

## Headless mode

`--headless` sets `SDL_VIDEODRIVER=dummy` and `SDL_AUDIODRIVER=dummy` before
the runtime opens its window, so nothing appears on screen (safe over RDP) and
the frame loop skips vsync. It still runs at about 60 fps (1800 frames
in 30 s measured); the runtime paces frames somewhere besides vsync. `--record out.mp4` opens an
`ffmpeg` pipe and writes each 160x144 framebuffer as raw BGRA (the runtime's
ARGB8888 in little-endian memory), scaled 3x with nearest-neighbour. Both live
in `rom_main.c`, not the runtime, because they need nothing from it beyond the
framebuffer.
