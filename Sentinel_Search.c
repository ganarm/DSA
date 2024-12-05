// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Assignment : 1 (set A)
// Q.2 Sentinel Search
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 10
int main()
{
    int a[max],n,i=0,x,temp;
    printf("\n Enter Size Of Array : ");
    scanf("%d",&n);
    printf("\n Enter %d  Integers : ",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n Enter Element To Search In The Given List : ");
    scanf("%d",&x);
    temp=a[n-1];
    a[n-1]=x;
    i=0;
    while (a[i]!=x)
          i++;
  a[n-1]=temp;
  if (a[i]==x)
      printf("\n %d Found At %d position.",x,i+1);
      
  else
      printf("\n %d Not Found In Array ",x);
}



 /* 
 
 OUTPUT :
  
 Enter Size Of Array : 5

 Enter 5  Integers : 8 9 7 6 5

 Enter Element To Search In The Given List : 7

 7 Found At 3 position.

*/

 
 
 
 
 
 
