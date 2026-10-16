# Runs a recompiled target with the runtime switches it needs and captures its
# diagnostics under logs/. -Seconds 0 runs until the game exits.
#
#   .\tools\run.ps1                              # the demo, full screen; keyboard, mouse or pad
#   .\tools\run.ps1 -Windowed                    # in a window (Alt+Enter / F11 switch while running)
#   .\tools\run.ps1 -Aspect 4:3                  # the original picture shape
#   .\tools\run.ps1 -Target xbox-retail
#   .\tools\run.ps1 -Seconds 180 -SnapshotEvery 5 -Pad `
#       -Set @{RECOMP_PAD_SCRIPT='30000:start:800,36000:a:800'}
param(
    [ValidateSet('xbox-demo', 'xbox-retail')]
    [string]$Target = 'xbox-demo',
    [int]$Seconds = 0,
    [int]$Watchdog = 0,         # seconds; dumps the guest stack and stops the game
    [switch]$DumpFrames,
    [switch]$Software,          # software NV2A rasteriser instead of Direct3D 11
    [int]$SnapshotEvery = 0,    # seconds; keeps numbered copies of the window dump
    [switch]$Abi,               # run the <name>-abi.exe diagnostic build
    [switch]$Pad,               # accepted for old command lines; the pad is always there now
    [switch]$UsbPad,            # the old way: a pad device on the emulated USB controller
    [string]$Aspect = '',       # picture shape, '16:9' or a ratio such as 2.39; default 4:3
    [switch]$Fullscreen,        # the default; kept for old command lines
    [switch]$Windowed,          # a window instead of the whole monitor
    [switch]$NoVsync,           # present without waiting for the display
    [switch]$NoAudio,           # leave the APU unmapped: DirectSound finds no device
    [hashtable]$Set = @{}       # extra RECOMP_* switches
)
$root = Split-Path -Parent $PSScriptRoot
$exe = "$root\bin\sot-$Target$(if ($Abi) { '-abi' }).exe"
if (-not (Test-Path $exe)) { throw "$exe not found; run tools\recomp.ps1 -Target $Target" }
$settings = @{
    RESOT_LAUNCHER_CONFIGURED = '1' # executable defaults do not override -Software/-NoAudio
    RESOT_ASSET_DIR = "$root\Assets\$Target"
    RECOMP_PB_EXEC   = '1'   # execute the NV2A pushbuffer the lifted D3D builds
    RECOMP_FB_WINDOW = '1'   # the game window
    RECOMP_VBLANK    = '1'   # deliver the vertical-blank interrupt D3D's swap waits for
    RECOMP_HW        = '1'   # rasterise on the host GPU (Direct3D 11)
}
# Where DirectSound's command word sits in the audio DSP's scratch memory, per
# executable. The DSP itself is not emulated, so the runtime acknowledges the
# command there; without it DirectSoundCreate never returns.
#   xbox-demo: sub_002ED590 polls [scratch + 0x810] after posting a command.
#   xbox-retail: sub_003E8A27 writes 3 at 0x003E8B8C and polls at 0x003E8B8E.
$dspDoorbell = @{ 'xbox-demo' = 'gp+0x810'; 'xbox-retail' = 'gp+0x810' }
if (-not $NoAudio -and $dspDoorbell.ContainsKey($Target)) {
    $settings.RECOMP_AC97_READY = '1'                    # report the codec, emulate the APU
    $settings.RECOMP_APU_DSP_ACK = $dspDoorbell[$Target]
}
# Give freed memory back to the guest heap. Without it NtFreeVirtualMemory
# returns nothing: on xbox-demo the heap went from 29 to 48 of its 48.5 MB
# over the first two levels, and on the second Inter_11 movie the Bink worker
# (thread routine 0x002AE6C0) got no stack, ran inline on the game thread and
# never returned -- the freeze at the third level.
# Retail also frees startup/thread allocations (retail-thread-id-boot.txt);
# honour those frees instead of permanently consuming its guest heap.
$heapReclaim = @('xbox-demo', 'xbox-retail')
if ($heapReclaim -contains $Target) { $settings.RECOMP_HEAP_RECLAIM = '1' }
if ($Software) { $settings.Remove('RECOMP_HW') }
if ($Watchdog) { $settings.RECOMP_WATCHDOG_SECS = "$Watchdog" }
if ($UsbPad) { $settings.RECOMP_USB = '1' }
if ($Aspect) { $settings.RECOMP_HW_ASPECT = $Aspect }
$settings.RECOMP_HW_FULLSCREEN = if ($Windowed) { '0' } else { '1' }
if ($NoVsync) { $settings.RECOMP_HW_VSYNC = '0' }
if ($SnapshotEvery) { $DumpFrames = $true; $settings.RECOMP_FB_WINDOW_DUMP_EVERY = '60' }
New-Item -ItemType Directory -Force "$root\logs\fb" | Out-Null
if ($DumpFrames) { $settings.RECOMP_FB_DUMP = "$root\logs\fb\f" }
foreach ($key in $Set.Keys) { $settings[$key] = "$($Set[$key])" }
foreach ($key in $settings.Keys) { Set-Item "env:$key" $settings[$key] }
$process = Start-Process $exe -WorkingDirectory $root -PassThru `
    -RedirectStandardOutput "$root\logs\$Target-out.txt" -RedirectStandardError "$root\logs\$Target-err.txt"
if ($SnapshotEvery) {
    $elapsed = 0
    while (-not $process.HasExited -and ($Seconds -le 0 -or $elapsed -lt $Seconds)) {
        Start-Sleep -Seconds $SnapshotEvery
        $elapsed += $SnapshotEvery
        if (Test-Path "$root\logs\fb\f") {
            Copy-Item "$root\logs\fb\f" ("$root\logs\fb\snap_{0:D4}.bmp" -f $elapsed) -ErrorAction SilentlyContinue
        }
    }
    if (-not $process.HasExited) { $process.Kill(); "stopped after $elapsed s" } else { 'game exited by itself' }
} elseif ($Seconds -gt 0) {
    if (-not $process.WaitForExit($Seconds * 1000)) {
        $process.Kill()
        "stopped after $Seconds s"
    } else { 'game exited by itself' }
} else {
    $process.WaitForExit()
    'game exited'
}
