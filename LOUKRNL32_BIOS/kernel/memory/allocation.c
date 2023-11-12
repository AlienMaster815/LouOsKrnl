#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <kernel/memmory.h>  // Assuming the correct header file is included

// Define constants
#define MEMORY_SIZE 1024
#define MAXMEM      0xFFFFFFFF  // Assuming 32-bit address space



// Define a memory bitmap (assuming each bit corresponds to a byte)
unsigned char memory_bitmap[MEMORY_SIZE / 8] = { 0 };

RAMADD Lou_Alloc_Mem(SIZE size) {
    // Calculate the number of bytes needed for allocation
    SIZE blocks_needed = size / sizeof(unsigned char);

    for (uint32_t adrint = 0; adrint < MEMORY_SIZE; ++adrint) {
        RAMADD adr = (RAMADD)adrint;
        uint32_t byte_index = (adrint / 8);
        unsigned char mask = 1 << (adrint % 8);

        // Check if the current block is free
        if ((memory_bitmap[byte_index] & mask) == 0) {
            // Allocate this block and the required number of contiguous blocks
            SIZE contiguous_blocks = 0;
            while (contiguous_blocks < blocks_needed) {
                if ((memory_bitmap[(adrint + contiguous_blocks) / 8] & (1 << ((adrint + contiguous_blocks) % 8))) == 0) {
                    contiguous_blocks++;
                }
                else {
                    break;  // Not enough contiguous free blocks
                }
            }

            if (contiguous_blocks >= blocks_needed) {
                // Mark blocks as allocated in the bitmap
                for (SIZE i = 0; i < blocks_needed; ++i) {
                    memory_bitmap[(adrint + i) / 8] |= (1 << ((adrint + i) % 8));
                }
                adr = (RAMADD)adrint;
                return adr;
            }
        }
    }

    return (RAMADD)MAXMEM; // Allocation failed
}

STATUS Lou_Free_Mem(RAMADD Addr, SIZE size) {
    // Calculate the number of bytes needed for deallocation
    SIZE blocks_to_free = size / sizeof(unsigned char);
    uint32_t Addrint = (uint32_t)Addr;
    for (SIZE i = 0; i < blocks_to_free; ++i) {
        uint32_t byte_index = (Addrint + i) / 8;
        unsigned char mask = 1 << ((Addrint + i) % 8);

        // Mark blocks as free in the bitmap
        memory_bitmap[byte_index] &= ~mask;
    }

    return GOOD;
}
