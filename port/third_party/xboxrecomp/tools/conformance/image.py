"""Read a linked PE: its sections, and where the linker put each function.

Working from a *linked* image rather than a .obj is what makes relocations a
non-issue -- the linker has already filled in every address, so a jump table, a
float constant in .rdata and a call to a CRT helper are all just numbers by the
time we see them. That is also the shape a real XBE arrives in.
"""

import re
import struct
from collections import namedtuple

Section = namedtuple("Section", "name va vsize raw_off raw_size is_code")
Symbol = namedtuple("Symbol", "name va")

# " 0001:00000020       _t_mul64                   30001020 f   t.obj"
# The trailing "f" marks a function; data publics have no flag.
_MAP_SYM = re.compile(
    r"^\s+[0-9a-fA-F]{4}:[0-9a-fA-F]{8}\s+(\S+)\s+([0-9a-fA-F]{8})\s+f\s")
_MAP_BASE = re.compile(r"Preferred load address is ([0-9a-fA-F]+)")

_IMAGE_SCN_CNT_CODE = 0x00000020
_IMAGE_SCN_MEM_EXECUTE = 0x20000000


def parse_map(text):
    """(image_base, [Symbol...]) sorted by address, functions only."""
    base = _MAP_BASE.search(text)
    if not base:
        raise RuntimeError("map file has no preferred load address")
    syms = {}
    for line in text.replace(chr(13), "").splitlines():
        m = _MAP_SYM.match(line)
        if m:
            # A symbol can appear twice (the export thunk and the real body);
            # the first address the map lists for a name is the definition.
            syms.setdefault(m.group(1), int(m.group(2), 16))
    return int(base.group(1), 16), sorted(
        (Symbol(n, v) for n, v in syms.items()), key=lambda s: s.va)


def parse_pe(data):
    """(image_base, [Section...]) from a PE32 file."""
    if data[:2] != b"MZ":
        raise RuntimeError("not a PE file")
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    if data[pe:pe + 4] != b"PE\0\0":
        raise RuntimeError("bad PE signature")
    nsections, = struct.unpack_from("<H", data, pe + 6)
    opt_size, = struct.unpack_from("<H", data, pe + 20)
    magic, = struct.unpack_from("<H", data, pe + 24)
    if magic != 0x10B:
        raise RuntimeError("expected a 32-bit PE")
    image_base, = struct.unpack_from("<I", data, pe + 24 + 28)
    table = pe + 24 + opt_size
    sections = []
    for i in range(nsections):
        off = table + i * 40
        name = data[off:off + 8].rstrip(b"\0").decode("ascii", "replace")
        vsize, va, raw_size, raw_off = struct.unpack_from("<IIII", data, off + 8)
        flags, = struct.unpack_from("<I", data, off + 36)
        sections.append(Section(
            name, image_base + va, max(vsize, raw_size), raw_off, raw_size,
            bool(flags & (_IMAGE_SCN_CNT_CODE | _IMAGE_SCN_MEM_EXECUTE))))
    return image_base, sections


def function_extent(symbols, sections, name):
    """Where a function starts and ends.

    The map gives starts only, so the end is the next symbol along -- minus the
    int3 padding MSVC puts between functions, which would otherwise be decoded
    as part of the body and can turn into a bogus fall-through.
    """
    idx = next((i for i, s in enumerate(symbols) if s.name == name), None)
    if idx is None:
        raise KeyError(name)
    start = symbols[idx].va
    sec = next((s for s in sections
                if s.va <= start < s.va + s.vsize), None)
    if sec is None:
        raise RuntimeError(f"{name}: address {start:#x} is in no section")
    end = sec.va + sec.vsize
    if idx + 1 < len(symbols) and symbols[idx + 1].va > start:
        end = min(end, symbols[idx + 1].va)
    return start, end, sec


def section_bytes(data, sec, start, end):
    lo = sec.raw_off + (start - sec.va)
    hi = sec.raw_off + (end - sec.va)
    return data[lo:min(hi, sec.raw_off + sec.raw_size)]


def trim_padding(code):
    """Drop the int3 / nop run a linker leaves between functions."""
    while code and code[-1] in (0xCC, 0x90):
        code = code[:-1]
    return code
