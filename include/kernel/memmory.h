#ifndef _MEMMORY_H
#define _MEMMORY_H

// Tyler Grenier 9/21/23 9:38 PM
// added Section 1:1 RAM ADDRESS

#include <stat.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <bootloader/grub/multiboot.h>
#include <SharedTypes.h>

#define FORCE_ALIGNMENT(alignment) __attribute__((aligned(alignment)))


#define KILOBYTE_PAGE 4096
#define MEGABYTE_PAGE 2 * 1024 * 1024
#define KILOBYTE 1 * 1024

#define PRESENT_PAGE           0b1
#define WRITEABLE_PAGE        0b10

#define USER_PAGE           (1 << 2)

#define WRITE_THROUGH_PAGE  0b1000
#define CACHE_DISABLED_PAGE 0b10000

#define PAGE_PRESENT        (1 << 0)
#define PAGE_WRITE          (1 << 1)
#define PAGE_USER           (1 << 2)
#define PAGE_PWT            (1 << 3)
#define PAGE_PCD            (1 << 4)
#define END_PAGE            (1 << 4)

#ifndef __cplusplus
// Section 1:1 RAM ADDRESS
#define MAXMEM 0xFFFFFFFFFFFFFFFFULL
#define RAMADD unsigned char*
#define RAMADDDATA unsigned char *
#define BLOCK 4096
#define SIZE unsigned long long

// Constants for gigabyte and megabyte sizes
#define GIGABYTE (1ULL << 30)  // 1 GB in bytes
#define MEGABYTE (1ULL << 20)  // 1 MB in bytes
#define KILOBYTE 1 * 1024

#define PAGE_TABLE_ALLIGNMENT 4096
#define PAGE_SIZE 4096

#define FLAGSSPACE 0x1FF

#include <LouAPI.h>

#ifndef _KERNEL_MODULE_
extern void Write16BitValueToAddress(uint64_t Address, uint16_t Value);
extern uint16_t Get16BitValueFromAddress(uint64_t Address);
extern void Write8BitValueToAddress(uint64_t Address, uint8_t Value);
extern uint8_t Get8BitValueFromAddress(uint64_t Address);
extern void Write32BitValueFromAddress(uint64_t Address, uint32_t Value);
extern uint32_t Get32BitValueFromAddress(uint64_t Address);
extern void Write64BitValueToAddress(uint64_t Address, uint64_t Value);
extern uint64_t Get64BitValueFromAddress(uint64_t Address);

RAMADD Lou_Alloc_Mem(SIZE size);
STATUS Lou_Free_Mem(RAMADD Addr, SIZE size);
void* Lou_Calloc_Mem(size_t numElements, size_t sizeOfElement);
RAMADD Lou_Alloc_Mem_Alligned(SIZE size,uint64_t allignment);
void LouFree(RAMADD Addr);
void* LouMalloc(size_t BytesToAllocate);
void* LouMallocEx(size_t BytesToAllocate, size_t Aligned);
#endif


#include <stdint.h>

#define MachineMemoryBase 0 


//Paging Stub
#ifndef _KERNEL_MODULE_
typedef struct  __attribute__((packed, aligned(4096))) _PageTable {
    uint64_t entries[512];
} PageTable;

typedef struct __attribute__((packed, aligned(4096))) _PML {
    PageTable PML4;
    PageTable PML3;
    PageTable PML2;
    PageTable PML1;
}PML;
#endif

#ifndef _KERNEL_MODULE_
bool LouMapAddress(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize);
bool LouUnMapAddress(uint64_t VAddress, uint64_t PageSize);
uint64_t GetPageOfFaultValue(uint64_t VAddress);
extern uint64_t GetPageValue(uint64_t PAddress, uint64_t FLAGS);
uint64_t GetRamSize();

bool LouCreateMemoryPool(uint64_t* MemoryAddressVirtual,uint64_t* RequestedMemoryAddressPhysical,uint64_t PoolSizeNeeded,uint64_t AlignmentNeeded, uint64_t PageAttributes);
void LouFreeAlignedMemory(uint8_t* alignedAddr, size_t size);
void* LouMallocAlligned(size_t size, uint64_t allignment);
bool EnforceSystemMemoryMap(
    uint64_t Address, 
    uint64_t size
);

void MapIoMemory(
    uint64_t Address,
    uint64_t MapSize
);
#endif
//Directory Entry FLAGS

//2mb Entry
#define KERNEL_PAGE_WRITE_PRESENT 0b10000011
#define KERNEL_PAGE_WRITE_UNCAHEABLE_PRESENT 0b10010011


typedef uint64_t pde_t; // Page Directory Entry
typedef uint64_t pte_t; // Page Table Entry

//endof Paging Stubs

#ifndef _KERNEL_MODULE_
void* memset(void* dest, int value, size_t count);

void* align_memory(void* ptr, size_t alignment);
#endif

// Initialize a page table
#else
#include <LouDDK.h>

#ifndef _KERNEL_MODULE_
KERNEL_IMPORT void MapIoMemory(
    uint64_t Address,
    uint64_t MapSize
);
#endif

#define GIGABYTE 0x40000000
#define MEGABYTE 0x100000
#define KILOBYTE 1 * 1024

#define KERNEL_PAGE_WRITE_PRESENT 0b10000011
#define KERNEL_PAGE_WRITE_UNCAHEABLE_PRESENT 0b10010011

#ifndef _KERNEL_MODULE_
KERNEL_IMPORT bool LouMapAddress(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize);
KERNEL_IMPORT void remove_padding(const void* struct_ptr, size_t struct_size, uint8_t* buffer);
KERNEL_IMPORT void LouFree(uint8_t* Addr);
KERNEL_IMPORT void* LouMalloc(size_t BytesToAllocate);
KERNEL_IMPORT LOUSTATUS LouKeMapIO(uint64_t PADDRESS, uint64_t MemoryBuffer, uint64_t FLAGS);
KERNEL_IMPORT bool LouMapAddressEx(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize);
KERNEL_IMPORT void* LouMallocEx(size_t BytesToAllocate, size_t Aligned);
KERNEL_IMPORT void* memset(void* dest, int value, size_t count);
KERNEL_IMPORT void* LouMallocAlligned(size_t size, uint64_t allignment);
KERNEL_IMPORT bool LouCreateMemoryPool(uint64_t* MemoryAddressVirtual,uint64_t* RequestedMemoryAddressPhysical, uint64_t PoolSizeNeeded,uint64_t AlignmentNeeded, uint64_t PageAttributes);
KERNEL_IMPORT void LouFreeAlignedMemory(uint8_t* alignedAddr, size_t size);
KERNEL_IMPORT bool LouUnMapAddress(uint64_t VAddress, uint64_t PageSize);
KERNEL_IMPORT bool EnforceSystemMemoryMap(
    uint64_t Address, 
    uint64_t size
);
#else 
KERNEL_EXPORT void* LouMalloc(size_t BytesToAllocate);

#endif
#endif

#ifdef __cplusplus
KERNEL_IMPORT{
#endif

#define LouClamp_t(type, val, min, max) ({           \
    type __val = (val);                              \
    type __min = (min);                              \
    type __max = (max);                              \
    __val < __min ? __min : __val > __max ? __max : __val; \
})

#pragma pack(push, 1)
typedef struct LMPOOL_DIRECTORY{
    ListHeader List;
    string Tag;
    uint64_t Location;
    uint64_t PoolSize;
    uint64_t ObjectSize;
    uint64_t Flags;
    uint8_t* PoolBitMap;
}LMPOOL_DIRECTORY, * PLMPOOL_DIRECTORY;

typedef struct _BO{
    ListHeader Header;
    size_t size;
    uintptr_t CpuDmaAddress;
    uintptr_t VRamTranslatedAddress;
    uint64_t Flags;
    int ReferenceCount;
    bool BufferIsInVRam;
}BO, *PBO;
#pragma pack(pop)

#ifndef _KERNEL_MODULE_
void* MallocVariacHeap(size_t InitialSize);
void FreeVariacHeap(
void* VariacPointerToFree, 
size_t HeapSize
);
void* IncreaseVariacHeap(
    void* LocationOfCurrentHeap,
    size_t SizeOfNewHeap,
    size_t SizeOfCurrentHeap
);
void* TrimVariacHeap(
    void* LocationOfCurrentHeap,
    void* TRIMStartLocation,
    size_t SizeToTrim,
    size_t SizeOfCurrentHeap
);

uint64_t GetKernelLoadedAddress();
void SetKernelLoadedAddress(uint64_t Address);

void LouKeMallocVMmIO(
    uint64_t PAddress,
    uint64_t size,
    uint64_t FLAGS
);

uint64_t LouKeVMemmorySearchPhysicalSpace(
    uint64_t VAddress
);

uint64_t LouKeVMemmorySearchVirtualSpace(
    uint64_t PAddress
);

uint64_t SearchForMappedAddressSize(uint64_t Address);
void* LouKeAllocateUncachedVMemory(uint64_t NumberOfBytes);
void* LouKeAllocateUncachedVMemoryEx(
    uint64_t NumberOfBytes,
    uint64_t Alignment
);

void* LouVMallocEx(size_t BytesToAllocate, uint64_t Alignment);
void* LouVMalloc(size_t BytesToAllocate);

void LouKeMapcontinuousMemmoryBlock(
    uint64_t PAddress, 
    uint64_t VAddress,
    uint64_t size, 
    uint64_t FLAGS
);

uint64_t LouKeVMemmoryGetSize(uint64_t VAddress);

LOUSTATUS RequestPhysicalAddress(
    uint64_t VAddress,
    uint64_t* PAddress
);

PLMPOOL_DIRECTORY LouKeMapPool(
    uint64_t LocationOfPool,
    uint64_t PoolSize,
    uint64_t ObjectSize,
    string Tag,
    uint64_t Flags
);

void LouKeFreePool(PLMPOOL_DIRECTORY PoolToFree);

void* LouKeMallocFromPool(
    PLMPOOL_DIRECTORY Pool, 
    uint64_t size, 
    uint64_t* Offset
);
void LouKeFreeFromPool(PLMPOOL_DIRECTORY Pool, void* Address, uint64_t size);
#endif
#ifdef __cplusplus
}
#endif

//typedef __uint128_t uint128_t;

#endif


#ifdef _KERNEL_MODULE_

KERNEL_EXPORT void LouFree(uint8_t* Addr);

KERNEL_EXPORT void LouKeMallocVMmIO(
    uint64_t PAddress,
    uint64_t size,
    uint64_t FLAGS
);

KERNEL_EXPORT uint64_t LouKeVMemmorySearchPhysicalSpace(
    uint64_t VAddress
);

KERNEL_EXPORT uint64_t LouKeVMemmorySearchVirtualSpace(
    uint64_t PAddress
);

KERNEL_EXPORT uint64_t SearchForMappedAddressSize(uint64_t Address);
KERNEL_EXPORT void* LouKeAllocateUncachedVMemory(uint64_t NumberOfBytes);
KERNEL_EXPORT void* LouKeAllocateUncachedVMemoryEx(
    uint64_t NumberOfBytes,
    uint64_t Alignment
);

KERNEL_EXPORT void* LouVMallocEx(size_t BytesToAllocate, uint64_t Alignment);
KERNEL_EXPORT void* LouVMalloc(size_t BytesToAllocate);

KERNEL_EXPORT void LouKeMapcontinuousMemmoryBlock(
    uint64_t PAddress, 
    uint64_t VAddress,
    uint64_t size, 
    uint64_t FLAGS
);

KERNEL_EXPORT uint64_t LouKeVMemmoryGetSize(uint64_t VAddress);

KERNEL_EXPORT LOUSTATUS RequestPhysicalAddress(
    uint64_t VAddress,
    uint64_t* PAddress
);

KERNEL_EXPORT PLMPOOL_DIRECTORY LouKeMapPool(
    uint64_t LocationOfPool,
    uint64_t PoolSize,
    uint64_t ObjectSize,
    string Tag,
    uint64_t Flags
);

KERNEL_EXPORT void LouKeFreePool(PLMPOOL_DIRECTORY PoolToFree);

KERNEL_EXPORT void* LouKeMallocFromPool(
    PLMPOOL_DIRECTORY Pool, 
    uint64_t size, 
    uint64_t* Offset
);
KERNEL_EXPORT void LouKeFreeFromPool(PLMPOOL_DIRECTORY Pool, void* Address, uint64_t size);

#endif