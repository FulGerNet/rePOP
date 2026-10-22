"""Build/run the production mouse/touch bridge with synthetic guest menus."""
from pathlib import Path
import os
import subprocess

root = Path(__file__).resolve().parents[1]
directory = root / 'build/menu-pointer-tests'
project = directory / 'project'
project.mkdir(parents=True, exist_ok=True)
source = (root / 'tools/tests/test-menu-pointer.c').as_posix()
cmake = ['cmake_minimum_required(VERSION 3.20)', 'project(MenuPointerTests C)', 'enable_testing()']
for target in ('demo', 'retail'):
    cmake += [f'add_executable(pointer-{target} "{source}")',
              f'target_compile_definitions(pointer-{target} PRIVATE RESOT_RUNTIME_{target.upper()}=1)',
              f'add_test(NAME pointer-{target} COMMAND pointer-{target})']
(project / 'CMakeLists.txt').write_text('\n'.join(cmake) + '\n')
environment = {k.upper() if os.name == 'nt' else k: v for k, v in os.environ.items()}
for args in [('cmake', '-S', str(project), '-B', str(directory / 'native')),
             ('cmake', '--build', str(directory / 'native'), '--config', 'Release', '--parallel'),
             ('ctest', '--test-dir', str(directory / 'native'), '-C', 'Release', '--output-on-failure')]:
    subprocess.run(args, env=environment, check=True)
