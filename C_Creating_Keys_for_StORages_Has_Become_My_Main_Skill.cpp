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
#define take(lli,x) lli x;cin>>x
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

void solve(){
lli x,k;cin>>x>>k;
//cout<<'h';
lli a=(~k)&(k+1);
//lli right =
lli t=k-1;lli out=0;lli check=0;
lli i=0;
//cout<<a<<'\n';
for(i=0;i<x-1;i++){
    if(i==a)break;
    cout<<i<<" ";
    check|=i;
}
//cout<<'*'<<i<<'\n';

//cout<<'*'<<check<<'\n';
if(i==(x-1)){
    if(floor(log2(i))==floor(log2(k)))cout<<i<<" ";
    else cout<<k<<" ";
}else{
    for(int j=i;j<x;j++){
        cout<<k<<" ";
    }
}
cout<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}