#include <LouAPI.h>

void StackSegmentFault() {

	LouPrint("SSF\n");

	while (1);
}