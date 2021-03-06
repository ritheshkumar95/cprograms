#include<stdio.h>
#include<string.h>

struct TIME
{
int h,m;
};

struct TRAIN_INFO
{
int tno;
char tname[30];
struct TIME deptime;
struct TIME arrivtime;
char ststation[30];
char enstation[30];
};

void display(struct TRAIN_INFO train[5],int n)
{
int i,j;
printf("Train Details \n");
for (i=0;i<n;i++)
{
printf("Train Name : ");
puts(train[i].tname);
printf("Train Number : %d\n",train[i].tno);
printf("Departure Time : %d:%d\n",train[i].deptime.h,train[i].deptime.m);
printf("Arrival Time : %d:%d\n",train[i].arrivtime.h,train[i].arrivtime.m);
printf("Start Station : ");
puts(train[i].ststation);
printf("End Station : ");
puts(train[i].enstation);
for (j=0;j<3;j++) printf("\n");
}
}

void dispsttime(struct TRAIN_INFO train[5],int n,char station[30],struct TIME t)
{
int i;
printf("Train Names That Start At %s at %d:%d are \n",station,t.h,t.m);
for (i=0;i<n;i++)
{
if ((train[i].deptime.h==t.h) && (train[i].deptime.m==t.m) && (strcmp(train[i].ststation,station)==0)) puts(train[i].tname);
}
}

void dispsten(struct TRAIN_INFO train[5],int n, char sstation[30], char estation[30])
{
int i;
printf("Train Names That Start At %s And Arrive At %s are \n",sstation,estation);
for (i=0;i<n;i++)
{
if ((strcmp(train[i].ststation,sstation)==0) && (strcmp(train[i].enstation,estation)==0)) puts(train[i].tname);
}
}

void dispno(struct TRAIN_INFO train[5],int n, char name[30])
{
int i;
for (i=0;i<n;i++)
{
if (strcmp(train[i].tname,name)==0) printf("Train Number of Train %s is : %d\n",train[i].tname,train[i].tno);
}
}

main()
{
char station[30],estation[30],sstation[30],name[30];
struct TRAIN_INFO train[5];
int n,ch=1,i,j;
struct TIME t;
printf("Enter no. of records \n");
scanf("%d",&n);
printf("Enter Details Of Trains \n");
for (i=0;i<n;i++)
{
printf("Train Name : ");
scanf("%s",&train[i].tname);
printf("Enter Train Number : ");
scanf("%d",&train[i].tno);
printf("Enter Departure Time : ");
scanf("%d:%d",&train[i].deptime.h,&train[i].deptime.m);
printf("Enter Arrival Time : ");
scanf("%d:%d",&train[i].arrivtime.h,&train[i].arrivtime.m);
printf("Enter Start Station : ");
scanf("%s",&train[i].ststation);
printf("Enter End Station : ");
scanf("%s",train[i].enstation);
for (j=0;j<3;j++) printf("\n");
}
while (ch!=5)
{
printf("1. List all the records in the train time table \n");
printf("2. List all the trains that depart from a particular time and station \n");
printf("3. List all the trains that depart from a particular start and end station \n");
printf("4. Display train number for a given train name \n");
printf("5. Exit \n");
printf("Enter Choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1: display(train,n);
	break;
case 2: printf("Enter Start Station \n");
	scanf("%s",&station);
	printf("Enter Start Time \n");
	scanf("%d:%d",&t.h,&t.m);
	dispsttime(train,n,station,t);
	break;
case 3: printf("Enter Start Station \n");
	scanf("%s",&sstation);
	printf("Enter End Station \n");
	scanf("%s",&estation);
	dispsten(train,n,sstation,estation);
	break;
case 4: printf("Enter Train Name \n");
	scanf("%s",name);
	dispno(train,n,name);
	break;
case 5: break;
}
}
return;
}
