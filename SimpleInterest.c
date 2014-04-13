#include<stdio.h>
int main()
{
int p,r,t;
float amount;
printf("Enter Principal \n");
scanf("%d",&p);
printf("Enter Rate (As Percentage)\n");
scanf("%d",&r);
printf("Enter Time \n");
scanf("%d",&t);
amount = (p*r*t)/100;
printf("Simple Interest Is: %f\n",amount);
return 0;
}
