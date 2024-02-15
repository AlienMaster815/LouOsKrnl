#include <stddef.h>

size_t strlen(const char* str) {
    const char* ptr = str;
    while (*ptr != '\0') {
        ++ptr;
    }
    return ptr - str;
}