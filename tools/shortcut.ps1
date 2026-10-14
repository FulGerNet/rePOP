# Puts a shortcut on the desktop that starts a built target through run.ps1,
# full screen, played with keyboard and mouse or a pad, so the game can be
# opened with a double click. run.ps1 still sets the runtime's switches; the
# PowerShell window stays minimised while the game runs.
#
#   .\tools\shortcut.ps1                          # the demo
#   .\tools\shortcut.ps1 -Target xbox-retail
#   .\tools\shortcut.ps1 -Arguments '-Windowed'   # extra run.ps1 switches
param(
    [ValidateSet('xbox-demo', 'xbox-retail')]
    [string]$Target = 'xbox-demo',
    [string]$Arguments = '',
    [string]$Folder = [Environment]::GetFolderPath('Desktop')
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$exe = "$root\bin\sot-$Target.exe"
$names = @{ 'xbox-demo' = 'reSOT - Xbox demo'; 'xbox-retail' = 'reSOT - Xbox retail' }
$link = Join-Path $Folder "$($names[$Target]).lnk"

$shell = New-Object -ComObject WScript.Shell
$s = $shell.CreateShortcut($link)
$s.TargetPath = "$env:SystemRoot\System32\WindowsPowerShell\v1.0\powershell.exe"
$s.Arguments = "-NoProfile -ExecutionPolicy Bypass -File `"$root\tools\run.ps1`" -Target $Target $Arguments".Trim()
$s.WorkingDirectory = $root
$s.WindowStyle = 7   # minimised
$s.IconLocation = if (Test-Path $exe) { "$exe,0" } else { "$root\port\windows\res\resot.ico,0" }
$s.Description = "Prince of Persia: The Sands of Time ($Target), recompiled, full screen"
$s.Save()
"Created $link"
