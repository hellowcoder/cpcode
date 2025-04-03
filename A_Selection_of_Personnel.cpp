//Author: sandeep172918
//Date: 2025-03-24 21:59
#include <bits/stdc++.h>
#define lli long long 
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

lli c(lli x,lli r){
    lli res=1;
    fr(i,r){
        res=res*(x-i)/(i+1);
    }
    return res;
}

void solve(){
lli x;cin>>x;
lli k=c(x,5)+c(x,6)+c(x,7);
cout<<k<<'\n';
//cout<<nc5(x)<<'\n'<<nc6(x)<<'\n'<<nc7(x);
}

int32_t main(){
fastio;
//precompute();
solve();
}