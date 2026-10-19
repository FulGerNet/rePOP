/**
 * PoP SoT xbox-demo - unsorted, chunk 0
 * Functions no evidence places
 * Functions: 160 (0x00011000 - 0x0027F5B7)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00011000
 * Original: 0x00011000 - 0x00011036 (54 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011000: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x00011008u); RECOMP_ABI_CALL(0x00087BA0u, sub_00087BA0); /* call 0x00087BA0 */

loc_00011008: ;
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(eax + 0xA8);
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x34A644) = eax;
    MEM32(0x64D29C) = eax;
    MEM32(eax + 0xA8) = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x0001102Cu); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_0001102C: ;
    esi = MEM32(esi + 0xC);
    PUSH32(esp, 0x00011034u); RECOMP_ABI_CALL(0x00087DD0u, sub_00087DD0); /* call 0x00087DD0 */

loc_00011034: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011040
 * Original: 0x00011040 - 0x00011087 (71 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00011040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC0C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, edi);
    MEM32(esp + 0xC0C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x2FF;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011076u); RECOMP_ABI_CALL(0x0027F5B7u, sub_0027F5B7); /* call 0x0027F5B7 */

loc_00011076: ;
    ecx = MEM32(esp + 0xC0C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011082u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_00011082: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00011090
 * Original: 0x00011090 - 0x000110A8 (24 bytes, 8 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011090: ;
    eax = MEM32(0x34A220);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000110A7; /* je: equal / zero */

loc_00011099: ;
    PUSH32(esp, 0x34A220);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000110A7u); RECOMP_ABI_CALL(0x0027F5B7u, sub_0027F5B7); /* call 0x0027F5B7 */

loc_000110A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C6180
 * Original: 0x000C6180 - 0x000C63C0 (576 bytes, 236 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C6180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000C6180: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebx) = 0;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x11 (8-bit) */
    _cf = (int)(_fa < _fb);
    ebp = esi + eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_000C61BB; /* jbe: below or equal (unsigned <=) */

loc_000C6199: ;
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x11));
    ecx = ecx - 0x11;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000C6270; /* jb: below (unsigned <) */

loc_000C61A9: ;
    /* nop */

loc_000C61B0: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C61B0; /* jne: not equal / not zero */

loc_000C61B9: ;
    goto loc_000C622A;

loc_000C61BB: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000C627D; /* jae: above or equal (unsigned >=) */

loc_000C61C8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C61E7; /* jne: not equal / not zero */

loc_000C61CC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C61DF; /* jne: not equal / not zero */

loc_000C61D1: ;
    SET_LO8(edx, MEM8(esi + 1));
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFF)) >> 32) & 1);
    ecx = ecx + 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C61D1; /* je: equal / zero */

loc_000C61DF: ;
    edx = ZX8(MEM8(esi));
    ecx = ecx + edx + 0xF;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C61E7: ;
    edx = MEM32(esi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C622A; /* je: equal / zero */

loc_000C61F4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000C6221; /* jb: below (unsigned <) */

loc_000C61F9: ;
    /* nop */

loc_000C6200: ;
    edx = MEM32(esi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000C6200; /* jae: above or equal (unsigned >=) */

loc_000C6212: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000C622A; /* jbe: below or equal (unsigned <=) */

loc_000C6216: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C6216; /* jne: not equal / not zero */

loc_000C621F: ;
    goto loc_000C622A;

loc_000C6221: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C6221; /* jne: not equal / not zero */

loc_000C622A: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000C627D; /* jae: above or equal (unsigned >=) */

loc_000C6233: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(esi));
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(edx + -2049));
    _fb = (uint32_t)(0x801) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x801));
    edx = edx - 0x801;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C6253: ;
    SET_LO8(ecx, MEM8(edx));
    MEM8(eax) = LO8(ecx);
    SET_LO8(edx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C625E: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + -2));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000C61BB; /* je: equal / zero */

loc_000C626C: ;
    /* nop */

loc_000C6270: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C6270; /* jne: not equal / not zero */

loc_000C6279: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C627D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000C62BB; /* jb: below (unsigned <) */

loc_000C6282: ;
    edx = ecx;
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ZX8(MEM8(esi));
    if (3) _cf = (int)(((edx) >> (32 - (3))) & 1);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (5) _cf = (int)(((ecx) >> ((5) - 1)) & 1);
    ecx = ecx >> 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000C629C: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(edi + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_000C62B0: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C62B0; /* jne: not equal / not zero */

loc_000C62B9: ;
    goto loc_000C625E;

loc_000C62BB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000C62F6; /* jb: below (unsigned <) */

loc_000C62C0: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_000C62E6; /* jne: not equal / not zero */

loc_000C62C5: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C62DE; /* jne: not equal / not zero */

loc_000C62CA: ;
    /* nop */

loc_000C62D0: ;
    SET_LO8(edx, MEM8(esi + 1));
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFF)) >> 32) & 1);
    ecx = ecx + 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C62D0; /* je: equal / zero */

loc_000C62DE: ;
    edx = ZX8(MEM8(esi));
    ecx = ecx + edx + 0x1F;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C62E6: ;
    edx = ZX16(MEM16(esi));
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C6340;

loc_000C62F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000C638E; /* jb: below (unsigned <) */

loc_000C62FF: ;
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx & 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0xB) _cf = (int)(((edx) >> (32 - (0xB))) & 1);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_000C632B; /* jne: not equal / not zero */

loc_000C6310: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C6323; /* jne: not equal / not zero */

loc_000C6315: ;
    SET_LO8(edx, MEM8(esi + 1));
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFF)) >> 32) & 1);
    ecx = ecx + 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6315; /* je: equal / zero */

loc_000C6323: ;
    edx = ZX8(MEM8(esi));
    ecx = ecx + edx + 7;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C632B: ;
    edx = ZX16(MEM16(esi));
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C63A4; /* je: equal / zero */

loc_000C633A: ;
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(0x4000));
    edi = edi - 0x4000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000C6340: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000C629C; /* jb: below (unsigned <) */

loc_000C6349: ;
    edx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000C629C; /* jl: less (signed <) */

loc_000C6356: ;
    edx = MEM32(edi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(2));
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000C6363: ;
    edx = MEM32(edi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000C6363; /* jae: above or equal (unsigned >=) */

loc_000C6375: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000C625E; /* jbe: below or equal (unsigned <=) */

loc_000C637D: ;
    /* nop */

loc_000C6380: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C6380; /* jne: not equal / not zero */

loc_000C6389: ;
    goto loc_000C625E;

loc_000C638E: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(esi));
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000C6253;

loc_000C63A4: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x10)));
    eax = eax - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C63B4; /* jne: not equal / not zero */

loc_000C63AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000C63B4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C62CA
 * Original: 0x000C62CA - 0x000C63C0 (246 bytes, 95 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C62CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C62CA: ;
    /* nop */

loc_000C62D0: ;
    SET_LO8(edx, MEM8(esi + 1));
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFF)) >> 32) & 1);
    ecx = ecx + 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C62D0; /* je: equal / zero */

loc_000C62DE: ;
    edx = ZX8(MEM8(esi));
    ecx = ecx + edx + 0x1F;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ZX16(MEM16(esi));
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C6340;

    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000C638E; /* jb: below (unsigned <) */

loc_000C62FF: ;
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx & 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0xB) _cf = (int)(((edx) >> (32 - (0xB))) & 1);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_000C632B; /* jne: not equal / not zero */

loc_000C6310: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C6323; /* jne: not equal / not zero */

loc_000C6315: ;
    SET_LO8(edx, MEM8(esi + 1));
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFF)) >> 32) & 1);
    ecx = ecx + 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6315; /* je: equal / zero */

loc_000C6323: ;
    edx = ZX8(MEM8(esi));
    ecx = ecx + edx + 7;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C632B: ;
    edx = ZX16(MEM16(esi));
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C63A4; /* je: equal / zero */

loc_000C633A: ;
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(0x4000));
    edi = edi - 0x4000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000C6340: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000C629C(); return; } /* jb: below (unsigned <) */

loc_000C6349: ;
    edx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000C629C(); return; } /* jl: less (signed <) */

loc_000C6356: ;
    edx = MEM32(edi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(2));
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000C6363: ;
    edx = MEM32(edi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000C6363; /* jae: above or equal (unsigned >=) */

loc_000C6375: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000C625E(); return; } /* jbe: below or equal (unsigned <=) */

loc_000C637D: ;
    /* nop */

loc_000C6380: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C6380; /* jne: not equal / not zero */

loc_000C6389: ;
    g_seh_ebp = ebp; sub_000C625E(); return; /* tail jmp 0x000C625E */

loc_000C638E: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(esi));
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_000C6253(); return; /* tail jmp 0x000C6253 */

loc_000C63A4: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x10)));
    eax = eax - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C63B4; /* jne: not equal / not zero */

loc_000C63AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000C63B4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C63C0
 * Original: 0x000C63C0 - 0x000C6472 (178 bytes, 74 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C63C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C63C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(0x64DA18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C63EE; /* je: equal / zero */

loc_000C63D5: ;
    eax = esi;
    edi = MEM32(eax + 8);
    esi = MEM32(esi);
    eax = edi + 0xC;
    edx = ebp;
    PUSH32(esp, 0x000C63E6u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000C63E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6424; /* je: equal / zero */

loc_000C63EA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C63D5; /* jne: not equal / not zero */

loc_000C63EE: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C641C; /* je: equal / zero */

loc_000C63F4: ;
    eax = 0x48;
    PUSH32(esp, 0x000C63FEu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000C63FE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000C642C; /* jne: not equal / not zero */

loc_000C6408: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000C6417u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C6417: ;
    PUSH32(esp, 0x000C641Cu); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000C641C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C6424: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C642C: ;
    edx = esi + 0xC;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000C6433: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6433; /* jne: not equal / not zero */

loc_000C643D: ;
    MEM32(esi) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x44) = 8;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x38) = ebx;
    eax = esp + 0x10;
    MEM32(esi + 0x3C) = ebx;
    PUSH32(esp, eax);
    edi = 0x64DA18;
    MEM32(esi + 0x34) = ebx;
    PUSH32(esp, 0x000C646Au); RECOMP_ABI_CALL(0x000C7AC0u, sub_000C7AC0); /* call 0x000C7AC0 */

loc_000C646A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C6480
 * Original: 0x000C6480 - 0x000C64C3 (67 bytes, 32 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C6480: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5F60E4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x5F60E0);
    if (CMP_LE(_fas, _fbs)) goto loc_000C64B5; /* jle: less or equal (signed <=) */

loc_000C649A: ;
    /* nop */

loc_000C64A0: ;
    eax = edi;
    edx = ebp;
    PUSH32(esp, 0x000C64A9u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000C64A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C64BC; /* je: equal / zero */

loc_000C64AD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C64A0; /* jl: less (signed <) */

loc_000C64B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C64BC: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C64D0
 * Original: 0x000C64D0 - 0x000C64EF (31 bytes, 10 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C64D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C64D0: ;
    eax = MEM32(0x5F60E0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C64E1; /* je: equal / zero */

loc_000C64DC: ;
    PUSH32(esp, 0x000C64E1u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000C64E1: ;
    MEM32(0x5F60E0) = esi;
    MEM32(0x5F60E4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C69DE
 * Original: 0x000C69DE - 0x000C6A39 (91 bytes, 26 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C69DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C69DE: ;
    eax = MEM32(esi + 0x44);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C6A06; /* je: equal / zero */

loc_000C69E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C69F7; /* je: equal / zero */

loc_000C69EB: ;
    PUSH32(esp, 0x1DC);
    edx = 0x3247A8;
    goto loc_000C6A1F;

loc_000C69F7: ;
    POP32(esp, edi);
    MEM32(esi + 0x44) = 8;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C6A06: ;
    POP32(esp, edi);
    MEM32(esi + 0x44) = 4;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C6A1F: ;
    ecx = 0x3248E4;
    PUSH32(esp, 0x324878);
    PUSH32(esp, 0x000C6A2Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C6A2E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EE8F0
 * Original: 0x000EE8F0 - 0x000EE928 (56 bytes, 28 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EE8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EE8F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE924; /* je: equal / zero */

loc_000EE8FF: ;
    /* nop */

loc_000EE900: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE91B; /* jne: not equal / not zero */

loc_000EE904: ;
    eax = esi;
    esi = MEM32(esi + 4);
    PUSH32(esp, 0x000EE90Eu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000EE90E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE917; /* je: equal / zero */

loc_000EE912: ;
    MEM32(edi + 4) = esi;
    goto loc_000EE920;

loc_000EE917: ;
    MEM32(ebx) = esi;
    goto loc_000EE920;

loc_000EE91B: ;
    edi = esi;
    esi = MEM32(esi + 4);

loc_000EE920: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE900; /* jne: not equal / not zero */

loc_000EE924: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000EE930
 * Original: 0x000EE930 - 0x000EEA4B (283 bytes, 73 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE930: ;
    ecx = MEM32(0x64D83C);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000EE93Eu); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE93E: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE9C4; /* je: equal / zero */

loc_000EE948: ;
    ecx = MEM32(esi + 0x110);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000EE95Au); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE95A: ;
    eax = 8;
    PUSH32(esp, 0x000EE964u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000EE964: ;
    edx = MEM32(esi + 0x110);
    ecx = MEM32(edx + 0x10);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x10C);
    MEM32(eax) = edx;
    ecx = MEM32(esi + 0x110);
    MEM32(ecx + 0x10) = eax;
    edx = MEM32(eax);
    ebx = MEM32(esi + 0x110);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000EE992u); RECOMP_ABI_CALL(0x000EE8F0u, sub_000EE8F0); /* call 0x000EE8F0 */

loc_000EE992: ;
    eax = MEM32(esi + 0x110);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EE9A4u); RECOMP_ABI_CALL(0x00281A66u, sub_00281A66); /* call 0x00281A66 */

loc_000EE9A4: ;
    edx = MEM32(esi + 0x110);
    eax = MEM32(edx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE9B3u); RECOMP_ABI_CALL(0x00281A66u, sub_00281A66); /* call 0x00281A66 */

loc_000EE9B3: ;
    ecx = MEM32(esi + 0x110);
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0x000EE9C1u); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE9C1: ;
    POP32(esp, ebx);
    goto loc_000EE9DA;

loc_000EE9C4: ;
    eax = MEM32(esi + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE9DA; /* je: equal / zero */

loc_000EE9CE: ;
    edx = MEM32(esi + 0x108);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE9DAu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE9DA: ;
    eax = MEM32(0x5F95A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE9FE; /* jne: not equal / not zero */

loc_000EE9E3: ;
    ecx = MEM32(eax + 0x118);
    MEM32(0x5F95A4) = ecx;
    PUSH32(esp, 0x000EE9F4u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000EE9F4: ;
    eax = MEM32(0x64D83C);
    g_seh_ebp = ebp; sub_000EDF60(); return; /* tail jmp 0x000EDF60 */

loc_000EE9FE: ;
    edx = MEM32(eax + 0x118);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    ecx = eax + 0x118;
    if (CMP_EQ(_fa, _fb)) goto loc_000EEA28; /* je: equal / zero */

loc_000EEA0E: ;
    edi = edi;

loc_000EEA10: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EEA28; /* je: equal / zero */

loc_000EEA16: ;
    eax = ecx;
    edx = MEM32(eax + 0x118);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    ecx = eax + 0x118;
    if (CMP_NE(_fa, _fb)) goto loc_000EEA10; /* jne: not equal / not zero */

loc_000EEA28: ;
    edx = MEM32(eax + 0x118);
    ecx = MEM32(edx + 0x118);
    MEM32(eax + 0x118) = ecx;
    eax = esi;
    PUSH32(esp, 0x000EEA41u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000EEA41: ;
    eax = MEM32(0x64D83C);
    g_seh_ebp = ebp; sub_000EDF60(); return; /* tail jmp 0x000EDF60 */

}

/**
 * sub_000F4B00
 * Original: 0x000F4B00 - 0x000F4B13 (19 bytes, 8 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4B00: ;
    ecx = MEM32(eax + 0x34);
    eax = ecx + edx * 4;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4B20
 * Original: 0x000F4B20 - 0x000F4BA9 (137 bytes, 57 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4B20: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4B2C; /* jne: not equal / not zero */

loc_000F4B28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F4B34;

loc_000F4B2C: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000F4B34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F4B6E; /* jae: above or equal (unsigned >=) */

loc_000F4B38: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4B52; /* jne: not equal / not zero */

loc_000F4B3C: ;
    edx = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0x000F4B4Eu); RECOMP_ABI_CALL(0x000F4BD0u, sub_000F4BD0); /* call 0x000F4BD0 */

loc_000F4B4E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F4B52: ;
    eax = MEM32(edi + 8);
    edx = MEM32(edi + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0x000F4B6Au); RECOMP_ABI_CALL(0x000F4BD0u, sub_000F4BD0); /* call 0x000F4BD0 */

loc_000F4B6A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F4B6E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4BA5; /* je: equal / zero */

loc_000F4B72: ;
    eax = MEM32(edi + 8);
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F4BA5; /* jae: above or equal (unsigned >=) */

loc_000F4B80: ;
    edx = esi + ecx * 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4BA5; /* je: equal / zero */

loc_000F4B87: ;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = ecx * 4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F4B9Du); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_000F4B9D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;

loc_000F4BA5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4BB0
 * Original: 0x000F4BB0 - 0x000F4BCF (31 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4BB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = edi;
    if (CMP_BE(_fa, _fb)) goto loc_000F4BCB; /* jbe: below or equal (unsigned <=) */

loc_000F4BB6: ;
    ecx = esi;
    PUSH32(esp, ebx);
    /* nop */

loc_000F4BC0: ;
    ebx = MEM32(edx);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F4BC0; /* jne: not equal / not zero */

loc_000F4BCA: ;
    POP32(esp, ebx);

loc_000F4BCB: ;
    eax = edi + esi * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4BD0
 * Original: 0x000F4BD0 - 0x000F4DC5 (501 bytes, 201 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4BD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4BEA; /* jne: not equal / not zero */

loc_000F4BE6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F4BF2;

loc_000F4BEA: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000F4BF2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4DBF; /* je: equal / zero */

loc_000F4BFA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4C02; /* jne: not equal / not zero */

loc_000F4BFE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F4C0A;

loc_000F4C02: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000F4C0A: ;
    PUSH32(esp, edi);
    edi = 0x3FFFFFFF;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F4C1B; /* jae: above or equal (unsigned >=) */

loc_000F4C16: ;
    PUSH32(esp, 0x000F4C1Bu); RECOMP_ABI_CALL(0x00018B70u, sub_00018B70); /* call 0x00018B70 */

loc_000F4C1B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4C23; /* jne: not equal / not zero */

loc_000F4C1F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F4C2B;

loc_000F4C23: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000F4C2B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_000F4D0B; /* jae: above or equal (unsigned >=) */

loc_000F4C36: ;
    edx = eax;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = 0x3FFFFFFF;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F4C49; /* jae: above or equal (unsigned >=) */

loc_000F4C45: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F4C4B;

loc_000F4C49: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F4C4B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4C53; /* jne: not equal / not zero */

loc_000F4C4F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F4C5B;

loc_000F4C53: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000F4C5B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F4C73; /* jae: above or equal (unsigned >=) */

loc_000F4C61: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4C69; /* jne: not equal / not zero */

loc_000F4C65: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F4C71;

loc_000F4C69: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000F4C71: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F4C73: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000F4C80u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F4C80: ;
    ecx = MEM32(ebp + 4);
    ebx = eax;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax * 4;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F4C9Du); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_000F4C9D: ;
    edx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F4CB2; /* jbe: below or equal (unsigned <=) */

loc_000F4CA8: ;
    eax = MEM32(esp + 0x18);
    ecx = esi;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000F4CB2: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = edx + esi * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F4CCCu); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_000F4CCC: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4CDA; /* jne: not equal / not zero */

loc_000F4CD6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F4CE2;

loc_000F4CDA: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000F4CE2: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4CF1; /* je: equal / zero */

loc_000F4CE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4CEEu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F4CEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F4CF1: ;
    eax = MEM32(esp + 0x10);
    ecx = ebx + esi * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 8) = ecx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000F4D0B: ;
    edi = MEM32(ebp + 8);
    ebx = MEM32(esp + 0x1C);
    edx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    eax = esi * 4;
    MEM32(esp + 0x1C) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_000F4D75; /* jae: above or equal (unsigned >=) */

loc_000F4D28: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x000F4D34u); RECOMP_ABI_CALL(0x000F4DD0u, sub_000F4DD0); /* call 0x000F4DD0 */

loc_000F4D34: ;
    edi = MEM32(ebp + 8);
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x18;
    PUSH32(esp, 0x000F4D49u); RECOMP_ABI_CALL(0x000F4BB0u, sub_000F4BB0); /* call 0x000F4BB0 */

loc_000F4D49: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = edx;
    ebp = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4DBD; /* je: equal / zero */

loc_000F4D5D: ;
    /* nop */

loc_000F4D60: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4D60; /* jne: not equal / not zero */

loc_000F4D6D: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000F4D75: ;
    esi = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0x000F4D83u); RECOMP_ABI_CALL(0x000F4DD0u, sub_000F4DD0); /* call 0x000F4DD0 */

loc_000F4D83: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi * 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F4D9Cu); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_000F4D9C: ;
    edx = MEM32(esp + 0x28);
    eax = edx + ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4DBD; /* je: equal / zero */

loc_000F4DAA: ;
    /* nop */

loc_000F4DB0: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4DB0; /* jne: not equal / not zero */

loc_000F4DBD: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_000F4DBF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F4DD0
 * Original: 0x000F4DD0 - 0x000F4DF2 (34 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4DD0: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = eax * 4;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4DE9u); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_000F4DE9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4E00
 * Original: 0x000F4E00 - 0x000F4E18 (24 bytes, 8 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4E00: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4E20
 * Original: 0x000F4E20 - 0x000F4E35 (21 bytes, 6 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4E20: ;
    PUSH32(esp, 0x000F4E25u); RECOMP_ABI_CALL(0x000F4E00u, sub_000F4E00); /* call 0x000F4E00 */

loc_000F4E25: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x18) = 0xFFFFFFFFu;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4E40
 * Original: 0x000F4E40 - 0x000F4F19 (217 bytes, 73 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F4E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F4E40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x10);
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F4E58; /* je: equal / zero */

loc_000F4E54: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 1;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F4E58: ;
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x68) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x68 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F4E65; /* je: equal / zero */

loc_000F4E61: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 2;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F4E65: ;
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x90) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x90 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000F4E73; /* jne: not equal / not zero */

loc_000F4E6E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F4E7A; /* je: equal / zero */

loc_000F4E73: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = edi;

loc_000F4E7A: ;
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F4E87; /* je: equal / zero */

loc_000F4E83: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 0x10;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F4E87: ;
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF1080) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xF1080 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F4E97; /* je: equal / zero */

loc_000F4E93: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 0x20;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F4E97: ;
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0xE4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0xE4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F4EBC; /* je: equal / zero */

loc_000F4EA0: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 0x400;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x400;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x14) = edx;

loc_000F4EBC: ;
    edx = MEM32(0x64D29C);
    edi = MEM32(edx + 0x430);
    edx = MEM32(edi + 4);
    _cf = 0; /* logical op clears CF */
    edx = edx | MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ MEM32(edi + 0xB0464);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F4EE3; /* je: equal / zero */

loc_000F4ED9: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 0x400;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;

loc_000F4EE3: ;
    edx = esi;
    if (0x10) _cf = (int)(((edx) >> ((0x10) - 1)) & 1);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x10) _cf = (int)(((ecx) >> ((0x10) - 1)) & 1);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax + 0xC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000F4F11; /* je: equal / zero */

loc_000F4EF8: ;
    ecx = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(eax + 0x18);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x18) = ecx;

loc_000F4F11: ;
    POP32(esp, edi);
    MEM32(eax + 0x10) = esi;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4F20
 * Original: 0x000F4F20 - 0x000F4F83 (99 bytes, 28 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F4F20: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F4F37; /* je: equal / zero */

loc_000F4F2E: ;
    MEM32(eax + 0x14) = 0xFF000000u;
    goto loc_000F4F3E;

loc_000F4F37: ;
    MEM32(eax + 0x14) = 0;

loc_000F4F3E: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D29C);
    ecx = MEM32(esi + 0x430);
    ecx = MEM32(ecx + 4);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    esi = MEM32(esi + 0x430);
    esi = MEM32(esi + 0xB0464);
    _cf = 0; /* logical op clears CF */
    esi = esi ^ ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0x30000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esp + 8);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = esi;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4F90
 * Original: 0x000F4F90 - 0x000F4F9E (14 bytes, 3 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4F90(void)
{

loc_000F4F90: ;
    MEM32(eax + 0x18) = 0xFFFFFFFFu;
    MEM32(eax) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4FA0
 * Original: 0x000F4FA0 - 0x000F54D6 (1334 bytes, 325 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4FA0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x64E780;
    PUSH32(esp, 0x000F4FB2u); RECOMP_ABI_CALL(0x000F49D0u, sub_000F49D0); /* call 0x000F49D0 */

loc_000F4FB2: ;
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x18), 1 (8-bit) */
    ebx = 4;
    eax = 2;
    ebp = 1;
    if (TEST_Z(_fa, _fb)) goto loc_000F5029; /* je: equal / zero */

loc_000F4FC7: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 1 (8-bit) */
    ecx = MEM32(0x2A7FF8);
    if (TEST_Z(_fa, _fb)) goto loc_000F4FDD; /* je: equal / zero */

loc_000F4FD3: ;
    ecx = ecx | ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A8000) = ebp;
    goto loc_000F4FE6;

loc_000F4FDD: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A8000) = ebx;

loc_000F4FE6: ;
    SET_LO8(edx, MEM8(esi + 0x10));
    ecx = ecx | ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    MEM32(0x2A8004) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_000F4FFB; /* jne: not equal / not zero */

loc_000F4FF5: ;
    MEM32(0x2A8004) = ebx;

loc_000F4FFB: ;
    SET_LO8(edx, MEM8(esi + 0x10));
    ecx = ecx | ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5010; /* je: equal / zero */

loc_000F5004: ;
    MEM32(0x2A800C) = eax;
    MEM32(0x2A8010) = eax;
    goto loc_000F501C;

loc_000F5010: ;
    MEM32(0x2A800C) = ebp;
    MEM32(0x2A8010) = ebp;

loc_000F501C: ;
    ecx = ecx | ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A7FF8) = ecx;
    MEM32(0x2A8014) = eax;

loc_000F5029: ;
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x18), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5058; /* je: equal / zero */

loc_000F502E: ;
    eax = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F503C; /* jne: not equal / not zero */

loc_000F5037: ;
    edi = 0x10101;

loc_000F503C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x28) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x28 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5046; /* je: equal / zero */

loc_000F5040: ;
    edi = edi | 0x1000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F5046: ;
    edx = edi;
    ecx = 0x40358;
    PUSH32(esp, 0x000F5052u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5052: ;
    MEM32(0x2A830C) = edi;

loc_000F5058: ;
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x18), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F50C2; /* je: equal / zero */

loc_000F505D: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F510F; /* je: equal / zero */

loc_000F5068: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = 0x4033C;
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000F5087; /* jns: not sign (positive) */

loc_000F5071: ;
    edx = 0x201;
    PUSH32(esp, 0x000F507Bu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F507B: ;
    MEM32(0x2A82E8) = 0x201;
    goto loc_000F509B;

loc_000F5087: ;
    edx = 0x204;
    PUSH32(esp, 0x000F5091u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5091: ;
    MEM32(0x2A82E8) = 0x204;

loc_000F509B: ;
    edi = MEM32(esi + 8);
    edx = edi;
    ecx = 0x40340;
    PUSH32(esp, 0x000F50AAu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F50AA: ;
    edx = ebp;
    ecx = 0x40300;
    MEM32(0x2A82F4) = edi;
    PUSH32(esp, 0x000F50BCu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F50BC: ;
    MEM32(0x2A82F0) = ebp;

loc_000F50C2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F50C4: ;
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x18), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F50E6; /* je: equal / zero */

loc_000F50CA: ;
    edi = MEM32(esi + 0x10);
    edi = edi >> 9;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ~edi;
    edi = edi & ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi;
    ecx = 0x4035C;
    PUSH32(esp, 0x000F50E0u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F50E0: ;
    MEM32(0x2A8300) = edi;

loc_000F50E6: ;
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x18), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F53B3; /* je: equal / zero */

loc_000F50F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x12));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F53B3; /* ja: above (unsigned >) */

loc_000F5101: ;
    eax = ZX8(MEM8(eax + 0xF54F8));
    { uint32_t _jt = MEM32(eax * 4 + 0xF54D8); /* switch: 8 entries, 8 targets */
    if (_jt == 0x000F5125u) goto loc_000F5125;
    if (_jt == 0x000F5160u) goto loc_000F5160;
    if (_jt == 0x000F5204u) goto loc_000F5204;
    if (_jt == 0x000F523Fu) goto loc_000F523F;
    if (_jt == 0x000F52F3u) goto loc_000F52F3;
    if (_jt == 0x000F5319u) goto loc_000F5319;
    if (_jt == 0x000F5376u) goto loc_000F5376;
    if (_jt == 0x000F53B3u) goto loc_000F53B3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F510F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40300;
    PUSH32(esp, 0x000F511Bu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F511B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x2A82F0) = ebx;
    goto loc_000F50C4;

loc_000F5125: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    PUSH32(esp, 0x000F5131u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5131: ;
    edx = ebp;
    ecx = 0x40344;
    MEM32(0x2A82EC) = ebx;
    PUSH32(esp, 0x000F5143u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5143: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40348;
    MEM32(0x2A82F8) = ebp;
    PUSH32(esp, 0x000F5155u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5155: ;
    MEM32(0x2A82FC) = ebx;
    goto loc_000F53B3;

loc_000F5160: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F516Cu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F516C: ;
    MEM32(0x2A82EC) = ebp;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    ecx = 0x40344;
    if (TEST_Z(_fa, _fb)) goto loc_000F51B5; /* je: equal / zero */

loc_000F517F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000F519C; /* jns: not sign (positive) */

loc_000F5183: ;
    edx = 0x305;
    PUSH32(esp, 0x000F518Du); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F518D: ;
    MEM32(0x2A82F8) = 0x305;
    goto loc_000F5298;

loc_000F519C: ;
    edx = 0x304;
    PUSH32(esp, 0x000F51A6u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F51A6: ;
    MEM32(0x2A82F8) = 0x304;
    goto loc_000F526F;

loc_000F51B5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000F51EB; /* jns: not sign (positive) */

loc_000F51B9: ;
    edx = 0x303;
    PUSH32(esp, 0x000F51C3u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F51C3: ;
    MEM32(0x2A82F8) = 0x303;

loc_000F51CD: ;
    edx = 0x302;
    ecx = 0x40348;
    PUSH32(esp, 0x000F51DCu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F51DC: ;
    MEM32(0x2A82FC) = 0x302;
    goto loc_000F53B3;

loc_000F51EB: ;
    edx = 0x302;
    PUSH32(esp, 0x000F51F5u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F51F5: ;
    MEM32(0x2A82F8) = 0x302;
    goto loc_000F52C5;

loc_000F5204: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F5210u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5210: ;
    MEM32(0x2A82EC) = ebp;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    ecx = 0x40344;
    edx = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_000F5232; /* je: equal / zero */

loc_000F5225: ;
    PUSH32(esp, 0x000F522Au); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F522A: ;
    MEM32(0x2A82F8) = ebp;
    goto loc_000F5298;

loc_000F5232: ;
    PUSH32(esp, 0x000F5237u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5237: ;
    MEM32(0x2A82F8) = ebp;
    goto loc_000F51CD;

loc_000F523F: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F524Bu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F524B: ;
    MEM32(0x2A82EC) = ebp;
    eax = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    ecx = 0x40344;
    if (TEST_Z(_fa, _fb)) goto loc_000F52B6; /* je: equal / zero */

loc_000F5260: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000F528D; /* jns: not sign (positive) */

loc_000F5264: ;
    PUSH32(esp, 0x000F5269u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5269: ;
    MEM32(0x2A82F8) = ebx;

loc_000F526F: ;
    edx = 0x305;
    ecx = 0x40348;
    PUSH32(esp, 0x000F527Eu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F527E: ;
    MEM32(0x2A82FC) = 0x305;
    goto loc_000F53B3;

loc_000F528D: ;
    PUSH32(esp, 0x000F5292u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5292: ;
    MEM32(0x2A82F8) = ebx;

loc_000F5298: ;
    edx = 0x304;
    ecx = 0x40348;
    PUSH32(esp, 0x000F52A7u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F52A7: ;
    MEM32(0x2A82FC) = 0x304;
    goto loc_000F53B3;

loc_000F52B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000F52E3; /* jns: not sign (positive) */

loc_000F52BA: ;
    PUSH32(esp, 0x000F52BFu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F52BF: ;
    MEM32(0x2A82F8) = ebx;

loc_000F52C5: ;
    edx = 0x303;
    ecx = 0x40348;
    PUSH32(esp, 0x000F52D4u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F52D4: ;
    MEM32(0x2A82FC) = 0x303;
    goto loc_000F53B3;

loc_000F52E3: ;
    PUSH32(esp, 0x000F52E8u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F52E8: ;
    MEM32(0x2A82F8) = ebx;
    goto loc_000F51CD;

loc_000F52F3: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F52FFu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F52FF: ;
    edx = ebp;
    ecx = 0x40344;
    MEM32(0x2A82EC) = ebp;
    PUSH32(esp, 0x000F5311u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5311: ;
    MEM32(0x2A82F8) = ebp;
    goto loc_000F534C;

loc_000F5319: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F5325u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5325: ;
    MEM32(0x2A82EC) = ebp;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    ecx = 0x40344;
    if (TEST_Z(_fa, _fb)) goto loc_000F5360; /* je: equal / zero */

loc_000F5338: ;
    edx = 0x304;
    PUSH32(esp, 0x000F5342u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5342: ;
    MEM32(0x2A82F8) = 0x304;

loc_000F534C: ;
    edx = ebp;
    ecx = 0x40348;
    PUSH32(esp, 0x000F5358u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5358: ;
    MEM32(0x2A82FC) = ebp;
    goto loc_000F53B3;

loc_000F5360: ;
    edx = 0x302;
    PUSH32(esp, 0x000F536Au); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F536A: ;
    MEM32(0x2A82F8) = 0x302;
    goto loc_000F534C;

loc_000F5376: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F5382u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5382: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40344;
    MEM32(0x2A82EC) = ebp;
    PUSH32(esp, 0x000F5394u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5394: ;
    edx = 0x301;
    ecx = 0x40348;
    MEM32(0x2A82F8) = ebx;
    PUSH32(esp, 0x000F53A9u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F53A9: ;
    MEM32(0x2A82FC) = 0x301;

loc_000F53B3: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    edi = 0x200;
    if (CMP_EQ(_fa, _fb)) goto loc_000F53F6; /* je: equal / zero */

loc_000F53C0: ;
    ecx = ebx;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F53CDu); RECOMP_ABI_CALL(0x0029C080u, sub_0029C080); /* call 0x0029C080 */

loc_000F53CD: ;
    ecx = MEM32(esi + 0x18);
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 8 (8-bit) */
    MEM32(esi + 0x18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000F53DE; /* je: equal / zero */

loc_000F53DA: ;
    PUSH32(esp, 0);
    goto loc_000F53EF;

loc_000F53DE: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F53EA; /* je: equal / zero */

loc_000F53E3: ;
    PUSH32(esp, 0x901);
    goto loc_000F53EF;

loc_000F53EA: ;
    PUSH32(esp, 0x900);

loc_000F53EF: ;
    PUSH32(esp, 0x000F53F4u); RECOMP_ABI_CALL(0x0029B200u, sub_0029B200); /* call 0x0029B200 */

loc_000F53F4: ;
    MEM32(esi) = ebx;

loc_000F53F6: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x18), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5435; /* je: equal / zero */

loc_000F53FB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5410; /* je: equal / zero */

loc_000F5404: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5410; /* je: equal / zero */

loc_000F5409: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5410; /* je: equal / zero */

loc_000F540E: ;
    eax = ebp;

loc_000F5410: ;
    ecx = MEM32(0x64D848);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5424; /* je: equal / zero */

loc_000F541A: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5424; /* jne: not equal / not zero */

loc_000F541F: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5437; /* jne: not equal / not zero */

loc_000F5424: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x2000;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A8370) = eax;
    goto loc_000F5437;

loc_000F5435: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F5437: ;
    ecx = MEM32(esi + 0x18);
    eax = 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F54CD; /* je: equal / zero */

loc_000F5447: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x10), eax (32-bit) */
    ecx = 3;
    if (TEST_Z(_fa, _fb)) goto loc_000F546C; /* je: equal / zero */

loc_000F5451: ;
    edx = MEM32(0x2A7FF8);
    eax = 0x800;
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A7FF8) = edx;
    MEM32(0x2A804C) = ecx;
    goto loc_000F5481;

loc_000F546C: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x800;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A804C) = edi;
    eax = 0x800;

loc_000F5481: ;
    edx = MEM32(esi + 0x10);
    edx = edx & 0xE000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F54A0; /* jne: not equal / not zero */

loc_000F5492: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | eax;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A803C) = ecx;
    goto loc_000F54AC;

loc_000F54A0: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | eax;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A803C) = edi;

loc_000F54AC: ;
    eax = MEM32(esi + 4);
    edx = ZX8(MEM8(esi + 6));
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F54CDu); RECOMP_ABI_CALL(0x0029B2F0u, sub_0029B2F0); /* call 0x0029B2F0 */

loc_000F54CD: ;
    MEM32(esi + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F5230
 * Original: 0x000F5230 - 0x000F54D6 (678 bytes, 167 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F5230: ;
    goto loc_000F5298;

    PUSH32(esp, 0x000F5237u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5237: ;
    MEM32(0x2A82F8) = ebp;
    g_seh_ebp = ebp; sub_000F51CD(); return; /* tail jmp 0x000F51CD */

    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F524Bu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F524B: ;
    MEM32(0x2A82EC) = ebp;
    eax = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    ecx = 0x40344;
    if (TEST_Z(_fa, _fb)) goto loc_000F52B6; /* je: equal / zero */

loc_000F5260: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000F528D; /* jns: not sign (positive) */

loc_000F5264: ;
    PUSH32(esp, 0x000F5269u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5269: ;
    MEM32(0x2A82F8) = ebx;
    edx = 0x305;
    ecx = 0x40348;
    PUSH32(esp, 0x000F527Eu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F527E: ;
    MEM32(0x2A82FC) = 0x305;
    goto loc_000F53B3;

loc_000F528D: ;
    PUSH32(esp, 0x000F5292u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5292: ;
    MEM32(0x2A82F8) = ebx;

loc_000F5298: ;
    edx = 0x304;
    ecx = 0x40348;
    PUSH32(esp, 0x000F52A7u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F52A7: ;
    MEM32(0x2A82FC) = 0x304;
    goto loc_000F53B3;

loc_000F52B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000F52E3; /* jns: not sign (positive) */

loc_000F52BA: ;
    PUSH32(esp, 0x000F52BFu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F52BF: ;
    MEM32(0x2A82F8) = ebx;
    edx = 0x303;
    ecx = 0x40348;
    PUSH32(esp, 0x000F52D4u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F52D4: ;
    MEM32(0x2A82FC) = 0x303;
    goto loc_000F53B3;

loc_000F52E3: ;
    PUSH32(esp, 0x000F52E8u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F52E8: ;
    MEM32(0x2A82F8) = ebx;
    g_seh_ebp = ebp; sub_000F51CD(); return; /* tail jmp 0x000F51CD */

    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F52FFu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F52FF: ;
    edx = ebp;
    ecx = 0x40344;
    MEM32(0x2A82EC) = ebp;
    PUSH32(esp, 0x000F5311u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5311: ;
    MEM32(0x2A82F8) = ebp;
    goto loc_000F534C;

    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F5325u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5325: ;
    MEM32(0x2A82EC) = ebp;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    ecx = 0x40344;
    if (TEST_Z(_fa, _fb)) goto loc_000F5360; /* je: equal / zero */

loc_000F5338: ;
    edx = 0x304;
    PUSH32(esp, 0x000F5342u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5342: ;
    MEM32(0x2A82F8) = 0x304;

loc_000F534C: ;
    edx = ebp;
    ecx = 0x40348;
    PUSH32(esp, 0x000F5358u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5358: ;
    MEM32(0x2A82FC) = ebp;
    goto loc_000F53B3;

loc_000F5360: ;
    edx = 0x302;
    PUSH32(esp, 0x000F536Au); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F536A: ;
    MEM32(0x2A82F8) = 0x302;
    goto loc_000F534C;

    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F5382u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5382: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40344;
    MEM32(0x2A82EC) = ebp;
    PUSH32(esp, 0x000F5394u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5394: ;
    edx = 0x301;
    ecx = 0x40348;
    MEM32(0x2A82F8) = ebx;
    PUSH32(esp, 0x000F53A9u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F53A9: ;
    MEM32(0x2A82FC) = 0x301;

loc_000F53B3: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    edi = 0x200;
    if (CMP_EQ(_fa, _fb)) goto loc_000F53F6; /* je: equal / zero */

loc_000F53C0: ;
    ecx = ebx;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F53CDu); RECOMP_ABI_CALL(0x0029C080u, sub_0029C080); /* call 0x0029C080 */

loc_000F53CD: ;
    ecx = MEM32(esi + 0x18);
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 8 (8-bit) */
    MEM32(esi + 0x18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000F53DE; /* je: equal / zero */

loc_000F53DA: ;
    PUSH32(esp, 0);
    goto loc_000F53EF;

loc_000F53DE: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F53EA; /* je: equal / zero */

loc_000F53E3: ;
    PUSH32(esp, 0x901);
    goto loc_000F53EF;

loc_000F53EA: ;
    PUSH32(esp, 0x900);

loc_000F53EF: ;
    PUSH32(esp, 0x000F53F4u); RECOMP_ABI_CALL(0x0029B200u, sub_0029B200); /* call 0x0029B200 */

loc_000F53F4: ;
    MEM32(esi) = ebx;

loc_000F53F6: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x18), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5435; /* je: equal / zero */

loc_000F53FB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5410; /* je: equal / zero */

loc_000F5404: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5410; /* je: equal / zero */

loc_000F5409: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5410; /* je: equal / zero */

loc_000F540E: ;
    eax = ebp;

loc_000F5410: ;
    ecx = MEM32(0x64D848);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5424; /* je: equal / zero */

loc_000F541A: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5424; /* jne: not equal / not zero */

loc_000F541F: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5437; /* jne: not equal / not zero */

loc_000F5424: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x2000;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A8370) = eax;
    goto loc_000F5437;

loc_000F5435: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F5437: ;
    ecx = MEM32(esi + 0x18);
    eax = 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F54CD; /* je: equal / zero */

loc_000F5447: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x10), eax (32-bit) */
    ecx = 3;
    if (TEST_Z(_fa, _fb)) goto loc_000F546C; /* je: equal / zero */

loc_000F5451: ;
    edx = MEM32(0x2A7FF8);
    eax = 0x800;
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A7FF8) = edx;
    MEM32(0x2A804C) = ecx;
    goto loc_000F5481;

loc_000F546C: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x800;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A804C) = edi;
    eax = 0x800;

loc_000F5481: ;
    edx = MEM32(esi + 0x10);
    edx = edx & 0xE000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F54A0; /* jne: not equal / not zero */

loc_000F5492: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | eax;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A803C) = ecx;
    goto loc_000F54AC;

loc_000F54A0: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | eax;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A803C) = edi;

loc_000F54AC: ;
    eax = MEM32(esi + 4);
    edx = ZX8(MEM8(esi + 6));
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F54CDu); RECOMP_ABI_CALL(0x0029B2F0u, sub_0029B2F0); /* call 0x0029B2F0 */

loc_000F54CD: ;
    MEM32(esi + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F54D6
 * Original: 0x000F54D6 - 0x000F5510 (58 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F54D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F54D6: ;
    edi = edi;
    eax = eax & 0x60000F51;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    RECOMP_UNIMPL("sldt word ptr [edx + edx*2]", 0x000F54DEu); /* TODO: sldt word ptr [edx + edx*2] */

    g_seh_ebp = ebp; sub_000F5510(); return; /* fallthrough 0x000F5510 */

}

/**
 * sub_000F5510
 * Original: 0x000F5510 - 0x000F5513 (3 bytes, 2 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5510(void)
{

loc_000F5510: ;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F5520
 * Original: 0x000F5520 - 0x000F5540 (32 bytes, 7 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5520: ;
    edx = MEM32(eax + 0x18);
    MEM32(eax + 0x1C) = ecx;
    edx = edx | 0x200;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x18) = edx;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x2000;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A8370) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F5540
 * Original: 0x000F5540 - 0x000F5558 (24 bytes, 7 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5540(void)
{

loc_000F5540: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0x000F554Cu); RECOMP_ABI_CALL(0x002A3C40u, sub_002A3C40); /* call 0x002A3C40 */

loc_000F554C: ;
    PUSH32(esp, eax);
    MEM32(0x64D84C) = eax;
    PUSH32(esp, 0x000F5557u); RECOMP_ABI_CALL(0x002A3CD0u, sub_002A3CD0); /* call 0x002A3CD0 */

loc_000F5557: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F5560
 * Original: 0x000F5560 - 0x000F55D4 (116 bytes, 44 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F5560: ;
    eax = MEM32(0x64D84C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F556C; /* jne: not equal / not zero */

loc_000F5569: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000F556C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F5575u); RECOMP_ABI_CALL(0x002A3D40u, sub_002A3D40); /* call 0x002A3D40 */

loc_000F5575: ;
    eax = MEM32(0x64D84C);
    ebx = MEM32(eax + 0xC);
    ecx = 0x9EC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F558Eu); RECOMP_ABI_CALL(0x002A3C40u, sub_002A3C40); /* call 0x002A3C40 */

loc_000F558E: ;
    edx = MEM32(0x64D84C);
    esi = MEM32(edx + 4);
    ebp = eax;
    edi = MEM32(ebp + 4);
    ecx = ebx;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    PUSH32(esp, ebp);
    MEM32(ebp + 0xC) = ebx;
    PUSH32(esp, 0x000F55B7u); RECOMP_ABI_CALL(0x002A3E80u, sub_002A3E80); /* call 0x002A3E80 */

loc_000F55B7: ;
    ecx = MEM32(0x64D84C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F55C3u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F55C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(0x64D84C) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F55E0
 * Original: 0x000F55E0 - 0x000F5612 (50 bytes, 13 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F55E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F55E0: ;
    eax = MEM32(0x64D84C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5611; /* je: equal / zero */

loc_000F55E9: ;
    PUSH32(esp, 0x000F55EEu); RECOMP_ABI_CALL(0x002A3D40u, sub_002A3D40); /* call 0x002A3D40 */

loc_000F55EE: ;
    eax = MEM32(0x64D84C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F55FBu); RECOMP_ABI_CALL(0x002A39A0u, sub_002A39A0); /* call 0x002A39A0 */

loc_000F55FB: ;
    ecx = MEM32(0x64D84C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F5607u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F5607: ;
    MEM32(0x64D84C) = 0;

loc_000F5611: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F5620
 * Original: 0x000F5620 - 0x000F5702 (226 bytes, 48 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F5620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = esp + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0xC0;
    MEM32(esp + 0xBC) = ecx;
    MEM32(esp + 0x74) = ecx;
    ecx = esi + 0x14;
    MEM32(esp + 0xE8) = eax;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xB0) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0xC0) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x54) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esi) = 0x331EA8;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xE4) = 0x11102;
    MEM32(esp + 0xE8) = 1;
    MEM32(esp + 0x98) = 0xC8C40000u;
    MEM32(esp + 0x14) = 0xD4301010u;
    MEM32(esp + 0xF4) = eax;
    MEM32(esp + 0xF8) = eax;
    MEM32(esp + 0xFC) = 0x1FF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F56FBu); RECOMP_ABI_CALL(0x002A2530u, sub_002A2530); /* call 0x002A2530 */

loc_000F56FB: ;
    eax = esi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5710
 * Original: 0x000F5710 - 0x000F5E50 (1856 bytes, 484 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F5710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000F5710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D29C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1B0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = edi;
    MEM32(esp + 0x88) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F573Eu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000F573E: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x10); /* divss */
    ebx = MEM32(esi + 4);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi); /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    fp_push((double)SMEM32(ebx + 0x68)); /* fild */
    eax = MEM32(ebx + 0x68);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F5786; /* jge: greater or equal (signed >=) */

loc_000F5780: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F5786: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x33383C)); /* fmul dword ptr [0x33383c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5795u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000F5795: ;
    fp_push((double)SMEM32(ebx + 0x6C)); /* fild */
    ecx = MEM32(ebx + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000F57A7; /* jge: greater or equal (signed >=) */

loc_000F57A1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F57A7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x33382C)); /* fmul dword ptr [0x33382c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F57B6u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000F57B6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = eax;
    ebp = edi;
    ebx = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000F57C2; /* jge: greater or equal (signed >=) */

loc_000F57C0: ;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000F57C2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F57C8; /* jge: greater or equal (signed >=) */

loc_000F57C6: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000F57C8: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = edi; /* cmovg */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F57F2; /* je: equal / zero */

loc_000F57E7: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F57E7; /* jne: not equal / not zero */

loc_000F57EE: ;
    MEM32(esp + 0x10) = ecx;

loc_000F57F2: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F5811; /* jb: below (unsigned <) */

loc_000F5809: ;
    MEM32(esp + 0x10) = 6;

loc_000F5811: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F581Du); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F581D: ;
    edi = 1;
    edx = edi;
    ecx = 0x40344;
    MEM32(0x2A82EC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5838u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5838: ;
    edx = edi;
    ecx = 0x40348;
    MEM32(0x2A82F8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F584Au); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F584A: ;
    MEM32(0x2A82FC) = edi;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5859u); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_000F5859: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x70);
    fp_push((double)SMEM32(eax + 0x70)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F5881; /* jge: greater or equal (signed >=) */

loc_000F587B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F5881: ;
    edx = MEM32(eax + 0x74);
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x74)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F5898; /* jge: greater or equal (signed >=) */

loc_000F5892: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F5898: ;
    ecx = MEM32(eax + 0x68);
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x68)); /* fild */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F58BE; /* jge: greater or equal (signed >=) */

loc_000F58B8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F58BE: ;
    edx = MEM32(eax + 0x6C);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x6C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F58D2; /* jge: greater or equal (signed >=) */

loc_000F58CC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F58D2: ;
    eax = MEM32(eax + 0xB0);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F58E4u); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F58E4: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F58F2u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F58F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F58FAu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F58FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5903u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F5903: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F590Cu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F590C: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = MEM32(esp + 0x20);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x68);
    PUSH32(esp, edx);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, ecx);
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x90);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xA4);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xB0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F59CCu); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F59CC: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000F5CEE; /* jbe: below or equal (unsigned <=) */

loc_000F59E0: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */

loc_000F5A93: ;
    _fa = (uint32_t)(MEM8(esp + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x24), 1 (8-bit) */
    PUSH32(esp, 0);
    if (TEST_Z(_fa, _fb)) goto loc_000F5ACC; /* je: equal / zero */

loc_000F5A9C: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5AABu); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F5AAB: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xA4);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5ABCu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F5ABC: ;
    esi = esp + 0x90;
    edi = esp + 0x88;
    goto loc_000F5AF1;

loc_000F5ACC: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xB0);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5ADBu); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F5ADB: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5AE9u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F5AE9: ;
    esi = esp + 0x7C;
    edi = esp + 0x1C;

loc_000F5AF1: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5B11u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5B11: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xE4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xE4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0xC8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    ecx = MEM32(esp + 0xC8);
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xCC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0xCC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    xmm3 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xF4) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0xF4);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0xF4) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0xF4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x2A82EC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5BEDu); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F5BED: ;
    edx = 1;
    ecx = 0x40304;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5BFCu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5BFC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(esp + 0xA4);
    eax = MEM32(esp + 0xA0);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x20); /* addss */
    MEM32(0x2A82EC) = 1;
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    PUSH32(esp, edx);
    ecx = MEM32(esp + 0xB8);
    edx = MEM32(esp + 0xB4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x78);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x90);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x80);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5CBCu); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F5CBC: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x84);
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = eax;
    eax = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000F5A93; /* jb: below (unsigned <) */

loc_000F5CEA: ;
    edi = MEM32(esp + 0x20);

loc_000F5CEE: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5E21; /* je: equal / zero */

loc_000F5CF9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5D05u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F5D05: ;
    MEM32(0x2A82EC) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xA8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5D20u); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F5D20: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5D31u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F5D31: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x90);
    PUSH32(esp, edx);
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x90);
    PUSH32(esp, eax);
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, ecx);
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x88);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x80);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xAC);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xAC);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xD8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5E21u); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F5E21: ;
    eax = MEM32(0x64D29C);
    ecx = MEM32(eax + 0x1B8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0x1C8);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(eax + 0x1D8);
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5E48u); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_000F5E48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F5E50
 * Original: 0x000F5E50 - 0x000F5F68 (280 bytes, 59 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F5E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333930)); /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = esp + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0xC0;
    ecx = esi + 0x34;
    MEM8(esi + 0x28) = LO8(edx);
    MEM8(esi + 0x30) = LO8(edx);
    MEM32(esp + 0xE8) = edx;
    MEM32(esp + 0xE4) = edx;
    MEM32(esp + 0xB0) = edx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x70) = edx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x94) = edx;
    MEM32(esp + 0xC0) = edx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0x74) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    PUSH32(esp, edx);
    MEM32(esi) = 0x331EB8;
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xE4) = 0x11102;
    MEM32(esp + 0xE8) = 1;
    MEM32(esp + 0x98) = 0xC8C40000u;
    MEM32(esp + 0x14) = 0xD4301010u;
    MEM32(esp + 0xF4) = eax;
    MEM32(esp + 0xF8) = eax;
    MEM32(esp + 0xFC) = 0x1FF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5F61u); RECOMP_ABI_CALL(0x002A2530u, sub_002A2530); /* call 0x002A2530 */

loc_000F5F61: ;
    eax = esi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5F70
 * Original: 0x000F5F70 - 0x000F5F90 (32 bytes, 12 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x000F5F7Au); RECOMP_ABI_CALL(0x000F21A0u, sub_000F21A0); /* call 0x000F21A0 */

loc_000F5F7A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5F8A; /* je: equal / zero */

loc_000F5F81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F5F87u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F5F87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F5F8A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F5F90
 * Original: 0x000F5F90 - 0x000F6066 (214 bytes, 49 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F5F90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F6063; /* ja: above (unsigned >) */

loc_000F5F9D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xF6068); /* switch: 11 entries, 11 targets */
    if (_jt == 0x000F5FA4u) goto loc_000F5FA4;
    if (_jt == 0x000F5FB2u) goto loc_000F5FB2;
    if (_jt == 0x000F5FC0u) goto loc_000F5FC0;
    if (_jt == 0x000F5FCEu) goto loc_000F5FCE;
    if (_jt == 0x000F5FDCu) goto loc_000F5FDC;
    if (_jt == 0x000F5FEAu) goto loc_000F5FEA;
    if (_jt == 0x000F5FF8u) goto loc_000F5FF8;
    if (_jt == 0x000F6006u) goto loc_000F6006;
    if (_jt == 0x000F6014u) goto loc_000F6014;
    if (_jt == 0x000F6036u) goto loc_000F6036;
    if (_jt == 0x000F6044u) goto loc_000F6044;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F5FA4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000F5FB2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000F5FC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000F5FCE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000F5FDC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000F5FEA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000F5FF8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000F6006: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000F6014: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337D8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F602E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337D8)) */

loc_000F6023: ;
    eax = 1;
    MEM8(ecx + 0x28) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_000F602E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x28) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_000F6036: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000F6044: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337D8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F605E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337D8)) */

loc_000F6053: ;
    eax = 1;
    MEM8(ecx + 0x30) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_000F605E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x30) = LO8(eax);

loc_000F6063: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F6066
 * Original: 0x000F6066 - 0x000F610D (167 bytes, 3 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6066(void)
{

loc_000F6066: ;
    edi = edi;
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    POP32(esp, edi);

}

/**
 * sub_000F60A0
 * Original: 0x000F60A0 - 0x000F610D (109 bytes, 32 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F60A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F60A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F6104; /* ja: above (unsigned >) */

loc_000F60A9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xF6110); /* switch: 11 entries, 11 targets */
    if (_jt == 0x000F60B0u) goto loc_000F60B0;
    if (_jt == 0x000F60B6u) goto loc_000F60B6;
    if (_jt == 0x000F60BCu) goto loc_000F60BC;
    if (_jt == 0x000F60C2u) goto loc_000F60C2;
    if (_jt == 0x000F60C8u) goto loc_000F60C8;
    if (_jt == 0x000F60CEu) goto loc_000F60CE;
    if (_jt == 0x000F60D4u) goto loc_000F60D4;
    if (_jt == 0x000F60DAu) goto loc_000F60DA;
    if (_jt == 0x000F60E0u) goto loc_000F60E0;
    if (_jt == 0x000F60EFu) goto loc_000F60EF;
    if (_jt == 0x000F60F5u) goto loc_000F60F5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F60B0: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F60B6: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F60BC: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F60C2: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F60C8: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F60CE: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F60D4: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F60DA: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F60E0: ;
    eax = ZX8(MEM8(ecx + 0x28));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    esp += 8; return; /* ret 4 */

loc_000F60EF: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F60F5: ;
    ecx = ZX8(MEM8(ecx + 0x30));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    esp += 8; return; /* ret 4 */

loc_000F6104: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F6140
 * Original: 0x000F6140 - 0x000F66A9 (1385 bytes, 353 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6140: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x70);
    fp_push((double)SMEM32(eax + 0x70)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x24); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F61CD; /* jge: greater or equal (signed >=) */

loc_000F61C7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F61CD: ;
    edx = MEM32(eax + 0x74);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x74)); /* fild */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x84) = xmm4.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F61F7; /* jge: greater or equal (signed >=) */

loc_000F61F1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F61F7: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 8); /* divss */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    fp_push((double)SMEM32(eax + 0x68)); /* fild */
    ecx = MEM32(eax + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x24); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x7C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm2.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F6249; /* jge: greater or equal (signed >=) */

loc_000F6243: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F6249: ;
    edx = MEM32(eax + 0x6C);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x6C)); /* fild */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F626D; /* jge: greater or equal (signed >=) */

loc_000F6267: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F626D: ;
    eax = MEM32(esi + 4);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    ecx = MEM32(eax + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(eax + 0x68)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F62BB; /* jge: greater or equal (signed >=) */

loc_000F62B5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F62BB: ;
    edx = MEM32(eax + 0x6C);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x6C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F62CF; /* jge: greater or equal (signed >=) */

loc_000F62C9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F62CF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 0x40304;
    PUSH32(esp, 0x000F62DFu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F62DF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x2A82EC) = ebx;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F62F0u); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_000F62F0: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xB0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F6300u); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F6300: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F630Du); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F630D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000F6315u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F6315: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000F631Du); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F631D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F6325u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F6325: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    edi = MEM32(esp + 0x2C);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F63D3u); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F63D3: ;
    PUSH32(esp, ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F63E3u); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F63E3: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xA4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F63F3u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F63F3: ;
    PUSH32(esp, 0x144);
    PUSH32(esp, 0x64DA60);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000F6404u); RECOMP_ABI_CALL(0x000EEAE0u, sub_000EEAE0); /* call 0x000EEAE0 */

loc_000F6404: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6418; /* je: equal / zero */

loc_000F640B: ;
    PUSH32(esp, 0x1B01);
    PUSH32(esp, 0x000F6415u); RECOMP_ABI_CALL(0x0029B520u, sub_0029B520); /* call 0x0029B520 */

loc_000F6415: ;
    PUSH32(esp, ebx);
    goto loc_000F6474;

loc_000F6418: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0x000F6427u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F6427: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x2A82EC) = 1;
    PUSH32(esp, 0x000F6440u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F6440: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x2A82F8) = 0x302;
    PUSH32(esp, 0x000F6459u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F6459: ;
    MEM32(0x2A82FC) = 0x303;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    PUSH32(esp, 0x000F646Bu); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000F646B: ;
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);

loc_000F6474: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F647Bu); RECOMP_ABI_CALL(0x002A2D20u, sub_002A2D20); /* call 0x002A2D20 */

loc_000F647B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    MEM32(esp + 0x10) = ebx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F6692; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000F6491: ;
    PUSH32(esp, ebp);

loc_000F6492: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x000F6499u); RECOMP_ABI_CALL(0x002A2D70u, sub_002A2D70); /* call 0x002A2D70 */

loc_000F6499: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEM32(esp + 0x2C) = ebx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F6671; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000F64AE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    goto loc_000F64D0;

loc_000F64C9: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    /* nop */

loc_000F64D0: ;
    edi = MEM32(esp + 0x14);
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x3C);
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    ebx = 2;
    goto loc_000F6520;

loc_000F6510: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    /* nop */

loc_000F6520: ;
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F65D4; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000F6556: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x333B58)); /* fmul qword ptr [0x333b58] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMD(0x333B50)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000F658E; /* ja: above (unsigned >) */

loc_000F6574: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMD(0x333B58)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000F658E; /* jbe: below or equal (unsigned <=) */

loc_000F6584: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMD(0x333B58)); /* fld double */
    goto loc_000F65A4;

loc_000F658E: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMD(0x333B50)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000F65A4; /* jbe: below or equal (unsigned <=) */

loc_000F659C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMD(0x333B50)); /* fld double */

loc_000F65A4: ;
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    PUSH32(esp, 0x000F65B2u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F65B2: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000F65E0;

loc_000F65D4: ;
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */

loc_000F65E0: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x78); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000F65FAu); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F65FA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x7C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x80); /* addss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x94); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x98); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000F6646u); RECOMP_ABI_CALL(0x002A2CC0u, sub_002A2CC0); /* call 0x002A2CC0 */

loc_000F6646: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F6510; /* jne: not equal / not zero */

loc_000F664E: ;
    eax = MEM32(esp + 0x2C);
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_000F64C9; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000F666F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F6671: ;
    PUSH32(esp, 0x000F6676u); RECOMP_ABI_CALL(0x002A2DB0u, sub_002A2DB0); /* call 0x002A2DB0 */

loc_000F6676: ;
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x14) = eax;
    if ((_fca > _fcb)) goto loc_000F6492; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000F6691: ;
    POP32(esp, ebp);

loc_000F6692: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0x000F669Cu); RECOMP_ABI_CALL(0x0029B520u, sub_0029B520); /* call 0x0029B520 */

loc_000F669C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F66A2u); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_000F66A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F66B0
 * Original: 0x000F66B0 - 0x000F6839 (393 bytes, 110 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F66B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F66B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x33392C)); /* movss */
    MEM32(esi + 4) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0x80);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xC) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0xC0;
    ecx = esi + 0x40;
    MEM32(esp + 0xC4) = eax;
    MEM32(esp + 0x7C) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esi) = 0x331EC8;
    MEM8(esi + 8) = 1;
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xB) = 0x40;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xEC) = 0x11102;
    MEM32(esp + 0xF0) = 1;
    MEM32(esp + 0xF8) = ebx;
    MEM32(esp + 0xF4) = ebx;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xA0) = 0xC4200000u;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x80) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0x1C) = 0xD4D81010u;
    MEM32(esp + 0xD0) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0xFC) = eax;
    MEM32(esp + 0x100) = eax;
    MEM32(esp + 0x104) = 0x1FF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6797u); RECOMP_ABI_CALL(0x002A2530u, sub_002A2530); /* call 0x002A2530 */

loc_000F6797: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0x78);
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F67A7u); RECOMP_ABI_CALL(0x002C963Au, sub_002C963A); /* call 0x002C963A */

loc_000F67A7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x14;
    edi = ecx;
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = edx;
    MEM32(edi + 0x10) = edx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x28;
    MEM32(edx) = edi;
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = edi;
    MEM32(edx + 0xC) = edi;
    MEM32(edx + 0x10) = edi;
    edx = MEM32(esi + 4);
    edx = MEM32(edx + 0xB0);
    edx = MEM32(edx + 4);
    edi = eax + eax * 4;
    eax = MEM32(esp + 8);
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x140);
    MEM32(esp + 0x30) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6800u); RECOMP_ABI_CALL(0x002C8EA4u, sub_002C8EA4); /* call 0x002C8EA4 */

loc_000F6800: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x140);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6824u); RECOMP_ABI_CALL(0x002C8EA4u, sub_002C8EA4); /* call 0x002C8EA4 */

loc_000F6824: ;
    PUSH32(esp, ebx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F682Eu); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_000F682E: ;
    POP32(esp, edi);
    MEM32(esi + 0x3C) = eax;
    eax = esi;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6840
 * Original: 0x000F6840 - 0x000F685E (30 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F6848u); RECOMP_ABI_CALL(0x000F6860u, sub_000F6860); /* call 0x000F6860 */

loc_000F6848: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F6858; /* je: equal / zero */

loc_000F684F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F6855u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F6855: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F6858: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F6860
 * Original: 0x000F6860 - 0x000F6881 (33 bytes, 9 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6860: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x331EC8;
    if (CMP_EQ(_fa, _fb)) goto loc_000F687A; /* je: equal / zero */

loc_000F686D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F6873u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F6873: ;
    MEM32(esi + 0x3C) = 0;

loc_000F687A: ;
    MEM32(esi) = 0x330DE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000F6890
 * Original: 0x000F6890 - 0x000F68D4 (68 bytes, 23 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000F6890: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F68B0; /* je: equal / zero */

loc_000F689B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F68D0; /* jne: not equal / not zero */

loc_000F68A0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0x000F68A9u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000F68A9: ;
    MEM8(esi + 0xC) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F68B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337D8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F68CB; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337D8)) */

loc_000F68BF: ;
    eax = 1;
    MEM8(esi + 8) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F68CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 8) = LO8(eax);

loc_000F68D0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F68E0
 * Original: 0x000F68E0 - 0x000F6923 (67 bytes, 17 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F68E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F68E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F691A; /* ja: above (unsigned >) */

loc_000F68E9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xF6924); /* switch: 8 entries, 4 targets */
    if (_jt == 0x000F68F0u) goto loc_000F68F0;
    if (_jt == 0x000F68FFu) goto loc_000F68FF;
    if (_jt == 0x000F690Eu) goto loc_000F690E;
    if (_jt == 0x000F691Au) goto loc_000F691A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F68F0: ;
    eax = ZX8(MEM8(ecx + 8));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    esp += 8; return; /* ret 4 */

loc_000F68FF: ;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    esp += 8; return; /* ret 4 */

loc_000F690E: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337FC)); /* fmul dword ptr [0x3337fc] */
    esp += 8; return; /* ret 4 */

loc_000F691A: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F6950
 * Original: 0x000F6950 - 0x000F791C (4044 bytes, 855 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6950: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x70);
    fp_push((double)SMEM32(eax + 0x70)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F697B; /* jge: greater or equal (signed >=) */

loc_000F6975: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F697B: ;
    edx = MEM32(eax + 0x74);
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x74)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F698F; /* jge: greater or equal (signed >=) */

loc_000F6989: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F698F: ;
    eax = MEM32(esi + 4);
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x68);
    fp_push((double)SMEM32(eax + 0x68)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F69B2; /* jge: greater or equal (signed >=) */

loc_000F69AC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F69B2: ;
    edx = MEM32(eax + 0x6C);
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x6C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F69C6; /* jge: greater or equal (signed >=) */

loc_000F69C0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F69C6: ;
    eax = MEM32(esi + 0x3C);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333B4C)); /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333B48)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000F69FEu); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F69FE: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F6A0Bu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F6A0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000F6A13u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F6A13: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000F6A1Bu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F6A1B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F6A23u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F6A23: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = 0x40304;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A70; /* je: equal / zero */

loc_000F6A2F: ;
    edx = 1;
    PUSH32(esp, 0x000F6A39u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F6A39: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x2A82EC) = 1;
    PUSH32(esp, 0x000F6A52u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F6A52: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40348;
    MEM32(0x2A82F8) = 0x302;
    PUSH32(esp, 0x000F6A68u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F6A68: ;
    MEM32(0x2A82FC) = edi;
    goto loc_000F6A7D;

loc_000F6A70: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000F6A77u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F6A77: ;
    MEM32(0x2A82EC) = edi;

loc_000F6A7D: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x7C);
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x74);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x7C);
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x8C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x8C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x7C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F6B44u); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F6B44: ;
    ebx = MEM32(0x653C90);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F6CEB; /* jne: not equal / not zero */

loc_000F6B53: ;
    fp_push(MEMD(0x3338B0)); /* fld double */
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_push(MEMD(0x333808)); /* fld double */
    MEM32(0x653C90) = ebx;
    PUSH32(esp, 0x000F6B6Du); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6B6D: ;
    MEMD(esp + 0x28) = fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333800)); /* fld double */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B40)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6BA0u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6BA0: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6BAFu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6BAF: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    xmm0 = XMM_SCALAR(MEMF(0x333818)); /* movss */
    MEMF(0x64F02C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64F030) = xmm0.f[0]; /* movss */
    MEMF(0x64F028) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B38)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6BEBu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6BEB: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6BFAu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6BFA: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x64F038) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64F03C) = xmm0.f[0]; /* movss */
    MEMF(0x64F034) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333820)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6C36u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6C36: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6C45u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6C45: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64F044) = xmm0.f[0]; /* movss */
    MEMF(0x64F048) = xmm0.f[0]; /* movss */
    MEMF(0x64F040) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(esp + 0x28)); /* fld double */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6C7Bu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6C7B: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(0x64F050) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64F054) = xmm0.f[0]; /* movss */
    MEMF(0x64F04C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6CB7u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6CB7: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6CC6u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6CC6: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    xmm0 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    MEMF(0x64F05C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64F060) = xmm0.f[0]; /* movss */
    MEMF(0x64F058) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F6CEB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F6E8C; /* jne: not equal / not zero */

loc_000F6CF4: ;
    fp_push(MEMD(0x3338B0)); /* fld double */
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_push(MEMD(0x333808)); /* fld double */
    MEM32(0x653C90) = ebx;
    PUSH32(esp, 0x000F6D0Eu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6D0E: ;
    MEMD(esp + 0x28) = fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333800)); /* fld double */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B40)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6D41u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6D41: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6D50u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6D50: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EFF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333818)); /* movss */
    MEMF(0x64EFF4) = xmm0.f[0]; /* movss */
    MEMF(0x64EFEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B38)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6D8Cu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6D8C: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6D9Bu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6D9B: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EFFC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x64F000) = xmm0.f[0]; /* movss */
    MEMF(0x64EFF8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333820)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6DD7u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6DD7: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6DE6u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6DE6: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64F008) = xmm0.f[0]; /* movss */
    MEMF(0x64F00C) = xmm0.f[0]; /* movss */
    MEMF(0x64F004) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(esp + 0x28)); /* fld double */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6E1Cu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6E1C: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64F014) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(0x64F018) = xmm0.f[0]; /* movss */
    MEMF(0x64F010) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6E58u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6E58: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6E67u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6E67: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64F020) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    MEMF(0x64F024) = xmm0.f[0]; /* movss */
    MEMF(0x64F01C) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F6E8C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F7321; /* jne: not equal / not zero */

loc_000F6E95: ;
    fp_push(MEMD(0x333B30)); /* fld double */
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_push(MEMD(0x333808)); /* fld double */
    MEM32(0x653C90) = ebx;
    PUSH32(esp, 0x000F6EAFu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6EAF: ;
    MEMD(esp + 0x28) = fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333800)); /* fld double */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x333B30)); /* fmul qword ptr [0x333b30] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B28)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6EE8u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6EE8: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6EF7u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6EF7: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x333B20)); /* movss */
    MEMF(0x64EF3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF40) = xmm0.f[0]; /* movss */
    MEMF(0x64EF38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B18)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6F33u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6F33: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6F42u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6F42: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x333B10)); /* movss */
    MEMF(0x64EF48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF4C) = xmm0.f[0]; /* movss */
    MEMF(0x64EF44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B08)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6F7Eu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6F7E: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6F8Du); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6F8D: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x333B00)); /* movss */
    MEMF(0x64EF54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF58) = xmm0.f[0]; /* movss */
    MEMF(0x64EF50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333AF8)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F6FC9u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6FC9: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F6FD8u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F6FD8: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x333AF0)); /* movss */
    MEMF(0x64EF60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF64) = xmm0.f[0]; /* movss */
    MEMF(0x64EF5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333AE8)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F7014u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7014: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7023u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7023: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x3338C4)); /* movss */
    MEMF(0x64EF6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF70) = xmm0.f[0]; /* movss */
    MEMF(0x64EF68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B40)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F705Fu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F705F: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F706Eu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F706E: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x333818)); /* movss */
    MEMF(0x64EF78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF7C) = xmm0.f[0]; /* movss */
    MEMF(0x64EF74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B38)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F70AAu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F70AA: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F70B9u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F70B9: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x64EF84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF88) = xmm0.f[0]; /* movss */
    MEMF(0x64EF80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333820)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F70F5u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F70F5: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7104u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7104: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF90) = xmm0.f[0]; /* movss */
    MEMF(0x64EF94) = xmm0.f[0]; /* movss */
    MEMF(0x64EF8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x3338B0)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F7138u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7138: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7147u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7147: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(0x64EF9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EFA0) = xmm0.f[0]; /* movss */
    MEMF(0x64EF98) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F7183u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7183: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7192u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7192: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    MEMF(0x64EFA8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EFAC) = xmm0.f[0]; /* movss */
    MEMF(0x64EFA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333A38)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F71CEu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F71CE: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F71DDu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F71DD: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x3337C8)); /* movss */
    MEMF(0x64EFB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EFB8) = xmm0.f[0]; /* movss */
    MEMF(0x64EFB0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(esp + 0x28)); /* fld double */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F721Bu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F721B: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x3337CC)); /* movss */
    MEMF(0x64EFC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EFC4) = xmm0.f[0]; /* movss */
    MEMF(0x64EFBC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333AE0)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F7257u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7257: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7266u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7266: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x3337D0)); /* movss */
    MEMF(0x64EFCC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EFD0) = xmm0.f[0]; /* movss */
    MEMF(0x64EFC8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333AD8)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F72A2u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F72A2: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F72B1u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F72B1: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x333AD0)); /* movss */
    MEMF(0x64EFD8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EFDC) = xmm0.f[0]; /* movss */
    MEMF(0x64EFD4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333AC8)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F72EDu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F72ED: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F72FCu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F72FC: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(0x3338E4)); /* movss */
    MEMF(0x64EFE4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EFE8) = xmm0.f[0]; /* movss */
    MEMF(0x64EFE0) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F7321: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F77B6; /* jne: not equal / not zero */

loc_000F732A: ;
    fp_push(MEMD(0x333B30)); /* fld double */
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_push(MEMD(0x333808)); /* fld double */
    MEM32(0x653C90) = ebx;
    PUSH32(esp, 0x000F7344u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7344: ;
    MEMD(esp + 0x28) = fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333800)); /* fld double */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x333B30)); /* fmul qword ptr [0x333b30] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B28)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F737Du); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F737D: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F738Cu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F738C: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EE84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333B20)); /* movss */
    MEMF(0x64EE88) = xmm0.f[0]; /* movss */
    MEMF(0x64EE80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B18)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F73C8u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F73C8: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F73D7u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F73D7: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EE90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333B10)); /* movss */
    MEMF(0x64EE94) = xmm0.f[0]; /* movss */
    MEMF(0x64EE8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B08)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F7413u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7413: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7422u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7422: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EE9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333B00)); /* movss */
    MEMF(0x64EEA0) = xmm0.f[0]; /* movss */
    MEMF(0x64EE98) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333AF8)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F745Eu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F745E: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F746Du); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F746D: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EEA8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333AF0)); /* movss */
    MEMF(0x64EEAC) = xmm0.f[0]; /* movss */
    MEMF(0x64EEA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333AE8)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F74A9u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F74A9: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F74B8u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F74B8: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EEB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3338C4)); /* movss */
    MEMF(0x64EEB8) = xmm0.f[0]; /* movss */
    MEMF(0x64EEB0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B40)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F74F4u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F74F4: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7503u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7503: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EEC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333818)); /* movss */
    MEMF(0x64EEC4) = xmm0.f[0]; /* movss */
    MEMF(0x64EEBC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333B38)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F753Fu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F753F: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F754Eu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F754E: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EECC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x64EED0) = xmm0.f[0]; /* movss */
    MEMF(0x64EEC8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333820)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F758Au); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F758A: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7599u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7599: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EED8) = xmm0.f[0]; /* movss */
    MEMF(0x64EEDC) = xmm0.f[0]; /* movss */
    MEMF(0x64EED4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x3338B0)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F75CDu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F75CD: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F75DCu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F75DC: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EEE4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(0x64EEE8) = xmm0.f[0]; /* movss */
    MEMF(0x64EEE0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F7618u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7618: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7627u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7627: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EEF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    MEMF(0x64EEF4) = xmm0.f[0]; /* movss */
    MEMF(0x64EEEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333A38)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F7663u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7663: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7672u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7672: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EEFC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337C8)); /* movss */
    MEMF(0x64EF00) = xmm0.f[0]; /* movss */
    MEMF(0x64EEF8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(esp + 0x28)); /* fld double */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F76B0u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F76B0: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF08) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337CC)); /* movss */
    MEMF(0x64EF0C) = xmm0.f[0]; /* movss */
    MEMF(0x64EF04) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333AE0)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F76ECu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F76EC: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F76FBu); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F76FB: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337D0)); /* movss */
    MEMF(0x64EF18) = xmm0.f[0]; /* movss */
    MEMF(0x64EF10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333AD8)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F7737u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7737: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7746u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7746: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333AD0)); /* movss */
    MEMF(0x64EF24) = xmm0.f[0]; /* movss */
    MEMF(0x64EF1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x333810)); /* fld double */
    fp_push(MEMD(0x333AC8)); /* fld double */
    fp_push(MEMD(0x333808)); /* fld double */
    PUSH32(esp, 0x000F7782u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7782: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000F7791u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000F7791: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x64EF2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3338E4)); /* movss */
    MEMF(0x64EF30) = xmm0.f[0]; /* movss */
    MEMF(0x64EF28) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F77B6: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x64EF38);
    edi = esi + 0x14;
    ebp = esi + 0x28;
    PUSH32(esp, edx);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0x000F77D4u); RECOMP_ABI_CALL(0x000F2AC0u, sub_000F2AC0); /* call 0x000F2AC0 */

loc_000F77D4: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x64EE80);
    PUSH32(esp, ecx);
    eax = ebp;
    ecx = edi;
    PUSH32(esp, 0x000F77ECu); RECOMP_ABI_CALL(0x000F2AC0u, sub_000F2AC0); /* call 0x000F2AC0 */

loc_000F77EC: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F77FDu); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F77FD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F7805u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7805: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000F780Eu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F780E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000F7817u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7817: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F7820u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7820: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = ZX8(MEM8(esi + 0xC));
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xA4);
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xB0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xB0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F78FEu); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F78FE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    PUSH32(esp, 0x000F790Au); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F790A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x2A82EC) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F7920
 * Original: 0x000F7920 - 0x000F7AF6 (470 bytes, 149 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F7920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esi + 4) = edi;
    MEM32(esi) = 0x331ED8;
    eax = MEM32(edi + 0x78);
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F7946u); RECOMP_ABI_CALL(0x002C963Au, sub_002C963A); /* call 0x002C963A */

loc_000F7946: ;
    MEM32(esp + 0x10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 8;
    edx = ecx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x20;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    eax = esi + 0x38;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    ebx = MEM32(edi + 0x74);
    eax = MEM32(esi + 4);
    edx = MEM32(eax + 0xB0);
    eax = MEM32(edx + 4);
    edi = MEM32(edi + 0x70);
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F79B9u); RECOMP_ABI_CALL(0x002C8EA4u, sub_002C8EA4); /* call 0x002C8EA4 */

loc_000F79B9: ;
    ecx = MEM32(esp + 0xC);
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x10));
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = ecx;
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F79ECu); RECOMP_ABI_CALL(0x002C8EA4u, sub_002C8EA4); /* call 0x002C8EA4 */

loc_000F79EC: ;
    edx = MEM32(esp + 0xC);
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    edi = esi + 0x38;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F7A19u); RECOMP_ABI_CALL(0x002C8EA4u, sub_002C8EA4); /* call 0x002C8EA4 */

loc_000F7A19: ;
    PUSH32(esp, ebx);
    eax = esi + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F7A23u); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_000F7A23: ;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, ebx);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F7A30u); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_000F7A30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F7A3Au); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_000F7A3A: ;
    MEM32(esi + 0x4C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = esp + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0xC0;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x84) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0xFC) = eax;
    MEM32(esp + 0x100) = eax;
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0xF4) = 0x11102;
    MEM32(esp + 0xF8) = 1;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0xFC) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xA8) = 0xC8C40000u;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x88) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0x24) = 0xD4301010u;
    MEM32(esp + 0xD8) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x10C) = 0x1FF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F7AEEu); RECOMP_ABI_CALL(0x002A2530u, sub_002A2530); /* call 0x002A2530 */

loc_000F7AEE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F7B00
 * Original: 0x000F7B00 - 0x000F7B1E (30 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F7B08u); RECOMP_ABI_CALL(0x000F7B20u, sub_000F7B20); /* call 0x000F7B20 */

loc_000F7B08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7B18; /* je: equal / zero */

loc_000F7B0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F7B15u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F7B15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F7B18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7B20
 * Original: 0x000F7B20 - 0x000F7B69 (73 bytes, 21 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7B20: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x331ED8;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B3A; /* je: equal / zero */

loc_000F7B2D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7B33u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F7B33: ;
    MEM32(esi + 0x1C) = 0;

loc_000F7B3A: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B4E; /* je: equal / zero */

loc_000F7B41: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7B47u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F7B47: ;
    MEM32(esi + 0x34) = 0;

loc_000F7B4E: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B62; /* je: equal / zero */

loc_000F7B55: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7B5Bu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F7B5B: ;
    MEM32(esi + 0x4C) = 0;

loc_000F7B62: ;
    MEM32(esi) = 0x330DE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7B70
 * Original: 0x000F7B70 - 0x000F8002 (1170 bytes, 337 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7B70: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x70);
    fp_push((double)SMEM32(eax + 0x70)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F7B9B; /* jge: greater or equal (signed >=) */

loc_000F7B95: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F7B9B: ;
    edx = MEM32(eax + 0x74);
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x74)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F7BAF; /* jge: greater or equal (signed >=) */

loc_000F7BA9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F7BAF: ;
    eax = MEM32(esi + 4);
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x68);
    fp_push((double)SMEM32(eax + 0x68)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F7BD2; /* jge: greater or equal (signed >=) */

loc_000F7BCC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F7BD2: ;
    edx = MEM32(eax + 0x6C);
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x6C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F7BE6; /* jge: greater or equal (signed >=) */

loc_000F7BE0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F7BE6: ;
    eax = MEM32(esi + 4);
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x70);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F7C10; /* jge: greater or equal (signed >=) */

loc_000F7C0A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F7C10: ;
    edx = MEM32(eax + 0x74);
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F7C2B; /* jge: greater or equal (signed >=) */

loc_000F7C25: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F7C2B: ;
    eax = MEM32(esi + 0x1C);
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7C3Au); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F7C3A: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F7C48u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7C48: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000F7C51u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7C51: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000F7C5Au); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7C5A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F7C63u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7C63: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    PUSH32(esp, 0x000F7C6Fu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F7C6F: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    edi = MEM32(esp + 0x68);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    ebx = MEM32(esp + 0x68);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ebp = MEM32(esp + 0x38);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x74);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(0x2A82EC) = 0;
    PUSH32(esp, 0x000F7D40u); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F7D40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x70);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F7D6A; /* jge: greater or equal (signed >=) */

loc_000F7D64: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F7D6A: ;
    edx = MEM32(eax + 0x74);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F7D86; /* jge: greater or equal (signed >=) */

loc_000F7D80: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F7D86: ;
    eax = MEM32(esi + 0x34);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7D95u); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F7D95: ;
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F7DA0u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7DA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000F7DA9u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7DA9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000F7DB2u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7DB2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F7DBBu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7DBB: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x68);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F7E70u); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F7E70: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x331EE8);
    edi = esi + 0x20;
    ebx = esi + 0x38;
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x000F7E8Cu); RECOMP_ABI_CALL(0x000F2AC0u, sub_000F2AC0); /* call 0x000F2AC0 */

loc_000F7E8C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x331EE8);
    PUSH32(esp, ecx);
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0x000F7EA2u); RECOMP_ABI_CALL(0x000F2AC0u, sub_000F2AC0); /* call 0x000F2AC0 */

loc_000F7EA2: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7EB3u); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F7EB3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F7EBBu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7EBB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000F7EC4u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7EC4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000F7ECDu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7ECD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F7ED6u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F7ED6: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0x000F7EE5u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F7EE5: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x2A82EC) = 1;
    PUSH32(esp, 0x000F7EFEu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F7EFE: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x2A82F8) = 0x302;
    PUSH32(esp, 0x000F7F17u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F7F17: ;
    MEM32(0x2A82FC) = 0x303;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F7F2Au); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_000F7F2A: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x9C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x9C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xAC);
    PUSH32(esp, 0x68FFFFFF);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xB0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F7FF3u); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F7FF3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F7FFAu); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_000F7FFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F7FCF
 * Original: 0x000F7FCF - 0x000F8002 (51 bytes, 18 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7FCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7FCF: ;
    eax = MEM32(esp + 0x9C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xAC);
    PUSH32(esp, 0x68FFFFFF);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xB0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F7FF3u); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F7FF3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F7FFAu); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_000F7FFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270960
 * Original: 0x00270960 - 0x002709A0 (64 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270960: ;
    PUSH32(esp, 0x00270965u); RECOMP_ABI_CALL(0x00270910u, sub_00270910); /* call 0x00270910 */

loc_00270965: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002709A0
 * Original: 0x002709A0 - 0x002709C8 (40 bytes, 10 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002709A0(void)
{

loc_002709A0: ;
    eax = MEM32(0x64D87C);
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = eax + 0x54;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = edx;
    PUSH32(esp, 0x002709C6u); RECOMP_ABI_CALL(0x001083D0u, sub_001083D0); /* call 0x001083D0 */

loc_002709C6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002709D0
 * Original: 0x002709D0 - 0x00270A3C (108 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002709D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002709D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002709D7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002709D7: ;
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D87C);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D880);
    esi = ecx + 0x54;
    edi = eax;
    MEM32(0x64D884) = edx;
    PUSH32(esp, 0x002709FFu); RECOMP_ABI_CALL(0x001083D0u, sub_001083D0); /* call 0x001083D0 */

loc_002709FF: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270A40
 * Original: 0x00270A40 - 0x00270A7A (58 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00270A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270A40: ;
    eax = MEM32(0x64D87C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D880);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00270A77; /* je: equal / zero */

loc_00270A61: ;
    eax = MEM32(eax + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270A77; /* je: equal / zero */

loc_00270A68: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1C), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270A77; /* je: equal / zero */

loc_00270A71: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00270A77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270A80
 * Original: 0x00270A80 - 0x00270AF9 (121 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270A80: ;
    PUSH32(esp, 0x00270A85u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270A85: ;
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D87C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D880);
    MEM32(0x64D884) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00270ABA; /* je: equal / zero */

loc_00270AA7: ;
    ecx = MEM32(ecx + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270ABA; /* je: equal / zero */

loc_00270AAE: ;
    _fa = (uint32_t)(MEM8(ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1C), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270ABA; /* je: equal / zero */

loc_00270AB3: ;
    edx = 1;
    goto loc_00270ABC;

loc_00270ABA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00270ABC: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270B00
 * Original: 0x00270B00 - 0x00270B35 (53 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270B00: ;
    eax = MEM32(0x64D87C);
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = eax + 0x54;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00270B33; /* jne: not equal / not zero */

loc_00270B26: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270B30u); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_00270B30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270B33: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270B40
 * Original: 0x00270B40 - 0x00270B7E (62 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270B46u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270B46: ;
    ecx = MEM32(0x64D87C);
    edx = MEM32(0x64D878);
    esi = ecx + 0x54;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D880);
    MEM32(0x64D884) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00270B75; /* jne: not equal / not zero */

loc_00270B6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270B72u); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_00270B72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270B75: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270B80
 * Original: 0x00270B80 - 0x00270B8D (13 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270B80: ;
    PUSH32(esp, 0x00270B85u); RECOMP_ABI_CALL(0x00108160u, sub_00108160); /* call 0x00108160 */

loc_00270B85: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270B90
 * Original: 0x00270B90 - 0x00270B9D (13 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270B90: ;
    PUSH32(esp, 0x00270B95u); RECOMP_ABI_CALL(0x00108680u, sub_00108680); /* call 0x00108680 */

loc_00270B95: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270BA0
 * Original: 0x00270BA0 - 0x00270BD3 (51 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270BA0: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D1E4);
    PUSH32(esp, eax);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00270BCAu); RECOMP_ABI_CALL(0x00017950u, sub_00017950); /* call 0x00017950 */

loc_00270BCA: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270BE0
 * Original: 0x00270BE0 - 0x00270C53 (115 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270BE0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D1E4);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00270C0C; /* je: equal / zero */

loc_00270C06: ;
    esi = MEM32(eax + ecx * 4 + 0x6C);
    goto loc_00270C0E;

loc_00270C0C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00270C0E: ;
    ecx = MEM32(0x64D854);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ecx + 0x6270D8;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270C60
 * Original: 0x00270C60 - 0x00270CBF (95 bytes, 23 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270C60: ;
    eax = MEM32(0x64D1E4);
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270C7F; /* je: equal / zero */

loc_00270C6F: ;
    eax = MEM32(eax + ecx * 4 + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270C7F; /* je: equal / zero */

loc_00270C77: ;
    edx = MEM32(eax + 0x80);
    goto loc_00270C82;

loc_00270C7F: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00270C82: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270CC0
 * Original: 0x00270CC0 - 0x00270D2A (106 bytes, 24 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270CC0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270CE2u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270CE2: ;
    ecx = MEM32(0x64D1E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270CEEu); RECOMP_ABI_CALL(0x00017D40u, sub_00017D40); /* call 0x00017D40 */

loc_00270CEE: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270D30
 * Original: 0x00270D30 - 0x00270D9D (109 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270D30: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270D53u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270D53: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00270D5Du); RECOMP_ABI_CALL(0x00018290u, sub_00018290); /* call 0x00018290 */

loc_00270D5D: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270DA0
 * Original: 0x00270DA0 - 0x00270E0D (109 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270DA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270DC3u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270DC3: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00270DCDu); RECOMP_ABI_CALL(0x00018400u, sub_00018400); /* call 0x00018400 */

loc_00270DCD: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270E10
 * Original: 0x00270E10 - 0x00270E91 (129 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270E10: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270E35u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270E35: ;
    edi = eax;
    PUSH32(esp, 0x00270E3Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270E3C: ;
    ebx = eax;
    PUSH32(esp, 0x00270E43u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270E43: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00270E4Fu); RECOMP_ABI_CALL(0x00017F90u, sub_00017F90); /* call 0x00017F90 */

loc_00270E4F: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270EA0
 * Original: 0x00270EA0 - 0x00270F18 (120 bytes, 32 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270EA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270EC4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270EC4: ;
    edi = eax;
    PUSH32(esp, 0x00270ECBu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270ECB: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00270ED7u); RECOMP_ABI_CALL(0x00018010u, sub_00018010); /* call 0x00018010 */

loc_00270ED7: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270F20
 * Original: 0x00270F20 - 0x00270FAC (140 bytes, 42 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270F20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270F46u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270F46: ;
    edi = eax;
    PUSH32(esp, 0x00270F4Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270F4D: ;
    ebx = eax;
    PUSH32(esp, 0x00270F54u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270F54: ;
    ebp = eax;
    PUSH32(esp, 0x00270F5Bu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270F5B: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0x00270F69u); RECOMP_ABI_CALL(0x00018080u, sub_00018080); /* call 0x00018080 */

loc_00270F69: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270FB0
 * Original: 0x00270FB0 - 0x0027103C (140 bytes, 42 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270FB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270FD6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270FD6: ;
    edi = eax;
    PUSH32(esp, 0x00270FDDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270FDD: ;
    ebx = eax;
    PUSH32(esp, 0x00270FE4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270FE4: ;
    ebp = eax;
    PUSH32(esp, 0x00270FEBu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270FEB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00270FF9u); RECOMP_ABI_CALL(0x00018100u, sub_00018100); /* call 0x00018100 */

loc_00270FF9: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271040
 * Original: 0x00271040 - 0x002710E5 (165 bytes, 41 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271040: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    esi = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D87C) = ecx;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(0x64D858) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x3418EC); PUSH32(esp, 0x0027108Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00271084u); } /* indirect call */
    }

loc_0027108B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - 0x20;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00271097u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271097: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002710A2u); RECOMP_ABI_CALL(0x00018170u, sub_00018170); /* call 0x00018170 */

loc_002710A2: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x48);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002710F0
 * Original: 0x002710F0 - 0x002711A2 (178 bytes, 49 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002710F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002710F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D854);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D884) = eax;
    SET_LO8(eax, MEM8(0x64CFB8));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00271146; /* je: equal / zero */

loc_00271135: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271146; /* je: equal / zero */

loc_0027113E: ;
    edi = MEM32(edx + 0x6270D8);
    goto loc_00271148;

loc_00271146: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00271148: ;
    PUSH32(esp, 0x0027114Du); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0027114D: ;
    esi = eax;
    PUSH32(esp, 0x00271154u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271154: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00271160u); RECOMP_ABI_CALL(0x000181D0u, sub_000181D0); /* call 0x000181D0 */

loc_00271160: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002711B0
 * Original: 0x002711B0 - 0x00271227 (119 bytes, 32 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002711B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002711B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002711D4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002711D4: ;
    edi = eax;
    PUSH32(esp, 0x002711DBu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_002711DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002711E6u); RECOMP_ABI_CALL(0x00018230u, sub_00018230); /* call 0x00018230 */

loc_002711E6: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271230
 * Original: 0x00271230 - 0x0027135D (301 bytes, 77 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271230: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0027127B; /* jne: not equal / not zero */

loc_00271271: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00271283;

loc_0027127B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00271283: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_002712A1; /* jne: not equal / not zero */

loc_00271297: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_002712A9;

loc_002712A1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_002712A9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002712D2; /* jne: not equal / not zero */

loc_002712C8: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_002712DA;

loc_002712D2: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_002712DA: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002712E5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002712E5: ;
    esi = eax;
    PUSH32(esp, 0x002712ECu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002712EC: ;
    edi = eax;
    PUSH32(esp, 0x002712F3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002712F3: ;
    ebx = eax;
    PUSH32(esp, 0x002712FAu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_002712FA: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0x00271318u); RECOMP_ABI_CALL(0x000182F0u, sub_000182F0); /* call 0x000182F0 */

loc_00271318: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x1C);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271360
 * Original: 0x00271360 - 0x002713A1 (65 bytes, 23 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271360: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271367u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271367: ;
    esi = eax;
    PUSH32(esp, 0x0027136Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027136E: ;
    edi = eax;
    PUSH32(esp, 0x00271375u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271375: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271397; /* jne: not equal / not zero */

loc_0027138E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271397u); RECOMP_ABI_CALL(0x0005E7C0u, sub_0005E7C0); /* call 0x0005E7C0 */

loc_00271397: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002713B0
 * Original: 0x002713B0 - 0x00271400 (80 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002713B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002713B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002713B6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002713B6: ;
    esi = eax;
    PUSH32(esp, 0x002713BDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002713BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(0x64D1E4);
    if (CMP_NE(_fa, _fb)) goto loc_002713D8; /* jne: not equal / not zero */

loc_002713C8: ;
    eax = MEM32(ecx + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002713F7; /* je: equal / zero */

loc_002713D2: ;
    ecx = MEM32(ecx + eax * 4 + 0x6C);
    goto loc_002713E0;

loc_002713D8: ;
    ecx = MEM32(ecx + 4);
    eax = ecx + eax * 4;
    ecx = MEM32(eax);

loc_002713E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002713F7; /* je: equal / zero */

loc_002713E4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x80), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002713F7; /* jne: not equal / not zero */

loc_002713ED: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002713F7u); RECOMP_ABI_CALL(0x0005EBD0u, sub_0005EBD0); /* call 0x0005EBD0 */

loc_002713F7: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271400
 * Original: 0x00271400 - 0x0027143F (63 bytes, 24 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271400: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271408u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271408: ;
    esi = eax;
    PUSH32(esp, 0x0027140Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027140F: ;
    edi = eax;
    PUSH32(esp, 0x00271416u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271416: ;
    ebx = eax;
    PUSH32(esp, 0x0027141Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027141D: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 4);
    eax = edx + eax * 4;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    edx = ebx;
    PUSH32(esp, 0x00271434u); RECOMP_ABI_CALL(0x0005E760u, sub_0005E760); /* call 0x0005E760 */

loc_00271434: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271440
 * Original: 0x00271440 - 0x0027147C (60 bytes, 20 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271440: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271447u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271447: ;
    esi = eax;
    PUSH32(esp, 0x0027144Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027144E: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x24);
    eax = edx + eax * 4;
    edx = MEM32(ecx + esi * 4);
    ecx = ecx + esi * 4;
    esi = MEM32(eax);
    MEM32(esp + 4) = edx;
    edx = esp + 4;
    PUSH32(esp, 0x00271472u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_00271472: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271480
 * Original: 0x00271480 - 0x002714B5 (53 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271480: ;
    eax = MEM32(0x64D1E4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 0x54);
    ecx = ecx + edx * 4;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = eax + edx * 4;
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, 0x002714B3u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_002714B3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002714C0
 * Original: 0x002714C0 - 0x0027150D (77 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002714C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002714C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002714C8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002714C8: ;
    esi = eax;
    PUSH32(esp, 0x002714CFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002714CF: ;
    edi = eax;
    PUSH32(esp, 0x002714D6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002714D6: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x54);
    eax = edx + eax * 4;
    edx = MEM32(ecx + edi * 4);
    ecx = ecx + edi * 4;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = edx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, 0x00271502u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_00271502: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271510
 * Original: 0x00271510 - 0x0027154F (63 bytes, 21 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271517u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271517: ;
    esi = eax;
    PUSH32(esp, 0x0027151Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027151E: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x24);
    ecx = ecx + esi * 4;
    esi = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, 0x00271545u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_00271545: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271550
 * Original: 0x00271550 - 0x0027159C (76 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271550: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271558u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271558: ;
    esi = eax;
    PUSH32(esp, 0x0027155Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027155F: ;
    edi = eax;
    PUSH32(esp, 0x00271566u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271566: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x54);
    eax = edx + eax * 4;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(eax);
    ecx = ecx + edi * 4;
    MEM32(esp + 8) = edx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + eax + 0x18;
    edx = esp + 8;
    PUSH32(esp, 0x00271591u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_00271591: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002715A0
 * Original: 0x002715A0 - 0x002715D3 (51 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002715A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002715A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002715A6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002715A6: ;
    esi = eax;
    PUSH32(esp, 0x002715ADu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002715AD: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x64);
    eax = edx + eax * 4;
    edx = MEM32(eax);
    eax = MEM32(ecx + esi * 4);
    ecx = ecx + esi * 4;
    MEM32(edx + 0x9C) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002715E0
 * Original: 0x002715E0 - 0x00271613 (51 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002715E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002715E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002715E6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002715E6: ;
    esi = eax;
    PUSH32(esp, 0x002715EDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002715ED: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x64);
    eax = edx + eax * 4;
    edx = MEM32(eax);
    eax = MEM32(ecx + esi * 4);
    ecx = ecx + esi * 4;
    MEM32(edx + 0xA0) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271620
 * Original: 0x00271620 - 0x0027164B (43 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271620: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271626u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271626: ;
    esi = eax;
    PUSH32(esp, 0x0027162Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027162D: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + eax * 4);
    edx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00271642u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027163Fu); } /* indirect call */
    }

loc_00271642: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271650
 * Original: 0x00271650 - 0x0027168F (63 bytes, 21 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271650: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271657u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271657: ;
    esi = eax;
    PUSH32(esp, 0x0027165Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027165E: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0x14);
    ecx = ecx + esi * 4;
    esi = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, 0x00271685u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_00271685: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271690
 * Original: 0x00271690 - 0x00271706 (118 bytes, 31 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271690: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002716B3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002716B3: ;
    edi = eax;
    PUSH32(esp, 0x002716BAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002716BA: ;
    ecx = MEM32(0x64D1E4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002716C9u); RECOMP_ABI_CALL(0x00017DF0u, sub_00017DF0); /* call 0x00017DF0 */

loc_002716C9: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271710
 * Original: 0x00271710 - 0x00271790 (128 bytes, 36 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271710: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00271734u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271734: ;
    edi = eax;
    PUSH32(esp, 0x0027173Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027173B: ;
    ebx = eax;
    PUSH32(esp, 0x00271742u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271742: ;
    ecx = MEM32(0x64D1E4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00271752u); RECOMP_ABI_CALL(0x00017E90u, sub_00017E90); /* call 0x00017E90 */

loc_00271752: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271790
 * Original: 0x00271790 - 0x00271856 (198 bytes, 59 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271790: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D858);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = edx;
    ebp = eax + 0x6270D8;
    PUSH32(esp, 0x002717E3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002717E3: ;
    edi = eax;
    PUSH32(esp, 0x002717EAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002717EA: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002717F3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002717F3: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002717FCu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002717FC: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00271805u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271805: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0027180Eu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_0027180E: ;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00271817u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271817: ;
    edx = MEM32(0x64D1E4);
    ecx = MEM32(edx + 0x64);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    eax = ecx + eax * 4;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271847u); RECOMP_ABI_CALL(0x000607E0u, sub_000607E0); /* call 0x000607E0 */

loc_00271847: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271860
 * Original: 0x00271860 - 0x002718A1 (65 bytes, 25 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271860(void)
{

loc_00271860: ;
    eax = MEM32(0x64D1E4);
    ecx = MEM32(eax + 0x64);
    eax = ecx + edx * 4;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002718A0u); RECOMP_ABI_CALL(0x00060770u, sub_00060770); /* call 0x00060770 */

loc_002718A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002718B0
 * Original: 0x002718B0 - 0x00271992 (226 bytes, 66 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002718B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002718B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D858);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = ebx;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    ebx = eax + 0x6270D8;
    PUSH32(esp, 0x00271903u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271903: ;
    ebp = eax;
    PUSH32(esp, 0x0027190Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027190A: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00271913u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271913: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0027191Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027191C: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00271925u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271925: ;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax + 0x6270D8;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00271952u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271952: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x64);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    eax = edx + eax * 4;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271983u); RECOMP_ABI_CALL(0x00060770u, sub_00060770); /* call 0x00060770 */

loc_00271983: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027190E
 * Original: 0x0027190E - 0x00271992 (132 bytes, 43 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027190E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027190E: ;
    PUSH32(esp, 0x00271913u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271913: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0027191Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027191C: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00271925u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271925: ;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax + 0x6270D8;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00271952u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271952: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x64);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    eax = edx + eax * 4;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271983u); RECOMP_ABI_CALL(0x00060770u, sub_00060770); /* call 0x00060770 */

loc_00271983: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002719A0
 * Original: 0x002719A0 - 0x002719D6 (54 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002719A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002719A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002719A7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002719A7: ;
    esi = eax;
    PUSH32(esp, 0x002719AEu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002719AE: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x64);
    eax = edx + eax * 4;
    MEM32(esp + 4) = esi;
    esi = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, 0x002719CCu); RECOMP_ABI_CALL(0x000608E0u, sub_000608E0); /* call 0x000608E0 */

loc_002719CC: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002719E0
 * Original: 0x002719E0 - 0x00271A3A (90 bytes, 35 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002719E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002719E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002719E8u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_002719E8: ;
    ebx = eax;
    PUSH32(esp, 0x002719EFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002719EF: ;
    edi = eax;
    PUSH32(esp, 0x002719F6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002719F6: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x64);
    esi = MEM32(edx + eax * 4);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edx + eax * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00271A2F; /* je: equal / zero */

loc_00271A0C: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00271A2F; /* jae: above or equal (unsigned >=) */

loc_00271A18: ;
    eax = ecx;
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = eax + edi * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00271A2F; /* je: equal / zero */

loc_00271A24: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00271A2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00271A27u); } /* indirect call */
    }

loc_00271A2A: ;
    PUSH32(esp, 0x00271A2Fu); RECOMP_ABI_CALL(0x000605C0u, sub_000605C0); /* call 0x000605C0 */

loc_00271A2F: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271A40
 * Original: 0x00271A40 - 0x00271A8A (74 bytes, 24 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271A40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271A46u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271A46: ;
    esi = eax;
    PUSH32(esp, 0x00271A4Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271A4D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(0x64D1E4);
    ecx = MEM32(edx + 4);
    eax = ecx + eax * 4;
    ecx = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00271A76; /* je: equal / zero */

loc_00271A60: ;
    edx = MEM32(edx + 0x44);
    eax = edx + esi * 4;
    eax = MEM32(eax);
    PUSH32(esp, 0x00271A6Du); RECOMP_ABI_CALL(0x0005F350u, sub_0005F350); /* call 0x0005F350 */

loc_00271A6D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271A76: ;
    eax = MEM32(ecx + 0x88);
    PUSH32(esp, 0x00271A81u); RECOMP_ABI_CALL(0x0005F350u, sub_0005F350); /* call 0x0005F350 */

loc_00271A81: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271A90
 * Original: 0x00271A90 - 0x00271ADF (79 bytes, 28 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271A90: ;
    eax = MEM32(0x64D1E4);
    ecx = MEM32(eax + 0x44);
    eax = ecx + edx * 4;
    edx = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x9C);
    if (CMP_EQ(_fa, _fb)) goto loc_00271AC9; /* je: equal / zero */

loc_00271AAE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271ADD; /* je: equal / zero */

loc_00271AB2: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271ADD; /* jne: not equal / not zero */

loc_00271AB7: ;
    MEM32(esi + 0x2C) = 1;
    MEM8(esi + 0x30) = 0xFF;
    PUSH32(esp, 0x00271AC7u); RECOMP_ABI_CALL(0x000605C0u, sub_000605C0); /* call 0x000605C0 */

loc_00271AC7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271AC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271ADD; /* je: equal / zero */

loc_00271ACD: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271ADD; /* je: equal / zero */

loc_00271AD2: ;
    MEM32(esi + 0x2C) = ecx;
    MEM8(esi + 0x30) = LO8(ecx);
    PUSH32(esp, 0x00271ADDu); RECOMP_ABI_CALL(0x000605C0u, sub_000605C0); /* call 0x000605C0 */

loc_00271ADD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271AE0
 * Original: 0x00271AE0 - 0x00271B01 (33 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271AE6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271AE6: ;
    esi = eax;
    PUSH32(esp, 0x00271AEDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271AED: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0x00271AF5u); RECOMP_ABI_CALL(0x00271A90u, sub_00271A90); /* call 0x00271A90 */

loc_00271AF5: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271B10
 * Original: 0x00271B10 - 0x00271B4E (62 bytes, 19 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271B10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271B17u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271B17: ;
    esi = eax;
    PUSH32(esp, 0x00271B1Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271B1E: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 4);
    ebx = MEM32(edx + esi * 4);
    edx = edx + esi * 4;
    MEM32(ecx + eax * 4 + 0x104) = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271B44u); RECOMP_ABI_CALL(0x0005F6E0u, sub_0005F6E0); /* call 0x0005F6E0 */

loc_00271B44: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271B50
 * Original: 0x00271B50 - 0x00271BD1 (129 bytes, 43 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271B50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271B5Au); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271B5A: ;
    esi = eax;
    PUSH32(esp, 0x00271B61u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271B61: ;
    edi = eax;
    PUSH32(esp, 0x00271B68u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271B68: ;
    ebx = eax;
    PUSH32(esp, 0x00271B6Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271B6F: ;
    ebp = eax;
    PUSH32(esp, 0x00271B76u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271B76: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00271B7Fu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271B7F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271B8Eu); RECOMP_ABI_CALL(0x00018460u, sub_00018460); /* call 0x00018460 */

loc_00271B8E: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271BE0
 * Original: 0x00271BE0 - 0x00271C2A (74 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271BE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00271BE6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271BE6: ;
    MEM32(esp) = eax;
    PUSH32(esp, 0x00271BEEu); RECOMP_ABI_CALL(0x00018790u, sub_00018790); /* call 0x00018790 */

loc_00271BEE: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271C30
 * Original: 0x00271C30 - 0x00271CAE (126 bytes, 30 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271C30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271C36u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271C36: ;
    ecx = MEM32(0x64D1E4);
    SET_LO16(esi, MEM16(ecx + 0x16C));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(eax) (16-bit) */
    edx = 0x10000;
    if (CMP_NE(_fa, _fb)) goto loc_00271C55; /* jne: not equal / not zero */

loc_00271C4D: ;
    edx = MEM32(ecx + 0x168);
    goto loc_00271C70;

loc_00271C55: ;
    _fa = (uint32_t)(MEM16(ecx + 0x17C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x17C), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271C66; /* jne: not equal / not zero */

loc_00271C5E: ;
    edx = MEM32(ecx + 0x178);
    goto loc_00271C70;

loc_00271C66: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271C70; /* je: equal / zero */

loc_00271C6B: ;
    edx = 0x20000;

loc_00271C70: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271CB0
 * Original: 0x00271CB0 - 0x00271CC7 (23 bytes, 5 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271CB0: ;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD0) = 2;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271CD0
 * Original: 0x00271CD0 - 0x00271D0A (58 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271CD0: ;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD0) = 2;
    ecx = MEM32(eax * 8 + 0x616FD4);
    eax = eax * 8 + 0x616FD4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax);
    ecx = MEM32(0x64D854);
    MEM32(ecx + 0x6270B8) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271D10
 * Original: 0x00271D10 - 0x00271D4A (58 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271D10: ;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD0) = 2;
    ecx = MEM32(eax * 8 + 0x616FD4);
    eax = eax * 8 + 0x616FD4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax);
    ecx = MEM32(0x64D854);
    MEM32(ecx + 0x6270B8) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271D50
 * Original: 0x00271D50 - 0x00271D6C (28 bytes, 6 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271D50: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(0x60D180));
    MEM16(eax * 8 + 0x616FD0) = LO16(ecx);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271D70
 * Original: 0x00271D70 - 0x00271DB0 (64 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271D70: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    SET_LO16(edx, MEM16(0x60D180));
    MEM16(ecx * 8 + 0x616FD0) = LO16(edx);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    edx = MEM32(0x64D854);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271DB0
 * Original: 0x00271DB0 - 0x00271DF0 (64 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271DB0: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(0x64D854);
    MEM16(ecx * 8 + 0x616FD0) = 1;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271DF0
 * Original: 0x00271DF0 - 0x00271E3D (77 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271DF0: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM16(ecx * 8 + 0x616FD0) = 3;
    eax = MEM32(eax);
    edx = MEM32(eax);
    ecx = MEM32(0x64D854);
    MEM32(ecx + 0x6270B8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x6270BC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x6270C0) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271E40
 * Original: 0x00271E40 - 0x00271E8D (77 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271E40: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM16(ecx * 8 + 0x616FD0) = 3;
    eax = MEM32(eax);
    edx = MEM32(eax);
    ecx = MEM32(0x64D854);
    MEM32(ecx + 0x6270B8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x6270BC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x6270C0) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271E90
 * Original: 0x00271E90 - 0x00271ECB (59 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271E90: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(0x64D854);
    MEM16(ecx * 8 + 0x616FD0) = 1;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271ED0
 * Original: 0x00271ED0 - 0x00271F0B (59 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271ED0: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(0x64D854);
    MEM16(ecx * 8 + 0x616FD0) = 1;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271F10
 * Original: 0x00271F10 - 0x00271F4B (59 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271F10: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(0x64D854);
    MEM16(ecx * 8 + 0x616FD0) = 2;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271F50
 * Original: 0x00271F50 - 0x00271F8B (59 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271F50: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(0x64D854);
    MEM16(ecx * 8 + 0x616FD0) = 2;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271F90
 * Original: 0x00271F90 - 0x0027200E (126 bytes, 36 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271F90: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x00271FBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00271FB7u); } /* indirect call */
    }

loc_00271FBE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00271FE2; /* je: equal / zero */

loc_00271FD7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00271FE8; /* jne: not equal / not zero */

loc_00271FDA: ;
    esi = MEM32(0x614FD0);
    goto loc_00271FE8;

loc_00271FE2: ;
    esi = MEM32(0x614FCC);

loc_00271FE8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 1;
    PUSH32(esp, 0x00272002u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272002: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272010
 * Original: 0x00272010 - 0x00272091 (129 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272010: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027203Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272037u); } /* indirect call */
    }

loc_0027203E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272062; /* je: equal / zero */

loc_00272057: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272068; /* jne: not equal / not zero */

loc_0027205A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272068;

loc_00272062: ;
    esi = MEM32(0x614FCC);

loc_00272068: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 1;
    PUSH32(esp, 0x00272085u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272085: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002720A0
 * Original: 0x002720A0 - 0x00272121 (129 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002720A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002720A0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002720CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002720C7u); } /* indirect call */
    }

loc_002720CE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_002720F2; /* je: equal / zero */

loc_002720E7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002720F8; /* jne: not equal / not zero */

loc_002720EA: ;
    esi = MEM32(0x614FD0);
    goto loc_002720F8;

loc_002720F2: ;
    esi = MEM32(0x614FCC);

loc_002720F8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 1;
    PUSH32(esp, 0x00272115u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272115: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272130
 * Original: 0x00272130 - 0x002721B6 (134 bytes, 38 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272130: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027215Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272157u); } /* indirect call */
    }

loc_0027215E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272182; /* je: equal / zero */

loc_00272177: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272188; /* jne: not equal / not zero */

loc_0027217A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272188;

loc_00272182: ;
    esi = MEM32(0x614FCC);

loc_00272188: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D188));
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x002721AAu); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_002721AA: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002721C0
 * Original: 0x002721C0 - 0x00272246 (134 bytes, 38 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002721C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002721C0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002721EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002721E7u); } /* indirect call */
    }

loc_002721EE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272212; /* je: equal / zero */

loc_00272207: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272218; /* jne: not equal / not zero */

loc_0027220A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272218;

loc_00272212: ;
    esi = MEM32(0x614FCC);

loc_00272218: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D188));
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x0027223Au); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_0027223A: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272250
 * Original: 0x00272250 - 0x002722D1 (129 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272250: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027227Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272277u); } /* indirect call */
    }

loc_0027227E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_002722A2; /* je: equal / zero */

loc_00272297: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002722A8; /* jne: not equal / not zero */

loc_0027229A: ;
    esi = MEM32(0x614FD0);
    goto loc_002722A8;

loc_002722A2: ;
    esi = MEM32(0x614FCC);

loc_002722A8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 2;
    PUSH32(esp, 0x002722C5u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_002722C5: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002722E0
 * Original: 0x002722E0 - 0x00272361 (129 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002722E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002722E0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027230Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272307u); } /* indirect call */
    }

loc_0027230E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272332; /* je: equal / zero */

loc_00272327: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272338; /* jne: not equal / not zero */

loc_0027232A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272338;

loc_00272332: ;
    esi = MEM32(0x614FCC);

loc_00272338: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 2;
    PUSH32(esp, 0x00272355u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272355: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272370
 * Original: 0x00272370 - 0x002723F1 (129 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272370: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027239Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272397u); } /* indirect call */
    }

loc_0027239E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_002723C2; /* je: equal / zero */

loc_002723B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002723C8; /* jne: not equal / not zero */

loc_002723BA: ;
    esi = MEM32(0x614FD0);
    goto loc_002723C8;

loc_002723C2: ;
    esi = MEM32(0x614FCC);

loc_002723C8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 3;
    PUSH32(esp, 0x002723E5u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_002723E5: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272400
 * Original: 0x00272400 - 0x00272481 (129 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272400: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027242Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272427u); } /* indirect call */
    }

loc_0027242E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272452; /* je: equal / zero */

loc_00272447: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272458; /* jne: not equal / not zero */

loc_0027244A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272458;

loc_00272452: ;
    esi = MEM32(0x614FCC);

loc_00272458: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 3;
    PUSH32(esp, 0x00272475u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272475: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272490
 * Original: 0x00272490 - 0x00272516 (134 bytes, 38 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272490: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002724BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002724B7u); } /* indirect call */
    }

loc_002724BE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_002724E2; /* je: equal / zero */

loc_002724D7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002724E8; /* jne: not equal / not zero */

loc_002724DA: ;
    esi = MEM32(0x614FD0);
    goto loc_002724E8;

loc_002724E2: ;
    esi = MEM32(0x614FCC);

loc_002724E8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D180));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x0027250Au); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_0027250A: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272520
 * Original: 0x00272520 - 0x002725A6 (134 bytes, 38 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272520: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027254Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272547u); } /* indirect call */
    }

loc_0027254E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272572; /* je: equal / zero */

loc_00272567: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272578; /* jne: not equal / not zero */

loc_0027256A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272578;

loc_00272572: ;
    esi = MEM32(0x614FCC);

loc_00272578: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D180));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x0027259Au); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_0027259A: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002725B0
 * Original: 0x002725B0 - 0x00272636 (134 bytes, 38 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002725B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002725B0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002725DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002725D7u); } /* indirect call */
    }

loc_002725DE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272602; /* je: equal / zero */

loc_002725F7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272608; /* jne: not equal / not zero */

loc_002725FA: ;
    esi = MEM32(0x614FD0);
    goto loc_00272608;

loc_00272602: ;
    esi = MEM32(0x614FCC);

loc_00272608: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D186));
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x0027262Au); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_0027262A: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272640
 * Original: 0x00272640 - 0x002726C6 (134 bytes, 38 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272640: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027266Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272667u); } /* indirect call */
    }

loc_0027266E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272692; /* je: equal / zero */

loc_00272687: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272698; /* jne: not equal / not zero */

loc_0027268A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272698;

loc_00272692: ;
    esi = MEM32(0x614FCC);

loc_00272698: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D186));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x002726BAu); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_002726BA: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002726D0
 * Original: 0x002726D0 - 0x00272751 (129 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002726D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002726D0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002726FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002726F7u); } /* indirect call */
    }

loc_002726FE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272722; /* je: equal / zero */

loc_00272717: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272728; /* jne: not equal / not zero */

loc_0027271A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272728;

loc_00272722: ;
    esi = MEM32(0x614FCC);

loc_00272728: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 1;
    PUSH32(esp, 0x00272745u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272745: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272760
 * Original: 0x00272760 - 0x002727E1 (129 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272760: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027278Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272787u); } /* indirect call */
    }

loc_0027278E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_002727B2; /* je: equal / zero */

loc_002727A7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002727B8; /* jne: not equal / not zero */

loc_002727AA: ;
    esi = MEM32(0x614FD0);
    goto loc_002727B8;

loc_002727B2: ;
    esi = MEM32(0x614FCC);

loc_002727B8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 1;
    PUSH32(esp, 0x002727D5u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_002727D5: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002727F0
 * Original: 0x002727F0 - 0x0027287E (142 bytes, 51 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002727F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002727F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D398);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ebp + 4;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00272837; /* je: equal / zero */

loc_00272810: ;
    ebx = ecx;
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x1B) = LO8(ecx);
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x18);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x19) = LO8(ebx);
    MEM8(esp + 0x1A) = LO8(ecx);
    ecx = MEM32(esp + 0x18);

loc_00272837: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272877; /* je: equal / zero */

loc_0027283B: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(esi + 4) = edx;
    edi = edx + 4;
    if (CMP_BE(_fa, _fb)) goto loc_00272868; /* jbe: below or equal (unsigned <=) */

loc_00272848: ;
    ebx = ecx;
    /* nop */

loc_00272850: ;
    eax = 1;
    esi = esp + 0x10;
    PUSH32(esp, 0x0027285Eu); RECOMP_ABI_CALL(0x000C17E0u, sub_000C17E0); /* call 0x000C17E0 */

loc_0027285E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272850; /* jne: not equal / not zero */

loc_00272864: ;
    eax = MEM32(esp + 0x10);

loc_00272868: ;
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx + 4);
    ecx = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(edx) = LO16(ecx);
    POP32(esp, edi);

loc_00272877: ;
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272880
 * Original: 0x00272880 - 0x00272902 (130 bytes, 39 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272880: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272901; /* je: equal / zero */

loc_00272887: ;
    PUSH32(esp, esi);
    esi = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272900; /* je: equal / zero */

loc_0027288F: ;
    _fa = (uint32_t)(MEM8(esi + 7)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 7), 0x1F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272900; /* je: equal / zero */

loc_00272895: ;
    _fa = (uint32_t)(MEM8(esi + 7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 7), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002728C2; /* jne: not equal / not zero */

loc_0027289B: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    ecx = MEM32(esi);
    edx = eax + -39;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002728BE; /* ja: above (unsigned >) */

loc_002728A9: ;
    edx = ZX8(MEM8(edx + 0x27290C));
    { uint32_t _jt = MEM32(edx * 4 + 0x272904); /* switch: 2 entries, 2 targets */
    if (_jt == 0x002728B7u) goto loc_002728B7;
    if (_jt == 0x002728BEu) goto loc_002728BE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002728B7: ;
    PUSH32(esp, 0x002728BCu); RECOMP_ABI_CALL(0x00108A60u, sub_00108A60); /* call 0x00108A60 */

loc_002728BC: ;
    goto loc_002728C0;

loc_002728BE: ;
    eax = ecx;

loc_002728C0: ;
    MEM32(esi) = eax;

loc_002728C2: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 7);
    ecx = eax + -16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002728DC; /* ja: above (unsigned >) */

loc_002728CE: ;
    ecx = ZX8(MEM8(ecx + 0x272920));
    { uint32_t _jt = MEM32(ecx * 4 + 0x272918); /* switch: 2 entries, 2 targets */
    if (_jt == 0x002728DCu) goto loc_002728DC;
    if (_jt == 0x002728ECu) goto loc_002728EC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002728DC: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    SET_LO16(ecx, MEM16(edx * 2 + 0x60D130));
    MEM16(esi + 4) = LO16(ecx);

loc_002728EC: ;
    SET_LO8(edx, MEM8(eax * 2 + 0x60D130));
    MEM8(esi + 7) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0xF));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272895; /* jne: not equal / not zero */

loc_00272900: ;
    POP32(esp, esi);

loc_00272901: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00272902
 * Original: 0x00272902 - 0x00272930 (46 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272902(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272902: ;
    edi = edi;
    SET_HI8(ebx, 0x28);
    RECOMP_UNIMPL("daa", 0x00272906u); /* TODO: daa */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + 0x2728) = MEM8(esi + 0x2728) + HI8(ebx);
    _fa = (uint32_t)(MEM8(esi + 0x2728)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    RECOMP_UNIMPL("in al, dx", 0x00272918u); /* TODO: in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    MEM8(edi) = MEM8(edi) - HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    MEM8(edi) = MEM8(edi) - HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00272930
 * Original: 0x00272930 - 0x00272A54 (292 bytes, 80 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272930: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx + 4);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00272A38; /* je: equal / zero */

loc_00272958: ;
    eax = MEM32(0x64D8C8);
    SET_LO16(ecx, MEM16(eax + 0x10));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFF (16-bit) */
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D880);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D870);
    PUSH32(esp, edi);
    edi = MEM32(0x64D878);
    MEM32(0x64D858) = esi;
    MEM32(0x64D854) = esi;
    MEM32(0x64D870) = esi;
    MEM32(0x64D87C) = esi;
    MEM32(0x64D878) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_002729BE; /* jne: not equal / not zero */

loc_0027299D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002729AD; /* je: equal / zero */

loc_002729A1: ;
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    goto loc_002729F8;

loc_002729AD: ;
    eax = MEM32(0x64D8B8);
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    goto loc_002729F8;

loc_002729BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A35; /* je: equal / zero */

loc_002729C2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272A35; /* je: equal / zero */

loc_002729C7: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A35; /* je: equal / zero */

loc_002729CE: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A35; /* je: equal / zero */

loc_002729D4: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A35; /* je: equal / zero */

loc_002729D9: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax);
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00272A35; /* jae: above or equal (unsigned >=) */

loc_002729E6: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 8);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D880) = ecx;

loc_002729F8: ;
    eax = edx + 4;
    PUSH32(esp, 0x00272A00u); RECOMP_ABI_CALL(0x000F8400u, sub_000F8400); /* call 0x000F8400 */

loc_00272A00: ;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D854), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A17; /* je: equal / zero */

loc_00272A08: ;
    ecx = MEM32(0x64D8CC);
    edx = MEM32(0x6270D8);
    MEM32(ecx + 4) = edx;

loc_00272A17: ;
    MEM32(0x64D870) = ebp;
    MEM32(0x64D87C) = edi;
    MEM32(0x64D878) = edi;
    MEM32(0x64D884) = ebx;
    MEM32(0x64D880) = ebx;

loc_00272A35: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00272A38: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x64D858) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272A60
 * Original: 0x00272A60 - 0x00272AF0 (144 bytes, 57 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272A60: ;
    PUSH32(esp, esi);
    esi = ZX16(LO16(edi));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00272A86; /* ja: above (unsigned >) */

loc_00272A6A: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x272AC8); /* switch: 9 entries, 8 targets */
    if (_jt == 0x00272A71u) goto loc_00272A71;
    if (_jt == 0x00272A7Bu) goto loc_00272A7B;
    if (_jt == 0x00272A88u) goto loc_00272A88;
    if (_jt == 0x00272A92u) goto loc_00272A92;
    if (_jt == 0x00272AA1u) goto loc_00272AA1;
    if (_jt == 0x00272AAEu) goto loc_00272AAE;
    if (_jt == 0x00272AB4u) goto loc_00272AB4;
    if (_jt == 0x00272ABEu) goto loc_00272ABE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00272A71: ;
    eax = ecx;
    ecx = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010E710(); return; /* tail jmp 0x0010E710 */

loc_00272A7B: ;
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x00272A83u); RECOMP_ABI_CALL(0x0010DFB0u, sub_0010DFB0); /* call 0x0010DFB0 */

loc_00272A83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00272A86: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00272A88: ;
    eax = ecx;
    ecx = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010E190(); return; /* tail jmp 0x0010E190 */

loc_00272A92: ;
    eax = ecx;
    PUSH32(esp, edi);
    ecx = edx;
    PUSH32(esp, 0x00272A9Cu); RECOMP_ABI_CALL(0x0010BF10u, sub_0010BF10); /* call 0x0010BF10 */

loc_00272A9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00272AA1: ;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, 0x00272AA9u); RECOMP_ABI_CALL(0x0010E570u, sub_0010E570); /* call 0x0010E570 */

loc_00272AA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00272AAE: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010DD10(); return; /* tail jmp 0x0010DD10 */

loc_00272AB4: ;
    eax = ecx;
    ecx = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010BC50(); return; /* tail jmp 0x0010BC50 */

loc_00272ABE: ;
    eax = ecx;
    ecx = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001103A0(); return; /* tail jmp 0x001103A0 */

    if (_flags /* jno: not overflow */) { g_seh_ebp = ebp; sub_00272AF4(); return; }

loc_00272ACA: ;
    RECOMP_UNIMPL("daa", 0x00272ACAu); /* TODO: daa */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + 0x2A) = MEM8(ebx + 0x2A) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx + 0x2A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("daa", 0x00272ACEu); /* TODO: daa */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -1845483734) = MEM8(eax + -1845483734) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + -1845483734)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_HI8(eax, HI8(eax) - MEM8(edi));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -1375721686) = MEM8(ecx + -1375721686) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + -1375721686)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_HI8(eax, HI8(eax) - MEM8(edi));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + ebp + 0x2ABE0027) = MEM8(edx + ebp + 0x2ABE0027) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx + ebp + 0x2ABE0027)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("daa", 0x00272AE6u); /* TODO: daa */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -872405206) = MEM8(edx + -872405206) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx + -872405206)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00272AF0
 * Original: 0x00272AF0 - 0x00272C11 (289 bytes, 118 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272AF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebx + 4));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00272B06; /* je: equal / zero */

loc_00272B00: ;
    SET_LO16(eax, MEM16(ebx + 6));
    goto loc_00272B11;

loc_00272B06: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272B11; /* je: equal / zero */

loc_00272B0D: ;
    SET_LO16(eax, MEM16(eax + 2));

loc_00272B11: ;
    eax = ZX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00272C09; /* ja: above (unsigned >) */

loc_00272B1E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x272C14); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00272B25u) goto loc_00272B25;
    if (_jt == 0x00272B34u) goto loc_00272B34;
    if (_jt == 0x00272B4Eu) goto loc_00272B4E;
    if (_jt == 0x00272B6Au) goto loc_00272B6A;
    if (_jt == 0x00272B9Bu) goto loc_00272B9B;
    if (_jt == 0x00272BB0u) goto loc_00272BB0;
    if (_jt == 0x00272BD0u) goto loc_00272BD0;
    if (_jt == 0x00272BE9u) goto loc_00272BE9;
    if (_jt == 0x00272BFEu) goto loc_00272BFE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00272B25: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272B2Bu); RECOMP_ABI_CALL(0x0010E7A0u, sub_0010E7A0); /* call 0x0010E7A0 */

loc_00272B2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272B34: ;
    eax = MEM32(0x343DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272C0B; /* je: equal / zero */

loc_00272B41: ;
    eax = ebx;
    PUSH32(esp, 0x00272B48u); RECOMP_ABI_CALL(0x0010E100u, sub_0010E100); /* call 0x0010E100 */

loc_00272B48: ;
    ecx = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272B4E: ;
    eax = MEM32(0x343DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272C0B; /* je: equal / zero */

loc_00272B5B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272B61u); RECOMP_ABI_CALL(0x0010E2F0u, sub_0010E2F0); /* call 0x0010E2F0 */

loc_00272B61: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272B6A: ;
    eax = MEM32(0x343DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272C0B; /* je: equal / zero */

loc_00272B77: ;
    esi = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00272C0B; /* jp: parity */

loc_00272B8C: ;
    PUSH32(esp, 0x00272B91u); RECOMP_ABI_CALL(0x0010BF90u, sub_0010BF90); /* call 0x0010BF90 */

loc_00272B91: ;
    MEM8(esi + 0xA) = MEM8(esi + 0xA) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272B9B: ;
    PUSH32(esp, 0x00272BA0u); RECOMP_ABI_CALL(0x0010BF90u, sub_0010BF90); /* call 0x0010BF90 */

loc_00272BA0: ;
    ecx = eax;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 0xA) = MEM8(eax + 0xA) | 4;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272BB0: ;
    eax = MEM32(0x343DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272C0B; /* je: equal / zero */

loc_00272BB9: ;
    eax = ebx;
    PUSH32(esp, 0x00272BC0u); RECOMP_ABI_CALL(0x0010E670u, sub_0010E670); /* call 0x0010E670 */

loc_00272BC0: ;
    ecx = eax;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 0xA) = MEM8(eax + 0xA) | 4;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272BD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272BD6u); RECOMP_ABI_CALL(0x0010DE40u, sub_0010DE40); /* call 0x0010DE40 */

loc_00272BD6: ;
    ecx = eax;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0xA) = MEM8(eax + 0xA) | 4;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272BE9: ;
    PUSH32(esp, 0x00272BEEu); RECOMP_ABI_CALL(0x0010BDB0u, sub_0010BDB0); /* call 0x0010BDB0 */

loc_00272BEE: ;
    ecx = eax;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 0xA) = MEM8(eax + 0xA) | 4;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272BFE: ;
    PUSH32(esp, 0x00272C03u); RECOMP_ABI_CALL(0x00110420u, sub_00110420); /* call 0x00110420 */

loc_00272C03: ;
    ecx = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272C09: ;
    ecx = ebx;

loc_00272C0B: ;
    POP32(esp, esi);
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272C40
 * Original: 0x00272C40 - 0x00272C57 (23 bytes, 9 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272C40: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00272C47u); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_00272C47: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00272C56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272C53u); } /* indirect call */
    }

loc_00272C56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00272C60
 * Original: 0x00272C60 - 0x00272D18 (184 bytes, 48 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272C60: ;
    eax = MEM32(0x64CF98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272C6E; /* jne: not equal / not zero */

loc_00272C69: ;
    PUSH32(esp, 0x00272C6Eu); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_00272C6E: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00272C80u); RECOMP_ABI_CALL(0x002733B0u, sub_002733B0); /* call 0x002733B0 */

loc_00272C80: ;
    ebx = eax;
    eax = MEM32(0x64CF98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272C90; /* jne: not equal / not zero */

loc_00272C8B: ;
    PUSH32(esp, 0x00272C90u); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_00272C90: ;
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x98);
    ecx = MEM32(esi + eax + 0x810);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x26);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4 + 0x818) = 0x332ADC;
    MEM32(esi + eax + 0x810) = MEM32(esi + eax + 0x810) + 1;
    _fa = (uint32_t)(MEM32(esi + eax + 0x810)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x64CF98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272CC6; /* jne: not equal / not zero */

loc_00272CC1: ;
    PUSH32(esp, 0x00272CC6u); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_00272CC6: ;
    edx = MEM32(esi + eax + 0x810);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edx * 4 + 0x818) = 0x332AC4;
    MEM32(esi + eax + 0x810) = MEM32(esi + eax + 0x810) + 1;
    _fa = (uint32_t)(MEM32(esi + eax + 0x810)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x64CF98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272CEF; /* jne: not equal / not zero */

loc_00272CEA: ;
    PUSH32(esp, 0x00272CEFu); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_00272CEF: ;
    ecx = MEM32(esi + eax + 0x810);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4 + 0x818) = 0x332AB0;
    ecx = MEM32(esi + eax + 0x810);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + eax + 0x810) = ecx;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272D20
 * Original: 0x00272D20 - 0x00272D6B (75 bytes, 21 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272D20: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x800;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x808;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x800);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00272D42u); RECOMP_ABI_CALL(0x0028AFEDu, sub_0028AFED); /* call 0x0028AFED */

loc_00272D42: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00272D4E; /* jge: greater or equal (signed >=) */

loc_00272D49: ;
    eax = 0x800;

loc_00272D4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x7FF) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00272D64; /* jbe: below or equal (unsigned <=) */

loc_00272D5A: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, 0x00272D64u); RECOMP_ABI_CALL(0x00276EE0u, sub_00276EE0); /* call 0x00276EE0 */

loc_00272D64: ;
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x800;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027EBE0
 * Original: 0x0027EBE0 - 0x0027EC06 (38 bytes, 14 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EBE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi + 0x100;
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0x0027EBF6u); RECOMP_ABI_CALL(0x002937A7u, sub_002937A7); /* call 0x002937A7 */

loc_0027EBF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EBFF; /* jne: not equal / not zero */

loc_0027EBFA: ;
    PUSH32(esp, 0x0027EBFFu); RECOMP_ABI_CALL(0x0027E720u, sub_0027E720); /* call 0x0027E720 */

loc_0027EBFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027EC10
 * Original: 0x0027EC10 - 0x0027EC79 (105 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EC10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EC20u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_0027EC20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EC77; /* jne: not equal / not zero */

loc_0027EC27: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027EC32u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_0027EC32: ;
    PUSH32(esp, 0x0027EC37u); RECOMP_ABI_CALL(0x0027DA90u, sub_0027DA90); /* call 0x0027DA90 */

loc_0027EC37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027EC50; /* je: equal / zero */

loc_0027EC3B: ;
    goto loc_0027EC40;

    /* nop */

loc_0027EC40: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0027EC47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027EC44u); } /* indirect call */
    }

loc_0027EC47: ;
    PUSH32(esp, 0x0027EC4Cu); RECOMP_ABI_CALL(0x0027DA90u, sub_0027DA90); /* call 0x0027DA90 */

loc_0027EC4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EC40; /* jne: not equal / not zero */

loc_0027EC50: ;
    eax = MEM32(0x64CFA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EC5E; /* jne: not equal / not zero */

loc_0027EC59: ;
    PUSH32(esp, 0x0027EC5Eu); RECOMP_ABI_CALL(0x0027EE40u, sub_0027EE40); /* call 0x0027EE40 */

loc_0027EC5E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027EC65u); RECOMP_ABI_CALL(0x00281CC1u, sub_00281CC1); /* call 0x00281CC1 */

loc_0027EC65: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EC70u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_0027EC70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027EC27; /* je: equal / zero */

loc_0027EC77: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027EC80
 * Original: 0x0027EC80 - 0x0027EC9D (29 bytes, 10 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EC80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EC80: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x0027EC88u); RECOMP_ABI_CALL(0x0027ECC0u, sub_0027ECC0); /* call 0x0027ECC0 */

loc_0027EC88: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EC91u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_0027EC91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027ECA0
 * Original: 0x0027ECA0 - 0x0027ECBA (26 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ECA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027ECA0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0027ECA7u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_0027ECA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027ECB0; /* je: equal / zero */

loc_0027ECAE: ;
    MEM32(eax) = eax;

loc_0027ECB0: ;
    ecx = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027ECB9; /* je: equal / zero */

loc_0027ECB7: ;
    MEM32(ecx) = eax;

loc_0027ECB9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027ECC0
 * Original: 0x0027ECC0 - 0x0027ECF6 (54 bytes, 20 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ECC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027ECC0: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    MEM32(ecx) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(ecx + 4) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    MEM32(esi + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027ECF5; /* je: equal / zero */

loc_0027ECD9: ;
    PUSH32(esp, edi);
    /* nop */

loc_0027ECE0: ;
    edi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027ECE8u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_0027ECE8: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0027ECE0; /* jne: not equal / not zero */

loc_0027ECF4: ;
    POP32(esp, edi);

loc_0027ECF5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027ED00
 * Original: 0x0027ED00 - 0x0027ED27 (39 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ED00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027ED00: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0027ED07u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_0027ED07: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027ED24; /* je: equal / zero */

loc_0027ED0E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;

loc_0027ED24: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027ED30
 * Original: 0x0027ED30 - 0x0027EDBD (141 bytes, 36 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ED30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027ED30: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297148);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0x3FFFFFFF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0027EDA9; /* jae: above or equal (unsigned >=) */

loc_0027ED58: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x323364);
    ecx = esp + 8;
    MEM32(esp + 0x20) = 0xF;
    MEM32(esp + 0x1C) = 0;
    MEM8(esp + 0xC) = 0;
    PUSH32(esp, 0x0027ED7Du); RECOMP_ABI_CALL(0x00017340u, sub_00017340); /* call 0x00017340 */

loc_0027ED7D: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEM32(esp + 0x50) = 0;
    PUSH32(esp, 0x0027ED92u); RECOMP_ABI_CALL(0x00017430u, sub_00017430); /* call 0x00017430 */

loc_0027ED92: ;
    PUSH32(esp, 0x334DD0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0x323120;
    PUSH32(esp, 0x0027EDA9u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027EDA9: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x44);
    MEM32(edx + 8) = eax;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027EDC0
 * Original: 0x0027EDC0 - 0x0027EDC8 (8 bytes, 2 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027EDC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0027E280(); return; /* tail jmp 0x0027E280 */

}

/**
 * sub_0027EDD0
 * Original: 0x0027EDD0 - 0x0027EDD9 (9 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EDD0(void)
{

loc_0027EDD0: ;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027EDD8u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_0027EDD8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027EDE0
 * Original: 0x0027EDE0 - 0x0027EDE7 (7 bytes, 2 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EDE0(void)
{

loc_0027EDE0: ;
    MEM32(ecx) = 0x333794;
    esp += 4; return; /* ret */

}

/**
 * sub_0027EDF0
 * Original: 0x0027EDF0 - 0x0027EE1C (44 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EDF0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x333794;
    if (TEST_Z(_fa, _fb)) goto loc_0027EE16; /* je: equal / zero */

loc_0027EE00: ;
    eax = MEM32(0x64CF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EE0E; /* jne: not equal / not zero */

loc_0027EE09: ;
    PUSH32(esp, 0x0027EE0Eu); RECOMP_ABI_CALL(0x00273050u, sub_00273050); /* call 0x00273050 */

loc_0027EE0E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027EE16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027EE13u); } /* indirect call */
    }

loc_0027EE16: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027EE20
 * Original: 0x0027EE20 - 0x0027EE3B (27 bytes, 10 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EE20: ;
    eax = MEM32(0x64CF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EE2E; /* jne: not equal / not zero */

loc_0027EE29: ;
    PUSH32(esp, 0x0027EE2Eu); RECOMP_ABI_CALL(0x00273050u, sub_00273050); /* call 0x00273050 */

loc_0027EE2E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027EE3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027EE37u); } /* indirect call */
    }

loc_0027EE3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027EE40
 * Original: 0x0027EE40 - 0x0027EEED (173 bytes, 47 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EE40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296F86);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x34A64C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EE69; /* jne: not equal / not zero */

loc_0027EE62: ;
    PUSH32(esp, 0x0027EE67u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_0027EE67: ;
    edi = eax;

loc_0027EE69: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027EE74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027EE6Eu); } /* indirect call */
    }

loc_0027EE74: ;
    MEM32(esp + 0x14) = 0;
    SET_LO8(ecx, MEM8(0x654350));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027EEB1; /* jne: not equal / not zero */

loc_0027EE8B: ;
    MEM32(0x654350) = MEM32(0x654350) | eax;
    _fa = (uint32_t)(MEM32(0x654350)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x64CFA4);
    esi = 0x65434C;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x0027EEA4u); RECOMP_ABI_CALL(0x0027F0A0u, sub_0027F0A0); /* call 0x0027F0A0 */

loc_0027EEA4: ;
    PUSH32(esp, 0x297930);
    PUSH32(esp, 0x0027EEAEu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_0027EEAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027EEB1: ;
    eax = MEM32(0x64CFA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EECD; /* jne: not equal / not zero */

loc_0027EEBA: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027EECD; /* je: equal / zero */

loc_0027EEC3: ;
    ecx = 0x10;
    PUSH32(esp, 0x0027EECDu); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_0027EECD: ;
    esi = MEM32(0x64CFA4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027EEDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027EED4u); } /* indirect call */
    }

loc_0027EEDA: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027EEF0
 * Original: 0x0027EEF0 - 0x0027EF17 (39 bytes, 19 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EEF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi);
    ebx = MEM32(edi + 4);
    PUSH32(esp, 0x0027EF01u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027EF01: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027EF09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027EF06u); } /* indirect call */
    }

loc_0027EF09: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0027EF0Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0027EF0Au); } /* indirect call */
    }

loc_0027EF0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027EF20
 * Original: 0x0027EF20 - 0x0027EF80 (96 bytes, 25 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EF20: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296B08);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = 0;
    MEM32(esi) = 0x333798;
    PUSH32(esp, 0x0027EF4Du); RECOMP_ABI_CALL(0x000F3EE0u, sub_000F3EE0); /* call 0x000F3EE0 */

loc_0027EF4D: ;
    ecx = MEM32(esp + 4);
    MEM32(esi + 8) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 8);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 8);
    MEM32(eax) = eax;
    eax = MEM32(esi + 8);
    MEM32(eax + 8) = eax;
    MEM32(esi + 0xC) = 0;
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027EF80
 * Original: 0x0027EF80 - 0x0027EFAB (43 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EF80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0027EF88u); RECOMP_ABI_CALL(0x0027EFB0u, sub_0027EFB0); /* call 0x0027EFB0 */

loc_0027EF88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EFA5; /* je: equal / zero */

loc_0027EF8F: ;
    eax = MEM32(0x64CF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EF9D; /* jne: not equal / not zero */

loc_0027EF98: ;
    PUSH32(esp, 0x0027EF9Du); RECOMP_ABI_CALL(0x00273050u, sub_00273050); /* call 0x00273050 */

loc_0027EF9D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027EFA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027EFA2u); } /* indirect call */
    }

loc_0027EFA5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027EFB0
 * Original: 0x0027EFB0 - 0x0027F023 (115 bytes, 33 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EFB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296B78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = edi;
    MEM32(edi) = 0x333798;
    MEM32(esp + 0x18) = 0;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    esi = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EFF2u); RECOMP_ABI_CALL(0x0027F300u, sub_0027F300); /* call 0x0027F300 */

loc_0027EFF2: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027EFFBu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_0027EFFB: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0x333794;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027F030
 * Original: 0x0027F030 - 0x0027F09A (106 bytes, 45 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F030: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0027F05C; /* jne: not equal / not zero */

loc_0027F045: ;
    edi = MEM32(esi);

loc_0027F047: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027F051; /* jae: above or equal (unsigned >=) */

loc_0027F04C: ;
    eax = MEM32(eax + 8);
    goto loc_0027F055;

loc_0027F051: ;
    edx = eax;
    eax = MEM32(eax);

loc_0027F055: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F047; /* je: equal / zero */

loc_0027F05C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F068; /* je: equal / zero */

loc_0027F061: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027F090; /* jae: above or equal (unsigned >=) */

loc_0027F068: ;
    eax = MEM32(esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0027F084u); RECOMP_ABI_CALL(0x0027F110u, sub_0027F110); /* call 0x0027F110 */

loc_0027F084: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027F090: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx + 0x10;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027F0A0
 * Original: 0x0027F0A0 - 0x0027F105 (101 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F0A0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296F5B);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    MEM32(esi) = eax;
    eax = MEM32(0x64CF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F0C9; /* jne: not equal / not zero */

loc_0027F0C4: ;
    PUSH32(esp, 0x0027F0C9u); RECOMP_ABI_CALL(0x00273050u, sub_00273050); /* call 0x00273050 */

loc_0027F0C9: ;
    edx = 0x10;
    ecx = eax;
    PUSH32(esp, 0x0027F0D5u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027F0D5: ;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027F0ED; /* je: equal / zero */

loc_0027F0E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F0EBu); RECOMP_ABI_CALL(0x0027EF20u, sub_0027EF20); /* call 0x0027EF20 */

loc_0027F0EB: ;
    goto loc_0027F0EF;

loc_0027F0ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027F0EF: ;
    ecx = MEM32(esi);
    MEM32(ecx) = eax;
    ecx = MEM32(esp);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F110
 * Original: 0x0027F110 - 0x0027F239 (297 bytes, 129 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027F110: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0027F137; /* jne: not equal / not zero */

loc_0027F123: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027F12Du); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_0027F12D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027F137: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F162; /* jne: not equal / not zero */

loc_0027F142: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027F21E; /* jae: above or equal (unsigned >=) */

loc_0027F14D: ;
    PUSH32(esp, ebx);

loc_0027F14E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027F157u); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_0027F157: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027F162: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F189; /* jne: not equal / not zero */

loc_0027F166: ;
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027F21E; /* jae: above or equal (unsigned >=) */

loc_0027F174: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027F17Eu); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_0027F17E: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027F189: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027F1C7; /* jae: above or equal (unsigned >=) */

loc_0027F190: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x0027F19Du); RECOMP_ABI_CALL(0x0027B390u, sub_0027B390); /* call 0x0027B390 */

loc_0027F19D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027F1C7; /* jae: above or equal (unsigned >=) */

loc_0027F1A8: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0027F14E; /* je: equal / zero */

loc_0027F1B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027F1BCu); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_0027F1BC: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027F1C7: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027F21E; /* jae: above or equal (unsigned >=) */

loc_0027F1CE: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x0027F1DBu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0027F1DB: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F1EB; /* je: equal / zero */

loc_0027F1E4: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027F21E; /* jae: above or equal (unsigned >=) */

loc_0027F1EB: ;
    edx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0027F20A; /* je: equal / zero */

loc_0027F1F6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027F1FFu); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_0027F1FF: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027F20A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027F213u); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_0027F213: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027F21E: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x0027F22Au); RECOMP_ABI_CALL(0x0027F240u, sub_0027F240); /* call 0x0027F240 */

loc_0027F22A: ;
    ecx = MEM32(eax);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(esi) = ecx;
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F240
 * Original: 0x0027F240 - 0x0027F2F5 (181 bytes, 78 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027F240: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, 1);
    MEM8(esp + 0xC) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0027F27D; /* jne: not equal / not zero */

loc_0027F25D: ;
    edx = MEM32(ebx);
    /* nop */

loc_0027F260: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = eax;
    MEM8(esp + 0xC) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0027F274; /* je: equal / zero */

loc_0027F270: ;
    eax = MEM32(eax);
    goto loc_0027F277;

loc_0027F274: ;
    eax = MEM32(eax + 8);

loc_0027F277: ;
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F260; /* je: equal / zero */

loc_0027F27D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027F2BB; /* je: equal / zero */

loc_0027F287: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F2AE; /* jne: not equal / not zero */

loc_0027F28E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027F29Cu); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_0027F29C: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0027F2AE: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x0027F2B7u); RECOMP_ABI_CALL(0x0027B390u, sub_0027B390); /* call 0x0027B390 */

loc_0027F2B7: ;
    eax = MEM32(esp + 0x14);

loc_0027F2BB: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027F2E5; /* jae: above or equal (unsigned >=) */

loc_0027F2C2: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F2D3u); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_0027F2D3: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0027F2E5: ;
    POP32(esp, edi);
    MEM32(ebp) = eax;
    POP32(esp, esi);
    MEM8(ebp + 4) = 0;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F300
 * Original: 0x0027F300 - 0x0027F37A (122 bytes, 48 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027F300: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0027F34B; /* jne: not equal / not zero */

loc_0027F315: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F34B; /* jne: not equal / not zero */

loc_0027F319: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0027F324u); RECOMP_ABI_CALL(0x0027F520u, sub_0027F520); /* call 0x0027F520 */

loc_0027F324: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    MEM32(ebp) = edx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0027F34B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F370; /* je: equal / zero */

loc_0027F34F: ;
    PUSH32(esp, edi);

loc_0027F350: ;
    edx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x0027F35Bu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0027F35B: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027F367u); RECOMP_ABI_CALL(0x000F3BA0u, sub_000F3BA0); /* call 0x000F3BA0 */

loc_0027F367: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F350; /* jne: not equal / not zero */

loc_0027F36F: ;
    POP32(esp, edi);

loc_0027F370: ;
    MEM32(ebp) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027F380
 * Original: 0x0027F380 - 0x0027F51E (414 bytes, 138 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027F380: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297148);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FFFFFFE (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    if (CMP_B(_fa, _fb)) goto loc_0027F3F4; /* jb: below (unsigned <) */

loc_0027F3A8: ;
    PUSH32(esp, 0x13);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x323378);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x0027F3CBu); RECOMP_ABI_CALL(0x00017340u, sub_00017340); /* call 0x00017340 */

loc_0027F3CB: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0x58) = esi;
    PUSH32(esp, 0x0027F3DDu); RECOMP_ABI_CALL(0x00017430u, sub_00017430); /* call 0x00017430 */

loc_0027F3DD: ;
    PUSH32(esp, 0x334DD0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x323120;
    PUSH32(esp, 0x0027F3F4u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027F3F4: ;
    eax = MEM32(edi + 4);
    esi = MEM32(esp + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F405u); RECOMP_ABI_CALL(0x000F3F20u, sub_000F3F20); /* call 0x000F3F20 */

loc_0027F405: ;
    edx = MEM32(edi + 8);
    esi = eax;
    eax = MEM32(edi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x64) = esi;
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0027F426; /* jne: not equal / not zero */

loc_0027F419: ;
    MEM32(eax + 4) = esi;
    edx = MEM32(edi + 4);
    MEM32(edx) = esi;
    eax = MEM32(edi + 4);
    goto loc_0027F447;

loc_0027F426: ;
    SET_LO8(eax, MEM8(esp + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F43C; /* je: equal / zero */

loc_0027F42E: ;
    MEM32(ebp) = esi;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F44A; /* jne: not equal / not zero */

loc_0027F438: ;
    MEM32(eax) = esi;
    goto loc_0027F44A;

loc_0027F43C: ;
    MEM32(ebp + 8) = esi;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F44A; /* jne: not equal / not zero */

loc_0027F447: ;
    MEM32(eax + 8) = esi;

loc_0027F44A: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0027F4FB; /* jne: not equal / not zero */

loc_0027F45E: ;
    edi = edi;

loc_0027F460: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F4B8; /* jne: not equal / not zero */

loc_0027F46C: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F48D; /* jne: not equal / not zero */

loc_0027F475: ;
    ecx = MEM32(eax);
    MEM8(ecx + 0x14) = LO8(ebx);
    MEM8(edx + 0x14) = LO8(ebx);
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x14) = 0;
    edx = MEM32(eax);
    esi = MEM32(edx + 4);
    goto loc_0027F4E6;

loc_0027F48D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F49A; /* jne: not equal / not zero */

loc_0027F492: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0027F49Au); RECOMP_ABI_CALL(0x000F3E60u, sub_000F3E60); /* call 0x000F3E60 */

loc_0027F49A: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x14) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x14) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027F4B6u); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_0027F4B6: ;
    goto loc_0027F4E6;

loc_0027F4B8: ;
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F475; /* je: equal / zero */

loc_0027F4BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F4CA; /* jne: not equal / not zero */

loc_0027F4C2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0027F4CAu); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_0027F4CA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x14) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x14) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027F4E6u); RECOMP_ABI_CALL(0x000F3E60u, sub_000F3E60); /* call 0x000F3E60 */

loc_0027F4E6: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0027F460; /* je: equal / zero */

loc_0027F4F7: ;
    esi = MEM32(esp + 0x68);

loc_0027F4FB: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    ecx = MEM32(esp + 0x50);
    MEM8(eax + 0x14) = LO8(ebx);
    eax = MEM32(esp + 0x60);
    POP32(esp, ebx);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0027F520
 * Original: 0x0027F520 - 0x0027F557 (55 bytes, 25 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F520: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0027F551; /* jne: not equal / not zero */

loc_0027F532: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0027F53Du); RECOMP_ABI_CALL(0x0027F520u, sub_0027F520); /* call 0x0027F520 */

loc_0027F53D: ;
    esi = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027F545u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_0027F545: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027F532; /* je: equal / zero */

loc_0027F551: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F560
 * Original: 0x0027F560 - 0x0027F5B7 (87 bytes, 38 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F560: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F5B6; /* jne: not equal / not zero */

loc_0027F569: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F58F; /* jne: not equal / not zero */

loc_0027F574: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F58B; /* jne: not equal / not zero */

loc_0027F57D: ;
    /* nop */

loc_0027F580: ;
    ecx = eax;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F580; /* je: equal / zero */

loc_0027F58B: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0027F58F: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F5B3; /* jne: not equal / not zero */

loc_0027F599: ;
    /* nop */

loc_0027F5A0: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F5B3; /* jne: not equal / not zero */

loc_0027F5A7: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F5A0; /* je: equal / zero */

loc_0027F5B3: ;
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_0027F5B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027F5B7
 * Original: 0x0027F5B7 - 0x0027F5F9 (66 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F5B7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F5B7: ;
    eax = 0x33609C;
    PUSH32(esp, esi);
    esi = eax;
    ecx = eax;
    eax = 0x3360A0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0027F5D8; /* jae: above or equal (unsigned >=) */

loc_0027F5CD: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F5EA; /* jne: not equal / not zero */

loc_0027F5D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027F5CD; /* jb: below (unsigned <) */

loc_0027F5D8: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0027F5E7u); RECOMP_ABI_CALL(0x002800EDu, sub_002800ED); /* call 0x002800ED */

loc_0027F5E7: ;
    esp += 12; return; /* ret 8 */

loc_0027F5EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(ecx); PUSH32(esp, 0x0027F5F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F5F5u); } /* indirect call */
    }

loc_0027F5F7: ;
    goto loc_0027F5E7;

}
