/*
-- Tyler Grenier 11/25/23 3:19 PM
-- This File Will Hold the information for interacting with clock
-- interrupts through a timed interface i am going to set this up
-- so that the system can work less and that will save more energy
-- but it will be more work for me because i will have to minipulate
-- clocks in the board to go at certain clock speeds such as clocks
-- at 1000 hz for milliseconds and 1hz for seconds and minipulate the
-- clocks to make this as power efficient as posible
*/

#include <LouAPI.h>

#ifdef __i386__
void WaitForInterrupt();
#endif

void RegisterForClockInterrupt(){
    Mask_All_Programable_Interrupts();
    IRQ_Pic_clear_mask(0);
}

void RunTimerClockMS(uint64_t TimerInMS){
        for(uint64_t i = 0; i < TimerInMS;  i++){
            //TODO: change The Clock Speed For Time Segments
            RegisterForClockInterrupt();
            WaitForInterrupt();
        }
}

void RunTimerClockS(uint64_t TimerInS){

    for(uint64_t i = 0; i < (TimerInS * 1000);  i++){
            //TODO: change The Clock Speed For Time Segments
            RegisterForClockInterrupt();
            WaitForInterrupt();
    }
}

void RunTimerClockHs(uint64_t TimerHS){
    
    for(uint64_t i = 0; i < ((TimerHS * 1000) * 30); i++){
            //TODO: change The Clock Speed For Time Segments
            RegisterForClockInterrupt();
            WaitForInterrupt();
    }
}

//Bree Likes Cars