#include<stdio.h>
#include<string.h>

main()
{
char B[20],A[20];
printf("Enter String \n");
gets(A);
printf("Enter Substring \n");
gets(B);
char *c = strstr(A,B);
if (c) printf("Substring Present From Position %d \n",c-A+1);
else printf("Substring Not Present \n");
return;
}

