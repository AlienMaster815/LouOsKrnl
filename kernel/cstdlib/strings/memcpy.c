
#include <stddef.h>

void* memcpy(void* destination, const void* source, size_t num) {
    // Cast pointers to char* for byte-wise copying
    char* dest = (char*)destination;
    const char* src = (const char*)source;

    // Check if the source and destination overlap
    if (dest > src && dest < src + num) {
        // Copy backwards if there's overlap to prevent data corruption
        for (size_t i = num; i > 0; --i) {
            dest[i - 1] = src[i - 1];
        }
    } else {
        // Standard forward copy
        for (size_t i = 0; i < num; ++i) {
            dest[i] = src[i];
        }
    }

    return destination;
}


