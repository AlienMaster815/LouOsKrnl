/*
-- Tyler Grenier 1-16-24 8:45 PM
-- this File Will be used to keep me from going fucking insane once i get
-- interrupts working again for my sanity im going to re write most of my
-- kernels fucky code with a series of helper files like this on this will
-- hold the information on the system architecture and allow me to use less
-- code for more fucking progress
*/

#ifdef __x86_64__

#define UMAXBITRATE uint64_t
#define MAXBITRATE int64_t

#define MAXINT  9223372036854775807
#define UMAXINT 18446744073709551615U

#endif

#ifdef __i386__

#define UMAXBITRATE uint32_t
#define MAXBITRATE int32_t

#define MAXINT 2147483647
#define UMAXINT 4294967295U

#endif
