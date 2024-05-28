#include <LouAPI.h>

LOUSTATUS InitHPET();
uint64_t calibrate_tsc();

void SetTSCFrequency(uint64_t Frequency);

void SetTSC();

LOUSTATUS SetUpTimers() {
	LOUSTATUS Status = LOUSTATUS_GOOD;

	//Start With the Most Reliable And Work From There


	//if (LOUSTATUS_GOOD != InitHPET()) {
		//if no hpet use tsc
		LouPrint("HPET Not Found Using TSC\n");
		uint64_t TSC_Ticks = calibrate_tsc();

		LouPrint("TSC Ticks Are:%d\n",TSC_Ticks);

		SetTSCFrequency(TSC_Ticks);
		SetTSC();
	//}

	

	return Status;
}