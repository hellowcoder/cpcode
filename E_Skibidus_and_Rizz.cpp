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
#define no cout<<"-1\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli n,m,k;cin>>n>>m>>k;bool rev=false;
if(n<m){swap(n,m);rev=true;}string ans="";
if(k<abs(n-m) || k>n){no;return;}
fr(i,k)ans+='0';  //how smart i am
n-=k;
while(m>0){
    ans+='1';
   m--;
   if(n>0){ans+='0';n--;}
}
if(rev){
    fr(i,ans.size()){
      if(ans[i]=='1')cout<<'0';
      else cout<<'1';
    }cout<<'\n';
}else
cout<<ans<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}