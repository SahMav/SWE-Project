CONFIG_MODULE_SIG=n

PWD=$(shell pwd)
VER=$(shell uname -r)
KERNEL_BUILD=/lib/modules/$(VER)/build

obj-m += new_module.o
obj-m += second_module.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules


clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean


install:
	$(MAKE) -C $(KERNEL_BUILD) M=$(PWD) modules_install
