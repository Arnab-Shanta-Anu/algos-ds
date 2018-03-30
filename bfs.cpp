#include<bits/stdc++.h>
using namespace std;

vector<bool> v;

void addEdge(vector<int>graph[], int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}
void Bfs(vector<int>g[],int u)
{
    queue<int> q;
    q.push(u);

    v[u]=true;

    while(!q.empty()){
        int f=q.front();
        q.pop();

        cout << f <<" ";

        for(auto i=g[f].begin();i!=g[f].end();i++){
            if(!v[*i]){
                q.push(*i);
                v[*i]=true;
            }
        }
    }
}
int main()
{
    int n,e;
    cin >>n>>e;
    vector<int>graph[e];
    v.assign(n,false);

    int a,b;
    for(int i=0;i<e;i++){
        cin>>a>>b;
        addEdge(graph,a,b);
    }

    for(int i=0;i<n;i++){
        if(!v[i])
            Bfs(graph,i);
    }
    return 0;
}
