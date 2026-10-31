/* RE-SoT: exercise the actual production texture/mip readback comparison,
 * including a deliberately wrong expected pixel to prove error detection. */
#include "../../src/kernel/nv2a_texture_probe.h"
static int test_texture_probe(SDL_GPUDevice *device,uint32_t width,uint32_t height)
{
    SDL_GPUTextureCreateInfo ci={0};
    SDL_GPUTransferBufferCreateInfo ti={SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD,width*height*4,0};
    SDL_GPUTexture *image;
    SDL_GPUTransferBuffer *upload;
    SDL_GPUCommandBuffer *cmd;
    SDL_GPUCopyPass *copy;
    SDL_GPUTextureTransferInfo source={0};
    SDL_GPUTextureRegion destination={0};
    uint32_t pixels[64*64],*mapped,levels=1,extent=width>height?width:height;
    ResotTextureProbe results[RESOT_PROBE_MIPS];
    ci.type=SDL_GPU_TEXTURETYPE_2D; ci.format=SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM;
    ci.usage=SDL_GPU_TEXTUREUSAGE_SAMPLER|SDL_GPU_TEXTUREUSAGE_COLOR_TARGET;
    while((extent>>=1)!=0) levels++;
    ci.width=width; ci.height=height; ci.layer_count_or_depth=1; ci.num_levels=levels;
    ci.sample_count=SDL_GPU_SAMPLECOUNT_1;
    image=SDL_CreateGPUTexture(device,&ci); REQUIRE(image);
    upload=SDL_CreateGPUTransferBuffer(device,&ti); REQUIRE(upload);
    for(unsigned y=0;y<height;y++) for(unsigned x=0;x<width;x++)
        pixels[y*width+x]=((x*3+y*2)&255)|(((x*7+y*5)&255)<<8)|(((x*11+y*13)&255)<<16)|(((x*17+y*19)&255)<<24);
    mapped=SDL_MapGPUTransferBuffer(device,upload,true); REQUIRE(mapped);
    memcpy(mapped,pixels,width*height*4); SDL_UnmapGPUTransferBuffer(device,upload);
    cmd=SDL_AcquireGPUCommandBuffer(device); REQUIRE(cmd);
    copy=SDL_BeginGPUCopyPass(cmd); REQUIRE(copy);
    source.transfer_buffer=upload; source.pixels_per_row=width; source.rows_per_layer=height;
    destination.texture=image; destination.w=width; destination.h=height; destination.d=1;
    SDL_UploadToGPUTexture(copy,&source,&destination,false); SDL_EndGPUCopyPass(copy);
    SDL_GenerateMipmapsForGPUTexture(cmd,image);
    REQUIRE(SDL_SubmitGPUCommandBuffer(cmd));
    REQUIRE(resot_probe_texture(device,image,pixels,width,height,levels,results));
    for(unsigned level=0;level<levels;level++) {
        if(results[level].mismatches) fprintf(stderr,"probe mip %u: %u mismatches, maxdelta %u\n",level,results[level].mismatches,results[level].max_delta);
        REQUIRE(results[level].pixels>0 && results[level].mismatches==0);
    }
    REQUIRE(results[0].cpu_hash==results[0].gpu_hash);
    pixels[0]^=0x00FF0000;
    REQUIRE(resot_probe_texture(device,image,pixels,width,height,levels,results));
    REQUIRE(results[0].mismatches==1 && results[0].cpu_hash!=results[0].gpu_hash);
    SDL_ReleaseGPUTransferBuffer(device,upload); SDL_ReleaseGPUTexture(device,image);
    printf("texture probe %ux%u: exact upload, all %u mip levels and deliberate corruption detection pass\n",width,height,levels);
    return 0;
}
