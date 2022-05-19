#pragma  once

namespace Razix {

    /**
     * Base memory class for all the classes to aid with custom allocation
     * 
     * we will use macros and other special patters to decide which pool will the object be allocated from
     */
    class RZMemoryBase
    {
    public:

        void* operator new(size_t size);
        void* operator new[](size_t size);
        void* operator new(size_t size, void* where);
        void* operator new[](size_t size, void* where);

        void operator delete(void* pointer);
        void operator delete[](void* pointer);
    };
}