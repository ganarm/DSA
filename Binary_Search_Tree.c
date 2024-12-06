// Name : Ganesh R Mali (Contact : +91-9021817579)
// Operations on Binary Search Tree : Create, Search, Insert, Traversal, Count, Delete
// Make Sure to run this code btree.h also need to download
#include<stdio.h>
#include "btree.h"
void main()
{   
     int op,n,r;
     struct node *root;
     while (1)
     {     
           x=0;
           printf("\n***OPERATIONS ON A BST***");
           printf("\n1 : CRAETE A BST.");
           printf("\n2 : SEARCH A ELEMENT IN A BST.");
           printf("\n3 : INSERT A ELEMENT IN A BST.");
           printf("\n4 : TRAVERSAL OF A BST.");
           printf("\n5 : TOTAL NO. OF NODES IN A BST.");
           printf("\n6 : TOTAL NO. OF LEAF NODES IN A BST.");
           printf("\n7 : DELETE A  NODE.");
           printf("\n8 : EXIT.");
           printf("\nEnter Operation You Want To Perform : ");
           scanf("%d",&op);
           switch (op)
           { 
                 
                  case 1 : if (root!=NULL)
                              printf("\nBST ALREADY EXITS.");
                           else
                           {
                              printf("\nHOW MANY ELEMENTS YOU WANT TO ENTER IN A BST : ");
                              scanf("%d",&n);
                              root=create(root,n);
                           }
                           break;
                  case 2 : if (root==NULL)
                              printf("\nBST NOT EXITS.");
                           else
                           {
                              printf("\nENTER A ELEMENT YOU WANT TO SEARCH IN A BST : ");
                              scanf("%d",&n);
                              r=search(root,n);
                              if (r==1)
                                 printf("%d PRESENET IN A BST.",n);
                              else
                                 printf("%d NOT PRESENET IN A BST.",n); 
                           }
                           break;
                  case 3 : printf("\nINSERT A ELEMENT IN A BST");
                           root=create(root,1);
                           break;
                  case 4 : if (root==NULL)
                              printf("\nBST NOT EXITS.");
                           else
                           {
                              printf("\nINORDER OF A BST : ");
                              inorder(root);
                              printf("\nPREORDER OF A BST : ");
                              preorder(root);
                              printf("\nPOSTORDER OF A BST : ");
                              postorder(root);
                           }
                           break;
                  case 5 : if (root==NULL)
                              printf("\nBST NOT EXITS.");
                           else
                           {
                              r=countnode(root);
                              printf("\nTOTAL NO. OF NODES IN A BST : %d",r);
                           }
                           break;
                  case 6 : if (root==NULL)
                              printf("\nBST NOT EXITS.");
                           else
                           {
                              r=countleaf(root);
                              printf("\nTOTAL NO. OF LEAF NODES IN A BST : %d",r);
                           }
                           break;
                  case 7 : if (root==NULL)
                              printf("\nBST NOT EXITS.");
                           else
                           {
                              printf("\nENTER A ELEMENT YOU WANT TO DELETE IN A BST : ");
                              scanf("%d",&n);
                              r=search(root,n);
                              if(r==0)
                                 printf("%d NOT PRESENT IN A BST.");
                              else
                                root=dlt(root,n);
                            }
                            break;
                  case 8 : exit(0);
                           break;                          
                  default : printf("\nERROR.....INVALID OPERATION.\n");
           }
        
     }
}
/*
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
}*/













