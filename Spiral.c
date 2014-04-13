#include <stdio.h>

main()
{
int i=0,j=0,k=1,m,n,p,q,r=0,s=0,A[10][10];
printf("Enter Dimensions Of Matrix \n");
scanf("%d %d",&m,&n);
p = m;
q = n;
while (k<=m*n)
{
while (j<q && k<=m*n)
{
A[i][j++] = k++;
}
j--;q--;i++;
while (i<p && k<=m*n)
{
A[i++][j] = k++;
}
i--;p--;j--;
while (j>=r && k<=m*n)
{
A[i][j--] = k++;
}
j++;r++;i--;
while (i>s && k<=m*n)
{
A[i--][j] = k++;
}
i++;s++;j++;
}
for (i=0;i<m;i++)
{
for (j=0;j<n;j++) printf("%2d ",A[i][j]);
printf("\n");
}
printf("\n");
return;
}
