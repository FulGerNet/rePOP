/* RE-SoT: reconstructing Xbox screen-space depth must preserve the original
 * homogeneous plane, including vertices behind the eye. Compare actual GPU
 * coverage and interpolated depth with an independently specified clip-space
 * triangle. A per-vertex depth clamp bends that plane and fails this test. */
static int test_depth_clip(SDL_GPUDevice *device, int dx,
    const SDL_GPUGraphicsPipelineCreateInfo *base, SDL_GPUTexture *target,
    SDL_GPUTransferBuffer *download)
{
    SDL_GPUGraphicsPipelineCreateInfo info = *base;
    SDL_GPUShaderCreateInfo si = {0};
    SDL_GPUShader *ps, *vs;
    Uint32 reference[128*128];
    unsigned covered = 0, mismatches = 0;
    float header[16] = {2.0f/128,2.0f/128,1,0, 0,0,0,0, 1,128,1,0};
    si.format = dx ? SDL_GPU_SHADERFORMAT_DXBC : SDL_GPU_SHADERFORMAT_SPIRV;
    si.stage = SDL_GPU_SHADERSTAGE_FRAGMENT; si.entrypoint = "ps_depth_probe";
    si.code = dx ? ng_ps_depth_probe_dxbc : ng_ps_depth_probe_spirv;
    si.code_size = dx ? sizeof ng_ps_depth_probe_dxbc : sizeof ng_ps_depth_probe_spirv;
    ps = SDL_CreateGPUShader(device,&si); REQUIRE(ps);
    info.fragment_shader = ps;
    info.target_info.has_depth_stencil_target = false;
    memset(&info.depth_stencil_state,0,sizeof info.depth_stencil_state);
    info.rasterizer_state.enable_depth_clip = true;
    for (int variant=0;variant<2;variant++) {
        SDL_GPUGraphicsPipeline *pipeline;
        SDL_GPUCommandBuffer *cmd;
        SDL_GPUColorTargetInfo ct = {0};
        SDL_GPURenderPass *pass;
        SDL_GPUCopyPass *copy;
        SDL_GPUTextureRegion from = {0};
        SDL_GPUTextureTransferInfo to = {download,0,128,128};
        SDL_GPUFence *fence;
        const Uint32 *pixels;
        si.stage = SDL_GPU_SHADERSTAGE_VERTEX; si.num_uniform_buffers = variant;
        si.entrypoint = variant ? "vs_depth_screen" : "vs_depth_reference";
        si.code = variant ? (dx ? ng_vs_depth_screen_dxbc : ng_vs_depth_screen_spirv)
                          : (dx ? ng_vs_depth_reference_dxbc : ng_vs_depth_reference_spirv);
        si.code_size = variant ? (dx ? sizeof ng_vs_depth_screen_dxbc : sizeof ng_vs_depth_screen_spirv)
                               : (dx ? sizeof ng_vs_depth_reference_dxbc : sizeof ng_vs_depth_reference_spirv);
        vs = SDL_CreateGPUShader(device,&si); REQUIRE(vs);
        info.vertex_shader = vs;
        pipeline = SDL_CreateGPUGraphicsPipeline(device,&info); REQUIRE(pipeline);
        cmd = SDL_AcquireGPUCommandBuffer(device); REQUIRE(cmd);
        ct.texture=target; ct.load_op=SDL_GPU_LOADOP_CLEAR; ct.store_op=SDL_GPU_STOREOP_STORE;
        pass=SDL_BeginGPURenderPass(cmd,&ct,1,NULL); REQUIRE(pass);
        SDL_BindGPUGraphicsPipeline(pass,pipeline);
        if(variant) SDL_PushGPUVertexUniformData(cmd,0,header,sizeof header);
        SDL_DrawGPUPrimitives(pass,3,1,0,0); SDL_EndGPURenderPass(pass);
        from.texture=target; from.w=from.h=128; from.d=1;
        copy=SDL_BeginGPUCopyPass(cmd); REQUIRE(copy);
        SDL_DownloadFromGPUTexture(copy,&from,&to); SDL_EndGPUCopyPass(copy);
        fence=SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
        REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
        pixels=SDL_MapGPUTransferBuffer(device,download,false); REQUIRE(pixels);
        if(!variant) memcpy(reference,pixels,sizeof reference);
        else for(unsigned i=0;i<128*128;i++) {
            if(reference[i]) covered++;
            /* Allow one color quantization step; coverage must match exactly. */
            int delta=(int)((pixels[i]>>16)&255)-(int)((reference[i]>>16)&255);
            if((pixels[i]&0xFF00FFFFu)!=(reference[i]&0xFF00FFFFu) || delta < -1 || delta > 1) mismatches++;
        }
        SDL_UnmapGPUTransferBuffer(device,download); SDL_ReleaseGPUFence(device,fence);
        SDL_ReleaseGPUGraphicsPipeline(device,pipeline); SDL_ReleaseGPUShader(device,vs);
    }
    SDL_ReleaseGPUShader(device,ps);
    printf("eye-crossing triangle: %u covered pixels, %u depth/coverage mismatches\n",covered,mismatches);
    REQUIRE(covered>1000 && mismatches==0);
    return 0;
}
