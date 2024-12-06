// Name : Ganesh R Mali (+91-9021817579)
/*

OPERATIONS ON A BST : 

1 : TOTAL NO. OF LEVELS IN A BST.
2 : TOTAL NO. OF LEVELS IN A BST.
3 : LEVEL ORDER TRAVERSAL AND COUNT NO. ELEMENTS IN A LEVEL.
4 : TRAVERSAL OF A BST.

*/ 
// Make Sure to run this code btree.h also need to downloaded

#include<stdio.h>
#include "btree.h"
int height(struct node *);
void level(struct node *);
int printlevel(struct node * ,int ,int * );
void main()
{   
     int op,h,n;
     struct node *root;
     while (1)
     {     
           x=0;
           printf("\n***OPERATIONS ON A BST***");
           printf("\n1 : CRAETE A BST.");
           printf("\n2 : TOTAL NO. OF LEVELS IN A BST.");
           printf("\n3 : LEVEL ORDER TRAVERSAL AND COUNT NO. ELEMENTS IN A LEVEL.");
           printf("\n4 : TRAVERSAL OF A BST.");
           printf("\n5 : EXIT.");
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
                               h=height(root);
                               printf("\nTOTAL NO. OF LEVELS IN A BST : %d ",h); 
                           }
                           break;
                  case 3 : if (root==NULL)
                              printf("\nBST NOT EXITS.");
                           else
                              level(root);
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
                  case 5 : exit(0);
                           break;
                  default : printf("\nERROR.....INVALID OPERATION.\n");
           }
        
     }
}
int height(struct node * t)
{
    if (t==NULL)
       return 0;
    else
    {
       int rh=height(t->right);
       int lh=height(t->left);
       if ( lh > rh )
          return lh+1;
       else
          return rh+1;
   }              
}
void level (struct node * t)
{
     int h,i,count=0;
     h = height(t);
     printf("\nTOTAL NO OF LEVELS IN A BST : %d ",h);
     for (i=1;i<=h;i++)
     {
         count=0;
         printf("\n ELEMENTS AT LEVEL  %d : ",i);
         printlevel(t,i,&count);
         printf("| count : %d |\n",count);
     
     }

}
int printlevel(struct node * t,int level,int * count)
{
    if (t==NULL)
       return 0;
    if (level == 1)
    { 
       printf("%d ",t->data);
       (*count)++;
    }
    else if (level > 1)
    {
            printlevel(t->left,level-1,count);
            printlevel(t->right,level-1,count);
    }
}

/*
sy4@pc39:~/DC_SEM_IV_4_35/ASS_2$ ./a.out

***OPERATIONS ON A BST***
1 : CRAETE A BST.
2 : TOTAL NO. OF LEVELS IN A BST.
3 : LEVEL ORDER TRAVERSAL AND COUNT NO. ELEMENTS IN A LEVEL.
4 : TRAVERSAL OF A BST.
5 : EXIT.
Enter Operation You Want To Perform : 1

HOW MANY ELEMENTS YOU WANT TO ENTER IN A BST : 4

 ENTER DATA : 11

 ENTER DATA : 22

 ENTER DATA : 33

 ENTER DATA : 44

***OPERATIONS ON A BST***
1 : CRAETE A BST.
2 : TOTAL NO. OF LEVELS IN A BST.
3 : LEVEL ORDER TRAVERSAL AND COUNT NO. ELEMENTS IN A LEVEL.
4 : TRAVERSAL OF A BST.
5 : EXIT.
Enter Operation You Want To Perform : 3

TOTAL NO OF LEVELS IN A BST : 4 
 ELEMENTS AT LEVEL  1 : 11 | count : 1 |

 ELEMENTS AT LEVEL  2 : 22 | count : 1 |

 ELEMENTS AT LEVEL  3 : 33 | count : 1 |

 ELEMENTS AT LEVEL  4 : 44 | count : 1 |

***OPERATIONS ON A BST***
1 : CRAETE A BST.
2 : TOTAL NO. OF LEVELS IN A BST.
3 : LEVEL ORDER TRAVERSAL AND COUNT NO. ELEMENTS IN A LEVEL.
4 : TRAVERSAL OF A BST.
5 : EXIT.
Enter Operation You Want To Perform : 2

TOTAL NO. OF LEVELS IN A BST : 4 
***OPERATIONS ON A BST***
1 : CRAETE A BST.
2 : TOTAL NO. OF LEVELS IN A BST.
3 : LEVEL ORDER TRAVERSAL AND COUNT NO. ELEMENTS IN A LEVEL.
4 : TRAVERSAL OF A BST.
5 : EXIT.
Enter Operation You Want To Perform : 5
*/


















