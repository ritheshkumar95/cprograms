#include<stdio.h>
#include<string.h>

main()
{
int i,n;
char ch;
char A[10][15];
printf("Enter No. Of Students \n");
scanf("%d",&n);
printf("Enter Names Of %d Students \n",n);
for (i=0;i<n+1;i++)
{
gets(A[i]);
}
printf("Enter Search Character \n");
scanf("%c",&ch);
printf("List Of Names Starting With '%c' : \n",ch);
for (i=0;i<n+1;i++) if (A[i][0]==ch) puts(A[i]);
return;
}
