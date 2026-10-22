param([switch]$BuildOnly, [switch]$SkipAnalysis, [switch]$Seeds, [switch]$AbiCheck, [switch]$GenerateOnly, [switch]$AnalyzeOnly,
      [int]$Split=250, [int]$Jobs=4,
      [string]$Generator='Visual Studio 18 2026')
$ErrorActionPreference='Stop'
$argsList=@("$PSScriptRoot/pipeline.py", '--split', "$Split", '--jobs', "$Jobs", '--generator', $Generator)
if ($BuildOnly) { $argsList+='--build-only' }
if ($SkipAnalysis) { $argsList+='--skip-analysis' }
if ($Seeds) { $argsList+='--seeds' }
if ($AbiCheck) { $argsList+='--abi-check' }
if ($GenerateOnly) { $argsList+='--generate-only' }
if ($AnalyzeOnly) { $argsList+='--analyze-only' }
& python @argsList
if ($LASTEXITCODE) { throw "reWW pipeline failed ($LASTEXITCODE)" }
