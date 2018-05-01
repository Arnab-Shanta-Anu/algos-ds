void makeSet(int n)
{
    par[n]=n;
}
int Find(int n)
{
    if(par[n]==n)
        return n;
    return par[n]=Find(par[n]);
}
void Union(int u, int v)
{
    if(Find(u)==Find(v))
        printf("Already joined\n");
    else
        par[u]=v;
}
