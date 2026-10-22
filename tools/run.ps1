param([string]$AssetDir, [int]$SmokeSeconds=0, [switch]$Windowed)
$ErrorActionPreference='Stop'
$root=Split-Path -Parent $PSScriptRoot
$exe=Join-Path $root 'bin/ww-xbox-retail.exe'
if (-not (Test-Path -LiteralPath $exe)) { throw 'Build reWW first with tools/recomp.ps1' }
if ($AssetDir) { $env:REWW_ASSET_DIR=(Resolve-Path -LiteralPath $AssetDir).Path }
if ($Windowed) { $env:RECOMP_HW_FULLSCREEN='0' }
$runArgs=@()
if ($SmokeSeconds -gt 0) { $runArgs=@('--smoke-seconds', "$SmokeSeconds") }
& $exe @runArgs
if ($LASTEXITCODE) { throw "reWW exited with $LASTEXITCODE" }
