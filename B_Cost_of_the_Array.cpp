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
#define take(lli,x) lli x;cin>>x
#define get(v,n) vec(v,n+1);fr1(i,n)cin>>v[i]
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
lli n,k;cin>>n>>k;get(v,n);
if(n==k){               //brute one
    for(lli i=2;i<=n;i+=2){
        if(v[i] != i/2){
            cout<<i/2<<'\n';return;
        }
    }
    cout<<k/2+1<<'\n';return;
}
lli c=count(v.begin()+2,v.begin()+n-k+2+1,1);
//cout<<"*"<<c<<'\n';
if(c==n-k+1) cout<<"2\n";
else cout<<"1\n";
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}