"""Run production render-target alias lifetime code with synthetic guest RAM.

No game launch, controller input or game assets. Tests GPU-producer ordering,
RAM reuse, repeated sampling and preservation of the displayed image.
"""
from pathlib import Path
import os
import subprocess

root = Path(__file__).resolve().parents[1]
build = root / 'build/native-surface-alias-tests'
project = build / 'project'
project.mkdir(parents=True, exist_ok=True)
native = (root / 'port/third_party/xboxrecomp/src/kernel/nv2a_hw_native.inc').read_text()
structure = native[native.index('typedef struct {\n    SDL_GPUTexture *color, *depth;'):native.index('} NgSurface;') + len('} NgSurface;')]
start = native.index('static uint32_t ng_surface_ram_hash(')
end = native.index('/* RE-SoT: the glow chain', start)
production = native[start:end]
# The selected production range starts inside its retail conditional.
production = '#if RESOT_RUNTIME_RETAIL\n' + production
shim = r'''
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define RESOT_RUNTIME_RETAIL 1
typedef void SDL_GPUTexture;
static uint8_t memory[128];
static uintptr_t xbox_GetMemoryOffset(void) { return (uintptr_t)memory; }
static int hw_mem_ok(uint32_t at,uint32_t bytes) { return at<=128 && bytes<=128-at; }
static unsigned releases,flushes;
static void SDL_ReleaseGPUTexture(void *device,void *image) { (void)device;(void)image;releases++; }
static void ng_flush_draws(void) { flushes++; }
'''
state = r'''
static struct { uint32_t frame; } s_hw;
static struct { NgSurface *front,*largest; void *device; } s_ng;
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"line %d: %s\n",__LINE__,#x);return 1; } } while(0)
'''
main = r'''
int main(void) {
    NgSurface image={0};
    image.color=(void*)(uintptr_t)1; image.offset=4; image.bytes=64;
    image.w=640; image.h=480;
    s_hw.frame=10;
    ng_mark(&image); s_ng.front=&image;
    /* A producer has already drawn this frame. Concurrent guest preparation
     * of the next submission cannot replace the current GPU result. */
    memory[8]=1;
    CHECK(!ng_surface_stale(&image));
    CHECK(image.color && s_ng.front==&image && s_ng.largest==&image);
    /* With no newer GPU draw, changed RAM is a genuine sampling alias reuse.
     * Both texture stages must decode RAM, while scanout keeps its resource. */
    s_hw.frame++;
    CHECK(ng_surface_stale(&image));
    CHECK(ng_surface_stale(&image));
    CHECK(image.color && s_ng.front==&image && s_ng.largest==&image);
    CHECK(!releases && !flushes);
    /* A later GPU producer restores the alias, including a second stage. */
    ng_mark(&image);
    CHECK(!ng_surface_stale(&image));
    CHECK(!ng_surface_stale(&image));
    s_hw.frame++;
    CHECK(!ng_surface_stale(&image));
    CHECK(!releases && !flushes);
    puts("PASS: current GPU producer, reused RAM, repeated samples, scanout lifetime");
    return 0;
}
'''
(project / 'test.c').write_text(shim + structure + state + production + main)
(project / 'CMakeLists.txt').write_text(
    'cmake_minimum_required(VERSION 3.20)\nproject(NativeSurfaceAlias C)\n'
    'add_executable(surface-alias test.c)\nenable_testing()\n'
    'add_test(NAME native-surface-alias COMMAND surface-alias)\n')
env = {k.upper() if os.name == 'nt' else k: v for k, v in os.environ.items()}
def run(*args):
    subprocess.run(args, env=env, check=True)
configure = ['cmake', '-S', str(project), '-B', str(build / 'native')]
if os.name == 'nt':
    configure += ['-A', 'x64']
run(*configure)
run('cmake', '--build', str(build / 'native'), '--config', 'Release')
run('ctest', '--test-dir', str(build / 'native'), '-C', 'Release', '--output-on-failure')
