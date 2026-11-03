"""Run the Android preference implementation with minimal UI stubs; no device."""
from pathlib import Path
import os
import subprocess
import tempfile

root = Path(__file__).resolve().parents[1]
out = root / 'build/game-language-tests'
(out / 'android/content').mkdir(parents=True, exist_ok=True)
(out / 'com/fulger/resot').mkdir(parents=True, exist_ok=True)
(out / 'android/content/Context.java').write_text(
    'package android.content; public class Context { public String getString(int id) { return ""; } }')
(out / 'com/fulger/resot/R.java').write_text('''package com.fulger.resot;
public class R { public static class string {
public static final int language_english=1,language_french=4,language_spanish=5,language_german=3,language_italian=6;
} }
''')
env = {k.upper() if os.name == 'nt' else k: v for k, v in os.environ.items()}
subprocess.run(['javac', '-d', str(out),
                str(out / 'android/content/Context.java'), str(out / 'com/fulger/resot/R.java'),
                str(root / 'port/android/app/src/main/java/com/fulger/resot/GameLanguage.java'),
                str(root / 'tools/tests/GameLanguageTest.java')], env=env, check=True)
with tempfile.TemporaryDirectory(dir=out) as fixture:
    subprocess.run(['java', '-cp', str(out), 'com.fulger.resot.GameLanguageTest', fixture],
                   env=env, check=True)
