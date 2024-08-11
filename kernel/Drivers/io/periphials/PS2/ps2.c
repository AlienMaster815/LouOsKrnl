#include <LouAPI.h>

//static uint16_t x = 0, y = 0;

void mouse_wait(uint8_t type) {
    uint32_t timeout = 100000;
    if (type == 0) {
        while (timeout--) {
            if ((inb(0x64) & 1) == 1) {
                return;
            }
        }
    } else {
        while (timeout--) {
            if ((inb(0x64) & 2) == 0) {
                return;
            }
        }
    }
}

void mouse_write(uint8_t write) {
    mouse_wait(1);
    outb(0x64, 0xD4);
    mouse_wait(1);
    outb(0x60, write);
}

uint8_t mouse_read() {
    mouse_wait(0);
    return inb(0x60);
}

void InitializePs2Mouse(){

    LouPrint("Initializing PS/2 Mouse (If There Is One)\n");

    // Enable the auxiliary device - the PS/2 mouse
    mouse_wait(1);
    outb(0x64, 0xA8);

    // Enable the interrupts
    mouse_wait(1);
    outb(0x64, 0x20);
    uint8_t status = inb(0x60) | 2;
    mouse_wait(1);
    outb(0x64, 0x60);
    mouse_wait(1);
    outb(0x60, status);

    // Set default settings
    mouse_write(0xF6);
    if (mouse_read() != 0xFA) { // 0xFA is the acknowledgment byte
        LouPrint("PS/2 Mouse Initialization: Failed to reset\n(either the mouse is not connected or one of the pins are brokern)\n");
        return;
    }

    // Enable the mouse
    mouse_write(0xF4);
    if (mouse_read() != 0xFA) { // 0xFA is the acknowledgment byte
        LouPrint("PS/2 Mouse Initialization: Failed to enable\n(either the mouse is not connected or one of the pins are brokern)\n");
        return;
    }

    LouPrint("PS/2 Mouse Initialized Successfully\n");

}

typedef struct {
    int8_t x;
    int8_t y;
    uint8_t buttons;
} ps2_mouse_state_t;

ps2_mouse_state_t mouse_state;


void PS2MouseHandler(){

    //LouPrint("YAY\n");


}