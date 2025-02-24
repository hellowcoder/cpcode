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

bool cus(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first)
        return a.first > b.first;  // Sort first element in descending order
    return a.second < b.second;    // Sort second element in ascending order
}

void solve(){
lli n,k;cin>>n>>k;get(v,n);vector<pair<lli,lli>>p(n);
fr(i,n){
    if(v[i]%k==0)v[i]=k;
    else v[i]%=k;
    p[i]={v[i],i+1};
}
sort(all(p),cus);
for(auto &i : p){
   cout<<i.ss<<" ";
}cout<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}