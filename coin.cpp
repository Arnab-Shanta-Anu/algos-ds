#include<bits/stdc++.h>
using namespace std;

void print(long long n)
{
    if(n>=1000000){
        print(n/1000000);
        printf(" kuti");
        n%=1000000;
    }
    if(n>=100000){
        print(n/100000);
        printf(" lakh");
        n%=100000;
    }
    if(n>=1000){
        print(n/1000);
        printf(" hajar");
        n%=1000;
    }
    if(n>=100){
        print(n/100);
        printf(" shata");
        n%=100;
    }
    if(n)
        printf(" %d",n);
}
int main()
{
    int tc=1;
    long long inp;
    while(scanf("%lld",&inp)==1){
        printf("%4d.",tc++);
        if(inp==0)
            printf("0");
    print(inp);
        printf("\n");
    }
    return 0;
}
