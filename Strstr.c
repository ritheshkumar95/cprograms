#include<stdio.h>
#include<string.h>

char *strstr(const char *s1,const char *s2)
{
int i=0,j,k;
while(s1[i]!='\0')
{
j=0;
k = i;
while ((s1[k++]==s2[j++])&&(s1[k]!='\0'&&s2[j]!='\0'));
if (s2[j]=='\0') return (char *)s1+i;
i++;
}
return NULL;
}
main()
{
char A[30],str[15],*c;
printf("Enter String \n");
gets(A);
printf("Enter Substring \n");
gets(str);
c = strstr(A,str);
if (c) printf("Substring starting from %d position \n",c-A+1);
return;
}
