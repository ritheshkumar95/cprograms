#include<stdio.h>
int count = 1;

void swap(int A[],int a, int b)
{
int temp = A[a];
A[a] = A[b];
A[b] = temp;
}

void disp(int A[], int n)
{
int i;
printf("%d. ",count++);
for (i=0;i<=n;i++) printf("%d ",A[i]);
printf("\n");
}

void cycle(int A[],int start, int end)
{
int i,temp = A[end];
for (i=end;i>0;i--) A[i] = A[i-1];
A[i] = temp;
}

void permute(int A[],int start,int end)
{
int i;
if (end-start<=0) return;
else if (end-start==1)
{
disp(A,end);
swap(A,start,end);
disp(A,end);
swap(A,start,end);
}
else for (i=0;i<=end-start;i++)
{
permute(A,start+1,end);
cycle(A,start,end);
}
}

main()
{
int A[10],n,i;
printf("Enter Size Of Array \n");
scanf("%d",&n);
printf("Enter Array \n");
for (i=0;i<n;i++) scanf("%d",&A[i]);
printf("List Of Permutations \n");
permute(A,0,n-1);
return;
}
