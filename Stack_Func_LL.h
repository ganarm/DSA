// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Stack Implementation using Linked List
// This is Stack_Func_LL.h file
#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void peek();
int isEmpty();
void init();
void display();
struct node
{
       int data;
       struct node *next;
}*top=NULL;
void init()
{
     top=NULL;
}

int isEmpty(void)
{
    if (top==NULL)
       return 1;
    return 0;
}

void push(int x)
{
     struct node *temp;
     temp=malloc(sizeof(struct node));
     temp->data=x;
     temp->next=top;
     top=temp;
}

void pop()
{    
     struct node *temp;
     printf("\nTHE POPED ELEMENT IS :%d",top->data);
     temp=top;
     top=top->next;
   //free(temp);
}

void peek()
{
     struct node *temp=top;
     printf("\n THE TOP ELEMENT IS %d.",top->data);
}


void display(void)
{    
     struct node *temp;
     printf("\n The Stack is : \n TOP--> :");
     for (temp=top;temp!=NULL;temp=temp->next)
         printf(" %d :",temp->data);
}

