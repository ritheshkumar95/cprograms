#include<stdio.h>

main()
{
char A[20],B[20];
int i,j=0;
printf("Enter String \n");
gets(A);
for (i=0;A[i]!='\0';i++);
for (i=i-1;i>=0;i--) B[j++] = A[i];
B[j] = '\0';
if (strcmp(A,B)) printf("It Is Not A Palindrome \n");
else printf("It Is A Palindrome \n");
return;
}
