#ifndef _PAGE_DEFINITION_H
#define _PAGE_DEFINITION_H

#include <LouAPI.h>

typedef enum{
    GIGABYTE_PAGE_ENTRY,
    MEGABYTE_PAGE_ENTRY,
    KILOBYTE_PAGE_ENTRY,
}CurrentPageSize;

typedef enum{
    L3,
    L2,
    L1,
}InitiatedPageEntryLevel;

#define L4Parameter 0
#define L3Parameter 1
#define L2Parameter 2
#define L1Parameter 3

PML* GetPageBase();

CurrentPageSize GetCurrentPageSize(
    uint64_t AddressOfTable,
    InitiatedPageEntryLevel PageLevel
);

#endif