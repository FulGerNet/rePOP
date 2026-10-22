"""Compile/run Android's visibility policy with the host JDK; no device needed."""
from pathlib import Path
import subprocess

root = Path(__file__).resolve().parents[1]
build = root / 'build/touch-overlay-tests'
build.mkdir(parents=True, exist_ok=True)
policy = root / 'port/android/app/src/main/java/com/fulger/resot/TouchOverlayState.java'
test = root / 'tools/tests/TouchOverlayStateTest.java'
subprocess.run(['javac', '-d', str(build), str(policy), str(test)], check=True)
subprocess.run(['java', '-cp', str(build), 'com.fulger.resot.TouchOverlayStateTest'], check=True)
