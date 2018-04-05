#include<stdio.h>

int main()
{
    int n;
    printf("Enter how many elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    int i,max,negflg=0,min;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0)
            negflg=1;
        if(i==0){
            max=arr[i];
            min=arr[i];
            continue;
        }
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    /**If input is negative recreate the input array**/
    if(negflg==1){
        for(i=0;i<n;i++){
            arr[i]-=min;
            if(arr[i]>max)
                max=arr[i];
        }
    }
    /*************************************************/
    int freq[100000]={0};

    int nwarr[n];
    for(i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(i=1;i<=max;i++){
        freq[i]+=freq[i-1];
    }
    printf("\nnw 6 ele = %d\n\n",nwarr[6]);
    for(i=0;i<n;i++){
        nwarr[freq[arr[i]]-1]=arr[i];
        freq[arr[i]]--;
    }
    for(i=0;i<n;i++){
        arr[i]=nwarr[i];
        if(negflg==1)
            arr[i]+=min;
    }
    /**print**/
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}
