// Exercise the real compiler/cache: corrupt entries must recompile, concurrent
// readers and same-key writers must produce complete deterministic modules.
#include "shader_compiler.h"
#include <atomic>
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

static const char source[] =
    "#version 450\nlayout(location=0) in vec4 position;\n"
    "void main(){gl_Position=position;}\n";

static std::vector<uint32_t> compile() {
    size_t bytes=0;
    auto *data=resot_compile_vertex(source,&bytes);
    if (!data) return {};
    std::vector<uint32_t> result(data,data+bytes/4);
    std::free(data);
    return result;
}

int main() {
    const auto dir=std::filesystem::current_path()/
        ("shader-cache-test-"+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    resot_shader_cache_init(dir.string().c_str());
    const auto expected=compile();
    if (expected.empty()) return 1;
    std::filesystem::path entry;
    for (const auto& file:std::filesystem::directory_iterator(dir)) entry=file.path();
    if (entry.empty() || compile()!=expected) return 2;

    // Broken header, truncated body, wrong full input (including hash collision),
    // invalid SPIR-V with intact magic, and trailing garbage are all cache misses.
    for (int fault=0;fault<5;fault++) {
        {
            std::fstream file(entry,std::ios::binary|std::ios::in|std::ios::out);
            if (fault==0) { uint32_t zero=0; file.write(reinterpret_cast<char*>(&zero),4); }
            if (fault==2) { file.seekp(20); file.put('!'); }
            if (fault==3) {
                // Header + exact GLSL bytes + SPIR-V header: overwrite first instruction.
                file.seekp(20+std::strlen(source)+20);
                uint32_t invalid=0; file.write(reinterpret_cast<char*>(&invalid),4);
            }
            if (fault==4) { file.seekp(0,std::ios::end); file.put('!'); }
        }
        if (fault==1) std::filesystem::resize_file(entry,21);
        if (compile()!=expected || compile()!=expected) return 3+fault;
    }

    // Start with a miss so writers race to atomically replace the same entry.
    std::filesystem::resize_file(entry,0);
    std::atomic<bool> start{false}, failed{false};
    std::vector<std::thread> threads;
    for (int worker=0;worker<4;worker++) threads.emplace_back([&] {
        while (!start.load()) std::this_thread::yield();
        for (int i=0;i<16;i++) if (compile()!=expected) failed=true;
    });
    start=true;
    for (auto& thread:threads) thread.join();
    if (failed || compile()!=expected) return 8;
    for (const auto& file:std::filesystem::directory_iterator(dir))
        if (file.path().extension()==".tmp") return 9;
    resot_shader_cache_init(nullptr);
    if (compile()!=expected) return 10;
    std::cout << "Shader cache: corrupt entries, concurrent readers/writers and disabled cache pass\n";
    return 0;
}
