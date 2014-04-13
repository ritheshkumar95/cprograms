#include<stdio.h>

int fib(int n)
{
if (n==1) return 0;
else if (n==2) return 1;
else return fib(n-2)+fib(n-1);
}

main()
{
int n,i;
printf("Enter Number Of Terms \n");
scanf("%d",&n);
printf("Fibonacci Series \n");
for (i=1;i<=n;i++) printf("%d ",fib(i));
return;
}
