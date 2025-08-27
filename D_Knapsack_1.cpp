//Author: sandeep172918
//Date: 2025-08-27 00:49

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


//space optimisation by single array

// if you carefully observer there is no such dp[ind][w]=dp[ind][...] .... means no dependenvy of previousa val of cuurr array 

lli knapsack(lli W,vector<lli>&weight,vector<lli>&val){  //dp =0;
    lli n=weight.size();
    //vec2(dp,n,W+1);
    vll dp(W+1,0);
    frs(w,weight[0],W) dp[w]=val[0];  //minimum weight[0] chor bhar skta hai

    frs(ind,1,n-1){
      rfr(w,W,0){

    lli pick=INT_MIN;
    lli non_pick=dp[w];
    if(weight[ind]<=w)
        pick=val[ind]+dp[w-weight[ind]];
    
    dp[w]=max(pick,non_pick);
        }
    }
    return dp[W];
}

//space otimisation by two array prev and curr

lli knapsackk(lli W,vector<lli>&weight,vector<lli>&val){  //dp =0;
    lli n=weight.size();
   // vec2(dp,n,W+1);
    vll prev(W+1,0);
    vll curr(W+1,0);
    frs(w,weight[0],W) prev[w]=val[0];  //minimum weight[0] chor bhar skta hai

    frs(ind,1,n-1){
    frs(w,0,W){

    lli pick=INT_MIN;
    lli non_pick=prev[w];
    if(weight[ind]<=w)pick=val[ind]+prev[w-weight[ind]];
    
    curr[w]=max(pick,non_pick);
        }
        prev=curr;
    }
    return prev[W];
}

void solve(){
lli n,k;cin>>n>>k;
vll wt(n);
vll val(n);
fr(i,n){
    lli x,y;cin>>x>>y;
    wt[i]=x;
    val[i]=y;
}
cout<<knapsack(k,wt,val);
}

int32_t main(){
fastio;
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}