# Roadmap

## Next

1. **Bring sp00nznet/gb-recompiled up to date with arcanite24/gb-recompiled.**
   Our fork is 45 commits ahead and 73 behind upstream. A straight merge
   conflicts in 16 files (~6,500 lines), mostly files upstream rewrote
   (`gbrt.c`, `ppu.c`, `platform_sdl.cpp`, `c_emitter.cpp`). Plan: branch from
   upstream `main`, keep upstream's runtime and recompiler, and re-apply our
   features as small patches (big-endian register pairs, serial callback,
   console backends, multiplayer gate, menu/asset viewer on upstream's
   vendored imgui). Lands as toolkit PRs. Every port's `gen/` must be
   regenerated afterwards, and `gb_platform_vsync()` gains a cycles argument.
2. **linksawakening-portable builds against this repo and the fork**, instead
   of a vendored copy of the runtime.
3. **Conformance harness** (section 9 of the house rules): a fixed set of
   input scripts replayed headless, with per-frame hardware-state checksums
   (`--hw-trace`) compared against SameBoy references from `tools/sb_tracer.c`.
   Reports a pass count per frame window and fails on regression. The ROM
   stays outside the repo; the harness skips with a message when it's absent.
4. **netlab recipe** (`projects/linksawakening.env`) so builds run on the farm.
5. **Release v0.1.0**: GitHub Release with the build tools only (no game code).
6. **recomp launcher integration**, following the Red Alert 2 port's launcher.

## Deferred

- MSVC / clang-cl build. MinGW is the supported toolchain today.
- Linux and macOS builds of this repo (the portable repo covers other targets).

## Out of scope

- Multiplayer. It lives in [sp00nznet/la-mp](https://github.com/sp00nznet/la-mp).
- Distributing the ROM, recompiled C or any build that contains game code.
