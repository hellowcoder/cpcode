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
#define take(lli,x) lli x;cin>>x
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
lli x,k;cin>>x>>k;get(v,x);
 vec2(cost,x,x);vec2(dp,k,x);
 fr(i,k){
    fr(j,x){
        dp[i][j]=INT_MAX;
    }
 }
 vec(prefix,x);prefix[0]=v[0];
 frs(i,1,x){
   prefix[i]=prefix[i-1]+v[i];
 }
 fr(i,x){
    frs(j,i,x){
        lli len=j-i+1;
        if(i==0) cost[i][j]=len*(prefix[j]);
        else cost[i][j]=len*(prefix[j]-prefix[i-1]);
    }
 }
 
 fr(j,x){
    dp[0][j]=cost[0][j];
 }

 frs(i,1,k){
    fr(j,x){
       fr1(p,j){
           dp[i][j]=min(dp[i][j],dp[i-1][p-1]+cost[p][j]);
       }
    }
 }

 cout<<dp[k-1][x-1]<<'\n';
fr(i,k){
    fr(j,x){
        cout<<dp[i][j]<<" ";
    }cout<<'\n';
 }

}

int32_t main(){
fastio;
solve();
}