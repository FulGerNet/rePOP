# Validation log

What was actually run and seen, newest first. Every entry names the command,
the observation and what was **not** checked. Nothing here has been compared
against a console or an emulator yet.

Machine for all entries: Windows 11, i7-9700K, Direct3D feature level 11_0,
MSVC 19.51 (Visual Studio 2026), x64 Release.

## 2026-10-14 (evening): xbox-demo, input without USB, full screen by default

Build: `recomp.ps1 -Target xbox-demo -SkipAnalysis` ("Excluding 2 functions
... 7 wrapped as sub_X_gen"; 11,213 of 11,215 lifted, 0 failed).

Observed:

- `run.ps1 -Seconds 50 -Set @{RECOMP_PAD_SCRIPT='22000:start:800,28000:a:800,34000:a:800'}`,
  three starts: the log has `[BOOT] input: XAPI pad on port 0 ... (no USB)`,
  the three script steps at 22, 28 and 34 s, and `video\loading.int` opened
  (the game was entered) in 3 of 3. With the USB pad, 2 of 5 starts had
  enumerated earlier the same day.
- Real input events (`SendInput` to the game window): Enter at 22 s and two
  left mouse clicks at 28 and 34 s entered the game (`loading.int`).
- `run.ps1` with no switch: the game window is 0,0-1920,1080 with style
  `0x94000000` (popup, no frame) on a 1920x1080 monitor.
- `tools\shortcut.ps1` recreated the desktop shortcut; its arguments are
  `-File ...\run.ps1 -Target xbox-demo`.

Not checked: an XInput pad or another joystick (none connected here); the
other keys and the right mouse button in play; rumble; `-Windowed` and
Alt+Enter/F11 by a person; gameplay by a person.

## 2026-10-14 (afternoon): xbox-demo, glow alignment, CPU use, wide culling

Builds: `recomp.ps1 -Target xbox-demo -SkipAnalysis` (11,213 of 11,215
functions lifted, the other two are the hand-written KickOff in
`target_hooks.c`; 0 failed), then `-BuildOnly`. `python tools/check-hlsl.py`
passed before each build.

Glow ("layers out of register", reported by the user):

- `run.ps1 -Seconds 27 -Pad -Set @{RECOMP_FRAME_TRACE='logstflag';
  RECOMP_HW_GLOW_DUMP='...\glow'}` with the flag file created at 24 s, on the
  "Press Start" screen. With every surface at scale 2, the 160x120 glow
  layer had doubled edges and comb-like stripes, and the composite's
  difference from the scene correlated best at about (+25, +19) host pixels.
  The blur's tap offsets are symmetric (-7..+7 texels, equal weights in the
  80x60 pass), so the cause is the resolution, not the taps.
- After rendering the smaller targets at scale 1: the glow layer is a smooth
  blur, and its offset from the scene measures 0.1 guest pixel (160x120
  layer) and 0.1 (composite).

CPU (Task Manager-style process times, 10 s windows):

- Before: 140% of one core on the "Press Start" screen; the profiler put
  90% of the title thread in `sub_0029D0C0` (KickOff spin) and the NV2A
  thread looped on `Sleep(0)`.
- After: about 57% of one core on the same screen (title thread 23%,
  executor 12%, the rest below 9% each), 100-117% during the 185 s run below
  (intro scene).

Run: `run.ps1 -Seconds 185 -SnapshotEvery 15 -Pad` with the menu presses of
the entry below. 35 renderer windows of 5 s: one at start-up (0.1 fps), one
at 55 fps, the other 33 at 59.8-60.2 fps. The game reached the playable
balcony scene after the intro and stayed there (the script does not walk
the Prince in). Two `[ICALL] Failed to resolve VA 0x002AEE97` lines, which
also appear in a trace taken before these changes.

Wide picture: `run.ps1 -Fullscreen` on a 1920x1080 monitor, screen captured
at 24 s: the picture fills the screen. The culling hook logs
`culling half-angle 0.7854 -> 0.9273 rad`. Black areas remain at the lower
left of the menu garden in 16:9; the user confirmed the set has no model
there.

Pad enumeration, 35 s starts: 2 of 5 enumerated with the new NV2A thread,
1 of 5 with `RECOMP_NV2A_ACK_SPIN=1` (the old loop), so this is not caused by
the change, but it is worse than the "one start in four" noted below.

Not checked: Alt+Enter/F11 by a person; the level sections past the
balcony; gameplay by a person; sound; the console.

## 2026-10-14: xbox-demo, 16:9 default build, icon, scripted tour

Build: `recomp.ps1 -BuildOnly` after the repository moved to `source/` and
`port/`, with `RESOT_ASPECT=16:9` (now the default) and the icon resource.
`python tools/check-hlsl.py` passed first.

Command (no `-Aspect`, to see the built-in default take effect):

```powershell
.\tools\run.ps1 -Seconds 185 -SnapshotEvery 5 -Pad -Set @{RECOMP_PAD_SCRIPT='@pad_tour.txt'}
```

`pad_tour.txt`: the menu presses of the entry below up to 95 s, then from
104 s left-stick runs in four directions, jumps (`a`), attacks (`x`) and one
`y`, until 175 s.

Observed:

- The log has `aspect 1.778` from the renderer and `widescreen: projection
  widened 1.3333x` from the target's hook, without `RECOMP_HW_ASPECT` set by
  the script.
- The pad enumerated (`periodic slot 0`) at the first start.
- 37 window dumps: logos, title, main menu, intro movie and cut-scene, the
  controls screen, the level's opening, two pause menus, the soldiers' scene,
  explosions on the ramparts, the health arc, the "climb up onto ledge"
  prompt, the white transition into the next section and the second
  section's controls screen. Nine of them are the README's picture
  (`docs/media/gameplay-xbox-demo.jpg`).
- 30 renderer windows of five seconds: 24 at 58-60 fps, 1 at 50-58, 5 below
  50 (start-up, and loads: 0.1, 2.2, 3.5, 18.4, 47.8 fps).
- No crash, exception or `SND_ASSERT` line in the log in 185 s.
- `bin/sot-xbox-demo.exe` shows the reSOT icon in Explorer
  (`ExtractAssociatedIcon`), with the version resource's description; the
  desktop shortcut from `tools/shortcut.ps1` points at `run.ps1 -Pad`.

Not checked: what the scripted presses actually did in the level (only the
dumps were looked at); the window's title-bar icon by eye; the shortcut by
double-clicking it; sound; anything past 185 s; the console.

## 2026-10-14: xbox-demo, movies, sound, frame rate, wide picture

Builds: relift after the lifter (`movsx` from `bp`/`sp`), detector and seed
changes (`recomp.ps1 -Target xbox-demo -Seeds`, then `-SkipAnalysis` for the
entry hooks); runtime changes with `-BuildOnly`. `python tools/check-hlsl.py`
passed before each build.

Commands (each repeated when the emulated pad did not enumerate):

```powershell
.\tools\run.ps1 -Seconds 22 -Set @{RECOMP_OVL_DUMP='logs\ovl\o'}
.\tools\run.ps1 -Seconds 240 -SnapshotEvery 20 -Pad `
    -Set @{RECOMP_PAD_SCRIPT='30000:start:800,36000:a:800,62000:start:800,70000:start:800,78000:start:800';
           RECOMP_APU_WAV='logs\out.wav'}
.\tools\run.ps1 -Seconds 120 -SnapshotEvery 5 -Pad -Aspect 16:9 `
    -Set @{RECOMP_PAD_SCRIPT='30000:start:800,36000:a:800,62000:start:800,70000:start:800,78000:start:800,95000:start:800'}
.\tools\run.ps1 -Seconds 125 -Pad -NoVsync -Set @{RESOT_PROFILE_MS='1'; RECOMP_PAD_SCRIPT='...same...'}
```

Observed:

- Movies: before the fix, raw YUY2 dumps of the Ubi Soft logo showed 8x8
  blocks wrapped past 255 (a row-6 IDCT coefficient zero-extended). After it,
  400 dumped frames had no large vertical chroma jumps and the sampled frames
  were clean.
- The level loads past "LOADING..." in every run since `CreateSuspended` is
  honoured (before: hung in `sub_002AEA90` in 2 of 2 runs with the faster
  renderer).
- Frame rate, 240 s in 4:3 with sound: of 40 five-second windows, 34 at
  58-60 fps, 3 at 50-58, 3 below 50 (the first menu window, and two windows
  at 17-18 fps during loads between sections). Without vsync the level ran at
  105-200 fps (5-9.5 ms a frame). The profiler put the pushbuffer thread at
  2-5 ms a frame after the vertex programs moved to the GPU and stderr was
  buffered (it had spent half its time in `fprintf`).
- Sound: DirectSound initialises, sound banks and `STREAM.SS2` load, no
  `SND_ASSERT` and no crash in 240 s. Recorded output: the intro movie,
  the menu and the interstitial movies have tonal spectra (spectral flatness
  0.05-0.25); before the physical-address fix everything after the intro was
  white noise (flatness 0.75, centroid 12 kHz). In the level the median
  flatness is 0.27 (10th-90th percentile 0.05-0.57). Peaks still reach full
  scale at times.
- Wide picture, 16:9: level frames fill the width with the vertical view of
  4:3; "Work in progress", the logo, the health arc and button prompts sit
  where they are in 4:3; the pause menu is the same centred panel as in 4:3.
- One start in four (roughly) the emulated pad never enumerates
  (no `periodic slot` line); a restart fixes it.

Not checked: the sound by ear (only measurements of the recording);
whether objects are culled in the extra side strips of the wide picture;
any widescreen ratio other than 16:9; gameplay by a person; anything past
240 s; the console.

## 2026-10-13: xbox-demo, first build in the reSOT layout

Commands:

```powershell
.\tools\recomp.ps1 -Target xbox-demo
.\tools\run.ps1 -Seconds 150 -SnapshotEvery 10 -Pad `
    -Set @{RECOMP_PAD_SCRIPT='30000:start:800,36000:a:800,62000:start:800,70000:start:800,78000:start:800'}
```

Observed:

- 11,364 functions lifted, 0 failed; `bin/sot-xbox-demo.exe` built.
- `prince.bf`, `video\e3_intro.int`, `video\loading.int` and the interstitial
  movies `Inter_10/20/30` and `Inter_11/21/31` opened by the game.
- In the frame dumps: Entree fly-by, the courtyard with the Prince moving,
  then the second section (daylight battlement with the Prince and two
  characters) and its "press START to continue" movie.
- 14-28 fps reported in the level sections; no access violation and no
  unresolved indirect call in the 150 seconds.

Not checked: audio (there is none); whether any frame matches the console;
gameplay by a person (input was scripted); anything past 150 seconds; shadows,
stencil and cube-map effects, which are known to be missing.

## 2026-10-12: xbox-demo, Direct3D 11 renderer and level entry

Run in the previous project layout (`RE-SoT`) with the same sources.

- The crash on entering the level (access violation in `sub_0001C9B0`, fault
  address `0xB039BBB7`) reproduced in every scripted run of the build before
  the seed-list correction (four) and in none of the three runs after it that
  went past that point.
- Menu with its 3D background, pause menu, interstitial movies and about two
  minutes of the first level rendered. Reported every 5 s: 41-56 fps in the
  menu and fly-by, 16-37 fps in the level (240-630 draws, 23-49 thousand
  triangles a frame).
- Dumps kept locally in `logs/milestone-2026-10-12/`.

Not checked: as above.

## 2026-10-12: xbox-demo, first boot (software rasteriser)

- First lift (10,912 functions) booted to the main menu and into Entree at
  about 1 fps with the toolkit's software NV2A rasteriser, after fixing
  pointer-only functions, the D3D fence, the PVIDEO overlay, `cpuid` and the
  OHCI pad wiring.

## xbox-retail

Not lifted, built or run. Known from static inspection only: entry point
`0x00335753`; D3D fence routines `sub_00370080` / `sub_00370140` with device
pointer global `0x0037B648` and the same `+0x2C` / `+0x30` offsets as the
demo; overlay disable code at `0x00379027`.
