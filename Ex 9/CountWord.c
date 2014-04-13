#include<stdio.h>
#include<string.h>

main()
{
char A[30];
int i,space=0;
printf("Enter String\n");
gets(A);
for (i=0;A[i]!='\0';i++) if(A[i]==' ') space++;
printf("No. Of Words = %d\n",space+1);
return;
}
