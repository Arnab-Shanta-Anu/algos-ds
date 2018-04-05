#include<bits/stdc++.h>
using namespace std;

int per[3];
int arr[3]={4,5,6};
bool lpt[3];
void permut(int id)
{
    int i;

    if(id==3){
        for(int j=0;j<3;j++){
            printf("%d ",per[j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        if(lpt[i]==false){
            per[id]=arr[i];
            lpt[i]=true;
            permut(id+1);
            lpt[i]=false;
        }
    }
}
int main()
{
    permut(0);
    return 0;
}
