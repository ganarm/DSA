// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Application of Linked List (Addition of Two Polynomials)

#include<stdio.h>
#include<stdlib.h>
struct node 
{  
       int coe;
       int exp;
       struct node *next;
}*temp,*t,*p1,*p2;
struct node* create();
void display(struct node *);
struct node *add(struct node *,struct node *);
void main(void)
{    
     int n;
     struct node *p1=NULL,*p2=NULL,*p=NULL;
     printf("\nFOR FIRST POLYNOMIAL: ");
     printf("\nENTER THE FIRST POLYNOMIAL : ");
     p1=create();
     printf("\nFIRST POLYNOMIAL : ");
     display(p1);
     printf("\nFOR SECOND POLYNOMIAL: ");
     printf("\nENTER THE SECOND POLYNOMIAL : ");
     p2=create();
     printf("\nFIRST POLYNOMIAL : ");
     display(p2);
     printf("\nADDITION OF BOTH POLYNOMIAL :");
     p=add(p1,p2);
     display(p);
}  
struct node* create()
{     
      int i,n,cc=1,coe1,exp1;
      struct node*p;
      for (p=NULL,i=1;cc!=0;i++) 
      {    
           temp=malloc(sizeof(struct node));
           printf("\nENTER COEFIENT AND EXPONENT IN DECENDING ORDER <ENTER 0 0 TO EXIT> %d : ",i);
           scanf("%d%d",&coe1,&exp1);
           if (coe1==0 && exp1==0) 
              return(p);
           if (p!=NULL)
              if (t->exp < exp1)
              { 
                 printf("\n Invalid ORDER \n PLEASE ENTER TERM IN ASCENDING ORDER");
                 i--;
                 continue;
              }
              temp->exp=exp1;
              temp->coe=coe1;
              if (i==1)
                  p=t=temp;
              else
              {
                 t->next=temp;
                 t=t->next;
              }
       }
       t->next=NULL;
       return p;
}

 
void display(struct node *t)
{    
     if (t==NULL)
        printf("\nPolynomial IS Empty.");
     else
     {  
        for (;t->next!= NULL;t=t->next)
            printf("%dX^%d + ",t->coe,t->exp);
        printf("%dX^%d = 0",t->coe,t->exp);    
     }
}
struct node *add(struct node *p1,struct node *p2)
{      
       struct node *p=NULL;
       for (;p1!=NULL && p2!=NULL;)
       {   
           temp=malloc(sizeof(struct node));
           if (p1->exp == p2->exp)
           { 
              temp->exp = p1->exp;
              temp->coe = p1->coe + p2->coe;
              p1=p1->next;
              p2=p2->next;
              
           }
           else
             if (p1->exp < p2->exp)             
             {
                temp->exp=p2->exp;
                temp->coe=p2->coe;
                p2=p2->next;
             }
             else
             {
                temp->exp=p1->exp;
                temp->coe=p1->coe;
                p1=p1->next;
             }
           if (p==NULL)
              p=t=temp;
           else
           {
              t->next=temp;
              t=t->next;
             }
       }
       if (p1!=NULL)
          t->next=p1;
       else
          t->next=p2;
       return(p);
}

















