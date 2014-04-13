#include<stdio.h>

int XOR(int x, int y)
{
if ((x+y)==1) return 1;
else return 0;
}

main()
{
int count=0,copy,n,A[10],B[10],i,temp;
printf("Enter Number In Gray Code \n");
scanf("%d",&n);
copy = n;
while (copy!=0)
{
A[count++] = copy%10;
copy/=10;
}
printf("%d\n",count);
for (i=0;i<count/2;i++) 
{
temp = A[i];
A[i] = A[count-i-1];
A[count-i-1] = temp;
}
B[0] = A[0];
for (i=1;i<count;i++) B[i] = XOR(B[i-1],A[i]);
printf("Entered Number (In Gray Code) Is : \n");
for (i=0;i<count;i++) printf("%d ",A[i]);
printf("\n");
printf("Binary Code Of Entered Number Is : \n");
for (i=0;i<count;i++) printf("%d ",B[i]);
printf("\n");
return;
}
