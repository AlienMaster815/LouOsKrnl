#include <LouAPI.h>

void RunTimerClockMS(uint64_t TimerInMS);

void sleep(uint64_t Time) {

	RunTimerClockMS(Time);

}
void sleepEx(uint8_t Interval, uint64_t Time) {

}