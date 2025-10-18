//Author: sandeep172918
//Date: 2025-10-17 21:31

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
 
void solve(){
lli n,k;cin>>n>>k;
vll pref(n+1);
vpr c(k);
fr(i,k){
    lli l,r;cin>>l>>r;
    c[i]={l-1,r-1};
    pref[l-1]++;
    pref[r]--;
}
vll v(n);
v[0]=pref[0];
frs(i,1,n-1){
 v[i]=v[i-1]+pref[i];
}
vpr p(n);
fr(i,n){
    p[i]={v[i],i};
}
srt(p);
vll ans(n);
vll ans2(n);
fr(i,n){
    ans[p[i].ss]=i;
}
rsrt(p);
fr(i,n){
    ans2[p[i].ss]=i;
}
set<lli>st;
fr(i,n+1)st.insert(i);
set<lli>t;
set<lli>t1=st;
set<lli>t2=st;
fr(i,k){
 t=st;
 frs(j,c[i].ff,c[i].ss){
    t.erase(ans[j]);
 }
 t1.erase(*t.begin());
}
fr(i,k){
 t=st;
 frs(j,c[i].ff,c[i].ss){
    t.erase(ans2[j]);
 }
 t2.erase(*t.begin());
}
lli tt1=*t1.begin();
lli tt2=*t2.begin();
if(tt1<tt2){
   fr(i,n)cout<<ans[i]<<' ';
   cout<<'\n';
}
else{
 fr(i,n){
    cout<<ans2[i]<<' ';
   
 }
  cout<<'\n';
}
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}