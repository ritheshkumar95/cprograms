#include<stdio.h>
main()
{
int A[10],n,beg,last,mid,i,item;
printf("Enter Size of Array \n");
scanf("%d",&n);
printf("Enter Sorted Array \n");
for (i=0;i<n;i++) scanf("%d",&A[i]);
printf("Enter Search Item \n");
scanf("%d",&item);
beg = 0;
last = n-1;
while(beg<=last)
{
mid = (beg+last)/2;
if (A[mid]==item)
{
printf("Item Found At %d \n",mid+1);
break;
}
else if (A[mid]<item) beg = mid + 1;
else last = mid - 1;
}
return;
}
