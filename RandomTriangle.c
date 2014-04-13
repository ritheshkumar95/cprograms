#include<stdio.h>

main()
{
int i,n,j,k;
printf("Enter No. Of Rows \n");
scanf("%d",&n);
printf("Triangle Pattern\n");
for (i=0;i<n;i++)
{
for (j=0;j<n-i-1;j++) printf("  ");
for (j=i+1;j>=1;j--) printf("%d ",j);
for (j=2;j<=1+i;j++) printf("%d ",j);
printf("\n");
}
return;
}
