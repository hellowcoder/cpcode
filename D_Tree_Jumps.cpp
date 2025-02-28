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
const int MOD=998244353;

void solve(){
lli x;cin>>x;
vec(child,x+1);  //number of child
vec(par,x+1);
vec(dep,x+1);  //at which depth it is present 
frs(i,2,x+1){
   cin>>par[i];
   child[par[i]]++;
   dep[i]=dep[par[i]]+1;
}
vector<vector<lli>>ind(x+1);
frs(i,1,x+1){
  ind[dep[i]].psb(i);
}
lli parent=1;
vector<lli>dp(x+1,0);
// fr(i,ind.size()){
//     for(lli &k:ind[i])cout<<k<<" ";
//     cout<<'\n';
// }
frs(i,1,x+1){    //depth transversal
    if(ind[i].size()==0)continue;
    for(lli &k : ind[i]){   //all index of that depth
        dp[k]=parent-dp[par[k]];   //removing contribution fron there parent
        if(dp[k]<0)dp[k]+=MOD;
    }
    parent=0;
    for(lli &k : ind[i]){
        parent=(parent+dp[k])%MOD;
    }
    parent%=MOD;
}
//fr(i,x+1)cout<<dp[i]<<" ";cout<<'\n';
lli total=1;
fr(i,x+1){
  total=(total+dp[i])%MOD;
}
cout<<total%MOD<<'\n';

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}