#include<stdio.h>
#include<string.h>

main()
{
char A[50],B[25],C[25];
int count=0,i=0,k=0,max,len;
printf("Enter String \n");
gets(A);
while (A[i]!=' ' && A[i]!='\0') C[k++] = A[i++];
C[k] = '\0';
max = strlen(C);
for (i=0;A[i]!='\0';i++) 
{
k=0;
while (A[i]!=' ' && A[i]!='\0') B[k++] = A[i++];
B[k] = '\0';
len = strlen(B);
if (len>max)
{
strcpy(C,B);
max = strlen(C);
}
}
printf("Word With Max Length : ");
puts(C);
printf("Maximum Length : %d", max);
return;
}
