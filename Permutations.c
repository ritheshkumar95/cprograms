#include <stdio.h>

int count = 1;

void print(int A[20],int n)
{
int i;
printf("%d.",count++);
for (i=0;i<n;i++) printf("%d ",A[i]);
printf("\n");
}

void swap(int A[20], int x, int y)
{
int temp = A[x];
A[x] = A[y];
A[y] = temp;
}

void cycle(int A[20],int x, int y)
{
int i,temp = A[y];
for (i=y;i>x;i--) A[i] = A[i-1];
A[i] = temp;
}

void perm(int A[20], int n, int x, int y)
{
int i;
if (y-x==1)
{
print(A,n);
swap(A,x,y);
print(A,n);
swap(A,x,y);
}
else
{
for (i=x;i<=y;i++)
{
perm(A,n,x+1,y);
cycle(A,x,y);
}
}
}

main()
{
int i,A[20],n;
printf("Enter Number Of Digits In Array \n");
scanf("%d",&n);
printf("Enter Array \n");
for (i=0;i<n;i++) scanf("%d",&A[i]);
printf("Permutations Are : \n");
perm(A,n,0,n-1);
return;
}
