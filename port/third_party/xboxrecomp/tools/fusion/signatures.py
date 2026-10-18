"""XDK library signature database from Fission symbol tables.

Idea: every Xbox game statically links the same XDK libraries (D3D8, D3DX,
DirectSound, XAPI, XGRAPHICS, XNet, CRT). Microsoft's Fission symbol tables name
those functions with exact (guest_start, size). Combined with the game's own XBE
(which we have -- it is our legitimate input), that yields a byte signature per
named function that transfers to *any* XBE: a FLIRT-style name-recovery database
sourced from Microsoft's own symbols.

White-room: the signature bytes come from the GUEST xbe (our input), not from
Microsoft's recompiled output. The Fission table only supplies (name, address,
size) -- facts about the guest binary.

Signatures are masked with capstone so that operands that legitimately differ
between two games (absolute addresses of globals/callees, branch targets) are
wildcards; opcodes and structure are matched. A match requires equal function
length plus agreement on all non-wildcard bytes of the first 32 -- strong enough
that cross-title hits are almost entirely the identical XDK library code.

Usage:
    py -3 -m tools.fusion.signatures build <module.dll> <source.xbe> <out.json>
    py -3 -m tools.fusion.signatures match <sigs.json> <target.xbe> <functions.json> <names.json>
    py -3 -m tools.fusion.signatures selftest <module.dll> <source.xbe> [<funcs.json>]
"""
import json
import struct
import sys
import collections

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

PAT_LEN = 32      # bytes of leading pattern to match
MIN_FIXED = 8     # a sig needs at least this many non-wildcard bytes to be usable

_md = Cs(CS_ARCH_X86, CS_MODE_32)
_md.detail = True


# ---- tiny XBE code reader (VA -> bytes) ----------------------------------
class XbeCode:
    def __init__(self, path):
        raw = open(path, "rb").read()
        assert raw[:4] == b"XBEH", "not an XBE"
        self.base = struct.unpack_from("<I", raw, 0x104)[0]
        nsec = struct.unpack_from("<I", raw, 0x11C)[0]
        sh = struct.unpack_from("<I", raw, 0x120)[0] - self.base
        self.segs = []  # (va_lo, va_hi, bytes)
        lo = hi = None
        for i in range(nsec):
            o = sh + i * 56
            va, vsz, ra, rsz = struct.unpack_from("<IIII", raw, o + 4)
            data = raw[ra:ra + rsz]
            self.segs.append((va, va + vsz, data, ra, rsz))
            lo = va if lo is None else min(lo, va)
            hi = va + vsz if hi is None else max(hi, va + vsz)
        self.image_lo, self.image_hi = lo, hi

    def read(self, va, n):
        for lo, hi, data, ra, rsz in self.segs:
            if lo <= va < hi:
                off = va - lo
                return data[off:off + n]  # may be short if in BSS tail
        return b""


# ---- masked pattern ------------------------------------------------------
def masked_pattern(code, va, lo, hi):
    """Return (pattern, mask) over up to PAT_LEN bytes. mask[i]=1 => wildcard.

    Wildcards the bytes of any operand that is an absolute address or a rel32
    branch target -- exactly the fields the linker lays out differently between
    two games, so masking them lets the same library function match across
    titles while opcodes and struct offsets still have to agree.
    """
    code = code[:PAT_LEN]
    pat = bytearray(code)
    mask = bytearray(len(code))
    consumed = 0
    for insn in _md.disasm(bytes(code), va):
        if consumed >= len(code):
            break
        enc = insn.encoding
        # rel32 branch target, or imm32 that is an image address
        if enc.imm_size == 4 and enc.imm_offset:
            val = int.from_bytes(bytes(insn.bytes[enc.imm_offset:enc.imm_offset + 4]),
                                 "little", signed=False)
            is_branch = insn.mnemonic in ("call", "jmp") or insn.mnemonic.startswith("j")
            if is_branch or (lo <= val < hi):
                for b in range(enc.imm_offset, min(enc.imm_offset + 4, len(mask))):
                    mask[b] = 1
        # absolute [disp32] (not a small [reg+disp] struct offset)
        if enc.disp_size == 4 and enc.disp_offset:
            disp = int.from_bytes(bytes(insn.bytes[enc.disp_offset:enc.disp_offset + 4]),
                                  "little", signed=True)
            if abs(disp) >= 0x10000:
                for b in range(enc.disp_offset, min(enc.disp_offset + 4, len(mask))):
                    mask[b] = 1
        consumed = (insn.address - va) + insn.size
    # zero out wildcard bytes in the pattern for a canonical form
    for i in range(len(pat)):
        if mask[i]:
            pat[i] = 0
    return bytes(pat), bytes(mask)


def _fixed_count(mask):
    return len(mask) - sum(mask)


# ---- build ---------------------------------------------------------------
def build_sigs(module_path, xbe_path):
    from tools.fusion.module import FusionModule
    m = FusionModule(module_path)
    xbe = XbeCode(xbe_path)
    lo, hi = xbe.image_lo, xbe.image_hi
    # a guest RVA in the symbol table is a VA when added to base; the map/table
    # use RVAs relative to 0, but names sit at file VA = base + rva. The XBE
    # loads at base 0x10000 and the symtab guest_start values already include it
    # (e.g. 0x1c440b), so read directly.
    sigs = []
    seen = collections.Counter()
    for s in m.symbols:
        code = xbe.read(s.guest_start, min(s.size, PAT_LEN))
        if len(code) < MIN_FIXED:
            continue
        pat, mask = masked_pattern(code, s.guest_start, lo, hi)
        if _fixed_count(mask) < MIN_FIXED:
            continue
        seen[s.name] += 1
        sigs.append({
            "name": s.name, "size": s.size,
            "pat": pat.hex(), "mask": mask.hex(),
        })
    return sigs, m


# ---- match ---------------------------------------------------------------
def _pat_matches(a_pat, a_mask, b_pat, b_mask):
    n = min(len(a_pat), len(b_pat))
    for i in range(n):
        if a_mask[i] or b_mask[i]:
            continue
        if a_pat[i] != b_pat[i]:
            return False
    return True


def load_functions(funcs_path):
    d = json.load(open(funcs_path, encoding="utf-8"))
    fs = d["functions"] if isinstance(d, dict) and "functions" in d else d
    it = fs.values() if isinstance(fs, dict) else fs
    out = []
    for f in it:
        st = f["start"]
        va = int(st, 16) if isinstance(st, str) else st
        sz = None
        if "size" in f and f["size"]:
            sz = f["size"] if isinstance(f["size"], int) else int(str(f["size"]), 0)
        elif "end" in f:
            e = f["end"]; e = int(e, 16) if isinstance(e, str) else e
            sz = e - va
        name = f.get("name", "")
        out.append((va, sz, name))
    return out


def _is_unnamed(name):
    return (not name) or name.lower().startswith("sub_") or "__sub_" in name


def match(sigs, xbe_path, funcs_path, only_unnamed=False):
    xbe = XbeCode(xbe_path)
    lo, hi = xbe.image_lo, xbe.image_hi
    # bucket sigs by (size, first fixed opcode byte) for speed
    by_size = collections.defaultdict(list)
    for s in sigs:
        pat = bytes.fromhex(s["pat"]); mask = bytes.fromhex(s["mask"])
        by_size[s["size"]].append((pat, mask, s["name"]))

    hits = {}         # va -> set(names)
    for va, sz, cur_name in load_functions(funcs_path):
        if sz is None:
            continue
        if only_unnamed and not _is_unnamed(cur_name):
            continue   # never clobber a real name the target already has
        cand = by_size.get(sz)
        if not cand:
            continue
        code = xbe.read(va, PAT_LEN)
        if len(code) < MIN_FIXED:
            continue
        tpat, tmask = masked_pattern(code, va, lo, hi)
        if _fixed_count(tmask) < MIN_FIXED:
            continue
        for pat, mask, name in cand:
            if _pat_matches(tpat, tmask, pat, mask):
                hits.setdefault(va, set()).add(name)
    # keep only unambiguous (single-name) hits
    named = {va: next(iter(ns)) for va, ns in hits.items() if len(ns) == 1}
    ambiguous = {va: sorted(ns) for va, ns in hits.items() if len(ns) > 1}
    return named, ambiguous


# ---- CLI -----------------------------------------------------------------
def _cmd_build(module, xbe, out):
    sigs, m = build_sigs(module, xbe)
    json.dump({"source": m.source, "title": m.title_id, "build": m.build_tree,
               "sigs": sigs}, open(out, "w"), indent=0)
    uniq = len({s["name"] for s in sigs})
    print(f"built {len(sigs):,} signatures ({uniq:,} unique names) "
          f"from {m.source} [{m.build_tree}] -> {out}")


def _cmd_match(sigs_path, xbe, funcs, out, *flags):
    only_unnamed = "--only-unnamed" in flags
    db = json.load(open(sigs_path))
    named, ambig = match(db["sigs"], xbe, funcs, only_unnamed=only_unnamed)
    json.dump({f"0x{va:08X}": nm for va, nm in sorted(named.items())},
              open(out, "w"), indent=1)
    scope = "unnamed-only" if only_unnamed else "all"
    print(f"named {len(named):,} functions [{scope}] "
          f"({len(ambig):,} ambiguous) -> {out}")
    return named, ambig


def _cmd_selftest(module, xbe, funcs=None):
    sigs, m = build_sigs(module, xbe)
    uniq = len({s["name"] for s in sigs})
    print(f"[build] {len(sigs):,} sigs, {uniq:,} unique names from {m.source} [{m.build_tree}]")
    if not funcs:
        # synthesize a functions list straight from the symbol table (each
        # named guest function as (start,size)) to prove the matcher round-trips
        import tempfile
        fs = [{"start": f"0x{s.guest_start:08X}", "size": s.size} for s in m.symbols]
        tf = tempfile.NamedTemporaryFile("w", suffix=".json", delete=False)
        json.dump({"functions": fs}, tf); tf.close(); funcs = tf.name
    named, ambig = match(sigs, xbe, funcs)
    print(f"[match] {len(named):,} unambiguous, {len(ambig):,} ambiguous")
    # spot-check a few
    for va, nm in list(sorted(named.items()))[:6]:
        print(f"   0x{va:08X} {nm}")


def _cmd_merge(out, *inputs):
    """Union several signature DBs (from different source titles) into one.

    The library-function subset is what transfers across titles, so more source
    titles = more names recoverable in any target. Dedupes identical
    (name, size, pattern) entries.
    """
    seen = set()
    merged = []
    srcs = []
    for path in inputs:
        db = json.load(open(path))
        srcs.append(f"{db.get('source', '?')}[{db.get('build', '?')}]")
        for s in db["sigs"]:
            key = (s["name"], s["size"], s["pat"], s["mask"])
            if key not in seen:
                seen.add(key)
                merged.append(s)
    json.dump({"source": "+".join(srcs), "sigs": merged}, open(out, "w"), indent=0)
    print(f"merged {len(inputs)} DBs -> {len(merged):,} sigs "
          f"({len({s['name'] for s in merged}):,} unique names) -> {out}")


if __name__ == "__main__":
    cmd = sys.argv[1]
    if cmd == "build":
        _cmd_build(*sys.argv[2:5])
    elif cmd == "merge":
        _cmd_merge(*sys.argv[2:])
    elif cmd == "match":
        _cmd_match(*sys.argv[2:])
    elif cmd == "selftest":
        _cmd_selftest(*sys.argv[2:5])
    else:
        print(__doc__)
