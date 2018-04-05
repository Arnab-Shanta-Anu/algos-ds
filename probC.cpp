#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0){
        int arr[n],num,j=0;
        for(int i=0;i<n;i++){
            scanf("%d",&num);
            if(num){
                    arr[j++]=num;
            }
        }
        if(j==0){
            printf("0\n");
        }
        else{
            for(int i=0;i<j-1;i++){
                printf("%d ",arr[i]);
            }
            printf("%d\n",arr[j-1]);
        }
    }
    return 0;
}
