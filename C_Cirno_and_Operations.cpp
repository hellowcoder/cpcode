#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;



void solve(){
lli x;cin>>x;get(v,x);
lli maxi=accumulate(all(v),0LL);vector<lli>rev,v2,rev2;
lli maxi2=accumulate(all(v),0LL);
//rev=v;
while(x>1){
  lli sum=0,sum2=0;
  if(v[0]>=v.back()) reverse(all(v));
//   for(auto &i:v){
//     cout<<i<<"*";
//   }cout<<'\n';
//   frs(i,1,v2.size()){
//     lli k=v2[i]-v2[i-1];
//     rev2.psb(k);
//     sum2+=k;
//   }
//   maxi2=max(maxi2,sum2);
//   cout<<maxi2<<'\n';
//   for(auto &i:rev2){
//     cout<<i<<"*";
//   }cout<<'\n';
  frs(i,1,v.size()){
    lli k=v[i]-v[i-1];
     rev.psb(k);
     sum+=k;
  }
  maxi=max(maxi,sum);
//   cout<<maxi<<'\n';
//   for(auto &i:rev){
//     cout<<i<<"*";
//   }cout<<'\n';
  v.clear();
  //v2.clear();
  v=rev;
 // v2=rev2;
  //rev2.clear();
  rev.clear();
  x--;
}
cout<<maxi<<'\n';
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}