# Pinned SDL GPU + DXC SDKs. Build SDL's native query extension from published
# reSOT sources; only SDL3.dll is needed at runtime, not the compiler/SDKs.
param()
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$cache = Join-Path $root 'build/deps'
New-Item -ItemType Directory -Force -Path $cache | Out-Null
function Get-CheckedArchive([string]$Name, [string]$Url, [string]$Hash, [string]$Destination) {
    $archive = Join-Path $cache $Name
    if (-not (Test-Path -LiteralPath $archive)) {
        Invoke-WebRequest -Uri $Url -OutFile $archive
    }
    if ((Get-FileHash -LiteralPath $archive -Algorithm SHA256).Hash -ne $Hash) {
        throw "SHA-256 mismatch: $archive. No files installed."
    }
    Expand-Archive -LiteralPath $archive -DestinationPath $Destination -Force
}
Get-CheckedArchive 'SDL3-devel-3.4.18-VC.zip' `
    'https://github.com/libsdl-org/SDL/releases/download/release-3.4.18/SDL3-devel-3.4.18-VC.zip' `
    '78D84602AE616CFE26B33A73B7D3B9B6B56E8A6650E53D92C9C6CA938F747ACD' $cache
Get-CheckedArchive 'dxc_2026_09_29.zip' `
    'https://github.com/microsoft/DirectXShaderCompiler/releases/download/v1.9.2609/dxc_2026_09_29.zip' `
    'AD31B1FC8443175D204F77A611FDB3EF2EC42759BDC2F1167368DE24A4A7E7F1' (Join-Path $cache 'dxc')
Get-CheckedArchive 'SDL3-3.4.18-source.zip' `
    'https://github.com/libsdl-org/SDL/releases/download/release-3.4.18/SDL3-3.4.18.zip' `
    '9CD42377704398796071B8597CD7E21DA254A43BAD98C4199739647ADC13FA6F' (Join-Path $cache 'sdl-source')
$sdlSource = Join-Path $cache 'sdl-source/SDL3-3.4.18'
$sdlBuild = Join-Path $cache 'sdl-query-build'
& python (Join-Path $PSScriptRoot 'patch-sdl-gpu-query.py') $sdlSource
if ($LASTEXITCODE) { throw 'SDL query patch failed.' }
& python (Join-Path $PSScriptRoot 'run-build-tool.py') cmake -S $sdlSource -B $sdlBuild -A x64 `
    -DSDL_SHARED=ON -DSDL_STATIC=OFF -DSDL_TEST_LIBRARY=OFF -DSDL_TESTS=OFF -DSDL_EXAMPLES=OFF `
    -DSDL_LIBC=OFF -DCMAKE_MSVC_RUNTIME_LIBRARY=MultiThreaded
if ($LASTEXITCODE) { throw 'SDL query configure failed.' }
& python (Join-Path $PSScriptRoot 'run-build-tool.py') cmake --build $sdlBuild --config Release --parallel
if ($LASTEXITCODE) { throw 'SDL query build failed.' }
$bin = Join-Path $root 'bin'
New-Item -ItemType Directory -Force -Path $bin | Out-Null
Copy-Item -LiteralPath (Join-Path $sdlBuild 'Release/SDL3.dll') -Destination $bin -Force
Copy-Item -LiteralPath (Join-Path $cache 'SDL3-3.4.18/LICENSE.txt') `
    -Destination (Join-Path $bin 'LICENSE-SDL3.txt') -Force
@'
SDL3 3.4.18, altered by reSOT: native D3D12/Vulkan occlusion queries, ABI 1.
Upstream source archive SHA-256: 9CD42377704398796071B8597CD7E21DA254A43BAD98C4199739647ADC13FA6F
Published additions: port/third_party/sdl-gpu-query/ and tools/patch-sdl-gpu-query.py
Build: tools/setup-native-gpu.ps1. Licence: LICENSE-SDL3.txt.
'@ | Set-Content -LiteralPath (Join-Path $bin 'SDL3-RESOT.txt') -Encoding utf8
Write-Output 'Native D3D12/Vulkan SDKs and retail query ABI ready. Rebuild with tools/recomp.ps1 -BuildOnly.'

& (Join-Path $PSScriptRoot "setup-shader-compiler.ps1")
if (-not $?) { throw "Shader compiler dependencies are missing." }
