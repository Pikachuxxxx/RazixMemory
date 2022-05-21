#include "RZMemoryBase.h"

namespace Razix {

    void* RZMemoryBase::operator new(size_t size)
    {
        void* address = malloc(size);
        return address;
    }

    void* RZMemoryBase::operator new(size_t size, void* where)
    {
    }

    void* RZMemoryBase::operator new[](size_t size)
    {
    }

    void* RZMemoryBase::operator new[](size_t size, void* where)
    {
    }

    void RZMemoryBase::operator delete(void* pointer)
    {
    }

    void RZMemoryBase::operator delete[](void* pointer)
    {
    }

}