// Name : Ganesh Rajendra Mali (Contact : +91-9021817579)
// Assignment 2 (set A)
//Q. 2 Insertion Sort 
#include<stdio.h>
#define max 10
int main()
{
    void ins_sort(int[],int);
    int a[max],n,i;
    printf("\nEnter Size Of Array : ");
    scanf("%d",&n);
    printf("\nEnter %d integers : ",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    ins_sort(a,n);
    printf("\nArray in Ascending Order : ");
    for (i=0;i<n;i++)
        printf("\t%d",a[i]);
    printf("\n");    
}
void ins_sort(int a[max],int n)
{    int i,j,temp;
     for (i=1;i<n;i++)
     {   temp=a[i];
         for (j=i-1;j>=0 && a[j]>temp;j--)
              a[j+1]=a[j];
         a[j+1]=temp;
     }
}
/* OUTPUT :     
     Enter Size Of Array : 5

Enter 5 integers : 99 55 88 77 66

Array in Ascending Order : 	55	66	77	88	99
*/

