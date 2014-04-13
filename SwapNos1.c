#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter Two Numbers \n");
scanf("%d%d",&a,&b);
temp = a;
a = b;
b = temp;
printf("Swapped Numbers: %d %d\n",a,b);
return 0;
}
