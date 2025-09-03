//Author: sandeep172918
//Date: 2025-09-02 01:11

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
#define vvvll(dp,n,k,m) vector<vector<vector<lli>>> dp(n+1, vector<vector<lli>>(k, vector<lli>(m, -1)));
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;




lli dppp(string maxi,lli n,bool tight,lli prev,vector<vector<vector<lli>>>&dp){ 
    if(n==0){
        return 1;
    }
  //  if(dp[n][prev][tight]!= -1)return dp[n][prev][tight];
    lli ub=tight ? (maxi[maxi.size()-n]-'0'):9;
    lli c=0;
    fr(i,ub+1){
        
            if(i==prev)continue;
            c+=dppp(maxi,n-1,tight&(i==ub),i,dp);
        
    }
    return c;
   // return dp[n][prev][tight]=c;
}

void solve(){
string r;lli l;cin>>l>>r;
l--;
string ll=to_string(l);

vvvll(dp,r.size(),10,2);
vvvll(dpp,ll.size(),10,2);

cout<<dppp(r,r.size(),1,-1,dp)-dppp(ll,ll.size(),1,-1,dpp);
}

int32_t main(){
fastio;
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}