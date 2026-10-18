# Compatibility entry point: installs the native GPU SDKs, never DXVK.
param()
& (Join-Path $PSScriptRoot 'setup-native-gpu.ps1')
