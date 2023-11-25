#include <stddef.h>

int strncmp(const char* str1, const char* str2, size_t n) {
    // Compare characters until we reach the specified number of characters (n)
    while (n > 0) {
        // Compare the current characters in both strings
        char c1 = *str1++;
        char c2 = *str2++;

        // If the characters are equal or both are null terminators, continue
        if (c1 == c2 || c1 == '\0' || c2 == '\0') {
            // If we've compared n characters or reached the end of either string, return 0
            if (n == 1 || (c1 == '\0' && c2 == '\0')) {
                return 0;
            }
        }
        else {
            // The characters are not equal, return the difference
            return c1 - c2;
        }

        // Decrement the remaining characters to compare
        n--;
    }

    // If we've reached here, the first n characters are equal
    return 0;
}
