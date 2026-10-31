"""RE-WW: exercise production CPU/GPU ownership policy without a GPU."""
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest


HEADER_DIR = Path(__file__).resolve().parents[2] / 'src/kernel'


class SurfaceOwnershipTests(unittest.TestCase):
    def test_production_reclaim_retires_stale_sibling_before_new_claim(self):
        d3d = HEADER_DIR / 'nv2a_hw_d3d11.inc'
        native = HEADER_DIR / 'nv2a_hw_native.inc'
        helpers = '\n'.join(production_function(d3d, name) for name in
                            ('hw_claim_surface_ram', 'hw_surface_ram_changed'))
        for backend in ('d3d11', 'native'):
            with self.subTest(backend=backend):
                if backend == 'd3d11':
                    adapter = production_function(d3d, 'hw_reclaim_surface')
                    selection = '''
typedef HwSurface Surface;
#define SURFACES s_hw.surf
#define IMAGE tex
#define RECLAIM(s) hw_reclaim_surface(s)
'''
                    no_color_check = ''
                else:
                    adapter = production_function(native, 'ng_mark')
                    selection = '''
typedef NgSurface Surface;
#define SURFACES s_ng.surfaces
#define IMAGE color
#define RECLAIM(s) ng_mark(s,1)
'''
                    no_color_check = '''
    /* Exercise the actual native depth-only mark, without a wrapper that
     * duplicates its color-write decision. It may update recency only. */
    RewwSurfaceOwnership before_a=SURFACES[0].ram, before_b=SURFACES[1].ram;
    memory[256]^=0x40;
    s_hw.frame=19;
    ng_mark(&SURFACES[1],0);
    if(SURFACES[0].ram.gpu_owned!=before_a.gpu_owned ||
       SURFACES[0].ram.fingerprint!=before_a.fingerprint ||
       SURFACES[1].ram.gpu_owned!=before_b.gpu_owned ||
       SURFACES[1].ram.fingerprint!=before_b.fingerprint ||
       SURFACES[1].ram.bytes!=before_b.bytes) return 8;
    if(!hw_surface_ram_changed(&SURFACES[1].ram,256) ||
       SURFACES[1].frame!=19 || s_ng.largest!=&SURFACES[1]) return 9;
    RECLAIM(&SURFACES[1]);
    if(!SURFACES[1].ram.gpu_owned || hw_surface_ram_changed(&SURFACES[1].ram,256)) return 10;
'''
                run_fixture(r'''
#include <stdint.h>
#include <string.h>
#include "reww_surface_ownership.h"
#define HW_MAX_SURFACES 3
static unsigned char memory[16384];
typedef struct {
    void *tex;
    uint32_t offset,w,h;
    RewwSurfaceOwnership ram;
} HwSurface;
typedef struct {
    void *color;
    uint32_t offset,w,h,frame;
    RewwSurfaceOwnership ram;
} NgSurface;
static struct { HwSurface surf[HW_MAX_SURFACES]; uint32_t frame; } s_hw;
static struct { NgSurface surfaces[HW_MAX_SURFACES]; NgSurface *largest; } s_ng;
static struct { uint32_t pitch; } s_gpu;
static const void *xbox_GetMemoryOffset(void) { return memory; }
static int hw_mem_ok(uint32_t offset,uint32_t bytes) {
    return offset<sizeof memory && bytes<=sizeof memory-offset;
}
''' + helpers + adapter + selection + r'''
int main(void) {
    (void)&s_ng; /* D3D11 fixture does not otherwise use native state. */
    memset(memory,0x37,sizeof memory);
    /* A/B share RAM but retain distinct GPU shapes. C is unrelated. */
    for(unsigned i=0;i<HW_MAX_SURFACES;++i) {
        SURFACES[i].IMAGE=(void *)memory;
        SURFACES[i].offset=i==2 ? 8192u : 256u;
        SURFACES[i].w=i==1 ? 32u : 16u;
        SURFACES[i].h=i==1 ? 16u : 8u;
        hw_claim_surface_ram(&SURFACES[i].ram,SURFACES[i].offset,
                             SURFACES[i].w*4,SURFACES[i].h);
    }
    s_gpu.pitch=128;
    /* GPU writes alone must retain the other unchanged glow shape. */
    RECLAIM(&SURFACES[1]);
    if(!SURFACES[0].ram.gpu_owned || !SURFACES[1].ram.gpu_owned ||
       !SURFACES[2].ram.gpu_owned) return 1;
    /* No intervening texture lookup: CPU overwrite, then GPU writes B. */
    memory[256]^=0x80;
    if(!hw_surface_ram_changed(&SURFACES[0].ram,256) ||
       !hw_surface_ram_changed(&SURFACES[1].ram,256)) return 2;
    RECLAIM(&SURFACES[1]);
    if(SURFACES[0].ram.gpu_owned || !SURFACES[1].ram.gpu_owned ||
       !SURFACES[2].ram.gpu_owned) return 3;
    if(SURFACES[1].ram.bytes!=128*16 ||
       hw_surface_ram_changed(&SURFACES[1].ram,256)) return 4;
    /* The next lookup's actual production changed predicate must not
     * see A's old baseline as dirty and invalidate the fresh B producer. */
    for(unsigned i=0;i<2;++i)
        if(hw_surface_ram_changed(&SURFACES[i].ram,256)) return 5;
    if(hw_surface_ram_changed(&SURFACES[2].ram,8192)) return 6;
    RECLAIM(&SURFACES[1]);
    if(SURFACES[0].ram.gpu_owned || !SURFACES[1].ram.gpu_owned) return 7;
''' + no_color_check + r'''
    return 0;
}
''')

    def test_claim_invalidate_reclaim_and_footprint(self):
        run_fixture(r'''
#include <stdint.h>
#include <string.h>
#include "reww_surface_ownership.h"
int main(void) {
    static unsigned char ram[640*480*4];
    RewwSurfaceOwnership aliases[2];
    memset(ram,0x37,sizeof ram);
    reww_surface_claim(&aliases[0],ram,320*240*4);
    reww_surface_claim(&aliases[1],ram,sizeof ram);
    /* Different GPU shapes remain eligible while CPU backing stays put. */
    for(unsigned repeat=0;repeat<16;++repeat)
        for(unsigned i=0;i<2;++i)
            if(!aliases[i].gpu_owned || reww_surface_changed(&aliases[i],ram)) return 1;
    /* CPU movie overwrites a reused smaller postfx allocation. No frame
     * counter is involved: the very next check must observe the change. */
    ram[0]^=0x80;
    if(!reww_surface_changed(&aliases[0],ram) ||
       !reww_surface_changed(&aliases[1],ram)) return 2;
    for(unsigned i=0;i<2;++i) reww_surface_invalidate(&aliases[i]);
    if(aliases[0].gpu_owned || aliases[1].gpu_owned) return 3;
    /* Invalid owners no longer offer aliases, even with stale snapshots. */
    if(reww_surface_changed(&aliases[0],ram)) return 4;
    reww_surface_claim(&aliases[1],ram,sizeof ram);
    if(aliases[0].gpu_owned || !aliases[1].gpu_owned ||
       reww_surface_changed(&aliases[1],ram)) return 5;
    /* A larger footprint monitors its own tail, beyond the small alias. */
    reww_surface_claim(&aliases[0],ram,320*240*4);
    ram[sizeof ram-1]^=0x40;
    if(reww_surface_changed(&aliases[0],ram) ||
       !reww_surface_changed(&aliases[1],ram)) return 6;
    /* Renderer policy: any changed valid shape invalidates all aliases at
     * its address; the helper deliberately owns no address or GPU resources. */
    if(reww_surface_changed(&aliases[1],ram))
        for(unsigned i=0;i<2;++i) reww_surface_invalidate(&aliases[i]);
    if(aliases[0].gpu_owned || aliases[1].gpu_owned) return 7;
    return 0;
}
''')

    def test_small_unaligned_and_partial_word_footprints(self):
        run_fixture(r'''
#include <stdint.h>
#include <string.h>
#include "reww_surface_ownership.h"
int main(void) {
    unsigned char storage[32];
    unsigned char *ram=storage+1; /* unaligned on purpose */
    RewwSurfaceOwnership owner;
    memset(storage,0x5a,sizeof storage);
    for(uint32_t bytes=1;bytes<=15;++bytes) {
        reww_surface_claim(&owner,ram,bytes);
        if(!owner.gpu_owned || owner.bytes!=bytes || reww_surface_changed(&owner,ram)) return 1;
        /* Includes 1/2/3-byte regions and every non-dword tail length. */
        ram[bytes-1]^=1;
        if(!reww_surface_changed(&owner,ram)) return 2;
        ram[bytes-1]^=1;
        if(reww_surface_changed(&owner,ram)) return 3;
        /* A neighboring byte outside the footprint must not affect it. */
        ram[bytes]^=1;
        if(reww_surface_changed(&owner,ram)) return 4;
        ram[bytes]^=1;
    }
    reww_surface_claim(&owner,ram,1);
    uint32_t one=owner.fingerprint;
    reww_surface_claim(&owner,ram,2);
    if(one==owner.fingerprint) return 5;
    reww_surface_claim(&owner,NULL,0);
    if(owner.gpu_owned || reww_surface_changed(&owner,NULL)) return 6;
    reww_surface_claim(&owner,NULL,8);
    if(owner.gpu_owned) return 7;
    reww_surface_claim(&owner,ram,0);
    if(owner.gpu_owned) return 8;
    reww_surface_claim(&owner,ram,8);
    if(!reww_surface_changed(&owner,NULL)) return 9;
    return 0;
}
''')

    def test_sampled_policy_includes_unsampled_tail_word(self):
        run_fixture(r'''
#include <stdint.h>
#include <string.h>
#include "reww_surface_ownership.h"
int main(void) {
    /* 8192 words => step4, so the final dword isn't in the regular sample. */
    unsigned char ram[8192*4+3];
    RewwSurfaceOwnership owner;
    memset(ram,0,sizeof ram);
    reww_surface_claim(&owner,ram,sizeof ram);
    ram[8191*4]=1;
    if(!reww_surface_changed(&owner,ram)) return 1;
    ram[8191*4]=0;
    for(unsigned i=8192*4;i<sizeof ram;++i) {
        ram[i]=1;
        if(!reww_surface_changed(&owner,ram)) return 2;
        ram[i]=0;
    }
    /* Document the approximation: an unsampled interior dword can change
     * undetected. Do not promote this fingerprint to a full write tracker. */
    ram[4]=1;
    if(reww_surface_changed(&owner,ram)) return 3;
    ram[4]=0;
    if(reww_surface_changed(&owner,ram)) return 4;
    return 0;
}
''')


def production_function(path, name):
    """Compile the checked-in adapter, rather than reimplement its policy."""
    source = path.read_text(encoding='utf-8')
    # Locate the signature by its name and retain the complete declaration.
    name_at = source.index(name+'(')
    start = source.rfind('\nstatic ', 0, name_at)+1
    body = source.index('{', name_at)
    depth = 1
    end = body+1
    while depth:
        if source[end] == '{':
            depth += 1
        elif source[end] == '}':
            depth -= 1
        end += 1
    return source[start:end]


def run_fixture(source):
    cc = shutil.which('cl') or shutil.which('clang') or shutil.which('gcc')
    if not cc:
        raise unittest.SkipTest('C compiler unavailable')
    with tempfile.TemporaryDirectory(prefix='reww-ownership-') as tmp:
        c, exe = Path(tmp)/'fixture.c', Path(tmp)/'fixture.exe'
        c.write_text(source, encoding='utf-8')
        args = ([cc, '/nologo', '/W4', '/WX', '/O2', '/std:c11', '/I'+str(HEADER_DIR),
                 str(c), '/Fe:'+str(exe)] if Path(cc).stem.lower() == 'cl' else
                [cc, '-std=c11', '-Wall', '-Wextra', '-Werror', '-O2',
                 '-I'+str(HEADER_DIR), str(c), '-o', str(exe)])
        built = subprocess.run(args, cwd=tmp, capture_output=True, text=True)
        assert built.returncode == 0, built.stdout+built.stderr
        ran = subprocess.run([str(exe)], cwd=tmp, capture_output=True, text=True)
        assert ran.returncode == 0, f'exit {ran.returncode}: '+ran.stdout+ran.stderr


if __name__ == '__main__':
    unittest.main()
