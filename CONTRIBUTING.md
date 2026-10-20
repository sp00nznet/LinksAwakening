# Contributing

Issues and pull requests are welcome. This repo is the game-specific glue;
most fixes to the CPU, PPU, audio or recompiler belong in
[sp00nznet/gb-recompiled](https://github.com/sp00nznet/gb-recompiled), so open
them there and link the LA issue that found the problem.

## Before you open a PR

- Build with `Setup.cmd` or the Step by step commands in the README.
- Run a headless smoke test: `build\linksawakening.exe --headless --frames 600`
  should exit 0.
- Say which ROM revision you tested (the README lists the tested one).

## Never commit

- The ROM, `gen/` (recompiled C), save files, save states, or anything else
  derived from the game. CI artifacts and test fixtures count too.

## Where your code comes from

Contributions must be your own work or under an MIT-compatible licence. Don't
port code from GPL or non-commercial emulators (mGBA is MPL-2.0; Gambatte,
bsnes/higan, Mesen and libretro cores are GPL). Running them as a black box to
compare output is fine; reading their source and then writing "our own" version
is not. SameBoy is MIT and fine to use with its notice kept. If something you
contribute came from another project, say which one in the PR.

AI-assisted contributions are welcome, provided a human understood and checked
the change.
