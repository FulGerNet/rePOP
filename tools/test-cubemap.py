"""Check Direct3D cube face order, default SRV shape and BGRA decoding.

Windows only; runs on the WARP software device, without a window or game data.
Build products stay in ignored build/cubemap-tests/.
"""
from pathlib import Path
import os
import subprocess

root = Path(__file__).resolve().parents[1]
if os.name != 'nt':
    raise SystemExit('This test requires Windows Direct3D 11 and WARP.')
build = root / 'build/cubemap-tests'
project = build / 'project'
project.mkdir(parents=True, exist_ok=True)
source = (root / 'tools/tests/test-cubemap.c').as_posix()
(project / 'CMakeLists.txt').write_text(
    'cmake_minimum_required(VERSION 3.20)\n'
    'project(CubemapTest C)\n'
    f'add_executable(cubemap "{source}")\n'
    'target_link_libraries(cubemap d3d11 d3dcompiler)\n'
    'enable_testing()\n'
    'add_test(NAME cubemap-warp COMMAND cubemap)\n', encoding='utf-8')
environment = {k.upper(): v for k, v in os.environ.items()}

def run(*args):
    subprocess.run(args, env=environment, check=True)

run('cmake', '-S', str(project), '-B', str(build / 'native-x64'), '-A', 'x64')
run('cmake', '--build', str(build / 'native-x64'), '--config', 'Release')
run('ctest', '--test-dir', str(build / 'native-x64'), '-C', 'Release',
    '--output-on-failure')
