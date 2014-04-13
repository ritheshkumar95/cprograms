#include <stdio.h>
#include <stdlib.h>

typedef struct node *position;
typedef struct node *polynomial;

struct node
{
float coefficient;
int exponent;
position next;
};

void disp(polynomial p1)
{
polynomial temp;
temp = p1->next;
while (temp->next)
{
printf("%fx^%d +",temp->coefficient,temp->exponent);
temp = temp -> next;
}
printf("%fx^%d\n",temp->coefficient,temp->exponent);
}

polynomial insert(polynomial p1, polynomial new)
{
int flag=0;
polynomial temp=p1->next,pos1=p1,pos2;
if (p1->next==NULL) p1->next = new;
else
{
	while (temp!=NULL) 
	{
		if(temp->exponent<new->exponent)
		{
			pos2 = temp;
			flag = 1;
			break;
		}
		pos1 = temp;
		temp = temp->next;
	}
if (flag==0) pos1->next = new;
else
{ 
pos1->next = new;
new->next = pos2;
}
}
printf("Current state of polynomial : \n");
disp(p1);
return p1;
}

void create(polynomial p1)
{
polynomial new,temp;
char ch = 'y';
while (tolower(ch)!='n')
{
new = malloc(sizeof(struct node));
printf("\n\nEnter Exponent Of Term \n");
scanf("%d",&new->exponent);
printf("Enter Co-Efficient of Term \n");
scanf("%f",&new->coefficient);
new->next=NULL;
printf("Do you want to continue ? \n");
scanf("%c",&ch);
scanf("%c",&ch);
p1 = insert(p1,new);
}
//return p1;
}

position findprev(polynomial p1, int exp)
{
polynomial temp=p1;
while (temp->next!=NULL)
{
if (temp->next->exponent==exp) return temp;
temp = temp->next;
}
return NULL;
}


void delete(int exp, polynomial p1)
{
polynomial temp,prev;
prev = findprev(p1,exp);
if (prev==NULL) printf("Wrong term \n");
else
{
temp = prev->next;
prev->next = prev->next->next;
printf("Term %fx^%d has been deleted \n",temp->coefficient, temp->exponent);
free(temp);
}
}

void add(polynomial p1, polynomial p2)
{
polynomial r=p1->next,s=p2->next,t;
polynomial res = malloc(sizeof(struct node)),new;
res->next=NULL;
t = res;
while (r!=NULL && s!=NULL)
{
new = malloc(sizeof(struct node));
if (r->exponent > s->exponent)
{
new->exponent = r->exponent;
new->coefficient = r->coefficient;
r = r->next;
}
else if (r->exponent < s->exponent)
{
new->exponent = s->exponent;
new->coefficient = s->coefficient;
s = s->next;
}
else
{
new->exponent = s->exponent;
new->coefficient = s->coefficient + r->coefficient;
r = r->next;
s = s->next;
}
t->next=new;
t = t->next;
}

while (r!=NULL) 
{
new = malloc(sizeof(struct node));
new->exponent = r->exponent;
new->coefficient = r->coefficient;
t->next=new;
t = t->next;
r = r->next;
}

while (s!=NULL) 
{
new = malloc(sizeof(struct node));
new->exponent = s->exponent;
new->coefficient = s->coefficient;
t->next=new;
t = t->next;
s = s->next;
}
printf("polynomial p1 + p2 = :\n");
disp(res);
}

main()
{
int exp,ch=1;
polynomial p1=malloc(sizeof(struct node));
p1->next=NULL;
polynomial p2=malloc(sizeof(struct node));
p2->next=NULL;
while (ch!=7)
{
printf("\n\nPolynomials \n");
printf("1. Create polynomial p1 \n");
printf("2. Create polynomial p2 \n");
printf("3. Delete term in polynomial p1 \n");
printf("4. Delete term in polynomial p2 \n");
printf("5. Display polynomials \n");
printf("6. Add polynomials and display resultant \n");
printf("7. Exit \n");
printf("Enter choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Creating polynomial p1 \n"); 
	create(p1);
	break;
case 2: printf("Creating polynomial p2 \n"); 
	create(p2);
	break;
case 3: printf("Enter term to delete in polynomial p1 \n");
	scanf("%d",&exp);
	delete(exp,p1);
	break;
case 4: printf("Enter term to delete in polynomial p2 \n");
	scanf("%d",&exp);
	delete(exp,p2);
	break;
case 5: printf("Polynomial p1 : \n");
	disp(p1);
	printf("Polynomial p2: \n");
	disp(p2);
	break;
case 6: add(p1,p2);
	break;
case 7: printf("Thank you \n");
	break;
default: printf("Wrong Input \n");
	break;
}
}
return;
}


