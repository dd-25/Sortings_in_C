#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int j=low;
    for(int i=low;i<high;i++)
    if(a[i]<pivot)
    {
        swap(&a[i],&a[j]);
        j++;
    }
    swap(&a[j],&a[high]);
    return j;
}

void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int part=partition(a,low,high);
        quicksort(a,low,part-1);
        quicksort(a,part+1,high);
    }
    return;
}

void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of elements you want to sort\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements you want to sort\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printf("Quick Sort: ");
    printarr(a,n);
    return 0;
}