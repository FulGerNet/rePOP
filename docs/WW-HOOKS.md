# Warrior Within retail hooks

Applies only to the local default.xbe with SHA-256
`8747A4104EB359DC76C410770FA2F3F64B547077A26E8EA308B2BCCFC964599C`.

The XDK integration was compared against reSOT Xbox retail using
`tools/sort-functions.py` Build/code_key, followed by paired Capstone disassembly.
Normalized keys mask address-sized immediates/displacements and branch targets;
they are candidate matches, not sufficient proof alone. The selected routines'
paired disassembly differs only in relocated data, branch and call addresses.
Operand sizes, struct offsets, masks, returns and other constants are unchanged.
The comparison scripts remain private in research/; no game bytes/listings are
published here.

| Routine | SoT reference | WW address | Evidence |
| --- | --- | --- | --- |
| D3D fence issuer | 00370080 | 00495740 | Unique normalized match, 184 bytes |
| D3D KickOff | 0036FF60 | 00495620 | Unique normalized match, 176 bytes |
| D3D blocking KickOff | 00370010 | 004956D0 | Unique normalized match, 107 bytes |
| D3D GPU busy query | 0036AE70 | 004905A0 | Unique normalized match, 47 bytes |
| XGetDevices | 0041172B | 00543A59 | Unique normalized match, 34 bytes |
| XGetDeviceChanges | 0041174D | 00543A7B | Unique normalized match, 109 bytes |
| XInputOpen | 00417D4B | 00543AE8 | Unique normalized match, 86 bytes |
| XInputClose | 00417DA1 | 00543B3E | 12-byte wrapper, resolved by adjacency and game caller 000D55E0 |
| XInputGetCapabilities | 00417DAD | 00543B4A | Unique normalized match, 472 bytes |
| XInputGetState | 00417F85 | 00543D22 | Unique normalized match, 115 bytes |
| XInputSetState | 00417FF8 | 00543D95 | Unique normalized match, 51 bytes |

XInputClose has another normalized candidate at 00542FBE. The selected
00543B3E lies immediately between XInputOpen and XInputGetCapabilities, matches
the XDK close helper call shape and is called from the game's input routine
000D55E0. The other candidate is called only from XPP 00542DAC and is not hooked.

WW fence issuer loads the D3D device global 004A0F58 at 00495741, reads issued
counter +2C at 00495754 and emits method 00041D70 at 0049577D. The independent
waiter at 00495800 loads the GPU counter pointer +30 at 00495807 and issued
counter +2C at 0049580C. These facts populate target.h; no waiter replacement
is required.

The two KickOff replacements retain the verified stores, flags and saved guest
registers, replacing the write-combine spin with xbox_Nv2aWaitClear and kicking
the executor after DMA_PUT. Device fields +770, +1C20, +1C28, +2478 and +1DE4
are unchanged. WW relocated globals are sync 004A0AB0 and dummy DMA 004A0AA0.
Guest return addresses used by the busy helper are 00495689 and 00495735.

XAPI wrappers reuse the host pad state and rumble backend. The original routines
remain available under `_gen`; `RECOMP_USB=1` invokes them. The state layout,
25-byte capabilities layout, feedback rumble offsets +42/+44 and stdcall return
sizes agree in the paired disassembly. No SoT menu callbacks are retained.

The SoT Bink status wrapper 0001E970 has no identical normalized match in WW;
movie-skip hooks remain absent. No Jade, world, frame-timing, projection or
native-menu hooks are transferred.

Adding target_hooks.c requires relifting with `--exclude-manual` pointing at this
file, and compiling this file into the executable. The initial generated C from
before this file existed cannot simply be linked with these wrappers: duplicate
symbols and missing `_gen` bodies would result. A successful build alone does
not establish correct input, rendering, timing or boot behavior.

## GP DSP completion handshake (audio startup stall)

The first bounded boot run stopped in the stack
00519D3A -> 00519FA7 -> 00515973 and produced zero GPU draws. This identifies
an audio startup wait rather than an established graphics failure.

In WW 00519D3A, instructions 00519D45..00519D4B load GP scratch through
`this+8`, that object's `+10`, and descriptor slot zero into EBX. At
00519E97 EBX advances by 810; 00519E9F stores command 3. The comparison at
00519EA1 and branch at 00519EA4 spin until the command becomes zero.
Caller 00519FA7 populates the command metadata at scratch+800..817 before
calling the waiter at 0051A01C.

WW scratch setup 0051F51A selects the descriptors at 005341B0+n*10 and
005341C0+n*10 (0051F53E/0051F547), storing the scratch descriptor in object
+10. For the GP branch, it publishes the SG descriptor's physical address
through MMIO FE802040/GPSADDR at 0051F5A9. The helper at 0051F61F writes
scratch using the same object+10 and descriptor slot zero. These routines
have unique normalized matches in SoT retail:

| WW | SoT | Role |
| --- | --- | --- |
| 00519D3A | 003E8A27 | Command write and completion spin |
| 00519FA7 | 003E8C94 | Command metadata setup |
| 0051F51A | 003ED384 | GP/EP scratch and SG setup |
| 0051F61F | 003ED489 | Scratch-memory writes |
| 0051F647 | 003ED4B1 | SG scratch growth |

The hardware-model GP scratch page resolver already supports this verified
layout. `RESOT_APU_DSP_ACK="gp+0x810"` is now a WW target fact, applied by
the host only when RECOMP_APU_DSP_ACK is absent. It enables the same completion
handshake used by SoT; the DSP itself is still bypassed and does not compute
effects. This static verification and host-default change require a native
rebuild; no relift is necessary. Boot progress and audible output after this
change remain to be checked separately.

## XPP initialization callbacks above the old pointer-scan limit

Runtime unresolved targets 00542664 and 00542EA2 are independent XPP callback
entries, rather than returns, shared epilogues or internal labels:

- 00542664 starts with a normal EBP prologue, initializes MU state at
  005AC080 and is stored in the aligned XPP registration slot 005424DC.
- 00542EA2 starts immediately after the preceding function's `ret 8` at
  00542E9F. It initializes the USBH pool, is stored at XPP slot 00542594 and
  returns with `ret 4` at 00542F0B.

The raw-dword scan in tools/seed-scan.py used a fixed `va & FFC00000` rejection,
which silently discarded every pointer at or above 00400000 before applying
its executable-section, boundary, library and function-body evidence. Both WW
callbacks fall above that old title-sized limit. The scan now filters with the
same actual executable-section ranges used for all other candidates. Existing
boundary, function-probe, shared-frame and library restrictions are preserved;
this change does not automatically accept every executable-looking number.

Three synthetic unittest checks cover code above 4 MB, half-open section bounds
and rejection of noncode/address-shaped data. Command:
`python tools/test-seed-scan.py -v` (3 passed).

The diagnostic scan writes only research/seed-code-bounds-after.json, comparing
against a private copy of the current seed list. It uses the existing seeded
functions.json rather than regenerating the unseeded baseline; its additions
therefore describe an incremental diagnostic census, not a replacement seed
list. No game input, generated C, analysis database or published seed list is
changed by this check.

The completed diagnostic scan grew the copied list from 251 to 426 entries.
A control run retaining the old filter grew it to 252; the filter change itself
therefore admits 174 additional candidates above 4 MB. The remaining newly
found immediate, 0008B620, is unrelated to that limit. The complete private list
also includes confirmed callback 00542664 added with
`--observed-only --extra 0x00542664`, for 427 entries total.

This broad census must not be promoted blindly: 63 additions lie inside existing
function extents, including D3D switch arms 00490EBF/00490EE2/00490EEF/00490F00
which pop EDI/ESI saved by their common owner 00490CF0. Independent seeding can
split those shared frames. Defer the 62 unresolved interior cases to CFG ownership
and switch-arm recovery or individual review. The other interior census item,
0008B620, is independently registered at instruction 000478CC via slot 005BF2B0,
follows four INT3 padding bytes at 0008B61C..61F, reads its own stack argument and
returns without consuming another routine's saved registers. Its previous
owner 0008B5E0 has an inline switch table before that padding, so the original
extent overran into a distinct callback. Lists, control results and the risk
review remain under private research/; no published seed list is changed.

### Selected published seeds after the successful bounded boot

`source/xbox-retail/seed_functions.json` now selects **366 entries** from the
427-entry diagnostic census, deferring **61 shared-frame interior candidates**.
The earlier 62-case defer list was narrowed after the bounded boot actually
called Bink entry 004E4380. It is an independent entry after a return/padding,
saves and restores EBX/EBP/ESI/EDI and returns at 004E446D; its BINKDATA callback
slot is 0096B258. Entry 004E4510 is independently reached from slot 0096B1E8,
has its own MMX body and saved-register prologue, and follows a `ret 38` plus
padding. Both are marked observed, citing `logs/coldbranch-smoke-err.txt` (ICALL
reports at lines 6418 and 6436). The original log is preserved locally.

The selected list explicitly documents confirmed XPP callback 00542664 and
independently registered callback 0008B620. Its selection excludes the other
61 entries known to lie inside existing function extents. The scanner now
rejects **all static candidates inside any existing function**, including
forward-only switch arms following another arm's return. Explicit/runtime
entries retain the existing alias path and function-body probe. This does not
broaden static cold-path acceptance or remove existing function boundaries.

Scanner checks: `python tools/test-seed-scan.py -v` — **6 passed**, including a
synthetic forward-only shared-frame switch arm and overlapping owner ranges.
The 366-entry selection has been reanalyzed and relifted with zero translation
failures. Generated bodies now exist for 00542664, 00542EA2, 004E4380 and
004E4510. The earlier 45-second boot/render/audio observation applies to the
build before these newly selected seeds; updated executable validation is
recorded in VALIDATION.md.

### Exact observed callback 00088730

The next built run reported unresolved ICALL 00088730 in
`bin/logs/ww-xbox-retail-err.txt` (line 7197). Its registration instruction at
000477BE stores it in slot 005BF214, beside independently registered callback
slots. The analysis extent 00087E1F..00088766 crosses the preceding inline
switch table and includes this separate entry; the conservative static seed
gate therefore does not invent a new boundary there.

`target_hooks.c` now implements the exact original 00088730..00088765 body,
selected by `recomp_lookup_manual`. It loads ECX from stack argument +4, loads
EAX through `[ECX+0C]+134`, and uses the original fallback chain
`[ECX+18] -> [+14] -> [value] -> [+4]`, preserving each register assignment and
null test. A null result follows the original plain RET: ESP advances by 4,
arguments remain owned by the caller and the argument slot stays unchanged.
A nonzero result replaces only argument +4 and tail-calls the already lifted
003A53D0 without pushing another guest return address. ECX and all other
register effects follow the original; EBX, ESI, EDI, EBP and EDX are untouched
by the wrapper itself.

The tail entry begins MOV EAX,[ESP+4] at 003A53D0, TEST EAX,EAX at 003A53D4,
then JE at 003A53D6, so it defines flags before consuming them. No inherited
EFLAGS bridge is required. This is a complete implementation, not a skip or
success stub. It requires rebuilding the native hook/lookup sources; generated
C and the 366-entry seed list are unchanged. The rebuilt executable completes
a 45-second debugger-controlled run with exit 0, reaches the main-menu asset
reads and no longer logs unresolved ICALLs (including 00088730). Logs are
resource-callback-build.txt, resource-callback-boot-debug.txt and
resource-callback-smoke-err.txt under ignored logs/. This validates the observed
boot path, not every possible resource object or gameplay path.
