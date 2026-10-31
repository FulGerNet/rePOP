/* RE-SoT: draw random combiner states through ps_main and through the production
 * translation on the real D3D12 GPU and compare every pixel, discards included.
 * Both are fxc SM 5.1, as shipped. A byte of tolerance per channel. */
#define COBJMACROS
#include <d3dcompiler.h>
#pragma comment(lib,"d3dcompiler.lib")
static uint32_t translate_rand(uint32_t *state)
{
    *state^=*state<<13; *state^=*state>>17; *state^=*state<<5;
    return *state;
}
static int test_combiner_translate(SDL_GPUDevice *device, SDL_GPUTexture *target, SDL_GPUTransferBuffer *download)
{
    enum { CASES=400 };
    SDL_GPUShaderCreateInfo si={0};
    SDL_GPUGraphicsPipelineCreateInfo pi={0};
    SDL_GPUColorTargetDescription color={0};
    SDL_GPUTextureCreateInfo ti={0};
    SDL_GPUSamplerCreateInfo sm={0};
    SDL_GPUTransferBufferCreateInfo bi={SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD,16*4+6*16*4,0};
    SDL_GPUTextureSamplerBinding bindings[8];
    SDL_GPUShader *vs,*reference;
    SDL_GPUGraphicsPipeline *pipelines[2]={NULL,NULL};
    SDL_GPUTexture *texture,*cube;
    SDL_GPUTransferBuffer *upload;
    SDL_GPUSampler *sampler;
    static Uint8 first[128*128*4];
    static char text[sizeof ng_d3d12_hlsl+65536];
    uint32_t seed=0x51A7D5u;
    int i,run,side,no_discard=0;
    si.format=SDL_GPU_SHADERFORMAT_DXBC;
    si.code=ng_vs_combiner_probe_dxbc; si.code_size=sizeof ng_vs_combiner_probe_dxbc;
    si.entrypoint="vs_combiner_probe"; si.stage=SDL_GPU_SHADERSTAGE_VERTEX;
    vs=SDL_CreateGPUShader(device,&si); REQUIRE(vs);
    si.code=ng_ps_main_dxbc; si.code_size=sizeof ng_ps_main_dxbc; si.entrypoint="ps_main";
    si.stage=SDL_GPU_SHADERSTAGE_FRAGMENT; si.num_samplers=8; si.num_uniform_buffers=1;
    reference=SDL_CreateGPUShader(device,&si); REQUIRE(reference);
    pi.vertex_shader=vs; pi.primitive_type=SDL_GPU_PRIMITIVETYPE_TRIANGLELIST;
    pi.rasterizer_state.fill_mode=SDL_GPU_FILLMODE_FILL; pi.multisample_state.sample_count=SDL_GPU_SAMPLECOUNT_1;
    pi.rasterizer_state.enable_depth_clip=true;
    color.format=SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM;
    pi.target_info.color_target_descriptions=&color; pi.target_info.num_color_targets=1;
    pi.fragment_shader=reference;
    pipelines[0]=SDL_CreateGPUGraphicsPipeline(device,&pi); REQUIRE(pipelines[0]);
    ti.type=SDL_GPU_TEXTURETYPE_2D; ti.format=color.format; ti.usage=SDL_GPU_TEXTUREUSAGE_SAMPLER;
    ti.width=ti.height=4; ti.layer_count_or_depth=ti.num_levels=1; ti.sample_count=SDL_GPU_SAMPLECOUNT_1;
    texture=SDL_CreateGPUTexture(device,&ti); REQUIRE(texture);
    ti.type=SDL_GPU_TEXTURETYPE_CUBE; ti.layer_count_or_depth=6;
    cube=SDL_CreateGPUTexture(device,&ti); REQUIRE(cube);
    upload=SDL_CreateGPUTransferBuffer(device,&bi); REQUIRE(upload);
    { Uint32 *mapped=SDL_MapGPUTransferBuffer(device,upload,true); REQUIRE(mapped);
      for(i=0;i<16*7;i++) mapped[i]=0x30105020u+(Uint32)i*0x0B0E050Au;
      SDL_UnmapGPUTransferBuffer(device,upload); }
    sm.min_filter=sm.mag_filter=SDL_GPU_FILTER_LINEAR; sm.mipmap_mode=SDL_GPU_SAMPLERMIPMAPMODE_NEAREST;
    sm.address_mode_u=sm.address_mode_v=sm.address_mode_w=SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE;
    sampler=SDL_CreateGPUSampler(device,&sm); REQUIRE(sampler);
    for(i=0;i<8;i++) { bindings[i].texture=i<4?texture:cube; bindings[i].sampler=sampler; }
    memcpy(text,ng_d3d12_hlsl,sizeof ng_d3d12_hlsl-1);
    for(run=0;run<CASES;run++) {
        union { float f[168]; Uint32 u[168]; } pc={0};
        uint32_t key[RESOT_PS_KEY_WORDS];
        size_t head=sizeof ng_d3d12_hlsl-1,body;
        ID3DBlob *code=NULL,*errors=NULL;
        SDL_GPUShader *translated;
        uint32_t stages=translate_rand(&seed)%9, s;
        for(s=0;s<8;s++) {
            /* Inputs: registers, mappings and alpha/blue selection at random;
             * outputs: bits of each word's flag field, destinations 0..15. */
            pc.u[s*4]=translate_rand(&seed);
            pc.u[s*4+1]=translate_rand(&seed);
            pc.u[s*4+2]=translate_rand(&seed)&0xFFFFF;
            pc.u[s*4+3]=translate_rand(&seed)&0x3FFFF;
            for(i=0;i<4;i++) { pc.f[32+s*4+i]=(translate_rand(&seed)%256)/255.0f; pc.f[64+s*4+i]=(translate_rand(&seed)%256)/255.0f; }
        }
        pc.u[96]=stages|(translate_rand(&seed)&0x111)<<8;
        /* Stage modes: mostly 2D/projective texture, then coordinates, clip and off. */
        for(s=0;s<4;s++) {
            static const uint32_t modes[]={1,1,1,2,0,4,5,3,6};
            pc.u[97]|=modes[translate_rand(&seed)%9]<<(s*5);
        }
        pc.u[98]=translate_rand(&seed)%4?translate_rand(&seed):0;
        pc.u[99]=pc.u[98]?translate_rand(&seed):0;
        if(translate_rand(&seed)%2) { pc.u[100]=1; pc.u[101]=0x200+translate_rand(&seed)%9; pc.u[102]=translate_rand(&seed)&255; }
        else pc.u[101]=0x200+translate_rand(&seed)%8; /* A stale function with the test off. */
        pc.u[103]=translate_rand(&seed)&0xFFFF;
        for(i=104;i<112;i++) pc.f[i]=(translate_rand(&seed)%256)/255.0f;
        for(i=112;i<115;i++) pc.f[i]=(translate_rand(&seed)%256)/255.0f;
        pc.u[132]=translate_rand(&seed)%8!=0;
        pc.u[133]=translate_rand(&seed)%4?0:translate_rand(&seed)&15;
        pc.u[134]=translate_rand(&seed)&15;
        for(s=0;s<4;s++) {
            uint32_t mode=(pc.u[97]>>(s*5))&31;
            pc.f[116+s*4]=pc.f[117+s*4]=1;
            if(mode>=1 && mode<=3 && translate_rand(&seed)%8) {
                pc.f[118+s*4]=1;
                pc.f[119+s*4]=translate_rand(&seed)%6==0;
            }
            if(translate_rand(&seed)%3==0) {
                for(i=0;i<4;i++) pc.f[136+s*4+i]=(translate_rand(&seed)%256)/255.0f;
                pc.f[152+s*4]=pc.f[153+s*4]=4;
                pc.f[154+s*4]=(float)(translate_rand(&seed)%3)-1;
                pc.f[155+s*4]=(float)(translate_rand(&seed)%3)-1;
            }
        }
        if(!pc.u[132]) { pc.f[118]=1; pc.f[119]=0; pc.u[97]&=~31u; pc.u[97]|=1; }
        resot_ps_key(key,&pc);
        body=resot_ps_emit(text+head,sizeof text-head,"ps_tr",key,4); REQUIRE(body);
        if(!pc.u[100] && !strstr(text+head,"discard")) no_discard++;
        if(FAILED(D3DCompile(text,head+body,"ps_tr",NULL,NULL,"ps_tr","ps_5_1",(1<<14)|(1<<13),0,&code,&errors))) {
            fprintf(stderr,"translated combiner %d: %s\n%s\n",run,errors?(const char*)ID3D10Blob_GetBufferPointer(errors):"?",text+head);
            return 1;
        }
        { /* The same text must compile for D3D11 (ps_4_0), which has no register spaces. */
            static char flat[sizeof text];
            const char *from=text; char *to=flat; ID3DBlob *code4=NULL,*errors4=NULL;
            while(from<text+head+body) {
                if(!strncmp(from,", space",7)) from+=8; else *to++=*from++;
            }
            if(FAILED(D3DCompile(flat,(size_t)(to-flat),"ps_tr",NULL,NULL,"ps_tr","ps_4_0",(1<<14)|(1<<13),0,&code4,&errors4))) {
                fprintf(stderr,"translated combiner %d, ps_4_0: %s\n%s\n",run,errors4?(const char*)ID3D10Blob_GetBufferPointer(errors4):"?",text+head);
                return 1;
            }
            ID3D10Blob_Release(code4); if(errors4) ID3D10Blob_Release(errors4);
        }
        si.format=SDL_GPU_SHADERFORMAT_DXBC; si.entrypoint="ps_tr";
        si.code=(const Uint8*)ID3D10Blob_GetBufferPointer(code); si.code_size=ID3D10Blob_GetBufferSize(code);
        translated=SDL_CreateGPUShader(device,&si); REQUIRE(translated);
        pi.fragment_shader=translated;
        pipelines[1]=SDL_CreateGPUGraphicsPipeline(device,&pi); REQUIRE(pipelines[1]);
        ID3D10Blob_Release(code); if(errors) ID3D10Blob_Release(errors);
        for(side=0;side<2;side++) {
            SDL_GPUCommandBuffer *cmd=SDL_AcquireGPUCommandBuffer(device);
            SDL_GPUColorTargetInfo ct={0};
            SDL_GPUTextureRegion src={0};
            SDL_GPUTextureTransferInfo dst={download,0,128,128};
            SDL_GPUCopyPass *copy;
            SDL_GPURenderPass *pass;
            SDL_GPUFence *fence;
            const Uint8 *pixels;
            REQUIRE(cmd);
            if(!run && !side) {
                SDL_GPUTextureTransferInfo from={upload,0,4,4};
                SDL_GPUTextureRegion to={0};
                int face;
                to.texture=texture; to.w=to.h=4; to.d=1;
                copy=SDL_BeginGPUCopyPass(cmd); REQUIRE(copy);
                SDL_UploadToGPUTexture(copy,&from,&to,false);
                to.texture=cube;
                for(face=0;face<6;face++) { from.offset=64+face*64; to.layer=face; SDL_UploadToGPUTexture(copy,&from,&to,false); }
                SDL_EndGPUCopyPass(copy);
            }
            ct.texture=target; ct.load_op=SDL_GPU_LOADOP_CLEAR; ct.store_op=SDL_GPU_STOREOP_STORE;
            ct.clear_color.g=0.5f; /* Discarded pixels must match too. */
            pass=SDL_BeginGPURenderPass(cmd,&ct,1,NULL); REQUIRE(pass);
            SDL_BindGPUGraphicsPipeline(pass,pipelines[side]); SDL_BindGPUFragmentSamplers(pass,0,bindings,8);
            SDL_PushGPUFragmentUniformData(cmd,0,&pc,sizeof pc); SDL_DrawGPUPrimitives(pass,3,1,0,0);
            SDL_EndGPURenderPass(pass); src.texture=target; src.w=src.h=128; src.d=1;
            copy=SDL_BeginGPUCopyPass(cmd); REQUIRE(copy); SDL_DownloadFromGPUTexture(copy,&src,&dst); SDL_EndGPUCopyPass(copy);
            fence=SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
            REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
            pixels=SDL_MapGPUTransferBuffer(device,download,false); REQUIRE(pixels);
            if(!side) memcpy(first,pixels,sizeof first);
            else for(i=0;i<128*128*4;i++) {
                int delta=abs((int)pixels[i]-(int)first[i]);
                if(delta>1) {
                    fprintf(stderr,"translated combiner mismatch case %d pixel %d,%d channel %d: %u vs %u\n%s\n",
                            run,(i/4)%128,(i/4)/128,i%4,first[i],pixels[i],text+head);
                    return 1;
                }
            }
            SDL_UnmapGPUTransferBuffer(device,download); SDL_ReleaseGPUFence(device,fence);
        }
        SDL_ReleaseGPUGraphicsPipeline(device,pipelines[1]); SDL_ReleaseGPUShader(device,translated);
    }
    SDL_ReleaseGPUSampler(device,sampler); SDL_ReleaseGPUTransferBuffer(device,upload);
    SDL_ReleaseGPUTexture(device,texture); SDL_ReleaseGPUTexture(device,cube);
    SDL_ReleaseGPUGraphicsPipeline(device,pipelines[0]); SDL_ReleaseGPUShader(device,vs); SDL_ReleaseGPUShader(device,reference);
    printf("translated combiner: %d random states equal to ps_main on D3D12 (%d without any discard)\n",CASES,no_discard);
    return 0;
}
