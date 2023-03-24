#include "Allocators/RZStackAllocator.h"

namespace Razix {
    namespace Memory {

        void RZStackAllocator::init(size_t size)
        {
        }

        void RZStackAllocator::shutdown()
        {
        }

        void* RZStackAllocator::allocate(size_t size, size_t alignment)
        {
            return nullptr;
        }

        void RZStackAllocator::deallocate(void* ptr)
        {
        }

        void RZStackAllocator::pop()
        {
        }

    }    // namespace Memory
}    // namespace Razix