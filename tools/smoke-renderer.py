"""RE-WW: bounded, hash-bound renderer checks using the inherited GPU readback.

Nonblack pixels and menu file reads are activity checks, not gameplay proof.
Captures/logs stay in ignored logs/; no desktop input or saved options change.
"""
import argparse
from datetime import datetime, timezone
import hashlib
import json
import os
from pathlib import Path
import re
import struct
import subprocess

from pipeline import HASH, ROOT, XBE


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest().upper()


def framebuffer(path):
    data = path.read_bytes()
    if len(data) < 54 or data[:2] != b'BM':
        raise ValueError('Missing BMP header')
    offset, = struct.unpack_from('<I', data, 10)
    width, height, planes, bits, compression = struct.unpack_from('<iiHHI', data, 18)
    if width <= 0 or height == 0 or planes != 1 or bits != 24 or compression != 0:
        raise ValueError('Expected uncompressed 24-bit framebuffer')
    stride = (width * 3 + 3) & ~3
    if offset < 54 or offset + stride * abs(height) > len(data):
        raise ValueError('Truncated framebuffer')
    colors = set()
    nonblack = 0
    for y in range(abs(height)):
        row = data[offset + y * stride:offset + y * stride + width * 3]
        for x in range(0, len(row), 3):
            pixel = row[x:x + 3]
            colors.add(pixel)
            nonblack += max(pixel) > 8
    return {'width': width, 'height': abs(height), 'colors': len(colors),
            'nonblack_fraction': nonblack / (width * abs(height)), 'sha256': digest(path)}


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--renderer', choices=('d3d11', 'd3d12', 'vulkan'), default='d3d11')
    p.add_argument('--seconds', type=int, default=45)
    p.add_argument('--pad-script', default='', help='Inherited RECOMP_PAD_SCRIPT timeline or @file; no desktop input')
    p.add_argument('--pad-live', action='store_true', help='Create a live pad command file inside the capture directory')
    p.add_argument('--audio', action='store_true', help='Capture the existing APU output WAV and voice format diagnostics')
    p.add_argument('--frame-trace', action='store_true', help='Arm the inherited frame trace with a flag file created during the run')
    args = p.parse_args()
    if not 15 <= args.seconds <= 600:
        p.error('--seconds must be between 15 and 600')
    if digest(XBE) != HASH:
        raise SystemExit('Unsupported WW XBE SHA-256')
    exe = ROOT / 'bin/ww-xbox-retail.exe'
    executable_hash = digest(exe)
    stamp = datetime.now(timezone.utc).strftime('%Y%m%dT%H%M%S%fZ')
    out = ROOT / 'logs' / f'renderer-{args.renderer}-{stamp}'
    out.mkdir(parents=True)
    capture = out / 'frame.bmp'
    env = dict(os.environ)
    # Use the runtime already shared with reSOT, with a controlled renderer,
    # default asset root and no inherited scripted/controller input.
    for key in list(env):
        if key.upper().startswith(('RECOMP_', 'RESOT_', 'REWW_')):
            del env[key]
    env.update(RESOT_RENDERER=args.renderer, REWW_ASSET_DIR=str(XBE.parent),
               REWW_SAVE_DIR=str(out / 'saves'),
               RECOMP_HW_FULLSCREEN='0', RECOMP_FB_DUMP=str(capture),
               RECOMP_FB_WINDOW_DUMP_EVERY='60', RECOMP_PAD_SCRIPT=args.pad_script)
    if args.pad_live:
        live = out / 'pad-live.txt'
        live.write_text('')
        env['RECOMP_PAD_LIVE'] = str(live)
        print(f'Live pad: {live}', flush=True)
    if args.audio:
        env['RECOMP_APU_WAV'] = str(out / 'audio.wav')
        env['RECOMP_APU_TRACE'] = '1'
    if args.frame_trace:
        gate = out / 'frame-trace.flag'
        env['RECOMP_FRAME_TRACE'] = str(gate)
        env['RECOMP_FRAME_TRACE_METHODS'] = '1'
        env['RECOMP_HW_TRACE_PIXEL'] = '320,240'
        print(f'Frame trace gate: {gate}', flush=True)
    startup = None
    if os.name == 'nt':
        startup = subprocess.STARTUPINFO()
        startup.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startup.wShowWindow = 0
    report = {'xbe_sha256': HASH, 'executable_sha256': executable_hash,
              'save_directory': env['REWW_SAVE_DIR'],
              'requested_renderer': args.renderer, 'seconds': args.seconds}
    with (out / 'stdout.txt').open('wb') as stdout, (out / 'stderr.txt').open('wb') as stderr:
        try:
            run = subprocess.run([str(exe), '--smoke-seconds', str(args.seconds)],
                                 cwd=ROOT, env=env, stdout=stdout, stderr=stderr,
                                 startupinfo=startup, timeout=args.seconds + 30)
            report['exit_code'] = run.returncode
        except subprocess.TimeoutExpired:
            report['timeout'] = True  # subprocess.run kills and reaps its own child.
    log = (out / 'stderr.txt').read_text(errors='replace')
    if args.audio:
        wav = out / 'audio.wav'
        report['audio_capture'] = str(wav) if wav.exists() else None
    active = re.findall(r'\[HW\] active renderer: ([^\r\n]+)', log)
    report['active_renderer'] = active[-1] if active else None
    expected = {'d3d11': 'Direct3D 11', 'd3d12': 'D3D12 native', 'vulkan': 'Vulkan native'}
    report['backend_matches'] = bool(active and active[-1].lower().startswith(expected[args.renderer].lower()))
    report['smoke_deadline'] = '[SMOKE] requested run duration completed' in log
    report['menu_assets_read'] = 'P5MAIN.MGM' in log
    report['unresolved_icalls'] = log.count('[ICALL] Failed to resolve VA')
    report['invalid_icalls'] = len(re.findall(r'\[ICALL\] target .* is not code', log))
    report['untranslated_reached'] = sorted(set(re.findall(
        r'untranslated instruction REACHED: ([^\r\n]+)', log)))
    try:
        report['framebuffer'] = framebuffer(capture)
    except (OSError, ValueError) as error:
        report['capture_error'] = str(error)
    frame = report.get('framebuffer', {})
    report['activity_pass'] = (report.get('exit_code') == 0 and report['smoke_deadline']
                               and report['backend_matches'] and report['unresolved_icalls'] == 0
                               and report['invalid_icalls'] == 0
                               and frame.get('nonblack_fraction', 0) > .01
                               and frame.get('colors', 0) > 16)
    report['limitations'] = 'GPU activity only; inspect frame.bmp. Input, timing and gameplay require separate validation.'
    (out / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report, indent=2))
    print(f'Artifacts: {out}')
    return 0 if report['activity_pass'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
