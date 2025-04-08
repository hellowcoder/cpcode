#include <bits/stdc++.h>

#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define pr pair<lli,lli>
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

class UnionFind
{
private:
    vector<int> par;
    vector<int> sz;
 
public:
    UnionFind(int n)
    {
        par = vector<int>(n);
        iota(par.begin(), par.end(), 0);
        sz = vector<int>(n, 1);
    }
 
    int find(int u)
    {
        // this optimisation was good.
        if (par[u] != par[par[u]])
            par[u] = find(par[par[u]]);
        return par[u];
    }
 
    bool connected(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
            return true;
        return false;
    }
    bool join(int u, int v)
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


void solve(){
lli x,m,n;cin>>x>>m>>n;vector<pr>a(m),b(n);
fr(i,m){
cin>>a[i].ff>>a[i].ss;
}
fr(i,n){
    cin>>b[i].ff>>b[i].ss;
}
UnionFind graph1(x+1);UnionFind graph2(x+1);
lli ans=0;

fr(i,n){
    graph2.join(b[i].ff,b[i].ss);
}
fr(i,m){
    if(graph2.connected(a[i].ff,a[i].ss)){
        graph1.join(a[i].ff,a[i].ss);
    }else ans++;
}
set<lli>s1,s2;  //connecte compo
fr1(i,x){
  s1.insert(graph1.find(i));
  s2.insert(graph2.find(i));
}
cout<<ans+s1.size()-s2.size()<<'\n';
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}