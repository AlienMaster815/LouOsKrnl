
#include <stddef.h>

//TODO Make A MEMCPY Function for our print

void* memcpy(void* destination, const void* source, size_t num) {
    char* dest = (char*)destination;
    const char* src = (const char*)source;

    for (size_t i = 0; i < num; ++i) {
        dest[i] = src[i];
    }

    return destination;
}

