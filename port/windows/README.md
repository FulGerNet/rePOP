# Windows host

The launcher, installer, graphics/input options, diagnostics, crash handler and
thread profiler are reused from the local reSOT project. The launcher supports
only the checked Warrior Within retail XBE and keeps preferences separately in
`reww-options.ini`. Its game-folder check uses prince.bf, VIDEO, SOUND, MENU and
shaders.bin; when default.xbe is present its SHA-256 must match target.h.

`REWW_ASSET_DIR` selects the disc-data folder; otherwise the executable uses
`../Assets/xbox-retail`. `REWW_SKIP_LAUNCHER=1` or `--smoke-seconds N` bypasses
the launcher. The smoke timer terminates the whole process after N seconds and
prints `[SMOKE]`; successful expiration establishes only that no earlier fatal
exit occurred. It does not establish successful boot or gameplay.

The F5 world-name provider deliberately reports `Unknown (WW bring-up)` until
Warrior Within's scene structures have been identified. Host options are
available through F7 and diagnostics through F6. No SoT projection, native menu
or movie-skip hooks are applied to WW.

The optional Atlantis MF face was copied from reSOT's user-supplied
`port/windows/res/AtlantisMF.ttf` (1993, Richard William Mueller), with the same
unverified font licensing described in reSOT/docs/LICENSING.md. The build can
omit RESOT_HAVE_LAUNCHER_FONT and use its Windows font fallback. No SoT logo or
icon is embedded. Source host code retains reSOT's MIT provenance. The ISO
installer uses the unchanged vendored extract-xiso and its upstream licence.
