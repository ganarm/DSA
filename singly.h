// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Singly Linked List Operations 
// This file contain all functions that are used in Singly_Linked_List.c file 
// This is program with .h file

#include<stdio.h>
#include<stdlib.h>
struct node 
 {  
        int data;
        struct node *next;
 }*head=NULL,*temp,*newnode,*prenode,*nextnode,*t1,*t2;
 void create();
 void display();
 void insert(int);
 void dltp(int);
 void dltv(int);
 void search(int);
 void reverse();
 int n,pos,val;
 void create()
 {
     int i;
     if ( head!=NULL )
        printf("\nSLL is Already Created.");
     else
     {   
        printf("\nHow Many Nodes You Want to Enter : ");
        scanf("%d",&n);
        if (n<1)
           printf("\nLINKED LIST MUST HAVE ATLEAST ONE NODE.");
        else
        {
           newnode=malloc(sizeof(struct node));
           printf("\nEnter Integer Data For NODE 1 : ");
           scanf("%d",&newnode->data);
           newnode->next=NULL;
           head=newnode;
           temp=head;
           for (i=2;i<=n;i++) 
           {   
                newnode=malloc(sizeof(struct node));
                printf("\nEnter Integer Data for NODE %d : ",i);
                scanf("%d",&newnode->data);
                temp->next=newnode;
                newnode->next=NULL;
                temp=temp->next;
           }
        }
    }
}
 
void display()
{    if ( head==NULL)
              printf("\nSLL Is Empty.\n");
     else
     {
        printf("\nSLL is Given Below : ");
        temp=head;
        printf("\nhead-->");
        while ( temp!= NULL )
        {
             printf("%d-->",temp->data);
             temp=temp->next;
        }
     printf("NULL");
     printf("\nNO. OF NODES IN SLL : %d",n);
    }
}

void insert(int p)
{  
     int i;
     newnode=malloc(sizeof(struct node));
     printf("\nEnter Integer Data : ");
     scanf("%d",&newnode->data);
     if (p==1)
     {  
        newnode->next=head;
        head=newnode;        
     }
     else
     { 
           temp=head;
           for (i=1;i<pos-1;i++,temp=temp->next);
           newnode->next=temp->next;
           temp->next=newnode;
           
     }
     n++;
}


void dltp(int p)
{
     int i;
     if (p==1)
     {  
        temp=head;
        head=head->next;
     }
     else
     {
        for (i=1,temp=head;i<pos-1;i++,temp=temp->next);
        nextnode=temp->next;
        temp->next=nextnode->next;
     }
   
     n--;
}

void dltv(int val)
{    
     prenode=NULL;
     temp=head;
     while ( temp!= NULL )
     {
           if (temp->data==val)
           {  
              if (temp==head)
                 head=temp->next;
              else 
                 prenode->next=temp->next;
              return;
           }
           prenode=temp;
           temp=temp->next;
      }
      printf("\nError.....%d is NOT Present In Given SLL.",val); 
      n--;
}

void search(int val)
{    int i;
     for (i=1,temp=head;temp!=NULL;temp=temp->next,i++)
         if (temp->data==val)
         {    
            printf("\n%d present at %d position.",val,i);
            return;
         }
    printf("\n%d NOT present in Given List.",val);
}
void reverse()
{    
     
     temp=head;
     t1=temp->next;
     t2=t1->next;
     while ( t1->next!=NULL)
     {
           t1->next=temp;
           temp=t1;
           t1=t2;
           t2=t2->next;
     }
     t1->next=temp;
     head->next=NULL;
     head=t1;
}
