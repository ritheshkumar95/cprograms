#include<stdio.h>

int substring(char str[50],char substr[25])
{
int i=0,j,k;
while (str[i]!='\0')
{
k = i;
j = 0;
while (substr[j]!='\0' && str[k]!='\0')
{
if (str[k]!=substr[j]) break;
j++;
k++;
}
if (substr[j]=='\0') return (&str[i]-str);
i++;
}
return -1;
}

main()
{
char str[50],substr[25];
int j;
printf("Enter String \n");
gets(str);
printf("Enter Substring \n");
gets(substr);
j = substring(str,substr);
if (j==-1) printf("Substring not found \n");
else printf("Substring Found At Position : %d\n",j+1);
return;
}
