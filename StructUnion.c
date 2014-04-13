#include<stdio.h>

struct temp
{
int a;
char b;
float c;
};

union temp2

{
int a;
char b;
float c;
};

main()
{
struct temp A;
union temp2 B;
printf("Size Of Structure Containing Int,Char,Float Element Is : %d\n",sizeof(A));
printf("Size Of Union Containing Int,Char,Float Element Is : %d\n",sizeof(B));
A.a = 1;
A.b = 'a';
A.c = 3.14;
printf("Structure Element Values After Initializing \n%d %c %f\n",A.a,A.b,A.c);
B.a = 1;
B.b = 'a';
B.c = 3.14;
printf("Union Element Values After Initializing \n%d %c %f (Stores Only Last Value, Others are junk values)\n",B.a,B.b,B.c);
return;
}
