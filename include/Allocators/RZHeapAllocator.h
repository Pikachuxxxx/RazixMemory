#pragma once

#include "IRZAllocator.h"

namespace Razix {
    namespace Memory {

        class RZHeapAllocator : public IRZAllocator
        {
        public:
            RZHeapAllocator()  = default;
            ~RZHeapAllocator() = default;

            void init(size_t chunkSize) override;
            void shutdown() override;

            void* allocate(size_t size, size_t alignment) override;

            void deallocate(void* ptr) override;

        private:
            void*  m_TLSFHandle;
            void*  m_ChunkAddress;
            size_t m_AllocatedSize  = 0;
            size_t m_TotalChunkSize = 0;
        };

    }    // namespace Memory
}    // namespace Razix