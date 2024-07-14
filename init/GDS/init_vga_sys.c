#include <LouAPI.h>

void setup_vga_systems(){
    static Mutex m;
    MutexGuard(&m);    
    init_terminal();
    Set_Color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
    LouPrint("Vga Mode 80x25\n");
    MutexFree(&m);
}
