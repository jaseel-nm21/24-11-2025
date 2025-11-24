#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *header=NULL;

void insertatfornt(int item)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=NULL;
	
	if(header == NULL)
	{
		header=newnode;
	}
	else
	{
		newnode->next=header;
		header=newnode;
	}
}

void insertatend(int item)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=NULL;
	struct node *ptr;
	ptr=header;
	
	if(header == NULL)
	{
		header=newnode;
	}
	else
	{
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newnode;
	}
}

void insertatany(int pos,int item)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=NULL;
	
	
	
	
	
	
	
void display()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
		
}

int main()
{
	insertatfornt(24);
	insertatfornt(45);
	insertatfornt(78);
	insertatend(24);
	insertatend(1);
	display();
	

	return 0;
}
	
