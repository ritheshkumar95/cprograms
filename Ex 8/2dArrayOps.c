#include<stdio.h>
main()
{
int m,n,p,q,A[15][15],B[15][15],C[15][15],i,j,k,ch=1;
printf("Enter Dimensions Of Matrix 1 \n");
scanf("%d %d",&m,&n);
printf("Enter Matrix 1 \n");
for (i=0;i<m;i++) for (j=0;j<n;j++) scanf("%d",&A[i][j]);
printf("Enter Dimensions Of Matrix 2 \n");
scanf("%d %d",&p,&q);
printf("Enter Matrix 2 \n");
for (i=0;i<p;i++) for (j=0;j<q;j++) scanf("%d",&B[i][j]);
while(ch!=5)
{
printf("2D Array Operations \n");
printf("1. Print \n");
printf("2. Addition \n");
printf("3. Subtractiom \n");
printf("4. Multiplication \n");
printf("5. Exit \n");
printf("Enter Choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Matrix 1: \n");
	for (i=0;i<m;i++)
	{
	for (j=0;j<n;j++) printf("%2d ",A[i][j]);
	printf("\n");
	}
	printf("Matrix 2: \n");
	for (i=0;i<p;i++)
	{
	for (j=0;j<q;j++) printf("%2d ",B[i][j]);
	printf("\n");
	}
	break;
case 2: if (m==p && n==q)
	{
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++) C[i][j] = A[i][j] + B[i][j];
	}
	printf("Matrix After Adding : \n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++) printf("%2d ",C[i][j]);
		printf("\n");
	}
	}
	else printf("These Matrices Cannot Be Added \n");
	break;
case 3: if (m==p && n==q)
	{
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++) C[i][j] = A[i][j] - B[i][j];
	}
	printf("Matrix After Subtracting : \n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++) printf("%2d ",C[i][j]);
		printf("\n");
	}
	}
	else printf("These Matrices Cannot Be Subtracted \n");
	break;
case 4: if (n==p)
	{
	for (i=0;i<m;i++)
	{
		for (j=0;j<q;j++)
		{
		C[i][j] = 0;
		for (k=0;k<n;k++) C[i][j] += A[i][k]*B[k][j];
		}
	}
	printf("Matrix After Multiplying : \n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<q;j++) printf("%2d ",C[i][j]);
		printf("\n");
	}
	}
	else printf("These Matrics Cannot Be Multiplied \n");
	break;
case 5: printf("Thank You \n");
	break;
default: printf("Invalid Input \n");
}
}
return;
}
