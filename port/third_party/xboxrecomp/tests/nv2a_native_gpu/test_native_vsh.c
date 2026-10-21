/* RE-SoT: compare generic/small native vertex interpreters by GPU readback,
 * including compact input layouts and dead writes to omitted registers. */
#include <SDL3/SDL.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "shader_compiler.h"
#include "nv2a_native_shaders.h"
#include "../../src/kernel/resot_native_translate.h"
#include "../../src/kernel/resot_native_vsh.h"

#define REQUIRE(condition) do { if (!(condition)) { fprintf(stderr,"line %d: %s: %s\n",__LINE__,#condition,SDL_GetError()); return 1; } } while (0)

/* RE-SoT: identical input/output ABI for each translated program. */
static SDL_GPUGraphicsPipeline *make_pipeline(SDL_GPUDevice *device,SDL_GPUShader *vertex,SDL_GPUShader *fragment,int layout)
{
        SDL_GPUGraphicsPipelineCreateInfo pipeline = {0};
        SDL_GPUColorTargetDescription color = {0};
        SDL_GPUVertexBufferDescription binding = {0};
        SDL_GPUVertexAttribute attributes[8] = {0};
        binding.pitch = 16u << layout;
        for (unsigned attribute = 0; attribute < 8; attribute++) {
            attributes[attribute].location = attribute;
            attributes[attribute].format = SDL_GPU_VERTEXELEMENTFORMAT_FLOAT4;
            attributes[attribute].offset = attribute*16 < binding.pitch ? attribute*16 : 0;
        }
        pipeline.vertex_shader = vertex; pipeline.fragment_shader = fragment;
        pipeline.vertex_input_state.vertex_buffer_descriptions = &binding;
        pipeline.vertex_input_state.num_vertex_buffers = 1;
        pipeline.vertex_input_state.vertex_attributes = attributes;
        pipeline.vertex_input_state.num_vertex_attributes = 8;
        pipeline.primitive_type = SDL_GPU_PRIMITIVETYPE_TRIANGLELIST;
        pipeline.multisample_state.sample_count = SDL_GPU_SAMPLECOUNT_1;
        color.format = SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM;
        pipeline.target_info.color_target_descriptions = &color;
        pipeline.target_info.num_color_targets = 1;
        return SDL_CreateGPUGraphicsPipeline(device,&pipeline);

}

int main(int argc, char **argv)
{
    const char *backend = argc > 1 ? argv[1] : "vulkan";
    int dx = !strcmp(backend,"direct3d12");
    SDL_GPUShader *vertex[2], *fragment, *translated=NULL;
    SDL_GPUGraphicsPipeline *pipelines[2][4], *translated_pipeline=NULL;
    SDL_GPUShaderCreateInfo shader = {0};
    SDL_GPUBufferCreateInfo buffer_info = {SDL_GPU_BUFFERUSAGE_VERTEX,512,0};
    SDL_GPUTransferBufferCreateInfo transfer_info = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD,512,0};
    SDL_GPUTextureCreateInfo texture_info = {0};
    SDL_GPUDevice *device;
    SDL_GPUBuffer *buffer;
    SDL_GPUTransferBuffer *upload, *download;
    SDL_GPUTexture *target;
    float header[16] = {0.125f,0.125f,1,0, 1.5f,-0.5f,2054,1, 1,16,1,0};
    unsigned covered = 0;
    float constants[192][4] = {0};
    const float positions[3][4] = {{-16,-16,0.5f,1},{48,-16,0.5f,1},{-16,48,0.5f,1}};
    REQUIRE(SDL_Init(SDL_INIT_VIDEO));
    device = SDL_CreateGPUDevice(SDL_GPU_SHADERFORMAT_DXIL | SDL_GPU_SHADERFORMAT_SPIRV,true,backend);
    REQUIRE(device);
    shader.format = dx ? SDL_GPU_SHADERFORMAT_DXIL : SDL_GPU_SHADERFORMAT_SPIRV;
    shader.stage = SDL_GPU_SHADERSTAGE_VERTEX; shader.num_uniform_buffers = 3;
    for (int variant = 0; variant < 2; variant++) {
        shader.entrypoint = variant ? "vs_uber_small" : "vs_uber";
        shader.code = variant ? (dx ? ng_vs_uber_small_dxil : ng_vs_uber_small_spirv) : (dx ? ng_vs_uber_dxil : ng_vs_uber_spirv);
        shader.code_size = variant ? (dx ? sizeof ng_vs_uber_small_dxil : sizeof ng_vs_uber_small_spirv) : (dx ? sizeof ng_vs_uber_dxil : sizeof ng_vs_uber_spirv);
        vertex[variant] = SDL_CreateGPUShader(device,&shader); REQUIRE(vertex[variant]);
    }
    shader.stage = SDL_GPU_SHADERSTAGE_FRAGMENT; shader.num_uniform_buffers = 0;
    shader.entrypoint = "ps_vertex_probe";
    shader.code = dx ? ng_ps_vertex_probe_dxil : ng_ps_vertex_probe_spirv;
    shader.code_size = dx ? sizeof ng_ps_vertex_probe_dxil : sizeof ng_ps_vertex_probe_spirv;
    fragment = SDL_CreateGPUShader(device,&shader); REQUIRE(fragment);
    for (int variant = 0; variant < 2; variant++) for (int layout = 0; layout < 4; layout++) {
        pipelines[variant][layout]=make_pipeline(device,vertex[variant],fragment,layout);
        REQUIRE(pipelines[variant][layout]);
    }
    buffer = SDL_CreateGPUBuffer(device,&buffer_info); REQUIRE(buffer);
    upload = SDL_CreateGPUTransferBuffer(device,&transfer_info); REQUIRE(upload);
    transfer_info.usage = SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD; transfer_info.size = 3072;
    download = SDL_CreateGPUTransferBuffer(device,&transfer_info); REQUIRE(download);
    texture_info.type = SDL_GPU_TEXTURETYPE_2D; texture_info.format = SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM;
    texture_info.usage = SDL_GPU_TEXTUREUSAGE_COLOR_TARGET;
    texture_info.width = texture_info.height = 16; texture_info.layer_count_or_depth = texture_info.num_levels = 1;
    texture_info.sample_count = SDL_GPU_SAMPLECOUNT_1;
    target = SDL_CreateGPUTexture(device,&texture_info); REQUIRE(target);
    constants[1][0]=0.23f; constants[1][1]=0.51f; constants[1][2]=0.81f; constants[1][3]=0.67f;
    constants[2][0]=0.4f; constants[2][1]=0.6f; constants[2][2]=0.8f; constants[2][3]=0.5f;
    /* RE-SoT: relative palette reads, negated nonidentity swizzles and partial
     * writes exercise translation paths absent from the original identity probe. */
    constants[3][0]=1.1f; constants[3][1]=0.2f; constants[3][2]=0.4f; constants[3][3]=0.8f;
    for (unsigned mac = 0; mac <= 13; mac++) for (unsigned ilu = 0; ilu <= 7; ilu++) {
        unsigned layout = (mac + ilu) & 3, stride = 16u << layout;
        uint32_t instructions[5][4] = {
            /* RE-SoT: dead MAC R6 plus live paired ILU R1; pruning MAC
             * must turn the standalone ILU's explicit destination into R1. */
            {1 | (1u<<4) | (15u<<7) | (15u<<11) | (6u<<15), 1u<<8, 3 | (27u<<6), 3 | (27u<<6)},
            {1 | (15u<<7) | (7u<<15), 1u<<8, 3 | (27u<<6), 0},
            {mac | (ilu<<4) | (15u<<7) | (15u<<11), 2u<<8, (1 | (7u<<2) | (27u<<6)) | ((3 | (27u<<6))<<16), 3 | (27u<<6)},
            {1 | (15u<<19) | (1u<<24), ((mac+ilu)%3 == 0 ? 3u : (mac+ilu)%3 == 1 ? 5u : 9u), 1 | ((ilu && mac ? 1u : 0u)<<2) | (27u<<6), 0},
            {1 | (15u<<19) | (1u<<24) | (1u<<26), 0, 2 | (27u<<6), 0}
        };
        unsigned operand_mode=(mac+ilu)%3;
        if(operand_mode==1) {
            instructions[2][2]=(instructions[2][2]&~0x7fc0u) | (228u<<6) | 0x4000u;
            instructions[2][3]=3 | (255u<<6) | 0x4000u;
            instructions[2][0]=(instructions[2][0]&~(15u<<7)) | ((mac&1?5u:10u)<<7);
        } else if(operand_mode==2) {
            instructions[0][0]=(instructions[0][0]&~15u)|13u; // ARL before the relative read.
            instructions[0][1]=3u<<8;
            instructions[2][0]|=1u<<25;
            instructions[2][1]=(mac&1?191u:2u)<<8; // Include out-of-range palette clamping.
        }
        SDL_GPUCommandBuffer *command = SDL_AcquireGPUCommandBuffer(device);
        SDL_GPUTransferBufferLocation source = {upload,0};
        SDL_GPUBufferRegion destination = {buffer,0,512};
        SDL_GPUCopyPass *copy;
        SDL_GPUFence *fence;
        unsigned char *mapped = SDL_MapGPUTransferBuffer(device,upload,true); REQUIRE(mapped);
        memset(mapped,0,512);
        for (unsigned index = 0; index < 3; index++) memcpy(mapped+128+index*stride,positions[index],16);
        SDL_UnmapGPUTransferBuffer(device,upload);
        uint32_t compact[5][4];
        if (mac) REQUIRE(!resot_native_small_vsh(&instructions[0][0],5));
        REQUIRE(resot_native_pack_small_vsh(&instructions[0][0],5,&compact[0][0]));
        if(operand_mode!=2) REQUIRE(!(compact[0][0] & 15));
        REQUIRE(!(compact[0][0] & (15u<<7)));
        if(operand_mode!=2) REQUIRE(((compact[0][0] >> 15) & 15) == 1);
        REQUIRE(resot_native_small_vsh(&compact[0][0],5));
        /* RE-SoT: with MAC disabled R7 is unread; compare the shortened
         * program against the original on the GPU. */
        uint32_t compact_count = resot_native_trim_small_vsh(&compact[0][0],5);
        REQUIRE(compact_count <= 5);
        if (!mac) REQUIRE(compact_count < 5);
        instructions[3][2] ^= 4u<<2;
        REQUIRE(!resot_native_small_vsh(&instructions[0][0],5));
        instructions[3][2] ^= 4u<<2;
        copy = SDL_BeginGPUCopyPass(command); REQUIRE(copy);
        SDL_UploadToGPUBuffer(copy,&source,&destination,true); SDL_EndGPUCopyPass(copy);
        if(!dx) {
            char *source=resot_translate_vertex(ng_translated_vertex_head,&instructions[0][0],5);
            size_t bytes=0;
            uint32_t *code=resot_compile_vertex(source,&bytes);
            REQUIRE(source && code); free(source);
            shader.code=(const unsigned char*)code; shader.code_size=bytes; shader.entrypoint="main";
            shader.stage=SDL_GPU_SHADERSTAGE_VERTEX; shader.num_uniform_buffers=2;
            translated=SDL_CreateGPUShader(device,&shader); free(code); REQUIRE(translated);
            translated_pipeline=make_pipeline(device,translated,fragment,layout); REQUIRE(translated_pipeline);
        }
        for (unsigned variant = 0; variant < (dx?2u:3u); variant++) {
            SDL_GPUColorTargetInfo color = {0};
            SDL_GPUBufferBinding binding = {buffer,0};
            SDL_GPUTextureRegion region = {0};
            SDL_GPUTextureTransferInfo result = {download,variant*1024,16,16};
            SDL_GPURenderPass *pass;
            color.texture = target; color.load_op = SDL_GPU_LOADOP_CLEAR; color.store_op = SDL_GPU_STOREOP_STORE;
            pass = SDL_BeginGPURenderPass(command,&color,1,NULL); REQUIRE(pass);
            SDL_BindGPUGraphicsPipeline(pass,variant==2?translated_pipeline:pipelines[variant][layout]); SDL_BindGPUVertexBuffers(pass,0,&binding,1);
            SDL_PushGPUVertexUniformData(command,0,header,sizeof header);
            SDL_PushGPUVertexUniformData(command,1,constants,sizeof constants);
            SDL_PushGPUVertexUniformData(command,2,variant ? compact : instructions,variant ? compact_count*16 : sizeof instructions);
            SDL_DrawGPUPrimitives(pass,3,1,128/stride,0); SDL_EndGPURenderPass(pass);
            region.texture = target; region.w = region.h = 16; region.d = 1;
            copy = SDL_BeginGPUCopyPass(command); REQUIRE(copy);
            SDL_DownloadFromGPUTexture(copy,&region,&result); SDL_EndGPUCopyPass(copy);
        }
        fence = SDL_SubmitGPUCommandBufferAndAcquireFence(command); REQUIRE(fence);
        REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
        const uint32_t *pixels = SDL_MapGPUTransferBuffer(device,download,false); REQUIRE(pixels);
        REQUIRE(!memcmp(pixels,pixels+256,1024));
        if(!dx) {
            if(memcmp(pixels,pixels+512,1024)) {
                fprintf(stderr,"Translated mismatch MAC=%u ILU=%u layout=%u\n",mac,ilu,layout);
                for(unsigned q=0;q<256;q++) if(pixels[q]!=pixels[q+512]) { fprintf(stderr,"pixel %u: %08x vs %08x\n",q,pixels[q],pixels[q+512]); break; }
                return 1;
            }
        }
        covered += pixels[128] != 0;
        SDL_UnmapGPUTransferBuffer(device,download); SDL_ReleaseGPUFence(device,fence);
        if(!dx) { SDL_ReleaseGPUGraphicsPipeline(device,translated_pipeline); SDL_ReleaseGPUShader(device,translated); }
    }
    REQUIRE(covered > 0);
    puts("PASS: 112 generic/remapped vertex-program comparisons with compact input layouts");
    if(!dx) puts("PASS: 112 translated/reference vertex-program comparisons");
    SDL_ReleaseGPUTexture(device,target); SDL_ReleaseGPUBuffer(device,buffer);
    SDL_ReleaseGPUTransferBuffer(device,upload); SDL_ReleaseGPUTransferBuffer(device,download);
    for (unsigned variant = 0; variant < 2; variant++) {
        for (unsigned layout = 0; layout < 4; layout++) SDL_ReleaseGPUGraphicsPipeline(device,pipelines[variant][layout]);
        SDL_ReleaseGPUShader(device,vertex[variant]);
    }
    SDL_ReleaseGPUShader(device,fragment); SDL_DestroyGPUDevice(device); SDL_Quit();
    return 0;
}
