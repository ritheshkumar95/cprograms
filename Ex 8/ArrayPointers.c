#include<stdio.h>
main()
{
int A[15],n,i;
printf("Enter Size Of Array \n");
scanf("%d",&n);
printf("Enter Array \n");
for (i=0;i<n;i++) scanf("%d",A+i);
printf("Inputted Array Is \n");
for (i=0;i<n;i++) printf("%d ",*(A+i));
printf("\n");
return;
}
