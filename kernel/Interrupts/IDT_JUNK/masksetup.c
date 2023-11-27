
#include <kernel/pic.h>

//LATER We Will Set This Up For Dynamic setups

void UnMaskKeyboard(){
    IRQ_Pic_clear_mask(1);
}
