#include <stdio.h>
#include <string.h>

void print(int A[9][9])
{
int i,j;
for (i=0;i<9;i++)
{
	for (j=0;j<9;j++) printf("%d ",A[i][j]);
	printf("\n");
}
scanf("%c",&i);
printf("\n\n\n");
}

int chk(int A[9][9],int p, int q, int n)
{
int i,j,countr=0,countc=0,count=0;
for (i=0;i<9;i++)
{
if (A[p][i]==n) ++countr;
if (A[i][q]==n) ++countc;
}
if (countr!=0|| countc!=0) return 0;
for (i=p/3;i<(p/3)*3;p++)
{
for (j=q/3;j<(q/3)*3;j++) if (A[i][j]==n) ++count;
}
if (count!=0) return 0;
else return 1;
}

void sudo(int A[9][9],int i,int j)
{
int count,n=0,x,y,flag,B[9],k;
for (k=0;k<50;k++)
{
for (i=0;i<9;i++)
{	
	for (j=0;j<9;j++)
	{
		n=0;
		if (A[i][j]==0)
		{
			for (y=1;y<=9;y++)						//Find Possibilities For This Square
			{
				count = chk(A,i,j,y);
				if (count==1) B[n++] = y;
			}
			if (n==1) A[i][j] = B[0];
		}
	}
}
}
}

main()
{
int A[9][9],temp,i,j;
printf("Enter Sudoku \n");
for (i=0;i<9;i++) for (j=0;j<9;j++) scanf("%d",&A[i][j]);
sudo(A,0,0);
printf("\n\nSolution:\n");
for (i=0;i<9;i++) 
{
for (j=0;j<9;j++) printf("%d ",A[i][j]);
printf("\n");
}
printf("%d",temp);
return;
}
