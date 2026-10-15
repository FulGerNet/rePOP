"""pushal/popal save and restore all eight registers."""
from tools.recomp import config
from tools.recomp.translator import FunctionTranslator

BASE = 0x10000


def translate(hexcode):
    image = bytes.fromhex(hexcode)
    config._install([config.Section('.text', BASE, len(image), 0, len(image), True)],
                    entry_point=BASE, kernel_thunk_addr=BASE,
                    origin='pushal-test')
    db = {BASE: {'start': hex(BASE), 'end': BASE + len(image),
                 '_addr': BASE, 'size': len(image)}}
    return FunctionTranslator(image, db).translate_function(BASE, db[BASE])


def test_pushal_popal_round_trip():
    # Synthetic register preservation sequence.
    code = translate('60' '31f6' '61' 'c3')
    assert 'TODO' not in code, code
    push = code.index('/* pushal */')
    pop = code.index('/* popal */')
    assert push < pop, code
    # Pushed in hardware order, the pre-push esp in the fifth slot...
    assert 'PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); ' \
           'PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi);' in code, code
    # ...and popped in reverse with that slot skipped.
    assert 'POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; ' \
           'POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax);' in code, code


def test_actual_stack_slots_and_restoration():
    from tools.recomp.disasm import Instruction
    from tools.recomp.lifter import Lifter
    lifter = Lifter()
    push = ' '.join(lifter.lift_instruction(Instruction(0, 1, 'pushal', '', '60')))
    pop = ' '.join(lifter.lift_instruction(Instruction(1, 1, 'popal', '', '61')))
    source = '''#include <stdint.h>
uint32_t stack[64], eax=1, ecx=2, edx=3, ebx=4, ebp=5, esi=6, edi=7, esp=128;
#define PUSH32(sp,v) do { (sp)-=4; stack[(sp)/4]=(v); } while(0)
#define POP32(sp,v) do { (v)=stack[(sp)/4]; (sp)+=4; } while(0)
int main(void) {
''' + push + '''
    const uint32_t expected[8] = {7,6,5,128,4,3,2,1};
    for (unsigned i=0;i<8;i++) if(stack[24+i]!=expected[i]) return 1;
    stack[27]=0xDEADBEEF; /* POPAD must discard the saved ESP. */
    eax=ecx=edx=ebx=ebp=esi=edi=0;
''' + pop + '''
    return !(eax==1 && ecx==2 && edx==3 && ebx==4 && ebp==5 && esi==6 && edi==7 && esp==128);
}
'''
    ran = _build_and_run(source)
    assert ran.returncode == 0, ran.stdout + ran.stderr


def test_popal_preserves_a_preceding_comparison():
    code = translate('39c8 60 61 7401 c3 c3')
    assert 'CMP_EQ' in code

def _build_and_run(source):
    import shutil
    import subprocess
    import tempfile
    from pathlib import Path
    import pytest
    cc = shutil.which("cl") or shutil.which("clang") or shutil.which("gcc")
    if not cc:
        pytest.skip("C compiler unavailable")
    with tempfile.TemporaryDirectory(prefix="recomp-regression-") as tmp:
        c, exe = Path(tmp) / "fixture.c", Path(tmp) / "fixture.exe"
        c.write_text(source, encoding="utf-8")
        args = ([cc, "/nologo", "/W0", "/O2", str(c), "/Fe:" + str(exe)]
                if Path(cc).stem.lower() == "cl"
                else [cc, "-w", "-O2", str(c), "-o", str(exe)])
        built = subprocess.run(args, cwd=tmp, capture_output=True, text=True)
        assert built.returncode == 0, built.stdout + built.stderr + source
        return subprocess.run([str(exe)], cwd=tmp, capture_output=True, text=True)
