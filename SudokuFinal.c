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

int sudo(int A[9][9],int i,int j)
{
int count,n=0,x,y,flag,B[9];	
if (A[i][j]==0)
{
	for (y=1;y<=9;y++)						//Find Possibilities For This Square
	{
		count = chk(A,i,j,y);
		if (count==1) B[n++] = y;
	}
	if (n==0) return 0;
	for (x=0;x<n;x++) 
	{
		A[i][j] = B[x];
		if (i==8 && j==8) 
		{
			print(A);
			return 1;
		}
		else if (j==8) flag = sudo(A,i+1,0);
		else flag = sudo(A,i,j+1);

		if (flag==1) return 1;
	}
	A[i][j]=0;
	return 0;
}
else
{
if (i==8 && j==8) 
{
	print(A);
	return 1;
}
else if (j==8) flag = sudo(A,i+1,0);
else flag = sudo(A,i,j+1);
}
if (flag==0) return 0;
else return 1;
}

main()
{
int A[9][9],temp,i,j;
printf("Enter Sudoku \n");
for (i=0;i<9;i++) for (j=0;j<9;j++) scanf("%d",&A[i][j]);
temp = sudo(A,0,0);
printf("\n\nSolution:\n");
for (i=0;i<9;i++) 
{
for (j=0;j<9;j++) printf("%d ",A[i][j]);
printf("\n");
}
printf("%d",temp);
return;
}
