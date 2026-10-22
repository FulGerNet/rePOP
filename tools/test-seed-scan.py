"""Seed pointer admission uses image code bounds, never a title-sized mask."""
import importlib.util
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0,str(ROOT/'port/third_party/xboxrecomp'))
spec = importlib.util.spec_from_file_location('seed_scan',ROOT/'tools/seed-scan.py')
seed_scan = importlib.util.module_from_spec(spec)
spec.loader.exec_module(seed_scan)


class CodePointerTests(unittest.TestCase):
    def test_code_above_four_megabytes(self):
        self.assertTrue(seed_scan.is_code_pointer(0x00542664,[(0x005423e0,0x0054b2c4)]))
        self.assertTrue(seed_scan.is_code_pointer(0x00542ea2,[(0x005423e0,0x0054b2c4)]))

    def test_half_open_bounds(self):
        ranges=[(0x12000,0x13000),(0x5423e0,0x54b2c4)]
        self.assertTrue(seed_scan.is_code_pointer(0x12000,ranges))
        self.assertTrue(seed_scan.is_code_pointer(0x54b2c3,ranges))
        self.assertFalse(seed_scan.is_code_pointer(0x13000,ranges))
        self.assertFalse(seed_scan.is_code_pointer(0x54b2c4,ranges))

    def test_noncode_and_address_shaped_data_are_rejected(self):
        ranges=[(0x12000,0x13000),(0x5423e0,0x54b2c4)]
        for value in (0,0x10000,0x400000,0x58c800,0xffffffff):
            with self.subTest(value=hex(value)):
                self.assertFalse(seed_scan.is_code_pointer(value,ranges))
        self.assertFalse(seed_scan.is_code_pointer(0x542664,[]))

    def test_forward_switch_arm_cannot_split_saved_register_frame(self):
        # push esi; test eax,eax; je arm; xor eax,eax; pop esi; ret;
        # arm: mov eax,1; pop esi; ret. The arm follows RET and never jumps
        # backward, but consumes ESI saved by the common owner.
        code=bytes.fromhex('5685c0740431c05ec3b8010000005ec3')
        start=0x490000
        arm=start+9
        self.assertEqual(code[8],0xc3)
        self.assertFalse(seed_scan.static_entry_allowed(
            arm,[(start,start+len(code))],True))

    def test_existing_entry_and_padding_boundaries_remain_admissible(self):
        bounds=[(0x12000,0x12100)]
        self.assertTrue(seed_scan.static_entry_allowed(0x12000,bounds,True))
        self.assertTrue(seed_scan.static_entry_allowed(0x12100,bounds,True))
        self.assertFalse(seed_scan.static_entry_allowed(0x12100,bounds,False))

    def test_overlapping_owner_also_protects_interior(self):
        bounds=[(0x12000,0x12200),(0x12080,0x12090)]
        self.assertFalse(seed_scan.static_entry_allowed(0x12100,bounds,True))


if __name__=='__main__':
    unittest.main()
