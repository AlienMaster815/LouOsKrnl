#include <LouAPI.h>

void DoubleFault() {
	LouPanic("Double Fault Detected", GOOD);
}