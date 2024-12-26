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

using namespace std;
const int MOD=1e9+7;

void solve(){
    vector<lli>ans;ans.psb(1);
lli n,d;cin>>n>>d;
if(d==5){ans.psb(5);}
if(d%3==0 || n>=3) ans.psb(3);
if(d%3==0){
    if(d==9) ans.psb(9);
    else{
        if(n>=3) ans.psb(9);
    }
}else{
    if(n>=6) ans.psb(9);
}
if(n>=3) ans.psb(7);
else {
    if(d==7) ans.psb(7);
}
srt(ans);
for(auto i: ans){cout<<i<<" ";}cout<<'\n';
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}