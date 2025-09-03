//Author: sandeep172918
//Date: 2025-08-31 17:43

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
const lli MOD=1e18;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


vvll ncr;  // global binomial coefficients

void precompute_ncr(int N=50) {
    ncr.assign(N+1, vll(N+1, 0));
    for (int i=0; i<=N; i++) {
        ncr[i][0] = 1;
        for (int j=1; j<=i; j++) {
            ncr[i][j] = ncr[i-1][j-1] + ncr[i-1][j];
        }
    }
}



map<tuple<lli,lli,lli>,lli>m;
vll v;
vll pref;
lli dpp(lli ind,lli need,lli can_take){
   if(ind<need)return 0;
   if(need==0)return 1;
   
   if(can_take >= pref[ind])return ncr[ind][need];

   tuple state={ind,need,can_take};
   if(m.count(state))return m[state];

   lli no_take=dpp(ind-1,need,can_take);

   lli take=0;
   if(v[ind-1]<=can_take)take=dpp(ind-1,need-1,can_take-v[ind-1]);  

   return m[state]=take+no_take;
}

void solve(){
lli n,k;cin>>n>>k;
v.assign(n,0);
fr(i,n)cin>>v[i];
lli l,r;
cin>>l>>r;
srt(v);
pref.assign(n+1,0);
frs(i,1,n)pref[i]=pref[i-1]+v[i-1];

lli ans=dpp(n,k,r)-dpp(n,k,l-1);
cout<<ans<<'\n';
}

int32_t main(){
    fastio;
precompute_ncr();

lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}