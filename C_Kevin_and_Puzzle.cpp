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
const int MOD=998244353;

void solve(){
lli x;cin>>x;vec(v,x+1);fr1(i,x)cin>>v[i];vector<lli>track(x+1,0);if(x==1){if(v[1]==0)cout<<"2\n";else cout<<"1\n";return;}
fr1(i,x){
    if(v[i]>=i) continue;
    if(i<=2 && v[i]==i-1){
        track[i]=1;
    }
    if(i>=2 && v[i]==v[i-1]){
        track[i]+=track[i-1];
    }
    if(i>=3 && v[i]==v[i-2]+1){
        track[i]+=track[i-2];
    }
    track[i]%=MOD;
}
lli ans= track[x]+track[x-1];
cout<<ans%MOD<<'\n';
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}