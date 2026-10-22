# Licensing and provenance

**reSOT's own files** (`port/windows`, `port/android`, `port/game`, `port/render`, `source/*/target.h`,
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

**SDL3 3.4.18** (https://github.com/libsdl-org/SDL/releases/tag/release-3.4.18)
provides native D3D12 and Vulkan command encoders under the zlib licence.
`tools/setup-native-gpu.ps1` checks the official SDK and source archive
SHA-256 values, applies the additions in `port/third_party/sdl-gpu-query/`
with `tools/patch-sdl-gpu-query.py`, then builds an **altered** SDL3.dll.
The additions are reSOT code under the repository's MIT licence; the original
SDL licence is preserved. Downloaded SDKs/sources and built binaries remain
under ignored `build/deps/` and `bin/`; no SDL binaries are committed.
`LICENSE-SDL3.txt` accompanies portable builds and `SDL3-RESOT.txt` identifies
the binary as modified, including its source archive hash and patch location.
The native renderer uses SDL GPU directly, without D3D11 translation.

**Android (`port/android`).** The APK carries the same altered SDL3 3.4.18,
built from the checked source archive by `tools/setup-android.ps1` (the same
`port/third_party/sdl-gpu-query/` additions, and the Vulkan query function
added to SDL's export list by `tools/patch-sdl-gpu-query.py`), and the
shared runtime and lifted code of both targets. extract-xiso itself is not
built for Android: `XisoExtractor.java` reads the disc in Java following
extract-xiso's format handling, and carries its copyright notice, licence and
acknowledgement (*This product includes software developed by in
<in@fishtank.com>.*). The Gradle build copies `LICENSE-SDL3.txt`,
`LICENSE-extract-xiso.txt`, reSOT's and xboxrecomp's licences and xboxrecomp's
`NOTICE` into the APK's `assets/licenses/`. The launcher face
(`AtlantisMF.ttf`, below) is packaged when present, as on Windows. The APK is
signed with the building computer's debug key; it contains the C lifted from
the user's own XBEs and is, like the Windows executables, a local build for
the owner of the discs.

**libadrenotools / liblinkernsbypass (Android only).**
The Android build fetches [libadrenotools](https://github.com/bylaws/libadrenotools)
at commit `8fae8ce254dfc1344527e05301e43f37dea2df80` and its pinned
liblinkernsbypass submodule (`aa3975893d83ef1bc84c321ec60c65fbf1287887`).
Both carry the BSD 2-Clause licence, copyright Billy Laws. Their notices are
packaged as `assets/licenses/LICENSE-libadrenotools.txt` and
`LICENSE-liblinkernsbypass.txt`. Upstream source is fetched unchanged under
ignored `build/deps`; the app links the loader and packages its shared hooks.
The altered SDL Android loader entry-point bridge is applied by
`tools/patch-sdl-android-driver.py` in addition to the query patch described
above. No third-party custom GPU driver package is distributed in the APK;
users import those separately, under the package's own terms.

**Native shader compiler and optimizer (Windows/Android Vulkan).**
`port/render` is reSOT code under MIT. It links unchanged upstream
[glslang 16.0.0](https://github.com/KhronosGroup/glslang/tree/16.0.0)
(commit `a57276bf558f5cf94d3a9854ebdf5a2236849a5a`),
[SPIRV-Tools](https://github.com/KhronosGroup/SPIRV-Tools)
(`7f2d9ee926f98fc77a3ed1e1e0f113b8c9c49458`) and
[SPIRV-Headers](https://github.com/KhronosGroup/SPIRV-Headers)
(`01e0577914a75a2569c846778c2f93aa8e6feddd`). The latter revisions are
those in glslang's `known_good.json`. glslang's mixed upstream notices are
preserved in its complete `LICENSE.txt`; SPIRV-Tools uses Apache-2.0 and
SPIRV-Headers preserves its own full multi-license `LICENSE` file. Setup
fetches source into ignored `build/deps`; static libraries are built locally.
Windows packaging includes `LICENSE-glslang.txt`, `LICENSE-SPIRV-Tools.txt`
and `LICENSE-SPIRV-Headers.txt`; Android includes them in `assets/licenses`.
The Black Android and Halo CE repositories were read as comparison references;
none of their code was copied. Generated shader modules remain local cache
files, not committed game assets.

**DirectXShaderCompiler v1.9.2609**
(https://github.com/microsoft/DirectXShaderCompiler/releases/tag/v1.9.2609)
is a build dependency only. Its official checked SDK is installed under
ignored `build/deps/dxc/`, with its upstream licences. It compiles reSOT's
host shaders to DXIL and SPIR-V; no compiler DLLs ship with the game.
DXVK and D3D11On12 are no longer used by the renderer or included by packaging.

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
  locally and published with the project as required by AGENTS.md; this does
  not place it under reSOT's MIT licence. An executable built from it is for
  the owner of the original game. The local executable also embeds
  its verified original Xbox image as a generated build resource, so players
  need no separate XBE at runtime. That resource is game data and is not
  covered by the repository licence or committed to the repository.
- `source/*/seed_functions.json` and the addresses in `target.h` and
  `target_hooks.c` are facts about those executables (lists of addresses),
  not copies of them.
- `research/` holds analysis output that quotes the binaries and is ignored.

Jade Toolkit and the other Prince of Persia tools that may sit next to this
repository are comparison references only; none of their code is used.
