#include<stdio.h>
main()
{
int m,n,i,j,A[15][15],B[15][15],flag;
printf("Enter Dimensions Of Matrix \n");
scanf("%d %d",&m,&n);
printf("Enter Matrix \n");
for (i=0;i<m;i++) for (j=0;j<n;j++) scanf("%d",&A[i][j]);
if (m!=n) printf("Symmetricity Cannot Be Checked For Non-Square Matrices \n");
else
{
for (i=0;i<m;i++) for (j=0;j<n;j++) B[i][j] = A[j][i];
for (i=0;i<m;i++)
{
	for (j=0;j<n;j++) 
	{
	if (A[i][j]!=B[i][j])
	{
		flag = 0;
		break;
	}
	}
}
if (flag) printf("Matrix Is Symmetric \n");
else printf("It Is Not Symmetric \n");
}
return;
}

