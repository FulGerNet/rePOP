# Pinned upstream shader compiler/optimizer. Source only, never game shaders.
$ErrorActionPreference = 'Stop'
$deps = Join-Path (Split-Path -Parent $PSScriptRoot) 'build/deps'
New-Item -ItemType Directory -Force -Path $deps | Out-Null
$packages = @(
    @('glslang', 'a57276bf558f5cf94d3a9854ebdf5a2236849a5a'),
    @('SPIRV-Tools', '7f2d9ee926f98fc77a3ed1e1e0f113b8c9c49458'),
    @('SPIRV-Headers', '01e0577914a75a2569c846778c2f93aa8e6feddd')
)
foreach ($package in $packages) {
    $name, $revision = $package
    $folder = Join-Path $deps $name.ToLowerInvariant()
    if (-not (Test-Path -LiteralPath $folder)) {
        & git clone --no-checkout "https://github.com/KhronosGroup/$name.git" $folder
        if ($LASTEXITCODE) { throw "Could not download $name" }
        & git -C $folder checkout --detach $revision
        if ($LASTEXITCODE) { throw "Could not check out $name $revision" }
    }
    $actual = & git -C $folder rev-parse HEAD
    if ($LASTEXITCODE -or $actual -ne $revision) { throw "$name must be at $revision (found $actual)" }
}
Write-Output 'Native shader compiler dependencies ready.'
