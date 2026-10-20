# Dependencies of the Android build (port/android), in build/deps: the pinned
# SDL 3.4.18 source with reSOT's query extension (tools/patch-sdl-gpu-query.py),
# DXC for the SPIR-V host shaders, and Gradle 9.1.0. The same archives and
# hashes as tools/setup-native-gpu.ps1, which the Windows native renderers use.
# The Android SDK, NDK 29.0.14206865, CMake 3.30.3 and a JDK 17+ are not
# downloaded here: install them with Android Studio or sdkmanager.
param()
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$cache = Join-Path $root 'build/deps'
New-Item -ItemType Directory -Force -Path $cache | Out-Null
function Get-CheckedArchive([string]$Name, [string]$Url, [string]$Hash, [string]$Destination, [string]$Marker) {
    if ($Marker -and (Test-Path -LiteralPath $Marker)) { return }
    $archive = Join-Path $cache $Name
    if (-not (Test-Path -LiteralPath $archive)) {
        Invoke-WebRequest -Uri $Url -OutFile $archive
    }
    if ((Get-FileHash -LiteralPath $archive -Algorithm SHA256).Hash -ne $Hash) {
        throw "SHA-256 mismatch: $archive. No files installed."
    }
    Expand-Archive -LiteralPath $archive -DestinationPath $Destination -Force
}
Get-CheckedArchive 'SDL3-3.4.18-source.zip' `
    'https://github.com/libsdl-org/SDL/releases/download/release-3.4.18/SDL3-3.4.18.zip' `
    '9CD42377704398796071B8597CD7E21DA254A43BAD98C4199739647ADC13FA6F' (Join-Path $cache 'sdl-source') `
    (Join-Path $cache 'sdl-source/SDL3-3.4.18/include/SDL3/SDL_gpu.h')
Get-CheckedArchive 'dxc_2026_09_29.zip' `
    'https://github.com/microsoft/DirectXShaderCompiler/releases/download/v1.9.2609/dxc_2026_09_29.zip' `
    'AD31B1FC8443175D204F77A611FDB3EF2EC42759BDC2F1167368DE24A4A7E7F1' (Join-Path $cache 'dxc') `
    (Join-Path $cache 'dxc/bin/x64/dxc.exe')
Get-CheckedArchive 'gradle-9.1.0-bin.zip' `
    'https://services.gradle.org/distributions/gradle-9.1.0-bin.zip' `
    'A17DDD85A26B6A7F5DDB71FF8B05FC5104C0202C6E64782429790C933686C806' $cache `
    (Join-Path $cache 'gradle-9.1.0/bin/gradle.bat')
& python (Join-Path $PSScriptRoot 'patch-sdl-gpu-query.py') (Join-Path $cache 'sdl-source/SDL3-3.4.18')
if ($LASTEXITCODE) { throw 'SDL query patch failed.' }
& python (Join-Path $PSScriptRoot 'patch-sdl-android-driver.py') (Join-Path $cache 'sdl-source/SDL3-3.4.18')
if ($LASTEXITCODE) { throw 'SDL Android driver patch failed.' }
& python (Join-Path $PSScriptRoot 'patch-sdl-android-events.py') (Join-Path $cache 'sdl-source/SDL3-3.4.18')
if ($LASTEXITCODE) { throw 'SDL Android event-wait patch failed.' }
# Pinned upstream source; the commit pins liblinkernsbypass via .gitmodules.
$adreno = Join-Path $cache 'libadrenotools'
$adrenoCommit = '8fae8ce254dfc1344527e05301e43f37dea2df80'
if (-not (Test-Path (Join-Path $adreno 'CMakeLists.txt'))) {
    & git clone --recursive https://github.com/bylaws/libadrenotools.git $adreno
    if ($LASTEXITCODE) { throw 'libadrenotools clone failed.' }
}
$actualCommit = & git -C $adreno rev-parse HEAD
if ($actualCommit -ne $adrenoCommit) {
    & git -C $adreno checkout --detach $adrenoCommit
    if ($LASTEXITCODE) { throw 'libadrenotools pinned checkout failed.' }
}
& git -C $adreno submodule update --init --recursive
if ($LASTEXITCODE) { throw 'libadrenotools dependency checkout failed.' }
Write-Output 'Android dependencies ready. Build with tools/build-android.ps1.'
