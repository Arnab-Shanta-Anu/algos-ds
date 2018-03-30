#include<stdio.h>

int bs(int *arr, int lo, int hi, int key)
{
    if(lo>=hi){
        if(arr[lo]==key)
            return lo;
        else return -1;
    }

    if(lo<hi){
        int m=(hi+lo)/2;
        if(arr[m]==key)
            return m;
        if(arr[m]<key)
            return bs(arr,m+1,hi,key);
        return bs(arr,lo,m-1,key);
    }
}

int main()
{
    int n;
    printf("Enter how many elements in the array: ");
    scanf("%d",&n);
    int sarr[n];
    printf("Enter array elements in sorted order: ");
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&sarr[i]);
    int key, ind;
    printf("Enter key to find: ");
    scanf("%d",&key);

    ind=bs(sarr,0,n-1,key);
    if(ind!=-1)
        printf("the key is in index no: %d\n",ind+1);
    else
        printf("the key doesn't exist\n");

    return 0;
}
