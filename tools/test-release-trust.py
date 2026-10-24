"""Verify the actual release APK and negative cases, without an Android device.

The disposable signing key stays in ignored build/release-trust-tests; it is
never the publisher key. Android uses exactly this ReleaseTrust verifier.
"""
from pathlib import Path
import os
import shutil
import struct
import subprocess
from zipfile import ZipFile

root=Path(__file__).resolve().parents[1]
out=root/'build/release-trust-tests'
out.mkdir(parents=True,exist_ok=True)
sdk=Path(os.environ.get('ANDROID_HOME', 'C:/Android'))
signer=sdk/'build-tools/36.0.0/apksigner.bat'
jar=next((Path.home()/'.gradle/caches/modules-2/files-2.1/com.android.tools.build/apksig/9.0.1').rglob('*.jar'))
apk=root/'bin/reSOT-android.apk'
original=out/'official copy with spaces.apk'
shutil.copyfile(apk,original)
tampered=out/'tampered.apk'
shutil.copyfile(apk,tampered)
with ZipFile(apk) as z:
    dex=z.getinfo('classes.dex')
with tampered.open('r+b') as f:
    f.seek(dex.header_offset+26)
    name,extra=struct.unpack('<HH',f.read(4))
    f.seek(dex.header_offset+30+name+extra+dex.compress_size//2)
    pos=f.tell();data=f.read(1);f.seek(pos);f.write(bytes([data[0]^0x80]))
key=out/'disposable-test-key.p12'
def run(*args):subprocess.run([str(a) for a in args],check=True)
if not key.exists():
    run('keytool','-genkeypair','-alias','regression-only','-keyalg','RSA','-keystore',key,
        '-storepass','regression-only','-keypass','regression-only','-dname','CN=reSOT negative test',
        '-validity','365','-storetype','PKCS12')
resigned=out/'resigned.apk'
run(signer,'sign','--ks',key,'--ks-pass','pass:regression-only','--out',resigned,original)
source=root/'port/android/app/src/main/java/com/fulger/resot'
run('javac','-cp',jar,'-d',out,source/'ReleaseTrust.java',source/'ReleaseVersion.java',root/'tools/tests/ReleaseTrustTest.java')
run('java','-cp',str(out)+os.pathsep+str(jar),'com.fulger.resot.ReleaseTrustTest',original,tampered,resigned)
