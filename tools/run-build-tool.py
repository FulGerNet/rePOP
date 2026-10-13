"""Avoid duplicate case variants of Windows environment keys in MSBuild."""
import os
import subprocess
import sys

if len(sys.argv) < 2 or sys.argv[1] not in ('cmake', 'ctest'):
    raise SystemExit('Usage: run-build-tool.py cmake|ctest <arguments>')
environment = {}
for key, value in os.environ.items():
    environment[key.upper() if os.name == 'nt' else key] = value
raise SystemExit(subprocess.call(sys.argv[1:], env=environment))
