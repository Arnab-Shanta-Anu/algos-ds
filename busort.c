#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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
    int j,tmp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");


    return 0;
}
