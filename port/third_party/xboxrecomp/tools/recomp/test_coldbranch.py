"""Cold continuations use synthetic x86 only; preserve genuine funclets."""
import copy
import unittest
from unittest.mock import patch
from . import config
from .translator import FunctionTranslator
from .test_io_port import _build_and_run

BASE = 0x10000
COLD, BACK, FUNCLET, EPILOGUE, END = [BASE+x for x in (0x28,0x20,0x10,0x38,0x3d)]


def function(start, end, **extra):
    return dict(_addr=start, start=hex(start), end=end, size=end-start,
                section=".text", **extra)


def synthetic(cold=None, existing=False, owner=True):
    body = bytearray(b"\xcc" * 0x100)
    # sub esp,32; push esi; test eax,eax; je cold; normal epilogue.
    body[:13] = bytes.fromhex("83ec205685c074205e83c420c3")
    body[0x10:0x15] = bytes.fromhex("8d4dfceb23")  # genuine funclet
    body[0x20:0x25] = bytes.fromhex("83c8ffeb13")  # or eax,-1; jmp epilogue
    # cmp ecx,0; je backward; mov eax,1; jmp epilogue
    body[0x28:0x34] = cold or bytes.fromhex("83f90074f3b801000000eb04")
    body[0x38:0x3d] = bytes.fromhex("5e83c420c3")
    db = {BASE: function(BASE,BASE+13), EPILOGUE: function(EPILOGUE,END)}
    if owner:
        db[FUNCLET] = function(FUNCLET,END,detection_method="seed_vtable_thunk",
                               has_prologue=True,external_entry=True)
    if existing:
        db[COLD] = function(COLD,END,detection_method="call_target")
    return FunctionTranslator(bytes(body),db,seh_prolog=0,seh_epilog=0)


class ColdBranchTests(unittest.TestCase):
    def setUp(self):
        layout = patch.object(config,"_SECTIONS",[
            config.Section(".text",BASE,0x100,0,0x100,True)])
        layout.start()
        self.addCleanup(layout.stop)

    def test_backward_dependency_preserves_funclet_and_stack(self):
        subject = synthetic()
        before = copy.deepcopy(subject.func_db)
        entries = subject.discover_conditional_branch_entries()
        self.assertEqual(entries,{BACK,COLD})
        for start,info in before.items():
            self.assertEqual(subject.func_db[start],info)
        self.assertFalse(subject.owned_function_starts)
        self.assertFalse(subject.coalesced_function_starts)
        self.assertEqual(subject.discover_conditional_branch_entries(),entries)
        cold = subject.translate_function(COLD,subject.func_db[COLD])
        back = subject.translate_function(BACK,subject.func_db[BACK])
        self.assertIn("sub_00010020(); return;",cold)
        for code in (cold,back):
            self.assertIn("POP32(esp, esi);",code)
            self.assertIn("esp = esp + 0x20;",code)
            self.assertIn("esp += 4; return;",code)
        # Walk the recovered backward CFG and its actual instruction stack
        # effects. The C assertions above ensure the epilogue is also lifted.
        instructions = {i.address:i for i in subject._recovered_cfg[BACK]["instructions"]}
        pc,esp = BACK,0x1000-0x24
        while True:
            insn = instructions[pc]
            if insn.mnemonic == "pop": esp += 4
            elif insn.mnemonic == "add" and insn.operands[0].reg == "esp":
                esp += insn.operands[1].imm
            elif insn.is_ret:
                esp += 4
                break
            pc = insn.jump_target if insn.is_jump else insn.end_address
        self.assertEqual(esp,0x1004)

    def test_existing_entry_is_never_replaced(self):
        subject = synthetic(existing=True)
        before = copy.deepcopy(subject.func_db)
        self.assertNotIn(COLD,subject.discover_conditional_branch_entries())
        for start,info in before.items():
            self.assertEqual(subject.func_db[start],info)

    def test_sse_comparison_recovers_cold_epilogue(self):
        # RE-WW: COMISS/UCOMISS replace incoming flags before the cold Jcc.
        # The old integer-only first-writer rule stranded this stack frame.
        for compare in ('0f2fc1', '0f2ec1', '660f2fc1', '660f2ec1'):
            with self.subTest(compare=compare):
                subject = synthetic()
                raw = bytes.fromhex(compare)
                # Build the same known owner using a fresh synthetic image.
                body = bytearray(b'\xcc' * 0x100)
                body[:13] = bytes.fromhex('83ec205685c074205e83c420c3')
                body[0x10:0x15] = bytes.fromhex('8d4dfceb23')
                body[0x20:0x25] = bytes.fromhex('83c8ffeb13')
                branch_end = COLD + len(raw) + 2
                code = raw + bytes((0x74, (BACK - branch_end) & 255))
                code += bytes.fromhex('b801000000')
                code += bytes((0xeb, (EPILOGUE - (COLD + len(code) + 2)) & 255))
                body[0x28:0x28+len(code)] = code
                body[0x38:0x3d] = bytes.fromhex('5e83c420c3')
                subject = FunctionTranslator(bytes(body), subject.func_db,
                                             seh_prolog=0, seh_epilog=0)
                self.assertEqual(subject.discover_conditional_branch_entries(), {BACK, COLD})
                generated = subject.translate_function(COLD, subject.func_db[COLD])
                self.assertIn('_fca = xmm0.', generated)
                self.assertIn('sub_00010020(); return;', generated)
                back = subject.translate_function(BACK, subject.func_db[BACK])
                fixture = r'''
#include <stdint.h>
#include <math.h>
typedef union { float f[4]; double d[2]; } Xmm;
static Xmm xmm0, xmm1;
static uint32_t eax, esi, esp, g_ebp, g_seh_ebp, memory[2048];
#define MEM32(a) memory[(a)/4]
#define POP32(s,d) do { (d)=MEM32(s); (s)+=4; } while(0)
''' + back + generated + r'''
int main(void) {
    const double inputs[]={0.0,1.0,-1.0,NAN};
    for(unsigned i=0;i<4;++i) {
        esp=0x1000-0x24; MEM32(esp)=0x12345678u; esi=0;
        xmm0.f[0]=(float)inputs[i]; xmm1.f[0]=0.0f;
        if (sizeof(COMPARE_KIND)>4) { xmm0.d[0]=inputs[i]; xmm1.d[0]=0.0; }
        sub_00010028();
        if(esp!=0x1004 || esi!=0x12345678u) return 1;
        if(eax!=((i==0 || i==3) ? 0xffffffffu : 1u)) return 2;
    }
    return 0;
}
'''
                # Prefix 66 selects COMISD/UCOMISD; both snapshot precisions
                # must restore the frame for equal and unordered inputs.
                fixture = fixture.replace('sizeof(COMPARE_KIND)>4',
                                          '1' if compare.startswith('66') else '0')
                ran = _build_and_run(fixture)
                self.assertEqual(ran.returncode, 0, ran.stdout + ran.stderr)

    def test_unowned_gap_is_not_recovered(self):
        subject = synthetic(owner=False)
        self.assertEqual(subject.discover_conditional_branch_entries(),set())
        self.assertNotIn(COLD,subject.func_db)

    def test_inherited_flags_consumer_is_rejected(self):
        subject = synthetic(cold=bytes.fromhex("74f69090909090909090eb04"))
        subject.discover_conditional_branch_entries()
        self.assertNotIn(COLD,subject.func_db)

    def test_entry_jump_does_not_hide_flags_consumer(self):
        subject = synthetic(cold=bytes.fromhex("eb0074f4909090909090eb04"))
        subject.discover_conditional_branch_entries()
        self.assertNotIn(COLD,subject.func_db)


if __name__ == "__main__":
    unittest.main()
