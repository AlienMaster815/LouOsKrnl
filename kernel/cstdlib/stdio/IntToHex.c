
#include <LouAPI.h>

#ifdef __x86_64__

void uintToHexString(uint64_t number, char* hexString) {
    int i = 2;
    hexString[0] = '0';
    hexString[1] = 'x';
    do {
        int digit = number % 16;
        hexString[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
        number /= 16;
    } while (number != 0);

    hexString[i] = '\0'; // Null-terminate the string
}

#endif

#ifdef __i386__

void uintToHexString(uint32_t number, char* hexString) {
    int i = 2;
    hexString[0] = '0';
    hexString[1] = 'x';
    do {
        int digit = number % 16;
        hexString[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
        number /= 16;
    } while (number != 0);

    hexString[i] = '\0'; // Null-terminate the string
}


#endif