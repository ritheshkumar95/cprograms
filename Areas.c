#include<stdio.h>
int main()
{
int a,b,ch;
float area;
while (ch!=4)
{
printf("Program to Compute Areas \n");
printf("1. Rectangle \n");
printf("2. Circle \n");
printf("3. Triangle \n");
printf("4. Exit \n");
printf("Enter Choice: \n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter length and breadth of rectangle \n");
	scanf("%d%d",&a,&b);
	area = a*b;
	printf("Area Of Rectangle Is : %f", area);
	break;
case 2: printf("Enter radius of circle \n");
	scanf("%d",&a);
	area = 3.14*a*a;
	printf("Area Of Square Is : %f", area);
	break;
case 3: printf("Enter length of base and height of triangle \n");
	scanf("%d %d",&a,&b);
	area = 0.5*a*b;
	printf("Area of triangle is : %f", area);
	break;
case 4: printf("Thank You \n");
	break;
default: printf("Wrong Entry \n Enter Again \n");
	 break;
}
printf("\n");
}
return 0;
}

