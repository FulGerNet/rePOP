# Regole di decompilazione della demo Xbox

**NON PRENDERE CODICE O INVENTARE LETTORI 3D DA JADE TOOLKIT.**

- `C:\Users\Admin\Desktop\Prince of Persia Tools\Jade-Toolkit-main` e gli altri PoP Tools sono soltanto riferimenti per confronto e verifica. Non copiarne implementazioni nel runtime e non usarli come base del caricamento delle scene.
- Ricostruire il comportamento dalla demo Xbox originale `Sands of Time demo xbox\default.xbe`, con indirizzi, callsite, layout e prove registrati nei file `GhidraProjects`.
- Si può usare `C:\Users\Admin\Desktop\Prince of Persia Tools\Jade Source Code`, il sorgente autentico di una versione precedente dell'engine, per confrontare nomi e strutture. Verificare sempre ogni differenza contro l'XBE della demo.
- Dopo il main menu, la prima scena è **Entree** (`0101_Entree_wow_ff0b391b.bin`, entry BF 15), non Hall.
- Il vecchio codice `windows_harness/src/bf_scene.cpp` e gli strumenti BF collegati a Jade Toolkit sono prototipi storici. Non usarli come prova di fedeltà né espanderli. Il nuovo percorso buildabile deve essere indipendente da Jade Toolkit.
