# Runs a recompiled target with the runtime switches it needs and captures its
# diagnostics under logs/. -Seconds 0 runs until the game exits.
#
#   .\tools\run.ps1 -Pad                         # demo, keyboard as the Xbox pad
#   .\tools\run.ps1 -Pad -Aspect 16:9            # widescreen, 2D kept at its 4:3 size
#   .\tools\run.ps1 -Pad -Aspect 16:9 -Fullscreen
#   .\tools\run.ps1 -Target xbox-retail -Pad
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
    [switch]$Pad,               # emulated pad on the OHCI controller, driven by the keyboard
    [string]$Aspect = '',       # picture shape, '16:9' or a ratio such as 2.39; default 4:3
    [switch]$Fullscreen,        # borderless window over the monitor
    [switch]$NoVsync,           # present without waiting for the display
    [switch]$NoAudio,           # leave the APU unmapped: DirectSound finds no device
    [hashtable]$Set = @{}       # extra RECOMP_* switches
)
$root = Split-Path -Parent $PSScriptRoot
$exe = "$root\bin\sot-$Target$(if ($Abi) { '-abi' }).exe"
if (-not (Test-Path $exe)) { throw "$exe not found; run tools\recomp.ps1 -Target $Target" }
$settings = @{
    RECOMP_PB_EXEC   = '1'   # execute the NV2A pushbuffer the lifted D3D builds
    RECOMP_FB_WINDOW = '1'   # the game window
    RECOMP_VBLANK    = '1'   # deliver the vertical-blank interrupt D3D's swap waits for
    RECOMP_HW        = '1'   # rasterise on the host GPU (Direct3D 11)
}
# Where DirectSound's command word sits in the audio DSP's scratch memory, per
# executable. The DSP itself is not emulated, so the runtime acknowledges the
# command there; without it DirectSoundCreate never returns.
#   xbox-demo: sub_002ED590 polls [scratch + 0x810] after posting a command.
$dspDoorbell = @{ 'xbox-demo' = 'gp+0x810' }
if (-not $NoAudio -and $dspDoorbell.ContainsKey($Target)) {
    $settings.RECOMP_AC97_READY = '1'                    # report the codec, emulate the APU
    $settings.RECOMP_APU_DSP_ACK = $dspDoorbell[$Target]
}
if ($Software) { $settings.Remove('RECOMP_HW') }
if ($Watchdog) { $settings.RECOMP_WATCHDOG_SECS = "$Watchdog" }
if ($Pad) { $settings.RECOMP_USB = '1'; $settings.RECOMP_KEYBOARD = '1' }
if ($Aspect) { $settings.RECOMP_HW_ASPECT = $Aspect }
if ($Fullscreen) { $settings.RECOMP_HW_FULLSCREEN = '1' }
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
