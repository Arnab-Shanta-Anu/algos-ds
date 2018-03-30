#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p1=18;
    int t;
    scanf("%d",&t);
    while(t--){
        char str[500050];
        int len=strlen(str);
        int p2=str[0]-'a'+str[1]-'a'+str[2]-'a'+str[3]-'a';
        for(int i=4;i<len-4;i++){
            p2=p2+str[i]-'a'-str[i-4]-'a';
            if(p1==p2){
                if
            }
        }
    }
}
