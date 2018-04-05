#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int bsrch(int *arr, int lo, int hi, int key)
{
    if(lo>=hi){
        if(key<arr[lo])return lo;
        return lo+1;
    }

    if(lo<hi){
        int mid=(lo+hi)/2;
        if(key>arr[mid])
            return bsrch(arr,mid+1,hi,key);
        return bsrch(arr,lo,mid-1,key);
    }
}

void insort(int *inparr,int n)
{
    int i,j,ind,tmp;
    for(i=1;i<n;i++){
        j=i-1;
        tmp=inparr[i];
        if(inparr[i]<inparr[j]){
            ind=bsrch(inparr,0,j,inparr[i]);
            while(j>=ind){
                inparr[j+1]=inparr[j];
                j--;
            }
            inparr[j+1]=tmp;
        }
    }
}

int main()
{

    int n;
    printf("Enter how many elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    srand(time(NULL));
    for(i=0;i<n;i++)
        arr[i]=rand();
    insort(arr, n);

    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ",arr[i]);

    return 0;
}
