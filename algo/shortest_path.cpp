
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define pr pair<lli,lli>
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
//using pq
void dijkstra_pq(vector<vector<pr>>&adj,lli src,vector<lli>&dist){  // adj[i]={{node,weight}}  dist=inf all     
dist[src]=0;
priority_queue<pr,vector<pr>,greater<pr>>pq;  //template for storing smallest at top

pq.push({0,src});  //dist,node
while(!pq.empty()){
    lli node=pq.top().ss;
    lli d=pq.top().ff;
    pq.pop();
    for(auto &i : adj[node]){
        lli a=i.ff,b=i.ss; //a=neighbour node ,,,b= weight
        if(dist[a]>b+d){
            dist[a]=b+d;
            pq.push({dist[a],a});
        }
    }
}
// elog(v)
}
//using set
void dijkstra_set(vector<vector<pr>>&adj,lli src,vector<lli>&dist){  // adj[i]={{node,weight}}  dist=inf all     
dist[src]=0;
set<pr>pq;
pq.insert({0,src});  //dist,node
while(!pq.empty()){
    pr x=*pq.begin();
    lli node=x.ss;
    lli d=x.ff;
    pq.erase(x);
    for(auto &i : adj[node]){
        lli a=i.ff,b=i.ss; //a=neighbour node b= weight
        
        if(dist[a]>b+d){
            dist[a]=b+d;
            pq.insert({dist[a],a});
        }
    }
}

}
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
// elog(v)
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
//bellman ford algo only work on directed graph so make it
vector<lli> bellmanFord(lli n, vector<vector<lli>>& edges, lli src) {
   
    
    vec(d,n);fr(i,n)d[i]=1e8;
    d[src]=0;
    fr(i,n-1){
        for(auto &it :edges){
            lli u=it[0],v=it[1],w=it[2];//u->v (w)
            if(d[u]!=1e8 && d[u]+w<d[v])
                 d[v]=d[u]+w;
        }
    }
    for(auto &it:edges){   //tocheck negative cylce
         lli u=it[0],v=it[1],w=it[2];//u->v (w)
            if(d[u]!=1e8 && d[u]+w<d[v])
               return{-1};
    }
    return d;
}
//flyod warshel algo only work on directed graph so make it
void shortestDistance(vector<vector<lli>>& mat) {
    // Code here
    lli n=mat.size();
    fr(i,n){
        fr(j,n){
            if(mat[i][j]==-1)mat[i][j]=1e9;
        }
    }
    fr(via,n){
        fr(i,n){
            fr(j,n){
                mat[i][j]=min(mat[i][j],mat[i][via]+mat[via][j]);
            }
        }
    }
    fr(i,n){
        if(mat[i][i]<0)return;
    }
    
    
}

void solve(){
vector<vector<pr>>adj(4);adj={{{1,2},{2,5}},{{0,2},{3,3}},{{0,5},{3,4}},{{1,3},{2,4}}};
vector<lli>dist(adj.size(),1e18);
//dijkstra_pq(adj,0,dist);
dijkstra_set(adj,0,dist);
fr(i,adj.size())cout<<dist[i]<<" ";
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}