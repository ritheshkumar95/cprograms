#include<stdio.h>
#include<string.h>

main()
{
char A[30],ch;
int flag = 1,i,pos;
printf("Enter String \n");
gets(A);
printf("Enter Search Character \n");
scanf("%c",&ch);
for (i=0;A[i]!='\0';i++);
i--;
for (;i>=0;i--) 
{
if (A[i]==ch)
{
	flag = 0;
	pos = i;
	break;
}
}
if (flag==0) printf("Last Occurence Of Character '%c' In String Is At Position %d \n",ch,pos+1);
else printf("Character Not Found In String \n");
return;
}

