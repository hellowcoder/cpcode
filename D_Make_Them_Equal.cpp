//Author: sandeep172918
//Date: 2025-10-13 01:02

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

// vvll dp;

lli val(lli x,lli tar){
  lli c=0;
  while(x<tar){
    c++;
    x*=2;
  }
  return c;
}

// lli dpp(lli id,lli W,vll &b,vll&c){
//  if(id==0){
//    if(b[id]<=W)return c[id];
//    else return 0;
//  }
//  if(dp[id][W]!=-1)return dp[id][W];
//  lli nopick=dpp(id-1,W,b,c);
//  lli pick=0;
//  if(b[id]<=W)pick=c[id]+dpp(id-1,W-b[id],b,c);
//  return dp[id][W]=max(pick,nopick);
// }
lli ops[1001];

void pre(){
   fr(i, 1001)
    {
        ops[i] = 1e18;
    }
    ops[1] = 0;
 
    for (lli i = 1; i <= 1000; i++)
    {
        for (lli x = 1; x <= i; x++)
        {
            if (i + i / x <= 1000)
            {
                ops[i + i / x] = min(ops[i + i / x], ops[i] + 1);
            }
        }
    }
 
}

void solve(){
lli n,k;cin>>n>>k;
get(b,n);
get(c,n);
lli ans=0;
fr(i,n){
  b[i]=ops[b[i]];
 // if(!b[i])ans+=c[i];
}
k=min(12*n,k);

vll dp(k+1);
// cout<<dpp(n-1,k,b,c)<<'\n';

fr(i,n){
 rfr(j,k,b[i]){
  dp[j]=max(dp[j],dp[j-b[i]]+c[i]);
 }
}

cout<<dp[k]<<'\n';
}

int32_t main(){
fastio;
pre();
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}