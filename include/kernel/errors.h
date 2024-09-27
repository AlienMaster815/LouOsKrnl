#ifndef _ERRORS_H
#define _ERRORS_H

#include <stdint.h>
#include <stat.h>

#ifndef _KERNEL_MODULE_
void LouPanic(char* error_message,STATUS recoverable);
#endif

#define LOUSTATUS_GOOD 0



#endif
