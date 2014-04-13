#include<stdio.h>
int main()
{
int i,n,j,k;
printf("Enter No. Of Rows \n");
scanf("%d",&n);
printf("Diamond Pattern\n");
for (i=0;i<=2*n;i++) printf("* ");
printf("\n");
for (i=0;i<n;i++)
{
	for (j=i;j<=n-1;j++) printf("* ");
	for (k=0;k<(2*i)+1;k++) printf("  ");
	for (j=i;j<=n-1;j++) printf("* ");
	printf("\n");
}
for (i=n-2;i>=0;i--)
{
	for (j=i;j<=n-1;j++) printf("* ");
	for (k=0;k<(2*i)+1;k++) printf("  ");
	for (j=i;j<=n-1;j++) printf("* ");
	printf("\n");
}
for (i=0;i<=2*n;i++) printf("* ");
printf("\n");
}
