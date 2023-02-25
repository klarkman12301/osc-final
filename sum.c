#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SUL");
MODULE_DESCRIPTION("SUM MODULE OF 1+0");

static int __init sum_init(void)
{
  int sum = 1 + 0;
  printk(KERN_INFO "Sum of 1 + 0: %d\n", sum);
  return 0;
}
static void __exit sum_exit(void)
{
  printk (KERN_INFO "Sum is removed!\n");
}

module_init(sun_init);
module_exit(sum_exit);
