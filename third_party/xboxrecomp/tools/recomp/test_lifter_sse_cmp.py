"""SSE compares: every predicate, packed and scalar.

cmpltss used to lift to RECOMP_UNIMPL and leave its destination alone.
RenderWare's frustum build normalises each side plane with
`cmpltss mask, len2; rsqrtss; andps mask`, so the mask stayed zero and every
side plane came out (0,0,0,0) -- Burnout 3's race view culled its world."""
import unittest

from .disasm import BasicBlock, Instruction, Operand
from .lifter import Lifter, lift_basic_block


def _xmm(n):
    return Operand(type="reg", reg="xmm%d" % n)


def _lift(mnemonic, ops, op_str):
    insn = Instruction(0, 4, mnemonic, op_str, "")
    insn.operands = ops
    return "\n".join(lift_basic_block(
        Lifter(), BasicBlock(start=0, instructions=[insn]))[0])


class SseCompareTest(unittest.TestCase):
    def test_cmpltss_writes_a_lane0_mask(self):
        out = _lift("cmpltss", [_xmm(7), _xmm(6)], "xmm7, xmm6")
        self.assertIn("xmm7.u[0] = recomp_cmp_pred(xmm7.f[0], xmm6.f[0], 1)", out)
        self.assertNotIn("RECOMP_UNIMPL", out)

    def test_immediate_form_takes_its_predicate(self):
        imm = Operand(type="imm", imm=6)
        out = _lift("cmpss", [_xmm(1), _xmm(2), imm], "xmm1, xmm2, 6")
        self.assertIn("recomp_cmp_pred(xmm1.f[0], xmm2.f[0], 6)", out)

    def test_packed_negated_forms_are_lifted(self):
        out = _lift("cmpnleps", [_xmm(0), _xmm(3)], "xmm0, xmm3")
        self.assertIn("xmm0 = XMM_CMP_PRED(xmm0, xmm3, 6);", out)

    def test_rsqrtps_does_all_four_lanes(self):
        out = _lift("rsqrtps", [_xmm(0), _xmm(1)], "xmm0, xmm1")
        self.assertIn("xmm0 = XMM_RSQRT(xmm0, xmm1);", out)


if __name__ == "__main__":
    unittest.main()


class BareStringCompareTest(unittest.TestCase):
    """A bare `cmpsd` is one element of `repe cmpsd`: compare, advance
    esi/edi, set the flags, leave ecx alone. It was RECOMP_UNIMPL."""

    def test_bare_cmpsd_compares_once_and_keeps_ecx(self):
        mem = Operand(type="mem", mem_base="esi", mem_index=None, mem_scale=1,
                      mem_disp=0, mem_size=4)
        insn = Instruction(0, 1, "cmpsd", "dword ptr [esi], dword ptr es:[edi]", "a7")
        insn.operands = [mem, mem]
        jne = Instruction(1, 2, "jne", "0x10", "7500")
        jne.operands = [Operand(type="imm", imm=0x10)]
        out = "\n".join(lift_basic_block(
            Lifter(), BasicBlock(start=0, instructions=[insn, jne]))[0])
        self.assertIn("uint32_t _rc = ecx; ecx = 1;", out)
        self.assertIn("_flags = (MEM32(esi) == MEM32(edi));", out)
        self.assertIn("ecx = _rc;", out)
        self.assertNotIn("RECOMP_UNIMPL", out)
