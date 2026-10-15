"""Emit one assembly file per function, plus a manifest.

Why the bytes are `db` and the mnemonics are comments
-----------------------------------------------------

A decompilation project needs every function it has *not* decompiled yet to
still assemble to the original bytes, or the build stops being comparable to
the shipped binary and the whole exercise loses its oracle.

On MIPS you can round-trip mnemonics through an assembler and get the original
encoding back, because the encoding is fixed-width and unambiguous. That is
what splat does for N64 and it is why that workflow reads so cleanly. x86 is
not that: `mov eax, ecx` has two encodings, immediates have short forms, and
which one MSVC picked is not recoverable from the mnemonic. Re-assembling a
listing therefore produces code that runs the same and does not *match*, which
is precisely the distinction a decomp is built on.

So the bytes are emitted as data and the disassembly rides alongside as a
comment. The file assembles to the original encoding by construction, and it
is still the thing you read while writing the C. When a function matches, you
delete its .s and the C takes over.

Labels are emitted for branch targets inside the function, so the control flow
is visible where it matters, and calls name the callee where one is known.
"""

import json
import os
import re


# Which byte a `db` line carries. 12 per line keeps a 4-byte instruction on one
# line and a long SSE one on two, which reads better than a fixed 16.
_BYTES_PER_LINE = 12


def _split_hex(hex_str):
    """'558bec' -> ['55', '8b', 'ec'].

    bytes_hex is one unbroken string, so splitting on whitespace yields a
    single token and every instruction comes out as one enormous literal.
    """
    s = "".join(hex_str.split())
    return [s[i:i + 2] for i in range(0, len(s), 2)]


def _fmt_bytes(byte_list):
    """['55', '8b', 'ec'] -> '0x55, 0x8B, 0xEC'."""
    return ", ".join("0x" + b.upper() for b in byte_list)


def _safe_name(name):
    """A filename that survives every OS and every assembler.

    Ghidra and RTTI recovery hand back real C++ names, so this sees `operator<`
    and `CBaseEntity::~CBaseEntity` as well as `sub_00012664`.
    """
    return re.sub(r"[^A-Za-z0-9_.-]", "_", name)


def _branch_targets(insns, lo, hi):
    """Addresses inside [lo, hi) that something in this function jumps to."""
    targets = set()
    for insn in insns:
        t = insn.jump_target
        if t is not None and lo <= t < hi:
            targets.add(t)
    return targets


def write_function(path, func, insns, abi, name_of, read_bytes=None):
    """One .s file: header, then the body as labelled `db` runs.

    read_bytes(va, n) -> bytes is the authority on what the file contains. The
    bytes are NOT reassembled from the instruction stream: a decoded
    instruction can start inside the function and run past its end -- which
    happens wherever data was decoded as code -- and rebuilding from those
    produced files longer than the function they claimed to be, silently, for
    102 of 2,254 functions on the first binary this was run against. Taking
    the range straight from the image makes the coverage exact by
    construction, and leaves the disassembly as pure annotation.
    """
    lo, hi = func.start, func.end
    targets = _branch_targets(insns, lo, hi)

    with open(path, "w", encoding="utf-8", newline="\n") as f:
        f.write("; %s\n" % func.name)
        f.write("; 0x%08X - 0x%08X  (%d bytes, %d instructions)\n"
                % (func.start, func.end, func.size, func.num_instructions))
        f.write("; section %s, detected by %s (confidence %.2f)\n"
                % (func.section or "?", func.detection_method or "?",
                   func.confidence))
        if abi:
            f.write("; %s, %s params, returns %s, frame %s"
                    % (abi.get("calling_convention", "?"),
                       abi.get("estimated_params", "?"),
                       abi.get("return_hint", "?"),
                       abi.get("frame_type", "?")))
            if abi.get("stack_frame_size"):
                f.write(", %d bytes of locals" % abi["stack_frame_size"])
            f.write("\n")
        if func.called_by:
            shown = ", ".join(name_of(a) for a in sorted(func.called_by)[:8])
            more = "" if len(func.called_by) <= 8 else \
                   " (+%d more)" % (len(func.called_by) - 8)
            f.write("; called by: %s%s\n" % (shown, more))
        f.write(";\n")
        f.write("; The bytes below are the original encoding, emitted as data so\n"
                "; this assembles byte-identically. The disassembly is the comment\n"
                "; beside each one -- read that, write the C, delete this file.\n\n")

        f.write("%s:\n" % func.name)
        cursor = lo

        def emit_gap(upto, why):
            """Bytes inside the function that no instruction covers.

            MSVC parks switch tables in the middle of the function body and the
            disassembler marks them as data, so the gap is not always at the
            end -- memcpy has one, and filling only the tail left it 48 bytes
            short of the shipped encoding.
            """
            if read_bytes is None or upto <= cursor:
                return
            run = ["%02x" % b for b in read_bytes(cursor, upto - cursor)]
            f.write("\n    ; %d byte(s) %s\n" % (len(run), why))
            for i in range(0, len(run), _BYTES_PER_LINE):
                f.write("    db %s\n"
                        % _fmt_bytes(run[i:i + _BYTES_PER_LINE]))
            f.write("\n")

        for insn in insns:
            if insn.address < cursor or insn.address >= hi:
                continue
            if insn.address > cursor:
                emit_gap(insn.address,
                         "not decoded as instructions (switch table or padding)")
                cursor = insn.address
            if insn.address in targets:
                f.write("\n.L_%08X:\n" % insn.address)

            text = "%s %s" % (insn.mnemonic, insn.op_str)
            # Name the callee where we know it. `call 0xb2630` says nothing;
            # `call sub_000B2630` is the edge you follow while decompiling.
            if insn.call_target is not None:
                text += "   -> %s" % name_of(insn.call_target)
            elif insn.jump_target is not None and not (lo <= insn.jump_target < hi):
                text += "   -> %s" % name_of(insn.jump_target)

            n = min(insn.size, hi - insn.address)
            if read_bytes is not None:
                raw = ["%02x" % b for b in read_bytes(insn.address, n)]
            else:
                raw = _split_hex(insn.bytes_hex)[:n]
            if n < insn.size:
                text += "   [clipped at function end]"

            f.write("    db %-42s ; %08X  %s\n"
                    % (_fmt_bytes(raw[:_BYTES_PER_LINE]),
                       insn.address, text.rstrip()))
            for i in range(_BYTES_PER_LINE, len(raw), _BYTES_PER_LINE):
                f.write("    db %s\n"
                        % _fmt_bytes(raw[i:i + _BYTES_PER_LINE]))
            cursor = insn.address + n

        # And anything left between the last instruction and the function end.
        emit_gap(hi, "trailing, not decoded as instructions")


def split(engine, func_detector, out_dir, abi_by_addr=None, sections=None,
          limit=0, verbose=False):
    """Write every detected function as its own .s, plus manifest.json.

    Returns the manifest dict, so a caller can do something else with it
    without re-reading the file.
    """
    abi_by_addr = abi_by_addr or {}
    funcs = sorted(func_detector.functions.values(), key=lambda fn: fn.start)
    if sections:
        wanted = set(sections)
        funcs = [fn for fn in funcs if fn.section in wanted]
    if limit:
        funcs = funcs[:limit]

    names = {fn.start: fn.name for fn in func_detector.functions.values()}

    def name_of(addr):
        return names.get(addr, "0x%08X" % addr)

    image = engine.image

    def read_bytes(va, n):
        """The image's own bytes for [va, va+n). Empty outside raw data --
        a BSS-backed section has no file bytes to emit."""
        sec = image.get_section_at_va(va)
        if sec is None:
            return b""
        data = image.get_section_data(sec)
        off = va - sec.virtual_addr
        if off < 0 or off >= len(data):
            return b""
        return data[off:off + n]

    entries = []
    for fn in funcs:
        # Section subdirectories: one flat directory of 41,223 files is
        # miserable in a file browser and slow in a shell.
        sub = _safe_name(fn.section or "unknown").lstrip(".") or "unknown"
        sub_dir = os.path.join(out_dir, "asm", sub)
        os.makedirs(sub_dir, exist_ok=True)

        rel = os.path.join("asm", sub, _safe_name(fn.name) + ".s")
        insns = engine.get_instructions_in_range(fn.start, fn.end)
        abi = abi_by_addr.get(fn.start)
        write_function(os.path.join(out_dir, rel), fn, insns, abi, name_of,
                       read_bytes=read_bytes)

        entry = {
            "name": fn.name,
            "address": "0x%08X" % fn.start,
            "end": "0x%08X" % fn.end,
            "size": fn.size,
            "section": fn.section,
            "instructions": fn.num_instructions,
            "has_prologue": fn.has_prologue,
            "detection_method": fn.detection_method,
            "confidence": fn.confidence,
            "called_by": ["0x%08X" % a for a in sorted(fn.called_by)],
            "calls_to": ["0x%08X" % a for a in sorted(fn.calls_to)],
            "file": rel.replace(os.sep, "/"),
        }
        if abi:
            for k in ("calling_convention", "estimated_params", "return_hint",
                      "frame_type", "stack_frame_size", "heuristic_confidence"):
                if k in abi:
                    entry[k] = abi[k]
        entries.append(entry)

    manifest = {
        "functions": len(entries),
        "with_abi": sum(1 for e in entries if "calling_convention" in e),
        "sections": sorted({e["section"] for e in entries if e["section"]}),
        "note": "Each .s holds the original bytes as db directives, so it "
                "assembles to the shipped encoding exactly. See docs/DECOMP.md.",
        "function_list": entries,
    }
    os.makedirs(out_dir, exist_ok=True)
    with open(os.path.join(out_dir, "manifest.json"), "w",
              encoding="utf-8", newline="\n") as f:
        json.dump(manifest, f, indent=2)

    if verbose:
        for e in entries[:10]:
            print("  %s  %s  %d bytes" % (e["address"], e["name"], e["size"]))
    return manifest


def load_abi(path):
    """{address -> abi record} from tools.abi_analysis output, if it exists.

    Optional on purpose: the splitter is useful without it, and a project that
    has not run abi_analysis should get files rather than an error.
    """
    if not path or not os.path.exists(path):
        return {}
    with open(path, encoding="utf-8") as f:
        data = json.load(f)
    out = {}
    for rec in data:
        addr = rec.get("address")
        if isinstance(addr, str):
            out[int(addr, 16)] = rec
        elif isinstance(addr, int):
            out[addr] = rec
    return out
