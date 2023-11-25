#include <LouAPI.h>


void changeTimerClockToOneHz(){
    
}
void changeTimerClockToFiveHundredHz(){
    
}
void changeTimerClockToOneThousandHz(){
    
}

void ChangeTimerClock(uint64_t SPEED){
    switch(SPEED){
        case TIMERCLOCK_1000HZ:{
            changeTimerClockToOneThousandHz();
            break;
        }
        case TIMERCLOCK_500HZ:{
            changeTimerClockToFiveHundredHz();
            break;
        }
        case TIMERCLOCK_1HZ:{
            changeTimerClockToOneHz();
            break;
        }            
        default:
            LouPrint("Unkown Clock Speed\n");
    }
}
