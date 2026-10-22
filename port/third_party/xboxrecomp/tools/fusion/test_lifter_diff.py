"""The guest-term rewrite of Microsoft's host operands is the load-bearing logic:
[greg + r15 + disp] must read as guest [greg + disp], [r15 + disp] as a guest
global, and emulator-scratch accesses (rbx/r12/r13 state blocks) must NOT be
reported as guest memory."""
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_MEM

from tools.fusion import lifter_diff

_md = Cs(CS_ARCH_X86, CS_MODE_64)
_md.detail = True


def _one(code):
    insn = next(_md.disasm(code, 0x1000))
    for op in insn.operands:
        if op.type == X86_OP_MEM:
            return lifter_diff._guest_mem(insn, op)
    return insn.op_str, None


def test_guest_field_access():
    # mov ebp, [rsi + r15 + 0x18]  -> guest [esi+0x18], offset 0x18
    txt, off = _one(b"\x42\x8B\x6C\x3E\x18")
    assert off == 0x18 and "guest mem" in txt and "esi" in txt


def test_guest_global_access():
    # mov ebp, [r15 + 0x32dd8c]  -> guest global, offset 0x32dd8c
    txt, off = _one(b"\x41\x8B\xAF\x8C\xDD\x32\x00")
    assert off == 0x32dd8c and "guest global" in txt


def test_emulator_scratch_not_guest():
    # movzx ecx, byte [r12 - 0x3c]  -> emulator state block, NOT guest memory
    txt, off = _one(b"\x41\x0F\xB6\x4C\x24\xC4")
    assert off is None


if __name__ == "__main__":
    for k, v in sorted(globals().items()):
        if k.startswith("test_"):
            v(); print("ok", k)
