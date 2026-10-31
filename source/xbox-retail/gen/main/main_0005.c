/**
 * PoP Warrior Within Xbox retail - main, chunk 5
 * Start-up, main loop and full-screen videos (Jade MainXbox)
 * Functions: 64 (0x000544F0 - 0x003240D0)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000544F0
 * Original: 0x000544F0 - 0x00054F5A (2666 bytes, 756 insns)
 * Folder: main (between: 0x00051BF0 and 0x00054F60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000544F0(void)
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

loc_000544F0: ;
    eax = MEM32(esp + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B81; /* jne: not equal / not zero */

loc_000544FF: ;
    edi = MEM32(esp + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x586718)); /* movss */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000545D9; /* jl: less (signed <) */

loc_00054519: ;
    /* nop */

loc_00054520: ;
    edx = MEM32(eax * 8 + 0x5C8958);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005454A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_0005452C: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax;

loc_0005454A: ;
    edx = MEM32(eax * 8 + 0x5C8960);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054575; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_00054556: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C8964);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C8966);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax + 1;

loc_00054575: ;
    edx = MEM32(eax * 8 + 0x5C8968);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000545A0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_00054581: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C896C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C896E);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax + 2;

loc_000545A0: ;
    edx = MEM32(eax * 8 + 0x5C8970);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000545CB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_000545AC: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C8974);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C8976);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax + 3;

loc_000545CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + -3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054520; /* jl: less (signed <) */

loc_000545D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005460F; /* jge: greater or equal (signed >=) */

loc_000545DD: ;
    /* nop */

loc_000545E0: ;
    edx = MEM32(eax * 8 + 0x5C8958);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005460A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_000545EC: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax;

loc_0005460A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000545E0; /* jl: less (signed <) */

loc_0005460F: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054667; /* jl: less (signed <) */

loc_00054617: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054667; /* jl: less (signed <) */

loc_0005461F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x38));
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054667; /* jge: greater or equal (signed >=) */

loc_00054646: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x38));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x10);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    MEM32(esp + 0x14) = eax;
    goto loc_0005466E;

loc_00054667: ;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = edx;

loc_0005466E: ;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 8) = 1;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B81; /* jge: greater or equal (signed >=) */

loc_00054685: ;
    edx = MEM32(esp + 0x3C);
    SET_LO16(edi, MEM16(esp + 0x38));
    MEM16(eax * 4 + 0x5C6A1A) = LO16(edi);
    MEM16(eax * 4 + 0x5C6A18) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x4C);
    edi = MEM32(eax * 8 + 0x5C8950);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;
    MEM32(ecx * 8 + 0x5C8958) = edi;
    eax = MEM32(eax * 8 + 0x5C895C);
    MEM32(ecx * 8 + 0x5C895C) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000546E3; /* jne: not equal / not zero */

loc_000546CE: ;
    ecx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000546E3; /* jne: not equal / not zero */

loc_000546D8: ;
    MEM32(esp + 0xB0) = 1;

loc_000546E3: ;
    MEM32(esp + 0x30) = 0xFFFFFFE0u;
    goto loc_000546F0;

loc_000546F0: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 0x59A5C0);
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_00054B5C; /* js: sign (negative) */

loc_00054708: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B5C; /* jge: greater or equal (signed >=) */

loc_0005471F: ;
    eax = edx;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x2C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054B5C; /* jg: greater (signed >) */

loc_00054733: ;
    edx = MEM32(esp + 0x30);
    edi = MEM32(edx + 0x59A5C4);
    _fb = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = edi;
    if ((_fas < 0)) goto loc_00054B5C; /* js: sign (negative) */

loc_0005474B: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B5C; /* jge: greater or equal (signed >=) */

loc_0005475A: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(ebp + 0x2C);
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054B5C; /* jg: greater (signed >) */

loc_00054772: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005487E; /* jl: less (signed <) */

loc_0005477E: ;
    eax = MEM32(ecx + 0x59A5E4);
    edx = MEM32(esp + 0x38);
    ecx = MEM32(ecx + 0x59A5E0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x50) = ecx;
    if ((_fas < 0)) goto loc_000547E9; /* js: sign (negative) */

loc_0005479E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000547E9; /* jl: less (signed <) */

loc_000547A2: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esp + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000547E9; /* jge: greater or equal (signed >=) */

loc_000547D1: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(ecx + eax));
    goto loc_000547EF;

loc_000547E9: ;
    SET_LO8(edx, MEM8(0x91EE6C));

loc_000547EF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054800; /* je: equal / zero */

loc_000547F3: ;
    PUSH32(esp, 0x000547F8u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_000547F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_00054800: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax + 0x59A5EC);
    edx = MEM32(esp + 0x38);
    eax = MEM32(eax + 0x59A5E8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x50) = eax;
    if ((_fas < 0)) goto loc_00054867; /* js: sign (negative) */

loc_00054820: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054867; /* jl: less (signed <) */

loc_00054824: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edx = MEM32(esp + 0x50);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054863; /* jge: greater or equal (signed >=) */

loc_00054849: ;
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = MEM32(esp + 0x48);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + edx));
    goto loc_0005486D;

loc_00054863: ;
    edi = MEM32(esp + 0x48);

loc_00054867: ;
    SET_LO8(edx, MEM8(0x91EE6C));

loc_0005486D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005487E; /* je: equal / zero */

loc_00054871: ;
    PUSH32(esp, 0x00054876u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_00054876: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_0005487E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000548BB; /* jge: greater or equal (signed >=) */

loc_000548A3: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = MEM32(ebx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + ecx));
    goto loc_000548C1;

loc_000548BB: ;
    SET_LO8(ecx, MEM8(0x91EE6C));

loc_000548C1: ;
    SET_LO8(edx, LO8(ecx));
    PUSH32(esp, 0x000548C8u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_000548C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_000548D0: ;
    ecx = MEM32(esp + 0x18);
    eax = ebp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = esi;
    PUSH32(esp, 0x000548E0u); RECOMP_ABI_CALL(0x000538D0u, sub_000538D0); /* call 0x000538D0 */

loc_000548E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054B59; /* je: equal / zero */

loc_000548EB: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0x000548F7u); RECOMP_ABI_CALL(0x00051BF0u, sub_00051BF0); /* call 0x00051BF0 */

loc_000548F7: ;
    ebx = eax;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 8), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054B56; /* je: equal / zero */

loc_00054903: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = eax;
    eax = MEM32(esp + 0x20);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00054939; /* jne: not equal / not zero */

loc_0005492F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054AB2; /* je: equal / zero */

loc_00054939: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005494D; /* jne: not equal / not zero */

loc_0005493F: ;
    edx = MEM32(esp + 0x40);
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054AB2; /* je: equal / zero */

loc_0005494D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    eax = esp + 0x7C;
    ecx = esp + 0x54;
    edx = esp + 0x64;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x50) = edx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x50);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000549E0u); RECOMP_ABI_CALL(0x0048929Fu, sub_0048929F); /* call 0x0048929F */

loc_000549E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x9C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x98); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x94); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A36u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A36: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x70); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x6C); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586694)); /* fmul dword ptr [0x586694] */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A99u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A99: ;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586754)); /* fmul dword ptr [0x586754] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00054AB2: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    edx = esi;
    PUSH32(esp, 0x00054AC9u); RECOMP_ABI_CALL(0x00051C40u, sub_00051C40); /* call 0x00051C40 */

loc_00054AC9: ;
    SET_LO8(ecx, MEM8(ebx + 8));
    SET_LO8(eax, 2);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00054B08; /* jne: not equal / not zero */

loc_00054AD9: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054B56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00054AF0: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    SET_LO16(eax, MEM16(esp + 0x38));
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    MEM16(ebx + 6) = LO16(eax);
    goto loc_00054B56;

loc_00054B08: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    MEM8(ebx + 8) = LO8(eax);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    SET_LO16(eax, MEM16(esp + 0x38));
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    MEM16(ebx + 6) = LO16(eax);
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    if (CMP_GE(_fas, _fbs)) goto loc_00054B7E; /* jge: greater or equal (signed >=) */

loc_00054B3A: ;
    MEM32(eax * 8 + 0x5C8958) = ebx;
    MEM16(eax * 8 + 0x5C895C) = LO16(esi);
    MEM16(eax * 8 + 0x5C895E) = LO16(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;

loc_00054B56: ;
    esi = MEM32(ebp + 0xC);

loc_00054B59: ;
    ebx = MEM32(ebp + 0x10);

loc_00054B5C: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000546F0; /* jl: less (signed <) */

loc_00054B70: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000544F0; /* jne: not equal / not zero */

loc_00054B7C: ;
    goto loc_00054B81;

loc_00054B7E: ;
    esi = MEM32(ebp + 0xC);

loc_00054B81: ;
    ecx = MEM32(esp + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C00; /* jle: less or equal (signed <=) */

loc_00054B8F: ;
    /* nop */

loc_00054B90: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A1A);
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA8: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054BE8; /* jge: greater or equal (signed >=) */

loc_00054BC9: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054BEF;

loc_00054BE8: ;
    eax = MEM32(esp + 0x1C);

loc_00054BEC: ;
    ecx = MEM32(esi + 0x10);

loc_00054BEF: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054B90; /* jl: less (signed <) */

loc_00054C00: ;
    ecx = MEM32(esp + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C80; /* jle: less or equal (signed <=) */

loc_00054C0E: ;
    edi = edi;

loc_00054C10: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C24: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C28: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054C68; /* jge: greater or equal (signed >=) */

loc_00054C49: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054C6F;

loc_00054C68: ;
    eax = MEM32(esp + 0x1C);

loc_00054C6C: ;
    ecx = MEM32(esi + 0x10);

loc_00054C6F: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054C10; /* jl: less (signed <) */

loc_00054C80: ;
    ecx = MEM32(esp + 0xB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054EC8; /* je: equal / zero */

loc_00054C91: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x30) = eax;
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00054D5C; /* je: equal / zero */

loc_00054CA8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CB0: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054CEC; /* jge: greater or equal (signed >=) */

loc_00054CD1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + ecx * 4;
    goto loc_00054CEF;

loc_00054CEC: ;
    eax = MEM32(esi + 0x10);

loc_00054CEF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFF: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054D3B; /* jge: greater or equal (signed >=) */

loc_00054D20: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + edx * 4;
    goto loc_00054D3E;

loc_00054D3B: ;
    eax = MEM32(esi + 0x10);

loc_00054D3E: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x18);
    edi = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00054CA8; /* jne: not equal / not zero */

loc_00054D58: ;
    ecx = MEM32(esp + 0x20);

loc_00054D5C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00054EBE; /* je: equal / zero */

loc_00054D71: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = eax;
    goto loc_00054D80;

loc_00054D80: ;
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x30) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054E03; /* jg: greater (signed >) */

loc_00054D89: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x30);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + -4) = xmm2.f[0]; /* movss */
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x32);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    ebx = MEM32(esp + 0x1C);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edi = MEM32(esi + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x34) = eax;
    goto loc_00054E07;

loc_00054E03: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00054E07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054E4F; /* jge: greater or equal (signed >=) */

loc_00054E30: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edi = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    edi = edi + eax * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054E56;

loc_00054E4F: ;
    eax = MEM32(esp + 0x34);

loc_00054E53: ;
    edi = MEM32(esi + 0x10);

loc_00054E56: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E62: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E66: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054EA6; /* jge: greater or equal (signed >=) */

loc_00054E87: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    edx = eax + ecx * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054EAD;

loc_00054EA6: ;
    eax = MEM32(esp + 0x34);

loc_00054EAA: ;
    edx = MEM32(esi + 0x10);

loc_00054EAD: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = (uint32_t)(int32_t)SMEM16(edx + 6);
    if (CMP_NE(_fa, _fb)) goto loc_00054D80; /* jne: not equal / not zero */

loc_00054EBE: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x44) = edx;
    goto loc_00054ECC;

loc_00054EC8: ;
    MEM32(esp + 0x44) = eax;

loc_00054ECC: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054F4F; /* je: equal / zero */

loc_00054EDA: ;
    edi = MEM32(ebp + 0x38);
    ebx = MEM32(ebp + 0x34);
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F0Du); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F0D: ;
    ecx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054F53; /* jg: greater (signed >) */

loc_00054F18: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F45u); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F45: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00054F4F: ;
    eax = MEM32(esp + 0x44);

loc_00054F53: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00054520
 * Original: 0x00054520 - 0x00054F5A (2618 bytes, 746 insns)
 * Folder: main (between: 0x00051BF0 and 0x00054F60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054520(void)
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

loc_00054520: ;
    edx = MEM32(eax * 8 + 0x5C8958);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005454A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_0005452C: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax;

loc_0005454A: ;
    edx = MEM32(eax * 8 + 0x5C8960);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054575; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_00054556: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C8964);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C8966);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax + 1;

loc_00054575: ;
    edx = MEM32(eax * 8 + 0x5C8968);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000545A0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_00054581: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C896C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C896E);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax + 2;

loc_000545A0: ;
    edx = MEM32(eax * 8 + 0x5C8970);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000545CB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_000545AC: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C8974);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C8976);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax + 3;

loc_000545CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + -3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054520; /* jl: less (signed <) */

loc_000545D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005460F; /* jge: greater or equal (signed >=) */

loc_000545DD: ;
    /* nop */

loc_000545E0: ;
    edx = MEM32(eax * 8 + 0x5C8958);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005460A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_000545EC: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax;

loc_0005460A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000545E0; /* jl: less (signed <) */

loc_0005460F: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054667; /* jl: less (signed <) */

loc_00054617: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054667; /* jl: less (signed <) */

loc_0005461F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x38));
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054667; /* jge: greater or equal (signed >=) */

loc_00054646: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x38));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x10);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    MEM32(esp + 0x14) = eax;
    goto loc_0005466E;

loc_00054667: ;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = edx;

loc_0005466E: ;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 8) = 1;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B81; /* jge: greater or equal (signed >=) */

loc_00054685: ;
    edx = MEM32(esp + 0x3C);
    SET_LO16(edi, MEM16(esp + 0x38));
    MEM16(eax * 4 + 0x5C6A1A) = LO16(edi);
    MEM16(eax * 4 + 0x5C6A18) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x4C);
    edi = MEM32(eax * 8 + 0x5C8950);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;
    MEM32(ecx * 8 + 0x5C8958) = edi;
    eax = MEM32(eax * 8 + 0x5C895C);
    MEM32(ecx * 8 + 0x5C895C) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000546E3; /* jne: not equal / not zero */

loc_000546CE: ;
    ecx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000546E3; /* jne: not equal / not zero */

loc_000546D8: ;
    MEM32(esp + 0xB0) = 1;

loc_000546E3: ;
    MEM32(esp + 0x30) = 0xFFFFFFE0u;
    goto loc_000546F0;

loc_000546F0: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 0x59A5C0);
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_00054B5C; /* js: sign (negative) */

loc_00054708: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B5C; /* jge: greater or equal (signed >=) */

loc_0005471F: ;
    eax = edx;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x2C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054B5C; /* jg: greater (signed >) */

loc_00054733: ;
    edx = MEM32(esp + 0x30);
    edi = MEM32(edx + 0x59A5C4);
    _fb = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = edi;
    if ((_fas < 0)) goto loc_00054B5C; /* js: sign (negative) */

loc_0005474B: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B5C; /* jge: greater or equal (signed >=) */

loc_0005475A: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(ebp + 0x2C);
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054B5C; /* jg: greater (signed >) */

loc_00054772: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005487E; /* jl: less (signed <) */

loc_0005477E: ;
    eax = MEM32(ecx + 0x59A5E4);
    edx = MEM32(esp + 0x38);
    ecx = MEM32(ecx + 0x59A5E0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x50) = ecx;
    if ((_fas < 0)) goto loc_000547E9; /* js: sign (negative) */

loc_0005479E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000547E9; /* jl: less (signed <) */

loc_000547A2: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esp + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000547E9; /* jge: greater or equal (signed >=) */

loc_000547D1: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(ecx + eax));
    goto loc_000547EF;

loc_000547E9: ;
    SET_LO8(edx, MEM8(0x91EE6C));

loc_000547EF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054800; /* je: equal / zero */

loc_000547F3: ;
    PUSH32(esp, 0x000547F8u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_000547F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_00054800: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax + 0x59A5EC);
    edx = MEM32(esp + 0x38);
    eax = MEM32(eax + 0x59A5E8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x50) = eax;
    if ((_fas < 0)) goto loc_00054867; /* js: sign (negative) */

loc_00054820: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054867; /* jl: less (signed <) */

loc_00054824: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edx = MEM32(esp + 0x50);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054863; /* jge: greater or equal (signed >=) */

loc_00054849: ;
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = MEM32(esp + 0x48);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + edx));
    goto loc_0005486D;

loc_00054863: ;
    edi = MEM32(esp + 0x48);

loc_00054867: ;
    SET_LO8(edx, MEM8(0x91EE6C));

loc_0005486D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005487E; /* je: equal / zero */

loc_00054871: ;
    PUSH32(esp, 0x00054876u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_00054876: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_0005487E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000548BB; /* jge: greater or equal (signed >=) */

loc_000548A3: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = MEM32(ebx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + ecx));
    goto loc_000548C1;

loc_000548BB: ;
    SET_LO8(ecx, MEM8(0x91EE6C));

loc_000548C1: ;
    SET_LO8(edx, LO8(ecx));
    PUSH32(esp, 0x000548C8u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_000548C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_000548D0: ;
    ecx = MEM32(esp + 0x18);
    eax = ebp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = esi;
    PUSH32(esp, 0x000548E0u); RECOMP_ABI_CALL(0x000538D0u, sub_000538D0); /* call 0x000538D0 */

loc_000548E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054B59; /* je: equal / zero */

loc_000548EB: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0x000548F7u); RECOMP_ABI_CALL(0x00051BF0u, sub_00051BF0); /* call 0x00051BF0 */

loc_000548F7: ;
    ebx = eax;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 8), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054B56; /* je: equal / zero */

loc_00054903: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = eax;
    eax = MEM32(esp + 0x20);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00054939; /* jne: not equal / not zero */

loc_0005492F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054AB2; /* je: equal / zero */

loc_00054939: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005494D; /* jne: not equal / not zero */

loc_0005493F: ;
    edx = MEM32(esp + 0x40);
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054AB2; /* je: equal / zero */

loc_0005494D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    eax = esp + 0x7C;
    ecx = esp + 0x54;
    edx = esp + 0x64;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x50) = edx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x50);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000549E0u); RECOMP_ABI_CALL(0x0048929Fu, sub_0048929F); /* call 0x0048929F */

loc_000549E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x9C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x98); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x94); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A36u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A36: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x70); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x6C); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586694)); /* fmul dword ptr [0x586694] */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A99u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A99: ;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586754)); /* fmul dword ptr [0x586754] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00054AB2: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    edx = esi;
    PUSH32(esp, 0x00054AC9u); RECOMP_ABI_CALL(0x00051C40u, sub_00051C40); /* call 0x00051C40 */

loc_00054AC9: ;
    SET_LO8(ecx, MEM8(ebx + 8));
    SET_LO8(eax, 2);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00054B08; /* jne: not equal / not zero */

loc_00054AD9: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054B56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00054AF0: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    SET_LO16(eax, MEM16(esp + 0x38));
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    MEM16(ebx + 6) = LO16(eax);
    goto loc_00054B56;

loc_00054B08: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    MEM8(ebx + 8) = LO8(eax);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    SET_LO16(eax, MEM16(esp + 0x38));
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    MEM16(ebx + 6) = LO16(eax);
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    if (CMP_GE(_fas, _fbs)) goto loc_00054B7E; /* jge: greater or equal (signed >=) */

loc_00054B3A: ;
    MEM32(eax * 8 + 0x5C8958) = ebx;
    MEM16(eax * 8 + 0x5C895C) = LO16(esi);
    MEM16(eax * 8 + 0x5C895E) = LO16(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;

loc_00054B56: ;
    esi = MEM32(ebp + 0xC);

loc_00054B59: ;
    ebx = MEM32(ebp + 0x10);

loc_00054B5C: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000546F0; /* jl: less (signed <) */

loc_00054B70: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000544F0(); return; } /* jne: not equal / not zero */

loc_00054B7C: ;
    goto loc_00054B81;

loc_00054B7E: ;
    esi = MEM32(ebp + 0xC);

loc_00054B81: ;
    ecx = MEM32(esp + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C00; /* jle: less or equal (signed <=) */

loc_00054B8F: ;
    /* nop */

loc_00054B90: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A1A);
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA8: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054BE8; /* jge: greater or equal (signed >=) */

loc_00054BC9: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054BEF;

loc_00054BE8: ;
    eax = MEM32(esp + 0x1C);

loc_00054BEC: ;
    ecx = MEM32(esi + 0x10);

loc_00054BEF: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054B90; /* jl: less (signed <) */

loc_00054C00: ;
    ecx = MEM32(esp + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C80; /* jle: less or equal (signed <=) */

loc_00054C0E: ;
    edi = edi;

loc_00054C10: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C24: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C28: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054C68; /* jge: greater or equal (signed >=) */

loc_00054C49: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054C6F;

loc_00054C68: ;
    eax = MEM32(esp + 0x1C);

loc_00054C6C: ;
    ecx = MEM32(esi + 0x10);

loc_00054C6F: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054C10; /* jl: less (signed <) */

loc_00054C80: ;
    ecx = MEM32(esp + 0xB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054EC8; /* je: equal / zero */

loc_00054C91: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x30) = eax;
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00054D5C; /* je: equal / zero */

loc_00054CA8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CB0: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054CEC; /* jge: greater or equal (signed >=) */

loc_00054CD1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + ecx * 4;
    goto loc_00054CEF;

loc_00054CEC: ;
    eax = MEM32(esi + 0x10);

loc_00054CEF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFF: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054D3B; /* jge: greater or equal (signed >=) */

loc_00054D20: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + edx * 4;
    goto loc_00054D3E;

loc_00054D3B: ;
    eax = MEM32(esi + 0x10);

loc_00054D3E: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x18);
    edi = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00054CA8; /* jne: not equal / not zero */

loc_00054D58: ;
    ecx = MEM32(esp + 0x20);

loc_00054D5C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00054EBE; /* je: equal / zero */

loc_00054D71: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = eax;
    goto loc_00054D80;

loc_00054D80: ;
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x30) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054E03; /* jg: greater (signed >) */

loc_00054D89: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x30);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + -4) = xmm2.f[0]; /* movss */
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x32);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    ebx = MEM32(esp + 0x1C);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edi = MEM32(esi + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x34) = eax;
    goto loc_00054E07;

loc_00054E03: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00054E07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054E4F; /* jge: greater or equal (signed >=) */

loc_00054E30: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edi = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    edi = edi + eax * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054E56;

loc_00054E4F: ;
    eax = MEM32(esp + 0x34);

loc_00054E53: ;
    edi = MEM32(esi + 0x10);

loc_00054E56: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E62: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E66: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054EA6; /* jge: greater or equal (signed >=) */

loc_00054E87: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    edx = eax + ecx * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054EAD;

loc_00054EA6: ;
    eax = MEM32(esp + 0x34);

loc_00054EAA: ;
    edx = MEM32(esi + 0x10);

loc_00054EAD: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = (uint32_t)(int32_t)SMEM16(edx + 6);
    if (CMP_NE(_fa, _fb)) goto loc_00054D80; /* jne: not equal / not zero */

loc_00054EBE: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x44) = edx;
    goto loc_00054ECC;

loc_00054EC8: ;
    MEM32(esp + 0x44) = eax;

loc_00054ECC: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054F4F; /* je: equal / zero */

loc_00054EDA: ;
    edi = MEM32(ebp + 0x38);
    ebx = MEM32(ebp + 0x34);
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F0Du); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F0D: ;
    ecx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054F53; /* jg: greater (signed >) */

loc_00054F18: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F45u); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F45: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00054F4F: ;
    eax = MEM32(esp + 0x44);

loc_00054F53: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000545A7
 * Original: 0x000545A7 - 0x00054F5A (2483 bytes, 720 insns)
 * Folder: main (between: 0x00051BF0 and 0x00054F60)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000545A7(void)
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

loc_000545A7: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000545CB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_000545AC: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C8974);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C8976);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax + 3;

loc_000545CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + -3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00054520(); return; } /* jl: less (signed <) */

loc_000545D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005460F; /* jge: greater or equal (signed >=) */

loc_000545DD: ;
    /* nop */

loc_000545E0: ;
    edx = MEM32(eax * 8 + 0x5C8958);
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005460A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_000545EC: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = eax;

loc_0005460A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000545E0; /* jl: less (signed <) */

loc_0005460F: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054667; /* jl: less (signed <) */

loc_00054617: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054667; /* jl: less (signed <) */

loc_0005461F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x38));
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054667; /* jge: greater or equal (signed >=) */

loc_00054646: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x38));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x10);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    MEM32(esp + 0x14) = eax;
    goto loc_0005466E;

loc_00054667: ;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = edx;

loc_0005466E: ;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 8) = 1;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B81; /* jge: greater or equal (signed >=) */

loc_00054685: ;
    edx = MEM32(esp + 0x3C);
    SET_LO16(edi, MEM16(esp + 0x38));
    MEM16(eax * 4 + 0x5C6A1A) = LO16(edi);
    MEM16(eax * 4 + 0x5C6A18) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x4C);
    edi = MEM32(eax * 8 + 0x5C8950);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;
    MEM32(ecx * 8 + 0x5C8958) = edi;
    eax = MEM32(eax * 8 + 0x5C895C);
    MEM32(ecx * 8 + 0x5C895C) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000546E3; /* jne: not equal / not zero */

loc_000546CE: ;
    ecx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000546E3; /* jne: not equal / not zero */

loc_000546D8: ;
    MEM32(esp + 0xB0) = 1;

loc_000546E3: ;
    MEM32(esp + 0x30) = 0xFFFFFFE0u;
    goto loc_000546F0;

    /* nop */

loc_000546F0: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 0x59A5C0);
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_00054B5C; /* js: sign (negative) */

loc_00054708: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B5C; /* jge: greater or equal (signed >=) */

loc_0005471F: ;
    eax = edx;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x2C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054B5C; /* jg: greater (signed >) */

loc_00054733: ;
    edx = MEM32(esp + 0x30);
    edi = MEM32(edx + 0x59A5C4);
    _fb = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = edi;
    if ((_fas < 0)) goto loc_00054B5C; /* js: sign (negative) */

loc_0005474B: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B5C; /* jge: greater or equal (signed >=) */

loc_0005475A: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(ebp + 0x2C);
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054B5C; /* jg: greater (signed >) */

loc_00054772: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005487E; /* jl: less (signed <) */

loc_0005477E: ;
    eax = MEM32(ecx + 0x59A5E4);
    edx = MEM32(esp + 0x38);
    ecx = MEM32(ecx + 0x59A5E0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x50) = ecx;
    if ((_fas < 0)) goto loc_000547E9; /* js: sign (negative) */

loc_0005479E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000547E9; /* jl: less (signed <) */

loc_000547A2: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esp + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000547E9; /* jge: greater or equal (signed >=) */

loc_000547D1: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(ecx + eax));
    goto loc_000547EF;

loc_000547E9: ;
    SET_LO8(edx, MEM8(0x91EE6C));

loc_000547EF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054800; /* je: equal / zero */

loc_000547F3: ;
    PUSH32(esp, 0x000547F8u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_000547F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_00054800: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax + 0x59A5EC);
    edx = MEM32(esp + 0x38);
    eax = MEM32(eax + 0x59A5E8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x50) = eax;
    if ((_fas < 0)) goto loc_00054867; /* js: sign (negative) */

loc_00054820: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054867; /* jl: less (signed <) */

loc_00054824: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edx = MEM32(esp + 0x50);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054863; /* jge: greater or equal (signed >=) */

loc_00054849: ;
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = MEM32(esp + 0x48);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + edx));
    goto loc_0005486D;

loc_00054863: ;
    edi = MEM32(esp + 0x48);

loc_00054867: ;
    SET_LO8(edx, MEM8(0x91EE6C));

loc_0005486D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005487E; /* je: equal / zero */

loc_00054871: ;
    PUSH32(esp, 0x00054876u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_00054876: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_0005487E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000548BB; /* jge: greater or equal (signed >=) */

loc_000548A3: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = MEM32(ebx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + ecx));
    goto loc_000548C1;

loc_000548BB: ;
    SET_LO8(ecx, MEM8(0x91EE6C));

loc_000548C1: ;
    SET_LO8(edx, LO8(ecx));
    PUSH32(esp, 0x000548C8u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_000548C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_000548D0: ;
    ecx = MEM32(esp + 0x18);
    eax = ebp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = esi;
    PUSH32(esp, 0x000548E0u); RECOMP_ABI_CALL(0x000538D0u, sub_000538D0); /* call 0x000538D0 */

loc_000548E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054B59; /* je: equal / zero */

loc_000548EB: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0x000548F7u); RECOMP_ABI_CALL(0x00051BF0u, sub_00051BF0); /* call 0x00051BF0 */

loc_000548F7: ;
    ebx = eax;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 8), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054B56; /* je: equal / zero */

loc_00054903: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = eax;
    eax = MEM32(esp + 0x20);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00054939; /* jne: not equal / not zero */

loc_0005492F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054AB2; /* je: equal / zero */

loc_00054939: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005494D; /* jne: not equal / not zero */

loc_0005493F: ;
    edx = MEM32(esp + 0x40);
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054AB2; /* je: equal / zero */

loc_0005494D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    eax = esp + 0x7C;
    ecx = esp + 0x54;
    edx = esp + 0x64;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x50) = edx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x50);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000549E0u); RECOMP_ABI_CALL(0x0048929Fu, sub_0048929F); /* call 0x0048929F */

loc_000549E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x9C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x98); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x94); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A36u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A36: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x70); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x6C); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586694)); /* fmul dword ptr [0x586694] */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A99u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A99: ;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586754)); /* fmul dword ptr [0x586754] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00054AB2: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    edx = esi;
    PUSH32(esp, 0x00054AC9u); RECOMP_ABI_CALL(0x00051C40u, sub_00051C40); /* call 0x00051C40 */

loc_00054AC9: ;
    SET_LO8(ecx, MEM8(ebx + 8));
    SET_LO8(eax, 2);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00054B08; /* jne: not equal / not zero */

loc_00054AD9: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054B56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00054AF0: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    SET_LO16(eax, MEM16(esp + 0x38));
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    MEM16(ebx + 6) = LO16(eax);
    goto loc_00054B56;

loc_00054B08: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    MEM8(ebx + 8) = LO8(eax);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    SET_LO16(eax, MEM16(esp + 0x38));
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    MEM16(ebx + 6) = LO16(eax);
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    if (CMP_GE(_fas, _fbs)) goto loc_00054B7E; /* jge: greater or equal (signed >=) */

loc_00054B3A: ;
    MEM32(eax * 8 + 0x5C8958) = ebx;
    MEM16(eax * 8 + 0x5C895C) = LO16(esi);
    MEM16(eax * 8 + 0x5C895E) = LO16(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;

loc_00054B56: ;
    esi = MEM32(ebp + 0xC);

loc_00054B59: ;
    ebx = MEM32(ebp + 0x10);

loc_00054B5C: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000546F0; /* jl: less (signed <) */

loc_00054B70: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000544F0(); return; } /* jne: not equal / not zero */

loc_00054B7C: ;
    goto loc_00054B81;

loc_00054B7E: ;
    esi = MEM32(ebp + 0xC);

loc_00054B81: ;
    ecx = MEM32(esp + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C00; /* jle: less or equal (signed <=) */

loc_00054B8F: ;
    /* nop */

loc_00054B90: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A1A);
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA8: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054BE8; /* jge: greater or equal (signed >=) */

loc_00054BC9: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054BEF;

loc_00054BE8: ;
    eax = MEM32(esp + 0x1C);

loc_00054BEC: ;
    ecx = MEM32(esi + 0x10);

loc_00054BEF: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054B90; /* jl: less (signed <) */

loc_00054C00: ;
    ecx = MEM32(esp + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C80; /* jle: less or equal (signed <=) */

loc_00054C0E: ;
    edi = edi;

loc_00054C10: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C24: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C28: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054C68; /* jge: greater or equal (signed >=) */

loc_00054C49: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054C6F;

loc_00054C68: ;
    eax = MEM32(esp + 0x1C);

loc_00054C6C: ;
    ecx = MEM32(esi + 0x10);

loc_00054C6F: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054C10; /* jl: less (signed <) */

loc_00054C80: ;
    ecx = MEM32(esp + 0xB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054EC8; /* je: equal / zero */

loc_00054C91: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x30) = eax;
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00054D5C; /* je: equal / zero */

loc_00054CA8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CB0: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054CEC; /* jge: greater or equal (signed >=) */

loc_00054CD1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + ecx * 4;
    goto loc_00054CEF;

loc_00054CEC: ;
    eax = MEM32(esi + 0x10);

loc_00054CEF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFF: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054D3B; /* jge: greater or equal (signed >=) */

loc_00054D20: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + edx * 4;
    goto loc_00054D3E;

loc_00054D3B: ;
    eax = MEM32(esi + 0x10);

loc_00054D3E: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x18);
    edi = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00054CA8; /* jne: not equal / not zero */

loc_00054D58: ;
    ecx = MEM32(esp + 0x20);

loc_00054D5C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00054EBE; /* je: equal / zero */

loc_00054D71: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = eax;
    goto loc_00054D80;

    /* nop */

loc_00054D80: ;
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x30) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054E03; /* jg: greater (signed >) */

loc_00054D89: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x30);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + -4) = xmm2.f[0]; /* movss */
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x32);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    ebx = MEM32(esp + 0x1C);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edi = MEM32(esi + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x34) = eax;
    goto loc_00054E07;

loc_00054E03: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00054E07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054E4F; /* jge: greater or equal (signed >=) */

loc_00054E30: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edi = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    edi = edi + eax * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054E56;

loc_00054E4F: ;
    eax = MEM32(esp + 0x34);

loc_00054E53: ;
    edi = MEM32(esi + 0x10);

loc_00054E56: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E62: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E66: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054EA6; /* jge: greater or equal (signed >=) */

loc_00054E87: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    edx = eax + ecx * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054EAD;

loc_00054EA6: ;
    eax = MEM32(esp + 0x34);

loc_00054EAA: ;
    edx = MEM32(esi + 0x10);

loc_00054EAD: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = (uint32_t)(int32_t)SMEM16(edx + 6);
    if (CMP_NE(_fa, _fb)) goto loc_00054D80; /* jne: not equal / not zero */

loc_00054EBE: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x44) = edx;
    goto loc_00054ECC;

loc_00054EC8: ;
    MEM32(esp + 0x44) = eax;

loc_00054ECC: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054F4F; /* je: equal / zero */

loc_00054EDA: ;
    edi = MEM32(ebp + 0x38);
    ebx = MEM32(ebp + 0x34);
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F0Du); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F0D: ;
    ecx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054F53; /* jg: greater (signed >) */

loc_00054F18: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F45u); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F45: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00054F4F: ;
    eax = MEM32(esp + 0x44);

loc_00054F53: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000546F0
 * Original: 0x000546F0 - 0x00054F5A (2154 bytes, 635 insns)
 * Folder: main (between: 0x00051BF0 and 0x00054F60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000546F0(void)
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

loc_000546F0: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 0x59A5C0);
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_00054B5C; /* js: sign (negative) */

loc_00054708: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B5C; /* jge: greater or equal (signed >=) */

loc_0005471F: ;
    eax = edx;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x2C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054B5C; /* jg: greater (signed >) */

loc_00054733: ;
    edx = MEM32(esp + 0x30);
    edi = MEM32(edx + 0x59A5C4);
    _fb = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = edi;
    if ((_fas < 0)) goto loc_00054B5C; /* js: sign (negative) */

loc_0005474B: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054B5C; /* jge: greater or equal (signed >=) */

loc_0005475A: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(ebp + 0x2C);
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054B5C; /* jg: greater (signed >) */

loc_00054772: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005487E; /* jl: less (signed <) */

loc_0005477E: ;
    eax = MEM32(ecx + 0x59A5E4);
    edx = MEM32(esp + 0x38);
    ecx = MEM32(ecx + 0x59A5E0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x50) = ecx;
    if ((_fas < 0)) goto loc_000547E9; /* js: sign (negative) */

loc_0005479E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000547E9; /* jl: less (signed <) */

loc_000547A2: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esp + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000547E9; /* jge: greater or equal (signed >=) */

loc_000547D1: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(ecx + eax));
    goto loc_000547EF;

loc_000547E9: ;
    SET_LO8(edx, MEM8(0x91EE6C));

loc_000547EF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054800; /* je: equal / zero */

loc_000547F3: ;
    PUSH32(esp, 0x000547F8u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_000547F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_00054800: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax + 0x59A5EC);
    edx = MEM32(esp + 0x38);
    eax = MEM32(eax + 0x59A5E8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x50) = eax;
    if ((_fas < 0)) goto loc_00054867; /* js: sign (negative) */

loc_00054820: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054867; /* jl: less (signed <) */

loc_00054824: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edx = MEM32(esp + 0x50);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054863; /* jge: greater or equal (signed >=) */

loc_00054849: ;
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = MEM32(esp + 0x48);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + edx));
    goto loc_0005486D;

loc_00054863: ;
    edi = MEM32(esp + 0x48);

loc_00054867: ;
    SET_LO8(edx, MEM8(0x91EE6C));

loc_0005486D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005487E; /* je: equal / zero */

loc_00054871: ;
    PUSH32(esp, 0x00054876u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_00054876: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_0005487E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000548BB; /* jge: greater or equal (signed >=) */

loc_000548A3: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = MEM32(ebx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + ecx));
    goto loc_000548C1;

loc_000548BB: ;
    SET_LO8(ecx, MEM8(0x91EE6C));

loc_000548C1: ;
    SET_LO8(edx, LO8(ecx));
    PUSH32(esp, 0x000548C8u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_000548C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_000548D0: ;
    ecx = MEM32(esp + 0x18);
    eax = ebp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = esi;
    PUSH32(esp, 0x000548E0u); RECOMP_ABI_CALL(0x000538D0u, sub_000538D0); /* call 0x000538D0 */

loc_000548E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054B59; /* je: equal / zero */

loc_000548EB: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0x000548F7u); RECOMP_ABI_CALL(0x00051BF0u, sub_00051BF0); /* call 0x00051BF0 */

loc_000548F7: ;
    ebx = eax;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 8), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054B56; /* je: equal / zero */

loc_00054903: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = eax;
    eax = MEM32(esp + 0x20);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00054939; /* jne: not equal / not zero */

loc_0005492F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054AB2; /* je: equal / zero */

loc_00054939: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005494D; /* jne: not equal / not zero */

loc_0005493F: ;
    edx = MEM32(esp + 0x40);
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054AB2; /* je: equal / zero */

loc_0005494D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    eax = esp + 0x7C;
    ecx = esp + 0x54;
    edx = esp + 0x64;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x50) = edx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x50);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000549E0u); RECOMP_ABI_CALL(0x0048929Fu, sub_0048929F); /* call 0x0048929F */

loc_000549E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x9C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x98); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x94); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A36u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A36: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x70); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x6C); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586694)); /* fmul dword ptr [0x586694] */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A99u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A99: ;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586754)); /* fmul dword ptr [0x586754] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00054AB2: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    edx = esi;
    PUSH32(esp, 0x00054AC9u); RECOMP_ABI_CALL(0x00051C40u, sub_00051C40); /* call 0x00051C40 */

loc_00054AC9: ;
    SET_LO8(ecx, MEM8(ebx + 8));
    SET_LO8(eax, 2);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00054B08; /* jne: not equal / not zero */

loc_00054AD9: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054B56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00054AF0: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    SET_LO16(eax, MEM16(esp + 0x38));
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    MEM16(ebx + 6) = LO16(eax);
    goto loc_00054B56;

loc_00054B08: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    MEM8(ebx + 8) = LO8(eax);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    SET_LO16(eax, MEM16(esp + 0x38));
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    MEM16(ebx + 6) = LO16(eax);
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    if (CMP_GE(_fas, _fbs)) goto loc_00054B7E; /* jge: greater or equal (signed >=) */

loc_00054B3A: ;
    MEM32(eax * 8 + 0x5C8958) = ebx;
    MEM16(eax * 8 + 0x5C895C) = LO16(esi);
    MEM16(eax * 8 + 0x5C895E) = LO16(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;

loc_00054B56: ;
    esi = MEM32(ebp + 0xC);

loc_00054B59: ;
    ebx = MEM32(ebp + 0x10);

loc_00054B5C: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000546F0; /* jl: less (signed <) */

loc_00054B70: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000544F0(); return; } /* jne: not equal / not zero */

loc_00054B7C: ;
    goto loc_00054B81;

loc_00054B7E: ;
    esi = MEM32(ebp + 0xC);

loc_00054B81: ;
    ecx = MEM32(esp + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C00; /* jle: less or equal (signed <=) */

loc_00054B8F: ;
    /* nop */

loc_00054B90: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A1A);
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA8: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054BE8; /* jge: greater or equal (signed >=) */

loc_00054BC9: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054BEF;

loc_00054BE8: ;
    eax = MEM32(esp + 0x1C);

loc_00054BEC: ;
    ecx = MEM32(esi + 0x10);

loc_00054BEF: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054B90; /* jl: less (signed <) */

loc_00054C00: ;
    ecx = MEM32(esp + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C80; /* jle: less or equal (signed <=) */

loc_00054C0E: ;
    edi = edi;

loc_00054C10: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C24: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C28: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054C68; /* jge: greater or equal (signed >=) */

loc_00054C49: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054C6F;

loc_00054C68: ;
    eax = MEM32(esp + 0x1C);

loc_00054C6C: ;
    ecx = MEM32(esi + 0x10);

loc_00054C6F: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054C10; /* jl: less (signed <) */

loc_00054C80: ;
    ecx = MEM32(esp + 0xB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054EC8; /* je: equal / zero */

loc_00054C91: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x30) = eax;
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00054D5C; /* je: equal / zero */

loc_00054CA8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CB0: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054CEC; /* jge: greater or equal (signed >=) */

loc_00054CD1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + ecx * 4;
    goto loc_00054CEF;

loc_00054CEC: ;
    eax = MEM32(esi + 0x10);

loc_00054CEF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFF: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054D3B; /* jge: greater or equal (signed >=) */

loc_00054D20: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + edx * 4;
    goto loc_00054D3E;

loc_00054D3B: ;
    eax = MEM32(esi + 0x10);

loc_00054D3E: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x18);
    edi = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00054CA8; /* jne: not equal / not zero */

loc_00054D58: ;
    ecx = MEM32(esp + 0x20);

loc_00054D5C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00054EBE; /* je: equal / zero */

loc_00054D71: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = eax;
    goto loc_00054D80;

loc_00054D80: ;
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x30) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054E03; /* jg: greater (signed >) */

loc_00054D89: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x30);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + -4) = xmm2.f[0]; /* movss */
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x32);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    ebx = MEM32(esp + 0x1C);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edi = MEM32(esi + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x34) = eax;
    goto loc_00054E07;

loc_00054E03: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00054E07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054E4F; /* jge: greater or equal (signed >=) */

loc_00054E30: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edi = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    edi = edi + eax * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054E56;

loc_00054E4F: ;
    eax = MEM32(esp + 0x34);

loc_00054E53: ;
    edi = MEM32(esi + 0x10);

loc_00054E56: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E62: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E66: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054EA6; /* jge: greater or equal (signed >=) */

loc_00054E87: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    edx = eax + ecx * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054EAD;

loc_00054EA6: ;
    eax = MEM32(esp + 0x34);

loc_00054EAA: ;
    edx = MEM32(esi + 0x10);

loc_00054EAD: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = (uint32_t)(int32_t)SMEM16(edx + 6);
    if (CMP_NE(_fa, _fb)) goto loc_00054D80; /* jne: not equal / not zero */

loc_00054EBE: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x44) = edx;
    goto loc_00054ECC;

loc_00054EC8: ;
    MEM32(esp + 0x44) = eax;

loc_00054ECC: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054F4F; /* je: equal / zero */

loc_00054EDA: ;
    edi = MEM32(ebp + 0x38);
    ebx = MEM32(ebp + 0x34);
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F0Du); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F0D: ;
    ecx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054F53; /* jg: greater (signed >) */

loc_00054F18: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F45u); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F45: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00054F4F: ;
    eax = MEM32(esp + 0x44);

loc_00054F53: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000548BB
 * Original: 0x000548BB - 0x00054F5A (1695 bytes, 502 insns)
 * Folder: main (between: 0x00051BF0 and 0x00054F60)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000548BB(void)
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

loc_000548BB: ;
    SET_LO8(ecx, MEM8(0x91EE6C));
    SET_LO8(edx, LO8(ecx));
    PUSH32(esp, 0x000548C8u); RECOMP_ABI_CALL(0x00051870u, sub_00051870); /* call 0x00051870 */

loc_000548C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054B5C; /* jne: not equal / not zero */

loc_000548D0: ;
    ecx = MEM32(esp + 0x18);
    eax = ebp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = esi;
    PUSH32(esp, 0x000548E0u); RECOMP_ABI_CALL(0x000538D0u, sub_000538D0); /* call 0x000538D0 */

loc_000548E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054B59; /* je: equal / zero */

loc_000548EB: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0x000548F7u); RECOMP_ABI_CALL(0x00051BF0u, sub_00051BF0); /* call 0x00051BF0 */

loc_000548F7: ;
    ebx = eax;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 8), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054B56; /* je: equal / zero */

loc_00054903: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = eax;
    eax = MEM32(esp + 0x20);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00054939; /* jne: not equal / not zero */

loc_0005492F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054AB2; /* je: equal / zero */

loc_00054939: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005494D; /* jne: not equal / not zero */

loc_0005493F: ;
    edx = MEM32(esp + 0x40);
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054AB2; /* je: equal / zero */

loc_0005494D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    eax = esp + 0x7C;
    ecx = esp + 0x54;
    edx = esp + 0x64;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x50) = edx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x50);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000549E0u); RECOMP_ABI_CALL(0x0048929Fu, sub_0048929F); /* call 0x0048929F */

loc_000549E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x9C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x98); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x94); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A36u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A36: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x70); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x6C); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586694)); /* fmul dword ptr [0x586694] */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A99u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A99: ;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586754)); /* fmul dword ptr [0x586754] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00054AB2: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    edx = esi;
    PUSH32(esp, 0x00054AC9u); RECOMP_ABI_CALL(0x00051C40u, sub_00051C40); /* call 0x00051C40 */

loc_00054AC9: ;
    SET_LO8(ecx, MEM8(ebx + 8));
    SET_LO8(eax, 2);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00054B08; /* jne: not equal / not zero */

loc_00054AD9: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054B56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00054AF0: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    SET_LO16(eax, MEM16(esp + 0x38));
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    MEM16(ebx + 6) = LO16(eax);
    goto loc_00054B56;

loc_00054B08: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    MEM8(ebx + 8) = LO8(eax);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    SET_LO16(eax, MEM16(esp + 0x38));
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    MEM16(ebx + 6) = LO16(eax);
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    if (CMP_GE(_fas, _fbs)) goto loc_00054B7E; /* jge: greater or equal (signed >=) */

loc_00054B3A: ;
    MEM32(eax * 8 + 0x5C8958) = ebx;
    MEM16(eax * 8 + 0x5C895C) = LO16(esi);
    MEM16(eax * 8 + 0x5C895E) = LO16(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;

loc_00054B56: ;
    esi = MEM32(ebp + 0xC);

loc_00054B59: ;
    ebx = MEM32(ebp + 0x10);

loc_00054B5C: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000546F0(); return; } /* jl: less (signed <) */

loc_00054B70: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000544F0(); return; } /* jne: not equal / not zero */

loc_00054B7C: ;
    goto loc_00054B81;

loc_00054B7E: ;
    esi = MEM32(ebp + 0xC);

loc_00054B81: ;
    ecx = MEM32(esp + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C00; /* jle: less or equal (signed <=) */

loc_00054B8F: ;
    /* nop */

loc_00054B90: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A1A);
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA8: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054BE8; /* jge: greater or equal (signed >=) */

loc_00054BC9: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054BEF;

loc_00054BE8: ;
    eax = MEM32(esp + 0x1C);

loc_00054BEC: ;
    ecx = MEM32(esi + 0x10);

loc_00054BEF: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054B90; /* jl: less (signed <) */

loc_00054C00: ;
    ecx = MEM32(esp + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C80; /* jle: less or equal (signed <=) */

loc_00054C0E: ;
    edi = edi;

loc_00054C10: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C24: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C28: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054C68; /* jge: greater or equal (signed >=) */

loc_00054C49: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054C6F;

loc_00054C68: ;
    eax = MEM32(esp + 0x1C);

loc_00054C6C: ;
    ecx = MEM32(esi + 0x10);

loc_00054C6F: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054C10; /* jl: less (signed <) */

loc_00054C80: ;
    ecx = MEM32(esp + 0xB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054EC8; /* je: equal / zero */

loc_00054C91: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x30) = eax;
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00054D5C; /* je: equal / zero */

loc_00054CA8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CB0: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054CEC; /* jge: greater or equal (signed >=) */

loc_00054CD1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + ecx * 4;
    goto loc_00054CEF;

loc_00054CEC: ;
    eax = MEM32(esi + 0x10);

loc_00054CEF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFF: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054D3B; /* jge: greater or equal (signed >=) */

loc_00054D20: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + edx * 4;
    goto loc_00054D3E;

loc_00054D3B: ;
    eax = MEM32(esi + 0x10);

loc_00054D3E: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x18);
    edi = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00054CA8; /* jne: not equal / not zero */

loc_00054D58: ;
    ecx = MEM32(esp + 0x20);

loc_00054D5C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00054EBE; /* je: equal / zero */

loc_00054D71: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = eax;
    goto loc_00054D80;

    /* nop */

loc_00054D80: ;
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x30) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054E03; /* jg: greater (signed >) */

loc_00054D89: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x30);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + -4) = xmm2.f[0]; /* movss */
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x32);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    ebx = MEM32(esp + 0x1C);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edi = MEM32(esi + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x34) = eax;
    goto loc_00054E07;

loc_00054E03: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00054E07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054E4F; /* jge: greater or equal (signed >=) */

loc_00054E30: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edi = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    edi = edi + eax * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054E56;

loc_00054E4F: ;
    eax = MEM32(esp + 0x34);

loc_00054E53: ;
    edi = MEM32(esi + 0x10);

loc_00054E56: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E62: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E66: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054EA6; /* jge: greater or equal (signed >=) */

loc_00054E87: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    edx = eax + ecx * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054EAD;

loc_00054EA6: ;
    eax = MEM32(esp + 0x34);

loc_00054EAA: ;
    edx = MEM32(esi + 0x10);

loc_00054EAD: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = (uint32_t)(int32_t)SMEM16(edx + 6);
    if (CMP_NE(_fa, _fb)) goto loc_00054D80; /* jne: not equal / not zero */

loc_00054EBE: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x44) = edx;
    goto loc_00054ECC;

loc_00054EC8: ;
    MEM32(esp + 0x44) = eax;

loc_00054ECC: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054F4F; /* je: equal / zero */

loc_00054EDA: ;
    edi = MEM32(ebp + 0x38);
    ebx = MEM32(ebp + 0x34);
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F0Du); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F0D: ;
    ecx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054F53; /* jg: greater (signed >) */

loc_00054F18: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F45u); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F45: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00054F4F: ;
    eax = MEM32(esp + 0x44);

loc_00054F53: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00054A69
 * Original: 0x00054A69 - 0x00054F5A (1265 bytes, 402 insns)
 * Folder: main (between: 0x00051BF0 and 0x00054F60)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054A69(void)
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

loc_00054A69: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586694)); /* fmul dword ptr [0x586694] */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00054A99u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00054A99: ;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586754)); /* fmul dword ptr [0x586754] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    edx = esi;
    PUSH32(esp, 0x00054AC9u); RECOMP_ABI_CALL(0x00051C40u, sub_00051C40); /* call 0x00051C40 */

loc_00054AC9: ;
    SET_LO8(ecx, MEM8(ebx + 8));
    SET_LO8(eax, 2);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00054B08; /* jne: not equal / not zero */

loc_00054AD9: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00054B56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00054AF0: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    SET_LO16(eax, MEM16(esp + 0x38));
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    MEM16(ebx + 6) = LO16(eax);
    goto loc_00054B56;

loc_00054B08: ;
    SET_LO16(edx, MEM16(esp + 0x3C));
    MEM8(ebx + 8) = LO8(eax);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    SET_LO16(eax, MEM16(esp + 0x38));
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    MEM16(ebx + 6) = LO16(eax);
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEM16(ebx + 4) = LO16(edx);
    if (CMP_GE(_fas, _fbs)) goto loc_00054B7E; /* jge: greater or equal (signed >=) */

loc_00054B3A: ;
    MEM32(eax * 8 + 0x5C8958) = ebx;
    MEM16(eax * 8 + 0x5C895C) = LO16(esi);
    MEM16(eax * 8 + 0x5C895E) = LO16(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;

loc_00054B56: ;
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000546F0(); return; } /* jl: less (signed <) */

loc_00054B70: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000544F0(); return; } /* jne: not equal / not zero */

loc_00054B7C: ;
    goto loc_00054B81;

loc_00054B7E: ;
    esi = MEM32(ebp + 0xC);

loc_00054B81: ;
    ecx = MEM32(esp + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C00; /* jle: less or equal (signed <=) */

loc_00054B8F: ;
    /* nop */

loc_00054B90: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5C6A1A);
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054BEC; /* jl: less (signed <) */

loc_00054BA8: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054BE8; /* jge: greater or equal (signed >=) */

loc_00054BC9: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054BEF;

loc_00054BE8: ;
    eax = MEM32(esp + 0x1C);

loc_00054BEC: ;
    ecx = MEM32(esi + 0x10);

loc_00054BEF: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054B90; /* jl: less (signed <) */

loc_00054C00: ;
    ecx = MEM32(esp + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00054C80; /* jle: less or equal (signed <=) */

loc_00054C0E: ;
    edi = edi;

loc_00054C10: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x5C895E);
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C24: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054C6C; /* jl: less (signed <) */

loc_00054C28: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054C68; /* jge: greater or equal (signed >=) */

loc_00054C49: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    ecx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    goto loc_00054C6F;

loc_00054C68: ;
    eax = MEM32(esp + 0x1C);

loc_00054C6C: ;
    ecx = MEM32(esi + 0x10);

loc_00054C6F: ;
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esp + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054C10; /* jl: less (signed <) */

loc_00054C80: ;
    ecx = MEM32(esp + 0xB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054EC8; /* je: equal / zero */

loc_00054C91: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x30) = eax;
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00054D5C; /* je: equal / zero */

loc_00054CA8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054CEC; /* jl: less (signed <) */

loc_00054CB0: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054CEC; /* jge: greater or equal (signed >=) */

loc_00054CD1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + ecx * 4;
    goto loc_00054CEF;

loc_00054CEC: ;
    eax = MEM32(esi + 0x10);

loc_00054CEF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054D3B; /* jl: less (signed <) */

loc_00054CFF: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054D3B; /* jge: greater or equal (signed >=) */

loc_00054D20: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    eax = eax + edx * 4;
    goto loc_00054D3E;

loc_00054D3B: ;
    eax = MEM32(esi + 0x10);

loc_00054D3E: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x18);
    edi = (uint32_t)(int32_t)SMEM16(eax + 6);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00054CA8; /* jne: not equal / not zero */

loc_00054D58: ;
    ecx = MEM32(esp + 0x20);

loc_00054D5C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00054EBE; /* je: equal / zero */

loc_00054D71: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = eax;
    goto loc_00054D80;

    /* nop */

loc_00054D80: ;
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x30) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054E03; /* jg: greater (signed >) */

loc_00054D89: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x30);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + -4) = xmm2.f[0]; /* movss */
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x32);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    ebx = MEM32(esp + 0x1C);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edi = MEM32(esi + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x34) = eax;
    goto loc_00054E07;

loc_00054E03: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00054E07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054E53; /* jl: less (signed <) */

loc_00054E0F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054E4F; /* jge: greater or equal (signed >=) */

loc_00054E30: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edi = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    edi = edi + eax * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054E56;

loc_00054E4F: ;
    eax = MEM32(esp + 0x34);

loc_00054E53: ;
    edi = MEM32(esi + 0x10);

loc_00054E56: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E62: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054EAA; /* jl: less (signed <) */

loc_00054E66: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054EA6; /* jge: greater or equal (signed >=) */

loc_00054E87: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    edx = eax + ecx * 4;
    eax = MEM32(esp + 0x34);
    goto loc_00054EAD;

loc_00054EA6: ;
    eax = MEM32(esp + 0x34);

loc_00054EAA: ;
    edx = MEM32(esi + 0x10);

loc_00054EAD: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    edx = (uint32_t)(int32_t)SMEM16(edx + 6);
    if (CMP_NE(_fa, _fb)) goto loc_00054D80; /* jne: not equal / not zero */

loc_00054EBE: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x44) = edx;
    goto loc_00054ECC;

loc_00054EC8: ;
    MEM32(esp + 0x44) = eax;

loc_00054ECC: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00054F4F; /* je: equal / zero */

loc_00054EDA: ;
    edi = MEM32(ebp + 0x38);
    ebx = MEM32(ebp + 0x34);
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F0Du); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F0D: ;
    ecx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00054F53; /* jg: greater (signed >) */

loc_00054F18: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0x2C);
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00054F45u); RECOMP_ABI_CALL(0x00053A40u, sub_00053A40); /* call 0x00053A40 */

loc_00054F45: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00054F4F: ;
    eax = MEM32(esp + 0x44);

loc_00054F53: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00054F60
 * Original: 0x00054F60 - 0x0005513A (474 bytes, 169 insns)
 * Folder: main (match: xbox-retail 0x0002AF20, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054F60: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebx = ecx;
    ecx = MEM32(esp + 0x30);
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00054FB0; /* jne: not equal / not zero */

loc_00054F89: ;
    ebp = (uint32_t)(int32_t)SMEM16(edx + 0x30);
    edi = ecx + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00055132; /* jge: greater or equal (signed >=) */

loc_00054F98: ;
    edx = (uint32_t)(int32_t)SMEM16(edx + 0x32);
    edi = edx + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x38) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00055132; /* jge: greater or equal (signed >=) */

loc_00054FA9: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00054FB5;

loc_00054FB0: ;
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);

loc_00054FB5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    edx = esi;
    esi = MEM32(esp + 0x2C);
    ebp = edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx + -1;
    ebx = MEM32(esp + 0x28);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebx + 4);
    esi = MEM32(esi + edi * 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054FFA; /* jne: not equal / not zero */

loc_00054FE7: ;
    esi = MEM32(ebx);
    edi = MEM32(esi + edi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054FF5; /* jne: not equal / not zero */

loc_00054FF1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00054FFA;

loc_00054FF5: ;
    esi = MEM32(ebx + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00054FFA: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = edx;
    edx = ecx + eax;
    ebx = edi + eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0005501F; /* je: equal / zero */

loc_0005501C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005501F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00055132; /* je: equal / zero */

loc_00055031: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005509A; /* jne: not equal / not zero */

loc_00055035: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055045; /* jne: not equal / not zero */

loc_00055039: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM8(esp + 0x13) = 0;
    goto loc_00055096;

loc_00055045: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0005508C; /* je: equal / zero */

loc_00055050: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005505F; /* jne: not equal / not zero */

loc_00055055: ;
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    SET_LO8(eax, MEM8(esi));
    goto loc_00055091;

loc_0005505F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055079; /* jne: not equal / not zero */

loc_00055064: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esp + 0x13) = LO8(ecx);
    goto loc_00055095;

loc_00055079: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005509A; /* jne: not equal / not zero */

loc_0005507E: ;
    edx = ZX16(MEM16(esi + 1));
    eax = esi + 1;
    esi = eax + 2;
    SET_LO8(eax, MEM8(esi));
    goto loc_00055091;

loc_0005508C: ;
    edx = 1;

loc_00055091: ;
    MEM8(esp + 0x13) = LO8(eax);

loc_00055095: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00055096: ;
    MEM32(esp + 0x2C) = edx;

loc_0005509A: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000550A8; /* jl: less (signed <) */

loc_000550A6: ;
    ecx = edx;

loc_000550A8: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x13);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF7Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF7Fu (32-bit) */
    MEM32(esp + 0x14) = ecx;
    edi = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_000550D7; /* je: equal / zero */

loc_000550BA: ;
    SET_LO8(eax, LO8(eax) | 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    edx = ecx;
    eax = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(ebx));
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    edx = MEM32(esp + 0x2C);
    goto loc_000550E2;

loc_000550D7: ;
    ebx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;

loc_000550E2: ;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0005510D; /* jne: not equal / not zero */

loc_00055105: ;
    ecx = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055124; /* jne: not equal / not zero */

loc_0005510D: ;
    ecx = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = ecx;

loc_00055124: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055031; /* jne: not equal / not zero */

loc_00055132: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00054F6D
 * Original: 0x00054F6D - 0x0005513A (461 bytes, 164 insns)
 * Folder: main (between: 0x00054F60 and 0x00055140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054F6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054F6D: ;
    ebp = MEM32(edx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebx = ecx;
    ecx = MEM32(esp + 0x30);
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00054FB0; /* jne: not equal / not zero */

loc_00054F89: ;
    ebp = (uint32_t)(int32_t)SMEM16(edx + 0x30);
    edi = ecx + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00055132; /* jge: greater or equal (signed >=) */

loc_00054F98: ;
    edx = (uint32_t)(int32_t)SMEM16(edx + 0x32);
    edi = edx + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x38) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00055132; /* jge: greater or equal (signed >=) */

loc_00054FA9: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00054FB5;

loc_00054FB0: ;
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);

loc_00054FB5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    edx = esi;
    esi = MEM32(esp + 0x2C);
    ebp = edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx + -1;
    ebx = MEM32(esp + 0x28);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(ebx + 4);
    esi = MEM32(esi + edi * 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054FFA; /* jne: not equal / not zero */

loc_00054FE7: ;
    esi = MEM32(ebx);
    edi = MEM32(esi + edi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00054FF5; /* jne: not equal / not zero */

loc_00054FF1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00054FFA;

loc_00054FF5: ;
    esi = MEM32(ebx + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00054FFA: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = edx;
    edx = ecx + eax;
    ebx = edi + eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0005501F; /* je: equal / zero */

loc_0005501C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005501F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00055132; /* je: equal / zero */

loc_00055031: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005509A; /* jne: not equal / not zero */

loc_00055035: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055045; /* jne: not equal / not zero */

loc_00055039: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM8(esp + 0x13) = 0;
    goto loc_00055096;

loc_00055045: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0005508C; /* je: equal / zero */

loc_00055050: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005505F; /* jne: not equal / not zero */

loc_00055055: ;
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    SET_LO8(eax, MEM8(esi));
    goto loc_00055091;

loc_0005505F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055079; /* jne: not equal / not zero */

loc_00055064: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esp + 0x13) = LO8(ecx);
    goto loc_00055095;

loc_00055079: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005509A; /* jne: not equal / not zero */

loc_0005507E: ;
    edx = ZX16(MEM16(esi + 1));
    eax = esi + 1;
    esi = eax + 2;
    SET_LO8(eax, MEM8(esi));
    goto loc_00055091;

loc_0005508C: ;
    edx = 1;

loc_00055091: ;
    MEM8(esp + 0x13) = LO8(eax);

loc_00055095: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00055096: ;
    MEM32(esp + 0x2C) = edx;

loc_0005509A: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000550A8; /* jl: less (signed <) */

loc_000550A6: ;
    ecx = edx;

loc_000550A8: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x13);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF7Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF7Fu (32-bit) */
    MEM32(esp + 0x14) = ecx;
    edi = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_000550D7; /* je: equal / zero */

loc_000550BA: ;
    SET_LO8(eax, LO8(eax) | 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    edx = ecx;
    eax = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(ebx));
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    edx = MEM32(esp + 0x2C);
    goto loc_000550E2;

loc_000550D7: ;
    ebx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;

loc_000550E2: ;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0005510D; /* jne: not equal / not zero */

loc_00055105: ;
    ecx = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055124; /* jne: not equal / not zero */

loc_0005510D: ;
    ecx = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = ecx;

loc_00055124: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055031; /* jne: not equal / not zero */

loc_00055132: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00054FF3
 * Original: 0x00054FF3 - 0x0005513A (327 bytes, 118 insns)
 * Folder: main (between: 0x00054F60 and 0x00055140)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00054FF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00054FF3: ;
    goto loc_00054FFA;

    esi = MEM32(ebx + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00054FFA: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = edx;
    edx = ecx + eax;
    ebx = edi + eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0005501F; /* je: equal / zero */

loc_0005501C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005501F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00055132; /* je: equal / zero */

loc_00055031: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005509A; /* jne: not equal / not zero */

loc_00055035: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055045; /* jne: not equal / not zero */

loc_00055039: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM8(esp + 0x13) = 0;
    goto loc_00055096;

loc_00055045: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0005508C; /* je: equal / zero */

loc_00055050: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005505F; /* jne: not equal / not zero */

loc_00055055: ;
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    SET_LO8(eax, MEM8(esi));
    goto loc_00055091;

loc_0005505F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055079; /* jne: not equal / not zero */

loc_00055064: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esp + 0x13) = LO8(ecx);
    goto loc_00055095;

loc_00055079: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005509A; /* jne: not equal / not zero */

loc_0005507E: ;
    edx = ZX16(MEM16(esi + 1));
    eax = esi + 1;
    esi = eax + 2;
    SET_LO8(eax, MEM8(esi));
    goto loc_00055091;

loc_0005508C: ;
    edx = 1;

loc_00055091: ;
    MEM8(esp + 0x13) = LO8(eax);

loc_00055095: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00055096: ;
    MEM32(esp + 0x2C) = edx;

loc_0005509A: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000550A8; /* jl: less (signed <) */

loc_000550A6: ;
    ecx = edx;

loc_000550A8: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x13);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF7Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF7Fu (32-bit) */
    MEM32(esp + 0x14) = ecx;
    edi = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_000550D7; /* je: equal / zero */

loc_000550BA: ;
    SET_LO8(eax, LO8(eax) | 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    edx = ecx;
    eax = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(ebx));
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    edx = MEM32(esp + 0x2C);
    goto loc_000550E2;

loc_000550D7: ;
    ebx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;

loc_000550E2: ;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0005510D; /* jne: not equal / not zero */

loc_00055105: ;
    ecx = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055124; /* jne: not equal / not zero */

loc_0005510D: ;
    ecx = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = ecx;

loc_00055124: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055031; /* jne: not equal / not zero */

loc_00055132: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00055140
 * Original: 0x00055140 - 0x0005518F (79 bytes, 36 insns)
 * Folder: main (match: xbox-retail 0x0002B2D0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00055140: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_0005518C; /* jle: less or equal (signed <=) */

loc_00055150: ;
    PUSH32(esp, edi);

loc_00055151: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00055182; /* jle: less or equal (signed <=) */

loc_00055157: ;
    goto loc_00055160;

    /* nop */

loc_00055160: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005517Au); RECOMP_ABI_CALL(0x00054F60u, sub_00054F60); /* call 0x00054F60 */

loc_0005517A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00055160; /* jl: less (signed <) */

loc_00055182: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00055151; /* jl: less (signed <) */

loc_0005518B: ;
    POP32(esp, edi);

loc_0005518C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00055190
 * Original: 0x00055190 - 0x00055319 (393 bytes, 142 insns)
 * Folder: main (match: xbox-retail 0x0002B320, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055190: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055317; /* je: equal / zero */

loc_00055199: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2A);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000551E5; /* jle: less or equal (signed <=) */

loc_000551AC: ;
    /* nop */

loc_000551B0: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(edx + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + edi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000551D5; /* je: equal / zero */

loc_000551B9: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000551C7; /* jne: not equal / not zero */

loc_000551C2: ;
    PUSH32(esp, 0x000551C7u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000551C7: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000551D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000551D2u); } /* indirect call */
    }

loc_000551D5: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x2A);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000551B0; /* jl: less (signed <) */

loc_000551E5: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055246; /* je: equal / zero */

loc_000551EC: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ebx = 0x5F4388;
    PUSH32(esp, 0x000551FBu); RECOMP_ABI_CALL(0x000DA4B0u, sub_000DA4B0); /* call 0x000DA4B0 */

loc_000551FB: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055226; /* je: equal / zero */

loc_00055206: ;
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx = ZX8(LO8(ecx));
    edx = esp + 8;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x5F4398;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00055223u); RECOMP_ABI_CALL(0x000DA4B0u, sub_000DA4B0); /* call 0x000DA4B0 */

loc_00055223: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00055226: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055246; /* je: equal / zero */

loc_0005522D: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005523B; /* jne: not equal / not zero */

loc_00055236: ;
    PUSH32(esp, 0x0005523Bu); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_0005523B: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00055246u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00055243u); } /* indirect call */
    }

loc_00055246: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055263; /* je: equal / zero */

loc_0005524B: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055259; /* jne: not equal / not zero */

loc_00055254: ;
    PUSH32(esp, 0x00055259u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00055259: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00055263u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00055260u); } /* indirect call */
    }

loc_00055263: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055283; /* je: equal / zero */

loc_0005526A: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055278; /* jne: not equal / not zero */

loc_00055273: ;
    PUSH32(esp, 0x00055278u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00055278: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00055283u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00055280u); } /* indirect call */
    }

loc_00055283: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000552A3; /* je: equal / zero */

loc_0005528A: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055298; /* jne: not equal / not zero */

loc_00055293: ;
    PUSH32(esp, 0x00055298u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00055298: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000552A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000552A0u); } /* indirect call */
    }

loc_000552A3: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000552C3; /* je: equal / zero */

loc_000552AA: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000552B8; /* jne: not equal / not zero */

loc_000552B3: ;
    PUSH32(esp, 0x000552B8u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000552B8: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000552C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000552C0u); } /* indirect call */
    }

loc_000552C3: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ebx = 0x5F4388;
    eax = esi;
    PUSH32(esp, 0x000552D4u); RECOMP_ABI_CALL(0x000DA4B0u, sub_000DA4B0); /* call 0x000DA4B0 */

loc_000552D4: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000552FF; /* je: equal / zero */

loc_000552DF: ;
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx = ZX8(LO8(edx));
    ecx = esp + 8;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x5F4398;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000552FCu); RECOMP_ABI_CALL(0x000DA4B0u, sub_000DA4B0); /* call 0x000DA4B0 */

loc_000552FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000552FF: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0005530F; /* jne: not equal / not zero */

loc_0005530A: ;
    PUSH32(esp, 0x0005530Fu); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_0005530F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00055317u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00055314u); } /* indirect call */
    }

loc_00055317: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00055320
 * Original: 0x00055320 - 0x00055710 (1008 bytes, 252 insns)
 * Folder: main (between: 0x00055190 and 0x00055710)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00055320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00055320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(ecx, MEM8(0x5C6880));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586920)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_000556F6; /* jbe: below or equal (unsigned <=) */

loc_00055362: ;
    goto loc_00055370;

    /* nop */
    goto loc_00055370;

    /* nop */

loc_00055370: ;
    esi = ZX8(LO8(eax));
    eax = MEM32(esi * 4 + 0x5C6888);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */
    ecx = 1;
    if ((_fca > _fcb)) goto loc_000553A6; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi)) */

loc_00055389: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x34);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x14); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000553A8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000553A6: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000553A8: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_000556D5; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi + 4)) */

loc_000553B7: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x34);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0x2A);
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x18); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000556D5; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000553D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000556D5; /* je: equal / zero */

loc_000553E1: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    ecx = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x1C)); /* fsub dword ptr [eax + 0x1c] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00055531; /* jne: not equal / not zero */

loc_000553FA: ;
    MEM32(esp + 0x1C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00055403u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00055403: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi * 4 + 0x5C6888);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    xmm0 = XMM_SCALAR(MEMF(0x5867F0)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x2A);
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x18); /* addss */
    eax = esp + 0x40;
    ecx = esp + 0x4C;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    edx = esp + 0x44;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x24);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    esi = MEM32(esi * 4 + 0x5C6888);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2A);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x5867F0)); /* fmul dword ptr [0x5867f0] */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(esp + 0x30)); /* fmul qword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x586918)); /* fmul qword ptr [0x586918] */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x5867F0)); /* fmul dword ptr [0x5867f0] */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(esp + 0x30)); /* fmul qword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x586918)); /* fmul qword ptr [0x586918] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000556D5;

loc_00055531: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00055536u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00055536: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi * 4 + 0x5C6888);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    xmm0 = XMM_SCALAR(MEMF(0x5867F0)); /* movss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x2A);
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x18); /* addss */
    edx = esp + 0x40;
    eax = esp + 0x4C;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    ecx = esp + 0x44;
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(esp + 0x24);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    eax = MEM32(esi * 4 + 0x5C6888);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x2A);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x5867F0)); /* fmul dword ptr [0x5867f0] */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEMD(esp + 0x38) = fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(esp + 0x38)); /* fmul qword ptr [esp + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x586918)); /* fmul qword ptr [0x586918] */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x5867F0)); /* fmul dword ptr [0x5867f0] */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    MEMD(esp + 0x38) = fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(esp + 0x38)); /* fmul qword ptr [esp + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x586918)); /* fmul qword ptr [0x586918] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00055672u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_00055672: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMD(0x586910)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000556AE; /* jbe: below or equal (unsigned <=) */

loc_00055689: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000556D5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005569A: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_000556D1;

loc_000556AE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000556D5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000556BF: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000556D1: ;
    MEM32(esp + 0x14) = esi;

loc_000556D5: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    SET_LO8(ecx, MEM8(0x5C6880));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_00055370; /* jb: below (unsigned <) */

loc_000556ED: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00055702; /* jne: not equal / not zero */

loc_000556F6: ;
    eax = MEM32(0x5C6888);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00055702: ;
    eax = MEM32(eax * 4 + 0x5C6888);
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00055710
 * Original: 0x00055710 - 0x00055785 (117 bytes, 41 insns)
 * Folder: main (match: xbox-retail 0x0002B770, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055710: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2A);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00055764; /* jle: less or equal (signed <=) */

loc_00055725: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(edx + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + edi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055754; /* je: equal / zero */

loc_0005572E: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005573C; /* jne: not equal / not zero */

loc_00055737: ;
    PUSH32(esp, 0x0005573Cu); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_0005573C: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0005574Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00055747u); } /* indirect call */
    }

loc_0005574A: ;
    edx = MEM32(esi + 4);
    MEM32(edx + edi * 4) = 0;

loc_00055754: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2A);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00055725; /* jl: less (signed <) */

loc_00055764: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM16(esi + 0x30) = 0;
    MEM16(esi + 0x32) = 0;
    PUSH32(esp, 0x0005577Fu); RECOMP_ABI_CALL(0x00055140u, sub_00055140); /* call 0x00055140 */

loc_0005577F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00055790
 * Original: 0x00055790 - 0x000558EE (350 bytes, 115 insns)
 * Folder: main (between: 0x00055710 and 0x00055940)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055790(void)
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

loc_00055790: ;
    _fb = (uint32_t)(0x968) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x968;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x974);
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = esp + 0x14;
    edx = ebp;
    ecx = esi;
    PUSH32(esp, 0x000557B5u); RECOMP_ABI_CALL(0x00051900u, sub_00051900); /* call 0x00051900 */

loc_000557B5: ;
    xmm2.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    edx = MEM32(esp + 0x984);
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x14); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x18); /* addss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ebx = esp + 0x1C;
    ecx = esi;
    PUSH32(esp, 0x000557E2u); RECOMP_ABI_CALL(0x00051900u, sub_00051900); /* call 0x00051900 */

loc_000557E2: ;
    xmm4.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x14); /* addss */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x18); /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055809; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_00055800: ;
    xmm0 = xmm4; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm2 = xmm0; /* movaps */

loc_00055809: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055817; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0005580E: ;
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm3 = xmm0; /* movaps */

loc_00055817: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005587B; /* jb: below (unsigned <) (xmm4.f[0] vs xmm2.f[0]) */

loc_0005581E: ;
    xmm5 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */

loc_00055826: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = xmm3; /* movaps */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00055872; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_0005582E: ;
    eax = edi + edi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = esp + eax + 0x20;
    ecx = esp + eax + 0x1C;
    eax = esp + eax + 0x18;

loc_00055840: ;
    ebx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000558D1; /* je: equal / zero */

loc_00055869: ;
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00055840; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00055872: ;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00055826; /* jae: above or equal (unsigned >=) (xmm4.f[0] vs xmm2.f[0]) */

loc_0005587B: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000558A3; /* jle: less or equal (signed <=) */

loc_00055881: ;
    ebx = esp + 0x18;

loc_00055885: ;
    edx = MEM32(esp + 0x984);
    PUSH32(esp, edx);
    edx = ebx;
    PUSH32(esp, 0x00055894u); RECOMP_ABI_CALL(0x00051A80u, sub_00051A80); /* call 0x00051A80 */

loc_00055894: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000558A3; /* je: equal / zero */

loc_0005589B: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00055885; /* jl: less (signed <) */

loc_000558A3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000558DE; /* je: equal / zero */

loc_000558A7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000558D1; /* jle: less or equal (signed <=) */

loc_000558AB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(esp + 0x984));
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edi = esp + 0x18;
    /* nop */

loc_000558C0: ;
    PUSH32(esp, ebx);
    edx = edi;
    PUSH32(esp, 0x000558C8u); RECOMP_ABI_CALL(0x00051A80u, sub_00051A80); /* call 0x00051A80 */

loc_000558C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000558C0; /* jne: not equal / not zero */

loc_000558D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x968) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x968;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000558DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x968) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x968;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000558F0
 * Original: 0x000558F0 - 0x00055912 (34 bytes, 12 insns)
 * Folder: main (between: 0x00055710 and 0x00055940)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000558F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000558F0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000558FB; /* je: equal / zero */

loc_000558F8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000558FB: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 4), 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000558F8; /* jne: not equal / not zero */

loc_00055904: ;
    eax = MEM32(eax + 8);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00055920
 * Original: 0x00055920 - 0x0005593B (27 bytes, 8 insns)
 * Folder: main (between: 0x00055710 and 0x00055940)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00055920(void)
{
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

loc_00055920: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005592Fu); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0005592F: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00055940
 * Original: 0x00055940 - 0x00055A40 (256 bytes, 104 insns)
 * Folder: main (match: xbox-retail 0x0002C350, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00055940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055940: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM8(ebx + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000559BE; /* je: equal / zero */

loc_0005594B: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055A3C; /* je: equal / zero */

loc_00055956: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055A3C; /* je: equal / zero */

loc_00055960: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055A3C; /* je: equal / zero */

loc_0005596A: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esi);
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000559B8; /* je: equal / zero */

loc_00055975: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    ebp = eax + ecx * 4 + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000559BE; /* je: equal / zero */

loc_0005597D: ;
    /* nop */

loc_00055980: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005598D; /* je: equal / zero */

loc_00055984: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055980; /* jne: not equal / not zero */

loc_0005598B: ;
    goto loc_000559BE;

loc_0005598D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000559BE; /* je: equal / zero */

loc_00055991: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000559AE; /* jb: below (unsigned <) */

loc_00055996: ;
    PUSH32(esp, edx);
    ebp = ecx * 4 + 4;
    PUSH32(esp, 0x000559A3u); RECOMP_ABI_CALL(0x000284F0u, sub_000284F0); /* call 0x000284F0 */

loc_000559A3: ;
    edx = ebp;
    ecx = eax;
    PUSH32(esp, 0x000559ACu); RECOMP_ABI_CALL(0x0003B600u, sub_0003B600); /* call 0x0003B600 */

loc_000559AC: ;
    MEM32(esi) = eax;

loc_000559AE: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(ecx + eax * 4) = edi;
    goto loc_000559BB;

loc_000559B8: ;
    MEM32(edx + ecx * 4) = edi;

loc_000559BB: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000559BE: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055A3C; /* je: equal / zero */

loc_000559C4: ;
    edi = MEM32(edi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055A3C; /* je: equal / zero */

loc_000559CB: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055A3C; /* je: equal / zero */

loc_000559D1: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055A3C; /* je: equal / zero */

loc_000559D7: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esi);
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00055A36; /* je: equal / zero */

loc_000559E2: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    edi = eax + ecx * 4 + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00055A3C; /* je: equal / zero */

loc_000559EA: ;
    /* nop */

loc_000559F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055A02; /* je: equal / zero */

loc_000559F4: ;
    ebp = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000559F0; /* jne: not equal / not zero */

loc_000559FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00055A02: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055A3C; /* je: equal / zero */

loc_00055A06: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00055A23; /* jb: below (unsigned <) */

loc_00055A0B: ;
    PUSH32(esp, edx);
    edi = ecx * 4 + 4;
    PUSH32(esp, 0x00055A18u); RECOMP_ABI_CALL(0x000284F0u, sub_000284F0); /* call 0x000284F0 */

loc_00055A18: ;
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x00055A21u); RECOMP_ABI_CALL(0x0003B600u, sub_0003B600); /* call 0x0003B600 */

loc_00055A21: ;
    MEM32(esi) = eax;

loc_00055A23: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + edx * 4) = ebx;
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00055A36: ;
    MEM32(edx + ecx * 4) = ebx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00055A3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00055A40
 * Original: 0x00055A40 - 0x00055AF8 (184 bytes, 76 insns)
 * Folder: main (match: xbox-retail 0x0002C450, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00055A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055A40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(ebp + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 4), 0x20 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00055AA4; /* je: equal / zero */

loc_00055A4D: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055AF4; /* je: equal / zero */

loc_00055A58: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055AF4; /* je: equal / zero */

loc_00055A62: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055AF4; /* je: equal / zero */

loc_00055A6C: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00055AA4; /* je: equal / zero */

loc_00055A75: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    ecx = edi + ecx * 4 + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00055A94; /* je: equal / zero */

loc_00055A7D: ;
    /* nop */

loc_00055A80: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055A90; /* je: equal / zero */

loc_00055A84: ;
    esi = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055A80; /* jne: not equal / not zero */

loc_00055A8E: ;
    goto loc_00055A94;

loc_00055A90: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055AA4; /* jne: not equal / not zero */

loc_00055A94: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi + 4;
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
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00055AA4: ;
    _fa = (uint32_t)(MEM8(edx + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055AF4; /* je: equal / zero */

loc_00055AAA: ;
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055AF4; /* je: equal / zero */

loc_00055AB1: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055AF4; /* je: equal / zero */

loc_00055AB7: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055AF4; /* je: equal / zero */

loc_00055ABD: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00055AF4; /* je: equal / zero */

loc_00055AC6: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    ecx = edi + ecx * 4 + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00055AE4; /* je: equal / zero */

loc_00055ACE: ;
    edi = edi;

loc_00055AD0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055AE0; /* je: equal / zero */

loc_00055AD4: ;
    edx = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055AD0; /* jne: not equal / not zero */

loc_00055ADE: ;
    goto loc_00055AE4;

loc_00055AE0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055AF4; /* jne: not equal / not zero */

loc_00055AE4: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi + 4;
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
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00055AF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00055B00
 * Original: 0x00055B00 - 0x00055B99 (153 bytes, 49 insns)
 * Folder: main (between: 0x00055A40 and 0x000560D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055B00: ;
    SET_LO8(eax, MEM8(esi + 6));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    eax = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_00055B41; /* je: equal / zero */

loc_00055B0C: ;
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055B1C; /* jne: not equal / not zero */

loc_00055B16: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    goto loc_00055B2D;

loc_00055B1C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055B28; /* jne: not equal / not zero */

loc_00055B21: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    goto loc_00055B2D;

loc_00055B28: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */

loc_00055B2D: ;
    ecx = MEM32(esi + 8);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00055B41: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(esi + 8);
    xmm3 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00055B5Au); RECOMP_ABI_CALL(0x000DDFF0u, sub_000DDFF0); /* call 0x000DDFF0 */

loc_00055B5A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055B68; /* jne: not equal / not zero */

loc_00055B61: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    goto loc_00055B79;

loc_00055B68: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00055B79; /* je: equal / zero */

loc_00055B73: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00055B79: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 6), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055B8C; /* je: equal / zero */

loc_00055B7F: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00055B8C: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00055BA0
 * Original: 0x00055BA0 - 0x0005605B (1211 bytes, 348 insns)
 * Folder: main (between: 0x00055A40 and 0x000560D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00055BA0(void)
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

loc_00055BA0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056057; /* je: equal / zero */

loc_00055BB3: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00055BD8; /* je: equal / zero */

loc_00055BBD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00055BCE; /* je: equal / zero */

loc_00055BC0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00055BD8; /* jne: not equal / not zero */

loc_00055BC3: ;
    edi = 2;
    MEM32(esp + 0x10) = edi;
    goto loc_00055BE2;

loc_00055BCE: ;
    MEM32(esp + 0x10) = 1;
    goto loc_00055BE0;

loc_00055BD8: ;
    MEM32(esp + 0x10) = 2;

loc_00055BE0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00055BE2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x10) (32-bit) */
    MEM32(esp + 4) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_00056056; /* jg: greater (signed >) */

loc_00055BF0: ;
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ebx);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, esi);

loc_00055C00: ;
    edx = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x30);
    eax = edi + 2;
    eax = MEM32(edx + eax * 4);
    esi = MEM32(eax);
    MEM32(esp + 0x40) = esi;
    ebp = ecx + esi;
    PUSH32(esp, 0x00055C1Cu); RECOMP_ABI_CALL(0x00055B00u, sub_00055B00); /* call 0x00055B00 */

loc_00055C1C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    if (CMP_AE(_fa, _fb)) goto loc_00056042; /* jae: above or equal (unsigned >=) */

loc_00055C29: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp >> 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = esi + 8;
    MEM32(esp + 0x2C) = ebp;

loc_00055C37: ;
    SET_LO8(eax, MEM8(ebx + 0xE));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    edi = ebx + -8;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x14) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00055CAB; /* je: equal / zero */

loc_00055C4C: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055C74; /* jne: not equal / not zero */

loc_00055C5C: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebx + 4) = xmm1.f[0]; /* movss */
    goto loc_00055E4B;

loc_00055C74: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055C92; /* jne: not equal / not zero */

loc_00055C79: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebx + 4) = xmm1.f[0]; /* movss */
    goto loc_00055E4B;

loc_00055C92: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebx + 4) = xmm1.f[0]; /* movss */
    goto loc_00055E4B;

loc_00055CAB: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    ecx = MEM32(eax + 0xC);
    SET_LO8(edx, MEM8(ecx + 0x40));
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x3C (8-bit) */
    edx = esp + 0x44;
    if (TEST_NZ(_fa, _fb)) goto loc_00055CE7; /* jne: not equal / not zero */

loc_00055CC6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055DD9; /* je: equal / zero */

loc_00055CCE: ;
    edx = MEM32(eax);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x48) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x4C) = eax;
    goto loc_00055DD9;

loc_00055CE7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if (CMP_NE(_fa, _fb)) goto loc_00055D7D; /* jne: not equal / not zero */

loc_00055D0F: ;
    edx = MEM32(eax);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 8); /* mulss */
    MEM32(esp + 0x34) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    edx = MEM32(eax + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEM32(esp + 0x38) = edx;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    goto loc_00055DD9;

loc_00055D7D: ;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */

loc_00055DD9: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x44;
    MEM32(esp + 0x24) = ecx;
    ecx = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    eax = MEM32(esp + 0x28);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055E25; /* jne: not equal / not zero */

loc_00055E1D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    goto loc_00055E36;

loc_00055E25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00055E36; /* je: equal / zero */

loc_00055E30: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */

loc_00055E36: ;
    _fa = (uint32_t)(MEM8(ebx + -2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + -2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055E42; /* je: equal / zero */

loc_00055E3C: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_00055E46;

loc_00055E42: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00055E46: ;
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */

loc_00055E4B: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x5866A8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005602A; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00055E65: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + -12)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ebp = ebx + -24;
    MEM32(esp + 0x28) = 1;
    MEM32(esp + 0x18) = ebp;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005602A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00055E91: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055EBE; /* je: equal / zero */

loc_00055E99: ;
    edx = edi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x28) = 0;

loc_00055EBE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + -2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ebp + 6));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x24) = eax;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055FD0; /* je: equal / zero */

loc_00055EDA: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x64);
    edi = ZX16(MEM16(esp + 0x54));
    ecx = ZX16(MEM16(ebp + 4));
    edx = MEM32(edx + eax * 4 + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00055EFF; /* jae: above or equal (unsigned >=) */

loc_00055EF9: ;
    eax = ecx;
    esi = edi;
    goto loc_00055F03;

loc_00055EFF: ;
    eax = edi;
    esi = ecx;

loc_00055F03: ;
    ecx = eax + 1;
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FF);
    ebp = MEM32(esp + 0x24);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + esi + -1;
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ebx;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = MEM32(edx + ebx * 4);
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055F47; /* je: equal / zero */

loc_00055F40: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + ebx * 4) = eax;
    goto loc_00055F50;

loc_00055F47: ;
    ebp = esi;
    ebp = ~ebp;
    ebp = ebp & eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + ebx * 4) = ebp;

loc_00055F50: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00055FC4; /* je: equal / zero */

loc_00055F56: ;
    ebp = MEM32(esp + 0x10);
    eax = ebp + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x64);
    edx = MEM32(ecx + edx * 4 + 8);
    _fa = (uint32_t)(MEM32(edx + ebx * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + ebx * 4 + 4), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055FC4; /* je: equal / zero */

loc_00055F73: ;
    eax = ebp + 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebp = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    eax = MEM32(ecx + edx * 4 + 8);
    _fa = (uint32_t)(MEM32(eax + ebx * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + ebx * 4 + 4), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00055FC4; /* je: equal / zero */

loc_00055F88: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_00055FAD; /* je: equal / zero */

loc_00055F94: ;
    edx = ZX16(MEM16(ebp + 4));
    eax = MEM32(ecx + edi * 4 + 0x14);
    ebx = MEM32(ecx + edx * 4 + 0x14);
    PUSH32(esp, 0x00055FA5u); RECOMP_ABI_CALL(0x00055940u, sub_00055940); /* call 0x00055940 */

loc_00055FA5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    goto loc_00055FC8;

loc_00055FAD: ;
    eax = ZX16(MEM16(ebp + 4));
    edx = MEM32(ecx + eax * 4 + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ecx + edi * 4 + 0x14);
    PUSH32(esp, 0x00055FBFu); RECOMP_ABI_CALL(0x00055A40u, sub_00055A40); /* call 0x00055A40 */

loc_00055FBF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00055FC8;

loc_00055FC4: ;
    ebp = MEM32(esp + 0x18);

loc_00055FC8: ;
    ebx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x14);

loc_00055FD0: ;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00055FED; /* jb: below (unsigned <) */

loc_00055FDF: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00055E91; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00055FED: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005602A; /* jne: not equal / not zero */

loc_00055FF5: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((4) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0005600Cu); RECOMP_ABI_CALL(0x0047D990u, sub_0047D990); /* call 0x0047D990 */

loc_0005600C: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x64);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x68);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_0005602A: ;
    eax = MEM32(esp + 0x2C);
    xmm3 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_00055C37; /* jne: not equal / not zero */

loc_0005603E: ;
    edi = MEM32(esp + 0x10);

loc_00056042: ;
    eax = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00055C00; /* jle: less or equal (signed <=) */

loc_00056053: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00056056: ;
    POP32(esp, edi);

loc_00056057: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00056014
 * Original: 0x00056014 - 0x0005605B (71 bytes, 24 insns)
 * Folder: main (between: 0x00055A40 and 0x000560D0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056014(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056014: ;
    edx = MEM32(esp + 0x64);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x68);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x2C);
    xmm3 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00055C37(); return; } /* jne: not equal / not zero */

loc_0005603E: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00055C00(); return; } /* jle: less or equal (signed <=) */

loc_00056053: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00056018
 * Original: 0x00056018 - 0x0005605B (67 bytes, 23 insns)
 * Folder: main (between: 0x00055A40 and 0x000560D0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056018(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056018: ;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x68);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x2C);
    xmm3 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00055C37(); return; } /* jne: not equal / not zero */

loc_0005603E: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00055C00(); return; } /* jle: less or equal (signed <=) */

loc_00056053: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00056060
 * Original: 0x00056060 - 0x0005607D (29 bytes, 11 insns)
 * Folder: main (between: 0x00055A40 and 0x000560D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056060: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005607B; /* jne: not equal / not zero */

loc_0005606B: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0x400 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0005607B; /* jae: above or equal (unsigned >=) */

loc_00056072: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00056078u); RECOMP_ABI_CALL(0x000565E0u, sub_000565E0); /* call 0x000565E0 */

loc_00056078: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005607B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00056080
 * Original: 0x00056080 - 0x000560C8 (72 bytes, 32 insns)
 * Folder: main (between: 0x00055A40 and 0x000560D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00056080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056080: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000560C5; /* ja: above (unsigned >) */

loc_0005608F: ;
    PUSH32(esp, esi);

loc_00056090: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000560BD; /* je: equal / zero */

loc_00056096: ;
    eax = esi;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000560BD; /* je: equal / zero */

loc_0005609E: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000560BD; /* jns: not sign (positive) */

loc_000560A5: ;
    _fa = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000560BD; /* jne: not equal / not zero */

loc_000560AD: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0x400 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000560BD; /* jae: above or equal (unsigned >=) */

loc_000560B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000560BAu); RECOMP_ABI_CALL(0x000565E0u, sub_000565E0); /* call 0x000565E0 */

loc_000560BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000560BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00056090; /* jbe: below or equal (unsigned <=) */

loc_000560C4: ;
    POP32(esp, esi);

loc_000560C5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000560D0
 * Original: 0x000560D0 - 0x000561F2 (290 bytes, 101 insns)
 * Folder: main (match: xbox-retail 0x0002C9A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000560D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000560D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx + 0x1004) = LO16(ecx);
    esi = MEM32(eax + esi * 4 + 8);
    eax = ZX16(MEM16(eax));
    ebx = MEM32(esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = eax + ebx + -16;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    PUSH32(esp, edi);
    esi = ebx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0005614B; /* ja: above (unsigned >) */

loc_00056102: ;
    ecx = ZX16(MEM16(edx + 2));
    eax = edx + 4;
    ecx = eax + ecx * 4 + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0005613B; /* ja: above (unsigned >) */

loc_00056111: ;
    edi = MEM32(esi);

loc_00056113: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056120; /* je: equal / zero */

loc_00056117: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00056113; /* jbe: below or equal (unsigned <=) */

loc_0005611E: ;
    goto loc_0005613B;

loc_00056120: ;
    eax = ZX16(MEM16(edx + 0x1004));
    SET_LO16(ecx, MEM16(esp + 0x18));
    MEM16(edx + eax * 2 + 0x1006) = LO16(ecx);
    MEM16(edx + 0x1004) = MEM16(edx + 0x1004) + 1;
    _fa = (uint32_t)(MEM16(edx + 0x1004)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0005613B: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00056102; /* jbe: below or equal (unsigned <=) */

loc_0005614B: ;
    ecx = ZX16(MEM16(edx + 0x1004));
    SET_LO16(esi, MEM16(edx + 0x1006));
    eax = edx + 0x1006;
    ecx = eax + ecx * 2 + -2;
    MEM16(edx) = LO16(esi);
    esi = ecx + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_000561B5; /* ja: above (unsigned >) */

loc_00056171: ;
    esi = ZX16(MEM16(eax));
    ecx = ZX16(MEM16(eax + 2));
    edi = ZX16(MEM16(edx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = ebp;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 2));
    _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx) = MEM16(edx) + LO16(ecx);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x18);
    esi = ecx + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00056171; /* jbe: below or equal (unsigned <=) */

loc_000561B5: ;
    _fa = (uint32_t)(MEM16(edx + 0x1004)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x1004), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000561ED; /* je: equal / zero */

loc_000561BF: ;
    eax = ZX16(MEM16(ecx));
    ecx = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(ecx));
    edi = ZX16(MEM16(edx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + 1;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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

loc_000561ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00056200
 * Original: 0x00056200 - 0x0005641F (543 bytes, 186 insns)
 * Folder: main (between: 0x000560D0 and 0x00056420)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056200: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = eax + 4;
    MEM16(eax + 0x1004) = 0;
    eax = ZX16(MEM16(eax + 2));
    eax = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 8) = esi;
    MEM32(esp + 0x18) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00056419; /* jae: above or equal (unsigned >=) */

loc_0005622F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);

loc_00056231: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xA), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056404; /* je: equal / zero */

loc_0005623F: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005630F; /* je: equal / zero */

loc_00056249: ;
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    eax = MEM32(eax);
    edi = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = edi + edx * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00056404; /* jae: above or equal (unsigned >=) */

loc_00056260: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    goto loc_00056270;

    /* nop */

loc_00056270: ;
    edx = MEM32(esi);
    eax = MEM32(edi);
    ecx = ZX16(MEM16(eax + 0xA));
    edx = ZX16(MEM16(edx + 0xA));
    esi = MEM32(ebx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0005628C; /* jae: above or equal (unsigned >=) */

loc_00056286: ;
    eax = edx;
    edx = ecx;
    goto loc_0005628E;

loc_0005628C: ;
    eax = ecx;

loc_0005628E: ;
    ecx = eax + 1;
    ebp = ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FF);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + edx + -1;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + eax * 4);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + eax * 4) = ecx;
    ecx = MEM32(ebx + 0xC);
    esi = MEM32(ecx + eax * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + eax * 4) = esi;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(ecx + eax * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + eax * 4) = esi;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000562F7; /* je: equal / zero */

loc_000562E8: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000562F4u); RECOMP_ABI_CALL(0x00055A40u, sub_00055A40); /* call 0x00055A40 */

loc_000562F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000562F7: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00056270; /* jne: not equal / not zero */

loc_0005630A: ;
    goto loc_00056404;

loc_0005630F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x14;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = ecx;

loc_00056322: ;
    ecx = MEM32(esi);
    SET_LO16(ecx, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000563E5; /* je: equal / zero */

loc_00056331: ;
    ebp = MEM32(ebx + 8);
    ecx = ZX16(LO16(ecx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00056342; /* jae: above or equal (unsigned >=) */

loc_0005633E: ;
    eax = ecx;
    goto loc_00056346;

loc_00056342: ;
    eax = edx;
    edx = ecx;

loc_00056346: ;
    ecx = eax + 1;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FF);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + edx + -1;
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = esi;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + esi * 4);
    eax = ecx;
    edi = edx;
    edi = ~edi;
    ebx = edi;
    ebx = ebx & ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + esi * 4) = ebx;
    ebx = MEM32(esp + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_00056390: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM32(eax + esi * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + esi * 4 + 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_00056399: ;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(MEM32(ecx + esi * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + esi * 4 + 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_000563A2: ;
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_000563AC: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000563B8u); RECOMP_ABI_CALL(0x00055A40u, sub_00055A40); /* call 0x00055A40 */

loc_000563B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000563BB: ;
    eax = MEM32(ebx + 0xC);
    ebp = MEM32(eax + esi * 4 + 4);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp & edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi * 4) = ebp;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + esi * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi * 4) = ecx;
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x10);

loc_000563E5: ;
    edi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x400 (16-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00056322; /* jb: below (unsigned <) */

loc_00056404: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_B(_fa, _fb)) goto loc_00056231; /* jb: below (unsigned <) */

loc_00056417: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00056419: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00056231
 * Original: 0x00056231 - 0x0005641F (494 bytes, 170 insns)
 * Folder: main (between: 0x000560D0 and 0x00056420)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056231(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056231: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xA), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056404; /* je: equal / zero */

loc_0005623F: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005630F; /* je: equal / zero */

loc_00056249: ;
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    eax = MEM32(eax);
    edi = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = edi + edx * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00056404; /* jae: above or equal (unsigned >=) */

loc_00056260: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    goto loc_00056270;

loc_00056270: ;
    edx = MEM32(esi);
    eax = MEM32(edi);
    ecx = ZX16(MEM16(eax + 0xA));
    edx = ZX16(MEM16(edx + 0xA));
    esi = MEM32(ebx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0005628C; /* jae: above or equal (unsigned >=) */

loc_00056286: ;
    eax = edx;
    edx = ecx;
    goto loc_0005628E;

loc_0005628C: ;
    eax = ecx;

loc_0005628E: ;
    ecx = eax + 1;
    ebp = ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FF);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + edx + -1;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + eax * 4);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + eax * 4) = ecx;
    ecx = MEM32(ebx + 0xC);
    esi = MEM32(ecx + eax * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + eax * 4) = esi;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(ecx + eax * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + eax * 4) = esi;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000562F7; /* je: equal / zero */

loc_000562E8: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000562F4u); RECOMP_ABI_CALL(0x00055A40u, sub_00055A40); /* call 0x00055A40 */

loc_000562F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000562F7: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00056270; /* jne: not equal / not zero */

loc_0005630A: ;
    goto loc_00056404;

loc_0005630F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x14;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = ecx;

loc_00056322: ;
    ecx = MEM32(esi);
    SET_LO16(ecx, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000563E5; /* je: equal / zero */

loc_00056331: ;
    ebp = MEM32(ebx + 8);
    ecx = ZX16(LO16(ecx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00056342; /* jae: above or equal (unsigned >=) */

loc_0005633E: ;
    eax = ecx;
    goto loc_00056346;

loc_00056342: ;
    eax = edx;
    edx = ecx;

loc_00056346: ;
    ecx = eax + 1;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FF);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + edx + -1;
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = esi;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + esi * 4);
    eax = ecx;
    edi = edx;
    edi = ~edi;
    ebx = edi;
    ebx = ebx & ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + esi * 4) = ebx;
    ebx = MEM32(esp + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_00056390: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM32(eax + esi * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + esi * 4 + 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_00056399: ;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(MEM32(ecx + esi * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + esi * 4 + 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_000563A2: ;
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_000563AC: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000563B8u); RECOMP_ABI_CALL(0x00055A40u, sub_00055A40); /* call 0x00055A40 */

loc_000563B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000563BB: ;
    eax = MEM32(ebx + 0xC);
    ebp = MEM32(eax + esi * 4 + 4);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp & edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi * 4) = ebp;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + esi * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi * 4) = ecx;
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x10);

loc_000563E5: ;
    edi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x400 (16-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00056322; /* jb: below (unsigned <) */

loc_00056404: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_B(_fa, _fb)) goto loc_00056231; /* jb: below (unsigned <) */

loc_00056417: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00056322
 * Original: 0x00056322 - 0x0005641F (253 bytes, 89 insns)
 * Folder: main (between: 0x000560D0 and 0x00056420)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056322(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056322: ;
    ecx = MEM32(esi);
    SET_LO16(ecx, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000563E5; /* je: equal / zero */

loc_00056331: ;
    ebp = MEM32(ebx + 8);
    ecx = ZX16(LO16(ecx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00056342; /* jae: above or equal (unsigned >=) */

loc_0005633E: ;
    eax = ecx;
    goto loc_00056346;

loc_00056342: ;
    eax = edx;
    edx = ecx;

loc_00056346: ;
    ecx = eax + 1;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FF);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + edx + -1;
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = esi;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + esi * 4);
    eax = ecx;
    edi = edx;
    edi = ~edi;
    ebx = edi;
    ebx = ebx & ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + esi * 4) = ebx;
    ebx = MEM32(esp + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_00056390: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM32(eax + esi * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + esi * 4 + 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_00056399: ;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(MEM32(ecx + esi * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + esi * 4 + 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_000563A2: ;
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000563BB; /* je: equal / zero */

loc_000563AC: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000563B8u); RECOMP_ABI_CALL(0x00055A40u, sub_00055A40); /* call 0x00055A40 */

loc_000563B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000563BB: ;
    eax = MEM32(ebx + 0xC);
    ebp = MEM32(eax + esi * 4 + 4);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp & edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi * 4) = ebp;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + esi * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi * 4) = ecx;
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x10);

loc_000563E5: ;
    edi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x400 (16-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00056322; /* jb: below (unsigned <) */

loc_00056404: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00056231(); return; } /* jb: below (unsigned <) */

loc_00056417: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000563B2
 * Original: 0x000563B2 - 0x0005641F (109 bytes, 36 insns)
 * Folder: main (between: 0x000560D0 and 0x00056420)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000563B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000563B2: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000563B8u); RECOMP_ABI_CALL(0x00055A40u, sub_00055A40); /* call 0x00055A40 */

loc_000563B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0xC);
    ebp = MEM32(eax + esi * 4 + 4);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp & edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi * 4) = ebp;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + esi * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi * 4) = ecx;
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x400 (16-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = edi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00056322(); return; } /* jb: below (unsigned <) */

loc_00056404: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00056231(); return; } /* jb: below (unsigned <) */

loc_00056417: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00056420
 * Original: 0x00056420 - 0x00056497 (119 bytes, 42 insns)
 * Folder: main (match: xbox-retail 0x0002CCF0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056420: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2C);
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056495; /* je: equal / zero */

loc_0005642A: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    MEM16(edi + 2) = 0;
    MEM32(edi + 4) = ebx;
    MEM16(edi + 2) = MEM16(edi + 2) + 1;
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00056441u); RECOMP_ABI_CALL(0x00056200u, sub_00056200); /* call 0x00056200 */

loc_00056441: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00056449u); RECOMP_ABI_CALL(0x000560D0u, sub_000560D0); /* call 0x000560D0 */

loc_00056449: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00056451u); RECOMP_ABI_CALL(0x000560D0u, sub_000560D0); /* call 0x000560D0 */

loc_00056451: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00056459u); RECOMP_ABI_CALL(0x000560D0u, sub_000560D0); /* call 0x000560D0 */

loc_00056459: ;
    eax = esi + 0x14;
    ecx = eax + 0xFFC;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00056494; /* ja: above (unsigned >) */

loc_00056469: ;
    /* nop */

loc_00056470: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005647E; /* je: equal / zero */

loc_00056474: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00056470; /* jbe: below or equal (unsigned <=) */

loc_0005647B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0005647E: ;
    MEM32(eax) = 0;
    MEM16(ebx + 0xA) = 0xFFFF;
    SET_LO16(ecx, MEM16(edi + 2));
    SET_LO16(ecx, LO16(ecx) << 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(esi) = MEM16(esi) - LO16(ecx);
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */

loc_00056494: ;
    POP32(esp, edi);

loc_00056495: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000564A0
 * Original: 0x000564A0 - 0x000564D8 (56 bytes, 25 insns)
 * Folder: main (between: 0x00056420 and 0x000564E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000564A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000564A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    eax = ecx;
    edx = ecx + 0xFFC;
    if (CMP_EQ(_fa, _fb)) goto loc_000564C6; /* je: equal / zero */

loc_000564B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000564C6; /* jae: above or equal (unsigned >=) */

loc_000564B5: ;
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000564B1; /* jne: not equal / not zero */

loc_000564BF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000564C6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000564D2; /* jne: not equal / not zero */

loc_000564CB: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000564D2: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000564E0
 * Original: 0x000564E0 - 0x00056537 (87 bytes, 31 insns)
 * Folder: main (match: xbox-retail 0x0002CD70, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000564E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000564E0: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000564EE; /* jne: not equal / not zero */

loc_000564E9: ;
    PUSH32(esp, 0x000564EEu); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000564EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0xFFC4;
    ecx = eax;
    PUSH32(esp, 0x000564FCu); RECOMP_ABI_CALL(0x00028500u, sub_00028500); /* call 0x00028500 */

loc_000564FC: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3FF1;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056517; /* jne: not equal / not zero */

loc_00056512: ;
    PUSH32(esp, 0x00056517u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00056517: ;
    edx = 0x8000;
    ecx = eax;
    PUSH32(esp, 0x00056523u); RECOMP_ABI_CALL(0x00028500u, sub_00028500); /* call 0x00028500 */

loc_00056523: ;
    MEM32(esi) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00056540
 * Original: 0x00056540 - 0x000565DD (157 bytes, 61 insns)
 * Folder: main (between: 0x000564E0 and 0x000567E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056540: ;
    PUSH32(esp, ecx);
    SET_LO16(ecx, MEM16(esp + 8));
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00056551: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000565C8; /* je: equal / zero */

loc_00056556: ;
    esi = MEM32(edi + 8);
    edx = ZX16(LO16(ecx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00056569; /* jae: above or equal (unsigned >=) */

loc_00056563: ;
    eax = edx;
    edx = ebx;
    goto loc_0005656B;

loc_00056569: ;
    eax = ebx;

loc_0005656B: ;
    ecx = eax + 1;
    ebp = ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FF);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + edx + -1;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + eax * 4);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + eax * 4) = ecx;
    ecx = MEM32(edi + 0xC);
    esi = MEM32(ecx + eax * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + eax * 4) = esi;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(ecx + eax * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + eax * 4) = esi;
    SET_LO16(ecx, MEM16(esp + 0x14));
    eax = MEM32(esp + 0xC);

loc_000565C8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x400 (16-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00056551; /* jb: below (unsigned <) */

loc_000565D8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000565E0
 * Original: 0x000565E0 - 0x000567DA (506 bytes, 151 insns)
 * Folder: main (between: 0x000564E0 and 0x000567E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000565E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000565E0: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    ecx = edi;
    PUSH32(esp, 0x000565F4u); RECOMP_ABI_CALL(0x000564A0u, sub_000564A0); /* call 0x000564A0 */

loc_000565F4: ;
    MEM16(esi + 0xA) = LO16(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000565FEu); RECOMP_ABI_CALL(0x00056540u, sub_00056540); /* call 0x00056540 */

loc_000565FE: ;
    eax = ZX16(MEM16(esi + 0xA));
    MEM32(edi + eax * 4 + 0x14) = esi;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x14);
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005662A; /* je: equal / zero */

loc_00056617: ;
    ebx = MEM32(esp + 0x34);
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, 0x10);
    goto loc_00056644;

loc_0005662A: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    ebx = eax;
    eax = MEM32(esi + 0xC);
    edx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005663Fu); RECOMP_ABI_CALL(0x000DDFF0u, sub_000DDFF0); /* call 0x000DDFF0 */

loc_0005663F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 8);

loc_00056644: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ebp = MEM32(esp + 0x34);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) | 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, LO8(edx) & 8);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esp + 0x34);
    MEM8(esp + 0xE) = LO8(ecx);
    MEM8(esp + 0xF) = LO8(eax);
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x20) = 3;

loc_00056683: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00056719; /* je: equal / zero */

loc_00056696: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000566DE; /* je: equal / zero */

loc_00056699: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00056749; /* jne: not equal / not zero */

loc_000566A0: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000566BA; /* je: equal / zero */

loc_000566A4: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    goto loc_00056749;

loc_000566BA: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00056749;

loc_000566DE: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000566F5; /* je: equal / zero */

loc_000566E2: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    goto loc_00056749;

loc_000566F5: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 4); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00056749;

loc_00056719: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056730; /* je: equal / zero */

loc_0005671D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    goto loc_00056749;

loc_00056730: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */

loc_00056749: ;
    eax = MEM32(esp + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x18) = ebx;
    SET_LO16(ecx, MEM16(esi + 0xA));
    MEM16(eax + 0x14) = LO16(ecx);
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00056779; /* je: equal / zero */

loc_00056774: ;
    MEM32(eax + 0x18) = ebx;
    goto loc_0005677C;

loc_00056779: ;
    MEM32(eax + 0x18) = edi;

loc_0005677C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, MEM8(esp + 0xE));
    MEM8(eax + 0x16) = LO8(ecx);
    MEM32(eax) = esi;
    MEM32(eax + 8) = ebx;
    SET_LO16(ecx, MEM16(esi + 0xA));
    MEM16(eax + 4) = LO16(ecx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0005679E; /* je: equal / zero */

loc_00056799: ;
    MEM32(eax + 8) = ebx;
    goto loc_000567A1;

loc_0005679E: ;
    MEM32(eax + 8) = ebp;

loc_000567A1: ;
    SET_LO8(ecx, MEM8(esp + 0xF));
    MEM8(eax + 6) = LO8(ecx);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00056683; /* jne: not equal / not zero */

loc_000567CB: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + 2;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000567E0
 * Original: 0x000567E0 - 0x0005685B (123 bytes, 38 insns)
 * Folder: main (match: xbox-retail 0x0002D040, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000567E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000567E0: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000567EE; /* jne: not equal / not zero */

loc_000567E9: ;
    PUSH32(esp, 0x000567EEu); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000567EE: ;
    PUSH32(esp, edi);
    edx = 0x1014;
    ecx = eax;
    PUSH32(esp, 0x000567FBu); RECOMP_ABI_CALL(0x00028500u, sub_00028500); /* call 0x00028500 */

loc_000567FB: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = edi;
    ecx = 0x405;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056817; /* jne: not equal / not zero */

loc_00056812: ;
    PUSH32(esp, 0x00056817u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00056817: ;
    edx = 0x1808;
    ecx = eax;
    PUSH32(esp, 0x00056823u); RECOMP_ABI_CALL(0x00028500u, sub_00028500); /* call 0x00028500 */

loc_00056823: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 0x2C);
    edi = MEM32(edx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x602;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x0005683Du); RECOMP_ABI_CALL(0x000564E0u, sub_000564E0); /* call 0x000564E0 */

loc_0005683D: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 0x00056848u); RECOMP_ABI_CALL(0x000564E0u, sub_000564E0); /* call 0x000564E0 */

loc_00056848: ;
    edx = MEM32(esi + 0x2C);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x00056853u); RECOMP_ABI_CALL(0x000564E0u, sub_000564E0); /* call 0x000564E0 */

loc_00056853: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(ecx + 0x10) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00056860
 * Original: 0x00056860 - 0x00056994 (308 bytes, 114 insns)
 * Folder: main (match: xbox-retail 0x0002D0C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056860: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056889; /* je: equal / zero */

loc_0005686B: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056879; /* jne: not equal / not zero */

loc_00056874: ;
    PUSH32(esp, 0x00056879u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00056879: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00056889u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00056886u); } /* indirect call */
    }

loc_00056889: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000568AF; /* je: equal / zero */

loc_00056893: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000568A1; /* jne: not equal / not zero */

loc_0005689C: ;
    PUSH32(esp, 0x000568A1u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000568A1: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000568AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000568ACu); } /* indirect call */
    }

loc_000568AF: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000568D8; /* je: equal / zero */

loc_000568BA: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000568C8; /* jne: not equal / not zero */

loc_000568C3: ;
    PUSH32(esp, 0x000568C8u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000568C8: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000568D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000568D5u); } /* indirect call */
    }

loc_000568D8: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000568FE; /* je: equal / zero */

loc_000568E2: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000568F0; /* jne: not equal / not zero */

loc_000568EB: ;
    PUSH32(esp, 0x000568F0u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000568F0: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000568FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000568FBu); } /* indirect call */
    }

loc_000568FE: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056927; /* je: equal / zero */

loc_00056909: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056917; /* jne: not equal / not zero */

loc_00056912: ;
    PUSH32(esp, 0x00056917u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00056917: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00056927u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00056924u); } /* indirect call */
    }

loc_00056927: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005694D; /* je: equal / zero */

loc_00056931: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005693F; /* jne: not equal / not zero */

loc_0005693A: ;
    PUSH32(esp, 0x0005693Fu); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_0005693F: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0005694Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005694Au); } /* indirect call */
    }

loc_0005694D: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056973; /* je: equal / zero */

loc_00056957: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056965; /* jne: not equal / not zero */

loc_00056960: ;
    PUSH32(esp, 0x00056965u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00056965: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00056973u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00056970u); } /* indirect call */
    }

loc_00056973: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056993; /* je: equal / zero */

loc_0005697A: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056988; /* jne: not equal / not zero */

loc_00056983: ;
    PUSH32(esp, 0x00056988u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00056988: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00056993u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00056990u); } /* indirect call */
    }

loc_00056993: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000568C3
 * Original: 0x000568C3 - 0x00056994 (209 bytes, 78 insns)
 * Folder: main (between: 0x00056860 and 0x000569A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000568C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000568C3: ;
    PUSH32(esp, 0x000568C8u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000568C8: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000568D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000568D5u); } /* indirect call */
    }

loc_000568D8: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000568FE; /* je: equal / zero */

loc_000568E2: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000568F0; /* jne: not equal / not zero */

loc_000568EB: ;
    PUSH32(esp, 0x000568F0u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000568F0: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000568FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000568FBu); } /* indirect call */
    }

loc_000568FE: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056927; /* je: equal / zero */

loc_00056909: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056917; /* jne: not equal / not zero */

loc_00056912: ;
    PUSH32(esp, 0x00056917u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00056917: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00056927u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00056924u); } /* indirect call */
    }

loc_00056927: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005694D; /* je: equal / zero */

loc_00056931: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005693F; /* jne: not equal / not zero */

loc_0005693A: ;
    PUSH32(esp, 0x0005693Fu); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_0005693F: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0005694Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005694Au); } /* indirect call */
    }

loc_0005694D: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056973; /* je: equal / zero */

loc_00056957: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056965; /* jne: not equal / not zero */

loc_00056960: ;
    PUSH32(esp, 0x00056965u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00056965: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00056973u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00056970u); } /* indirect call */
    }

loc_00056973: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056993; /* je: equal / zero */

loc_0005697A: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056988; /* jne: not equal / not zero */

loc_00056983: ;
    PUSH32(esp, 0x00056988u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_00056988: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00056993u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00056990u); } /* indirect call */
    }

loc_00056993: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000569A0
 * Original: 0x000569A0 - 0x000569F6 (86 bytes, 23 insns)
 * Folder: main (match: xbox-retail 0x0002E350, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000569A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000569A0: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000569AE; /* jne: not equal / not zero */

loc_000569A9: ;
    PUSH32(esp, 0x000569AEu); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000569AE: ;
    edx = 0x50;
    ecx = eax;
    PUSH32(esp, 0x000569BAu); RECOMP_ABI_CALL(0x00028500u, sub_00028500); /* call 0x00028500 */

loc_000569BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000569EE; /* je: equal / zero */

loc_000569BE: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 0;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x3C) = 0;
    MEM32(eax + 0x40) = ecx;
    MEM32(0x91EE70) = eax;
    esp += 4; return; /* ret */

loc_000569EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91EE70) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6D70
 * Original: 0x000E6D70 - 0x000E6DC7 (87 bytes, 38 insns)
 * Folder: main (match: xbox-retail 0x0001FFB0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6D70: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6DC6; /* jne: not equal / not zero */

loc_000E6D79: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6D9F; /* jne: not equal / not zero */

loc_000E6D84: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6D9B; /* jne: not equal / not zero */

loc_000E6D8D: ;
    /* nop */

loc_000E6D90: ;
    ecx = eax;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6D90; /* je: equal / zero */

loc_000E6D9B: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E6D9F: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6DC3; /* jne: not equal / not zero */

loc_000E6DA9: ;
    /* nop */

loc_000E6DB0: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6DC3; /* jne: not equal / not zero */

loc_000E6DB7: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6DB0; /* je: equal / zero */

loc_000E6DC3: ;
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_000E6DC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6DD0
 * Original: 0x000E6DD0 - 0x000E7091 (705 bytes, 248 insns)
 * Folder: main (match: xbox-retail 0x00020010, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6DD0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48D368);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = esp;
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E6E45; /* je: equal / zero */

loc_000E6DF9: ;
    PUSH32(esp, 0x1B);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x57FA78);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x000E6E1Cu); RECOMP_ABI_CALL(0x00019200u, sub_00019200); /* call 0x00019200 */

loc_000E6E1C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0x58) = esi;
    PUSH32(esp, 0x000E6E2Eu); RECOMP_ABI_CALL(0x00018D10u, sub_00018D10); /* call 0x00018D10 */

loc_000E6E2E: ;
    PUSH32(esp, 0x589F50);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x57FA70;
    PUSH32(esp, 0x000E6E45u); RECOMP_ABI_CALL(0x004816B1u, sub_004816B1); /* call 0x004816B1 */

loc_000E6E45: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, edi);
    edx = esp + 0x6C;
    MEM32(esp + 0x64) = ebx;
    PUSH32(esp, 0x000E6E56u); RECOMP_ABI_CALL(0x000E6D70u, sub_000E6D70); /* call 0x000E6D70 */

loc_000E6E56: ;
    eax = MEM32(ebx);
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6E64; /* je: equal / zero */

loc_000E6E5F: ;
    edi = MEM32(ebx + 8);
    goto loc_000E6E7D;

loc_000E6E64: ;
    edx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(edx + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6E72; /* je: equal / zero */

loc_000E6E6E: ;
    edi = eax;
    goto loc_000E6E7D;

loc_000E6E72: ;
    ecx = MEM32(esp + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000E6EE7; /* jne: not equal / not zero */

loc_000E6E7D: ;
    SET_LO8(eax, MEM8(edi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000E6E8A; /* jne: not equal / not zero */

loc_000E6E87: ;
    MEM32(edi + 4) = esi;

loc_000E6E8A: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6E97; /* jne: not equal / not zero */

loc_000E6E92: ;
    MEM32(eax + 4) = edi;
    goto loc_000E6EA2;

loc_000E6E97: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6E9F; /* jne: not equal / not zero */

loc_000E6E9B: ;
    MEM32(esi) = edi;
    goto loc_000E6EA2;

loc_000E6E9F: ;
    MEM32(esi + 8) = edi;

loc_000E6EA2: ;
    ebx = MEM32(ebp + 4);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x64) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6EC1; /* jne: not equal / not zero */

loc_000E6EAD: ;
    SET_LO8(eax, MEM8(edi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6EB8; /* je: equal / zero */

loc_000E6EB4: ;
    eax = esi;
    goto loc_000E6EBF;

loc_000E6EB8: ;
    eax = edi;
    PUSH32(esp, 0x000E6EBFu); RECOMP_ABI_CALL(0x000284D0u, sub_000284D0); /* call 0x000284D0 */

loc_000E6EBF: ;
    MEM32(ebx) = eax;

loc_000E6EC1: ;
    ebx = MEM32(ebp + 4);
    ecx = MEM32(esp + 0x64);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6F3F; /* jne: not equal / not zero */

loc_000E6ECD: ;
    SET_LO8(eax, MEM8(edi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6EDB; /* je: equal / zero */

loc_000E6ED4: ;
    eax = esi;
    MEM32(ebx + 8) = eax;
    goto loc_000E6F3F;

loc_000E6EDB: ;
    eax = edi;
    PUSH32(esp, 0x000E6EE2u); RECOMP_ABI_CALL(0x000E70F0u, sub_000E70F0); /* call 0x000E70F0 */

loc_000E6EE2: ;
    MEM32(ebx + 8) = eax;
    goto loc_000E6F3F;

loc_000E6EE7: ;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebx);
    MEM32(ecx) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6EF7; /* jne: not equal / not zero */

loc_000E6EF3: ;
    esi = ecx;
    goto loc_000E6F12;

loc_000E6EF7: ;
    SET_LO8(eax, MEM8(edi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000E6F04; /* jne: not equal / not zero */

loc_000E6F01: ;
    MEM32(edi + 4) = esi;

loc_000E6F04: ;
    MEM32(esi) = edi;
    eax = MEM32(ebx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(ebx + 8);
    MEM32(edx + 4) = ecx;

loc_000E6F12: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6F1F; /* jne: not equal / not zero */

loc_000E6F1A: ;
    MEM32(eax + 4) = ecx;
    goto loc_000E6F2D;

loc_000E6F1F: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6F2A; /* jne: not equal / not zero */

loc_000E6F26: ;
    MEM32(eax) = ecx;
    goto loc_000E6F2D;

loc_000E6F2A: ;
    MEM32(eax + 8) = ecx;

loc_000E6F2D: ;
    eax = MEM32(ebx + 4);
    MEM32(ecx + 4) = eax;
    SET_LO8(edx, MEM8(ebx + 0x10));
    SET_LO8(eax, MEM8(ecx + 0x10));
    MEM8(ecx + 0x10) = LO8(edx);
    MEM8(ebx + 0x10) = LO8(eax);

loc_000E6F3F: ;
    eax = MEM32(esp + 0x64);
    SET_LO8(ecx, MEM8(eax + 0x10));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E704D; /* jne: not equal / not zero */

loc_000E6F50: ;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E704A; /* je: equal / zero */

loc_000E6F5C: ;
    /* nop */

loc_000E6F60: ;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x10), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E704A; /* jne: not equal / not zero */

loc_000E6F69: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6FD4; /* jne: not equal / not zero */

loc_000E6F6F: ;
    ecx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(ecx + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6F8B; /* jne: not equal / not zero */

loc_000E6F79: ;
    MEM8(ecx + 0x10) = LO8(ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esi + 0x10) = 0;
    PUSH32(esp, 0x000E6F88u); RECOMP_ABI_CALL(0x00028030u, sub_00028030); /* call 0x00028030 */

loc_000E6F88: ;
    ecx = MEM32(esi + 8);

loc_000E6F8B: ;
    SET_LO8(eax, MEM8(ecx + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7006; /* jne: not equal / not zero */

loc_000E6F92: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x10), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6FA1; /* jne: not equal / not zero */

loc_000E6F99: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7002; /* je: equal / zero */

loc_000E6FA1: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x10), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6FBB; /* jne: not equal / not zero */

loc_000E6FA9: ;
    eax = MEM32(ecx);
    MEM8(eax + 0x10) = LO8(ebx);
    PUSH32(esp, ebp);
    MEM8(ecx + 0x10) = 0;
    PUSH32(esp, 0x000E6FB8u); RECOMP_ABI_CALL(0x00028090u, sub_00028090); /* call 0x00028090 */

loc_000E6FB8: ;
    ecx = MEM32(esi + 8);

loc_000E6FBB: ;
    SET_LO8(edx, MEM8(esi + 0x10));
    MEM8(ecx + 0x10) = LO8(edx);
    MEM8(esi + 0x10) = LO8(ebx);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(eax + 0x10) = LO8(ebx);
    PUSH32(esp, 0x000E6FD2u); RECOMP_ABI_CALL(0x00028030u, sub_00028030); /* call 0x00028030 */

loc_000E6FD2: ;
    goto loc_000E704A;

loc_000E6FD4: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6FEC; /* jne: not equal / not zero */

loc_000E6FDB: ;
    MEM8(ecx + 0x10) = LO8(ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esi + 0x10) = 0;
    PUSH32(esp, 0x000E6FEAu); RECOMP_ABI_CALL(0x00028090u, sub_00028090); /* call 0x00028090 */

loc_000E6FEA: ;
    ecx = MEM32(esi);

loc_000E6FEC: ;
    SET_LO8(eax, MEM8(ecx + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7006; /* jne: not equal / not zero */

loc_000E6FF3: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x10), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E701B; /* jne: not equal / not zero */

loc_000E6FFB: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E701B; /* jne: not equal / not zero */

loc_000E7002: ;
    MEM8(ecx + 0x10) = 0;

loc_000E7006: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000E6F60; /* jne: not equal / not zero */

loc_000E7019: ;
    goto loc_000E704A;

loc_000E701B: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x10), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7034; /* jne: not equal / not zero */

loc_000E7022: ;
    eax = MEM32(ecx + 8);
    MEM8(eax + 0x10) = LO8(ebx);
    PUSH32(esp, ebp);
    MEM8(ecx + 0x10) = 0;
    PUSH32(esp, 0x000E7032u); RECOMP_ABI_CALL(0x00028030u, sub_00028030); /* call 0x00028030 */

loc_000E7032: ;
    ecx = MEM32(esi);

loc_000E7034: ;
    SET_LO8(edx, MEM8(esi + 0x10));
    MEM8(ecx + 0x10) = LO8(edx);
    MEM8(esi + 0x10) = LO8(ebx);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(eax + 0x10) = LO8(ebx);
    PUSH32(esp, 0x000E704Au); RECOMP_ABI_CALL(0x00028090u, sub_00028090); /* call 0x00028090 */

loc_000E704A: ;
    MEM8(edi + 0x10) = LO8(ebx);

loc_000E704D: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000E705D; /* jne: not equal / not zero */

loc_000E7058: ;
    PUSH32(esp, 0x000E705Du); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000E705D: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E7069u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E7066u); } /* indirect call */
    }

loc_000E7069: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E7074; /* jbe: below or equal (unsigned <=) */

loc_000E7070: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;

loc_000E7074: ;
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x4C);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E70A0
 * Original: 0x000E70A0 - 0x000E70E8 (72 bytes, 32 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E70A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E70A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000E70E2; /* jne: not equal / not zero */

loc_000E70B2: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000E70BDu); RECOMP_ABI_CALL(0x000E70A0u, sub_000E70A0); /* call 0x000E70A0 */

loc_000E70BD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E70D9; /* je: equal / zero */

loc_000E70C3: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E70D1; /* jne: not equal / not zero */

loc_000E70CC: ;
    PUSH32(esp, 0x000E70D1u); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000E70D1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E70D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E70D6u); } /* indirect call */
    }

loc_000E70D9: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E70B2; /* je: equal / zero */

loc_000E70E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E70F0
 * Original: 0x000E70F0 - 0x000E710D (29 bytes, 11 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E70F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E70F0: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x11));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E710C; /* jne: not equal / not zero */

loc_000E70FA: ;
    /* nop */

loc_000E7100: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x11));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7100; /* je: equal / zero */

loc_000E710C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7110
 * Original: 0x000E7110 - 0x000E713A (42 bytes, 8 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7110(void)
{

loc_000E7110: ;
    ecx = MEM32(0x91F104);
    eax = MEM32(0x91F108);
    edx = MEM32(0x91F10C);
    MEM32(0x91F108) = ecx;
    ecx = MEM32(0x91F0F8);
    MEM32(0x91F110) = edx;
    MEMF(eax + ecx * 4 + 0x2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7140
 * Original: 0x000E7140 - 0x000E7198 (88 bytes, 26 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E7140: ;
    ecx = MEM32(0x91EE0C);
    eax = MEM32(ecx + 0x50);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E715B; /* je: equal / zero */

loc_000E7151: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E715B; /* je: equal / zero */

loc_000E7156: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E7188; /* jne: not equal / not zero */

loc_000E715B: ;
    eax = MEM32(ecx);
    edx = MEM32(0x91F078);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(MEM32(0x91F07C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM64(esp)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586748)); /* fmul dword ptr [0x586748] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E7188: ;
    fp_push(MEMF(0x91F098)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x91F120)); /* fsub dword ptr [0x91f120] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E71A0
 * Original: 0x000E71A0 - 0x000E71BE (30 bytes, 11 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E71A0(void)
{
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

loc_000E71A0: ;
    PUSH32(esp, 0x000E71A5u); RECOMP_ABI_CALL(0x000E7140u, sub_000E7140); /* call 0x000E7140 */

loc_000E71A5: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000E71BB; /* jb: below (unsigned <) */

loc_000E71B5: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000E71BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E71C0
 * Original: 0x000E71C0 - 0x000E71F3 (51 bytes, 12 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E71C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E71C0: ;
    eax = MEM32(0x91F10C);
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E71DE; /* je: equal / zero */

loc_000E71CC: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x84266C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    esp += 4; return; /* ret */

loc_000E71DE: ;
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x84266C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7200
 * Original: 0x000E7200 - 0x000E727E (126 bytes, 25 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000E7200: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E7215; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000E7208: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x59FD1C) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000E7215: ;
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(0x59FD1C) = xmm2.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000E7239; /* jp: parity */

loc_000E7236: ;
    xmm4 = xmm1; /* movaps */

loc_000E7239: ;
    xmm3 = XMM_SCALAR(MEMF(0x59A51C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x59A524)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x59A520); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(0x59A520) = xmm0.f[0]; /* movss */
    MEMF(0x59A524) = xmm2.f[0]; /* movss */
    MEMF(0x59A51C) = xmm1.f[0]; /* movss */
    MEMF(0x59A528) = xmm4.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7280
 * Original: 0x000E7280 - 0x000E72B8 (56 bytes, 12 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7280: ;
    eax = MEM32(0x91F080);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E72B1; /* jne: not equal / not zero */

loc_000E7289: ;
    ecx = MEM32(0x952CF0);
    edx = MEM32(0x952CF4);
    xmm0 = XMM_SCALAR(MEMF(0x91F098)); /* movss */
    MEMF(0x5A2960) = xmm0.f[0]; /* movss */
    MEM32(0x59FCE8) = ecx;
    MEM32(0x59FCEC) = edx;

loc_000E72B1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x91F080) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000E72C0
 * Original: 0x000E72C0 - 0x000E73B2 (242 bytes, 69 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E72C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E72C0: ;
    eax = MEM32(0x91F080);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E73A7; /* jne: not equal / not zero */

loc_000E72CE: ;
    ecx = MEM32(0x952CF0);
    edx = MEM32(0x952CF4);
    xmm0 = XMM_SCALAR(MEMF(0x91F098)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x59FCEC);
    PUSH32(esp, ebp);
    ebp = MEM32(0x91F078);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x5A2960); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x91F120); /* addss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x59FCE8);
    eax = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edx;
    { uint64_t _t = (uint64_t)(esi) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(eax)) >> 32) & 1);
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F078) = ebp;
    ebp = MEM32(0x91F07C);
    { uint64_t _t = (uint64_t)(ebp) + (uint64_t)(esi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x91F07C) = ebp;
    ebp = MEM32(0x952D18);
    esi = edx;
    { uint64_t _t = (uint64_t)(esi) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(eax)) >> 32) & 1);
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x952D1C);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(esi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    esi = MEM32(0x91EE0C);
    MEM32(0x952D18) = ebp;
    MEM32(0x952D1C) = eax;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(0x91F120) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7368; /* je: equal / zero */

loc_000E735E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7368; /* je: equal / zero */

loc_000E7363: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E737A; /* jne: not equal / not zero */

loc_000E7368: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esi);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(esi) = edi;
    MEM32(esi + 4) = eax;

loc_000E737A: ;
    xmm0 = XMM_SCALAR(MEMF(0x586648)); /* movss */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(0x59FCE8) = eax;
    MEM32(0x59FCEC) = eax;
    eax = MEM32(0x91F080);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(0x5A2960) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    MEM32(0x91F080) = eax;
    esp += 4; return; /* ret */

loc_000E73A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000E73B1; /* jle: less or equal (signed <=) */

loc_000E73AB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x91F080) = eax;

loc_000E73B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E73C0
 * Original: 0x000E73C0 - 0x000E7401 (65 bytes, 31 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E73C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E73C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E73D7u); RECOMP_ABI_CALL(0x000E7D30u, sub_000E7D30); /* call 0x000E7D30 */

loc_000E73D7: ;
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E73F6; /* je: equal / zero */

loc_000E73E0: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E73EE; /* jne: not equal / not zero */

loc_000E73E9: ;
    PUSH32(esp, 0x000E73EEu); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000E73EE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E73F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E73F3u); } /* indirect call */
    }

loc_000E73F6: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E7410
 * Original: 0x000E7410 - 0x000E74FE (238 bytes, 69 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7410(void)
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

loc_000E7410: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x952D48);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E74F9; /* je: equal / zero */

loc_000E7427: ;
    PUSH32(esp, edi);
    goto loc_000E7430;

    /* nop */

loc_000E7430: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000E7453; /* je: equal / zero */

loc_000E7441: ;
    xmm1 = XMM_SCALAR(MEMF(0x91F09C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x91F120); /* subss */
    goto loc_000E7462;

loc_000E7453: ;
    PUSH32(esp, 0x000E7458u); RECOMP_ABI_CALL(0x000E7140u, sub_000E7140); /* call 0x000E7140 */

loc_000E7458: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_000E7462: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E7487; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000E746C: ;
    edx = esp + 8;
    PUSH32(esp, 0x000E7475u); RECOMP_ABI_CALL(0x00037660u, sub_00037660); /* call 0x00037660 */

loc_000E7475: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x952D44);
    PUSH32(esp, 0x000E7485u); RECOMP_ABI_CALL(0x000E77E0u, sub_000E77E0); /* call 0x000E77E0 */

loc_000E7485: ;
    goto loc_000E74E8;

loc_000E7487: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000E749A; /* jp: parity */

loc_000E7493: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E749A: ;
    xmm3 = XMM_SCALAR(MEMF(0x586750)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E74D1; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000E74AB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_000E74CA; /* je: equal / zero */

loc_000E74B3: ;
    PUSH32(esp, 0x000E74B8u); RECOMP_ABI_CALL(0x00037660u, sub_00037660); /* call 0x00037660 */

loc_000E74B8: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x952D44);
    PUSH32(esp, 0x000E74C8u); RECOMP_ABI_CALL(0x000E77E0u, sub_000E77E0); /* call 0x000E77E0 */

loc_000E74C8: ;
    goto loc_000E74E8;

loc_000E74CA: ;
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    goto loc_000E74E3;

loc_000E74D1: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E74DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E74D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E74DF; /* je: equal / zero */

loc_000E74DA: ;
    MEMF(esi + 0x18) = xmm2.f[0]; /* movss */

loc_000E74DF: ;
    edx = esp + 8;

loc_000E74E3: ;
    PUSH32(esp, 0x000E74E8u); RECOMP_ABI_CALL(0x00037660u, sub_00037660); /* call 0x00037660 */

loc_000E74E8: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x952D48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x952D48) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7430; /* jne: not equal / not zero */

loc_000E74F8: ;
    POP32(esp, edi);

loc_000E74F9: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E7500
 * Original: 0x000E7500 - 0x000E75A8 (168 bytes, 40 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7500: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x91F09C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x91F120); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    eax = 1;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, ebx);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 8;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ebx = esp + 0x24;
    eax = 0x952D44;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x000E7576u); RECOMP_ABI_CALL(0x000E7720u, sub_000E7720); /* call 0x000E7720 */

loc_000E7576: ;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = MEM32(eax);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000E75A4; /* jne: not equal / not zero */

loc_000E7580: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x1C) = 1;
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */

loc_000E75A4: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E75B0
 * Original: 0x000E75B0 - 0x000E7657 (167 bytes, 54 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E75B0(void)
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

loc_000E75B0: ;
    edx = MEM32(0x952D48);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x21));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000E75DB; /* jne: not equal / not zero */

loc_000E75C6: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E75D0; /* jge: greater or equal (signed >=) */

loc_000E75CB: ;
    eax = MEM32(eax + 8);
    goto loc_000E75D4;

loc_000E75D0: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000E75D4: ;
    SET_LO8(ebx, MEM8(eax + 0x21));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E75C6; /* je: equal / zero */

loc_000E75DB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 4) = ecx;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000E75EE; /* je: equal / zero */

loc_000E75E4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E75EE; /* jl: less (signed <) */

loc_000E75E9: ;
    eax = esp;
    goto loc_000E75F6;

loc_000E75EE: ;
    MEM32(esp + 4) = edx;
    eax = esp + 4;

loc_000E75F6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E764B; /* je: equal / zero */

loc_000E75FC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x586638); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000E764B; /* jp: parity */

loc_000E760E: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7637; /* je: equal / zero */

loc_000E761F: ;
    xmm1 = XMM_SCALAR(MEMF(0x91F09C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x91F120); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E7637: ;
    PUSH32(esp, 0x000E763Cu); RECOMP_ABI_CALL(0x000E7140u, sub_000E7140); /* call 0x000E7140 */

loc_000E763C: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp) - fp_top()); /* fsubr dword ptr [esp] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E764B: ;
    xmm0 = XMM_SCALAR(MEMF(0x586750)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E7660
 * Original: 0x000E7660 - 0x000E76E6 (134 bytes, 48 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7660(void)
{
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

loc_000E7660: ;
    edx = MEM32(0x952D48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edx + 4);
    SET_LO8(ebx, MEM8(eax + 0x21));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000E7695; /* jne: not equal / not zero */

loc_000E7679: ;
    /* nop */

loc_000E7680: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E768A; /* jge: greater or equal (signed >=) */

loc_000E7685: ;
    eax = MEM32(eax + 8);
    goto loc_000E768E;

loc_000E768A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000E768E: ;
    SET_LO8(ebx, MEM8(eax + 0x21));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7680; /* je: equal / zero */

loc_000E7695: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E76A8; /* je: equal / zero */

loc_000E769D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E76A8; /* jl: less (signed <) */

loc_000E76A2: ;
    eax = esp + 8;
    goto loc_000E76B0;

loc_000E76A8: ;
    MEM32(esp + 0xC) = edx;
    eax = esp + 0xC;

loc_000E76B0: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E76E0; /* je: equal / zero */

loc_000E76B6: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E76D8; /* je: equal / zero */

loc_000E76BD: ;
    xmm0 = XMM_SCALAR(MEMF(0x91F09C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x91F120); /* subss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E76D8: ;
    PUSH32(esp, 0x000E76DDu); RECOMP_ABI_CALL(0x000E7140u, sub_000E7140); /* call 0x000E7140 */

loc_000E76DD: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_000E76E0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E76F0
 * Original: 0x000E76F0 - 0x000E7717 (39 bytes, 12 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E76F0(void)
{

loc_000E76F0: ;
    PUSH32(esp, 0x000E76F5u); RECOMP_ABI_CALL(0x000E7EC0u, sub_000E7EC0); /* call 0x000E7EC0 */

loc_000E76F5: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x21) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7720
 * Original: 0x000E7720 - 0x000E77D5 (181 bytes, 78 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E7720: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x21));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, 1);
    MEM8(esp + 0xC) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000E775D; /* jne: not equal / not zero */

loc_000E773D: ;
    edx = MEM32(ebx);
    /* nop */

loc_000E7740: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = eax;
    MEM8(esp + 0xC) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7754; /* je: equal / zero */

loc_000E7750: ;
    eax = MEM32(eax);
    goto loc_000E7757;

loc_000E7754: ;
    eax = MEM32(eax + 8);

loc_000E7757: ;
    _fa = (uint32_t)(MEM8(eax + 0x21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x21), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7740; /* je: equal / zero */

loc_000E775D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E779B; /* je: equal / zero */

loc_000E7767: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E778E; /* jne: not equal / not zero */

loc_000E776E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E777Cu); RECOMP_ABI_CALL(0x000E7AB0u, sub_000E7AB0); /* call 0x000E7AB0 */

loc_000E777C: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000E778E: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x000E7797u); RECOMP_ABI_CALL(0x000E7E10u, sub_000E7E10); /* call 0x000E7E10 */

loc_000E7797: ;
    eax = MEM32(esp + 0x14);

loc_000E779B: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E77C5; /* jge: greater or equal (signed >=) */

loc_000E77A2: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E77B3u); RECOMP_ABI_CALL(0x000E7AB0u, sub_000E7AB0); /* call 0x000E7AB0 */

loc_000E77B3: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000E77C5: ;
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
 * sub_000E77E0
 * Original: 0x000E77E0 - 0x000E7AA1 (705 bytes, 248 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E77E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E77E0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48D368);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = esp;
    SET_LO8(ecx, MEM8(eax + 0x21));
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7855; /* je: equal / zero */

loc_000E7809: ;
    PUSH32(esp, 0x1B);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x57FA78);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x000E782Cu); RECOMP_ABI_CALL(0x00019200u, sub_00019200); /* call 0x00019200 */

loc_000E782C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0x58) = esi;
    PUSH32(esp, 0x000E783Eu); RECOMP_ABI_CALL(0x00018D10u, sub_00018D10); /* call 0x00018D10 */

loc_000E783E: ;
    PUSH32(esp, 0x589F50);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x57FA70;
    PUSH32(esp, 0x000E7855u); RECOMP_ABI_CALL(0x004816B1u, sub_004816B1); /* call 0x004816B1 */

loc_000E7855: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, edi);
    edx = esp + 0x6C;
    MEM32(esp + 0x64) = ebx;
    PUSH32(esp, 0x000E7866u); RECOMP_ABI_CALL(0x00037660u, sub_00037660); /* call 0x00037660 */

loc_000E7866: ;
    eax = MEM32(ebx);
    SET_LO8(ecx, MEM8(eax + 0x21));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7874; /* je: equal / zero */

loc_000E786F: ;
    edi = MEM32(ebx + 8);
    goto loc_000E788D;

loc_000E7874: ;
    edx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(edx + 0x21));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7882; /* je: equal / zero */

loc_000E787E: ;
    edi = eax;
    goto loc_000E788D;

loc_000E7882: ;
    ecx = MEM32(esp + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000E78F7; /* jne: not equal / not zero */

loc_000E788D: ;
    SET_LO8(eax, MEM8(edi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000E789A; /* jne: not equal / not zero */

loc_000E7897: ;
    MEM32(edi + 4) = esi;

loc_000E789A: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E78A7; /* jne: not equal / not zero */

loc_000E78A2: ;
    MEM32(eax + 4) = edi;
    goto loc_000E78B2;

loc_000E78A7: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E78AF; /* jne: not equal / not zero */

loc_000E78AB: ;
    MEM32(esi) = edi;
    goto loc_000E78B2;

loc_000E78AF: ;
    MEM32(esi + 8) = edi;

loc_000E78B2: ;
    ebx = MEM32(ebp + 4);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x64) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E78D1; /* jne: not equal / not zero */

loc_000E78BD: ;
    SET_LO8(eax, MEM8(edi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E78C8; /* je: equal / zero */

loc_000E78C4: ;
    eax = esi;
    goto loc_000E78CF;

loc_000E78C8: ;
    eax = edi;
    PUSH32(esp, 0x000E78CFu); RECOMP_ABI_CALL(0x000375A0u, sub_000375A0); /* call 0x000375A0 */

loc_000E78CF: ;
    MEM32(ebx) = eax;

loc_000E78D1: ;
    ebx = MEM32(ebp + 4);
    ecx = MEM32(esp + 0x64);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E794F; /* jne: not equal / not zero */

loc_000E78DD: ;
    SET_LO8(eax, MEM8(edi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E78EB; /* je: equal / zero */

loc_000E78E4: ;
    eax = esi;
    MEM32(ebx + 8) = eax;
    goto loc_000E794F;

loc_000E78EB: ;
    eax = edi;
    PUSH32(esp, 0x000E78F2u); RECOMP_ABI_CALL(0x000E7CB0u, sub_000E7CB0); /* call 0x000E7CB0 */

loc_000E78F2: ;
    MEM32(ebx + 8) = eax;
    goto loc_000E794F;

loc_000E78F7: ;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebx);
    MEM32(ecx) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7907; /* jne: not equal / not zero */

loc_000E7903: ;
    esi = ecx;
    goto loc_000E7922;

loc_000E7907: ;
    SET_LO8(eax, MEM8(edi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000E7914; /* jne: not equal / not zero */

loc_000E7911: ;
    MEM32(edi + 4) = esi;

loc_000E7914: ;
    MEM32(esi) = edi;
    eax = MEM32(ebx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(ebx + 8);
    MEM32(edx + 4) = ecx;

loc_000E7922: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E792F; /* jne: not equal / not zero */

loc_000E792A: ;
    MEM32(eax + 4) = ecx;
    goto loc_000E793D;

loc_000E792F: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E793A; /* jne: not equal / not zero */

loc_000E7936: ;
    MEM32(eax) = ecx;
    goto loc_000E793D;

loc_000E793A: ;
    MEM32(eax + 8) = ecx;

loc_000E793D: ;
    eax = MEM32(ebx + 4);
    MEM32(ecx + 4) = eax;
    SET_LO8(edx, MEM8(ebx + 0x20));
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(ecx + 0x20) = LO8(edx);
    MEM8(ebx + 0x20) = LO8(eax);

loc_000E794F: ;
    eax = MEM32(esp + 0x64);
    SET_LO8(ecx, MEM8(eax + 0x20));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A5D; /* jne: not equal / not zero */

loc_000E7960: ;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7A5A; /* je: equal / zero */

loc_000E796C: ;
    /* nop */

loc_000E7970: ;
    _fa = (uint32_t)(MEM8(edi + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x20), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A5A; /* jne: not equal / not zero */

loc_000E7979: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E79E4; /* jne: not equal / not zero */

loc_000E797F: ;
    ecx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E799B; /* jne: not equal / not zero */

loc_000E7989: ;
    MEM8(ecx + 0x20) = LO8(ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esi + 0x20) = 0;
    PUSH32(esp, 0x000E7998u); RECOMP_ABI_CALL(0x000E7C50u, sub_000E7C50); /* call 0x000E7C50 */

loc_000E7998: ;
    ecx = MEM32(esi + 8);

loc_000E799B: ;
    SET_LO8(eax, MEM8(ecx + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A16; /* jne: not equal / not zero */

loc_000E79A2: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x20), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E79B1; /* jne: not equal / not zero */

loc_000E79A9: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x20), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7A12; /* je: equal / zero */

loc_000E79B1: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x20), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E79CB; /* jne: not equal / not zero */

loc_000E79B9: ;
    eax = MEM32(ecx);
    MEM8(eax + 0x20) = LO8(ebx);
    PUSH32(esp, ebp);
    MEM8(ecx + 0x20) = 0;
    PUSH32(esp, 0x000E79C8u); RECOMP_ABI_CALL(0x000E7CD0u, sub_000E7CD0); /* call 0x000E7CD0 */

loc_000E79C8: ;
    ecx = MEM32(esi + 8);

loc_000E79CB: ;
    SET_LO8(edx, MEM8(esi + 0x20));
    MEM8(ecx + 0x20) = LO8(edx);
    MEM8(esi + 0x20) = LO8(ebx);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(eax + 0x20) = LO8(ebx);
    PUSH32(esp, 0x000E79E2u); RECOMP_ABI_CALL(0x000E7C50u, sub_000E7C50); /* call 0x000E7C50 */

loc_000E79E2: ;
    goto loc_000E7A5A;

loc_000E79E4: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E79FC; /* jne: not equal / not zero */

loc_000E79EB: ;
    MEM8(ecx + 0x20) = LO8(ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esi + 0x20) = 0;
    PUSH32(esp, 0x000E79FAu); RECOMP_ABI_CALL(0x000E7CD0u, sub_000E7CD0); /* call 0x000E7CD0 */

loc_000E79FA: ;
    ecx = MEM32(esi);

loc_000E79FC: ;
    SET_LO8(eax, MEM8(ecx + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A16; /* jne: not equal / not zero */

loc_000E7A03: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x20), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A2B; /* jne: not equal / not zero */

loc_000E7A0B: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x20), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A2B; /* jne: not equal / not zero */

loc_000E7A12: ;
    MEM8(ecx + 0x20) = 0;

loc_000E7A16: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000E7970; /* jne: not equal / not zero */

loc_000E7A29: ;
    goto loc_000E7A5A;

loc_000E7A2B: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x20), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A44; /* jne: not equal / not zero */

loc_000E7A32: ;
    eax = MEM32(ecx + 8);
    MEM8(eax + 0x20) = LO8(ebx);
    PUSH32(esp, ebp);
    MEM8(ecx + 0x20) = 0;
    PUSH32(esp, 0x000E7A42u); RECOMP_ABI_CALL(0x000E7C50u, sub_000E7C50); /* call 0x000E7C50 */

loc_000E7A42: ;
    ecx = MEM32(esi);

loc_000E7A44: ;
    SET_LO8(edx, MEM8(esi + 0x20));
    MEM8(ecx + 0x20) = LO8(edx);
    MEM8(esi + 0x20) = LO8(ebx);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(eax + 0x20) = LO8(ebx);
    PUSH32(esp, 0x000E7A5Au); RECOMP_ABI_CALL(0x000E7CD0u, sub_000E7CD0); /* call 0x000E7CD0 */

loc_000E7A5A: ;
    MEM8(edi + 0x20) = LO8(ebx);

loc_000E7A5D: ;
    eax = MEM32(0x5E1EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000E7A6D; /* jne: not equal / not zero */

loc_000E7A68: ;
    PUSH32(esp, 0x000E7A6Du); RECOMP_ABI_CALL(0x000B5260u, sub_000B5260); /* call 0x000B5260 */

loc_000E7A6D: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E7A79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E7A76u); } /* indirect call */
    }

loc_000E7A79: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E7A84; /* jbe: below or equal (unsigned <=) */

loc_000E7A80: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;

loc_000E7A84: ;
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x4C);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E7AB0
 * Original: 0x000E7AB0 - 0x000E7C4E (414 bytes, 138 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E7AB0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48D368);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCCCCCCB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCCCCCCB (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    if (CMP_B(_fa, _fb)) goto loc_000E7B24; /* jb: below (unsigned <) */

loc_000E7AD8: ;
    PUSH32(esp, 0x13);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x57FB5C);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x000E7AFBu); RECOMP_ABI_CALL(0x00019200u, sub_00019200); /* call 0x00019200 */

loc_000E7AFB: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0x58) = esi;
    PUSH32(esp, 0x000E7B0Du); RECOMP_ABI_CALL(0x00018D10u, sub_00018D10); /* call 0x00018D10 */

loc_000E7B0D: ;
    PUSH32(esp, 0x589F8C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x57FA70;
    PUSH32(esp, 0x000E7B24u); RECOMP_ABI_CALL(0x004816B1u, sub_004816B1); /* call 0x004816B1 */

loc_000E7B24: ;
    eax = MEM32(edi + 4);
    esi = MEM32(esp + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E7B35u); RECOMP_ABI_CALL(0x000E7DB0u, sub_000E7DB0); /* call 0x000E7DB0 */

loc_000E7B35: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000E7B56; /* jne: not equal / not zero */

loc_000E7B49: ;
    MEM32(eax + 4) = esi;
    edx = MEM32(edi + 4);
    MEM32(edx) = esi;
    eax = MEM32(edi + 4);
    goto loc_000E7B77;

loc_000E7B56: ;
    SET_LO8(eax, MEM8(esp + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7B6C; /* je: equal / zero */

loc_000E7B5E: ;
    MEM32(ebp) = esi;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7B7A; /* jne: not equal / not zero */

loc_000E7B68: ;
    MEM32(eax) = esi;
    goto loc_000E7B7A;

loc_000E7B6C: ;
    MEM32(ebp + 8) = esi;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7B7A; /* jne: not equal / not zero */

loc_000E7B77: ;
    MEM32(eax + 8) = esi;

loc_000E7B7A: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_000E7C2B; /* jne: not equal / not zero */

loc_000E7B8E: ;
    edi = edi;

loc_000E7B90: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BE8; /* jne: not equal / not zero */

loc_000E7B9C: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x20), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BBD; /* jne: not equal / not zero */

loc_000E7BA5: ;
    ecx = MEM32(eax);
    MEM8(ecx + 0x20) = LO8(ebx);
    MEM8(edx + 0x20) = LO8(ebx);
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x20) = 0;
    edx = MEM32(eax);
    esi = MEM32(edx + 4);
    goto loc_000E7C16;

loc_000E7BBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BCA; /* jne: not equal / not zero */

loc_000E7BC2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E7BCAu); RECOMP_ABI_CALL(0x000E7C50u, sub_000E7C50); /* call 0x000E7C50 */

loc_000E7BCA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x20) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x20) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E7BE6u); RECOMP_ABI_CALL(0x000E7CD0u, sub_000E7CD0); /* call 0x000E7CD0 */

loc_000E7BE6: ;
    goto loc_000E7C16;

loc_000E7BE8: ;
    _fa = (uint32_t)(MEM8(edx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7BA5; /* je: equal / zero */

loc_000E7BEE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BFA; /* jne: not equal / not zero */

loc_000E7BF2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E7BFAu); RECOMP_ABI_CALL(0x000E7CD0u, sub_000E7CD0); /* call 0x000E7CD0 */

loc_000E7BFA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x20) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x20) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E7C16u); RECOMP_ABI_CALL(0x000E7C50u, sub_000E7C50); /* call 0x000E7C50 */

loc_000E7C16: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000E7B90; /* je: equal / zero */

loc_000E7C27: ;
    esi = MEM32(esp + 0x68);

loc_000E7C2B: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    ecx = MEM32(esp + 0x50);
    MEM8(eax + 0x20) = LO8(ebx);
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
 * sub_000E7B90
 * Original: 0x000E7B90 - 0x000E7C4E (190 bytes, 66 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E7B90: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BE8; /* jne: not equal / not zero */

loc_000E7B9C: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x20), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BBD; /* jne: not equal / not zero */

loc_000E7BA5: ;
    ecx = MEM32(eax);
    MEM8(ecx + 0x20) = LO8(ebx);
    MEM8(edx + 0x20) = LO8(ebx);
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x20) = 0;
    edx = MEM32(eax);
    esi = MEM32(edx + 4);
    goto loc_000E7C16;

loc_000E7BBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BCA; /* jne: not equal / not zero */

loc_000E7BC2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E7BCAu); RECOMP_ABI_CALL(0x000E7C50u, sub_000E7C50); /* call 0x000E7C50 */

loc_000E7BCA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x20) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x20) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E7BE6u); RECOMP_ABI_CALL(0x000E7CD0u, sub_000E7CD0); /* call 0x000E7CD0 */

loc_000E7BE6: ;
    goto loc_000E7C16;

loc_000E7BE8: ;
    _fa = (uint32_t)(MEM8(edx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7BA5; /* je: equal / zero */

loc_000E7BEE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BFA; /* jne: not equal / not zero */

loc_000E7BF2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E7BFAu); RECOMP_ABI_CALL(0x000E7CD0u, sub_000E7CD0); /* call 0x000E7CD0 */

loc_000E7BFA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x20) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x20) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E7C16u); RECOMP_ABI_CALL(0x000E7C50u, sub_000E7C50); /* call 0x000E7C50 */

loc_000E7C16: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000E7B90; /* je: equal / zero */

loc_000E7C27: ;
    esi = MEM32(esp + 0x68);
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    ecx = MEM32(esp + 0x50);
    MEM8(eax + 0x20) = LO8(ebx);
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
 * sub_000E7C16
 * Original: 0x000E7C16 - 0x000E7C4E (56 bytes, 18 insns)
 * Folder: main (between: 0x000E6DD0 and 0x000E7C50)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7C16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E7C16: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000E7B90(); return; } /* je: equal / zero */

loc_000E7C27: ;
    esi = MEM32(esp + 0x68);
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    ecx = MEM32(esp + 0x50);
    MEM8(eax + 0x20) = LO8(ebx);
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
 * sub_000E7C50
 * Original: 0x000E7C50 - 0x000E7CA1 (81 bytes, 33 insns)
 * Folder: main (match: xbox-retail 0x000207E0, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7C50: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x21));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7C65; /* jne: not equal / not zero */

loc_000E7C62: ;
    MEM32(edx + 4) = ecx;

loc_000E7C65: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7C83; /* jne: not equal / not zero */

loc_000E7C77: ;
    MEM32(edx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E7C83: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7C95; /* jne: not equal / not zero */

loc_000E7C8A: ;
    MEM32(edx) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E7C95: ;
    MEM32(edx + 8) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E7CB0
 * Original: 0x000E7CB0 - 0x000E7CCD (29 bytes, 11 insns)
 * Folder: main (between: 0x000E7C50 and 0x000E7CD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7CB0: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x21));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7CCC; /* jne: not equal / not zero */

loc_000E7CBA: ;
    /* nop */

loc_000E7CC0: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x21));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7CC0; /* je: equal / zero */

loc_000E7CCC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7CD0
 * Original: 0x000E7CD0 - 0x000E7D25 (85 bytes, 33 insns)
 * Folder: main (match: xbox-retail 0x00020880, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7CD0: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x21));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7CE5; /* jne: not equal / not zero */

loc_000E7CE2: ;
    MEM32(edx + 4) = ecx;

loc_000E7CE5: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7D04; /* jne: not equal / not zero */

loc_000E7CF7: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E7D04: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7D19; /* jne: not equal / not zero */

loc_000E7D0C: ;
    MEM32(edx + 8) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E7D19: ;
    MEM32(edx) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003240D0
 * Original: 0x003240D0 - 0x0032429E (462 bytes, 116 insns)
 * Folder: main (string: e3_end.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003240D0(void)
{
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

loc_003240D0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91F10C);
    edx = MEM32(0x91F104);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x91F110);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x91F108);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edi + 0x18);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 4);
    ebx = MEM32(eax + 0x48);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    eax = MEM32(ebx + 0xFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x18) = edx;
    MEM32(0x91F110) = edi;
    MEM32(0x91F10C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00324254; /* je: equal / zero */

loc_0032412C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003241E4; /* je: equal / zero */

loc_00324135: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324270; /* jne: not equal / not zero */

loc_0032413E: ;
    PUSH32(esp, 0x00324143u); RECOMP_ABI_CALL(0x000E7140u, sub_000E7140); /* call 0x000E7140 */

loc_00324143: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x5BEED4);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    _fb = (uint32_t)(0x4A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4A8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x19);
    PUSH32(esp, eax);
    MEM32(ebx + 0xCC) = edx;
    PUSH32(esp, 0x00324166u); RECOMP_ABI_CALL(0x00394FB0u, sub_00394FB0); /* call 0x00394FB0 */

loc_00324166: ;
    eax = MEM32(0x5BEED4);
    eax = MEM32(eax + 0x4A8);
    ecx = 0xFF000000u;
    edi = 0x620C;
    edx = 0xD;
    PUSH32(esp, 0x00324185u); RECOMP_ABI_CALL(0x00395640u, sub_00395640); /* call 0x00395640 */

loc_00324185: ;
    edi = MEM32(0x5BEED4);
    eax = MEM32(edi + 0x4A8);
    PUSH32(esp, 0x3F000000);
    esi = 0x61A8;
    edx = 0xD;
    PUSH32(esp, 0x003241A5u); RECOMP_ABI_CALL(0x003957F0u, sub_003957F0); /* call 0x003957F0 */

loc_003241A5: ;
    eax = MEM32(edi + 0x4A8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    esi = 0x61AA;
    edx = 0xD;
    PUSH32(esp, 0x003241BFu); RECOMP_ABI_CALL(0x003957F0u, sub_003957F0); /* call 0x003957F0 */

loc_003241BF: ;
    eax = MEM32(edi + 0x4A8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x47C35000);
    esi = 0x61A9;
    edx = 0xD;
    PUSH32(esp, 0x003241DCu); RECOMP_ABI_CALL(0x003957F0u, sub_003957F0); /* call 0x003957F0 */

loc_003241DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00324270;

loc_003241E4: ;
    eax = MEM32(0x59FC94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324245; /* je: equal / zero */

loc_003241ED: ;
    eax = MEM32(0x59FCA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032421A; /* je: equal / zero */

loc_003241F7: ;
    ecx = MEM32(0x59FC98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032421A; /* je: equal / zero */

loc_00324201: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM32(eax * 4 + 0x5E3768) = 0;
    PUSH32(esp, 0x00324215u); RECOMP_ABI_CALL(0x000D63D0u, sub_000D63D0); /* call 0x000D63D0 */

loc_00324215: ;
    eax = MEM32(0x59FCA4);

loc_0032421A: ;
    ecx = MEM32(0x59FC94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324245; /* je: equal / zero */

loc_00324224: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324245; /* je: equal / zero */

loc_00324229: ;
    ecx = MEM32(0x59FC98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324245; /* je: equal / zero */

loc_00324233: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax * 4 + 0x5E3758) = 0;
    PUSH32(esp, 0x00324245u); RECOMP_ABI_CALL(0x000D6430u, sub_000D6430); /* call 0x000D6430 */

loc_00324245: ;
    edx = MEM32(ebx + 0xF0);
    eax = edi;
    PUSH32(esp, 0x00324252u); RECOMP_ABI_CALL(0x00324060u, sub_00324060); /* call 0x00324060 */

loc_00324252: ;
    goto loc_00324270;

loc_00324254: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x586410;
    PUSH32(esp, 0x0032426Du); RECOMP_ABI_CALL(0x000316F0u, sub_000316F0); /* call 0x000316F0 */

loc_0032426D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324270: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(0x91F110) = ecx;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(0x91F104) = edx;
    MEM32(0x91F108) = eax;
    MEM32(0x91F10C) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
