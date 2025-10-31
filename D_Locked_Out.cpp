//Author: sandeep172918
//Date: 2025-10-30 23:25

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
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
void solve(){
lli n,k;cin>>n;
get(v,n);
map<lli,lli>m;
ordered_set<pr>os;
fr(i,n)os.insert({v[i],i});

lli ans=0;

// vll t;
// for(auto &it:m){
//     t.psb(it.ff);
// }
// out(t);
// rfr(i,t.size()-1,0){
//     lli check=t[i];
//     lli a=m[check];
//     lli b=m[check+1];
//     if(a<b){
//         ans+=a;
//         m[check]=0;
//     }else{
//         ans+=b;
//         m[check+1]=0;
//     }
// }


fr(i,n){
  os.erase({v[i],i});
  m[v[i]]++;
  lli a=m[v[i]-1];
  lli b=m[v[i]];
  lli c=os.order_of_key({v[i]+1,0})-os.order_of_key({v[i],0});

  cout<<a<<' '<<b<<' '<<c<<'\n';

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
