"""Regression: a cold resource-lookup path must retain its saved-register frame."""
import importlib.util
import sys
import unittest
from pathlib import Path
from types import SimpleNamespace

ROOT = Path(__file__).resolve().parents[2]
# seed-scan.py imports the lifter's modules; the retail copy is where seeds
# are being worked on (each target has its own copy).
sys.path.insert(0, str(ROOT / "port/third_party/xboxrecomp-retail"))
spec = importlib.util.spec_from_file_location("seed_scan", ROOT / "tools/seed-scan.py")
scan = importlib.util.module_from_spec(spec)
spec.loader.exec_module(scan)


def instruction(address, *, target=None, ret=False, jump=False):
    return SimpleNamespace(address=address, end_address=address + 1,
                           jump_target=target, is_branch=target is not None,
                           is_jump=jump, is_ret=ret)


class SeedOwnershipTests(unittest.TestCase):
    def test_retail_lookup_cold_path_rejoins_saved_register_epilogue(self):
        cold, epilogue = 0xE0006, 0xDFFEE
        insns = {
            cold: instruction(cold, target=cold + 2),
            cold + 1: instruction(cold + 1, target=epilogue, jump=True),
            cold + 2: instruction(cold + 2, ret=True),
        }
        assert scan.shares_enclosing_frame(cold, 0xDFF90, 0xE0030, insns,
                                          {cold: [0xDFFB9]})


    def test_adjacent_pointer_only_function_keeps_its_own_return(self):
        cold = 0xE0006
        insns = {cold: instruction(cold), cold + 1: instruction(cold + 1, ret=True)}
        assert not scan.shares_enclosing_frame(cold, 0xDFF90, 0xE0030, insns,
                                              {cold: [0xDFFB9]})


    def test_backwards_tail_call_without_entry_branch_is_not_a_cold_path(self):
        cold = 0xE0006
        insns = {cold: instruction(cold, target=0xDFF90, jump=True)}
        assert not scan.shares_enclosing_frame(cold, 0xDFF90, 0xE0030, insns, {})
