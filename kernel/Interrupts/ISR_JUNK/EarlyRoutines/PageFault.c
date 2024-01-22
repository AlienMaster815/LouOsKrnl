#include <LouAPI.h>

void PageFault() {
	LouPanic("Page Fault Detected", GOOD);
}