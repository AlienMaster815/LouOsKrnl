

int strcmp(const char* str1, const char* str2) {
    // Compare characters until a mismatch is found or both strings end
    while (*str1 != '\0' && *str2 != '\0') {
        // Compare the current characters in both strings
        char c1 = *str1++;
        char c2 = *str2++;

        // If a mismatch is found, return the difference
        if (c1 != c2) {
            return c1 - c2;
        }
    }

    // Return the difference in string lengths if one string is longer than the other
    return *str1 - *str2;
}