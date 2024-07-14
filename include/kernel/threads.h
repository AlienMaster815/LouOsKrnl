#ifndef _THREADS_H
#define _THREADS_H

#include <LouAPI.h>

#define MUTEX_FREE 0
#define MUTEX_LOCKED 1

#define ACTIVE_THREAD 0
#define INACTIVE_THREAD 1





typedef struct _Mutex{
    volatile int Locked;
}Mutex;

LOUSTATUS ThreadShove(Mutex* m);


static inline void MutexGuard(Mutex* m){
    while (m->Locked){
        //wait for thread completion
    }
    m->Locked = MUTEX_LOCKED;
}

static inline void MutexFree(Mutex* m){
    //mark thread as completed
    m->Locked = MUTEX_FREE;
}




#endif