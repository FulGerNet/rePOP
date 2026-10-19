/**
 * PoP SoT xbox-demo - collision, chunk 0
 * Collision (Jade ENGine COLlision)
 * Functions: 25 (0x000568C3 - 0x0007A320)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000568C3
 * Original: 0x000568C3 - 0x00056C2E (875 bytes, 211 insns)
 * Folder: collision (source: COLMain.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000568C3(void)
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

loc_000568C3: ;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    edx = 1;
    goto loc_00056996;

loc_0005698A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00056996: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00056B44; /* je: equal / zero */

loc_0005699F: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00056A8D; /* je: equal / zero */

loc_000569A6: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000569D3; /* je: equal / zero */

loc_000569A9: ;
    PUSH32(esp, 0x323720);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x97);
    PUSH32(esp, 0x3236E8);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000569C7u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000569C7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000569D3: ;
    edx = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x30); /* addss */
    esi = MEM32(esi + 0xC);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x10); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x14); /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x30); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0xC);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    edx = esp + 0x24;
    eax = esp + 0x18;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00056A83u); RECOMP_ABI_CALL(0x000736B0u, sub_000736B0); /* call 0x000736B0 */

loc_00056A83: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00056A8D: ;
    edx = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x30); /* addss */
    esi = MEM32(esi + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x34); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x38); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x30); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    eax = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    edx = esp + 0x18;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00056B3Au); RECOMP_ABI_CALL(0x00073610u, sub_00073610); /* call 0x00073610 */

loc_00056B3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00056B44: ;
    edx = MEM32(edi + 0xC);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 8); /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x10); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x30); /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x14); /* addss */
    ecx = MEM32(esi + 0xC);
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 0x10); /* addss */
    xmm7.f[0] = xmm7.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x30); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) { g_seh_ebp = ebp; sub_00056814(); return; } /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00056BE1: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) { g_seh_ebp = ebp; sub_00056814(); return; } /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_00056BEA: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) { g_seh_ebp = ebp; sub_00056814(); return; } /* ja: above (unsigned >) (xmm4.f[0] vs xmm5.f[0]) */

loc_00056BF3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) { g_seh_ebp = ebp; sub_00056814(); return; } /* ja: above (unsigned >) (xmm0.f[0] vs xmm6.f[0]) */

loc_00056C02: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) { g_seh_ebp = ebp; sub_00056814(); return; } /* ja: above (unsigned >) (xmm0.f[0] vs xmm7.f[0]) */

loc_00056C11: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca > _fcb)) { g_seh_ebp = ebp; sub_00056814(); return; } /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_00056C22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00056C30
 * Original: 0x00056C30 - 0x000570EE (1214 bytes, 336 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00056C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x174;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00056C8C; /* je: equal / zero */

loc_00056C4C: ;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00056C80; /* jns: not sign (positive) */

loc_00056C53: ;
    edx = 0xFFFF;
    _fa = (uint32_t)(MEM16(ebx + 0xA)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xA), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056C80; /* je: equal / zero */

loc_00056C5E: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00056C83; /* jns: not sign (positive) */

loc_00056C68: ;
    _fa = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056C83; /* je: equal / zero */

loc_00056C6E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00056C8F; /* jne: not equal / not zero */

loc_00056C73: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00056C8F; /* jne: not equal / not zero */

loc_00056C77: ;
    MEM32(ebp + 0x18) = 0;
    goto loc_00056C8F;

loc_00056C80: ;
    esi = MEM32(ebp + 0xC);

loc_00056C83: ;
    MEM32(ebp + 0x18) = 0;
    goto loc_00056C8F;

loc_00056C8C: ;
    esi = MEM32(ebp + 0xC);

loc_00056C8F: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x80000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00056C9E; /* jne: not equal / not zero */

loc_00056C97: ;
    MEM32(ebp + 0x10) = 0;

loc_00056C9E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x80000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00056CAB; /* jne: not equal / not zero */

loc_00056CA6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x14) = edi;

loc_00056CAB: ;
    _fa = (uint32_t)(MEM8(ebx + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 4), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00056CC8; /* jne: not equal / not zero */

loc_00056CB1: ;
    eax = MEM32(ebp + 0x10);
    ecx = ebx;
    MEM32(ebp + 0x10) = edi;
    edi = eax;
    MEM32(ebp + 8) = esi;
    ebx = esi;
    MEM32(ebp + 0x14) = edi;
    MEM32(ebp + 0xC) = ecx;
    esi = ecx;

loc_00056CC8: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056D45; /* je: equal / zero */

loc_00056CCF: ;
    ecx = ZX16(MEM16(esi + 0xA));
    eax = MEM32(0x34AC38);
    edx = MEM32(eax + 0x2C);
    esi = MEM32(edx + 8);
    eax = ZX16(MEM16(ebx + 0xA));
    MEM32(esp + 0xC) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edx = eax;
    if (CMP_L(_fas, _fbs)) edx = ecx; /* cmovl */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = ecx; /* cmovg */
    ecx = eax + 1;
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FF);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
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
    _fa = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + eax * 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00056D3C; /* je: equal / zero */

loc_00056D26: ;
    ecx = MEM32(esp + 0xC);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM32(esi + eax * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + eax * 4 + 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00056D3C; /* je: equal / zero */

loc_00056D33: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4 + 4), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00056D56; /* jne: not equal / not zero */

loc_00056D3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056D45: ;
    eax = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00056D4Eu); RECOMP_ABI_CALL(0x00056530u, sub_00056530); /* call 0x00056530 */

loc_00056D4E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056D3C; /* je: equal / zero */

loc_00056D54: ;
    goto loc_00056D5E;

loc_00056D56: ;
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00056D5E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056D77; /* jne: not equal / not zero */

loc_00056D63: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00056F2E; /* jne: not equal / not zero */

loc_00056D6B: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00056D77: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056E66; /* je: equal / zero */

loc_00056D7F: ;
    edx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM8(edx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00056DD0; /* je: equal / zero */

loc_00056D88: ;
    eax = esp + 0xE0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056DA3; /* je: equal / zero */

loc_00056D93: ;
    ecx = 0x14;
    esi = edx;
    edi = eax;
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
    esi = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00056DA3: ;
    eax = MEM32(esp + 0x120);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xEC) = ecx;
    MEM32(esp + 0xFC) = ecx;
    MEM32(esp + 0x10C) = ecx;
    MEM32(esp + 0x120) = eax;
    edx = esp + 0xE0;

loc_00056DD0: ;
    eax = esp + 0x130;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00056DDCu); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_00056DDC: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00056E1F; /* je: equal / zero */

loc_00056DE5: ;
    ecx = esp + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056DFE; /* je: equal / zero */

loc_00056DF0: ;
    ecx = 0x14;
    edi = esp + 0x90;
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

loc_00056DFE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00056E33;

loc_00056E1F: ;
    edx = esp + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056E33; /* je: equal / zero */

loc_00056E2A: ;
    ecx = 0x14;
    edi = edx;
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

loc_00056E33: ;
    eax = esp + 0x130;
    PUSH32(esp, eax);
    edi = esp + 0x94;
    esi = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00056E4Bu); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_00056E4B: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ecx + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax + 0x3C;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = eax;
    goto loc_00056FF3;

loc_00056E66: ;
    ebx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM8(ebx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00056EA6; /* je: equal / zero */

loc_00056E6F: ;
    edx = esp + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056E87; /* je: equal / zero */

loc_00056E77: ;
    ecx = 0x14;
    esi = ebx;
    edi = edx;
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
    esi = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00056E87: ;
    eax = MEM32(esp + 0x80);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x80) = eax;
    goto loc_00056EBC;

loc_00056EA6: ;
    eax = esp + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056EBC; /* je: equal / zero */

loc_00056EAE: ;
    ecx = 0x14;
    esi = ebx;
    edi = eax;
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
    esi = MEM32(ebp + 0xC);

loc_00056EBC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xC); /* addss */
    edx = MEM32(ebp + 8);
    edi = MEM32(edx + 0x10);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x10); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x14); /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    ecx = esp + 0x28;
    MEM32(esp + 0xC) = ecx;
    goto loc_00056FE9;

loc_00056F2E: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00056F69; /* je: equal / zero */

loc_00056F37: ;
    eax = esp + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056F4A; /* je: equal / zero */

loc_00056F3F: ;
    ecx = 0x14;
    edi = eax;
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00056F4A: ;
    eax = MEM32(esp + 0x80);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x80) = eax;
    goto loc_00056F7C;

loc_00056F69: ;
    ecx = esp + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056F7C; /* je: equal / zero */

loc_00056F71: ;
    ecx = 0x14;
    edi = esp + 0x40;
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

loc_00056F7C: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xC); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x10); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x14); /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    edi = MEM32(eax + 0x10);
    edx = esp + 0x28;
    MEM32(esp + 0xC) = edx;

loc_00056FE9: ;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ebx = esp + 0x34;

loc_00056FF3: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x3C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x40); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x44); /* addss */
    esi = edi + 0x3C;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esp + 0x14;
    eax = esp + 0x44;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005704Fu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_0005704F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 8); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x60;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    eax = esp + 0x1C;
    esi = esp + 0x4C;
    edi = esp + 0x28;
    ecx = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000570E4u); RECOMP_ABI_CALL(0x00077120u, sub_00077120); /* call 0x00077120 */

loc_000570E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00056E31
 * Original: 0x00056E31 - 0x000570EE (701 bytes, 173 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056E31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056E31: ;
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
    eax = esp + 0x130;
    PUSH32(esp, eax);
    edi = esp + 0x94;
    esi = esp + 0x44;
    PUSH32(esp, 0x00056E4Bu); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_00056E4B: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ecx + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax + 0x3C;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = eax;
    goto loc_00056FF3;

    ebx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM8(ebx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00056EA6; /* je: equal / zero */

loc_00056E6F: ;
    edx = esp + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056E87; /* je: equal / zero */

loc_00056E77: ;
    ecx = 0x14;
    esi = ebx;
    edi = edx;
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
    esi = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00056E87: ;
    eax = MEM32(esp + 0x80);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x80) = eax;
    goto loc_00056EBC;

loc_00056EA6: ;
    eax = esp + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056EBC; /* je: equal / zero */

loc_00056EAE: ;
    ecx = 0x14;
    esi = ebx;
    edi = eax;
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
    esi = MEM32(ebp + 0xC);

loc_00056EBC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xC); /* addss */
    edx = MEM32(ebp + 8);
    edi = MEM32(edx + 0x10);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x10); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x14); /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    ecx = esp + 0x28;
    MEM32(esp + 0xC) = ecx;
    goto loc_00056FE9;

    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00056F69; /* je: equal / zero */

loc_00056F37: ;
    eax = esp + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056F4A; /* je: equal / zero */

loc_00056F3F: ;
    ecx = 0x14;
    edi = eax;
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00056F4A: ;
    eax = MEM32(esp + 0x80);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x80) = eax;
    goto loc_00056F7C;

loc_00056F69: ;
    ecx = esp + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00056F7C; /* je: equal / zero */

loc_00056F71: ;
    ecx = 0x14;
    edi = esp + 0x40;
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

loc_00056F7C: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xC); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x10); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x14); /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    edi = MEM32(eax + 0x10);
    edx = esp + 0x28;
    MEM32(esp + 0xC) = edx;

loc_00056FE9: ;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ebx = esp + 0x34;

loc_00056FF3: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x3C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x40); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x44); /* addss */
    esi = edi + 0x3C;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esp + 0x14;
    eax = esp + 0x44;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0005704Fu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_0005704F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 8); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x60;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    eax = esp + 0x1C;
    esi = esp + 0x4C;
    edi = esp + 0x28;
    ecx = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x000570E4u); RECOMP_ABI_CALL(0x00077120u, sub_00077120); /* call 0x00077120 */

loc_000570E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00056FC6
 * Original: 0x00056FC6 - 0x000570EE (296 bytes, 70 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00056FC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056FC6: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    edi = MEM32(eax + 0x10);
    edx = esp + 0x28;
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ebx = esp + 0x34;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x3C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x40); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x44); /* addss */
    esi = edi + 0x3C;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esp + 0x14;
    eax = esp + 0x44;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0005704Fu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_0005704F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 8); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x60;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    eax = esp + 0x1C;
    esi = esp + 0x4C;
    edi = esp + 0x28;
    ecx = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x000570E4u); RECOMP_ABI_CALL(0x00077120u, sub_00077120); /* call 0x00077120 */

loc_000570E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000570F0
 * Original: 0x000570F0 - 0x000571D2 (226 bytes, 72 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000570F0(void)
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

loc_000570F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x10);
    eax = MEM32(edi + 0x14);
    ebx = eax;
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000571A1; /* je: equal / zero */

loc_0005710A: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    xmm6 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000571CC; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00057172: ;
    _fca = xmm4.f[0]; _fcb = MEMF(edi + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_000571CC; /* ja: above (unsigned >) (xmm4.f[0] vs MEMF(edi + 0xC)) */

loc_00057178: ;
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000571CC; /* ja: above (unsigned >) (xmm2.f[0] vs xmm5.f[0]) */

loc_00057182: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x10); /* comiss */
    if ((_fca > _fcb)) goto loc_000571CC; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi + 0x10)) */

loc_00057188: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000571CC; /* ja: above (unsigned >) (xmm0.f[0] vs xmm6.f[0]) */

loc_00057192: ;
    _fca = xmm1.f[0]; _fcb = MEMF(edi + 0x14); /* comiss */
    if ((_fca > _fcb)) goto loc_000571CC; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(edi + 0x14)) */

loc_00057198: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000571A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000571CC; /* jne: not equal / not zero */

loc_000571A6: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000571CC; /* jne: not equal / not zero */

loc_000571AC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_000571CC; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi + 0xC)) */

loc_000571B7: ;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x000571C0u); RECOMP_ABI_CALL(0x0001EFF0u, sub_0001EFF0); /* call 0x0001EFF0 */

loc_000571C0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00057198; /* ja: above (unsigned >) */

loc_000571CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000571E0
 * Original: 0x000571E0 - 0x00057218 (56 bytes, 13 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000571E0(void)
{

loc_000571E0: ;
    MEM32(0x3660F8) = eax;
    edx = MEM32(eax + 0x18);
    edx = MEM32(edx);
    edx = MEM32(edx + 4);
    edx = MEM32(edx + 0x20);
    MEM32(0x366108) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(0x36610C) = eax;
    MEM32(0x366160) = ecx;
    ecx = MEM32(ecx + 0xC);
    MEM32(0x366180) = ecx;
    MEM32(0x3661FC) = 0x49A894;
    esp += 4; return; /* ret */

}

/**
 * sub_00057220
 * Original: 0x00057220 - 0x000572BC (156 bytes, 61 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00057220: ;
    edx = MEM32(ebx + 0x110);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x11C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0005726E; /* ja: above (unsigned >) */

loc_00057236: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057267; /* je: equal / zero */

loc_0005723D: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057267; /* je: equal / zero */

loc_00057247: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057267; /* je: equal / zero */

loc_0005724E: ;
    esi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    edi = MEM32(eax + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057267; /* je: equal / zero */

loc_00057260: ;
    ecx = 0x14;
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

loc_00057267: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00057236; /* jbe: below or equal (unsigned <=) */

loc_0005726E: ;
    ebp = MEM32(ebx + 0x12C);
    edx = MEM32(ebx + 0x138);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000572B8; /* ja: above (unsigned >) */

loc_00057281: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000572B1; /* je: equal / zero */

loc_00057287: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000572B1; /* je: equal / zero */

loc_00057291: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000572B1; /* je: equal / zero */

loc_00057298: ;
    esi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    edi = MEM32(eax + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000572B1; /* je: equal / zero */

loc_000572AA: ;
    ecx = 0x14;
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

loc_000572B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00057281; /* jbe: below or equal (unsigned <=) */

loc_000572B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000572C0
 * Original: 0x000572C0 - 0x000573EC (300 bytes, 89 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000572C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000572C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000573E9; /* ja: above (unsigned >) */

loc_000572D3: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    goto loc_000572E0;

    /* nop */

loc_000572E0: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000573DD; /* je: equal / zero */

loc_000572EA: ;
    eax = edx;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000573DD; /* je: equal / zero */

loc_000572F6: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000573DD; /* je: equal / zero */

loc_00057301: ;
    esi = MEM32(edx + 0x10);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000573DD; /* je: equal / zero */

loc_00057310: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000573DD; /* je: equal / zero */

loc_00057319: ;
    ecx = MEM32(edx + 0x18);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    ecx = MEM32(eax + 0x18);
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x14) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00057389; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0005737B: ;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi) = xmm4.f[0]; /* movss */
    goto loc_00057397;

loc_00057389: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */

loc_00057397: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000573AC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0005739C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    goto loc_000573BA;

loc_000573AC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_000573BA: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000573CF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000573BF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    goto loc_000573DD;

loc_000573CF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_000573DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000572E0; /* jbe: below or equal (unsigned <=) */

loc_000573E8: ;
    POP32(esp, esi);

loc_000573E9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000572EE
 * Original: 0x000572EE - 0x000573EC (254 bytes, 73 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000572EE(void)
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

loc_000572EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000573DD; /* je: equal / zero */

loc_000572F6: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000573DD; /* je: equal / zero */

loc_00057301: ;
    esi = MEM32(edx + 0x10);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000573DD; /* je: equal / zero */

loc_00057310: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000573DD; /* je: equal / zero */

loc_00057319: ;
    ecx = MEM32(edx + 0x18);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    ecx = MEM32(eax + 0x18);
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x14) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00057389; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0005737B: ;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi) = xmm4.f[0]; /* movss */
    goto loc_00057397;

loc_00057389: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */

loc_00057397: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000573AC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0005739C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    goto loc_000573BA;

loc_000573AC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_000573BA: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000573CF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000573BF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    goto loc_000573DD;

loc_000573CF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_000573DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_000572E0(); return; } /* jbe: below or equal (unsigned <=) */

loc_000573E8: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000573F0
 * Original: 0x000573F0 - 0x00057AAC (1724 bytes, 477 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000573F0(void)
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

loc_000573F0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x14);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000574D2; /* je: equal / zero */

loc_0005740B: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esi + 0x10);
    edi = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEM32(eax + 0xC) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x14) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005747E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00057470: ;
    xmm4 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(edx) = xmm4.f[0]; /* movss */
    goto loc_0005748C;

loc_0005747E: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */

loc_0005748C: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000574A1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00057491: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    goto loc_000574AF;

loc_000574A1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_000574AF: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000574C4; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000574B4: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    goto loc_000574D2;

loc_000574C4: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_000574D2: ;
    edx = MEM32(0x3660F0);
    ecx = 1;
    MEM32(0x3662D0) = edx;
    MEM32(0x3662D4) = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    MEM32(0x3660EC) = 0;
    MEM8(0x64D27C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00057AA4; /* je: equal / zero */

loc_00057505: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00057AA4; /* jne: not equal / not zero */

loc_00057510: ;
    eax = MEM32(0x34AC38);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(eax + 0x2C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D278) = ecx;
    PUSH32(esp, 0x0005752Au); RECOMP_ABI_CALL(0x00025F60u, sub_00025F60); /* call 0x00025F60 */

loc_0005752A: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057AA4; /* je: equal / zero */

loc_00057538: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    edi = MEM32(eax + 4);
    SET_LO8(ebx, MEM8(edi + 4));
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00057AA4; /* jbe: below or equal (unsigned <=) */

loc_00057551: ;
    eax = MEM32(edi + 8);
    ecx = ZX8(LO8(edx));
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057586; /* je: equal / zero */

loc_0005755F: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 8);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00057566: ;
    ebp = ZX8(LO8(ecx));
    _fa = (uint32_t)(MEM8(eax + ebp)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ebp), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057577; /* je: equal / zero */

loc_0005756E: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x10 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00057566; /* jb: below (unsigned <) */

loc_00057575: ;
    goto loc_00057586;

loc_00057577: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(MEM16(edi + 0x10));
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00057594; /* jne: not equal / not zero */

loc_00057586: ;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00057551; /* jb: below (unsigned <) */

loc_0005758C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00057594: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057AA4; /* je: equal / zero */

loc_000575A5: ;
    eax = MEM32(edi + 4);
    MEM16(eax + 0x16) = 0;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000575C3; /* je: equal / zero */

loc_000575B5: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000575C3; /* je: equal / zero */

loc_000575BC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_000575CB;

loc_000575C3: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */

loc_000575CB: ;
    MEMF(0x3661EC) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000576DE; /* je: equal / zero */

loc_000575DC: ;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000575E8; /* je: equal / zero */

loc_000575E3: ;
    eax = MEM32(edx + 4);
    goto loc_000575EA;

loc_000575E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000575EA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000576DE; /* jns: not sign (positive) */

loc_000575F3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000575FC; /* je: equal / zero */

loc_000575F7: ;
    eax = MEM32(edx + 4);
    goto loc_000575FE;

loc_000575FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000575FE: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000576DE; /* jns: not sign (positive) */

loc_00057607: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(edi + 4);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esi + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x400000 (32-bit) */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000576BA; /* je: equal / zero */

loc_00057664: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000576BA; /* jbe: below or equal (unsigned <=) */

loc_00057676: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000576BA; /* jbe: below or equal (unsigned <=) */

loc_00057688: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000576BA; /* jbe: below or equal (unsigned <=) */

loc_0005769A: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000576BA; /* jbe: below or equal (unsigned <=) */

loc_000576AC: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_000576C6;

loc_000576BA: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0x7F;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000576C6: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) & 0xFF7FFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 4);
    MEM32(eax) = MEM32(eax) & 0xFFBFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000576DE: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000576ED; /* je: equal / zero */

loc_000576E6: ;
    edx = esi;
    PUSH32(esp, 0x000576EDu); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_000576ED: ;
    eax = MEM32(edi);
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    ebp = edi + eax * 4 + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebx = 0x49A894;
    if (CMP_A(_fa, _fb)) goto loc_00057768; /* ja: above (unsigned >) */

loc_00057701: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057761; /* je: equal / zero */

loc_0005770A: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057761; /* je: equal / zero */

loc_00057710: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057723; /* je: equal / zero */

loc_00057718: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057761; /* je: equal / zero */

loc_00057723: ;
    MEM32(0x3660F8) = esi;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x20);
    MEM32(0x366108) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(0x366160) = eax;
    MEM32(0x36610C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = 0x3660F0;
    MEM32(0x366180) = edx;
    MEM32(0x3661FC) = ebx;
    PUSH32(esp, 0x00057761u); RECOMP_ABI_CALL(0x0007BD00u, sub_0007BD00); /* call 0x0007BD00 */

loc_00057761: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00057701; /* jbe: below or equal (unsigned <=) */

loc_00057768: ;
    eax = 0x3660F0;
    PUSH32(esp, 0x00057772u); RECOMP_ABI_CALL(0x00067E10u, sub_00067E10); /* call 0x00067E10 */

loc_00057772: ;
    SET_LO8(eax, MEM8(0x3662CC));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A9B; /* je: equal / zero */

loc_00057781: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000578C6; /* jge: greater or equal (signed >=) */

loc_0005778A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM8(0x64D27C) = LO8(ecx);
    ecx = MEM32(0x3660F0);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x3662D0) = ecx;
    ecx = ZX8(LO8(eax));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x3660EC) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM8(0x3662CC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000578A8; /* jle: less or equal (signed <=) */

loc_000577C7: ;
    goto loc_000577D0;

    /* nop */

loc_000577D0: ;
    esi = MEM32(ebx * 4 + 0x366204);
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM16(eax + 0x16) = MEM16(eax + 0x16) & 0xFC0F;
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057806; /* je: equal / zero */

loc_000577F8: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057806; /* je: equal / zero */

loc_000577FF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0005780E;

loc_00057806: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */

loc_0005780E: ;
    MEMF(0x3661EC) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax);
    edi = MEM32(eax);
    edx = MEM32(eax + 4);
    ebp = edi + edx * 4 + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0005789F; /* ja: above (unsigned >) */

loc_0005782A: ;
    /* nop */

loc_00057830: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057894; /* je: equal / zero */

loc_00057839: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057894; /* je: equal / zero */

loc_0005783F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057852; /* je: equal / zero */

loc_00057847: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057894; /* je: equal / zero */

loc_00057852: ;
    MEM32(0x3660F8) = esi;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x20);
    MEM32(0x366108) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(0x366160) = eax;
    MEM32(0x36610C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = 0x3660F0;
    MEM32(0x366180) = edx;
    MEM32(0x3661FC) = 0x49A894;
    PUSH32(esp, 0x00057894u); RECOMP_ABI_CALL(0x0007BD00u, sub_0007BD00); /* call 0x0007BD00 */

loc_00057894: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00057830; /* jbe: below or equal (unsigned <=) */

loc_0005789B: ;
    ecx = MEM32(esp + 0x14);

loc_0005789F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000577D0; /* jl: less (signed <) */

loc_000578A8: ;
    eax = 0x3660F0;
    PUSH32(esp, 0x000578B2u); RECOMP_ABI_CALL(0x00067E10u, sub_00067E10); /* call 0x00067E10 */

loc_000578B2: ;
    SET_LO8(eax, MEM8(0x3662CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00057781; /* jne: not equal / not zero */

loc_000578C3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */

loc_000578C6: ;
    if (CMP_NE(_fa, _fb)) goto loc_00057A9B; /* jne: not equal / not zero */

loc_000578CC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00057A9B; /* jbe: below or equal (unsigned <=) */

loc_000578D6: ;
    esi = 2;
    goto loc_000578E0;

    /* nop */

loc_000578E0: ;
    ecx = MEM32(edx * 4 + 0x366204);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx * 4 + 0x366204);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(edx * 4 + 0x366204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_0005795C: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_00057967: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_00057972: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_0005797B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000579C1; /* je: equal / zero */

loc_00057983: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x10000 (32-bit) */
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00057996; /* je: equal / zero */

loc_0005798E: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00057999;

loc_00057996: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00057999: ;
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 0x34); /* addss */
    MEMF(ecx + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 0x38); /* addss */
    MEMF(ecx + 0x38) = xmm3.f[0]; /* movss */

loc_000579C1: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_000579CE: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_000579D8: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_000579E3: ;
    SET_LO8(ebx, MEM8(eax + 0x63));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00057A74; /* js: sign (negative) */

loc_000579EE: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_00057A74: ;
    eax = MEM32(edx * 4 + 0x366204);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A8B; /* je: equal / zero */

loc_00057A87: ;
    MEM16(eax + 0x16) = MEM16(eax + 0x16) | LO16(esi);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_00057A8B: ;
    ecx = ZX8(MEM8(0x3662CC));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000578E0; /* jl: less (signed <) */

loc_00057A9B: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 0x00057AA4u); RECOMP_ABI_CALL(0x00057220u, sub_00057220); /* call 0x00057220 */

loc_00057AA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00057676
 * Original: 0x00057676 - 0x00057AAC (1078 bytes, 290 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057676(void)
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

loc_00057676: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000576BA; /* jbe: below or equal (unsigned <=) */

loc_00057688: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000576BA; /* jbe: below or equal (unsigned <=) */

loc_0005769A: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000576BA; /* jbe: below or equal (unsigned <=) */

loc_000576AC: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_000576C6;

loc_000576BA: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0x7F;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000576C6: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) & 0xFF7FFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 4);
    MEM32(eax) = MEM32(eax) & 0xFFBFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000576ED; /* je: equal / zero */

loc_000576E6: ;
    edx = esi;
    PUSH32(esp, 0x000576EDu); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_000576ED: ;
    eax = MEM32(edi);
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    ebp = edi + eax * 4 + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebx = 0x49A894;
    if (CMP_A(_fa, _fb)) goto loc_00057768; /* ja: above (unsigned >) */

loc_00057701: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057761; /* je: equal / zero */

loc_0005770A: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057761; /* je: equal / zero */

loc_00057710: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057723; /* je: equal / zero */

loc_00057718: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057761; /* je: equal / zero */

loc_00057723: ;
    MEM32(0x3660F8) = esi;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x20);
    MEM32(0x366108) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(0x366160) = eax;
    MEM32(0x36610C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = 0x3660F0;
    MEM32(0x366180) = edx;
    MEM32(0x3661FC) = ebx;
    PUSH32(esp, 0x00057761u); RECOMP_ABI_CALL(0x0007BD00u, sub_0007BD00); /* call 0x0007BD00 */

loc_00057761: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00057701; /* jbe: below or equal (unsigned <=) */

loc_00057768: ;
    eax = 0x3660F0;
    PUSH32(esp, 0x00057772u); RECOMP_ABI_CALL(0x00067E10u, sub_00067E10); /* call 0x00067E10 */

loc_00057772: ;
    SET_LO8(eax, MEM8(0x3662CC));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A9B; /* je: equal / zero */

loc_00057781: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000578C6; /* jge: greater or equal (signed >=) */

loc_0005778A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM8(0x64D27C) = LO8(ecx);
    ecx = MEM32(0x3660F0);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x3662D0) = ecx;
    ecx = ZX8(LO8(eax));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x3660EC) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM8(0x3662CC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000578A8; /* jle: less or equal (signed <=) */

loc_000577C7: ;
    goto loc_000577D0;

    /* nop */

loc_000577D0: ;
    esi = MEM32(ebx * 4 + 0x366204);
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM16(eax + 0x16) = MEM16(eax + 0x16) & 0xFC0F;
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057806; /* je: equal / zero */

loc_000577F8: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057806; /* je: equal / zero */

loc_000577FF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0005780E;

loc_00057806: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */

loc_0005780E: ;
    MEMF(0x3661EC) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax);
    edi = MEM32(eax);
    edx = MEM32(eax + 4);
    ebp = edi + edx * 4 + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0005789F; /* ja: above (unsigned >) */

loc_0005782A: ;
    /* nop */

loc_00057830: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057894; /* je: equal / zero */

loc_00057839: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057894; /* je: equal / zero */

loc_0005783F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057852; /* je: equal / zero */

loc_00057847: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057894; /* je: equal / zero */

loc_00057852: ;
    MEM32(0x3660F8) = esi;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x20);
    MEM32(0x366108) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(0x366160) = eax;
    MEM32(0x36610C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = 0x3660F0;
    MEM32(0x366180) = edx;
    MEM32(0x3661FC) = 0x49A894;
    PUSH32(esp, 0x00057894u); RECOMP_ABI_CALL(0x0007BD00u, sub_0007BD00); /* call 0x0007BD00 */

loc_00057894: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00057830; /* jbe: below or equal (unsigned <=) */

loc_0005789B: ;
    ecx = MEM32(esp + 0x14);

loc_0005789F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000577D0; /* jl: less (signed <) */

loc_000578A8: ;
    eax = 0x3660F0;
    PUSH32(esp, 0x000578B2u); RECOMP_ABI_CALL(0x00067E10u, sub_00067E10); /* call 0x00067E10 */

loc_000578B2: ;
    SET_LO8(eax, MEM8(0x3662CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00057781; /* jne: not equal / not zero */

loc_000578C3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */

loc_000578C6: ;
    if (CMP_NE(_fa, _fb)) goto loc_00057A9B; /* jne: not equal / not zero */

loc_000578CC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00057A9B; /* jbe: below or equal (unsigned <=) */

loc_000578D6: ;
    esi = 2;
    goto loc_000578E0;

    /* nop */

loc_000578E0: ;
    ecx = MEM32(edx * 4 + 0x366204);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx * 4 + 0x366204);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(edx * 4 + 0x366204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_0005795C: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_00057967: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_00057972: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_0005797B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000579C1; /* je: equal / zero */

loc_00057983: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x10000 (32-bit) */
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00057996; /* je: equal / zero */

loc_0005798E: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00057999;

loc_00057996: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00057999: ;
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 0x34); /* addss */
    MEMF(ecx + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 0x38); /* addss */
    MEMF(ecx + 0x38) = xmm3.f[0]; /* movss */

loc_000579C1: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_000579CE: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_000579D8: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A74; /* je: equal / zero */

loc_000579E3: ;
    SET_LO8(ebx, MEM8(eax + 0x63));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00057A74; /* js: sign (negative) */

loc_000579EE: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_00057A74: ;
    eax = MEM32(edx * 4 + 0x366204);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00057A8B; /* je: equal / zero */

loc_00057A87: ;
    MEM16(eax + 0x16) = MEM16(eax + 0x16) | LO16(esi);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_00057A8B: ;
    ecx = ZX8(MEM8(0x3662CC));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000578E0; /* jl: less (signed <) */

loc_00057A9B: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 0x00057AA4u); RECOMP_ABI_CALL(0x00057220u, sub_00057220); /* call 0x00057220 */

loc_00057AA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00057AB0
 * Original: 0x00057AB0 - 0x00058196 (1766 bytes, 499 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00057AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00057AB0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x4C));
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3660F4) = eax;
    MEM32(0x3660F0) = edx;
    MEM8(0x3662CC) = LO8(edx);
    MEM32(0x3662D0) = edx;
    MEM32(0x3662D4) = edx;
    ecx = MEM32(eax + 0x11C);
    PUSH32(esp, ebx);
    MEM32(eax + 0x220) = edx;
    eax = MEM32(eax + 0x110);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(8));
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0005818E; /* ja: above (unsigned >) */

loc_00057AFB: ;
    goto loc_00057B03;

loc_00057AFD: ;
    ecx = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00057B03: ;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00058177; /* je: equal / zero */

loc_00057B0D: ;
    eax = esi;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00058177; /* je: equal / zero */

loc_00057B19: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00058177; /* je: equal / zero */

loc_00057B28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00058177; /* jne: not equal / not zero */

loc_00057B33: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00057B4A; /* je: equal / zero */

loc_00057B38: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x20000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00058177; /* jne: not equal / not zero */

loc_00057B4A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00058177; /* je: equal / zero */

loc_00057B52: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax);
    edi = MEM32(eax + 4);
    SET_LO8(ebx, MEM8(edi + 4));
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00058177; /* jbe: below or equal (unsigned <=) */

loc_00057B6B: ;
    goto loc_00057B70;

    /* nop */

loc_00057B70: ;
    eax = MEM32(edi + 8);
    ecx = ZX8(LO8(edx));
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00057BA5; /* je: equal / zero */

loc_00057B7E: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00057B85: ;
    ebp = ZX8(LO8(ecx));
    _fa = (uint32_t)(MEM8(eax + ebp)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ebp), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00057B96; /* je: equal / zero */

loc_00057B8D: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x10 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00057B85; /* jb: below (unsigned <) */

loc_00057B94: ;
    goto loc_00057BA5;

loc_00057B96: ;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(MEM16(edi + 0x10));
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00057BB0; /* jne: not equal / not zero */

loc_00057BA5: ;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00057B70; /* jb: below (unsigned <) */

loc_00057BAB: ;
    goto loc_00058177;

loc_00057BB0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00057BE2; /* js: sign (negative) */

loc_00057BB8: ;
    ebx = MEM32(0x34AC38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057BE2; /* je: equal / zero */

loc_00057BC2: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    edi = MEM32(ebx + 0x2C);
    eax = esi;
    PUSH32(esp, 0x00057BD4u); RECOMP_ABI_CALL(0x00026150u, sub_00026150); /* call 0x00026150 */

loc_00057BD4: ;
    edx = MEM32(ebx + 0x2C);
    PUSH32(esp, edx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00057BDFu); RECOMP_ABI_CALL(0x00025F60u, sub_00025F60); /* call 0x00025F60 */

loc_00057BDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00057BE2: ;
    ebp = MEM32(esp + 0x18);
    eax = MEM32(ebp);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00058177; /* je: equal / zero */

loc_00057BF4: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(edx + 4);
    MEM16(eax + 0x16) = 0;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00057C1C; /* je: equal / zero */

loc_00057C0E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057C1C; /* je: equal / zero */

loc_00057C15: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_00057C24;

loc_00057C1C: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */

loc_00057C24: ;
    MEMF(0x3661EC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00057C46; /* je: equal / zero */

loc_00057C35: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00057FE5;

loc_00057C46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00057CB3; /* je: equal / zero */

loc_00057C4A: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057C56; /* je: equal / zero */

loc_00057C51: ;
    ecx = MEM32(eax + 4);
    goto loc_00057C58;

loc_00057C56: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00057C58: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00057CB3; /* jns: not sign (positive) */

loc_00057C5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057C66; /* je: equal / zero */

loc_00057C61: ;
    ecx = MEM32(eax + 4);
    goto loc_00057C68;

loc_00057C66: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00057C68: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0x10000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00057C7B; /* je: equal / zero */

loc_00057C70: ;
    eax = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00057C7B: ;
    ecx = MEM32(ebp);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    edi = eax + edx * 4 + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00057CAB; /* ja: above (unsigned >) */

loc_00057C8B: ;
    goto loc_00057C90;

    /* nop */

loc_00057C90: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00057CA4; /* je: equal / zero */

loc_00057C99: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00057CA4; /* je: equal / zero */

loc_00057C9F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00057CC8; /* jne: not equal / not zero */

loc_00057CA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00057C90; /* jbe: below or equal (unsigned <=) */

loc_00057CAB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057FE5; /* je: equal / zero */

loc_00057CB3: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00057F75; /* je: equal / zero */

loc_00057CBC: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057CD9; /* je: equal / zero */

loc_00057CC3: ;
    eax = MEM32(ecx + 4);
    goto loc_00057CDB;

loc_00057CC8: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00057FE5;

loc_00057CD9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00057CDB: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00057F75; /* jns: not sign (positive) */

loc_00057CE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057CED; /* je: equal / zero */

loc_00057CE8: ;
    eax = MEM32(ecx + 4);
    goto loc_00057CEF;

loc_00057CED: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00057CEF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    edx = MEM32(ecx + 4);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(ebp + 4);
    ecx = MEM32(ecx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esi + 0xC);
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(edx);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x800000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_00057FE5; /* jne: not equal / not zero */

loc_00057D62: ;
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00057DCB; /* jbe: below or equal (unsigned <=) */

loc_00057D73: ;
    fp_push(MEMF(edx + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00057DCB; /* jbe: below or equal (unsigned <=) */

loc_00057D84: ;
    fp_push(MEMF(edx + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00057DCB; /* jbe: below or equal (unsigned <=) */

loc_00057D95: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00057DCB; /* jbe: below or equal (unsigned <=) */

loc_00057DA7: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00057DCB; /* jbe: below or equal (unsigned <=) */

loc_00057DB9: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00057E03; /* ja: above (unsigned >) */

loc_00057DCB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00057FE5; /* je: equal / zero */

loc_00057DD7: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00057FE5; /* jbe: below or equal (unsigned <=) */

loc_00057DED: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00057FE5; /* jbe: below or equal (unsigned <=) */

loc_00057E03: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057E37; /* je: equal / zero */

loc_00057E32: ;
    eax = MEM32(eax + 4);
    goto loc_00057E39;

loc_00057E37: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00057E39: ;
    xmm3 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm3.f[0] = xmm3.f[0] / MEMF(eax + 0x20); /* divss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x49A888); /* mulss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x49A88C); /* mulss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x49A890)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm4.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00057ECA; /* je: equal / zero */

loc_00057E7F: ;
    ecx = esi;
    PUSH32(esp, 0x00057E86u); RECOMP_ABI_CALL(0x00016950u, sub_00016950); /* call 0x00016950 */

loc_00057E86: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */

loc_00057ECA: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00058177; /* je: equal / zero */

loc_00057ED3: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00058177; /* je: equal / zero */

loc_00057EE2: ;
    eax = MEM32(ecx + 0x1C);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x40) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1C)) >> 32) & 1);
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    goto loc_00058177;

loc_00057F75: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057FE5; /* je: equal / zero */

loc_00057F7C: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057FE5; /* je: equal / zero */

loc_00057F83: ;
    eax = MEM32(esi + 0xC);
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30)); /* fsub dword ptr [eax + 0x30] */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x34); /* subss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00057FE5; /* jbe: below or equal (unsigned <=) */

loc_00057FBD: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00057FE5; /* jbe: below or equal (unsigned <=) */

loc_00057FCF: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00058177; /* ja: above (unsigned >) */

loc_00057FE5: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000580E6; /* je: equal / zero */

loc_00057FEE: ;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00057FFA; /* je: equal / zero */

loc_00057FF5: ;
    eax = MEM32(edx + 4);
    goto loc_00057FFC;

loc_00057FFA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00057FFC: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000580E6; /* jns: not sign (positive) */

loc_00058005: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0005800E; /* je: equal / zero */

loc_00058009: ;
    eax = MEM32(edx + 4);
    goto loc_00058010;

loc_0005800E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00058010: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    ecx = MEM32(ebp + 4);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 4);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esi + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000580C2; /* je: equal / zero */

loc_0005806C: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000580C2; /* jbe: below or equal (unsigned <=) */

loc_0005807E: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000580C2; /* jbe: below or equal (unsigned <=) */

loc_00058090: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000580C2; /* jbe: below or equal (unsigned <=) */

loc_000580A2: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000580C2; /* jbe: below or equal (unsigned <=) */

loc_000580B4: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x17) = MEM8(eax + 0x17) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_000580CE;

loc_000580C2: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0x7F;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000580CE: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0xFF7FFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0xFFBFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000580E6: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000580F5; /* je: equal / zero */

loc_000580EE: ;
    edx = esi;
    PUSH32(esp, 0x000580F5u); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_000580F5: ;
    eax = MEM32(ebp);
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    ebp = edi + eax * 4 + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00058177; /* ja: above (unsigned >) */

loc_00058105: ;
    ebx = 0x49A894;
    /* nop */

loc_00058110: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00058170; /* je: equal / zero */

loc_00058119: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00058170; /* je: equal / zero */

loc_0005811F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00058132; /* je: equal / zero */

loc_00058127: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00058170; /* je: equal / zero */

loc_00058132: ;
    MEM32(0x3660F8) = esi;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x20);
    MEM32(0x366108) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(0x366160) = eax;
    MEM32(0x36610C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = 0x3660F0;
    MEM32(0x366180) = edx;
    MEM32(0x3661FC) = ebx;
    PUSH32(esp, 0x00058170u); RECOMP_ABI_CALL(0x0007BD00u, sub_0007BD00); /* call 0x0007BD00 */

loc_00058170: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00058110; /* jbe: below or equal (unsigned <=) */

loc_00058177: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00057AFD; /* jbe: below or equal (unsigned <=) */

loc_0005818E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000581A0
 * Original: 0x000581A0 - 0x00058548 (936 bytes, 245 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000581A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000581A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    eax = esi + 0x10C;
    MEM8(0x64D27C) = 0;
    MEM32(0x64D278) = 0;
    PUSH32(esp, 0x000581C7u); RECOMP_ABI_CALL(0x000572C0u, sub_000572C0); /* call 0x000572C0 */

loc_000581C7: ;
    eax = MEM32(0x64CFF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000581D6; /* je: equal / zero */

loc_000581D0: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    goto loc_000581DA;

loc_000581D6: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);

loc_000581DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000581E1u); RECOMP_ABI_CALL(0x00025F60u, sub_00025F60); /* call 0x00025F60 */

loc_000581E1: ;
    edi = MEM32(0x33A3AC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = esi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x33A3AC) = edx;
    PUSH32(esp, 0x00058200u); RECOMP_ABI_CALL(0x00057AB0u, sub_00057AB0); /* call 0x00057AB0 */

loc_00058200: ;
    eax = MEM32(0x3660F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058213; /* je: equal / zero */

loc_00058209: ;
    eax = 0x3660F0;
    PUSH32(esp, 0x00058213u); RECOMP_ABI_CALL(0x00067E10u, sub_00067E10); /* call 0x00067E10 */

loc_00058213: ;
    SET_LO8(eax, MEM8(0x3662CC));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058539; /* je: equal / zero */

loc_00058222: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005836A; /* jge: greater or equal (signed >=) */

loc_0005822B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM8(0x64D27C) = LO8(ecx);
    ecx = MEM32(0x3660F0);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x3662D0) = ecx;
    ecx = ZX8(LO8(eax));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x3660EC) = edx;
    MEM32(0x3662D4) = 1;
    MEM32(esp + 0x14) = ecx;
    MEM8(0x3662CC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0005834C; /* jle: less or equal (signed <=) */

loc_00058272: ;
    esi = MEM32(ebx * 4 + 0x366204);
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM16(eax + 0x16) = MEM16(eax + 0x16) & 0xFC0F;
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000582A8; /* je: equal / zero */

loc_0005829A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000582A8; /* je: equal / zero */

loc_000582A1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_000582B0;

loc_000582A8: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */

loc_000582B0: ;
    MEMF(0x3661EC) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax);
    edi = MEM32(eax);
    edx = MEM32(eax + 4);
    ebp = edi + edx * 4 + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0005833F; /* ja: above (unsigned >) */

loc_000582CC: ;
    /* nop */

loc_000582D0: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058334; /* je: equal / zero */

loc_000582D9: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058334; /* je: equal / zero */

loc_000582DF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000582F2; /* je: equal / zero */

loc_000582E7: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058334; /* je: equal / zero */

loc_000582F2: ;
    MEM32(0x3660F8) = esi;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x20);
    MEM32(0x366108) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(0x366160) = eax;
    MEM32(0x36610C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = 0x3660F0;
    MEM32(0x366180) = edx;
    MEM32(0x3661FC) = 0x49A894;
    PUSH32(esp, 0x00058334u); RECOMP_ABI_CALL(0x0007BD00u, sub_0007BD00); /* call 0x0007BD00 */

loc_00058334: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000582D0; /* jbe: below or equal (unsigned <=) */

loc_0005833B: ;
    ecx = MEM32(esp + 0x14);

loc_0005833F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00058272; /* jl: less (signed <) */

loc_00058348: ;
    esi = MEM32(esp + 0x1C);

loc_0005834C: ;
    eax = 0x3660F0;
    PUSH32(esp, 0x00058356u); RECOMP_ABI_CALL(0x00067E10u, sub_00067E10); /* call 0x00067E10 */

loc_00058356: ;
    SET_LO8(eax, MEM8(0x3662CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00058222; /* jne: not equal / not zero */

loc_00058367: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */

loc_0005836A: ;
    if (CMP_NE(_fa, _fb)) goto loc_00058539; /* jne: not equal / not zero */

loc_00058370: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00058539; /* jbe: below or equal (unsigned <=) */

loc_0005837A: ;
    /* nop */

loc_00058380: ;
    ecx = MEM32(edx * 4 + 0x366204);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x30); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x34); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx * 4 + 0x366204);
    eax = MEM32(eax + 0xC);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(edx * 4 + 0x366204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058512; /* je: equal / zero */

loc_000583FE: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058512; /* je: equal / zero */

loc_00058409: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058512; /* je: equal / zero */

loc_00058414: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058512; /* je: equal / zero */

loc_0005841D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058465; /* je: equal / zero */

loc_00058425: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x10000 (32-bit) */
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00058438; /* je: equal / zero */

loc_00058430: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0005843B;

loc_00058438: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005843B: ;
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x38) = xmm3.f[0]; /* movss */

loc_00058465: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058512; /* je: equal / zero */

loc_00058472: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058512; /* je: equal / zero */

loc_0005847C: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058512; /* je: equal / zero */

loc_00058487: ;
    SET_LO8(ebx, MEM8(eax + 0x63));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00058512; /* js: sign (negative) */

loc_00058492: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x44); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x48); /* addss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */

loc_00058512: ;
    eax = MEM32(edx * 4 + 0x366204);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058529; /* je: equal / zero */

loc_00058525: ;
    MEM8(eax + 0x16) = MEM8(eax + 0x16) | 2;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00058529: ;
    ecx = ZX8(MEM8(0x3662CC));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00058380; /* jl: less (signed <) */

loc_00058539: ;
    ebx = esi;
    PUSH32(esp, 0x00058540u); RECOMP_ABI_CALL(0x00057220u, sub_00057220); /* call 0x00057220 */

loc_00058540: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00058550
 * Original: 0x00058550 - 0x000587C9 (633 bytes, 172 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058550(void)
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

loc_00058550: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = ZX8(MEM8(ebx + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x40));
    ecx = ecx & 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005864F; /* je: equal / zero */

loc_00058574: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000587C2; /* jne: not equal / not zero */

loc_0005857B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058606; /* je: equal / zero */

loc_00058583: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00058606; /* jne: not equal / not zero */

loc_00058588: ;
    ecx = esi;
    eax = esp + 0x28;
    PUSH32(esp, 0x00058593u); RECOMP_ABI_CALL(0x000C3B60u, sub_000C3B60); /* call 0x000C3B60 */

loc_00058593: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0005859Eu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_0005859E: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000585E0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000585DD: ;
    xmm0 = xmm1; /* movaps */

loc_000585E0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000585EE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000585EB: ;
    xmm0 = xmm1; /* movaps */

loc_000585EE: ;
    ecx = MEM32(ebx + 4);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    POP32(esp, esi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00058606: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00058611u); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_00058611: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005864F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebx + 4);
    xmm3 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x10); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0005871F; /* je: equal / zero */

loc_000586C5: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005871F; /* jne: not equal / not zero */

loc_000586CA: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    eax = esi;
    PUSH32(esp, 0x000586DAu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000586DA: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    eax = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005871Du); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_0005871D: ;
    goto loc_00058772;

loc_0005871F: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    ecx = esi;
    PUSH32(esp, 0x0005872Fu); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_0005872F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = esp + 0x30;
    ecx = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00058772u); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_00058772: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000587C2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00058718
 * Original: 0x00058718 - 0x000587C9 (177 bytes, 51 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058718(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_00058718: ;
    PUSH32(esp, 0x0005871Du); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_0005871D: ;
    goto loc_00058772;

    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    ecx = esi;
    PUSH32(esp, 0x0005872Fu); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_0005872F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = esp + 0x30;
    ecx = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00058772u); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_00058772: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000587D0
 * Original: 0x000587D0 - 0x00058AF6 (806 bytes, 223 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000587D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000587D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_000587E9: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_000587F3: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058804; /* je: equal / zero */

loc_000587FA: ;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    goto loc_0005880E;

loc_00058804: ;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    ecx = eax;

loc_0005880E: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058819: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058824: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_0005882E: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058839: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058843: ;
    ecx = ZX8(MEM8(ebp + 8));
    edx = MEM32(eax + 8);
    SET_LO8(ebx, MEM8(ecx + edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 4) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00058AED; /* jae: above or equal (unsigned >=) */

loc_00058856: ;
    SET_LO8(edx, LO8(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005885Du); RECOMP_ABI_CALL(0x0005A920u, sub_0005A920); /* call 0x0005A920 */

loc_0005885D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058865: ;
    ecx = MEM32(esi + 8);
    eax = ZX8(LO8(ebx));
    edi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058877: ;
    eax = ZX8(MEM8(edi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000589C1; /* je: equal / zero */

loc_00058882: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00058AED; /* jne: not equal / not zero */

loc_00058889: ;
    edx = MEM32(edi + 4);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058AED; /* jnp: not parity */

loc_000588A2: ;
    ecx = MEM32(esp + 0x18);
    esi = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000588AFu); RECOMP_ABI_CALL(0x0001D4E0u, sub_0001D4E0); /* call 0x0001D4E0 */

loc_000588AF: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005892F; /* je: equal / zero */

loc_000588BC: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005892F; /* jne: not equal / not zero */

loc_000588C1: ;
    ecx = esi;
    eax = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000588CCu); RECOMP_ABI_CALL(0x000C3B60u, sub_000C3B60); /* call 0x000C3B60 */

loc_000588CC: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000588DBu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000588DB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x24); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x28); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058913; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00058910: ;
    xmm0 = xmm4; /* movaps */

loc_00058913: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058921; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0005891E: ;
    xmm0 = xmm4; /* movaps */

loc_00058921: ;
    edx = MEM32(edi + 4);
    xmm4 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    goto loc_0005896A;

loc_0005892F: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005893Eu); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_0005893E: ;
    ecx = MEM32(edi + 4);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x24); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x28); /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005896A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000589B5: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000589C1: ;
    ebx = MEM32(edi + 4);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058AED; /* jnp: not parity */

loc_000589D6: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058AED; /* jnp: not parity */

loc_000589E9: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058AED; /* jnp: not parity */

loc_000589FC: ;
    ecx = MEM32(esp + 0x18);
    esi = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058A09u); RECOMP_ABI_CALL(0x0001D4E0u, sub_0001D4E0); /* call 0x0001D4E0 */

loc_00058A09: ;
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(MEM8(edx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058A5F; /* je: equal / zero */

loc_00058A16: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00058A5F; /* jne: not equal / not zero */

loc_00058A1B: ;
    eax = esp + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058A2E; /* je: equal / zero */

loc_00058A23: ;
    ecx = 0x14;
    esi = edx;
    edi = eax;
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

loc_00058A2E: ;
    eax = MEM32(esp + 0x80);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x80) = eax;
    edx = esp + 0x40;
    eax = esp + 0x90;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x6C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058A5Du); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_00058A5D: ;
    goto loc_00058A6D;

loc_00058A5F: ;
    eax = esp + 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058A6Bu); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_00058A6B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00058A6D: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    eax = esp + 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058A82u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_00058A82: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x30); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x34); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0xC)) */

loc_00058AB8: ;
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00058AC1: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebx + 0x10)) */

loc_00058AC7: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00058AD1: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ebx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ebx + 0x14)) */

loc_00058AD7: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00058AE1: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058AED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000587D6
 * Original: 0x000587D6 - 0x00058AF6 (800 bytes, 220 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000587D6(void)
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

loc_000587D6: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_000587E9: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_000587F3: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058804; /* je: equal / zero */

loc_000587FA: ;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    goto loc_0005880E;

loc_00058804: ;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    ecx = eax;

loc_0005880E: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058819: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058824: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_0005882E: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058839: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058843: ;
    ecx = ZX8(MEM8(ebp + 8));
    edx = MEM32(eax + 8);
    SET_LO8(ebx, MEM8(ecx + edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 4) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00058AED; /* jae: above or equal (unsigned >=) */

loc_00058856: ;
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0x0005885Du); RECOMP_ABI_CALL(0x0005A920u, sub_0005A920); /* call 0x0005A920 */

loc_0005885D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058865: ;
    ecx = MEM32(esi + 8);
    eax = ZX8(LO8(ebx));
    edi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058AED; /* je: equal / zero */

loc_00058877: ;
    eax = ZX8(MEM8(edi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000589C1; /* je: equal / zero */

loc_00058882: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00058AED; /* jne: not equal / not zero */

loc_00058889: ;
    edx = MEM32(edi + 4);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058AED; /* jnp: not parity */

loc_000588A2: ;
    ecx = MEM32(esp + 0x18);
    esi = esp + 0x34;
    PUSH32(esp, 0x000588AFu); RECOMP_ABI_CALL(0x0001D4E0u, sub_0001D4E0); /* call 0x0001D4E0 */

loc_000588AF: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005892F; /* je: equal / zero */

loc_000588BC: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005892F; /* jne: not equal / not zero */

loc_000588C1: ;
    ecx = esi;
    eax = esp + 0x28;
    PUSH32(esp, 0x000588CCu); RECOMP_ABI_CALL(0x000C3B60u, sub_000C3B60); /* call 0x000C3B60 */

loc_000588CC: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    eax = esi;
    PUSH32(esp, 0x000588DBu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000588DB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x24); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x28); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058913; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00058910: ;
    xmm0 = xmm4; /* movaps */

loc_00058913: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058921; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0005891E: ;
    xmm0 = xmm4; /* movaps */

loc_00058921: ;
    edx = MEM32(edi + 4);
    xmm4 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    goto loc_0005896A;

loc_0005892F: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    ecx = esi;
    PUSH32(esp, 0x0005893Eu); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_0005893E: ;
    ecx = MEM32(edi + 4);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x24); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x28); /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005896A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000589B5: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000589C1: ;
    ebx = MEM32(edi + 4);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058AED; /* jnp: not parity */

loc_000589D6: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058AED; /* jnp: not parity */

loc_000589E9: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058AED; /* jnp: not parity */

loc_000589FC: ;
    ecx = MEM32(esp + 0x18);
    esi = esp + 0x34;
    PUSH32(esp, 0x00058A09u); RECOMP_ABI_CALL(0x0001D4E0u, sub_0001D4E0); /* call 0x0001D4E0 */

loc_00058A09: ;
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(MEM8(edx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058A5F; /* je: equal / zero */

loc_00058A16: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00058A5F; /* jne: not equal / not zero */

loc_00058A1B: ;
    eax = esp + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058A2E; /* je: equal / zero */

loc_00058A23: ;
    ecx = 0x14;
    esi = edx;
    edi = eax;
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

loc_00058A2E: ;
    eax = MEM32(esp + 0x80);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x80) = eax;
    edx = esp + 0x40;
    eax = esp + 0x90;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x6C) = esi;
    PUSH32(esp, 0x00058A5Du); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_00058A5D: ;
    goto loc_00058A6D;

loc_00058A5F: ;
    eax = esp + 0x90;
    PUSH32(esp, 0x00058A6Bu); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_00058A6B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00058A6D: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    eax = esp + 0x94;
    PUSH32(esp, 0x00058A82u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_00058A82: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x30); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x34); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0xC)) */

loc_00058AB8: ;
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00058AC1: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebx + 0x10)) */

loc_00058AC7: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00058AD1: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ebx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ebx + 0x14)) */

loc_00058AD7: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058AED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00058AE1: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058AED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00058B00
 * Original: 0x00058B00 - 0x00058E3F (831 bytes, 233 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00058B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00058B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00058E36; /* je: equal / zero */

loc_00058B19: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058E36; /* je: equal / zero */

loc_00058B23: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058B32; /* je: equal / zero */

loc_00058B2A: ;
    edi = ecx;
    MEM32(esp + 0x18) = eax;
    goto loc_00058B38;

loc_00058B32: ;
    edi = eax;
    MEM32(esp + 0x18) = ecx;

loc_00058B38: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058E36; /* je: equal / zero */

loc_00058B43: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058E36; /* je: equal / zero */

loc_00058B4E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058E36; /* je: equal / zero */

loc_00058B58: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058E36; /* je: equal / zero */

loc_00058B63: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058E36; /* je: equal / zero */

loc_00058B6D: ;
    ecx = ZX8(MEM8(ebp + 8));
    edx = MEM32(eax + 8);
    SET_LO8(ebx, MEM8(ecx + edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 4) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00058E36; /* jae: above or equal (unsigned >=) */

loc_00058B80: ;
    SET_LO8(edx, LO8(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058B87u); RECOMP_ABI_CALL(0x0005A920u, sub_0005A920); /* call 0x0005A920 */

loc_00058B87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058E36; /* je: equal / zero */

loc_00058B8F: ;
    ecx = MEM32(esi + 8);
    eax = ZX8(LO8(ebx));
    ebx = MEM32(ecx + eax * 4);
    SET_LO8(ecx, MEM8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058E36; /* je: equal / zero */

loc_00058BA3: ;
    eax = ZX8(MEM8(ebx + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00058CFA; /* je: equal / zero */

loc_00058BAE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00058E36; /* jne: not equal / not zero */

loc_00058BB5: ;
    edx = MEM32(ebx + 4);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058E36; /* jnp: not parity */

loc_00058BCE: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 0xC);
    esi = MEM32(eax + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(edi + 0xC);
    MEM32(esp + 0x24) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058C69; /* je: equal / zero */

loc_00058BF6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00058C69; /* jne: not equal / not zero */

loc_00058BFB: ;
    ecx = esi;
    eax = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058C06u); RECOMP_ABI_CALL(0x000C3B60u, sub_000C3B60); /* call 0x000C3B60 */

loc_00058C06: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 4);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058C15u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_00058C15: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x34); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058C4D; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00058C4A: ;
    xmm0 = xmm4; /* movaps */

loc_00058C4D: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058C5B; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00058C58: ;
    xmm0 = xmm4; /* movaps */

loc_00058C5B: ;
    edx = MEM32(ebx + 4);
    xmm4 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    goto loc_00058CA3;

loc_00058C69: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = edx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058C77u); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_00058C77: ;
    ecx = MEM32(ebx + 4);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x34); /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00058CA3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00058CEE: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058CFA: ;
    ebx = MEM32(ebx + 4);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058E36; /* jnp: not parity */

loc_00058D0F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058E36; /* jnp: not parity */

loc_00058D22: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058E36; /* jnp: not parity */

loc_00058D35: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0xC);
    edx = MEM32(eax + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(edi + 0xC);
    MEM32(esp + 0x24) = eax;
    _fa = (uint32_t)(MEM8(edx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00058DA8; /* je: equal / zero */

loc_00058D5D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00058DA8; /* jne: not equal / not zero */

loc_00058D62: ;
    ecx = esp + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058D77; /* je: equal / zero */

loc_00058D6A: ;
    ecx = 0x14;
    esi = edx;
    edi = esp + 0x40;
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

loc_00058D77: ;
    eax = MEM32(esp + 0x80);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x80) = eax;
    edx = esp + 0x40;
    eax = esp + 0x90;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x6C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058DA6u); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_00058DA6: ;
    goto loc_00058DB6;

loc_00058DA8: ;
    eax = esp + 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058DB4u); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_00058DB4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00058DB6: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    eax = esp + 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00058DCBu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_00058DCB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x40); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0xC)) */

loc_00058E01: ;
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00058E0A: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebx + 0x10)) */

loc_00058E10: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00058E1A: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ebx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ebx + 0x14)) */

loc_00058E20: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00058E2A: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058E36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00058D8A
 * Original: 0x00058D8A - 0x00058E3F (181 bytes, 51 insns)
 * Folder: collision (between: 0x000568C3 and 0x00058E40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058D8A(void)
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

loc_00058D8A: ;
    edx = esp + 0x40;
    eax = esp + 0x90;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x6C) = esi;
    PUSH32(esp, 0x00058DA6u); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_00058DA6: ;
    goto loc_00058DB6;

    eax = esp + 0x90;
    PUSH32(esp, 0x00058DB4u); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_00058DB4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00058DB6: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    eax = esp + 0x94;
    PUSH32(esp, 0x00058DCBu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_00058DCB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x40); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0xC)) */

loc_00058E01: ;
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00058E0A: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebx + 0x10)) */

loc_00058E10: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00058E1A: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ebx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ebx + 0x14)) */

loc_00058E20: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E36; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00058E2A: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00058E36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00058E40
 * Original: 0x00058E40 - 0x000590C9 (649 bytes, 179 insns)
 * Folder: collision (source: COLMain.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058E40(void)
{
    int _flags = 0; /* fallback flag var */
    int _jf_000590B3 = 0; /* per-edge flags of joins */
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

loc_00058E40: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000590C3; /* je: equal / zero */

loc_00058E4E: ;
    _fa = (uint32_t)(MEM8(edx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000590C3; /* je: equal / zero */

loc_00058E58: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00058E67; /* je: equal / zero */

loc_00058E61: ;
    eax = edx;
    edi = ecx;
    goto loc_00058E6B;

loc_00058E67: ;
    eax = ecx;
    edi = edx;

loc_00058E6B: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00058E7E; /* jne: not equal / not zero */

loc_00058E77: ;
    edx = 1;
    goto loc_00058E8A;

loc_00058E7E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00058E8A: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_00058FF1; /* je: equal / zero */

loc_00058E94: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00058F53; /* je: equal / zero */

loc_00058E9B: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00058EC6; /* je: equal / zero */

loc_00058E9E: ;
    PUSH32(esp, 0x323674);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x882);
    PUSH32(esp, 0x3236E8);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x00058EBCu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_00058EBC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00058EC6: ;
    eax = MEM32(eax + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x38); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 0x34); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00058F08; /* jp: parity */

loc_00058F01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00058F08: ;
    eax = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00058F01; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_00058F3E: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    _jf_000590B3 = ((g_fp_cmp != 1) /* fcompi */) ? 1 : 0; /* flags of this edge */
    goto loc_000590B3;

loc_00058F53: ;
    eax = MEM32(eax + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x34); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 0x38); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm3.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058F01; /* jnp: not parity */

loc_00058F8C: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x34);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 8) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEM32(esp + 0xC) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    _jf_000590B3 = ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) ? 1 : 0; /* flags of this edge */
    goto loc_000590B3;

loc_00058FF1: ;
    eax = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 4); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 8); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 0x10); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(ecx + 0x14); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058F01; /* jnp: not parity */

loc_0005903C: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058F01; /* jnp: not parity */

loc_00059049: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00058F01; /* jnp: not parity */

loc_00059056: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x34);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    xmm6 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058F01; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_00059080: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058F01; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_00059089: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058F01; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00059098: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058F01; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000590A1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058F01; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000590B0: ;
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    _jf_000590B3 = ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) ? 1 : 0; /* flags of this edge */

loc_000590B3: ;
    if (_jf_000590B3 /* jbe: below or equal (unsigned <=) */) goto loc_00058F01;

loc_000590B9: ;
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000590C3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000590D0
 * Original: 0x000590D0 - 0x000592E5 (533 bytes, 141 insns)
 * Folder: collision (source: COLMain.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000590D0(void)
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

loc_000590D0: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000590E5; /* jne: not equal / not zero */

loc_000590DE: ;
    eax = 1;
    goto loc_000590F3;

loc_000590E5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;

loc_000590F3: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00059233; /* je: equal / zero */

loc_000590FC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000591AA; /* je: equal / zero */

loc_00059103: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005912D; /* je: equal / zero */

loc_00059106: ;
    PUSH32(esp, 0x323674);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x8D3);
    PUSH32(esp, 0x3236E8);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x00059124u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_00059124: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00059127: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005912D: ;
    eax = MEM32(esi + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x38); /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00059127; /* jnp: not parity */

loc_00059168: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00059127; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_0005918F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00059127; /* jbe: below or equal (unsigned <=) */

loc_000591A1: ;
    eax = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000591AA: ;
    eax = MEM32(esi + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 4); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 8); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm3.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00059127; /* jnp: not parity */

loc_000591E3: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00059127; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0005922A: ;
    eax = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00059233: ;
    eax = MEM32(esi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 4); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 8); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 0x10); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(ecx + 0x14); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00059127; /* jnp: not parity */

loc_0005927E: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00059127; /* jnp: not parity */

loc_0005928B: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00059127; /* jnp: not parity */

loc_00059298: ;
    xmm6 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00059127; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_000592A5: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00059127; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_000592AE: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00059127; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000592BC: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00059127; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000592C5: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00059127; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000592D3: ;
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00059127; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_000592DC: ;
    eax = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000591D9
 * Original: 0x000591D9 - 0x000592E5 (268 bytes, 67 insns)
 * Folder: collision (between: 0x000590D0 and 0x00059314)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000591D9(void)
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

loc_000591D9: ;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) { g_seh_ebp = ebp; sub_00059127(); return; } /* jnp: not parity */

loc_000591E3: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) { g_seh_ebp = ebp; sub_00059127(); return; } /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0005922A: ;
    eax = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) { g_seh_ebp = ebp; sub_00059127(); return; } /* jnp: not parity */

loc_0005928B: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) { g_seh_ebp = ebp; sub_00059127(); return; } /* jnp: not parity */

loc_00059298: ;
    xmm6 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) { g_seh_ebp = ebp; sub_00059127(); return; } /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_000592A5: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) { g_seh_ebp = ebp; sub_00059127(); return; } /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_000592AE: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) { g_seh_ebp = ebp; sub_00059127(); return; } /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000592BC: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) { g_seh_ebp = ebp; sub_00059127(); return; } /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000592C5: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) { g_seh_ebp = ebp; sub_00059127(); return; } /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000592D3: ;
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) { g_seh_ebp = ebp; sub_00059127(); return; } /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_000592DC: ;
    eax = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000592F0
 * Original: 0x000592F0 - 0x000597A5 (1205 bytes, 344 insns)
 * Folder: collision (between: 0x000590D0 and 0x00059314)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000592F0(void)
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

loc_000592F0: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    if (TEST_Z(_fa, _fb)) goto loc_0005979E; /* je: equal / zero */

loc_00059304: ;
    _fa = (uint32_t)(MEM8(ebp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005979E; /* je: equal / zero */

loc_0005930E: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0005931D; /* je: equal / zero */

loc_00059317: ;
    ebx = ebp;
    ebp = eax;
    goto loc_0005931F;

loc_0005931D: ;
    ebx = eax;

loc_0005931F: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_00059327: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_0005932E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_00059334: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_0005933B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005934A; /* jne: not equal / not zero */

loc_00059341: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005934A: ;
    ecx = ZX8(MEM8(esp + 0x3C));
    edx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 4) (8-bit) */
    MEM8(esp + 0xF) = LO8(edx);
    if (CMP_AE(_fa, _fb)) goto loc_00059341; /* jae: above or equal (unsigned >=) */

loc_0005935E: ;
    PUSH32(esp, 0x00059363u); RECOMP_ABI_CALL(0x0005A920u, sub_0005A920); /* call 0x0005A920 */

loc_00059363: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_00059367: ;
    eax = ZX8(MEM8(esp + 0xF));
    ecx = MEM32(esi + 8);
    esi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_00059377: ;
    eax = ZX8(MEM8(esi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00059389; /* je: equal / zero */

loc_0005937F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0005939D; /* jne: not equal / not zero */

loc_00059382: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    goto loc_0005938E;

loc_00059389: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);

loc_0005938E: ;
    eax = ebx;
    edi = esp + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005939Au); RECOMP_ABI_CALL(0x00058550u, sub_00058550); /* call 0x00058550 */

loc_0005939A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005939D: ;
    edx = MEM32(ebp + 0x10);
    eax = edx;
    PUSH32(esp, 0x000593A7u); RECOMP_ABI_CALL(0x0001D0B0u, sub_0001D0B0); /* call 0x0001D0B0 */

loc_000593A7: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00059682; /* je: equal / zero */

loc_000593B0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005950F; /* je: equal / zero */

loc_000593B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000593E5; /* je: equal / zero */

loc_000593BA: ;
    PUSH32(esp, 0x323190);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x999);
    PUSH32(esp, 0x3236E8);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000593D8u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000593D8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000593DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000593E5: ;
    eax = ZX8(MEM8(esi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005944E; /* je: equal / zero */

loc_000593EC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000593DB; /* jne: not equal / not zero */

loc_000593EF: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    ebp = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    ecx = esp + 0x1C;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00059443u); RECOMP_ABI_CALL(0x00073840u, sub_00073840); /* call 0x00073840 */

loc_00059443: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005944E: ;
    eax = MEM32(ebp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm6 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ecx = MEM32(esi + 4);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    edx = ecx + 0xC;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    edx = esp + 0x28;
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebx + 0xC);
    edx = esp + 0x20;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00059504u); RECOMP_ABI_CALL(0x00074620u, sub_00074620); /* call 0x00074620 */

loc_00059504: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005950F: ;
    eax = ZX8(MEM8(esi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005959B; /* je: equal / zero */

loc_0005951A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000593DB; /* jne: not equal / not zero */

loc_00059521: ;
    ebp = MEM32(ebp + 0xC);
    xmm3 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x14); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edx + 8); /* addss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x2C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x28); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x30;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000593DB; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_0005958E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005959B: ;
    edi = MEM32(esi + 4);
    esi = MEM32(ebx + 0xC);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    eax = esi;
    PUSH32(esp, 0x000595B0u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000595B0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    esi = MEM32(ebx + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    eax = esi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000595F4u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000595F4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0xC);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0x28;
    ecx = esp + 0x34;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00059677u); RECOMP_ABI_CALL(0x00074760u, sub_00074760); /* call 0x00074760 */

loc_00059677: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00059682: ;
    eax = ZX8(MEM8(esi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00059718; /* je: equal / zero */

loc_0005968D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000593DB; /* jne: not equal / not zero */

loc_00059694: ;
    ebp = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x30); /* addss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x34); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x38); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 4); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 8); /* addss */
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    edx = esp + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005970Du); RECOMP_ABI_CALL(0x00073610u, sub_00073610); /* call 0x00073610 */

loc_0005970D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00059718: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0xC); /* addss */
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x10); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x14); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 4); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 8); /* addss */
    eax = MEM32(ebx + 0xC);
    edx = ecx + 0xC;
    PUSH32(esp, edx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00059793u); RECOMP_ABI_CALL(0x00074620u, sub_00074620); /* call 0x00074620 */

loc_00059793: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005979E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00059314
 * Original: 0x00059314 - 0x000597A5 (1169 bytes, 334 insns)
 * Folder: collision (source: COLMain.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059314(void)
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

loc_00059314: ;
    PUSH32(esp, ebx);
    if (_flags /* je: equal / zero */) goto loc_0005931D;

loc_00059317: ;
    ebx = ebp;
    ebp = eax;
    goto loc_0005931F;

loc_0005931D: ;
    ebx = eax;

loc_0005931F: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_00059327: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_0005932E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_00059334: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_0005933B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005934A; /* jne: not equal / not zero */

loc_00059341: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005934A: ;
    ecx = ZX8(MEM8(esp + 0x3C));
    edx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 4) (8-bit) */
    MEM8(esp + 0xF) = LO8(edx);
    if (CMP_AE(_fa, _fb)) goto loc_00059341; /* jae: above or equal (unsigned >=) */

loc_0005935E: ;
    PUSH32(esp, 0x00059363u); RECOMP_ABI_CALL(0x0005A920u, sub_0005A920); /* call 0x0005A920 */

loc_00059363: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_00059367: ;
    eax = ZX8(MEM8(esp + 0xF));
    ecx = MEM32(esi + 8);
    esi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00059341; /* je: equal / zero */

loc_00059377: ;
    eax = ZX8(MEM8(esi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00059389; /* je: equal / zero */

loc_0005937F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0005939D; /* jne: not equal / not zero */

loc_00059382: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    goto loc_0005938E;

loc_00059389: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);

loc_0005938E: ;
    eax = ebx;
    edi = esp + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005939Au); RECOMP_ABI_CALL(0x00058550u, sub_00058550); /* call 0x00058550 */

loc_0005939A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005939D: ;
    edx = MEM32(ebp + 0x10);
    eax = edx;
    PUSH32(esp, 0x000593A7u); RECOMP_ABI_CALL(0x0001D0B0u, sub_0001D0B0); /* call 0x0001D0B0 */

loc_000593A7: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00059682; /* je: equal / zero */

loc_000593B0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005950F; /* je: equal / zero */

loc_000593B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000593E5; /* je: equal / zero */

loc_000593BA: ;
    PUSH32(esp, 0x323190);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x999);
    PUSH32(esp, 0x3236E8);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000593D8u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000593D8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000593DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000593E5: ;
    eax = ZX8(MEM8(esi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005944E; /* je: equal / zero */

loc_000593EC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000593DB; /* jne: not equal / not zero */

loc_000593EF: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    ebp = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    ecx = esp + 0x1C;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00059443u); RECOMP_ABI_CALL(0x00073840u, sub_00073840); /* call 0x00073840 */

loc_00059443: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005944E: ;
    eax = MEM32(ebp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm6 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ecx = MEM32(esi + 4);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    edx = ecx + 0xC;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    edx = esp + 0x28;
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebx + 0xC);
    edx = esp + 0x20;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00059504u); RECOMP_ABI_CALL(0x00074620u, sub_00074620); /* call 0x00074620 */

loc_00059504: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005950F: ;
    eax = ZX8(MEM8(esi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005959B; /* je: equal / zero */

loc_0005951A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000593DB; /* jne: not equal / not zero */

loc_00059521: ;
    ebp = MEM32(ebp + 0xC);
    xmm3 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x14); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edx + 8); /* addss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x2C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x28); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x30;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000593DB; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_0005958E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005959B: ;
    edi = MEM32(esi + 4);
    esi = MEM32(ebx + 0xC);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    eax = esi;
    PUSH32(esp, 0x000595B0u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000595B0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    esi = MEM32(ebx + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    eax = esi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000595F4u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000595F4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0xC);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0x28;
    ecx = esp + 0x34;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00059677u); RECOMP_ABI_CALL(0x00074760u, sub_00074760); /* call 0x00074760 */

loc_00059677: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00059682: ;
    eax = ZX8(MEM8(esi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00059718; /* je: equal / zero */

loc_0005968D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000593DB; /* jne: not equal / not zero */

loc_00059694: ;
    ebp = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x30); /* addss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x34); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x38); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 4); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 8); /* addss */
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    edx = esp + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005970Du); RECOMP_ABI_CALL(0x00073610u, sub_00073610); /* call 0x00073610 */

loc_0005970D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00059718: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0xC); /* addss */
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x10); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 0x14); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 4); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 8); /* addss */
    eax = MEM32(ebx + 0xC);
    edx = ecx + 0xC;
    PUSH32(esp, edx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00059793u); RECOMP_ABI_CALL(0x00074620u, sub_00074620); /* call 0x00074620 */

loc_00059793: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0007A320
 * Original: 0x0007A320 - 0x0007A475 (341 bytes, 115 insns)
 * Folder: collision (source: COLcob.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007A320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007A320: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 8);
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A357; /* jne: not equal / not zero */

loc_0007A333: ;
    PUSH32(esp, 0x323A14);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x1CB);
    PUSH32(esp, 0x3239E0);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0007A351u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0007A351: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0007A357: ;
    PUSH32(esp, ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x64CF80);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0007A3A2; /* jne: not equal / not zero */

loc_0007A362: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A36D; /* jne: not equal / not zero */

loc_0007A368: ;
    PUSH32(esp, 0x0007A36Du); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0007A36D: ;
    edx = 4;
    ecx = eax;
    PUSH32(esp, 0x0007A379u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0007A379: ;
    MEM32(ebp + 4) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A38A; /* jne: not equal / not zero */

loc_0007A385: ;
    PUSH32(esp, 0x0007A38Au); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0007A38A: ;
    edx = 0x10;
    ecx = eax;
    PUSH32(esp, 0x0007A396u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0007A396: ;
    edx = MEM32(ebp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ebp + 4);
    ebx = MEM32(eax);
    goto loc_0007A3F4;

loc_0007A3A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A3AB; /* jne: not equal / not zero */

loc_0007A3A6: ;
    PUSH32(esp, 0x0007A3ABu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0007A3AB: ;
    edx = ZX8(MEM8(ebp));
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    edx = edx * 4 + 4;
    ecx = eax;
    PUSH32(esp, 0x0007A3C1u); RECOMP_ABI_CALL(0x00013820u, sub_00013820); /* call 0x00013820 */

loc_0007A3C1: ;
    MEM32(ebp + 4) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A3D2; /* jne: not equal / not zero */

loc_0007A3CD: ;
    PUSH32(esp, 0x0007A3D2u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0007A3D2: ;
    edx = 0x10;
    ecx = eax;
    PUSH32(esp, 0x0007A3DEu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0007A3DE: ;
    edx = ZX8(MEM8(ebp));
    ecx = MEM32(ebp + 4);
    MEM32(ecx + edx * 4) = eax;
    edx = ZX8(MEM8(ebp));
    eax = MEM32(ebp + 4);
    ebx = MEM32(eax + edx * 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007A3F4: ;
    eax = ZX8(MEM8(esp + 0x14));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ebx + 2) = LO16(esi);
    MEM32(ebx + 4) = esi;
    MEM32(ebx + 0xC) = esi;
    if ((_fa == 0)) goto loc_0007A433; /* je: equal / zero */

loc_0007A408: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0007A464; /* jne: not equal / not zero */

loc_0007A40D: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0007A418u); RECOMP_ABI_CALL(0x00079E00u, sub_00079E00); /* call 0x00079E00 */

loc_0007A418: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    PUSH32(esp, 0x0007A422u); RECOMP_ABI_CALL(0x0007A480u, sub_0007A480); /* call 0x0007A480 */

loc_0007A422: ;
    SET_LO8(ecx, MEM8(ebp));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM8(ebp) = LO8(ecx);
    MEM16(ebx + 2) = MEM16(ebx + 2) + 1;
    _fa = (uint32_t)(MEM16(ebx + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0007A433: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007A441; /* jne: not equal / not zero */

loc_0007A43C: ;
    PUSH32(esp, 0x0007A441u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0007A441: ;
    edx = 8;
    ecx = eax;
    PUSH32(esp, 0x0007A44Du); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0007A44D: ;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    MEM32(ebx + 8) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0x0007A464u); RECOMP_ABI_CALL(0x00079D50u, sub_00079D50); /* call 0x00079D50 */

loc_0007A464: ;
    SET_LO8(ecx, MEM8(ebp));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM8(ebp) = LO8(ecx);
    MEM16(ebx + 2) = MEM16(ebx + 2) + 1;
    _fa = (uint32_t)(MEM16(ebx + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
