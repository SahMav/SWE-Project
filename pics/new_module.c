#include <linux/module.h>       /* Needed by all modules */
#include <linux/kernel.h>       /* Needed for KERN_INFO */

MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("this module defined as an example for this OS homework.");
MODULE_AUTHOR("Sahar Mavali & Fatemeh Hadizadeh");
MODULE_VERSION("new");

void new_module_function(void) 
{
	printk(KERN_INFO "from new_module!\n");
}
EXPORT_SYMBOL(new_module_function);

int init_module(void)
{
        printk(KERN_INFO "Sahar Mavali\nFatemeh Hadizadeh\n");
        return 0;
}

void cleanup_module(void)
{
        printk(KERN_INFO "Goodbye\n");
}
