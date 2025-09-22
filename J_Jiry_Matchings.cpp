//Author: sandeep172918
//Date: 2025-09-21 15:23

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define pr pair<lli,lli>
#define vll vector<lli>
#define vbl vector<bool>
#define vpr vector<pr>
#define vvll vector<vector<lli>>
#define get(v,n) vll v(n);fr(i,n)cin>>v[i]
#define ff first
#define ss second
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
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
void solve(){
lli n;cin>>n;
UnionFind uf(n);
vvll v(n-1,vll(3));
fr(i,n-1){
    lli u,vv,w;
    cin>>u>>vv>>w;
    u--;
    vv--;
    v[i][0]=w;
    v[i][1]=u;
    v[i][2]=vv;

}
rsrt(v);
// fr(i,n-1){
//     fr(j,3)cout<<v[i][j]<<' ';
//     cout<<'\n';
// }
vll vis(n,0);
vll temp;
fr(i,n-1){
  lli uu=v[i][1];
  lli vv=v[i][2];
  if(!vis[uu]  &&  !vis[vv]){
    if(uf.join(uu,vv)){
        temp.psb(v[i][0]);
        vis[uu]=1;
        vis[vv]=1;
    }
  }
}
//cout<<temp.size()<<'\n';
vll pre(n-1,-1);
pre[0]=temp[0];
frs(i,1,temp.size()-1){
    pre[i]=pre[i-1]+temp[i];
}
fr(i,n-1){
    if(pre[i]==-1)cout<<"? ";
    else cout<<pre[i]<<' ';
}
}

int32_t main(){
fastio;
lli tt=1;

while(tt--){
solve();
}
}