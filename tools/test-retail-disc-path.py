"""Build and run production path translation against synthetic NTSC/EU trees."""
from pathlib import Path
import os
import subprocess
import tempfile
import argparse
import re
import struct

parser = argparse.ArgumentParser(__doc__)
parser.add_argument('--eu', type=Path, help='Optional extracted EU disc for real hash recognition')
parser.add_argument('--ntsc', type=Path, help='Optional extracted NTSC disc; required with --eu')
args = parser.parse_args()
if bool(args.eu) != bool(args.ntsc):
    parser.error('Supply both --eu and --ntsc, or neither')

root = Path(__file__).resolve().parents[1]
build = root / 'build/disc-path-tests'
project = build / 'project'
project.mkdir(parents=True, exist_ok=True)
rt = (root / 'port/third_party/xboxrecomp/src').as_posix()
test = (root / 'tools/tests/test-retail-disc-path.c').as_posix()
(project / 'CMakeLists.txt').write_text(f'''cmake_minimum_required(VERSION 3.20)
project(DiscPathTests C)
foreach(kind RETAIL DEMO)
  add_executable(disc-path-${{kind}} "{test}" "{rt}/kernel/kernel_path.c")
  target_include_directories(disc-path-${{kind}} PRIVATE "{rt}" "{rt}/kernel")
  target_compile_definitions(disc-path-${{kind}} PRIVATE RESOT_RUNTIME_${{kind}}=1)
  target_link_libraries(disc-path-${{kind}} PRIVATE shell32)
endforeach()
''', encoding='utf-8')
with (project / 'CMakeLists.txt').open('a', encoding='utf-8') as f:
    f.write(f'''add_executable(disc-detection "{(root / 'tools/tests/test-disc-detection.c').as_posix()}")
target_link_libraries(disc-detection PRIVATE user32 gdi32 ole32 shell32 uuid bcrypt msimg32 windowscodecs winhttp)
target_compile_options(disc-detection PRIVATE /Zc:preprocessor)
''')
    for kind in ['demo', 'retail']:
        facts = (root / f'source/xbox-{kind}/target.h').read_text()
        sha = re.search(r'#define\s+RESOT_XBE_SHA256\s+"([A-Fa-f0-9]+)"', facts)[1]
        f.write(f'target_compile_definitions(disc-detection PRIVATE RESOT_{kind.upper()}_XBE_SHA256="{sha}")\n')
env = {k.upper() if os.name == 'nt' else k: v for k, v in os.environ.items()}
for cmd in [
    ['cmake', '-S', str(project), '-B', str(build / 'native')],
    ['cmake', '--build', str(build / 'native'), '--config', 'Release', '--parallel', '2'],
]:
    subprocess.run(cmd, env=env, check=True)
for kind in ['RETAIL', 'DEMO']:
    with tempfile.TemporaryDirectory(prefix=kind+'-', dir=build) as fixture:
        subprocess.run([str(build / f'native/Release/disc-path-{kind}.exe')],
                       cwd=fixture, env=env, check=True)
with tempfile.TemporaryDirectory(prefix='unverified-', dir=build) as fixture:
    disc = Path(fixture)
    for name in ['video', 'sound']:
        (disc / name).mkdir()
    (disc / 'prince.bf').touch()
    head = bytearray(4096)
    head[:4] = b'XBEH'
    struct.pack_into('<I', head, 0x104, 0x10000)
    struct.pack_into('<I', head, 0x118, 0x10200)
    struct.pack_into('<I', head, 0x208, 0x5553001D)
    name = 'Prince of Persia: The Sands of Time'.encode('utf-16le')
    head[0x20c:0x20c+len(name)] = name
    (disc / 'default.xbe').write_bytes(head)
    command = [str(build / 'native/Release/disc-detection.exe'), str(disc)]
    if args.eu:
        command.extend([str(args.eu.resolve()), str(args.ntsc.resolve())])
    subprocess.run(command, env=env, check=True)
