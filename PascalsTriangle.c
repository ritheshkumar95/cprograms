#include<stdio.h>

main()
{
int A[15][15],i,n,j;
printf("Enter Number Of Lines \n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
for (j=0;j<=i;j++)
{
	if (i==j||j==0) A[i][j] = 1;
	else A[i][j] = A[i-1][j-1] + A[i-1][j];
}
}

for (i=0;i<n;i++)
{
for (j=0;j<n-i-1;j++) printf("  ");
for (j=0;j<=i;j++) printf("%2d  ",A[i][j]);
printf("\n");
}
return;
}
