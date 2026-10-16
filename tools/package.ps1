# Prepare a portable folder from the user's own game files. Outputs and game
# files stay under ignored bin/. Never distribute the disc files with reSOT.
param(
    [ValidateSet('xbox-demo', 'xbox-retail')]
    [string]$Target = 'xbox-demo'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$assets = Join-Path $root "Assets/$Target"
$exe = Join-Path $root "bin/sot-$Target.exe"
$destination = Join-Path $root "bin/portable/$Target"
if (-not (Test-Path -LiteralPath $exe)) { throw "Build $Target first with tools/recomp.ps1." }
$files = @('prince.bf', 'video', 'sound')
if ($Target -eq 'xbox-retail') { $files += @('shaders.bin', 'MEDIA', 'POP1', 'POP2') }
foreach ($file in $files) {
    if (-not (Test-Path -LiteralPath (Join-Path $assets $file))) { throw "Missing $assets/$file" }
}
New-Item -ItemType Directory -Force -Path $destination | Out-Null
Copy-Item -LiteralPath $exe -Destination $destination -Force
foreach ($file in $files) {
    Copy-Item -LiteralPath (Join-Path $assets $file) -Destination $destination -Recurse -Force
}
if ($Target -eq 'xbox-demo') {
    foreach ($file in @('preview.bik', 'preview.bmp')) {
        $optional = Join-Path $assets $file
        if (Test-Path -LiteralPath $optional) {
            Copy-Item -LiteralPath $optional -Destination $destination -Force
        }
    }
}
@"
reSOT - $Target

Double-click sot-$Target.exe to play. Keep the game files in this folder.
default.xbe is needed to build, not to run this compiled executable.
Space / controller A: skip a video. F5: FPS and Current WOW overlay.
F6: graphics and controls options (saved beside the executable).
Alt+Enter / F11: full screen or window. Alt+F4: exit.
Keyboard: WASD move, Space jump, Esc pause, mouse camera.

This folder contains your own disc files. Do not redistribute them.
"@ | Set-Content -LiteralPath (Join-Path $destination 'START-HERE.txt') -Encoding utf8
Write-Output "Ready: $destination/sot-$Target.exe"
