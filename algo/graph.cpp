//Author: sandeep172918
//Date: 2025-04-02 18:36
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

bool dfs1(int node,int c,vector<vector<int>>& graph,vector<int>&color){  //bipartite wala dfs
    color[node]=c;
    for(int &i : graph[node]){
       if(color[i]==-1){
         if(dfs1(i,1-c,graph,color)==false)return false;
        }
      if(color[i]==color[node])return false;
      
     
    }
    return true;
}

bool dfs2(int node,vector<vector<int>>& graph,vector<lli>&vis,vector<lli>&pathvis){  //directed me cycle detecleion wala dfs
    vis[node]=1;
    pathvis[node]=1; // same path wale ko 1 dedo
    for(int &i : graph[node]){
       if(!vis[i]){
        if(dfs2(i,graph,vis,pathvis)==true)return true;
       }
       else if(pathvis[i])return true;  //mtlb visited hai  aur same path pe hai 
     }
    
    

    pathvis[node]=0;
    return false;

}

void dfs(int node,vector<vector<int>>& graph,vector<int>&vis,stack<lli>&store){ //topological sort dfs
  vis[node]=1;
  for(int &i : graph[node]){
    if(!vis[i])dfs(i,graph,vis,store);
  }
  store.push(node);

}
bool isBipartite(vector<vector<int>>& graph) {  //checking for bipartite  dfs1
 int k=graph.size();
 vector<int>color(k,-1);
 for(int i=0;i<k;i++){
     if(color[i]==-1){
         if(dfs1(i,0,graph,color)==false)return false;
     }
 }
return true;
}
bool isCyclic(vector<vector<int>>& graph){  //checking for cycle in directed graph   df2
    lli x=graph.size();
    vector<lli>pathvis(x,0),vis(x,0);
    fr(i,x){
        if(!vis[i]){
            if(dfs2(i,graph,vis,pathvis)==true)return true;
        }
    }
    return false;
}

vector<int> toplogical(vector<vector<int>>&graph){
  lli x=graph.size();
  vector<int>vis(x,0);
  stack<lli>store;
  fr(i,x){
   if(!vis[i])dfs(i,graph,vis,store);
  }
}

vector<int> toplogical(vector<vector<int>>&graph){ //kahn algorithm
  lli x=graph.size();
  vector<lli>indegree(x,0),vis(x,0);
  for(int i=0;i<x;i++){
    for(int &j:graph[i]){
      indegree[j]++;
    }
  }
  queue<int>q;
  for(int i=0;i<x;i++){
    if(indegree[i]==0)q.push(i);  // phle phle wale node kopush kar lo kyuki uke pas koi nhi aa raha 
  }
  vector<int>v;
  while(!q.empty()){
    lli node=q.front();
    q.pop();
    v.push_back(node);
    for(int &i :graph[node]){
      indegree[i]--;
      if(indegree[i]<=0)q.push(i);
    }
  }
   return v;
}
void solve(){

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}