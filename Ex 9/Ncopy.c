#include<stdio.h>
#include<string.h>

main()
{
char B[20],A[20];
int n;
printf("Enter String 1\n");
gets(B);
printf("Enter No. Of Characters \n");
scanf("%d",&n);
strncpy(A,B,n);
A[n] = '\0'; 
printf("New String Is \n");
puts(A);
return;
}
