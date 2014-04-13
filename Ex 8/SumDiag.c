#include<stdio.h>
main()
{
int sum=0,m,n,A[10][10],i,j;
printf("Enter Dimensions Of Matrix \n");
scanf("%d %d",&m,&n);
printf("Enter Matrix \n");
for (i=0;i<m;i++) for (j=0;j<n;j++) scanf("%d",&A[i][j]);
for (i=0;i<m;i++) for (j=0;j<n;j++) if (i==j) sum += A[i][j];
printf("Sum Of Principal Diagonal Elements = %d \n",sum);
}
