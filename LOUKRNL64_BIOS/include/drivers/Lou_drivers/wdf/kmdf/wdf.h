/*
 * Tyler Grenier 10/13/23 8:37
 * were gonna define data that is
 * used by wdk in order to used
 * sys files
 */


#ifndef _WDF_H
#define _WDF_H

#ifndef WDF_EXTERN_C
  #ifdef __cplusplus
    #define WDF_EXTERN_C       extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END   }
  #else
    #define WDF_EXTERN_C
    #define WDF_EXTERN_C_START
    #define WDF_EXTERN_C_END
  #endif
#endif

#ifndef _Dispatch_type
//#include <driverspecs.h> we will get to this later
#endif
#endif
