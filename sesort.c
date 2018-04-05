#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int findminima(int *arr, int st, int en)
{
    int i,minind=st;
    for(i=st;i<en;i++){
        if(arr[i]<arr[minind])
            minind=i;
    }
    return minind;
}

void sesort(int *arr, int n)
{
    int i,ind,tmp,j;
    for(i=0,j=0;i<n;i++){
        ind=findminima(arr,i,n);
        tmp=arr[j];
        arr[j++]=arr[ind];
        arr[ind]=tmp;
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

    sesort(arr, n);

    printf("Sorted array: \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
