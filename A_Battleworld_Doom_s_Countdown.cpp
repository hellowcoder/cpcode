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
vector<lli>pre(101,0);
void solve(){
lli x,k;cin>>x>>k;vector<string>v;
fr(i,x){
   string s;cin>>s;
   v.psb(s);
  lli len=s.size();
  pre[len]++;
}
// fr(i,10){
//     cout<<pre[i]<<'\n';
// }
string a;cin>>a;lli check=a.size();
bool boli=f
lli sum=0;
for(lli i=0;i<check;i++){
    sum+=pre[i];
}
lli m=sum+1;
lli mini=m+(m/k)*7;
cout<<mini;
lli maxi=sum+pre[check];

maxi+=(maxi/k)*7;
cout<<" "<<maxi<<'\n';

}

int32_t main(){
fastio;

solve();
}