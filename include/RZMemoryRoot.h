#pragma  once

#include "RZMemoryLog.h"

namespace Razix {

    /**
     * Base memory class for all the classes to aid with custom allocation, provides custom operators and allocation functions
     * 
     * we will use macros and other special options to decide which pool will the object be allocated from
     */
    class RZMemoryRoot
    {
    public:
        RZMemoryRoot() = default;
        virtual ~RZMemoryRoot() { }

        /**
         * new operator to allocate memory for the Object 
         * 
         * @param size The size of memory to allocate for the object
         */
        void* operator new(size_t size);
        void* operator new[](size_t size);
        void* operator new(size_t size, void* where);
        void* operator new[](size_t size, void* where);

        void operator delete(void* pointer);
        void operator delete[](void* pointer);
    };
}