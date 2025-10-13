//Author: sandeep172918
//Date: 2025-10-11 18:56

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
#define bitc(x) __builtin_popcountll(x)
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
 
lli dpp(vll &v){
 lli n=v.size();
 if(n==1){
    return 0;
 }
 if(n==2){
    return abs(v[0]-v[1]);
 }
 vll dp(n,1e18);
 frs(i,1,n-1){
    //two ka group
    dp[i]=abs(v[i]-v[i-1])+((i-2)>=0 ? dp[i-2]:0);
    
    //three
    if(i>=2){
        lli a=abs(v[i]-v[i-2])+abs(v[i]-v[i-1]);
        lli b=abs(v[i-1]-v[i-2])+abs(v[i-1]-v[i]);
        lli c=abs(v[i-2]-v[i])+abs(v[i-2]-v[i-1]);
        dp[i]=min(dp[i],min({a,b,c})+((i-3)>=0 ? dp[i-3]:0));
    }

 }
 return dp.back(); ;

}

void solve(){
lli n,k;cin>>n;
get(v,n);

lli a=dpp(v);
k=v.back();
rfr(i,n-1,1){
    v[i]=v[i-1];
}
v[0]=k;
lli b=dpp(v);
k=v.back();
rfr(i,n-1,1){
    v[i]=v[i-1];
}
v[0]=k;
lli c=dpp(v);
cout<<min({a,b,c})<<'\n';

}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}