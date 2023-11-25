#ifndef TIMERS_H
#define TIMERS_H

#ifdef __cplusplus

#else

void RegisterForClockInterrupt(){
    IRQ_Pic_clear_mask(0x20);
}

void RunTimerClock(uint64_t TimerInMS){
        for(uint64_t i = 0; i < TimerInMS;  i++){
            RegisterForClockInterrupt();
            WaitForInterrupt();
        }
}

#endif
