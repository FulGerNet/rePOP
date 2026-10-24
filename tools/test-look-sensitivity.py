"""Compile actual host options, target menu layout and stick wrappers.

No game assets are used. INI round trips stay in ignored build/.
"""
from pathlib import Path
import os
import subprocess

root = Path(__file__).resolve().parents[1]
out = root / 'build/look-sensitivity-tests'
project = out / 'project'
project.mkdir(parents=True, exist_ok=True)

def function(source, name):
    start = source.index('void ' + name + '(void)')
    opening = source.index('{', start)
    depth = 1
    end = opening + 1
    while depth:
        depth += (source[end] == '{') - (source[end] == '}')
        end += 1
    return source[start:end]

stubs = r'''
void *xbox_FramebufferWindowHandle(void) { return NULL; }
int xbox_FramebufferKeyDown(int key) { return 0; }
void xbox_FramebufferTakeMouse(int *x,int *y) { *x=*y=0; }
void xbox_SetFrameLimit(int fps) { }
void xbox_SetRenderScalePercent(int scale) { }
void xbox_SetVSync(int enabled) { }
static int test_glow=-1,test_quality=-1;
void xbox_SetPostProcessing(int enabled) { test_glow=enabled; }
void xbox_SetPostProcessingQuality(int quality) { test_quality=quality; }
void resot_console_logs_set(int enabled) { }
void resot_host_draw_text(uint32_t *p,int w,int h,int x,int y,const char *t,uint32_t c) { }
int nv2a_hw_backend(void) { return 11; }
void xbox_FramebufferSetOptionsCallbacks(int (*a)(const uint32_t**,uint32_t*,uint32_t*),int (*b)(void*,unsigned,uintptr_t,intptr_t)) { }
void xbox_InputSetHostFilter(void (*fn)(void*,unsigned)) { }
int resot_diag_panel(const uint32_t **p,uint32_t *w,uint32_t *h) { return 0; }
int resot_diag_event(void *w,unsigned m,uintptr_t wp,intptr_t lp) { return 0; }
static uint8_t memory[512];
static uintptr_t g_xbox_mem_offset;
static uint32_t g_eax,g_esp;
#define GMEM32(at) (*(uint32_t *)(memory+(at)))
'''
main = r'''
int main(void) {
    char text[96],path[MAX_PATH];
    assert(resot_log_level("[VIDEO] initialized")==0);
    assert(resot_log_level("WARNING: fallback")==1);
    assert(resot_log_level("[CRASH] access violation")==2);
    assert(resot_log_level("pipeline FAILED")==2);
    _putenv_s("RECOMP_PAD_SCRIPT",""); _putenv_s("RECOMP_PAD_LIVE","");
    GetFullPathNameA("look-test.ini",MAX_PATH,path,NULL);
    strcpy(s_path,path);
    assert(resot_look_percent(-1)==25 && resot_look_percent(999)==200);
    assert(resot_look_percent(112)==100 && resot_look_percent(113)==125);
    s_look_sensitivity=100;
    resot_native_label(RESOT_NATIVE_CONTROLS,0,text,sizeof text);
    assert(!strcmp(text,"Look sensitivity: 100%"));
    for(int i=0;i<8;i++)resot_native_activate(RESOT_NATIVE_CONTROLS,0);
    assert(s_look_sensitivity==100);
    assert(GetPrivateProfileIntA("Controls","LookSensitivityPercent",0,s_path)==100);
    s_look_sensitivity=200;
    float axes[]={1.0f,-0.5f};resot_scale_look(axes);
    assert(axes[0]==2.0f && axes[1]==-1.0f);
    s_look_sensitivity=25;axes[0]=1.0f;axes[1]=0;resot_scale_look(axes);
    assert(axes[0]==0.25f && axes[1]==0);
    s_look_sensitivity=100;axes[0]=0.5f;axes[1]=-1;resot_scale_look(axes);
    assert(axes[0]==0.5f && axes[1]==-1);
    assert(resot_graphics_preset(-1,3,0)==2);
    assert(resot_graphics_preset(-1,2,0)==2);
    assert(resot_graphics_preset(-1,1,0)==1);
    assert(resot_graphics_preset(-1,3,1)==3);
    assert(resot_graphics_preset(-1,0,1)==0);
    assert(resot_graphics_preset(99,3,1)==2);
    assert(resot_graphics_preset(2,1,1)==2);
    s_post_quality=0; /* Off can be read but normal menu cycles never select it. */
    for(int i=0;i<9;i++) {
        int expected=i%3+1;
        resot_native_activate(RESOT_NATIVE_GRAPHICS,3);
        assert(test_quality==expected);
        assert(s_texture_glow==(expected==3));
        assert(GetPrivateProfileIntA("Graphics","GraphicsPreset",99,s_path)==expected);
        assert(GetPrivateProfileIntA("Graphics","TextureGlowEffect",99,s_path)==99);
        resot_native_label(RESOT_NATIVE_GRAPHICS,3,text,sizeof text);
        assert(strstr(text,s_quality_names[expected]));
    }
    native_layout();
    assert(s_pages[P_GFX].n==4);
    assert(s_pages[P_GFX].c[3].arg==MSG_ID(P_GFX,3));
    assert(s_pages[P_CTRL].n==8);
    assert(s_pages[P_CTRL].c[0].text==T_LOOK);
    assert(s_pages[P_CTRL].c[0].arg==MSG_ID(P_CTRL,0));
    assert(s_pages[P_CTRL].c[7].text==T_RESET);
    for(int i=0;i<6;i++)assert(s_pages[P_CTRL].c[i+1].arg==P_K0+i);
    g_xbox_mem_offset=(uintptr_t)memory;
    s_look_sensitivity=200;
    g_eax=64;g_esp=128;GMEM32(g_esp)=RIGHT_RET;WRAPPER();
    assert(*(float *)(memory+64)==2 && *(float *)(memory+68)==-1);
    assert(g_eax==64 && g_esp==132);
    g_eax=64;g_esp=128;GMEM32(g_esp)=LEFT_RET;WRAPPER();
    assert(*(float *)(memory+64)==1 && *(float *)(memory+68)==-0.5f);
#if defined(TEST_WINDOWS)
    /* Render the actual F7 GDI panel, with Controls expanded and graphics
     * collapsed, so its new sensitivity row can be inspected visually. */
    const uint32_t *pixels;uint32_t width,height;
    s_open=1;s_graphics_expanded=1;s_controls_expanded=0;s_scroll=0;s_dirty=1;
    assert(panel(&pixels,&width,&height));
    BITMAPFILEHEADER file={0};BITMAPINFOHEADER info={0};
    file.bfType=0x4D42;file.bfOffBits=sizeof file+sizeof info;
    file.bfSize=file.bfOffBits+width*height*4;
    info.biSize=sizeof info;info.biWidth=width;info.biHeight=-(LONG)height;
    info.biPlanes=1;info.biBitCount=32;info.biSizeImage=width*height*4;
    FILE *image=fopen(PANEL_FILE,"wb");assert(image);
    assert(fwrite(&file,sizeof file,1,image)==1);
    assert(fwrite(&info,sizeof info,1,image)==1);
    assert(fwrite(pixels,info.biSizeImage,1,image)==1);fclose(image);
#endif
    DeleteFileA(s_path);
    puts("PASS: gain above full stick, identity/deadzone, INI round trip, native mapping and right-only wrapper");
}
'''
cmake = 'cmake_minimum_required(VERSION 3.20)\nproject(LookSensitivityTest C)\nset(CMAKE_C_STANDARD 11)\nenable_testing()\n'
for target, normalizer, right, left in [('demo','000C05D0','000C08B2','000C08A3'),('retail','000DBDE0','000DC0C2','000DC0B3')]:
    source = (root / f'source/xbox-{target}/target_hooks.c').read_text(encoding='utf-8')
    texts = source[source.index('enum { T_ROOT,'):source.index('static uint32_t s_text_va;')]
    begin = source.index('enum { DO_OPEN, DO_MSG };')
    end = source.index('static uint32_t f2u(float f)', begin) if target=='demo' else source.index('static uint32_t menu_add_choice(', begin)
    layout = source[begin:end]
    layout = layout.replace('static uint32_t s_main_menu, s_main_cur, s_root_choice;','')
    stubgen = f'void sub_{normalizer}_gen(void) {{ *(float*)(memory+g_eax)=1; *(float*)(memory+g_eax+4)=-0.5f; g_esp+=4; }}\n'
    for host in ('windows','android'):
        options = 'port/windows/src/options.c' if host=='windows' else 'port/android/src/options_android.c'
        host_stubs=stubs
        if host=='android':
            host_stubs='\n'.join(line for line in stubs.splitlines() if not line.startswith(('int resot_diag_panel(', 'int resot_diag_event(')))
            host_stubs+='\nconst char *resot_android_data_dir(void) { return "."; }\n'
        unit = '#include <windows.h>\n#include <assert.h>\n#include "'+(root/options).as_posix()+'"\n'
        unit += '#include "'+(root/'port/game/log_level.h').as_posix()+'"\n'
        unit += host_stubs + texts + layout + stubgen + function(source,'sub_'+normalizer)
        unit += f'\n#define RIGHT_RET 0x{right}u\n#define LEFT_RET 0x{left}u\n#define WRAPPER sub_{normalizer}\n'
        if host=='windows':
            unit += f'#define TEST_WINDOWS 1\n#define PANEL_FILE "look-{host}-{target}-f7.bmp"\n'
        unit += main
        name=f'{host}-{target}'
        (project/f'{name}.c').write_text(unit,encoding='utf-8')
        cmake += f'add_executable(look-{name} {name}.c)\ntarget_include_directories(look-{name} PRIVATE "{(root / "port/third_party/xboxrecomp/src").as_posix()}" "{(root / f"source/xbox-{target}").as_posix()}")\ntarget_link_libraries(look-{name} PRIVATE user32 gdi32)\nadd_test(NAME look-{name} COMMAND look-{name})\n'
(project/'CMakeLists.txt').write_text(cmake)
env = {k.upper() if os.name=='nt' else k:v for k,v in os.environ.items()}
def run(*args):
    subprocess.run(args,env=env,check=True)
run('cmake','-S',str(project),'-B',str(out/'native'),'-A','x64')
run('cmake','--build',str(out/'native'),'--config','Debug')
run('ctest','--test-dir',str(out/'native'),'-C','Debug','--output-on-failure')
