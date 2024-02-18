#ifndef _EXPORTS_H
#define _EXPORTS_H
#include <stdint.h>

#ifdef __cplusplus

#include <NtAPI.h>

extern "C" void DefineExport(uint64_t ExportNumber, void (*Handler)());

void DeclareExports();
#define KRNLEXPORT void (*)()

#else

void DefineExport(uint64_t ExportNumber, void (*Handler)());

typedef void *KRNLEXPORT;

#endif

#endif
