# IDE channel export regression

No game files are required. The test installs synthetic imports for
IdexChannelObject and XboxSignatureKey. It checks that the exported IDE channel
has a circular empty DeviceQueue.DeviceListHead and independent storage.
The old initialization leaves null links at +0x28/+0x2C, inside the key region.

```
cmake -S tests/idex_channel -B build/idex-channel -A x64
cmake --build build/idex-channel --config Release --target idex-channel-test
ctest --test-dir build/idex-channel -C Release --output-on-failure
```

Layout reference: nxdk lib/xboxkrnl/xboxkrnl.h, IDE_CHANNEL_OBJECT and
KDEVICE_QUEUE. The guest is 32-bit: DeviceQueue starts at +0x24 and its list at
+0x28. This initializes an empty guest queue for host-backed I/O; it does not
implement IDE hardware or asynchronous guest IRP scheduling.
