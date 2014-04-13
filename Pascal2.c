#include<stdio.h>

main()
{
int i,n,j,A[10][10];
printf("Enter Number Of Lines \n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
for (j=0;j<n-i-1;j++) printf("  ");
for (j=0;j<=i;j++)
{
	if (j==0||j==i) A[i][j] = 1;
	else A[i][j] = A[i-1][j-1] + A[i-1][j];
	printf("%2d  ",A[i][j]);
} 
printf("\n");
}
return;
}
