#include <kernel/memmory.h>

void* memset(void* dest, int value, size_t count) {
    unsigned char* ptr = (unsigned char*)dest;
    unsigned char val = (unsigned char)value;

    for (size_t i = 0; i < count; i++) {
        ptr[i] = val;
    }

    return dest;
}