//Author: sandeep172918
//Date: 2025-03-21 00:16

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

void solve(){
lli x;cin>>x;
vec2(a,2,x+1);
vector<lli>dp(x+1,0),dp1(x+1,0);
fr1(i,x)cin>>a[0][i];
fr1(i,x)cin>>a[1][i];
lli index;
dp[1]=a[0][1];
index=1;

frs(i,2,x+1){
   
    dp[i]=max(a[index][i]+dp[i-1],max(a[0][i],a[1][i])+dp[i-2]);
  
    if(dp[i]==max(a[0][i],a[1][i])+dp[i-2]){
        if(a[0][i]>=a[1][i])index=1;
        else index=0;
       
    }
    else{
        index=1-index;
    }
  
}
dp1[1]=a[1][1];
index=0;

frs(i,2,x+1){
    
     dp1[i]=max(a[index][i]+dp1[i-1],max(a[0][i],a[1][i])+dp1[i-2]);
   
     if(dp1[i]==max(a[0][i],a[1][i])+dp1[i-2]){
         if(a[0][i]>=a[1][i])index=1;
         else index=0;
       
     }
     else{
         index=1-index;
     }
   

}
cout<<max(dp[x],dp1[x])<<'\n';
}

int32_t main(){
fastio;
solve();
}