#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node *position;
typedef struct node *list;

struct node
{
char name[30];
position next;
position prev;
};

void disp(list p1)
{
list temp;
temp = p1->next;
while (temp)
{
printf("%s ",temp->name);
temp = temp -> next;
}
printf("\n");
}


void sort(list p1)
{
list temp = p1;
char name[30],temps[30];
int i,count = 0;
while (temp->next) 
{
count++;
temp = temp->next;
}
if (count>=2)
{
for (i=0;i<count;i++)
{
temp = p1->next;
while (temp->next)
{
if (strcmp(temp->name,temp->next->name)>0)
{
strcpy(temps,temp->name);
strcpy(temp->name,temp->next->name);
strcpy(temp->next->name,temps);
}
temp = temp->next;
}
}
}
}


void dispname(list p1, char name[30])
{
list temp = p1;
while (temp->next)
{
if (strcmp(temp->next->name,name)==0)
{
temp = temp->next;
if (temp->prev!=p1) printf("Previous Name - %s \n",temp->prev->name);
else printf("Previous Name does not exist \n");
if (temp->next) printf("Next Name - %s \n",temp->next->name);
else printf("Next name does not exist \n");
return;
}
temp = temp->next;
}
printf("Entered name could not be found \n");
}

list insertend(list p1, list new)
{
list temp=p1;
while (temp->next) temp = temp->next;
temp->next = new;
new->prev = temp;
new->next = NULL;
printf("Current state of list : \n");
disp(p1);
return p1;
}

list insertfront(list p1, list new)
{
list temp=p1->next;
if (!temp)
{
p1->next = new;
new->prev = p1;
}
else
{
p1->next = new;
new->prev = p1;
new->next = temp;
temp->prev = new;
}
printf("Current state of list : \n");
disp(p1);
return p1;
}

list insertname(list p1, list new, char name[30])
{
int flag=0;
list temp = p1->next,pos;
while (temp)
{
if (strcmp(temp->name,name)==0)
{
flag = 1;
pos = temp;
break;
}
temp = temp->next;
}
if (flag==0) printf("Given name not found \n");
else
{
temp = pos->next;
pos->next = new;
new->prev = pos;
new->next = temp;
temp->prev = new;
printf("Current state of list : \n");
disp(p1);
}
return p1;
}

void merge(list p1, list p2)
{
sort(p1);
sort(p2);
list temp,p=p1->next,q=p2->next;
while (p!=NULL && q!=NULL)
{
if (strcmp(q->name,p->name)<=0)
{
temp = q->next;
p1 = insertname(p1,q,p->prev->name);
q = temp;
}
else p = p->next;
}
while (q!=NULL)
{
temp = q->next;
insertend(p1,q);
q = temp;
}
printf("Merged list : \n");
disp(p1);
}



void create(list p1)
{
list new,temp;
char ch = 'y';
while (tolower(ch)!='n')
{
new = malloc(sizeof(struct node));
printf("\n\nEnter Name \n");
scanf("%s",&new->name);
new->next=NULL;
new->prev=NULL;
printf("Do you want to continue ? \n");
scanf("%c",&ch);
scanf("%c",&ch);
p1 = insertend(p1,new);
}
//return p1;
}

position findprev(list p1, char name[30])
{
list temp=p1;
while (temp->next!=NULL)
{
if (strcmp(temp->next->name,name)==0) return temp;
temp = temp->next;
}
return NULL;
}


void delete(char name[30], list p1)
{
list del,temp,prev;
prev = findprev(p1,name);
if (prev==NULL) printf("Wrong term \n");
else
{
del = prev->next;
temp = del;
prev->next = prev->next->next;
temp->next->prev = temp->prev;
printf("Name %s has been deleted \n",del->name);
free(del);
}
}

main()
{
int ch=1;
char name[30];
list p1=malloc(sizeof(struct node));
list p2=malloc(sizeof(struct node));
p2->next=NULL;
p2->prev=NULL;
list new,temp;
while (ch!=11)
{
printf("\n\nDoubly Linked List \n");
printf("1. Create list \n");
printf("2. Insert name in front \n");
printf("3. Insert name in end \n");
printf("4. Insert name after given name \n");
printf("5. Display lists \n");
printf("6. Display Next And Previous Name for Entered name \n");
printf("7. Delete term in list p1 \n");
printf("8. Create another list \n");
printf("9. Merge the 2 lists \n");
printf("10. Merged List In Reverse order \n");
printf("11. Exit \n");
printf("Enter choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Creating list 1 \n");
	p1->next=NULL;
	p1->prev=NULL; 
	create(p1);
	break;
case 2: new = malloc(sizeof(struct node));
	new->next=NULL;
	printf("Enter Name \n");
	scanf("%s",&new->name);
	p1 = insertfront(p1,new);
	break;
case 3: new = malloc(sizeof(struct node));
	new->next=NULL;
	printf("Enter Name \n");
	scanf("%s",&new->name);
	p1 = insertend(p1,new);
	break;
case 4: new = malloc(sizeof(struct node)); 
	new->next=NULL;
	printf("Enter New Name \n");
	scanf("%s",&new->name);
	printf("Enter name after which new name has to be inserted \n");
	scanf("%s",&name);
	p1 = insertname(p1,new,name);
	break;
case 5: printf("List 1: \n");
	if (p1->next) disp(p1);
	else printf("Empty \n");
	printf("List 2: \n");
	if (p2->next) disp(p2);
	else printf("Empty \n");	
	break;
case 6: printf("Enter name to be searched and previous and next names printed \n");
	scanf("%s",&name);
	dispname(p1,name);
	break;
case 7: printf("Enter term to delete in list p1 \n");
	scanf("%s",&name);
	delete(name,p1);
	break;
case 8: printf("Creating list 2\n"); 
	create(p2);
	break;
case 9: merge(p1,p2);
	break;
case 10: temp = p1->next; 
	while (temp->next) temp = temp->next;
	printf("List in reverse order \n");
	while (temp->prev)
	{
	printf("%s ",temp->name);
	temp = temp->prev;
	}
	break;
case 11: printf("Thank you \n");
	break;
default: printf("Wrong Input \n");
	break;
}
}
return;
}


