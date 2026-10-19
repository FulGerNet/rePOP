/**
 * PoP SoT xbox-retail - render, chunk 2
 * Rendering: Jade GraphicDK and its Xbox renderer (JadeGDIInterface, XbTextureMgr)
 * Functions: 100 (0x00320010 - 0x0032C2C0)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00320010
 * Original: 0x00320010 - 0x003201B4 (420 bytes, 166 insns)
 * Folder: render (between: 0x0031FF10 and 0x00320C60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x3C);
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320045; /* jne: not equal / not zero */

loc_0032001B: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x44) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00320185; /* je: equal / zero */

loc_00320029: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320037; /* jne: not equal / not zero */

loc_00320032: ;
    PUSH32(esp, 0x00320037u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00320037: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00320042u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032003Fu); } /* indirect call */
    }

loc_00320042: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00320045: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00320047: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320047; /* jne: not equal / not zero */

loc_0032004E: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032006E; /* jle: less or equal (signed <=) */

loc_00320069: ;
    MEM32(esi + 0x3C) = edx;
    goto loc_00320071;

loc_0032006E: ;
    MEM32(esi + 0x3C) = eax;

loc_00320071: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ebp);
    ebp = ecx + ecx * 2;
    ebp = ebp << 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00320188; /* je: equal / zero */

loc_0032008A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_00320103; /* jge: greater or equal (signed >=) */

loc_0032008F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003200DA; /* jle: less or equal (signed <=) */

loc_0032009C: ;
    ecx = eax + eax * 2 + -3;
    ebx = eax + eax * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003200B0;

    /* nop */

loc_003200B0: ;
    eax = MEM32(esi + 0x4C);
    ebp = MEM32(ecx + eax);
    MEM32(edx + eax) = ebp;
    ebp = MEM32(ecx + eax + 4);
    MEM32(edx + eax + 4) = ebp;
    ebp = MEM32(ecx + eax + 8);
    MEM32(edx + eax + 8) = ebp;
    eax = MEM32(esi + 0x3C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003200B0; /* jl: less (signed <) */

loc_003200D6: ;
    ebp = MEM32(esp + 0xC);

loc_003200DA: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003200E8; /* jne: not equal / not zero */

loc_003200E3: ;
    PUSH32(esp, 0x003200E8u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_003200E8: ;
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    edx = ebp;
    ecx = eax;
    PUSH32(esp, 0x003200F5u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_003200F5: ;
    POP32(esp, ebx);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x3C);
    POP32(esp, ebp);
    MEM32(esi + 0x44) = eax;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00320103: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320111; /* jne: not equal / not zero */

loc_0032010C: ;
    PUSH32(esp, 0x00320111u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00320111: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    edx = ebp;
    ecx = eax;
    PUSH32(esp, 0x0032011Eu); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_0032011E: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x4C) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032017D; /* jle: less or equal (signed <=) */

loc_00320148: ;
    ecx = eax + eax * 2 + -3;
    ebx = eax + eax * 2;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00320157: ;
    eax = MEM32(esi + 0x4C);
    ebp = MEM32(edx + eax);
    MEM32(ecx + eax) = ebp;
    ebp = MEM32(edx + eax + 4);
    MEM32(ecx + eax + 4) = ebp;
    ebp = MEM32(edx + eax + 8);
    MEM32(ecx + eax + 8) = ebp;
    eax = MEM32(esi + 0x44);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00320157; /* jl: less (signed <) */

loc_0032017D: ;
    eax = MEM32(esi + 0x3C);
    POP32(esp, ebx);
    MEM32(esi + 0x44) = eax;
    POP32(esp, ebp);

loc_00320185: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00320188: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320196; /* jne: not equal / not zero */

loc_00320191: ;
    PUSH32(esp, 0x00320196u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00320196: ;
    edx = ebp;
    ecx = eax;
    PUSH32(esp, 0x0032019Fu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032019F: ;
    ecx = MEM32(esi + 0x3C);
    POP32(esp, ebp);
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x44) = ecx;
    eax = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0031FEB0(); return; /* tail jmp 0x0031FEB0 */

}

/**
 * sub_003201C0
 * Original: 0x003201C0 - 0x00320C57 (2711 bytes, 685 insns)
 * Folder: render (between: 0x0031FF10 and 0x00320C60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003201C0(void)
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

loc_003201C0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x470D74); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x38); /* comiss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003201E5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x38)) */

loc_003201DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003201E5: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x3C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003201F2; /* je: equal / zero */

loc_003201ED: ;
    PUSH32(esp, 0x003201F2u); RECOMP_ABI_CALL(0x00320010u, sub_00320010); /* call 0x00320010 */

loc_003201F2: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320C4D; /* je: equal / zero */

loc_003201FD: ;
    ecx = MEM32(0x758E3C);
    edx = MEM32(ecx + 0x10);
    SET_LO8(eax, MEM8(edx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320C4D; /* je: equal / zero */

loc_00320211: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x758E34);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x38;
    edi = ebx + 0x1B0;
    PUSH32(esp, eax);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0x0032022Eu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0032022E: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x40); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x44); /* addss */
    ecx = esp + 0x48;
    ebp = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = ebp;
    eax = edi;
    PUSH32(esp, 0x00320260u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_00320260: ;
    xmm6 = XMM_SCALAR(MEMF(0x42940C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x4C); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x50); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x54); /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm6.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032029A; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm4.f[0]) */

loc_00320291: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00320C4A; /* ja: above (unsigned >) (xmm6.f[0] vs xmm0.f[0]) */

loc_0032029A: ;
    xmm7 = XMM_SCALAR(MEMF(ebx + 0x144)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x148)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x140)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00320305; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm7.f[0]) */

loc_003202CE: ;
    xmm7 = XMM_SCALAR(MEMF(ebx + 0x148)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x144)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebx + 0x140); /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00320C4A; /* ja: above (unsigned >) (xmm6.f[0] vs xmm7.f[0]) */

loc_00320305: ;
    xmm7 = XMM_SCALAR(MEMF(ebx + 0x13C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebx + 0x134); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x138)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm6.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00320367; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm7.f[0]) */

loc_00320332: ;
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x13C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x138)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x134)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm6.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00320C4A; /* ja: above (unsigned >) (xmm6.f[0] vs xmm3.f[0]) */

loc_00320367: ;
    eax = MEM32(0x7584AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320377; /* je: equal / zero */

loc_00320370: ;
    ebx = esi;
    PUSH32(esp, 0x00320377u); RECOMP_ABI_CALL(0x0031FC20u, sub_0031FC20); /* call 0x0031FC20 */

loc_00320377: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 2 (8-bit) */
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    ebx = eax + eax + 4;
    if (TEST_Z(_fa, _fb)) goto loc_0032039B; /* je: equal / zero */

loc_00320386: ;
    edx = eax + eax + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00320393u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00320393: ;
    ebx = MEM32(0x758E48);
    goto loc_003203F9;

loc_0032039B: ;
    ecx = eax + eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x003203A9u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_003203A9: ;
    ebx = MEM32(0x758E48);
    edx = MEM32(ebx + 0x1C);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */

loc_003203F9: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x44;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00320484u); RECOMP_ABI_CALL(0x00030950u, sub_00030950); /* call 0x00030950 */

loc_00320484: ;
    eax = MEM32(0x758E34);
    xmm3 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 8); /* subss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x198)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esi + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 4); /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x194)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esi + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x190)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esi); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032054C; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00320524: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = ecx;

loc_00320538: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    goto loc_0032058A;

loc_0032054C: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x429344); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032056C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x429344)) */

loc_00320555: ;
    edx = MEM32(ebp);
    ecx = MEM32(ebp + 4);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(ebp + 8);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    goto loc_00320538;

loc_0032056C: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 8); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_0032058A: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x190); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x194); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x198); /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm5.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    eax = esp + 0x20;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00320614u); RECOMP_ABI_CALL(0x00035ED0u, sub_00035ED0); /* call 0x00035ED0 */

loc_00320614: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032064C; /* je: equal / zero */

loc_00320618: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    goto loc_00320699;

loc_0032064C: ;
    eax = esp + 0x20;
    PUSH32(esp, 0x00320655u); RECOMP_ABI_CALL(0x00030950u, sub_00030950); /* call 0x00030950 */

loc_00320655: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */

loc_00320699: ;
    edi = MEM32(ebx + 0x14);
    ebp = MEM32(esi + 0x3C);
    eax = esp + 0x50;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx + 0xC);
    ecx = esi;
    edx = esp + 0x2C;
    MEM32(esp + 0x10) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_0032086F; /* jl: less (signed <) */

loc_003206C3: ;
    ebp = MEM32(esp + 0x10);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x3C) (32-bit) */
    MEM32(esp + 0x14) = 0;

loc_003206D8: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003207E3; /* jge: greater or equal (signed >=) */

loc_003206DE: ;
    ebp = MEM32(esi + 0x4C);
    ebx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ebx + ebp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    ebp = MEM32(esi + 0x4C);
    fp_push(MEMF(ebp + ebx)); /* fld float */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = cos(fp_top()); /* fcos */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 4)); /* fmul dword ptr [ebp + 4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    ebp = MEM32(esi + 0x4C);
    fp_push(MEMF(ebx + ebp)); /* fld float */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    ebx = MEM32(0x758E48);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    goto loc_003207E6;

loc_003207E3: ;
    edx = esi + 0xC;

loc_003207E6: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(eax + -4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    ebp = MEM32(esi + 0x48);
    MEM32(edi) = ebp;
    ebp = MEM32(esi + 0x48);
    MEM32(edi + 4) = ebp;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0xC;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x3C) (32-bit) */
    ecx = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003206D8; /* jle: less or equal (signed <=) */

loc_0032086F: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM32(edi) = ebp;
    MEM32(edi + 4) = ebp;
    eax = MEM32(ebx + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x470D74); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003209AD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003208F5: ;
    edx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00320924; /* jle: less or equal (signed <=) */

loc_00320906: ;
    ecx = MEM32(esi + 0x4C);
    eax = ecx + 8;
    /* nop */

loc_00320910: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032091E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00320915: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x3C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00320910; /* jl: less (signed <) */

loc_0032091E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320930; /* jne: not equal / not zero */

loc_00320922: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */

loc_00320924: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00320973; /* je: equal / zero */

loc_00320926: ;
    ecx = MEM32(esi + 0x4C);
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 8); /* divss */
    goto loc_0032096D;

loc_00320930: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320951; /* jne: not equal / not zero */

loc_00320934: ;
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    edx = edi + edi * 2;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + edx * 4 + -4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + edx * 4 + -4); /* subss */
    eax = ecx + edx * 4 + -4;
    goto loc_00320969;

loc_00320951: ;
    eax = edi + edi * 2;
    xmm1 = XMM_SCALAR(MEMF(ecx + eax * 4 + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + eax * 4 + -4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + eax * 4 + -4); /* subss */
    eax = ecx + eax * 4;

loc_00320969: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_0032096D: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00320973: ;
    edx = MEM32(ebx + 0xC);
    ecx = edi + edi * 2;
    ebp = edx + ecx * 8;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0032098Cu); RECOMP_ABI_CALL(0x0004D2B0u, sub_0004D2B0); /* call 0x0004D2B0 */

loc_0032098C: ;
    edx = MEM32(esp + 0x18);
    eax = ebp + 0x24;
    PUSH32(esp, edx);
    ecx = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032099Du); RECOMP_ABI_CALL(0x0004D2B0u, sub_0004D2B0); /* call 0x0004D2B0 */

loc_0032099D: ;
    ecx = MEM32(ebx + 0x24);
    eax = edi + edi + 2;
    edi = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

loc_003209AD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00320A8B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x34)) */

loc_003209BC: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    edx = MEM32(esi + 0x3C);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x34); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x34); /* subss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_003209FA; /* jle: less or equal (signed <=) */

loc_003209DE: ;
    ecx = MEM32(esi + 0x4C);
    eax = ecx + 8;

loc_003209E4: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003209F4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_003209E9: ;
    ebp = MEM32(esi + 0x3C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003209E4; /* jl: less (signed <) */

loc_003209F4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320A06; /* jne: not equal / not zero */

loc_003209F8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */

loc_003209FA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00320A49; /* je: equal / zero */

loc_003209FC: ;
    edx = MEM32(esi + 0x4C);
    xmm0.f[0] = xmm0.f[0] / MEMF(edx + 8); /* divss */
    goto loc_00320A43;

loc_00320A06: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320A27; /* jne: not equal / not zero */

loc_00320A0A: ;
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    eax = edi + edi * 2;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + eax * 4 + -4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + eax * 4 + -4); /* subss */
    eax = ecx + eax * 4 + -4;
    goto loc_00320A3F;

loc_00320A27: ;
    edx = edi + edi * 2;
    xmm1 = XMM_SCALAR(MEMF(ecx + edx * 4 + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + edx * 4 + -4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + edx * 4 + -4); /* subss */
    eax = ecx + edx * 4;

loc_00320A3F: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_00320A43: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00320A49: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(esp + 0x10);
    eax = edi + edi * 2;
    ebp = ecx + eax * 8;
    PUSH32(esp, edx);
    eax = ebp + 0x18;
    PUSH32(esp, ebp);
    ecx = ebp;
    PUSH32(esp, 0x00320A62u); RECOMP_ABI_CALL(0x0004D2B0u, sub_0004D2B0); /* call 0x0004D2B0 */

loc_00320A62: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = ebp + 0xC;
    eax = ebp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00320A73u); RECOMP_ABI_CALL(0x0004D2B0u, sub_0004D2B0); /* call 0x0004D2B0 */

loc_00320A73: ;
    eax = MEM32(ebx + 0x24);
    ecx = MEM32(eax);
    MEM32(esp + 0x24) = edi;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x14);
    MEM32(eax) = ecx;

loc_00320A8B: ;
    ecx = MEM32(ebx + 0x24);
    eax = MEM32(ecx + 8);
    SET_LO8(ecx, MEM8(esi + 0x40));
    edx = 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ecx) (8-bit) */
    ecx = MEM32(esi + 0x3C);
    if (TEST_Z(_fa, _fb)) goto loc_00320BB3; /* je: equal / zero */

loc_00320AA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    edx = edi;
    if (CMP_G(_fas, _fbs)) goto loc_00320B80; /* jg: greater (signed >) */

loc_00320AAE: ;
    edi = edi;

loc_00320AB0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_00320AE0; /* jne: not equal / not zero */

loc_00320AB7: ;
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00320B34;

loc_00320AE0: ;
    ebp = MEM32(ebx + 0x1C);
    ecx = edx + edx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = edi;
    edi = MEM32(esi + 0x4C);
    edi = MEM32(ecx + edi + -4);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx + ebp) = edi;
    edi = MEM32(ebx + 0x1C);
    ebp = MEM32(esp + 0x1C);
    MEMF(ecx + edi + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    ebp = MEM32(ecx + ebp + -4);
    edi = MEM32(ebx + 0x1C);
    ecx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEM32(ecx + edi + 8) = ebp;
    edi = MEM32(ebx + 0x1C);
    MEMF(ecx + edi + 0xC) = xmm0.f[0]; /* movss */

loc_00320B34: ;
    ecx = edx + edx;
    MEM16(eax) = LO16(ecx);
    MEM16(eax + 6) = LO16(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + 3;
    MEM16(eax + -12) = LO16(edi);
    MEM16(eax + -6) = LO16(edi);
    ebp = ecx + 1;
    MEM16(eax + -14) = LO16(ebp);
    MEM16(eax + -8) = LO16(ebp);
    ebp = ecx + 2;
    MEM16(eax) = LO16(edi);
    MEM16(eax + 2) = LO16(ebp);
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(edi);
    MEM16(eax + 8) = LO16(ebp);
    MEM16(eax + 0xA) = LO16(ecx);
    ecx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00320AB0; /* jle: less or equal (signed <=) */

loc_00320B80: ;
    eax = MEM32(ebx + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(edx + eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(edx + ecx + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(edx + eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(edx + ecx + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00320C10;

loc_00320BB3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00320C10; /* jg: greater (signed >) */

loc_00320BB7: ;
    goto loc_00320BC0;

    /* nop */

loc_00320BC0: ;
    ecx = edi + edi;
    MEM16(eax) = LO16(ecx);
    MEM16(eax + 6) = LO16(edx);
    MEM16(eax + 8) = 0;
    MEM16(eax + 0xA) = 1;
    ebp = ecx + 1;
    MEM16(eax + 2) = LO16(ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx + 3;
    MEM16(eax + -12) = LO16(ebp);
    MEM16(eax) = LO16(ebp);
    ebp = ecx + 2;
    MEM16(eax + 2) = LO16(ebp);
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = 1;
    MEM16(eax + 8) = 3;
    MEM16(eax + 0xA) = LO16(edx);
    ecx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00320BC0; /* jle: less or equal (signed <=) */

loc_00320C10: ;
    edx = MEM32(ebx + 0x24);
    eax = MEM32(0x758E34);
    MEM32(edx + 4) = 0;
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    eax = MEM32(0x758E44);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00320C3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00320C3Bu); } /* indirect call */
    }

loc_00320C3E: ;
    ecx = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x74) = esi;

loc_00320C4A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00320C4D: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00320C60
 * Original: 0x00320C60 - 0x00320CC2 (98 bytes, 25 insns)
 * Folder: render (match: xbox-demo 0x000A6710, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320C60: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320C6E; /* jne: not equal / not zero */

loc_00320C69: ;
    PUSH32(esp, 0x00320C6Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00320C6E: ;
    PUSH32(esp, edi);
    edx = 0x44;
    ecx = eax;
    PUSH32(esp, 0x00320C7Bu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00320C7B: ;
    xmm0 = XMM_SCALAR(MEMF(0x4294D0)); /* movss */
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x11;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    MEMF(edx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4293F8)); /* movss */
    MEM32(edx + 0x2C) = eax;
    MEMF(edx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x28) = 0xFFFFFFFFu;
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320CD0
 * Original: 0x00320CD0 - 0x00320D03 (51 bytes, 19 insns)
 * Folder: render (between: 0x00320C60 and 0x00320DA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320CD0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320D02; /* je: equal / zero */

loc_00320CD4: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320D02; /* je: equal / zero */

loc_00320CDB: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x30) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00320D02; /* je: equal / zero */

loc_00320CE9: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320CF7; /* jne: not equal / not zero */

loc_00320CF2: ;
    PUSH32(esp, 0x00320CF7u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00320CF7: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00320D02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00320CFFu); } /* indirect call */
    }

loc_00320D02: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320D10
 * Original: 0x00320D10 - 0x00320D91 (129 bytes, 50 insns)
 * Folder: render (between: 0x00320C60 and 0x00320DA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320D10: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00320D43; /* jg: greater (signed >) */

loc_00320D14: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320D90; /* je: equal / zero */

loc_00320D1B: ;
    eax = MEM32(edi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x30) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00320D90; /* je: equal / zero */

loc_00320D29: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320D37; /* jne: not equal / not zero */

loc_00320D32: ;
    PUSH32(esp, 0x00320D37u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00320D37: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00320D42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00320D3Fu); } /* indirect call */
    }

loc_00320D42: ;
    esp += 4; return; /* ret */

loc_00320D43: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320D90; /* je: equal / zero */

loc_00320D4A: ;
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x46B1A4);
    if (CMP_EQ(_fa, _fb)) goto loc_00320D77; /* je: equal / zero */

loc_00320D59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320D62; /* jne: not equal / not zero */

loc_00320D5D: ;
    PUSH32(esp, 0x00320D62u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00320D62: ;
    edx = MEM32(edi + 0x3C);
    PUSH32(esp, edx);
    edx = esi;
    ecx = eax;
    PUSH32(esp, 0x00320D6Fu); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_00320D6F: ;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x30) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00320D77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320D80; /* jne: not equal / not zero */

loc_00320D7B: ;
    PUSH32(esp, 0x00320D80u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00320D80: ;
    edx = esi;
    ecx = eax;
    PUSH32(esp, 0x00320D89u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00320D89: ;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x30) = ebx;
    POP32(esp, esi);

loc_00320D90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320DA0
 * Original: 0x00320DA0 - 0x00320DDF (63 bytes, 23 insns)
 * Folder: render (match: xbox-demo 0x000A6830, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320DA0: ;
    edx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x30) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00320DDE; /* jae: above or equal (unsigned >=) */

loc_00320DA8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x34) = edx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = ecx;

loc_00320DDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320DE0
 * Original: 0x00320DE0 - 0x00320E01 (33 bytes, 12 insns)
 * Folder: render (between: 0x00320DA0 and 0x00320E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320DE0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320DF4; /* je: equal / zero */

loc_00320DE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17D4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17D4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320DF5; /* jne: not equal / not zero */

loc_00320DEB: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00320DF3u); RECOMP_ABI_CALL(0x00320D10u, sub_00320D10); /* call 0x00320D10 */

loc_00320DF3: ;
    POP32(esp, edi);

loc_00320DF4: ;
    esp += 4; return; /* ret */

loc_00320DF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17D7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17D7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320DF4; /* jne: not equal / not zero */

loc_00320DFC: ;
    g_seh_ebp = ebp; sub_00320DA0(); return; /* tail jmp 0x00320DA0 */

}

/**
 * sub_00320E10
 * Original: 0x00320E10 - 0x00320F01 (241 bytes, 70 insns)
 * Folder: render (match: xbox-demo 0x000A68A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320E10(void)
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

loc_00320E10: ;
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x34);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_AE(_fa, _fb)) goto loc_00320EFE; /* jae: above or equal (unsigned >=) */

loc_00320E29: ;
    xmm3 = XMM_SCALAR(MEMF(0x42936C)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00320E40;

    /* nop */
    /* nop */

loc_00320E40: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x18); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00320E76; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edx + 0x18)) */

loc_00320E54: ;
    ecx = MEM32(edx + 0x34);
    edi = MEM32(edx + 0x3C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x34) = ecx;
    ecx = 7;
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
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00320EF4;

loc_00320E76: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320EF1; /* je: equal / zero */

loc_00320E7A: ;
    ecx = ebp;
    /* nop */

loc_00320E80: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    if ((_fa != 0)) goto loc_00320E80; /* jne: not equal / not zero */

loc_00320EF1: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00320EF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00320E40; /* jb: below (unsigned <) */

loc_00320EFC: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00320EFE: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00320F10
 * Original: 0x00320F10 - 0x003212B4 (932 bytes, 230 insns)
 * Folder: render (between: 0x00320E10 and 0x003212C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320F10(void)
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

loc_00320F10: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x470D74); /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x429370); /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x42936C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00320F58; /* je: equal / zero */

loc_00320F4D: ;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0x00320F55u); RECOMP_ABI_CALL(0x00320E10u, sub_00320E10); /* call 0x00320E10 */

loc_00320F55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00320F58: ;
    eax = MEM32(0x758E3C);
    ecx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003212AA; /* je: equal / zero */

loc_00320F6B: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edx = eax + eax;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = eax * 4;
    PUSH32(esp, 0x00320F87u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00320F87: ;
    ecx = MEM32(0x758E48);
    eax = MEM32(ecx + 0x1C);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx + 0x1C);
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 0x1C);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x1C);
    MEMF(edx + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 0x1C);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x1C);
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x1C);
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx + 0x1C);
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x24);
    edi = MEM32(edx + 8);
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ebx = MEM32(ecx + 0x14);
    ebp = MEM32(esi + 0x3C);
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    MEM32(esp + 0x10) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(esp + 0x18) = edx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00321016; /* jnp: not parity */

loc_0032100A: ;
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0032101C;

loc_00321016: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_0032101C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0032126C; /* jae: above or equal (unsigned >=) */

loc_00321024: ;
    esi = MEM32(esp + 0x10);
    xmm5 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00321040;

    /* nop */
    /* nop */

loc_00321040: ;
    ecx = MEM32(esp + 0x38);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    eax = MEM32(ecx + 0x2C);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0x20); /* addss */
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, 0x0032106Du); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_0032106D: ;
    edx = MEM32(esp + 0x10);
    xmm3 = xmm2; /* movaps */
    ecx = eax;
    eax = MEM32(0x758E34);
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x164); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x178)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x168)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x160)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x170)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x174)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm7.f[0]; /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    MEMF(edx) = xmm7.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x2C); /* subss */
    MEMF(esi + -16) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x30); /* subss */
    xmm7 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEMF(esi + -12) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esi + -16)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + -12); /* addss */
    MEMF(esi + -12) = xmm2.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(esi + -16) = xmm7.f[0]; /* movss */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -16)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + -12); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    eax = MEM32(0x758E48);
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = LO16(eax);
    MEM16(edi + 6) = 0;
    MEM16(edi + 8) = 1;
    MEM16(edi + 0xA) = 2;
    MEM32(esp + 0x10) = edx;
    edx = eax + 1;
    MEM16(edi + 2) = LO16(edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 2;
    MEM16(edi + -12) = LO16(edx);
    MEM16(edi) = LO16(edx);
    MEM16(edi + 4) = LO16(eax);
    MEM16(edi + 6) = 2;
    MEM16(edi + 8) = 3;
    MEM16(edi + 0xA) = 0;
    edx = eax + 3;
    eax = MEM32(esp + 0x18);
    MEM16(edi + 2) = LO16(edx);
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00321040; /* jb: below (unsigned <) */

loc_00321266: ;
    ecx = MEM32(0x758E48);

loc_0032126C: ;
    eax = MEM32(ecx + 0x24);
    MEM32(eax + 4) = 0;
    eax = MEM32(0x758E34);
    esi = MEM32(eax + 0x74);
    edx = esi;
    edx = edx & 0xFFFFFEDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = edx;
    eax = MEM32(ecx);
    ecx = MEM32(0x758E44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032129Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00321298u); } /* indirect call */
    }

loc_0032129B: ;
    edx = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(edx + 0x74) = esi;
    POP32(esp, ebx);

loc_003212AA: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00321044
 * Original: 0x00321044 - 0x003212B4 (624 bytes, 147 insns)
 * Folder: render (between: 0x00320E10 and 0x003212C0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321044(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321044: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    eax = MEM32(ecx + 0x2C);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0x20); /* addss */
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, 0x0032106Du); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_0032106D: ;
    edx = MEM32(esp + 0x10);
    xmm3 = xmm2; /* movaps */
    ecx = eax;
    eax = MEM32(0x758E34);
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x164); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x178)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x168)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x160)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x170)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x174)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm7.f[0]; /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    MEMF(edx) = xmm7.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x2C); /* subss */
    MEMF(esi + -16) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x30); /* subss */
    xmm7 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEMF(esi + -12) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esi + -16)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + -12); /* addss */
    MEMF(esi + -12) = xmm2.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(esi + -16) = xmm7.f[0]; /* movss */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -16)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + -12); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    eax = MEM32(0x758E48);
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = LO16(eax);
    MEM16(edi + 6) = 0;
    MEM16(edi + 8) = 1;
    MEM16(edi + 0xA) = 2;
    MEM32(esp + 0x10) = edx;
    edx = eax + 1;
    MEM16(edi + 2) = LO16(edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 2;
    MEM16(edi + -12) = LO16(edx);
    MEM16(edi) = LO16(edx);
    MEM16(edi + 4) = LO16(eax);
    MEM16(edi + 6) = 2;
    MEM16(edi + 8) = 3;
    MEM16(edi + 0xA) = 0;
    edx = eax + 3;
    eax = MEM32(esp + 0x18);
    MEM16(edi + 2) = LO16(edx);
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00321040(); return; } /* jb: below (unsigned <) */

loc_00321266: ;
    ecx = MEM32(0x758E48);
    eax = MEM32(ecx + 0x24);
    MEM32(eax + 4) = 0;
    eax = MEM32(0x758E34);
    esi = MEM32(eax + 0x74);
    edx = esi;
    edx = edx & 0xFFFFFEDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = edx;
    eax = MEM32(ecx);
    ecx = MEM32(0x758E44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032129Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00321298u); } /* indirect call */
    }

loc_0032129B: ;
    edx = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(edx + 0x74) = esi;
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003212C0
 * Original: 0x003212C0 - 0x0032136C (172 bytes, 38 insns)
 * Folder: render (match: xbox-demo 0x000A6D40, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003212C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003212C0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003212CE; /* jne: not equal / not zero */

loc_003212C9: ;
    PUSH32(esp, 0x003212CEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_003212CE: ;
    PUSH32(esp, edi);
    edx = 0x6C;
    ecx = eax;
    PUSH32(esp, 0x003212DBu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_003212DB: ;
    xmm0 = XMM_SCALAR(MEMF(0x4294D0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x429448)); /* movss */
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1B;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(edx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x14) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4293C8)); /* movss */
    MEMF(edx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4293F8)); /* movss */
    MEMF(edx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429348)); /* movss */
    MEMF(edx + 0x2C) = xmm2.f[0]; /* movss */
    MEM32(edx + 0x54) = 0xFFFFFFFFu;
    MEMF(edx + 0x38) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x40) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x44) = xmm0.f[0]; /* movss */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321370
 * Original: 0x00321370 - 0x003213A3 (51 bytes, 19 insns)
 * Folder: render (between: 0x003212C0 and 0x003213B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321370: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003213A2; /* je: equal / zero */

loc_00321374: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003213A2; /* je: equal / zero */

loc_0032137B: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x5C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003213A2; /* je: equal / zero */

loc_00321389: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321397; /* jne: not equal / not zero */

loc_00321392: ;
    PUSH32(esp, 0x00321397u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00321397: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003213A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032139Fu); } /* indirect call */
    }

loc_003213A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003213B0
 * Original: 0x003213B0 - 0x003218C9 (1305 bytes, 295 insns)
 * Folder: render (match: xbox-demo 0x000A6E20, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003213B0(void)
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

loc_003213B0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x470D74); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003218C3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003213D3: ;
    ebx = 0x7FFFFFFF;
    goto loc_003213E0;

    /* nop */

loc_003213E0: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x50) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003218C3; /* jge: greater or equal (signed >=) */

loc_003213EC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x64); /* addss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x645080)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x64507C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x645078)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x38), ebx (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_003214E3; /* jne: not equal / not zero */

loc_0032146D: ;
    _fa = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x3C), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003214E3; /* jne: not equal / not zero */

loc_00321473: ;
    _fa = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x40), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003214E3; /* jne: not equal / not zero */

loc_00321479: ;
    xmm0 = XMM_SCALAR(MEMF(0x64508C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x645088)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x645084)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */

loc_003214E3: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    edx = MEM32(esi + 0x68);
    ecx = eax + eax * 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx + ecx * 4;
    MEM32(esi + 0x60) = eax;
    eax = MEM32(esi);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 8) = ecx;
    edx = MEM32(esi + 8);
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEM32(edi + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00321606u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00321606: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x00321635u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00321635: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x42943C)); /* fmul dword ptr [0x42943c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429424)); /* fmul dword ptr [0x429424] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00321668u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00321668: ;
    fp_push(MEMF(0x645160)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42943C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMD(esp + 0x30) = fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_003216BB; /* jns: not sign (positive) */

loc_003216AF: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003216C7;

loc_003216BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003216C7; /* jle: less or equal (signed <=) */

loc_003216C2: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003216C7: ;
    fp_push(MEMF(0x645160)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax * 4 + 0x645168)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    MEMD(esp + 8) = fp_top(); /* fst */
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003216F8; /* jge: greater or equal (signed >=) */

loc_003216EC: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00321704;

loc_003216F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00321704; /* jle: less or equal (signed <=) */

loc_003216FF: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00321704: ;
    xmm1 = XMM_SCALAR(MEMF(eax * 4 + 0x645168)); /* movss */
    fp_push(MEMD(esp + 0x30)); /* fld double */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x38); /* mulss */
    MEMF(edi + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edi + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edi + 0x18) = xmm2.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_0032175D; /* jge: greater or equal (signed >=) */

loc_00321751: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00321769;

loc_0032175D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00321769; /* jle: less or equal (signed <=) */

loc_00321764: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00321769: ;
    xmm2 = XMM_SCALAR(MEMF(eax * 4 + 0x645168)); /* movss */
    MEMD(esp + 0x30) = fp_top(); /* fst */
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0032178A; /* jge: greater or equal (signed >=) */

loc_0032177E: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00321796;

loc_0032178A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00321796; /* jle: less or equal (signed <=) */

loc_00321791: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00321796: ;
    xmm1 = XMM_SCALAR(MEMF(eax * 4 + 0x645168)); /* movss */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    if ((_fas >= 0)) goto loc_00321809; /* jns: not sign (positive) */

loc_003217FD: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00321815;

loc_00321809: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00321815; /* jle: less or equal (signed <=) */

loc_00321810: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00321815: ;
    xmm1 = XMM_SCALAR(MEMF(eax * 4 + 0x645168)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00321882u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00321882: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    MEM32(edi) = 0;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x64); /* comiss */
    if ((_fca > _fcb)) goto loc_003213E0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x64)) */

loc_003218C3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_003218D0
 * Original: 0x003218D0 - 0x00321E26 (1366 bytes, 329 insns)
 * Folder: render (match: xbox-demo 0x000A7340, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003218D0(void)
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

loc_003218D0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    eax = MEM32(ebx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ebx + 0x68);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp) = edx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM32(esp + 4) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00321E22; /* jle: less or equal (signed <=) */

loc_003218FE: ;
    xmm6 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = edx + 0x14;
    /* nop */

loc_00321910: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003219F7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032192A: ;
    _fa = (uint32_t)(MEM8(ebx + 0x58)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x58), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321C39; /* je: equal / zero */

loc_00321934: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321C39; /* jne: not equal / not zero */

loc_0032193D: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x4C)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x48)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00321958u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00321958: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42943C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003219B0; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032198C: ;
    eax = MEM32(ebx + 0x60);
    ecx = MEM32(ebx + 0x68);
    edi = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0x60) = eax;
    eax = eax + eax * 8;
    esi = ecx + eax * 4;
    ecx = 9;
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
    goto loc_00321E12;

loc_003219B0: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xD) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edx * 4 + 0x648168);
    eax = eax & 0xFF800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x7E800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7E800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = ecx;
    ecx = MEM32(eax);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebp + 8) = xmm1.f[0]; /* movss */
    MEM32(eax) = ecx;
    edx = eax;

loc_003219F7: ;
    xmm5 = XMM_SCALAR(MEMF(0x429564)); /* movss */
    xmm1 = xmm6; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00321ADA; /* jb: below (unsigned <) (xmm1.f[0] vs xmm5.f[0]) */

loc_00321A0B: ;
    goto loc_00321A10;

    /* nop */

loc_00321A10: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x42936C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    MEMF(ebp + -16) = xmm7.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebp + -12) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(ebp + -8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ebp + -4); /* addss */
    MEMF(ebp + -4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebp) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(ebp + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ebp + -4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ebp) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ebp + 4) = xmm3.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_00321A10; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm5.f[0]) */

loc_00321ADA: ;
    eax = MEM32(ebp + -16);
    esi = MEM32(esp + 0x30);
    MEM32(esi) = eax;
    ecx = MEM32(ebp + -12);
    MEM32(esi + 4) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(esi + 8) = eax;
    xmm4 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    edi = MEM32(esp + 0x34);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + -4); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + 4); /* mulss */
    MEMF(ebp + -16) = xmm4.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -12); /* addss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ebp + -8); /* addss */
    MEMF(ebp + -8) = xmm2.f[0]; /* movss */
    ecx = MEM32(ebp + -16);
    MEM32(edi) = ecx;
    eax = MEM32(ebp + -12);
    MEM32(edi + 4) = eax;
    ecx = MEM32(ebp + -8);
    MEM32(edi + 8) = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -4); /* addss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ebp + 4); /* addss */
    MEMF(ebp + 4) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -4); /* mulss */
    MEMF(ebp + -4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 4); /* mulss */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    MEMF(ebp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 8); /* subss */
    eax = MEM32(ebx + 0x58);
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(edi); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    if ((_fa == 0)) goto loc_00321CCB; /* je: equal / zero */

loc_00321BEE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00321C57; /* je: equal / zero */

loc_00321BF1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00321D10; /* jne: not equal / not zero */

loc_00321BF8: ;
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x40)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(0x429344); /* subss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 8); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    goto loc_00321D04;

loc_00321C39: ;
    eax = MEM32(ebx + 0x60);
    ecx = MEM32(ebx + 0x68);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0x60) = eax;
    eax = eax + eax * 8;
    esi = ecx + eax * 4;
    ecx = 9;
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
    goto loc_00321E12;

loc_00321C57: ;
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x40)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(0x429344); /* subss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x429354); /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    MEMF(edi) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(edi + 4) = xmm3.f[0]; /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    goto loc_00321D04;

loc_00321CCB: ;
    xmm4 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ebx + 0x40); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 8); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(edi) = xmm4.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */

loc_00321D04: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */

loc_00321D10: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00321D59; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00321D1B: ;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    ecx = eax;
    eax = eax & 0x7F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3F800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xD) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x7F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx * 4 + 0x649168)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx * 4 + 0x649168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00321D5F;

loc_00321D59: ;
    eax = MEM32(ebx + 0x34);
    MEM32(esi + 0xC) = eax;

loc_00321D5F: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 1 (8-bit) */
    ecx = MEM32(ebx + 0x54);
    if (TEST_Z(_fa, _fb)) goto loc_00321D7F; /* je: equal / zero */

loc_00321D67: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    PUSH32(esp, 0x00321D76u); RECOMP_ABI_CALL(0x0030A6A0u, sub_0030A6A0); /* call 0x0030A6A0 */

loc_00321D76: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = eax;
    goto loc_00321D82;

loc_00321D7F: ;
    MEM32(esi + 0x10) = ecx;

loc_00321D82: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -4); /* addss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebp + 4); /* addss */
    MEMF(ebp + 4) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x38);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -4); /* mulss */
    MEMF(ebp + -4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 4); /* mulss */
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    MEMF(ebp + 4) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x24;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x30) = esi;

loc_00321E12: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x60) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00321910; /* jl: less (signed <) */

loc_00321E1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00321E22: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00321E30
 * Original: 0x00321E30 - 0x00321EAC (124 bytes, 48 insns)
 * Folder: render (between: 0x003218D0 and 0x00322260)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321E30: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321E5B; /* jne: not equal / not zero */

loc_00321E37: ;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321EAB; /* je: equal / zero */

loc_00321E41: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321E4F; /* jne: not equal / not zero */

loc_00321E4A: ;
    PUSH32(esp, 0x00321E4Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00321E4F: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00321E5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00321E57u); } /* indirect call */
    }

loc_00321E5A: ;
    esp += 4; return; /* ret */

loc_00321E5B: ;
    PUSH32(esp, edi);
    edi = eax + eax * 8;
    eax = MEM32(esi + 0x5C);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x46B1A4);
    if (CMP_EQ(_fa, _fb)) goto loc_00321E8F; /* je: equal / zero */

loc_00321E6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321E77; /* jne: not equal / not zero */

loc_00321E72: ;
    PUSH32(esp, 0x00321E77u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00321E77: ;
    edx = MEM32(esi + 0x68);
    PUSH32(esp, edx);
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x00321E84u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_00321E84: ;
    MEM32(esi + 0x68) = eax;
    eax = MEM32(esi + 0x50);
    MEM32(esi + 0x5C) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00321E8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321E98; /* jne: not equal / not zero */

loc_00321E93: ;
    PUSH32(esp, 0x00321E98u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00321E98: ;
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x00321EA1u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00321EA1: ;
    MEM32(esi + 0x68) = eax;
    eax = MEM32(esi + 0x50);
    MEM32(esi + 0x5C) = eax;
    POP32(esp, edi);

loc_00321EAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321EB0
 * Original: 0x00321EB0 - 0x00322255 (933 bytes, 250 insns)
 * Folder: render (between: 0x003218D0 and 0x00322260)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321EB0(void)
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

loc_00321EB0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322219; /* je: equal / zero */

loc_00321EC3: ;
    eax = MEM32(edi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x50) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321ED2; /* je: equal / zero */

loc_00321ECB: ;
    esi = edi;
    PUSH32(esp, 0x00321ED2u); RECOMP_ABI_CALL(0x00321E30u, sub_00321E30); /* call 0x00321E30 */

loc_00321ED2: ;
    eax = MEM32(edi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322219; /* je: equal / zero */

loc_00321EDD: ;
    _fa = (uint32_t)(MEM8(edi + 0x58)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x58), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00322226; /* jne: not equal / not zero */

loc_00321EE7: ;
    esi = edi;
    PUSH32(esp, 0x00321EEEu); RECOMP_ABI_CALL(0x003213B0u, sub_003213B0); /* call 0x003213B0 */

loc_00321EEE: ;
    ecx = MEM32(edi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x50) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00321F03; /* jl: less (signed <) */

loc_00321EF6: ;
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321F03; /* je: equal / zero */

loc_00321EFD: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x58) = eax;

loc_00321F03: ;
    PUSH32(esp, 1);
    edx = ecx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = ecx * 4;
    PUSH32(esp, 0x00321F19u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00321F19: ;
    eax = MEM32(0x758E48);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 4);
    ecx = eax + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ebx = edi;
    PUSH32(esp, 0x00321F2Fu); RECOMP_ABI_CALL(0x003218D0u, sub_003218D0); /* call 0x003218D0 */

loc_00321F2F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00321F32: ;
    edx = MEM32(0x758E3C);
    eax = MEM32(edx + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322219; /* je: equal / zero */

loc_00321F46: ;
    eax = MEM32(edi + 0x60);
    PUSH32(esp, 1);
    ecx = eax + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = eax * 4;
    PUSH32(esp, 0x00321F5Fu); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00321F5F: ;
    esi = MEM32(0x758E48);
    edx = MEM32(esi + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    ebp = MEM32(0x758E34);
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x14);
    eax = MEM32(edi + 0x60);
    ecx = MEM32(esi + 0x24);
    ebx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003221E6; /* jle: less or equal (signed <=) */

loc_00321FDA: ;
    eax = ebx + 0x1C;
    /* nop */

loc_00321FE0: ;
    edi = MEM32(eax + -12);
    MEM32(edx) = edi;
    MEM32(edx + 4) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = edi;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + -20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x194); /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + -24); /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ebp + 0x190); /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(ebx); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 0x198); /* subss */
    xmm6 = xmm3; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax + -16)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429354); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + -24)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + -20)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(ebx) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + -24)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + -24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + -20)); /* movss */
    edi = MEM32(esp + 0x14);
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + -20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + -16) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + -12) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + -8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + -4) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ebp = edi + 1;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEM16(ecx + 2) = LO16(ebp);
    ebp = edi + 2;
    MEM16(ecx + 4) = LO16(ebp);
    MEM16(ecx + 0x10) = LO16(ebp);
    ebp = edi + 3;
    MEM16(ecx) = LO16(edi);
    MEM16(ecx + 0x14) = LO16(edi);
    edi = MEM32(esp + 0x14);
    MEM16(ecx + 0x12) = LO16(ebp);
    ebp = MEM32(esp + 0x2C);
    MEM16(ecx + 6) = 0;
    MEM16(ecx + 8) = 1;
    MEM16(ecx + 0xA) = 2;
    MEM16(ecx + 0x16) = 2;
    MEM16(ecx + 0x18) = 3;
    MEM16(ecx + 0x1A) = 0;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x60) (32-bit) */
    ebp = MEM32(0x758E34);
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00321FE0; /* jl: less (signed <) */

loc_003221E6: ;
    edx = MEM32(esi + 0x24);
    MEM32(edx + 4) = 0;
    edi = MEM32(ebp + 0x74);
    edx = MEM32(0x758E44);
    eax = edi;
    eax = eax & 0xFFFFFEDFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x74) = eax;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0032220Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032220Bu); } /* indirect call */
    }

loc_0032220E: ;
    eax = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x74) = edi;

loc_00322219: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00322226: ;
    edx = MEM32(0x758E48);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, 4);
    ecx = eax + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ebx = edi;
    PUSH32(esp, 0x0032223Du); RECOMP_ABI_CALL(0x003218D0u, sub_003218D0); /* call 0x003218D0 */

loc_0032223D: ;
    eax = MEM32(edi + 0x60);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321F32; /* jne: not equal / not zero */

loc_0032224B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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

/**
 * sub_00322260
 * Original: 0x00322260 - 0x0032228A (42 bytes, 14 insns)
 * Folder: render (match: xbox-demo 0x000A7CC0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322260: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032226E; /* jne: not equal / not zero */

loc_00322269: ;
    PUSH32(esp, 0x0032226Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032226E: ;
    edx = 0x10;
    ecx = eax;
    PUSH32(esp, 0x0032227Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032227A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00322290
 * Original: 0x00322290 - 0x003222C3 (51 bytes, 17 insns)
 * Folder: render (between: 0x00322260 and 0x00322660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322290: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003222C2; /* je: equal / zero */

loc_00322294: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003222B4; /* je: equal / zero */

loc_0032229B: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003222A9; /* jne: not equal / not zero */

loc_003222A4: ;
    PUSH32(esp, 0x003222A9u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_003222A9: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003222B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003222B1u); } /* indirect call */
    }

loc_003222B4: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 8) = 0;

loc_003222C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003222D0
 * Original: 0x003222D0 - 0x0032265D (909 bytes, 240 insns)
 * Folder: render (between: 0x00322260 and 0x00322660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003222D0(void)
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

loc_003222D0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322653; /* je: equal / zero */

loc_003222E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    ebx = eax + eax * 2;
    PUSH32(esp, 0x003222F5u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_003222F5: ;
    eax = MEM32(0x758E48);
    ecx = MEM32(eax + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + 0x24);
    ebp = MEM32(ecx + 8);
    esi = MEM32(eax + 0x14);
    ecx = MEM32(edi + 8);
    ebx = MEM32(eax + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0032261F; /* jle: less or equal (signed <=) */

loc_0032235F: ;
    xmm2 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    MEM32(esp + 0x14) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00322380;

loc_00322370: ;
    edi = MEM32(esp + 0x38);
    goto loc_00322380;

    /* nop */
    /* nop */

loc_00322380: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edi + eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + eax + 0x18); /* divss */
    ecx = MEM32(edi + eax + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003223A6u); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_003223A6: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm6 = XMM_SCALAR(MEMF(0x64507C)); /* movss */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    xmm7 = XMM_SCALAR(MEMF(0x645080)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429360) / fp_top()); /* fdivr dword ptr [0x429360] */
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x1C)); /* fsub dword ptr [edi + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x1C)); /* fadd dword ptr [edi + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(0x645080)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x645078); /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm7.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(0x645078)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm6 = xmm0; /* movaps */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    ecx = MEM32(esp + 0x18);
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    MEMF(ebx + -12) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(ebx + -8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ebx + -8)); /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(ebx + -12); /* addss */
    MEMF(ebx + -12) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(ebx + -8) = xmm7.f[0]; /* movss */
    MEMF(ebx + -4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + -12); /* addss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    MEMF(ebx + 0x10) = xmm0.f[0]; /* movss */
    MEM16(ebp) = LO16(ecx);
    edx = ecx + 1;
    MEM16(ebp + 2) = LO16(edx);
    MEM16(ebp + 6) = 0;
    MEM16(ebp + 8) = 1;
    MEM16(ebp + 0xA) = 2;
    edx = ecx + 2;
    MEM16(ebp + 4) = LO16(edx);
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x18); /* comiss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = esi;
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003225F3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x18)) */

loc_003225C6: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0032260B; /* jge: greater or equal (signed >=) */

loc_003225D9: ;
    esi = eax + eax * 2;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;
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
    esi = MEM32(esp + 0x24);
    goto loc_00322607;

loc_003225F3: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;

loc_00322607: ;
    ecx = MEM32(esp + 0x38);

loc_0032260B: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00322370; /* jl: less (signed <) */

loc_00322618: ;
    eax = MEM32(0x758E48);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032261F: ;
    ecx = MEM32(0x758E34);
    esi = MEM32(ecx + 0x74);
    edi = esi;
    edi = edi | 0x800;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x74) = edi;
    ecx = MEM32(eax + 0x24);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax);
    eax = MEM32(0x758E44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00322644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322641u); } /* indirect call */
    }

loc_00322644: ;
    ecx = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x74) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00322653: ;
    eax = 1;
    POP32(esp, edi);
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
 * sub_00322660
 * Original: 0x00322660 - 0x003226CA (106 bytes, 36 insns)
 * Folder: render (match: xbox-demo 0x000A80B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322660: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2776) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2776 (32-bit) */
    eax = MEM32(esi + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003226AE; /* jne: not equal / not zero */

loc_0032266A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00322698; /* jge: greater or equal (signed >=) */

loc_0032266E: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322695; /* jne: not equal / not zero */

loc_00322675: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322683; /* jne: not equal / not zero */

loc_0032267E: ;
    PUSH32(esp, 0x00322683u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00322683: ;
    edx = MEM32(esi);
    edx = edx + edx * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x00322692u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00322692: ;
    MEM32(esi + 0xC) = eax;

loc_00322695: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00322698: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(ecx + edx + -8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_003226AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003226C9; /* je: equal / zero */

loc_003226B2: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 8);
    MEM32(eax + edx + -48) = ecx;

loc_003226C9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003226D0
 * Original: 0x003226D0 - 0x003226ED (29 bytes, 10 insns)
 * Folder: render (between: 0x00322660 and 0x003226F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003226D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003226D0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003226EC; /* je: equal / zero */

loc_003226D7: ;
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + ecx + -48) = xmm0.f[0]; /* movss */

loc_003226EC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003226F0
 * Original: 0x003226F0 - 0x0032271D (45 bytes, 18 insns)
 * Folder: render (match: xbox-demo 0x000A8140, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003226F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003226F0: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032271C; /* je: equal / zero */

loc_003226F7: ;
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xC);
    edx = MEM32(esp + 8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + edx + -48;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);

loc_0032271C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00322720
 * Original: 0x00322720 - 0x0032286D (333 bytes, 94 insns)
 * Folder: render (match: xbox-demo 0x000A8170, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322720(void)
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

loc_00322720: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032286B; /* je: equal / zero */

loc_0032272C: ;
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(ecx + 0x38);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x34);
    eax = ebx + eax * 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0032286A; /* jae: above or equal (unsigned >=) */

loc_00322745: ;
    xmm4 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00322750: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322854; /* je: equal / zero */

loc_00322759: ;
    edi = MEM32(ecx + 0x1C);
    esi = MEM32(ecx + 0x20);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0032285C; /* jae: above or equal (unsigned >=) */

loc_0032276C: ;
    eax = edx + 0x14;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00322772: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi); /* mulss */
    MEMF(eax + -8) = xmm5.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + -4); /* addss */
    MEMF(eax + -4) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + -16)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + -4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax); /* mulss */
    MEMF(eax + -16) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + -12)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(edx) = xmm5.f[0]; /* movss */
    MEMF(eax + -12) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00322809; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00322803: ;
    ebp = MEM32(eax + 0x14);
    MEM32(eax + -12) = ebp;

loc_00322809: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -8); /* mulss */
    MEMF(eax + -8) = xmm1.f[0]; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -4); /* mulss */
    MEMF(eax + -4) = xmm1.f[0]; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0xC); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00322772; /* jb: below (unsigned <) */

loc_0032284E: ;
    eax = MEM32(esp + 0x10);
    goto loc_0032285C;

loc_00322854: ;
    esi = MEM32(ecx + 0x1C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032285C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00322750; /* jb: below (unsigned <) */

loc_00322867: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0032286A: ;
    POP32(esp, ebx);

loc_0032286B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00322870
 * Original: 0x00322870 - 0x003228CF (95 bytes, 44 insns)
 * Folder: render (match: xbox-demo 0x000A82C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322870: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003228CE; /* je: equal / zero */

loc_00322877: ;
    eax = MEM32(ecx + 0x34);
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + edx * 4 + -4);
    PUSH32(esp, edi);
    edi = eax + edx * 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003228AF; /* jae: above or equal (unsigned >=) */

loc_0032288F: ;
    PUSH32(esp, ebp);

loc_00322890: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003228A5; /* je: equal / zero */

loc_00322895: ;
    ebp = edx + edx;
    ebp = ebp | 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ebp;
    _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003228A5; /* je: equal / zero */

loc_003228A4: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003228A5: ;
    esi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00322890; /* jb: below (unsigned <) */

loc_003228AE: ;
    POP32(esp, ebp);

loc_003228AF: ;
    eax = MEM32(ecx + 0x24);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(ecx + 0x18);
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    POP32(esp, edi);
    MEM32(ecx + 0x3C) = esi;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    MEM32(ecx + 0x44) = edx;
    POP32(esp, ebx);

loc_003228CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003228D0
 * Original: 0x003228D0 - 0x003228FE (46 bytes, 19 insns)
 * Folder: render (match: xbox-demo 0x000A8320, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003228D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003228D0: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003228FD; /* je: equal / zero */

loc_003228D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x34);
    MEM32(esi + edx * 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003228FC; /* jne: not equal / not zero */

loc_003228E5: ;
    esi = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax + 0x30) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003228FC; /* jne: not equal / not zero */

loc_003228F5: ;
    MEM32(eax + 0x30) = 0;

loc_003228FC: ;
    POP32(esp, esi);

loc_003228FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00322900
 * Original: 0x00322900 - 0x00322D9C (1180 bytes, 303 insns)
 * Folder: render (match: xbox-demo 0x000A8350, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322900(void)
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

loc_00322900: ;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00322D98; /* je: equal / zero */

loc_0032290E: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(edi + 0x34);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00322D98; /* je: equal / zero */

loc_0032291E: ;
    edx = MEM32(edi + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00322928; /* jne: not equal / not zero */

loc_00322926: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00322928: ;
    edx = MEM32(edi + 0x30);
    edx = MEM32(ecx + edx * 4);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(edi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edi + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00322949; /* je: equal / zero */

loc_0032293E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00322945; /* jne: not equal / not zero */

loc_00322942: ;
    eax = MEM32(edi + 0x2C);

loc_00322945: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x30) = eax;

loc_00322949: ;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x30);
    ebx = MEM32(edi + 0x20);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x2C);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(MEM32(edi + 0x38))) >> 32) & 1);
    ebp = ebp + MEM32(edi + 0x38);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00322C56; /* jae: above or equal (unsigned >=) */

loc_0032296F: ;
    esi = ebp + 0x14;

loc_00322972: ;
    eax = edi + 0x6C;
    edx = MEM32(eax);
    ecx = ebp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = ebx;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x003229A2u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_003229A2: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003229C8u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_003229C8: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003229EEu); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_003229EE: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + -16)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + -16) = xmm2.f[0]; /* movss */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esi + -12)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(esi + -12) = xmm2.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x58)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0x5C)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + -16) = xmm4.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    MEMF(esi + -12) = xmm5.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + -16) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    MEMF(esi + -12) = xmm3.f[0]; /* movss */
    MEM32(esi + -8) = eax;
    MEM32(esi + -4) = eax;
    MEM32(esi) = eax;
    edx = ebx + 0xC;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00322AF2u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00322AF2: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00322B18u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00322B18: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00322B3Eu); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00322B3E: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + -8) = xmm4.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + -4) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x58)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0x5C); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + -8) = xmm4.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + -4) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(edi + 0x64); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x40);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xE0FFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(ebx + 0x3C);
    MEM32(esi + 0x14) = ecx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x2C)) >> 32) & 1);
    ebp = ebp + 0x2C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x2C)) >> 32) & 1);
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x48)) >> 32) & 1);
    ebx = ebx + 0x48;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00322972; /* jb: below (unsigned <) */

loc_00322C56: ;
    esi = MEM32(edi + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edi + 0x84) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00322D7E; /* je: equal / zero */

loc_00322C6B: ;
    edx = MEM32(edi + 0x34);
    eax = MEM32(edx + esi * 4 + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00322D7E; /* je: equal / zero */

loc_00322C7A: ;
    edx = MEM32(edi + 0x1C);
    ebx = MEM32(edi + 0x38);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(ecx + eax + -44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax + -40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + eax + -36)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 8); /* addss */
    eax = esi + -1;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    xmm3 = XMM_SCALAR(MEMF(eax + ebx)); /* movss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm5 = XMM_SCALAR(MEMF(ecx + eax + -36)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 8); /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + eax + -40)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 4); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + eax + -44); /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00322D32; /* jbe: below or equal (unsigned <=) */

loc_00322D26: ;
    MEM32(edi + 0x84) = 1;
    goto loc_00322D7E;

loc_00322D32: ;
    ebx = 9;

loc_00322D37: ;
    eax = MEM32(edi + 0x2C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00322D43; /* jb: below (unsigned <) */

loc_00322D3F: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00322D44;

loc_00322D43: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00322D44: ;
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(edi + 0x38);
    eax = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00322D7B; /* jae: above or equal (unsigned >=) */

loc_00322D5D: ;
    /* nop */

loc_00322D60: ;
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xE0000000u (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00322D74; /* je: equal / zero */

loc_00322D6B: ;
    _fb = (uint32_t)(0xE0000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xE0000000u)) >> 32) & 1);
    edx = edx + 0xE0000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x24) = edx;

loc_00322D74: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2C)) >> 32) & 1);
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00322D60; /* jb: below (unsigned <) */

loc_00322D7B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00322D37; /* jne: not equal / not zero */

loc_00322D7E: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(edi + 0x2C);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00322D8E; /* jne: not equal / not zero */

loc_00322D8C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00322D8E: ;
    ecx = MEM32(edi + 0x34);
    MEM32(ecx + eax * 4) = 0;

loc_00322D98: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00322DA0
 * Original: 0x00322DA0 - 0x00322EC3 (291 bytes, 97 insns)
 * Folder: render (match: xbox-demo 0x000A87F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322DA0: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322EC2; /* jne: not equal / not zero */

loc_00322DAB: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322EC2; /* je: equal / zero */

loc_00322DB6: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322EC2; /* je: equal / zero */

loc_00322DC1: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322EC2; /* je: equal / zero */

loc_00322DCC: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322DDA; /* jne: not equal / not zero */

loc_00322DD5: ;
    PUSH32(esp, 0x00322DDAu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00322DDA: ;
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x00322DE8u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00322DE8: ;
    ecx = MEM32(esi + 0x24);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322E11; /* jne: not equal / not zero */

loc_00322E0C: ;
    PUSH32(esp, 0x00322E11u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00322E11: ;
    edx = MEM32(esi + 0x1C);
    edx = edx + edx * 8;
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x00322E21u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00322E21: ;
    edi = eax;
    eax = MEM32(esi + 0x1C);
    ecx = eax + eax * 8;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322E4D; /* jne: not equal / not zero */

loc_00322E48: ;
    PUSH32(esp, 0x00322E4Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00322E4D: ;
    edx = MEM32(esi + 0x2C);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x00322E5Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00322E5A: ;
    ecx = MEM32(esi + 0x2C);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x34) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322E83; /* jne: not equal / not zero */

loc_00322E7E: ;
    PUSH32(esp, 0x00322E83u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00322E83: ;
    edx = MEM32(esi + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x1C));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    ecx = eax;
    PUSH32(esp, 0x00322E94u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00322E94: ;
    ecx = MEM32(esi + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x1C));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x38) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    MEM32(esi + 0x10) = 1;
    MEM32(esi + 0x18) = 4;
    POP32(esp, edi);

loc_00322EC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00322ED0
 * Original: 0x00322ED0 - 0x00322F16 (70 bytes, 19 insns)
 * Folder: render (match: xbox-demo 0x000A8920, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322ED0: ;
    PUSH32(esp, esi);
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0xFF;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi + 0x2C) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x80) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00322EF3; /* ja: above (unsigned >) */

loc_00322EE9: ;
    MEM32(esi + 0x80) = 1;

loc_00322EF3: ;
    ecx = MEM32(esi + 0x80);
    eax = 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00322F08; /* jb: below (unsigned <) */

loc_00322F02: ;
    MEM32(esi + 0x80) = eax;

loc_00322F08: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) << 0x18;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00322F14u); RECOMP_ABI_CALL(0x00322DA0u, sub_00322DA0); /* call 0x00322DA0 */

loc_00322F14: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322F20
 * Original: 0x00322F20 - 0x00322F4C (44 bytes, 16 insns)
 * Folder: render (between: 0x00322ED0 and 0x00323330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322F20: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322F2E; /* jne: not equal / not zero */

loc_00322F29: ;
    PUSH32(esp, 0x00322F2Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00322F2E: ;
    PUSH32(esp, edi);
    edx = 0x88;
    ecx = eax;
    PUSH32(esp, 0x00322F3Bu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00322F3B: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x22;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322F50
 * Original: 0x00322F50 - 0x00322FD9 (137 bytes, 51 insns)
 * Folder: render (between: 0x00322ED0 and 0x00323330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322F50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322FD8; /* je: equal / zero */

loc_00322F58: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322F78; /* je: equal / zero */

loc_00322F5F: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322F6D; /* jne: not equal / not zero */

loc_00322F68: ;
    PUSH32(esp, 0x00322F6Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00322F6D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00322F78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322F75u); } /* indirect call */
    }

loc_00322F78: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322F98; /* je: equal / zero */

loc_00322F7F: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322F8D; /* jne: not equal / not zero */

loc_00322F88: ;
    PUSH32(esp, 0x00322F8Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00322F8D: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00322F98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322F95u); } /* indirect call */
    }

loc_00322F98: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322FB8; /* je: equal / zero */

loc_00322F9F: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322FAD; /* jne: not equal / not zero */

loc_00322FA8: ;
    PUSH32(esp, 0x00322FADu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00322FAD: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00322FB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322FB5u); } /* indirect call */
    }

loc_00322FB8: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322FD8; /* je: equal / zero */

loc_00322FBF: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322FCD; /* jne: not equal / not zero */

loc_00322FC8: ;
    PUSH32(esp, 0x00322FCDu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00322FCD: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00322FD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322FD5u); } /* indirect call */
    }

loc_00322FD8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00322FE0
 * Original: 0x00322FE0 - 0x0032332A (842 bytes, 260 insns)
 * Folder: render (between: 0x00322ED0 and 0x00323330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322FE0(void)
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

loc_00322FE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323320; /* je: equal / zero */

loc_00322FF1: ;
    xmm6 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x429338)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00323019; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm7.f[0]) */

loc_00323006: ;
    ecx = edi;
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0x00323010u); RECOMP_ABI_CALL(0x00322720u, sub_00322720); /* call 0x00322720 */

loc_00323010: ;
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm6.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00323006; /* ja: above (unsigned >) (xmm6.f[0] vs xmm7.f[0]) */

loc_00323019: ;
    PUSH32(esp, ebx);
    ecx = edi;
    xmm0 = xmm6; /* movaps */
    PUSH32(esp, 0x00323024u); RECOMP_ABI_CALL(0x00322720u, sub_00322720); /* call 0x00322720 */

loc_00323024: ;
    PUSH32(esp, 0x00323029u); RECOMP_ABI_CALL(0x00322900u, sub_00322900); /* call 0x00322900 */

loc_00323029: ;
    ecx = edi;
    PUSH32(esp, 0x00323030u); RECOMP_ABI_CALL(0x00322870u, sub_00322870); /* call 0x00322870 */

loc_00323030: ;
    ebx = MEM32(edi + 0x40);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032331F; /* je: equal / zero */

loc_0032303B: ;
    eax = MEM32(edi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032331F; /* je: equal / zero */

loc_00323046: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x44);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323056u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00323056: ;
    ebp = MEM32(0x758E48);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(edi + 0x34);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(edi + 0x38);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(edi + 0x2C);
    ebx = esi + edx * 4;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_0032310D; /* jae: above or equal (unsigned >=) */

loc_0032308F: ;
    /* nop */

loc_00323090: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    edx = MEM32(edi + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_003230FD; /* je: equal / zero */

loc_00323098: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00323102; /* jae: above or equal (unsigned >=) */

loc_003230A1: ;
    ebx = MEM32(esp + 0x10);
    esi = eax;
    ebp = MEM32(esi);
    MEM32(ebx) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(ebx + 4) = ebp;
    esi = MEM32(esi + 8);
    MEM32(ebx + 8) = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + 0x18;
    ebp = MEM32(esi);
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(ebx) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(ebx + 4) = ebp;
    esi = MEM32(esi + 8);
    MEM32(ebx + 8) = esi;
    esi = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = esi;
    esi = MEM32(eax + 0x24);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003230A1; /* jb: below (unsigned <) */

loc_003230ED: ;
    ebp = MEM32(0x758E48);
    ebx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x18);
    goto loc_00323102;

loc_003230FD: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00323102: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_B(_fa, _fb)) goto loc_00323090; /* jb: below (unsigned <) */

loc_0032310D: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(edi + 0x24);
    eax = MEM32(edi + 0x28);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    esi = ecx + 1;
    if (CMP_GE(_fas, _fbs)) goto loc_00323130; /* jge: greater or equal (signed >=) */

loc_0032312A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_00323130: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    ecx = MEM32(ebp + 0x1C);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0032317D; /* je: equal / zero */

loc_00323149: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    /* nop */

loc_00323150: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00323173; /* jae: above or equal (unsigned >=) */

loc_00323154: ;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    ebx = MEM32(eax + 8);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00323154; /* jb: below (unsigned <) */

loc_00323173: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x28);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    if ((_fa != 0)) goto loc_00323150; /* jne: not equal / not zero */

loc_0032317D: ;
    esi = MEM32(edi + 0x34);
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(esi + ecx * 4 + -4);
    eax = MEM32(ebp + 0x24);
    eax = MEM32(eax + 8);
    ecx = esi + ecx * 4;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(edi + 0x24);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(edi + 0x28);
    ebx = ecx;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x18) (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_003232D2; /* jae: above or equal (unsigned >=) */

loc_003231B9: ;
    /* nop */

loc_003231C0: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032329F; /* je: equal / zero */

loc_003231CC: ;
    ecx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003232A2; /* jae: above or equal (unsigned >=) */

loc_003231D7: ;
    ebp = ebp >> 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    /* nop */

loc_003231E0: ;
    esi = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 0xA) = LO16(ebx);
    MEM16(eax + 8) = LO16(ebx);
    MEM16(eax + 6) = LO16(ebx);
    SET_LO16(ebx, MEM16(ecx));
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ebx, LO16(ebx) + LO16(esi));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(eax) = LO16(ebx);
    SET_LO16(ebx, MEM16(ecx + 2));
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ebx, LO16(ebx) + LO16(esi));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(ebx);
    SET_LO16(ebx, MEM16(ecx + 2));
    _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ebx, LO16(ebx) + LO16(ebp));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(edi + 0x24));
    SET_LO16(ebx, LO16(ebx) << 1);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + -26) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(edi + 0x24));
    SET_LO16(ebx, LO16(ebx) << 1);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    ebx = ebx + edx + 1;
    MEM16(eax + -24) = LO16(ebx);
    ebx = edx + 1;
    MEM16(eax + -22) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + -6) = LO16(ebx);
    MEM16(eax + -8) = LO16(ebx);
    MEM16(eax + -10) = LO16(ebx);
    SET_LO16(ebx, MEM16(ecx + -14));
    _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ebx, LO16(ebx) + LO16(ebp));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(eax + -16) = LO16(ebx);
    SET_LO16(ebx, MEM16(ecx + -16));
    _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ebx, LO16(ebx) + LO16(ebp));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(eax + -14) = LO16(ebx);
    SET_LO16(ebx, MEM16(ecx + -16));
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ebx, LO16(ebx) + LO16(esi));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = edx + 1;
    MEM16(eax + -10) = LO16(esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + -12) = LO16(ebx);
    ebx = MEM32(esp + 0x1C);
    MEM16(eax + -8) = LO16(edx);
    SET_LO16(esi, MEM16(edi + 0x24));
    SET_LO16(esi, LO16(esi) << 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + -6) = LO16(esi);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003231E0; /* jb: below (unsigned <) */

loc_0032329D: ;
    goto loc_003232A2;

loc_0032329F: ;
    edx = edx + ecx * 2;

loc_003232A2: ;
    ecx = MEM32(edi + 0x24);
    ebp = MEM32(edi + 0x18);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    ebp = ebp << 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003232B3; /* jne: not equal / not zero */

loc_003232B1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003232B3: ;
    ebp = MEM32(esi);
    MEM32(esp + 0x14) = ebp;
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_B(_fa, _fb)) goto loc_003231C0; /* jb: below (unsigned <) */

loc_003232CC: ;
    ebp = MEM32(0x758E48);

loc_003232D2: ;
    eax = MEM32(0x758E34);
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(ebp + 0x24);
    ecx = MEM32(0x758E3C);
    MEM32(edx + 4) = 0;
    edx = MEM32(ecx + 0x10);
    SET_LO8(ecx, MEM8(edx + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032331A; /* je: equal / zero */

loc_00323305: ;
    ecx = MEM32(0x758E44);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00323312u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032330Fu); } /* indirect call */
    }

loc_00323312: ;
    eax = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032331A: ;
    MEM32(eax + 0x74) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0032331F: ;
    POP32(esp, ebx);

loc_00323320: ;
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00323330
 * Original: 0x00323330 - 0x003233D8 (168 bytes, 63 insns)
 * Folder: render (match: xbox-demo 0x000A8D60, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323330: ;
    _fb = (uint32_t)(0xFFFFD0BCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFD0BCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    PUSH32(esp, esi);
    esi = edx;
    if (CMP_A(_fa, _fb)) goto loc_003233D6; /* ja: above (unsigned >) */

loc_00323341: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3233D8); /* switch: 12 entries, 12 targets */
    if (_jt == 0x00323348u) goto loc_00323348;
    if (_jt == 0x00323357u) goto loc_00323357;
    if (_jt == 0x00323366u) goto loc_00323366;
    if (_jt == 0x00323374u) goto loc_00323374;
    if (_jt == 0x0032337Cu) goto loc_0032337C;
    if (_jt == 0x00323381u) goto loc_00323381;
    if (_jt == 0x00323386u) goto loc_00323386;
    if (_jt == 0x00323395u) goto loc_00323395;
    if (_jt == 0x003233A5u) goto loc_003233A5;
    if (_jt == 0x003233B5u) goto loc_003233B5;
    if (_jt == 0x003233C4u) goto loc_003233C4;
    if (_jt == 0x003233D3u) goto loc_003233D3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00323348: ;
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, 0x00323350u); RECOMP_ABI_CALL(0x00322DA0u, sub_00322DA0); /* call 0x00322DA0 */

loc_00323350: ;
    PUSH32(esp, 0x00323355u); RECOMP_ABI_CALL(0x00322DA0u, sub_00322DA0); /* call 0x00322DA0 */

loc_00323355: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00323357: ;
    MEM32(esi + 0x24) = ecx;
    PUSH32(esp, 0x0032335Fu); RECOMP_ABI_CALL(0x00322DA0u, sub_00322DA0); /* call 0x00322DA0 */

loc_0032335F: ;
    PUSH32(esp, 0x00323364u); RECOMP_ABI_CALL(0x00322DA0u, sub_00322DA0); /* call 0x00322DA0 */

loc_00323364: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00323366: ;
    eax = esi;
    PUSH32(esp, 0x0032336Du); RECOMP_ABI_CALL(0x00322ED0u, sub_00322ED0); /* call 0x00322ED0 */

loc_0032336D: ;
    PUSH32(esp, 0x00323372u); RECOMP_ABI_CALL(0x00322DA0u, sub_00322DA0); /* call 0x00322DA0 */

loc_00323372: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00323374: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003228D0(); return; /* tail jmp 0x003228D0 */

loc_0032337C: ;
    MEM32(esi + 0x78) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00323381: ;
    MEM32(esi + 0x7C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00323386: ;
    eax = MEM32(esi + 0x7C);
    edx = MEM32(esi + 0x28);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + edx) = LO16(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00323395: ;
    eax = MEM32(esi + 0x7C);
    edx = MEM32(esi + 0x28);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + edx + 2) = LO16(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003233A5: ;
    eax = MEM32(esi + 0x7C);
    edx = MEM32(esi + 0x28);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + edx + 4) = LO16(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003233B5: ;
    eax = MEM32(esi + 0x78);
    edx = MEM32(esi + 0x20);
    eax = eax + eax * 8;
    MEM32(edx + eax * 8 + 0x40) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003233C4: ;
    eax = MEM32(esi + 0x78);
    edx = MEM32(esi + 0x20);
    eax = eax + eax * 8;
    MEM32(edx + eax * 8 + 0x44) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003233D3: ;
    MEM32(esi + 0x18) = ecx;

loc_003233D6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00323410
 * Original: 0x00323410 - 0x0032347B (107 bytes, 28 insns)
 * Folder: render (match: xbox-demo 0x000A8E40, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323410: ;
    _fb = (uint32_t)(0xFFFFD120u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFD120u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0032347A; /* ja: above (unsigned >) */

loc_0032341B: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x32347C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00323422u) goto loc_00323422;
    if (_jt == 0x0032342Du) goto loc_0032342D;
    if (_jt == 0x00323443u) goto loc_00323443;
    if (_jt == 0x00323459u) goto loc_00323459;
    if (_jt == 0x0032346Fu) goto loc_0032346F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00323422: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0032342D: ;
    ecx = MEM32(eax + 0x7C);
    edx = MEM32(eax + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(ecx + edx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00323443: ;
    ecx = MEM32(eax + 0x7C);
    edx = MEM32(eax + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(ecx + edx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00323459: ;
    ecx = MEM32(eax + 0x78);
    edx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    ecx = ecx + ecx * 8;
    MEMF(edx + ecx * 8 + 0x3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0032346F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_0032347A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323490
 * Original: 0x00323490 - 0x00323545 (181 bytes, 64 insns)
 * Folder: render (between: 0x00323410 and 0x00323570)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323490: ;
    _fb = (uint32_t)(0xFFFFD058u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFD058u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00323544; /* ja: above (unsigned >) */

loc_0032349F: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x323548); /* switch: 9 entries, 9 targets */
    if (_jt == 0x003234A6u) goto loc_003234A6;
    if (_jt == 0x003234C3u) goto loc_003234C3;
    if (_jt == 0x003234E1u) goto loc_003234E1;
    if (_jt == 0x003234E6u) goto loc_003234E6;
    if (_jt == 0x003234EBu) goto loc_003234EB;
    if (_jt == 0x003234F0u) goto loc_003234F0;
    if (_jt == 0x003234F5u) goto loc_003234F5;
    if (_jt == 0x00323509u) goto loc_00323509;
    if (_jt == 0x00323527u) goto loc_00323527;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003234A6: ;
    edx = MEM32(ecx + 0x78);
    ecx = MEM32(ecx + 0x20);
    edx = edx + edx * 8;
    edx = ecx + edx * 8;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    esp += 4; return; /* ret */

loc_003234C3: ;
    edx = MEM32(ecx + 0x78);
    ecx = MEM32(ecx + 0x20);
    edx = edx + edx * 8;
    edx = ecx + edx * 8 + 0xC;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    esp += 4; return; /* ret */

loc_003234E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003234F8;

loc_003234E6: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003234F8;

loc_003234EB: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003234F8;

loc_003234F0: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003234F8;

loc_003234F5: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003234F8: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

loc_00323509: ;
    edx = MEM32(ecx + 0x78);
    ecx = MEM32(ecx + 0x20);
    edx = edx + edx * 8;
    edx = ecx + edx * 8 + 0x18;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    esp += 4; return; /* ret */

loc_00323527: ;
    edx = MEM32(ecx + 0x78);
    ecx = MEM32(ecx + 0x20);
    edx = edx + edx * 8;
    edx = ecx + edx * 8 + 0x24;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;

loc_00323544: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323544
 * Original: 0x00323544 - 0x00323570 (44 bytes, 23 insns)
 * Folder: render (between: 0x00323410 and 0x00323570)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323544(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323544: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323570
 * Original: 0x00323570 - 0x003235BF (79 bytes, 24 insns)
 * Folder: render (match: xbox-demo 0x000ABF50, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323570: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323580; /* je: equal / zero */

loc_00323574: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323580; /* je: equal / zero */

loc_0032357B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323583; /* jne: not equal / not zero */

loc_00323580: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00323583: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323591; /* jne: not equal / not zero */

loc_0032358C: ;
    PUSH32(esp, 0x00323591u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00323591: ;
    edx = 0x14;
    ecx = eax;
    PUSH32(esp, 0x0032359Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032359D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEM32(eax) = esi;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003235C0
 * Original: 0x003235C0 - 0x00323706 (326 bytes, 96 insns)
 * Folder: render (between: 0x00323570 and 0x00323710)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003235C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003235C0: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    ecx = ebp;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi);
    SET_LO8(ebx, MEM8(eax + 0x1C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003235E0; /* jne: not equal / not zero */

loc_003235DC: ;
    MEM8(eax + 0x1C) = 1;

loc_003235E0: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x34);
    esi = eax + 0x30;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x758E3C);
    MEM32(esp + 0x14) = ecx;
    SET_LO16(ecx, MEM16(edx + 2));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323639; /* je: equal / zero */

loc_0032360C: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    goto loc_003236B2;

loc_00323639: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032369C; /* je: equal / zero */

loc_0032363E: ;
    eax = MEM32(0x758E34);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032369Au); RECOMP_ABI_CALL(0x002FDE90u, sub_002FDE90); /* call 0x002FDE90 */

loc_0032369A: ;
    goto loc_003236B2;

loc_0032369C: ;
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x30) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(edi + 0x10);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | 2;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003236B2: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003236D8; /* je: equal / zero */

loc_003236B9: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003236E1; /* je: equal / zero */

loc_003236C0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003236E1; /* je: equal / zero */

loc_003236C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003236CBu); RECOMP_ABI_CALL(0x00078850u, sub_00078850); /* call 0x00078850 */

loc_003236CB: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x003236D6u); RECOMP_ABI_CALL(0x00078A00u, sub_00078A00); /* call 0x00078A00 */

loc_003236D6: ;
    goto loc_003236DE;

loc_003236D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003236DEu); RECOMP_ABI_CALL(0x003097A0u, sub_003097A0); /* call 0x003097A0 */

loc_003236DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003236E1: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    eax = MEM32(edi);
    MEM8(eax + 0x1C) = LO8(ebx);
    ecx = MEM32(edi);
    POP32(esp, esi);
    MEM32(ecx + 4) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00323710
 * Original: 0x00323710 - 0x00323775 (101 bytes, 29 insns)
 * Folder: render (match: xbox-demo 0x000AC1B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323710: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032372E; /* je: equal / zero */

loc_00323714: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032372E; /* je: equal / zero */

loc_0032371B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032372E; /* je: equal / zero */

loc_00323721: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032372E; /* je: equal / zero */

loc_00323727: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323731; /* je: equal / zero */

loc_0032372E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00323731: ;
    PUSH32(esp, 0x00323736u); RECOMP_ABI_CALL(0x00016050u, sub_00016050); /* call 0x00016050 */

loc_00323736: ;
    edx = 0x1C;
    ecx = eax;
    PUSH32(esp, 0x00323742u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00323742: ;
    xmm0 = XMM_SCALAR(MEMF(0x429394)); /* movss */
    MEM32(eax + 0x10) = esi;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF00u;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x18) = 0;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00323780
 * Original: 0x00323780 - 0x00323A52 (722 bytes, 190 insns)
 * Folder: render (between: 0x00323710 and 0x00323DF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323780(void)
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

loc_00323780: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323A47; /* je: equal / zero */

loc_00323794: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x470D74); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003237B6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003237AE: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003237B6: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x429AB0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003237D4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x429AB0)) */

loc_003237BF: ;
    xmm1 = XMM_SCALAR(MEMF(0x429394)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    goto loc_003237DC;

loc_003237D4: ;
    xmm2 = XMM_SCALAR(MEMF(0x429344)); /* movss */

loc_003237DC: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0x003237EBu); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_003237EB: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0x003237FCu); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_003237FC: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 1);
    eax = esi + esi;
    PUSH32(esp, eax);
    ebx = esi * 4;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00323815u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00323815: ;
    ecx = MEM32(ebp);
    ebx = MEM32(0x758E48);
    esi = MEM32(ebp + 0x18);
    edi = MEM32(ebx + 0x1C);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
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
    eax = MEM32(ebp);
    edi = MEM32(0x758E34);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00323973; /* jle: less or equal (signed <=) */

loc_00323852: ;
    MEM32(esp + 0x10) = ecx;
    goto loc_00323860;

loc_00323858: ;
    ecx = MEM32(esp + 0x10);
    /* nop */

loc_00323860: ;
    edx = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(edi + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + edx); /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(edi + 0x10C); /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)MEM32(edi + 0x110); /* cvtsi2ss */
    esi = MEM32(ebx + 0xC);
    eax = ecx + edx;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0xF8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xEC); /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    SET_LO8(eax, MEM8(edi + 0xD0));
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0xF0); /* subss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_003238EE; /* je: equal / zero */

loc_003238C2: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(edi + 0xE4); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0xE8); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    goto loc_0032390A;

loc_003238EE: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0xE4); /* divss */
    xmm1.f[0] = xmm1.f[0] / MEMF(edi + 0xE8); /* divss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */

loc_0032390A: ;
    eax = edi + 0x160;
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0032391Au); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0032391A: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x190)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x30);
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x194)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x198)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00323858; /* jl: less (signed <) */

loc_00323973: ;
    edx = MEM32(ebx + 0x24);
    eax = MEM32(edx + 8);
    ecx = MEM32(ebp);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x2C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00323A10; /* jle: less or equal (signed <=) */

loc_0032398A: ;
    /* nop */

loc_00323990: ;
    ecx = MEM32(esp + 0x2C);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax) = LO16(ecx);
    MEM16(eax + 6) = LO16(ecx);
    esi = ecx + 1;
    MEM16(eax + 2) = LO16(esi);
    MEM16(eax + 8) = LO16(esi);
    esi = ecx + 2;
    MEM16(eax + 4) = LO16(esi);
    MEM16(eax + 0xA) = LO16(esi);
    MEM16(eax + 0x10) = LO16(esi);
    MEM16(eax + 0x16) = LO16(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ecx);
    esi = ecx + 3;
    MEM16(eax + 2) = LO16(esi);
    MEM16(eax + 8) = LO16(esi);
    ecx = MEM32(ebx + 0x14);
    esi = MEM32(esp + 0x14);
    MEM32(edx + ecx + 4) = esi;
    esi = MEM32(ebx + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(edx + esi + 8) = ecx;
    esi = MEM32(ebx + 0x14);
    MEM32(edx + esi + 0xC) = ecx;
    ecx = MEM32(ebx + 0x14);
    esi = MEM32(esp + 0x14);
    MEM32(edx + ecx + 0x10) = esi;
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00323990; /* jl: less (signed <) */

loc_00323A10: ;
    esi = MEM32(edi + 0x74);
    edx = esi;
    edx = edx & 0xFFFFFEDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x74) = edx;
    eax = MEM32(ebx + 0x24);
    edx = MEM32(0x758E44);
    MEM32(eax + 4) = 0;
    ecx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00323A3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323A37u); } /* indirect call */
    }

loc_00323A3A: ;
    eax = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax + 0x74) = esi;
    POP32(esp, ebx);

loc_00323A47: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00323A60
 * Original: 0x00323A60 - 0x00323ABA (90 bytes, 30 insns)
 * Folder: render (between: 0x00323710 and 0x00323DF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323A60: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323AB9; /* je: equal / zero */

loc_00323A65: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323A85; /* je: equal / zero */

loc_00323A6C: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323A7A; /* jne: not equal / not zero */

loc_00323A75: ;
    PUSH32(esp, 0x00323A7Au); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00323A7A: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00323A85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323A82u); } /* indirect call */
    }

loc_00323A85: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00323AAC; /* je: equal / zero */

loc_00323A93: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323AA1; /* jne: not equal / not zero */

loc_00323A9C: ;
    PUSH32(esp, 0x00323AA1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00323AA1: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00323AACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323AA9u); } /* indirect call */
    }

loc_00323AAC: ;
    MEM32(esi + 0x18) = 0;
    MEM32(esi) = 0;

loc_00323AB9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323AC0
 * Original: 0x00323AC0 - 0x00323DE6 (806 bytes, 230 insns)
 * Folder: render (between: 0x00323710 and 0x00323DF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323AC0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A9C (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00323DE1; /* jne: not equal / not zero */

loc_00323AD1: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323DE1; /* je: equal / zero */

loc_00323ADF: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323DE0; /* je: equal / zero */

loc_00323AEF: ;
    edx = MEM32(ebx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323DE0; /* jne: not equal / not zero */

loc_00323AFA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00323B01u); RECOMP_ABI_CALL(0x00323A60u, sub_00323A60); /* call 0x00323A60 */

loc_00323B01: ;
    edx = ZX8(MEM8(ebx + 0xC));
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00323B16; /* jb: below (unsigned <) */

loc_00323B0D: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebp;
    goto loc_00323B31;

loc_00323B16: ;
    edi = MEM32(ebx + 0x20);
    ecx = eax;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(MEM16(edi + ecx + 6));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00323DDE; /* je: equal / zero */

loc_00323B2F: ;
    ebp = ecx;

loc_00323B31: ;
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323DDE; /* je: equal / zero */

loc_00323B3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00323DDE; /* jge: greater or equal (signed >=) */

loc_00323B44: ;
    ecx = MEM32(ebx + 0x20);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    if ((_fa == 0)) goto loc_00323DDE; /* je: equal / zero */

loc_00323B56: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323B64; /* jne: not equal / not zero */

loc_00323B5F: ;
    PUSH32(esp, 0x00323B64u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00323B64: ;
    edx = ebp + ebp * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x00323B72u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00323B72: ;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323B83; /* jne: not equal / not zero */

loc_00323B7E: ;
    PUSH32(esp, 0x00323B83u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00323B83: ;
    edx = ebp;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x00323B8Fu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00323B8F: ;
    edi = eax;
    eax = MEM32(esp + 0x3C);
    ecx = ebx;
    MEM32(esi + 0x18) = edi;
    MEM32(esi) = ebp;
    PUSH32(esp, 0x00323BA1u); RECOMP_ABI_CALL(0x0030AC70u, sub_0030AC70); /* call 0x0030AC70 */

loc_00323BA1: ;
    ebp = ZX16(MEM16(eax + 4));
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = ZX16(MEM16(eax));
    edx = MEM32(ebx + 0x1C);
    esi = MEM32(esi + 0x14);
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00323C90; /* je: equal / zero */

loc_00323BD5: ;
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00323BEEu); RECOMP_ABI_CALL(0x0030B870u, sub_0030B870); /* call 0x0030B870 */

loc_00323BEE: ;
    eax = ZX16(MEM16(ebx + 0x1A));
    edx = ZX16(MEM16(ebx + 0x18));
    ecx = MEM32(esp + 0x30);
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm1; /* movaps */
    eax = ecx;
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    if (CMP_NE(_fa, _fb)) goto loc_00323C53; /* jne: not equal / not zero */

loc_00323C49: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    goto loc_00323C5D;

loc_00323C53: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323C67; /* jne: not equal / not zero */

loc_00323C59: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_00323C5D: ;
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */

loc_00323C67: ;
    eax = ecx;
    eax = eax & 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323C7C; /* jne: not equal / not zero */

loc_00323C72: ;
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    goto loc_00323C86;

loc_00323C7C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 8 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323C90; /* jne: not equal / not zero */

loc_00323C82: ;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */

loc_00323C86: ;
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */

loc_00323C90: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x10) = ecx;
    goto loc_00323CA0;

    /* nop */

loc_00323CA0: ;
    SET_LO8(eax, MEM8(ebp + 1));
    edx = ZX8(LO8(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebx + 0x10) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323CD4; /* je: equal / zero */

loc_00323CAC: ;
    ecx = MEM32(0x6BC1F0);
    SET_LO16(eax, ZX8(LO8(eax)));
    MEM16(ebx + 0x10) = LO16(eax);
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 4);
    eax = SX16(LO16(eax));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00323CCBu); RECOMP_ABI_CALL(0x0031DAD0u, sub_0031DAD0); /* call 0x0031DAD0 */

loc_00323CCB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x524) = eax;

loc_00323CD4: ;
    eax = MEM32(ebp);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00323CE6; /* jb: below (unsigned <) */

loc_00323CE1: ;
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00323CE8;

loc_00323CE6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00323CE8: ;
    ecx = MEM32(ebx + 0x524);
    edx = ZX16(MEM16(ebx + 0x18));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0xC;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 4);
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX16(MEM16(ebx + 0x1A));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 6);
    xmm4.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xA);
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm4.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm4.f[0]; /* divss */
    xmm4 = XMM_SCALAR(MEMF(0x429470)); /* movss */
    MEMF(esi + 8) = xmm4.f[0]; /* movss */
    edx = MEM32(eax);
    MEM32(edi) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 4) = ecx;
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    edx = MEM32(eax);
    MEM32(edi) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 4) = ecx;
    MEMF(esi + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    edx = MEM32(eax + 4);
    MEM32(edi) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 4) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi) = xmm2.f[0]; /* movss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    MEMF(esi + 8) = xmm4.f[0]; /* movss */
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00323CA0; /* jne: not equal / not zero */

loc_00323DDE: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00323DE0: ;
    POP32(esp, ebx);

loc_00323DE1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00323DF0
 * Original: 0x00323DF0 - 0x00323FE0 (496 bytes, 111 insns)
 * Folder: render (match: xbox-demo 0x000AC870, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00323DF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x54); /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi + 0x54) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00323FDC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00323E13: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x4C);
    eax = eax + eax * 4;
    ebx = esi + eax * 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00323FDA; /* jae: above or equal (unsigned >=) */

loc_00323E28: ;
    goto loc_00323E30;

    /* nop */

loc_00323E30: ;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323FCF; /* je: equal / zero */

loc_00323E3B: ;
    eax = MEM32(0x758E3C);
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 3), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323E7E; /* je: equal / zero */

loc_00323E46: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00323E90;

loc_00323E7E: ;
    edx = MEM32(edi + 0x24);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 0x28);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(edi + 0x2C);
    MEM32(esi + 0x10) = ecx;

loc_00323E90: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x3C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00323EABu); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00323EAB: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00323EEFu); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00323EEF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x18) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x44)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00323F33u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00323F33: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x1C) = xmm2.f[0]; /* movss */
    MEM16(esi) = 0;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00323F7Cu); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00323F7C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM16(esi + 2) = 0;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x50); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x54); /* comiss */
    MEMF(edi + 0x50) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00323FCF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x54)) */

loc_00323FCD: ;
    esi = ebx;

loc_00323FCF: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00323E30; /* jb: below (unsigned <) */

loc_00323FDA: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00323FDC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00323FE0
 * Original: 0x00323FE0 - 0x00324113 (307 bytes, 77 insns)
 * Folder: render (match: xbox-demo 0x000ACA60, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00323FE0: ;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0x4C);
    ecx = ecx + ecx * 4;
    edx = eax + ecx * 8;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0032410F; /* jae: above or equal (unsigned >=) */

loc_00323FF6: ;
    xmm5 = XMM_SCALAR(MEMF(0x4295B4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + 0xC;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;
    PUSH32(esp, edi);
    /* nop */

loc_00324020: ;
    _fa = (uint32_t)(MEM16(ecx + -10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + -10), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324104; /* jne: not equal / not zero */

loc_0032402B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032403F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x20)) */

loc_00324036: ;
    MEM16(ecx + -10) = LO16(eax);
    goto loc_00324104;

loc_0032403F: ;
    edi = MEM32(ecx + 8);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    MEM32(esp + 4) = edi;
    edi = MEM32(ecx + 0xC);
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x18); /* addss */
    MEM32(esp + 8) = edi;
    edi = MEM32(ecx + 0x10);
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + -4) = xmm6.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    MEM32(esp + 0xC) = edi;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003240F6; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003240B8: ;
    edi = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEM32(ecx + 4) = edi;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */

loc_003240F6: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */

loc_00324104: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00324020; /* jne: not equal / not zero */

loc_0032410E: ;
    POP32(esp, edi);

loc_0032410F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00324120
 * Original: 0x00324120 - 0x0032414C (44 bytes, 16 insns)
 * Folder: render (between: 0x00323FE0 and 0x00324A20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324120: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032412E; /* jne: not equal / not zero */

loc_00324129: ;
    PUSH32(esp, 0x0032412Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032412E: ;
    PUSH32(esp, edi);
    edx = 0x58;
    ecx = eax;
    PUSH32(esp, 0x0032413Bu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032413B: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x16;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00324150
 * Original: 0x00324150 - 0x00324175 (37 bytes, 15 insns)
 * Folder: render (between: 0x00323FE0 and 0x00324A20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324150: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324174; /* je: equal / zero */

loc_00324154: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324174; /* je: equal / zero */

loc_0032415B: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324169; /* jne: not equal / not zero */

loc_00324164: ;
    PUSH32(esp, 0x00324169u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00324169: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00324174u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324171u); } /* indirect call */
    }

loc_00324174: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00324180
 * Original: 0x00324180 - 0x0032496F (2031 bytes, 427 insns)
 * Folder: render (between: 0x00323FE0 and 0x00324A20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324180(void)
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

loc_00324180: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xD0);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x00324196u); RECOMP_ABI_CALL(0x00323DF0u, sub_00323DF0); /* call 0x00323DF0 */

loc_00324196: ;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0x4C);
    ecx = ecx + ecx * 4;
    ecx = eax + ecx * 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x48) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_003241C1; /* jae: above or equal (unsigned >=) */

loc_003241AC: ;
    /* nop */

loc_003241B0: ;
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003241BA; /* jne: not equal / not zero */

loc_003241B7: ;
    MEM32(esi + 0x48) = MEM32(esi + 0x48) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003241BA: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003241B0; /* jb: below (unsigned <) */

loc_003241C1: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324961; /* je: equal / zero */

loc_003241CC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    edx = eax + eax;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = eax * 4;
    PUSH32(esp, 0x003241E4u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_003241E4: ;
    ebx = MEM32(0x758E48);
    eax = MEM32(ebx + 0x1C);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x24);
    eax = MEM32(esi + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ebx + 0x24);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esi + 0x48);
    edi = MEM32(ebx + 0x14);
    eax = MEM32(ebx + 0xC);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi) = ecx;
    ecx = MEM32(0x758E34);
    edi = ecx + 0x160;
    ebp = MEM32(edi);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x170;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x84) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x8C) = edi;
    edi = ecx;
    MEM32(esp + 0x88) = ebp;
    ebp = MEM32(edi);
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(esp + 0x28) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(esp + 0x2C) = edi;
    edi = MEM32(ecx);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xA4) = ecx;
    ecx = MEM32(esp + 0x84);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0x88);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x8C);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0xB4) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x9C) = edi;
    MEM32(esp + 0xA0) = ebp;
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x80000000u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xA8) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x48) = ebp;
    ebp = MEM32(esp + 0x94);
    MEM32(esp + 0xAC) = ecx;
    MEM32(esp + 0x44) = edi;
    xmm0 = XMM_SCALAR(MEMF(0x429694)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x14); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x74); /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x18); /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x78); /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x7C); /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm7.f[0] = xmm7.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x80) = xmm2.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x44); /* addss */
    MEM32(esp + 0xBC) = edi;
    edi = MEM32(esp + 0x48);
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x48); /* addss */
    MEM32(esp + 0xC0) = edi;
    edi = MEM32(esp + 0xA4);
    MEMF(esp + 0x20) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x8C); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0xBC); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x98) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x80000000u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x5C) = edi;
    edi = MEM32(esp + 0xA8);
    MEMF(esp + 0x84) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x90); /* addss */
    MEMF(esp + 0x88) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x94); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    MEM32(esp + 0x4C) = ebp;
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0xC4) = ebp;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0xC4); /* addss */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x9C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0xC0); /* addss */
    MEMF(esp + 0xB8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x44); /* addss */
    MEM32(esp + 0x60) = edi;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x48); /* addss */
    MEM32(esp + 0x64) = ecx;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    ebp = MEM32(esi + 0x4C);
    ecx = MEM32(esi);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm7.f[0] = xmm7.f[0] + MEMF(esp + 0x64); /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xB0) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xB4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x60); /* addss */
    MEMF(esp + 0xB8) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x5C); /* addss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0xBC); /* addss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0xC0); /* addss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0xC4); /* addss */
    ecx = ecx + ecx * 4;
    ecx = ebp + ecx * 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm7.f[0]; /* movss */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xD4) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_003248DE; /* jae: above or equal (unsigned >=) */

loc_0032462B: ;
    edi = 2;
    ecx = ebp + 0x10;

loc_00324633: ;
    _fa = (uint32_t)(MEM16(ecx + -14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + -14), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003248BE; /* jne: not equal / not zero */

loc_0032463E: ;
    esi = ZX16(MEM16(ebp));
    xmm3 = XMM_SCALAR(MEMF(ecx + -12)); /* movss */
    esi = esi >> 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + esi * 2;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(esp + esi + 0x74)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + esi + 0x78)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + esi + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + -8); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + -4); /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + esi + 0x14)); /* movss */
    ebp = esp + esi + 0x74;
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + -12)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + esi + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + -12)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + -8); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esi = esp + esi + 0x14;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + -4); /* addss */
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + -12); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + -12); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + -8); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + -4); /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + -12); /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + -12); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + -8); /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + -4); /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + -12)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    ebp = edi + -1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEM16(edx + -14) = LO16(ebp);
    MEM16(edx + -12) = LO16(edi);
    MEM16(edx + -8) = 1;
    MEM16(edx + -6) = 2;
    esi = edi + -2;
    MEM16(edx + -16) = LO16(esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx + -10) = LO16(ebp);
    MEM16(edx) = LO16(esi);
    esi = edi + 1;
    MEM16(edx + 2) = LO16(edi);
    MEM16(edx + 6) = LO16(ebp);
    ebp = MEM32(esp + 0x10);
    MEM16(edx + 4) = LO16(esi);
    MEM16(edx + 8) = 2;
    MEM16(edx + 0xA) = 3;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003248BE: ;
    esi = MEM32(esp + 0xD4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00324633; /* jb: below (unsigned <) */

loc_003248D7: ;
    esi = MEM32(esp + 0xDC);

loc_003248DE: ;
    eax = MEM32(0x758E34);
    edi = MEM32(eax + 0x74);
    edx = edi;
    edx = edx & 0xFFFFFEDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = edx;
    eax = MEM32(0x758E3C);
    ecx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324914; /* je: equal / zero */

loc_00324906: ;
    eax = MEM32(0x758E44);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00324911u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0032490Eu); } /* indirect call */
    }

loc_00324911: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324914: ;
    eax = MEM32(0x7584AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758E34);
    POP32(esp, ebp);
    MEM32(ecx + 0x74) = edi;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00324961; /* je: equal / zero */

loc_00324928: ;
    xmm7 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    _fca = xmm7.f[0]; _fcb = MEMF(0x429338); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00324959; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs MEMF(0x429338)) */

loc_00324939: ;
    /* nop */

loc_00324940: ;
    xmm3 = XMM_SCALAR(MEMF(0x429338)); /* movss */
    PUSH32(esp, 0x0032494Du); RECOMP_ABI_CALL(0x00323FE0u, sub_00323FE0); /* call 0x00323FE0 */

loc_0032494D: ;
    xmm0 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00324940; /* ja: above (unsigned >) (xmm7.f[0] vs xmm0.f[0]) */

loc_00324959: ;
    xmm3 = xmm7; /* movaps */
    PUSH32(esp, 0x00324961u); RECOMP_ABI_CALL(0x00323FE0u, sub_00323FE0); /* call 0x00323FE0 */

loc_00324961: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00324970
 * Original: 0x00324970 - 0x00324A1D (173 bytes, 66 insns)
 * Folder: render (between: 0x00323FE0 and 0x00324A20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324970: ;
    _fb = (uint32_t)(0xFFFFA9ACu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFA9ACu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    if ((_fa == 0)) goto loc_00324991; /* je: equal / zero */

loc_0032497D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0032498C; /* je: equal / zero */

loc_00324980: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00324A1B; /* jne: not equal / not zero */

loc_00324987: ;
    MEM32(esi + 8) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032498C: ;
    MEM32(esi + 4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00324991: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003249B3; /* je: equal / zero */

loc_0032499A: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003249A8; /* jne: not equal / not zero */

loc_003249A3: ;
    PUSH32(esp, 0x003249A8u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_003249A8: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003249B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003249B0u); } /* indirect call */
    }

loc_003249B3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003249C1; /* jne: not equal / not zero */

loc_003249BC: ;
    PUSH32(esp, 0x003249C1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_003249C1: ;
    edx = MEM32(esi);
    edx = edx + edx * 4;
    PUSH32(esp, edi);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x003249D1u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_003249D1: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = eax + eax * 4;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x4C) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00324A0E; /* je: equal / zero */

loc_003249F3: ;
    eax = ebx + ebx * 4;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 1;
    edi = edi;

loc_00324A00: ;
    edx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(eax + edx + 2) = LO16(ecx);
    if ((_fa != 0)) goto loc_00324A00; /* jne: not equal / not zero */

loc_00324A0E: ;
    xmm0 = XMM_SCALAR(MEMF(0x429A64)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_00324A1B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00324A20
 * Original: 0x00324A20 - 0x00324A79 (89 bytes, 22 insns)
 * Folder: render (match: xbox-demo 0x000AD4A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00324A20: ;
    _fb = (uint32_t)(0xFFFFAA10u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFAA10u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00324A78; /* ja: above (unsigned >) */

loc_00324A2A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x324A7C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00324A31u) goto loc_00324A31;
    if (_jt == 0x00324A3Du) goto loc_00324A3D;
    if (_jt == 0x00324A49u) goto loc_00324A49;
    if (_jt == 0x00324A55u) goto loc_00324A55;
    if (_jt == 0x00324A61u) goto loc_00324A61;
    if (_jt == 0x00324A6Du) goto loc_00324A6D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00324A31: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00324A3D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00324A49: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00324A55: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00324A61: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00324A6D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */

loc_00324A78: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00324AA0
 * Original: 0x00324AA0 - 0x00324AED (77 bytes, 31 insns)
 * Folder: render (match: xbox-demo 0x000AD520, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324AA0: ;
    _fb = (uint32_t)(0xFFFFA948u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFA948u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00324AD9; /* je: equal / zero */

loc_00324AAB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00324AC5; /* je: equal / zero */

loc_00324AAE: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00324AEC; /* jne: not equal / not zero */

loc_00324AB1: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    esp += 4; return; /* ret */

loc_00324AC5: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    esp += 4; return; /* ret */

loc_00324AD9: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;

loc_00324AEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00324AF0
 * Original: 0x00324AF0 - 0x00324B46 (86 bytes, 26 insns)
 * Folder: render (match: xbox-demo 0x000AD570, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324AF0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324AFE; /* jne: not equal / not zero */

loc_00324AF9: ;
    PUSH32(esp, 0x00324AFEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00324AFE: ;
    edx = 0x24;
    ecx = eax;
    PUSH32(esp, 0x00324B0Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00324B0A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00324B50
 * Original: 0x00324B50 - 0x00324F84 (1076 bytes, 297 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324B50(void)
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

loc_00324B50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 2);
    PUSH32(esp, 8);
    ebx = 8;
    PUSH32(esp, 0x00324B6Au); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00324B6A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00324B79u); RECOMP_ABI_CALL(0x002FD3A0u, sub_002FD3A0); /* call 0x002FD3A0 */

loc_00324B79: ;
    ebx = 4;
    edi = 1;
    PUSH32(esp, 0x00324B88u); RECOMP_ABI_CALL(0x002FD3A0u, sub_002FD3A0); /* call 0x002FD3A0 */

loc_00324B88: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    esi = MEM32(0x758E48);
    eax = MEM32(0x758E44);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x1C);
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx) = xmm3.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0xC) = xmm3.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x1C) = xmm3.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ebp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x429348)); /* movss */
    MEM32(ecx + 0x20) = edx;
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ebp + 0x10);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(esi + 0x1C);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x2C) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    ecx = MEM32(esi + 0x1C);
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 0x30) = xmm2.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x34) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(esi + 0x1C);
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x3C) = xmm3.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    xmm2 = xmm4; /* movaps */
    MEMF(eax) = xmm6.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm5 = xmm6; /* movaps */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x18) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x24) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 0x10); /* subss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 0x10); /* subss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 0x10); /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x429348); /* addss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 0x10); /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x429348); /* addss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    edx = MEM32(esi + 0x24);
    ecx = 2;
    MEM32(edx) = ecx;
    eax = MEM32(esi + 0x24);
    edx = MEM32(ebp + 0x18);
    MEM32(eax + 4) = edx;
    eax = MEM32(esi + 0x24);
    edx = MEM32(eax + 8);
    MEM16(edx) = 0;
    eax = MEM32(esi + 0x24);
    edx = MEM32(eax + 8);
    eax = edi;
    MEM16(edx + 2) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 4) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x10) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x12) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edi = MEM32(edx + 8);
    edx = 3;
    MEM16(edi + 0x14) = LO16(edx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 6) = 0;
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 8) = LO16(eax);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0xA) = LO16(ecx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0x16) = LO16(eax);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0x18) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x1A) = LO16(edx);
    edx = MEM32(esi + 0x24);
    MEM32(edx + 0x14) = ebx;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ebp + 0x1C);
    MEM32(ecx + 0x18) = edx;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 0x1C);
    MEM16(edx) = 0;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 0x1C);
    MEM16(edx + 2) = LO16(eax);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 0x1C);
    ecx = 6;
    MEM16(edx + 4) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 0x1C);
    MEM16(edx + 0x10) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 0x1C);
    MEM16(edx + 0x12) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edi = MEM32(edx + 0x1C);
    edx = 7;
    MEM16(edi + 0x14) = LO16(edx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 0x1C);
    MEM16(edi + 0x20) = LO16(ecx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 0x1C);
    MEM16(edi + 0x22) = LO16(edx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 0x1C);
    MEM16(edi + 0x24) = LO16(ebx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 0x1C);
    MEM16(edi + 0x30) = LO16(edx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 0x1C);
    MEM16(edi + 0x32) = LO16(ebx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 0x1C);
    MEM16(edi + 0x34) = 5;
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 0x1C);
    MEM16(edi + 6) = 0;
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 0x1C);
    MEM16(edi + 8) = LO16(eax);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 0x1C);
    MEM16(edi + 0xA) = LO16(ecx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 0x1C);
    MEM16(edi + 0x16) = LO16(eax);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 0x1C);
    MEM16(eax + 0x18) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 0x1C);
    MEM16(eax + 0x1A) = LO16(edx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 0x1C);
    MEM16(eax + 0x26) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx + 0x1C);
    MEM16(eax + 0x28) = LO16(edx);
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx + 0x1C);
    MEM16(eax + 0x2A) = LO16(ebx);
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx + 0x1C);
    MEM16(eax + 0x36) = LO16(edx);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 0x1C);
    MEM16(edx + 0x38) = LO16(ebx);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 0x1C);
    MEM16(ecx + 0x3A) = 5;
    _fca = xmm3.f[0]; _fcb = MEMF(ebp + 0x14); /* comiss */
    eax = 0xFF;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00324F17; /* jb: below (unsigned <) (xmm3.f[0] vs MEMF(ebp + 0x14)) */

loc_00324F13: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00324F2B;

loc_00324F17: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00324F2B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x14)) */

loc_00324F1D: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429340)); /* fmul dword ptr [0x429340] */
    PUSH32(esp, 0x00324F2Bu); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_00324F2B: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx) = 8;
    edx = MEM32(esi + 0x14);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0x808080;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 4) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 8) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x10) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x14) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x18) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x1C) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x20) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x18) = ecx;
    eax = 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00324F90
 * Original: 0x00324F90 - 0x0032517B (491 bytes, 139 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324F90(void)
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

loc_00324F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = 4;
    PUSH32(esp, 0x00324FAAu); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00324FAA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00324FB9u); RECOMP_ABI_CALL(0x002FD3A0u, sub_002FD3A0); /* call 0x002FD3A0 */

loc_00324FB9: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    esi = MEM32(0x758E48);
    eax = MEM32(0x758E44);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    xmm3 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x14) = xmm3.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(edx + 0x18) = xmm3.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(eax + 0x14) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm4.f[0]; /* movss */
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x24);
    ecx = MEM32(ebp + 0x18);
    MEM32(edx + 4) = ecx;
    edx = MEM32(esi + 0x24);
    ecx = MEM32(edx + 8);
    MEM16(ecx) = LO16(edi);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    ecx = 1;
    MEM16(edx + 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 4) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x10) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x12) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edi = MEM32(edx + 8);
    edx = 3;
    MEM16(edi + 0x14) = LO16(edx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 6) = 0;
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 8) = LO16(ecx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0xA) = LO16(eax);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0x16) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x18) = LO16(eax);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 8);
    MEM16(ecx + 0x1A) = LO16(edx);
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x14); /* comiss */
    eax = 0xFF;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00325134; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + 0x14)) */

loc_00325130: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00325148;

loc_00325134: ;
    _fca = xmm3.f[0]; _fcb = MEMF(ebp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00325148; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(ebp + 0x14)) */

loc_0032513A: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429340)); /* fmul dword ptr [0x429340] */
    PUSH32(esp, 0x00325148u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_00325148: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx) = 4;
    ecx = MEM32(esi + 0x14);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0x808080;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x10) = eax;
    eax = 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00325180
 * Original: 0x00325180 - 0x00325380 (512 bytes, 146 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325180(void)
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

loc_00325180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = 4;
    PUSH32(esp, 0x0032519Au); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_0032519A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003251A9u); RECOMP_ABI_CALL(0x002FD3A0u, sub_002FD3A0); /* call 0x002FD3A0 */

loc_003251A9: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    esi = MEM32(0x758E48);
    eax = MEM32(0x758E44);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    xmm6 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x14) = xmm6.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(ebp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(esi + 0x1C);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * MEMF(ebp + 0x10); /* mulss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + 0x10); /* mulss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x24);
    ecx = MEM32(ebp + 0x1C);
    MEM32(edx + 4) = ecx;
    edx = MEM32(esi + 0x24);
    ecx = MEM32(edx + 8);
    MEM16(ecx) = LO16(edi);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    ecx = 1;
    MEM16(edx + 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 4) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x10) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x12) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edi = MEM32(edx + 8);
    edx = 3;
    MEM16(edi + 0x14) = LO16(edx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 6) = 0;
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 8) = LO16(ecx);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0xA) = LO16(eax);
    edi = MEM32(esi + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0x16) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x18) = LO16(eax);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 8);
    MEM16(ecx + 0x1A) = LO16(edx);
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x14); /* comiss */
    eax = 0xFF;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00325339; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + 0x14)) */

loc_00325335: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0032534D;

loc_00325339: ;
    _fca = xmm6.f[0]; _fcb = MEMF(ebp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032534D; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(ebp + 0x14)) */

loc_0032533F: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429340)); /* fmul dword ptr [0x429340] */
    PUSH32(esp, 0x0032534Du); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_0032534D: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx) = 4;
    ecx = MEM32(esi + 0x14);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0x808080;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x10) = eax;
    eax = 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00325380
 * Original: 0x00325380 - 0x00325978 (1528 bytes, 405 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325380(void)
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

loc_00325380: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    ebx = 0xC;
    PUSH32(esp, 0x0032539Au); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_0032539A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0xA;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003253A9u); RECOMP_ABI_CALL(0x002FD3A0u, sub_002FD3A0); /* call 0x002FD3A0 */

loc_003253A9: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    esi = MEM32(0x758E48);
    eax = MEM32(0x758E44);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x4293EC)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(0x429330)); /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x48) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x58) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(0x429AAC)); /* movss */
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(0x429AA8)); /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(0x429AA4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(edx + 0x3C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(0x429AA0)); /* movss */
    MEMF(ecx + 0x4C) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x44) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x429488); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x30) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x4293F4); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x40) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x48) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x429714); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x58) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x60) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x42955C); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x78) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x24);
    edi = ebx;
    MEM32(edx) = edi;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(ebp + 0x18);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x24);
    eax = MEM32(edx + 8);
    MEM16(eax + 6) = 1;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx) = 1;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 8) = LO16(edx);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 8);
    MEM16(ecx + 2) = LO16(edx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    ecx = 3;
    MEM16(eax + 0xA) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 4) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x16) = LO16(edx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x10) = LO16(edx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x18) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x12) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    ebx = MEM32(eax + 8);
    eax = 2;
    MEM16(ebx + 0x1A) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x14) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x26) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x20) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x28) = LO16(eax);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x22) = LO16(eax);
    ecx = MEM32(esi + 0x24);
    ebx = MEM32(ecx + 8);
    ecx = 5;
    MEM16(ebx + 0x2A) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x24) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x36) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x30) = LO16(eax);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x38) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x32) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    ebx = MEM32(eax + 8);
    eax = 4;
    MEM16(ebx + 0x3A) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x34) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x46) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x40) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x48) = LO16(eax);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x42) = LO16(eax);
    ecx = MEM32(esi + 0x24);
    ebx = MEM32(ecx + 8);
    ecx = 7;
    MEM16(ebx + 0x4A) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x44) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x56) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x50) = LO16(eax);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x58) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x52) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    ebx = MEM32(eax + 8);
    eax = 6;
    MEM16(ebx + 0x5A) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x54) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x66) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x60) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x68) = LO16(eax);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x62) = LO16(eax);
    ecx = MEM32(esi + 0x24);
    ebx = MEM32(ecx + 8);
    ecx = 9;
    MEM16(ebx + 0x6A) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x64) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x76) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x70) = LO16(eax);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x78) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x72) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    ebx = MEM32(eax + 8);
    eax = 8;
    MEM16(ebx + 0x7A) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x74) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x86) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x80) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x88) = LO16(eax);
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x82) = LO16(eax);
    ecx = MEM32(esi + 0x24);
    ebx = MEM32(ecx + 8);
    ecx = 0xB;
    MEM16(ebx + 0x8A) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x84) = LO16(ecx);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x96) = LO16(eax);
    ebx = MEM32(esi + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x90) = LO16(eax);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM16(eax + 0x98) = LO16(ecx);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM16(eax + 0x92) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx + 8);
    MEM16(eax + 0x9A) = LO16(edi);
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx + 8);
    MEM16(eax + 0x94) = LO16(edi);
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x14); /* comiss */
    eax = 0xFF;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003258E2; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + 0x14)) */

loc_003258DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003258FE;

loc_003258E2: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003258FE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x14)) */

loc_003258F0: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429340)); /* fmul dword ptr [0x429340] */
    PUSH32(esp, 0x003258FEu); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_003258FE: ;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx) = 0xC;
    edx = MEM32(esi + 0x14);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 0x14);
    ecx = eax;
    ecx = ecx | 0x3E3E3E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x10) = ecx;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + 0x10);
    MEM32(edx + 0xC) = edi;
    edi = MEM32(esi + 0x14);
    edx = eax;
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x18) = edx;
    edi = MEM32(esi + 0x14);
    ebx = MEM32(edi + 0x18);
    MEM32(edi + 0x14) = ebx;
    edi = MEM32(esi + 0x14);
    MEM32(edi + 0x20) = edx;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + 0x20);
    MEM32(edx + 0x1C) = edi;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x28) = ecx;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 0x28);
    MEM32(ecx + 0x24) = edx;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 0x30) = eax;
    edx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x2C) = eax;
    eax = 0xC;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00325980
 * Original: 0x00325980 - 0x00325FD1 (1617 bytes, 345 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325980(void)
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

loc_00325980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 1;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x12);
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    ebx = 0x10;
    PUSH32(esp, 0x00325999u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00325999: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x12;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003259A8u); RECOMP_ABI_CALL(0x002FD3A0u, sub_002FD3A0); /* call 0x002FD3A0 */

loc_003259A8: ;
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    esi = MEM32(0x758E48);
    eax = MEM32(0x758E44);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    ecx = MEM32(edx + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x1C);
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(edx + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    eax = MEM32(esi + 0xC);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm7 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm4 = xmm7; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm0; /* movaps */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x14); /* subss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x18) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x24) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x48) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x54) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x60) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x6C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x78) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x84) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x90) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x94) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x9C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x9C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0xA8) = xmm4.f[0]; /* movss */
    MEMF(eax + 0xAC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xB0) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0xB4) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x24);
    MEM32(eax) = 0x12;
    ecx = MEM32(ebx + 0x18);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM16(ecx) = LO16(edi);
    MEM16(ecx + 2) = 4;
    MEM16(ecx + 4) = LO16(ebp);
    MEM16(ecx + 6) = LO16(edi);
    MEM16(ecx + 0xA) = LO16(ebp);
    edi = 2;
    MEM16(ecx + 8) = LO16(edi);
    edx = MEM32(eax + 8);
    MEM16(edx + 0x10) = 4;
    MEM16(edx + 0x12) = LO16(ebp);
    MEM16(edx + 0x14) = 5;
    MEM16(edx + 0x16) = LO16(edi);
    MEM16(edx + 0x18) = LO16(ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 3;
    MEM16(edx + 0xA) = LO16(ecx);
    edx = MEM32(eax + 8);
    MEM16(edx + 0x20) = LO16(ebp);
    MEM16(edx + 0x22) = 5;
    MEM16(edx + 0x24) = LO16(edi);
    MEM16(edx + 0x26) = LO16(ebp);
    MEM16(edx + 0x28) = LO16(ecx);
    MEM16(edx + 0x2A) = LO16(ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    MEM16(edx + 0x30) = 5;
    MEM16(edx + 0x32) = LO16(edi);
    MEM16(edx + 0x34) = 6;
    MEM16(edx + 0x36) = LO16(ecx);
    MEM16(edx + 0x38) = LO16(ebp);
    MEM16(edx + 0x3A) = LO16(ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    MEM16(edx + 0x40) = LO16(edi);
    MEM16(edx + 0x42) = 6;
    MEM16(edx + 0x44) = LO16(ecx);
    MEM16(edx + 0x46) = LO16(ebp);
    MEM16(edx + 0x48) = LO16(ecx);
    MEM16(edx + 0x4A) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    MEM16(edx + 0x50) = 6;
    MEM16(edx + 0x52) = LO16(ecx);
    MEM16(edx + 0x54) = 7;
    MEM16(edx + 0x56) = LO16(ecx);
    MEM16(edx + 0x58) = 0;
    MEM16(edx + 0x5A) = LO16(edi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    MEM16(edx + 0x60) = 4;
    MEM16(edx + 0x62) = 8;
    MEM16(edx + 0x64) = 5;
    MEM16(edx + 0x66) = LO16(edi);
    MEM16(edx + 0x68) = LO16(edi);
    MEM16(edx + 0x6A) = LO16(ecx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    MEM16(edx + 0x70) = 8;
    MEM16(edx + 0x72) = 5;
    MEM16(edx + 0x74) = 9;
    MEM16(edx + 0x76) = LO16(edi);
    MEM16(edx + 0x78) = LO16(ecx);
    MEM16(edx + 0x7A) = LO16(ecx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x70;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    MEM16(edx + 0x80) = 5;
    MEM16(edx + 0x82) = 9;
    MEM16(edx + 0x84) = 6;
    MEM16(edx + 0x86) = LO16(ecx);
    MEM16(edx + 0x88) = LO16(ecx);
    MEM16(edx + 0x8A) = LO16(ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = 9;
    MEM16(edx + 2) = 6;
    MEM16(edx + 4) = 0xA;
    MEM16(edx + 6) = LO16(ecx);
    MEM16(edx + 8) = LO16(ecx);
    MEM16(edx + 0xA) = LO16(ecx);
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = 6;
    MEM16(edx + 2) = 0xA;
    MEM16(edx + 4) = 7;
    MEM16(edx + 6) = LO16(ecx);
    MEM16(edx + 8) = LO16(ecx);
    MEM16(edx + 0xA) = LO16(edi);
    edx = MEM32(eax + 8);
    MEM16(edx + 0xB0) = 0xA;
    MEM16(edx + 0xB2) = 7;
    MEM16(edx + 0xB4) = 0xB;
    MEM16(edx + 0xB6) = LO16(ecx);
    MEM16(edx + 0xB8) = LO16(edi);
    MEM16(edx + 0xBA) = LO16(edi);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xB0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    MEM16(edx + 0xC0) = 8;
    MEM16(edx + 0xC2) = 0xC;
    MEM16(edx + 0xC4) = 9;
    MEM16(edx + 0xC6) = LO16(edi);
    MEM16(edx + 0xC8) = 0;
    MEM16(edx + 0xCA) = LO16(ecx);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    MEM16(edx + 0xD0) = 0xC;
    MEM16(edx + 0xD2) = 9;
    MEM16(edx + 0xD4) = 0xD;
    MEM16(edx + 0xD6) = 0;
    MEM16(edx + 0xD8) = LO16(ecx);
    MEM16(edx + 0xDA) = LO16(ebp);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    MEM16(edx + 0xE0) = 9;
    MEM16(edx + 0xE2) = 0xD;
    MEM16(edx + 0xE4) = 0xA;
    MEM16(edx + 0xE6) = LO16(ecx);
    MEM16(edx + 0xE8) = LO16(ebp);
    MEM16(edx + 0xEA) = LO16(ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xE0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    MEM16(edx + 0xF0) = 0xD;
    MEM16(edx + 0xF2) = 0xA;
    MEM16(edx + 0xF4) = 0xE;
    MEM16(edx + 0xF6) = LO16(ebp);
    MEM16(edx + 0xF8) = LO16(ecx);
    MEM16(edx + 0xFA) = LO16(ebp);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = 0xA;
    MEM16(edx + 2) = 0xE;
    MEM16(edx + 4) = 0xB;
    MEM16(edx + 6) = LO16(ecx);
    MEM16(edx + 8) = LO16(ebp);
    MEM16(edx + 0xA) = LO16(edi);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = 0xE;
    MEM16(eax + 2) = 0xB;
    MEM16(eax + 4) = 0xF;
    MEM16(eax + 6) = LO16(ebp);
    MEM16(eax + 8) = LO16(edi);
    MEM16(eax + 0xA) = 0;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x14); /* comiss */
    eax = 0xFF;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00325F57; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebx + 0x14)) */

loc_00325F53: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00325F73;

loc_00325F57: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00325F73; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x14)) */

loc_00325F65: ;
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429340)); /* fmul dword ptr [0x429340] */
    PUSH32(esp, 0x00325F73u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_00325F73: ;
    edx = MEM32(esi + 0x14);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx) = 0x10;
    edx = eax;
    edx = edx | 0x808080;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00325F90: ;
    edi = MEM32(esi + 0x14);
    MEM32(edi + ecx + 4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00325F90; /* jb: below (unsigned <) */

loc_00325F9F: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0xFFFFFFFDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00325FC7; /* jne: not equal / not zero */

loc_00325FA5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7F000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(0x758E34);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00325FC4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00325FC1u); } /* indirect call */
    }

loc_00325FC4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00325FC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x10;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00325FE0
 * Original: 0x00325FE0 - 0x0032608F (175 bytes, 56 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325FE0(void)
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

loc_00325FE0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0032608C; /* je: equal / zero */

loc_00325FEE: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032608B; /* je: equal / zero */

loc_00325FFA: ;
    /* nop */

loc_00326000: ;
    eax = MEM32(esi + 4);
    ecx = eax;
    ecx = ecx & 0xE000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326080; /* jne: not equal / not zero */

loc_00326013: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00326080; /* je: equal / zero */

loc_00326018: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0032608B; /* jae: above or equal (unsigned >=) */

loc_00326020: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = ecx + 1;
    MEM32(ebx) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00326066; /* jne: not equal / not zero */

loc_00326029: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 2));
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 0x1F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ecx + edi) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0032604Bu); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_0032604B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 2));
    SET_LO16(ecx, ZX8(LO8(eax)));
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esi + 2) = LO16(ecx);
    goto loc_00326080;

loc_00326066: ;
    SET_LO16(eax, ZX8(MEM8(ecx + edi)));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 2));
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esi + 2) = LO16(eax);

loc_00326080: ;
    esi = MEM32(esi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326000; /* jne: not equal / not zero */

loc_0032608B: ;
    POP32(esp, esi);

loc_0032608C: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00326090
 * Original: 0x00326090 - 0x00326193 (259 bytes, 98 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326090(void)
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

loc_00326090: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0032618D; /* je: equal / zero */

loc_003260A5: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429344); /* comiss */
    if ((_fca >= _fcb)) goto loc_0032618D; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x429344)) */

loc_003260B7: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032618D; /* je: equal / zero */

loc_003260C2: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032618D; /* je: equal / zero */

loc_003260CD: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032618D; /* je: equal / zero */

loc_003260D7: ;
    ebp = MEM32(eax + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032618D; /* je: equal / zero */

loc_003260E2: ;
    eax = MEM32(ebp);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00326163; /* jne: not equal / not zero */

loc_003260ED: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00326121; /* jle: less or equal (signed <=) */

loc_003260F4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 8))); }
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326121; /* jne: not equal / not zero */

loc_00326105: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = esp + 0x18;
    eax = edx;
    PUSH32(esp, 0x0032611Eu); RECOMP_ABI_CALL(0x00325FE0u, sub_00325FE0); /* call 0x00325FE0 */

loc_0032611E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00326121: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00326184; /* jle: less or equal (signed <=) */

loc_00326128: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326184; /* je: equal / zero */

loc_0032612D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 8))); }
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + edx * 4);
    ecx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326184; /* jne: not equal / not zero */

loc_0032613E: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = edx;
    ebx = esp + 0x18;
    PUSH32(esp, 0x00326157u); RECOMP_ABI_CALL(0x00325FE0u, sub_00325FE0); /* call 0x00325FE0 */

loc_00326157: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00326163: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326184; /* jne: not equal / not zero */

loc_00326168: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp;
    ebx = esp + 0x18;
    PUSH32(esp, 0x00326181u); RECOMP_ABI_CALL(0x00325FE0u, sub_00325FE0); /* call 0x00325FE0 */

loc_00326181: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00326184: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0032618D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003261A0
 * Original: 0x003261A0 - 0x00326560 (960 bytes, 252 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003261A0(void)
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

loc_003261A0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758E34);
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0xF4); /* mulss */
    xmm0.f[0] = (float)(int32_t)MEM32(edi + 0x10C); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(edi + 0x110); /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0xF8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0xF4); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0xF8); /* mulss */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0032635E; /* je: equal / zero */

loc_0032622A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326254; /* jne: not equal / not zero */

loc_00326230: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0032624Fu); RECOMP_ABI_CALL(0x00325380u, sub_00325380); /* call 0x00325380 */

loc_0032624F: ;
    goto loc_00326382;

loc_00326254: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032635E; /* je: equal / zero */

loc_0032625C: ;
    edx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326269; /* je: equal / zero */

loc_00326264: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFCu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003262C6; /* jne: not equal / not zero */

loc_00326269: ;
    fp_push(MEMF(edi + 0xF4)); /* fld float */
    ecx = MEM32(edi + 0xF8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    edx = MEM32(edi + 0xF4);
    PUSH32(esp, 0x3D8888B5);
    PUSH32(esp, 0x3D4CCCCD);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    fp_push(MEMF(edi + 0xF8)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003262BEu); RECOMP_ABI_CALL(0x00325980u, sub_00325980); /* call 0x00325980 */

loc_003262BE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00326385;

loc_003262C6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032635E; /* je: equal / zero */

loc_003262CE: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), 0xFFFFFFFBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326306; /* jne: not equal / not zero */

loc_003262D4: ;
    edx = MEM32(edi + 0xF8);
    eax = MEM32(edi + 0xF4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3CF5C28F);
    PUSH32(esp, 0x3C75C28F);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00326301u); RECOMP_ABI_CALL(0x00325980u, sub_00325980); /* call 0x00325980 */

loc_00326301: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00326385;

loc_00326306: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032635E; /* je: equal / zero */

loc_0032630A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326330; /* je: equal / zero */

loc_0032630F: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0032632Eu); RECOMP_ABI_CALL(0x00324B50u, sub_00324B50); /* call 0x00324B50 */

loc_0032632E: ;
    goto loc_00326382;

loc_00326330: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032635E; /* je: equal / zero */

loc_00326334: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032635A; /* jne: not equal / not zero */

loc_00326339: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00326358u); RECOMP_ABI_CALL(0x00324F90u, sub_00324F90); /* call 0x00324F90 */

loc_00326358: ;
    goto loc_00326382;

loc_0032635A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032638B; /* jne: not equal / not zero */

loc_0032635E: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032638B; /* je: equal / zero */

loc_00326363: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00326382u); RECOMP_ABI_CALL(0x00325180u, sub_00325180); /* call 0x00325180 */

loc_00326382: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00326385: ;
    edi = MEM32(0x758E34);

loc_0032638B: ;
    ecx = MEM32(edi + 0xD0);
    edx = ecx;
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = ecx;
    MEM32(edi + 0xD0) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_003264B0; /* jbe: below or equal (unsigned <=) */

loc_003263A9: ;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x14) = eax;
    goto loc_003263C0;

    /* nop */
    edi = edi;

loc_003263C0: ;
    eax = MEM32(0x758E48);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(edi + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(edx + ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xEC); /* subss */
    ebp = edx + ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0032641C; /* je: equal / zero */

loc_003263E5: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(edi + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(edi + 0xE8); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_0032643F;

loc_0032641C: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0xE4); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0xE8); /* divss */

loc_0032643F: ;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    esi = edi + 0x160;
    PUSH32(esp, ebp);
    ecx = esp + 0x28;
    eax = esi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00326462u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_00326462: ;
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 4); /* addss */
    MEMF(ebp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_003263C0; /* jne: not equal / not zero */

loc_003264AC: ;
    ecx = MEM32(esp + 0x20);

loc_003264B0: ;
    ebp = MEM32(0x758E44);
    eax = MEM32(ebp + 0x14);
    edx = MEM32(eax);
    eax = MEM32(0x758E48);
    eax = MEM32(eax + 0x14);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = esp + 0x18;
    esi = ebx;
    MEM32(edi + 0xD0) = ecx;
    MEM8(esp + 0x18) = 0;
    MEM8(esp + 0x19) = 0;
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0x003264EFu); RECOMP_ABI_CALL(0x00326090u, sub_00326090); /* call 0x00326090 */

loc_003264EF: ;
    esi = MEM32(edi + 0x6C);
    edx = MEM32(0x758E48);
    esi = esi | 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x6C) = esi;
    esi = MEM32(edi + 0x74);
    ecx = esi;
    ecx = ecx & 0xFEFFBEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x28) = eax;
    MEM32(edi + 0x74) = ecx;
    eax = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032651Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326519u); } /* indirect call */
    }

loc_0032651C: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(0x758E34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x74) = esi;
    POP32(esp, ebp);
    if (CMP_BE(_fa, _fb)) goto loc_00326543; /* jbe: below or equal (unsigned <=) */

loc_00326531: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = esp + 0x14;
    esi = ebx;
    PUSH32(esp, 0x00326540u); RECOMP_ABI_CALL(0x00326090u, sub_00326090); /* call 0x00326090 */

loc_00326540: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00326543: ;
    edx = MEM32(0x758E44);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(eax);
    POP32(esp, edi);
    MEM32(ecx + 0xC) = 0;
    eax = 1;
    POP32(esp, esi);
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
 * sub_00326560
 * Original: 0x00326560 - 0x0032658C (44 bytes, 16 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00326560: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032656E; /* jne: not equal / not zero */

loc_00326569: ;
    PUSH32(esp, 0x0032656Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032656E: ;
    PUSH32(esp, edi);
    edx = 0x34;
    ecx = eax;
    PUSH32(esp, 0x0032657Bu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032657B: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00326590
 * Original: 0x00326590 - 0x00326633 (163 bytes, 49 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00326590: ;
    eax = MEM32(0x759788);
    ecx = MEM32(0x759764);
    eax = eax | 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41200000);
    MEM32(0x759788) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003265B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003265AEu); } /* indirect call */
    }

loc_003265B1: ;
    ecx = MEM32(0x759764);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003265C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003265BDu); } /* indirect call */
    }

loc_003265C0: ;
    ecx = MEM32(0x759764);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003265CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003265CCu); } /* indirect call */
    }

loc_003265CF: ;
    ecx = MEM32(0x759764);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003265DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003265DBu); } /* indirect call */
    }

loc_003265DE: ;
    ecx = MEM32(0x759764);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003265EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003265EAu); } /* indirect call */
    }

loc_003265ED: ;
    ecx = MEM32(0x759764);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003265FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003265F9u); } /* indirect call */
    }

loc_003265FC: ;
    ecx = MEM32(0x759764);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0032660Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032660Bu); } /* indirect call */
    }

loc_0032660E: ;
    ecx = MEM32(0x759764);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032661Du); } /* indirect call */
    }

loc_00326620: ;
    ecx = MEM32(0x759764);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 9);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326632u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032662Fu); } /* indirect call */
    }

loc_00326632: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00326640
 * Original: 0x00326640 - 0x00326650 (16 bytes, 6 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326640(void)
{

loc_00326640: ;
    ecx = MEM32(0x759784);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0032664Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032664Cu); } /* indirect call */
    }

loc_0032664F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00326650
 * Original: 0x00326650 - 0x00326696 (70 bytes, 19 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00326650: ;
    eax = MEM32(0x759788);
    ecx = MEM32(0x759774);
    eax = eax & 0xFDFDFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    MEM32(0x759788) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326671u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032666Eu); } /* indirect call */
    }

loc_00326671: ;
    ecx = MEM32(0x759774);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326683u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326680u); } /* indirect call */
    }

loc_00326683: ;
    ecx = MEM32(0x759774);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326695u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326692u); } /* indirect call */
    }

loc_00326695: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003266A0
 * Original: 0x003266A0 - 0x00326A63 (963 bytes, 260 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003266A0(void)
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

loc_003266A0: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326731; /* jne: not equal / not zero */

loc_003266AF: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429424)); /* fmul dword ptr [0x429424] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429974)); /* fmul dword ptr [0x429974] */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) - fp_top()); /* fsubr dword ptr [0x429344] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x429350)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_003266E3; /* jbe: below or equal (unsigned <=) */

loc_003266DB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_003266E3: ;
    xmm0 = XMM_SCALAR(MEMF(0x4293F4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x18); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00326794; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x18)) */

loc_003266F5: ;
    ecx = MEM32(0x759764);
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326711u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032670Eu); } /* indirect call */
    }

loc_00326711: ;
    ecx = MEM32(0x759764);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42948C); /* mulss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 9);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326731u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032672Eu); } /* indirect call */
    }

loc_00326731: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326897; /* jne: not equal / not zero */

loc_0032673C: ;
    ecx = MEM32(0x759774);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0032674Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326747u); } /* indirect call */
    }

loc_0032674A: ;
    PUSH32(esp, 0x0032674Fu); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_0032674F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003267A4; /* je: equal / zero */

loc_00326755: ;
    ecx = MEM32(0x759774);
    edx = MEM32(ecx);
    eax = edi + -1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0032676Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032676Cu); } /* indirect call */
    }

loc_0032676F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326896; /* jne: not equal / not zero */

loc_00326778: ;
    ecx = MEM32(0x759774);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326784u); } /* indirect call */
    }

loc_00326787: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00326896;

loc_00326794: ;
    MEM32(0x759788) = MEM32(0x759788) & 0xFFFDFFFFu;
    _fa = (uint32_t)(MEM32(0x759788)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032679E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003267A4: ;
    xmm0 = XMM_SCALAR(MEMF(0x429478)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00326863; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x18)) */

loc_003267B6: ;
    PUSH32(esp, 0x003267BBu); RECOMP_ABI_CALL(0x00326590u, sub_00326590); /* call 0x00326590 */

loc_003267BB: ;
    ecx = MEM32(0x759774);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003267CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003267C7u); } /* indirect call */
    }

loc_003267CA: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x429354)); /* fsub dword ptr [0x429354] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    fp_push(MEMD(0x4299A0)); /* fld double */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429998); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4293D8)); /* fmul dword ptr [0x4293d8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x429990)); /* fmul qword ptr [0x429990] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_push(MEMF(esi + 0x18)); /* fld float */
    PUSH32(esp, 5);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429988)); /* fmul dword ptr [0x429988] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x759764);
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0032682Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326828u); } /* indirect call */
    }

loc_0032682B: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x759774);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0032683Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032683Au); } /* indirect call */
    }

loc_0032683D: ;
    ecx = MEM32(0x759784);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43AFEDFA);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0032684Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032684Cu); } /* indirect call */
    }

loc_0032684F: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x759784);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032685Eu); } /* indirect call */
    }

loc_00326861: ;
    goto loc_00326896;

loc_00326863: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x1C) = 1;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x759784);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43AFEDFA);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326884u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326881u); } /* indirect call */
    }

loc_00326884: ;
    ecx = MEM32(0x759784);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43340000);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326896u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326893u); } /* indirect call */
    }

loc_00326896: ;
    POP32(esp, edi);

loc_00326897: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326955; /* jne: not equal / not zero */

loc_003268A1: ;
    PUSH32(esp, 0x003268A6u); RECOMP_ABI_CALL(0x00326590u, sub_00326590); /* call 0x00326590 */

loc_003268A6: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4293DC)); /* fmul dword ptr [0x4293dc] */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429984)); /* fmul dword ptr [0x429984] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x429354)); /* fsub dword ptr [0x429354] */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429394)); /* fmul dword ptr [0x429394] */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4296B4)); /* fmul dword ptr [0x4296b4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4293F4)); /* fadd dword ptr [0x4293f4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x4299A0)); /* fmul qword ptr [0x4299a0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    edx = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429390)); /* fmul dword ptr [0x429390] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x42934C)); /* fmul dword ptr [0x42934c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429980)); /* fadd dword ptr [0x429980] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x429990)); /* fmul qword ptr [0x429990] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x759764);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326932u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032692Fu); } /* indirect call */
    }

loc_00326932: ;
    edx = MEM32(esp);
    ecx = MEM32(0x759774);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326943u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326940u); } /* indirect call */
    }

loc_00326943: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x759784);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326952u); } /* indirect call */
    }

loc_00326955: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326A5D; /* jne: not equal / not zero */

loc_0032695F: ;
    PUSH32(esp, 0x00326964u); RECOMP_ABI_CALL(0x00326590u, sub_00326590); /* call 0x00326590 */

loc_00326964: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x4294D8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42997C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_003269F7; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm1.f[0]) */

loc_003269A4: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x429478); /* comiss */
    if ((_fca > _fcb)) goto loc_003269F7; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(0x429478)) */

loc_003269B2: ;
    ecx = MEM32(0x759764);
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003269CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003269CBu); } /* indirect call */
    }

loc_003269CE: ;
    eax = MEM32(esp);
    ecx = MEM32(0x759774);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003269DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003269DCu); } /* indirect call */
    }

loc_003269DF: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x759784);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003269F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003269EEu); } /* indirect call */
    }

loc_003269F1: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003269F7: ;
    ecx = MEM32(0x759774);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326A09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326A06u); } /* indirect call */
    }

loc_00326A09: ;
    ecx = MEM32(0x759774);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326A1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326A18u); } /* indirect call */
    }

loc_00326A1B: ;
    eax = MEM32(0x759788);
    ecx = MEM32(0x759774);
    eax = eax & 0xFDFDFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x759788) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00326A37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326A34u); } /* indirect call */
    }

loc_00326A37: ;
    PUSH32(esp, 0x00326A3Cu); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_00326A3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032679E; /* je: equal / zero */

loc_00326A45: ;
    ecx = MEM32(0x759774);
    edx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326A5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326A5Au); } /* indirect call */
    }

loc_00326A5D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00326A70
 * Original: 0x00326A70 - 0x00326B14 (164 bytes, 41 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00326A70: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326AC1; /* jne: not equal / not zero */

loc_00326A77: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4294D8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ecx = MEM32(0x759778);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00326AAE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00326A97: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429714); /* mulss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326AACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326AA9u); } /* indirect call */
    }

loc_00326AAC: ;
    goto loc_00326AC1;

loc_00326AAE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326ABAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326AB7u); } /* indirect call */
    }

loc_00326ABA: ;
    MEM32(esi + 0x1C) = 1;

loc_00326AC1: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326B04; /* jne: not equal / not zero */

loc_00326AC7: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x4294D8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00326B07; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x429350)) */

loc_00326AE9: ;
    ecx = MEM32(0x759778);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429714); /* mulss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326B04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326B01u); } /* indirect call */
    }

loc_00326B04: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00326B07: ;
    MEM32(0x759788) = MEM32(0x759788) & 0xFFBFFFFFu;
    _fa = (uint32_t)(MEM32(0x759788)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00326B20
 * Original: 0x00326B20 - 0x00326D31 (529 bytes, 131 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326B20(void)
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

loc_00326B20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_00326B98; /* je: equal / zero */

loc_00326B32: ;
    xmm0 = XMM_SCALAR(MEMF(0x4296B4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x24); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00326B4F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x24)) */

loc_00326B45: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429978); /* mulss */
    goto loc_00326B79;

loc_00326B4F: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x4293F4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00326B60; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x4293F4)) */

loc_00326B58: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = eax;
    goto loc_00326B86;

loc_00326B60: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x429978); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x4293F8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00326B79: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429604); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00326B86: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x470D74); /* addss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */

loc_00326B98: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    ecx = MEM32(0x759774);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    eax = MEM32(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00326BC6; /* je: equal / zero */

loc_00326BA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326BAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326BABu); } /* indirect call */
    }

loc_00326BAE: ;
    ecx = MEM32(0x759774);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326BC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326BBDu); } /* indirect call */
    }

loc_00326BC0: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00326BE2;

loc_00326BC6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326BD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326BCDu); } /* indirect call */
    }

loc_00326BD0: ;
    ecx = MEM32(0x759774);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326BE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326BDFu); } /* indirect call */
    }

loc_00326BE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326C4B; /* jne: not equal / not zero */

loc_00326BE8: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429424)); /* fmul dword ptr [0x429424] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429974)); /* fmul dword ptr [0x429974] */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) - fp_top()); /* fsubr dword ptr [0x429344] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x429350)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00326C1E; /* ja: above (unsigned >) */

loc_00326C18: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00326C1E: ;
    xmm1 = XMM_SCALAR(MEMF(0x4293F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x18); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00326D24; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(esi + 0x18)) */

loc_00326C30: ;
    ecx = MEM32(0x759734);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429348); /* mulss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326C4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326C48u); } /* indirect call */
    }

loc_00326C4B: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326CB0; /* jne: not equal / not zero */

loc_00326C52: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4294D8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ecx = MEM32(0x759734);
    PUSH32(esp, ecx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00326C8F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00326C73: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429348); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    edx = MEM32(ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326C8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326C8Au); } /* indirect call */
    }

loc_00326C8D: ;
    goto loc_00326CB0;

loc_00326C8F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429348); /* addss */
    eax = MEM32(ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326CA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326CA6u); } /* indirect call */
    }

loc_00326CA9: ;
    MEM32(esi + 0x1C) = 1;

loc_00326CB0: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326CD6; /* jne: not equal / not zero */

loc_00326CB6: ;
    ecx = MEM32(0x759734);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429348); /* addss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00326CD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326CD3u); } /* indirect call */
    }

loc_00326CD6: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326D1E; /* jne: not equal / not zero */

loc_00326CDC: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x4294D8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00326D24; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x429350)) */

loc_00326CFE: ;
    ecx = MEM32(0x759734);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429348); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp); /* addss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00326D1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326D1Bu); } /* indirect call */
    }

loc_00326D1E: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00326D24: ;
    MEM32(0x759788) = MEM32(0x759788) & 0xFFFFFFDFu;
    _fa = (uint32_t)(MEM32(0x759788)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
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
 * sub_00326D40
 * Original: 0x00326D40 - 0x00326E88 (328 bytes, 99 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326D40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00326E47; /* je: equal / zero */

loc_00326D57: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00326E10; /* je: equal / zero */

loc_00326D62: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00326DDD; /* je: equal / zero */

loc_00326D65: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326E47; /* jne: not equal / not zero */

loc_00326D6C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00326E47; /* ja: above (unsigned >) */

loc_00326D76: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x326E88); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00326D7Du) goto loc_00326D7D;
    if (_jt == 0x00326D94u) goto loc_00326D94;
    if (_jt == 0x00326DB2u) goto loc_00326DB2;
    if (_jt == 0x00326DCDu) goto loc_00326DCD;
    if (_jt == 0x00326E29u) goto loc_00326E29;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00326D7D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x1C) = edi;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x759788) = MEM32(0x759788) | 0x20;
    _fa = (uint32_t)(MEM32(0x759788)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00326E47;

loc_00326D94: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00326E47; /* jne: not equal / not zero */

loc_00326D9F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x20) = eax;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    goto loc_00326E47;

loc_00326DB2: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00326E47; /* jne: not equal / not zero */

loc_00326DBD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x20) = eax;
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    goto loc_00326E47;

loc_00326DCD: ;
    MEM32(0x759788) = MEM32(0x759788) | 0x20;
    _fa = (uint32_t)(MEM32(0x759788)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x1C) = 3;
    goto loc_00326E3F;

loc_00326DDD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00326DF9; /* je: equal / zero */

loc_00326DE0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00326E29; /* je: equal / zero */

loc_00326DE3: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00326E47; /* jne: not equal / not zero */

loc_00326DE8: ;
    PUSH32(esp, 0x00326DEDu); RECOMP_ABI_CALL(0x00326590u, sub_00326590); /* call 0x00326590 */

loc_00326DED: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x1C) = 3;
    goto loc_00326E3F;

loc_00326DF9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x1C) = edi;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x759788) = MEM32(0x759788) | 0x400000;
    _fa = (uint32_t)(MEM32(0x759788)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00326E47;

loc_00326E10: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00326E32; /* je: equal / zero */

loc_00326E13: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00326E29; /* je: equal / zero */

loc_00326E16: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00326E47; /* jne: not equal / not zero */

loc_00326E1B: ;
    PUSH32(esp, 0x00326E20u); RECOMP_ABI_CALL(0x00326590u, sub_00326590); /* call 0x00326590 */

loc_00326E20: ;
    MEM32(esi + 0x1C) = 3;
    goto loc_00326E3F;

loc_00326E29: ;
    MEM32(esi + 0x1C) = 2;
    goto loc_00326E3F;

loc_00326E32: ;
    PUSH32(esp, 0x00326E37u); RECOMP_ABI_CALL(0x00326590u, sub_00326590); /* call 0x00326590 */

loc_00326E37: ;
    PUSH32(esp, 0x00326E3Cu); RECOMP_ABI_CALL(0x00326640u, sub_00326640); /* call 0x00326640 */

loc_00326E3C: ;
    MEM32(esi + 0x1C) = edi;

loc_00326E3F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */

loc_00326E47: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 4) = edi;
    if ((_fa == 0)) goto loc_00326E65; /* je: equal / zero */

loc_00326E51: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00326E5E; /* je: equal / zero */

loc_00326E54: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326E70; /* jne: not equal / not zero */

loc_00326E57: ;
    PUSH32(esp, 0x00326E5Cu); RECOMP_ABI_CALL(0x00326B20u, sub_00326B20); /* call 0x00326B20 */

loc_00326E5C: ;
    goto loc_00326E6A;

loc_00326E5E: ;
    PUSH32(esp, 0x00326E63u); RECOMP_ABI_CALL(0x00326A70u, sub_00326A70); /* call 0x00326A70 */

loc_00326E63: ;
    goto loc_00326E6A;

loc_00326E65: ;
    PUSH32(esp, 0x00326E6Au); RECOMP_ABI_CALL(0x003266A0u, sub_003266A0); /* call 0x003266A0 */

loc_00326E6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326E70; /* jne: not equal / not zero */

loc_00326E6E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00326E70: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x470D74); /* addss */
    POP32(esp, edi);
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00326EA0
 * Original: 0x00326EA0 - 0x00326EC6 (38 bytes, 12 insns)
 * Folder: render (between: 0x00324AF0 and 0x00326ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326EA0: ;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00326EC1; /* je: equal / zero */

loc_00326EA8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00326EB6; /* je: equal / zero */

loc_00326EAB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326EB5; /* jne: not equal / not zero */

loc_00326EAE: ;
    MEM32(0x759788) = MEM32(0x759788) & 0xFFFFFFDFu;
    _fa = (uint32_t)(MEM32(0x759788)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00326EB5: ;
    esp += 4; return; /* ret */

loc_00326EB6: ;
    MEM32(0x759788) = MEM32(0x759788) & 0xFFBFFFFFu;
    _fa = (uint32_t)(MEM32(0x759788)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_00326EC1: ;
    g_seh_ebp = ebp; sub_00326650(); return; /* tail jmp 0x00326650 */

}

/**
 * sub_00326ED0
 * Original: 0x00326ED0 - 0x00326F4B (123 bytes, 25 insns)
 * Folder: render (match: xbox-demo 0x000B13F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00326ED0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326EDE; /* jne: not equal / not zero */

loc_00326ED9: ;
    PUSH32(esp, 0x00326EDEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00326EDE: ;
    edx = 0x30;
    ecx = eax;
    PUSH32(esp, 0x00326EEAu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00326EEA: ;
    xmm0 = XMM_SCALAR(MEMF(0x429460)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x42934C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429348)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x28) = 0xFFFFFFFFu;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00326F50
 * Original: 0x00326F50 - 0x003276F8 (1960 bytes, 490 insns)
 * Folder: render (between: 0x00326ED0 and 0x00327B40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326F50(void)
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

loc_00326F50: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    esi = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    ebx = 8;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00326F79u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00326F79: ;
    ebx = MEM32(0x758E34);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x190)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esi); /* subss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esi + 4); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esi + 8); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x194)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x198)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm5.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x28) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0032706D; /* jnp: not parity */

loc_00327035: ;
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] / MEMF(esp + 0x18); /* divss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00327139; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm5.f[0]) */

loc_00327067: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */

loc_0032706D: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);

loc_00327075: ;
    MEM32(esp + 0x24) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x20) = ecx;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM32(esp + 0x1C) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_00327093: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x198); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x190); /* subss */
    xmm5.f[0] = xmm5.f[0] - MEMF(ebx + 0x194); /* subss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm5 = xmm2; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm5.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    xmm2 = xmm6; /* movaps */
    eax = 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_00327189; /* jne: not equal / not zero */

loc_0032710C: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x38), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00327189; /* jne: not equal / not zero */

loc_00327112: ;
    _fa = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x3C), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00327189; /* jne: not equal / not zero */

loc_00327118: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    goto loc_003271E4;

loc_00327139: ;
    _fca = xmm5.f[0]; _fcb = MEMF(0x429344); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00327156; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs MEMF(0x429344)) */

loc_00327142: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    goto loc_00327075;

loc_00327156: ;
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    goto loc_00327093;

loc_00327189: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm5; /* movaps */

loc_003271E4: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x4293F8); /* mulss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00327247; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_0032722D: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x429354); /* mulss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_00327247: ;
    xmm4 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm4.f[0] = xmm4.f[0] / MEMF(esp + 0x14); /* divss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    eax = MEM32(0x758E48);
    ecx = MEM32(eax + 0xC);
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm7; /* movaps */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x2C); /* subss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx) = xmm7.f[0]; /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 8) = xmm7.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm5.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm7.f[0]; /* movss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 8) = xmm7.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 4) = xmm5.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 8) = xmm6.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 0x3C) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 0x48) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429348)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x14);
    edx = MEM32(esi + 0x28);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 4) = edx;
    esi = MEM32(esi + 0x28);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x1C) = esi;
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x14) = esi;
    MEM32(ecx + 0x10) = esi;
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 4) = xmm3.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(edx + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x10) = xmm2.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x18) = xmm2.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x1C) = xmm3.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x24) = xmm3.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 0x28) = xmm4.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x2C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x34) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x3C) = xmm3.f[0]; /* movss */
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(esi);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 2) = LO16(edi);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    edx = 2;
    MEM16(ecx + 4) = LO16(edx);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 6) = LO16(esi);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 8) = LO16(edi);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0xA) = LO16(edx);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x10) = LO16(edx);
    ecx = MEM32(eax + 0x24);
    ebp = MEM32(ecx + 8);
    ecx = 3;
    MEM16(ebp + 0x12) = LO16(ecx);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x14) = LO16(esi);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x16) = LO16(edx);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x18) = LO16(ecx);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x1A) = LO16(esi);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x20) = 4;
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x22) = 5;
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x24) = LO16(edi);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x26) = 4;
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x28) = 5;
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x2A) = LO16(edi);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x30) = LO16(edi);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x32) = LO16(esi);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x34) = 4;
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x36) = LO16(edi);
    edi = MEM32(eax + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0x38) = LO16(esi);
    edi = MEM32(eax + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0x3A) = 4;
    edi = MEM32(eax + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0x40) = LO16(ecx);
    edi = MEM32(eax + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0x42) = LO16(edx);
    edi = MEM32(eax + 0x24);
    ebp = MEM32(edi + 8);
    edi = 6;
    MEM16(ebp + 0x44) = LO16(edi);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x46) = LO16(ecx);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x48) = LO16(edx);
    edx = MEM32(eax + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x4A) = LO16(edi);
    edx = MEM32(eax + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x50) = LO16(edi);
    edx = MEM32(eax + 0x24);
    ebp = MEM32(edx + 8);
    edx = 7;
    MEM16(ebp + 0x52) = LO16(edx);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x54) = LO16(ecx);
    ebp = MEM32(eax + 0x24);
    ebp = MEM32(ebp + 8);
    MEM16(ebp + 0x56) = LO16(edi);
    edi = MEM32(eax + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0x58) = LO16(edx);
    edx = MEM32(eax + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x5A) = LO16(ecx);
    ecx = MEM32(eax + 0x24);
    MEM32(ecx + 4) = esi;
    edi = MEM32(ebx + 0x74);
    ecx = MEM32(0x758E44);
    edx = edi;
    edx = edx & 0xFFFFFEDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x74) = edx;
    edx = MEM32(ecx + 0x14);
    ebx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    MEM32(edx + 0xC) = ebx;
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003276D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003276D3u); } /* indirect call */
    }

loc_003276D6: ;
    ecx = MEM32(0x758E44);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = esi;
    MEM32(ecx + 0x74) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00327700
 * Original: 0x00327700 - 0x00327B34 (1076 bytes, 279 insns)
 * Folder: render (between: 0x00326ED0 and 0x00327B40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327700(void)
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

loc_00327700: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032771D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x429350)) */

loc_00327714: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00326F50(); return; /* tail jmp 0x00326F50 */

loc_0032771D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ebp = 2;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = 4;
    PUSH32(esp, 0x00327736u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00327736: ;
    edx = MEM32(0x758E34);
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 8); /* subss */
    xmm7 = XMM_SCALAR(MEMF(edx + 0x198)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esi + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 4); /* subss */
    xmm6 = XMM_SCALAR(MEMF(edx + 0x194)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esi + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esi + 4); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esi + 8); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x190)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] / xmm6.f[0]; /* divss */
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032781B; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm0.f[0]) */

loc_003277F3: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;

loc_00327807: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    goto loc_00327861;

loc_0032781B: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x429344); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032783B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x429344)) */

loc_00327824: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    goto loc_00327807;

loc_0032783B: ;
    xmm6 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */

loc_00327861: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x194); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x198); /* subss */
    xmm6.f[0] = xmm6.f[0] - MEMF(edx + 0x190); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    eax = 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_003278F2; /* jne: not equal / not zero */

loc_003278C8: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x18), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003278F2; /* jne: not equal / not zero */

loc_003278CE: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x1C), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003278F2; /* jne: not equal / not zero */

loc_003278D4: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    goto loc_00327942;

loc_003278F2: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */

loc_00327942: ;
    eax = MEM32(0x758E48);
    ecx = MEM32(eax + 0xC);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esi = MEM32(esi + 0x28);
    ecx = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = esi;
    MEM32(ecx + 0xC) = esi;
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 4) = esi;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx) = xmm7.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 4) = xmm7.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 8) = xmm7.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x1C) = xmm7.f[0]; /* movss */
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx) = LO16(edi);
    ecx = MEM32(eax + 0x24);
    esi = MEM32(ecx + 8);
    ecx = 1;
    MEM16(esi + 2) = LO16(ecx);
    esi = MEM32(eax + 0x24);
    esi = MEM32(esi + 8);
    MEM16(esi + 4) = LO16(ebp);
    esi = MEM32(eax + 0x24);
    esi = MEM32(esi + 8);
    MEM16(esi + 6) = LO16(edi);
    esi = MEM32(eax + 0x24);
    esi = MEM32(esi + 8);
    MEM16(esi + 8) = LO16(ecx);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0xA) = LO16(ebp);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x10) = LO16(ebp);
    ecx = MEM32(eax + 0x24);
    esi = MEM32(ecx + 8);
    ecx = 3;
    MEM16(esi + 0x12) = LO16(ecx);
    esi = MEM32(eax + 0x24);
    esi = MEM32(esi + 8);
    MEM16(esi + 0x14) = LO16(edi);
    esi = MEM32(eax + 0x24);
    esi = MEM32(esi + 8);
    MEM16(esi + 0x16) = LO16(ebp);
    esi = MEM32(eax + 0x24);
    esi = MEM32(esi + 8);
    MEM16(esi + 0x18) = LO16(ecx);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x1A) = LO16(edi);
    ecx = MEM32(eax + 0x24);
    MEM32(ecx + 4) = edi;
    esi = MEM32(edx + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x74) = ecx;
    ecx = MEM32(0x758E44);
    edx = MEM32(ecx + 0x14);
    ebx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    MEM32(edx + 0xC) = ebx;
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00327B12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327B0Fu); } /* indirect call */
    }

loc_00327B12: ;
    ecx = MEM32(0x758E44);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx + 0x74) = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00327B40
 * Original: 0x00327B40 - 0x00327D39 (505 bytes, 94 insns)
 * Folder: render (match: xbox-demo 0x000B2000, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00327B40: ;
    eax = MEM32(0x46B1A4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327B5C; /* je: equal / zero */

loc_00327B4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00327B55; /* jne: not equal / not zero */

loc_00327B50: ;
    PUSH32(esp, 0x00327B55u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00327B55: ;
    edx = 0xDC;
    goto loc_00327B6A;

loc_00327B5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00327B65; /* jne: not equal / not zero */

loc_00327B60: ;
    PUSH32(esp, 0x00327B65u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00327B65: ;
    edx = 0x54;

loc_00327B6A: ;
    ecx = eax;
    PUSH32(esp, 0x00327B71u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00327B71: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x429390)); /* movss */
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x1C) = 0x100000E;
    if (CMP_EQ(_fa, _fb)) goto loc_00327D2A; /* je: equal / zero */

loc_00327BB3: ;
    xmm0 = XMM_SCALAR(MEMF(0x429470)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x4296B4)); /* movss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429A40)); /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x42949C)); /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4293DC)); /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429478)); /* movss */
    MEMF(eax + 0x74) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x4293F4)); /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4295F0)); /* movss */
    ecx = 3;
    MEMF(eax + 0x78) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x4299B8)); /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429714)); /* movss */
    MEM32(eax + 0x94) = ecx;
    MEM32(eax + 0xA0) = ecx;
    ecx = 4;
    MEMF(eax + 0x7C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x429A3C)); /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429330)); /* movss */
    MEM32(eax + 0xA4) = esi;
    esi = 0xFF009999u;
    MEM32(eax + 0xA8) = ecx;
    MEM32(eax + 0xAC) = ecx;
    MEM32(eax + 0xB0) = ecx;
    MEM32(eax + 0xB4) = ecx;
    ecx = 0xFF005050u;
    edx = 0xFF006666u;
    MEMF(eax + 0x84) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x429480)); /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEM32(eax + 0xB8) = esi;
    MEM32(eax + 0xD0) = esi;
    MEM32(eax + 0x1C) = 0x300000E;
    MEMF(eax + 0x88) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x98) = 2;
    MEM32(eax + 0x9C) = 1;
    MEM32(eax + 0xBC) = edx;
    MEM32(eax + 0xC0) = ecx;
    MEM32(eax + 0xC4) = ecx;
    MEM32(eax + 0xC8) = ecx;
    MEM32(eax + 0xCC) = 0xFF008080u;
    MEM32(eax + 0xD4) = edx;
    MEM32(eax + 0xD8) = 0xFF003333u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00327D2A: ;
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x50) = esi;
    MEM32(eax + 0x4C) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00327D40
 * Original: 0x00327D40 - 0x003281ED (1197 bytes, 276 insns)
 * Folder: render (match: xbox-demo 0x000B2200, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00327D40: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x4293C4)); /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 0x10 (8-bit) */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_00327E32; /* jne: not equal / not zero */

loc_00327D98: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x757450); /* subss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x757454); /* subss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x757458); /* subss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    eax = MEM32(0x757450);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    MEM32(esi + 0x3C) = eax;
    ecx = MEM32(0x757454);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(0x757458);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x4293EC); /* comiss */
    MEM32(esi + 0x44) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00327E32; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x4293EC)) */

loc_00327E1D: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) | 0x1000000;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esi + 0x20) = xmm6.f[0]; /* movss */
    eax = 1;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00327E32: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x757450); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x757454); /* addss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x758E34);
    PUSH32(esp, edi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x757458); /* addss */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    edi = ebx + 0xD0;
    eax = 1;
    ecx = esp + 0x34;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00327E8Cu); RECOMP_ABI_CALL(0x00312170u, sub_00312170); /* call 0x00312170 */

loc_00327E8C: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00327EAE; /* jns: not sign (positive) */

loc_00327E97: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) | 0x1000000;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esi + 0x20) = xmm6.f[0]; /* movss */

loc_00327EA3: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00327EAE: ;
    ecx = MEM32(ebx + 0x10C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ebx + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm5.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(ebx + 0xF4); /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = edx; /* cmovg */
    xmm7.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(ebx + 0xF8); /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) eax = ecx; /* cmovle */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 3 (8-bit) */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_00327FB9; /* jne: not equal / not zero */

loc_00327F2C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00327EA3; /* ja: above (unsigned >) (xmm5.f[0] vs xmm0.f[0]) */

loc_00327F3B: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00327EA3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm7.f[0]) */

loc_00327F44: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00327EA3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00327F53: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00327EA3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_00327F5C: ;
    edi = MEM32(ebx + 0x250);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = 0x757450;
    eax = edi;
    PUSH32(esp, 0x00327F73u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_00327F73: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x00327F8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327F8Bu); } /* indirect call */
    }

loc_00327F8E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x757448); /* comiss */
    if ((_fca > _fcb)) goto loc_00327EA3; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x757448)) */

loc_00327FA4: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00327FB9: ;
    edi = MEM32(ebx + 0x250);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    eax = edi;
    PUSH32(esp, 0x00327FCFu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_00327FCF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x20); /* addss */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = 0x757450;
    eax = edi;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00328007u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_00328007: ;
    edx = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    edx = edx & 0x300;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm6.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00328102; /* jne: not equal / not zero */

loc_00328035: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00328051;

loc_00328039: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_00328051: ;
    xmm0 = XMM_SCALAR(MEMF(esp + edi * 8 + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + edi * 8 + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x28); /* mulss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    ecx = ebx + 0xD0;
    eax = 1;
    edx = esp + 0x1C;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00328094u); RECOMP_ABI_CALL(0x00311CB0u, sub_00311CB0); /* call 0x00311CB0 */

loc_00328094: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003280F3; /* ja: above (unsigned >) (xmm5.f[0] vs xmm0.f[0]) */

loc_003280A2: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003280F3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm7.f[0]) */

loc_003280A7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003280F3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003280B8: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca > _fcb)) goto loc_003280F3; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_003280BF: ;
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B);
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x003280C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003280C6u); } /* indirect call */
    }

loc_003280C9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ebx = MEM32(0x758E34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x757448); /* comiss */
    if ((_fca > _fcb)) goto loc_003280F3; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x757448)) */

loc_003280E1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x4293DC); /* addss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */

loc_003280F3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00328039; /* jl: less (signed <) */

loc_003280FD: ;
    goto loc_003281CF;

loc_00328102: ;
    edi = 0x4424E4;
    goto loc_00328121;

loc_00328109: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_00328121: ;
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x28); /* mulss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    ecx = ebx + 0xD0;
    eax = 1;
    edx = esp + 0x1C;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00328161u); RECOMP_ABI_CALL(0x00311CB0u, sub_00311CB0); /* call 0x00311CB0 */

loc_00328161: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003281C0; /* ja: above (unsigned >) (xmm5.f[0] vs xmm0.f[0]) */

loc_0032816F: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003281C0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm7.f[0]) */

loc_00328174: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003281C0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00328185: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca > _fcb)) goto loc_003281C0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_0032818C: ;
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x00328196u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00328193u); } /* indirect call */
    }

loc_00328196: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ebx = MEM32(0x758E34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x757448); /* comiss */
    if ((_fca > _fcb)) goto loc_003281C0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x757448)) */

loc_003281AE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429768); /* addss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */

loc_003281C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44252C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x44252C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00328109; /* jl: less (signed <) */

loc_003281CF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00327EA3; /* jnp: not parity */

loc_003281E5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003281F0
 * Original: 0x003281F0 - 0x00328232 (66 bytes, 24 insns)
 * Folder: render (match: xbox-demo 0x000B26B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003281F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003281F0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00328230; /* je: equal / zero */

loc_003281FA: ;
    ecx = MEM32(0x758E3C);
    edx = MEM32(ecx + 0x10);
    SET_LO8(ecx, MEM8(edx + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328230; /* je: equal / zero */

loc_0032820A: ;
    eax = eax & 0xF7FFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00328217u); RECOMP_ABI_CALL(0x00327D40u, sub_00327D40); /* call 0x00327D40 */

loc_00328217: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_00328228; /* je: equal / zero */

loc_0032821E: ;
    eax = eax | 0x8000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00328228: ;
    eax = eax & 0xF7FFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = eax;

loc_00328230: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00328240
 * Original: 0x00328240 - 0x003288DD (1693 bytes, 416 insns)
 * Folder: render (between: 0x003281F0 and 0x003288E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328240(void)
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

loc_00328240: ;
    edx = MEM32(0x758E3C);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edx + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032826E; /* jne: not equal / not zero */

loc_00328256: ;
    eax = MEM32(esi + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax | 0x1000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x1C) = eax;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032826E: ;
    _fa = (uint32_t)(MEM8(edx + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 3), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003282B1; /* je: equal / zero */

loc_00328274: ;
    eax = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(0x757450) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    MEMF(0x757454) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    MEMF(0x757458) = xmm0.f[0]; /* movss */
    goto loc_003282C9;

loc_003282B1: ;
    eax = MEM32(esi);
    MEM32(0x757450) = eax;
    ecx = MEM32(esi + 4);
    MEM32(0x757454) = ecx;
    eax = MEM32(esi + 8);
    MEM32(0x757458) = eax;

loc_003282C9: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    ecx = MEM32(0x758E34);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00328383; /* je: equal / zero */

loc_003282DB: ;
    _fa = (uint32_t)(MEM32(ecx + 0x97C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x97C), 0x20000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003282EE; /* je: equal / zero */

loc_003282E7: ;
    eax = eax & 0x8000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003282FF;

loc_003282EE: ;
    PUSH32(esp, 0x003282F3u); RECOMP_ABI_CALL(0x00327D40u, sub_00327D40); /* call 0x00327D40 */

loc_003282F3: ;
    edx = MEM32(0x758E3C);
    ecx = MEM32(0x758E34);

loc_003282FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_0032837C; /* je: equal / zero */

loc_00328306: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00328337; /* jne: not equal / not zero */

loc_0032830D: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax | 0x1000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    MEM32(esi + 0x1C) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00328330; /* jnp: not parity */

loc_00328326: ;
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    goto loc_00328350;

loc_00328330: ;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    goto loc_00328355;

loc_00328337: ;
    xmm0 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x24); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00328350: ;
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */

loc_00328355: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x20); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00328398; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x20)) */

loc_0032835B: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1C), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003288D7; /* je: equal / zero */

loc_00328368: ;
    SET_LO16(ecx, MEM16(edx + 4));
    edx = MEM32(0x758E40);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002FC390(); return; /* tail jmp 0x002FC390 */

loc_0032837C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00328398; /* je: equal / zero */

loc_00328383: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    eax = eax & 0xFEFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = eax;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */

loc_00328398: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x4424DC); /* mulss */
    if (TEST_Z(_fa, _fb)) goto loc_003283B8; /* je: equal / zero */

loc_003283AC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */

loc_003283B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x757454); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x757458); /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x194); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x198); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x188)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x184)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x757450); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x190); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x180)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm5.f[0] = xmm5.f[0] / xmm3.f[0]; /* divss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x194)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 0x190); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x198)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0032847B; /* je: equal / zero */

loc_00328474: ;
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm5; /* movaps */

loc_0032847B: ;
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x160)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x164)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x168)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x170)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x174)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x178)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    PUSH32(esp, ebx);
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    PUSH32(esp, 1);
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    PUSH32(esp, 2);
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, 1);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    PUSH32(esp, 4);
    ebx = 4;
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0032851Bu); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_0032851B: ;
    edi = MEM32(0x758E48);
    ecx = MEM32(edi + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x1C);
    xmm3 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    ecx = MEM32(edi + 0x1C);
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    MEMF(edx + 0x10) = xmm3.f[0]; /* movss */
    eax = MEM32(edi + 0x1C);
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    ecx = MEM32(edi + 0x1C);
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    MEMF(edx + 0x1C) = xmm3.f[0]; /* movss */
    eax = MEM32(edi + 0x24);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx) = LO16(eax);
    edx = MEM32(edi + 0x24);
    edx = MEM32(edx + 8);
    ecx = 1;
    MEM16(edx + 2) = LO16(ecx);
    edx = MEM32(edi + 0x24);
    edx = MEM32(edx + 8);
    ebx = 2;
    MEM16(edx + 4) = LO16(ebx);
    edx = MEM32(edi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 6) = LO16(eax);
    edx = MEM32(edi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 8) = LO16(ecx);
    ecx = MEM32(edi + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 0xA) = LO16(ebx);
    ecx = MEM32(edi + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 0x10) = LO16(ebx);
    ecx = MEM32(edi + 0x24);
    edx = MEM32(ecx + 8);
    ecx = 3;
    MEM16(edx + 0x12) = LO16(ecx);
    edx = MEM32(edi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x14) = LO16(eax);
    edx = MEM32(edi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x16) = LO16(ebx);
    edx = MEM32(edi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x18) = LO16(ecx);
    ecx = MEM32(edi + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 0x1A) = LO16(eax);
    eax = MEM32(0x758E34);
    ecx = MEM32(eax + 0x74);
    MEM32(esp + 0x10) = ecx;
    ecx = ecx & 0xFEFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1C), 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003287AB; /* je: equal / zero */

loc_0032861E: ;
    PUSH32(esp, ebp);
    ebp = esi + 0xB8;
    MEM32(esp + 0x10) = 9;
    goto loc_00328640;

loc_0032862F: ;
    edi = MEM32(0x758E48);
    goto loc_00328640;

    /* nop */
    edi = edi;

loc_00328640: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -72)); /* movss */
    eax = MEM32(edi + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    eax = MEM32(edi + 0xC);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429344); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00328752; /* jnp: not parity */

loc_00328741: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00328752; /* je: equal / zero */

loc_00328746: ;
    eax = MEM32(ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00328750u); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_00328750: ;
    goto loc_00328755;

loc_00328752: ;
    eax = MEM32(ebp);

loc_00328755: ;
    ecx = MEM32(edi + 0x14);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 0x14);
    MEM32(edx + 8) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(edi + 0x14);
    MEM32(edx + 0x10) = eax;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(ebp + -36);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x758E44);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00328781u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032877Eu); } /* indirect call */
    }

loc_00328781: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0032862F; /* jne: not equal / not zero */

loc_00328796: ;
    ecx = MEM32(0x758E34);
    edx = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(ecx + 0x74) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003287AB: ;
    eax = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    eax = MEM32(edi + 0xC);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0032888D; /* jnp: not parity */

loc_0032887B: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032888D; /* je: equal / zero */

loc_00328880: ;
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0x0032888Bu); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_0032888B: ;
    goto loc_00328890;

loc_0032888D: ;
    eax = MEM32(esi + 0x4C);

loc_00328890: ;
    ecx = MEM32(edi + 0x14);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 0x14);
    MEM32(edx + 8) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(edi + 0x14);
    MEM32(edx + 0x10) = eax;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(esi + 0x48);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x758E44);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(0x74A230) = 0x712214;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003288C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003288C3u); } /* indirect call */
    }

loc_003288C6: ;
    ecx = MEM32(0x758E34);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x74) = edx;
    POP32(esp, ebx);

loc_003288D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003288E0
 * Original: 0x003288E0 - 0x00328973 (147 bytes, 36 insns)
 * Folder: render (match: xbox-demo 0x000B2D90, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003288E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003288E0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003288EE; /* jne: not equal / not zero */

loc_003288E9: ;
    PUSH32(esp, 0x003288EEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_003288EE: ;
    edx = 0x30;
    ecx = eax;
    PUSH32(esp, 0x003288FAu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_003288FA: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429330)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x28) = 0xFFFFFFFFu;
    MEM32(eax + 0x2C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00328980
 * Original: 0x00328980 - 0x00328ED6 (1366 bytes, 325 insns)
 * Folder: render (between: 0x003288E0 and 0x00328EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328980(void)
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

loc_00328980: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x758E3C);
    ecx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00328ECC; /* je: equal / zero */

loc_00328999: ;
    eax = MEM32(0x758E34);
    xmm6 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(eax + 0x194); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x198); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x190); /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00328A0A; /* jnp: not parity */

loc_003289F4: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00328A0A: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x4C) = xmm7.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x3C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x38) = xmm5.f[0]; /* movss */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429344); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1C); /* comiss */
    MEM32(esp + 0x10) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00328B8F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x1C)) */

loc_00328B8A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */

loc_00328B8F: ;
    xmm5 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x34) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00328C5B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x429350)) */

loc_00328C1F: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x18); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    goto loc_00328C95;

loc_00328C5B: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x2C); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x30); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */

loc_00328C95: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = 2;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = 4;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x00328CC5u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00328CC5: ;
    eax = MEM32(0x758E48);
    edx = MEM32(eax + 0x1C);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x18) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x24);
    ecx = MEM32(edx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx) = LO16(edx);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 2) = 1;
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 4) = LO16(edi);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 6) = LO16(edx);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 8) = 1;
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0xA) = LO16(edi);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x10) = LO16(edi);
    ecx = MEM32(eax + 0x24);
    ebx = MEM32(ecx + 8);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    ecx = 3;
    MEM16(ebx + 0x12) = LO16(ecx);
    ebx = MEM32(eax + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x14) = LO16(edx);
    ebx = MEM32(eax + 0x24);
    ebx = MEM32(ebx + 8);
    MEM16(ebx + 0x16) = LO16(edi);
    edi = MEM32(eax + 0x24);
    edi = MEM32(edi + 8);
    MEM16(edi + 0x18) = LO16(ecx);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 0x1A) = LO16(edx);
    xmm2.f[0] = xmm2.f[0] + MEMF(esi); /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    ecx = MEM32(eax + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x48); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x4C); /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    MEMF(ecx + 8) = xmm6.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(ecx) = xmm6.f[0]; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x3C); /* addss */
    MEMF(ecx + 4) = xmm6.f[0]; /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x40); /* addss */
    MEMF(ecx + 8) = xmm6.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx) = xmm6.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(ecx + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x14);
    esi = MEM32(esi + 0x28);
    MEM32(ecx + 4) = esi;
    ecx = MEM32(eax + 0x14);
    MEM32(ecx + 8) = esi;
    ecx = MEM32(eax + 0x14);
    MEM32(ecx + 0xC) = esi;
    ecx = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = esi;
    ecx = MEM32(0x758E34);
    esi = MEM32(ecx + 0x74);
    edi = esi;
    edi = edi & 0xFFFFFEDFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x800;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x74) = edi;
    ecx = MEM32(eax + 0x24);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax);
    eax = MEM32(0x758E44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00328EBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00328EBBu); } /* indirect call */
    }

loc_00328EBE: ;
    ecx = MEM32(0x758E34);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx + 0x74) = esi;
    POP32(esp, ebx);

loc_00328ECC: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00328EE0
 * Original: 0x00328EE0 - 0x00329316 (1078 bytes, 262 insns)
 * Folder: render (match: xbox-demo 0x000B3380, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328EE0(void)
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

loc_00328EE0: ;
    eax = MEM32(esi + 0x48);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00328EF3; /* je: equal / zero */

loc_00328EED: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x48) = eax;

loc_00328EF3: ;
    ecx = MEM32(esi + 0x48);
    eax = 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00328F02; /* jle: less or equal (signed <=) */

loc_00328EFF: ;
    MEM32(esi + 0x48) = eax;

loc_00328F02: ;
    eax = MEM32(esi + 0x48);
    xmm0 = XMM_SCALAR(MEMF(0x429424)); /* movss */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x20) = 0;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0032930F; /* jle: less or equal (signed <=) */

loc_00328F38: ;
    edx = esi + 0x68;
    MEM32(esp + 0x24) = edx;
    eax = esi + 0x64;
    ecx = esi + 0x5C;
    edx = esi + 0x58;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    ebp = esi + 0x6C;
    ebx = esi + 0x71;
    edi = esi + 0x70;
    /* nop */

loc_00328F60: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00328F7Eu); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00328F7E: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42943C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00328FC4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00328FB6: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429424); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00328FC4: ;
    fp_push(MEMF(0x645160)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4295B0); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    edx = SX8(LO8(eax));
    MEM8(edi) = LO8(eax);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEMD(esp + 0x60) = fp_top(); /* fst */
    eax = MEM32(esp + 0x60);
    SET_LO8(ecx, LO8(ecx) & 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM8(ebx) = LO8(ecx);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    if ((_fas >= 0)) goto loc_00329018; /* jns: not sign (positive) */

loc_0032900C: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00329024;

loc_00329018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00329024; /* jle: less or equal (signed <=) */

loc_0032901F: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00329024: ;
    eax = MEM32(eax * 4 + 0x645168);
    MEMD(esp + 0x60) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00329049; /* jge: greater or equal (signed >=) */

loc_0032903D: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00329055;

loc_00329049: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00329055; /* jle: less or equal (signed <=) */

loc_00329050: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00329055: ;
    edx = MEM32(eax * 4 + 0x645168);
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032907Du); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_0032907D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003290C4u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_003290C4: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    ecx = 0x1C;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x14);
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    eax = MEM32(esp + 0x24);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x20); /* subss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00329146u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00329146: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42943C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032918C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032917E: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429424); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0032918C: ;
    fp_push(MEMF(0x645160)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4295B0); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    MEM8(edi) = LO8(eax);
    eax = SX8(LO8(eax));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMD(esp + 0x60) = fp_top(); /* fst */
    eax = MEM32(esp + 0x60);
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) & 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM8(ebx) = LO8(edx);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    if ((_fas >= 0)) goto loc_003291E0; /* jns: not sign (positive) */

loc_003291D4: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003291EC;

loc_003291E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003291EC; /* jle: less or equal (signed <=) */

loc_003291E7: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003291EC: ;
    ecx = MEM32(eax * 4 + 0x645168);
    MEMD(esp + 0x60) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00329211; /* jge: greater or equal (signed >=) */

loc_00329205: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032921D;

loc_00329211: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032921D; /* jle: less or equal (signed <=) */

loc_00329218: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032921D: ;
    eax = MEM32(eax * 4 + 0x645168);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00329245u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_00329245: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    edx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032928Cu); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_0032928C: ;
    edx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x5C); /* addss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x48);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00328F60; /* jl: less (signed <) */

loc_0032930F: ;
    POP32(esp, edi);
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
 * sub_00329320
 * Original: 0x00329320 - 0x00329614 (756 bytes, 182 insns)
 * Folder: render (match: xbox-demo 0x000B37C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00329320: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429764)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x429714)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x4293F4)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x758E34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429760)); /* movss */
    edi = ebx + 0xD0;
    PUSH32(esp, esi);
    eax = 1;
    ecx = esp + 0x28;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x003293CBu); RECOMP_ABI_CALL(0x00312170u, sub_00312170); /* call 0x00312170 */

loc_003293CB: ;
    edx = MEM32(esi + 0xE78);
    ecx = MEM32(esp + 0x30);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xE78) = edx;
    eax = edx;
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00329404; /* jns: not sign (positive) */

loc_003293E7: ;
    edx = MEM32(esi + 0x50);
    edx = edx | 0x1000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0xE78) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00329404: ;
    edi = MEM32(esi + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi & 0xFEFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x50) = edi;
    ecx = MEM32(ebx + 0x10C);
    edx = MEM32(ebx + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edi = MEM32(ebx + 0x250);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(ebx + 0xF4); /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = edx; /* cmovg */
    xmm5.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm6.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(ebx + 0xF8); /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) eax = ecx; /* cmovle */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    eax = edi;
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x00329496u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_00329496: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    edi = MEM32(ebx + 0x250);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = edi;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003294BBu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_003294BB: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00329533; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_003294FC: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00329533; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_00329501: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00329533; /* ja: above (unsigned >) (xmm6.f[0] vs xmm0.f[0]) */

loc_0032950C: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00329533; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_00329511: ;
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B);
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x0032951Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00329518u); } /* indirect call */
    }

loc_0032951B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ebx = MEM32(0x758E34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x757448); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032953D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x757448)) */

loc_00329533: ;
    MEM32(esi + 0xE78) = MEM32(esi + 0xE78) | 0x100;
    _fa = (uint32_t)(MEM32(esi + 0xE78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0032953D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00329540: ;
    xmm0 = XMM_SCALAR(MEMF(esp + edi * 8 + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + edi * 8 + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebx + 0xD0;
    eax = 1;
    edx = esp + 0x1C;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00329587u); RECOMP_ABI_CALL(0x00311CB0u, sub_00311CB0); /* call 0x00311CB0 */

loc_00329587: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003295F5; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032959B: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_003295F5; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_003295A2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003295F5; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003295B3: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca > _fcb)) goto loc_003295F5; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_003295BA: ;
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B);
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x003295C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003295C1u); } /* indirect call */
    }

loc_003295C4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ebx = MEM32(0x758E34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x757448); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00329604; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x757448)) */

loc_003295DC: ;
    eax = MEM32(esi + 0xE78);
    edx = 1;
    ecx = edi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xE78) = eax;
    goto loc_00329604;

loc_003295F5: ;
    ecx = edi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0xE78) = MEM32(esi + 0xE78) | eax;
    _fa = (uint32_t)(MEM32(esi + 0xE78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00329604: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00329540; /* jl: less (signed <) */

loc_0032960E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00329620
 * Original: 0x00329620 - 0x0032974E (302 bytes, 61 insns)
 * Folder: render (match: xbox-demo 0x000B3AC0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00329620: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x46B1A4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00329633; /* jne: not equal / not zero */

loc_0032962E: ;
    PUSH32(esp, 0x00329633u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00329633: ;
    edx = 0xE88;
    ecx = eax;
    PUSH32(esp, 0x0032963Fu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032963F: ;
    xmm1 = XMM_SCALAR(MEMF(0x4293EC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4296B0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x42934C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    esi = eax;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xE7C) = ebx;
    MEM32(esi + 0xE80) = ebx;
    MEM32(esi + 0xE84) = ebx;
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4293F8)); /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429448)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429390)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429348)); /* movss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm2.f[0]; /* movss */
    MEM32(esi + 0x48) = 0x20;
    MEM32(esi + 0x50) = 0xC;
    MEM8(esi + 0x54) = LO8(ebx);
    PUSH32(esp, 0x003296F7u); RECOMP_ABI_CALL(0x00328EE0u, sub_00328EE0); /* call 0x00328EE0 */

loc_003296F7: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 8 (8-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00329708; /* jne: not equal / not zero */

loc_00329700: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */

loc_00329708: ;
    MEMF(esi + 0xE58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE74) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00329750
 * Original: 0x00329750 - 0x00329EE3 (1939 bytes, 514 insns)
 * Folder: render (between: 0x00329620 and 0x00329EF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329750(void)
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

loc_00329750: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x90);
    SET_LO8(eax, MEM8(ebp + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0032977C; /* je: equal / zero */

loc_00329766: ;
    eax = MEM32(ebp + 0xE78);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xE78) = eax;
    goto loc_00329789;

loc_0032977C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x50)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x50), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00329789; /* je: equal / zero */

loc_00329782: ;
    esi = ebp;
    PUSH32(esp, 0x00329789u); RECOMP_ABI_CALL(0x00329320u, sub_00329320); /* call 0x00329320 */

loc_00329789: ;
    eax = MEM32(ebp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00329EDA; /* jne: not equal / not zero */

loc_00329797: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00329863; /* jne: not equal / not zero */

loc_0032979F: ;
    eax = MEM32(0x758E34);
    xmm0 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x194); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x198); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x190); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x190)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x194)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x198)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_00329878;

loc_00329863: ;
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 4);
    eax = MEM32(ebp + 8);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;

loc_00329878: ;
    eax = MEM32(ebp + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    ebx = eax + eax * 2;
    PUSH32(esp, 0x0032988Bu); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_0032988B: ;
    eax = MEM32(0x758E48);
    ecx = MEM32(eax + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0xC) = xmm4.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x10) = xmm4.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x14) = xmm4.f[0]; /* movss */
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x14);
    esi = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ebp + 0xE78);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    MEM32(esp + 0x20) = edx;
    xmm5 = xmm1; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_003298FD; /* jne: not equal / not zero */

loc_003298FA: ;
    xmm5 = xmm4; /* movaps */

loc_003298FD: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm6 = XMM_SCALAR(MEMF(0x4293F8)); /* movss */
    ebx = eax;
    ebx = ebx & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_00329915; /* jne: not equal / not zero */

loc_00329912: ;
    xmm0 = xmm6; /* movaps */

loc_00329915: ;
    PUSH32(esp, edi);
    edi = eax;
    edi = edi & 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_00329926; /* jne: not equal / not zero */

loc_00329923: ;
    xmm1 = xmm4; /* movaps */

loc_00329926: ;
    ecx = eax;
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_00329937; /* jne: not equal / not zero */

loc_00329934: ;
    xmm1 = xmm4; /* movaps */

loc_00329937: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm2 = XMM_SCALAR(MEMF(0x4293DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_0032995B; /* jne: not equal / not zero */

loc_00329958: ;
    xmm0 = xmm6; /* movaps */

loc_0032995B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329965; /* jne: not equal / not zero */

loc_00329962: ;
    xmm1 = xmm4; /* movaps */

loc_00329965: ;
    edx = eax;
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_00329976; /* jne: not equal / not zero */

loc_00329973: ;
    xmm1 = xmm4; /* movaps */

loc_00329976: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329992; /* jne: not equal / not zero */

loc_0032998F: ;
    xmm0 = xmm6; /* movaps */

loc_00329992: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_0032999C; /* jne: not equal / not zero */

loc_00329999: ;
    xmm1 = xmm4; /* movaps */

loc_0032999C: ;
    ecx = eax;
    ecx = ecx & 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_003299AD; /* jne: not equal / not zero */

loc_003299AA: ;
    xmm1 = xmm4; /* movaps */

loc_003299AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_003299C9; /* jne: not equal / not zero */

loc_003299C6: ;
    xmm0 = xmm6; /* movaps */

loc_003299C9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_003299D3; /* jne: not equal / not zero */

loc_003299D0: ;
    xmm1 = xmm4; /* movaps */

loc_003299D3: ;
    edx = eax;
    edx = edx & 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_003299E4; /* jne: not equal / not zero */

loc_003299E1: ;
    xmm1 = xmm4; /* movaps */

loc_003299E4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329A00; /* jne: not equal / not zero */

loc_003299FD: ;
    xmm0 = xmm6; /* movaps */

loc_00329A00: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329A0A; /* jne: not equal / not zero */

loc_00329A07: ;
    xmm1 = xmm4; /* movaps */

loc_00329A0A: ;
    ecx = eax;
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_00329A1B; /* jne: not equal / not zero */

loc_00329A18: ;
    xmm1 = xmm4; /* movaps */

loc_00329A1B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329A37; /* jne: not equal / not zero */

loc_00329A34: ;
    xmm0 = xmm6; /* movaps */

loc_00329A37: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329A41; /* jne: not equal / not zero */

loc_00329A3E: ;
    xmm1 = xmm4; /* movaps */

loc_00329A41: ;
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_00329A50; /* jne: not equal / not zero */

loc_00329A4D: ;
    xmm1 = xmm4; /* movaps */

loc_00329A50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329A6C; /* jne: not equal / not zero */

loc_00329A69: ;
    xmm0 = xmm6; /* movaps */

loc_00329A6C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329A76; /* jne: not equal / not zero */

loc_00329A73: ;
    xmm1 = xmm4; /* movaps */

loc_00329A76: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329A84; /* jne: not equal / not zero */

loc_00329A81: ;
    xmm1 = xmm4; /* movaps */

loc_00329A84: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329AA0; /* jne: not equal / not zero */

loc_00329A9D: ;
    xmm0 = xmm6; /* movaps */

loc_00329AA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329AAA; /* jne: not equal / not zero */

loc_00329AA7: ;
    xmm1 = xmm4; /* movaps */

loc_00329AAA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00329AB8; /* jne: not equal / not zero */

loc_00329AB5: ;
    xmm1 = xmm4; /* movaps */

loc_00329AB8: ;
    fp_push(MEMF(ebp + 0xE7C)); /* fld float */
    eax = MEM32(ebp);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp)); /* fsub dword ptr [ebp] */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    fp_push(MEMF(ebp + 0xE80)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 4)); /* fsub dword ptr [ebp + 4] */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    fp_push(MEMF(ebp + 0xE84)); /* fld float */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 8)); /* fsub dword ptr [ebp + 8] */
    MEM32(ebp + 0xE7C) = eax;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    ecx = MEM32(ebp + 4);
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] * fp_top()); fp_pop(); /* fmulp st(3) */
    MEM32(ebp + 0xE80) = ecx;
    edx = MEM32(ebp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(ebp + 0xE84) = edx;
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00329B51; /* jnp: not parity */

loc_00329B30: ;
    eax = MEM32(ebp + 0xE78);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00329B51; /* je: equal / zero */

loc_00329B3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329B51; /* je: equal / zero */

loc_00329B44: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x10); /* divss */
    goto loc_00329B5E;

loc_00329B51: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x470D74); /* divss */

loc_00329B5E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm2 = xmm4; /* movaps */
    MEM32(esp + 0x10) = edi;
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    ebx = ebp + 0xE58;

loc_00329B71: ;
    xmm0 = XMM_SCALAR(MEMF(esp + edi + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00329B92; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00329B8C: ;
    MEMF(ebx) = xmm4.f[0]; /* movss */
    goto loc_00329B9B;

loc_00329B92: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00329B9B; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00329B97: ;
    MEMF(ebx) = xmm3.f[0]; /* movss */

loc_00329B9B: ;
    eax = MEM32(ebp + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00329BA9u); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_00329BA9: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + edi + 0x78) = eax;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00329B71; /* jl: less (signed <) */

loc_00329BC2: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00329ED8; /* je: equal / zero */

loc_00329BCC: ;
    eax = MEM32(ebp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(0x758E34);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00329E9E; /* jle: less or equal (signed <=) */

loc_00329BE5: ;
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x9C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x71) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x71;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00329C00;

    /* nop */
    /* nop */

loc_00329C00: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + -1);
    eax = MEM32(esp + eax * 4 + 0x78);
    ecx = MEM32(esp + ecx * 4 + 0x78);
    xmm0 = XMM_SCALAR(MEMF(ebp + -5)); /* movss */
    PUSH32(esp, 0x00329C1Au); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_00329C1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329C2E; /* jne: not equal / not zero */

loc_00329C1E: ;
    edx = MEM32(0x758E48);
    eax = MEM32(edx + 0x24);
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00329E80;

loc_00329C2E: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x758E48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x24);
    edx = ecx;
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(esi + 6) = 0;
    MEM16(esi + 8) = 1;
    MEM16(esi + 0xA) = 2;
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = LO16(eax);
    SET_LO16(edx, MEM16(esi));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 2) = LO16(eax);
    eax = MEM32(esp + 0x9C);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + 2);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 4) = LO16(edx);
    xmm0 = XMM_SCALAR(MEMF(ebp + -25)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -21)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x160)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x164)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x168)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x174)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x178)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x170); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -13)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0x164)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x160)); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x168)); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -21)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x170)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x174)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x178)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -25); /* subss */
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -9)); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    xmm2 = xmm3; /* movaps */
    xmm3 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(ebx + -16) = eax;
    MEM32(ebx + -12) = edx;
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(ebx + -8) = eax;
    MEM32(ebx + -4) = edx;
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    MEM32(ebx) = eax;
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x40);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEM32(ebx + 4) = edx;
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = edx;
    MEM32(esp + 0x24) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00329E80: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x9C);
    edx = MEM32(ecx + 0x48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00329C00; /* jl: less (signed <) */

loc_00329E9E: ;
    esi = MEM32(edi + 0x74);
    eax = MEM32(0x758E48);
    edx = esi;
    edx = edx & 0xFEFFFEDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x74) = edx;
    edx = MEM32(0x758E44);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(0x74A230) = 0x712214;
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00329ECDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00329ECAu); } /* indirect call */
    }

loc_00329ECD: ;
    eax = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x74) = esi;

loc_00329ED8: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00329EDA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00329EF0
 * Original: 0x00329EF0 - 0x00329F99 (169 bytes, 45 insns)
 * Folder: render (match: xbox-demo 0x000B4390, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00329EF0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00329EFE; /* jne: not equal / not zero */

loc_00329EF9: ;
    PUSH32(esp, 0x00329EFEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00329EFE: ;
    PUSH32(esp, edi);
    edx = 0xB0;
    ecx = eax;
    PUSH32(esp, 0x00329F0Bu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00329F0B: ;
    xmm0 = XMM_SCALAR(MEMF(0x429348)); /* movss */
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x2C;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(eax, 8);
    MEM8(edx + 3) = LO8(eax);
    MEM8(edx + 2) = LO8(eax);
    eax = 0xFFFFFFFFu;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM32(edx + 0x20) = eax;
    MEMF(edx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x50) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x54) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x58) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x60) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x44) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x64) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x68) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x6C) = xmm0.f[0]; /* movss */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00329FA0
 * Original: 0x00329FA0 - 0x0032A34F (943 bytes, 233 insns)
 * Folder: render (between: 0x00329EF0 and 0x0032A350)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00329FA0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    eax = (uint32_t)(int32_t)SMEM8(ebp + 2);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 3);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A345; /* je: equal / zero */

loc_00329FBB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edx = eax + eax;
    PUSH32(esp, edx);
    ebx = eax * 4;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x00329FD8u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_00329FD8: ;
    ebx = MEM32(0x758E48);
    eax = MEM32(ebx + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    eax = MEM32(0x758E34);
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    edx = MEM32(ebx + 0x24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF8)); /* movss */
    edi = MEM32(ebx + 0x14);
    esi = MEM32(edx + 8);
    SET_LO8(edx, MEM8(ebp + 2));
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x28)); /* movss */
    xmm6.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xF4)); /* movss */
    ecx = MEM32(ebx + 0xC);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    xmm7 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0032A21E; /* jle: less or equal (signed <=) */

loc_0032A08E: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    edx = ebp + 0x70;
    MEM32(esp + 0x18) = edx;
    edx = ebp + 0x30;
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEM32(esp + 0x14) = edx;

loc_0032A0A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEM32(esp + 0x34) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0032A1FD; /* jle: less or equal (signed <=) */

loc_0032A0D7: ;
    eax = ebp + 0x50;
    MEM32(esp + 0x10) = eax;
    edi = edi;

loc_0032A0E0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(edx); /* mulss */
    edx = MEM32(esp + 0x34);
    eax = (uint32_t)(int32_t)SMEM8(eax + edx);
    ebx = MEM32(ebp + eax * 4 + 4);
    eax = MEM32(0x758E48);
    edx = ecx;
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esi + 6) = 0;
    MEM16(esi + 8) = 1;
    MEM16(esi + 0xA) = 2;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = LO16(eax);
    edx = eax + 1;
    MEM16(esi + 2) = LO16(edx);
    edx = eax + 2;
    MEM16(esi + 4) = LO16(edx);
    MEM16(esi + 0x10) = LO16(edx);
    MEM16(esi + 0x14) = LO16(eax);
    MEM16(esi + 0x16) = 2;
    MEM16(esi + 0x18) = 3;
    MEM16(esi + 0x1A) = 0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 3;
    MEM16(esi + 2) = LO16(edx);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x34);
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(ecx + -12) = xmm2.f[0]; /* movss */
    MEMF(ecx + -8) = xmm3.f[0]; /* movss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    MEM32(esp + 0x10) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x34) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0032A0E0; /* jl: less (signed <) */

loc_0032A1F7: ;
    ebx = MEM32(0x758E48);

loc_0032A1FD: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 4;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 8;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM8(ebp + 2);
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032A0A4; /* jl: less (signed <) */

loc_0032A219: ;
    eax = MEM32(0x758E34);

loc_0032A21E: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ebx + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_0032A30C; /* jle: less or equal (signed <=) */

loc_0032A22D: ;
    esi = ecx + 8;
    MEM32(esp + 0x34) = edx;

loc_0032A234: ;
    _fa = (uint32_t)(MEM8(eax + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xEC); /* subss */
    ebp = esi + -8;
    if (TEST_Z(_fa, _fb)) goto loc_0032A282; /* je: equal / zero */

loc_0032A24D: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_0032A2A5;

loc_0032A282: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0xE4); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0xE8); /* divss */

loc_0032A2A5: ;
    edi = eax + 0x160;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, ebp);
    ecx = esp + 0x28;
    eax = edi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032A2C7u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0032A2C7: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    eax = MEM32(esp + 0x38);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + -4); /* addss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x758E34);
    if ((_fa != 0)) goto loc_0032A234; /* jne: not equal / not zero */

loc_0032A30C: ;
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(ebx + 0x24);
    ecx = MEM32(0x758E44);
    MEM32(edx + 4) = 0;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032A336u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032A333u); } /* indirect call */
    }

loc_0032A336: ;
    edx = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx + 0x74) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0032A345: ;
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032A350
 * Original: 0x0032A350 - 0x0032A424 (212 bytes, 69 insns)
 * Folder: render (match: xbox-demo 0x000B47F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A350: ;
    _fb = (uint32_t)(0x1C21) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x1C21;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0032A3D6; /* je: equal / zero */

loc_0032A358: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0032A388; /* je: equal / zero */

loc_0032A35B: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032A387; /* jne: not equal / not zero */

loc_0032A35E: ;
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(eax); /* cvttss2si */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xFFFFFFF8u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032A386; /* jne: not equal / not zero */

loc_0032A36B: ;
    edx = (int32_t)MEMF(eax + 4); /* cvttss2si */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFF8u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032A386; /* jne: not equal / not zero */

loc_0032A378: ;
    eax = (int32_t)MEMF(eax + 8); /* cvttss2si */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = edx + esi * 8 + 0x70;
    MEM8(edx + ecx) = LO8(eax);

loc_0032A386: ;
    POP32(esp, esi);

loc_0032A387: ;
    esp += 4; return; /* ret */

loc_0032A388: ;
    edx = (int32_t)MEMF(eax); /* cvttss2si */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032A3C6; /* jne: not equal / not zero */

loc_0032A391: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x54) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x58) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x5C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x60) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x64) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x68) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x6C) = edx;
    edx = 8;

loc_0032A3C6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFF8u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032A387; /* jne: not equal / not zero */

loc_0032A3CE: ;
    eax = MEM32(eax + 4);
    MEM32(ecx + edx * 4 + 0x50) = eax;
    esp += 4; return; /* ret */

loc_0032A3D6: ;
    edx = (int32_t)MEMF(eax); /* cvttss2si */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032A410; /* jne: not equal / not zero */

loc_0032A3DF: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x3C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x48) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x4C) = eax;
    esp += 4; return; /* ret */

loc_0032A410: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFF8u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032A387; /* jne: not equal / not zero */

loc_0032A41C: ;
    eax = MEM32(eax + 4);
    MEM32(ecx + edx * 4 + 0x30) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A430
 * Original: 0x0032A430 - 0x0032A484 (84 bytes, 25 insns)
 * Folder: render (match: xbox-demo 0x000B48D0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A430: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032A43E; /* jne: not equal / not zero */

loc_0032A439: ;
    PUSH32(esp, 0x0032A43Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032A43E: ;
    edx = 0x24;
    ecx = eax;
    PUSH32(esp, 0x0032A44Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032A44A: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A490
 * Original: 0x0032A490 - 0x0032A8A6 (1046 bytes, 270 insns)
 * Folder: render (between: 0x0032A430 and 0x0032A8B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A490(void)
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

loc_0032A490: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x470D74); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032A4B7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032A4B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A4B7: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_0032A514; /* jne: not equal / not zero */

loc_0032A4C4: ;
    ebx = MEM32(0x758E34);
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1B0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    eax = ebx;
    PUSH32(esp, 0x0032A4DAu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0032A4DA: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A514: ;
    _fca = xmm1.f[0]; _fcb = MEMF(edi + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032A523; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(edi + 0x20)) */

loc_0032A51A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032A523: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x758E34);
    eax = esp + 0x1C;
    ebx = ebp + 0x160;
    PUSH32(esp, eax);
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0x0032A53Eu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0032A53E: ;
    ecx = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    edx = MEM32(edi + 4);
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    eax = MEM32(edi + 8);
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x18) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ebx = ebp + 0x1B0;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, esi);
    ecx = edi;
    eax = ebx;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032A5C5u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0032A5C5: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    PUSH32(esp, 1);
    ebp = 2;
    PUSH32(esp, ebp);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = 4;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032A606u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_0032A606: ;
    esi = MEM32(0x758E48);
    ecx = MEM32(esi + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    ebx = MEM32(0x758E34);
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(edx + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x198); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ebx + 0x190); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x194); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x40) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    eax = esp + 0x40;
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032A6DDu); RECOMP_ABI_CALL(0x00030950u, sub_00030950); /* call 0x00030950 */

loc_0032A6DD: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    eax = MEM32(esi + 0xC);
    xmm3.f[0] = xmm3.f[0] * MEMF(0x429354); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x24) = xmm6.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    ecx = 1;
    MEM16(edx + 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 4) = LO16(ebp);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 6) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 8) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 0xA) = LO16(ebp);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 0x10) = LO16(ebp);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 8);
    ecx = 3;
    MEM16(edx + 0x12) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x14) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x16) = LO16(ebp);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x18) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 0x1A) = LO16(eax);
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 8) = edx;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(esi + 0x24);
    MEM32(ecx + 4) = eax;
    edi = MEM32(ebx + 0x74);
    ecx = MEM32(0x758E44);
    edx = edi;
    edx = edx & 0xFFFFFEDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x74) = edx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032A88Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032A88Au); } /* indirect call */
    }

loc_0032A88D: ;
    edx = MEM32(0x758E34);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(edx + 0x74) = edi;
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032A8B0
 * Original: 0x0032A8B0 - 0x0032A8F6 (70 bytes, 21 insns)
 * Folder: render (match: xbox-demo 0x000B4D50, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A8B0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032A8BE; /* jne: not equal / not zero */

loc_0032A8B9: ;
    PUSH32(esp, 0x0032A8BEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032A8BE: ;
    edx = 0x24;
    ecx = eax;
    PUSH32(esp, 0x0032A8CAu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032A8CA: ;
    xmm0 = XMM_SCALAR(MEMF(0x429A38)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0032A900
 * Original: 0x0032A900 - 0x0032A999 (153 bytes, 45 insns)
 * Folder: render (match: xbox-demo 0x000B4DA0, between)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A900(void)
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

loc_0032A900: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    ecx = edx + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032A927; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0032A90F: ;
    /* nop */

loc_0032A910: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032A92E; /* je: equal / zero */

loc_0032A91D: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca > _fcb)) goto loc_0032A910; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx)) */

loc_0032A922: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0032A95B; /* ja: above (unsigned >) */

loc_0032A927: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x32A99C); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0032A931u) goto loc_0032A931;
    if (_jt == 0x0032A938u) goto loc_0032A938;
    if (_jt == 0x0032A942u) goto loc_0032A942;
    if (_jt == 0x0032A958u) goto loc_0032A958;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0032A92E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0032A931: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(edx + 0xC); /* divss */
    goto loc_0032A95B;

loc_0032A938: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    goto loc_0032A95B;

loc_0032A942: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(edx + 0x14); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    goto loc_0032A95B;

loc_0032A958: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0032A95B: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x470D74); /* addss */
    eax = MEM32(edx + 4);
    ecx = MEM32(edx);
    PUSH32(esp, 0);
    MEMF(edx + 0x1C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0032A979u); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_0032A979: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x758E34);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0032A990u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0032A98Du); } /* indirect call */
    }

loc_0032A990: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0032A9B0
 * Original: 0x0032A9B0 - 0x0032A9DC (44 bytes, 16 insns)
 * Folder: render (between: 0x0032A900 and 0x0032B540)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032A9B0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032A9BE; /* jne: not equal / not zero */

loc_0032A9B9: ;
    PUSH32(esp, 0x0032A9BEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032A9BE: ;
    PUSH32(esp, edi);
    edx = 0x40;
    ecx = eax;
    PUSH32(esp, 0x0032A9CBu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032A9CB: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x10;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032A9E0
 * Original: 0x0032A9E0 - 0x0032B53D (2909 bytes, 610 insns)
 * Folder: render (between: 0x0032A900 and 0x0032B540)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032A9E0(void)
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

loc_0032A9E0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x758E34);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xF4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xF8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0032AB57; /* je: equal / zero */

loc_0032AA61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032AAC9; /* je: equal / zero */

loc_0032AA65: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_0032AAC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032AB32; /* je: equal / zero */

loc_0032AACD: ;
    xmm7 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    xmm6 = xmm4; /* movaps */

loc_0032AB32: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esi + 0xC) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm4.f[0]; /* movss */
    MEM32(esi) = eax;

loc_0032AB57: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032ADC5; /* je: equal / zero */

loc_0032AB62: ;
    xmm7 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm7.f[0] = xmm7.f[0] + MEMF(0x470D74); /* addss */
    _fca = xmm7.f[0]; _fcb = MEMF(esi + 0x24); /* comiss */
    MEMF(esi + 0x28) = xmm7.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032AB81; /* jb: below (unsigned <) (xmm7.f[0] vs MEMF(esi + 0x24)) */

loc_0032AB7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032AB81: ;
    xmm7.f[0] = xmm7.f[0] / MEMF(esi + 0x24); /* divss */
    xmm4 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */

loc_0032AB92: ;
    _fca = xmm4.f[0]; _fcb = MEMF(0x429344); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0032ABF3; /* jnp: not parity */

loc_0032AB9F: ;
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0032ABF3: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = 0xC;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0032AC0Fu); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_0032AC0F: ;
    ebx = MEM32(0x758E48);
    ecx = MEM32(ebx + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x4425A0)); /* movss */
    MEMF(edx + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    edi = eax + 8;
    MEMF(eax + 0x54) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x84) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = 0;
    goto loc_0032AD70;

    /* nop */

loc_0032AD70: ;
    ebp = MEM32(0x758E34);
    _fa = (uint32_t)(MEM8(ebp + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(edi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xEC); /* subss */
    if (TEST_Z(_fa, _fb)) goto loc_0032AE1C; /* je: equal / zero */

loc_0032AD90: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0xE8); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_0032AE3F;

loc_0032ADC5: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032AE0F; /* je: equal / zero */

loc_0032ADCA: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(0x470D74); /* addss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esi + 0x28) = xmm4.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0032B533; /* ja: above (unsigned >) (xmm7.f[0] vs xmm4.f[0]) */

loc_0032ADEA: ;
    xmm7 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm7.f[0] = xmm7.f[0] + MEMF(esi + 0x1C); /* addss */
    _fca = xmm7.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032AE08; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm4.f[0]) */

loc_0032ADF9: ;
    xmm4.f[0] = xmm4.f[0] - MEMF(esi + 0x1C); /* subss */
    xmm4.f[0] = xmm4.f[0] / MEMF(esi + 0x20); /* divss */
    goto loc_0032AB92;

loc_0032AE08: ;
    _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_0032AE0F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    goto loc_0032ABF3;

loc_0032AE1C: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xE4); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xE8); /* divss */

loc_0032AE3F: ;
    eax = edi + -8;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x160;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    eax = ebp;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032AE64u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0032AE64: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + -8); /* addss */
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x34);
    MEMF(edi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + -4); /* addss */
    MEMF(edi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x14);
    MEM32(eax + ecx + 4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0032AD70; /* jl: less (signed <) */

loc_0032AEB4: ;
    eax = MEM32(ebx + 0x24);
    eax = MEM32(eax + 8);
    SET_LO16(ecx, MEM16(0x442560));
    MEM16(eax) = LO16(ecx);
    SET_LO16(edx, MEM16(0x442564));
    MEM16(eax + 2) = LO16(edx);
    SET_LO16(ecx, MEM16(0x442568));
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 8) = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + -10) = LO16(ebp);
    ecx = 2;
    MEM16(eax + -6) = LO16(ecx);
    SET_LO16(edx, MEM16(0x442568));
    MEM16(eax) = LO16(edx);
    SET_LO16(edx, MEM16(0x44256C));
    MEM16(eax + 2) = LO16(edx);
    SET_LO16(edx, MEM16(0x442560));
    MEM16(eax + 4) = LO16(edx);
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 3;
    MEM16(eax + -8) = LO16(edx);
    SET_LO16(edi, MEM16(0x442570));
    MEM16(eax) = LO16(edi);
    SET_LO16(edi, MEM16(0x442574));
    MEM16(eax + 2) = LO16(edi);
    SET_LO16(edi, MEM16(0x442578));
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ebp);
    MEM16(eax + 8) = 1;
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(edi, MEM16(0x442578));
    MEM16(eax + 0x10) = LO16(edi);
    SET_LO16(edi, MEM16(0x44257C));
    MEM16(eax + 0x12) = LO16(edi);
    SET_LO16(edi, MEM16(0x442570));
    MEM16(eax + 0x14) = LO16(edi);
    MEM16(eax + 0x16) = LO16(ecx);
    MEM16(eax + 0x18) = LO16(edx);
    MEM16(eax + 0x1A) = LO16(ebp);
    SET_LO16(edi, MEM16(0x442580));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(edi);
    SET_LO16(edi, MEM16(0x442584));
    MEM16(eax + 0x12) = LO16(edi);
    SET_LO16(edi, MEM16(0x442588));
    MEM16(eax + 0x14) = LO16(edi);
    MEM16(eax + 0x16) = LO16(ebp);
    MEM16(eax + 0x18) = 1;
    MEM16(eax + 0x1A) = LO16(ecx);
    SET_LO16(edi, MEM16(0x442588));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(edi);
    SET_LO16(edi, MEM16(0x44258C));
    MEM16(eax + 0x12) = LO16(edi);
    SET_LO16(edi, MEM16(0x442580));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax + 8) = LO16(edx);
    MEM16(eax + 0xA) = LO16(ebp);
    SET_LO16(edi, MEM16(0x442590));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edi);
    SET_LO16(edi, MEM16(0x442594));
    MEM16(eax + 2) = LO16(edi);
    SET_LO16(edi, MEM16(0x442598));
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ebp);
    MEM16(eax + 8) = 1;
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(edi, MEM16(0x442598));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edi);
    SET_LO16(edi, MEM16(0x44259C));
    MEM16(eax + 2) = LO16(edi);
    SET_LO16(edi, MEM16(0x442590));
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax + 8) = LO16(edx);
    MEM16(eax + 0xA) = LO16(ebp);
    eax = MEM32(0x758E34);
    edi = MEM32(eax + 0x74);
    ecx = edi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(ebx + 0x24);
    ecx = MEM32(0x758E44);
    MEM32(edx + 4) = ebp;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032B071u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032B06Eu); } /* indirect call */
    }

loc_0032B071: ;
    edx = MEM32(0x758E34);
    MEM32(edx + 0x74) = edi;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032B530; /* je: equal / zero */

loc_0032B087: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = 0x18;
    PUSH32(esp, 0x0032B099u); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_0032B099: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esi + 0x2C); /* subss */
    eax = MEM32(0x758E48);
    eax = MEM32(eax + 0xC);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x2C); /* addss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x34); /* subss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x38); /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x30); /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x3C); /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x38); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] + MEMF(esi + 0x3C); /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x3C); /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x34); /* addss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] - MEMF(esi + 0x3C); /* subss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4425A0)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    edi = eax + 8;
    MEMF(esp + 0x48) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(eax + 0x34) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(eax + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(eax + 0x54) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(eax + 0x6C) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x90) = xmm5.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(eax + 0x94) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(eax + 0xAC) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xB4) = xmm6.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC0) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(eax + 0xC4) = xmm6.f[0]; /* movss */
    MEMF(eax + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xCC) = xmm5.f[0]; /* movss */
    MEMF(eax + 0xD0) = xmm6.f[0]; /* movss */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xD8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xDC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xE4) = xmm4.f[0]; /* movss */
    MEMF(eax + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xF0) = xmm4.f[0]; /* movss */
    MEMF(eax + 0xF4) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xFC) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x100) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x104) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x108) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x10C) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x110) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x114) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x118) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x11C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = ebp;
    /* nop */

loc_0032B350: ;
    ebx = MEM32(0x758E34);
    _fa = (uint32_t)(MEM8(ebx + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(edi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xEC); /* subss */
    ebp = edi + -8;
    if (TEST_Z(_fa, _fb)) goto loc_0032B3A4; /* je: equal / zero */

loc_0032B36F: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebx + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebx + 0xE8); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_0032B3C7;

loc_0032B3A4: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 0xE4); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 0xE8); /* divss */

loc_0032B3C7: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x160;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esp + 0x38;
    eax = ebx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032B3E9u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0032B3E9: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    ecx = MEM32(0x758E48);
    eax = MEM32(esp + 0x24);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + -4); /* addss */
    MEMF(edi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(esi + 8);
    MEM32(eax + edx + 4) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0032B350; /* jl: less (signed <) */

loc_0032B43E: ;
    edi = MEM32(0x758E48);
    edx = MEM32(edi + 0x24);
    eax = MEM32(edx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 4;

loc_0032B451: ;
    esi = MEM32(0x44252C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(esi);
    esi = MEM32(0x442530);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    esi = MEM32(0x442534);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    esi = MEM32(0x442538);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(esi);
    esi = MEM32(0x44253C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x12) = LO16(esi);
    esi = MEM32(0x442540);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    esi = MEM32(0x442544);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(esi);
    esi = MEM32(0x442548);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    esi = MEM32(0x44254C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    esi = MEM32(0x442550);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(esi);
    esi = MEM32(0x442554);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    esi = MEM32(0x442558);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032B451; /* jne: not equal / not zero */

loc_0032B4F5: ;
    eax = MEM32(0x758E34);
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(edi + 0x24);
    ecx = MEM32(0x758E44);
    MEM32(edx + 4) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032B524u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032B521u); } /* indirect call */
    }

loc_0032B524: ;
    edx = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x74) = esi;

loc_0032B530: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0032B533: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032B540
 * Original: 0x0032B540 - 0x0032B570 (48 bytes, 16 insns)
 * Folder: render (match: xbox-demo 0x000B59E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032B540: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032B54E; /* jne: not equal / not zero */

loc_0032B549: ;
    PUSH32(esp, 0x0032B54Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032B54E: ;
    edx = 0x18;
    ecx = eax;
    PUSH32(esp, 0x0032B55Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032B55A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032B570
 * Original: 0x0032B570 - 0x0032BAD3 (1379 bytes, 318 insns)
 * Folder: render (between: 0x0032B540 and 0x0032BAF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032B570(void)
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

loc_0032B570: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x470D74); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = ecx + 4;
    PUSH32(esp, esi);
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032B5BE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_0032B599: ;
    goto loc_0032B5A1;

loc_0032B59B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_0032B5A1: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0032B5C5; /* je: equal / zero */

loc_0032B5B4: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca > _fcb)) goto loc_0032B59B; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx)) */

loc_0032B5B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0032B60E; /* ja: above (unsigned >) */

loc_0032B5BE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x32BAD4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0032B5CFu) goto loc_0032B5CF;
    if (_jt == 0x0032B5DAu) goto loc_0032B5DA;
    if (_jt == 0x0032B5E7u) goto loc_0032B5E7;
    if (_jt == 0x0032B5F7u) goto loc_0032B5F7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0032B5C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032B5CF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0032B60E;

loc_0032B5DA: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 8); /* divss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0032B60E;

loc_0032B5E7: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0032B60E;

loc_0032B5F7: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x10); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_0032B60E: ;
    eax = MEM32(0x758E34);
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, 1);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF8)); /* movss */
    PUSH32(esp, 0x10);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, 4);
    ebx = 0x20;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0032B66Bu); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_0032B66B: ;
    edi = MEM32(0x758E48);
    ecx = MEM32(edi + 0x1C);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(edi + 0x1C);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x1C);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x1C);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x1C);
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    ebp = MEM32(edi + 0xC);
    xmm3 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm6 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429570); /* mulss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    ecx = eax;
    eax = eax & 0x7F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3F800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xD) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx * 4 + 0x649168);
    eax = eax & 0x7F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi + 0x24);
    MEM32(esp + 0x3C) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x18) = ebx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = ebp + 0x14;
    xmm7 = XMM_SCALAR(MEMF(0x442528)); /* movss */
    goto loc_0032B790;

loc_0032B781: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    goto loc_0032B790;

    /* nop */

loc_0032B790: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_push(MEMF(0x645160)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429830)); /* fmul dword ptr [0x429830] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    MEMD(esp + 0x18) = fp_top(); /* fst */
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_0032B7C6; /* jns: not sign (positive) */

loc_0032B7B8: ;
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x400;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032B7D4;

loc_0032B7C6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032B7D4; /* jle: less or equal (signed <=) */

loc_0032B7CE: ;
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032B7D4: ;
    xmm5 = XMM_SCALAR(MEMF(edx * 4 + 0x645168)); /* movss */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    if (CMP_GE(_fas, _fbs)) goto loc_0032B7FB; /* jge: greater or equal (signed >=) */

loc_0032B7ED: ;
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x400;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032B809;

loc_0032B7FB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032B809; /* jle: less or equal (signed <=) */

loc_0032B803: ;
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032B809: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429830)); /* fmul dword ptr [0x429830] */
    xmm2 = XMM_SCALAR(MEMF(edx * 4 + 0x645168)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x645160)); /* fmul dword ptr [0x645160] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    MEMD(esp + 0x18) = fp_top(); /* fst */
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_0032B850; /* jns: not sign (positive) */

loc_0032B842: ;
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x400;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032B85E;

loc_0032B850: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032B85E; /* jle: less or equal (signed <=) */

loc_0032B858: ;
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032B85E: ;
    xmm4 = XMM_SCALAR(MEMF(edx * 4 + 0x645168)); /* movss */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    if (CMP_GE(_fas, _fbs)) goto loc_0032B885; /* jge: greater or equal (signed >=) */

loc_0032B877: ;
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x400;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032B893;

loc_0032B885: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032B893; /* jle: less or equal (signed <=) */

loc_0032B88D: ;
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032B893: ;
    xmm0 = XMM_SCALAR(MEMF(edx * 4 + 0x645168)); /* movss */
    MEMF(ecx + -12) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x442528)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEMF(ecx + -16) = xmm2.f[0]; /* movss */
    MEMF(ecx) = xmm7.f[0]; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + -8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    edx = ebx * 4;
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    MEMF(ecx + -4) = xmm1.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x442528)); /* movss */
    MEMF(ecx + 0xC) = xmm7.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm7.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    esi = edx + 1;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 0x14) = xmm2.f[0]; /* movss */
    MEM16(eax + -14) = LO16(esi);
    MEM16(eax + -16) = LO16(edx);
    MEM16(eax + -10) = 0;
    MEM16(eax + -8) = 1;
    MEM16(eax + -6) = 2;
    esi = edx + 2;
    MEM16(eax + -12) = LO16(esi);
    MEM16(eax) = LO16(esi);
    esi = edx + 3;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x30;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    MEM16(eax + 4) = LO16(edx);
    MEM16(eax + 6) = 2;
    MEM16(eax + 8) = 3;
    MEM16(eax + 0xA) = 0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0032B781; /* jl: less (signed <) */

loc_0032B992: ;
    esi = MEM32(edi + 0xC);
    MEM32(esp + 0x18) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032B9A0: ;
    ebx = MEM32(0x758E34);
    _fa = (uint32_t)(MEM8(ebx + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xEC); /* subss */
    ebp = esi + -8;
    if (TEST_Z(_fa, _fb)) goto loc_0032B9F4; /* je: equal / zero */

loc_0032B9BF: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebx + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebx + 0xE8); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_0032BA17;

loc_0032B9F4: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 0xE4); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 0xE8); /* divss */

loc_0032BA17: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x160;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esp + 0x38;
    eax = ebx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0032BA39u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0032BA39: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x34);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + -4); /* addss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x14);
    MEM32(ecx + eax + 4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0032B9A0; /* jl: less (signed <) */

loc_0032BA8B: ;
    eax = MEM32(0x758E34);
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(edi + 0x24);
    ecx = MEM32(0x758E44);
    MEM32(edx + 4) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0032BABAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032BAB7u); } /* indirect call */
    }

loc_0032BABA: ;
    edx = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx + 0x74) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032BAF0
 * Original: 0x0032BAF0 - 0x0032BB1D (45 bytes, 15 insns)
 * Folder: render (match: xbox-demo 0x000B5F90, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BAF0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032BAFE; /* jne: not equal / not zero */

loc_0032BAF9: ;
    PUSH32(esp, 0x0032BAFEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032BAFE: ;
    edx = 0x14;
    ecx = eax;
    PUSH32(esp, 0x0032BB0Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032BB0A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BB20
 * Original: 0x0032BB20 - 0x0032BBC3 (163 bytes, 47 insns)
 * Folder: render (match: xbox-demo 0x000B5FC0, between)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0032BB20(void)
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

loc_0032BB20: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032BB33; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x10)) */

loc_0032BB2B: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 4)); /* fdiv dword ptr [esi + 4] */
    goto loc_0032BB6E;

loc_0032BB33: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032BB47; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x10)) */

loc_0032BB43: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0032BB79;

loc_0032BB47: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xC); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032BBC0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x10)) */

loc_0032BB5C: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0xC)); /* fdiv dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) - fp_top()); /* fsubr dword ptr [0x429344] */

loc_0032BB6E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429340)); /* fmul dword ptr [0x429340] */
    PUSH32(esp, 0x0032BB79u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_0032BB79: ;
    ecx = MEM32(0x758E34);
    eax = ZX8(LO8(eax));
    MEM8(esi + 3) = 0;
    edx = MEM32(esi);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi) = edx;
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x0032BBA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032BBA2u); } /* indirect call */
    }

loc_0032BBA5: ;
    xmm0 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x10); /* addss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

loc_0032BBC0: ;
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
 * sub_0032BBD0
 * Original: 0x0032BBD0 - 0x0032BC86 (182 bytes, 49 insns)
 * Folder: render (match: xbox-demo 0x000B6070, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BBD0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032BBDE; /* jne: not equal / not zero */

loc_0032BBD9: ;
    PUSH32(esp, 0x0032BBDEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032BBDE: ;
    PUSH32(esp, edi);
    edx = 0x50;
    ecx = eax;
    PUSH32(esp, 0x0032BBEBu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032BBEB: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x14;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x30);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x34);
    MEM32(edx + 4) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x429394)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x4293EC)); /* movss */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + 0x14) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(edx + 0x18) = ecx;
    ecx = MEM32(eax + 0x24);
    MEM32(edx + 0x1C) = ecx;
    eax = MEM32(eax + 0x28);
    MEM32(edx + 0x20) = eax;
    MEMF(edx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(edx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x30) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x38) = 0xFFFFFFFFu;
    MEM32(edx + 0x3C) = 0;
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BC90
 * Original: 0x0032BC90 - 0x0032BD12 (130 bytes, 50 insns)
 * Folder: render (between: 0x0032BBD0 and 0x0032BD50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BC90: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0032BCC3; /* jg: greater (signed >) */

loc_0032BC94: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032BD11; /* je: equal / zero */

loc_0032BC9B: ;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x34) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0032BD11; /* je: equal / zero */

loc_0032BCA9: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032BCB7; /* jne: not equal / not zero */

loc_0032BCB2: ;
    PUSH32(esp, 0x0032BCB7u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032BCB7: ;
    ecx = MEM32(edi + 0x48);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0032BCC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032BCBFu); } /* indirect call */
    }

loc_0032BCC2: ;
    esp += 4; return; /* ret */

loc_0032BCC3: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032BD11; /* je: equal / zero */

loc_0032BCCA: ;
    PUSH32(esp, esi);
    esi = ebx + ebx * 4;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x46B1A4);
    if (CMP_EQ(_fa, _fb)) goto loc_0032BCF8; /* je: equal / zero */

loc_0032BCDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032BCE3; /* jne: not equal / not zero */

loc_0032BCDE: ;
    PUSH32(esp, 0x0032BCE3u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032BCE3: ;
    edx = MEM32(edi + 0x48);
    PUSH32(esp, edx);
    edx = esi;
    ecx = eax;
    PUSH32(esp, 0x0032BCF0u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_0032BCF0: ;
    MEM32(edi + 0x48) = eax;
    MEM32(edi + 0x34) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032BCF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032BD01; /* jne: not equal / not zero */

loc_0032BCFC: ;
    PUSH32(esp, 0x0032BD01u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0032BD01: ;
    edx = esi;
    ecx = eax;
    PUSH32(esp, 0x0032BD0Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0032BD0A: ;
    MEM32(edi + 0x48) = eax;
    MEM32(edi + 0x34) = ebx;
    POP32(esp, esi);

loc_0032BD11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BD20
 * Original: 0x0032BD20 - 0x0032BD45 (37 bytes, 18 insns)
 * Folder: render (between: 0x0032BBD0 and 0x0032BD50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0032BD20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0032BD42; /* je: equal / zero */

loc_0032BD2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4E84 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032BD42; /* jne: not equal / not zero */

loc_0032BD31: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032BD3D; /* jne: not equal / not zero */

loc_0032BD36: ;
    MEM32(edi + 0x44) = MEM32(edi + 0x44) | 1;
    _fa = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032BD3D: ;
    PUSH32(esp, 0x0032BD42u); RECOMP_ABI_CALL(0x0032BC90u, sub_0032BC90); /* call 0x0032BC90 */

loc_0032BD42: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BD50
 * Original: 0x0032BD50 - 0x0032BE32 (226 bytes, 64 insns)
 * Folder: render (match: xbox-demo 0x000B61E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0032BD50: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(edx + 0x2C); /* comiss */
    if ((_fca > _fcb)) goto loc_0032BE31; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(edx + 0x2C)) */

loc_0032BD5D: ;
    _fa = (uint32_t)(MEM8(edx + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x44), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032BE31; /* jne: not equal / not zero */

loc_0032BD67: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x2C); /* comiss */
    eax = MEM32(esp + 8);
    MEMF(edx + 0x4C) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032BE31; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x2C)) */

loc_0032BD88: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0032BD90: ;
    esi = MEM32(edx + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032BE2F; /* je: equal / zero */

loc_0032BD9C: ;
    edi = MEM32(edx + 0x48);
    eax = esi + esi * 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x40) = esi;
    esi = MEM32(edx + 0x24);
    MEM32(edi + eax * 8 + 0x24) = esi;
    esi = MEM32(ecx + 0x30);
    MEM32(edi + eax * 8) = esi;
    esi = MEM32(ecx + 0x34);
    eax = edi + eax * 8;
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 0x38);
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0xC) = esi;
    esi = MEM32(ecx + 0x14);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0x18);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x14) = esi;
    esi = MEM32(ecx + 0x20);
    MEM32(eax + 0x18) = esi;
    esi = MEM32(ecx + 0x24);
    MEM32(eax + 0x1C) = esi;
    esi = MEM32(ecx + 0x28);
    MEM32(eax + 0x20) = esi;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0032BE22; /* jnp: not parity */

loc_0032BE06: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x2C); /* subss */
    MEMF(edx + 0x4C) = xmm0.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x2C); /* comiss */
    if ((_fca > _fcb)) goto loc_0032BD90; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 0x2C)) */

loc_0032BE1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032BE22: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */
    MEMF(edx + 0x2C) = xmm0.f[0]; /* movss */

loc_0032BE2F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0032BE31: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0032BE40
 * Original: 0x0032BE40 - 0x0032BEEA (170 bytes, 51 insns)
 * Folder: render (match: xbox-demo 0x000B62D0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0032BE40: ;
    ecx = MEM32(edx + 0x40);
    eax = MEM32(edx + 0x48);
    ecx = ecx + ecx * 4;
    PUSH32(esp, ebx);
    ebx = eax + ecx * 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0032BEE8; /* jae: above or equal (unsigned >=) */

loc_0032BE55: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0032BE60: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032BE93; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0032BE73: ;
    esi = MEM32(edx + 0x40);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(edx + 0x40) = esi;
    esi = MEM32(edx + 0x48);
    ecx = ecx + ecx * 4;
    esi = esi + ecx * 8;
    ecx = 0xA;
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
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0032BEDE;

loc_0032BE93: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032BEDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0032BE60; /* jb: below (unsigned <) */

loc_0032BEE6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0032BEE8: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0032BEF0
 * Original: 0x0032BEF0 - 0x0032C2BA (970 bytes, 252 insns)
 * Folder: render (between: 0x0032BE40 and 0x0032C2C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032BEF0(void)
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

loc_0032BEF0: ;
    ecx = MEM32(0x470D74);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, 0x0032BF07u); RECOMP_ABI_CALL(0x0032BD50u, sub_0032BD50); /* call 0x0032BD50 */

loc_0032BF07: ;
    xmm3 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0032BF17u); RECOMP_ABI_CALL(0x0032BE40u, sub_0032BE40); /* call 0x0032BE40 */

loc_0032BF17: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032BF2B; /* jne: not equal / not zero */

loc_0032BF1E: ;
    eax = MEM32(esi + 0x44);
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032BF2B: ;
    edx = MEM32(0x758E3C);
    eax = MEM32(edx + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032C2B0; /* je: equal / zero */

loc_0032BF3F: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ebx = eax * 4;
    PUSH32(esp, 0x0032BF5Bu); RECOMP_ABI_CALL(0x002FD020u, sub_002FD020); /* call 0x002FD020 */

loc_0032BF5B: ;
    ebx = MEM32(0x758E48);
    edx = MEM32(ebx + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    edx = MEM32(ebx + 0x24);
    eax = MEM32(esi + 0x40);
    edi = MEM32(edx + 8);
    edx = MEM32(esi + 0x48);
    ebp = MEM32(ebx + 0x14);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    ecx = MEM32(ebx + 0xC);
    eax = eax + eax * 4;
    eax = edx + eax * 8;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    MEM32(esp + 0x18) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(esp + 0x10) = edx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0032C011; /* jnp: not parity */

loc_0032BFDF: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0xD) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi & 0x3FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi * 4 + 0x648168);
    eax = eax & 0xFF800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x7E800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x7E800000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = esi;
    goto loc_0032C017;

loc_0032C011: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0032C017: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0032C273; /* jae: above or equal (unsigned >=) */

loc_0032C021: ;
    esi = ecx + 0x14;
    ebx = edx + 0x14;
    goto loc_0032C031;

loc_0032C029: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);

loc_0032C031: ;
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx)); /* movss */
    eax = MEM32(esp + 0x48);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm5 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebx + -8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebx + -8); /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebx + -4); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    MEMF(ecx) = xmm7.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx + -16)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esi + -16) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx + -12)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(esi + -12) = xmm6.f[0]; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esi + -16); /* addss */
    MEMF(esi + -16) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + -12)); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(ecx) = xmm5.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    MEMF(esi + -12) = xmm6.f[0]; /* movss */
    MEMF(esi + -8) = xmm5.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] + MEMF(esi + -16); /* addss */
    MEMF(esi + -4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + -12)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 4) = xmm5.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x34) = xmm7.f[0]; /* movss */
    eax = MEM32(0x758E48);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    edx = ecx;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    MEM16(edi) = LO16(eax);
    MEM16(edi + 8) = 1;
    MEM16(edi + 0xA) = 2;
    ecx = eax + 1;
    MEM16(edi + 2) = LO16(ecx);
    ecx = eax + 2;
    MEM16(edi + 4) = LO16(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edi + -10) = LO16(edx);
    MEM16(edi) = LO16(ecx);
    ecx = eax + 3;
    MEM16(edi + 2) = LO16(ecx);
    ecx = MEM32(esp + 0x48);
    MEM16(edi + 4) = LO16(eax);
    MEM16(edi + 0xA) = LO16(edx);
    MEM16(edi + 6) = 2;
    MEM16(edi + 8) = 3;
    eax = MEM32(ecx + 0x38);
    ecx = MEM32(ecx + 0x3C);
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x10); /* mulss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0032C23Bu); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_0032C23B: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ebp) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0032C029; /* jb: below (unsigned <) */

loc_0032C26D: ;
    ebx = MEM32(0x758E48);

loc_0032C273: ;
    edx = MEM32(ebx + 0x24);
    eax = MEM32(0x758E34);
    MEM32(edx + 4) = 0;
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    eax = MEM32(0x758E44);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0032C2A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032C29Eu); } /* indirect call */
    }

loc_0032C2A1: ;
    ecx = MEM32(0x758E34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ecx + 0x74) = esi;
    POP32(esp, ebx);

loc_0032C2B0: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0032C2C0
 * Original: 0x0032C2C0 - 0x0032C344 (132 bytes, 45 insns)
 * Folder: render (match: xbox-demo 0x000B81E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032C2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0032C2C0: ;
    PUSH32(esp, ecx);
    _fca = xmm0.f[0]; _fcb = MEMF(0x42933C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0032C2CE; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x42933C)) */

loc_0032C2CA: ;
    eax = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0032C2CE: ;
    xmm1 = XMM_SCALAR(MEMF(0x429338)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0032C342; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0032C2DD: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429334); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    SET_LO8(edx, MEM8(esp));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0032C2FA; /* jns: not sign (positive) */

loc_0032C2F1: ;
    eax = ecx;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7F7F7F7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032C2FA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0032C30D; /* je: equal / zero */

loc_0032C300: ;
    esi = ecx;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0x3F3F3F3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032C30D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032C31F; /* je: equal / zero */

loc_0032C312: ;
    esi = ecx;
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0x1F1F1F1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032C31F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032C331; /* je: equal / zero */

loc_0032C324: ;
    esi = ecx;
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xF0F0F0F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032C331: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0032C342; /* je: equal / zero */

loc_0032C337: ;
    ecx = ecx >> 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7070707;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032C342: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
