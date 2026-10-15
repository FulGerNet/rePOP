"""Find functions of an Xbox build that are only reachable through stored pointers.

xboxrecomp's detector follows calls, prologues and padding boundaries, so a
routine whose address only ever sits in a table (vtable, callback slot, AI
function table such as the demo's at 0x340610) gets no dispatch entry and the
lifted game logs `[ICALL] Failed to resolve VA`. This scans every 4-aligned
dword of the image for code addresses that

  * lie in an executable section,
  * start after a decoded boundary, and do not branch back into an enclosing
    function's earlier body (cold paths must keep their shared stack frame), and
  * pass the disassembler's own function-body probe.

Addresses observed at runtime (`--log`) are added through the same gates, and
for those an interior address is accepted as an alias entry.

Normally run through `tools/recomp.ps1 -Seeds` (or `-Observed run.log`), which
prepares the unseeded baseline it needs. By hand, from port/third_party/xboxrecomp-demo (or -retail)
so `tools.disasm` resolves:

    python <reSOT>/tools/seed-scan.py default.xbe --analysis-json A.json \
        --functions functions.json --seeds seed_functions.json [--log run.log ...]
"""
import argparse
import bisect
import json
import os
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, os.getcwd())
from tools.disasm.engine import DisasmEngine  # noqa: E402
from tools.disasm.loader import DATA_SECTION_NAMES, load_image  # noqa: E402

LOG_ADDRESS = re.compile(r"Failed to resolve VA (0x[0-9A-Fa-f]+)|"
                         r"PsCreateSystemThreadEx.*?ctx1=(0x[0-9A-Fa-f]+)|"
                         r"start routine (0x[0-9A-Fa-f]+) not found")


def shares_enclosing_frame(va, lo, hi, instructions, incoming):
    """A local branch into a cold path and a path back require one frame.

    A ret before an address is not enough to make it a function: retail's
    DFF90 jumps past its return to E0006, whose alternate paths return to
    the shared epilogue DFFEE. Treating the numeric constant E0006 as a seed
    strands the saved registers. Explicitly observed targets remain aliases.
    """
    if not any(lo <= source < va for source in incoming.get(va, ())):
        return False
    pending, seen = [va], set()
    while pending:
        pc = pending.pop()
        if pc in seen or not va <= pc < hi:
            continue
        seen.add(pc)
        insn = instructions.get(pc)
        if insn is None:
            continue
        if insn.is_branch and insn.jump_target is not None:
            if lo <= insn.jump_target < va:
                return True
            pending.append(insn.jump_target)
        if not insn.is_ret and not insn.is_jump:
            pending.append(insn.end_address)
    return False


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("xbe", type=Path)
    ap.add_argument("--analysis-json", type=Path, required=True)
    ap.add_argument("--functions", type=Path, required=True)
    ap.add_argument("--seeds", type=Path, required=True)
    ap.add_argument("--log", type=Path, action="append", default=[])
    ap.add_argument("--observed-only", action="store_true",
                    help="add only --log/--extra addresses; skip the static scans, "
                         "which need an unseeded functions.json")
    ap.add_argument("--extra", action="append", default=[],
                    help="additional hex address to seed (same gates as --log)")
    args = ap.parse_args()

    image = load_image(str(args.xbe), str(args.analysis_json))
    engine = DisasmEngine(image)
    code = []
    for s in image.sections:
        if s.executable and s.name not in DATA_SECTION_NAMES:
            engine.linear_sweep(s)
            code.append((s.virtual_addr, s.virtual_addr + s.virtual_size))

    def in_code(va):
        return any(lo <= va < hi for lo, hi in code)

    funcs = json.loads(args.functions.read_text())
    bounds = sorted((int(f["start"], 16), int(f["end"], 16)) for f in funcs)
    starts = [b[0] for b in bounds]
    incoming = {}
    for insn in engine.instructions.values():
        if insn.is_branch and insn.jump_target is not None:
            incoming.setdefault(insn.jump_target, []).append(insn.address)

    def interior(va):
        i = bisect.bisect_right(starts, va) - 1
        return i >= 0 and bounds[i][0] < va < bounds[i][1]

    seeds = json.loads(args.seeds.read_text()) if args.seeds.exists() else []
    have = {int(e["start"], 16) for e in seeds}
    known = set(starts) | have
    added = {}

    def after_boundary(va):
        """True when the bytes before va end a routine: padding or a return.

        The detector merges a pointer-only function into its predecessor when
        nothing calls it; the nop/int3 run or `ret` in front still marks it.
        """
        # Decided on decoded instructions, never on raw bytes: 0xCC and 0xC3
        # are also ordinary immediate bytes. 0x00190004 follows the constant
        # 0xCC000403 in a compiled AI function; accepting it cut that function
        # in two and the lifted halves no longer shared a frame.
        if va not in engine.instructions:
            return False
        # The first routine of a section has nothing in front of it. Bink's
        # colour converters each open a section of their own (BINK32, BINK16,
        # BINKYUY2 ...) and are reached only through BINKDATA's tables.
        if any(lo == va for lo, _ in code):
            return True
        for back in range(1, 16):
            prev = engine.instructions.get(va - back)
            if prev is not None and prev.end_address == va:
                # Not `jmp`: the case blocks of a switch follow one, and taking
                # those as routines split Bink's block decoder and D3D.
                return prev.is_ret or prev.is_nop or prev.mnemonic == "int3"
        return False

    def consider(va, note, allow_interior):
        if va in known or va in added or not in_code(va):
            return
        # A static candidate must start where a routine can start, wherever it
        # lies. The boundary test used to apply only inside detected functions;
        # 0x000E001A (a number in a DirectSound table) fell in a stretch the
        # detector had left unclaimed, was accepted in the middle of a `je`,
        # and the sound engine's stream reader around it was never lifted.
        if not allow_interior and not after_boundary(va):
            return
        if not allow_interior and interior(va):
            lo, hi = bounds[bisect.bisect_right(starts, va) - 1]
            if shares_enclosing_frame(va, lo, hi, engine.instructions, incoming):
                return
        if engine.probes_as_function_body(va):
            added[va] = note

    for path in args.log:
        for m in LOG_ADDRESS.finditer(path.read_text(errors="replace")):
            va = int(next(g for g in m.groups() if g), 16)
            consider(va, "observed at runtime", True)
    for text in args.extra:
        consider(int(text, 16), "listed by hand", True)

    # Immediates of decoded instructions (`push offset f`, `mov [slot], offset f`).
    for insn in ([] if args.observed_only else list(engine.instructions.values())):
        if insn.imm_ref is not None:
            consider(insn.imm_ref, "pointer stored as immediate at 0x%08X (code)" % insn.address, False)

    # Raw dwords. .text is pure code, where an aligned dword is an accident of
    # encoding; the XDK library sections interleave tables with their code.
    # Codec tables and image data hold numbers that merely look like addresses
    # (0x00190004 came out of a WMA table), so a codec's data section may only
    # name code of its own library: BINKDATA holds Bink's blitter tables.
    # The same holds for every prebuilt XDK library: its tables can name its
    # own routines, never the title's .text, which did not exist when it was
    # built. Shader tokens in XGRPH, HID tables in XPP and DirectSound's
    # coefficient tables had put 80-odd entries into the middle of game code.
    not_pointers = {".text", "$$XTIMAGE", ".XTLID"}
    own_code = {"BINKDATA": "BINK", "WMADEC": "WMADEC", "DOLBY": "DOLBY",
                "D3D": "D3D", "D3DX": "D3D", "XGRPH": "XGRPH", "DSOUND": "DSOUND",
                "XPP": "XPP"}

    def section_name(va):
        for sec in image.sections:
            if sec.virtual_addr <= va < sec.virtual_addr + sec.virtual_size:
                return sec.name
        return ""

    for s in ([] if args.observed_only else image.sections):
        if s.name in not_pointers:
            continue
        family = own_code.get(s.name) or ("BINK" if s.name.startswith("BINK") else None)
        data = image.get_section_data(s)
        base = s.virtual_addr
        for off in range((-base) % 4, len(data) - 3, 4):
            va = struct.unpack_from("<I", data, off)[0]
            if va & 0xFFC00000 or va < 0x11000:
                continue
            if family and not section_name(va).startswith(family):
                continue
            consider(va, "pointer stored at 0x%08X (%s)" % (base + off, s.name), False)

    for va in sorted(added):
        seeds.append({"start": "0x%08X" % va, "observed": added[va].startswith("observed"),
                      "note": added[va]})
    seeds.sort(key=lambda e: int(e["start"], 16))
    args.seeds.parent.mkdir(parents=True, exist_ok=True)
    args.seeds.write_text(json.dumps(seeds, indent=1))
    by_kind = {}
    for note in added.values():
        kind = note.split(" at ")[0].split(" (")[0]
        by_kind[kind] = by_kind.get(kind, 0) + 1
    print("seeds: %d (+%d) %s" % (len(seeds), len(added), by_kind))


if __name__ == "__main__":
    main()
