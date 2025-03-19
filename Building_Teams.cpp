//Author: sandeep172918
//Date: 2025-03-15 14:55
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

void bfs(lli start,vector<vector<lli>>&adj,vector<lli>&dist,vector<lli>&vis){
   // lli n=adj.size();
  
  queue<lli>q;
  q.push(start);
  vis[start]=1;
  dist[start]=0;
 // lli far=-1;
  while(!q.empty()){
        lli node=q.front();
        q.pop();
       // vis[node]=1;
        for(auto &i:adj[node]){
            if(!vis[i]){
                dist[i]=dist[node]+1;
                //far=i;
                vis[i]=1;
                q.push(i);
            }
           
           
        }
  }
  
}

void solve(){
lli n,m;cin>>n>>m;lli a,b;
vector<vector<lli>>adj(n+1);
fr(i,m){
cin>>a>>b;
adj[a].psb(b);
adj[b].psb(a);
}
vector<lli>dist(n+1,-1),vis(n+1,0);
// fr1(i,n){
//     fr(j,adj[i].size()){
//         cout<<adj[i][j];
//     }
// }
fr1(i,n){
  if(!vis[i]){
    bfs(i,adj,dist,vis);
  }
}
vector<lli>team(n+1);
fr1(i,n){
   if(dist[i]&1)team[i]=2;
   else team[i]=1;
}
fr1(i,n){
    lli key=team[i];
    fr(j,adj[i].size()){
      if(team[adj[i][j]]==key){
        cout<<"IMPOSSIBLE\n";return;
      }
    }
}
fr1(i,n){
    cout<<team[i]<<" ";
}
}

int32_t main(){
fastio;
solve();
}