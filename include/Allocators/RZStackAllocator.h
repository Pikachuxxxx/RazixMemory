#pragma once

#include "IRZAllocator.h"

namespace Razix {
    namespace Memory {
        class RZStackAllocator : public IRZAllocator
        {
        public:
            RZStackAllocator()  = default;
            ~RZStackAllocator() = default;

            void init(size_t size) override;

            void shutdown() override;

            void* allocate(size_t size, size_t alignment) override;

            void deallocate(void* ptr) override;

            void pop();

        private:
            void*  m_StackChunk;
            size_t m_AllocatedSize = 0;
            size_t m_TotalSize     = 0;
        };
    }    // namespace Memory
}    // namespace Razix
