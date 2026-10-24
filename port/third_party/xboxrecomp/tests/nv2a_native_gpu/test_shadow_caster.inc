/* RE-SoT: afc13cc regression: depthless Z16 shadow casters emit screen Z
 * outside 0..65535. Independently specified coverage must survive. Also
 * exercise the broken unflagged path, proving why the map became empty. */
static int test_shadow_caster(SDL_GPUDevice *device, int dx,
    const SDL_GPUGraphicsPipelineCreateInfo *base, SDL_GPUTexture *target,
    SDL_GPUTransferBuffer *download)
{
    SDL_GPUGraphicsPipelineCreateInfo info = *base;
    SDL_GPUShaderCreateInfo si = {0};
    SDL_GPUShader *ps, *vs;
    Uint32 reference[128*128];
    unsigned covered[3] = {0};
    float header[16] = {2.0f/128,2.0f/128,1.0f/65535,0, 0,0,0,0, 1,128,1,0};
    si.format = dx ? SDL_GPU_SHADERFORMAT_DXIL : SDL_GPU_SHADERFORMAT_SPIRV;
    si.stage = SDL_GPU_SHADERSTAGE_FRAGMENT; si.entrypoint = "ps_shadow_coverage";
    si.code = dx ? ng_ps_shadow_coverage_dxil : ng_ps_shadow_coverage_spirv;
    si.code_size = dx ? sizeof ng_ps_shadow_coverage_dxil : sizeof ng_ps_shadow_coverage_spirv;
    ps = SDL_CreateGPUShader(device,&si); REQUIRE(ps);
    info.fragment_shader = ps; info.target_info.has_depth_stencil_target = false;
    memset(&info.depth_stencil_state,0,sizeof info.depth_stencil_state);
    info.rasterizer_state.enable_depth_clip = true;
    for (int variant=0;variant<3;variant++) {
        SDL_GPUGraphicsPipeline *pipeline;
        SDL_GPUCommandBuffer *cmd;
        SDL_GPUColorTargetInfo ct = {0};
        SDL_GPURenderPass *pass;
        SDL_GPUCopyPass *copy;
        SDL_GPUTextureRegion from = {0};
        SDL_GPUTextureTransferInfo to = {download,0,128,128};
        SDL_GPUFence *fence;
        const Uint32 *pixels;
        si.stage = SDL_GPU_SHADERSTAGE_VERTEX; si.num_uniform_buffers = variant != 0;
        si.entrypoint = variant ? "vs_shadow_caster" : "vs_shadow_reference";
        si.code = variant ? (dx ? ng_vs_shadow_caster_dxil : ng_vs_shadow_caster_spirv)
                          : (dx ? ng_vs_shadow_reference_dxil : ng_vs_shadow_reference_spirv);
        si.code_size = variant ? (dx ? sizeof ng_vs_shadow_caster_dxil : sizeof ng_vs_shadow_caster_spirv)
                               : (dx ? sizeof ng_vs_shadow_reference_dxil : sizeof ng_vs_shadow_reference_spirv);
        vs = SDL_CreateGPUShader(device,&si); REQUIRE(vs); info.vertex_shader = vs;
        pipeline = SDL_CreateGPUGraphicsPipeline(device,&info); REQUIRE(pipeline);
        cmd = SDL_AcquireGPUCommandBuffer(device); REQUIRE(cmd);
        ct.texture=target; ct.load_op=SDL_GPU_LOADOP_CLEAR; ct.store_op=SDL_GPU_STOREOP_STORE;
        pass=SDL_BeginGPURenderPass(cmd,&ct,1,NULL); REQUIRE(pass);
        SDL_BindGPUGraphicsPipeline(pass,pipeline);
        header[3] = variant == 2; /* RE-SoT: production caster-policy header bit. */
        if(variant) SDL_PushGPUVertexUniformData(cmd,0,header,sizeof header);
        SDL_DrawGPUPrimitives(pass,3,1,0,0); SDL_EndGPURenderPass(pass);
        from.texture=target; from.w=from.h=128; from.d=1;
        copy=SDL_BeginGPUCopyPass(cmd); REQUIRE(copy);
        SDL_DownloadFromGPUTexture(copy,&from,&to); SDL_EndGPUCopyPass(copy);
        fence=SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
        REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
        pixels=SDL_MapGPUTransferBuffer(device,download,false); REQUIRE(pixels);
        for(unsigned i=0;i<128*128;i++) {
            covered[variant] += pixels[i] != 0;
            if(!variant) reference[i]=pixels[i];
            else if(variant==2) REQUIRE(reference[i]==pixels[i]);
        }
        SDL_UnmapGPUTransferBuffer(device,download); SDL_ReleaseGPUFence(device,fence);
        SDL_ReleaseGPUGraphicsPipeline(device,pipeline); SDL_ReleaseGPUShader(device,vs);
    }
    SDL_ReleaseGPUShader(device,ps);
    printf("depthless Z16 caster: reference %u, afc13cc %u, corrected %u pixels\n",covered[0],covered[1],covered[2]);
    REQUIRE(covered[0]>1000 && covered[1]==0 && covered[2]==covered[0]);
    return 0;
}
