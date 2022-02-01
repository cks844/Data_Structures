#include<stdio.h>
#define MAX 10
int cq[MAX];
int front=-1;
int rear=-1;
int item;
void enqueue(int item)//TIME COMPLEXITY=O(1)
{
    if((front==0&&rear==MAX-1)||(front==rear+1))
    {
    printf("QUEUE IS OVERFLOW");}
    if(rear==-1){
        front=0;
        rear=0;
    }else{
        if(rear==MAX-1)
        rear=0;
        else
        rear++;
   }
    cq[rear]=item;
    printf("Inserted->%d",item);
}

void dequeue()//TIME COMPLEXITY=O(1)
{
  int a;
  if(front==-1)
    printf("QUEUE IS UNDERFLOW");
  else{
    a=cq[front];
    if(front==rear)
    {
        front=-1;
        rear=-1;}
    else if(front==MAX-1)
        front=0;
    else
        front ++;
        printf("Deleted->%d",a);
    }
}
void display()//TIME COMPLEXITY=O(n)
{
    int i,j;
    if(front==-1&& rear==-1)
    printf("QUEUE IS UNDERFLOW");
    if(front>rear)// if front is somewhere in the middle of queue and rear is at the back of front
    {
        for(i=front;i<MAX;i++)
            printf("%d\t",cq[i]);
        for(j=front;j<=rear;j++)
            printf("%d\t",cq[j]);
    }
    else{
        for(i=front;i<=rear;i++)
            printf("%d\t",cq[i]);
    }
}

int main()
{
    printf("CIRCULAR QUEUE IMPLEMENTATION USING ARRAY\n");
    int ch=0;
  do
   {
     printf("\n1:ENQUEUE\n2:DEQUEUE\n3:DISPLAY\n4:EXIT\n");
     printf("Enter your choice:");
     scanf("%d",&ch);
     switch(ch)
    {
        case 1:
               printf("Enter the element to be inserted:");
               scanf("%d",&item);
               enqueue(item);
               break;
        case 2:dequeue();
               break;
        case 3:display();
               break;
        case 4:break;
    }
   }while(ch!=4);
}
