#ifndef STAT_H
#define STAT_H
#include <stdbool.h>
// Tyler Grenier 9/21/23 9:35pm
// subject: bool std Stat Values
// added the definition fo STATUS
// GOOD and BAD definitions

/* this header defines different status Values 
-- for our kernel so that when we need to debug
-- parts of our kernel we have a human readable
-- error system
*/ 


//defines our STAT features for basic status info
typedef bool STATUS;
#define GOOD true
#define BAD false



#endif
