#include <LouDDK.h>

KERNEL_IMPORT
void UnSetInterruptFlags();
KERNEL_IMPORT
void SetInterruptFlags();

void LouKeBcdToBinary(uint8_t* bcd_value){
    *bcd_value = (*bcd_value / 16 * 10) + (*bcd_value % 16);
}

LOUDDK_API_ENTRY
void read_rtc() {
    UNUSED uint8_t second, minute, hour, day, month, year;

    outb(0x70, 0x0A);
    while (inb(0x71) & 0x80) {
        sleep(5);  // Sleep for a short duration (e.g., 1 ms)
    }

    UnSetInterruptFlags();

    outb(0x70, 0x00);  // Seconds
    second = inb(0x71);
    outb(0x70, 0x02);  // Minutes
    minute = inb(0x71);
    outb(0x70, 0x04);  // Hours
    hour = inb(0x71);
    outb(0x70, 0x07);  // Day
    day = inb(0x71);
    outb(0x70, 0x08);  // Month
    month = inb(0x71);
    outb(0x70, 0x09);  // Year
    year = inb(0x71);

    // Optionally convert BCD to binary
    LouKeBcdToBinary(&second);
    LouKeBcdToBinary(&minute);
    LouKeBcdToBinary(&hour);
    LouKeBcdToBinary(&day);
    LouKeBcdToBinary(&month);
    LouKeBcdToBinary(&year);

    LouPrint("Time:%d:%d\n", hour, minute);

    SetInterruptFlags();

}
