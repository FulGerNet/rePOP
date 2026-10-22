import unittest

from .disasm import Instruction, Operand
from .translator import FunctionTranslator


def _insn(mnemonic, op_str, operands):
    instruction = Instruction(0, 4, mnemonic, op_str, "")
    instruction.operands = operands
    return instruction


class XmmIsGlobalStateTest(unittest.TestCase):
    """XMM is architectural state, like the GPRs and the x87 stack.

    The lifter splits one guest routine into several C functions, so a value
    produced in one block and read in the next is lost if XMM lives on the C
    stack. A function-local declaration also shadows the runtime's global
    register file, which is worse than merely losing the value: the local
    starts zeroed, so a returned float silently reads as 0.0 instead of
    keeping whatever the previous block computed.
    """

    def _declarations(self, instructions):
        translator = FunctionTranslator.__new__(FunctionTranslator)
        used = translator._find_used_xmm(instructions)
        self.assertTrue(used, "expected the scan to see an XMM register")
        return used

    def test_scan_still_reports_xmm_use(self):
        used = self._declarations([
            _insn("movaps", "xmm0, xmmword ptr [eax]",
                  [Operand(type="reg", reg="xmm0"),
                   Operand(type="mem", mem_base="eax", mem_disp=0,
                           mem_size=16)]),
        ])

        self.assertIn("xmm0", used)


if __name__ == "__main__":
    unittest.main()
