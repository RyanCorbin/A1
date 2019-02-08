/*
*Author by: Ryan Corbin & Michael DeAtley
Date: 1/30/2019 
File Name: HW1Module.c
Purpose: Assignment 1
*/
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/hash.h>
#include <linux/gcd.h>
#include <linux/param.h>
#include <linux/jiffies.h>

//init
int HW1Module_init(void) {
  printk(KERN_INFO "Loading HW1Module into the kernal.\n");
  printk(KERN_INFO "%lu\n", GOLDEN_RATIO_PRIME);
  printk(KERN_INFO "%lu\n", jiffies);
  printk(KERN_INFO "%d\n", HZ);
 
  return 0;
}

//exit
void HW1Module_exit(void) {
  printk(KERN_INFO "Removing HW1Module from the kernal.\n");
  printk(KERN_INFO "%lu\n", gcd(3300,24) );
  printk(KERN_INFO "%lu\n", jiffies);


}

//Macros for entry and exit
module_init(HW1Module_init);
module_exit(HW1Module_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Assignment 1 for CS433");
MODULE_AUTHOR("Ryan Corbin");
