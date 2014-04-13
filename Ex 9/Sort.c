#include<stdio.h>
#include<string.h>

main()
{
char A[10][20],temp[20];
int n,i,j,k,pos;
printf("Enter No. Of Names To Be Inputted \n");
scanf("%d",&n);
printf("Enter Names \n");
for (i=0;i<n;i++) 
{
fflush(stdin);
scanf("%s",A[i]);
}
for (i=1;i<n;i++)
{
strcpy(temp,A[i]);
j = i-1;
while (strcmp(temp,A[j])<0 && j>=0)
{
strcpy(A[j+1],A[j]);
j--;
}
strcpy(A[j+1],temp);
}
printf("List Of Names In Sorted Order \n");
for (i=0;i<n;i++) puts(A[i]);
return;
}
