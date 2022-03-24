#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node*link;
};struct node*top=0;
void push()
{
    int x;
    printf("Enter the element to insert:");
    scanf("%d",&x);
    struct node*newnode=(struct node*)malloc(sizeof(struct node()));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void pop()
 {
     struct node*temp=(struct node*)malloc(sizeof(struct node()));
     temp=top;
     if(top==0)
        printf("\nSTACK UNDERFLOW\n");
     else{
        printf("\nDeleted-%d\n",top->data);
        top->data=temp;
        top=top->link;
        free(temp);
     }
 }
void display()
{
    struct node*temp=(struct node*)malloc(sizeof(struct node()));
    temp=top;
    if(top==0)
        printf("\nSTACK UNDERFLOW\n");
    else{
        while(temp!=0)
        {
          printf(" %d ",temp->data);
          temp=temp->link;
        }

    }
}
int main()
{
    int c;
    do{
    printf("\nSelect your choice:");
    printf("\n1-PUSH\n2-POP\n3-DISPLAY\n4-EXIT\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:push();
               break;
        case 2:pop();
               break;
        case 3:display();
               break;
        case 4:exit(0);
    }
    }while(c!=4);
    return 0;
}
