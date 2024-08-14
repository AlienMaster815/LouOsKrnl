//#include <drivers/display/vga.h>
#include <LouAPI.h>
#include <bootloader/grub/multiboot2.h>

#define VGA_RGB_FRAMEBUFFER 0xFF



extern struct multiboot_tag_framebuffer* FramebufferInformation;
extern struct multiboot_tag_vbe* VBE_INFO;
CharMapping* GetCharecterMap(char Charecter);

uint16_t VgaGetBufferWidth(){
    if(VBE_INFO != 0x00){
        return VBE_INFO->vbe_mode_info.width;
    }
    else if (FramebufferInformation != 0x00){
        return FramebufferInformation->common.framebuffer_width;
    }
    else return 0x00;
}

uint16_t VgaGetBufferHeight(){
    if(VBE_INFO != 0x00){
        return VBE_INFO->vbe_mode_info.height;
    }
    else if (FramebufferInformation != 0x00){
        return FramebufferInformation->common.framebuffer_height;
    }
    else return 0x00;
}

void VgaPutPixelRgb(int x, int y, uint8_t r, uint8_t g, uint8_t b) {

    if(FramebufferInformation != 0x00){

        // Calculate the offset in the framebuffer
        uint32_t bytes_per_pixel = FramebufferInformation->common.framebuffer_bpp / 8;
        uint8_t* framebuffer = (uint8_t*)(uintptr_t)FramebufferInformation->common.framebuffer_addr;

        // Ensure x and y are within the screen bounds
        if (x >= FramebufferInformation->common.framebuffer_width || y >= FramebufferInformation->common.framebuffer_height) {
            return; // Out of bounds, do nothing
        }

        // Calculate the position in the framebuffer
        uint32_t pixel_offset = (y * FramebufferInformation->common.framebuffer_pitch) + (x * bytes_per_pixel);

        // Set the pixel value based on the framebuffer format (assuming RGB)
        framebuffer[pixel_offset] = r;        // Red
        framebuffer[pixel_offset + 1] = g;    // Green
        framebuffer[pixel_offset + 2] = b;    // Blue
        if (bytes_per_pixel == 4) {
            framebuffer[pixel_offset + 3] = 0; // Reserved or Alpha
        }
    }
    else if(VBE_INFO != 0x00){
        // Calculate the offset in the framebuffer
        uint32_t bytes_per_pixel = VBE_INFO->vbe_mode_info.bpp / 8;
        uint8_t* framebuffer = (uint8_t*)(uintptr_t)VBE_INFO->vbe_mode_info.framebuffer;

        // Ensure x and y are within the screen bounds
        if (x >= VBE_INFO->vbe_mode_info.width || y >= VBE_INFO->vbe_mode_info.height) {
            return; // Out of bounds, do nothing
        }

        // Calculate the position in the framebuffer
        uint32_t pixel_offset = (y * VBE_INFO->vbe_mode_info.pitch) + (x * bytes_per_pixel);

    // Set the pixel value based on the framebuffer format
    if (bytes_per_pixel == 4) {
        framebuffer[pixel_offset] = b;        // Blue
        framebuffer[pixel_offset + 1] = g;    // Green
        framebuffer[pixel_offset + 2] = r;    // Red
        framebuffer[pixel_offset + 3] = 0;    // Reserved or Alpha
    } else if (bytes_per_pixel == 3) {
        framebuffer[pixel_offset] = b;        // Blue
        framebuffer[pixel_offset + 1] = g;    // Green
        framebuffer[pixel_offset + 2] = r;    // Red
    }
    }
}


size_t col = 0;
size_t row = 0;

Char* VgaBuffer = (Char*)0xb8000;

uint8_t color;

void Set_Y(uint64_t y) {
    if(vga_current == VGA_MODE_80x25)row = y;
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }

}

void Set_X(uint64_t x) {
    if(vga_current == VGA_MODE_80x25)col = x;
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }

}
void Set_Color(enum VGA_COLOR fg, enum VGA_COLOR bg) {
    if(vga_current == VGA_MODE_80x25)color = fg | bg << 4;
    
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }

}

void clear_row(size_t row) {
    if(vga_current == VGA_MODE_80x25){    
        Char empty;
        empty.character = ' ';
        empty.color = color;


        for (size_t col = 0; col < NUM_COLS; col++) {
            VgaBuffer[col + NUM_COLS * row] = empty;
        }
    }
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }
}
void init_terminal() {


    if(true){
        if(FramebufferInformation != 0x00){
            for(uint64_t i = 0; i < (FramebufferInformation->common.framebuffer_width * FramebufferInformation->common.framebuffer_height * (FramebufferInformation->common.framebuffer_bpp/8)); i+=MEGABYTE_PAGE){
                //LouMapAddress(FramebufferInformation->common.framebuffer_addr + i,FrameBufferVirtualAddress + i, KERNEL_PAGE_WRITE_PRESENT, MEGABYTE_PAGE);
                //FramebufferInformation->common.framebuffer_addr = FrameBufferVirtualAddress;
            }
        }   
        else if(VBE_INFO != 0x00){
            EnforceSystemMemoryMap(VBE_INFO->vbe_mode_info.framebuffer, VBE_INFO->vbe_mode_info.framebuffer + (VBE_INFO->vbe_mode_info.width * VBE_INFO->vbe_mode_info.height * (VBE_INFO->vbe_mode_info.bpp / 8)));
            for(uint64_t i = 0; i < (VBE_INFO->vbe_mode_info.width * VBE_INFO->vbe_mode_info.height * (VBE_INFO->vbe_mode_info.bpp / 8)); i+=MEGABYTE_PAGE){
                LouMapAddress(VBE_INFO->vbe_mode_info.framebuffer + i,VBE_INFO->vbe_mode_info.framebuffer + i, KERNEL_PAGE_WRITE_PRESENT, MEGABYTE_PAGE);
            }
        }

        vga_current = VGA_RGB_FRAMEBUFFER;
        print_clear();
    }
    else{  
        vga_current == VGA_MODE_80x25;
        col = 0;
        row = 0;
        print_clear();
    }

}

void VgaRgbModeFillBackground(uint8_t r,uint8_t g, uint8_t b){
    for(uint32_t y = 0 ; y < VBE_INFO->vbe_mode_info.height; y++){
        for(uint32_t x = 0; x < VBE_INFO->vbe_mode_info.width; x++){
            VgaPutPixelRgb(x,y, r, g, b);
        }
    }
}

void print_clear() {
    if(vga_current == VGA_MODE_80x25){
        for (size_t i = 0; i < NUM_ROWS; i++) {
             clear_row(i);
        }
    }
    else if(vga_current == VGA_RGB_FRAMEBUFFER){
        if(FramebufferInformation != 0x00){
            for(uint32_t y = 0 ; y < FramebufferInformation->common.framebuffer_height; y++){
                for(uint32_t x = 0; x < FramebufferInformation->common.framebuffer_width; x++){
                    VgaPutPixelRgb(x,y, 0, 255, 0);
                }
            }
        }
        else if(VBE_INFO != 0x00){//VBE_INFO->vbe_mode_info.height
            VgaRgbModeFillBackground(0,128,128);
        }

    }

}

void print_newline() {
   if(vga_current == VGA_MODE_80x25){ 
        col = 0;

        if (row < NUM_ROWS - 1) {
            row++;
            return;
        }

        // Shift the entire content up by one row
        size_t rowSize = NUM_COLS * sizeof(Char);
        memcpy(VgaBuffer, VgaBuffer + NUM_COLS, (NUM_ROWS - 1) * rowSize);

        // Clear the last row
        clear_row(NUM_ROWS - 1);
        


    }
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }

}

void print_char(char character) {
    if(vga_current == VGA_MODE_80x25){
    if (character == '\n') {
        print_newline();
        return;
    }

        if (col > NUM_COLS) {
            print_newline();
        }

        if(vga_current == VGA_MODE_80x25){
            VgaBuffer[col + NUM_COLS * row].character = (uint8_t)character;
            VgaBuffer[col + NUM_COLS * row].color = color;
            col++;
        }
    }
    else if(vga_current == VGA_RGB_FRAMEBUFFER){

    }

}

void print_str(char* str) {
    for (size_t i = 0; 1; i++) {
        char character = (uint8_t)str[i];

        if (character == '\0') {
            return;
        }

        print_char(character);
    }
}

void print_set_color(uint8_t foreground, uint8_t background) {
    if(vga_current == VGA_MODE_80x25)color = foreground + (background << 4);
}

bool LouUpdateTextWindow(PWINDHANDLE WindowHandle, TEXT_WINDOW_EVENT Update);

void VgaPutCharecterRgb(char Character, PWINDHANDLE Handle, uint8_t r, uint8_t g, uint8_t b) {
    uint16_t xz, yz;

    if (Character == '\n') {
        Handle->Cursor.x = 0;
        if ((Handle->Cursor.y + 34) > Handle->Charecteristics.Dimentions.height) {
            LouUpdateTextWindow(Handle, TEXT_WINDOW_BUFFER_OVERFLOW);
            }else{
            Handle->Cursor.y += 17;
        }
        return;
    } else if (Character == ' ') {
        Handle->Cursor.x += 8;
        return;
    }

    CharMapping* Map = GetCharecterMap(Character);

    if (Map == 0x00) {
        return;
    }

    if ((Handle->Cursor.x + Map->width + 8) > Handle->Charecteristics.Dimentions.width) {
        VgaPutCharecterRgb('\n', Handle , 0, 0, 0);
    }

    uint16_t x = Handle->Charecteristics.Dimentions.x + Handle->Cursor.x;
    uint16_t y = Handle->Charecteristics.Dimentions.y + Handle->Cursor.y;

    for (yz = 0; yz < 16; yz++) {
        wchar_t Ybyte = Map->pixels[yz];
        for (xz = 0; xz < 16; xz++) {
            if ((Ybyte >> (15 - xz)) & 0x01) {
                VgaPutPixelRgb(x + xz, y + yz, r, g, b);
            }
        }
    }

    Handle->Cursor.x += Map->width;
}

void* GetFrameBufferAddress(
    uint16_t x, uint16_t y
){

    if(FramebufferInformation != 0x00){

        // Calculate the offset in the framebuffer
        uint32_t bytes_per_pixel = FramebufferInformation->common.framebuffer_bpp / 8;
        uint8_t* framebuffer = (uint8_t*)(uintptr_t)FramebufferInformation->common.framebuffer_addr;

        // Ensure x and y are within the screen bounds
        if ((x >= FramebufferInformation->common.framebuffer_width) || (y >= FramebufferInformation->common.framebuffer_height)) {
            return false; // Out of bounds, do nothing
        }

        // Calculate the position in the framebuffer
        uint32_t pixel_offset = (y * FramebufferInformation->common.framebuffer_pitch) + (x * bytes_per_pixel);

        return(void*)&framebuffer[pixel_offset];
    }
    else if(VBE_INFO != 0x00){
        // Calculate the offset in the framebuffer
        uint32_t bytes_per_pixel = VBE_INFO->vbe_mode_info.bpp / 8;
        uint8_t* framebuffer = (uint8_t*)(uintptr_t)VBE_INFO->vbe_mode_info.framebuffer;

        // Ensure x and y are within the screen bounds
        if (x >= VBE_INFO->vbe_mode_info.width || y >= VBE_INFO->vbe_mode_info.height) {
            return false; // Out of bounds, do nothing
        }

        //Calculate the position in the framebuffer
        uint32_t pixel_offset = (y * VBE_INFO->vbe_mode_info.pitch) + (x * bytes_per_pixel);

        return(void*)&framebuffer[pixel_offset];

    }
}

void FrameBufferMemMov(
    PFRAME_BUFFER_HANDLE FrameHandle, 
    PWINDHANDLE WindowOfCopy,
    uint64_t xDest, 
    uint64_t yDest
    ){
    
    uint8_t BytesPerPixel = 0;
    uint16_t Width =  FrameHandle->width;
    uint16_t Height = FrameHandle->height;
    uint16_t StartX = FrameHandle->x;
    uint16_t StartY = FrameHandle->y;

    if (FramebufferInformation != 0x00) {
        BytesPerPixel = FramebufferInformation->common.framebuffer_bpp / 8;
    } else if (VBE_INFO != 0x00) {
        BytesPerPixel = VBE_INFO->vbe_mode_info.bpp / 8;
    } else {
        return; // Handle case where neither FramebufferInformation nor VBE_INFO is valid
    }

    for (uint16_t y = 0; y <= Height; y++) {
        for(uint16_t x = 0 ; x <= Width; x++){
            void* dest = GetFrameBufferAddress(xDest + x, yDest + y);
            void* src = GetFrameBufferAddress(StartX + x, StartY + y);
        
            if (BytesPerPixel == 4) {
                *(uint8_t*)(dest) = *(uint8_t*)(src);
                *(uint8_t*)(dest+1) = *(uint8_t*)(src+1);
                *(uint8_t*)(dest+2) = *(uint8_t*)(src+2);
                *(uint8_t*)(dest+3) = *(uint8_t*)(src+3);
                
                *(uint8_t*)(src)   = 0;
                *(uint8_t*)(src+1) = 0;
                *(uint8_t*)(src+2) = 0;
                *(uint8_t*)(src+3) = 0;

            } else if (BytesPerPixel == 3) {
                *(uint8_t*)(dest) = *(uint8_t*)(src);
                *(uint8_t*)(dest+1) = *(uint8_t*)(src+1);
                *(uint8_t*)(dest+2) = *(uint8_t*)(src+2);

                *(uint8_t*)(src)   = 0;
                *(uint8_t*)(src+1) = 0;
                *(uint8_t*)(src+2) = 0;
            }

        }
    }
}