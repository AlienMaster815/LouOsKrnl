#include <LouAPI.h>

void GPF() {
	//LouPanic("GPF Fault", GOOD);
	LouPrint("GPF\n");
	while(1);
}