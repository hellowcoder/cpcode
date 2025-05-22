//Author: sandeep172918
//Date: 2025-05-21 09:48

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
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y,-1));
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

vector<lli>pre(1001,1001);

void printi(){
    pre[1]=0;
  frs(i,1,1000){
    rfr(j,i,1){
        lli k=i+i/j;
        if(k<1000){
            pre[k]=min(pre[k],pre[i]+1);
        }
    }
  }
}

lli maxi(lli ind,lli w,vector<lli>&weight,vector<lli>&val,vector<vector<lli>>&dp){
    if(ind==0){
        if(weight[ind]<=w)return val[ind];
        else return 0;
    }
    if(dp[ind][w]!=-1)return dp[ind][w];
    lli pick=INT_MIN;
    lli non_pick=maxi(ind-1,w,weight,val,dp);
    if(weight[ind]<=w)pick=val[ind]+maxi(ind-1,w-weight[ind],weight,val,dp);
    return dp[ind][w]=max(pick,non_pick);
    
}

void solve(){
lli x,k;cin>>x>>k;
vec(b,x,0);
fr(i,x){
    cin>>b[i];
   b[i]=pre[b[i]];
  // cout<<b[i]<<" ";

}
get(c,x);
//cout<<'\n';
vec2(dp,x,k+1);
cout<<maxi(x-1,k,b,c,dp)<<'\n';
}

int32_t main(){
fastio;
printi();
lli tt;cin>>tt;
while(tt--){
solve();
}
}