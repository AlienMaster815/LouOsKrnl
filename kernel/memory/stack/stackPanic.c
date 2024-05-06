#include <LouAPI.h>

noreturn void LouKeStackPanic() {

	LouPanic("StkChk Failure", BAD);

	while (1);
}