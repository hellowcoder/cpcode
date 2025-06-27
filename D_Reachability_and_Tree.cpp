//Author: sandeep172918
//Date: 2025-06-23 21:33

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v) frs(i,0,v.size()-1)cout<<v[i]
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
#define ff first
#define ss second
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//max(a,b)=(a+b+abs(a-b))/2
//binary search lagale bete

void dfs(vector<vector<lli>>& adj,vector<lli>&visited,lli node,lli v,lli k){
        visited[node]=1;
        if(node==v){
           cout<<v+1<<" "<<adj[v][0]+1<<'\n';
           dfs(adj,visited,adj[v][0],v,!k);
           cout<<adj[v][0]+1<<" "<<v+1<<'\n';
           dfs(adj,visited,adj[v][1],v,k);
        }else{
        for(auto &i : adj[node]){
            if(!visited[i]){
                if(k)cout<<node+1<<" "<<i+1<<'\n';
                else cout<<i+1<<" "<<node+1<<'\n';
                dfs(adj,visited,i,v,!k);
            }
        }
    }
}
void solve(){
lli n,k;cin>>n;
// UnionFind uf(n);
vector<vector<lli>>adj(n);
lli u,v;
fr(i,n-1){
 cin>>u>>v;
 u--;
 v--;
 adj[u].psb(v);
 adj[v].psb(u);
}
lli s=-1;
fr(i,n){
 if(adj[i].size()==2){s=i;break;}
}
if(s==-1){no;return;}
yes;
vector<lli>vis(n,0);
dfs(adj,vis,s,s,0);



}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}