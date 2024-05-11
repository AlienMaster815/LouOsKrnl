#ifndef _NTDDSFIO_H
#define _NTDDSFIO_H

typedef enum _IO_ACCESS_MODE {
	SequentialAccess,
	RandomAccess
} IO_ACCESS_MODE;

typedef enum _IO_ACCESS_TYPE {
	ReadAccess,
	WriteAccess,
	ModifyAccess
} IO_ACCESS_TYPE;


#endif