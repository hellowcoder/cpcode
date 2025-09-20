
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
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

// int prim(int n, vector<vector<pr>>&adj) {
//     // code here
//     int ans=0;
//     priority_queue<pr,vector<pr>,greater<pr>>pq;
   
//     vector<lli>vis(n);
//     pq.push({0,0});
//     while(!pq.empty()){
//         lli weight=pq.top().ff;
//         lli node=pq.top().ss;
//         pq.pop();
//         if(vis[node])continue;
//          vis[node]=1;
//          ans+=weight;
         
//         for(auto &it:adj[node]){
//             lli nodee=it.ff,w=it.ss;
//             if(!vis[nodee]){
//                 pq.push({w,nodee});
//             }
//         }
//     }
//     return ans;
    
// }

vector<lli> prim(lli src,vector<vector<pr>>&adj){
    lli n=adj.size();
    vector<lli>key(n,1e18);
    vector<lli>parent(n,-1);
    vector<bool>vis(n,false);
    priority_queue<pr,vector<pr>,greater<pr>>pq;
    key[src]=0;
   
    pq.push({0,src});
    while(!pq.empty()){
        lli node=pq.top().ss;
        pq.pop();
      //  if(vis[node])continue;
        vis[node]=true;
        for(auto &it:adj[node]){
            
            lli w=it.ff;
            lli child=it.ss;
            if(!vis[child]  && w<key[child]){
             key[child]=w;
             parent[child]=node;
             pq.push({key[child],child});
           }
        }
    }
    return parent;
}


void solve(){
lli n,m;
cin>>n>>m;
vector<vector<pr>>adj(n);
fr(i,m){
    lli w,u,v;
    cin>>w>>u>>v;
    u--;
    v--;
    adj[u].push_back({w,v});
    adj[v].push_back({w,u});

}
vector<lli> par = prim(0,adj);
fr(i,par.size())cout<<par[i]<<' ';
}

int32_t main(){
fastio;
lli tt=1;//cin>>tt;
while(tt--){
solve();
}
}