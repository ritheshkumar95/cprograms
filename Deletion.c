#include<stdio.h>

int main()
{
int n,A[15],i,j,item;
printf("Enter Size Of Array \n");
scanf("%d",&n);
printf("Enter Array \n");
for (i=0;i<n;i++) scanf("%d",&A[i]);
printf("Enter Element To Delete \n");
scanf("%d",&item);
for (i=0;i<n;i++)
{
if (A[i]==item)
{
for (j=i;j<n-1;j++) A[j] = A[j+1];
n--;
}
}
printf("Deleted Array Is: \n");
for (i=0;i<n;i++) printf("%d ",A[i]);
return 0;
}
