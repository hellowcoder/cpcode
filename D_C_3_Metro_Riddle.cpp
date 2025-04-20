//Author: sandeep172918
//Date: 2025-04-20 14:29

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);fr(i,0,n-1)cin>>v[i]
#define out(v,n) fr(i,0,n-1)cout<<v[i]
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
using namespace std;
const int MOD=1e9+7;
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
void bfs(lli start,vector<lli>&dist,vector<vector<lli>>&adj){
    queue<lli>q;
    q.push(start);
    while(!q.empty()){
      lli node=q.front();
      q.pop();
      for(lli &i :adj[node]){
        if(dist[i]==-1)q.push(i);
        if(dist[node]!=-1 && dist[i]==-1){
            dist[i]=dist[node]+1;
        }
      }
    }
}
void solve(){
lli x;cin>>x;vector<vector<lli>>v(x);
UnionFind u(x);lli par=-100;vec(dist,x,-1);
fr(i,0,x-1){
    lli a,b;cin>>a>>b;
    a--;b--;  
    v[a].psb(b);  
    v[b].psb(a);                                                                   
    if(u.join(a,b)==false){
        queue<lli>q;
        vector<lli>st,vis(x,0);
        q.push(a);
        st.psb(a);
        vis[a]=1;
        while(!q.empty()){
            lli node=q.front();
            q.pop();
            for(lli &it: v[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                    st.psb(it);
                }
            }
        }
        fr(j,0,st.size()-1)dist[st[j]]=0;
        cout<<"hi";
    }
  
}
out(dist,x)<<" ";
fr(i,0,x-1)
bfs(i,dist,v);
//out(dist,x)<<" ";
}

int32_t main(){
fastio;solve();
}