# reWW

Static recompilation of the original Xbox **Prince of Persia: Warrior Within**
for Windows x64, part of [rePOP](https://github.com/FulGerNet/rePOP), branch `reWW`.
XboxRecomp lifts the user's retail XBE to C. The Windows launcher, options,
diagnostics, compiler fixes and Xbox runtime are inherited from the local reSOT
project. **Windows x64 builds; the first 3D ship scene and early combat tutorial
now render. Full gameplay validation remains open.** The
loader's stack overflow is corrected; bounded 45-second tests now advance
through intro videos and load main-menu assets, with GPU presentation and
non-silent audio output. GPU readback now verifies the title/menu screens and
scripted input reaches profile selection and New Game difficulty selection.
The RGB32 cinematic path now detects CPU reuse of old GPU surface memory;
inspected New Game cinematic frames render correctly instead of green blocks.
Active-target sampling now snapshots the preceding GPU image, preserving the
3D scene through WW's color-adjustment pass. APU physical-address mapping also
corrects the observed intro/cinematic noise; full listening quality is unverified.
See [validation](docs/VALIDATION.md) for actual observations and limitations.

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
the checkout builds independently. The runtime SDL DLL must be the reSOT
query-enabled build, rather than the stock SDK DLL. The pipeline checks its
exports and retains a local copy; `tools/setup-native-gpu.ps1` can explicitly
build it from pinned upstream sources. No dependency downloads happen implicitly.

Run `bin/ww-xbox-retail.exe` for the launcher and ISO installer. Use
`REWW_ASSET_DIR` to select another game folder. F7 opens options; F6 opens
diagnostics. A bounded diagnostic run is available as
`bin/ww-xbox-retail.exe --smoke-seconds 20` (skips launcher).
`python tools/smoke-renderer.py --renderer d3d12 --seconds 45` saves a GPU
framebuffer, logs and a JSON activity report under ignored `logs/`. It rejects
backend fallback; a nonblack frame is not proof of gameplay correctness.
Renderer smoke runs use private disk images and saves inside their capture
directory. `REWW_SAVE_DIR` selects a writable save root for direct runs;
without it the inherited runtime uses its normal save location.
Add `--audio` to the renderer smoke command to capture the APU output WAV
and bounded voice-format diagnostics alongside the GPU framebuffer.

`source/xbox-retail/gen/` holds generated C grouped by subsystem, with placement
evidence and a generated README. `source/xbox-retail/target.h` holds WW addresses;
`target_hooks.c` holds verified entry hooks. `research/` holds private analysis.
Never edit generated C manually: change the lifter, host, runtime or target hooks.

See [reused components](docs/PORTING.md), [Windows host](port/windows/README.md)
and [licenses](docs/LICENSING.md).
