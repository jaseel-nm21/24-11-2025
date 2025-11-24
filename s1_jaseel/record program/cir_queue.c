#include <stdio.h>
#define max_size 5

int queue[max_size];
int rear = -1;
int front = -1;

void enqueue(int num)
{
    if ((rear + 1) % max_size == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % max_size;
        }
        queue[rear] = num;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("%d is going to delete\n", queue[front]);

        if (rear == front)
        {
            rear = front = -1; // Only one element was there
        }
        else
        {
            front = (front + 1) % max_size;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    int i = front;
    printf("Queue elements: ");
    while (1)
    {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % max_size;
    }
    printf("\n");
}

int main()
{
    int choice, num;

    do
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number to insert into queue: ");
            scanf("%d", &num);
            enqueue(num);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Enter a valid option\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
		

