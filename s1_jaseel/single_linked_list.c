#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};   

struct node *header =NULL;
/*void createnode(int item)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	
	
}*/
void insertAtFront(int item)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	
	if(header == NULL)
	{
		header=newnode;	
	}
	else
	{
		newnode->link=header;
		header=newnode;
	}
}
void insertAtEnd(int item)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	struct node *ptr;
	ptr=header;
	
	if(header == NULL)
	{
		header=newnode;	
	}
	else
	{
		while(ptr->link !=NULL)
		{
			ptr=ptr->link;
			
		}
		ptr->link=newnode;
	}
	
}
void insertAtany(int item)
{

}
void display()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
		
}
void delectAtfront()
{
	if(header==NULL)
	{
		printf("no elemnet in list");
	
	}
	else
	{
		struct node *ptr=header;
		header=header->link;
		free(ptr);
	}
}
void delectAtEnd()
{
	struct node *ptr,*ptr1;
	ptr = header;
	if(header == NULL)
	{
		printf("empty list ");
	}
	else
		


}
void delectAtany()
{


}
int main()
{
	int num,choice;
	do
    {
        printf("\n1. Insert at front\n");
        printf("2. Insert at back\n");
        printf("3. Insert at any\n");
        printf("4. Delect at front\n");
        printf("5. Delect at back\n");
        printf("6. Delect at any\n");
        printf("7. Display"\n);
        printF("8. Exit");
        
     
        switch (choice)
        {
        case 1:
        	printf("enter a element to insert at fornt");
        	scanf("%d",&num);
        	insertAtFront(num);
        	break;       	
        case 2:
        	printf("enter a element to insert at end");
        	scanf("%d",&num);
        	insertAtEnd(num);
        	break;        	
        case 3:
        	printf("enter a element to insert at any");
        	scanf("%d",&num);
        	insertAtany(num);
        	break;

        case 4:
        	delectAtfront();
        	break;
        case 5:
        	delectAtend();
        	break;
        case 6:
        	delectAtany();
        	break;
        case 7:
        	display();
        	break;
        case 8:
        	printf("Exiting...\n");
            break;
        }

        default:
            printf("Enter a valid option\n");
            break;
        }
    } while (choice != 8);
	return 0;
}
