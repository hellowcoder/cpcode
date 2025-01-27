#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void dfs(vector<vector<int>>& adj,vector<int>&df,vector<int>&visited,int node){
        visited[node]=1;
        df.push_back(node);
        for(auto &i : adj[node]){
            if(!visited[i]){
                dfs(adj,df,visited,i);
            }
        }
    }
vector<int> dfsOfGraph(vector<vector<int>>& adj) {
       
        vector<int >df;
        vector<int>visited(adj.size(),0); 
        int node=0;
        dfs(adj,df,visited,node);
        for(auto &i: df){
            cout<<i<<" ";
        }
    }
void solve(){

}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}