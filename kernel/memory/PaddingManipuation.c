#include <LouAPI.h>

void remove_padding(const void* struct_ptr, size_t struct_size, uint8_t* buffer) {
    // Copy the struct bytes to the buffer
    const uint8_t* src = (const uint8_t*)struct_ptr;

    // Pointer to the destination buffer
    uint8_t* dest = buffer;

    // Copy each byte from the source to the destination,
    // skipping any padding bytes
    for (size_t i = 0; i < struct_size; i++) {
        // Skip padding bytes (zero bytes)
        if (src[i] != 0) {
            *dest = src[i];
            dest++;
        }
    }
}
