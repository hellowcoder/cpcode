//Author: sandeep172918
//Date: 2025-05-02 09:28

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v,n) frs(i,0,n-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli n,m;cin>>n>>m;
//vec2(v,n,m);
lli a;
map<lli,vector<lli>>x,y;
fr(i,n){
    fr(j,m){
        cin>>a;
        x[a].psb(i);
        y[a].psb(j);
    }
}
lli ans=0;
lli prev_sum=0;
for(auto & it: x){
    prev_sum=0;
   sort(all(it.ss));
   fr(i,it.ss.size()){
      ans+=(i*it.ss[i])-prev_sum;
      prev_sum+=it.ss[i];
   }
}

for(auto & it: y){
    prev_sum=0;
   sort(all(it.ss));
   fr(i,it.ss.size()){
      ans+=(i*it.ss[i])-prev_sum;
      prev_sum+=it.ss[i];
   }
}
cout<<ans<<'\n';



}

int32_t main(){
fastio;
solve();
}