/* Real retail kernel bridges, synthetic file: no game files or saves. */
#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef void (*guest_fn)(void);
guest_fn recomp_lookup(uint32_t a) { (void)a; return NULL; }
guest_fn recomp_lookup_manual(uint32_t a) { (void)a; return NULL; }
extern guest_fn recomp_lookup_kernel(uint32_t);
extern RECOMP_TLS uint32_t g_eax, g_esp;
extern ptrdiff_t g_xbox_mem_offset;
static unsigned char *mem;
static const uint32_t ord[] = {190,236,219,187,198,226,211};
enum {CREATE,WRITE,READ,CLOSE,FLUSH,SETINFO,QUERY};
#define U(a) (*(uint32_t *)(mem+(a)))
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x); exit(1); } } while(0)
static uint32_t invoke(unsigned slot, unsigned n, const uint32_t *args) {
    U(0x20000)=0xBEEF0001;
    memcpy(mem+0x20004,args,n*4);
    g_esp=0x20000;
    recomp_lookup_kernel(U(0x10000+4*slot))();
    CHECK(g_esp==0x20004+n*4);
    return g_eax;
}
static uint32_t open_file(unsigned disposition) {
    const char *name="D:\\retail-save-io.tmp";
    uint32_t args[]={0x30100,0xC0100000,0x30200,0x30300,0,0x80,7,disposition,0x20};
    U(0x30200)=0; U(0x30204)=0x30400; U(0x30208)=0;
    *(uint16_t *)(mem+0x30400)=(uint16_t)strlen(name);
    *(uint16_t *)(mem+0x30402)=(uint16_t)strlen(name)+1;
    U(0x30404)=0x30500; strcpy((char *)mem+0x30500,name);
    CHECK(invoke(CREATE,9,args)==0);
    CHECK(U(0x30300)==0 && U(0x30100));
    return U(0x30100);
}
static void close_file(uint32_t h) { CHECK(invoke(CLOSE,1,&h)==0); }
static uint32_t io(unsigned slot,uint32_t h,uint32_t buf,uint32_t size,uint32_t offset,uint32_t event) {
    uint32_t args[]={h,event,0,0,0x30300,buf,size,offset};
    memset(mem+0x30300,0xCC,8);
    uint32_t st=invoke(slot,8,args);
    CHECK(st==U(0x30300));
    return st;
}
static void set_length(uint32_t h,unsigned info,uint64_t value) {
    uint32_t args[]={h,0x30300,0x30600,8,info};
    memcpy(mem+0x30600,&value,8);
    CHECK(invoke(SETINFO,5,args)==0 && U(0x30300)==0);
}
int main(void) {
    char cwd[MAX_PATH],filename[MAX_PATH];
    HANDLE event;
    uint32_t h,args[5],st;
    unsigned i;
    CHECK(GetCurrentDirectoryA(MAX_PATH,cwd));
    snprintf(filename,sizeof(filename),"%s\\retail-save-io.tmp",cwd);
    CHECK(GetFileAttributesA(filename)==INVALID_FILE_ATTRIBUTES);
    mem=VirtualAlloc(NULL,16*1024*1024,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    CHECK(mem); g_xbox_mem_offset=(ptrdiff_t)mem;
    for(i=0;i<sizeof(ord)/sizeof(ord[0]);i++) U(0x10000+4*i)=0x80000000u|ord[i];
    xbox_path_init(cwd,cwd);
    xbox_kernel_set_thunk_address(0x10000,sizeof(ord)/sizeof(ord[0]));
    xbox_kernel_bridge_init();
    h=open_file(2); /* FILE_CREATE */
    event=CreateEventA(NULL,TRUE,FALSE,NULL);
    CHECK(event && (uintptr_t)event<=UINT32_MAX);
    for(i=0;i<48262;i++) mem[0x40000+i]=(unsigned char)(i*37+11);
    CHECK(io(WRITE,h,0x40000,20,0,(uint32_t)(uintptr_t)event)==0 && U(0x30304)==20);
    CHECK(WaitForSingleObject(event,0)==WAIT_OBJECT_0);
    CHECK(io(WRITE,h,0x40014,48242,0,0)==0 && U(0x30304)==48242);
    args[0]=h; args[1]=0x30300;
    CHECK(invoke(FLUSH,2,args)==0 && U(0x30300)==0);
    close_file(h); h=open_file(1);
    CHECK(io(READ,h,0x50000,48262,0,0)==0 && U(0x30304)==48262);
    CHECK(!memcmp(mem+0x40000,mem+0x50000,48262));
    /* Explicit byte offset must patch the file without truncating its tail. */
    U(0x30600)=5; U(0x30604)=0;
    CHECK(io(WRITE,h,0x40000,7,0x30600,0)==0 && U(0x30304)==7);
    set_length(h,14,0); /* FilePositionInformation */
    CHECK(io(READ,h,0x50000,48262,0,0)==0 && U(0x30304)==48262);
    CHECK(!memcmp(mem+0x50005,mem+0x40000,7));
    CHECK(!memcmp(mem+0x5000C,mem+0x4000C,48250));
    set_length(h,20,28); /* options.cfg-sized truncation */
    set_length(h,14,0);
    CHECK(io(READ,h,0x50000,100,0,0)==0 && U(0x30304)==28);
    CHECK(io(READ,h,0x50000,1,0,0)==0xC0000011u && U(0x30304)==0);
    close_file(h);
    args[0]=0x7FFFFFFF; args[1]=0x30300;
    st=invoke(FLUSH,2,args);
    CHECK(st!=0 && U(0x30300)==st && U(0x30304)==0);
    CloseHandle(event);
    CHECK(DeleteFileA(filename));
    VirtualFree(mem,0,MEM_RELEASE);
    puts("retail save I/O: segmented write/reopen/read, event, offset, truncate, EOF and flush failure passed");
    return 0;
}
