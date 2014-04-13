#include<stdio.h>
#include<string.h>
#include<math.h>

void merge(int A[30],int x, int y, int z)
{
int B[30],C[30],m = y-x+1,n = z-y,i,j,k;
for (i=0;i<m;i++) B[i] = A[x+i];
for (j=0;j<n;j++) C[j] = A[y+j+1];
i=0;
j=0;
k=x;
while (i<m && j<n)
{
if (B[i]<C[j]) A[k++] = B[i++];
else A[k++] = C[j++];
}
while (i<m) A[k++] = B[i++];
while (j<n) A[k++] = C[j++];
}

void mergesort(int A[30],int x, int z)
{
int y;
if (z-x>=1)
{
y = (x+z)/2;
mergesort(A,x,y);
mergesort(A,y+1,z);
merge(A,x,y,z); 
}
}

main()
{
int i,j,n,ch=1,pos,item,A[15],beg,last,flag,mid;
float sd,var,mean;
printf("Enter Array Size \n");
scanf("%d",&n);
printf("Enter Array \n");
for (i=0;i<n;i++) scanf("%d",&A[i]);
while(ch!=5)
{
printf("Array Operations \n");
printf("1. Binary Search \n");
printf("2. Merge Sort \n");
printf("3. Arithmetic Mean, Variance And Standard Deviation \n");
printf("4. Print \n");
printf("5. Exit \n");
printf("Enter Choice \n");
scanf("%d",&ch);
switch (ch)
{
case 1: printf("Enter Element To Search \n");
	scanf("%d",&item);
	flag = 0; 
	beg = 0;
	last = n-1;
	while (beg<=last)
	{
	mid = (beg + last)/2;
	if (A[mid]==item)
	{
	printf("Item Found At Position %d \n", mid+1);
	flag = 1;
	break;
	}	
	else if (A[mid]<item) beg = mid + 1;
	else last = mid - 1;
	}
	if (flag==0) printf("Item Not Found \n");
	break;
case 2: mergesort(A,0,n-1);
	break;
case 3:	mean = 0; 
	for (i=0;i<n;i++) mean += A[i];
	mean /= n;
	var = 0;
	for (i=0;i<n;i++) var += pow((A[i]-mean),2);
	var /= n;
	sd = pow(var,0.5);
	printf("Mean = %f \n",mean);
	printf("Variance = %f \n",var);
	printf("Standard Deviation = %f \n",sd);
	break;
case 4: printf("Array Status Is : \n");
	 for (i=0;i<n;i++) printf("%d ",A[i]);
	 printf("\n");	 
	 break;
case 5: printf("Thank You \n");
	 break;
default: printf("Invalid Value \n");
}
}
return;
}








