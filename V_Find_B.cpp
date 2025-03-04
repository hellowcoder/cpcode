//Author: sandeep172918
//Date: 2025-03-04 23:13
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
#define get(v,n) vec(v,n+1);fr1(i,n)cin>>v[i]
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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli x,q;cin>>x>>q;get(v,x);
vec(pre1,x+1);vec(pre2,x+1);
pre1[0]=0;
fr1(i,x){
    pre1[i]=pre1[i-1]+v[i];
}
fr1(i,x){
    if(v[i]==1)v[i]=2;
    else v[i]=1;      
}
pre2[0]=0;
fr1(i,x){
    pre2[i]=pre2[i-1]+v[i];
}
while(q--){
    lli a,b;cin>>a>>b;
    if(a==b)no;
    else{
    lli sum1=pre1[b]-pre1[a-1]; //req
    lli sum2=pre2[b]-pre2[a-1]; //minimum
   // cout<<sum1<<" "<<sum2<<'\n';
   
    if(sum1>=sum2)yes;
    else no;
    }
}
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}