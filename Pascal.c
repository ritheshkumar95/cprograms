#include<stdio.h>

main()
{
int i,n,j,factn,factr,factnr,k,res;
printf("Enter Number Of Lines \n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
for (j=0;j<n-i-1;j++) printf("  ");
for (j=0;j<=i;j++)
{
	factn = 1;
	for (k=1;k<=i;k++) factn *= k;
	factr = 1;
	for (k=1;k<=j;k++) factr *= k;
	factnr = 1;
	for (k=1;k<=(i-j);k++) factnr *= k;
	res = factn/((factr)*(factnr));
	printf("%2d  ",res);
} 
printf("\n");
}
return;
}
