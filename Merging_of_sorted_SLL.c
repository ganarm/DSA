// Name : Ganesh Rajendra Mali (+91-9021817579)
// Merging two linked lists and ensuring they are sorted in ascending order
// Merging of 2 Sorted Linked Lists to get Single Sorted Linked List

#include<stdio.h>
#include<stdlib.h>
struct node 
{  
      int data;
      struct node *next;
}*temp,*t;
struct node* create(struct node *,int);
void display(struct node *);
struct node *merge (struct node *,struct node *);
void main(void)
{
     int n;
     struct node *l1=NULL,*l2=NULL,*l=NULL;
     printf("\nHOW MANY NODES YOU WANT TO ENTER IN FIRST LIST : ");
     scanf("%d",&n);
     if (n<1)
        printf("\nLINKED LIST MUST HAVE ATLEAST ONE NODE.");
     else
        l1=create(l1,n);
     printf("\nFIRST LIST GIVEN BELOW : ");
     display(l1);
     printf("\nHOW MANY NODES YOU WANT TO ENTER IN SECOND LIST : ");
     scanf("%d",&n);
     if (n<1)
        printf("\nLINKED LIST MUST HAVE ATLEAST ONE NODE.");
     else
        l2=create(l2,n);
     printf("\nSECOND LIST GIVEN BELOW : ");
     display(l2);
     printf("\nMERGED LIST IS : ");
     l=merge(l1,l2);
     display(l);
}  
struct node* create(struct node * head,int n)
{     
      struct node*newnode;
      int i;
      printf("\nENTER ODERED DATA FOR FIRST LIST");
      
      for (i=1;i<=n;i++) 
      {    
           newnode=malloc(sizeof(struct node));
           printf("\nENTER DATA FOR NODE %d : ",i);
           scanf("%d",&newnode->data);
           if (head !=NULL && newnode->data < temp-> data)
           {  
              printf("\nERROR.....DATA MUST BE IN ASCENDING ORDER");
              i--;
              continue;
           }
           if (i==1)
              head=temp=newnode;
           else
           {
              temp->next=newnode;
              temp=temp->next;
           }
           
       }
       newnode->next=NULL;
       return head;
}

 
void display(struct node *head)
{    
     if (head==NULL)
        printf("\nLinked List IS Empty.");
     else
     {
        temp=head;
        printf("\nHEAD-->");
        while (temp!= NULL)
        {
              printf("%d-->",temp->data);
              temp=temp->next;
        }
        printf("NULL");
     }
} 

struct node *merge (struct node *l1,struct node *l2)
{      
       struct node *l;
       for (l=NULL;l1!=NULL && l2!=NULL;)
       {   
           temp=malloc(sizeof(struct node));
           if (l1->data > l2->data)
           { 
              temp->data=l2->data;
              l2=l2->next;
           }
           else
              if (l1->data < l2->data)             
              {
                 temp->data=l1->data;
                 l1=l1->next;
              }
              else
              {
                 temp->data=l1->data;
                 l1=l1->next;
                 if (l==NULL)
                     l=t=temp;
                 else
                 {
                    t->next=temp;
                    t=t->next;
                 }
                 temp->next=malloc(sizeof(struct node));
                 temp=temp->next;
                 temp->data=l2->data;
                 l2=l2->next;
             }
             if (l==NULL)
                l=t=temp;
             else
             {
               t->next=temp;
                 t=t->next;
              }
       }
       if (l1!=NULL)
          t->next=l1;
       else
          t->next=l2;
       return(l);
 }




















