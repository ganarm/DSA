// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Stack Implementation using Array
// This is Stack_Func_Arr.h file

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void push(int);
void pop();
void peek();
int isFull();
int isEmpty();
void init();
void display();
int stack[MAX],top=-1,n,i;
int isFull(void)
{
    //printf("\n top= %d n= %d",top,n);
    if (top==MAX-1)
       return 1;
    return 0;
}

int isEmpty(void)
{
    if (top==-1)
       return 1;
    return 0;
}

void push(int x)
{
     top++;
     stack[top]=x;
}

void pop()
{    
     printf("\nTHE POPED ELEMENT IS :%d",stack[top]);
     top--;
}

void peek()
{
     int y;
     y=stack[top];
     printf("\nTHE TOPMOST ELEMENT IS : %d",y);
}

void init()
{
     top=-1;
}

void display(void)
{    
     printf("\n The Stack is : \n STACK--> :");
     for (i=0;i<=top;i++)
         printf(" %d :", stack[i]);
     printf(" <--TOP");    
  
}

