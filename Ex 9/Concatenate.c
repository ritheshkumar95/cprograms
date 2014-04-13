#include<stdio.h>
#include<string.h>

main()
{
char A[30],B[30];
int i,j;
printf("Enter String 1 \n");
gets(A);
printf("Enter String 2 \n");
gets(B);
strcat(A,B);
printf("Concatenated String \n");
puts(A);
return;
}
