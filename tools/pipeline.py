"""Hash-bound XboxRecomp pipeline, inherited from reSOT. No SoT seeds/hooks."""
import argparse
import hashlib
import os
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
KIT = ROOT / 'port/third_party/xboxrecomp'
OUT = ROOT / 'research/xbox-retail/recomp'
SRC = ROOT / 'source/xbox-retail'
XBE = ROOT / 'Assets/xbox-retail/default.xbe'
HASH = '8747A4104EB359DC76C410770FA2F3F64B547077A26E8EA308B2BCCFC964599C'

def run(*args, cwd=ROOT):
    print('Running:', *map(str, args), flush=True)
    env = {k.upper(): v for k, v in os.environ.items()}
    subprocess.run(list(map(str, args)), cwd=cwd, env=env, check=True)

def tool(module, *args):
    run(sys.executable, '-m', 'tools.' + module, *args, cwd=KIT)

def main():
    p = argparse.ArgumentParser()
    for flag in ('build-only', 'skip-analysis', 'seeds', 'abi-check', 'generate-only', 'analyze-only'):
        p.add_argument('--' + flag, action='store_true')
    p.add_argument('--split', type=int, default=250)
    p.add_argument('--jobs', type=int, default=4)
    p.add_argument('--generator', default='Visual Studio 18 2026')
    p.add_argument('--trace-functions', type=Path, help='Diagnostic list of guest functions to trace')
    a = p.parse_args()
    if hashlib.sha256(XBE.read_bytes()).hexdigest().upper() != HASH:
        raise SystemExit('Unsupported WW XBE; expected SHA-256 ' + HASH)
    OUT.mkdir(parents=True, exist_ok=True)
    analysis = OUT / 'analysis.json'
    disasm = ['disasm', XBE, '-o', OUT / 'disasm', '--analysis-json', analysis, '--force']
    if not a.build_only:
        if not a.skip_analysis or a.seeds:
            tool('xbe_parser', XBE, '--json', analysis)
            if a.seeds:
                tool(*disasm)
                run(sys.executable, ROOT/'tools/seed-scan.py', XBE, '--analysis-json', analysis,
                    '--functions', OUT/'disasm/functions.json', '--seeds', SRC/'seed_functions.json', cwd=KIT)
            if (SRC/'seed_functions.json').exists():
                disasm += ['--seed-functions', SRC/'seed_functions.json']
            tool(*disasm)
            tool('func_id', XBE, '--functions', OUT/'disasm/functions.json', '--strings', OUT/'disasm/strings.json',
                 '--xrefs', OUT/'disasm/xrefs.json', '-o', OUT/'func_id')
            tool('abi_analysis', XBE, '--disasm-dir', OUT/'disasm', '--func-id-dir', OUT/'func_id', '--output-dir', OUT/'abi')
        if a.analyze_only:
            return
        sort_args = [sys.executable, ROOT/'tools/sort-functions.py', XBE, '--recomp', OUT, '-o', OUT/'folders.json']
        reference = ROOT.parent/'reSOT'
        if (reference/'research/xbox-retail/recomp/disasm/functions.json').exists():
            sort_args += ['--match', reference/'Assets/xbox-retail/default.xbe', reference/'research/xbox-retail/recomp']
        folder_inputs = [ROOT/'tools/sort-functions.py', OUT/'disasm/functions.json', OUT/'disasm/strings.json']
        if len(sort_args)>8:
            folder_inputs.append(reference/'research/xbox-retail/recomp/disasm/functions.json')
        folders = OUT/'folders.json'
        if (a.skip_analysis and folders.exists()
                and all(path.exists() and path.stat().st_mtime <= folders.stat().st_mtime for path in folder_inputs)):
            print('Reusing unchanged function-folder map', flush=True)
        else:
            run(*sort_args)
        manual = SRC/'target_hooks.c' if (SRC/'target_hooks.c').exists() else ROOT/'port/game/recomp_manual.c'
        tracing = ['--trace-functions', a.trace_functions.resolve()] if a.trace_functions else []
        tool('recomp', XBE, '--game-name', 'PoP Warrior Within Xbox retail', '--all', '--split', a.split,
             '--gen-dir', SRC/'gen', '--folders', OUT/'folders.json', '--disasm-dir', OUT/'disasm',
             '--func-id-dir', OUT/'func_id', '--abi-dir', OUT/'abi', '--exclude-manual', manual, *tracing)
    if a.generate_only:
        return
    run(sys.executable, ROOT/'tools/check-hlsl.py')
    # Reuse the installed, pinned tool dependencies already used by reSOT.
    # Copy into ignored build outputs so this checkout builds independently.
    deps = ROOT/'build/deps'
    for name in ('glslang', 'spirv-tools', 'spirv-headers', 'SDL3-3.4.18', 'dxc'):
        dest = deps/name
        source = ROOT.parent/'reSOT/build/deps'/name
        if not dest.exists():
            if not source.exists():
                raise SystemExit(f'Missing dependency {name}; provision build/deps as in reSOT')
            shutil.copytree(source, dest, ignore=shutil.ignore_patterns('.git', '__pycache__'))
    build = ROOT/('build-abi' if a.abi_check else 'build')/'xbox-retail'
    run(sys.executable, ROOT/'tools/run-build-tool.py', 'cmake', '-S', ROOT, '-B', build,
        '-G', a.generator, '-A', 'x64', '-DREWW_ABI_CHECK=' + ('ON' if a.abi_check else 'OFF'))
    run(sys.executable, ROOT/'tools/run-build-tool.py', 'cmake', '--build', build, '--config', 'Release', '--parallel', a.jobs)
    # RE-WW: stock SDK SDL lacks the native query ABI and forces both native
    # renderers back to D3D11. Preserve a checked runtime in this checkout.
    run(sys.executable, ROOT/'tools/native-runtime.py')

if __name__ == '__main__':
    main()
