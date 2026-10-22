/**
 * NV2A vertex program interpreter. See nv2a_vsh_interp.h for why it exists.
 *
 * Encoding. An instruction is four dwords; dword 0 is unused. Fields, as
 * (dword, lowest bit, width):
 *
 *   ILU op        1 25 3      MAC op        1 21 4
 *   const index   1 13 8      input index   1  9 4   (shared by A, B, C)
 *   A negate      1  8 1      A swizzle     1  0 8   (x y z w, 2 bits each,
 *   A temp        2 28 4      A mux         2 26 2    x highest)
 *   B negate      2 25 1      B swizzle     2 17 8
 *   B temp        2 13 4      B mux         2 11 2
 *   C negate      2 10 1      C swizzle     2  2 8
 *   C temp        2 0 2 (high) : 3 30 2 (low)          C mux 3 28 2
 *   MAC temp mask 3 24 4      temp dest     3 20 4
 *   ILU temp mask 3 16 4      out mask      3 12 4
 *   out to o[]    3 11 1      out address   3  3 8   (0: to c[])
 *   out from ILU  3  2 1      a0.x relative 3  1 1   final 3 0 1
 *
 * Masks are x=8 y=4 z=2 w=1. A source mux of 1 reads a temp, 2 an input,
 * 3 a constant. Temp 12 is oPos. When an instruction carries both a MAC and
 * an ILU op, the ILU's temp write goes to R1 whatever the temp field says,
 * and both units read their sources before either writes.
 *
 * The layout is checked against real programs rather than taken on trust:
 * RECOMP_VSH_DUMP disassembles each program the title uploads, and an Xbox
 * D3D program is recognisable -- DP4s against the matrix constants, ending in
 * the runtime's screen-space epilogue (RCC of R12.w, then a MAD into oPos).
 */
#include "nv2a_vsh_interp.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static uint32_t s_program[NV2A_VSH_SLOTS][4];
static float    s_const[NV2A_VSH_CONSTANTS][4];
static uint32_t s_load_slot, s_load_word, s_start_slot;
static uint32_t s_const_load, s_const_word;
static uint32_t s_cxt_write;
/* RE-SoT: bumped whenever the program memory or the start slot, respectively
 * a constant, changes -- so the hardware path can tell without rehashing. */
static uint32_t s_prog_gen = 1, s_const_gen = 1;

static uint32_t field(const uint32_t *ins, int dw, int lo, int width)
{
    return (ins[dw] >> lo) & ((1u << width) - 1u);
}

/* RE-SoT: decode once per changed program, not once per vertex. Both native
 * renderers use this CPU interpreter; sources retain paired MAC/ILU ordering. */
typedef struct { uint32_t mux, reg, swz, neg; } VshSource;
typedef struct {
    VshSource src[3];
    uint32_t mac, ilu, mac_mask, ilu_mask, tdst, omask, oaddr;
    uint32_t input, constant, relative, out_ilu, out_reg, final;
} VshDecoded;
static VshDecoded s_decoded[NV2A_VSH_SLOTS];
static uint32_t s_decoded_gen, s_input_mask;
static void prepare_program(void)
{
    if (s_decoded_gen == s_prog_gen) return;
    s_input_mask = 0;
    for (uint32_t slot = s_start_slot; slot < NV2A_VSH_SLOTS; ++slot) {
        const uint32_t *ins = s_program[slot];
        VshDecoded *d = &s_decoded[slot];
        d->mac = field(ins,1,21,4); d->ilu = field(ins,1,25,3);
        d->mac_mask = field(ins,3,24,4); d->ilu_mask = field(ins,3,16,4);
        d->tdst = field(ins,3,20,4); d->omask = field(ins,3,12,4);
        d->oaddr = field(ins,3,3,8); d->input = field(ins,1,9,4);
        d->constant = field(ins,1,13,8); d->relative = field(ins,3,1,1);
        d->out_ilu = field(ins,3,2,1); d->out_reg = field(ins,3,11,1);
        d->final = field(ins,3,0,1);
        d->src[0] = (VshSource){field(ins,2,26,2),field(ins,2,28,4),field(ins,1,0,8),field(ins,1,8,1)};
        d->src[1] = (VshSource){field(ins,2,11,2),field(ins,2,13,4),field(ins,2,17,8),field(ins,2,25,1)};
        d->src[2] = (VshSource){field(ins,3,28,2),(field(ins,2,0,2)<<2)|field(ins,3,30,2),field(ins,2,2,8),field(ins,2,10,1)};
        if ((d->mac && d->src[0].mux == 2) ||
            (d->mac >= 2 && d->mac <= 12 && d->mac != 3 && d->src[1].mux == 2) ||
            ((d->ilu || d->mac == 3 || d->mac == 4) && d->src[2].mux == 2))
            s_input_mask |= 1u << d->input;
        if (d->final) break;
    }
    s_decoded_gen = s_prog_gen;
}
uint32_t nv2a_vsh_input_mask(void) { prepare_program(); return s_input_mask; }

/* ---- uploads ------------------------------------------------------------ */

void nv2a_vsh_set_load_slot(uint32_t slot)
{
    s_load_slot = slot;
    s_load_word = 0;
}

void nv2a_vsh_program_word(uint32_t word)
{
    if (s_load_slot < NV2A_VSH_SLOTS
        && s_program[s_load_slot][s_load_word] != word) {
        s_program[s_load_slot][s_load_word] = word;
        s_prog_gen++;
    }
    if (++s_load_word == 4) {
        s_load_word = 0;
        s_load_slot++;
    }
}

void nv2a_vsh_set_start_slot(uint32_t slot)
{
    if (s_start_slot != slot) {
        s_start_slot = slot;
        s_prog_gen++;
    }
}
void nv2a_vsh_set_cxt_write(uint32_t enable) { s_cxt_write = enable; }

void nv2a_vsh_set_constant_load(uint32_t index)
{
    s_const_load = index;
    s_const_word = 0;
}

void nv2a_vsh_constant_word(uint32_t word)
{
    /* RE-SoT: identical uploads must still advance the guest cursor, but
     * need no new 3 KB draw snapshot/GPU uniform upload on either host. */
    nv2a_vsh_constant_component(s_const_load,s_const_word,word);
    if (++s_const_word == 4) {
        s_const_word = 0;
        s_const_load++;
    }
}

/* RE-SoT: bulk uploads use bytewise equality/copy, preserving every bit and
 * partial cursor. Invalid slots still advance and can wrap just as scalar
 * uploads do. Generation is an invalidation token, never a word count. */
static void vsh_upload_words(void *dest,uint32_t slots,uint32_t *slot,uint32_t *component,
                             const uint32_t *words,uint32_t count,uint32_t *generation)
{
    while (count) {
        uint64_t pos = (uint64_t)*slot*4 + *component;
        uint64_t wrap = (1ull<<34)-pos;
        uint32_t chunk = wrap < count ? (uint32_t)wrap : count;
        if (pos < (uint64_t)slots*4) {
            uint32_t valid = slots*4-(uint32_t)pos;
            unsigned char *at = (unsigned char *)dest+(size_t)pos*4;
            if (valid > chunk) valid = chunk;
            if (memcmp(at,words,(size_t)valid*4)) {
                memcpy(at,words,(size_t)valid*4); ++*generation;
            }
        }
        pos += chunk; *slot = (uint32_t)(pos>>2); *component = (uint32_t)pos&3;
        words += chunk; count -= chunk;
    }
}
void nv2a_vsh_program_words(const uint32_t *words,uint32_t count)
{
    /* RE-SoT: same backing state as SET_TRANSFORM_PROGRAM scalar writes. */
    vsh_upload_words(s_program,NV2A_VSH_SLOTS,&s_load_slot,&s_load_word,words,count,&s_prog_gen);
}
void nv2a_vsh_constant_words(const uint32_t *words,uint32_t count)
{
    /* RE-SoT: same backing state as SET_TRANSFORM_CONSTANT scalar writes. */
    vsh_upload_words(s_const,NV2A_VSH_CONSTANTS,&s_const_load,&s_const_word,words,count,&s_const_gen);
}

void nv2a_vsh_set_constant(uint32_t index, const float v[4])
{
    /* RE-SoT: compare raw bits: signed zero and NaN payloads are shader data. */
    if (index < NV2A_VSH_CONSTANTS && memcmp(s_const[index],v,sizeof s_const[index])) {
        memcpy(s_const[index], v, sizeof s_const[index]);
        s_const_gen++;
    }
}

void nv2a_vsh_set_instruction(uint32_t slot, const uint32_t words[4])
{
    if (slot < NV2A_VSH_SLOTS) {
        memcpy(s_program[slot], words, sizeof s_program[slot]);
        s_prog_gen++;
    }
}

/* ---- disassembly (RECOMP_VSH_DUMP) --------------------------------------- */

static const char *const k_mac[16] = {
    "nop", "mov", "mul", "add", "mad", "dp3", "dph", "dp4",
    "dst", "min", "max", "slt", "sge", "arl", "mac14", "mac15"
};
static const char *const k_ilu[8] = {
    "nop", "mov", "rcp", "rcc", "rsq", "exp", "log", "lit"
};

static void dis_src(char *b, size_t n, const uint32_t *ins, int which)
{
    static const char sw[] = "xyzw";
    uint32_t neg, swz, mux, reg;

    if (which == 0) {
        neg = field(ins, 1, 8, 1); swz = field(ins, 1, 0, 8);
        mux = field(ins, 2, 26, 2); reg = field(ins, 2, 28, 4);
    } else if (which == 1) {
        neg = field(ins, 2, 25, 1); swz = field(ins, 2, 17, 8);
        mux = field(ins, 2, 11, 2); reg = field(ins, 2, 13, 4);
    } else {
        neg = field(ins, 2, 10, 1); swz = field(ins, 2, 2, 8);
        mux = field(ins, 3, 28, 2);
        reg = (field(ins, 2, 0, 2) << 2) | field(ins, 3, 30, 2);
    }
    if (mux == 1)
        snprintf(b, n, "%sR%u", neg ? "-" : "", reg);
    else if (mux == 2)
        snprintf(b, n, "%sv%u", neg ? "-" : "", field(ins, 1, 9, 4));
    else
        snprintf(b, n, "%sc[%s%u]", neg ? "-" : "",
                 field(ins, 3, 1, 1) ? "a0.x+" : "", field(ins, 1, 13, 8));
    {
        size_t l = strlen(b);
        if (l + 6 < n)
            snprintf(b + l, n - l, ".%c%c%c%c", sw[(swz >> 6) & 3],
                     sw[(swz >> 4) & 3], sw[(swz >> 2) & 3], sw[swz & 3]);
    }
}

static void dump_program(uint32_t start)
{
    uint32_t s;
    fprintf(stderr, "  [VSH] program at slot %u:\n", start);
    for (s = start; s < NV2A_VSH_SLOTS; s++) {
        const uint32_t *ins = s_program[s];
        char a[40], bb[40], c[40];
        dis_src(a, sizeof a, ins, 0);
        dis_src(bb, sizeof bb, ins, 1);
        dis_src(c, sizeof c, ins, 2);
        fprintf(stderr, "  [VSH] %3u %-4s %-4s A=%s B=%s C=%s  R%u mac%X ilu%X"
                " out%s%u m%X%s%s\n", s,
                k_mac[field(ins, 1, 21, 4)], k_ilu[field(ins, 1, 25, 3)],
                a, bb, c, field(ins, 3, 20, 4), field(ins, 3, 24, 4),
                field(ins, 3, 16, 4), field(ins, 3, 11, 1) ? "o" : "c",
                field(ins, 3, 3, 8), field(ins, 3, 12, 4),
                field(ins, 3, 2, 1) ? " ilu" : " mac",
                field(ins, 3, 0, 1) ? " FINAL" : "");
        if (field(ins, 3, 0, 1))
            break;
    }
    fflush(stderr);
}

const float *nv2a_vsh_constant(uint32_t index)
{
    return s_const[index < NV2A_VSH_CONSTANTS ? index : 0];
}

void nv2a_vsh_constant_component(uint32_t index, uint32_t comp, uint32_t word)
{
    if (index < NV2A_VSH_CONSTANTS && comp < 4) {
        /* RE-SoT: viewport words are frequently reissued unchanged. Keep
         * generations stable without float equality or aliasing violations. */
        uint32_t previous;
        memcpy(&previous,&s_const[index][comp],4);
        if (previous==word) return;
        memcpy(&s_const[index][comp], &word, 4);
        s_const_gen++;
    }
}

/* ---- execution ----------------------------------------------------------- */

typedef struct { float v[4]; } vec4;

static vec4 read_src(const VshDecoded *ins, int which,
                     const float in[NV2A_VSH_INPUTS][4],
                     const vec4 *temp, const vec4 *opos, int a0)
{
    uint32_t neg = ins->src[which].neg, swz = ins->src[which].swz;
    uint32_t mux = ins->src[which].mux, reg = ins->src[which].reg;
    const float *s;
    vec4 r;

    if (mux == 1)
        s = (reg == 12) ? opos->v : (reg < 12 ? temp[reg].v : temp[0].v);
    else if (mux == 2)
        s = in[ins->input];
    else {
        int ci = (int)ins->constant;
        if (ins->relative)
            ci += a0;
        if (ci < 0 || ci >= NV2A_VSH_CONSTANTS)
            ci = 0;
        s = s_const[ci];
    }
    r.v[0] = s[(swz >> 6) & 3];
    r.v[1] = s[(swz >> 4) & 3];
    r.v[2] = s[(swz >> 2) & 3];
    r.v[3] = s[swz & 3];
    if (neg) {
        r.v[0] = -r.v[0]; r.v[1] = -r.v[1];
        r.v[2] = -r.v[2]; r.v[3] = -r.v[3];
    }
    return r;
}

static void write_masked(float *dst, const vec4 *src, uint32_t mask)
{
    if (mask & 8) dst[0] = src->v[0];
    if (mask & 4) dst[1] = src->v[1];
    if (mask & 2) dst[2] = src->v[2];
    if (mask & 1) dst[3] = src->v[3];
}

static vec4 splat(float f)
{
    vec4 r;
    r.v[0] = r.v[1] = r.v[2] = r.v[3] = f;
    return r;
}

static vec4 run_mac(uint32_t op, vec4 a, vec4 b, vec4 c, int *a0)
{
    vec4 r = a;
    int i;

    switch (op) {
    case 1: break;                                            /* mov */
    case 2: for (i = 0; i < 4; i++) r.v[i] = a.v[i] * b.v[i]; break;
    case 3: for (i = 0; i < 4; i++) r.v[i] = a.v[i] + c.v[i]; break;
    case 4: for (i = 0; i < 4; i++) r.v[i] = a.v[i] * b.v[i] + c.v[i]; break;
    case 5: r = splat(a.v[0]*b.v[0] + a.v[1]*b.v[1] + a.v[2]*b.v[2]); break;
    case 6: r = splat(a.v[0]*b.v[0] + a.v[1]*b.v[1] + a.v[2]*b.v[2]
                      + b.v[3]); break;                        /* dph */
    case 7: r = splat(a.v[0]*b.v[0] + a.v[1]*b.v[1] + a.v[2]*b.v[2]
                      + a.v[3]*b.v[3]); break;
    case 8: r.v[0] = 1.0f; r.v[1] = a.v[1] * b.v[1];            /* dst */
            r.v[2] = a.v[2]; r.v[3] = b.v[3]; break;
    case 9: for (i = 0; i < 4; i++) r.v[i] = a.v[i] < b.v[i] ? a.v[i] : b.v[i]; break;
    case 10: for (i = 0; i < 4; i++) r.v[i] = a.v[i] >= b.v[i] ? a.v[i] : b.v[i]; break;
    case 11: for (i = 0; i < 4; i++) r.v[i] = a.v[i] < b.v[i] ? 1.0f : 0.0f; break;
    case 12: for (i = 0; i < 4; i++) r.v[i] = a.v[i] >= b.v[i] ? 1.0f : 0.0f; break;
    case 13: *a0 = (int)floorf(a.v[0] + 0.001f); break;         /* arl */
    default: break;
    }
    return r;
}

static vec4 run_ilu(uint32_t op, vec4 c)
{
    float x = c.v[0];
    vec4 r = c;

    switch (op) {
    case 1: break;                                            /* mov */
    case 2: r = splat(x == 0.0f ? INFINITY : 1.0f / x); break;  /* rcp */
    case 3: {                                                  /* rcc */
        float f = 1.0f / x;
        if (fabsf(f) < 5.42101e-20f) f = f < 0 ? -5.42101e-20f : 5.42101e-20f;
        if (fabsf(f) > 1.884467e19f) f = f < 0 ? -1.884467e19f : 1.884467e19f;
        r = splat(f);
        break;
    }
    case 4: r = splat(1.0f / sqrtf(fabsf(x))); break;           /* rsq */
    case 5: {                                                  /* exp */
        float fl = floorf(x);
        r.v[0] = exp2f(fl); r.v[1] = x - fl; r.v[2] = exp2f(x); r.v[3] = 1.0f;
        break;
    }
    case 6: {                                                  /* log */
        float ax = fabsf(x);
        if (ax == 0.0f) {
            r.v[0] = r.v[2] = -INFINITY; r.v[1] = 1.0f;
        } else {
            float e = floorf(log2f(ax));
            r.v[0] = e; r.v[1] = ax / exp2f(e); r.v[2] = log2f(ax);
        }
        r.v[3] = 1.0f;
        break;
    }
    case 7: {                                                  /* lit */
        float nl = c.v[0] > 0.0f ? c.v[0] : 0.0f;
        float nh = c.v[1] > 0.0f ? c.v[1] : 0.0f;
        float p = c.v[3] < -127.9961f ? -127.9961f
                : (c.v[3] > 127.9961f ? 127.9961f : c.v[3]);
        r.v[0] = 1.0f; r.v[1] = nl;
        r.v[2] = c.v[0] > 0.0f ? powf(nh, p) : 0.0f; r.v[3] = 1.0f;
        break;
    }
    default: break;
    }
    return r;
}

int nv2a_vsh_run(const float in[NV2A_VSH_INPUTS][4], Nv2aVshOutput *out)
{
    static int dump = -1;
    static uint32_t dumped[16];
    static int ndumped;
    vec4 temp[12], opos;
    float outregs[13][4];
    int a0 = 0;
    uint32_t s;

    if (dump < 0)
        dump = getenv("RECOMP_VSH_DUMP") != NULL;
    if (dump && ndumped < 16) {
        /* By content: titles reload different programs into the same slot. */
        uint32_t h = 2166136261u, t;
        int i, seen = 0;
        for (t = s_start_slot; t < NV2A_VSH_SLOTS; t++) {
            for (i = 0; i < 4; i++)
                h = (h ^ s_program[t][i]) * 16777619u;
            if (field(s_program[t], 3, 0, 1))
                break;
        }
        for (i = 0; i < ndumped; i++)
            if (dumped[i] == h) seen = 1;
        if (!seen) {
            dumped[ndumped++] = h;
            dump_program(s_start_slot);
        }
    }

    memset(temp, 0, sizeof temp);
    prepare_program(); /* RE-SoT: cached decode and live constant reads. */
    memset(&opos, 0, sizeof opos);
    memset(outregs, 0, sizeof outregs);
    outregs[3][3] = outregs[4][3] = 1.0f;      /* colours default opaque */
    /* Unwritten texture coordinates are (0,0,0,1), as xemu initialises them:
     * a projective stage divides by q, and q = 0 would put every texel of an
     * unwritten stage at infinity. */
    outregs[9][3] = outregs[10][3] = outregs[11][3] = outregs[12][3] = 1.0f;

    for (s = s_start_slot; s < NV2A_VSH_SLOTS; s++) {
        const VshDecoded *ins = &s_decoded[s];
        uint32_t mac = ins->mac, ilu = ins->ilu;
        uint32_t mac_mask = ins->mac_mask, ilu_mask = ins->ilu_mask;
        uint32_t tdst = ins->tdst, omask = ins->omask, oaddr = ins->oaddr;
        /* RE-SoT: skip unused operands (MOV/ARL need only A, ADD A+C,
         * ILU only C), but read every used source before either unit writes. */
        vec4 a = {{0}}, b = {{0}}, c = {{0}};
        if (mac) a = read_src(ins,0,in,temp,&opos,a0);
        if (mac >= 2 && mac <= 12 && mac != 3) b = read_src(ins,1,in,temp,&opos,a0);
        if (ilu || mac == 3 || mac == 4) c = read_src(ins,2,in,temp,&opos,a0);
        vec4 mres = {{0, 0, 0, 0}}, ires = {{0, 0, 0, 0}};

        if (mac)
            mres = run_mac(mac, a, b, c, &a0);
        if (ilu)
            ires = run_ilu(ilu, c);

        if (mac && mac != 13 && mac_mask) {
            float *d = tdst == 12 ? opos.v : (tdst < 12 ? temp[tdst].v : NULL);
            if (d) write_masked(d, &mres, mac_mask);
        }
        if (ilu && ilu_mask) {
            /* Paired with any MAC op, the ILU can only write R1 -- even when
             * the MAC half writes no temp at all. The D3D epilogue is exactly
             * that: `mul o[0].xyz` beside `rcc R1.x`, then `mad` with R1.x.
             * Sending the rcc to the temp field (R7 there) left R1.x at 0 and
             * put every vertex of every 3D batch at c[59]. */
            uint32_t it = mac ? 1u : tdst;
            float *d = it == 12 ? opos.v : (it < 12 ? temp[it].v : NULL);
            if (d) write_masked(d, &ires, ilu_mask);
        }
        if (omask) {
            const vec4 *src = ins->out_ilu ? &ires : &mres;
            if (!ins->out_reg) {                  /* to c[] */
                if (s_cxt_write && oaddr < NV2A_VSH_CONSTANTS) {
                    write_masked(s_const[oaddr], src, omask);
                    s_const_gen++;
                }
            } else if (oaddr == 0) {
                write_masked(opos.v, src, omask);
            } else if (oaddr < 13) {
                write_masked(outregs[oaddr], src, omask);
            }
        }
        if (ins->final) {
            memcpy(out->pos, opos.v, sizeof out->pos);
            memcpy(out->d0, outregs[3], sizeof out->d0);
            memcpy(out->d1, outregs[4], sizeof out->d1);
            memcpy(out->fog, outregs[5], sizeof out->fog);
            memcpy(out->tex[0], outregs[9], sizeof out->tex[0]);
            memcpy(out->tex[1], outregs[10], sizeof out->tex[1]);
            memcpy(out->tex[2], outregs[11], sizeof out->tex[2]);
            memcpy(out->tex[3], outregs[12], sizeof out->tex[3]);
            return 1;
        }
    }
    return 0;
}

/* ---- RE-SoT: translation to HLSL ------------------------------------------
 *
 * The interpreter above was the executor's largest cost in a 3D scene (9-16 ms
 * a frame in the PoP demo's levels). The Direct3D 11 path runs the same
 * program on the host GPU instead: the text emitted here is the body of a
 * vertex shader, one block per instruction, with the semantics of
 * nv2a_vsh_run kept line for line -- sources read before either unit writes,
 * the paired ILU result going to R1, masks as swizzles.
 *
 * Names the body expects from its caller: float4 v[16] (inputs), R[13]
 * (temps, R[12] is oPos), o[13] (outputs), c[192] (constants), int a0, and
 * the helpers vsh_rcp, vsh_rcc, vsh_log, vsh_lit, vsh_cidx. */

uint32_t nv2a_vsh_program_generation(void) { return s_prog_gen; }
uint32_t nv2a_vsh_constant_generation(void) { return s_const_gen; }
const float *nv2a_vsh_constants(void) { return &s_const[0][0]; }

/* RE-SoT: layout read by vs_uber (nv2a_hw_d3d11.inc), one uint4 each:
 *   x: mac 0-3, ilu 4-6, MAC temp mask 7-10, ILU temp mask 11-14,
 *      temp dest 15-18, out mask 19-22, out from ILU 23, out to o[] 24,
 *      a0.x relative 25, final 26
 *   y: out address 0-7, constant index 8-15, input vertex slot 16-18
 *   z: source A bits 0-15, source B bits 16-31; w: source C bits 0-15
 * A source: mux 0-1, temp 2-5, swizzle 6-13, negate 14. The semantics are
 * nv2a_vsh_run's: sources read first, a paired ILU writing R1. */
static uint32_t s_gpu_words[NV2A_VSH_SLOTS][4], s_gpu_count, s_gpu_gen, s_gpu_cxt;
static uint8_t s_gpu_inputs[NV2A_VSH_GPU_INPUTS];
static uint32_t s_gpu_ninputs;
static uint32_t gpu_src(const VshSource *s)
{
    return (s->mux & 3) | (s->reg & 15) << 2 | (s->swz & 255) << 6 | (s->neg & 1) << 14;
}
uint32_t nv2a_vsh_pack_gpu(const uint32_t **words, const uint8_t **inputs, uint32_t *ninputs)
{
    if (s_gpu_gen != s_prog_gen || s_gpu_cxt != s_cxt_write) {
        uint8_t slot_of[NV2A_VSH_INPUTS];
        uint32_t s, n = 0, ok = 1, mask;
        prepare_program();
        mask = s_input_mask;
        s_gpu_ninputs = 0;
        memset(slot_of, 0, sizeof slot_of);
        for (s = 0; s < NV2A_VSH_INPUTS; s++) {
            if (!(mask & (1u << s))) continue;
            if (s_gpu_ninputs == NV2A_VSH_GPU_INPUTS) { ok = 0; break; }
            slot_of[s] = (uint8_t)s_gpu_ninputs;
            s_gpu_inputs[s_gpu_ninputs++] = (uint8_t)s;
        }
        for (s = s_start_slot; ok && s < NV2A_VSH_SLOTS; s++) {
            const VshDecoded *d = &s_decoded[s];
            uint32_t *w = s_gpu_words[n++];
            if (d->omask && !d->out_reg && s_cxt_write) { ok = 0; break; }   /* writes c[] */
            w[0] = d->mac | d->ilu << 4 | d->mac_mask << 7 | d->ilu_mask << 11 |
                   d->tdst << 15 | d->omask << 19 | d->out_ilu << 23 | d->out_reg << 24 |
                   d->relative << 25 | d->final << 26;
            w[1] = d->oaddr | d->constant << 8 | (uint32_t)slot_of[d->input] << 16;
            w[2] = gpu_src(&d->src[0]) | gpu_src(&d->src[1]) << 16;
            w[3] = gpu_src(&d->src[2]);
            if (d->final) break;
        }
        if (!ok || !n || !(s_gpu_words[n - 1][0] & (1u << 26))) n = 0;
        s_gpu_count = n;
        s_gpu_gen = s_prog_gen; s_gpu_cxt = s_cxt_write;
    }
    *words = &s_gpu_words[0][0]; *inputs = s_gpu_inputs; *ninputs = s_gpu_ninputs;
    return s_gpu_count;
}

/* Hash of the program that would run now. *gpu_ok is cleared when it cannot
 * be translated: no FINAL instruction, or it writes constants. */
uint32_t nv2a_vsh_program_key(int *gpu_ok)
{
    uint32_t h = 2166136261u, s;
    int i, ok = 0;

    for (s = s_start_slot; s < NV2A_VSH_SLOTS; s++) {
        const uint32_t *ins = s_program[s];
        for (i = 1; i < 4; i++)
            h = (h ^ ins[i]) * 16777619u;
        if (field(ins, 3, 12, 4) && !field(ins, 3, 11, 1) && s_cxt_write) {
            ok = 0;                                  /* writes c[] */
            break;
        }
        if (field(ins, 3, 0, 1)) {
            ok = 1;
            break;
        }
    }
    *gpu_ok = ok;
    return h;
}

static void hl_mask(char *b, uint32_t mask)
{
    int n = 0;
    if (mask & 8) b[n++] = 'x';
    if (mask & 4) b[n++] = 'y';
    if (mask & 2) b[n++] = 'z';
    if (mask & 1) b[n++] = 'w';
    b[n] = 0;
}

static void hl_src(char *b, size_t n, const uint32_t *ins, int which)
{
    static const char sw[] = "xyzw";
    uint32_t neg, swz, mux, reg;
    char r[48];

    if (which == 0) {
        neg = field(ins, 1, 8, 1); swz = field(ins, 1, 0, 8);
        mux = field(ins, 2, 26, 2); reg = field(ins, 2, 28, 4);
    } else if (which == 1) {
        neg = field(ins, 2, 25, 1); swz = field(ins, 2, 17, 8);
        mux = field(ins, 2, 11, 2); reg = field(ins, 2, 13, 4);
    } else {
        neg = field(ins, 2, 10, 1); swz = field(ins, 2, 2, 8);
        mux = field(ins, 3, 28, 2);
        reg = (field(ins, 2, 0, 2) << 2) | field(ins, 3, 30, 2);
    }
    if (mux == 1)
        snprintf(r, sizeof r, "R[%u]", reg <= 12 ? reg : 0u);
    else if (mux == 2)
        snprintf(r, sizeof r, "v[%u]", field(ins, 1, 9, 4));
    else if (field(ins, 3, 1, 1))
        snprintf(r, sizeof r, "c[vsh_cidx(a0 + %u)]", field(ins, 1, 13, 8));
    else {
        uint32_t ci = field(ins, 1, 13, 8);
        snprintf(r, sizeof r, "c[%u]", ci < NV2A_VSH_CONSTANTS ? ci : 0u);
    }
    snprintf(b, n, "(%s%s.%c%c%c%c)", neg ? "-" : "", r, sw[(swz >> 6) & 3],
             sw[(swz >> 4) & 3], sw[(swz >> 2) & 3], sw[swz & 3]);
}

/* Returns the number of bytes written, or 0 if the program does not fit or
 * has no end. */
size_t nv2a_vsh_emit_hlsl(char *dst, size_t cap)
{
    static const char *const mac_expr[16] = {
        "0", "a", "a * b", "a + cc", "a * b + cc",
        "dot(a.xyz, b.xyz).xxxx", "(dot(a.xyz, b.xyz) + b.w).xxxx",
        "dot(a, b).xxxx", "float4(1.0, a.y * b.y, a.z, b.w)",
        "float4(a.x < b.x ? a.x : b.x, a.y < b.y ? a.y : b.y,"
        " a.z < b.z ? a.z : b.z, a.w < b.w ? a.w : b.w)",
        "float4(a.x >= b.x ? a.x : b.x, a.y >= b.y ? a.y : b.y,"
        " a.z >= b.z ? a.z : b.z, a.w >= b.w ? a.w : b.w)",
        "float4(a.x < b.x ? 1.0 : 0.0, a.y < b.y ? 1.0 : 0.0,"
        " a.z < b.z ? 1.0 : 0.0, a.w < b.w ? 1.0 : 0.0)",
        "float4(a.x >= b.x ? 1.0 : 0.0, a.y >= b.y ? 1.0 : 0.0,"
        " a.z >= b.z ? 1.0 : 0.0, a.w >= b.w ? 1.0 : 0.0)",
        "a", "a", "a"
    };
    static const char *const ilu_expr[8] = {
        "0", "cc", "vsh_rcp(cc.x).xxxx", "vsh_rcc(cc.x).xxxx",
        "(1.0 / sqrt(abs(cc.x))).xxxx",
        "float4(exp2(floor(cc.x)), cc.x - floor(cc.x), exp2(cc.x), 1.0)",
        "vsh_log(cc)", "vsh_lit(cc)"
    };
    size_t len = 0;
    uint32_t s;

#define HL(...) do { int w_ = snprintf(dst + len, cap - len, __VA_ARGS__); \
        if (w_ < 0 || (size_t)w_ >= cap - len) return 0; \
        len += (size_t)w_; } while (0)
    for (s = s_start_slot; s < NV2A_VSH_SLOTS; s++) {
        const uint32_t *ins = s_program[s];
        uint32_t mac = field(ins, 1, 21, 4), ilu = field(ins, 1, 25, 3);
        uint32_t mac_mask = field(ins, 3, 24, 4), ilu_mask = field(ins, 3, 16, 4);
        uint32_t tdst = field(ins, 3, 20, 4);
        uint32_t omask = field(ins, 3, 12, 4), oaddr = field(ins, 3, 3, 8);
        char a[64], b[64], c[64], m[8];

        hl_src(a, sizeof a, ins, 0);
        hl_src(b, sizeof b, ins, 1);
        hl_src(c, sizeof c, ins, 2);
        HL(" { float4 a = %s, b = %s, cc = %s;\n", a, b, c);
        HL("   float4 m = %s; float4 l = %s;\n", mac_expr[mac], ilu_expr[ilu]);
        if (mac == 13)
            HL("   a0 = (int)floor(a.x + 0.001);\n");
        if (mac && mac != 13 && mac_mask && tdst <= 12) {
            hl_mask(m, mac_mask);
            HL("   R[%u].%s = m.%s;\n", tdst, m, m);
        }
        if (ilu && ilu_mask) {
            uint32_t it = mac ? 1u : tdst;
            if (it <= 12) {
                hl_mask(m, ilu_mask);
                HL("   R[%u].%s = l.%s;\n", it, m, m);
            }
        }
        if (omask && field(ins, 3, 11, 1) && oaddr < 13) {
            hl_mask(m, omask);
            if (oaddr == 0)
                HL("   R[12].%s = %s.%s;\n", m, field(ins, 3, 2, 1) ? "l" : "m", m);
            else
                HL("   o[%u].%s = %s.%s;\n", oaddr, m,
                   field(ins, 3, 2, 1) ? "l" : "m", m);
        }
        HL(" }\n");
        if (field(ins, 3, 0, 1))
            return len;
    }
#undef HL
    return 0;
}
