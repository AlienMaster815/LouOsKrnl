#ifndef _THREADS_H
#define _THREADS_H


#ifdef __cplusplus
#include <LouDDK.h>
LOUDDK_API_ENTRY LOUSTATUS LouKeCreateThread(void (*Function)(), PVOID FunctionParameters, uint32_t StackSize);
extern "C" {
#else
#include <LouAPI.h>
typedef void* PVOID; 
LOUSTATUS LouKeCreateThread(void (*Function)(), PVOID FunctionParameters, uint32_t StackSize);
#endif

#define MUTEX_FREE 0
#define MUTEX_LOCKED 1

#define ACTIVE_THREAD 0
#define INACTIVE_THREAD 1



typedef struct {
    bool locked;
} mutex_t;

static inline void MutexLock(mutex_t* m){
    while(m->locked == true){
        //spinlock
    }
    m->locked = true;
}

static inline void MutexUnlock(mutex_t* m){
    m->locked = false;
}

#ifdef __cplusplus
}
#endif

typedef enum{
    KERNEL_THREAD = 1,
    USER_THREAD = 2,
}THREAD_TYPE;

#endif