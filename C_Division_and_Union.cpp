//Author: sandeep172918
//Date: 2025-09-30 00:15

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
#define srtp(v) sort(all(v),[](const auto& a,const auto& b){if(a.ff.ff== b.ff.ff)return a.ff.ss>b.ff.ss; return a.ff.ff<b.ff.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
void solve(){
lli n,k;cin>>n;
vector<pair<pr,lli>>v(n);
fr(i,n){
    cin>>v[i].ff.ff>>v[i].ff.ss;
    v[i].ss=i;
    
}
vll ans(n);
srt(v);

ans[v[0].ss]=1;
lli ind=-1;
lli prev=v[0].ff.ss;
frs(i,1,n-1){
 if(v[i].ff.ff>prev){
    ind=i;
    break;
 }
 ans[v[i].ss]=1;
 prev=max(v[i].ff.ss,prev);
}
if(ind==-1){
    no1;
    return;
}
frs(i,ind,n-1){
 ans[v[i].ss]=2;
}
out(ans);
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}