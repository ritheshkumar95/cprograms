#include<stdio.h>

struct mark_sheet
{
char name[30];
int rollno;
int marks[5];

};

main()
{
int i,j;
struct mark_sheet std[3];
printf("Enter Students Details \n");
for (i=0;i<3;i++)
{
std[i].avg = 0;
printf("Enter Name \n");
scanf("%s",&std[i].name);
printf("Enter Roll Number \n");
scanf("%d",&std[i].rollno);
printf("Enter Mark \n");
for (j=0;j<5;j++) scanf("%d",&std[i].marks[j]);
for (j=0;j<3;j++) printf("\n");
}
for (i=0;i<50;i++) printf("\n");
for (i=0;i<3;i++)
{
printf("\n\n");
printf("Name : ");
puts(std[i].name);
printf("Roll Number : ");
printf("%d\n",std[i].rollno);
printf("Marks \n");
for (j=0;j<5;j++) printf("%d\n",std[i].marks[j]);
for (j=0;j<3;j++) printf("\n");
}
return;
}




