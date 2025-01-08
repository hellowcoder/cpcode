#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
string s;cin>>s;vec(pre,s.size());
if(s[0]=='Q')pre[0]=1;lli count=0;
frs(i,1,s.size()){
    if(s[i]=='Q')pre[i]=pre[i-1]+1;
    else pre[i]=pre[i-1];
}
frs(i,1,s.size()){
  if(s[i]=='A'){
    lli k=pre[s.size()-1]-pre[i-1];
    lli m=pre[s.size()-1]-k;
    count+=(k*m);
  }
}
//cout<<pre[s.size()-1]<<'\n';
cout<<count<<'\n';
}

int main(){
fastio;
solve();
}