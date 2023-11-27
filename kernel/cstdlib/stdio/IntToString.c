#include <LouAPI.h>

void intToString(uint64_t num, char* str) {
    uint64_t i = 0;

    if (num == 0) {
        str[0] = '0';
        str[1] = '\0';
        return;
    }

    while (num > 0) {
        uint64_t digit = num % 10;
        str[i++] = digit + '0';
        num /= 10;
    }

    str[i] = '\0';

    // Reverse the string
    uint64_t left = 0;
    uint64_t right = i - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}
