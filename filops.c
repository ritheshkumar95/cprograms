#include <stdio.h>
#include <ctype.h>

void copy(char *f1, char *f2)
{
int chars=0,words=0,lines=0;
char s,ch;
FILE *p = fopen(f1,"r");
FILE *q = fopen(f2,"r");
if (!p)
{
printf("File Empty \n");
return;
}
else
{
	if (!q) q = fopen(f2,"w");
	else
	{
		fclose(q);
		printf("Overwrite Contents? (y or n) \n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if (tolower(ch)=='n') q = fopen(f2,"a");
		else q = fopen(f2,"w");
	}
	
	while((s=fgetc(p))!=EOF) fprintf(q,"%c",s);
}
fclose(q);
q = fopen(f2,"r");
while ((s=fgetc(q))!=EOF)
{
printf("%c",s);
if (isalpha(s)) chars++;
else if (s=='\n')
{
lines++;
words++;
}
else if (s==' ') words++;
}
printf("No. Of Characters = %d\n",chars);
printf("No. Of Words = %d\n",words);
printf("No. Of Lines = %d\n",lines);
fclose(q);
fclose(p);
}

void merge(char *f1, char *f2, char *f3)
{
char ch,s;
FILE *p = fopen(f1,"r");
FILE *q = fopen(f2,"r");
FILE *r = fopen(f3,"r");
if ((!p)||(!q))
{
printf("File Empty \n");
return;
}
else
{
	if(!r)	r = fopen(f3,"w");
	else
	{
	fclose(r);
	printf("Overwrite Contents? (y or n)\n");
	scanf("%c",&ch);
	scanf("%c",&ch);
	if (tolower(ch)=='y') r = fopen(f3,"w");
	else r = fopen(f3,"a");
	}
} 
while((s=fgetc(p))!=EOF) fprintf(r,"%c",s);
while((s=fgetc(q))!=EOF) fprintf(r,"%c",s);
fclose(p);
fclose(q);
fclose(r);
r = fopen(f3,"r");
fclose(r);
}

void append(char *f)
{
char str[100];
FILE *q = fopen(f,"r");
if (!q)	
{
	printf("File Empty \n");
	return;
}
fclose(q);
printf("Enter Contents to be appended to file 2 (full stop to stop typing) \n");
scanf("%[^.]",str);
puts(str);
q = fopen(f,"a");
fprintf(q,"%s",str);
fclose(q);
}

main(int argc, char *argv[])
{
FILE *p,*q,*r;
int temp,n,i,ch=1,lines=0;
char c;
//while (ch!=5)
//{
printf("\n\nFile Operations \n");
printf("1. Copy (File 1 to File 2)\n");
printf("2. Merge(File1,File2 to File 3)\n");
printf("3. Append (File 2) \n");
printf("4. Move (File 1) \n");
printf("5. Exit \n");
printf("Enter Choice \n");
fflush(stdin);
scanf("%d",&ch);
switch(ch)
{
case 1 : copy(argv[1],argv[2]);
	break;
case 2 : merge(argv[1],argv[2],argv[3]);
	break;
case 3: append(argv[2]);
	break;
case 4: printf("Enter Line Number To Move To in File 1 \n");
	scanf("%d",&n);
	lines = 0;
	p = fopen(argv[1],"r");
	while((c=getc(p))!=EOF) if (c=='\n') lines++;
	printf("No. of Lines = %d\n",lines);
	fseek(p,0,SEEK_END);
	printf("Size Of File = %d\n",ftell(p));
	fseek(p,0,SEEK_SET);
	if (n>lines) 
	{
	printf("Wrong No. Of Lines Inputted \n");
	break;
	}
	printf("Contents Of File From Inputted Line Number \n");
	i=0;
	while(i<n-1) 
	{
		c = getc(p);
		if (c=='\n') i++;
	}
	while((c=getc(p))!=EOF) printf("%c",c);
	fclose(p);
	break;
case 5: printf("Thank You \n");
	break;
default: printf("Wrong Input \n");
	break;
}
//}
return;
}
