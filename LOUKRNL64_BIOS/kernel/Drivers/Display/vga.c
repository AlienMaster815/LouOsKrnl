#include <drivers/display/vga.h>


size_t col = 0;
size_t row = 0;


Char* buffer = (Char*)0xb8000;

uint8_t color;

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
    Char empty;
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
            Char character = buffer[col + NUM_COLS * row];
            buffer[col + NUM_COLS * (row - 1)] = character;
        }
    }

    clear_row(NUM_COLS - 1);
}

void print_char(char character) {
    if (character == '\n') {
        print_newline();
        return;
    }

    if (col > NUM_COLS) {
        print_newline();
    }

    buffer[col + NUM_COLS * row].character = (uint8_t)character;
    buffer[col + NUM_COLS * row].color = color;


    col++;
}

void print_str(char* str) {
    for (size_t i = 0; 1; i++) {
        char character = (uint8_t)str[i];

        if (character == '\0') {
            return;
        }

        print_char(character);
    }
}

void print_set_color(uint8_t foreground, uint8_t background) {
    color = foreground + (background << 4);
}

