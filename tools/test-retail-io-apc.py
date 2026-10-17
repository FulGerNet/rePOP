"""Exercise the production retail file-APC bridge with stdcall callbacks.

The isolated harness extracts the unchanged production function, supplies a
guest stack and dispatch stubs, then checks callback arguments, nested APCs,
and the interrupted kernel call's status and stack. No game files are used.
Run: python tools/test-retail-io-apc.py
"""
from pathlib import Path
import os
import subprocess

root = Path(__file__).resolve().parents[1]
build = root / 'build' / 'retail-io-apc-tests'
project = build / 'project'
project.mkdir(parents=True, exist_ok=True)
bridge = (root / 'port/third_party/xboxrecomp-retail/src/kernel/kernel_bridge.c').read_text(encoding='utf-8')
start = bridge.index('static void deliver_one_apc(')
end = bridge.index('\n/* Per-thread pending-APC ring.', start)
production = bridge[start:end]
prefix = r'''
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef void (*recomp_func_t)(void);
typedef union { uint64_t q[2]; } RecompXmm;
typedef union { uint64_t q; } RecompMmx;
static RecompXmm g_xmm0, g_xmm1, g_xmm2, g_xmm3, g_xmm4, g_xmm5, g_xmm6, g_xmm7;
static RecompMmx g_mm0, g_mm1, g_mm2, g_mm3, g_mm4, g_mm5, g_mm6, g_mm7;
static double g_fp_stack[8];
static int g_fp_top, g_fp_cmp;
static uint16_t g_fp_control_word, g_fp_cc;
static uint32_t mem[1024];
static uint32_t g_eax, g_ecx, g_edx, g_esp, g_seh_ebp, g_xbox_kernel_caller;
static uint32_t g_ebp, g_fs_base, g_ebx, g_esi, g_edi;
static int g_df;
static uint32_t g_slot_ordinals[16];
#define KERNEL_VA_BASE 0xFE000000u
#define KERNEL_VA_END (KERNEL_VA_BASE + 64)
#define BRIDGE_MEM32(a) mem[(a)/4]
static recomp_func_t recomp_lookup(uint32_t);
static recomp_func_t recomp_lookup_manual(uint32_t);
static recomp_func_t recomp_lookup_kernel(uint32_t);
static void deliver_one_apc(uint32_t, uint32_t, uint32_t);
static int calls;
#define CHECK(x) do { if (!(x)) { fprintf(stderr, "line %d: %s\n", __LINE__, #x); exit(1); } } while (0)
static void callback(void) {
    CHECK(BRIDGE_MEM32(g_esp) == 0);
    CHECK(BRIDGE_MEM32(g_esp + 4) == 0x1234);
    CHECK(BRIDGE_MEM32(g_esp + 8) == 0x5678);
    CHECK(BRIDGE_MEM32(g_esp + 12) == 0);
    calls++;
    g_eax = 0xDEADBEEF; g_ecx = 9; g_edx = 10;
    g_seh_ebp = 11; g_xbox_kernel_caller = 12;
    g_ebp = 90; g_fs_base = 91; g_ebx = 92; g_esi = 93; g_edi = 94; g_df = 1;
    g_fp_stack[0] = 123; g_fp_top = 7; g_fp_cmp = 1;
    g_fp_control_word = 0x1234; g_fp_cc = 0x4567;
    g_xmm0.q[0] = 17; g_xmm7.q[1] = 18; g_mm7.q = 19;
    if (calls == 1) {
        uint32_t before = g_esp;
        deliver_one_apc(KERNEL_VA_BASE, 0x1234, 0x5678);
        CHECK(g_esp == before);
        CHECK(g_eax == 0xDEADBEEF);
    }
    g_esp += 16; /* stdcall ret 12, including return address */
}
static recomp_func_t recomp_lookup(uint32_t a) { return a == 1 ? callback : NULL; }
static recomp_func_t recomp_lookup_manual(uint32_t a) { return a == 2 ? callback : NULL; }
static recomp_func_t recomp_lookup_kernel(uint32_t a) { return a == KERNEL_VA_BASE ? callback : NULL; }
'''
suffix = r'''
int main(void) {
    unsigned i;
    const uint32_t targets[] = {1, 2, KERNEL_VA_BASE};
    for (i = 0; i < 3; i++) {
        g_eax = 0xC0000011; g_ecx = 2; g_edx = 3; g_esp = 2048;
        g_seh_ebp = 4; g_xbox_kernel_caller = 5;
        g_ebp = 30; g_fs_base = 31; g_ebx = 32; g_esi = 33; g_edi = 34; g_df = 0;
        g_fp_stack[0] = 3.5; g_fp_top = 2; g_fp_cmp = 0;
        g_fp_control_word = 0x37f; g_fp_cc = 0x4000;
        g_xmm0.q[0] = 20; g_xmm7.q[1] = 21; g_mm7.q = 22;
        deliver_one_apc(targets[i], 0x1234, 0x5678);
        CHECK(g_eax == 0xC0000011 && g_ecx == 2 && g_edx == 3);
        CHECK(g_esp == 2048 && g_seh_ebp == 4 && g_xbox_kernel_caller == 5);
        CHECK(g_ebp == 30 && g_fs_base == 31 && g_ebx == 32 && g_esi == 33 && g_edi == 34 && g_df == 0);
        CHECK(g_fp_stack[0] == 3.5 && g_fp_top == 2 && g_fp_cmp == 0);
        CHECK(g_fp_control_word == 0x37f && g_fp_cc == 0x4000);
        CHECK(g_xmm0.q[0] == 20 && g_xmm7.q[1] == 21 && g_mm7.q == 22);
    }
    CHECK(calls == 4);
    puts("retail I/O APC: lifted/manual/kernel callbacks and nested completion passed");
    return 0;
}
'''
(project / 'test.c').write_text(prefix + production + suffix)
(project / 'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(RetailIoApc C)\nenable_testing()\nadd_executable(retail-io-apc test.c)\nadd_test(NAME retail-io-apc COMMAND retail-io-apc)\n')
environment = {key.upper() if os.name == 'nt' else key: value for key, value in os.environ.items()}
for command in [('cmake', '-S', str(project), '-B', str(build / 'native')),
                ('cmake', '--build', str(build / 'native'), '--config', 'Release'),
                ('ctest', '--test-dir', str(build / 'native'), '-C', 'Release', '--output-on-failure')]:
    subprocess.run(command, env=environment, check=True)
