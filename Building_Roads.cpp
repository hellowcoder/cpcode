//Author: sandeep172918
//Date: 2025-03-15 17:43
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void dfs(lli node,vector<vector<lli>>&adj,vector<lli>&vis,vector<lli>&conn,lli key){
    conn[node]=key;
    vis[node]=1;
    for(auto & i : adj[node]){
        if(!vis[i]){
            dfs(i,adj,vis,conn,key);
        }
    }
}

void solve(){
lli n,m;cin>>n>>m;
vector<vector<lli>>adj(n+1);
fr1(i,m){
    lli a,b;cin>>a>>b;
    adj[a].psb(b);
    adj[b].psb(a);
}
lli key=0;
vector<lli>vis(n+1,0),conn(n+1);
fr1(i,n){
    if(!vis[i]){
        key++;
        dfs(i,adj,vis,conn,key);
       
    }
}
cout<<key-1<<'\n';
vector<lli>check(key+1);
fr1(i,n){
    check[conn[i]]=i;
}
fr1(i,key-1){
    cout<<check[i]<<" "<<check[i+1]<<'\n';
}

}

int32_t main(){
fastio;
solve();
}