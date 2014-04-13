#include<stdio.h>

struct temp
{
int a;
float b;
};

union temp2
{
int a;
float b;
};

main()
{
struct temp A;
union temp2 B;
printf("Size Of Structure Containing Int,Char,Float Elements Is : %d\n",sizeof(struct temp));
printf("Size Of Union Containing Int,Char,Float Elements Is : %d\n",sizeof(union temp2));
A.a = B.a = 1;
A.b = B.b = 3.1456;
printf("Structure Element Values After Initializing Are \n%d %f\n",A.a,A.b);
printf("Union Element Values After Initializing Are \n%d %f\n",B.a,B.b);
return;
}
