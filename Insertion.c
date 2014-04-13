#include<stdio.h>

int main()
{
int n,A[15],i,item,pos;
printf("Enter Size Of Array \n");
scanf("%d",&n);
printf("Enter Array \n");
for (i=0;i<n;i++) scanf("%d",&A[i]);
printf("Enter Element To Insert \n");
scanf("%d",&item);
printf("Enter Position To Insert Item \n");
scanf("%d",&pos);
for (i=n;i>=pos;i--) A[i] = A[i-1];
A[i] = item;
n++;
printf("New Array \n");
for (i=0;i<n;i++) printf("%d ",A[i]);
return 0;
}
