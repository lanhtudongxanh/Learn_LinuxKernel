#include<linux/module.h> /* thu vien nay dinh nghia cac macro nhu module va module_exit */

#define DRIVER_AUTHOR "CAO TIEP <caotiepc5@gmail.com>"
#define DRIVER_DESC   "A same loadable kernel module"

static int __init init_hello(void)
{
	printk("Hello VietNam\n");
	return 0;
}

static void __exit exit_hello(void)
{
	printk("Goodbye!\n");
}

module_init(init_hello);
module_exit(exit_hello);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_SUPPORTED_DEVICE("testdevice");
