================================================================================================
--                                                                                            --
--  	         	   Tyler Grenier 10/19/23 -- 11:40 AM                                     --
--                                                                                            --
--			        Subject Of File: ReadMe File For Project                                  --
--                                                                                            --
================================================================================================

	First Off if you Are new to Or don't Know What an operating system is Please See the operating system Document in Operating Systems Sub Directory

	Hello World and kernel Devs Welcome to Annya OS Powered By The Lousine Kernel. A little history on the kernel the kernel was made by me because I
    Have Too many computers to count and almost none of them support new Windows Operating systems and the ones that do support The Windows Operating
    System, Windows is at least 200 USD At this point and the computers are almost Out of support... the support that windows Is now setting limits too
    is also very stupid in terms of not supporting bios with most computers in circulation do and certain port types are absurd, now you might think to
    yourself why not React OS to Replace it? My answer is I don't trust a kernel or os that is not covered by a warranty or is not my own code Plus
    the React OS system is highly unstable do to the nature of its beta and its been being written for several years with barely any progress so here we
    are and also this is fun for me When This is done this system will be free without charge and completely open source  however will not have any
    warranty...

    This is the Bios version of the kernel the difference between the UEFI and BIOS Version is 2 things 1. How things are initialized on boot and what
    information is available at the start of the kernel 2. Most important they are designed to run on two totally different machines the BIOS Machines
    The BootLoader Loads us in 32 Bit Mode or x86 Protected Mode Compatibility and the UEFI System sets us Directly Out At 64 Bit Long Mode... in The
    Bios Mode We do certain things before running the system and you will learn these things throughout these documents.

	The following documents show the way in both technical and lamens terms for how the project operates and how and why its code Works the Way it Does
    along with certain things I do specific to this project to begin following the code please go to the file boot.asm.txt in the boot subdirectory in
    the kernels source tree...
