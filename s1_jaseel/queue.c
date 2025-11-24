#include<stdio.h>
#define max_size 10
int queue[max_size];
int rear=-1;
int front=-1;

void enqueue(int num)
{
	if(rear>=max_size-1)
	{
		printf("queue is full");
	}
	else
	{
		if(front &&rear == -1)
		{		
			front=0;
		}
		
		rear++;
		queue[rear]=num;
	}
					
}
void dequeue()
{
	if(front==-1)
	{
		printf("queue is empty");
	}
	else
	{
		printf("%d is going to delete",queue[front]);
		if(rear==front)
		{
			rear=front=-1;
		}
		else
		{
			front++;
		}
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d ",queue[i]);
	}
}	
int main()
{
	int choice;
	int num;
	
	do
	{
		printf("\n1.enqueue");
		printf("\n2.dequeue");
		printf("\n3.display");
		printf("\n4.exit \n :");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1: 
				printf("enter a number to insert into queue :\n");
				scanf("%d",&num);
				enqueue(num);
				break;
				
			case 2:
				dequeue();
				break;
				
			case 3:
				display();
				break;
			
			case 4 :
				choice=4;
				break;
				
			default :
				printf("enter a valid option\n");
				break;
				
				}
	}
	while(choice!=4);

	return 0;
}
				
	
