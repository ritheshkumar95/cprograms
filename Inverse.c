#include<stdio.h>
#include<math.h>


void print(float A[10][10],int n)
{
int i,j;
for (i=0;i<n;i++) 
{
for (j=0;j<n;j++) printf("%3f ",A[i][j]);
printf("\n");
}
}


void mul(float A[10][10],float B[10][10],int n)
{
int i,j,k;
float C[10][10];
for (i=0;i<n;i++)
{
for (j=0;j<n;j++)
{
C[i][j] = 0;
for (k=0;k<n;k++) C[i][j] += A[i][k]*B[k][j];
}
}
print (C,n);
} 


void copy(float B[10][10],int m,float A[10][10],int n,int x,int y)
{
int i,j,a=0,b=0;
for (i=0;i<n;i++)
{
	for (j=0;j<n;j++)
	{
	if (i!=x && j!=y)
	{
		if (b==m)
		{
			b = 0;
			a++;
		}	
		B[a][b++] = A[i][j];
	}
	}
}
}


float det(float A[10][10],int n)
{
float B[10][10],temp=0;
int i;
if (n==2)
{
return ((A[0][0]*A[1][1]) - (A[1][0]*A[0][1]));
}
else
{
for (i=0;i<n;i++)
{
copy(B,n-1,A,n,0,i);
temp += pow(-1,i)*A[0][i]*det(B,n-1);
}
return temp;
}
}


void adj(float B[10][10],float A[10][10],int n)
{
float temp[10][10];
int i,j;
for (i=0;i<n;i++)
{
for (j=0;j<n;j++)
{
copy (temp,n-1,A,n,i,j);
B[i][j] = pow(-1,i+j)*det(temp,n-1);
}
}
}


main()
{
float C[10][10],B[10][10],A[10][10],d;
int n,i,j;
printf("Enter Size Of Square Matrix (Ex: Type 3 for 3x3) \n");
scanf("%d",&n);
printf("Enter Matrix \n");
for (i=0;i<n;i++) for (j=0;j<n;j++) scanf("%f",&A[i][j]);
d = det(A,n);
printf("Determinant of Matrix = %f\n",d);
adj(B,A,n);
printf("Adjoint of Matrix Is : \n");
print(B,n);
printf("Inverse Of Matrix Is :\n");
for (i=0;i<n;i++) for (j=0;j<n;j++) B[i][j] /= d;
for (i=0;i<n;i++) for (j=0;j<n;j++) C[i][j] = B[j][i];
print(C,n);
printf("Checking Matrix Multiplied To Its Inverse \n");
mul(C,A,n);
return;
}
