#include<stdio.h>
#include<unistd.h>
void main()
{
int pd;
pd=fork();
if(pd==0)
{
int limit;
printf("This is child process \n process id is %d\n",getpid());
printf("parents id is %d \n",getppid());
printf("enter the limit to print natural number\n");
scanf("%d",&limit);
printf("Natural numbers:\n");
for(int i=1;i<=limit;i++)
printf("%d\n",i);
}
else if(pd>0)
{
wait();
int num;
printf("This is parent process\n process id is %d\n",getpid());
printf("enter a number to check odd/even\n");
scanf("%d",&num);
if(num%2==0)
printf("the number is even\n");
else
printf("the number is odd\n");
}
else
printf("fork failed\n");
}
