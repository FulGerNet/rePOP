"""Classify decoded caller cleanup and execute failed/guarded stack behavior."""
import pytest
from tools.recomp import config
from tools.recomp.translator import FunctionTranslator
from tools.recomp.test_icall_guarded_runtime import _macro, HARNESS, A, B

BASE = 0x10000
BODY = '6a01 6a02 ffd0 83c408 c3'


def translate(body=BODY, guarded=False):
    image = bytes.fromhex(body)
    config._install([config.Section('.text', BASE, 0x2000, 0, len(image), True)],
                    entry_point=BASE, kernel_thunk_addr=BASE, origin='cleanup-test')
    db = {BASE: {'end': BASE + len(image), 'size': len(image)},
          A: {'end': A+1, 'size': 1, 'name': 'sub_A'},
          B: {'end': B+1, 'size': 1, 'name': 'sub_B'}}
    return FunctionTranslator(image, db, icall_sites={BASE+4: [A, B]} if guarded else {}).translate_function(BASE, db[BASE])


@pytest.mark.parametrize('guarded', [False, True])
def test_actual_add_snapshots_do_not_hide_cleanup(guarded):
    code = translate(guarded=guarded)
    assert '/* add source, before the write */' in code
    assert 'RECOMP_ICALL_SAFE_AT_CC(_icall_target' in code
    assert '_icall_esp = g_esp' in code
    assert code.count('{') == code.count('}')


@pytest.mark.parametrize('body', ['ffd0 31c9 83c408 c3', 'ffd0 c20400', 'ffd0 eb00 83c408 c3'])
def test_non_immediate_cleanup_is_not_assumed(body):
    code = translate(body)
    assert 'RECOMP_ICALL_SAFE_AT(' in code
    assert 'RECOMP_ICALL_SAFE_AT_CC(' not in code


@pytest.mark.parametrize('guarded', [False, True])
def test_actual_translated_call_restores_stack_for_every_target(guarded):
    source = HARNESS.split('IS_CODE')[0]
    source += _macro('RECOMP_ICALL_IS_CODE') + '\n'
    source += _macro('RECOMP_ICALL_SAFE_AT_CC') + '\n'
    source += translate(guarded=guarded)
    source += '''
int main(void) {
    const uint32_t targets[] = {0x11000, 0x11100, 0x11200, 0x11300, 0xF00000};
    for(unsigned i=0;i<5;i++) {
        g_esp=0x1000; eax=targets[i];
        hits=misses=lookups=fails=called_a=called_b=called_c=0;
        sub_00010000();
        if(g_esp!=0x1004) return 1;
        if(i<3 && called_a+called_b+called_c!=1) return 2;
        if(i>=3 && fails!=1) return 3;
        if(GUARDED && i<2 && (hits!=1 || lookups!=0)) return 4;
        if(GUARDED && i>=2 && misses!=1) return 5;
    }
    return 0;
}
'''.replace('GUARDED', str(int(guarded)))
    ran = _build_and_run(source)
    assert ran.returncode == 0, ran.stdout + ran.stderr


@pytest.mark.parametrize('macro', ['RECOMP_ICALL_SAFE_CC', 'RECOMP_ICALL_SAFE_AT_CC'])
def test_both_runtime_macros_preserve_caller_arguments(macro):
    source = HARNESS.split('IS_CODE')[0] + _macro('RECOMP_ICALL_IS_CODE') + '\n' + _macro(macro)
    call = (macro + '(targets[i], 0x1000u' +
            (', 0x10004u' if macro.endswith('_AT_CC') else '') + ');')
    source += '''
int main(void) {
    const uint32_t targets[] = {0x11000, 0x11100, 0x11200, 0x11300, 0xF00000};
    for(unsigned i=0;i<5;i++) {
        g_esp=0x1000;
        PUSH32(esp, 1); PUSH32(esp, 2); PUSH32(esp, 0x10006);
        ''' + call + '''
        if(g_esp!=0xFF8) return 1; /* arguments remain for caller cleanup */
        g_esp+=8;
        if(g_esp!=0x1000) return 2;
    }
    return 0;
}
'''
    ran = _build_and_run(source)
    assert ran.returncode == 0, ran.stdout + ran.stderr

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
