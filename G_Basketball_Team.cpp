//Author: sandeep172918
//Date: 2025-08-23 20:16

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
#define vb vector<bool>
#define vp vector<pr>
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

void solve(){
lli n,m,k;cin>>n>>m>>k;
get(v,m);
double ans = 0;
k--;
double c=accumulate(all(v),0LL);
if(c<n){
    no1;return;
}
double a=c-v[k];
double b=c-1;
if(a<n-1){
    cout<<setprecision(6)<<fixed<<1.0<<'\n';
    return;
}
if(v[k]==1){
    cout<<setprecision(6)<<fixed<<0.0<<'\n';
    return;
}
double curr=1;
n--;
fr(i,n){
 curr*=(a/b);
 a--;
 b--;

 if(b==0){
    b=1;
  
 }
 if(a==0) a=1;
}
ans=1.0-curr;
cout<<setprecision(6)<<fixed<<ans<<'\n';
}

int32_t main(){
fastio;
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}