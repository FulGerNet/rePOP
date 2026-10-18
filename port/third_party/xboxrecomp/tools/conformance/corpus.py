"""Whole functions: compile C with a 32-bit MSVC, lift the machine code back,
and require the lifted C to agree with the original.

The snippet cases in cases.py test instructions someone thought to write down.
This tests whatever the optimiser actually emitted -- its register allocation,
its branch layout, the idioms it reaches for -- which is the code a real title
is made of.

The corpus is compiled and then **linked** at a fixed base, and the lifted code
is taken from the linked image. That is the same shape a real XBE arrives in,
and it means relocations are simply not a problem: by the time we see the
bytes, a jump table, a float constant in .rdata and a call to a CRT helper are
all just addresses. Functions a corpus entry calls are lifted too -- __allmul
and __ftol2 are ordinary code in .text, and lifting them is what a real port
does rather than a special case here.

Every function is `__declspec(dllexport)` (`EXP`), or /O2 would inline it into
its only caller and there would be nothing left to lift, and `__cdecl` --
arguments on the stack right to left, caller cleans, result in eax / edx:eax /
st(0). That is the ABI the recompiler's generated code already assumes, so the
harness exercises the real calling path.

Signatures drive how the harness marshals arguments and reads the result:

    ii->i   int (int, int)          uu->u   unsigned (unsigned, unsigned)
    ll->l   long long (ll, ll)      dd->d   double (double, double)
    ff->f   float (float, float)
"""

_INT_ARGS = [
    (0, 0), (1, 1), (5, 3), (-7, 2), (100, -100), (-1, -1),
    (123456, -98765), (-2147483647 - 1, 5), (2147483647, 1),
    (0x7F, 0x80), (-32768, 32767), (3, 0), (0, 3), (-5, -9),
]

_UINT_ARGS = [
    (0, 1), (1, 1), (0xFFFFFFFF, 1), (0xFFFFFFFF, 0xFFFFFFFF),
    (0x80000000, 3), (12345, 67), (0xDEADBEEF, 0x10), (7, 0x7FFFFFFF),
]

_LONG_ARGS = [
    (0, 0), (3, 5), (-7, 11), (0x100000001, 0x30), (-1, -1),
    (0x7FFFFFFFFFFFFFFF, 2), (-0x8000000000000000, 3), (0xFFFFFFFF, 0xFFFFFFFF),
]

_DBL_ARGS = [
    (1.5, 2.0), (-3.25, 0.5), (100.0, 7.0), (2.0, 1.0), (0.0, 1.0),
    (-0.0, 2.0), (1e10, 3.0), (1e-10, 7.0), (-1.0, -1.0), (0.5, 0.5),
]

_FLT_ARGS = [
    (1.5, 2.0), (-3.25, 0.5), (10.0, 4.0), (1.0, 3.0), (0.0, 2.0),
    (-7.5, -1.25), (1e5, 3.0),
]


def Fn(name, sig, why, source, args, tol=0.0):
    return {"name": name, "sig": sig, "why": why, "source": source,
            "args": args, "tol": tol}


CORPUS = [
    Fn("c_arith", "ii->i",
       "mixed integer arithmetic -- whatever /O2 does with it",
       "EXP int __cdecl c_arith(int a, int b){ int x = a*3 + (b<<2) - (a>>1);"
       " x ^= (a&b); x += (a>b)?a:b; return x*2 - 7; }", _INT_ARGS),

    Fn("c_branches", "ii->i",
       "every signed and unsigned comparison, as the compiler lays them out",
       "EXP int __cdecl c_branches(int a, int b){ int r = 0;"
       " if(a<b) r+=1; if(a<=b) r+=2; if(a==b) r+=4; if(a>=b) r+=8;"
       " if(a>b) r+=16; if((unsigned)a<(unsigned)b) r+=32;"
       " if((unsigned)a>=(unsigned)b) r+=64; return r; }", _INT_ARGS),

    Fn("c_shifts", "ii->i",
       "the rotate idiom, arithmetic vs logical shift, and the &31 masking",
       "EXP int __cdecl c_shifts(int a, int b){ unsigned u = a; int n = b & 31;"
       " return (int)((u<<n)|(u>>((32-n)&31))) + (a>>(n&15)) - (int)(u>>n); }",
       _INT_ARGS),

    Fn("c_loop", "ii->i",
       "a counted loop: a back edge, so more than one basic block",
       "EXP int __cdecl c_loop(int a, int b){ int i, acc = a;"
       " for(i = 0; i < 16; i++){ acc = acc*2 + (b^i); if(acc > 1000000)"
       " acc >>= 3; } return acc; }", _INT_ARGS),

    Fn("c_nested", "ii->i",
       "nested conditionals inside a loop -- branch layout the optimiser picks",
       "EXP int __cdecl c_nested(int a, int b){ int i, r = 0;"
       " for(i = 0; i < 8; i++){ if(((a>>i)&1) != 0){ r += b + i; }"
       " else if(((b>>i)&1) != 0){ r -= a - i; } else { r ^= i; } }"
       " return r; }", _INT_ARGS),

    Fn("c_minmax", "ii->i",
       "min/max and abs -- where the compiler reaches for cmov or setcc",
       "EXP int __cdecl c_minmax(int a, int b){ int lo = a<b?a:b, hi = a<b?b:a;"
       " int d = hi - lo; if(d < 0) d = -d; return lo + hi*3 + d; }",
       _INT_ARGS),

    Fn("c_udiv", "uu->u",
       "unsigned divide and modulo, including the by-one and by-max cases",
       "EXP unsigned __cdecl c_udiv(unsigned a, unsigned b){ unsigned d = b|1u;"
       " return (a/d) + (a%d)*3u + (a>>1)/((d&0xFFu)|1u); }", _UINT_ARGS),

    Fn("c_bits", "uu->u",
       "bit twiddling: the compiler's shift/mask lowering",
       "EXP unsigned __cdecl c_bits(unsigned a, unsigned b){"
       " unsigned x = a ^ (b<<16) ^ (b>>16);"
       " x = ((x & 0x55555555u) << 1) | ((x >> 1) & 0x55555555u);"
       " x = ((x & 0x00FF00FFu) << 8) | ((x >> 8) & 0x00FF00FFu);"
       " return x + (a & ~b); }", _UINT_ARGS),

    Fn("c_mul64", "ll->l",
       "64-bit multiply and shift -- edx:eax pairs and the CRT helper shapes",
       "EXP long long __cdecl c_mul64(long long a, long long b){"
       " return a*b - (a>>3) + (b<<5); }", _LONG_ARGS),

    Fn("c_add64", "ll->l",
       "64-bit add/subtract: add/adc and sub/sbb across the halves",
       "EXP long long __cdecl c_add64(long long a, long long b){"
       " long long s = a + b, d = a - b; return s ^ (d << 1); }", _LONG_ARGS),

    Fn("c_cmp64", "ll->l",
       "64-bit comparison, which lowers to a two-step compare on the halves",
       "EXP long long __cdecl c_cmp64(long long a, long long b){ long long r = 0;"
       " if(a < b) r |= 1; if(a == b) r |= 2; if(a > b) r |= 4;"
       " if((unsigned long long)a < (unsigned long long)b) r |= 8;"
       " return r; }", _LONG_ARGS),

    Fn("c_dwork", "dd->d",
       "double arithmetic through the x87 stack",
       "EXP double __cdecl c_dwork(double a, double b){"
       " return a*b + a/b - b*b + a; }", _DBL_ARGS),

    Fn("c_dmix", "dd->d",
       "doubles with a comparison and a branch -- fcom feeding a real jump",
       "EXP double __cdecl c_dmix(double a, double b){ double r = a;"
       " if(a > b) r = a - b; else if(a < b) r = b - a; else r = a + b;"
       " return r*a - b; }", _DBL_ARGS),

    Fn("c_fwork", "ff->f",
       "float arithmetic -- single precision through the same x87 stack",
       "EXP float __cdecl c_fwork(float a, float b){"
       " return a*b + b - a/b + a*a; }", _FLT_ARGS),

    Fn("c_bittest_loop", "ii->i",
       "the minimal shape that broke: a loop over bit tests. /O2 unrolls it "
       "into `test dl, 1<<i` + `je`, and the last iteration becomes "
       "`test dl, dl` + `jns` -- an 8-bit sign test",
       "EXP int __cdecl c_bittest_loop(int a, int b){ int i, r = 0;"
       " for(i = 0; i < 8; i++){ if(((a>>i)&1) != 0){ r += b + i; } }"
       " return r; }", _INT_ARGS),

    # ── only possible once we lift a linked image ───────────────────────────

    Fn("c_switch", "ii->i",
       "a switch: /O2 builds a jump table in .rdata and dispatches through it",
       "EXP int __cdecl c_switch(int a, int b){ switch(a & 7){"
       " case 0: return b+1;   case 1: return b*2;  case 2: return b-7;"
       " case 3: return b^0x5A; case 4: return b<<2; case 5: return b>>1;"
       " case 6: return -b;    default: return b+100; } }", _INT_ARGS),

    Fn("c_switch_sparse", "ii->i",
       "a sparse switch, which the compiler may lower to a chain instead",
       "EXP int __cdecl c_switch_sparse(int a, int b){ switch(a){"
       " case 0: return b;     case 5: return b*3;   case 17: return b-1;"
       " case 100: return b^7; case -3: return b+42; default: return b>>2; } }",
       _INT_ARGS),

    Fn("c_fconst", "dd->d",
       "float literals, which live in .rdata and are read back at runtime",
       "EXP double __cdecl c_fconst(double a, double b){"
       " return a*3.14159265358979 + b*0.5 - 1.25; }", _DBL_ARGS),

    Fn("c_mul64_helper", "ll->l",
       "64-bit multiply, which MSVC lowers to a call to __allmul -- so the "
       "CRT helper gets lifted too",
       "EXP long long __cdecl c_mul64_helper(long long a, long long b){"
       " return a*b; }", _LONG_ARGS),

]

# Deliberately absent: float-to-int. MSVC lowers it to __ftol2, whose modern
# LIBCMT implementation branches on __isa_available and, on the fast path, uses
# `fisttp` -- an SSE3 instruction. The Xbox is a Pentium III: no SSE3, and its
# XDK CRT's __ftol is plain x87. Comparing against the host's helper would be
# measuring this machine's CPU dispatch rather than the lifter, and the two
# sides cannot even agree on which branch to take (the native side has a CRT
# that ran its startup; the lifted side reads the image's initial value).
#
# The conformance runner reports the unlifted `fisttp` if such a function is
# ever pulled in again, so this is a documented gap rather than a silent one.
