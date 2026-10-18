# Licensing and provenance

**reSOT's own files** (`port/windows`, `port/game`, `source/*/target.h`,
`source/*/target_hooks.c`, `tools/`, `docs/`, the build files) are under the
MIT licence in the repository root.

**`port/third_party/xboxrecomp`** is the vendored xboxrecomp 0.13.1
(https://github.com/sp00nznet/xboxrecomp), shared by both targets: MIT, with
the xemu-derived APU and NV2A register files under LGPL-2.1-or-later as listed
in its `NOTICE`. Local changes are marked `RE-SoT` in the sources and keep the
licence of the file they are in.

**`port/third_party/extract-xiso`** is extract-xiso 2.7.1
(https://github.com/XboxDev/extract-xiso), unchanged, built into each
executable for the launcher's ISO installation: copyright in
<in@fishtank.com>, under the BSD-style licence in its `LICENSE.TXT`. That
licence asks binary redistributions to reproduce its notice (`tools/package.ps1`
copies it beside the executable as `LICENSE-extract-xiso.txt`) and
advertising that mentions it to say: *This product includes software
developed by in <in@fishtank.com>.*

**`port/windows/res/AtlantisMF.ttf`**, the launcher's title and button face
(Atlantis MF, 1993, Richard William Mueller), was supplied by the user; its
licence has not been checked here. The build embeds it only when the file is
present and falls back to Palatino Linotype without it. Check its terms before
publishing it or an executable that embeds it.

**Not covered by any grant here:**

- The game: executables, archives, movies, sound. They are supplied by the
  user from their own discs and are ignored by Git.
- The C in `source/*/gen`. It is a mechanical translation of Ubisoft's game
  code and of Microsoft's XDK libraries linked into it. It is generated
  locally, ignored by Git and must not be published. An executable built from
  it is for the owner of the original game. The local executable also embeds
  its verified original Xbox image as a generated build resource, so players
  need no separate XBE at runtime. That resource is game data and is not
  covered by the repository licence or committed to the repository.
- `source/*/seed_functions.json` and the addresses in `target.h` and
  `target_hooks.c` are facts about those executables (lists of addresses),
  not copies of them.
- `research/` holds analysis output that quotes the binaries and is ignored.

Jade Toolkit and the other Prince of Persia tools that may sit next to this
repository are comparison references only; none of their code is used.
