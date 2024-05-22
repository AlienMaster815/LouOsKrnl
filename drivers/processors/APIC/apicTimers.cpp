#include <LouDDK.h>
#include <NtAPI.h>

//include Local Header
#include "apic.h"

LOUSTATUS StartPeriodicMode(uint64_t MiS) {
	LOUSTATUS Status = LOUSTATUS_GOOD;

	return Status;
}

LOUSTATUS StartOneShotMode(uint64_t MiS) {
	LOUSTATUS Status = LOUSTATUS_GOOD;

	return Status;
}

LOUSTATUS StartTscDeadlineMode(uint64_t MiS) {
	LOUSTATUS Status = LOUSTATUS_GOOD;

	return Status;
}

LOUSTATUS SetTimerMode(
	TimerMode SelectedMode,
	uint64_t MiS
) {
	LOUSTATUS Status = LOUSTATUS_GOOD;

	switch (SelectedMode) {

	case PeriodicMode:
		Status = StartPeriodicMode(MiS);
		break;
	case OneShotMode:
		Status = StartOneShotMode(MiS);
		break;
	case TSC_Deadline:
		Status = StartTscDeadlineMode(MiS);
		break;
	default:
		Status = (LOUSTATUS)STATUS_UNSUCCESSFUL;
	}

	return Status;
}