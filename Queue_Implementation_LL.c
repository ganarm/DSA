// Name : Ganesh R Mali (Contact : +91-9021817579)
// Queue Implementation using Linked List
// Make Sure to run the code dq.h file also download along with this 

#include<stdio.h>
#include"dq.h"
void main(void)
{   
     int op=1,x;
     printf("\n***QUEUE IMPLEMENTATION USING LINKED LIST***");
     init();
     while ( op!=6 )
     {     
           printf("\nCHOOSE ONE FROM THE BELOW OPTIONS.");
           printf("\n1 : ENQUEUE.");
           printf("\n2 : DEQUEUE.");
           printf("\n3 : PEEK.");
           printf("\n4 : DISPLAY.");
           printf("\n5 : ISEMPTY.");
           printf("\n6 : EXIT.");
           printf("\nEnter Operation You Want To Perform : ");
           scanf("%d",&op);
           switch (op)
           { 
                  
                  case 1 :  printf("\nENTER DATA : ");
                            scanf("%d",&x);
                            enque(x);
                            break;
                  case 2 : if (isEmpty())
                              printf("\nQUEUE IS EMPTY.");
                           else
                              deque();
                           break;
                  case 3 : if (isEmpty())
                              printf("\nQUEUE IS EMPTY.");
                           else
                              peek();
                           break;
                  case 4 : if (isEmpty())
                              printf("\nQUEUE IS EMPTY.");
                           else
                               display();
                          break;
                  case 5 : if (isEmpty())
                              printf("\nQUEUE IS EMPTY.");
                          else
                             printf("\nQUEUE IS NOT EMPTY.");
                          break;
                  case 6 : exit(0); 
                           break;
                  default : printf("\nERROR.....INVALID OPERATION.\n");
           }
           if (isEmpty())
               printf("\nQUEUE IS Empty.");
           else
              display();
     }
}

 











