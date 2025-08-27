//Author: sandeep172918
//Date: 2025-08-27 00:59

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
// string ans="";
// lli dpp(lli i,lli j,string &a,string &b,vvll &dp){
//    if(i<0 || j<0)return 0;
//    if(dp[i][j]!=-1)return dp[i][j];
//    if(a[i]==b[j]){
    
//      return dp[i][j]= dpp(i-1,j-1,a,b,dp)+1;
     
//    }
//    return dp[i][j]=max(dpp(i-1,j,a,b,dp),dpp(i,j-1,a,b,dp));
// }
 
void solve(){
string a,b;cin>>a>>b;
lli n=a.size();
lli m=b.size();
vvll dp(n+1,vll(m+1,0));

frs(i,1,n){
    frs(j,1,m){
        if(a[i-1]==b[j-1])dp[i][j]=dp[i-1][j-1]+1;
        else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
}
string ans="";
lli i=n,j=m;
while(i>0 && j>0){
    if(a[i-1]==b[j-1]){
      ans+=a[i-1];
      i--;
      j--;
    }
    else if(dp[i-1][j]>dp[i][j-1])i--;
    else j--;
}
if(ans.size())reverse(all(ans));
cout<<ans;
}

int32_t main(){
fastio;
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}