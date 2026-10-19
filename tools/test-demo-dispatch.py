"""Regression for the demo ISR's recursive dispatch ownership leak.

Compile the production HAL helpers and DPC admission function, with a small
deterministic host shim. No game code or assets; outputs stay under build/.
"""
from pathlib import Path
import os
import subprocess

root = Path(__file__).resolve().parents[1]
out = root / 'build/demo-dispatch-tests'
project = out / 'project'
project.mkdir(parents=True, exist_ok=True)
hal = (root / 'port/third_party/xboxrecomp/src/kernel/kernel_hal.c').read_text(encoding='utf-8')
bridge = (root / 'port/third_party/xboxrecomp/src/kernel/kernel_bridge.c').read_text(encoding='utf-8')
helpers = hal[hal.index('static volatile LONG s_disp_owner;'):hal.index('/* ============================================================================\n * KeTickCount')]
admission = bridge[bridge.index('static int kernel_dispatch_enter(void)'):bridge.index('/* Run whatever is queued.')]
shim = r'''
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#define RESOT_RUNTIME_DEMO 1
#define XBOX_THREAD_LOCAL
#define __fastcall
#define __stdcall
#define IRQL_CALLER() NULL
#define XBOX_LOG_WARN 0
#define XBOX_LOG_HAL 0
#define DISPATCH_LEVEL 2
typedef int32_t LONG;
typedef uint32_t DWORD;
typedef unsigned char KIRQL;
typedef void VOID;
static DWORD tid=1, ticks;
static KIRQL g_current_irql;
static int raised;
static DWORD GetCurrentThreadId(void) { return tid; }
static DWORD GetTickCount(void) { return ticks++; }
static LONG InterlockedCompareExchange(volatile LONG *p,LONG n,LONG o) { LONG v=*p; if(v==o)*p=n;return v; }
static LONG InterlockedExchange(volatile LONG *p,LONG n) { LONG v=*p;*p=n;return v; }
static LONG InterlockedIncrement(volatile LONG *p) { return ++*p; }
static void SwitchToThread(void) { }
static void Sleep(int ms) { ticks+=ms; }
static void irql_track(KIRQL old,KIRQL level,void *ra) { raised+=(level>=2)-(old>=2); }
static void irql_publish(void) { }
static void xbox_log(int a,int b,const char *f,...) { }
'''
main = r'''
int main(void) {
    /* ISR holds the outer dispatcher reference, then temporarily unmasks
     * and raises as the demo DirectSound callback can do. */
    assert(xbox_DispatchTryEnter());
    int saved=xbox_IrqlEnterInterrupt(16);
    xbox_KfLowerIrql(0);
    xbox_KfRaiseIrql(2);
    assert(s_disp_depth==2 && t_disp_guest);
    xbox_IrqlLeaveInterrupt(saved);
    xbox_DispatchLeave();
    assert(!s_disp_owner && !t_disp_guest && !raised);

    /* Returning already low must neither double-release nor retain a token. */
    assert(xbox_DispatchTryEnter());
    saved=xbox_IrqlEnterInterrupt(16);
    xbox_KfLowerIrql(0);
    xbox_KfRaiseIrql(2);
    xbox_KfLowerIrql(0);
    xbox_IrqlLeaveInterrupt(saved);
    xbox_DispatchLeave();
    assert(!s_disp_owner && !t_disp_guest && !raised);

    /* Restoring a raised interrupted context reacquires its guest reference. */
    xbox_KfRaiseIrql(2);
    assert(xbox_DispatchTryEnter());
    saved=xbox_IrqlEnterInterrupt(16);
    xbox_KfLowerIrql(0);
    xbox_IrqlLeaveInterrupt(saved);
    xbox_DispatchLeave();
    assert(s_disp_depth==1 && t_disp_guest && raised==1);
    xbox_KfLowerIrql(0);
    assert(!s_disp_owner && !raised);

    /* A pending DPC remains excluded even after the former 250 ms timeout. */
    assert(xbox_DispatchTryEnter());
    tid=2;
    for(int i=0;i<10000;++i) { ticks+=10; assert(!kernel_dispatch_enter()); }
    tid=1; xbox_DispatchLeave(); tid=2;
    assert(kernel_dispatch_enter()==1);
    xbox_DispatchLeave();
    puts("PASS: ISR dispatch references restore; 10000 blocked DPC polls never bypass owner");
    return 0;
}
'''
(project / 'test.c').write_text(shim + helpers + admission + main)
(project / 'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(DemoDispatchTest C)\nadd_executable(demo-dispatch test.c)\n')
env = {k.upper() if os.name == 'nt' else k: v for k, v in os.environ.items()}
def run(*args):
    subprocess.run(args, env=env, check=True)
configure = ['cmake', '-S', str(project), '-B', str(out / 'native')]
if os.name == 'nt':
    configure += ['-A', 'x64']
run(*configure)
run('cmake', '--build', str(out / 'native'), '--config', 'Debug')
run(str(out / 'native/Debug/demo-dispatch.exe') if os.name == 'nt' else str(out / 'native/demo-dispatch'))
