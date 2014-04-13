#include<stdio.h>

struct medal
{
char country[30];
int gold;
int silver;
int bronze;
int total;
};

void print(struct medal s[10],int n)
{
int i;
printf("%15s\t%4s\t%6s\t%6s\t%5s\n","Country","Gold","Silver","Bronze","Total");
for (i=0;i<n;i++)
{
printf("%15s\t",s[i].country);
printf("%4d\t",s[i].gold);
printf("%6d\t",s[i].silver);
printf("%6d\t",s[i].bronze);
printf("%5d\n",s[i].total);
}
}

main()
{
struct medal s[10];
int i,n,j;
struct medal temp;
printf("Enter No. Of Countries \n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\nEnter Country Name \n");
scanf("%s",&(s+i)->country);
printf("Enter No. Of Gold, Silver, Bronze Medals \n");
scanf("%d %d %d",&(s+i)->gold,&(s+i)->silver,&(s+i)->bronze);
s[i].total = (s+i)->gold + (s+i)->silver + (s+i)->bronze;
}
for (i=1;i<n;i++)
{
temp = s[i];
j = i-1;
while (temp.bronze<((s+j)->bronze) && j>=0)
{
s[j+1] = s[j];
j--;
}
s[j+1] = temp;
} // bronze

for (i=1;i<n;i++)
{
temp = s[i];
j = i-1;
while (temp.silver<((s+j)->silver) && j>=0)
{
s[j+1] = s[j];
j--;
}
s[j+1] = temp;
} // silver

for (i=1;i<n;i++)
{
temp = s[i];
j = i-1;
while (temp.gold<((s+j)->gold) && j>=0)
{
s[j+1] = s[j];
j--;
}
s[j+1] = temp;
} // gold

printf("Medal Tally\n");
print(s,n);
return;
}
