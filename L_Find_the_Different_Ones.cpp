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
#define get(v,n) vec(v,n);fr1(i,n)cin>>v[i]
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
lli x;cin>>x;

vector<lli>v(x+1,-1);
//map<lli,lli>m;
lli pre;lli a;cin>>pre;
frs(i,2,x+1){
       //storing alst indexed 
       cin>>a;
  if(pre==a){
     v[i]=v[i-1];
  }
  else{
    v[i]=i-1;
    pre=a;
  }
}
//frs(i,1,x+1)cout<<v[i]<<" ";cout<<'\n';
lli n;cin>>n;
while(n--){
    lli a,b;cin>>a>>b;
    if(v[b]>=a)cout<<b<<" "<<v[b]<<'\n';
    else cout<<"-1 -1\n";
}
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
cout<<'\n';
}
}



