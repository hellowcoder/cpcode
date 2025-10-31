//Author: sandeep172918
//Date: 2025-10-02 21:04

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

vvll dp(1LL<<20, vll (20,-1));
vvll adj;
lli n;
lli dpp(lli mask,lli ind){
    if(ind==0){
        if(mask==1)return 1;
        else return 0;
    }
    if(!(mask&(1LL<<ind)))return 0;
    if(dp[mask][ind] != -1)return dp[mask][ind];

    lli unused=mask^(1LL<<ind);
    lli ans=0;
    for(auto &it:adj[ind]){
       ans=(ans+dpp(unused,it))%MOD;
    }
    return dp[mask][ind]=ans;
}

// lli dppp(lli mask,lli ind){  //tle for some cases
//  if(mask==(1LL<<n)-1){
//     if(ind==(n-1))return 1;
//     return 0;
//  }
//  if(dp[mask][ind] != -1)return dp[mask][ind];
//  lli ans=0;

//  for(auto &it:adj[ind]){
//     lli k=1LL<<it;
//     if(k&mask)continue;
//     lli new_mask=k|mask;
//     ans=(ans+dppp(new_mask,it)%MOD)%MOD;
//  }
//  return dp[mask][ind]=ans;
// }

void solve(){
lli k;cin>>n>>k;
adj.resize(n);
fr(i,k){
    lli u,v;
    cin>>u>>v;
    u--;
    v--;
   // adj[u].psb(v);
   adj[v].psb(u);
}
// cout<<dppp(1,0);  // from 0 to n-1
cout<<dpp((1LL<<n)-1,n-1);
}

int32_t main(){
fastio;
lli tt=1;
while(tt--){
solve();
}
}