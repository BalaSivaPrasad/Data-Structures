# include <stdio.h> # include <alloc.h> # include <conio.h> # include <stdlib.h>

typedef struct bst
{
 


}node;
 
int data;
struct bst *left,*right;
 

void insert(node *,node *); void inorder(node *);
node *search(node *,int,node **); void del(node *,int);

void main()
{
int choice; char ans='N';
 
int key;
node *newnode,*root,*temp,*parent; node *getnode();
root=NULL; clrscr();
do
{
printf("\n\t Program for Binary Search Tree"); printf("\n\t 1.Create");
printf("\n\t 2.Search"); printf("\n\t 3.Delete"); printf("\n\t 4.Display"); printf("\n\t 5.Exit");
printf("\n\t Enter your Choice:"); scanf("%d",&choice); switch(choice)
{
 
case 1:
do
{
 


newnode=getnode(); printf("\n\tEnter the element:"); scanf("%d",&newnode->data); if(root==NULL) root=newnode;
else insert(root,newnode);
printf("\n\tDo u want to enter more elements?(y/n): "); ans=getche();
 


case 2:




case 3:



case 4:
 
}while(ans=='y' || ans=='Y'); break;

printf("\n\tEnter the element to be searched:"); scanf("%d",&key); temp=search(root,key,&parent);
printf("\n\tParent of node %d is %d",temp->data,parent-
>data); break;

printf("\n\tEnter the element to be deleted:"); scanf("%d",&key);
del(root,key); break;

if(root==NULL)
printf("\n\t Tree is not created.");
 
else
{
 




}
}while(choice!=5);
}
 


}
break;
 
printf("\n The Tree is:"); inorder(root);
 
node *getnode( )
{
node *temp;
temp=(node *)malloc(sizeof(node)); temp->left=NULL;
temp->right=NULL; return temp;
}
void insert(node *root, node *newnode)
{
if(newnode->data > root->data)
{
if(root->right==NULL)
{
 

}
else

}
 
root->right=newnode;


insert(root->right,newnode);;
 
if(newnode->data < root->data)
{
if(root->left==NULL)
{
 

}
else

}
}
 
root->left=newnode; insert(root->left,newnode);
 
void inorder(node *temp)
{
if(temp!=NULL)
{
inorder(temp->left); printf(" %d",temp->data); inorder(temp->right);
}
}
node *search(node *root,int key,node **parent)
{
 
node *temp; temp=root; while(temp!=NULL)
{
if(temp->data==key)
{
printf("\n\tThe %d element is present",temp->data); return(temp);
}
*parent=temp; if(temp->data > key)
temp=temp->left; else
temp=temp->right;
}
return NULL;
}
void del(node *root, int key)
{
node *temp,*parent,*tempsucc; temp=search(root,key,&parent);
if(temp->left!=NULL&&temp->right!=NULL)
{
parent=temp; tempsucc=temp->right;
while(tempsucc->left!=NULL)
{
parent=tempsucc; tempsucc=tempsucc->left;
}
temp->data=tempsucc->data; parent->right=NULL; printf("Now Deleted it!"); return;
}
if(temp->left!=NULL&&temp->right!=NULL)
{
if(parent->left==temp)
parent->left=temp->left;
 
else




}
 

parent->right=temp->left; temp=NULL;
free(temp);
printf("Now deleted it!"); return;
 
if(temp->left!=NULL&&temp->right!=NULL)
 
{
if(parent->left==temp)
parent->left=temp->right;
else
parent->right=temp->right;
temp=NULL; free(temp);
printf("Now deleted it!"); return;
}
if(temp->left!=NULL&&temp->right!=NULL)
{
if(parent->left==temp)
parent->left=NULL;
 
else


}
}
