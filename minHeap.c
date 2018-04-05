#include<stdio.h>

void swp(int *x, int *y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
void heapify(int *arr, int n, int root)
{
    int minimum=root;
    int left=2*root+1;
    int right=2*root+2;

    if(left<n&&arr[left]<arr[minimum])
        minimum=left;
    if(right<n&&arr[right]<arr[minimum])
        minimum=right;

    if(minimum!=root){
        swp(&arr[root],&arr[minimum]);
        heapify(arr,n,minimum);
    }
}
void heapSort(int *arr, int n)
{
    int i;
    for(i=(n-1)/2;i>=0;i--){
        heapify(arr,n,i);
    }

    for(i=n-1;i>=0;i--){
        swp(&arr[i],&arr[0]);
        heapify(arr,i,0);
    }
}

int main()
{
    int arr[]={3,7,5,6,1,34,10,11,12};
    int n=sizeof(arr)/sizeof(arr[0]);

    heapSort(arr,n);
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
