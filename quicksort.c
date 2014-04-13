#include<stdio.h>

void print(int A[15],int x,int y)
{
int i;
for (i=x;i<=y;i++) printf("%d ",A[i]);
printf("\n");
}

int partition(int A[10],int x,int y)
{
int temp,i=x+1,j=y,pivot=A[x];
while (i<=j)
{
while (A[i]<pivot && i<=y) i++;
while (A[j]>pivot && j>=x) j--;
if (i<j)
{
temp = A[i];
A[i] = A[j];
A[j] = temp;
}
}
A[x] = A[j];
A[j] = pivot;
return j;
}

void quicksort(int A[10],int x,int y)
{
int j;
if ((y-x)>0)
{
j = partition(A,x,y);
quicksort(A,x,j-1);
quicksort(A,j+1,y);
}
}

main()
{
int n,i,A[10];
printf("Enter Size Of Array \n");
scanf("%d",&n);
printf("Enter Array \n");
for (i=0;i<n;i++) scanf("%d",&A[i]);
quicksort(A,0,n-1);
printf("Sorted Array : \n");
print(A,0,n-1);
return;
}
