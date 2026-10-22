/* Integrates the real XBE loader: no title execution or bundled game bytes.
 * The initial TLS block and CRT slot must be allocations outside the image,
 * and the former fixed addresses must retain their original section data. */
#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef void (*recomp_func_t)(void);
recomp_func_t recomp_lookup(uint32_t va) { (void)va; return NULL; }
recomp_func_t recomp_lookup_manual(uint32_t va) { (void)va; return NULL; }

static int failures;
static unsigned char *image;
static size_t image_size;
static uint32_t base, section_table, sections;

static uint32_t word(const void *p) { uint32_t n; memcpy(&n,p,4); return n; }
static unsigned char *guest(uint32_t va)
{
    return (unsigned char *)((uintptr_t)xbox_GetMemoryOffset()+va);
}
static void check(int ok,const char *what)
{
    printf("%s: %s\n",ok?"PASS":"FAIL",what);
    failures+=!ok;
}
static int file_span(uint64_t at,uint64_t length)
{
    return at<=image_size && length<=image_size-at;
}
static const unsigned char *section(unsigned i)
{
    return image+section_table+(size_t)i*0x38;
}
static int outside_sections(uint32_t va,uint32_t length)
{
    uint64_t end=(uint64_t)va+length;
    unsigned i;
    if (!va || !length || end>UINT32_MAX) return 0;
    for (i=0;i<sections;++i) {
        const unsigned char *s=section(i);
        uint32_t lo=word(s+4),size=word(s+8);
        if ((uint64_t)va<(uint64_t)lo+size && lo<end) return 0;
    }
    return 1;
}
/* Return exactly the loader's original byte, including zero-filled BSS. */
static int original_byte(uint32_t va,unsigned char *out)
{
    unsigned i;
    for (i=0;i<sections;++i) {
        const unsigned char *s=section(i);
        uint32_t lo=word(s+4),size=word(s+8),raw=word(s+12),raw_size=word(s+16);
        uint64_t off=(uint64_t)va-lo;
        if (va<lo || off>=size) continue;
        if (off<raw_size) {
            if (!file_span((uint64_t)raw+off,1)) return 0;
            *out=image[raw+off];
        } else *out=0;
        return 1;
    }
    return 0;
}
static int unchanged_image_range(uint32_t va,uint32_t length,unsigned *covered)
{
    uint32_t i;
    for (i=0;i<length;++i) {
        unsigned char expected;
        if (original_byte(va+i,&expected)) {
            ++*covered;
            if (guest(va+i)[0]!=expected) {
                fprintf(stderr,"Image overwritten at %08X: got %02X expected %02X\n",
                    va+i,guest(va+i)[0],expected);
                return 0;
            }
        }
    }
    return 1;
}
int main(int argc,char **argv)
{
    FILE *f;
    long size;
    uint32_t tls_directory,tls_start,tls_end,zero_fill,init_size,total,fs4,block,slot;
    unsigned covered=0;
    uint64_t rounded;
    int preserved;
    if (argc!=2) { fprintf(stderr,"Usage: reww_tls_layout_test <default.xbe>\n"); return 2; }
    f=fopen(argv[1],"rb");
    if (!f) { perror(argv[1]); return 2; }
    if (fseek(f,0,SEEK_END) || (size=ftell(f))<0 || fseek(f,0,SEEK_SET)) { fclose(f); return 2; }
    image_size=(size_t)size;
    image=malloc(image_size);
    if (!image || fread(image,1,image_size,f)!=image_size) { fclose(f); free(image); return 2; }
    fclose(f);
    if (!file_span(0,0x130) || memcmp(image,"XBEH",4)) { fprintf(stderr,"Invalid XBE header\n"); free(image); return 2; }
    base=word(image+0x104); sections=word(image+0x11c);
    section_table=word(image+0x120);
    tls_directory=word(image+0x12c);
    if (section_table<base || !sections || sections>64 ||
            !file_span(section_table-base,(uint64_t)sections*0x38) || !tls_directory) {
        fprintf(stderr,"Unsupported section table or missing TLS directory\n"); free(image); return 2;
    }
    section_table-=base;
    check(outside_sections(XBOX_STACK_BASE,XBOX_STACK_SIZE),
        "entire guest stack reservation lies outside XBE sections");
    /* Keep this a pure loader test even when launched from a graphics runner. */
    _putenv_s("RECOMP_PB_EXEC","");
    _putenv_s("RECOMP_AC97_READY","");
    _putenv_s("RECOMP_FB_WINDOW","");
    if (!xbox_MemoryLayoutInit(image,image_size)) { free(image); return 2; }
    tls_start=word(guest(tls_directory)); tls_end=word(guest(tls_directory+4));
    zero_fill=word(guest(tls_directory+16));
    init_size=tls_end>tls_start?tls_end-tls_start:0;
    rounded=((uint64_t)init_size+zero_fill+15)&~15ull;
    if (rounded>UINT32_MAX-4) { fprintf(stderr,"Invalid TLS size\n"); xbox_MemoryLayoutShutdown(); free(image); return 2; }
    total=(uint32_t)rounded+4;
    fs4=word(guest(XBOX_FS_BASE+4));
    check(fs4>=total,"fs:[4] can address the complete TLS block");
    block=fs4>=total?fs4-total:0;
    printf("TLS block=%08X size=%u fs:[4]=%08X\n",block,total,fs4);
    check(outside_sections(block,total),"TLS block does not overlap any XBE section");
    check(block && !(block&15),"TLS allocation is 16-byte aligned");
    check(block && xbox_HeapBlockSize(block)>=total,"TLS allocation owns the whole requested block");
    if (block && outside_sections(block,total) && xbox_HeapBlockSize(block)>=total) {
        slot=word(guest(block));
        check(outside_sections(slot,64),"CRT slot zero points outside all XBE sections");
        check(slot && !(slot&15),"CRT slot allocation is 16-byte aligned");
        check(slot && xbox_HeapBlockSize(slot)>=64,"CRT slot allocation owns at least 64 bytes");
        check((uint64_t)slot+64<=block || (uint64_t)block+total<=slot,
            "CRT per-thread data does not overlap its TLS image block");
        if (slot && outside_sections(slot,64) && xbox_HeapBlockSize(slot)>=64) {
            unsigned i; int zero=1;
            for (i=0;i<64;++i) if (guest(slot)[i]) zero=0;
            check(zero,"initial CRT per-thread data is zeroed");
        }
        if (init_size>4)
            check(!memcmp(guest(block+4),guest(tls_start+4),init_size-4),
                "initialized TLS bytes preserved after the loader-owned slot");
    }
    /* Historical collision addresses, not target facts: if an input image
     * covers either range, its bytes must survive exactly as loaded. */
    preserved=unchanged_image_range(0x00770000u,total,&covered);
    preserved=unchanged_image_range(0x00770200u,64,&covered) && preserved;
    check(preserved,"image bytes at former fixed TLS addresses are preserved");
    printf("Historical collision coverage: %u image bytes\n",covered);
    xbox_MemoryLayoutShutdown();
    free(image);
    printf("%d failure(s)\n",failures);
    return failures?1:0;
}
