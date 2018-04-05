#include<bits/stdc++.h>
using namespace std;

vector<bool> tt;

void addEdge(vector<int>vc[], int u, int v)
{
    vc[u].push_back(v);
    //vc[v].push_back(u);
}
void dfs(vector<int>vc[], int strt)
{
    stack<int> stk;
    stk.push(strt);

    while(!stk.empty()){
        int t=stk.top();
        stk.pop();
        tt[t]=true;

        //printf("%d ",t);
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
    int t,ti=1;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        vector<int>graph[m];
        v.assign(n,false);

        int wt[n];
        for(int i=0;i<n;i++)
            scanf("%d",&wt[i]);

        int u,v;
        for(int i=0;i<m;i++){
            scanf("%d %d",&u,&v);
            addEdge(graph,u,v);
        }

        dfs(graph,0);
    }
    return 0;
}
