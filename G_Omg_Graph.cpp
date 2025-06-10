//Author: sandeep172918
//Date: 2025-06-08 21:42

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v) frs(i,0,v.size()-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


class UnionFind
{
private:
    vector<lli> par;
    vector<lli> sz;
    vector<lli>bestt;
public:
    UnionFind(lli n)
    {
        par = vector<lli>(n);
        iota(par.begin(), par.end(), 0);
        sz = vector<lli>(n, 1);
        bestt= vector<lli>(n,1e18);
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
    lli bes(lli n){
        return bestt[n];
    }
    bool join(lli u, lli v,lli w)
    {
        u = find(u);
        v = find(v);
        if (u == v){
            bestt[u]=min(w,bestt[u]);
            return false;
        }
        if (sz[u] <= sz[v])
        {
            sz[v] += sz[u];
            par[u] = v;
             bestt[v] = min({bestt[u], bestt[v], w});
        }
        else
        {
            sz[u] += sz[v];
            par[v] = u;
             bestt[u] = min({bestt[u], bestt[v], w});
        }
        //bestt[u]=min(w,bestt[u]);
        return true;
    }
    
};



//binary search lagale bete
void solve(){
lli n,k;cin>>n>>k;
// vec2(v,k,3);
// fr(i,k){
//     fr(j,3)
//     cin>>v[i][j];
// }
vector<pair<lli,pr>>v(k);
fr(i,k){
    cin>>v[i].ss.ff>>v[i].ss.ss>>v[i].ff;
    v[i].ss.ff--;
    v[i].ss.ss--;

}
srt(v);
UnionFind uf(n);
lli ans=1e18;
fr(i,k){
    lli x=v[i].ss.ff;
    lli y=v[i].ss.ss; 
    lli w=v[i].ff;
    uf.join(x,y,w);
    lli check=uf.find(0);
    if(uf.find(n-1)==check){
     ans=min(ans,w+uf.bes(check));
    }
}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}