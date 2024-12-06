// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Stack Implementation using Linked List (LL)
// Make Sure to run this code Stack_Func_LL.h also need to download along with this

#include<stdio.h>
#include"func1.h"
void main(void)
{   
     int op=1,x;
     printf("\n***STACK IMPLEMENTATION USING LINKED LIST***");
     init();
     while ( op!=6 )
     {     
           printf("\nCHOOSE ONE FROM THE BELOW OPTIONS.");
           printf("\n1 : PUSH.");
           printf("\n2 : POP.");
           printf("\n3 : PEEK.");
           printf("\n4 : ISEMPTY.");
           printf("\n5 : STACK DISPLAY");
           printf("\n6 : EXIT.");
           printf("\nEnter Operation You Want To Perform : ");
           scanf("%d",&op);
           switch (op)
           { 
                  
                  case 1 :  printf("\nENTER DATA : ");
                            scanf("%d",&x);
                            push(x);
                            break;
                  case 2 : if (isEmpty())
                              printf("\nSTACK IS EMPTY.");
                           else
                              pop();
                           break;
                  case 3 : if (isEmpty())
                              printf("\nSTACK IS EMPTY.");
                           else
                              peek();
                           break;
                  case 4 : if (isEmpty())
                              printf("\nSTACK IS EMPTY.");
                           else
                               printf("\nSTACK IS NOT EMPTY.");
                          break;
                  case 5 : if (isEmpty())
                              printf("\nSTACK IS EMPTY.");
                          else
                              display();
                          break;
                  case 6 : exit(0); 
                           break;
                  default : printf("\nERROR.....INVALID OPERATION.\n");
           }
           if (isEmpty())
               printf("\nSTACK IS Empty.");
           else
              display();
     }
}

 











