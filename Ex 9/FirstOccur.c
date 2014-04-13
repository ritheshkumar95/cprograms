#include<stdio.h>
#include<string.h>

main()
{
char ch,A[20];
printf("ENter String \n");
gets(A);
printf("Enter Search Character \n");
scanf("%c",&ch);
char *c = strchr(A,ch);
if (c) printf("Found At %d Position \n",c-A+1);
else printf("Character Not Found \n");
return;
}
