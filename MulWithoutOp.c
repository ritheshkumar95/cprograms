#include<stdio.h>
int main()
{
int a,n,c;
printf("Enter Number \n");
scanf("%d",&a);
printf("Multiplay With What Power Of 2?\n");
scanf("%d",&n);
c = a<<n;
printf("%d * 2^%d = %d\n",a,n,c);
}
