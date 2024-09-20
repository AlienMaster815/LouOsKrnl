#include <LouAPI.h>



void DoubleFault() {

	LouPrint("Double Fault Detected");
	while(1);
}