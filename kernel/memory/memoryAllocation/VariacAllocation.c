#include <LouAPI.h>

void* MallocVariacHeap(size_t InitialSize) {
    return LouMalloc(InitialSize);
}

void FreeVariacHeap(
void* VariacPointerToFree, 
size_t HeapSize
) {
    LouFree(VariacPointerToFree, HeapSize);
}

void* IncreaseVariacHeap(
    void* LocationOfCurrentHeap,
    size_t SizeOfNewHeap,
    size_t SizeOfCurrentHeap
) {
    void* LocationOfNewHeap = LouMalloc(SizeOfNewHeap);
    if (LocationOfNewHeap == 0x00) {
        return 0x00;
    }
    memcpy(LocationOfNewHeap, LocationOfCurrentHeap, SizeOfCurrentHeap);
    LouFree(LocationOfCurrentHeap, SizeOfCurrentHeap);
    return LocationOfNewHeap;
}

void* TrimVariacHeap(
    void* LocationOfCurrentHeap,
    void* TRIMStartLocation,
    size_t SizeToTrim,
    size_t SizeOfCurrentHeap
) {
    size_t Offset = (uintptr_t)TRIMStartLocation - (uintptr_t)LocationOfCurrentHeap;
    size_t NewHeapSize = SizeOfCurrentHeap - SizeToTrim;

    void* LocationOfNewHeap = LouMalloc(NewHeapSize);
    if (LocationOfNewHeap == 0x00) {
        return 0x00;
    }
    // Copy the part before the trim start location
    memcpy(LocationOfNewHeap, LocationOfCurrentHeap, Offset);
    // Copy the part after the trimmed section
    memcpy(
        (void*)((uintptr_t)LocationOfNewHeap + Offset),
        (void*)((uintptr_t)LocationOfCurrentHeap + Offset + SizeToTrim),
        SizeOfCurrentHeap - Offset - SizeToTrim
    );
    LouFree(LocationOfCurrentHeap, SizeOfCurrentHeap);
    return LocationOfNewHeap;
}
