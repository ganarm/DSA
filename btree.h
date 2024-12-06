#include<stdio.h>
#include<stdlib.h>
struct node
{
       int data;
       struct node *left,*right;
};
int x;
struct node * create(struct node *,int);
int search(struct node*,int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
int countnode(struct node*);
int countleaf(struct node*);
struct node * dlt(struct node*,int);
struct node* succ (struct node *);
struct node * create(struct node *t,int n)
{
              struct node *temp,*t1,*nw;
              int i;
              for (i=1;i<=n;i++)
              { 
                  nw=malloc(sizeof(struct node));
                  nw->left=nw->right=NULL;
                  printf("\n ENTER DATA : ");
                  scanf("%d",&nw->data);
                  if (t==NULL)
                      t=nw;
                  else
                  {
                     temp=t;
                     while(temp!=NULL)
                     {
                          t1=temp;
                          if(temp->data > nw->data)
                            temp=temp->left;
                          else
                            temp=temp->right;
                     }
                     if(t1->data > nw->data)
                       t1->left=nw;
                     else
                       t1->right=nw;
                  }
                
              }
              return t;
}
int search(struct node *t,int n)
{
    while(t)
    {
         if(t->data==n)
           return 1;
         else if (t->data > n)
                 t=t->left;
         else
           t=t->right;
    }
    return 0;
}
void inorder(struct node*t)
{
     if(t==NULL)
       return;
     inorder(t->left);
     printf(" %d ",t->data);
     inorder(t->right);
}    
void preorder(struct node* t)
{
     if(t==NULL)
       return;
     printf(" %d ",t->data);
     preorder(t->left);
     preorder(t->right);
}
void postorder(struct node*t)
{
     if(t==NULL)
       return;
     postorder(t->left);
     postorder(t->right);
     printf(" %d ",t->data);
}
int countnode(struct node* t)
{
    if (t!=NULL)
      return (1+countnode(t->left)+countnode(t->right));
}
int countleaf(struct node* t)
{
     
     if (t!=NULL) 
     {
        if(t->left==NULL && t->right==NULL)
          x++;
        countleaf(t->left);
        countleaf(t->right);
     }
     return x;
}
struct node * dlt(struct node * t,int key)
{
              struct node * temp;
              if (key < t->data)
                t->left=dlt(t->left,key);
              else if (key > t->data)
                   t->right=dlt(t->right,key);
              else 
              {
                 if (t->left==NULL)
                 {
                    temp=t->right;
                    free(t);
                    return temp;
                 }
                 else if (t->right==NULL)
                 {
                        temp=t->left;
                        free(t);
                        return temp;
                 }
                 struct node * t1=succ(t->right);
                 t->data=t1->data;
                 t->right=dlt(t->right,t1->data);
                                        
             }
             return t;
}   
struct node* succ (struct node *t)
{
             struct node * current=t;
             while (current && current->left!=NULL)
                   current=current->left;
             return current;
}
            


















