/*
 * RE-SoT: which Xbox executable this runtime build serves.
 *
 * reSOT once kept two complete copies of the runtime, one per target. They
 * are now one tree; where the two executables needed different behaviour,
 * the difference is chosen here at compile time, so each target keeps
 * exactly the runtime it was validated with. The top-level CMakeLists.txt
 * defines RESOT_RUNTIME_DEMO or RESOT_RUNTIME_RETAIL for every runtime
 * library of a build tree (one target per tree, build/<target>).
 *
 * A fix guarded for one target is not known to be right for the other: port
 * it only after checking it in that XBE (AGENTS.md). Standalone toolkit
 * builds and the runtime's own tests, which serve no title, get the retail
 * behaviour, the superset (APU DMA tokens, visibility queries).
 */
#ifndef RESOT_RUNTIME_H
#define RESOT_RUNTIME_H

#if !defined(RESOT_RUNTIME_DEMO) && !defined(RESOT_RUNTIME_RETAIL)
#define RESOT_RUNTIME_RETAIL 1
#endif
#ifndef RESOT_RUNTIME_DEMO
#define RESOT_RUNTIME_DEMO 0
#endif
#ifndef RESOT_RUNTIME_RETAIL
#define RESOT_RUNTIME_RETAIL 0
#endif
#if RESOT_RUNTIME_DEMO == RESOT_RUNTIME_RETAIL
#error "Define exactly one of RESOT_RUNTIME_DEMO and RESOT_RUNTIME_RETAIL"
#endif

#endif
