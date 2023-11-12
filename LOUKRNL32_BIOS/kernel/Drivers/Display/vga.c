#include <stdint.h>
#include <stddef.h>
#include <drivers/display/vga.h>

size_t col = 0;
size_t row = 0;

Char* buffer = (Char*)0xB8000;  // Assuming 32-bit addressing

uint8_t color;

void Set_Y(uint32_t y) {
    if (vga_current == VGA_MODE_80x25) row = y;
}

void Set_X(uint32_t x) {
    if (vga_current == VGA_MODE_80x25) col = x;
}

void Set_Color(enum VGA_COLOR fg, enum VGA_COLOR bg) {
    if (vga_current == VGA_MODE_80x25) color = fg | bg << 4;
}

void clear_row(size_t row) {
    if (vga_current == VGA_MODE_80x25) {
        Char empty;
        empty.character = ' ';
        empty.color = color;

        for (size_t col = 0; col < NUM_COLS; col++) {
            buffer[col + NUM_COLS * row] = empty;
        }
    }
}

void init_terminal() {
    vga_new = Lou_Alloc_Mem(sizeof(uint8_t));
    STATUS Continue_vga = register_new_mode(vga_new, VGA_MODE_80x25);
    
    if (Continue_vga == GOOD) {
        *vga_current = *vga_new;
        Lou_Free_Mem(vga_new, sizeof(uint8_t));
    } else if (Continue_vga == BAD) {
        Lou_Free_Mem(vga_new, sizeof(uint8_t));
        // Handle error (to be implemented)
        return;
    }

    col = 0;
    row = 0;
    print_clear();
}

void print_clear() {
    if (vga_current == VGA_MODE_80x25) {
        for (size_t i = 0; i < NUM_ROWS; i++) {
             clear_row(i);
        }
    }
}

void print_newline() {
    if (vga_current == VGA_MODE_80x25) {
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

        clear_row(NUM_ROWS - 1);
    }
}

void print_char(char character) {
    if (character == '\n') {
        print_newline();
        return;
    }

    if (col > NUM_COLS) {
        print_newline();
    }

    if (vga_current == VGA_MODE_80x25) {
        buffer[col + NUM_COLS * row].character = (uint8_t)character;
        buffer[col + NUM_COLS * row].color = color;
        col++;
    }
}

void print_str(char* str) {
    for (size_t i = 0; str[i] != '\0'; i++) {
        print_char(str[i]);
    }
}

void print_set_color(uint8_t foreground, uint8_t background) {
    if (vga_current == VGA_MODE_80x25) color = foreground + (background << 4);
}

STATUS register_new_mode(RAMADD new_vga, uint8_t mode) {
    *new_vga = mode;

    if (*new_vga != mode) {
        LouPanic("Unable to locate memory for VMODE", BAD);
    }

    return GOOD;
}

