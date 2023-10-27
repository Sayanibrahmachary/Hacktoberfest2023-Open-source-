#include<stdio.h>

struct node{
	int value;
	struct node *next;
};
struct node *head=NULL,*q,*p,*t;

void create(int item)
{
	t=(struct node*)malloc(sizeof(struct node));
	t->value=item;
	t->next=NULL;
	if(head==NULL)
	{
		head=q=t;
	}
	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=t;
	}
}

void shorting()
{
	p=head;
	int c=1,i;
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	
	int t;
	
	for(i=1;i<c;i++)
	{
		q=head;
		while(q->next!=NULL)
		{
			if(q->value>q->next->value)
			{
				t=q->value;
				q->value=q->next->value;
				q->next->value=t;
			}
			q=q->next;
		}
	}
}

display()
{
	t=head;
	printf("The list is:");
	if(t==NULL)
	{
		printf("Empty");
	}
	while(t!=NULL)
	{
		printf("%d\t",t->value);
		t=t->next;
	}
}

int main()
{
	int choice;
	int item;
	do
	{
		printf("\n-:-------Menu------:-\n");
		printf("1)....Creat\n");
		printf("2)....Shorting\n");
		printf("3)....Display\n");
		printf("4)....Exit from the linklist\n\n");
		
		printf("Enter you choose:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter the value of item:");
				scanf("%d",&item);
				create(item);
				break;
			case 2:
				shorting();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Thank you ");
				printf("%c ",3);
				break;
			default:
				printf("Invalid input");		
		}
	}while(choice!=4);

return 0;	
}
