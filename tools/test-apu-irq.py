"""Exercise the production demo IRQ dispatcher with a masked, pending line.

Build products stay in ignored build/apu-irq-tests. No game data is used.
"""
from pathlib import Path
import os
import subprocess

root = Path(__file__).resolve().parents[1]
directory = root / 'build/apu-irq-tests'
project = directory / 'project'
project.mkdir(parents=True, exist_ok=True)
source = (root / 'port/third_party/xboxrecomp-demo/src/apu/apu_core.c').read_text()
begin = source.index('static void apu_deliver_irq(')
end = source.index('/* ============================================================', begin)
dispatcher = source[begin:end]
harness = r'''
#include <stdint.h>
#include <stdio.h>
#include <stddef.h>
#include "apu_guest_gate.h"
typedef struct { int lock; } MCPXAPUState;
typedef void (*apu_guest_fn)(void);
static LONG s_irq_line;
static uint8_t ram[1024], *g_apu_ram_ptr = ram;
static uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_fs_base;
static int blocked, deliveries, slots;
#define APU_VECTOR 5
#define XBOX_WORKER_STACK_TOP(slot) 1024
static int xbox_IrqlBlocksInterrupts(void) { return blocked; }
static uint32_t xbox_GetConnectedInterrupt(uint32_t v) { return 16; }
static uint32_t xbox_AllocThreadTib(void) { return 32; }
static int xbox_worker_stack_alloc(void) { ++slots; return 0; }
static void xbox_worker_stack_free(int s) { --slots; }
static int xbox_IrqlEnterInterrupt(int l) { return 0; }
static void xbox_IrqlLeaveInterrupt(int l) { }
static void qemu_mutex_unlock(int *l) { }
static void qemu_mutex_lock(int *l) { }
static void callback(void) { ++deliveries; s_irq_line=0; g_eax=1; }
static apu_guest_fn recomp_lookup(uint32_t a) { return callback; }
'''
main = r'''
int main(void) {
    MCPXAPUState state={0};
    *(uint32_t *)(ram+16)=1;
    *(uint32_t *)(ram+20)=64;
    s_irq_line=1; blocked=1;
    for(int i=0;i<10000;++i) apu_deliver_irq(&state);
    if(deliveries || slots || s_irq_line!=1) return 1;
    blocked=0; apu_deliver_irq(&state);
    if(deliveries!=1 || slots || s_irq_line) return 2;
    apu_deliver_irq(&state);
    if(deliveries!=1) return 3;
    puts("PASS: 10000 masked polls defer IRQ; unmask delivers once");
    return 0;
}
'''
(project/'test.c').write_text(harness+dispatcher+main)
include = (root/'port/third_party/xboxrecomp-demo/src/apu').as_posix()
gate_test = (root/'tools/tests/test-apu-guest-gate.c').as_posix()
(project/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(ApuIrqTest C)\n'
    + f'include_directories("{include}")\nadd_executable(apu-gate "{gate_test}")\n'
    + 'add_executable(apu-irq test.c)\nenable_testing()\nadd_test(NAME apu-irq COMMAND apu-irq)\nadd_test(NAME apu-gate COMMAND apu-gate)\n')
environment = {k.upper() if os.name == 'nt' else k: v for k,v in os.environ.items()}
def run(*args):
    subprocess.run(args, env=environment, check=True)
configure = ['cmake','-S',str(project),'-B',str(directory/'native-x64')]
if os.name == 'nt':
    configure += ['-A','x64']
run(*configure)
run('cmake','--build',str(directory/'native-x64'),'--config','Release')
run('ctest','--test-dir',str(directory/'native-x64'),'-C','Release','--output-on-failure')
