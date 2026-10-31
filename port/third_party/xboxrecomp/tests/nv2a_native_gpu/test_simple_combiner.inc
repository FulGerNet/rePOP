/* RE-SoT: compare production ps_simple against ps_main on the real GPU,
 * sampling a gradient with fog, saturation, alpha factors and white borders. */
#include "../../src/kernel/nv2a_native_simple.h"
#include "../../src/kernel/resot_native_specialize.h" /* RE-SoT: production specialization ABI. */
static int test_simple_combiner(SDL_GPUDevice *device, SDL_GPUTexture *target,
    SDL_GPUTransferBuffer *download, int dx, int specialized)
{
    SDL_GPUShaderCreateInfo si={0};
    SDL_GPUGraphicsPipelineCreateInfo pi={0};
    SDL_GPUColorTargetDescription color={0};
    SDL_GPUTextureCreateInfo ti={0};
    SDL_GPUTransferBufferCreateInfo bi={SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD,64,0};
    SDL_GPUSamplerCreateInfo sm={0};
    SDL_GPUShader *vs,*ps;
    SDL_GPUGraphicsPipeline *pipeline;
    SDL_GPUTexture *texture,*cube;
    SDL_GPUTransferBuffer *upload;
    SDL_GPUSampler *sampler;
    SDL_GPUTextureSamplerBinding bindings[8];
    int run,i,iteration;
    Uint8 reference[128*128*4]; /* RE-SoT: compare separately, including discard coverage. */
    si.format=dx?SDL_GPU_SHADERFORMAT_DXBC:SDL_GPU_SHADERFORMAT_SPIRV;
    si.code=dx?ng_vs_combiner_probe_dxbc:ng_vs_combiner_probe_spirv;
    si.code_size=dx?sizeof ng_vs_combiner_probe_dxbc:sizeof ng_vs_combiner_probe_spirv;
    si.entrypoint="vs_combiner_probe"; si.stage=SDL_GPU_SHADERSTAGE_VERTEX;
    vs=SDL_CreateGPUShader(device,&si); REQUIRE(vs);
    si.code=dx?ng_ps_combiner_compare_dxbc:ng_ps_combiner_compare_spirv;
    si.code_size=dx?sizeof ng_ps_combiner_compare_dxbc:sizeof ng_ps_combiner_compare_spirv;
    si.entrypoint="ps_combiner_compare"; si.stage=SDL_GPU_SHADERSTAGE_FRAGMENT;
    si.num_samplers=8; si.num_uniform_buffers=1;
    ps=SDL_CreateGPUShader(device,&si); REQUIRE(ps);
    pi.vertex_shader=vs; pi.fragment_shader=ps; pi.primitive_type=SDL_GPU_PRIMITIVETYPE_TRIANGLELIST;
    pi.rasterizer_state.fill_mode=SDL_GPU_FILLMODE_FILL; pi.multisample_state.sample_count=SDL_GPU_SAMPLECOUNT_1;
    pi.rasterizer_state.enable_depth_clip=true; /* RE-SoT: no optional depth clamp in the production device. */
    color.format=SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM;
    pi.target_info.color_target_descriptions=&color; pi.target_info.num_color_targets=1;
    pipeline=SDL_CreateGPUGraphicsPipeline(device,&pi); REQUIRE(pipeline);
    ti.type=SDL_GPU_TEXTURETYPE_2D; ti.format=color.format; ti.usage=SDL_GPU_TEXTUREUSAGE_SAMPLER;
    ti.width=ti.height=4; ti.layer_count_or_depth=ti.num_levels=1; ti.sample_count=SDL_GPU_SAMPLECOUNT_1;
    texture=SDL_CreateGPUTexture(device,&ti); REQUIRE(texture);
    ti.type=SDL_GPU_TEXTURETYPE_CUBE; ti.layer_count_or_depth=6;
    cube=SDL_CreateGPUTexture(device,&ti); REQUIRE(cube);
    upload=SDL_CreateGPUTransferBuffer(device,&bi); REQUIRE(upload);
    { Uint32 *mapped=SDL_MapGPUTransferBuffer(device,upload,true); REQUIRE(mapped);
      for(i=0;i<16;i++) mapped[i]=0x30105020u+(Uint32)i*0x0B0E050Au;
      SDL_UnmapGPUTransferBuffer(device,upload); }
    sm.min_filter=sm.mag_filter=SDL_GPU_FILTER_LINEAR; sm.mipmap_mode=SDL_GPU_SAMPLERMIPMAPMODE_NEAREST;
    sm.address_mode_u=sm.address_mode_v=sm.address_mode_w=SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE;
    sampler=SDL_CreateGPUSampler(device,&sm); REQUIRE(sampler);
    for(i=0;i<8;i++) { bindings[i].texture=i<4?texture:cube; bindings[i].sampler=sampler; }
    for(iteration=0;iteration<(specialized?128:576);iteration++) { /* RE-SoT: paired reference/specialized draws. */
        run=specialized?iteration/2:iteration;
        union { float f[168]; Uint32 u[168]; } pc={0};
        SDL_GPUCommandBuffer *cmd=SDL_AcquireGPUCommandBuffer(device);
        SDL_GPUColorTargetInfo ct={0};
        SDL_GPUTextureRegion src={0};
        SDL_GPUTextureTransferInfo dst={download,0,128,128};
        SDL_GPUCopyPass *copy;
        SDL_GPURenderPass *pass;
        SDL_GPUFence *fence;
        const Uint8 *pixels;
        REQUIRE(cmd);
        if(!iteration) { SDL_GPUTextureTransferInfo from={upload,0,4,4}; SDL_GPUTextureRegion to={0};
          to.texture=texture; to.w=to.h=4; to.d=1; copy=SDL_BeginGPUCopyPass(cmd); REQUIRE(copy);
          SDL_UploadToGPUTexture(copy,&from,&to,false); SDL_EndGPUCopyPass(copy); }
        pc.u[0]=run&1?0x08010000:0x08040000; pc.u[1]=run&2?0x18110000:0x18140000;
        pc.u[2]=run&4?0x00010C00:0x00000C00; pc.u[3]=0x00000C00;
        pc.f[32]=0.4f; pc.f[33]=0.25f; pc.f[34]=0.7f; pc.f[35]=0.91f;
        pc.u[96]=1; pc.u[97]=1; pc.u[98]=run&8?0x130C0300:0x0000000C; pc.u[99]=0x00001C80;
        if((run%288)>=32) { pc.u[100]=1; pc.u[101]=0x1FF+((run%288)/32); pc.u[102]=96; }
        /* RE-SoT: no texture program; deliberately retain border state. */
        if(run>=288) { pc.u[97]=0; pc.u[0]=0x04200000; pc.u[1]=0x14200000; }
        pc.f[112]=0.12f; pc.f[113]=0.31f; pc.f[114]=0.72f;
        pc.f[116]=pc.f[117]=1; pc.f[118]=run>=288?0:1; pc.u[132]=1;
        if(run&16) { for(i=136;i<140;i++)pc.f[i]=1; pc.f[152]=pc.f[153]=4; pc.f[154]=pc.f[155]=1; }
        if(specialized) {
            uint32_t key[RESOT_PS_KEY_WORDS], *code;
            size_t bytes;
            const unsigned char *source;
            /* RE-SoT: independent/paired factors, fog/final combiners,
             * 1..8 stages and different destinations/mappings. Uniforms
             * remain live in both shaders; only program words specialize. */
            pc.u[96]=(run%8+1) | (run&8?0x11000:0);
            pc.u[97]=run&1?0x21:1;
            for(i=1;i<8;i++) {
                pc.u[i*4]=run&2?0x0C080000:0x08040000;
                pc.u[i*4+1]=0x181C0000;
                pc.u[i*4+2]=run&4?0x00010C00:0x00000C00;
                pc.u[i*4+3]=0x00000C00;
                pc.f[32+i*4]=0.3f; pc.f[33+i*4]=0.7f; pc.f[34+i*4]=0.5f; pc.f[35+i*4]=0.8f;
            }
            if(run&16) pc.u[98]=pc.u[99]=0;
            if(run>=24) { pc.u[100]=1; pc.u[101]=0x200+(run%8); pc.u[102]=96; } /* RE-SoT: compare discard masks too. */
            if(run>=60) { pc.u[132]=0; pc.u[96]=0; } /* RE-SoT: non-combiner fallback and zero stages. */
            resot_ps_key(key,&pc);
            source=ng_ps_specialized_source(key[32]&255,&bytes);
            code=resot_ps_specialize(source,bytes,key);
            REQUIRE(code);
            if(specialized==2 && (iteration&1)) {
                size_t optimized_bytes=0;
                Uint64 started=SDL_GetTicksNS();
                uint32_t *optimized=resot_optimize_fragment(code,bytes,&optimized_bytes);
                REQUIRE(optimized && optimized_bytes>0);
                if(!(run%8)) fprintf(stderr,"[Shader test] fragment %d: %zu -> %zu bytes in %.1f ms\n",run,bytes,optimized_bytes,(SDL_GetTicksNS()-started)/1e6);
                free(code); code=optimized; bytes=optimized_bytes;
                for(size_t at=5;at<bytes/4;at+=code[at]>>16)
                    REQUIRE((code[at]&65535)!=50 && (code[at]&65535)!=52); /* RE-SoT: no remaining specialization decoding. */
            }
            SDL_ReleaseGPUGraphicsPipeline(device,pipeline); SDL_ReleaseGPUShader(device,ps);
            si.code=iteration&1?(const unsigned char *)code:ng_ps_main_spirv;
            si.code_size=iteration&1?bytes:sizeof ng_ps_main_spirv;
            si.entrypoint="ps_main";
            ps=SDL_CreateGPUShader(device,&si); free(code); REQUIRE(ps);
            pi.fragment_shader=ps; pipeline=SDL_CreateGPUGraphicsPipeline(device,&pi); REQUIRE(pipeline);
        }
        if(!specialized) REQUIRE(resot_native_simple(pc.u[96],pc.u[97],pc.u[0],pc.u[1],pc.u[2],pc.u[3],pc.u[98],pc.u[99],0,0,0));
        REQUIRE(!resot_native_simple(pc.u[96],pc.u[97],pc.u[0],pc.u[1],pc.u[2],pc.u[3],pc.u[98],pc.u[99],1,0x208,0));
        REQUIRE(!resot_native_simple(pc.u[96],pc.u[97],pc.u[0],pc.u[1],pc.u[2],pc.u[3],pc.u[98],pc.u[99],0,0,1));
        ct.texture=target; ct.load_op=SDL_GPU_LOADOP_CLEAR; ct.store_op=SDL_GPU_STOREOP_STORE;
        pass=SDL_BeginGPURenderPass(cmd,&ct,1,NULL); REQUIRE(pass);
        SDL_BindGPUGraphicsPipeline(pass,pipeline); SDL_BindGPUFragmentSamplers(pass,0,bindings,8);
        SDL_PushGPUFragmentUniformData(cmd,0,&pc,sizeof pc); SDL_DrawGPUPrimitives(pass,3,1,0,0);
        SDL_EndGPURenderPass(pass); src.texture=target; src.w=src.h=128; src.d=1;
        copy=SDL_BeginGPUCopyPass(cmd); REQUIRE(copy); SDL_DownloadFromGPUTexture(copy,&src,&dst); SDL_EndGPUCopyPass(copy);
        fence=SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
        REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
        pixels=SDL_MapGPUTransferBuffer(device,download,false); REQUIRE(pixels);
        if(specialized && !(iteration&1)) memcpy(reference,pixels,sizeof reference);
        else for(i=0;i<128*128*4;i++) {
            int delta=specialized?abs((int)pixels[i]-(int)reference[i]):pixels[i];
            if(delta>2) { fprintf(stderr,"combiner mismatch case %d byte %d delta %d\n",run,i,delta); return 1; }
        }
        SDL_UnmapGPUTransferBuffer(device,download); SDL_ReleaseGPUFence(device,fence);
    }
    SDL_ReleaseGPUSampler(device,sampler); SDL_ReleaseGPUTransferBuffer(device,upload);
    SDL_ReleaseGPUTexture(device,texture); SDL_ReleaseGPUTexture(device,cube);
    SDL_ReleaseGPUGraphicsPipeline(device,pipeline); SDL_ReleaseGPUShader(device,vs); SDL_ReleaseGPUShader(device,ps);
    puts(specialized?"specialized combiner: 64 multi-stage/alpha GPU comparisons passed":"simple combiner: 576 GPU comparisons with generic shader passed; diffuse-only, alpha comparisons and cube fallback covered");
    return 0;
}
