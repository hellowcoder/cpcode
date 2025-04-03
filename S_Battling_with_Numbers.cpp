//Author: sandeep172918
//Date: 2025-03-30 23:21
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
const int MOD=998244353;

lli power(lli x,lli y,lli p=MOD) {
    lli res=1;
    x=x%p;
    while (y>0) {
        if (y&1) res=(res * x)% p;
        x = (x * x)% p;
        y >>= 1;
    }
    return res;
}
void solve(){
lli x;cin>>x;get(lc,x);get(lcp,x);
lli y;cin>>y;get(gc,y);get(gcp,y);
map<lli,lli>lcmm,gcdd;
fr(i,x){
    lcmm[lc[i]]=lcp[i];
}
fr(i,y){
    gcdd[gc[i]]=gcp[i];
}
fr(i,y){
    if(lcmm[gc[i]]==0 || lcmm[gc[i]]<gcdd[gc[i]]){
        cout<<"0";return;
    }
    else{
        lcmm[gc[i]]-=gcdd[gc[i]];
    }
}
lli count=0;
for(auto &i:lcmm){
    if(i.ss>0)count++;
}
cout<<power(2,count);
}

int32_t main(){
fastio;
solve();
}