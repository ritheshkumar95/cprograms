#include<stdio.h>
int main()
{
int a,sum=0,i,avg;
for (i=1;i<=5;i++)
{
	printf("Enter Mark %d\n",i);
	scanf("%d",&a);
	sum += a;
}
avg = sum/5;
printf("Average Of The 5 Marks Is : %d\n",avg);
return 0;
}
