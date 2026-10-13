"""Disassemble a range of a target's XBE by virtual address.

    python tools/xbe-dis.py 0x2BEA00 0x60            # Assets/xbox-demo/default.xbe
    python tools/xbe-dis.py 0x335753 0x40 xbox-retail
    python tools/xbe-dis.py 0x2BEA00 0x60 path/to/default.xbe

The per-section listings written by xboxrecomp's disassembler overwrite each
other when section names repeat (the demo has four BINKYUY2 sections), so this
reads the XBE section table directly.
"""
import struct
import sys
from pathlib import Path

import capstone

ROOT = Path(__file__).resolve().parent.parent


def sections(data):
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, headers = struct.unpack_from("<II", data, 0x11C)
    for i in range(count):
        flags, va, vsize, raw, rsize = struct.unpack_from("<5I", data, headers - base + i * 56)
        yield va, vsize, raw, rsize


def read(data, va, size):
    for sva, vsize, raw, rsize in sections(data):
        if sva <= va < sva + vsize:
            off = va - sva
            chunk = data[raw + off:raw + min(off + size, rsize)]
            return chunk + b"\0" * (size - len(chunk))
    raise SystemExit("address 0x%08X is not in any section" % va)


def main():
    va = int(sys.argv[1], 16)
    size = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x80
    which = sys.argv[3] if len(sys.argv) > 3 else "xbox-demo"
    path = ROOT / "Assets" / which / "default.xbe"
    if not path.exists():
        path = Path(which)
    data = path.read_bytes()
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    for insn in md.disasm(read(data, va, size), va):
        print("%08X  %-20s %s %s" % (insn.address, insn.bytes.hex(), insn.mnemonic, insn.op_str))


if __name__ == "__main__":
    main()
