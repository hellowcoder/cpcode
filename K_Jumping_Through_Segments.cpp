//Author: sandeep172918
//Date: 2025-03-08 02:54
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

bool check(vector<pair<lli,lli>>&v,lli mid){
  lli x=v.size();
  lli left=v[x-1].ff,right=v[x-1].ss;
  for(lli i=x-2;i>=0;i--){
    left-=mid;right+=mid; //range of transversal
    if(v[i].ss<left  || v[i].ff>right)return false;
    left=max(left,v[i].ff);  //compressing transversal;;;;;;
    right=min(right,v[i].ss);
  }
  return true;
}

void solve(){
lli x;cin>>x;
vector<pair<lli,lli>>v(x+1);
v[0].ff=0,v[0].ss=0;   //bhencode
fr1(i,x){
    cin>>v[i].ff>>v[i].ss;
}
lli low=0,high=1e12;
while(low<=high){
    lli mid=(high+low)/2;
    bool k=check(v,mid);
    if(k){
       high=mid-1;
    }else{
       low=mid+1;
    }
}
cout<<low<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}