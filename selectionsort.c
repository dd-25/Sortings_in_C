#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}

int swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}

int selectionsort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int pos=i;
        for(int j=i+1;j<n;j++)
        if(a[j]<a[pos])
        pos=j;
        swap(&a[i],&a[pos]);
    }
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
    selectionsort(a,n);
    printf("Selection Sort: ");
    printarr(a,n);
    return 0;
}