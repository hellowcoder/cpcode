//Author: sandeep172918
//Date: 2025-04-04 21:03
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
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

void solve(){
string s;cin>>s;//priority_queue<lli>pq;
lli x=s.size();
lli extra=0,op=0;
fr(i,s.size()/2){
    lli k=s[i]-s[s.size()-i-1];
    k=abs(k);
    lli check=min(26-k,k);
   if(k&1){
     op+=check+1;
     extra++;

    }
    else op+=check;
  
}
if((op-extra) %2==0  || x%2==1)cout<<max(0LL,(op-extra+1)/2)<<'\n';
else cout<<"-1\n";
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}