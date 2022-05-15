# RazixMemory
Custom CPU memory management library for [Razix Engine](https://github.com/Pikachuxxxx/Razix). Razix Memory provides with custom operators for `new` and `delete` as well as custom implementation of `malloc` and `free`. It also provides efficient heap management and tracking to reduce fragmentation as much as possible and provide extremely fast allocation. It also focuses on improving cache line efficiency reducing cache misses. It also provides detailed tracking that will be later used with Razix Memory Visualization tool in debug mode.

#### **This is being built as a standalone library that can be used anywhere.**

Check the Razix Engine Docs and design notes to know about allocation/API design details.

It will also act as a base for custom rzstl::Allocator and RZSTL.

- Razix uses custom malloc and free (using native kernel functions)
- We use the kernel functions with a allocation strategy to manage the memory
- First stage of memory pools are seperated by their alignments, hence same aligned data are placed one place ?????? IDK man
- However one needs to consider not only that the data is packed properly but also is together(algiment vs distance of allocation needs to-go hand in hand)
- Hence strategy changes so as to keep aligned/un-aligned data not completely in separate pools but keep them together somehow

## Goals

The following sections will be updated in design notes and in wiki as the project moves forward.

- [ ] **Custom Operators and Memory allocations (using kernel functions)**

- [ ] **Heap Strategies + Tracking**

- [ ] **Reducing Fragmentation + tracking**

- [ ] **L1, L2, L3 cache efficiency**

- [ ] **Visualization Tool API**

- [ ] **GPU Interop API to interface with DXMA, VMA etc.**

## References
1. [CppCon 2014: Mike Acton "Data-Oriented Design and C++"](https://www.youtube.com/watch?v=rX0ItVEVjHc) - Golden reference
2. Jason Gregory Game Engine Architecture - Memory and Fragmentation
