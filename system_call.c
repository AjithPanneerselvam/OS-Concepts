#include <linux/linkage.h>
#include <linux/kerner.h>

asmlinkage int sys_helloworld(){
    printk(KERN_EMERG "hello world!");
    return 1;
}
