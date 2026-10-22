# reWW development

This checkout is rePOP branch reWW: original Xbox Warrior Within retail to
Windows x64. Read README.md and docs/PORTING.md. reSOT is a reference, not a target.

- Keep Assets, research, build outputs and logs ignored. Never commit XBE,
  executables, disc assets or disassembly. Keep generated C under source/xbox-retail/gen.
- Never hand-edit gen. Modify XboxRecomp or source/xbox-retail/target_hooks.c,
  then regenerate with tools/recomp.ps1 -SkipAnalysis.
- Keep every WW address tied to the supported XBE hash and static/runtime
  evidence. Do not use SoT addresses, seeds or game state layouts without checks.
- Mark new runtime changes RE-WW, retain inherited RE-SoT attribution.
- Preserve hash checks both in the pipeline and CMake; build-only must check too.
- Run tools/check-hlsl.py for shader edits and relevant regression tests for
  lifter changes. Distinguish compiling, booting, rendering and verified gameplay.
- Document actual commands and observations in docs/VALIDATION.md.
