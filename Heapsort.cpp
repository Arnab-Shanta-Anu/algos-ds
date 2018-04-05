#include<bits/stdc++.h>
using namespace std;

void swp(int *a, int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void heapify(int *arr, int n, int root)
{
    int largest = root;
    int left=2*root+1;
    int right=2*root+2;

    if(left<n&&arr[left]>arr[largest])
        largest=left;
    if(right<n&&arr[right]>arr[largest])
        largest=right;

    if(largest!=root){
        swp(&arr[root],&arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapSort(int *arr, int n)
{
    for(int i=(n-1)/2;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swp(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

int main()
{
    int arr[]={4,10,2,0,3,3,5,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapSort(arr,n);

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
