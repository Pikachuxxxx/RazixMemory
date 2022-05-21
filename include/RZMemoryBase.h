#pragma  once

#include "RZMemoryLog.h"

namespace Razix {

    /**
     * Base memory class for all the classes to aid with custom allocation
     * 
     * we will use macros and other special options to decide which pool will the object be allocated from
     */
    class RZMemoryBase
    {
    public:
        RZMemoryBase() = default;
        virtual ~RZMemoryBase() { }

        void* operator new(size_t size);
        void* operator new[](size_t size);
        void* operator new(size_t size, void* where);
        void* operator new[](size_t size, void* where);

        void operator delete(void* pointer);
        void operator delete[](void* pointer);
    };
}