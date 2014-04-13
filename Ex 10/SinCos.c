#include<stdio.h>
#include<math.h>

int fact(int n)
{
if (n==1||n==0) return 1;
else return n*fact(n-1);
}

main()
{
double x,Ssum=0,Csum=0;
int i,k=0;
printf("Enter x for Sin(x) & Cos(x) expansion \n");
scanf("%lf",&x);
for (i=1;i<15;i=i+2) Ssum += (pow(-1,k++)*pow(x,i))/fact(i);
k=0;
for (i=0;i<15;i=i+2) Csum += (pow(-1,k++)*pow(x,i))/fact(i);
printf("Sin(x) = %lf\n", Ssum);
printf("Cos(x) = %lf\n", Csum);
return;
}
