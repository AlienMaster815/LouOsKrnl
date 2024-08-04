#include <LouAPI.h>

void CookieCheckFail(){
    LouPrint("Bad Cookie Detected Cookie Monster Sad!!!\n");
    asm("cli");
    asm("hlt");
}