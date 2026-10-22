"""`void sub_XXXXXXXX_enter(void)` in the manual file is an entry hook: found by
the scan, and neither an override nor a reference that pins a name."""
import os
import tempfile

from tools.recomp.manual_scan import scan


def entry_hooks(path):
    from tools.recomp import manual_scan
    return manual_scan.entry_hooks(path)

SRC = """
void sub_00010010_enter(void)
{
}
#if 0
void sub_00010020_enter(void) { }
#endif
void sub_00010030(void) { }
"""


def _write(text):
    d = tempfile.mkdtemp()
    p = os.path.join(d, "recomp_manual.c")
    with open(p, "w", encoding="utf-8") as f:
        f.write(text)
    return p


def test_hook_is_found_and_disabled_ones_are_not():
    assert entry_hooks(_write(SRC)) == {0x00010010}


def test_hook_is_not_an_override():
    skip, wrap, referenced = scan(_write(SRC))
    assert skip == {0x00010030}
    assert not wrap
    assert 0x00010010 not in referenced


def test_hook_start_is_protected_before_boundary_repair():
    from tools.recomp.__main__ import _load_manual_protection
    protected, (skip, wrap, referenced) = _load_manual_protection(None, _write(SRC))
    assert 0x00010010 in protected
    assert 0x00010010 not in skip | wrap | referenced


def test_generated_hook_precedes_first_instruction(monkeypatch):
    from tools.recomp import config, translator
    base = 0x10000
    image = bytes.fromhex('b8 78 56 34 12 c3')
    config._install([config.Section('.text', base, len(image), 0, len(image), True)],
                    entry_point=base, kernel_thunk_addr=base, origin='hook-test')
    monkeypatch.setattr(translator, 'ENTRY_HOOKS', {base})
    db = {base: {'end': base + len(image), 'size': len(image)}}
    code = translator.FunctionTranslator(image, db).translate_function(base, db[base])
    assert code.count('sub_00010000_enter();') == 1
    assert code.index('sub_00010000_enter();') < code.index('eax = 0x12345678;')

def test_cli_clears_hooks_on_a_following_invocation(monkeypatch, tmp_path):
    import pytest
    from tools.recomp import __main__ as cli, translator
    manual = tmp_path / "manual.c"
    manual.write_text("void sub_00010010_enter(void) {}", encoding="utf-8")
    def stop_before_loading(**kwargs):
        raise RuntimeError("stop before binary loading")
    monkeypatch.setattr(cli, "find_data_files", stop_before_loading)
    monkeypatch.setattr(translator, "ENTRY_HOOKS", set(), raising=False)
    monkeypatch.setattr(cli.sys, "argv", ["recomp", "synthetic.xbe", "--exclude-manual", str(manual)])
    with pytest.raises(RuntimeError, match="stop before binary"):
        cli.main()
    assert translator.ENTRY_HOOKS == {0x10010}
    monkeypatch.setattr(cli.sys, "argv", ["recomp", "synthetic.xbe"])
    with pytest.raises(RuntimeError, match="stop before binary"):
        cli.main()
    assert translator.ENTRY_HOOKS == set()


def test_direct_and_indirect_entries_execute_hook_before_body(monkeypatch, tmp_path):
    import shutil
    import subprocess
    from pathlib import Path
    import pytest
    from tools.recomp import config, translator
    cc = shutil.which("cl") or shutil.which("clang") or shutil.which("gcc")
    if not cc:
        pytest.skip("C compiler unavailable")
    base = 0x10000
    image = bytes.fromhex('b8 78 56 34 12 c3')
    config._install([config.Section('.text', base, len(image), 0, len(image), True)],
                    entry_point=base, kernel_thunk_addr=base, origin='hook-test')
    monkeypatch.setattr(translator, 'ENTRY_HOOKS', {base}, raising=False)
    db = {base: {'end': base + len(image), 'size': len(image)}}
    body = translator.FunctionTranslator(image, db).translate_function(base, db[base])
    source = '''#include <stdint.h>
uint32_t eax, esp;
int hits, wrong_order;
void sub_00010000_enter(void) { hits++; if(eax!=7) wrong_order++; }
''' + body + '''
int main(void) {
    eax=7; esp=100; sub_00010000();
    if(hits!=1 || wrong_order || eax!=0x12345678u || esp!=104) return 1;
    void (*entry)(void)=sub_00010000;
    eax=7; esp=100; entry();
    return !(hits==2 && !wrong_order && eax==0x12345678u && esp==104);
}
'''
    c, exe = tmp_path / 'fixture.c', tmp_path / 'fixture.exe'
    c.write_text(source, encoding='utf-8')
    args = ([cc, '/nologo', '/W0', '/O2', str(c), '/Fe:' + str(exe)]
            if Path(cc).stem.lower() == 'cl'
            else [cc, '-w', '-O2', str(c), '-o', str(exe)])
    built = subprocess.run(args, cwd=tmp_path, capture_output=True, text=True)
    assert built.returncode == 0, built.stdout + built.stderr
    ran = subprocess.run([str(exe)], capture_output=True, text=True)
    assert ran.returncode == 0, ran.stdout + ran.stderr
