#include <stdio.h>
#include<stdlib.h>
#define MAX 3

int queue[MAX];
int rear = - 1;
int front = - 1;

void enQueue()
{
    int item;
    if(rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        if(front== - 1)
            front = 0;
        printf("\nInsert the element in queue : ");
        scanf("%d", &item);
        rear = rear + 1;
        queue[rear] = item;
    }
}

void deQueue()
{
    if(front == - 1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if(front == - 1)
        printf("Queue is empty\n");
    else
    {
        printf("Queue is : \n");
        for(i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main()
{
    int choice;
    while (1)
    {
         printf("\n\n* MENU *\n");
         printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit");
         printf("\nEnter your choice:");
         scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enQueue();
                break;
            case 2:
                deQueue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("Wrong choice\n");
        }
    }
}