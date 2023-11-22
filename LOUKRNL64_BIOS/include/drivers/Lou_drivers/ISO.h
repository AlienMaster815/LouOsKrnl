#ifndef _ISO_H
#define _ISO_H

#include <drivers/lou_drv_api.h>

class ISO{
    
    public:
    LOUSTATUS ISODriverInit();
    
    private:
    ISO();
    ~ISO();

};

#endif
