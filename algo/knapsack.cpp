//Author: sandeep172918
//Date: 2025-05-22 19:00

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
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y,0));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v,n) frs(i,0,n-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//binary search lagale bete
lli knapsack(lli ind,lli w,vector<lli>&weight,vector<lli>&val){
    if(ind==0){
        if(weight[ind]<=w)return val[ind];
        else return 0;
    }
   
    lli pick=INT_MIN;
    lli non_pick=knapsack(ind-1,w,weight,val);
    if(weight[ind]<=w)pick=val[ind]+knapsack(ind-1,w-weight[ind],weight,val);
    return max(pick,non_pick);
    
}

//memoisation

lli knapsack(lli ind,lli w,vector<lli>&weight,vector<lli>&val,vector<vector<lli>>&dp){ // dp=-1
    if(ind==0){
        if(weight[ind]<=w)return val[ind];
        else return 0;
    }
    if(dp[ind][w]!=-1)return dp[ind][w];
    lli pick=INT_MIN;
    lli non_pick=knapsack(ind-1,w,weight,val,dp);
    if(weight[ind]<=w)
       pick=val[ind]+knapsack(ind-1,w-weight[ind],weight,val,dp);
    return dp[ind][w]=max(pick,non_pick);
    
}

//tabulation

lli knapsack(lli W,vector<lli>&weight,vector<lli>&val){  //dp =0;
    lli n=weight.size();
    vec2(dp,n,W+1);
    frs(w,weight[0],W) dp[0][w]=val[0];  //minimum weight[0] chor bhar skta hai

    frs(ind,1,n-1){
    frs(w,0,W){

    lli pick=INT_MIN;
    lli non_pick=dp[ind-1][w];
    if(weight[ind]<=w)pick=val[ind]+dp[ind-1][w-weight[ind]];
    
    dp[ind][w]=max(pick,non_pick);
        }
    }
    return dp[n-1][W];
}

//space otimisation by two array prev and curr

lli knapsack(lli W,vector<lli>&weight,vector<lli>&val){  //dp =0;
    lli n=weight.size();
   // vec2(dp,n,W+1);
    vec(prev,W+1,0);
    vec(curr,W+1,0);
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

//space optimisation by single array

// if you carefully observer there is no such dp[ind][w]=dp[ind][...] .... means no dependenvy of previousa val of cuurr array 

lli knapsack(lli W,vector<lli>&weight,vector<lli>&val){  //dp =0;
    lli n=weight.size();
    //vec2(dp,n,W+1);
    vec(dp,W+1,0);
   // frs(w,weight[0],W) dp[w]=val[0];  //minimum weight[0] chor bhar skta hai

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

void solve(){

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}