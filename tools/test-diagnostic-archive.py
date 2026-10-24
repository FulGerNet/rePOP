"""Exercise the production Java log packager without Android or game files."""
from pathlib import Path
import subprocess

root = Path(__file__).resolve().parents[1]
build = root / 'build/diagnostic-archive-tests'
build.mkdir(parents=True, exist_ok=True)
source = root / 'port/android/app/src/main/java/com/fulger/resot/DiagnosticArchive.java'
exports = source.with_name('DiagnosticExports.java')
test = root / 'tools/tests/DiagnosticArchiveTest.java'
subprocess.run(['javac', '-d', str(build), str(source), str(exports), str(test)], check=True)
subprocess.run(['java', '-cp', str(build), 'com.fulger.resot.DiagnosticArchiveTest', str(build / 'fixtures')], check=True)
