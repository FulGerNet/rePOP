"""Test the production Android image selector using the owner's checked XBEs."""
from pathlib import Path
import argparse
import os
import subprocess

root = Path(__file__).resolve().parents[1]
parser = argparse.ArgumentParser(__doc__)
parser.add_argument('--eu', type=Path, required=True, help='EU default.xbe')
args = parser.parse_args()
out = root / 'build/android-image-tests'
out.mkdir(parents=True, exist_ok=True)
android = (root / 'port/android/src').as_posix()
test = (root / 'tools/tests/test-android-retail-image.c').as_posix()
(out / 'CMakeLists.txt').write_text(f'''cmake_minimum_required(VERSION 3.20)
project(AndroidImageTest C)
add_executable(image-test "{test}" "{android}/retail_image.c" "{android}/sha256.c")
target_include_directories(image-test PRIVATE "{android}")
''', encoding='utf-8')
env = {k.upper() if os.name == 'nt' else k: v for k, v in os.environ.items()}
for command in [
    ['cmake', '-S', str(out), '-B', str(out / 'native')],
    ['cmake', '--build', str(out / 'native'), '--config', 'Release'],
    [str(out / 'native/Release/image-test.exe'),
     str(root / 'Assets/xbox-retail/default.xbe'), str(args.eu.resolve())],
]:
    subprocess.run(command, env=env, check=True)
