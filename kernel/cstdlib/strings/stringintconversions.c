#include <LouAPI.h>

int32_t stringToInt32(const char* str) {
    int32_t result = 0; // Initialize result
    int32_t sign = 1;  // Initialize sign as positive
    int32_t i = 0;  // Initialize index of first digit

    // If number is negative, then update sign
    if (str[0] == '-') {
        sign = -1;
        i++;  // Also update index of first digit
    }

    // Iterate through all digits and update the result
    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            // Handle invalid input
            LouPrint("Invalid input.\n");
            return 0;
        }
    }

    // Return result with sign
    return sign * result;
}

uint32_t stringToUnsignedInt32(const char* str) {
    unsigned int result = 0; // Initialize result

    // Iterate through all digits and update the result
    for (uint32_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            // Handle invalid input
            LouPrint("Invalid input.\n");
            return 0;
        }
    }

    // Return result
    return result;
}







int16_t stringToInt16(const char* str) {
    int16_t result = 0; // Initialize result
    int16_t sign = 1;  // Initialize sign as positive
    int16_t i = 0;  // Initialize index of first digit

    // If number is negative, then update sign
    if (str[0] == '-') {
        sign = -1;
        i++;  // Also update index of first digit
    }

    // Iterate through all digits and update the result
    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            // Handle invalid input
            LouPrint("Invalid input.\n");
            return 0;
        }
    }

    // Return result with sign
    return sign * result;
}

uint16_t stringToUnsignedInt16(const char* str) {
    uint16_t result = 0; // Initialize result

    // Iterate through all digits and update the result
    for (uint16_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            // Handle invalid input
            LouPrint("Invalid input.\n");
            return 0;
        }
    }

    // Return result
    return result;
}






int64_t stringToInt64(const char* str) {
    int64_t result = 0; // Initialize result
    int64_t sign = 1;  // Initialize sign as positive
    int64_t i = 0;  // Initialize index of first digit

    // If number is negative, then update sign
    if (str[0] == '-') {
        sign = -1;
        i++;  // Also update index of first digit
    }

    // Iterate through all digits and update the result
    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            // Handle invalid input
            LouPrint("Invalid input.\n");
            return 0;
        }
    }

    // Return result with sign
    return sign * result;
}

uint64_t stringToUnsignedInt64(const char* str) {
    uint64_t result = 0; // Initialize result

    // Iterate through all digits and update the result
    for (uint64_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            // Handle invalid input
            LouPrint("Invalid input.\n");
            return 0;
        }
    }

    // Return result
    return result;
}





int8_t stringToInt8(const char* str) {
    int8_t result = 0; // Initialize result
    int8_t sign = 1;  // Initialize sign as positive
    int8_t i = 0;  // Initialize index of first digit

    // If number is negative, then update sign
    if (str[0] == '-') {
        sign = -1;
        i++;  // Also update index of first digit
    }

    // Iterate through all digits and update the result
    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            // Handle invalid input
            LouPrint("Invalid input.\n");
            return 0;
        }
    }

    // Return result with sign
    return sign * result;
}

uint8_t stringToUnsignedInt8(const char* str) {
    uint8_t result = 0; // Initialize result

    // Iterate through all digits and update the result
    for (uint8_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        }
        else {
            // Handle invalid input
            LouPrint("Invalid input.\n");
            return 0;
        }
    }

    // Return result
    return result;
}