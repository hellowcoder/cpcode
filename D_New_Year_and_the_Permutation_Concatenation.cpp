//Author: sandeep172918
//Date: 2025-09-30 18:15

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
const int MOD=998244353;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
lli LIM;
vector<lli> fac, inv,spf;
    
  void precompute_fac(lli limit){
        LIM = limit;
        fac.assign(LIM+1, 0);
       // inv.assign(LIM+1, 0);

        fac[0] = 1;
        for(lli i=1; i<=LIM; i++) fac[i] = (fac[i-1] * i) % MOD;
        // inv[LIM] = mod_pow(fac[LIM], MOD-2, MOD);
        // for(lli i=LIM; i>=1; i--) inv[i-1] = (inv[i] * i) % MOD;
    }




void solve(){
lli n,k;cin>>n;
vll dp(n+1,0);
dp[1]=1;
dp[2]=2;
// dp[3]=dp[2]*3 +3*(2!-1);
// dp[4]=dp[3]*4+ 4*(3!-1);

frs(i,3,n){
    dp[i]=i*dp[i-1]+i*((fac[i-1]-1+MOD)%MOD);
    dp[i]%=MOD;
}
cout<<dp[n];
}

int32_t main(){
fastio;
precompute_fac(1e6+1);
lli tt=1;
while(tt--){
solve();
}
}