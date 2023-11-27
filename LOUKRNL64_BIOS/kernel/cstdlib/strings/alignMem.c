#include <stddef.h>
#include <stdint.h>
void* align_memory(void* ptr, size_t alignment) {
    uintptr_t uintptr_ptr = (uintptr_t)ptr;
    uintptr_t aligned_ptr = (uintptr_ptr + alignment - 1) & ~(alignment - 1);
    return (void*)aligned_ptr;
}