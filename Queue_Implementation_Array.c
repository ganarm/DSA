// Name : Ganesh R Mali (Contact : +91-9021817579)
// Queue Implementation using array
// Make Sure to run the code sq.h file also download along with this 
#include<stdio.h>
#include<stdlib.h>
#include "sq.h"
#define MAX 5
void main()
{   
     int op=1,x;
     printf("\n***QUEUE IMPLEMENTATION USING ARRAY***");
     init();
     while ( op!=7 )
     {     
           printf("\nCHOOSE ONE FROM THE BELOW OPTIONS.");
           printf("\n1 : ENQUEUE.");
           printf("\n2 : DEQUEUE.");
           printf("\n3 : PEEK.");
           printf("\n4 : DISPLAY.");
           printf("\n5 : ISEMPTY.");
           printf("\n6 : ISFULL.");
           printf("\n7 : EXIT.");
           printf("\nEnter Operation You Want To Perform : ");
           scanf("%d",&op);
           switch (op)
           { 
                 
                  case 1 : if (isFull())
                              printf("\nQUEUE IS FULL.");
                           else
                           {
                              printf("\nENTER DATA : ");
                              scanf("%d",&x);
                              enque(x);
                           }
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
                  case 6 : if (isFull())
                              printf("\nQUEUE IS FULL.");
                          else
                              printf("\nQUEUE IS NOT FULL.");
                          break;
                  case 7 : exit(0); 
                           break;
                  default : printf("\nERROR.....INVALID OPERATION.\n");
           }
           if (isEmpty())
               printf("\nQUEUE  IS Empty.");
           else
              display();
     }
}


 
























































