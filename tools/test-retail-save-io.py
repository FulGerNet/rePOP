"""Build/run real retail file bridges against a synthetic save-sized file.

Run: python tools/test-retail-save-io.py
Products and the temporary test file stay under ignored build/retail-save-io/.
No game XBE, asset, profile or save is read or modified.
"""
from pathlib import Path
import os
import subprocess
root=Path(__file__).resolve().parents[1]
build=root/'build'/'retail-save-io'
project=build/'project'
project.mkdir(parents=True,exist_ok=True)
runtime=(root/'port/third_party/xboxrecomp-retail').as_posix()
source=(root/'tools/tests/test-retail-save-io.c').as_posix()
(project/'CMakeLists.txt').write_text(f'''cmake_minimum_required(VERSION 3.20)
project(RetailSaveIo C)
add_subdirectory("{runtime}" runtime)
add_executable(retail-save-io "{source}")
target_include_directories(retail-save-io PRIVATE "{runtime}/src/kernel")
target_link_libraries(retail-save-io PRIVATE xboxrecomp)
enable_testing()
add_test(NAME retail-save-io COMMAND retail-save-io)
''')
env={k.upper() if os.name=='nt' else k:v for k,v in os.environ.items()}
for command in [('cmake','-S',str(project),'-B',str(build/'native')),
                ('cmake','--build',str(build/'native'),'--config','Release','--target','retail-save-io','--parallel','4'),
                ('ctest','--test-dir',str(build/'native'),'-C','Release','--output-on-failure')]:
    subprocess.run(command,env=env,check=True)
