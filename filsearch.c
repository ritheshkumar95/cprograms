#include <stdio.h>
#include <string.h>

main(int argc, char *argv[])
{
char s[50],c,r[50],B[50];
int i,j,l,k,line=0;
FILE *p = fopen(argv[2],"r");
if (!p)
{
	printf("File Empty \n");
	fclose(p);
	return;
}
while (fgets(s,50,p)) 
{  	
line++;
for (i=0;s[i]!='\0';i++)
{
j=i;
while (s[j]!=' ' && s[j]!='\0' && s[j]!='\n') j++;
l=0;
for (k=i;k<j;k++) B[l++] = s[k];
B[l] = '\0';
if (strcmp(argv[1],B)==0) printf("Line N0. - %d\tLine - %s\n",line,s);
if (s[j]=='\0') i = j-1;
else i=j;
}
}
return;
}
