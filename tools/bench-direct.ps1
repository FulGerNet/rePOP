# Runs one build in a throw-away folder for a before/after measurement, so that
# nothing touches the player's resot-options.ini, saves or shader cache: the
# executable reads and writes those beside itself. Output goes to
# build/bench/<Label>/ (ignored): err.txt, env.txt, snap_*.bmp.
#
#   .\tools\bench-direct.ps1 -Label demo-off -Set @{RESOT_DIRECT_DRAW='0'}
#
# The default pad script is the run into Entree recorded in docs/VALIDATION.md.
param(
    [ValidateSet('xbox-demo', 'xbox-retail')]
    [string]$Target = 'xbox-demo',
    [Parameter(Mandatory)][string]$Label,
    [int]$Seconds = 150,
    [string]$Exe = '',
    [string]$PadScript = '30000:start:800,36000:a:800,62000:start:800,70000:start:800,78000:start:800',
    [int]$SnapshotEvery = 0,
    [switch]$KeepCache,          # keep the shader cache of an earlier run of this label
    [hashtable]$Set = @{}
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
if (-not $Exe) { $Exe = "$root\bin\sot-$Target.exe" }
$dir = "$root\build\bench\$Label"
New-Item -ItemType Directory -Force $dir | Out-Null
Get-ChildItem $dir -File | Remove-Item -Force
if (-not $KeepCache -and (Test-Path "$dir\shadercache")) { Remove-Item -Recurse -Force "$dir\shadercache" }
$copy = "$dir\sot-$Target.exe"
Copy-Item $Exe $copy
Copy-Item "$root\bin\SDL3.dll" $dir
$pdb = [IO.Path]::ChangeExtension($Exe, 'pdb')
if (Test-Path $pdb) { Copy-Item $pdb "$dir\sot-$Target.pdb" }  # RESOT_PROFILE_MS names routines through it

$settings = @{
    RESOT_LAUNCHER_CONFIGURED = '1'
    RESOT_ASSET_DIR = "$root\Assets\$Target"
    RECOMP_PB_EXEC = '1'; RECOMP_FB_WINDOW = '1'; RECOMP_VBLANK = '1'; RECOMP_HW = '1'
    RECOMP_AC97_READY = '1'; RECOMP_APU_DSP_ACK = 'gp+0x810'; RECOMP_HEAP_RECLAIM = '1'
    RECOMP_HW_FULLSCREEN = '0'; RECOMP_HW_VSYNC = '0'
    RECOMP_HW_SHADER_CACHE = "$dir\shadercache"
    RECOMP_PAD_SCRIPT = $PadScript
}
if ($SnapshotEvery) {
    $settings.RECOMP_FB_DUMP = "$dir\f"
    $settings.RECOMP_FB_WINDOW_DUMP_EVERY = '60'
}
foreach ($key in $Set.Keys) { $settings[$key] = "$($Set[$key])" }
foreach ($key in $settings.Keys) { Set-Item "env:$key" $settings[$key] }

$hash = (Get-FileHash $copy -Algorithm SHA256).Hash
$sdl = (Get-FileHash "$dir\SDL3.dll" -Algorithm SHA256).Hash
$xbe = (Get-FileHash "$root\Assets\$Target\default.xbe" -Algorithm SHA256).Hash
$head = (& git -C $root rev-parse HEAD)
@("exe $hash", "sdl $sdl", "xbe $xbe", "head $head", "seconds $Seconds") +
    ($settings.Keys | Sort-Object | ForEach-Object { "$_=$($settings[$_])" }) | Set-Content "$dir\env.txt"

$p = Start-Process -FilePath $copy -WorkingDirectory $dir -PassThru -WindowStyle Normal `
    -RedirectStandardOutput "$dir\out.txt" -RedirectStandardError "$dir\err.txt"
for ($t = 0; $t -lt $Seconds; $t += 5) {
    Start-Sleep -Seconds 5
    if ($p.HasExited) { break }
    if ($SnapshotEvery -and ($t % $SnapshotEvery) -eq 0 -and (Test-Path "$dir\f")) {
        Copy-Item "$dir\f" ("$dir\snap_{0:D4}.bmp" -f $t) -ErrorAction SilentlyContinue
    }
}
$exited = $p.HasExited
if (-not $exited) { Stop-Process -Id $p.Id -Force }
"$Label done; exited early: $exited; exit hash $hash"
