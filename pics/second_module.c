#include <linux/module.h>       /* Needed by all modules */
#include <linux/kernel.h>       /* Needed for KERN_INFO */

MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("this module depends on the another module.");
MODULE_AUTHOR("Sahar Mavali & Fatemeh Hadizadeh");
MODULE_VERSION("newest");

extern void new_module_function(void);

int init_module(void)
{
        printk(KERN_INFO "the second module that depends on new_module to load\n");
	new_module_function();

        return 0;
}

void cleanup_module(void)
{
        printk(KERN_INFO "erased\n");
}
