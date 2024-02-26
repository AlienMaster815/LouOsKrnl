#include <LouAPI.h>


extern uint64_t InterruptCode;


void PageFault() {


    LouPanic("Page Fault Detected", BAD);
}
