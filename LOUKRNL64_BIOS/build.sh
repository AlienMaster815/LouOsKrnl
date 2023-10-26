	rm -rf iso
	mkdir iso
	mkdir iso/boot
	mkdir iso/boot/grub
	cp release/x86_64/LOUOSKRNL.exe iso/boot/LOUOSKRNL.exe
	echo 'set timeout=0'                     >> iso/boot/grub/grub.cfg
	echo 'set default=0'                     >> iso/boot/grub/grub.cfg
	echo ''                                  >> iso/boot/grub/grub.cfg
	echo 'menuentry "Annya/lou" {'			 >> iso/boot/grub/grub.cfg
	echo 'multiboot /boot/LOUOSKRNL.exe'	 >> iso/boot/grub/grub.cfg
	echo 'boot'                              >> iso/boot/grub/grub.cfg
	echo '}'                                 >> iso/boot/grub/grub.cfg
	grub-mkrescue --output=annya.iso iso
	rm -rf iso
read a
