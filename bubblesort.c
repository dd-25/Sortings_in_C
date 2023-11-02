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

int bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++)
    if(a[j]>a[j+1])
    swap(&a[j],&a[j+1]);
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
    bubblesort(a,n);
    printf("Bubble Sort: ");
    printarr(a,n);
    return 0;
}