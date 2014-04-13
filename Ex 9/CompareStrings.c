#include<stdio.h>
#include<string.h>

main()
{
char A[30],B[30];
printf("Enter String 1 \n");
gets(A);
printf("Enter String 2 \n");
gets(B);
if (strcmp(A,B)) printf("The Strings Are Not Same \n");
else printf("The Strings Are Same \n");
return;
}

