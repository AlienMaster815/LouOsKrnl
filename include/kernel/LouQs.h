#ifndef _LOUQS_H
#define _LOUQS_H
#pragma pack(push, 1)
 
typedef struct  _LOUQ{
    void* QueData;
    uint64_t QueDataSize;
    bool LOUQNext;
    bool LOUQBeingHandled;
    bool LOUQCompleted;
    uint64_t LOUQFlags;

    uint64_t QueTimeout;
    uint64_t QueDepth;

    uint64_t QuesInFront;
    uint64_t Priority;
    spinlock_t LOUQLock;
}LOUQ, * PLOUQ;


typedef struct  _LOUQ_INTEFACE{
    PLOUQ NextInLine;
    PLOUQ InFront;
}LOUQ_INTEFACE, *PLOUQ_INTEFACE;

#pragma pack(pop)

#endif 