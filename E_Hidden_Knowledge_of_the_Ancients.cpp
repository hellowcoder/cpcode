//Author: sandeep172918
//Date: 2025-09-26 21:14

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
   lli l,r;
lli n,k;cin>>n>>k>>l>>r;;
get(v,n);
map<lli,lli>m;
set<pr>st;
lli ans=0;
fr(i,n){
   lli num=v[i];
   if(m.find(num) != m.end()){
      st.erase({m[num],num});
   }
   m[num]=i;
   st.insert({m[num],num});
   if(st.size() > k+1){
      st.erase(st.begin());
   }
   if(st.size()<k)continue;
   lli low=0,high=0,check=0;
   if(st.size()==k){
     low=i-st.begin()->first+1;
     high=i+0+1;
      
   }else{
     low=i-next(st.begin())->first+1;
     high=i-(st.begin()->first+1)+1;  
   }
   check=(min(high,r)-max(low,l)+1);
     if(check>0)ans+=check;
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