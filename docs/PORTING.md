# reSOT reuse

Imported from the local reSOT working tree on 2026-10-22 (HEAD
`d8190090c15186dd55d419ee3a20f6231bac4189`, including its current local fixes).
reSOT itself is untouched. This is a separate rePOP checkout on branch reWW.

The complete vendored XboxRecomp source, tools, tests, headers, attribution and
licenses are retained. This includes the current x86 lifter fixes for flags,
carry, widths, FPU/SSE state, call/return frames, indirect dispatch, SEH and MMIO;
the Xbox kernel, memory reservations, file/save I/O, scheduling, NV2A renderers,
texture/combiner/query fixes, APU/audio, OHCI and input implementations.
`RESOT_RUNTIME_RETAIL=1` is an explicit compatibility baseline for this first
WW port, not a statement that the inherited rendering/audio policies have been
validated on WW. `REWW_RUNTIME=1` distinguishes the consumer for later changes.
Existing `RE-SoT` comments preserve the origin of inherited fixes.

The Windows launcher, ISO installer (extract-xiso), options, diagnostics,
crash handler, register declarations, watchdog, sampling profiler and thread
dump are reused. The launcher recognizes the WW hash and disc files, exposes
one retail target, and uses WW titles. The font is retained from the user's
local SoT setup; its provenance and licensing are unchanged. The SoT title
image/icon are omitted. The scene diagnostic provider returns Unknown until
WW globals have been established.

The source sorter and seed scanner are reused. Function groups are based on
XBE section names, strings/source paths, AI tables and conservative neighboring
function inference, with evidence in the output. SoT seeds are never imported.
Functions without evidence go to unsorted. `--all` requests lifting every
detected routine; static detection is not a guarantee of complete runtime coverage.
When the sibling SoT retail analysis exists, the sorter also uses unique
normalized code matches to transfer folder assignments, with the originating
SoT function recorded in each placement. This improves organization without
transferring SoT seed addresses or function implementations to WW.

No Jade world, projection, menu pointer, or Bink replacement addresses are copied
from SoT. The DSP acknowledgement default `gp+0x810` was initially omitted,
then enabled after paired WW/SoT disassembly established the same GP scratch
handshake (see WW-HOOKS.md).
WW DSOUND bounds come directly from its section header. Additional WW hook
evidence is recorded separately in WW-HOOKS.md when available.

Two layout corrections are specific to this port: initial TLS and its CRT
slot are heap allocations rather than fixed addresses inside the image;
the complete 8 MB stack starts at 0x00A00000, above the WW image end
0x0097B160, and the runtime heap consequently starts at 0x01200000.
An integration test checks the layout against the actual XBE section table.

This request targets Windows. The Android application is not copied or claimed
to build for WW. Runtime Android sources are retained as part of XboxRecomp.
