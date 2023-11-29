#ifndef _EXPORTS_H
#define _EXPORTS_H
#include <stdint.h>

#ifdef __cplusplus

extern "C" void DefineExport(uint64_t ExportNumber, void (*Handler)());

#else

void DefineExport(uint64_t ExportNumber, void (*Handler)());

#endif

#endif
