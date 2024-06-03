//#include <drivers/display/vga.h>
#include <LouAPI.h>


size_t col = 0;
size_t row = 0;

Char* VgaBuffer = (Char*)0xb8000;

uint8_t color;

void Set_Y(uint64_t y) {
    if(vga_current == VGA_MODE_80x25)row = y;
}

void Set_X(uint64_t x) {
    if(vga_current == VGA_MODE_80x25)col = x;
}
void Set_Color(enum VGA_COLOR fg, enum VGA_COLOR bg) {
    if(vga_current == VGA_MODE_80x25)color = fg | bg << 4;
}

void clear_row(size_t row) {
    if(vga_current == VGA_MODE_80x25){    
        Char empty;
        empty.character = ' ';
        empty.color = color;


        for (size_t col = 0; col < NUM_COLS; col++) {
            VgaBuffer[col + NUM_COLS * row] = empty;
        }
    }
}
void init_terminal() {  
    STATUS Continue_vga = register_new_mode(vga_new, VGA_MODE_80x25);    
    if((Continue_vga) == (GOOD)){
        vga_current = vga_new;        
    }
    else if((Continue_vga) == (BAD)){
        //later we will error this        
        return;    
    }
    col = 0;
    row = 0;
    print_clear();
}

void print_clear() {
    if(vga_current == VGA_MODE_80x25){
        for (size_t i = 0; i < NUM_ROWS; i++) {
             clear_row(i);
        }
    }
}

void print_newline() {
   if(vga_current == VGA_MODE_80x25){ 
        col = 0;

        if (row < NUM_ROWS - 1) {
            row++;
            return;
        }

        // Shift the entire content up by one row
        size_t rowSize = NUM_COLS * sizeof(Char);
        memcpy(VgaBuffer, VgaBuffer + NUM_COLS, (NUM_ROWS - 1) * rowSize);

        // Clear the last row
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

    if(vga_current == VGA_MODE_80x25){
        VgaBuffer[col + NUM_COLS * row].character = (uint8_t)character;
        VgaBuffer[col + NUM_COLS * row].color = color;
        col++;
    }
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
    if(vga_current == VGA_MODE_80x25)color = foreground + (background << 4);
}

STATUS register_new_mode(uint8_t new_vga,uint8_t mode){  

    //later we will talk to user mode to see 
    //if this video mode is shown on the screen
    
    new_vga = mode;
    
    if((new_vga) != (mode)) LouPanic("unable to locate memory for VMODE", BAD);
    
    return GOOD;
}

