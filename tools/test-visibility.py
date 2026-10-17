"""Test production retail visibility queries with real WARP depth-tested draws."""
from pathlib import Path
import os
import subprocess
root=Path(__file__).resolve().parents[1]
if os.name!='nt':raise SystemExit('Windows Direct3D11 WARP required')
build=root/'build/visibility-tests';project=build/'project';project.mkdir(parents=True,exist_ok=True)
source=(root/'tools/tests/test-visibility.c').as_posix()
include=(root/'port/third_party/xboxrecomp-retail/src/kernel').as_posix()
(project/'CMakeLists.txt').write_text(f'''cmake_minimum_required(VERSION 3.20)
project(VisibilityTest C)
add_executable(visibility "{source}")
target_include_directories(visibility PRIVATE "{include}")
target_link_libraries(visibility d3d11 d3dcompiler)
enable_testing()
add_test(NAME visibility-warp COMMAND visibility)
''')
env={k.upper():v for k,v in os.environ.items()}
def run(*args):subprocess.run(args,env=env,check=True)
run('cmake','-S',str(project),'-B',str(build/'native-x64'),'-A','x64')
run('cmake','--build',str(build/'native-x64'),'--config','Release')
run('ctest','--test-dir',str(build/'native-x64'),'-C','Release','--output-on-failure')
