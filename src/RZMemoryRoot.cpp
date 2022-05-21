#include "RZMemoryRoot.h"

namespace Razix {

    void* RZMemoryRoot::operator new(size_t size)
    {
        void* address = malloc(size);
        return address;
    }

    void* RZMemoryRoot::operator new(size_t size, void* where)
    {

    }

    void* RZMemoryRoot::operator new[](size_t size)
    {

    }

    void* RZMemoryRoot::operator new[](size_t size, void* where)
    {

    }

    void RZMemoryRoot::operator delete(void* pointer)
    {

    }

    void RZMemoryRoot::operator delete[](void* pointer)
    {

    }

}