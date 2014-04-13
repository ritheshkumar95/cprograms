#include<stdio.h>
#include<math.h>

main()
{
int i,j,n,ch=1,pos,item,A[15],beg,last,flag,mid,temp,min,max;
float sd,var,mean;
printf("Enter Array Size \n");
scanf("%d",&n);
printf("Enter Array \n");
for (i=0;i<n;i++) scanf("%d",&A[i]);
while(ch!=11)
{
printf("Array Operations \n");
printf("1. Insertion \n");
printf("2. Deletion \n");
printf("3. Element Search \n");
printf("4. Bubble Sort \n");
printf("5. Insertion Sort \n");
printf("6. Selection Sort \n");
printf("7. Arithmetic Mean, Variance And Standard Deviation \n");
printf("8. Maximum Element \n");
printf("9. Minimum Element \n");
printf("10. Print \n");
printf("11. Exit \n");
printf("Enter Choice \n");
scanf("%d",&ch);
switch (ch)
{
case 1: printf("Enter Element To Insert \n");
	scanf("%d",&item);
	printf("Enter Insertion Position \n");
	scanf("%d",&pos);
	for (i=n;i>=pos;i--) A[i] = A[i-1];
	A[i] = item;
	n++;
	break;
case 2: printf("Enter Element To Delete \n");
	scanf("%d",&item);
	for (i=0;i<n;i++)
	{
	if (A[i]==item)
	{
		for (j=i;j<n-1;j++) A[j] = A[j+1];
		n--;
	}
	}
	break;
case 3: printf("Enter Element To Search \n");
	scanf("%d",&item);
	flag = 0; 
	beg = 0;
	last = n-1;
	while (beg<=last)
	{
	mid = (beg + last)/2;
	if (A[mid]==item)
	{
	printf("Item Found At Position %d \n", mid+1);
	flag = 1;
	break;
	}	
	else if (A[mid]<item) beg = mid + 1;
	else last = mid - 1;
	}
	if (flag==0) printf("Item Not Found \n");
	break;
case 4: for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (A[j]>A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	break;
case 5: for (i=1;i<n;i++)
	{
	temp = A[i];
	j = i-1;
	while (temp<A[j] && j>=0)
	{
		A[j+1] = A[j];
		j--;
	}
	A[j+1] = temp;
	}
	break;
case 6: for (i=0;i<n;i++)
	{
		min = A[i];
		for (j=i+1;j<n;j++)
		{
			if (A[j]<min)
			{
				min = A[j];
				pos = j;
			}
		}
		A[pos] = A[i];		
		A[i] = min;
	}
	break;
case 7:	mean = 0; 
	for (i=0;i<n;i++) mean += A[i];
	mean /= n;
	var = 0;
	for (i=0;i<n;i++) var += pow((A[i]-mean),2);
	var /= n;
	sd = pow(var,0.5);
	printf("Mean = %f \n",mean);
	printf("Variance = %f \n",var);
	printf("Standard Deviation = %f \n",sd);
	break;
case 8: max = A[0];
	for (i=1;i<n;i++) if (A[i]>max) max = A[i];
	printf("Maximum Element = %d \n",max);
	break;
case 9: min = A[0];
	for (i=1;i<n;i++) if (A[i]<min) min = A[i];
	printf("Minimum Element = %d \n",min);
	break;
case 10: printf("Array Status Is : \n");
	 for (i=0;i<n;i++) printf("%d ",A[i]);
	 printf("\n");	 
	 break;
case 11: printf("Thank You \n");
	 break;
default: printf("Invalid Value \n");
}
}
return;
}








