//Author: sandeep172918
//Date: 2025-09-11 00:33

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
lli n,k;cin>>n;
get(v,n);
multiset<pr>ev,od;
lli e=0,o=0;
lli check=v[0];
check=count(all(v),check);
fr(i,n){
    if(i&1)od.insert({v[i],i}),o+=v[i];
    else ev.insert({v[i],i}),e+=v[i];
}
pr ev_max=*ev.rbegin();
pr ev_min=*ev.begin();
pr od_max=*od.rbegin();
pr od_min=*od.begin();
lli ans=e-o;
//cout<<od_max.ff<<'\n';
if(check==n){
  ans+=(n-1);
}
else if(ev_min.ff >= od_max.ff){
   ans=max(ans,ans+(n-1-((n%2)==0)));
   
}else{
    ans=max(ans,ans+(2*od_max.ff-2*ev_min.ff)+(abs(od_max.ss-ev_min.ss)));
}

cout<<ans<<'\n';

}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}