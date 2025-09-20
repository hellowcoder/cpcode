//Author: sandeep172918
//Date: 2025-09-05 00:56

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
 
void solve(){
lli n;cin>>n;
vll a(n+1),b(n+1),pref(n+2,0),suff(n+2,0);
lli ans=0;

frs(i,1,n)cin>>a[i];
frs(i,1,n)cin>>b[i];

frs(i,1,n){
    pref[i]=pref[i-1]+a[i]*b[i];
}

rfr(i,n,1){
    suff[i]=suff[i+1]+a[i]*b[i];
}


vvll dp(n+1,vll(n+1));
frs(i,1,n){  //base
   dp[i][i]=a[i]*b[i];
}

frs(r,1,n){
    frs(l,1,r){
        if(r==l)continue;
        dp[r][l]=max(dp[r][l],dp[r-1][l+1]+a[r]*b[l]+a[l]*b[r]);
    }
}


frs(r,1,n){
    frs(l,1,r){
        ans=max(ans,dp[r][l]+pref[l-1]+suff[r+1]);
    }
}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}