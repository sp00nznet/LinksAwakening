# gb-recompiled Integration

This directory contains the gb-recompiled runtime (modified) for Link's Awakening DX.

## Prerequisites
- CMake 3.16+, Ninja, SDL2, C/C++ compiler
- gbrecomp recompiler: https://github.com/arcanite24/gb-recompiled
- imgui: clone into `runtime/third_party/imgui`

## Build Steps

1. Clone imgui:
   ```
   cd runtime/third_party && git clone https://github.com/ocornut/imgui.git
   ```

2. Generate recompiled code (requires ROM file):
   ```
   gbrecomp rom.gbc -o recompiled/
   ```

3. Build:
   ```
   cmake -G Ninja -B build && ninja -C build
   ```

4. Run:
   ```
   ./build/rom
   ```

## Runtime Modifications
- `gbrt.c`: Added SRAM debug logging, RAM enable tracking
- `interpreter.c`: Added guards for PC in echo RAM/OAM areas
- `platform_sdl.cpp`: Fixed imgui API for newer imgui versions

## Generated Files (not in git - too large)
- `recompiled/rom.c` (~121MB, 4.2M lines, 17805 functions)
- `recompiled/rom_rom.c` (~6.6MB, embedded ROM data)
- `recompiled/rom.h`, `recompiled/rom_main.c`
