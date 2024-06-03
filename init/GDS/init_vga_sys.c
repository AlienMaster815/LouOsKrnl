#include <drivers/display/vga.h>
#include <stdio.h>


void setup_vga_systems(){
    init_terminal();
    Set_Color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
    LouPrint("Vga Mode 80x25\n");
}
