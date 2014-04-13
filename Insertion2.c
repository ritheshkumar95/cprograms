#include<stdio.h>

int main()
{
int n,A[15],i,j,item,pos;
printf("Enter Size Of Array \n");
scanf("%d",&n);
printf("Enter Array \n");
for (i=0;i<n;i++) scanf("%d",&A[i]);
printf("Enter Element To Insert \n");
scanf("%d",&item);
for (i=0;i<n;i++)
{
if (A[i]<=item&&A[i+1]>=item)
{
for (j=n;j>i+1;j--) A[j] = A[j-1];
A[j] = item;
n++;
break;
}
}
printf("Inserted Array \n");
for (i=0;i<n;i++) printf("%d ",A[i]);
return 0;
}
