# Licensing and provenance

**reSOT's own files** (`src/common`, `src/*/target.h`, `tools/`, `docs/`, the
build files) are under the MIT licence in the repository root.

**`third_party/xboxrecomp`** is a vendored copy of xboxrecomp 0.13.1
(https://github.com/sp00nznet/xboxrecomp): MIT, with the xemu-derived APU and
NV2A register files under LGPL-2.1-or-later as listed in its `NOTICE`. Local
changes are marked `RE-SoT` in the sources and keep the licence of the file
they are in.

**Not covered by any grant here:**

- The game: executables, archives, movies, sound. They are supplied by the
  user from their own discs and are ignored by Git.
- The C in `src/*/gen`. It is a mechanical translation of Ubisoft's game code
  and of Microsoft's XDK libraries linked into it. It is generated locally,
  ignored by Git and must not be published. An executable built from it is
  for the owner of the original game.
- `src/*/seed_functions.json` and the addresses in `target.h` are facts about
  those executables (lists of addresses), not copies of them.
- `research/` holds analysis output that quotes the binaries and is ignored.

Jade Toolkit and the other Prince of Persia tools that may sit next to this
repository are comparison references only; none of their code is used.
