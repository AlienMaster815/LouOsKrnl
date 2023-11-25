#ifndef CLOCKS_H
#define CLOCKS_H

#ifdef __cplusplus

#else

// define Timer clock speeds

#define TIMERCLOCK_1000HZ 1000
#define TIMERCLOCK_500HZ 500
#define TIMERCLOCK_1HZ 1

void ChangeTimerClock(uint64_t SPEED);

#endif
#endif
