"""Render the real Windows update popup offscreen and check dismissal input.

No game files or desktop clicks. Artifacts stay under ignored build/.
"""
from pathlib import Path
import os
import subprocess
import sys
root=Path(__file__).resolve().parents[1]
out=root/'build/launcher-update-tests';out.mkdir(parents=True,exist_ok=True)
(out/'test.c').write_text('''#define RESOT_UPDATE_CAPTURE_JSON 1
#define RESOT_DEMO_XBE_SHA256 "test-not-a-game"
#define RESOT_RETAIL_XBE_SHA256 "test-not-a-game"
#include "'''+(root/'port/windows/src/launcher.c').as_posix()+'''"
#include <assert.h>
int resot_extract_xiso_main(int argc,char **argv) { return 1; }
int main(int argc,char **argv) {
    if(argc>1) {
        launcher_update_worker(NULL);assert(s_update.checked);
        printf("PASS: production WinHTTP fetched stable release %s; newer=%ld\\n",s_update.tag,s_update.ready);
        return 0;
    }
    CoInitializeEx(NULL,COINIT_APARTMENTTHREADED);
    InitializeCriticalSection(&L.lock);
    assert(create_window()); /* Not shown; rendering uses the existing DIB. */
    L.this_kind=GAME_DEMO;layout();
    strcpy_s(s_update.tag,32,"v0.3.3");s_update.visible=1;s_update.focus=1;
    render();GdiFlush();
    BITMAPFILEHEADER file={0};BITMAPINFOHEADER info={0};
    file.bfType=0x4d42;file.bfOffBits=sizeof file+sizeof info;
    file.bfSize=file.bfOffBits+WIN_W*WIN_H*4;
    info.biSize=sizeof info;info.biWidth=WIN_W;info.biHeight=-WIN_H;
    info.biPlanes=1;info.biBitCount=32;
    FILE *image=fopen("launcher-update.bmp","wb");assert(image);
    fwrite(&file,sizeof file,1,image);fwrite(&info,sizeof info,1,image);
    fwrite(L.px,WIN_W*WIN_H*4,1,image);fclose(image);
    assert(launcher_update_hit(350,390)==0);
    assert(launcher_update_hit(600,390)==1);
    assert(launcher_update_hit(500,350)==-1);
    LRESULT result;
    assert(launcher_update_input(L.hwnd,WM_KEYDOWN,VK_RETURN,0,&result));
    assert(!s_update.visible); /* Default Enter closes without updating. */
    s_update.visible=1;
    assert(launcher_update_input(L.hwnd,WM_KEYDOWN,VK_ESCAPE,0,&result));
    assert(!s_update.visible);
    DestroyWindow(L.hwnd);destroy_window();DeleteCriticalSection(&L.lock);CoUninitialize();
    puts("PASS: real launcher popup render, hit areas, Enter default Close and Escape dismissal");
    return 0;
}
''',encoding='utf-8')
rc='202 RCDATA "'+(root/'docs/media/reSOT.png').as_posix()+'"\n'
font=root/'port/windows/res/AtlantisMF.ttf'
if font.exists():rc+='201 RCDATA "'+font.as_posix()+'"\n'
(out/'test.rc').write_text(rc)
(out/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(LauncherUpdateTest C RC)
add_executable(test-popup test.c test.rc)
target_compile_options(test-popup PRIVATE /Zc:preprocessor)
target_link_libraries(test-popup PRIVATE user32 gdi32 ole32 shell32 uuid bcrypt msimg32 windowscodecs winhttp)
''')
env={k.upper() if os.name=='nt' else k:v for k,v in os.environ.items()}
for args in [('cmake','-S',str(out),'-B',str(out/'native'),'-A','x64'),
             ('cmake','--build',str(out/'native'),'--config','Debug'),(str(out/'native/Debug/test-popup.exe'),)]:
    subprocess.run(args,env=env,cwd=out,check=True)
if '--live' in sys.argv:
    subprocess.run([str(out/'native/Debug/test-popup.exe'),'--live'],env=env,cwd=out,check=True)
