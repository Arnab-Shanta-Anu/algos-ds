#include<bits/stdc++.h>
using namespace std;
vector<bool> tt;
void addEdge(vector<int>vc[], int u, int v)
{
    vc[u].push_back(v);
    vc[v].push_back(u);
}
void dfs(vector<int>vc[], int strt)
{
    stack<int> stk;
    stk.push(strt);

    while(!stk.empty()){
        int t=stk.top();
        stk.pop();
        tt[t]=true;

        printf("%d ",t);
        for(auto i=vc[t].begin();i!=vc[t].end();i++){
            if(!tt[*i]){
                stk.push(*i);
                tt[*i]=true;
            }
        }
    }
}
int main()
{
    int e,v;
    scanf("%d %d",&e,&v);
    vector<int> vc[v];
    int a,b;
    while(v--){
        scanf("%d %d",&a,&b);
        addEdge(vc,a,b);
    }
    tt.assign(e,false);
    dfs(vc,0);

    return 0;
}
