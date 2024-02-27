#ifndef _ERRORS_H
#define _ERRORS_H

#include <stdint.h>
#include <stat.h>

void LouPanic(char* error_message,STATUS recoverable);

#define LOUSTATUS_GOOD 0



#endif
