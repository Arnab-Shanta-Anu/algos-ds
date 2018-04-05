#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    vector<int> prime;
    prime.push_back(2);
    map<int,int> real;
    for(int i=2;i<=10000;i++){
        real[i]=1;
    }
    for(int i=3;i<=10000;i+=2){
        if(real[i]==1)
            prime.push_back(i);
        for(int j=i*i;j<=10000;j=j+i+i){
            real[j]=0;
        }
    }
    for(int i=0;i<prime.size();i++){
        printf("  %d",prime[i]);
    }
    return 0;
}
