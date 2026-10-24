"""Compile the production Windows update parser; no network or game data."""
from pathlib import Path
import subprocess
import os
root=Path(__file__).resolve().parents[1]
out=root/'build/release-update-tests'
out.mkdir(parents=True,exist_ok=True)
(out/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(ReleaseUpdate C)\nadd_executable(test-update "'+(root/'tools/tests/test_release_update.c').as_posix()+'")\n')
for command in [('cmake','-S',str(out),'-B',str(out/'native'),'-A','x64'),
    ('cmake','--build',str(out/'native'),'--config','Debug'),(str(out/'native/Debug/test-update.exe'),)]:
    subprocess.run(command,check=True,env={k.upper() if os.name=='nt' else k:v for k,v in os.environ.items()})
