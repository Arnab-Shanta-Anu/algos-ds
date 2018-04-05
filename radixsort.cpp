#include<bits/stdc++.h>
using namespace std;
#define MAX 10000

void countsort(int *rarr, int part)
{
    int coun[10]={0},output[MAX];
    for(int i=0;i<MAX;i++){
        coun[(rarr[i]/part)%10]++;
    }
    for(int i=1;i<10;i++){
        coun[i]+=coun[i-1];
    }
    for(int i=MAX-1;i>=0;i--){
        output[coun[(rarr[i]/part)%10]-1]=rarr[i];
        coun[(rarr[i]/part)%10]--;
    }
    //printf("output is ");
    for(int i=0;i<MAX;i++){
        //printf("%d ",output[i]);
        rarr[i]=output[i];
    }
    //printf("\n\n");
}

void radixsort(int *rarr, int maxele)
{
    for(int i=1;maxele/i>0;i*=10){
        countsort(rarr,i);
    }
}

int main()
{
    int rarr[MAX],mx=10;
    for(int i=0;i<MAX;i++){
        rarr[i]=rand()%MAX;
        if(rarr[i]>mx)
            mx=rarr[i];
    }
    clock_t tic=clock();
    radixsort(rarr,mx);
    clock_t toc=clock();
    printf("ex time %f",(double)(toc-tic)/CLOCKS_PER_SEC);
    /**for(int i=0;i<MAX;i++){
        printf("%d ",rarr[i]);
        if(i!=0&&i%10==0)
            printf("\n");
    }**/
    printf("\n\n");
    return 0;
}
