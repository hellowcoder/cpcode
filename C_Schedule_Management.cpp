//Author: sandeep172918
//Date: 2025-04-03 22:46
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
//binary search lagale bete

 bool check(lli mid,vector<lli>&fre){
   lli extra=0,need_for_extra=0;
   fr(i,fre.size()){
    if(fre[i]<=mid){
      extra+=(mid-fre[i])/2;  //spare time so that they can contribute to others
    }
    else
     need_for_extra+=(fre[i]-mid);
   }
   return extra>=need_for_extra;
 }

void solve(){
lli n,m;cin>>n>>m;get(v,m);
lli ans=0;
//map<lli,lli>ma;
vec(fre,n);
fr(i,m){
  v[i]--;
  fre[v[i]]++;
}
lli low=0,high=2*m;
while(low<=high){
  lli mid=(low+high)/2;
   if(check(mid,fre)){
     ans=mid;
     high=mid-1;
   }else low=mid+1;

}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}