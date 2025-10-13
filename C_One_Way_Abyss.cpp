//Author: sandeep172918
//Date: 2025-10-12 15:23

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
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 lli lower(vector<lli>&v,lli target,lli n){
  lli low=0,high=n-1,ans=n;
  while(low<=high){
        lli mid=(high+low)/2;
        if(v[mid]>=target){
            ans=mid;high=mid-1;
        }else{
            low=mid+1;
        }
  }
  return ans;
}
void solve(){
lli n,k;cin>>n>>k;
vector<pair<lli,pr>> adj[n+1];
fr(i,k){
    lli u,v,w;cin>>u>>v>>w;
    adj[v].push_back({i+1,{u,w}});
    adj[u].push_back({i+1,{v,w}});
}
lli ans=0;
frs(i,1,n){
 lli curr=0;
 lli x=i;
 lli id;
 if(adj[x].size())id=adj[x][0].ff;
 while(adj[x].size()){
    bool bol=true;
    pr p={0LL,0LL};
    auto check=make_pair(id,p);
    auto it=lower_bound( all(adj[x]) ,check);
    if(it==adj[x].end())break;
     
     x=(*it).ss.ff;
     id=(*it).ff+1;
     curr+=(*it).ss.ss;
     //break;

  
 }
 ans=max(ans,curr);
}
cout<<ans<<'\n';

}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}