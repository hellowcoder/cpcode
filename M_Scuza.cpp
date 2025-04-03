//Author: sandeep172918
//Date: 2025-03-30 10:55
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
lli x,q;cin>>x>>q;get(v,x);get(que,q);
//fr(i,q)cout<<que[i];
lli maxi=0,sum=0;
map<lli,lli>m;
fr(i,x){
    maxi=max(maxi,v[i]);
    sum+=v[i];
    m[maxi]=sum;
}
// for(auto &i :m){
//     cout<<i.ff<<" "<<i.ss<<'\n';
// }
vector<lli>pre;
pre.psb(-1);//to maintain upper bound
for(auto & i:m){
    pre.psb(i.ff);
}
//fr(i,pre.size())cout<<pre[i]<<" ";cout<<'\n';
fr(i,q){
   auto k=upper_bound(all(pre),que[i]);
   if(k==pre.end())cout<<sum<<" ";
   else{
      lli n=k-pre.begin()-1;
      cout<<m[pre[n]]<<" ";
   }

   
}
 cout<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}