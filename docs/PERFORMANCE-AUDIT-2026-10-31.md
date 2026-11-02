# Studio prestazioni reSOT — 31 ottobre 2026

**Conclusione:** il margine più credibile è ridurre il lavoro e le dipendenze tra gioco ricompilato, interprete dei comandi NV2A e backend host. Sostituire D3D11 con D3D12 o Vulkan, da solo, non elimina questi costi. I fix recenti hanno prodotto miglioramenti documentati; FPS medi, scatti da compilazione e prestazioni Android richiedono diagnosi distinte. Nessun progetto esterno esaminato dimostra un raddoppio degli FPS di reSOT.

Studio del sorgente e dei log conservati, con ricerca web/GitHub su fonti primarie. Non sono stati avviati giochi, installati componenti, modificati renderer o eseguiti nuovi benchmark. HEAD letto: `4b8481f5633488dfb4ef212d847dd4ec0146da7e`; il working tree aveva già modifiche, incluse le ottimizzazioni native/Android del 31 ottobre. Queste sono state lette e preservate. Non è possibile attribuire tutti i vecchi log a questo esatto sorgente: manca un'identità completa della build nei log.

**Architettura verificata**

Il percorso effettivo studiato è:

`C ricompilato/XDK → PUT/KickOff/MMIO → scanner pushbuffer → nv2a_pb_exec_method → preparazione risorse/geometria/stato → D3D11 diretto oppure SDL GPU D3D12/Vulkan → driver/GPU`.

I file centrali sono `src/kernel/nv2a_pb_scan.c`, `nv2a_pb_exec.c`, `xbox_memory_layout.c`, `nv2a_hw_d3d11.inc`, `nv2a_hw_native.inc` e i due include della visibilità sotto `port/third_party/xboxrecomp/`. Il vecchio percorso `src/d3d/` e `src/nv2a/nv2a_pgraph_d3d11.c` non va automaticamente identificato con il percorso caldo di questi log. Windows D3D12/Vulkan sono encoder nativi SDL, non DXVK o D3D11On12. Android usa Vulkan.

**Evidenze: cosa è lento e in quale versione**

| Evidenza | Osservazione | Limite |
| --- | --- | --- |
| Windows retail D3D12, `bin/logs/xbox-retail-err.txt`, copia letta il 31/10, RTX 3060 | 15 finestre: 85,6–140,6 FPS, mediana 102,8. Snapshot executor 2,47–6,27 ms, mediana 4,14. | Mediana delle finestre di log, non mediana dei singoli frame; scene variabili. |
| Stesso log D3D12 | 48,3–63,8 render pass/frame, mediana 55,2; 2,0–3,1 submission/frame. | Non misura il costo GPU di ciascun pass; non tutti i pass sono eliminabili. |
| Stesso log D3D12 | Attesa KickOff 3.663–4.425 ms per intervallo di circa 10 s; mediana 4.035,5 ms. Ultimo: 24.015 KickOff, 15.780 attese, executor 4.807 ms. | Le attese si sovrappongono al lavoro dell'executor: non sono quattro secondi recuperabili integralmente. |
| Stesso log D3D12 | Prima finestra: frame massimo 611,3 ms e cinque frame oltre 100 ms; cold-reference waits 848,1 ms cumulativi. Fine: 849,5 ms cumulativi e ultimo massimo 24,5 ms. | Forte distinzione tra avvio freddo e regime. Correlazione, non attribuzione del singolo frame da 611 ms alla compilazione. |
| Windows retail Vulkan, `logs/xbox-retail-err.txt`, file del 30/10, RTX 3060 | Nelle ultime finestre circa 1.467–1.500 draw/frame, 57–60 FPS, executor circa 10 ms, texture circa zero/frame; cold waits fermi a 58 ms cumulativi. | Build e scene diverse dal D3D12 del 31/10. Non è un confronto tra API. |
| Android retail, profili del 21/10 in `docs/VULKAN-PERFORMANCE.md` e log associati | Scene da 1.622 draw/frame: circa 18–22 FPS e 35–39 ms di executor; 52–57% dei cicli campionati del processo sul thread executor. | Evidenza storica, precedente a cache geometrica e altri fix. Non descrive automaticamente l'APK corrente. |
| Android, A/B ripetuto del payload batching | Executor circa 38,3 → 34,7 ms e FPS circa 20,7 → 21,5, a parità di 1.622 draw. | Dimostra un miglioramento locale limitato; non 60 FPS, né un guadagno universale. |
| `docs/VALIDATION.md`, 31/10 | L'utente aveva già confermato prestazioni ottime su D3D11/Vulkan/demo; i fix più recenti di pass/core/turbo risultavano solo costruiti e testati. | Lo studio non converte quei build/test in conferma di gameplay o di velocità. Il nuovo log D3D12 contiene i contatori dei pass ma non un A/B. |

Le copie dei due log Windows, il parser ripetibile e `summary.json` sono in `research/performance-audit-2026-10-31/`, ignorata da Git. SHA-256 D3D12: `40883f9b8bc77c241fe0e8fb64ee91bfb57783cd7e91819fd4c1a614ed0e90c8`; Vulkan: `1154c80793f1212eb24fd27f6baa0c3304ad9b2168d2b98df7b50313042653af`. Questi identificano i log, non gli eseguibili. Nessun dato del gioco va pubblicato con lo studio.

**1. Dipendenza gioco/executor: causa osservata, recupero ancora da misurare**

`xbox_memory_layout.c:198` sceglie retail a una submission di anticipo e demo sincrona. `xbox_Nv2aWaitClear` a riga 252 circa attende l'ack quando l'executor resta indietro. Il nuovo log retail mostra migliaia di piccoli segmenti al secondo e molto tempo del thread gioco in attesa. Questo limita il parallelismo utile e rende importante il costo CPU per segmento, anche se la GPU moderna è veloce.

Non alzare semplicemente `RESOT_KICK_AHEAD`: i commenti e la validazione registrano riuso prematuro dei dati, payload float letti come salti del pushbuffer, scene nere e crash. La demo con anticipo 1 aveva anche rallentato da 222 a 184 FPS nella prova citata dal sorgente. Le evidenze demo e retail restano separate.

La direzione ad alto potenziale è un contratto corretto di proprietà dei dati: snapshot immutabili dei comandi e delle risorse necessarie, oppure tracking affidabile delle scritture/consumo, prima di ampliare la coda. Snapshot e copie possono costare più del beneficio: vanno misurati. Accelerare l'executor riduce inoltre l'attesa del gioco senza cambiare la profondità della coda.

**2. Preparazione CPU ripetuta: il rendering nativo continua a tradurre il lavoro Xbox**

I vecchi profili Android attribuiscono campioni all'interprete dei metodi, scanner, `memmove`, driver Vulkan e aggiornamento descrittori. Queste sono percentuali di cicli CPU campionati, non tempo GPU né percentuali additive del frame. Il batching dei payload è già implementato e il suo A/B mostrava perché un singolo fix non bastava.

Nel sorgente attuale `ng_draw_program_batch` (`nv2a_hw_native.inc:2015`) continua a cercare gli indici distinti, leggere/convertire attributi, costruire triangoli e catturare lo stato. Su miss la geometria passa da buffer CPU a staging e quindi buffer GPU (`ng_flush_draws:1594`, upload a circa 1677). Anche gli hit hanno validazione degli indici e confronto byte per byte delle sorgenti. La classificazione HUD/widescreen può ancora chiamare l'interprete dei vertex shader sulla CPU; non significa che tutti i vertex shader siano eseguiti lì.

Candidati: cache di pacchetti decodificati con verifica completa dei byte e dipendenze di stato; percorsi veloci per formati realmente osservati; risorse persistenti per mesh statiche. Non si possono riutilizzare ciecamene draw completi, costanti per istanza o report di visibilità.

**3. Cache geometrica utile ma legata a buffer transitori**

`resot_geometry_cache.h` ha 2.048 slot diretti, budget snapshot 16 MiB e massimo 256 KiB per sorgente. `ng_queue_reserve` (`nv2a_hw_native.inc:1850`) cambia generazione quando il vertex/index ring gira: le entrate della generazione precedente smettono di essere hit. Retail usa ring da 16/2 MiB (`nv2a_hw_d3d11.inc:129`), condivisi dimensionalmente con il native encoder; la demo Windows usa 64/8 MiB.

Nel log D3D12 finale: 1.061.767 hit, 371.257 miss e 676.878 bypass; circa 22,16 GB decimali cumulativi di upload evitati. Nel vecchio Vulkan: 2.174.158 hit, 3.844.877 miss e 402.188 bypass; circa 11,03 GB evitati. Sono traffico cumulativo, non RAM occupata o guadagno FPS. Questi contatori non giustificano confronti diretti tra backend, essendo scene/build diverse.

Il codice prova che esiste invalidazione per generazione; i log non separano miss da wrap, collisioni, memoria cambiata e budget. Prima misura da aggiungere: contatori per queste cause. Poi sperimentare una cache residente separata dal ring di streaming, con espulsione e pensionamento tramite fence. Un ring più grande è un esperimento semplice, ma può spostare il limite e aumentare memoria senza risolverlo.

**4. Render pass e visibilità: costo strutturale, soprattutto da verificare su mobile**

`ng_flush_draws` apre e chiude pass; cambi di superficie, upload, compositing, clear e query possono interrompere il flusso. Il codice attuale ha già clear rinviati in load op e query nello stesso pass. Quindi proporli come novità sarebbe scorretto. Rimangono pass che caricano e conservano colore e depth/stencil (`nv2a_hw_native.inc:1751`). Il nuovo log conta ancora circa 55 pass/frame di mediana.

Su GPU tile-based, load/store e cambi di pass possono aumentare banda esterna e lavoro di binning. È una spiegazione architetturale supportata da [Khronos: render-pass attachments](https://docs.vulkan.org/samples/latest/samples/performance/render_passes/README.html) e [TBR best practices](https://docs.vulkan.org/guide/latest/tile_based_rendering_best_practices.html); il suo peso nell'APK attuale resta non misurato. Il contatore dei pass Windows non dimostra un numero identico su Android né traffico DRAM proporzionale.

Le query retail sono risultati reali del gioco. Non vanno tolte o sostituite con visibilità inventata. Il percorso nativo le legge dopo fence con `SDL_QueryGPUFence`; D3D11 usa `GetData(...DONOTFLUSH)` con polling non bloccante. Non esiste qui la prova di un readback GPU sincrono obbligatorio a ogni draw. Il problema accertato in passato era anche la frequenza di submission/flush; ora c'è batching fino a 8 ms e un idle kick forzato.

Esperimento prioritario: classificare ogni chiusura del pass per causa, distinguere dimensione/attachment e misurare GPU e banda. Conservare depth solo dove serve richiede analisi del suo uso successivo; imporre `DONT_CARE` ovunque corromperebbe l'immagine.

**5. D3D12: limite sampler e cache PSO esplicita mancante nel percorso esaminato**

`ng_sampler_budget` (`nv2a_hw_native.inc:245`) limita una submission a 1.536 descrittori sampler per proteggere l'heap SDL da 2.048. Nel loop draw, raggiungere il budget termina il pass e invia i comandi. Questo è un limite concreto del backend, non un limite intrinseco di D3D12. Quanto pesi sulle 2–3 submission/frame osservate richiede un contatore specifico del motivo di submit.

I guest draw ordinari collegano otto sampler, quelli semplici uno. Non è corretto ridurre arbitrariamente gli slot: le varianti shader e il layout devono concordare. Possibili lavori: riuso delle tabelle D3D12 per materiali identici; gestione robusta del rollover dell'heap; layout shader con soli binding necessari, validati. Non serve sostituire tutto SDL per iniziare a misurare o correggere questo punto.

Nel SDL locale `build/deps/sdl-source/SDL3-3.4.18/src/gpu/d3d12/SDL_gpu_d3d12.c:2994` e `:3270`, i campi `CachedPSO` sono vuoti; la ricerca non ha trovato `CreatePipelineLibrary`. Il percorso reSOT esaminato aggiunge una cache pipeline esplicita a Vulkan, non l'equivalente PSO library D3D12. La cache disco di bytecode HLSL non equivale a una PSO pronta. Il driver può avere una propria cache interna: questa osservazione non nega che esista.

**6. Compilazione: causa di scatti, spesso già marginale a cache calda**

Ci sono già traduzione shader, cache moduli/bytecode, chiavi PSO canoniche, worker e fallback reference. La compilazione asincrona attuale è attiva per default anche su Windows (`ng_compiler_start:1413`), diversamente da un paragrafo più vecchio del README Windows. Non basta suggerire di attivarla.

Quando manca la pipeline reference, `ng_flush_draws` aspetta la compilazione per conservare geometria e risultati query. Un worker reference dedicato è già presente. Il log D3D12 nuovo mostra quasi tutto il tempo di attesa cumulativo nella prima finestra; il vecchio Vulkan resta lento nelle scene dense mentre le attese non aumentano. Dunque prewarm/cache PSO possono ridurre gli scatti freddi, ma non spiegano da soli gli FPS bassi a regime.

Direzione: registrare descrizioni canoniche delle PSO viste, ricrearle prima dell'ingresso nella stanza, persistere cache driver compatibili con device/driver. Le chiavi persistenti devono descrivere programmi e stato, non contenere puntatori runtime. Non promettere zero compilazioni alla prima visita a una variante mai incontrata.

**7. Fattori secondari e false piste**

- Le texture risultano circa zero/una upload per frame nelle finestre esaminate: nessuna prova che il collo di bottiglia principale sia il caricamento continuo delle texture. Hash, lookup e alias delle superfici possono comunque costare CPU.
- Il valore `present` non è il tempo di lavoro GPU. Manca una timeline GPU attuale correlata al frame per attribuire saturazione shader, banda o buchi di submission.
- L'opzione Windows incorporata è 720p, ossia 150% della dimensione lineare 480p: 2,25 volte i pixel, non 1,5 volte. Preferenze già salvate possono essere diverse. A risoluzione alta può emergere un collo di bottiglia GPU diverso.
- L'overlay F8 Show triggers aveva avuto un problema specifico di matrix walk/VirtualQuery e frame fino a 1.608 ms, poi corretto; non confonderlo con il rendering normale. Benchmark con modalità normale, senza tracing per draw, screenshot continui o ABI checker.
- Android: frequenze, temperatura e scheduler vanno raccolti nello stesso intervallo delle misure. Big-core affinity e GpuTurbo esistono già nel working tree; non sono prove di un miglioramento e il turbo può modificare il comportamento termico prolungato.
- Non proporre ancora soltanto GLSL→HLSL, SPIRV-Tools, cache materiali o GPU vertex shader: il progetto li usa già nelle rispettive forme. Il codice è già compilato con ottimizzazioni; cambiare genericamente `-O2` o attivare fast-math non è una diagnosi.

**Progetti esterni selezionati e applicabilità concreta**

La ricerca ha coperto renderer Xbox, librerie multi-API, esempi di gestione memoria/pipeline, strumenti di misura e wrapper. Non è una scansione esaustiva di tutto Internet. Le priorità sotto sono valutazioni di applicabilità, non benchmark di integrazioni già realizzate. Tutti gli eventuali guadagni richiedono A/B in reSOT.

| Progetto / fonte primaria | Applicazione a reSOT | Costo e giudizio |
| --- | --- | --- |
| [xemu, renderer Vulkan NV2A](https://github.com/xemu-project/xemu/tree/master/hw/xbox/nv2a/pgraph/vk), [draw.c letto](https://github.com/xemu-project/xemu/blob/master/hw/xbox/nv2a/pgraph/vk/draw.c) | Confrontare confini dei pass, stato delle superfici, preparazione draw e binding sullo stesso hardware Xbox emulato. Il codice mantiene un pass aperto finché framebuffer/stato lo consentono. | Priorità alta come confronto tecnico specifico NV2A. Dipende da QEMU e dal proprio modello di stato, non è un renderer collegabile direttamente. Il file letto dichiara LGPL-2-or-later; non assumere una licenza uniforme per tutto il repository. |
| [Khronos Vulkan-Samples](https://github.com/KhronosGroup/Vulkan-Samples), [descriptor management](https://docs.vulkan.org/samples/latest/samples/performance/descriptor_management/README.html), [pipeline cache](https://docs.vulkan.org/samples/latest/samples/performance/pipeline_cache/README.html), [graphics pipeline library](https://github.com/KhronosGroup/Vulkan-Samples/blob/main/samples/extensions/graphics_pipeline_library/graphics_pipeline_library.cpp) | Guidare misure e implementazioni di pass, descrittori, uniform buffer e pipeline. La cache materiali c'è già: studiare ciò che resta, non reintrodurla. | Alta priorità, lavoro incrementale. GPL aiuta il costo di costruzione pipeline solo se supportata e integrata nel driver/encoder; non riduce automaticamente il decoder Xbox. |
| [Microsoft D3D12PipelineStateCache](https://github.com/microsoft/DirectX-Graphics-Samples/tree/master/Samples/Desktop/D3D12PipelineStateCache) | PSO libraries su disco, prewarm e fallback uber durante compilazione delle specializzazioni. Particolarmente coerente con il gap D3D12 trovato. | Priorità alta per stutter freddo; media come difficoltà. Richiede accesso/estensione al backend SDL. Non è una cura del costo executor a cache calda. |
| [NVIDIA NRI](https://github.com/NVIDIA-RTX/NRI) | Interfaccia esplicita C/C++ D3D11/D3D12/Vulkan, upload, descrittori e sincronizzazione sotto maggiore controllo; dichiara anche Android e indipendenza dal vendor. | Candidato più interessante per un prototipo alternativo a basso livello; migrazione alta. Verificare le estensioni Vulkan richieste sui Mali/Adreno supportati. Non è un acceleratore da aggiungere all'encoder SDL esistente. |
| [DiligentCore](https://github.com/DiligentGraphics/DiligentCore) | Libreria autonoma con D3D11/D3D12/Vulkan e build Android; possibile unificazione dei backend e gestione risorse. | Alternativa architetturale valida, migrazione alta. Il motore completo non è necessario. Nessuna prova che sia più veloce di SDL sul workload reSOT. |
| [NVRHI](https://github.com/NVIDIA-RTX/NVRHI) | Upload suballocati, versioni dei constant buffer, lifetime, barriere opzionali e registrazione parallela per D3D11/D3D12/Vulkan. | Utile confronto di design; astrazione più automatica, da misurare. La pagina dichiara Windows/Linux, non basta a certificare Android. Non considerare benchmark di altre RHI come previsione FPS. |
| [DXVK](https://github.com/doitsujin/dxvk), [note Windows](https://github.com/doitsujin/dxvk/wiki/Windows), [requisiti correnti](https://github.com/doitsujin/dxvk/wiki/Driver-support) | Esperimento Windows D3D11→Vulkan isolato per capire se il driver D3D11 pesa. Lascia intatti decoder, ricompilazione e gran parte della preparazione CPU. | Basso costo di prova, esito incerto; non sostituisce il Vulkan nativo. DXVK 3.x richiede capacità Vulkan moderne e segnala assenza di supporto first-party mobile; non scegliere versioni solo perché più recenti. |
| [VulkanMemoryAllocator](https://github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator) e [D3D12MemoryAllocator](https://github.com/GPUOpen-LibrariesAndSDKs/D3D12MemoryAllocator) | Pool e suballocazioni in un backend più diretto o in una cache geometrica residente. | Priorità condizionata a pressione/allocazioni misurate. SDL possiede già allocazione e suballocazione: aggiungere un secondo allocator sopra gli handle SDL non le sostituisce. Non risolvono draw, attese e pass. |
| [Tracy](https://github.com/wolfpld/tracy) | Zone CPU, lock e timeline GPU D3D11/D3D12/Vulkan per separare decoder, cache, upload, compilazione e attese. | Prima integrazione diagnostica consigliata. Con SDL servono punti di accesso appropriati ai command buffer/query nativi. Non aumenta FPS da solo. |
| [PresentMon](https://github.com/GameTechDev/PresentMon), [metriche](https://github.com/GameTechDev/PresentMon/blob/main/README-ConsoleApplication.md) | Frame realmente presentati, frametime e attività CPU/GPU su Windows, su tutte e tre le API. | Prima prova esterna consigliata: confrontare F5 guest flip e present host. Le limitazioni delle metriche/driver restano da rispettare. |
| [RenderDoc](https://github.com/baldurk/renderdoc) e [Android GPU Inspector](https://github.com/google/agi) | Catturare pass, risorse, draw e costi Vulkan sul dispositivo; RenderDoc copre anche D3D11/D3D12 Windows. | Diagnostica prioritaria. Una cattura altera il carico: validare gli FPS fuori dalla cattura e verificare supporto del dispositivo AGI. |
| [Cxbx-Reloaded](https://github.com/Cxbx-Reloaded/Cxbx-Reloaded) | Seconda base di confronto Xbox per idee di sostituzione ad alto livello delle chiamate grafiche XDK. | Utile per ricerca di un percorso HLE specifico; non un modulo D3D12/Vulkan pronto. Richiede prova separata in ogni XBE. |
| [meshoptimizer](https://github.com/zeux/meshoptimizer) | Riordino e località delle mesh in un eventuale percorso residente. | Priorità bassa ora: non riduce i metodi PB, può aggiungere CPU e cambiare ordine dei triangoli. Limitare a mesh statiche opache provate; trasparenza, stencil e query richiedono conservazione semantica. |
| [FidelityFX FSR](https://github.com/GPUOpen-Effects/FidelityFX-FSR) | Upscaling dopo rendering a risoluzione inferiore quando il limite è il costo dei pixel. | Condizionato a prova GPU-bound. Non riduce lavoro per comando/draw o attese CPU; introduce una scelta di qualità. I metodi temporali richiedono ulteriore integrazione, non sono un'opzione gratuita. |

Non sceglierei vkd3d-proton come primo intervento: [implementa D3D12 su Vulkan](https://github.com/HansKristian-Work/vkd3d-proton), mentre reSOT ha già Vulkan nativo. Né una migrazione completa a un game engine, né un sistema di frame generation risolve la causa del tempo di simulazione/preparazione del frame.

**Da dove può arrivare un miglioramento grande**

Una libreria può eliminare una gestione inefficiente del backend; il salto maggiore richiede spesso evitare intere classi di lavoro: geometria residente con riuso sicuro, meno pass e submission, meno decoding ripetuto e sincronizzazione più accurata. Un eventuale percorso HLE per le chiamate grafiche realmente usate da PoP potrebbe bypassare parte del PB, ma va studiato in ciascun XBE e rischia di perdere chiamate dirette e semantica console. È una direzione di ricerca, non una patch pronta.

Come controllo quantitativo: se un componente occupa davvero metà del tempo critico, renderlo due volte più veloce produce al massimo circa 1,33× nel modello seriale. Se occupa un quinto, circa 1,11×. Le percentuali simpleperf non sono quelle frazioni di tempo critico. Non esiste quindi una base per promettere +100–300% solo cambiando RHI, shader compiler o API.

**Sequenza operativa consigliata**

1. Congelare eseguibile, SDL, configurazione e cache; registrare hash, renderer effettivo e hardware. Scegliere una scena retail densa, una con effetti e la demo Entree; stesso salvataggio, camera e risoluzione per ogni confronto. Separare cache fredda da calda, gameplay attivo da caricamento/background.
2. Raccogliere frametime per frame con PresentMon e zone CPU/GPU. Su Android associare frequenze/temperature alle stesse finestre, con un tratto prolungato. Registrare mediana, p95/p99, draw/pass/submit e correttezza dell'immagine; non soltanto la media F5.
3. Aggiungere contatori dei motivi di pass/submit, miss e bypass della geometria, byte confrontati e staging effettivo. L'A/B dei fix già presenti (`RESOT_NATIVE_FOLD_CLEARS=0`, `RESOT_NATIVE_VIS_SAME_PASS=0`) è il primo test dei pass, una variabile per volta. Non aumentare KickAhead senza protezione della memoria.
4. Per gli scatti freddi: PSO prewarm osservate e cache pipeline D3D12 esplicita. Per FPS a regime: cache geometrica residente, percorsi veloci CPU e aggregazione dei pass dimostrati superflui. Misurare separatamente sampler-budget submit D3D12 e descriptor reuse Vulkan.
5. Solo se il profilo mostra ancora costo dominante nell'encoder SDL, costruire un prototipo piccolo NRI o Vulkan diretto sulla stessa sequenza di draw e risorse. Accettarlo solo con FPS/frametime e query/immagine equivalenti; poi decidere se estendere la migrazione. Una riproduzione GPU non misura da sola il costo complessivo del gioco.

Lo studio non cambia lo stato dei componenti nella tabella README: non è stata eseguita una nuova validazione di build, boot, rendering o gioco. Le prossime modifiche runtime dovranno rispettare controlli shader, build Windows di entrambi i target e build Android, oltre alle verifiche di gameplay specifiche del cambiamento.
