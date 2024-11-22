#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple networking kernel module.");
MODULE_VERSION("0.1");

static int __init network_module_init(void) {
    printk(KERN_INFO "Network module loaded.\n");
    return 0;
}

static void __exit network_module_exit(void) {
    printk(KERN_INFO "Network module unloaded.\n");
}

module_init(network_module_init);
module_exit(network_module_exit);
