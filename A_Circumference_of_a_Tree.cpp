//Author: sandeep172918
//Date: 2025-03-08 01:32
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

pair<lli,lli>bfs(lli start,vector<vector<lli>>&v){
    lli n=v.size();
  vector<lli>dist(n+1,0);
  queue<lli>q;
  q.push(start);
  lli far=-1;
  while(!q.empty()){
        lli node=q.front();
        q.pop();
        for(auto &i:v[node]){
            if(!dist[i]){
                dist[i]=dist[node]+1;
                far=i;
                q.push(i);
            }
           
           
        }
  }
  return {far,dist[far]};
}
void bfs2(lli start,vector<vector<lli>>&v,lli d,vector<lli>&end){
    lli n=v.size();
  vector<lli>dist(n+1,0);
  queue<lli>q;
  q.push(start);
  lli far=-1;
  while(!q.empty()){
        lli node=q.front();
        q.pop();
        for(auto &i:v[node]){
            if(!dist[i]){
                dist[i]=dist[node]+1;
                if(dist[i]==d)end.psb(i);
                far=i;
                q.push(i);
            }
           
           
        }
  }
 
}

void solve(){
    take(x);
vector<vector<lli>>v(x+1);
fr(i,x-1){
 take(a);take(b);
 v[a].psb(b);
 v[b].psb(a);
}
if(x==1){
    cout<<"1";
    return;
}
auto[A,useless]=bfs(1,v);
auto[B,diam]=bfs(A,v);
vector<lli>end;
bfs2(1,v,useless,end);
bfs2(A,v,diam,end);
//cout<<end.size()<<'\n';
vector<lli>fre(x+1,0);
fr(i,end.size()){
    fre[end[i]]++;}

fr1(i,x){
    if(fre[i])cout<<diam+1<<'\n';
    else cout<<diam<<'\n';
}

}

int32_t main(){
fastio;
solve();
}