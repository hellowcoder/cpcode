//Author: sandeep172918
//Date: 2025-03-06 12:24
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
lli n,m;cin>>n>>m;
get(a,n);get(b,n);
fr(i,n) b[i]=min(b[i],a[i]);
lli suff=0;
frs(i,m,n){
    suff+=b[i];
}
vec(v,m+1);
for(lli i=m-1;i>=0;i--){
    v[i]=v[i+1]+b[i];
}
lli ans=1e18;
fr(i,m){
    ans=min(ans,a[i]+v[i+1]);
}
ans+=suff;
cout<<ans<<'\n';
// lli check=0;
// vec(dp,n+1);
// fr(i,n){
//     dp[i]=a[i];
// }
// for(lli i=n-1;i>=0;i--){
//     dp[i]=min(dp[i+1]+a[i],dp[i]+check);
//     check+=b[i];
// }
// cout<<*min_element(dp.begin(),dp.begin()+m)<<'\n';

//cout<<ans<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}