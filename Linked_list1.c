#include<stdio.h>
struct node//creating a node
{
 int data;
 struct node*next;//'next'stores address of next element
 };struct node*head=NULL;
  struct node*middle=NULL;
  struct node*last=NULL;
void printList(struct node* head)
{
    struct node*temp=head;//Assigning the node 'head' to temp
    while(temp!=NULL){
        printf("%d--->",temp->data);
        temp=temp->next;}
}

int main()
{

  head=(struct node*)malloc(sizeof(struct node));//allocating memory for the node
  middle=(struct node*)malloc(sizeof(struct node));
  last=(struct node*)malloc(sizeof(struct node));
  head->data=10;
  head->next=middle;
  middle->data=20;
  middle->next=last;
  last->data=30;
  last->next=NULL;
  printList(head);
  return 0;
}


