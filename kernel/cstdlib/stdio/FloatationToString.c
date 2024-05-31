#include <LouAPI.h>

// Helper function to reverse a string
void reverse_string(string str, int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void double_to_string(string Buffer, long double value) {
    // Handle negative numbers
    int is_negative = 0;
    if (value < 0) {
        is_negative = 1;
        value = -value;
    }

    // Convert integer part to string
    int integer_part = (int)value;
    int i = 0;
    do {
        Buffer[i++] = '0' + integer_part % 10;
        integer_part /= 10;
    } while (integer_part > 0);

    if (is_negative)
        Buffer[i++] = '-';

    // Reverse the string
    reverse_string(Buffer, i);

    // Add decimal point
    Buffer[i++] = '.';

    // Convert fractional part to string
    long double fractional_part = value - (long double)(int)value;
    while (i < 17) {
        fractional_part *= 10;
        int digit = (int)fractional_part;
        Buffer[i++] = '0' + digit;
        fractional_part -= digit;
    }
    Buffer[i] = '\0'; // Null-terminate the string
}

// Function to convert float to string
void float_to_string(string Buffer, float value) {
    double_to_string(Buffer, (long double)value);
}

// Function to convert long double to string
void long_double_to_string(string Buffer, long double value) {
    double_to_string(Buffer, value);
}
