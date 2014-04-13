#include<stdio.h>

main()
{
int i,j,n;
printf("Enter Number \n");
scanf("%d",&n);
for (i=0;i<=n;i++)
{
for (j=0;j<=n;j++) 
{
	if (i==0&&j==0) printf(" %c ",'X');
	else if (i==0) printf("%2d ",j);
	else if (j==0) printf("%2d ",i);
	else printf("%2d ",i*j);
}
printf("\n");
}
return;
}
	
