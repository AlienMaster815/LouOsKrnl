#include "PageDefinitions.h"


#define StartMap (10ULL * MEGABYTE)



CurrentPageSize GetCurrentPageSize(
    uint64_t AddressOfTable,
    InitiatedPageEntryLevel PageLevel
    ){


        if(PageLevel == L2){
            if(AddressOfTable > StartMap)return KILOBYTE_PAGE;
            else return MEGABYTE_PAGE;
        }
        else if(PageLevel == L1){

            if(AddressOfTable > StartMap)return KILOBYTE_PAGE;
            else return MEGABYTE_PAGE;

        }

}