#include <stdint.h>
#include <stddef.h>
#include <drivers/display/vga.h>

// Define constants for screen dimensions
#define NUM_COLS 80
#define NUM_ROWS 25

// Define a structure to represent a character on the screen
struct Char {
    uint8_t character;
    uint8_t color;
};

// VGA text buffer memory address for 32-bit systems
struct Char* buffer = (struct Char*)0xB8000;

uint8_t color;
size_t col = 0;
size_t row = 0;



void Set_Y(uint64_t y) {
    row = y;
}

void Set_X(uint64_t x) {
    col = x;
}

void Set_Color(enum VGA_COLOR fg, enum VGA_COLOR bg) {
    color = fg | bg << 4;
}

void clear_row(size_t row) {
    struct Char empty;
    empty.character = ' ';
    empty.color = color;

    for (size_t col = 0; col < NUM_COLS; col++) {
        buffer[col + NUM_COLS * row] = empty;
    }
}

void init_terminal() {
    col = 0;
    row = 0;
    print_clear();
}

void print_clear() {
    for (size_t i = 0; i < NUM_ROWS; i++) {
        clear_row(i);
    }
}

void print_newline() {
    col = 0;

    if (row < NUM_ROWS - 1) {
        row++;
        return;
    }

    for (size_t row = 1; row < NUM_ROWS; row++) {
        for (size_t col = 0; col < NUM_COLS; col++) {
            struct Char character = buffer[col + NUM_COLS * row];
            buffer[col + NUM_COLS * (row - 1)] = character;
        }
    }

    clear_row(NUM_ROWS - 1);
}

void print_char(char character) {
    if (character == '\n') {
        print_newline();
        return;
    }

    if (col >= NUM_COLS) {  // Changed '>' to '>=' to handle full row
        print_newline();
    }

    buffer[col + NUM_COLS * row].character = (uint8_t)character;
    buffer[col + NUM_COLS * row].color = color;

    col++;
}

void print_str(char* str) {
    for (size_t i = 0; str[i] != '\0'; i++) {
        char character = str[i];
        print_char(character);
    }
}

void print_set_color(uint8_t foreground, uint8_t background) {
    color = foreground + (background << 4);
}

int main() {
    // Example usage
    init_terminal();
    print_set_color(VGA_COLOR_WHITE, VGA_COLOR_BLUE);
    print_str("Hello, 32-bit VGA terminal!");
    return 0;
}
