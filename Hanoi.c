#include<stdio.h>

void move(int count, int start, int finish, int temp)
{
if (count>0)
{
move(count-1,start,temp,finish);
printf("Move disk %d from %d to %d\n",count,start,finish);
move(count-1,temp,finish,start);
}
}

main()
{
int disks;
printf("Tower Of Hanoi Problem \n");
printf("Enter Number Of Disks \n");
scanf("%d",&disks);
move(disks,1,3,2);
return;
}
