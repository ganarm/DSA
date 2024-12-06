// Name : Ganesh R Mali (Contact : +91-9021817579)
// Queue Implementation using array
// This is sq.h file
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void enque(int);
void deque();
void peek();
int isFull();
int isEmpty();
void init();
void display();
int que[MAX],front=-1,rear=-1,n,i;
int isFull(void)
{
    if (rear==MAX-1)
       return 1;
    return 0;
}

int isEmpty(void)
{
    if (front==rear)
       return 1;
    return 0;
}

void enque(int x)
{    
    
     que[++rear]=x;
}

void deque()
{    
      printf("\nDELETED ELEMENT IS %d",que[++front]);
}

void peek()
{
     int y;
     y=que[front+1];
     printf("\nTHE FRONT ELEMENT IS : %d",y);
}

void init()
{
     front=rear=-1;
}

void display(void)
{    
     printf("\n The QUEUE IS : \n FRONT--> :");
     for (i=front+1;i<=rear;i++)
         printf(" %d :", que[i]);
     printf(" <--REAR");    
}

