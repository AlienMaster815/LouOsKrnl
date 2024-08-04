/*
; Copyright(C) 2023 Tyler Grenier
*/

#ifndef ARCH_I386_VGA_H
#define ARCH_I386_VGA_H

#include <stdint.h>
#include <kernel/errors.h>
#include <stat.h>
#include <kernel/memmory.h>

#ifdef __cplusplus
LOUDDK_API_ENTRY{
#endif
void LouKePutPixelVga(int x, int y, uint8_t r, uint8_t g, uint8_t b);
#ifdef __cplusplus
}
#endif

#ifdef __x86_64__

/*this is the basic vga driver definitions needed for the tty terminal function
 this will be used for early kernel stages until propitiery or better drivers can be found
 however it is important for the graphical interface Annya/anna nad debugging the system in bios so
 i know that thew system works before porting it to UEFI*/
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

static uint8_t vga_current;
static uint8_t vga_new;


void setup_vga_systems();
STATUS register_new_mode(uint8_t new_vga,uint8_t mode);
void print_clear();
void print_char(char character);
void print_str(char* str);
void print_set_color(uint8_t foreground, uint8_t background);
void init_terminal();
void Set_Color(enum VGA_COLOR fg, enum VGA_COLOR bg);
void Set_Y(uint64_t y);
void Set_X(uint64_t x);
#endif

#endif

#ifdef __i386__

#ifndef _TTY_H
#define _TTY_H

#include <stdint.h>
#include <stddef.h>

enum VGA_COLOR {
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

// Define a structure representing a VGA character cell
typedef struct {
    uint8_t character;
    uint8_t color;
} Char;

// Function to clear the screen
void print_clear();

// Function to print a character to the screen
void print_char(char character);

// Function to print a string to the screen
void print_str(char* str);

// Function to set the foreground and background colors
void print_set_color(uint8_t foreground, uint8_t background);

// Function to initialize the terminal
void init_terminal();

// Function to set the cursor position
void Set_Y(uint16_t y);

// Function to set the cursor position
void Set_X(uint16_t x);

#endif

#endif
