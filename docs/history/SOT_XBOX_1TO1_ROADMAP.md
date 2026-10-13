# Sands of Time Xbox demo — roadmap di ricostruzione 1:1

Questo documento separa ciò che è verificato nell'XBE o negli asset da ciò che è
ancora una ricostruzione. “1:1” significa parità osservabile della demo, non solo
una scena graficamente simile.

## Stato eseguibile attuale

- [x] BigFile v37, FAT, sub-entry e decompressione LZO.
- [x] Entry iniziale `1101_Hall_wow_ff0b3977.bin` (indice 11).
- [x] GAO visuali, riferimenti GEO diretti/gruppi e matrici globali column-major.
- [x] 168 istanze, 89 geometrie e 25.955 triangoli della Hall.
- [x] Catena GAO `grm_key` -> multi-materiale -> slot `matId` -> materiale foglia.
- [x] Clamp degli slot oltre limite sull'ultimo materiale, come `FUN_004473b0`.
- [x] Import del Prince originale dall'entry 87 `Prince_wow_ff0c0226.bin`:
  35 oggetti, 35 GEO, 1.090 triangoli, 25 materiali, 8 texture referenziate.
- [x] Istanza Prince comandabile, camera follow e indicatore di movimento.
- [x] Camera libera, depth buffer, griglia, assi, wireframe e spawn X/Y/Z.
- [ ] Texture Xbox decodificate e campionate dagli shader.
- [ ] Skinning e animazioni Jade originali (il movimento corrente anima solo
  l'istanza, non lo scheletro).
- [ ] Collisione, gravità, locomozione e camera gameplay originali.

## Confine recuperato dall'XBE

Il bootstrap Xbox entra nel gioco a `SOT_DemoMain` (`0x000110B0`). La routine
costruisce i path `prince.bf`, `sound\\`, `sound\\english\\`, `video\\`, inizializza
gamepad/MU, riproduce `e3_intro.int`, chiama `SOT_GameSystemsInit` (`0x11880`),
`SOT_SessionInit` (`0x11B30`) e infine `SOT_MainLoop` (`0x12D00`).

Il frame normale passa per `SOT_RunFrame` (`0x12AF0`). Gli slot renderer
confermati sono: clear `ctx+0x14 -> 0xEF2A0`, present `ctx+0x1C -> 0xEF300`,
stato `ctx+0x20 -> 0xEF310`, vista/proiezione `ctx+0x24 -> 0xEF340`, dispatcher
opcode `ctx+0x2C -> 0xF02F0`. Il percorso scena principale è `0x28810`.

## Passi per la parità 1:1

1. **Manifest di caricamento iniziale** — seguire in Ghidra la transizione dopo
   il filmato intro e associare ogni richiesta BF alla prima sessione. Criterio:
   stesso ordine di entry, dipendenze e chiavi della build Xbox.
2. **Texture Xbox** — identificare header, mip, swizzle e formati DXT/palettizzati;
   caricare tutte le 24 texture Hall e le 8 Prince. Criterio: hash/immagini di ogni
   mip e associazione per elemento uguali ai PoP tools.
3. **Material renderer** — implementare flags Jade: color-op, alpha test, blend,
   no-Z-write, texture layers, RLI e vertex color. Criterio: ogni opcode/stato
   usato dalla prima scena ha un test e una cattura comparativa.
4. **Prince closure** — caricare Prince, costume attivo, armi, targeting helpers,
   skeleton GAO e dipendenze transitive senza euristiche sul nome.
5. **Animazioni** — decodificare bank/curve, bone mapping, bind pose, blending e
   root motion. Criterio: idle, walk/run, salto e transizioni coincidono frame per
   frame a parità di delta time.
6. **Input** — riprodurre dead-zone, mapping e edge/hold del controller Xbox.
7. **Fisica/collisione** — colmap Jade, sweep del personaggio, gravità, scale,
   ledge/wall interaction e trigger. Criterio: traiettorie e contatti comparati.
8. **Camera originale** — identificare GRO type 6, controller, collision avoidance,
   smoothing e FOV; collegare la camera al player invece dell'attuale follow rig.
9. **Gameplay/sessione** — portare i record attivi e le fasi osservate sotto
   `0x19890`, inclusi script/AI e richieste pendenti con priorità originale.
10. **Audio/video/UI** — intro, stream SB/SB2, HUD, pause, sottotitoli e transizioni.
11. **Validazione differenziale** — registrare input deterministico, frame time,
   trasformazioni, chiamate renderer e audio; confrontare Xbox e Windows con
   tolleranze esplicite. Nessuna fase è “1:1” senza questa prova.

## Regole di evidenza

- Un nome funzione è definitivo solo con callsite, accessi ai campi e comportamento
  coerenti; stringhe e nomi asset da soli sono indizi.
- Layout Xbox a 32 bit e strutture host a 64 bit restano separati.
- Proxy, animazioni procedurali e fallback cromatici devono essere indicati come
  tali finché sostituiti dai dati originali.
- Ogni milestone deve mantenere build, test parser e smoke D3D11 verdi.
