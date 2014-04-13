#include<stdio.h>

int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int leapyear(int year)
{
if (year%4==0)
{
if (year%100==0)
{
	if (year%400==0) return 1;
	else return 0;
}
else return 1;
}
else return 0;
}

int noyear(int yr)
{
int lpyr =0,temp;
if (leapyear(yr)==0) lpyr = yr/4;
else lpyr = (yr/4) - 1;
lpyr -= yr/100;
lpyr += yr/400;
temp = yr+lpyr;
temp = temp%7;
return temp;
}

void day(int day,int month,int year, int x)
{
int i,temp=0;
for (i=0;i<month-1;i++) temp += days[i];
temp += (day-1);
if (leapyear(year)==1) temp += 1;
x += temp%7;
x = x%7;
switch(x)
{
case 0: printf("Sunday \n");
	break;
case 1: printf("Monday \n");
	break;
case 2: printf("Tuesday \n");
	break;
case 3: printf("Wednesday \n");
	break;
case 4: printf("Thursday \n");
	break;
case 5: printf("Friday \n");
	break;
case 6: printf("Saturday \n");
	break;
}
}

main()
{
int d,m,y;
printf("Day Predictor \n");
printf("Enter Date (in dd/mm/yyyy format) \n");
scanf("%d/%d/%d",&d,&m,&y);
day(d,m,y,noyear(y));
return;
}
