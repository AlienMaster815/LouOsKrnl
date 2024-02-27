#include <LouAPI.h>

extern bool IsCheckingPageFault;
extern bool CheckIsSuccess;

void DoubleFault() {

	if (IsCheckingPageFault) {
		CheckIsSuccess == false;
		return;
	}

	LouPanic("Double Fault Detected", GOOD);
}