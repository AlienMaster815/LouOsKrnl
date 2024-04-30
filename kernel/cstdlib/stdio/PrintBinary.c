#include <LouAPI.h>
#ifdef IS_X86_64
void print_binary64(uint64_t number) {
    // Calculate the number of bits needed to represent the number
    int num_bits = sizeof(number) * 8; // Assuming uint64_t is 64 bits

    // Start from the most significant bit and print each bit
    for (int i = num_bits - 1; i >= 0; i--) {
        // Shift the number to the right 'i' times and perform a bitwise AND with 1
        // This extracts the bit at position 'i'
        uint64_t bit = ((number >> i) & 1) ? 1 : 0;
        LouPrint("%d", bit);
    }

    //LouPrint("\n"); // Print a newline after printing the binary representation
}

void print_binary32(uint32_t number) {
    // Calculate the number of bits needed to represent the number
    int num_bits = sizeof(number) * 8; // Assuming uint32_t is 32 bits

    // Start from the most significant bit and print each bit
    for (int i = num_bits - 1; i >= 0; i--) {
        // Shift the number to the right 'i' times and perform a bitwise AND with 1
        // This extracts the bit at position 'i'
        uint32_t bit = ((number >> i) & 1) ? 1 : 0;
        LouPrint("%d", bit);
    }

    //LouPrint("\n"); // Print a newline after printing the binary representation
}

void print_binary16(uint16_t number) {
    // Calculate the number of bits needed to represent the number
    int num_bits = sizeof(number) * 8; // Assuming uint16_t is 16 bits

    // Start from the most significant bit and print each bit
    for (int i = num_bits - 1; i >= 0; i--) {
        // Shift the number to the right 'i' times and perform a bitwise AND with 1
        // This extracts the bit at position 'i'
        uint16_t bit = ((number >> i) & 1) ? 1 : 0;
        LouPrint("%d", bit);
    }

    //LouPrint("\n"); // Print a newline after printing the binary representation
}


void print_binary8(uint8_t number) {
    // Calculate the number of bits needed to represent the number
    int num_bits = sizeof(number) * 8; // Assuming uint8_t is 8 bits

    // Start from the most significant bit and print each bit
    for (int i = num_bits - 1; i >= 0; i--) {
        // Shift the number to the right 'i' times and perform a bitwise AND with 1
        // This extracts the bit at position 'i'
        uint8_t bit = ((number >> i) & 1) ? 1 : 0;
        LouPrint("%d", bit);
    }

    //LouPrint("\n"); // Print a newline after printing the binary representation
}

#endif
