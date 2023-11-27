
#ifndef _KEYBOARD_H
#define _KEYBOARD_H

#include <stdint.h>

#define PS2 0x01
#define USB 0x02

#define KBD_STATUS 0x64
#define KBD_DATA 0x60

#define QWERTY 0x01

static uint8_t KBDLNG = QWERTY;

void PS2KeyboardHandler();
void USBKeyboardHandler();

#endif
