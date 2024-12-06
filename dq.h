// Name : Ganesh R Mali (Contact : +91-9021817579)
// Queue Implementation using Linked List
// This is dq.h file 

#include<stdio.h>
#include<stdlib.h>
void enque(int);
void deque();
void peek();
int isEmpty();
void init();
void display();
struct node
{
       int data;
       struct node *next;
}*rear=NULL,*front=NULL;
void init()
{
     rear=front=NULL;
}

int isEmpty(void)
{
    if (front==NULL && rear==NULL)
       return 1;
    return 0;
}

void enque(int x)
{    
     struct node *newnode;
     newnode=malloc(sizeof(struct node));
     newnode->data=x;
     newnode->next=NULL;
     if (isEmpty())
        front=rear=newnode;
     else
     {
        rear->next=newnode;
        rear=newnode;
     }
}

void deque()
{
     struct node *temp=front;
     
   
   
     printf("\n THE DEQUEUED ELEMENT IS %d.",front->data);
     if (front==rear)
        front=rear=NULL;
     else    
        front=front->next;
     //free(temp)
     
}
void peek()
{
     printf("\n THE FRONT ELEMENT IS %d.",front->data);
}

void display(void)
{    
     struct node *temp;
     printf("\n The Queue is : \n FRONT--> :");
     for (temp=front;temp!=NULL;temp=temp->next)
         printf(" %d :",temp->data);
     printf("<--REAR");
}

