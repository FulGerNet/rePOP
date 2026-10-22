/* RE-SoT: pure payload packets bypass per-word state dispatch. Both checked
 * targets use the same NV2A upload protocol. Never consume a state transition,
 * an unvalidated RAM range, a traced packet or a survey word here. */
static uint64_t s_pb_payload_words, s_pb_payload_batches;
static int s_pb_payload_enabled = -1; /* RE-SoT: optional same-session A/B control. */
uint32_t nv2a_pb_exec_payload(uint32_t subch, uint32_t method,
                            const uint32_t *data, uint32_t count, int noninc)
{
    uint32_t take = count, i;
    if (s_pb_payload_enabled < 0) {
        const char *e = getenv("RESOT_PB_PAYLOAD_BATCH");
        s_pb_payload_enabled = !(e && *e == '0') && !getenv("RECOMP_PB_EXEC_VERBOSE");
    }
    if (!s_pb_payload_enabled || s_ftrace == 2 || subch || (method & 3) || !count) return 0;
    if (method >= 0x0B00 && method < 0x0C00) {
        /* RE-SoT: increasing packets can cross PROGRAM/CONSTANT boundaries.
         * Consume only this homogeneous prefix; the scanner keeps the rest. */
        uint32_t end = method < 0x0B80 ? 0x0B80 : 0x0C00;
        if (!noninc && take > (end-method)/4) take = (end-method)/4;
        if (method < 0x0B80)
            nv2a_vsh_program_words(data,take);
        else
            nv2a_vsh_constant_words(data,take);
    } else if (method == NV097_ARRAY_ELEMENT16 || method == NV097_ARRAY_ELEMENT32 || method == NV097_INLINE_ARRAY) {
        if (!noninc && take > 1) take = 1;
        if (s_gpu.prim) {
            if (method == NV097_INLINE_ARRAY) {
                if (take > NV_MAX_INLINE-s_gpu.inline_count) take = NV_MAX_INLINE-s_gpu.inline_count;
                memcpy(s_gpu.inline_buf+s_gpu.inline_count,data,(size_t)take*4);
                s_gpu.inline_count += take;
            } else {
                uint32_t per = method == NV097_ARRAY_ELEMENT16 ? 2 : 1;
                if (take > (NV_MAX_INDICES-s_gpu.idx_count)/per) take = (NV_MAX_INDICES-s_gpu.idx_count)/per;
                for (i = 0; i < take; i++) {
                    s_gpu.idx[s_gpu.idx_count++] = (uint16_t)data[i];
                    if (per == 2) s_gpu.idx[s_gpu.idx_count++] = (uint16_t)(data[i] >> 16);
                }
            }
        }
    } else return 0;
    /* RE-SoT: leave overflow words to the original diagnostic path. */
    if (take) { s_pb_payload_words += take; s_pb_payload_batches++; }
    return take;
}
