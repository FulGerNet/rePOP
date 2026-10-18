# Builds the Android app (port/android): one APK, com.fulger.resot, with both
# recompiled games (libresot_demo.so, libresot_retail.so) for arm64-v8a.
#
#   .\tools\build-android.ps1                 # release APK -> bin/reSOT-android.apk
#   .\tools\build-android.ps1 -Debug          # debug APK   -> bin/reSOT-android-debug.apk
#   .\tools\build-android.ps1 -Install        # and adb install it on the connected device
#
# The lifted sources come from tools/recomp.ps1 (source/<target>/gen), as for
# Windows; a target without them is left out of the APK. Game data is never
# packaged: the app installs it from the user's ISO into Android/data.
param(
    [switch]$Debug,
    [switch]$Install
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$project = Join-Path $root 'port/android'
$deps = Join-Path $root 'build/deps'

& (Join-Path $PSScriptRoot 'setup-android.ps1')
if (-not $?) { throw 'Android dependencies are missing.' }

$sdk = $env:ANDROID_HOME
if (-not $sdk) { $sdk = $env:ANDROID_SDK_ROOT }
if (-not $sdk -and (Test-Path 'C:\Android\platforms')) { $sdk = 'C:\Android' }
if (-not $sdk -and (Test-Path "$env:LOCALAPPDATA\Android\Sdk\platforms")) { $sdk = "$env:LOCALAPPDATA\Android\Sdk" }
if (-not $sdk) { throw 'Android SDK not found: set ANDROID_HOME.' }
if (-not (Test-Path (Join-Path $sdk 'ndk/29.0.14206865'))) { throw "NDK 29.0.14206865 missing in $sdk (sdkmanager `"ndk;29.0.14206865`")." }
if (-not (Test-Path (Join-Path $sdk 'cmake/3.30.3'))) { throw "CMake 3.30.3 missing in $sdk (sdkmanager `"cmake;3.30.3`")." }
"sdk.dir=$($sdk -replace '\\', '/')" | Set-Content -LiteralPath (Join-Path $project 'local.properties') -Encoding ascii

$python = (Get-Command python -ErrorAction Stop).Source
$env:RESOT_PYTHON = $python
$gradle = Join-Path $deps 'gradle-9.1.0/bin/gradle.bat'
$task = if ($Debug) { 'assembleDebug' } else { 'assembleRelease' }
Push-Location $project
# Gradle and the NDK print progress and warnings on stderr; Windows
# PowerShell would turn each line into a terminating error under 'Stop'.
$ErrorActionPreference = 'Continue'
try {
    & $gradle --no-daemon $task
    $code = $LASTEXITCODE
} finally { Pop-Location; $ErrorActionPreference = 'Stop' }
if ($code) { throw "Gradle $task failed (exit $code)." }

$variant = if ($Debug) { 'debug' } else { 'release' }
$apk = Join-Path $project "app/build/outputs/apk/$variant/app-$variant.apk"
$bin = Join-Path $root 'bin'
New-Item -ItemType Directory -Force -Path $bin | Out-Null
$out = Join-Path $bin $(if ($Debug) { 'reSOT-android-debug.apk' } else { 'reSOT-android.apk' })
Copy-Item -LiteralPath $apk -Destination $out -Force
Write-Output "APK: $out ($([math]::Round((Get-Item $out).Length / 1MB, 1)) MB)"
if ($Install) {
    & adb install -r $out
    if ($LASTEXITCODE) { throw 'adb install failed.' }
}
