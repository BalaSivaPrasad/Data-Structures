// Implementation of Stack with Linked List
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
struct node* top=NULL;
void push()
{
    int data;
    struct node* temp;
    temp=malloc(sizeof(struct node));
    printf("\nEnter Data");
    scanf("%d",&data);
    temp->info=data;
    if(top==NULL)
        top=temp;
    else
        temp->link=top;
        top=temp;
}
void pop()
{
    if(top!=NULL)
    {
        struct node* temp;
        temp=top;
        printf("\n Popped Element:%d",temp->info);
        top=temp->link;
        free(temp);
    }
    else
    {
        printf("\n Stack is Empty");
    }
}

void main() 
{
    int choice=1;
    while(choice!=3)
    {
        if(choice==1)
            push();
        else if(choice==2)
            pop();
        printf("\n1.Push\n2.Pop\n3.Exit");
        printf("Enter Your Choice");
        scanf("%d",&choice);
    }
}
