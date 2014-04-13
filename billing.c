#include <stdio.h>
#include <string.h>

struct items
{
int item_id;
char item_name[30];
int unit_price;
int available_quantity;
};

void additem(struct items s[50],int count)
{
printf("Enter item id \n");
scanf("%d",&s[count].item_id);
printf("Enter item name \n");
scanf("%s",&s[count].item_name);
printf("Unit price \n");
scanf("%d",&s[count].unit_price);
printf("Enter Available Quantity \n");
scanf("%d",&s[count].available_quantity);
printf("Item Added\n");
}

void edititem(struct items s[50],int count, int id)
{
int i;
for (i=0;i<count;i++)
{
if (s[i].item_id==id)
{
printf("Enter New Details Of Item \n");
printf("Enter item name \n");
scanf("%s",s[i].item_name);
printf("Unit price \n");
scanf("%d",&s[i].unit_price);
printf("Enter Available Quantity \n");
scanf("%d",&s[i].available_quantity);
printf("Item Modified\n");
return;
}
}
return;
}

void deleteitem(struct items s[50],int count, int id)
{
int i,j;
if (s[count-1].item_id==id) count--;
else
{
for (i=0;i<count;i++)
{
if (s[i].item_id==id)
{
for (j=i;j<count-1;j++) s[j] = s[j+1];
count--;
printf("Item has been deleted \n");
return;
}
}
}
}

void searchitem(struct items s[50],int count,int id)
{
int i;
for (i=0;i<count;i++)
{
if (s[i].item_id==id)
{
printf("Item Found \n");
printf("Details of item \n");
printf("Item ID : %d\n",s[i].item_id);
printf("Item Name : %s\n",s[i].item_name);
printf("Unit Price : %d\n",s[i].unit_price);
printf("Available Quantity : %d\n",s[i].available_quantity);
return;
}
}
printf("Item Not Found \n");
}

void displayitems(struct items s[50],int count)
{
int i;
printf("\n\nList Of Items\n");
printf("%2s\t%25s\t%5s\t%8s\n","ID","Name","Price","Quantity");
for (i=0;i<count;i++)
{
printf("%2d\t",s[i].item_id);
printf("%25s\t",s[i].item_name);
printf("%5d\t",s[i].unit_price);
printf("%8d\n",s[i].available_quantity);
}
}


int calculatebill(struct items s[50],int count,int A[20][2],int n)
{
int i,j,sum=0;
for (i=0;i<n;i++)
{
	for (j=0;j<count;j++)
	{
	if (s[j].item_id==A[i][0]) 
	{
		sum += s[j].unit_price*A[i][1];
		s[j].available_quantity -= A[i][1];
	}
	}
}
return sum;
}

main()
{
struct items s[50];
int i,count=0,ch=1,n=0,A[20][2],item;
char yesno = 'y';
printf("\n\nSupermarket Billing System \n");
while (ch!=7)
{
printf("\n\n1. Add Item \n");
printf("2. Edit Item \n");
printf("3. Delete Item \n");
printf("4. Search Item \n");
printf("5. Display Items \n");
printf("6. Purchase\n");
printf("7. Exit \n");
printf("Enter Choice \n");
scanf("%d",&ch);
switch (ch)
{
case 1 :additem(s,count);
	count++;
	break;
case 2 :printf("Enter ID of item to be edited \n");
	scanf("%d",&item);
	edititem(s,count,item);
	break;
case 3 :printf("Enter ID of item to be deleted \n");
	scanf("%d",&item);
	deleteitem(s,count,item);
	count--;
	break;
case 4 :printf("Enter ID of item to be searched \n");
	scanf("%d",&item);
	searchitem(s,count,item);
	break;
case 5 :displayitems(s,count);
	break;
case 6: displayitems(s,count);
	while (tolower(yesno)!='n')
	{
		printf("Enter ID of item to purchase \n");
		scanf("%d",&A[n][0]);
		printf("Enter Quantity Of Item to purchase \n");
		scanf("%d",&A[n][1]);
		printf("Do you want to continue purchasing? \n");
		scanf("%c",&yesno);
		scanf("%c",&yesno);
		n++;
	}
	break;
case 7 :printf("Thank you \n");
	break;
default:printf("Invalid Input");
}
}
printf("\n\nItems Purchased \n");
printf("%2s\t%8s\n","ID","Quantity");
for (i=0;i<n;i++)
{
printf("%2d\t%8d\n",A[i][0],A[i][1])	;
}
printf("Total Bill = %d",calculatebill(s,count,A,n));
printf("\nRemaining Items:\n");
displayitems(s,count);
return;
}



