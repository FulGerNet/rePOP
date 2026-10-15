"""Lifter validation against Microsoft's recompile (idea 4).

Both Microsoft (Ficl/Fission) and this project lift the *same* guest x86-32
function. Microsoft's lift ships and runs the games, so it is a trusted oracle:
where our recompiled C diverges from what Microsoft's host code does, we very
likely have a lifter bug -- in exactly the classes we keep fixing (flags, x87,
SEH, stack).

Rather than run Ghidra's decompiler over Microsoft's flat jmp-connected arena
(messy, no clean function boundaries), we disassemble their host x86-64 with
capstone and rewrite it back into *guest terms* using their documented register
model (docs/technical/ms-fusion-recompiler.md §3):

    guest eax..ebp   = host eax..ebp        (same names)
    guest esp        = host r14d
    guest RAM base   = host r15
    [greg + r15 + d] = guest memory [greg + d]
    [r15 + d]        = guest global [d]

That reads directly as guest semantics, comparable to our C. The automated
signal is the set of guest memory field offsets each side touches and the set
of guest addresses each calls; a mismatch is a concrete divergence to inspect.

White-room: Microsoft's host bytes are read for analysis only -- nothing is
copied into the toolkit. The output is a diff describing *our* correctness.

    py -3 -m tools.fusion.lifter_diff ms   <module.dll> <name_or_0xaddr>
    py -3 -m tools.fusion.lifter_diff diff <module.dll> <gen_dir> <name_or_0xaddr>
"""
import glob
import os
import re
import sys

from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import (X86_OP_MEM, X86_REG_R15, X86_REG_R14D, X86_REG_R14,
                          X86_REG_RAX, X86_REG_RCX, X86_REG_RDX, X86_REG_RBX,
                          X86_REG_RSI, X86_REG_RDI, X86_REG_RBP)

from tools.fusion.module import FusionModule

_md = Cs(CS_ARCH_X86, CS_MODE_64)
_md.detail = True

# host reg id -> guest name. The 64-bit host regs used for *addressing* are the
# guest 32-bit registers (docs/technical/ms-fusion-recompiler.md §3): guest eax..
# ebp are host eax..ebp, guest esp is r14, guest RAM base is r15.
_GUEST = {
    X86_REG_R14D: "esp", X86_REG_R14: "esp",
    X86_REG_RAX: "eax", X86_REG_RCX: "ecx", X86_REG_RDX: "edx",
    X86_REG_RBX: "ebx", X86_REG_RSI: "esi", X86_REG_RDI: "edi",
    X86_REG_RBP: "ebp",
}


def _find(module, key):
    if key.lower().startswith("0x"):
        addr = int(key, 16)
        best = None
        for s in module.symbols:
            if s.guest_start <= addr < s.guest_start + s.size:
                best = s
                break
        return best or type("S", (), {"guest_start": addr, "size": 64, "name": key})()
    for s in module.symbols:
        if s.name == key:
            return s
    # allow suffix match (_SetEvent@4 vs SetEvent)
    for s in module.symbols:
        if key in s.name:
            return s
    return None


def _reg_name(insn, reg):
    if reg in _GUEST:
        return _GUEST[reg]
    return insn.reg_name(reg)


def _guest_mem(insn, op):
    """Render a host memory operand in guest terms; return (text, offset|None)."""
    m = op.mem
    base = m.base
    index = m.index
    disp = m.disp
    # find the r15 (RAM base) among base/index; the other is the guest pointer
    parts = []
    guest_off = None
    has_r15 = (base == X86_REG_R15) or (index == X86_REG_R15)
    greg = None
    if base and base != X86_REG_R15:
        greg = base
    elif index and index != X86_REG_R15:
        greg = index
    if has_r15:
        if greg is not None:
            parts.append(_reg_name(insn, greg))
            if disp:
                parts.append(f"{'+' if disp >= 0 else '-'}0x{abs(disp):x}")
            guest_off = disp
            return "[" + "".join(parts) + "]  ; guest mem", guest_off
        else:
            guest_off = disp
            return f"[0x{disp & 0xffffffff:x}]  ; guest global", guest_off
    # not a guest memory access (emulator scratch: rsp/r12/r13/rbx state blocks)
    txt = insn.op_str
    return txt, None


def ms_host_listing(module, guest_start, max_bytes=768):
    host = module.host_of(guest_start)
    if host is None:
        return None
    code = module.img[host:host + max_bytes]
    lines = []
    offsets = set()
    calls = set()
    for insn in _md.disasm(bytes(code), host):
        rendered = insn.op_str
        for op in insn.operands:
            if op.type == X86_OP_MEM:
                txt, off = _guest_mem(insn, op)
                if off is not None:
                    offsets.add(off & 0xffffffff)
                rendered = txt
                break
        # guest call = "mov [r14d+r15-4], <retaddr>; ...; jmp <callee host>"
        # and guest globals written as imm resume-EIPs; capture direct jmp target
        if insn.mnemonic == "jmp" and insn.operands and insn.operands[0].type != X86_OP_MEM:
            calls.add(insn.operands[0].imm)
        lines.append(f"  {insn.address:08x}: {insn.mnemonic:7} {rendered}")
        if insn.mnemonic in ("ret",) :
            break
        # stop at the terminating direct jmp that leaves this translation
        if insn.mnemonic == "jmp" and insn.operands[0].type != X86_OP_MEM:
            break
    return {"host": host, "lines": lines, "offsets": offsets, "calls": calls}


# ---- our recompiled C ----------------------------------------------------
def _find_our_c(gen_dir, guest_start):
    # match the function whose *start* (first addr in "Original: 0x<start> - ...")
    # equals guest_start -- not merely one whose range mentions the address.
    for path in glob.glob(os.path.join(gen_dir, "*.c")):
        txt = open(path, encoding="utf-8", errors="replace").read()
        for m in re.finditer(r"/\*\*(.*?)\*/\s*\nvoid\s+(\w+)\(void\)\s*\n\{",
                             txt, re.S):
            hm = re.search(r"Original:\s*0x([0-9A-Fa-f]+)\s*-", m.group(1))
            if not hm or int(hm.group(1), 16) != guest_start:
                continue
            depth, i = 1, m.end()
            while i < len(txt) and depth:
                if txt[i] == "{":
                    depth += 1
                elif txt[i] == "}":
                    depth -= 1
                i += 1
            return m.group(2), txt[m.start():i]
    return None, None


# ---- CLI -----------------------------------------------------------------
def cmd_ms(module_path, key):
    m = FusionModule(module_path)
    s = _find(m, key)
    if not s:
        print(f"no symbol matching {key}"); return
    r = ms_host_listing(m, s.guest_start)
    if not r:
        print(f"{s.name}: guest 0x{s.guest_start:X} not in address map"); return
    print(f"== MS host for {s.name}  guest 0x{s.guest_start:08X} -> host 0x{r['host']:X} ==")
    for ln in r["lines"]:
        print(ln)
    print(f"  guest offsets touched: {sorted(hex(o) for o in r['offsets'])}")


def cmd_diff(module_path, gen_dir, key):
    """Side-by-side: MS's lift (guest terms) and ours, for the same guest addr.

    NOTE: this is a *reference aid for manual reading*, not an automated oracle.
    A clean automated diff needs both sides to lift the identical guest bytes,
    which in turn needs Microsoft's exact source XBE. The BC package's XBE is a
    (subtly) different build from a retail-disc XBE -- e.g. Crimson's guest
    0x1C448A is a thunk in the disc build and an inlined body in Microsoft's --
    so an offset mismatch here can be a build difference, not a lifter bug. Read
    the two listings; do not trust a mechanical set-diff.
    """
    m = FusionModule(module_path)
    s = _find(m, key)
    if not s:
        print(f"no symbol matching {key}"); return
    ms = ms_host_listing(m, s.guest_start)
    cname, body = _find_our_c(gen_dir, s.guest_start)
    print(f"== {s.name}  guest 0x{s.guest_start:08X} (+{s.size}) "
          f"[reference aid -- builds may differ, read don't trust] ==")
    print("\n-- Microsoft's lift (host x86-64 in guest terms) --")
    if ms is None:
        print("   (guest addr not in address map)")
    else:
        for ln in ms["lines"]:
            print(ln)
    print("\n-- our recompiled C --")
    if body is None:
        print(f"   (no function at guest 0x{s.guest_start:08X} in {gen_dir})")
    else:
        print("   " + "\n   ".join(body.splitlines()))


if __name__ == "__main__":
    cmd = sys.argv[1]
    if cmd == "ms":
        cmd_ms(sys.argv[2], sys.argv[3])
    elif cmd == "diff":
        cmd_diff(sys.argv[2], sys.argv[3], sys.argv[4])
    else:
        print(__doc__)
