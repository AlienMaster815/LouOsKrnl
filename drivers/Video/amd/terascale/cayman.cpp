#include <LouDDK.h>
#include <NtAPI.h>
#include <bootloader/grub/multiboot2.h>

extern struct multiboot_tag_vbe VBE_INFO;

static uint64_t IOBase = 0x00;

#define SRBM_SOFT_RESET 0x00B0  // Register offset for SRBM_SOFT_RESET
#define CONFIG_MEMSIZE_OFFSET 0x5428  // Offset for the CONFIG_MEMSIZE register
#define D1GRPH_PRIMARY_SURFACE_ADDRESS 0x6110  // Framebuffer base address
#define D1GRPH_PITCH 0x6120  // Framebuffer pitch (stride)
#define D1MODE_VIEWPORT_SIZE 0x6024  // Viewport size (resolution)
#define D1GRPH_ENABLE 0x6104  // Enable/disable display engine

// Bitmasks for resetting different GPU components (specific to Cayman)
#define RESET_GRAPHICS_ENGINE  0x00000001
#define RESET_MEMORY_CONTROLLER 0x00000002
#define RESET_DISPLAY_ENGINE  0x00000004
#define RESET_DMA_ENGINE      0x00000008
#define RESET_UVD_ENGINE      0x00000010

#define CAYMAN_GRBM_STATUS               0x8010  // Register offset for GRBM_STATUS on Cayman
#define CAYMAN_GRBM_STATUS_CP_BUSY       (1 << 0)
#define CAYMAN_GRBM_STATUS_GUI_ACTIVE    (1 << 1)
#define CAYMAN_GRBM_STATUS_VGT_BUSY      (1 << 2)
#define CAYMAN_GRBM_STATUS_TA_BUSY       (1 << 3)
#define CAYMAN_GRBM_STATUS_VC_BUSY       (1 << 4)
#define CAYMAN_GRBM_STATUS_DB_BUSY       (1 << 5)
#define CAYMAN_GRBM_STATUS_CB_BUSY       (1 << 6)
#define CAYMAN_GRBM_STATUS_SX_BUSY       (1 << 7)  // Additional bit for the shader export unit

#define CAYMAN_GPU_BUSY_MASK (CAYMAN_GRBM_STATUS_CP_BUSY | \
                              CAYMAN_GRBM_STATUS_GUI_ACTIVE | \
                              CAYMAN_GRBM_STATUS_VGT_BUSY | \
                              CAYMAN_GRBM_STATUS_TA_BUSY | \
                              CAYMAN_GRBM_STATUS_VC_BUSY | \
                              CAYMAN_GRBM_STATUS_DB_BUSY | \
                              CAYMAN_GRBM_STATUS_CB_BUSY | \
                              CAYMAN_GRBM_STATUS_SX_BUSY)

#define MC_ARB_RAMCFG_OFFSET 0x2760  // Offset for MC_ARB_RAMCFG
#define MC_ARB_DRAM_TIMING_OFFSET 0x2764  // Offset for MC_ARB_DRAM_TIMING
#define MC_VM_SYSTEM_APERTURE_LOW_ADDR_OFFSET 0x2020  // Offset for MC_VM_SYSTEM_APERTURE_LOW_ADDR
#define MC_VM_SYSTEM_APERTURE_HIGH_ADDR_OFFSET 0x2024  // Offset for MC_VM_SYSTEM_APERTURE_HIGH_ADDR
#define MC_VM_SYSTEM_APERTURE_DEFAULT_ADDR_OFFSET 0x2028  // Offset for MC_VM_SYSTEM_APERTURE_DEFAULT_ADDR

// Example values for Cayman (derived from typical settings)
#define RAMCFG_VALUE 0x00000000  // Example value for MC_ARB_RAMCFG
#define DRAM_TIMING_VALUE 0x00010000  // Example value for MC_ARB_DRAM_TIMING
#define APERTURE_DEFAULT_ADDR 0x00000000  // Example default aperture address
#define APERTURE_HIGH_ADDR 0x000FFFFF  // Example high aperture address
#define APERTURE_LOW_ADDR 0x00000000  // Example low aperture address

#define D1GRPH_PRIMARY_SURFACE_ADDRESS 0x6110  // Framebuffer base address register

static inline uint64_t GetFramebufferBaseAddress(uint64_t mmio_base) {
    // Access the framebuffer base address register
    volatile uint32_t* framebuffer_addr_reg = (volatile uint32_t*)(mmio_base + D1GRPH_PRIMARY_SURFACE_ADDRESS);
    
    // Read the base address of the framebuffer (lower 32 bits)
    uint64_t framebuffer_address = (uint64_t)(*framebuffer_addr_reg);

    // If there are upper bits (in some configurations, there might be), you would read them here.
    // Assuming Cayman GPUs don't need to handle this explicitly, as most use a 32-bit address space.

    return framebuffer_address;
}


void InitializeCaymanMemoryController(uint64_t mmio_base) {
    // Configure the RAM configuration register (MC_ARB_RAMCFG)
    volatile uint32_t* ramcfg_reg = (volatile uint32_t*)(mmio_base + MC_ARB_RAMCFG_OFFSET);
    *ramcfg_reg = RAMCFG_VALUE;

    // Configure the DRAM timing register (MC_ARB_DRAM_TIMING)
    volatile uint32_t* dram_timing_reg = (volatile uint32_t*)(mmio_base + MC_ARB_DRAM_TIMING_OFFSET);
    *dram_timing_reg = DRAM_TIMING_VALUE;

    // Set the system aperture default address
    volatile uint32_t* aperture_default_addr_reg = (volatile uint32_t*)(mmio_base + MC_VM_SYSTEM_APERTURE_DEFAULT_ADDR_OFFSET);
    *aperture_default_addr_reg = APERTURE_DEFAULT_ADDR;

    // Set the system aperture high address
    volatile uint32_t* aperture_high_addr_reg = (volatile uint32_t*)(mmio_base + MC_VM_SYSTEM_APERTURE_HIGH_ADDR_OFFSET);
    *aperture_high_addr_reg = APERTURE_HIGH_ADDR;

    // Set the system aperture low address
    volatile uint32_t* aperture_low_addr_reg = (volatile uint32_t*)(mmio_base + MC_VM_SYSTEM_APERTURE_LOW_ADDR_OFFSET);
    *aperture_low_addr_reg = APERTURE_LOW_ADDR;
}

int WaitForCaymanGpuIdle(uint64_t mmio_base) {
    volatile uint32_t* status_reg = (volatile uint32_t*)(mmio_base + CAYMAN_GRBM_STATUS);
    unsigned int timeout = 1000000;  // 1 second timeout

    // Polling loop to wait for GPU to become idle
    while ((*status_reg & CAYMAN_GPU_BUSY_MASK) != 0) {
        if (--timeout == 0) {
            return -1;  // Timeout, GPU is not idle
        }
        sleep(10);
    }

    return 0;  // GPU is idle
}

void SoftResetCaymanGPU(uint64_t mmio_base) {
    // Pointer to the SRBM_SOFT_RESET register
    volatile uint32_t* soft_reset_register = (volatile uint32_t*)(mmio_base + SRBM_SOFT_RESET);

    // Perform the reset by setting the appropriate bits
    *soft_reset_register = RESET_GRAPHICS_ENGINE | 
                           RESET_MEMORY_CONTROLLER | 
                           RESET_DISPLAY_ENGINE | 
                           RESET_DMA_ENGINE | 
                           RESET_UVD_ENGINE;

    // Optional: Wait for the reset to complete
    sleep(100);  // Small delay to ensure the reset takes effect

    // Clear the reset bits to bring the components back up
    *soft_reset_register = 0x00000000;

    sleep(100);  // Another small delay to stabilize the GPU after reset
}

static void LouMapCayman(uint64_t Base, uint32_t size){
    for(uint64_t i  = 0 ; i < size; i+=MEGABYTE_PAGE){
        LouMapAddress(Base + i,Base + i, KERNEL_PAGE_WRITE_PRESENT, MEGABYTE_PAGE);
    }
}
static uint32_t GetVRAMSize(uint64_t mmio_base) {
    // Read the VRAM size from the CONFIG_MEMSIZE register
    volatile uint32_t* memsize_reg = (volatile uint32_t*)(mmio_base + CONFIG_MEMSIZE_OFFSET);
    uint32_t vram_size = *memsize_reg;

    // The value is usually reported in bytes
    return vram_size;
}


static uint64_t GetVRAMBaseAddress(P_PCI_DEVICE_OBJECT PDEV) {
    BaseAddressRegister BARS(PDEV);

    // VRAM is typically mapped in BAR 1
    uint64_t vram_base = (uint64_t)BARS.address[1];  // Retrieve the base address from BAR 1

    return vram_base;
}
void ChangeCaymanGPUResolution( uint32_t width, uint32_t height);

void ChangeCaymanGPUResolution(uint32_t width, uint32_t height); 

void InitializeCaymanGpu(P_PCI_DEVICE_OBJECT PDEV){

    BaseAddressRegister BARS(PDEV);

    IOBase = (uint64_t)BARS.address[0];
    LouMapCayman(IOBase, BARS.size[0]);

    //Reset Controller
    SoftResetCaymanGPU(IOBase);
    //Wait for sleepyhead
    WaitForCaymanGpuIdle(IOBase);
    //meme le que
    InitializeCaymanMemoryController(IOBase);
    //meme le map
    uint64_t VRamBase = (uint64_t)GetVRAMBaseAddress(PDEV);  // BAR 1 for VRAM
    uint32_t VRamSize = GetVRAMSize(IOBase);  // Assume this function is similar
    VBE_INFO.vbe_mode_info.framebuffer = GetFramebufferBaseAddress(IOBase);
    LouMapCayman(VRamBase, VRamSize);
    
    ChangeCaymanGPUResolution(640, 480);

}

void ConfigureFramebuffer(uint64_t mmio_base, uint64_t framebuffer_base, uint32_t width, uint32_t height, uint32_t bpp) {
    // Set the framebuffer base address
    volatile uint32_t* framebuffer_addr_reg = (volatile uint32_t*)(mmio_base + D1GRPH_PRIMARY_SURFACE_ADDRESS);
    *framebuffer_addr_reg = (uint32_t)(framebuffer_base & 0xFFFFFFFF);

    // Set the pitch (stride) based on width and bpp
    uint32_t pitch_value = (width * bpp) / 8;
    volatile uint32_t* pitch_reg = (volatile uint32_t*)(mmio_base + D1GRPH_PITCH);
    *pitch_reg = pitch_value;

    // Set the viewport size (resolution)
    volatile uint32_t* viewport_size_reg = (volatile uint32_t*)(mmio_base + D1MODE_VIEWPORT_SIZE);
    *viewport_size_reg = (width << 16) | height;
}



void EnableDisplayEngine(uint64_t mmio_base) {
    // Enable the primary display engine
    volatile uint32_t* enable_reg = (volatile uint32_t*)(mmio_base + D1GRPH_ENABLE);
    *enable_reg = 1;
}

void ChangeCaymanGPUResolution(uint32_t width, uint32_t height) {
    const uint64_t mmio_base = IOBase;
    const uint8_t bpp = 32;
    const uint64_t framebuffer_base = VBE_INFO.vbe_mode_info.framebuffer;
    // Disable the display engine before making changes
    volatile uint32_t* enable_reg = (volatile uint32_t*)(mmio_base + D1GRPH_ENABLE);
    *enable_reg = 0;

    // Configure the framebuffer
    ConfigureFramebuffer(mmio_base, framebuffer_base, width, height, bpp);

    // Update VBE_INFO (if necessary) with the new mode information
    VBE_INFO.vbe_mode_info.height = height;
    VBE_INFO.vbe_mode_info.width = width;
    VBE_INFO.vbe_mode_info.bpp = bpp;
    VBE_INFO.vbe_mode_info.pitch = width * (bpp / 8);

    // Re-enable the display engine to apply the new settings
    EnableDisplayEngine(mmio_base);
}