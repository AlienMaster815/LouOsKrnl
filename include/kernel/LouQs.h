#ifndef _LOUQS_H
#define _LOUQS_H
#pragma pack(push, 1)
 
typedef struct  _LOUQ{
    void* QueueData;
    uint64_t QueueDataSize;
    bool LOUQNext;
    bool LOUQBeingHandled;
    bool LOUQCompleted;
    uint64_t LOUQFlags;

    uint64_t QueueTimeout;
    uint64_t QueueDepth;

    uint64_t QueuesInFront;
    uint64_t Priority;
    spinlock_t LOUQLock;
}LOUQ, * PLOUQ;


typedef struct  _LOUQ_INTEFACE{
    PLOUQ NextInLine;
    PLOUQ InFront;
}LOUQ_INTEFACE, *PLOUQ_INTEFACE;

#pragma pack(pop)

#endif 