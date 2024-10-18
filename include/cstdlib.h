#ifndef _CSTD_LIB_H
#define _CSTD_LIB_H

#ifdef __cplusplus
extern "C" {
#endif


#ifndef _KERNEL_MODULE_
int __cxa_guard_acquire(int64_t *guard);
void __cxa_guard_release(int64_t *guard);
void __cxa_guard_abort(int64_t *);

static inline void* LouKeCastToUnalignedPointer(void* pointer){
	return pointer;
}

#endif
#ifdef __cplusplus
}
#endif


#endif