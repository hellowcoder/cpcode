//Author: sandeep172918
//Date: 2025-03-25 21:14

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
vector<lli>prime(1e7+1,1);
void primee(vector<lli>& prime ,lli x){    //nlog(log(n))  prime harmonic series...
    for(lli i=2;i*i<=x;i++){
      if(prime[i]){
         for(lli j=i*i;j<=x;j+=i)
         prime[j]=0;
      }
    }
 }
vector<lli>v;
 void p(){
    frs(i,2,1e7+1){
        if(prime[i])v.psb(i);
    }
 }

void solve(){
lli x;cin>>x;
lli i=0;
lli ans=0;
lli k=v.size();
while(true){
  if(v[i]>x)break;
  ans+=(x/v[i]);
  i++;
  if(i==k)break;
}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
primee(prime,1e7+1);
p();
lli tt;cin>>tt;
while(tt--){
solve();
}
}