// Name : Ganesh R Mali (+91-9021817579)
// Heap Sort using Heapify Method
#include<stdio.h>
#include<stdlib.h>
#define max 10
void heapify(int[],int,int);
void heapsort(int[],int);
int main()
{ 
    int a[max],n,i,temp;
    printf("\nEnter Size Of Array : ");
    scanf("%d",&n);
    printf("\nENTER %d Elements of Array  : ",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        printf("\t%d",a[i]);
    heapsort(a,n);
    printf("\nArray in Ascending Order : ");
    for (i=0;i<n;i++)
        printf("\t%d",a[i]);
    printf("\n");    
}
void heapsort(int a[],int n)
{
     for (int i=n/2-1;i>=0;i--)
        heapify(a,n,i);
     printf("\n MAX HEAP : ");
     for (int i=0;i<n;i++)
        printf(" %d",a[i]);   
     for (int i=n-1;i>=0;i--)
     {
       int temp=a[i];
        a[i]=a[0];
        a[0]=temp;
        heapify(a,i,0);
     }
}
void heapify(int a[],int n,int i)
{
     int large=i;
     int l=2*i+1;
     int r=2*i+2;
     int temp;
     if (l<n && a[l]>a[large])
        large=l;
     if (r<n && a[r]>a[large])
        large=r;
     if (large!=i)
     {
        temp=a[large];
        a[large]=a[i];
        a[i]=temp;
        heapify(a,n,large);
     }
}
/*
Enter Size Of Array : 5

ENTER 5 Elements of Array  : 88 77 55 33 22
	88	77	55	33	22
 MAX HEAP : 	88	77	55	33	22
Array in Ascending Order : 	22	33	55	77	88
*/
