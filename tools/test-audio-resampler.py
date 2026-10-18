"""Compile/run the production audio resampler's waveform tests (shared runtime).

    python tools/test-audio-resampler.py

Requires CMake and a C compiler (the game's existing MSVC setup on Windows).
All generated build products stay in ignored build/audio-tests/.
"""
from pathlib import Path
import os
import subprocess

root = Path(__file__).resolve().parents[1]
directory = root / 'build' / 'audio-tests'
project = directory / 'project'
project.mkdir(parents=True, exist_ok=True)
source = (root/'tools/tests/test-audio-resampler.c').as_posix()
cmake = ['cmake_minimum_required(VERSION 3.20)', 'project(AudioResamplerTests C)', 'enable_testing()']
for target in ('demo','retail'):
    include = (root/'port/third_party/xboxrecomp/src/apu').as_posix()
    cmake += [f'add_executable(audio-{target} "{source}")',
              f'target_include_directories(audio-{target} PRIVATE "{include}")',
              f'if(NOT WIN32)\n target_link_libraries(audio-{target} PRIVATE m)\nendif()',
              f'add_test(NAME audio-{target} COMMAND audio-{target})']
(project/'CMakeLists.txt').write_text('\n'.join(cmake)+'\n')
environment = {key.upper() if os.name=='nt' else key: value for key,value in os.environ.items()}
def run(*args):
    subprocess.run(args, env=environment, check=True)
run('cmake','-S',str(project),'-B',str(directory/'native'))
run('cmake','--build',str(directory/'native'),'--config','Release','--parallel')
run('ctest','--test-dir',str(directory/'native'),'-C','Release','--output-on-failure')
