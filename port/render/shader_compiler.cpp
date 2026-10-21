// Host-only translation: GLSL from the observed program, optimized SPIR-V.
#include "shader_compiler.h"
#include <glslang/Public/ShaderLang.h>
#include <glslang/Public/ResourceLimits.h>
#include <SPIRV/GlslangToSpv.h>
#include <spirv-tools/optimizer.hpp>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <vector>
#include <atomic>
#include <chrono>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace {
std::filesystem::path cache_directory;
std::mutex cache_mutex;
constexpr uint32_t cache_version = 1; // glslang 16.0.0 + its known_good SPIRV-Tools.
struct Header { uint32_t magic, version, kind, input_bytes, output_bytes; };
std::filesystem::path cache_path(const void *input, size_t bytes, uint32_t kind) {
    uint64_t hash = 14695981039346656037ull;
    const auto *p = static_cast<const unsigned char *>(input);
    for (size_t i=0; i<bytes; ++i) hash=(hash^p[i])*1099511628211ull;
    char name[64]; std::snprintf(name,sizeof name,"translated-v%u-%u-%016llx.spv",cache_version,kind,(unsigned long long)hash);
    return cache_directory/name;
}
bool load(const void *input,size_t bytes,uint32_t kind,std::vector<uint32_t>& output) {
    std::lock_guard<std::mutex> guard(cache_mutex);
    if (cache_directory.empty() || bytes>4*1024*1024) return false;
    std::ifstream file(cache_path(input,bytes,kind),std::ios::binary);
    Header h{}; file.read(reinterpret_cast<char*>(&h),sizeof h);
    if (!file || h.magic!=0x52535453 || h.version!=cache_version || h.kind!=kind || h.input_bytes!=bytes ||
        h.output_bytes<20 || h.output_bytes%4 || h.output_bytes>16*1024*1024) return false;
    std::vector<char> saved(bytes); file.read(saved.data(),bytes);
    if (!file || std::memcmp(saved.data(),input,bytes)) return false; // Full input equality, including hash collisions.
    output.resize(h.output_bytes/4); file.read(reinterpret_cast<char*>(output.data()),h.output_bytes);
    if (!file || file.peek()!=EOF || output[0]!=0x07230203) return false;
    spvtools::SpirvTools validator(SPV_ENV_VULKAN_1_0);
    return validator.Validate(output);
}
void save(const void *input,size_t bytes,uint32_t kind,const std::vector<uint32_t>& output) {
    std::lock_guard<std::mutex> guard(cache_mutex);
    if (cache_directory.empty()) return;
    static std::atomic<uint64_t> serial{0};
    auto path=cache_path(input,bytes,kind), temporary=path;
    temporary += "."+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count())+
                 "."+std::to_string(serial++)+".tmp";
    Header h{0x52535453,cache_version,kind,(uint32_t)bytes,(uint32_t)(output.size()*4)};
    { std::ofstream file(temporary,std::ios::binary|std::ios::trunc);
      if (!file) return;
      file.write(reinterpret_cast<const char*>(&h),sizeof h); file.write(static_cast<const char*>(input),bytes);
      file.write(reinterpret_cast<const char*>(output.data()),h.output_bytes);
      file.close(); if (!file) return; }
    std::error_code ec;
#ifdef _WIN32
    // Windows rename does not replace an existing (possibly invalid) cache entry.
    if (!MoveFileExW(temporary.c_str(),path.c_str(),MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH))
        std::filesystem::remove(temporary,ec);
#else
    std::filesystem::rename(temporary,path,ec);
    if (ec) std::filesystem::remove(temporary,ec);
#endif
}
uint32_t *copy(const std::vector<uint32_t>& code,size_t *bytes) {
    *bytes=code.size()*4;
    auto *result=static_cast<uint32_t*>(std::malloc(*bytes));
    if (result) std::memcpy(result,code.data(),*bytes); else *bytes=0;
    return result;
}
bool optimize(const uint32_t *input,size_t count,std::vector<uint32_t>& output,bool freeze) {
    spvtools::Optimizer optimizer(SPV_ENV_VULKAN_1_0);
    optimizer.SetMessageConsumer([](spv_message_level_t,const char*,const spv_position_t&,const char* text) {
        std::fprintf(stderr,"[Shader translator] %s\n",text);
    });
    if (freeze) {
        optimizer.RegisterPass(spvtools::CreateFreezeSpecConstantValuePass());
        optimizer.RegisterPass(spvtools::CreateFoldSpecConstantOpAndCompositePass());
        // DXC emitted ordinary bit/compare instructions around the spec words.
        // Propagate those constants before pruning, rather than optimizing all
        // register-selector branches and discarding them late in the pipeline.
        optimizer.RegisterPass(spvtools::CreateCCPPass());
        optimizer.RegisterPass(spvtools::CreateSimplificationPass());
        // Prune frozen combiner branches before the more expensive general passes.
        optimizer.RegisterPass(spvtools::CreateDeadBranchElimPass());
        optimizer.RegisterPass(spvtools::CreateAggressiveDCEPass());
    }
    optimizer.RegisterPerformancePasses();
    return optimizer.Run(input,count,&output);
}
}
extern "C" void resot_shader_cache_init(const char *directory) {
    std::lock_guard<std::mutex> guard(cache_mutex);
    cache_directory=directory ? directory : "";
    std::error_code ec;
    if (!cache_directory.empty()) std::filesystem::create_directories(cache_directory,ec);
    if (ec) cache_directory.clear();
}
extern "C" uint32_t *resot_compile_vertex(const char *glsl,size_t *bytes) {
    *bytes=0; if (!glsl) return nullptr;
    size_t length=std::strlen(glsl);
    std::vector<uint32_t> output;
    if (load(glsl,length,1,output)) return copy(output,bytes);
    static const bool initialized=glslang::InitializeProcess();
    if (!initialized) return nullptr;
    glslang::TShader shader(EShLangVertex);
    shader.setStrings(&glsl,1);
    shader.setEnvInput(glslang::EShSourceGlsl,EShLangVertex,glslang::EShClientVulkan,450);
    shader.setEnvClient(glslang::EShClientVulkan,glslang::EShTargetVulkan_1_0);
    shader.setEnvTarget(glslang::EShTargetSpv,glslang::EShTargetSpv_1_0);
    auto messages=EShMessages(EShMsgSpvRules|EShMsgVulkanRules);
    if (!shader.parse(GetDefaultResources(),450,false,messages)) {
        std::fprintf(stderr,"[Shader translator] vertex parse: %s\n",shader.getInfoLog()); return nullptr;
    }
    glslang::TProgram program; program.addShader(&shader);
    if (!program.link(messages)) { std::fprintf(stderr,"[Shader translator] vertex link: %s\n",program.getInfoLog()); return nullptr; }
    std::vector<uint32_t> raw;
    glslang::SpvOptions options; options.disableOptimizer=true;
    glslang::GlslangToSpv(*program.getIntermediate(EShLangVertex),raw,&options);
    if (!optimize(raw.data(),raw.size(),output,false)) return nullptr;
    save(glsl,length,1,output); return copy(output,bytes);
}
extern "C" uint32_t *resot_optimize_fragment(const uint32_t *spirv,size_t input_bytes,size_t *bytes) {
    *bytes=0; if (!spirv || input_bytes<20 || input_bytes%4) return nullptr;
    std::vector<uint32_t> output;
    if (load(spirv,input_bytes,2,output)) return copy(output,bytes);
    if (!optimize(spirv,input_bytes/4,output,true)) return nullptr;
    save(spirv,input_bytes,2,output); return copy(output,bytes);
}
