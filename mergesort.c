#include<stdio.h>

void merge(int A[15],int x, int y, int z)
{
int B[15],C[15];
int m = y-x+1,n = z-y;
int i,j,k;
for (i=0;i<m;i++) B[i] = A[x+i];
for (i=0;i<n;i++) C[i] = A[y+i+1];
i=j=k=0;
while(i<m && j<n)
{
if(B[i]<C[j]) A[x+(k++)] = B[i++];
else A[x+(k++)] = C[j++];
}
while (i<m) A[x+(k++)] = B[i++]; 
while (j<n) A[x+(k++)] = C[j++];
for (i=0;i<m;i++) printf("%d ",B[i]);
printf("\n");
for (i=0;i<n;i++) printf("%d ",C[i]);
printf("\n");
for (i=0;i<m+n;i++) printf("%d ",A[x+i]);
printf("\n");
}

void mergesort(int A[15],int x,int z)
{
int y = (x+z)/2;
if ((z-x)>0)
{
mergesort(A,x,y);
mergesort(A,y+1,z);
merge(A,x,y,z);
}
}

main()
{
int A[15],n,i;
printf("Enter Array Size \n");
scanf("%d",&n);
printf("Enter Array \n");
for (i=0;i<n;i++) scanf("%d",&A[i]);
mergesort(A,0,n-1);
printf("Sorted Array \n");
for (i=0;i<n;i++) printf("%d ",A[i]);
printf("\n");
return;
}
