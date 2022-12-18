Write a program (using fork() and/or exec() commands) where parent and child execute:
c) before terminating, the parent waits for the child to finish its task.


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int a;
a=fork();
if(a<0)
{
printf("Child Process could not be Created");
exit(-1);
}
else if(a==0) //In Child Process
{
printf("\nIn Child Process\n");
}
else //Parent Process
{
wait(NULL);
printf("\nIn Parent Process\n");
}
return 0;
}
