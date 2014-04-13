#include<stdio.h>

main()
{
char ch,A[20];
int i=0,n;
printf("Enter String \n");
gets(A);
printf("Enter Character \n");
scanf("%c",&ch);
printf("Enter No. Of Characters To Change \n");
scanf("%d",&n);
while(A[i]!='\0' && i<n)
{
A[i] = ch;
i++;
}
printf("Changed String Is : \n");
puts(A);
return;
}
