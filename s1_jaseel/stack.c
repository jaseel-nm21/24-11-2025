#include<stdio.h>
#define max_size 10
int stack[max_size];
int top=-1;

void push(int item)
{
	if(top>=max_size)
	{
		printf("stack is full");
	}
	else
	{
		top++;
		stack[top]=item;	
	}
}
void display()
{
	int i;
	printf("stack elements are :");
	for(i=top;i>-1;i--)
	{
		printf("\n%d",stack[i]);
	}
	printf("\n");
}
void pop()
{
	if(top<=-1)
	{
		printf("stack is emty");
	}
	else
	{
		printf("poped element is %d\n",stack[top-1]);
		top--;
	}
}
int main()
{
	int num;
	int menu=1;
	
	while(menu!=0)
	{
	
		printf("\nenter 1 to push a element to stack");
		printf("\nenter 2 to pop a elemnet from stack");
		printf("\nenter 3 to display stack");
		printf("\nenter 4 to exit\n");
		printf(":");
		scanf("%d",&menu);
	
		switch(menu)
		{
			case 1:
				printf("enter a number to push into stack :");
				scanf("%d",&num);
				push(num);
				break;
			
			case 2:
				pop();
				break;
			
			case 3:
				display();
				break;
			
			case 4:
				menu=0;
				break;

			default:
				printf("enter a valid option\n");
				break;
		}
	}
	
	return 0;
}
	
