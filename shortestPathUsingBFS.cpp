#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[][],int u, int v)
{
    adj[u]=v;
    adj[v]=u;//comment it in case of directed graph
}
void bfs()
{

}
int main()
{
    int e,n;
    scanf("%d %d",&e,&n);
    vector<int>adj[e];
    int u,v;
    while(e--){
        scanf("%d %d",&u,&v);
        addEdge()
    }
}
