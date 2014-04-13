#include<stdio.h>

int fact(int n)
{
if (n==1||n==0) return 1;
else return n*fact(n-1);
}

float perm(int n, int r)
{
return fact(n)/fact(n-r);
}

float comb(int n, int r)
{
return fact(n)/(fact(n-r)*fact(r));
}

main()
{
int n,r;
printf("Enter n and r to calculate nCr and nPr \n");
scanf("%d %d",&n,&r);
printf("%dC%d = %f\n",n,r,comb(n,r));
printf("%dP%d = %f\n",n,r,perm(n,r));
return;
}
