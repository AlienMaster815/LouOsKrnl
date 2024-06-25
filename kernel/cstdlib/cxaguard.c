#include <LouAPI.h>

int __cxa_guard_acquire(int64_t *guard) {
    if (!*guard) {
        return 1;  // Indicates that the initialization should occur
    }
    return 0;      // Indicates that the initialization is already done
}

void __cxa_guard_release(int64_t *guard) {
    *guard = 1;    // Mark the guard as initialized
}

void __cxa_guard_abort(int64_t *guard) {

    *guard = 0;

}