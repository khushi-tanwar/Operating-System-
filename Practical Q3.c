Write a program to report behaviour of Linux kernel including information on 19 configured 
memory, amount of free and used memory. (memory information)


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int a;
printf("\nKernel Version:\n");
system("cat /proc/sys/kernel/osrelease");
printf("\nInformation on Configured amount of free and Used Memory:\n");
system("cat /proc/meminfo | awk 'NR==1,NR==2 {print}'");
return 0;
}
