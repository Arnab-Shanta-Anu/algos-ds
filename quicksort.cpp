#include<bits/stdc++.h>
using namespace std;

#define MAX 100000
#define CUTOFF 8

void insertionSort(int *arr, int n)
{

}
void swp(int *p,int *q)
{
    int tmp=*p;
    *p=*q;
    *q=tmp;
}
int pertition(int *gar,int l, int r)
{
    int i=l-1,pivot=gar[l];
    int j=r+1;
    while(1){
        do{
            i++;
        }while(gar[i]<pivot);

        do{
            j--;
        }while(gar[j]>pivot);

        if(i>=j)
            return j;
        swp(&gar[i],&gar[j]);
    }
    return i+1;
}
void quicksort(int *gar,int l, int r)
{
    while(l<r){
        int pi=pertition(gar,l,r);
        if(pi-l<r-pi){
            quicksort(gar,l,pi);
            l=pi+1;
        }
        else{
            quicksort(gar,pi+1,r);
            r=pi-1;
        }
    }
}

int main()
{
    int gar[MAX];
    for(int i=0;i<MAX;i++)
        gar[i]=rand()%MAX;

    quicksort(gar,0,MAX-1);
    return 0;
}
