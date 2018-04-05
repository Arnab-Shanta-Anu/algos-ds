#include<bits/stdc++.h>
using namespace std;

void swp(int *x, int *y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
int randPart(int *arr, int left, int right)
{
    int n=right-left+1;
    int pivot=rand()%n;
    swp(&arr[pivot+left],&arr[right]);

    int x=arr[right];
    int i=left,j;
    for(j=left;j<=right-1;j++){
        if(arr[j]<=x){
            swp(&arr[i],&arr[j]);
            i++;
        }
    }
    swp(&arr[i],&arr[right]);
    return i;
}
int findKthSmallest(int *arr, int left, int right, int k)
{
    if(k>0&&k<=right-left+1){
    int pos=randPart(arr,left,right);

    if(pos-left==k-1)
        return arr[pos];
    if(pos-left>k-1)
        return findKthSmallest(arr,left,pos-1,k);

    return findKthSmallest(arr,pos+1,right,k-pos+left-1);
    }
    return INT_MAX;
}

int main()
{
    int arr[]={70,20,30,10,65,69};
    int n=sizeof(arr)/sizeof(arr[0]),k;
    scanf("%d",&k);
    printf("%d \n",findKthSmallest(arr,0,n-1,k));
    return 0;
}
