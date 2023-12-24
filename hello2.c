#include <hello1.h>

MODULE_AUTHOR("Stanislav Hrytsyk");
MODULE_DESCRIPTION("AK2 Lab4 hello2.c");
MODULE_LICENSE("Dual BSD/GPL");

static uint amount = 1;

module_param(amount, uint, 0);
MODULE_PARM_DESC(amount, "Simple amount for my lab\n");

static int __init init_hello(void)
{
	pr_info("Success! hello2 has been initiated\n");
	print_hello(amount);
	return 0;
}

static void __exit exit_hello(void)
{
	pr_info("Success! hello2 has been unloaded\n");
}

module_init(init_hello);
module_exit(exit_hello);
