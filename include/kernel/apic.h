#ifndef _APIC_H
#define _APIC_H

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#ifdef __x86_64__

LOUSTATUS InitializeAdvancedProgramableController();


uint8_t IdentifyApicVersion();
void GetApicInformation(uint8_t version);
void GatherInterruptDiscriptorTableDependencies(uint8_t version);
void StartMainAdvancedProgramableInterruptController(uint8_t version);
uint8_t GetNumberOfOnboardLocalAdvancedProgramableInterruptControllers(uint8_t version);
void StartLocalAdvancedProgramableInterruptController(uint8_t version, uint8_t localApicNumber);
void StartIOAdvancedProgramableInterruptController(uint8_t version);
void ConfigureMainAdvancedProgramableInterruptController(uint8_t version);
void ConfigureLocalAdvancedProgramableInterruptController(uint8_t version, uint8_t localApicNumber);
void ConfigureIOAdvancedProgramableInterruptController(uint8_t version);
#endif


#ifdef __i386__

LOUSTATUS InitializeAdvancedProgramableController();


uint8_t IdentifyApicVersion();
void GetApicInformation(uint8_t version);
void GatherInterruptDiscriptorTableDependencies(uint8_t version);
void StartMainAdvancedProgramableInterruptController(uint8_t version);
uint8_t GetNumberOfOnboardLocalAdvancedProgramableInterruptControllers(uint8_t version);
void StartLocalAdvancedProgramableInterruptController(uint8_t version, uint8_t localApicNumber);
void StartIOAdvancedProgramableInterruptController(uint8_t version);
void ConfigureMainAdvancedProgramableInterruptController(uint8_t version);
void ConfigureLocalAdvancedProgramableInterruptController(uint8_t version, uint8_t localApicNumber);
void ConfigureIOAdvancedProgramableInterruptController(uint8_t version);

#endif

#endif
