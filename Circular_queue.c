#include<stdio.h>
# define MAX 10
int cqueue[MAX];
int front = -1;
int rear = -1;
void insert(int item)
{
    if((front == 0 && rear == MAX-1) || (front == rear+1))
    {
        printf("\nQueue is Full!!\n");
    }
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if(rear == MAX-1)
            rear = 0;
        else
            rear = rear+1;
    }
    cqueue[rear] = item ;
    printf("Inserted -> %d\n", item);
}
void deletion()
{
    if(front == -1)
        printf("\nQueue is Empty!!\n");
    else
    {
        printf("Deleted -> %d\n", cqueue[front]);
        if(front == rear)
        {
            front = -1;
            rear=-1;
        }
        else
        {
            if(front == MAX-1)
                front = 0;
            else
                front = front+1;
        }
    }
}

void display()
{
    int frontPos = front,rearPos = rear;
    if(front == -1)
    {
     printf("\nQueue is Empty!!\n");
    return;
    }
    printf("Queue elements :\n");
    if( frontPos <= rearPos )
    while(frontPos <= rearPos)
    {
    printf("%d ",cqueue[frontPos]);
    frontPos++;
    }
    else
    {
    while(frontPos <= MAX-1)
    {
    printf("%d ",cqueue[frontPos]);
    frontPos++;
    }
    frontPos = 0;
    while(frontPos <= rearPos)
    {
    printf("%d ",cqueue[frontPos]);
    frontPos++;
    }
    }
    printf("\n");
}
int main()
{
    int choice,item;
    printf("CIRCULAR QUEUE IMPLEMENTATION USING ARRAY\n");
    do
    {
        printf("\n1:ENQUEUE\n2:DEQUEUE\n3:DISPLAY\n4:EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                printf("Input the element for insertion in queue : ");
                scanf("%d", &item);
                insert(item);
                break;
            case 2 :
                deletion();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("Wrong choice\n");
        }
    }while(choice!=4);
}
