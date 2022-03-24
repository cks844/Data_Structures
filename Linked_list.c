
#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node*head=NULL;int value;
insert_beg()
{
  struct node *temp = (struct node*)malloc(sizeof(struct node));
  printf("\nEnter the element you want to insert:");
  scanf("%d",&value);
  temp->data=value;
  temp->link=head;
  head=temp;
}
insert_end()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));
            ptr=head;
            if(ptr==NULL){
                printf("List is empty,insert at beginning\n");}
            else{
            printf("\nEnter the element you want to insert:");
            scanf("%d",&value);
            while(ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            ptr->link=temp;
            temp->data=value;
            temp->link=NULL;}

}
insert_pos()
{
    int key;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the element you want to insert:");
    scanf("%d",&value);
    printf("Enter the value of node after which the insertion need to be done\n");
    scanf("%d",&key);
    ptr=head;
    while((ptr->data!=key)&&(ptr->link!=NULL))
      {
        ptr=ptr->link;
      }
     if(ptr->link==NULL)
     {
         printf("Search fails\n");
     }
    else
      {
        temp->link=ptr->link;
        ptr->link=temp;
        temp->data=value;
      }

}
delete_beg()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    temp=head;
    head=head->link; //head is a part of first node.So getting the link of first node.
    free(temp);//'free'will delete the memory location
}
delete_end()
{   //here we need two pointers;one(temp) for deletion and other(ptr) for accessing previous node
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp=head;
        while(temp->link!=NULL)
        {
            ptr=temp;//for accessing the previous node(when loop terminates,we get previous node)
            temp=temp->link;

        }
        if(temp==head)
        {
            head=NULL;
        }
        else
        {
        ptr->link=NULL;
        }
        free(temp);

    }
}
delete_pos()
{
    int key;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value of node after which the deletion need to be done\n");
    scanf("%d",&key);
    ptr=head;
    if(head== NULL)
        {
           printf("List is empty\n");

        }
    while(ptr!=NULL)
     {
        temp=ptr; //while traversing,here we get node at location-1
        ptr=ptr->link;//here we get node at location
        if(temp->data==key)
            {
             temp->link=ptr->link;
             free(ptr);
             break;
            }
    }
}
void insertion()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    int s=1;
    if(ptr == NULL)
    {
       printf("List is full\n");
    }
    else
    {
         printf("Where you want to insert the elements\n1:front\n2:at the end\n3:between two nodes\n");
         scanf("%d",&s);
        switch(s)
         {

          case 1:
            insert_beg();
            break;
          case 2:
            insert_end();
            break;
          case 3:
            insert_pos();
            break;
          default:printf("Invalid input\n");
        }
    }
}
void delete()
{
    int key,s=1;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(head== NULL)
    {
      printf("List is empty\n");
    }
    else
    {
        printf("Deletion operation from:\n1:front\n2:at the end\n3:between two nodes\n");
        scanf("%d",&s);
        switch(s)
        {
          case 1:
            delete_beg();
            break;
          case 2:
            delete_end();
            break;
          case 3:
            delete_pos();
             break;
          default:printf("Invalid input\n");
        }
        }
}
void  display()
{
    struct node *ptr= (struct node*)malloc(sizeof(struct node));
    ptr=head;
    if(head!=NULL)
    {
     printf("List elements\n");
     while(ptr!=NULL)
       {
        if(ptr->link==NULL)
        {
          printf("%d",ptr->data);
          break;
        }
        printf("%d>>",ptr->data);
        ptr=ptr->link;
       }
     printf("\n");
    }
   else
        printf("List is empty\n");
}
int main()
{
  int s=0;
  while(1)
   {
     printf("1:insertion\n2:deletion\n3:display\n4:exit\n");
     scanf("%d",&s);
     switch(s)
      {
        case 1:insertion();
               break;
        case 2:delete();
               break;
        case 3:display();
               break;
        case 4:exit(0);
      }
    }

   return 0;
}
