//Author: sandeep172918
//Date: 2025-10-09 19:09

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
#define bitc(x) __builtin_popcountll(x)
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
#define out(v) fr(i,v.size())cout<<v[i]+1<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//printing path --- soutce will be 0 and destination will be last one
vector<lli> dijkstra_pq_print(vector<vector<pr>>&adj,lli src,vector<lli>&dist){  // adj[i]={{node,weight}}  dist=inf all       
dist[src]=0;
priority_queue<pr,vector<pr>,greater<pr>>pq;  //template for storing smallest at top
vector<lli>parent(adj.size()),path;
iota(all(parent),0);
pq.push({0,src});  //dist,node
while(!pq.empty()){
    lli node=pq.top().ss;
    lli d=pq.top().ff;
    pq.pop();
    for(auto &i : adj[node]){
        lli a=i.ff,b=i.ss; //a=neighbour node b= weight
        if(dist[a]>b+d){
            dist[a]=b+d;
            pq.push({dist[a],a});
            parent[a]=node;
        }
    }
}
// elog
lli n=adj.size();n--;
if(parent[n]==n)path.psb(-1);
else{
    while(parent[n]!=n){
        path.psb(n);
        n=parent[n];
    }
    path.psb(0);
    
}
return path;
}
void solve(){
lli n,k;cin>>n>>k;
map<pr,lli>m;
vector<vpr> adj(n);
fr(i,k){
    lli u,v,w;cin>>u>>v>>w;
    u--;
    v--;
    if(u>v)swap(u,v);
    if(m.find({u,v})!=m.end()){
        m[{u,v}]=min(m[{u,v}],w);
    }else 
      m[{u,v}]=w;
   
  //  adj[v].psb(u);
}
for(auto &it:m){
 lli u,v;
 u=it.ff.ff;
 v=it.ff.ss;
 lli w=it.ss;
  adj[u].push_back({v,w});
  adj[v].push_back({u,w});
}
vll dist(n,1e18);
vll ans=dijkstra_pq_print(adj,0,dist);
reverse(all(ans));
if(ans[0]==-1){
    cout<<"-1\n";
}else out(ans);
}

int32_t main(){
fastio;
lli tt=1;
while(tt--){
solve();
}
}