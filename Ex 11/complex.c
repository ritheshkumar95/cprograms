#include<stdio.h>

struct complex
{
int re,im;
};

void add(struct complex c1,struct complex c2)
{
struct complex c3;
c3.re = c1.re + c1.re;
c3.im = c1.im + c2.im;
printf("C1 + C2 = %d + %di \n",c3.re,c3.im);
}

void sub(struct complex c1, struct complex c2)
{
struct complex c3;
c3.re = c1.re - c1.re;
c3.im = c1.im - c2.im;
printf("C1 - C2 = %d + %di \n",c3.re,c3.im);
}

void mul(struct complex c1, struct complex c2)
{
struct complex c3;
c3.re = (c1.re*c2.re)-(c1.im*c2.im);
c3.im = (c1.re*c2.im) + (c1.im*c2.re);
printf("C1 * C2 = %d + %di \n",c3.re,c3.im);
}

main()
{
int ch=1;
struct complex c1,c2,c3;
printf("Enter a,b for Complex Number 1 (a + bi) \n");
scanf("%d %d",&c1.re,&c1.im);
printf("Enter c,d for Complex Number 2 (c + di) \n");
scanf("%d %d",&c2.re,&c2.im);
while(ch!=4)
{
printf("1. Add \n2. Subtract \n3. Multiply \n4.Exit\n");
printf("Enter Choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1: add(c1,c2); 
	break;
case 2: sub(c1,c2); 
	break;
case 3: mul(c1,c2);
	break;
case 4: break;
default: printf("Wrong Input \n");
}
}
return;
}

