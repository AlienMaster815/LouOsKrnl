#ifndef _APIC_LOCAL_HEADER
#define _APIC_LOCAL_HEADER


#ifdef __cplusplus
#include <LouDDK.h>
#include <NtAPI.h>

typedef enum {
	PeriodicMode,
	OneShotMode,
	TSC_Deadline, //Not All Systems Have This
}TimerMode;

LOUSTATUS SetTimerMode(
	TimerMode SelectedMode,
	uint64_t MiS
);

#elif
//C World


#endif

#endif