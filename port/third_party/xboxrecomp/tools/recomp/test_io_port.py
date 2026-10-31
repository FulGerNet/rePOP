"""RE-WW: byte TV field-pin input preserves registers and incoming flags."""
from pathlib import Path

from . import config
from .disasm import Disassembler
from .lifter import Lifter
from .translator import FunctionTranslator
import shutil
import subprocess
import tempfile
import unittest


def translate(image):
    base = 0x10000
    config._install([config.Section('.text', base, len(image), 0, len(image), True)],
                    entry_point=base, kernel_thunk_addr=base, origin='io-port-test')
    info = dict(start=hex(base), end=base + len(image), _addr=base, size=len(image))
    return FunctionTranslator(image, {base: info}).translate_function(base, info)


class IoPortTests(unittest.TestCase):
    def test_in_preserves_comparison_tracking(self):
        # CMP then IN mutating AL, followed by ZF and CF consumers.
        code = translate(bytes.fromhex('3d20000000ec0f94c30f92c1c3'))
        assert 'CMP_EQ(_fa, _fb)' in code
        assert 'CMP_B(_fa, _fb)' in code
        assert 'xbox_ReadPort8((uint16_t)edx, &_port_value)' in code
        assert 'RECOMP_UNIMPL("in al, dx", 0x00010005u)' in code


    def test_other_port_instruction_forms_still_report_unsupported(self):
        disassembler = Disassembler()
        for raw in ('ed', '66ed', 'e4c0', 'ee'):
            body = bytes.fromhex(raw)
            insn = disassembler.disassemble_function(body, 0x10000, 0x10000 + len(body))[0]
            lifter = Lifter()
            code = ' '.join(lifter.lift_instruction(insn))
            assert 'RECOMP_UNIMPL(' in code, code
            assert insn.mnemonic in lifter.unimplemented


    def test_runtime_toggle_unknown_port_and_lifted_register_flags(self):
        # Compile the production helper body plus an actual translated fixture.
        # The platform supplies its real interlocked operation, not a test model.
        runtime = Path(__file__).resolve().parents[2] / 'src/kernel/kernel_hal.c'
        helper = runtime.read_text().split('int xbox_ReadPort8(', 1)[1]
        helper = 'int xbox_ReadPort8(' + helper.split('\nuint64_t xbox_ReadTimeStampCounter(', 1)[0]
        fixture = translate(bytes.fromhex('3d20000000ec0f94c30f92c1c3'))
        source = r'''
    #include <stdint.h>
    #include <string.h>
    #include <windows.h>
    static uint32_t eax, ebx, ecx, edx, esp, g_recomp_eflags;
    static unsigned unsupported;
    static int bad_report;
    #define SET_LO8(v,x) ((v)=((v)&0xffffff00u)|(uint8_t)(x))
    #define CMP_EQ(a,b) ((uint32_t)(a)==(uint32_t)(b))
    #define CMP_B(a,b) ((uint32_t)(a)<(uint32_t)(b))
    static void report(const char *text,uint32_t va) {
        ++unsupported;
        if(strcmp(text,"in al, dx") || va!=0x10005u) bad_report=1;
    }
    #define RECOMP_UNIMPL(t,v) report(t,v)
    ''' + helper + fixture + r'''
    int main(void) {
        uint8_t untouched=0x5a;
        const uint32_t inputs[]={0x20u,0x20u,0x10u,0xaabbccddu};
        const uint32_t fields[]={0x20u,0u,0x20u,0u};
        for(unsigned i=0;i<4;++i) {
            eax=inputs[i]; ebx=0x112233ffu; ecx=0x445566ffu;
            edx=0xbeef80c0u; esp=1024; g_recomp_eflags=0x246u;
            sub_00010000();
            if(eax!=((inputs[i]&0xffffff00u)|fields[i])) return 1;
            if(ebx!=(0x11223300u|(inputs[i]==0x20u))) return 2;
            if(ecx!=(0x44556600u|(inputs[i]<0x20u))) return 3;
            if(edx!=0xbeef80c0u || esp!=1028 || g_recomp_eflags!=0x246u) return 4;
        }
        if(unsupported) return 5;
        if(xbox_ReadPort8(0x80c1u,&untouched) || untouched!=0x5au) return 6;
        eax=0xaabbccddu; edx=0x80c00000u; esp=1024;
        sub_00010000();
        if(eax!=0xaabbccddu || unsupported!=1 || bad_report) return 7;
        /* Unsupported reads must not advance the field sequence. */
        if(!xbox_ReadPort8(0x80c0u,&untouched) || untouched!=0x20u) return 8;
        return 0;
    }
    '''
        ran = _build_and_run(source)
        assert ran.returncode == 0, ran.stdout + ran.stderr


def _build_and_run(source):
    cc = shutil.which("cl") or shutil.which("clang") or shutil.which("gcc")
    if not cc:
        raise unittest.SkipTest("C compiler unavailable")
    with tempfile.TemporaryDirectory(prefix="recomp-io-port-") as tmp:
        c, exe = Path(tmp) / "fixture.c", Path(tmp) / "fixture.exe"
        c.write_text(source, encoding="utf-8")
        args = ([cc, "/nologo", "/W0", "/O2", str(c), "/Fe:" + str(exe)]
                if Path(cc).stem.lower() == "cl"
                else [cc, "-w", "-O2", str(c), "-o", str(exe)])
        built = subprocess.run(args, cwd=tmp, capture_output=True, text=True)
        assert built.returncode == 0, built.stdout + built.stderr
        return subprocess.run([str(exe)], cwd=tmp, capture_output=True, text=True)


if __name__ == "__main__":
    unittest.main()
