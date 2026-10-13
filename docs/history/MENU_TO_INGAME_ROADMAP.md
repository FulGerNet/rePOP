# Demo Xbox: percorso minimo menu → in game

## Obiettivo e criterio di verità

Avviare `prince.exe`, mostrare il menu costruito con le risorse della demo Xbox,
accettare l'azione Start e caricare **Entree** con il Prince controllabile.
Ogni schermata deve provenire dagli asset `prince.bf`; un menu disegnato a mano
non conta come risultato. L'intro Bink non è sul percorso critico.

## Dati verificati oggi

| Risorsa BF | Indice | Contenuto già decodificato | Uso probabile da confermare nell'XBE |
|---|---:|---|---|
| `menu3D_wow_ff000cb9.bin` | 36 | 56 oggetti, 45 geometrie, 11.987 triangoli, 24 texture referenziate | scena 3D del menu |
| `Menu_wow_ff0e0165.bin` | 135 | 57 oggetti, 57 geometrie, 2.332 triangoli, 8 texture referenziate | elementi visivi menu |
| `MenuInGame_wow_ff0e01f5.bin` | 138 | stessa geometria del record 135 | menu pausa/in game |
| `0101_Entree_wow_ff0b391b.bin` | 15 | entry identificata nel BF; parser e percorso XBE da decompilare | prima scena dopo il menu, confermata dall'utente |
| `Prince_wow_ff0c0226.bin` | 87 | mesh Prince già analizzata | personaggio |

Il loop XBE `0x12D00` chiama `SOT_ProcessPendingTransition` (`0x12A60`)
prima di `SOT_RunFrame` (`0x12AF0`). Il dispatcher installa i callback input e
render, tratta `-1` come idle e `-2` come teardown, e passa gli altri valori
alla routine `0x121D0`. Questa parte è ora tradotta nel sorgente Windows.
Gli xref Ghidra mostrano che questo selettore non rappresenta le voci del
menu; il percorso del menu dipende dai record BF e dal callback AI.

La subentry `0xCC0003FD` di `Menu_wol` contiene dieci coppie
`(chiave, tipo)` da 8 byte. La funzione XBE `0x29240` percorre esattamente
questo formato e distingue `.wow` e `.wol`. La lista cita `Menu_wow`
(`0x0E000165`) e `MenuInGame_wow` (`0x0E0001F5`); il callsite preciso
del caricamento iniziale del menu resta da tracciare. La decodifica delle
coppie è stata aggiunta al runtime senza usare Jade Toolkit.

Anche il modello AI del menu principale è ora collegato: la subentry
`0x0E000150` contiene coppie `(chiave, estensione)`; il parser XBE
`0x10A430` le percorre, e la tabella callback collega tre funzioni `.ofc`
del menu al codice compilato. La routine con il riferimento diretto a
`Menu_wol` appartiene a `MenuInGame_wow`, quindi va tenuta distinta dal
percorso iniziale. Vedere `GhidraProjects/SOT_XBOX_main_menu_ai_links.md`.

La `.ova` originale fornisce ora i nomi e gli offset delle variabili.
`m_iChoice_NewGame` è a `0x1B0`; `m_iChangeMapKey` è a `0x10C`.
La `.ofc` del cambio mappa usa `0x10C` e il suo callback XBE passa quel
valore a `0x1BFC70`. Resta da dimostrare quale ramo delle scelte scrive
la chiave di Entree. Vedere `GhidraProjects/SOT_XBOX_menu_var_ofc_trace.md`.
La `.ofc` interpretata `0x0E000138` contiene il ramo `load map` e un
riferimento all'array `m_MapIds` all'offset `0x11C`.

## Sequenza di lavoro

| Priorità | Lavoro | Prova di completamento |
|---:|---|---|
| 1 | Seguire i nodi della `.ofc` `0x0E000138` e l'input New Game fino alla scrittura di `m_iChangeMapKey`; verificare la chiave Entree e il callsite iniziale che consuma `Menu_wol`. | Traccia documentata: scelta → chiave Entree → richiesta loader. |
| 2 | Collegare il caricamento delle entry 36 e 135 al backend Windows. Decodificare le texture referenziate e ricavare camera e ordinamento dei layer dagli asset/XBE. | Menu riconoscibile con screenshot e confronto asset; nessuna geometria sostitutiva. |
| 3 | Portare solo l'input necessario: selezione, conferma, ritorno. Seguire lo stato/menu originale nei callback `0xC0930` e `0x19A40`. | Start cambia stato usando la stessa transizione del gioco. |
| 4 | Decompilare il loader originale e caricare Entree (entry 15) e Prince con le dipendenze richieste dal primo spawn; collegare camera e controlli minimi. | Entree e Prince visibili; movimento e collisione base verificati. |
| 5 | Raffinare renderer, animazioni e fisica solo dove bloccano menu o primo gameplay. | Avvio ripetibile dal menu fino a una sessione giocabile. |

## Esclusioni dal percorso critico

Video intro, audio, localizzazione completa, pause menu, animazioni avanzate e
parità frame per frame saranno affrontati dopo il primo avvio in game.

## Comandi rapidi

```powershell
cd windows_harness
cmake -S . -B build-msvc -G Ninja
cmake --build build-msvc --config Release
ctest --test-dir build-msvc -C Release --output-on-failure
```

## Regola di provenienza

**NON PRENDERE CODICE O INVENTARE LETTORI 3D DA JADE TOOLKIT.** I PoP Tools
servono solo al confronto. La ricostruzione deve derivare dall'XBE originale;
il vero `Jade Source Code` può aiutare a riconoscere strutture e routine di una
versione precedente, da verificare contro la demo. Il vecchio parser BF del
repository è un prototipo storico e non è la base del nuovo runtime.
