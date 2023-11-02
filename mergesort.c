#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}

void merge(int a[],int low,int mid,int high)
{
    int nl=mid-low+1;
    int nr=high-mid;
    int left[nl];
    int right[nr];
    for(int i=0;i<nl;i++)
    left[i]=a[low+i];
    for(int i=0;i<nr;i++)
    right[i]=a[mid+i+1];
    int j=0,k=0,l=low;
    while(j<nl && k<nr)
    {
        if(left[j]<right[k])
        {
            a[l]=left[j];
            j++;
            l++;
        }
        else
        {
            a[l]=right[k];
            k++;
            l++;
        }
    }
    while(j<nl)
    {
        a[l]=left[j];
        j++;
        l++;
    }
    while(k<nr)
    {
        a[l]=right[k];
        k++;
        l++;
    }
}

void mergesort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    return;
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
    mergesort(a,0,n-1);
    printf("Merge Sort: ");
    printarr(a,n);
    return 0;
}