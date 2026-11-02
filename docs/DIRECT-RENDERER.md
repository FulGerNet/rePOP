# Direct renderer path

Goal: move from `game -> Xbox GPU commands -> interpretation -> host draw` towards
`game -> host renderer`, one recognised operation at a time. This is the first
segment. It is **on by default** on every renderer and host since 2026-11-02, at the
user's request (`RESOT_DIRECT_DRAW=0` turns it off), and most of the
graphics path still goes through NV2A. Observations are in
[VALIDATION.md](VALIDATION.md).

## Symbols: what the demo really has

The demo was expected to keep many symbols. Checked in `default.xbe`
(SHA-256 `79C1A478...`): no symbol table or mangled names. It has an RSDS record naming
`d:\VssPop\Output\ExeDlls\Xbox\demo\default.pdb` (file not available), about 100
source paths used by asserts (of graphics: `GraphicDK\Sources\TEXture\TEXlist.c`) and
D3D's own message strings. So function names here are **assigned during analysis** from
code shape and constants, never original. `research/xbox-demo/GhidraProjects` names
(`SOT_*`) are also assigned.

## Path today

```text
Jade 0x000F1920 and others -> XDK D3D (section D3D) -> ring in guest RAM -> KickOff
  -> nv2a_pb_scan.c -> nv2a_pb_exec.c -> nv2a_hw_d3d11.inc (D3D11) or nv2a_hw_native.inc (SDL GPU)
```

Direct writes that an interception of draw calls alone would miss: Jade calls
`0x002A2C80`/`0x002A2CC0`/`0x002A2D20`/`0x002A2D70` (begin, vertex data, end) from
`0x000F0C00`, `0x000F28E0`, `0x000F6140`; state goes through D3D's lazy flush.

## Candidates, demo

All names assigned. Counts: cumulative at about 125 s, scripted run into Entree, Windows Vulkan
(`RESOT_DRAW_CENSUS=1`).

| VA | Identity | Evidence | Calls | Decision |
| --- | --- | --- | ---: | --- |
| `0x002A2A20` | DrawIndexedVertices(prim, count, indices), ret 0xC | Writes `0x417FC`, packets `0x40001800` | 2,854,901, 865 M indices, from `0x000F1950` (132 recording) | **Chosen** |
| `0x002A2980` | DrawVertices(prim, start, count) | `0x40001810` | 575,616, from `0x000F4252` | **Replaced**: 3-word token, no record (dynamic geometry, `start` varies, so not resident) |
| `0x002A2810` | DrawVerticesUP(prim, count, data, stride) | `0x40001818` inline data | 138,230, from `0x000F2AC0` | **Replaced**: title copies the words to a host block, 2-word token |
| `0x002A39A0` | RunPushBuffer(buffer, fixup) | JUMP, `0x40100` fix-ups | 1,440 of one buffer in 125 s, rejected: holds state `0x1B00` | **Tried and dropped**: almost no coverage |
| `0x000F1920` | Jade indexed draw | Calls `0x000EEB30`, `0x000F4FA0`, then D3D | as first row | Higher boundary, for when state moves too |
| `0x000EF630` | Jade dynamic geometry (`JadeGDIInterface.cpp`, by link order) | Builds vertices, `0x000F4220` | Hot: 2-3% of title samples | Not studied further |

Recording `RunPushBuffer` first looked best from the static reading. The census showed the
draws take another road: this is why the boundary comes from counts.

Rejected as a first boundary: a Jade-level interface, because state still comes from D3D's
lazy flush, whose structures are not reconstructed; and PB packet routines, which remove nothing.

## Contract

`src/kernel/nv2a_direct.h` holds threads, ownership and lifetimes. In short:

- **Title thread** compares the guest's index list byte by byte with the record for
  that address, creates a new record if it differs, and writes a 2-word token.
- **Immutable** from then on: the record holds its own copy, the guest may reuse its memory.
- **Executor thread** consumes tokens in ring order, owns resident entries, frees a
  dropped record once no token is pending.
- **Consumption vs GPU completion**: a token consumed means encoded, as for the words
  it replaces. The fence still follows in the ring; GPU lifetime stays with SDL (ranges are
  appended; a reset flushes and cycles).
- **Vertices** remain the title's and are compared exactly on each draw. No write tracking,
  no sampled hash: exact comparison stays until something cheaper is proved.

Coexistence: state, surfaces, clears, queries and other draws stay in the ring ahead of
and behind the token, so order, fences and visibility reports are unchanged. Effects of
the replaced routine are kept: state flush, device +8 bits, fence on bit 0x1000.
`draw_primitive` still applies every policy (shadow skip, widening, debug views).
Fallbacks: while recording, count 0 or over 65536, table full (counted); vertices that
changed more than 3 times running, or over 256 KiB, or past the 32 MiB source budget, stay in
the ring cache.

## What is removed, what is not

| Work per indexed draw | Off | On, native | On, D3D11 |
| --- | --- | --- | --- |
| Title copying indices into the ring | yes | compare instead | compare instead |
| Executor walking those words | yes | no | no |
| Index min/max, hash, compare | yes | no | as before (no cache there) |
| Vertex conversion and upload after each ring wrap | yes | no | as before |
| Copy to `s_gpu.idx` | as words arrive | memcpy | memcpy |
| Vertex byte comparison | yes | yes | no cache |
| State methods, constants, draw state capture | yes | **yes** | **yes** |
| Pipeline lookup and encoding | yes | yes | yes |

## Retail: mapping (each checked in that XBE; demo symbols do not exist to carry over)

| Role | Demo | Retail | Evidence | Confidence |
| --- | --- | --- | --- | --- |
| Device global | `0x002A8498` | `0x0037B648` | `target.h` | High |
| DrawIndexedVertices | `0x002A2A20` | `0x00375B50` | Same shape, `0x417FC`, reserve `0x209`, same tail | High statically |
| State flush | `0x002A2250` | `0x00375110` | Same start, called with device +0x1C | High |
| Reserve | `0x0029D550` | `0x00370400` | Same body, ret 4 | High |
| Fence issue | `0x0029D1E0` | `0x00370080` | Pushed 1 from the tail, writes `0x4A310` | High |
| DrawVerticesUP | `0x002A2810` | `0x003759E0` | Disassembled side by side: same instructions, device offsets +0x10 | High statically |
| UP state walk | `0x002A23F0` | `0x003752B0` | Called first by each, with the device in ecx | High statically |
| Begin / End | `0x002A2C80` / `0x002A2D70` | `0x00375EA0` / `0x00375EE0` | `0x417FC` | Medium |
| RunPushBuffer | `0x002A39A0` | `0x00376AD0` | Same shape, unused here | Medium |
| DrawVertices | `0x002A2980` | none in the lifted source | No `0x40001810` constant in `source/xbox-retail/gen` | Nothing to replace, unless another form exists |

Since 2026-11-02 retail has the whole demo inventory below, not only its draws. How it was carried
over: each hooked demo routine and each helper it calls (76) was aligned with its retail counterpart
instruction by instruction (`research/xbox-retail/direct-align.json`, ignored like the rest of
`research/`): the instruction shapes are the same in all 76, operands differ only as addresses.
Every hex constant of the demo's section was then replaced by the aligned retail operand (return
addresses by the aligned instruction). What the alignment could not decide was checked by hand:

| Item | Demo | Retail | Check |
| --- | --- | --- | --- |
| Setter of `0x002A8488` | `0x0029C2B0` | `0x0036DFF0` | The first matching guessed `0x0036DF80` (twin routine, writes `0x0037B634`); `0x0036DFF0` writes `0x0037B638` |
| Clear's jump tables | `0x00298DF0`, `0x00298DFC`, `0x00298E18` | `0x0036BBB0`, `0x0036BBBC`, `0x0036BBD8` | Entries map onto the aligned code; byte table identical |
| Last UP skip | device `+0xBC8` | `+0xBD8` | As the existing retail DrawVerticesUP |
| Texture copy | `copy + 0x808`, copy = device `+0x770` | `+0x814`, copy = `+0x774` | Same device field, `+0xF78` -> `+0xF88` |
| Fence patch | `0x0029D344` | `0x003701F4` | Disassembled |
| DrawVertices | `0x002A2980` | none | Not hooked; `0x0036C3D0` (score 0.09) is another routine |
| Data read | tables `0x002A6040`, `0x002A61BC`, `0x002A61E0/E8`, `0x002A6230`, `0x002A6260/6320/63D0`, `0x002A64A0`, `0x00336620`, float constants | `0x003791F0` ... | Bytes compared: equal over what is read (index 0-2 of `0x00379408` differ; the original reads its own) |

Constants that are NV2A method numbers, packet masks or ring offsets stay as they are. KickOff is
asynchronous on retail (`RESOT_KICK_AHEAD=1`); the RunPushBuffer wrapper (`0x00376AD0`) kicks through
`0x0036FF60` and waits for `xbox_Nv2aCaughtUp`, which also waits for every issued kick to be scanned.
No retail run has used this path yet.

## Inventory: demo, with `RESOT_DIRECT_DRAW=1`

Statically, from packet headers and reserve calls in the lifted C. Three states:
**typed** (a token, applied to renderer fields), **dropped** (the runtime reads none of its
methods), **captured** (the original routine runs, its words go to a slot behind one token
and the executor still decodes NV2A methods: a bridge, not a translation), **ring** (unchanged).

| Kind | Routines | State |
| --- | --- | --- |
| Draws | `0x002A2A20`, `0x002A2980`, `0x002A2810` | Typed |
| Fog, cull, front face, fog colour, depth test | `0x002A12F0`, `0x0029B1B0`, `0x0029B200`, `0x0029B270`, `0x0029C080` | Typed; the final combiner in `0x002A12F0` stays in the ring |
| Render target | `0x00297C20` | Typed; FLIP_STALL stays in the ring |
| Vertex arrays | `0x002A2250`, `0x002A23F0`, `0x0029AC50` | Typed |
| Texture stages | `0x002A1100` | Typed, through `tex_stage_method` |
| Render target scale, viewport, flip, lights | `0x0029BD20`, `0x0029BA00`, `0x00299A50`, `0x0029A870` | Typed (flip and clear still reach the one implementation by method number) |
| Combiners, immediate mode, scissor, clear, constants, vertex programs | `0x002A2580`, `0x002A0D80`, `0x0029B2F0`, `0x002A2C80`..`0x002A2DB0`, `0x002984B0`, `0x00298A50`, `0x0029A580`, `0x0029A770`, `0x0029A7D0`, `0x0029A990`, `0x0029A9F0`, `0x0029AAE0` | Typed; `RESOT_DIRECT_PROGRAMS=0` captures the program routines instead |
| Fixed-function combiner compiler | `0x002A55F0` | Its result is read back on the title thread and leaves as fields; captured when its words are not the expected shape |
| Unread state | `0x0029B130`, `0x0029B170`, `0x0029B2B0`, `0x0029B350`, `0x0029B3C0`, `0x0029B4C0`, `0x0029B520`, `0x0029B570`, `0x0029B5D0`, `0x0029B650`, `0x0029C110`, `0x0029C1A0`, `0x0029C240`, `0x0029C2B0`, `0x0029C3E0`, `0x0029C460`, `0x0029C4B0`, `0x0029E6F0`, `0x002A0C10`, `0x002A14D0`, `0x002A1C80`, `0x002A1FD0` | Dropped |
| Clear microcode constants | `0x0029BC50` | Dropped (stores kept) |
| Reaches an indirect call, not read yet | `0x00299340`, `0x00299460`, `0x0029DA80` | Ring |
| Fences, swap, device set-up, pushbuffer replay | `0x0029D1E0`, `0x0029D290`, `0x00299860`, `0x0029D680`, `0x0029D770`, `0x002A39A0` | Ring: D3D patches fence words in place, and the ring carries the order the tokens rely on |

So the ring remains, carrying tokens, fences and swaps. "Dropped" rests on a search for
consumers in `nv2a_pb_exec.c`, `nv2a_pb_payload.inc`, `nv2a_hw_d3d11.inc` and the unhandled lists in
logs. Retail has the same set at its own addresses (section above), RunPushBuffer wait included;
retail has no DrawVertices.

Slots are `malloc`ed and locked per token, one or more per draw: a cost left for later.

## Performance (retail, 2026-11-02)

Measured in [VALIDATION.md](VALIDATION.md). The direct path removed the decoding of methods; the
host renderer still does a pushbuffer draw's work for every draw. In a scene of about 1,600 draws:

- The title and the executor ran in series: one submission ahead, about 26 a frame. Eight ahead
  (now retail's default with the direct path) lets them overlap: 64 -> 86 fps.
- The executor is the limit, about 9.5 ms a frame. About 40% of it is vertex work done on the CPU:
  `fetch_attr` converts each distinct vertex of each draw whose geometry is not cached (about
  113,000 a frame), the ring cache looks up and compares the source bytes, and the result is
  copied to the upload buffers. Half the direct draws have vertices that change every frame,
  so caching cannot remove that.
- What would: upload the guest's vertex bytes as they are and decode the formats in the vertex
  shader, so a draw costs a copy rather than a conversion; then the per-draw state, pipeline and
  binding work (`ng_draw_program_batch`, `ng_constants`, SDL and the driver: about 20%).

Second pass (2026-11-02, built, not measured): `fetch_attr`'s per-attribute checks are taken once
per draw (`fetch_plan`/`fetch_planned`, same values) on D3D11 and the native encoder, including the
widescreen classification loop; the ring geometry cache hashes its key by words and at most about
64 indices instead of byte by byte; a direct record's index range replaces the walk over the
indices; cache snapshots grow by powers of two instead of a `realloc` per miss.

Where the draws come from (retail, Windows Vulkan, heavy scene, 2026-11-02, `[DRAWS]`): per
5 s about 199,000 direct indexed tokens, 438,000 indexed draws decoded from the ring, 84,000
inline arrays (Jade's own writers, `0x000D1190`..`0x000D1700`, `0x000CFF00`, `0x000D05A0`),
5,000 Begin/End. The only writer of index packets in the retail XBE is DrawIndexedVertices
(`0x00375B50`): the ring's come from pushbuffers recorded with it and replayed by
RunPushBuffer's copy branch (`0x00376D40`, buffers flagged in their first word), which
copies the whole buffer into the ring on every run. The hook now writes one
`NV097_RESOT_DIRECT_PUSHBUFFER` token instead: a record of the buffer's words, compared word
for word by the title before each run, split once into runs of packets and draws; the draws
run like index records, with resident geometry. Built, not yet run.

## Next, in order

1. Demo: confirmed in play by the user inside a level (VALIDATION.md, 2026-11-02). Done.
2. Retail: carried over and built (2026-11-02); to be run by the user.
3. Remove the remaining method numbers (clear, flip, texture stages), translate fences and swap,
   then replace the ring as carrier of tokens and fences.
4. Performance last: today every slot is a `malloc` and a lock.
