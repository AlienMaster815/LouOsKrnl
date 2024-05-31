#include <LouAPI.h>

#define PIT_FREQUENCY 1193182
#define PIT_CONTROL_PORT 0x43
#define PIT_CHANNEL_0 0x40


static inline uint64_t read_tsc(void) {
    uint32_t lo, hi;
    asm volatile("rdtsc" : "=a"(lo), "=d"(hi));
    return ((uint64_t)hi << 32) | lo;
}

void write_pit_control(uint8_t command) {
    outb(PIT_CONTROL_PORT, command);
}

void write_pit_data(uint16_t data) {
    outb(PIT_CHANNEL_0, data & 0xFF);       // Low byte
    outb(PIT_CHANNEL_0, (data >> 8) & 0xFF); // High byte
}

uint16_t read_pit_count(void) {
    uint8_t lo, hi;

    // Send command to read back the current count of channel 0
    outb(PIT_CONTROL_PORT, 0x00);
    lo = inb(PIT_CHANNEL_0);
    hi = inb(PIT_CHANNEL_0);

    return (hi << 8) | lo;
}

uint64_t calibrate_tsc() {
    uint64_t start_tsc, end_tsc;
    uint16_t start_pit, end_pit;
    uint32_t pit_ticks;
    uint64_t tsc_frequency;

    // Configure PIT for rate generator mode, channel 0, LSB/MSB access
    write_pit_control(0x34);
    // Set PIT to count down from 0xFFFF
    write_pit_data(0xFFFF);

    // Read the initial TSC and PIT count
    start_tsc = read_tsc();
    start_pit = read_pit_count();

    // Busy-wait for a short period
    for (volatile int i = 0; i < 10000; i++);

    // Read the final TSC and PIT count
    end_tsc = read_tsc();
    end_pit = read_pit_count();

    // Calculate the elapsed PIT ticks
    if (start_pit >= end_pit) {
        pit_ticks = start_pit - end_pit;
    }
    else {
        pit_ticks = (0xFFFF - end_pit) + start_pit;
    }

    // Calculate the TSC frequency (PIT_FREQUENCY is in Hz)
    if(((end_tsc - start_tsc) * PIT_FREQUENCY == 0) || (pit_ticks == 0))return 0;
    tsc_frequency = (end_tsc - start_tsc) * PIT_FREQUENCY / pit_ticks;

    return tsc_frequency;
}

static uint64_t tsc_frequency_master;

void SetTSCFrequency(uint64_t Frequency) {
    tsc_frequency_master = Frequency;
}

void busy_wait_TSC(uint32_t milliseconds) {
    uint64_t start_tsc = read_tsc();
    uint64_t end_tsc = start_tsc + (tsc_frequency_master * milliseconds) / 1000;

    while (read_tsc() < end_tsc);
}