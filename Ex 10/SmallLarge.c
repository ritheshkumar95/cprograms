#include<stdio.h>

main()
{
int A[15][15],i,j,max,min,m,n;
printf("Enter Size Of Matrix \n");
scanf("%d %d",&m,&n);
printf("Enter Matrix \n");
for (i=0;i<m;i++) for(j=0;j<n;j++) scanf("%d",&A[i][j]);
max = min = A[0][0];
for (i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if (A[i][j]>max) max = A[i][j];
if (A[i][j]<min) min = A[i][j];
}
}
printf("Max Element = %d\n", max);
printf("Min Element = %d\n", min);
return;
}

