# Changelog

All notable changes to this project are documented here. The format follows
[Keep a Changelog](https://keepachangelog.com/en/1.1.0/), and versions follow
[SemVer](https://semver.org/).

## [Unreleased]

### Added
- `Setup.cmd` quick start: checks for MSYS2 and the compiler packages, asks
  before installing them, finds or asks for your ROM, recompiles it, builds the
  game and leaves a shortcut in the repo folder. Reruns skip finished steps.
- `--headless` (no window, no audio device) and `--record out.mp4` (pipes
  frames to ffmpeg).
- `rom_main.c` is now the entry point for every target, including the
  console and browser ports in linksawakening-portable: Emscripten drives the
  frame loop from the browser, and `--headless`/`--record` are desktop-only.
- `CHANGELOG.md`, `ROADMAP.md`, `CONTRIBUTING.md`, `docs/architecture.md`.
- CI on push: builds the recompiler and the runtime with multiplayer off
  (no ROM in CI, so not the game itself).

### Changed
- Multiplayer is no longer built into this repo. The game builds single-player
  with no ENet; the co-op overlay lives in
  [sp00nznet/la-mp](https://github.com/sp00nznet/la-mp).
- The build uses the runtime's own CMake (`gbrecomp/runtime/CMakeLists.txt`)
  instead of listing its sources by hand.
- Recompiler output now goes to a gitignored `gen/` folder instead of the repo
  root, and the executable is `linksawakening.exe` (was `rom.exe`).
- SDL2.dll is copied next to the exe on build; libgcc/libstdc++ are linked
  statically.
- gbrecomp submodule bumped to sp00nznet/gb-recompiled `main` (`29251d0`),
  which adds the Dreamcast/GameCube/PS2/PSP/Vita backends (gb-recompiled#1).
- `LICENSE` is plain MIT again so GitHub detects it; the scope note moved to
  the README.

### Removed
- `rom.h`: it is recompiler output and is now generated into `gen/`.
- `.gitattributes` LFS rule for `rom.c` (the file is never committed).
- Unknown command-line arguments are now an error instead of being ignored.

## [0.0.1]

First tagged state: the recompiled game boots and plays through dungeons on
Windows with the multiplayer overlay built in.
