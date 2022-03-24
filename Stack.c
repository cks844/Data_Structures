#include <stdio.h>
#define lim 4
int stack[lim],top=-1,i,ch,e;
void push()
{
    if(top==lim-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter the element to be inserted:");
        scanf("%d",&e);
        top++;
        stack[top]=e;
    }
}

void pop()
{
    if(top==-1)
        {
            printf("Stack underflow\n");
        }
    else
        {
            e=stack[top];
            printf("The deleted item is %d\n",stack[top]);
            top--;
        }
}
void display()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("The elements of the stack are:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
int main()
{
    printf("STACK IMPLEMENTATION USING ARRAY\n");
    top=-1;
    do{
        printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("\nInvalid choice selected\n");
                break;
        }
        }while(ch!=4);
}
