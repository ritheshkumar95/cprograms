#include<stdio.h>
int main()
{
int a,b;
printf("Enter Two Numbers \n");
scanf("%d%d",&a,&b);
a = a + b;
b = a - b;
a = a - b;
printf("Swapped Numbers : %d %d\n",a,b);
return 0;
}

