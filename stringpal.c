#include<stdio.h>
#include<string.h>

main()
{
int i,j,flag=1;
char A[30];
printf("Enter String \n");
gets(A);
for (i=0;A[i]!='\0';i++)
{
if (A[i]==' ')
{
for (j=i+1;A[j]!='\0';j++) A[j-1] = A[j];
A[j-1] = '\0';
}
}
for (i=0;i<=strlen(A)/2;i++)
{
if (A[i]!=A[strlen(A)-i-1])
{
flag = 0;
break;
}
}
if (flag==1) printf("It is a palindrome \n");
else printf("It is not a palindrome \n");
return;
}
