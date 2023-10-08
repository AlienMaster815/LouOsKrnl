#include <drivers/display/vga.h>

int putchar(int ic) {
    char c = (char)ic;
    // Assuming print_char is a function to display the character.
    print_char(c);
    // TODO: Implement stdio and the write system call.
    return ic;
}