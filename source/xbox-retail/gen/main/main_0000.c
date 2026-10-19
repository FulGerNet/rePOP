/**
 * PoP SoT xbox-retail - main, chunk 0
 * Start-up, main loop and full-screen videos (Jade MainXbox)
 * Functions: 58 (0x00011E30 - 0x0025CD70)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00011E30
 * Original: 0x00011E30 - 0x00011ED4 (164 bytes, 55 insns)
 * Folder: main (string: prince.bf)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011E30: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011EA2; /* je: equal / zero */

loc_00011E37: ;
    eax = MEM32(edi + 0xC3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    ecx = MEM32(edi + 8);
    PUSH32(esp, esi);
    esi = edi + 0xC24;
    if (CMP_B(_fa, _fb)) goto loc_00011E51; /* jb: below (unsigned <) */

loc_00011E4C: ;
    eax = MEM32(esi + 4);
    goto loc_00011E54;

loc_00011E51: ;
    eax = esi + 4;

loc_00011E54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xC20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x41F44C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011E6Au); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_00011E6A: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, 0x41F454);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00011E80u); RECOMP_ABI_CALL(0x00014630u, sub_00014630); /* call 0x00014630 */

loc_00011E80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011EA0; /* je: equal / zero */

loc_00011E84: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011E96; /* jb: below (unsigned <) */

loc_00011E8A: ;
    esi = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00011E94u); RECOMP_ABI_CALL(0x00012360u, sub_00012360); /* call 0x00012360 */

loc_00011E94: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00011E96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00011EA0u); RECOMP_ABI_CALL(0x00012360u, sub_00012360); /* call 0x00012360 */

loc_00011EA0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00011EA2: ;
    _fa = (uint32_t)(MEM32(edi + 0xC3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC3C), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011EB3; /* jb: below (unsigned <) */

loc_00011EAB: ;
    eax = MEM32(edi + 0xC28);
    goto loc_00011EB9;

loc_00011EB3: ;
    eax = edi + 0xC28;

loc_00011EB9: ;
    edx = MEM32(edi + 0xC20);
    PUSH32(esp, 0x41F440);
    PUSH32(esp, eax);
    PUSH32(esp, 0x41F44C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00011ED0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_00011ED0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015AA0
 * Original: 0x00015AA0 - 0x00015B20 (128 bytes, 34 insns)
 * Folder: main (match: xbox-demo 0x00012150, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015AA0: ;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(0x7584BC) = 1;
    MEM32(edi + 0x270) = 0;
    MEM32(edi + 0x2B4) = 0;
    PUSH32(esp, 0x00015AC6u); RECOMP_ABI_CALL(0x00023280u, sub_00023280); /* call 0x00023280 */

loc_00015AC6: ;
    eax = MEM32(edi + 0x214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B0E; /* je: equal / zero */

loc_00015AD0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015AD3: ;
    eax = MEM32(edi + 0x214);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00015AFB; /* jae: above or equal (unsigned >=) */

loc_00015ADE: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015AF0; /* je: equal / zero */

loc_00015AE4: ;
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015AF0; /* je: equal / zero */

loc_00015AEB: ;
    PUSH32(esp, 0x00015AF0u); RECOMP_ABI_CALL(0x0002B770u, sub_0002B770); /* call 0x0002B770 */

loc_00015AF0: ;
    eax = MEM32(edi + 0x214);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015AD3; /* jne: not equal / not zero */

loc_00015AFB: ;
    xmm0 = XMM_SCALAR(MEMF(0x429388)); /* movss */
    POP32(esp, esi);
    MEMF(0x43F8FC) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00015B0E: ;
    xmm0 = XMM_SCALAR(MEMF(0x429388)); /* movss */
    MEMF(0x43F8FC) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015B20
 * Original: 0x00015B20 - 0x00015C10 (240 bytes, 94 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015B20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015C09; /* je: equal / zero */

loc_00015B31: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015B3F; /* jne: not equal / not zero */

loc_00015B3A: ;
    PUSH32(esp, 0x00015B3Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015B3F: ;
    edx = edi * 4;
    ecx = eax;
    PUSH32(esp, 0x00015B4Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00015B4D: ;
    ecx = MEM32(esi + 0x14);
    ebp = eax;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00015B82; /* ja: above (unsigned >) */

loc_00015B5E: ;
    edi = edi;

loc_00015B60: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B75; /* je: equal / zero */

loc_00015B66: ;
    edx = ecx;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B75; /* je: equal / zero */

loc_00015B70: ;
    MEM32(ebp + edi * 4) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00015B75: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015B60; /* jbe: below or equal (unsigned <=) */

loc_00015B82: ;
    edx = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00015BEF; /* jbe: below or equal (unsigned <=) */

loc_00015B8E: ;
    edi = edi;

loc_00015B90: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ebx = MEM32(ebp + edi * 4);
    if (CMP_AE(_fa, _fb)) goto loc_00015BEA; /* jae: above or equal (unsigned >=) */

loc_00015B9E: ;
    edi = edi;

loc_00015BA0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BAD; /* je: equal / zero */

loc_00015BA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015BA0; /* jb: below (unsigned <) */

loc_00015BAB: ;
    goto loc_00015BEA;

loc_00015BAD: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015BEA; /* je: equal / zero */

loc_00015BB5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015BBCu); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015BBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00015BC6u); RECOMP_ABI_CALL(0x0002CCF0u, sub_0002CCF0); /* call 0x0002CCF0 */

loc_00015BC6: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BDB; /* je: equal / zero */

loc_00015BCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BDB; /* je: equal / zero */

loc_00015BD1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015BD8u); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015BD8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015BDB: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00015BE3u); RECOMP_ABI_CALL(0x00021660u, sub_00021660); /* call 0x00021660 */

loc_00015BE3: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015BEA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015B90; /* jb: below (unsigned <) */

loc_00015BEF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015C09; /* je: equal / zero */

loc_00015BF3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015C01; /* jne: not equal / not zero */

loc_00015BFC: ;
    PUSH32(esp, 0x00015C01u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015C01: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015C09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015C06u); } /* indirect call */
    }

loc_00015C09: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015B6B
 * Original: 0x00015B6B - 0x00015C10 (165 bytes, 67 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015B6B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B75; /* je: equal / zero */

loc_00015B70: ;
    MEM32(ebp + edi * 4) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00015B75: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00015B60(); return; } /* jbe: below or equal (unsigned <=) */

loc_00015B82: ;
    edx = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00015BEF; /* jbe: below or equal (unsigned <=) */

loc_00015B8E: ;
    edi = edi;

loc_00015B90: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ebx = MEM32(ebp + edi * 4);
    if (CMP_AE(_fa, _fb)) goto loc_00015BEA; /* jae: above or equal (unsigned >=) */

loc_00015B9E: ;
    edi = edi;

loc_00015BA0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BAD; /* je: equal / zero */

loc_00015BA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015BA0; /* jb: below (unsigned <) */

loc_00015BAB: ;
    goto loc_00015BEA;

loc_00015BAD: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015BEA; /* je: equal / zero */

loc_00015BB5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015BBCu); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015BBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00015BC6u); RECOMP_ABI_CALL(0x0002CCF0u, sub_0002CCF0); /* call 0x0002CCF0 */

loc_00015BC6: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BDB; /* je: equal / zero */

loc_00015BCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BDB; /* je: equal / zero */

loc_00015BD1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015BD8u); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015BD8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015BDB: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00015BE3u); RECOMP_ABI_CALL(0x00021660u, sub_00021660); /* call 0x00021660 */

loc_00015BE3: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015BEA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015B90; /* jb: below (unsigned <) */

loc_00015BEF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015C09; /* je: equal / zero */

loc_00015BF3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015C01; /* jne: not equal / not zero */

loc_00015BFC: ;
    PUSH32(esp, 0x00015C01u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015C01: ;
    edx = MEM32(eax);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015C09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015C06u); } /* indirect call */
    }

loc_00015C09: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015B8C
 * Original: 0x00015B8C - 0x00015C10 (132 bytes, 54 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015B8C: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_00015BEF;

loc_00015B8E: ;
    edi = edi;

loc_00015B90: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ebx = MEM32(ebp + edi * 4);
    if (CMP_AE(_fa, _fb)) goto loc_00015BEA; /* jae: above or equal (unsigned >=) */

loc_00015B9E: ;
    edi = edi;

loc_00015BA0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BAD; /* je: equal / zero */

loc_00015BA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015BA0; /* jb: below (unsigned <) */

loc_00015BAB: ;
    goto loc_00015BEA;

loc_00015BAD: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015BEA; /* je: equal / zero */

loc_00015BB5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015BBCu); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015BBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00015BC6u); RECOMP_ABI_CALL(0x0002CCF0u, sub_0002CCF0); /* call 0x0002CCF0 */

loc_00015BC6: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BDB; /* je: equal / zero */

loc_00015BCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BDB; /* je: equal / zero */

loc_00015BD1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015BD8u); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015BD8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015BDB: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00015BE3u); RECOMP_ABI_CALL(0x00021660u, sub_00021660); /* call 0x00021660 */

loc_00015BE3: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015BEA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015B90; /* jb: below (unsigned <) */

loc_00015BEF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015C09; /* je: equal / zero */

loc_00015BF3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015C01; /* jne: not equal / not zero */

loc_00015BFC: ;
    PUSH32(esp, 0x00015C01u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015C01: ;
    edx = MEM32(eax);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015C09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015C06u); } /* indirect call */
    }

loc_00015C09: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015C10
 * Original: 0x00015C10 - 0x00016022 (1042 bytes, 306 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015C10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001601B; /* je: equal / zero */

loc_00015C20: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEM32(esi + 0x470) = ebp;
    MEM32(esi + 0x468) = ebp;
    MEM32(esi + 0x46C) = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 1;
    MEM32(0x67B6A0) = eax;
    MEM32(0x758488) = ebx;
    MEMF(0x43B12C) = xmm0.f[0]; /* movss */
    MEM32(0x7584BC) = ebx;
    MEM32(0x758DE8) = ebp;
    MEM32(0x758DEC) = ebp;
    MEM32(0x67B6A4) = eax;
    PUSH32(esp, 0x00015C70u); RECOMP_ABI_CALL(0x000E7DC0u, sub_000E7DC0); /* call 0x000E7DC0 */

loc_00015C70: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    MEM32(0x758DF4) = ebp;
    MEM32(esi + 0x270) = ebp;
    MEM32(esi + 0x2B4) = ebp;
    edx = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00015CB9; /* jbe: below or equal (unsigned <=) */

loc_00015C89: ;
    eax = 0xD0;
    edi = edi;

loc_00015C90: ;
    ecx = MEM32(esi + 0x30);
    MEM8(ecx + eax + 0xA4) = MEM8(ecx + eax + 0xA4) & 0xFE;
    _fa = (uint32_t)(MEM8(ecx + eax + 0xA4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = ecx + eax + 0xA4;
    ecx = MEM32(esi + 0x30);
    MEM32(ecx + eax + 0xC0) = ebp;
    ecx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015C90; /* jb: below (unsigned <) */

loc_00015CB9: ;
    edx = MEM32(esi + 0x30);
    MEM32(esi + 4) = ebx;
    MEM32(edx + 0xA0) = ebp;
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E22; /* je: equal / zero */

loc_00015CD0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015CDE; /* jne: not equal / not zero */

loc_00015CD9: ;
    PUSH32(esp, 0x00015CDEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015CDE: ;
    edx = edi * 4;
    ecx = eax;
    PUSH32(esp, 0x00015CECu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00015CEC: ;
    ecx = MEM32(esi + 0x14);
    edx = eax;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_A(_fa, _fb)) goto loc_00015D22; /* ja: above (unsigned >) */

loc_00015D01: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D15; /* je: equal / zero */

loc_00015D07: ;
    ebx = ecx;
    SET_LO8(ebx, LO8(ebx) & 3);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D15; /* je: equal / zero */

loc_00015D11: ;
    MEM32(edx + edi * 4) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00015D15: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015D01; /* jbe: below or equal (unsigned <=) */

loc_00015D22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00015D7F; /* jbe: below or equal (unsigned <=) */

loc_00015D30: ;
    edi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x20000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015D6E; /* jne: not equal / not zero */

loc_00015D3B: ;
    ebx = MEM32(edi + 4);
    eax = MEM32(esp + 0x1C);
    ebx = ebx >> 0x1A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015D51; /* jne: not equal / not zero */

loc_00015D4D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D6E; /* je: equal / zero */

loc_00015D51: ;
    ecx = edi;
    PUSH32(esp, 0x00015D58u); RECOMP_ABI_CALL(0x00015690u, sub_00015690); /* call 0x00015690 */

loc_00015D58: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015D6A; /* jne: not equal / not zero */

loc_00015D5F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D6A; /* je: equal / zero */

loc_00015D63: ;
    MEM32(edi + 4) = MEM32(edi + 4) | 0x4000000;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00015D6A: ;
    edx = MEM32(esp + 0x10);

loc_00015D6E: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00015D30; /* jb: below (unsigned <) */

loc_00015D7F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00015DFF; /* jbe: below or equal (unsigned <=) */

loc_00015D89: ;
    /* nop */

loc_00015D90: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edi = MEM32(edx + ebx * 4);
    if (CMP_AE(_fa, _fb)) goto loc_00015DF2; /* jae: above or equal (unsigned >=) */

loc_00015D9D: ;
    /* nop */

loc_00015DA0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DAD; /* je: equal / zero */

loc_00015DA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015DA0; /* jb: below (unsigned <) */

loc_00015DAB: ;
    goto loc_00015DF2;

loc_00015DAD: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015DF2; /* je: equal / zero */

loc_00015DB5: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015DBCu); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015DBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    ebx = edi;
    PUSH32(esp, 0x00015DC8u); RECOMP_ABI_CALL(0x0002CCF0u, sub_0002CCF0); /* call 0x0002CCF0 */

loc_00015DC8: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DDD; /* je: equal / zero */

loc_00015DCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DDD; /* je: equal / zero */

loc_00015DD3: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015DDAu); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015DDA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015DDD: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00015DE5u); RECOMP_ABI_CALL(0x00021660u, sub_00021660); /* call 0x00021660 */

loc_00015DE5: ;
    edx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015DF2: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00015D90; /* jb: below (unsigned <) */

loc_00015DFF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E1D; /* je: equal / zero */

loc_00015E03: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E15; /* jne: not equal / not zero */

loc_00015E0C: ;
    PUSH32(esp, 0x00015E11u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015E11: ;
    edx = MEM32(esp + 0x10);

loc_00015E15: ;
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x00015E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015E1Au); } /* indirect call */
    }

loc_00015E1D: ;
    ebx = 1;

loc_00015E22: ;
    edi = esi;
    PUSH32(esp, 0x00015E29u); RECOMP_ABI_CALL(0x00023280u, sub_00023280); /* call 0x00023280 */

loc_00015E29: ;
    eax = MEM32(esi + 0x214);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E59; /* je: equal / zero */

loc_00015E35: ;
    eax = MEM32(esi + 0x214);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00015E59; /* jae: above or equal (unsigned >=) */

loc_00015E40: ;
    edx = MEM32(eax);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E4E; /* je: equal / zero */

loc_00015E49: ;
    PUSH32(esp, 0x00015E4Eu); RECOMP_ABI_CALL(0x0002B770u, sub_0002B770); /* call 0x0002B770 */

loc_00015E4E: ;
    eax = MEM32(esi + 0x214);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E35; /* jne: not equal / not zero */

loc_00015E59: ;
    edi = MEM32(esp + 0x1C);
    eax = esi + 0x474;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015E6Au); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E6A: ;
    ecx = esi + 0x478;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015E77u); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E77: ;
    edx = esi + 0x47C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00015E84u); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E84: ;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015EC7; /* je: equal / zero */

loc_00015E8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ebp);
    ecx = 0x400;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0x10);
    ecx = 0x3FF0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = ebx;

loc_00015EC7: ;
    xmm0 = XMM_SCALAR(MEMF(0x429388)); /* movss */
    MEMF(0x43F8FC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00015EDCu); RECOMP_ABI_CALL(0x000DD4C0u, sub_000DD4C0); /* call 0x000DD4C0 */

loc_00015EDC: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015F14; /* jbe: below or equal (unsigned <=) */

loc_00015EE5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00015EF0;

    /* nop */

loc_00015EF0: ;
    eax = MEM32(esi + 0x30);
    SET_LO8(ebx, MEM8(eax + edx + 0xA4));
    eax = eax + edx + 0xA4;
    SET_LO8(ebx, LO8(ebx) | 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ebx);
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015EF0; /* jb: below (unsigned <) */

loc_00015F14: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F1D: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F26: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00015F2Eu); RECOMP_ABI_CALL(0x000A20F0u, sub_000A20F0); /* call 0x000A20F0 */

loc_00015F2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015F31: ;
    _fa = (uint32_t)(MEM8(0x758484)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758484), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FC3; /* jne: not equal / not zero */

loc_00015F3E: ;
    SET_LO8(eax, MEM8(0x758485));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FC3; /* jne: not equal / not zero */

loc_00015F4B: ;
    eax = MEM32(0x75852C);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0x10) = ebp;
    edi = MEM32(0x758534);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = ecx;
    edx = 7;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ebp;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = ebp;
    MEM32(eax + 0x44) = ebp;
    MEM32(eax + 0x48) = ebp;
    MEM32(eax + 0x4C) = ebp;
    MEM32(eax + 0x50) = ebp;
    MEM32(eax + 0x54) = ebp;
    MEM32(eax + 0x58) = ebp;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ebp;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(0x758530);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x3C) = ebp;
    MEM32(eax + 0x40) = ecx;
    PUSH32(esp, 0x00015FC3u); RECOMP_ABI_CALL(0x0002E620u, sub_0002E620); /* call 0x0002E620 */

loc_00015FC3: ;
    xmm0 = XMM_SCALAR(MEMF(0x430E8C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x430E94)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x430E90); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x430E90) = xmm2.f[0]; /* movss */
    MEMF(0x430E94) = xmm1.f[0]; /* movss */
    MEMF(0x430E8C) = xmm0.f[0]; /* movss */
    MEMF(0x430E98) = xmm0.f[0]; /* movss */
    MEM32(0x758488) = ebp;

loc_0001601B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015C54
 * Original: 0x00015C54 - 0x00016022 (974 bytes, 290 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015C54: ;
    MEM32(0x7584BC) = ebx;
    MEM32(0x758DE8) = ebp;
    MEM32(0x758DEC) = ebp;
    MEM32(0x67B6A4) = eax;
    PUSH32(esp, 0x00015C70u); RECOMP_ABI_CALL(0x000E7DC0u, sub_000E7DC0); /* call 0x000E7DC0 */

loc_00015C70: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    MEM32(0x758DF4) = ebp;
    MEM32(esi + 0x270) = ebp;
    MEM32(esi + 0x2B4) = ebp;
    edx = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00015CB9; /* jbe: below or equal (unsigned <=) */

loc_00015C89: ;
    eax = 0xD0;
    edi = edi;

loc_00015C90: ;
    ecx = MEM32(esi + 0x30);
    MEM8(ecx + eax + 0xA4) = MEM8(ecx + eax + 0xA4) & 0xFE;
    _fa = (uint32_t)(MEM8(ecx + eax + 0xA4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = ecx + eax + 0xA4;
    ecx = MEM32(esi + 0x30);
    MEM32(ecx + eax + 0xC0) = ebp;
    ecx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015C90; /* jb: below (unsigned <) */

loc_00015CB9: ;
    edx = MEM32(esi + 0x30);
    MEM32(esi + 4) = ebx;
    MEM32(edx + 0xA0) = ebp;
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E22; /* je: equal / zero */

loc_00015CD0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015CDE; /* jne: not equal / not zero */

loc_00015CD9: ;
    PUSH32(esp, 0x00015CDEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015CDE: ;
    edx = edi * 4;
    ecx = eax;
    PUSH32(esp, 0x00015CECu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00015CEC: ;
    ecx = MEM32(esi + 0x14);
    edx = eax;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_A(_fa, _fb)) goto loc_00015D22; /* ja: above (unsigned >) */

loc_00015D01: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D15; /* je: equal / zero */

loc_00015D07: ;
    ebx = ecx;
    SET_LO8(ebx, LO8(ebx) & 3);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D15; /* je: equal / zero */

loc_00015D11: ;
    MEM32(edx + edi * 4) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00015D15: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015D01; /* jbe: below or equal (unsigned <=) */

loc_00015D22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00015D7F; /* jbe: below or equal (unsigned <=) */

loc_00015D30: ;
    edi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x20000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015D6E; /* jne: not equal / not zero */

loc_00015D3B: ;
    ebx = MEM32(edi + 4);
    eax = MEM32(esp + 0x1C);
    ebx = ebx >> 0x1A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015D51; /* jne: not equal / not zero */

loc_00015D4D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D6E; /* je: equal / zero */

loc_00015D51: ;
    ecx = edi;
    PUSH32(esp, 0x00015D58u); RECOMP_ABI_CALL(0x00015690u, sub_00015690); /* call 0x00015690 */

loc_00015D58: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015D6A; /* jne: not equal / not zero */

loc_00015D5F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D6A; /* je: equal / zero */

loc_00015D63: ;
    MEM32(edi + 4) = MEM32(edi + 4) | 0x4000000;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00015D6A: ;
    edx = MEM32(esp + 0x10);

loc_00015D6E: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00015D30; /* jb: below (unsigned <) */

loc_00015D7F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00015DFF; /* jbe: below or equal (unsigned <=) */

loc_00015D89: ;
    /* nop */

loc_00015D90: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edi = MEM32(edx + ebx * 4);
    if (CMP_AE(_fa, _fb)) goto loc_00015DF2; /* jae: above or equal (unsigned >=) */

loc_00015D9D: ;
    /* nop */

loc_00015DA0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DAD; /* je: equal / zero */

loc_00015DA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015DA0; /* jb: below (unsigned <) */

loc_00015DAB: ;
    goto loc_00015DF2;

loc_00015DAD: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015DF2; /* je: equal / zero */

loc_00015DB5: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015DBCu); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015DBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    ebx = edi;
    PUSH32(esp, 0x00015DC8u); RECOMP_ABI_CALL(0x0002CCF0u, sub_0002CCF0); /* call 0x0002CCF0 */

loc_00015DC8: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DDD; /* je: equal / zero */

loc_00015DCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DDD; /* je: equal / zero */

loc_00015DD3: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015DDAu); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015DDA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015DDD: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00015DE5u); RECOMP_ABI_CALL(0x00021660u, sub_00021660); /* call 0x00021660 */

loc_00015DE5: ;
    edx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015DF2: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00015D90; /* jb: below (unsigned <) */

loc_00015DFF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E1D; /* je: equal / zero */

loc_00015E03: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E15; /* jne: not equal / not zero */

loc_00015E0C: ;
    PUSH32(esp, 0x00015E11u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015E11: ;
    edx = MEM32(esp + 0x10);

loc_00015E15: ;
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x00015E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015E1Au); } /* indirect call */
    }

loc_00015E1D: ;
    ebx = 1;

loc_00015E22: ;
    edi = esi;
    PUSH32(esp, 0x00015E29u); RECOMP_ABI_CALL(0x00023280u, sub_00023280); /* call 0x00023280 */

loc_00015E29: ;
    eax = MEM32(esi + 0x214);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E59; /* je: equal / zero */

loc_00015E35: ;
    eax = MEM32(esi + 0x214);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00015E59; /* jae: above or equal (unsigned >=) */

loc_00015E40: ;
    edx = MEM32(eax);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E4E; /* je: equal / zero */

loc_00015E49: ;
    PUSH32(esp, 0x00015E4Eu); RECOMP_ABI_CALL(0x0002B770u, sub_0002B770); /* call 0x0002B770 */

loc_00015E4E: ;
    eax = MEM32(esi + 0x214);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E35; /* jne: not equal / not zero */

loc_00015E59: ;
    edi = MEM32(esp + 0x1C);
    eax = esi + 0x474;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015E6Au); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E6A: ;
    ecx = esi + 0x478;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015E77u); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E77: ;
    edx = esi + 0x47C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00015E84u); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E84: ;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015EC7; /* je: equal / zero */

loc_00015E8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ebp);
    ecx = 0x400;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0x10);
    ecx = 0x3FF0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = ebx;

loc_00015EC7: ;
    xmm0 = XMM_SCALAR(MEMF(0x429388)); /* movss */
    MEMF(0x43F8FC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00015EDCu); RECOMP_ABI_CALL(0x000DD4C0u, sub_000DD4C0); /* call 0x000DD4C0 */

loc_00015EDC: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015F14; /* jbe: below or equal (unsigned <=) */

loc_00015EE5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00015EF0;

    /* nop */

loc_00015EF0: ;
    eax = MEM32(esi + 0x30);
    SET_LO8(ebx, MEM8(eax + edx + 0xA4));
    eax = eax + edx + 0xA4;
    SET_LO8(ebx, LO8(ebx) | 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ebx);
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015EF0; /* jb: below (unsigned <) */

loc_00015F14: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F1D: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F26: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00015F2Eu); RECOMP_ABI_CALL(0x000A20F0u, sub_000A20F0); /* call 0x000A20F0 */

loc_00015F2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015F31: ;
    _fa = (uint32_t)(MEM8(0x758484)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758484), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FC3; /* jne: not equal / not zero */

loc_00015F3E: ;
    SET_LO8(eax, MEM8(0x758485));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FC3; /* jne: not equal / not zero */

loc_00015F4B: ;
    eax = MEM32(0x75852C);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0x10) = ebp;
    edi = MEM32(0x758534);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = ecx;
    edx = 7;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ebp;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = ebp;
    MEM32(eax + 0x44) = ebp;
    MEM32(eax + 0x48) = ebp;
    MEM32(eax + 0x4C) = ebp;
    MEM32(eax + 0x50) = ebp;
    MEM32(eax + 0x54) = ebp;
    MEM32(eax + 0x58) = ebp;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ebp;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(0x758530);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x3C) = ebp;
    MEM32(eax + 0x40) = ecx;
    PUSH32(esp, 0x00015FC3u); RECOMP_ABI_CALL(0x0002E620u, sub_0002E620); /* call 0x0002E620 */

loc_00015FC3: ;
    xmm0 = XMM_SCALAR(MEMF(0x430E8C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x430E94)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x430E90); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x430E90) = xmm2.f[0]; /* movss */
    MEMF(0x430E94) = xmm1.f[0]; /* movss */
    MEMF(0x430E8C) = xmm0.f[0]; /* movss */
    MEMF(0x430E98) = xmm0.f[0]; /* movss */
    MEM32(0x758488) = ebp;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015CBC
 * Original: 0x00015CBC - 0x00016022 (870 bytes, 266 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015CBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015CBC: ;
    MEM32(esi + 4) = ebx;
    MEM32(edx + 0xA0) = ebp;
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E22; /* je: equal / zero */

loc_00015CD0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015CDE; /* jne: not equal / not zero */

loc_00015CD9: ;
    PUSH32(esp, 0x00015CDEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015CDE: ;
    edx = edi * 4;
    ecx = eax;
    PUSH32(esp, 0x00015CECu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00015CEC: ;
    ecx = MEM32(esi + 0x14);
    edx = eax;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_A(_fa, _fb)) goto loc_00015D22; /* ja: above (unsigned >) */

loc_00015D01: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D15; /* je: equal / zero */

loc_00015D07: ;
    ebx = ecx;
    SET_LO8(ebx, LO8(ebx) & 3);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D15; /* je: equal / zero */

loc_00015D11: ;
    MEM32(edx + edi * 4) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00015D15: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015D01; /* jbe: below or equal (unsigned <=) */

loc_00015D22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00015D7F; /* jbe: below or equal (unsigned <=) */

loc_00015D30: ;
    edi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x20000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015D6E; /* jne: not equal / not zero */

loc_00015D3B: ;
    ebx = MEM32(edi + 4);
    eax = MEM32(esp + 0x1C);
    ebx = ebx >> 0x1A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015D51; /* jne: not equal / not zero */

loc_00015D4D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D6E; /* je: equal / zero */

loc_00015D51: ;
    ecx = edi;
    PUSH32(esp, 0x00015D58u); RECOMP_ABI_CALL(0x00015690u, sub_00015690); /* call 0x00015690 */

loc_00015D58: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015D6A; /* jne: not equal / not zero */

loc_00015D5F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D6A; /* je: equal / zero */

loc_00015D63: ;
    MEM32(edi + 4) = MEM32(edi + 4) | 0x4000000;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00015D6A: ;
    edx = MEM32(esp + 0x10);

loc_00015D6E: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00015D30; /* jb: below (unsigned <) */

loc_00015D7F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00015DFF; /* jbe: below or equal (unsigned <=) */

loc_00015D89: ;
    /* nop */

loc_00015D90: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edi = MEM32(edx + ebx * 4);
    if (CMP_AE(_fa, _fb)) goto loc_00015DF2; /* jae: above or equal (unsigned >=) */

loc_00015D9D: ;
    /* nop */

loc_00015DA0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DAD; /* je: equal / zero */

loc_00015DA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015DA0; /* jb: below (unsigned <) */

loc_00015DAB: ;
    goto loc_00015DF2;

loc_00015DAD: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015DF2; /* je: equal / zero */

loc_00015DB5: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015DBCu); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015DBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    ebx = edi;
    PUSH32(esp, 0x00015DC8u); RECOMP_ABI_CALL(0x0002CCF0u, sub_0002CCF0); /* call 0x0002CCF0 */

loc_00015DC8: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DDD; /* je: equal / zero */

loc_00015DCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DDD; /* je: equal / zero */

loc_00015DD3: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015DDAu); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_00015DDA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015DDD: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00015DE5u); RECOMP_ABI_CALL(0x00021660u, sub_00021660); /* call 0x00021660 */

loc_00015DE5: ;
    edx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015DF2: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00015D90; /* jb: below (unsigned <) */

loc_00015DFF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E1D; /* je: equal / zero */

loc_00015E03: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E15; /* jne: not equal / not zero */

loc_00015E0C: ;
    PUSH32(esp, 0x00015E11u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015E11: ;
    edx = MEM32(esp + 0x10);

loc_00015E15: ;
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x00015E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015E1Au); } /* indirect call */
    }

loc_00015E1D: ;
    ebx = 1;

loc_00015E22: ;
    edi = esi;
    PUSH32(esp, 0x00015E29u); RECOMP_ABI_CALL(0x00023280u, sub_00023280); /* call 0x00023280 */

loc_00015E29: ;
    eax = MEM32(esi + 0x214);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E59; /* je: equal / zero */

loc_00015E35: ;
    eax = MEM32(esi + 0x214);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00015E59; /* jae: above or equal (unsigned >=) */

loc_00015E40: ;
    edx = MEM32(eax);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E4E; /* je: equal / zero */

loc_00015E49: ;
    PUSH32(esp, 0x00015E4Eu); RECOMP_ABI_CALL(0x0002B770u, sub_0002B770); /* call 0x0002B770 */

loc_00015E4E: ;
    eax = MEM32(esi + 0x214);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E35; /* jne: not equal / not zero */

loc_00015E59: ;
    edi = MEM32(esp + 0x1C);
    eax = esi + 0x474;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015E6Au); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E6A: ;
    ecx = esi + 0x478;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015E77u); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E77: ;
    edx = esi + 0x47C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00015E84u); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E84: ;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015EC7; /* je: equal / zero */

loc_00015E8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ebp);
    ecx = 0x400;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0x10);
    ecx = 0x3FF0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = ebx;

loc_00015EC7: ;
    xmm0 = XMM_SCALAR(MEMF(0x429388)); /* movss */
    MEMF(0x43F8FC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00015EDCu); RECOMP_ABI_CALL(0x000DD4C0u, sub_000DD4C0); /* call 0x000DD4C0 */

loc_00015EDC: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015F14; /* jbe: below or equal (unsigned <=) */

loc_00015EE5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00015EF0;

    /* nop */

loc_00015EF0: ;
    eax = MEM32(esi + 0x30);
    SET_LO8(ebx, MEM8(eax + edx + 0xA4));
    eax = eax + edx + 0xA4;
    SET_LO8(ebx, LO8(ebx) | 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ebx);
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015EF0; /* jb: below (unsigned <) */

loc_00015F14: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F1D: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F26: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00015F2Eu); RECOMP_ABI_CALL(0x000A20F0u, sub_000A20F0); /* call 0x000A20F0 */

loc_00015F2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015F31: ;
    _fa = (uint32_t)(MEM8(0x758484)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758484), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FC3; /* jne: not equal / not zero */

loc_00015F3E: ;
    SET_LO8(eax, MEM8(0x758485));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FC3; /* jne: not equal / not zero */

loc_00015F4B: ;
    eax = MEM32(0x75852C);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0x10) = ebp;
    edi = MEM32(0x758534);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = ecx;
    edx = 7;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ebp;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = ebp;
    MEM32(eax + 0x44) = ebp;
    MEM32(eax + 0x48) = ebp;
    MEM32(eax + 0x4C) = ebp;
    MEM32(eax + 0x50) = ebp;
    MEM32(eax + 0x54) = ebp;
    MEM32(eax + 0x58) = ebp;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ebp;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(0x758530);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x3C) = ebp;
    MEM32(eax + 0x40) = ecx;
    PUSH32(esp, 0x00015FC3u); RECOMP_ABI_CALL(0x0002E620u, sub_0002E620); /* call 0x0002E620 */

loc_00015FC3: ;
    xmm0 = XMM_SCALAR(MEMF(0x430E8C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x430E94)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x430E90); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x430E90) = xmm2.f[0]; /* movss */
    MEMF(0x430E94) = xmm1.f[0]; /* movss */
    MEMF(0x430E8C) = xmm0.f[0]; /* movss */
    MEMF(0x430E98) = xmm0.f[0]; /* movss */
    MEM32(0x758488) = ebp;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015DE9
 * Original: 0x00015DE9 - 0x00016022 (569 bytes, 163 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015DE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015DE9: ;
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00015D90(); return; } /* jb: below (unsigned <) */

loc_00015DFF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E1D; /* je: equal / zero */

loc_00015E03: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E15; /* jne: not equal / not zero */

loc_00015E0C: ;
    PUSH32(esp, 0x00015E11u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015E11: ;
    edx = MEM32(esp + 0x10);

loc_00015E15: ;
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x00015E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015E1Au); } /* indirect call */
    }

loc_00015E1D: ;
    ebx = 1;
    edi = esi;
    PUSH32(esp, 0x00015E29u); RECOMP_ABI_CALL(0x00023280u, sub_00023280); /* call 0x00023280 */

loc_00015E29: ;
    eax = MEM32(esi + 0x214);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E59; /* je: equal / zero */

loc_00015E35: ;
    eax = MEM32(esi + 0x214);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00015E59; /* jae: above or equal (unsigned >=) */

loc_00015E40: ;
    edx = MEM32(eax);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E4E; /* je: equal / zero */

loc_00015E49: ;
    PUSH32(esp, 0x00015E4Eu); RECOMP_ABI_CALL(0x0002B770u, sub_0002B770); /* call 0x0002B770 */

loc_00015E4E: ;
    eax = MEM32(esi + 0x214);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E35; /* jne: not equal / not zero */

loc_00015E59: ;
    edi = MEM32(esp + 0x1C);
    eax = esi + 0x474;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015E6Au); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E6A: ;
    ecx = esi + 0x478;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015E77u); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E77: ;
    edx = esi + 0x47C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00015E84u); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E84: ;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015EC7; /* je: equal / zero */

loc_00015E8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ebp);
    ecx = 0x400;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0x10);
    ecx = 0x3FF0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = ebx;

loc_00015EC7: ;
    xmm0 = XMM_SCALAR(MEMF(0x429388)); /* movss */
    MEMF(0x43F8FC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00015EDCu); RECOMP_ABI_CALL(0x000DD4C0u, sub_000DD4C0); /* call 0x000DD4C0 */

loc_00015EDC: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015F14; /* jbe: below or equal (unsigned <=) */

loc_00015EE5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00015EF0;

    /* nop */

loc_00015EF0: ;
    eax = MEM32(esi + 0x30);
    SET_LO8(ebx, MEM8(eax + edx + 0xA4));
    eax = eax + edx + 0xA4;
    SET_LO8(ebx, LO8(ebx) | 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ebx);
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015EF0; /* jb: below (unsigned <) */

loc_00015F14: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F1D: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F26: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00015F2Eu); RECOMP_ABI_CALL(0x000A20F0u, sub_000A20F0); /* call 0x000A20F0 */

loc_00015F2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015F31: ;
    _fa = (uint32_t)(MEM8(0x758484)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758484), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FC3; /* jne: not equal / not zero */

loc_00015F3E: ;
    SET_LO8(eax, MEM8(0x758485));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FC3; /* jne: not equal / not zero */

loc_00015F4B: ;
    eax = MEM32(0x75852C);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0x10) = ebp;
    edi = MEM32(0x758534);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = ecx;
    edx = 7;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ebp;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = ebp;
    MEM32(eax + 0x44) = ebp;
    MEM32(eax + 0x48) = ebp;
    MEM32(eax + 0x4C) = ebp;
    MEM32(eax + 0x50) = ebp;
    MEM32(eax + 0x54) = ebp;
    MEM32(eax + 0x58) = ebp;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ebp;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(0x758530);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x3C) = ebp;
    MEM32(eax + 0x40) = ecx;
    PUSH32(esp, 0x00015FC3u); RECOMP_ABI_CALL(0x0002E620u, sub_0002E620); /* call 0x0002E620 */

loc_00015FC3: ;
    xmm0 = XMM_SCALAR(MEMF(0x430E8C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x430E94)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x430E90); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x430E90) = xmm2.f[0]; /* movss */
    MEMF(0x430E94) = xmm1.f[0]; /* movss */
    MEMF(0x430E8C) = xmm0.f[0]; /* movss */
    MEMF(0x430E98) = xmm0.f[0]; /* movss */
    MEM32(0x758488) = ebp;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015E03
 * Original: 0x00015E03 - 0x00016022 (543 bytes, 153 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015E03: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E15; /* jne: not equal / not zero */

loc_00015E0C: ;
    PUSH32(esp, 0x00015E11u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00015E11: ;
    edx = MEM32(esp + 0x10);

loc_00015E15: ;
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x00015E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015E1Au); } /* indirect call */
    }

loc_00015E1D: ;
    ebx = 1;
    edi = esi;
    PUSH32(esp, 0x00015E29u); RECOMP_ABI_CALL(0x00023280u, sub_00023280); /* call 0x00023280 */

loc_00015E29: ;
    eax = MEM32(esi + 0x214);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E59; /* je: equal / zero */

loc_00015E35: ;
    eax = MEM32(esi + 0x214);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00015E59; /* jae: above or equal (unsigned >=) */

loc_00015E40: ;
    edx = MEM32(eax);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E4E; /* je: equal / zero */

loc_00015E49: ;
    PUSH32(esp, 0x00015E4Eu); RECOMP_ABI_CALL(0x0002B770u, sub_0002B770); /* call 0x0002B770 */

loc_00015E4E: ;
    eax = MEM32(esi + 0x214);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E35; /* jne: not equal / not zero */

loc_00015E59: ;
    edi = MEM32(esp + 0x1C);
    eax = esi + 0x474;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015E6Au); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E6A: ;
    ecx = esi + 0x478;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015E77u); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E77: ;
    edx = esi + 0x47C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00015E84u); RECOMP_ABI_CALL(0x002FC2B0u, sub_002FC2B0); /* call 0x002FC2B0 */

loc_00015E84: ;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015EC7; /* je: equal / zero */

loc_00015E8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ebp);
    ecx = 0x400;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0x10);
    ecx = 0x3FF0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = ebx;

loc_00015EC7: ;
    xmm0 = XMM_SCALAR(MEMF(0x429388)); /* movss */
    MEMF(0x43F8FC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00015EDCu); RECOMP_ABI_CALL(0x000DD4C0u, sub_000DD4C0); /* call 0x000DD4C0 */

loc_00015EDC: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00015F14; /* jbe: below or equal (unsigned <=) */

loc_00015EE5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00015EF0;

    /* nop */

loc_00015EF0: ;
    eax = MEM32(esi + 0x30);
    SET_LO8(ebx, MEM8(eax + edx + 0xA4));
    eax = eax + edx + 0xA4;
    SET_LO8(ebx, LO8(ebx) | 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ebx);
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015EF0; /* jb: below (unsigned <) */

loc_00015F14: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F1D: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F26: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00015F2Eu); RECOMP_ABI_CALL(0x000A20F0u, sub_000A20F0); /* call 0x000A20F0 */

loc_00015F2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015F31: ;
    _fa = (uint32_t)(MEM8(0x758484)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758484), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FC3; /* jne: not equal / not zero */

loc_00015F3E: ;
    SET_LO8(eax, MEM8(0x758485));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FC3; /* jne: not equal / not zero */

loc_00015F4B: ;
    eax = MEM32(0x75852C);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0x10) = ebp;
    edi = MEM32(0x758534);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = ecx;
    edx = 7;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ebp;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = ebp;
    MEM32(eax + 0x44) = ebp;
    MEM32(eax + 0x48) = ebp;
    MEM32(eax + 0x4C) = ebp;
    MEM32(eax + 0x50) = ebp;
    MEM32(eax + 0x54) = ebp;
    MEM32(eax + 0x58) = ebp;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ebp;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(0x758530);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x28) = ebp;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x3C) = ebp;
    MEM32(eax + 0x40) = ecx;
    PUSH32(esp, 0x00015FC3u); RECOMP_ABI_CALL(0x0002E620u, sub_0002E620); /* call 0x0002E620 */

loc_00015FC3: ;
    xmm0 = XMM_SCALAR(MEMF(0x430E8C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x430E94)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x430E90); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x430E90) = xmm2.f[0]; /* movss */
    MEMF(0x430E94) = xmm1.f[0]; /* movss */
    MEMF(0x430E8C) = xmm0.f[0]; /* movss */
    MEMF(0x430E98) = xmm0.f[0]; /* movss */
    MEM32(0x758488) = ebp;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00016030
 * Original: 0x00016030 - 0x00016043 (19 bytes, 9 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016030: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001603D; /* je: equal / zero */

loc_00016034: ;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001603D; /* je: equal / zero */

loc_0001603A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0001603D: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0001604F
 * Original: 0x0001604F - 0x00016050 (1 bytes, 1 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001604F(void)
{

loc_0001604F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00016050
 * Original: 0x00016050 - 0x0001605F (15 bytes, 5 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016050: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001605E; /* jne: not equal / not zero */

loc_00016059: ;
    g_seh_ebp = ebp; sub_000955C0(); return; /* tail jmp 0x000955C0 */

loc_0001605E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00016060
 * Original: 0x00016060 - 0x000160BF (95 bytes, 32 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00016060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016070u); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_00016070: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00016078u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016075u); } /* indirect call */
    }

loc_00016078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000160B9; /* jne: not equal / not zero */

loc_0001607C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = 0x1000;
    edx = eax;
    ecx = 0x41F48C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016092u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00016092: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x400;
    esi = esp + 8;
    edi = esp + 0x1008;
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
    PUSH32(esp, 0x42ABA0);
    ecx = esp + 0x100C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000160B9u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_000160B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000160C0
 * Original: 0x000160C0 - 0x00016162 (162 bytes, 59 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000160C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000160C0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x44A514);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001615F; /* je: equal / zero */

loc_000160D4: ;
    eax = MEM32(ebp + 0x988);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001612C; /* je: equal / zero */

loc_000160DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001612C; /* jne: not equal / not zero */

loc_000160E2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0x765938;
    eax = esi + 0x1D8;
    /* nop */

loc_000160F0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00016118; /* jne: not equal / not zero */

loc_000160FA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016114; /* je: equal / zero */

loc_000160FE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(edi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00016118; /* jne: not equal / not zero */

loc_0001610A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000160F0; /* jne: not equal / not zero */

loc_00016114: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001611D;

loc_00016118: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0001611D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0001612C; /* jne: not equal / not zero */

loc_00016123: ;
    eax = MEM32(0x7584D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001615F; /* je: equal / zero */

loc_0001612C: ;
    eax = esi + 0x1D8;
    edx = 0x765938;
    MEM32(0x7584D0) = 0;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00016143: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00016143; /* jne: not equal / not zero */

loc_0001614D: ;
    eax = ebp;
    PUSH32(esp, 0x00016154u); RECOMP_ABI_CALL(0x002FAD30u, sub_002FAD30); /* call 0x002FAD30 */

loc_00016154: ;
    eax = MEM32(0x44A514);
    MEM32(ebp + 0x988) = eax;

loc_0001615F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00016170
 * Original: 0x00016170 - 0x0001646D (765 bytes, 190 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016170(void)
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

loc_00016170: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, 0x00016188u); RECOMP_ABI_CALL(0x000160C0u, sub_000160C0); /* call 0x000160C0 */

loc_00016188: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00016190u); RECOMP_ABI_CALL(0x002FA040u, sub_002FA040); /* call 0x002FA040 */

loc_00016190: ;
    eax = MEM32(0x44A514);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x988) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000161B8; /* je: equal / zero */

loc_0001619F: ;
    ecx = MEM32(eax + 0x30);
    MEM32(ecx + 0xA8) = esi;
    edx = MEM32(esi + 0x988);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000161B5u); RECOMP_ABI_CALL(0x0002FD00u, sub_0002FD00); /* call 0x0002FD00 */

loc_000161B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000161B8: ;
    eax = MEM32(0x7584DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016347; /* je: equal / zero */

loc_000161C5: ;
    PUSH32(esp, 0x000161CAu); RECOMP_ABI_CALL(0x00011A60u, sub_00011A60); /* call 0x00011A60 */

loc_000161CA: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x44A524)); /* fsub dword ptr [0x44a524] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6BC390);
    MEM32(0x758E34) = esi;
    MEMF(0x44A524) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x000161E4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000161E1u); } /* indirect call */
    }

loc_000161E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x645100);
    { uint32_t _icall_target = MEM32(esi + 0x20); PUSH32(esp, 0x000161EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000161ECu); } /* indirect call */
    }

loc_000161EF: ;
    xmm1 = XMM_SCALAR(MEMF(0x44A524)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x10;
    MEM32(esp + 0x40) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x429E68); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    edx = esp + 0x24;
    eax = esp + 0x30;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    MEMF(0x44A524) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016347; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00016244: ;
    goto loc_00016251;

loc_00016246: ;
    xmm2 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00016251: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(0x42933C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x429714)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    xmm6 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_0001629F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_0001629C: ;
    xmm6 = xmm1; /* movaps */

loc_0001629F: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_000162C1; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000162BE: ;
    xmm5 = xmm1; /* movaps */

loc_000162C1: ;
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    eax = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4296EC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(0x44A524) = xmm1.f[0]; /* movss */
    if ((_fa == 0)) goto loc_0001631D; /* je: equal / zero */

loc_000162FC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00016314; /* je: equal / zero */

loc_000162FF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001630B; /* je: equal / zero */

loc_00016302: ;
    MEM32(esi + 0x78) = 0xFFFFFFFFu;
    goto loc_00016324;

loc_0001630B: ;
    MEM32(esi + 0x78) = 0xFF0000FFu;
    goto loc_00016324;

loc_00016314: ;
    MEM32(esi + 0x78) = 0xFF00FF00u;
    goto loc_00016324;

loc_0001631D: ;
    MEM32(esi + 0x78) = 0xFFFF0000u;

loc_00016324: ;
    ecx = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(esi + 0x2C); PUSH32(esp, 0x0001632Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001632Bu); } /* indirect call */
    }

loc_0001632E: ;
    xmm1 = XMM_SCALAR(MEMF(0x44A524)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fca = xmm1.f[0]; _fcb = MEMF(0x429350); /* comiss */
    if ((_fca > _fcb)) goto loc_00016246; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(0x429350)) */

loc_00016347: ;
    ecx = 5;
    edx = 1;
    PUSH32(esp, 0x00016356u); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_00016356: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_0001635E: ;
    ecx = 4;
    edx = 1;
    PUSH32(esp, 0x0001636Du); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_0001636D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_00016375: ;
    ecx = 6;
    edx = 1;
    PUSH32(esp, 0x00016384u); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_00016384: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_0001638C: ;
    ecx = 9;
    edx = 1;
    PUSH32(esp, 0x0001639Bu); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_0001639B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_000163A3: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x1122);
    edx = esp + 0x44;
    PUSH32(esp, 0x41F4E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000163B9u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000163B9: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000080u);
    PUSH32(esp, 0x80808080u);
    eax = esp + 0x4C;
    MEM32(0x758E34) = esi;
    esi = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x000163E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000163DDu); } /* indirect call */
    }

loc_000163E0: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x190;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x000163F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000163EEu); } /* indirect call */
    }

loc_000163F1: ;
    ecx = MEM32(0x46DDE0);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000080u);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x41F4C0);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x0001640Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001640Cu); } /* indirect call */
    }

loc_0001640F: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x182) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x182;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x00016420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001641Du); } /* indirect call */
    }

loc_00016420: ;
    SET_LO8(eax, MEM8(0x758BD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x758BD0;
    if (CMP_NE(_fa, _fb)) goto loc_00016433; /* jne: not equal / not zero */

loc_0001642E: ;
    eax = 0x41F4AC;

loc_00016433: ;
    ecx = MEM32(0x46DDE0);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000080u);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x0001644Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001644Au); } /* indirect call */
    }

loc_0001644D: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x174;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x0001645Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001645Bu); } /* indirect call */
    }

loc_0001645E: ;
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 0x00016467u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_00016467: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00016341
 * Original: 0x00016341 - 0x0001646D (300 bytes, 80 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016341(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016341: ;
    if (_flags /* ja: above (unsigned >) */) { g_seh_ebp = ebp; sub_00016246(); return; }

loc_00016347: ;
    ecx = 5;
    edx = 1;
    PUSH32(esp, 0x00016356u); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_00016356: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_0001635E: ;
    ecx = 4;
    edx = 1;
    PUSH32(esp, 0x0001636Du); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_0001636D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_00016375: ;
    ecx = 6;
    edx = 1;
    PUSH32(esp, 0x00016384u); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_00016384: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_0001638C: ;
    ecx = 9;
    edx = 1;
    PUSH32(esp, 0x0001639Bu); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_0001639B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_000163A3: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x1122);
    edx = esp + 0x44;
    PUSH32(esp, 0x41F4E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000163B9u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000163B9: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000080u);
    PUSH32(esp, 0x80808080u);
    eax = esp + 0x4C;
    MEM32(0x758E34) = esi;
    esi = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x000163E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000163DDu); } /* indirect call */
    }

loc_000163E0: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x190;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x000163F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000163EEu); } /* indirect call */
    }

loc_000163F1: ;
    ecx = MEM32(0x46DDE0);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000080u);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x41F4C0);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x0001640Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001640Cu); } /* indirect call */
    }

loc_0001640F: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x182) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x182;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x00016420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001641Du); } /* indirect call */
    }

loc_00016420: ;
    SET_LO8(eax, MEM8(0x758BD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x758BD0;
    if (CMP_NE(_fa, _fb)) goto loc_00016433; /* jne: not equal / not zero */

loc_0001642E: ;
    eax = 0x41F4AC;

loc_00016433: ;
    ecx = MEM32(0x46DDE0);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000080u);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x0001644Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001644Au); } /* indirect call */
    }

loc_0001644D: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x174;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x0001645Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001645Bu); } /* indirect call */
    }

loc_0001645E: ;
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 0x00016467u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_00016467: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00016363
 * Original: 0x00016363 - 0x0001646D (266 bytes, 73 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016363(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016363: ;
    edx = 1;
    PUSH32(esp, 0x0001636Du); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_0001636D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_00016375: ;
    ecx = 6;
    edx = 1;
    PUSH32(esp, 0x00016384u); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_00016384: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_0001638C: ;
    ecx = 9;
    edx = 1;
    PUSH32(esp, 0x0001639Bu); RECOMP_ABI_CALL(0x000DC4F0u, sub_000DC4F0); /* call 0x000DC4F0 */

loc_0001639B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001645E; /* je: equal / zero */

loc_000163A3: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x1122);
    edx = esp + 0x44;
    PUSH32(esp, 0x41F4E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000163B9u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000163B9: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000080u);
    PUSH32(esp, 0x80808080u);
    eax = esp + 0x4C;
    MEM32(0x758E34) = esi;
    esi = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x000163E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000163DDu); } /* indirect call */
    }

loc_000163E0: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x190;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x000163F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000163EEu); } /* indirect call */
    }

loc_000163F1: ;
    ecx = MEM32(0x46DDE0);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000080u);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x41F4C0);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x0001640Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001640Cu); } /* indirect call */
    }

loc_0001640F: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x182) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x182;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x00016420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001641Du); } /* indirect call */
    }

loc_00016420: ;
    SET_LO8(eax, MEM8(0x758BD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x758BD0;
    if (CMP_NE(_fa, _fb)) goto loc_00016433; /* jne: not equal / not zero */

loc_0001642E: ;
    eax = 0x41F4AC;

loc_00016433: ;
    ecx = MEM32(0x46DDE0);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000080u);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x0001644Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001644Au); } /* indirect call */
    }

loc_0001644D: ;
    ecx = MEM32(0x46DDE0);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x174;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x0001645Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001645Bu); } /* indirect call */
    }

loc_0001645E: ;
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 0x00016467u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_00016467: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00016470
 * Original: 0x00016470 - 0x000164CE (94 bytes, 23 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016470: ;
    SET_LO8(eax, MEM8(0x44AA44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, esi);
    MEM32(0x758494) = 0x16170;
    MEM32(0x75848C) = 0xDD4B0;
    if (CMP_EQ(_fa, _fb)) goto loc_000164CC; /* je: equal / zero */

loc_0001648E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFE (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000164B6; /* je: equal / zero */

loc_00016492: ;
    PUSH32(esp, 0x00016497u); RECOMP_ABI_CALL(0x000E8E00u, sub_000E8E00); /* call 0x000E8E00 */

loc_00016497: ;
    eax = ZX8(MEM8(0x44AA44));
    esi = MEM32(0x44A514);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000164AAu); RECOMP_ABI_CALL(0x00015C10u, sub_00015C10); /* call 0x00015C10 */

loc_000164AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x44AA44) = 0xFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000164B6: ;
    PUSH32(esp, 0x000164BBu); RECOMP_ABI_CALL(0x000E7DC0u, sub_000E7DC0); /* call 0x000E7DC0 */

loc_000164BB: ;
    eax = MEM32(0x470038);
    PUSH32(esp, 0x000164C5u); RECOMP_ABI_CALL(0x000169C0u, sub_000169C0); /* call 0x000169C0 */

loc_000164C5: ;
    MEM8(0x44AA44) = 0xFF;

loc_000164CC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000164C5
 * Original: 0x000164C5 - 0x000164CE (9 bytes, 3 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000164C5(void)
{

loc_000164C5: ;
    MEM8(0x44AA44) = 0xFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000164D0
 * Original: 0x000164D0 - 0x000167BB (747 bytes, 208 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000164D0(void)
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

loc_000164D0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x7584DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000164F4; /* je: equal / zero */

loc_000164E9: ;
    PUSH32(esp, 0x000164EEu); RECOMP_ABI_CALL(0x00011A60u, sub_00011A60); /* call 0x00011A60 */

loc_000164EE: ;
    MEMF(0x44A524) = (float)fp_top(); fp_pop(); /* fstp */

loc_000164F4: ;
    PUSH32(esp, 0x000164F9u); RECOMP_ABI_CALL(0x000DB740u, sub_000DB740); /* call 0x000DB740 */

loc_000164F9: ;
    eax = MEM32(0x7584D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016507; /* je: equal / zero */

loc_00016502: ;
    PUSH32(esp, 0x00016507u); RECOMP_ABI_CALL(0x00016830u, sub_00016830); /* call 0x00016830 */

loc_00016507: ;
    eax = MEM32(0x75848C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x7584D4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0001651C; /* je: equal / zero */

loc_0001651A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0001651Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001651Au); } /* indirect call */
    }

loc_0001651C: ;
    eax = MEM32(0x758538);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = MEM32(0x7584F0);
    if (CMP_EQ(_fa, _fb)) goto loc_00016543; /* je: equal / zero */

loc_0001652B: ;
    eax = MEM32(0x440B20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00016543; /* jne: not equal / not zero */

loc_00016534: ;
    PUSH32(esp, 0x00016539u); RECOMP_ABI_CALL(0x0002F540u, sub_0002F540); /* call 0x0002F540 */

loc_00016539: ;
    ebx = 1;
    goto loc_0001664B;

loc_00016543: ;
    eax = MEM32(0x758C98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016610; /* je: equal / zero */

loc_00016550: ;
    eax = MEM32(0x758C90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00016610; /* jne: not equal / not zero */

loc_0001655D: ;
    eax = MEM32(0x758C8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016610; /* je: equal / zero */

loc_0001656A: ;
    eax = MEM32(ebp + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016589; /* je: equal / zero */

loc_00016574: ;
    eax = MEM32(ebp + eax * 4 + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016589; /* je: equal / zero */

loc_0001657C: ;
    _fa = (uint32_t)(MEM32(eax + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x84), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00016610; /* jne: not equal / not zero */

loc_00016589: ;
    PUSH32(esp, 0xD);
    esi = esp + 0x20;
    edi = 0xB00411F;
    PUSH32(esp, 0x00016599u); RECOMP_ABI_CALL(0x000F8830u, sub_000F8830); /* call 0x000F8830 */

loc_00016599: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xE);
    esi = esp + 0x18;
    PUSH32(esp, 0x000165A7u); RECOMP_ABI_CALL(0x000F8830u, sub_000F8830); /* call 0x000F8830 */

loc_000165A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x41F4A8);
    PUSH32(esp, 0x41F4A8);
    edi = esi;
    PUSH32(esp, 0x000165BBu); RECOMP_ABI_CALL(0x000F84A0u, sub_000F84A0); /* call 0x000F84A0 */

loc_000165BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    edi = esp + 0x30;
    PUSH32(esp, 0x000165C9u); RECOMP_ABI_CALL(0x000F84A0u, sub_000F84A0); /* call 0x000F84A0 */

loc_000165C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000165CFu); RECOMP_ABI_CALL(0x000187F0u, sub_000187F0); /* call 0x000187F0 */

loc_000165CF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758C90) = eax;
    PUSH32(esp, 0x000165DCu); RECOMP_ABI_CALL(0x0001A8E0u, sub_0001A8E0); /* call 0x0001A8E0 */

loc_000165DC: ;
    PUSH32(esp, 0x000165E1u); RECOMP_ABI_CALL(0x000E72A0u, sub_000E72A0); /* call 0x000E72A0 */

loc_000165E1: ;
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00016615; /* jne: not equal / not zero */

loc_000165EA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000165F3u); RECOMP_ABI_CALL(0x000E7770u, sub_000E7770); /* call 0x000E7770 */

loc_000165F3: ;
    ecx = MEM32(0x7584F4);
    eax = MEM32(ecx + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00016615; /* jne: not equal / not zero */

loc_00016603: ;
    PUSH32(esp, 0x00016608u); RECOMP_ABI_CALL(0x0001CBB0u, sub_0001CBB0); /* call 0x0001CBB0 */

loc_00016608: ;
    MEM32(0x7584E0) = ebx;
    goto loc_00016615;

loc_00016610: ;
    ebx = 1;

loc_00016615: ;
    edi = ebp;
    PUSH32(esp, 0x0001661Cu); RECOMP_ABI_CALL(0x00017D10u, sub_00017D10); /* call 0x00017D10 */

loc_0001661C: ;
    PUSH32(esp, 0x00016621u); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_00016621: ;
    ecx = MEM32(eax + 0x2AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001664B; /* jne: not equal / not zero */

loc_0001662B: ;
    ecx = ebp;
    PUSH32(esp, 0x00016632u); RECOMP_ABI_CALL(0x00018640u, sub_00018640); /* call 0x00018640 */

loc_00016632: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001664B; /* jne: not equal / not zero */

loc_00016636: ;
    eax = MEM32(0x758490);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001664B; /* je: equal / zero */

loc_0001663F: ;
    ecx = MEM32(0x7584A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001664B; /* jne: not equal / not zero */

loc_00016649: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0001664Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016649u); } /* indirect call */
    }

loc_0001664B: ;
    eax = MEM32(0x758494);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016675; /* je: equal / zero */

loc_00016654: ;
    ecx = MEM32(0x44A518);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016675; /* je: equal / zero */

loc_0001665E: ;
    edx = MEM32(0x758538);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00016675; /* jne: not equal / not zero */

loc_00016668: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x44A510);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00016672u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00016670u); } /* indirect call */
    }

loc_00016672: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016675: ;
    eax = MEM32(0x7584F4);
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00016685; /* jne: not equal / not zero */

loc_0001667F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016685u); RECOMP_ABI_CALL(0x0001B2D0u, sub_0001B2D0); /* call 0x0001B2D0 */

loc_00016685: ;
    eax = MEM32(0x44A518);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000166E0; /* je: equal / zero */

loc_0001668E: ;
    eax = MEM32(0x758538);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000166E0; /* jne: not equal / not zero */

loc_00016697: ;
    _fa = (uint32_t)(MEM8(0x758484)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758484), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000166CC; /* jne: not equal / not zero */

loc_0001669F: ;
    SET_LO8(eax, MEM8(0x758485));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000166CC; /* jne: not equal / not zero */

loc_000166A8: ;
    eax = MEM32(0x75852C);
    PUSH32(esp, 0x000166B2u); RECOMP_ABI_CALL(0x0002DA10u, sub_0002DA10); /* call 0x0002DA10 */

loc_000166B2: ;
    edi = MEM32(0x758534);
    PUSH32(esp, 0x000166BDu); RECOMP_ABI_CALL(0x0002E680u, sub_0002E680); /* call 0x0002E680 */

loc_000166BD: ;
    PUSH32(esp, 0x000166C2u); RECOMP_ABI_CALL(0x0001AF50u, sub_0001AF50); /* call 0x0001AF50 */

loc_000166C2: ;
    PUSH32(esp, 0x000166C7u); RECOMP_ABI_CALL(0x000A1A90u, sub_000A1A90); /* call 0x000A1A90 */

loc_000166C7: ;
    PUSH32(esp, 0x000166CCu); RECOMP_ABI_CALL(0x0001B170u, sub_0001B170); /* call 0x0001B170 */

loc_000166CC: ;
    edx = MEM32(0x44A518);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000166D8u); RECOMP_ABI_CALL(0x002FE9B0u, sub_002FE9B0); /* call 0x002FE9B0 */

loc_000166D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000166E0u); RECOMP_ABI_CALL(0x002FEBD0u, sub_002FEBD0); /* call 0x002FEBD0 */

loc_000166E0: ;
    eax = MEM32(0x67B6A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000166F9; /* je: equal / zero */

loc_000166E9: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0x000166F1u); RECOMP_ABI_CALL(0x00030990u, sub_00030990); /* call 0x00030990 */

loc_000166F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;

loc_000166F9: ;
    PUSH32(esp, 0x000166FEu); RECOMP_ABI_CALL(0x0009CE60u, sub_0009CE60); /* call 0x0009CE60 */

loc_000166FE: ;
    esi = MEM32(0x44A518);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016716; /* je: equal / zero */

loc_00016708: ;
    eax = MEM32(0x758538);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00016716; /* jne: not equal / not zero */

loc_00016711: ;
    PUSH32(esp, 0x00016716u); RECOMP_ABI_CALL(0x002FA100u, sub_002FA100); /* call 0x002FA100 */

loc_00016716: ;
    eax = MEM32(0x7659C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016732; /* je: equal / zero */

loc_0001671F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016725u); RECOMP_ABI_CALL(0x00018990u, sub_00018990); /* call 0x00018990 */

loc_00016725: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7659C4) = 0;

loc_00016732: ;
    SET_LO8(eax, MEM8(0x758B90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00016740; /* je: equal / zero */

loc_0001673B: ;
    g_seh_ebp = ebp; sub_000CB410(); return; /* tail jmp 0x000CB410 */

loc_00016740: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00016747u); RECOMP_ABI_CALL(0x00021540u, sub_00021540); /* call 0x00021540 */

loc_00016747: ;
    eax = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000167AA; /* je: equal / zero */

loc_00016753: ;
    eax = MEM32(0x451B4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000167AA; /* je: equal / zero */

loc_0001675C: ;
    _fa = (uint32_t)(MEM32(eax + 0x4030)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4030), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000167AA; /* jne: not equal / not zero */

loc_00016764: ;
    eax = MEM32(0x431024);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7654DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x7654DC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000167AA; /* jg: greater (signed >) */

loc_00016771: ;
    if (CMP_L(_fas, _fbs)) goto loc_00016781; /* jl: less (signed <) */

loc_00016773: ;
    ecx = MEM32(0x431020);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7654D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x7654D8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000167AA; /* ja: above (unsigned >) */

loc_00016781: ;
    eax = 0x65F068;
    PUSH32(esp, 0x0001678Bu); RECOMP_ABI_CALL(0x000DE570u, sub_000DE570); /* call 0x000DE570 */

loc_0001678B: ;
    edx = MEM32(0x7654D8);
    eax = MEM32(0x7654DC);
    _fb = (uint32_t)(0x3938700) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x3938700)) >> 32) & 1);
    edx = edx + 0x3938700;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(0x431020) = edx;
    MEM32(0x431024) = eax;

loc_000167AA: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x000167B3u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000167B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000167C0
 * Original: 0x000167C0 - 0x00016825 (101 bytes, 26 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000167C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000167C0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x7584AC) = 1;
    MEM32(0x758498) = ebx;
    MEM32(0x75849C) = ebx;
    MEM32(0x7584A0) = ebx;
    /* nop */

loc_000167E0: ;
    _fa = (uint32_t)(MEM32(0x758498)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758498), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000167FC; /* jne: not equal / not zero */

loc_000167E8: ;
    _fa = (uint32_t)(MEM32(0x75849C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x75849C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000167FC; /* jne: not equal / not zero */

loc_000167F0: ;
    PUSH32(esp, 0x000167F5u); RECOMP_ABI_CALL(0x00016470u, sub_00016470); /* call 0x00016470 */

loc_000167F5: ;
    PUSH32(esp, 0x000167FAu); RECOMP_ABI_CALL(0x000164D0u, sub_000164D0); /* call 0x000164D0 */

loc_000167FA: ;
    goto loc_000167E0;

loc_000167FC: ;
    _fa = (uint32_t)(MEM8(0x758484)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758484), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016818; /* je: equal / zero */

loc_00016804: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016818; /* je: equal / zero */

loc_0001680D: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00016815u); RECOMP_ABI_CALL(0x000A20F0u, sub_000A20F0); /* call 0x000A20F0 */

loc_00016815: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016818: ;
    PUSH32(esp, 0x0001681Du); RECOMP_ABI_CALL(0x000F8C00u, sub_000F8C00); /* call 0x000F8C00 */

loc_0001681D: ;
    MEM32(0x7584AC) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016830
 * Original: 0x00016830 - 0x000168E4 (180 bytes, 57 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x451B4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00016842; /* je: equal / zero */

loc_0001683D: ;
    PUSH32(esp, 0x00016842u); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_00016842: ;
    eax = MEM32(0x7584F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001684Du); RECOMP_ABI_CALL(0x0001DFD0u, sub_0001DFD0); /* call 0x0001DFD0 */

loc_0001684D: ;
    ebx = MEM32(0x44AA24);
    PUSH32(esp, 0);
    MEM32(0x7585A0) = 0;
    PUSH32(esp, 0x00016864u); RECOMP_ABI_CALL(0x000E8E30u, sub_000E8E30); /* call 0x000E8E30 */

loc_00016864: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001686Cu); RECOMP_ABI_CALL(0x000F8C00u, sub_000F8C00); /* call 0x000F8C00 */

loc_0001686C: ;
    ebx = MEM32(0x44AA2C);
    ecx = MEM32(0x75850C);
    edi = MEM32(0x44AA38);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(0x75850C) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_000168B1; /* ja: above (unsigned >) */

loc_0001688C: ;
    /* nop */

loc_00016890: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000168AA; /* je: equal / zero */

loc_00016896: ;
    ecx = esi;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000168AA; /* je: equal / zero */

loc_000168A0: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x000168A7u); RECOMP_ABI_CALL(0x00015C10u, sub_00015C10); /* call 0x00015C10 */

loc_000168A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000168AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00016890; /* jbe: below or equal (unsigned <=) */

loc_000168B1: ;
    ecx = MEM32(0x75850C);
    esi = MEM32(0x7584F0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x75850C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000168CF; /* je: equal / zero */

loc_000168C8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000168CFu); RECOMP_ABI_CALL(0x00017960u, sub_00017960); /* call 0x00017960 */

loc_000168CF: ;
    eax = MEM32(0x7584AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000168E0; /* je: equal / zero */

loc_000168D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000154F0(); return; /* tail jmp 0x000154F0 */

loc_000168E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000168F0
 * Original: 0x000168F0 - 0x00016935 (69 bytes, 16 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000168F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000168F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x44AA24) = eax;
    MEM32(0x44AA28) = eax;
    MEM32(0x44AA2C) = eax;
    MEM32(0x44AA30) = eax;
    MEM32(0x44AA34) = eax;
    MEM32(0x44AA38) = eax;
    MEM32(0x44AA3C) = eax;
    MEM32(0x44AA40) = eax;
    MEM32(0x44AA44) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = 4;
    ecx = 0x44AA28;
    PUSH32(esp, 0x00016933u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00016933: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016940
 * Original: 0x00016940 - 0x000169C0 (128 bytes, 36 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016948u); RECOMP_ABI_CALL(0x00031E90u, sub_00031E90); /* call 0x00031E90 */

loc_00016948: ;
    ebx = MEM32(0x44AA24);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016963; /* je: equal / zero */

loc_00016954: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001695Au); RECOMP_ABI_CALL(0x000E8130u, sub_000E8130); /* call 0x000E8130 */

loc_0001695A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x44AA24) = esi;

loc_00016963: ;
    _fa = (uint32_t)(MEM32(0x44AA38)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x44AA38), esi (32-bit) */
    MEM32(0x44A514) = esi;
    MEM8(0x44AA44) = 0xFE;
    if (CMP_EQ(_fa, _fb)) goto loc_00016994; /* je: equal / zero */

loc_00016978: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016986; /* jne: not equal / not zero */

loc_00016981: ;
    PUSH32(esp, 0x00016986u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016986: ;
    ecx = MEM32(0x44AA38);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016994u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016991u); } /* indirect call */
    }

loc_00016994: ;
    eax = 0x44AA28;
    MEM32(0x44AA38) = esi;
    MEM32(0x44AA34) = esi;
    MEM32(0x44AA30) = esi;
    MEM32(0x44AA2C) = esi;
    MEM32(0x44AA28) = esi;
    PUSH32(esp, 0x000169BCu); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000169BC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000169C0
 * Original: 0x000169C0 - 0x00016A3A (122 bytes, 35 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000169C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000169C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000169CAu); RECOMP_ABI_CALL(0x00031E90u, sub_00031E90); /* call 0x00031E90 */

loc_000169CA: ;
    ebx = MEM32(0x44AA24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000169E8; /* je: equal / zero */

loc_000169D4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000169DBu); RECOMP_ABI_CALL(0x000E8130u, sub_000E8130); /* call 0x000E8130 */

loc_000169DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x44AA24) = 0;

loc_000169E8: ;
    MEM32(0x44A514) = 0;
    MEM8(0x44AA44) = 0xFE;
    PUSH32(esp, 0x000169FEu); RECOMP_ABI_CALL(0x00030DD0u, sub_00030DD0); /* call 0x00030DD0 */

loc_000169FE: ;
    MEM32(0x7585A8) = eax;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0x00016A0Cu); RECOMP_ABI_CALL(0x000D8590u, sub_000D8590); /* call 0x000D8590 */

loc_00016A0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016A27; /* jne: not equal / not zero */

loc_00016A14: ;
    MEM32(0x44AA24) = 0;
    PUSH32(esp, 0x00016A23u); RECOMP_ABI_CALL(0x000D8740u, sub_000D8740); /* call 0x000D8740 */

loc_00016A23: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00016A27: ;
    PUSH32(esp, 0x00016A2Cu); RECOMP_ABI_CALL(0x000FAB90u, sub_000FAB90); /* call 0x000FAB90 */

loc_00016A2C: ;
    MEM32(0x44AA24) = eax;
    PUSH32(esp, 0x00016A36u); RECOMP_ABI_CALL(0x000D8740u, sub_000D8740); /* call 0x000D8740 */

loc_00016A36: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000169E8
 * Original: 0x000169E8 - 0x00016A3A (82 bytes, 23 insns)
 * Folder: main (between: 0x00015AA0 and 0x00016A40)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000169E8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000169E8: ;
    MEM32(0x44A514) = 0;
    MEM8(0x44AA44) = 0xFE;
    PUSH32(esp, 0x000169FEu); RECOMP_ABI_CALL(0x00030DD0u, sub_00030DD0); /* call 0x00030DD0 */

loc_000169FE: ;
    MEM32(0x7585A8) = eax;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0x00016A0Cu); RECOMP_ABI_CALL(0x000D8590u, sub_000D8590); /* call 0x000D8590 */

loc_00016A0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016A27; /* jne: not equal / not zero */

loc_00016A14: ;
    MEM32(0x44AA24) = 0;
    PUSH32(esp, 0x00016A23u); RECOMP_ABI_CALL(0x000D8740u, sub_000D8740); /* call 0x000D8740 */

loc_00016A23: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00016A27: ;
    PUSH32(esp, 0x00016A2Cu); RECOMP_ABI_CALL(0x000FAB90u, sub_000FAB90); /* call 0x000FAB90 */

loc_00016A2C: ;
    MEM32(0x44AA24) = eax;
    PUSH32(esp, 0x00016A36u); RECOMP_ABI_CALL(0x000D8740u, sub_000D8740); /* call 0x000D8740 */

loc_00016A36: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016A40
 * Original: 0x00016A40 - 0x00016A97 (87 bytes, 35 insns)
 * Folder: main (match: xbox-demo 0x00012EF0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00016A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00016A91; /* je: equal / zero */

loc_00016A58: ;
    esi = MEM32(ecx + 0xC);
    ecx = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A6E; /* je: equal / zero */

loc_00016A63: ;
    ecx = 0x14;
    edi = esp + 0x10;
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

loc_00016A6E: ;
    edi = eax + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A7E; /* je: equal / zero */

loc_00016A75: ;
    ecx = 0x14;
    esi = eax;
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

loc_00016A7E: ;
    edx = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A91; /* je: equal / zero */

loc_00016A86: ;
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

loc_00016A91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00016A9A
 * Original: 0x00016A9A - 0x00016AA0 (6 bytes, 6 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016A9A(void)
{

loc_00016A9A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00016AA0
 * Original: 0x00016AA0 - 0x00016BF9 (345 bytes, 96 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016AA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_00016AD6; /* jbe: below or equal (unsigned <=) */

loc_00016AB5: ;
    eax = MEM32(ebp + 0x30);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00016AC0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016AD2; /* je: equal / zero */

loc_00016AC5: ;
    edx = MEM32(ebp + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016AC0; /* jb: below (unsigned <) */

loc_00016AD2: ;
    MEM32(esp + 0x14) = esi;

loc_00016AD6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016B26; /* jb: below (unsigned <) */

loc_00016ADA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x46B1A4);
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00016AFE; /* jne: not equal / not zero */

loc_00016AE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016AF0; /* jne: not equal / not zero */

loc_00016AEB: ;
    PUSH32(esp, 0x00016AF0u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016AF0: ;
    edx = 0xD0;
    ecx = eax;
    PUSH32(esp, 0x00016AFCu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00016AFC: ;
    goto loc_00016B1C;

loc_00016AFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B07; /* jne: not equal / not zero */

loc_00016B02: ;
    PUSH32(esp, 0x00016B07u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016B07: ;
    edx = MEM32(ebp + 4);
    ecx = MEM32(ebp + 0x30);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00016B1Cu); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_00016B1C: ;
    esi = MEM32(esp + 0x14);
    MEM32(ebp + 0x30) = eax;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00016B26: ;
    edx = MEM32(ebp + 0x30);
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xD0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x34;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(ecx, MEM8(edx + 0xA4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x645100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x645100 (32-bit) */
    MEM8(edx + 0xA4) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00016B67; /* je: equal / zero */

loc_00016B55: ;
    ecx = 0x14;
    esi = 0x645100;
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
    esi = MEM32(esp + 0x14);

loc_00016B67: ;
    edi = edx + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x645100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x645100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B82; /* je: equal / zero */

loc_00016B72: ;
    ecx = 0x14;
    esi = 0x645100;
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
    esi = MEM32(esp + 0x14);

loc_00016B82: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x4484C4);
    MEM32(edx + 0xA0) = 0;
    MEM32(edx + 0xC0) = 0x16A40;
    edx = MEM32(ebp + 0x30);
    MEMF(ebx + edx + 0xAC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x30);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x30);
    MEM32(ebx + eax + 0xA8) = ecx;
    ebp = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0xAC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(ebx + ebp + 0xAC) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016B8D
 * Original: 0x00016B8D - 0x00016BF9 (108 bytes, 22 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016B8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016B8D: ;
    ecx = MEM32(0x4484C4);
    MEM32(edx + 0xA0) = 0;
    MEM32(edx + 0xC0) = 0x16A40;
    edx = MEM32(ebp + 0x30);
    MEMF(ebx + edx + 0xAC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x30);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x30);
    MEM32(ebx + eax + 0xA8) = ecx;
    ebp = MEM32(ebp + 0x30);
    edx = MEM32(ebp + 0xAC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(ebx + ebp + 0xAC) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016C00
 * Original: 0x00016C00 - 0x00016CDF (223 bytes, 69 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016C00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x24);
    ecx = MEM32(esi + 0x484);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00016C3B; /* jbe: below or equal (unsigned <=) */

loc_00016C11: ;
    edx = MEM32(esi + 0x488);
    goto loc_00016C20;

    /* nop */

loc_00016C20: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x30), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016CDC; /* je: equal / zero */

loc_00016C2B: ;
    ebx = MEM32(esi + 0x484);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016C20; /* jb: below (unsigned <) */

loc_00016C39: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */

loc_00016C3B: ;
    eax = MEM32(0x46B1A4);
    if (CMP_EQ(_fa, _fb)) goto loc_00016C68; /* je: equal / zero */

loc_00016C42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C4B; /* jne: not equal / not zero */

loc_00016C46: ;
    PUSH32(esp, 0x00016C4Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016C4B: ;
    ecx = MEM32(esi + 0x488);
    edx = MEM32(esi + 0x484);
    PUSH32(esp, ecx);
    edx = edx * 4 + 4;
    ecx = eax;
    PUSH32(esp, 0x00016C66u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_00016C66: ;
    goto loc_00016C7D;

loc_00016C68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C71; /* jne: not equal / not zero */

loc_00016C6C: ;
    PUSH32(esp, 0x00016C71u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016C71: ;
    edx = 4;
    ecx = eax;
    PUSH32(esp, 0x00016C7Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00016C7D: ;
    MEM32(esi + 0x488) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C91; /* jne: not equal / not zero */

loc_00016C8C: ;
    PUSH32(esp, 0x00016C91u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016C91: ;
    edx = 0xC0;
    ecx = eax;
    PUSH32(esp, 0x00016C9Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00016C9D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016CC5; /* je: equal / zero */

loc_00016CA3: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x00016CC3u); RECOMP_ABI_CALL(0x00035F00u, sub_00035F00); /* call 0x00035F00 */

loc_00016CC3: ;
    goto loc_00016CC7;

loc_00016CC5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016CC7: ;
    ecx = MEM32(esi + 0x484);
    edx = MEM32(esi + 0x488);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 0x484) = MEM32(esi + 0x484) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x484)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00016CDC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016C17
 * Original: 0x00016C17 - 0x00016CDF (200 bytes, 61 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016C17(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016C17: ;
    goto loc_00016C20;

    /* nop */

loc_00016C20: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x30), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016CDC; /* je: equal / zero */

loc_00016C2B: ;
    ebx = MEM32(esi + 0x484);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016C20; /* jb: below (unsigned <) */

loc_00016C39: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x46B1A4);
    if (CMP_EQ(_fa, _fb)) goto loc_00016C68; /* je: equal / zero */

loc_00016C42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C4B; /* jne: not equal / not zero */

loc_00016C46: ;
    PUSH32(esp, 0x00016C4Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016C4B: ;
    ecx = MEM32(esi + 0x488);
    edx = MEM32(esi + 0x484);
    PUSH32(esp, ecx);
    edx = edx * 4 + 4;
    ecx = eax;
    PUSH32(esp, 0x00016C66u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_00016C66: ;
    goto loc_00016C7D;

loc_00016C68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C71; /* jne: not equal / not zero */

loc_00016C6C: ;
    PUSH32(esp, 0x00016C71u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016C71: ;
    edx = 4;
    ecx = eax;
    PUSH32(esp, 0x00016C7Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00016C7D: ;
    MEM32(esi + 0x488) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C91; /* jne: not equal / not zero */

loc_00016C8C: ;
    PUSH32(esp, 0x00016C91u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016C91: ;
    edx = 0xC0;
    ecx = eax;
    PUSH32(esp, 0x00016C9Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00016C9D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016CC5; /* je: equal / zero */

loc_00016CA3: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x00016CC3u); RECOMP_ABI_CALL(0x00035F00u, sub_00035F00); /* call 0x00035F00 */

loc_00016CC3: ;
    goto loc_00016CC7;

loc_00016CC5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016CC7: ;
    ecx = MEM32(esi + 0x484);
    edx = MEM32(esi + 0x488);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 0x484) = MEM32(esi + 0x484) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x484)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00016CDC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016CE0
 * Original: 0x00016CE0 - 0x00016DDC (252 bytes, 87 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016CE0: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x24);
    eax = MEM32(esi + 0x484);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00016DD9; /* jbe: below or equal (unsigned <=) */

loc_00016CF5: ;
    ecx = MEM32(esi + 0x488);
    PUSH32(esp, ebx);
    eax = ecx;
    edi = edi;

loc_00016D00: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x30), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016D19; /* je: equal / zero */

loc_00016D07: ;
    ebx = MEM32(esi + 0x484);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016D00; /* jb: below (unsigned <) */

loc_00016D15: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00016D19: ;
    ebx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016D56; /* je: equal / zero */

loc_00016D20: ;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016D40; /* je: equal / zero */

loc_00016D27: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016D35; /* jne: not equal / not zero */

loc_00016D30: ;
    PUSH32(esp, 0x00016D35u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016D35: ;
    ecx = MEM32(ebx + 0x28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016D3Du); } /* indirect call */
    }

loc_00016D40: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016D4E; /* jne: not equal / not zero */

loc_00016D49: ;
    PUSH32(esp, 0x00016D4Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016D4E: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016D56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016D53u); } /* indirect call */
    }

loc_00016D56: ;
    ecx = MEM32(esi + 0x484);
    eax = MEM32(esi + 0x488);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x484) = ecx;
    ecx = MEM32(eax + ecx * 4);
    MEM32(eax + edi * 4) = ecx;
    eax = MEM32(esi + 0x484);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016DA8; /* je: equal / zero */

loc_00016D79: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016D87; /* jne: not equal / not zero */

loc_00016D82: ;
    PUSH32(esp, 0x00016D87u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016D87: ;
    ecx = MEM32(esi + 0x488);
    edx = MEM32(esi + 0x484);
    PUSH32(esp, ecx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x00016D9Eu); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_00016D9E: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x488) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00016DA8: ;
    eax = MEM32(esi + 0x488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016DCE; /* je: equal / zero */

loc_00016DB2: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016DC0; /* jne: not equal / not zero */

loc_00016DBB: ;
    PUSH32(esp, 0x00016DC0u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016DC0: ;
    ecx = MEM32(esi + 0x488);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016DCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016DCBu); } /* indirect call */
    }

loc_00016DCE: ;
    MEM32(esi + 0x488) = 0;
    POP32(esp, ebx);

loc_00016DD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016DE0
 * Original: 0x00016DE0 - 0x00016E88 (168 bytes, 57 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016DE0: ;
    eax = MEM32(edi + 0x484);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E87; /* je: equal / zero */

loc_00016DEE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x488);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00016E4B; /* jbe: below or equal (unsigned <=) */

loc_00016DFC: ;
    PUSH32(esp, esi);
    /* nop */

loc_00016E00: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E3C; /* je: equal / zero */

loc_00016E06: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E26; /* je: equal / zero */

loc_00016E0D: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016E1B; /* jne: not equal / not zero */

loc_00016E16: ;
    PUSH32(esp, 0x00016E1Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016E1B: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016E26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016E23u); } /* indirect call */
    }

loc_00016E26: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016E34; /* jne: not equal / not zero */

loc_00016E2F: ;
    PUSH32(esp, 0x00016E34u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016E34: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016E3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016E39u); } /* indirect call */
    }

loc_00016E3C: ;
    eax = MEM32(edi + 0x484);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016E00; /* jb: below (unsigned <) */

loc_00016E4A: ;
    POP32(esp, esi);

loc_00016E4B: ;
    eax = MEM32(edi + 0x488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00016E7D; /* je: equal / zero */

loc_00016E57: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016E65; /* jne: not equal / not zero */

loc_00016E60: ;
    PUSH32(esp, 0x00016E65u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016E65: ;
    ecx = MEM32(edi + 0x488);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016E73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016E70u); } /* indirect call */
    }

loc_00016E73: ;
    MEM32(edi + 0x488) = 0;

loc_00016E7D: ;
    MEM32(edi + 0x484) = 0;

loc_00016E87: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00016DF5
 * Original: 0x00016DF5 - 0x00016E88 (147 bytes, 52 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016DF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016DF5: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00016E4B; /* jbe: below or equal (unsigned <=) */

loc_00016DFC: ;
    PUSH32(esp, esi);
    /* nop */

loc_00016E00: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E3C; /* je: equal / zero */

loc_00016E06: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E26; /* je: equal / zero */

loc_00016E0D: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016E1B; /* jne: not equal / not zero */

loc_00016E16: ;
    PUSH32(esp, 0x00016E1Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016E1B: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016E26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016E23u); } /* indirect call */
    }

loc_00016E26: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016E34; /* jne: not equal / not zero */

loc_00016E2F: ;
    PUSH32(esp, 0x00016E34u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016E34: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016E3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016E39u); } /* indirect call */
    }

loc_00016E3C: ;
    eax = MEM32(edi + 0x484);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016E00; /* jb: below (unsigned <) */

loc_00016E4A: ;
    POP32(esp, esi);

loc_00016E4B: ;
    eax = MEM32(edi + 0x488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00016E7D; /* je: equal / zero */

loc_00016E57: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016E65; /* jne: not equal / not zero */

loc_00016E60: ;
    PUSH32(esp, 0x00016E65u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016E65: ;
    ecx = MEM32(edi + 0x488);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016E73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016E70u); } /* indirect call */
    }

loc_00016E73: ;
    MEM32(edi + 0x488) = 0;

loc_00016E7D: ;
    MEM32(edi + 0x484) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00016E8E
 * Original: 0x00016E8E - 0x00016E90 (2 bytes, 2 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E8E(void)
{

loc_00016E8E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00016E90
 * Original: 0x00016E90 - 0x00016F0A (122 bytes, 43 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016E90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F04; /* je: equal / zero */

loc_00016E99: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016E9Fu); RECOMP_ABI_CALL(0x00017050u, sub_00017050); /* call 0x00017050 */

loc_00016E9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016EAF; /* je: equal / zero */

loc_00016EA6: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00016EAF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016EB5u); RECOMP_ABI_CALL(0x000D8940u, sub_000D8940); /* call 0x000D8940 */

loc_00016EB5: ;
    eax = MEM32(0x44A514);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016EDE; /* jne: not equal / not zero */

loc_00016EC1: ;
    eax = MEM32(0x44A518);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x44A514) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00016EDE; /* je: equal / zero */

loc_00016ED4: ;
    MEM32(eax + 0x988) = 0;

loc_00016EDE: ;
    PUSH32(esp, 0x00016EE3u); RECOMP_ABI_CALL(0x00016DE0u, sub_00016DE0); /* call 0x00016DE0 */

loc_00016EE3: ;
    esi = edi + 0x48C;
    PUSH32(esp, 0x00016EEEu); RECOMP_ABI_CALL(0x00036360u, sub_00036360); /* call 0x00036360 */

loc_00016EEE: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016EFC; /* jne: not equal / not zero */

loc_00016EF7: ;
    PUSH32(esp, 0x00016EFCu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016EFC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016F04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F01u); } /* indirect call */
    }

loc_00016F04: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016EAB
 * Original: 0x00016EAB - 0x00016F0A (95 bytes, 31 insns)
 * Folder: main (between: 0x00016A40 and 0x00016F10)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016EAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016EAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    eax = MEM32(0x44A514);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016EDE; /* jne: not equal / not zero */

loc_00016EC1: ;
    eax = MEM32(0x44A518);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x44A514) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00016EDE; /* je: equal / zero */

loc_00016ED4: ;
    MEM32(eax + 0x988) = 0;

loc_00016EDE: ;
    PUSH32(esp, 0x00016EE3u); RECOMP_ABI_CALL(0x00016DE0u, sub_00016DE0); /* call 0x00016DE0 */

loc_00016EE3: ;
    esi = edi + 0x48C;
    PUSH32(esp, 0x00016EEEu); RECOMP_ABI_CALL(0x00036360u, sub_00036360); /* call 0x00036360 */

loc_00016EEE: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016EFC; /* jne: not equal / not zero */

loc_00016EF7: ;
    PUSH32(esp, 0x00016EFCu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016EFC: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016F04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F01u); } /* indirect call */
    }

loc_00016F04: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016F10
 * Original: 0x00016F10 - 0x00016FD5 (197 bytes, 56 insns)
 * Folder: main (match: xbox-demo 0x000133A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016F10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x10;
    MEM32(edi) = eax;
    PUSH32(esp, 0x00016F26u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00016F26: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F9B; /* je: equal / zero */

loc_00016F2F: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x48;
    eax = 0x3E8;
    PUSH32(esp, 0x00016F41u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00016F41: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x64;
    eax = 0x64;
    MEM32(edi + 0x44) = 0x2F810;
    MEM32(edi + 0x38) = ebx;
    MEM32(edi + 0x3C) = ebx;
    MEM32(edi + 0x40) = ebx;
    PUSH32(esp, 0x00016F63u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00016F63: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x80;
    eax = 0x64;
    PUSH32(esp, 0x00016F78u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00016F78: ;
    eax = MEM32(0x46B1A4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016F89; /* jne: not equal / not zero */

loc_00016F84: ;
    PUSH32(esp, 0x00016F89u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016F89: ;
    edx = 0xFA00;
    ecx = eax;
    PUSH32(esp, 0x00016F95u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00016F95: ;
    MEM32(edi + 0x2B8) = eax;

loc_00016F9B: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0x30) = ebx;
    PUSH32(esp, 0x00016FA7u); RECOMP_ABI_CALL(0x00016AA0u, sub_00016AA0); /* call 0x00016AA0 */

loc_00016FA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FB9; /* je: equal / zero */

loc_00016FAE: ;
    esi = edi + 0x9C;
    PUSH32(esp, 0x00016FB9u); RECOMP_ABI_CALL(0x000365C0u, sub_000365C0); /* call 0x000365C0 */

loc_00016FB9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(edi + 0xC) = 1;
    MEM32(edi + 0x1D4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00016FD1; /* je: equal / zero */

loc_00016FCA: ;
    esi = edi;
    PUSH32(esp, 0x00016FD1u); RECOMP_ABI_CALL(0x0002D040u, sub_0002D040); /* call 0x0002D040 */

loc_00016FD1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016F63
 * Original: 0x00016F63 - 0x00016FD5 (114 bytes, 32 insns)
 * Folder: main (between: 0x00016F10 and 0x00016FE0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016F63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016F63: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x80;
    eax = 0x64;
    PUSH32(esp, 0x00016F78u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00016F78: ;
    eax = MEM32(0x46B1A4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016F89; /* jne: not equal / not zero */

loc_00016F84: ;
    PUSH32(esp, 0x00016F89u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00016F89: ;
    edx = 0xFA00;
    ecx = eax;
    PUSH32(esp, 0x00016F95u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00016F95: ;
    MEM32(edi + 0x2B8) = eax;
    PUSH32(esp, edi);
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0x30) = ebx;
    PUSH32(esp, 0x00016FA7u); RECOMP_ABI_CALL(0x00016AA0u, sub_00016AA0); /* call 0x00016AA0 */

loc_00016FA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FB9; /* je: equal / zero */

loc_00016FAE: ;
    esi = edi + 0x9C;
    PUSH32(esp, 0x00016FB9u); RECOMP_ABI_CALL(0x000365C0u, sub_000365C0); /* call 0x000365C0 */

loc_00016FB9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(edi + 0xC) = 1;
    MEM32(edi + 0x1D4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00016FD1; /* je: equal / zero */

loc_00016FCA: ;
    esi = edi;
    PUSH32(esp, 0x00016FD1u); RECOMP_ABI_CALL(0x0002D040u, sub_0002D040); /* call 0x0002D040 */

loc_00016FD1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016FB4
 * Original: 0x00016FB4 - 0x00016FD5 (33 bytes, 11 insns)
 * Folder: main (between: 0x00016F10 and 0x00016FE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016FB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016FB4: ;
    PUSH32(esp, 0x00016FB9u); RECOMP_ABI_CALL(0x000365C0u, sub_000365C0); /* call 0x000365C0 */

loc_00016FB9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(edi + 0xC) = 1;
    MEM32(edi + 0x1D4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00016FD1; /* je: equal / zero */

loc_00016FCA: ;
    esi = edi;
    PUSH32(esp, 0x00016FD1u); RECOMP_ABI_CALL(0x0002D040u, sub_0002D040); /* call 0x0002D040 */

loc_00016FD1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016FCC
 * Original: 0x00016FCC - 0x00016FD5 (9 bytes, 5 insns)
 * Folder: main (between: 0x00016F10 and 0x00016FE0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016FCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016FCC: ;
    PUSH32(esp, 0x00016FD1u); RECOMP_ABI_CALL(0x0002D040u, sub_0002D040); /* call 0x0002D040 */

loc_00016FD1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016FE0
 * Original: 0x00016FE0 - 0x00017043 (99 bytes, 38 insns)
 * Folder: main (match: xbox-demo 0x00013470, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016FE0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017042; /* je: equal / zero */

loc_00016FE4: ;
    eax = MEM32(ecx + 0x474);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00017004; /* je: equal / zero */

loc_00016FF2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016FFD; /* jne: not equal / not zero */

loc_00016FF7: ;
    esi = MEM32(eax + 8);
    MEM32(esi + 0x6C) = edx;

loc_00016FFD: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016FF2; /* jne: not equal / not zero */

loc_00017004: ;
    eax = MEM32(ecx + 0x478);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017022; /* je: equal / zero */

loc_0001700E: ;
    edi = edi;

loc_00017010: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001701B; /* jne: not equal / not zero */

loc_00017015: ;
    esi = MEM32(eax + 8);
    MEM32(esi + 0x6C) = edx;

loc_0001701B: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017010; /* jne: not equal / not zero */

loc_00017022: ;
    eax = MEM32(ecx + 0x47C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00017042; /* je: equal / zero */

loc_0001702D: ;
    /* nop */

loc_00017030: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001703B; /* jne: not equal / not zero */

loc_00017035: ;
    ecx = MEM32(eax + 8);
    MEM32(ecx + 0x6C) = edx;

loc_0001703B: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017030; /* jne: not equal / not zero */

loc_00017042: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002F450
 * Original: 0x0002F450 - 0x0002F527 (215 bytes, 54 insns)
 * Folder: main (string: Intersti\Inter_%02d.int)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F450: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    if (CMP_A(_fa, _fb)) goto loc_0002F522; /* ja: above (unsigned >) */

loc_0002F45D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _jt = MEM32(eax * 4 + 0x2F528); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0002F466u) goto loc_0002F466;
    if (_jt == 0x0002F46Eu) goto loc_0002F46E;
    if (_jt == 0x0002F48Au) goto loc_0002F48A;
    if (_jt == 0x0002F4A2u) goto loc_0002F4A2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002F466: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41F6EC);
    goto loc_0002F490;

loc_0002F46E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41F6DC);
    PUSH32(esp, 0x758550);
    PUSH32(esp, 0x0002F47Eu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_0002F47E: ;
    eax = MEM32(0x44A9D8);
    MEM32(0x758590) = eax;
    goto loc_0002F4BE;

loc_0002F48A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41F6C4);

loc_0002F490: ;
    PUSH32(esp, 0x758550);
    PUSH32(esp, 0x0002F49Au); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_0002F49A: ;
    MEM32(0x758590) = edi;
    goto loc_0002F4BE;

loc_0002F4A2: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41F6B4);
    PUSH32(esp, 0x758550);
    PUSH32(esp, 0x0002F4B2u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_0002F4B2: ;
    ecx = MEM32(0x44A9D8);
    MEM32(0x758590) = ecx;

loc_0002F4BE: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x75853C) = 1;
    MEM32(0x758538) = 1;
    MEM32(0x75854C) = edi;
    MEM32(0x758548) = edx;
    MEM32(0x758544) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002F4F9; /* je: equal / zero */

loc_0002F4EF: ;
    MEM32(0x758548) = 1;

loc_0002F4F9: ;
    _fa = (uint32_t)(MEM32(0x758BBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758BBC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F51A; /* je: equal / zero */

loc_0002F501: ;
    _fa = (uint32_t)(MEM32(0x440B20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x440B20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F51A; /* jne: not equal / not zero */

loc_0002F509: ;
    esi = MEM32(0x451B4C);
    MEM32(esi + 0x404C) = edi;
    PUSH32(esp, 0x0002F51Au); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_0002F51A: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002F522: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094820
 * Original: 0x00094820 - 0x00094841 (33 bytes, 17 insns)
 * Folder: main (match: xbox-demo 0x00012680, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094820: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009483F; /* je: equal / zero */

loc_00094827: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094838; /* je: equal / zero */

loc_0009482D: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094838; /* jne: not equal / not zero */

loc_00094832: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00094838u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094836u); } /* indirect call */
    }

loc_00094838: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094827; /* jne: not equal / not zero */

loc_0009483F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096160
 * Original: 0x00096160 - 0x000961CD (109 bytes, 25 insns)
 * Folder: main (match: xbox-demo 0x00011690, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096160: ;
    SET_LO8(ecx, MEM8(0x768348));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000961AA; /* jne: not equal / not zero */

loc_0009616F: ;
    ecx = MEM32(0x768348);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x76832C);
    MEM32(0x768348) = ecx;
    MEM32(0x768328) = 0x46B1A8;
    { uint32_t _icall_target = MEM32(0x418154); PUSH32(esp, 0x00096192u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009618Cu); } /* indirect call */
    }

loc_00096192: ;
    eax = MEM32(0x768328);
    PUSH32(esp, 0x369BA0);
    MEM32(eax) = 0x76832C;
    PUSH32(esp, 0x000961A7u); RECOMP_ABI_CALL(0x003472BDu, sub_003472BD); /* call 0x003472BD */

loc_000961A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000961AA: ;
    eax = MEM32(0x46B1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000961CC; /* jne: not equal / not zero */

loc_000961B3: ;
    SET_LO8(ecx, MEM8(0x758648));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000961CC; /* je: equal / zero */

loc_000961BD: ;
    ecx = 0x10;
    PUSH32(esp, 0x000961C7u); RECOMP_ABI_CALL(0x00098D40u, sub_00098D40); /* call 0x00098D40 */

loc_000961C7: ;
    eax = MEM32(0x46B1A8);

loc_000961CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000961D0
 * Original: 0x000961D0 - 0x00096205 (53 bytes, 17 insns)
 * Folder: main (match: xbox-demo 0x00011530, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000961D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000961D0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x46B1A8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000961E2; /* jne: not equal / not zero */

loc_000961DB: ;
    PUSH32(esp, 0x000961E0u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_000961E0: ;
    esi = eax;

loc_000961E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000961E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000961E3u); } /* indirect call */
    }

loc_000961E9: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000961FA; /* je: equal / zero */

loc_000961F4: ;
    MEM32(eax) = 0;

loc_000961FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00096201u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000961FBu); } /* indirect call */
    }

loc_00096201: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096570
 * Original: 0x00096570 - 0x00096690 (288 bytes, 110 insns)
 * Folder: main (match: xbox-demo 0x00011570, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00096570: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009657Eu); RECOMP_ABI_CALL(0x00351011u, sub_00351011); /* call 0x00351011 */

loc_0009657E: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00096591u); RECOMP_ABI_CALL(0x00348030u, sub_00348030); /* call 0x00348030 */

loc_00096591: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0x28;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 4) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ebx = MEM32(esp + 0x14);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edx;
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    POP32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000965BEu); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_000965BE: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0009660E; /* jl: less (signed <) */

loc_000965D6: ;
    if (CMP_G(_fas, _fbs)) goto loc_000965E0; /* jg: greater (signed >) */

loc_000965D8: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0009660E; /* jbe: below or equal (unsigned <=) */

loc_000965E0: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000965EAu); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_000965EA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000965E0; /* jl: less (signed <) */

loc_00096606: ;
    if (CMP_G(_fas, _fbs)) goto loc_0009660E; /* jg: greater (signed >) */

loc_00096608: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000965E0; /* jb: below (unsigned <) */

loc_0009660E: ;
    edx = esp + 0x20;
    MEM32(esp + 4) = edx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ebx = MEM32(esp + 0x14);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edx;
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    POP32(esp, eax);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096648u); RECOMP_ABI_CALL(0x00347B40u, sub_00347B40); /* call 0x00347B40 */

loc_00096648: ;
    ebx = eax;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC350) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC350)) >> 32) & 1);
    ebx = ebx + 0xC350;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edx;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, 0x186A0);
    MEM32(esi) = eax;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, eax);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x0009666Du); RECOMP_ABI_CALL(0x00347AA0u, sub_00347AA0); /* call 0x00347AA0 */

loc_0009666D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x186A0);
    ecx = edx;
    MEM32(esi + 4) = edx;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00096684u); RECOMP_ABI_CALL(0x00347B40u, sub_00347B40); /* call 0x00347B40 */

loc_00096684: ;
    MEM32(esi) = eax;
    MEM32(esi + 4) = edx;
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00098D40
 * Original: 0x00098D40 - 0x00098E00 (192 bytes, 40 insns)
 * Folder: main (match: xbox-demo 0x00011700, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098D40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    edx = ecx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 8) = eax;
    PUSH32(esp, esi);
    eax = edx + -10;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00098DFF; /* ja: above (unsigned >) */

loc_00098D67: ;
    eax = ZX8(MEM8(eax + 0x98E40));
    { uint32_t _jt = MEM32(eax * 4 + 0x98E24); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00098D75u) goto loc_00098D75;
    if (_jt == 0x00098D94u) goto loc_00098D94;
    if (_jt == 0x00098DA3u) goto loc_00098DA3;
    if (_jt == 0x00098DB6u) goto loc_00098DB6;
    if (_jt == 0x00098DC9u) goto loc_00098DC9;
    if (_jt == 0x00098DE0u) goto loc_00098DE0;
    if (_jt == 0x00098DFFu) goto loc_00098DFF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00098D75: ;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 8;
    MEM32(esp + 0xC) = 4;
    esi = 3;
    g_seh_ebp = ebp; sub_00098E00(); return; /* tail jmp 0x00098E00 */

loc_00098D94: ;
    MEM32(esp + 4) = 0x10;
    esi = 1;
    g_seh_ebp = ebp; sub_00098E00(); return; /* tail jmp 0x00098E00 */

loc_00098DA3: ;
    esi = 2;
    MEM32(esp + 4) = 0x10;
    MEM32(esp + 8) = esi;
    g_seh_ebp = ebp; sub_00098E00(); return; /* tail jmp 0x00098E00 */

loc_00098DB6: ;
    esi = 2;
    MEM32(esp + 4) = 8;
    MEM32(esp + 8) = esi;
    g_seh_ebp = ebp; sub_00098E00(); return; /* tail jmp 0x00098E00 */

loc_00098DC9: ;
    MEM32(esp + 4) = 0x20;
    MEM32(esp + 8) = 0x40;
    esi = 2;
    g_seh_ebp = ebp; sub_00098E00(); return; /* tail jmp 0x00098E00 */

loc_00098DE0: ;
    MEM32(esp + 4) = 0x20;
    MEM32(esp + 8) = 0x40;
    MEM32(esp + 0xC) = 2;
    esi = 3;
    g_seh_ebp = ebp; sub_00098E00(); return; /* tail jmp 0x00098E00 */

loc_00098DFF: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00098E00
 * Original: 0x00098E00 - 0x00098E24 (36 bytes, 17 insns)
 * Folder: main (match: xbox-demo 0x000117C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098E00: ;
    ecx = ecx >> 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00098E17; /* jbe: below or equal (unsigned <=) */

loc_00098E0E: ;
    edi = edi;

loc_00098E10: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00098E10; /* jb: below (unsigned <) */

loc_00098E17: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_B(_fa, _fb)) goto loc_00098E1D; /* jb: below (unsigned <) */

loc_00098E1C: ;
    /* int3: debug-trap slide byte, stepped over */

loc_00098E1D: ;
    eax = MEM32(esp + edx * 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CA5A0
 * Original: 0x000CA5A0 - 0x000CA5F9 (89 bytes, 30 insns)
 * Folder: main (string: Intersti\Inter_%02d.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA5A0: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000CA5DF; /* je: equal / zero */

loc_000CA5A5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CA5C5; /* je: equal / zero */

loc_000CA5A8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CA5F8; /* jne: not equal / not zero */

loc_000CA5AB: ;
    PUSH32(esp, ecx);
    eax = esi + 0x1C;
    PUSH32(esp, 0x41F6C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CA5BAu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000CA5BA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 1;
    esp += 4; return; /* ret */

loc_000CA5C5: ;
    PUSH32(esp, ecx);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x41F6DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CA5D4u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000CA5D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 1;
    esp += 4; return; /* ret */

loc_000CA5DF: ;
    PUSH32(esp, ecx);
    edx = esi + 0x1C;
    PUSH32(esp, 0x41F6EC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CA5EEu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000CA5EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 1;

loc_000CA5F8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021CB90
 * Original: 0x0021CB90 - 0x0021CC69 (217 bytes, 56 insns)
 * Folder: main (string: Vis_%03d.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021CB90: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(0x758D68);
    edx = MEM32(edx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D6C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 0x44);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D6C) = ecx;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = 1;
    MEM32(0x758D64) = edx;
    MEM32(0x758D68) = edx;
    MEM32(eax + 0x9C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0021CC48; /* je: equal / zero */

loc_0021CBE3: ;
    edx = MEM32(eax + 0x94);
    ecx = ecx + ecx * 4;
    eax = edx + ecx * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41F6EC);
    PUSH32(esp, 0x758550);
    PUSH32(esp, 0x0021CBFFu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_0021CBFF: ;
    ecx = MEM32(0x758BBC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(0x758590) = eax;
    MEM32(0x75853C) = esi;
    MEM32(0x758538) = esi;
    MEM32(0x75854C) = eax;
    MEM32(0x758548) = esi;
    MEM32(0x758544) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0021CC48; /* je: equal / zero */

loc_0021CC2F: ;
    _fa = (uint32_t)(MEM32(0x440B20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x440B20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021CC48; /* jne: not equal / not zero */

loc_0021CC37: ;
    esi = MEM32(0x451B4C);
    MEM32(esi + 0x404C) = eax;
    PUSH32(esp, 0x0021CC48u); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_0021CC48: ;
    eax = MEM32(esp + 0x10);
    MEM32(0x758D70) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x758D64) = ebp;
    POP32(esp, ebp);
    MEM32(0x758D6C) = ebx;
    MEM32(0x758D68) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025C740
 * Original: 0x0025C740 - 0x0025CBF2 (1202 bytes, 357 insns)
 * Folder: main (string: Cine_%03d.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0025C740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x758D64);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x758D68);
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(0x758D64) = ecx;
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x75850C);
    MEM32(0x758D70) = eax;
    MEM32(0x758D6C) = eax;
    eax = MEM32(0x442054);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0025CA4B; /* je: equal / zero */

loc_0025C7AA: ;
    PUSH32(esp, 0xCC00008Eu);
    eax = 0x470148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C7B9u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025C7B9: ;
    edi = MEM32(0x758BBC);
    ebx = MEM32(0x758CD4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C7D1; /* je: equal / zero */

loc_0025C7CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C7DB; /* je: equal / zero */

loc_0025C7D1: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C7E7; /* je: equal / zero */

loc_0025C7DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C7E7; /* jne: not equal / not zero */

loc_0025C7E0: ;
    ecx = 0xCC00008Eu;
    goto loc_0025C7EE;

loc_0025C7E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025C80D; /* je: equal / zero */

loc_0025C7EE: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C806u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025C806: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_0025C812;

loc_0025C80D: ;
    esi = 0xCC00008Eu;

loc_0025C812: ;
    PUSH32(esp, 0xCC000403u);
    eax = 0x470148;
    MEM32(0x76720C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C827u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025C827: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C833; /* je: equal / zero */

loc_0025C82E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C83D; /* je: equal / zero */

loc_0025C833: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C849; /* je: equal / zero */

loc_0025C83D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C849; /* jne: not equal / not zero */

loc_0025C842: ;
    ecx = 0xCC000403u;
    goto loc_0025C850;

loc_0025C849: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025C86D; /* je: equal / zero */

loc_0025C850: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C868u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025C868: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025C872;

loc_0025C86D: ;
    eax = 0xCC000403u;

loc_0025C872: ;
    MEM32(0x767208) = eax;
    PUSH32(esp, 0xCC000431u);
    eax = 0x470148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C886u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025C886: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C892; /* je: equal / zero */

loc_0025C88D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C89C; /* je: equal / zero */

loc_0025C892: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C8A8; /* je: equal / zero */

loc_0025C89C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C8A8; /* jne: not equal / not zero */

loc_0025C8A1: ;
    ecx = 0xCC000431u;
    goto loc_0025C8AF;

loc_0025C8A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025C8CC; /* je: equal / zero */

loc_0025C8AF: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C8C7u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025C8C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025C8D1;

loc_0025C8CC: ;
    eax = 0xCC000431u;

loc_0025C8D1: ;
    edi = MEM32(0x44AA24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ecx = MEM32(0x67B6A4);
    ebx = MEM32(0x67B6A0);
    MEM32(0x767200) = eax;
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0025C8F2; /* jne: not equal / not zero */

loc_0025C8EE: ;
    eax = edi;
    goto loc_0025C908;

loc_0025C8F2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C8FB; /* jne: not equal / not zero */

loc_0025C8F7: ;
    eax = ebx;
    goto loc_0025C902;

loc_0025C8FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C902; /* jne: not equal / not zero */

loc_0025C900: ;
    eax = ecx;

loc_0025C902: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);

loc_0025C908: ;
    edx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x118;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x6A3F40) = edx;
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0025C921; /* jne: not equal / not zero */

loc_0025C91D: ;
    eax = edi;
    goto loc_0025C937;

loc_0025C921: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C92A; /* jne: not equal / not zero */

loc_0025C926: ;
    eax = ebx;
    goto loc_0025C931;

loc_0025C92A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C931; /* jne: not equal / not zero */

loc_0025C92F: ;
    eax = ecx;

loc_0025C931: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);

loc_0025C937: ;
    edx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x134;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x76C000) = edx;
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0025C950; /* jne: not equal / not zero */

loc_0025C94C: ;
    eax = edi;
    goto loc_0025C966;

loc_0025C950: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C959; /* jne: not equal / not zero */

loc_0025C955: ;
    eax = ebx;
    goto loc_0025C960;

loc_0025C959: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C960; /* jne: not equal / not zero */

loc_0025C95E: ;
    eax = ecx;

loc_0025C960: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);

loc_0025C966: ;
    edx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x76BFFC) = edx;
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0025C97F; /* jne: not equal / not zero */

loc_0025C97B: ;
    eax = edi;
    goto loc_0025C995;

loc_0025C97F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C988; /* jne: not equal / not zero */

loc_0025C984: ;
    eax = ebx;
    goto loc_0025C98F;

loc_0025C988: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C98F; /* jne: not equal / not zero */

loc_0025C98D: ;
    eax = ecx;

loc_0025C98F: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);

loc_0025C995: ;
    ecx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xBB0000DDu);
    eax = 0x470148;
    MEM32(0x76BFF8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C9B3u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025C9B3: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C9C9; /* je: equal / zero */

loc_0025C9C0: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C9D3; /* je: equal / zero */

loc_0025C9C9: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C9DF; /* je: equal / zero */

loc_0025C9D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C9DF; /* jne: not equal / not zero */

loc_0025C9D8: ;
    ecx = 0xBB0000DDu;
    goto loc_0025C9E6;

loc_0025C9DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025CA03; /* je: equal / zero */

loc_0025C9E6: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025C9FEu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025C9FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025CA08;

loc_0025CA03: ;
    eax = 0xBB0000DDu;

loc_0025CA08: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x767204) = eax;
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0025CA17; /* jne: not equal / not zero */

loc_0025CA13: ;
    eax = edi;
    goto loc_0025CA30;

loc_0025CA17: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CA20; /* jne: not equal / not zero */

loc_0025CA1C: ;
    eax = ebx;
    goto loc_0025CA2A;

loc_0025CA20: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CA2A; /* jne: not equal / not zero */

loc_0025CA25: ;
    eax = MEM32(0x67B6A4);

loc_0025CA2A: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);

loc_0025CA30: ;
    ecx = MEM32(eax + 0x44);
    edx = MEM32(0x75850C);
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x11C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x76BFF4) = ecx;
    MEM32(0x442054) = edx;

loc_0025CA4B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CA54u); RECOMP_ABI_CALL(0x000E78A0u, sub_000E78A0); /* call 0x000E78A0 */

loc_0025CA54: ;
    eax = MEM32(0x767208);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CA68; /* jne: not equal / not zero */

loc_0025CA61: ;
    eax = MEM32(0x67B6A0);
    goto loc_0025CA72;

loc_0025CA68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CA72; /* jne: not equal / not zero */

loc_0025CA6D: ;
    eax = MEM32(0x67B6A4);

loc_0025CA72: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CA79u); RECOMP_ABI_CALL(0x000F5B00u, sub_000F5B00); /* call 0x000F5B00 */

loc_0025CA79: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CA7Eu); RECOMP_ABI_CALL(0x001011B0u, sub_001011B0); /* call 0x001011B0 */

loc_0025CA7E: ;
    eax = MEM32(0x67B6A0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CA93; /* je: equal / zero */

loc_0025CA89: ;
    eax = MEM32(0x767200);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CA93u); RECOMP_ABI_CALL(0x0027BA90u, sub_0027BA90); /* call 0x0027BA90 */

loc_0025CA93: ;
    eax = MEM32(0x6A3F40);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CAA9; /* je: equal / zero */

loc_0025CA9F: ;
    ecx = MEM32(0x76C000);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CABA; /* jne: not equal / not zero */

loc_0025CAA9: ;
    edx = MEM32(0x76BFF4);
    MEM32(edx) = 1;
    goto loc_0025CBC5;

loc_0025CABA: ;
    ecx = MEM32(0x76BFFC);
    edx = MEM32(0x76BFF8);
    MEM32(ecx) = eax;
    MEM32(edx) = 3;
    _fa = (uint32_t)(MEM32(0x67B6A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x67B6A0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CB28; /* je: equal / zero */

loc_0025CAD6: ;
    eax = MEM32(0x767200);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CAE5u); RECOMP_ABI_CALL(0x00270940u, sub_00270940); /* call 0x00270940 */

loc_0025CAE5: ;
    eax = MEM32(0x767204);
    edi = MEM32(0x67B6A4);
    edx = MEM32(0x67B6A0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CB02; /* jne: not equal / not zero */

loc_0025CAFE: ;
    eax = edx;
    goto loc_0025CB09;

loc_0025CB02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CB09; /* jne: not equal / not zero */

loc_0025CB07: ;
    eax = edi;

loc_0025CB09: ;
    ecx = MEM32(0x767200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CB18; /* jne: not equal / not zero */

loc_0025CB14: ;
    edi = edx;
    goto loc_0025CB1F;

loc_0025CB18: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CB1F; /* je: equal / zero */

loc_0025CB1D: ;
    edi = ecx;

loc_0025CB1F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CB25u); RECOMP_ABI_CALL(0x00023060u, sub_00023060); /* call 0x00023060 */

loc_0025CB25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025CB28: ;
    eax = MEM32(0x67B6A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CB55; /* je: equal / zero */

loc_0025CB31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CB3E; /* jne: not equal / not zero */

loc_0025CB36: ;
    edi = MEM32(0x67B6A0);
    goto loc_0025CB4B;

loc_0025CB3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    edi = MEM32(0x67B6A4);
    if (CMP_EQ(_fa, _fb)) goto loc_0025CB4B; /* je: equal / zero */

loc_0025CB49: ;
    edi = eax;

loc_0025CB4B: ;
    eax = 0x33000677;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CB55u); RECOMP_ABI_CALL(0x000F78D0u, sub_000F78D0); /* call 0x000F78D0 */

loc_0025CB55: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CBC5; /* je: equal / zero */

loc_0025CB64: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41F6DC);
    PUSH32(esp, 0x758550);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CB74u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_0025CB74: ;
    edx = MEM32(0x44A9D8);
    eax = 1;
    MEM32(0x75853C) = eax;
    MEM32(0x758538) = eax;
    MEM32(0x758548) = eax;
    eax = MEM32(0x758BBC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x758590) = edx;
    MEM32(0x75854C) = ebx;
    MEM32(0x758544) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0025CBC5; /* je: equal / zero */

loc_0025CBAC: ;
    _fa = (uint32_t)(MEM32(0x440B20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x440B20), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CBC5; /* jne: not equal / not zero */

loc_0025CBB4: ;
    esi = MEM32(0x451B4C);
    MEM32(esi + 0x404C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CBC5u); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_0025CBC5: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(0x758D70) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);
    MEM32(0x758D64) = ecx;
    MEM32(0x758D68) = edx;
    MEM32(0x758D6C) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0025CC00
 * Original: 0x0025CC00 - 0x0025CCB8 (184 bytes, 54 insns)
 * Folder: main (between: 0x0025C740 and 0x0025CD70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0025CC00: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(0x442050);
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x75850C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_0025CC8A; /* je: equal / zero */

loc_0025CC1B: ;
    PUSH32(esp, 0xCC000431u);
    eax = 0x470148;
    PUSH32(esp, 0x0025CC2Au); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025CC2A: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CC40; /* je: equal / zero */

loc_0025CC37: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CC4A; /* je: equal / zero */

loc_0025CC40: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CC56; /* je: equal / zero */

loc_0025CC4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CC56; /* jne: not equal / not zero */

loc_0025CC4F: ;
    ecx = 0xCC000431u;
    goto loc_0025CC5D;

loc_0025CC56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025CC7A; /* je: equal / zero */

loc_0025CC5D: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025CC75u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025CC75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025CC7F;

loc_0025CC7A: ;
    eax = 0xCC000431u;

loc_0025CC7F: ;
    MEM32(0x7671FC) = eax;
    MEM32(0x442050) = esi;

loc_0025CC8A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x10C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025CCB4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x10C)) */

loc_0025CC93: ;
    ecx = MEM32(0x7671FC);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 0x44);
    MEM32(ecx + 0x704) = 0;
    MEMF(edi + 0x10C) = xmm0.f[0]; /* movss */

loc_0025CCB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025CCC0
 * Original: 0x0025CCC0 - 0x0025CD4B (139 bytes, 40 insns)
 * Folder: main (between: 0x0025C740 and 0x0025CD70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CCC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025CCC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x758D68);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D6C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D64);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(edx + 4);
    esi = MEM32(ecx + 0x44);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D6C) = eax;
    eax = MEM32(esi + 0x29C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D64) = ecx;
    MEM32(0x758D68) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0025CD2A; /* jle: less or equal (signed <=) */

loc_0025CD0A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x29C) = eax;
    if ((_fa != 0)) goto loc_0025CD2A; /* jne: not equal / not zero */

loc_0025CD13: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0025CD1Au); RECOMP_ABI_CALL(0x000F8B30u, sub_000F8B30); /* call 0x000F8B30 */

loc_0025CD1A: ;
    eax = MEM32(esi + 0x29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x29C) = eax;

loc_0025CD2A: ;
    eax = MEM32(esp + 0x10);
    MEM32(0x758D70) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x758D64) = ebp;
    POP32(esp, ebp);
    MEM32(0x758D6C) = ebx;
    MEM32(0x758D68) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025CD50
 * Original: 0x0025CD50 - 0x0025CD6F (31 bytes, 12 insns)
 * Folder: main (between: 0x0025C740 and 0x0025CD70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CD50: ;
    edx = MEM32(edx + 0x18);
    edx = MEM32(edx + 4);
    edx = MEM32(edx + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x224);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0025CD6C; /* jle: less or equal (signed <=) */

loc_0025CD67: ;
    eax = 1;

loc_0025CD6C: ;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0025CD70
 * Original: 0x0025CD70 - 0x0025CF33 (451 bytes, 109 insns)
 * Folder: main (string: e3_end.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CD70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x758D70);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x758D68);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(edi + 0x18);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 4);
    ebx = MEM32(eax + 0x44);
    MEM32(0x758D64) = eax;
    MEM32(0x758D68) = eax;
    eax = MEM32(ebx + 0x208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(0x758D70) = edi;
    MEM32(0x758D6C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0025CEF5; /* je: equal / zero */

loc_0025CDCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CE85; /* je: equal / zero */

loc_0025CDD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025CF06; /* jne: not equal / not zero */

loc_0025CDDE: ;
    edx = MEM32(0x44AA20);
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x758D3C); /* subss */
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    _fb = (uint32_t)(0x478) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x478;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x19);
    PUSH32(esp, edx);
    MEMF(ebx + 0x1DC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0025CE0Du); RECOMP_ABI_CALL(0x002FCD80u, sub_002FCD80); /* call 0x002FCD80 */

loc_0025CE0D: ;
    eax = MEM32(0x44AA20);
    eax = MEM32(eax + 0x478);
    ecx = 0xFF000000u;
    edi = 0x620C;
    edx = 0xD;
    PUSH32(esp, 0x0025CE2Cu); RECOMP_ABI_CALL(0x002FD490u, sub_002FD490); /* call 0x002FD490 */

loc_0025CE2C: ;
    edi = MEM32(0x44AA20);
    eax = MEM32(edi + 0x478);
    PUSH32(esp, 0x3F000000);
    esi = 0x61A8;
    edx = 0xD;
    PUSH32(esp, 0x0025CE4Cu); RECOMP_ABI_CALL(0x002FD640u, sub_002FD640); /* call 0x002FD640 */

loc_0025CE4C: ;
    eax = MEM32(edi + 0x478);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    esi = 0x61AA;
    edx = 0xD;
    PUSH32(esp, 0x0025CE66u); RECOMP_ABI_CALL(0x002FD640u, sub_002FD640); /* call 0x002FD640 */

loc_0025CE66: ;
    eax = MEM32(edi + 0x478);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x47C35000);
    esi = 0x61A9;
    edx = 0xD;
    PUSH32(esp, 0x0025CE83u); RECOMP_ABI_CALL(0x002FD640u, sub_002FD640); /* call 0x002FD640 */

loc_0025CE83: ;
    goto loc_0025CF03;

loc_0025CE85: ;
    eax = MEM32(0x43B140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CEE6; /* je: equal / zero */

loc_0025CE8E: ;
    eax = MEM32(0x43B14C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CEBB; /* je: equal / zero */

loc_0025CE98: ;
    ecx = MEM32(0x43B144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CEBB; /* je: equal / zero */

loc_0025CEA2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM32(eax * 4 + 0x471390) = 0;
    PUSH32(esp, 0x0025CEB6u); RECOMP_ABI_CALL(0x000DC6A0u, sub_000DC6A0); /* call 0x000DC6A0 */

loc_0025CEB6: ;
    eax = MEM32(0x43B14C);

loc_0025CEBB: ;
    ecx = MEM32(0x43B140);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CEE6; /* je: equal / zero */

loc_0025CEC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CEE6; /* je: equal / zero */

loc_0025CECA: ;
    ecx = MEM32(0x43B144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025CEE6; /* je: equal / zero */

loc_0025CED4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax * 4 + 0x471380) = 0;
    PUSH32(esp, 0x0025CEE6u); RECOMP_ABI_CALL(0x000DC700u, sub_000DC700); /* call 0x000DC700 */

loc_0025CEE6: ;
    edx = MEM32(ebx + 0x200);
    eax = edi;
    PUSH32(esp, 0x0025CEF3u); RECOMP_ABI_CALL(0x0025B8E0u, sub_0025B8E0); /* call 0x0025B8E0 */

loc_0025CEF3: ;
    goto loc_0025CF06;

loc_0025CEF5: ;
    PUSH32(esp, 1);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x4291B8;
    PUSH32(esp, 0x0025CF03u); RECOMP_ABI_CALL(0x0002F3C0u, sub_0002F3C0); /* call 0x0002F3C0 */

loc_0025CF03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025CF06: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(0x758D70) = eax;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(0x758D64) = ecx;
    MEM32(0x758D68) = edx;
    MEM32(0x758D6C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
