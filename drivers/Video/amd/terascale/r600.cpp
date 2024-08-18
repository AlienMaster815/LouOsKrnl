#include <LouDDK.h>
#include <NtAPI.h>

#include <bootloader/grub/multiboot2.h>

#define SRBM_SOFT_RESET 0x00B0  // Register offset for SRBM_SOFT_RESET

// Bitmasks for resetting different GPU components
#define RESET_GRAPHICS_ENGINE 0x00000001
#define RESET_MEMORY_CONTROLLER 0x00000002
#define RESET_DISPLAY_ENGINE 0x00000004

#define R600_GRBM_STATUS 0x8010
#define R600_GRBM_STATUS_CP_BUSY (1 << 0)
#define R600_GRBM_STATUS_2D_BUSY (1 << 2)
#define R600_GRBM_STATUS_3D_BUSY (1 << 3)
#define R600_GRBM_STATUS_VAP_BUSY (1 << 4)

#define R600_GPU_BUSY_MASK (R600_GRBM_STATUS_CP_BUSY | \
                            R600_GRBM_STATUS_2D_BUSY | \
                            R600_GRBM_STATUS_3D_BUSY | \
                            R600_GRBM_STATUS_VAP_BUSY)


#define MC_ARB_RAMCFG_OFFSET 0x2760  // Offset for MC_ARB_RAMCFG in R600
#define MC_ARB_DRAM_TIMING_OFFSET 0x2764  // Offset for MC_ARB_DRAM_TIMING in R600
#define MC_VM_SYSTEM_APERTURE_DEFAULT_ADDR_OFFSET 0x2028  // Offset for MC_VM_SYSTEM_APERTURE_DEFAULT_ADDR
#define MC_VM_SYSTEM_APERTURE_HIGH_ADDR_OFFSET 0x2024  // Offset for MC_VM_SYSTEM_APERTURE_HIGH_ADDR
#define MC_VM_SYSTEM_APERTURE_LOW_ADDR_OFFSET 0x2020  // Offset for MC_VM_SYSTEM_APERTURE_LOW_ADDR

// Example values derived from Linux kernel r600.c
#define RAMCFG_VALUE 0x00000000  // Example value for MC_ARB_RAMCFG
#define DRAM_TIMING_VALUE 0x00010000  // Example value for MC_ARB_DRAM_TIMING
#define APERTURE_DEFAULT_ADDR 0x00000000  // Example default aperture address
#define APERTURE_HIGH_ADDR 0x000FFFFF  // Example high aperture address
#define APERTURE_LOW_ADDR 0x00000000  // Example low aperture address

#define CONFIG_MEMSIZE_OFFSET 0x5428  // Offset for the CONFIG_MEMSIZE register
#define D1GRPH_PRIMARY_SURFACE_ADDRESS 0x6110  // Offset for framebuffer base address in MMIO

#define D1GRPH_ENABLE         0x6104
#define D1GRPH_PITCH          0x6120  // Offset for the pitch register
#define D1MODE_VIEWPORT_SIZE  0x6024  // Offset for the viewport size register


static uint64_t IOBase = 0x00;

static void LouMapR600(uint64_t Base, uint32_t size){
    for(uint64_t i  = 0 ; i < size; i+=MEGABYTE_PAGE){
        LouMapAddress(Base + i,Base + i, KERNEL_PAGE_WRITE_PRESENT, MEGABYTE_PAGE);
    }
}

static int WaitForGpuIdle(uint64_t mmio_base) {
    volatile uint32_t* status_reg = (volatile uint32_t*)(mmio_base + R600_GRBM_STATUS);
    unsigned int timeout = 1000000;  // 1 second timeout

    // Polling loop to wait for GPU to become idle
    while ((*status_reg & R600_GPU_BUSY_MASK) != 0) {
        if (--timeout == 0) {
            return -1;  // Timeout, GPU is not idle
        }
        sleep(10);
    }

    return 0;  // GPU is idle
}

static void InitializeMemoryController(uint64_t mmio_base) {
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

static void SoftResetGPU(uint64_t mmio_base) {
    // Pointer to the SRBM_SOFT_RESET register
    volatile uint32_t* soft_reset_register = (volatile uint32_t*)(mmio_base + SRBM_SOFT_RESET);

    // Perform the reset by setting the appropriate bits
    *soft_reset_register = RESET_GRAPHICS_ENGINE | RESET_MEMORY_CONTROLLER | RESET_DISPLAY_ENGINE;

    // Optional: Wait for the reset to complete
    sleep(100);  // Small delay to ensure the reset takes effect (50 microseconds)

    // Clear the reset bits to bring the components back up
    *soft_reset_register = 0x00000000;

    sleep(100);  // Another small delay to stabilize the GPU after reset
}

static uint32_t GetVRAMSize(uint64_t mmio_base) {
    // Read the VRAM size from the CONFIG_MEMSIZE register
    volatile uint32_t* memsize_reg = (volatile uint32_t*)(mmio_base + CONFIG_MEMSIZE_OFFSET);
    uint32_t vram_size = *memsize_reg;

    // The value is usually reported in bytes
    return vram_size;
}

static uint64_t GetFramebufferBaseAddress(uint64_t mmio_base) {
    // Access the framebuffer base address register
    volatile uint32_t* framebuffer_addr_reg = (volatile uint32_t*)(mmio_base + D1GRPH_PRIMARY_SURFACE_ADDRESS);
    uint64_t framebuffer_address = (uint64_t)(*framebuffer_addr_reg);

    return framebuffer_address;
}

static uint64_t GetVRAMBaseAddress(P_PCI_DEVICE_OBJECT PDEV) {
    BaseAddressRegister BARS(PDEV);

    // VRAM is typically mapped in BAR 1
    uint64_t vram_base = (uint64_t)BARS.address[1];  // Retrieve the base address from BAR 1

    return vram_base;
}

extern struct multiboot_tag_vbe VBE_INFO;

void ChangeR600GPUResolution(uint16_t width, uint16_t Height);

void InitializeR600GPU(P_PCI_DEVICE_OBJECT PDEV){

    BaseAddressRegister BARS(PDEV);

    IOBase = (uint64_t)BARS.address[0];

    LouMapR600(IOBase, BARS.size[0]);

    SoftResetGPU(IOBase);

    WaitForGpuIdle(IOBase);

    InitializeMemoryController(IOBase);

    uint32_t VRamSize = GetVRAMSize(IOBase);
    uint64_t VRamBase = GetVRAMBaseAddress(PDEV);
    
    LouMapR600(VRamBase, VRamSize);
    VBE_INFO.vbe_mode_info.framebuffer = GetFramebufferBaseAddress(IOBase);

    ChangeR600GPUResolution(640,480);

}


static void EnableDisplayEngine(uint64_t mmio_base) {
    // Enable the primary display engine
    volatile uint32_t* enable_reg = (volatile uint32_t*)(mmio_base + D1GRPH_ENABLE);
    *enable_reg = 1;
}
/* Not Needed Right Now
static void DiableDisplayEngine(uint64_t mmio_base) {
    volatile uint32_t* enable_reg = (volatile uint32_t*)(mmio_base + D1GRPH_ENABLE);
    *enable_reg = 0;  // Set to 0 to disable the display output
}
*/
static void ConfigureFramebuffer(uint64_t mmio_base, uint64_t framebuffer_base, uint32_t width, uint32_t height, uint32_t bpp) {
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


void ChangeR600GPUResolution(uint16_t Width, uint16_t Height){

    ConfigureFramebuffer(IOBase, VBE_INFO.vbe_mode_info.framebuffer, Width, Height, 32);

    VBE_INFO.vbe_mode_info.height = Height;
    VBE_INFO.vbe_mode_info.width = Width;
    VBE_INFO.vbe_mode_info.bpp = 32;
    VBE_INFO.vbe_mode_info.pitch = Width * (32 / 8);
    
    EnableDisplayEngine(IOBase);
} 