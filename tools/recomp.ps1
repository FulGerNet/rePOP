# Lifts one Xbox build of the game to C and builds its Windows executable.
#
#   .\tools\recomp.ps1 -Target xbox-demo                 # analyse, lift, build
#   .\tools\recomp.ps1 -Target xbox-retail -SkipAnalysis # relift + build
#   .\tools\recomp.ps1 -Target xbox-retail -BuildOnly    # rebuild what is lifted
#   .\tools\recomp.ps1 -Target xbox-demo -Seeds          # rebuild the seed list
#
# Both targets share the toolkit and runtime in port/third_party/xboxrecomp.
# Each has its own build tree, build/<target>, which compiles the runtime for
# that target only (RESOT_RUNTIME_DEMO or RESOT_RUNTIME_RETAIL, CMakeLists.txt).
#
# Pipeline (the toolkit's tools/): parse Assets/<target>/default.xbe, detect
# functions, recover calling conventions, lift every executable section to C
# under source/<target>/gen. The generated C is derived from the user's own XBE:
# it is ignored by Git and must never be committed. Analysis databases go to
# research/<target>/recomp.
param(
    [ValidateSet('xbox-demo', 'xbox-retail')]
    [string]$Target = 'xbox-demo',
    [string]$Generator = 'Visual Studio 18 2026',
    [int]$Split = 250,
    [switch]$SkipAnalysis,
    [switch]$BuildOnly,
    [switch]$Seeds,          # regenerate source/<target>/seed_functions.json from an unseeded disassembly
    [string[]]$Observed = @(),   # run logs whose unresolved call targets become seeds
    [switch]$AbiCheck        # build the <name>-abi.exe diagnostic variant instead
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$toolkit = "$root\port\third_party\xboxrecomp"
$hashes = @{
    'xbox-demo'   = '79C1A47828630AB0D4E5DD19B1FD036FFA58EA2C0FE729B0D3456DAC3E79D4F5'
    'xbox-retail' = '753C58B191279BF4D1A8B28A936DF36AA222ED566487AB1FBDFCD090E91EE379'
}
$xbe = "$root\Assets\$Target\default.xbe"
$out = "$root\research\$Target\recomp"
$src = "$root\source\$Target"
$seedFile = "$src\seed_functions.json"
# Hand-written code the lifter must know about: a target's own entry hooks
# (sub_XXXXXXXX_enter, with that XBE's addresses) when it has any.
$manual = if (Test-Path "$src\target_hooks.c") { "$src\target_hooks.c" } else { "$root\port\game\recomp_manual.c" }

function Invoke-Native([string]$Exe, [string[]]$Arguments, [string]$WorkingDirectory) {
    # The tools report progress on stderr; Windows PowerShell would turn that
    # into a terminating error under $ErrorActionPreference = 'Stop'.
    $previous = $ErrorActionPreference
    $ErrorActionPreference = 'Continue'
    if ($WorkingDirectory) { Push-Location $WorkingDirectory }
    try {
        & $Exe @Arguments 2>&1 | ForEach-Object { "$_" }
        $code = $LASTEXITCODE
    } finally {
        if ($WorkingDirectory) { Pop-Location }
        $ErrorActionPreference = $previous
    }
    if ($code) { throw "$Exe $($Arguments -join ' ') failed ($code)" }
}
function Invoke-Tool([string[]]$Arguments) { Invoke-Native 'python' $Arguments $toolkit }

if (-not $BuildOnly) {
    if (-not (Test-Path $xbe)) { throw "Missing $xbe (see README: supply your game files)" }
    if ((Get-FileHash $xbe -Algorithm SHA256).Hash -ne $hashes[$Target]) {
        throw "Assets\$Target\default.xbe is not the supported build (SHA-256 $($hashes[$Target]))"
    }
    New-Item -ItemType Directory -Force $out | Out-Null
    $analysis = "$out\analysis.json"
    $disasm = @('-m', 'tools.disasm', $xbe, '-o', "$out\disasm", '--analysis-json', $analysis, '--force')

    if ($Seeds) {
        # Seeds are judged against what the detector finds on its own, so the
        # baseline must be an unseeded disassembly.
        Invoke-Tool @('-m', 'tools.xbe_parser', $xbe, '--json', $analysis)
        Invoke-Tool $disasm
        $kept = @()
        if (Test-Path $seedFile) {
            # Addresses a run observed, or that were listed by hand, survive.
            $kept = (Get-Content $seedFile -Raw | ConvertFrom-Json) |
                Where-Object { $_.note -match '^(observed|listed)' } | ForEach-Object { $_.start }
            Move-Item $seedFile "$out\seed_functions.previous.json" -Force
        }
        $scan = @("$root\tools\seed-scan.py", $xbe, '--analysis-json', $analysis,
                  '--functions', "$out\disasm\functions.json", '--seeds', $seedFile)
        foreach ($address in $kept) { $scan += @('--extra', $address) }
        foreach ($log in $Observed) { $scan += @('--log', (Resolve-Path $log).Path) }
        Invoke-Tool $scan
    } elseif ($Observed.Count) {
        $scan = @("$root\tools\seed-scan.py", $xbe, '--analysis-json', "$out\analysis.json",
                  '--functions', "$out\disasm\functions.json", '--seeds', $seedFile, '--observed-only')
        foreach ($log in $Observed) { $scan += @('--log', (Resolve-Path $log).Path) }
        Invoke-Tool $scan
    }

    if (-not $SkipAnalysis -or $Seeds -or $Observed.Count) {
        Invoke-Tool @('-m', 'tools.xbe_parser', $xbe, '--json', $analysis)
        if (Test-Path $seedFile) { $disasm += @('--seed-functions', $seedFile) }
        Invoke-Tool $disasm
        Invoke-Tool @('-m', 'tools.func_id', $xbe, '--functions', "$out\disasm\functions.json",
            '--strings', "$out\disasm\strings.json", '--xrefs', "$out\disasm\xrefs.json", '-o', "$out\func_id")
        Invoke-Tool @('-m', 'tools.abi_analysis', $xbe, '--disasm-dir', "$out\disasm",
            '--func-id-dir', "$out\func_id", '--output-dir', "$out\abi")
    }
    Invoke-Tool @('-m', 'tools.recomp', $xbe, '--game-name', "PoP SoT $Target", '--all', '--split', "$Split",
        '--gen-dir', "$src\gen", '--disasm-dir', "$out\disasm",
        '--func-id-dir', "$out\func_id", '--abi-dir', "$out\abi",
        '--exclude-manual', $manual)
}

$build = if ($AbiCheck) { "$root\build-abi\$Target" } else { "$root\build\$Target" }
$configure = @("$PSScriptRoot\run-build-tool.py", 'cmake', '-S', $root, '-B', $build, '-G', $Generator, '-A', 'x64',
               "-DRESOT_TARGET=$Target",
               "-DRESOT_ABI_CHECK=$(if ($AbiCheck) { 'ON' } else { 'OFF' })")
Invoke-Native 'python' $configure
Invoke-Native 'python' @("$PSScriptRoot\run-build-tool.py", 'cmake', '--build', $build, '--config', 'Release', '--parallel')
"Built $root\bin\sot-$Target$(if ($AbiCheck) { '-abi' }).exe"
