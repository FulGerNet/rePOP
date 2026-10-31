/* RE-SoT: actual production footprint helper, six independent Q/UV cases.
 * No game code/data: test the affine convention and homogeneous equivalence
 * before attributing any phone's missing shadows to this code path. */
static int test_shadow_sample(SDL_GPUDevice *device, int dx,
    const SDL_GPUGraphicsPipelineCreateInfo *base, SDL_GPUTexture *target,
    SDL_GPUTransferBuffer *download)
{
    SDL_GPUShaderCreateInfo si = {0};
    SDL_GPUGraphicsPipelineCreateInfo info = *base;
    SDL_GPUColorTargetInfo ct = {0};
    SDL_GPUTextureRegion from = {0};
    SDL_GPUTextureTransferInfo to = {download,0,128,128};
    SDL_GPUShader *ps;
    SDL_GPUGraphicsPipeline *pipeline;
    SDL_GPUCommandBuffer *cmd;
    SDL_GPURenderPass *pass;
    SDL_GPUCopyPass *copy;
    SDL_GPUFence *fence;
    const Uint32 *pixels;
    si.format = dx ? SDL_GPU_SHADERFORMAT_DXBC : SDL_GPU_SHADERFORMAT_SPIRV;
    si.stage = SDL_GPU_SHADERSTAGE_FRAGMENT; si.entrypoint = "ps_shadow_probe";
    si.code = dx ? ng_ps_shadow_probe_dxbc : ng_ps_shadow_probe_spirv;
    si.code_size = dx ? sizeof ng_ps_shadow_probe_dxbc : sizeof ng_ps_shadow_probe_spirv;
    ps = SDL_CreateGPUShader(device,&si); REQUIRE(ps);
    info.fragment_shader = ps;
    info.target_info.has_depth_stencil_target = false;
    memset(&info.depth_stencil_state,0,sizeof info.depth_stencil_state);
    pipeline = SDL_CreateGPUGraphicsPipeline(device,&info); REQUIRE(pipeline);
    cmd = SDL_AcquireGPUCommandBuffer(device); REQUIRE(cmd);
    ct.texture = target; ct.load_op = SDL_GPU_LOADOP_CLEAR; ct.store_op = SDL_GPU_STOREOP_STORE;
    pass = SDL_BeginGPURenderPass(cmd,&ct,1,NULL); REQUIRE(pass);
    SDL_BindGPUGraphicsPipeline(pass,pipeline);
    SDL_DrawGPUPrimitives(pass,3,1,0,0); SDL_EndGPURenderPass(pass);
    from.texture=target; from.w=from.h=128; from.d=1;
    copy=SDL_BeginGPUCopyPass(cmd); REQUIRE(copy);
    SDL_DownloadFromGPUTexture(copy,&from,&to); SDL_EndGPUCopyPass(copy);
    fence=SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
    REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
    pixels=SDL_MapGPUTransferBuffer(device,download,false); REQUIRE(pixels);
    for (unsigned k=0;k<6;k++) {
        Uint32 actual=pixels[64*128+(2*k+1)*128/12];
        Uint32 expected=(k==3 || k==5) ? 0 : 0xFFBF8040u;
        /* RE-SoT: UNORM conversion can differ by one step at .5. Coverage
         * and alpha must be exact; only the three color channels allow it. */
        REQUIRE((actual>>24)==(expected>>24));
        for(unsigned shift=0;shift<24;shift+=8) {
            int delta=(int)((actual>>shift)&255)-(int)((expected>>shift)&255);
            REQUIRE(delta>=-1 && delta<=1);
        }
    }
    SDL_UnmapGPUTransferBuffer(device,download); SDL_ReleaseGPUFence(device,fence);
    SDL_ReleaseGPUGraphicsPipeline(device,pipeline); SDL_ReleaseGPUShader(device,ps);
    puts("shadow footprint: affine Q=0, signed/scaled projection and outside pixels pass");
    return 0;
}
