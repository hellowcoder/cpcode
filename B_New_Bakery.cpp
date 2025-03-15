//Author: sandeep172918
//Date: 2025-03-13 22:12
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

lli sum(lli n,lli a,lli b,lli mid){
    lli k=b-mid;
   return (n-mid)*a+b*(b+1)/2-k*(k+1)/2;
}

void solve(){
lli n,a,b;cin>>n>>a>>b;
lli low=0,high=min(n,b),ans=0;
while(low<=high){
    lli mid1=low+(high-low)/3;
    lli mid2=high-(high-low)/3;
    lli check1=sum(n,a,b,mid1);
    lli check2=sum(n,a,b,mid2);
    if(check1>check2){
       ans=check1;
      high=mid2-1;
    }
    else if(check2>check1){
        low=mid1+1;
    }else{
        ans=check1;
      low=mid1+1;
      high=mid2-1;
    }
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