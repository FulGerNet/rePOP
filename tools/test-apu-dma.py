"""Retail APU high-VA DMA regression: production map, lock, resolver and SGE.

No game files or game process. Uses Win32 virtual reservation and small commits.
Products stay in ignored build/apu-dma-tests/.
"""
from pathlib import Path
import os
import subprocess
root=Path(__file__).resolve().parents[1]
if os.name!='nt': raise SystemExit('Requires Windows virtual memory and SRW locks')
build=root/'build/apu-dma-tests'; project=build/'project'; project.mkdir(parents=True,exist_ok=True)
apu=(root/'port/third_party/xboxrecomp-retail/src/apu/apu_core.c').read_text(encoding='utf-8')
start=apu.index('static xbox_apu_dma_table s_apu_dma;')
end=apu.index('\n/* The interrupt line,',start)
production=apu[start:end]
vp=(root/'port/third_party/xboxrecomp-retail/src/apu/apu_vp.c').read_text(encoding='utf-8')
start=vp.index('static hwaddr get_data_ptr('); end=vp.index('\n}',start)+2
sge=vp[start:end]
header=(root/'port/third_party/xboxrecomp-retail/src/kernel/xbox_apu_dma.h').as_posix()
prefix=r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#define XBOX_APU_HEAP_ALIAS 0x0B000000u
#define TARGET_PAGE_SIZE 4096
#define address_space_memory NULL
typedef uint64_t hwaddr;
static uint8_t *g_apu_ram_ptr;
uint32_t g_xbox_image_lo=0x10000, g_xbox_image_hi=0x20000;
uint32_t xbox_ContiguousAllocatedBytes(void) { return 0x4000; }
#define CHECK(x) do { if(!(x)){printf("FAIL %d: %s\n",__LINE__,#x);return 1;} } while(0)
'''
helpers=r'''
static uint32_t ldl_le_phys(void *unused,hwaddr addr) {
    uint32_t v; (void)unused; memcpy(&v,mcpx_apu_phys(addr),4); return v;
}
static DWORD WINAPI map_thread(void *unused) {
    unsigned i; (void)unused;
    for(i=0;i<10000;i++) if(xbox_ApuDmaMap(0x745DE123)!=XBOX_APU_DMA_BASE+0x123) return 1;
    return 0;
}
'''
main=r'''
int main(void) {
    uint32_t a,b,c,i,status; HANDLE threads[4]; uint8_t block[36];
    g_apu_ram_ptr=VirtualAlloc(NULL,0x100000000ull,MEM_RESERVE,PAGE_NOACCESS);
    CHECK(g_apu_ram_ptr);
    CHECK(VirtualAlloc(g_apu_ram_ptr+0x745DE000,8192,MEM_COMMIT,PAGE_READWRITE));
    CHECK(VirtualAlloc(g_apu_ram_ptr+0x10000,4096,MEM_COMMIT,PAGE_READWRITE));
    a=xbox_ApuDmaMap(0x745DE123); b=xbox_ApuDmaMap(0x745DF000);
    CHECK(a==XBOX_APU_DMA_BASE+0x123); CHECK((a&0x0FFFFFFF)==a);
    CHECK(xbox_ApuDmaMap(0x745DEFFF)==(a&~4095u)+4095);
    CHECK(xbox_ApuDmaResolve(b+17)==0x745DF011);
    CHECK(mcpx_apu_phys(a)==g_apu_ram_ptr+0x745DE123);
    CHECK(mcpx_apu_phys(0x10020)==g_apu_ram_ptr+0x10020); /* image unchanged */
    CHECK(mcpx_apu_phys(0x2000)==g_apu_ram_ptr+0x80002000ull); /* contiguous unchanged */
    CHECK(mcpx_apu_phys(0x600000)==g_apu_ram_ptr+0x600000); /* ordinary RAM */
    CHECK(mcpx_apu_phys(XBOX_APU_HEAP_ALIAS+0x12345)==g_apu_ram_ptr+0x12345);
    /* Force nonadjacent tokens for adjacent virtual pages: SG must name pages. */
    c=xbox_ApuDmaMap(0x74600000); xbox_ApuDmaUnmap(0x745DF000,4096);
    xbox_ApuDmaMap(0x74700000); b=xbox_ApuDmaMap(0x745DF000);
    CHECK(b!=(a&~4095u)+4096);
    *(uint32_t *)(g_apu_ram_ptr+0x10000)=a&~4095u;
    *(uint32_t *)(g_apu_ram_ptr+0x10008)=b;
    for(i=0;i<64;i++)g_apu_ram_ptr[0x745DEFE0u+i]=(uint8_t)(i+1);
    CHECK(get_data_ptr(0x10000,1,4093)==(a&~4095u)+4093);
    CHECK(get_data_ptr(0x10000,1,4097)==b+1);
    CHECK(ldl_le_phys(NULL,get_data_ptr(0x10000,1,4094))==0x2221201f);
    memcpy(block,mcpx_apu_phys(get_data_ptr(0x10000,1,4090)),36);
    for(i=0;i<36;i++) CHECK(block[i]==i+27); /* ADPCM read crosses VA page */
    for(i=0;i<4;i++){threads[i]=CreateThread(NULL,0,map_thread,NULL,0,NULL);CHECK(threads[i]);}
    CHECK(WaitForMultipleObjects(4,threads,TRUE,INFINITE)==WAIT_OBJECT_0);
    for(i=0;i<4;i++){CHECK(GetExitCodeThread(threads[i],&status));CHECK(status==0);CloseHandle(threads[i]);}
    xbox_ApuDmaUnmap(0x745DE800,8192); /* intersects both mapped pages */
    CHECK(!xbox_ApuDmaResolve(a)); CHECK(!xbox_ApuDmaResolve(b));
    CHECK(mcpx_apu_phys(a)!=g_apu_ram_ptr+(a&0x03ffffff));
    CHECK(ldl_le_phys(NULL,(a&~4095u)+4094)==0); /* revoked token is silent */
    CHECK(xbox_ApuDmaResolve(c)==0x74600000);
    /* Token exhaustion must report failure and unmapping must recover capacity. */
    memset(&s_apu_dma,0,sizeof s_apu_dma);
    for(i=0;i<XBOX_APU_DMA_PAGES;i++) CHECK(xbox_ApuDmaMap(0x40000000+i*4096));
    CHECK(!xbox_ApuDmaMap(0x70000000));
    xbox_ApuDmaUnmap(0x40000000,4096);
    CHECK(xbox_ApuDmaMap(0x70000123)==XBOX_APU_DMA_BASE+0x123);
    CHECK(xbox_ApuDmaResolve(XBOX_APU_DMA_BASE+0x123)==0x70000123);
    CHECK(!xbox_ApuDmaResolve(XBOX_APU_HEAP_ALIAS));
    VirtualFree(g_apu_ram_ptr,0,MEM_RELEASE);
    puts("PASS retail APU DMA: masks, SG offsets, crossing samples/ADPCM, stable concurrent maps, invalidation/reuse/exhaustion, legacy RAM");
    return 0;
}
'''
(project/'test.c').write_text(prefix+f'\n#include "{header}"\n'+production+helpers+sge+main,encoding='utf-8')
(project/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(ApuDmaTest C)\nadd_executable(apu-dma test.c)\nenable_testing()\nadd_test(NAME apu-dma COMMAND apu-dma)\n')
environment={k.upper():v for k,v in os.environ.items()}
def run(*args): subprocess.run(args,env=environment,check=True)
run('cmake','-S',str(project),'-B',str(build/'native-x64'),'-A','x64')
run('cmake','--build',str(build/'native-x64'),'--config','Release')
run('ctest','--test-dir',str(build/'native-x64'),'-C','Release','--output-on-failure')
