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

int insertionsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(temp<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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
    insertionsort(a,n);
    printf("Insertion Sort: ");
    printarr(a,n);
    return 0;
}