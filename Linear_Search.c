// Name : Ganesh Rajendra Mali 
// Assignment : 1 (set A)
// Q.1 Linear Search 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 10
int main()
{
  int a[max],n,i,x;
  printf("\nEnter Size Of Array : ");
  scanf("%d",&n);
  for (i=0;i<n;i++)
     a[i]=rand()%100;
  printf("\n%d Random Elements of Array  : ",n);
  for (i=0;i<n;i++)
     printf("\t%d",a[i]);
  printf("\n\nEnter Element To Search In The Given List : ");
  scanf("%d",&x);
  for (i=0;i<n;i++)
  {
     if (a[i]==x)
     {
         printf("\n%d Found At %d position.\n",x,i+1);
         return 1;
     }     
  }
  printf("\n%d Element Not Found.",x);
}

/*
OUTPUT : 
sy4@pc46:~/DS_SEM_III_4/assignment1$ ./a.out

Enter Size Of Array : 5

5 Random Elements of Array  : 	83	86	77	15	93

Enter Element To Search In The Given List : 77

77 Found At 3 position.
 
*/
