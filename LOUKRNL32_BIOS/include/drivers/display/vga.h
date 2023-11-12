/*
; Copyright(C) 2023 Tyler Grenier
;
; This program is the property of Tyler Grenier and is protected by copyright law.
; Unauthorized reproduction or distribution of this program, or any portion of it,
; is prohibited.Modification of this program is allowed only with explicit
; written permission from Tyler Grenier.
;
; Permission to possess and use this code is granted to You under
; the condition that You complies with the terms of this copyright
; notice.Failure to comply may result in legal action.
;
; Tyler Grenier makes no warranties, expressed or implied, about the suitability of
; this software for any purpose.It is provided "as is" without any warranty.
;
; For inquiries or permission requests, please contact Tyler Grenier
; Email tgrenier.815@aol.com Text 860 - 930 - 6436 Call 203 - 263 - 6104.
*/

#ifndef ARCH_I386_VGA_H
#define ARCH_I386_VGA_H

//#include <stdint.h>
#include <kernel/errors.h>
#include <stat.h>
#include <kernel/memmory.h>

/*this is the basic vga driver definitions needed for the tty terminal function
 this will be used for early kernel stages until propitiery or better drivers can be found
 however it is important that this file will eventually include vesa support for the
 graphical usser interface Annya/anna*/
enum vga_color {
	VGA_COLOR_BLACK = 0,
	VGA_COLOR_BLUE = 1,
	VGA_COLOR_GREEN = 2,
	VGA_COLOR_CYAN = 3,
	VGA_COLOR_RED = 4,
	VGA_COLOR_MAGENTA = 5,
	VGA_COLOR_BROWN = 6,
	VGA_COLOR_LIGHT_GREY = 7,
	VGA_COLOR_DARK_GREY = 8,
	VGA_COLOR_LIGHT_BLUE = 9,
	VGA_COLOR_LIGHT_GREEN = 10,
	VGA_COLOR_LIGHT_CYAN = 11,
	VGA_COLOR_LIGHT_RED = 12,
	VGA_COLOR_LIGHT_MAGENTA = 13,
	VGA_COLOR_LIGHT_BROWN = 14,
	VGA_COLOR_WHITE = 15,
};
static inline uint16_t vga_entry(unsigned char uc, uint8_t color);
static inline uint8_t vga_entry_color(enum vga_color fg, enum vga_color bg);

static inline uint8_t vga_entry_color(enum vga_color fg, enum vga_color bg) {
	return fg | bg << 4;
}

static inline uint16_t vga_entry(unsigned char uc, uint8_t color) {
	return (uint16_t)uc | (uint16_t)color << 8;
}

#endif



#ifndef _TTY_H
#define _TTY_H

#include <stdint.h>
#include <stddef.h>

enum VGA_COLOR{
	PRINT_COLOR_BLACK = 0,
	PRINT_COLOR_BLUE = 1,
	PRINT_COLOR_GREEN = 2,
	PRINT_COLOR_CYAN = 3,
	PRINT_COLOR_RED = 4,
	PRINT_COLOR_MAGENTA = 5,
	PRINT_COLOR_BROWN = 6,
	PRINT_COLOR_LIGHT_GRAY = 7,
	PRINT_COLOR_DARK_GRAY = 8,
	PRINT_COLOR_LIGHT_BLUE = 9,
	PRINT_COLOR_LIGHT_GREEN = 10,
	PRINT_COLOR_LIGHT_CYAN = 11,
	PRINT_COLOR_LIGHT_RED = 12,
	PRINT_COLOR_PINK = 13,
	PRINT_COLOR_YELLOW = 14,
	PRINT_COLOR_WHITE = 15,
};

#define NUM_COLS 80
#define NUM_ROWS 25

#define VGA_MODE_80x25 0

typedef struct{
	uint8_t character;
	uint8_t color;
}Char;

static RAMADD vga_current;
static RAMADD vga_new;


void setup_vga_systems();
STATUS register_new_mode(RAMADD new_vga,uint8_t mode);
void print_clear();
void print_char(char character);
void print_str(char* string);
void print_set_color(uint8_t foreground, uint8_t background);
void init_terminal();
void Set_Color(enum VGA_COLOR fg, enum VGA_COLOR bg);
void Set_Y(uint32_t y);
void Set_X(uint32_t x);
#endif
