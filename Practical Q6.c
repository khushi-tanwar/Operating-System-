Write a program to implement FCFS scheduling algorithm.


//FCFS
#include<stdio.h>
int tim=0;
void main()
{
int n,b[20],i,j,w[20],tw=0,taround[20],tt=0;
float avw,avt;
printf("Enter the No. of Processes=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter the Burst Time of %dth Process=",i);
scanf("%d",&b[i]);
}
for(i=1;i<=n;i++)
{
w[i]=tim;
for(j=1;j<=b[i];j++)
{
tim++;
if(j==b[i])
taround[i]=tim;
}
}
for(i=1;i<=n;i++)
{
tw=tw+w[i];
}
avw=(float)tw/n;
for(i=1;i<=n;i++)
{
tt=tt+taround[i];
}
avt=(float)tt/n;
printf("\nWaiting & Turn Around Time");
printf("\n**************************");
for(i=1;i<=n;i++)
{
printf("\nProcess %d-Waiting=%d,Turn Around=%d",i,w[i],taround[i]);
}
printf("\nAverage Waiting Time=%f",avw);
printf("\nAverage Turn Around Time=%f\n",avt);
} 
