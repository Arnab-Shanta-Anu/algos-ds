#include<bits/stdc++.h>
using namespace std;

#define MAX 100000

int freq[MAX];

void csort(int *arr)
{
    for(int i=0;i<MAX;i++){
        freq[arr[i]]++;
    }
    int j=0;
    for(int i=0;i<MAX;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
}
int main()
{
    int arr[MAX];
    for(int i=0;i<MAX;i++)
        arr[i]=rand()% MAX;

    clock_t tic=clock();
    csort(arr);
    clock_t toc=clock();

//    for(int i=0;i<MAX;i++){
//        printf("%d ",arr[i]);
//        if(i%10==0)
//            printf("\n");
//    }
    printf("time taken: %f seconds\n",(double)(toc-tic)/CLOCKS_PER_SEC);
    return 0;
}
