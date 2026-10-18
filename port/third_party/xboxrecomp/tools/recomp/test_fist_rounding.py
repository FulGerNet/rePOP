import unittest
from .disasm import Instruction, Operand
from .lifter import Lifter

class FistRoundingTest(unittest.TestCase):
    def test_guest_rounding_and_pop_for_each_integer_width(self):
        for size in (2, 4, 8):
            for mnemonic in ('fist', 'fistp'):
                with self.subTest(size=size, mnemonic=mnemonic):
                    instruction = Instruction(0, 3, mnemonic, '[esp]', '')
                    instruction.operands = [Operand(type='mem', mem_base='esp', mem_size=size)]
                    result = '\n'.join(Lifter().lift_instruction(instruction))
                    self.assertIn(f'recomp_fist(fp_top(), g_fp_control_word, {size*8})', result)
                    self.assertEqual('fp_pop()' in result, mnemonic == 'fistp')

if __name__ == '__main__':
    unittest.main()
