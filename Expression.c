#include<math.h>
#include<stdio.h>
int main()
{
int a,b,c,d;
float ans;
printf("Enter 4 Integers \n");
scanf("%d %d %d %d",&a,&b,&c,&d);
ans = (a*b) + pow(c,d);
printf("Value Of Expression Is : %f",ans);
return 0;
}           
