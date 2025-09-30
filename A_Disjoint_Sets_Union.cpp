class UnionFind
{
private:
    vector<lli> par;
    vector<lli> sz;
 
public:
    UnionFind(lli n)
    {
        par = vector<lli>(n);
        iota(par.begin(), par.end(), 0);
        sz = vector<lli>(n, 1);
    }
 
    lli find(lli u)
    {
        // this optimisation was good.
        if (par[u] != par[par[u]])
            par[u] = find(par[par[u]]);
        return par[u];
    }
 
    bool connected(lli u, lli v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
            return true;
        return false;
    }
    bool join(lli u, lli v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
            return false;
        if (sz[u] <= sz[v])
        {
            sz[v] += sz[u];
            par[u] = v;
        }
        else
        {
            sz[u] += sz[v];
            par[v] = u;
        }
        return true;
    }
    
};