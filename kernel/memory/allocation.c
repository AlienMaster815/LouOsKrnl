
// allocation.c
// Tyler Grenier
// this will not compile for a while so
// if your looking for this to compile 
// go Fuck Yourself



//include headers from freestanding

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <kernel/memmory.h>
// define constants


// Define a memory bitmap (assuming each bit corresponds to a byte)
#define MEMORY_SIZE 1024
unsigned char memory_bitmap[MEMORY_SIZE / 8] = { 0 };

RAMADD Lou_Alloc_Mem(SIZE size) {
    // Calculate the number of bytes needed for allocation
    SIZE blocks_needed = size / sizeof(unsigned char);
    #ifdef __x86_64__
    for (uint64_t adrint = 0; adrint < MEMORY_SIZE; ++adrint) {
        RAMADD adr = (RAMADD)adrint;
        uint64_t byte_index = (adrint / 8);
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
                adr = (uint8_t*)adrint;
                return adr;
            }
        }
    }
    #endif

    #ifdef __i386__
    for (uint32_t adrint = 0; adrint < MEMORY_SIZE; ++adrint) {
        RAMADD adr = (RAMADD)adrint;
        uint32_t byte_index = adrint / 8;
        unsigned char mask = 1 << (adrint % 8);

        // Check if the current block is free
        if ((memory_bitmap[byte_index] & mask) == 0) {
        // Allocate this block and the required number of contiguous blocks
         SIZE contiguous_blocks = 0;
         while (contiguous_blocks < blocks_needed) {
             if ((memory_bitmap[(adrint + contiguous_blocks) / 8] & (1 << ((adrint + contiguous_blocks) % 8))) == 0)     {
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
                adr = (uint8_t*)adrint;
                return adr;
            }
        }
    }

    #endif

    return (RAMADD)MAXMEM; // Allocation failed
}

STATUS Lou_Free_Mem(RAMADD Addr, SIZE size) {
    // Calculate the number of bytes needed for deallocation
    SIZE blocks_to_free = size / sizeof(unsigned char);
    #ifdef __x86_64__    
    uint64_t Addrint = (uint64_t)Addr;
    for (SIZE i = 0; i < blocks_to_free; ++i) {
        uint64_t byte_index = (Addrint + i) / 8;
        unsigned char mask = 1 << ((Addrint + i) % 8);

        // Mark blocks as free in the bitmap
        memory_bitmap[byte_index] &= ~mask;
    }
    #endif
    #ifdef _i386_

    uint32_t Addrint = (uint32_t)Addr; // Assuming 32-bit address
    for (SIZE i = 0; i < blocks_to_free; ++i) {
        uint32_t byte_index = Addrint / 8;
        unsigned char mask = 1 << (Addrint % 8);

        // Mark blocks as free in the bitmap
        memory_bitmap[byte_index] &= ~mask;

        Addrint++; // Move to the next block
    }


    #endif
    return GOOD;
}

