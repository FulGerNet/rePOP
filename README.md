# reWW

Static recompilation of the original Xbox **Prince of Persia: Warrior Within**
for Windows x64, part of [rePOP](https://github.com/FulGerNet/rePOP), branch `reWW`.
XboxRecomp lifts the user's retail XBE to C. The Windows launcher, options,
diagnostics, compiler fixes and Xbox runtime are inherited from the local reSOT
project. **Windows x64 builds successfully; it is not yet playable.** The
loader's stack overflow is corrected; bounded 45-second tests now advance
through intro videos and load main-menu assets, with GPU presentation and
non-silent audio output. Correct visible rendering and gameplay remain
unverified. See [validation](docs/VALIDATION.md) for actual observations.

Supported XBE: title `5553003B`, XDK 5849, entry point `003D674C`, 6,086,656 bytes,
SHA-256 `8747A4104EB359DC76C410770FA2F3F64B547077A26E8EA308B2BCCFC964599C`.
Place files from your own disc in `Assets/xbox-retail/`: `default.xbe`, `prince.bf`,
`shaders.bin`, `MENU/`, `MEDIA/`, `VIDEO/`, `SOUND/`. Assets are private and ignored.

Build with Python 3.11 (capstone), CMake and Visual Studio 2026 C/C++ x64 tools:

```powershell
.\tools\recomp.ps1 -Seeds          # baseline, pointer seeds, analysis, C, Windows build
.\tools\recomp.ps1 -SkipAnalysis   # relift from existing analysis and build
.\tools\recomp.ps1 -BuildOnly      # rebuild existing generated C
```

Native GPU dependencies live in ignored `build/deps/`: glslang, spirv-tools,
spirv-headers, SDL3 3.4.18 with reSOT query extensions, and DXC. The pipeline reuses
the installed copies in sibling `reSOT/build/deps/` when available; after copying,
the checkout builds independently. No dependency downloads happen implicitly.

Run `bin/ww-xbox-retail.exe` for the launcher and ISO installer. Use
`REWW_ASSET_DIR` to select another game folder. F7 opens options; F6 opens
diagnostics. A bounded diagnostic run is available as
`bin/ww-xbox-retail.exe --smoke-seconds 20` (skips launcher).

`source/xbox-retail/gen/` holds generated C grouped by subsystem, with placement
evidence and a generated README. `source/xbox-retail/target.h` holds WW addresses;
`target_hooks.c` holds verified entry hooks. `research/` holds private analysis.
Never edit generated C manually: change the lifter, host, runtime or target hooks.

See [reused components](docs/PORTING.md), [Windows host](port/windows/README.md)
and [licenses](docs/LICENSING.md).
