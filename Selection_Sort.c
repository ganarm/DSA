// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Assignment : 2 (set A)
// Q.3 Selection Sort 
#include<stdio.h>
#define max 10
int main()
{ 
    void sel_sort(int[],int);
    int a[max],n,i;
    printf("\nEnter Size Of Array : ");
    scanf("%d",&n);
    printf("\nEnter %d integers : ",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    sel_sort(a,n);
    printf("\nArray in Ascending Order : ");
    for (i=0;i<n;i++)
        printf("\t%d",a[i]);
    printf("\n");    
}
void sel_sort(int a[max],int n)
{    int i,j,min,temp;
     for (i=0;i<n;i++)
     {   min=i;
         for (j=i+1;j<n;j++)
             if (a[min]>a[j])
                min=j;
         if (min!=i)
         {   temp=a[min];
             a[min]=a[i];
             a[i]=temp; 
         }
     }         
              
}
 /* OUTPUT :    
 Enter Size Of Array : 5

Enter 5 integers : 7 5 9 10 11

Array in Ascending Order : 	5	7	9	10	11

*/
     

