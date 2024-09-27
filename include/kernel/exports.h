#ifndef _EXPORTS_H
#define _EXPORTS_H
#include <stdint.h>

#ifdef __cplusplus

#include <NtAPI.h>

#ifndef _KERNEL_MODULE_
extern "C" void DefineExport(uint64_t ExportNumber, void (*Handler)());

void DeclareExports();
#endif
#define KRNLEXPORT void (*)()

#else
#ifndef _KERNEL_MODULE_
void DefineExport(uint64_t ExportNumber, void (*Handler)());
#endif
typedef void *KRNLEXPORT;

#endif

#endif
