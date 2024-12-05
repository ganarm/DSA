// Name: Ganesh R Mali 
// Assignment : 1 (set A)
// Q.3 Binary Search 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 10
int main()
{   int binarysearch(int[],int,int);
    int a[max],n,i=0,x,result;
    printf("\n Enter Size Of Array : ");
    scanf("%d",&n);
    printf("\n Enter %d Elements of Array In Ascendin Order : ",n);
    for (i=0;i<n;i++)
    {   scanf("%d",&a[i]);
        if (i>0 && a[i-1]>a[i])
        {   printf("\n ELements Should Enter in Ascending order.");
            return 1;
        }
 
    }
    printf("\n Enter Element To Search In The Given List : ");
    scanf("%d",&x);
    result=binarysearch(a,n,x);
    if (result==-1)
        printf("\n %d Not Found in Array.",x);
    else
        printf("\n %d Found At %d Position in Array.",x,result+1);
}
  
int binarysearch(int a[],int n,int x)
{   int mid,l=0,h=n-1;
    while ( l<=h )
    {     mid=(l+h)/2;
          if (a[mid]==x)
             return mid;
          if (a[mid]>x)
             h=mid-1;
          else 
              l=mid+1;
    }    
   return -1; 
}   
                
    
    
    
/*OUTPUT : 
Enter Size Of Array : 5

 Enter 5  Integers : 8 9 7 6 5

 Enter Element To Search In The Given List : 7

 7 Found At 3 position.

*/
    
