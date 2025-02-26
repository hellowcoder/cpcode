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
lli n,a,b;cin>>n>>a>>b;get(v,n);vec(av,n);vec(bv,n);
fr(i,n){
    av[i]=v[i]%a;
    bv[i]=v[i]%b;
}
srt(av);srt(bv);lli ans=0;
lli b_low,b_up,a_low,a_up;
lli check=bv[0];
fr(i,n){
if(bv[i]!=check){
b_low=lower_bound(all(bv),bv[i])-bv.begin();
b_up=upper_bound(all(bv),bv[i])-bv.begin();
a_low=lower_bound(all(av),av[i]==0 ? 0 : a-av[i])-av.begin();
a_up=upper_bound(all(av),av[i]==0 ? 0 : a-av[i])-av.begin();
ans+=(abs(max(a_low,b_low)-min(a_up,b_up))+1);
}
check=bv[i];
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