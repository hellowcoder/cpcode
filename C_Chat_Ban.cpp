//Author: sandeep172918
//Date: 2025-03-28 23:30
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

lli s(lli x){
    return x*(x+1)/2;
}
lli check(lli mid,lli k){
    if(mid>k) return s(k)+s(k-1)-s(2*k-1-mid);
    else return s(mid);
}

void solve(){
lli k,x;cin>>k>>x;
lli low=1,high=2*k-1;
while(low<high){
    lli mid=(low+high)/2;
    lli c=check(mid,k);
    if(c<x){
        low=mid+1;
    }else{
        high=mid;
    }
}
cout<<low<<endl;
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}