//Author: sandeep172918
//Date: 2025-03-07 20:42
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
#define take(x) lli x;cin>>x
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
lli n,m;cin>>n>>m;
if(m==1){
    cout<<"0\n";
}
else if(n>m-1)cout<<m<<'\n'; // there will be straight pattern
else cout<<n+1<<'\n';
vec2(v,n,m);
lli k=min(n,m-1);
fr(i,k){ //m-1 is max modulo of m  so basically i am creating m*m matrix;
    fr(j,m){
        v[i][j]=(i+j)%m;
    }
}
if(n>m-1){
frs(i,m-1,n){
    fr(j,m){
        v[i][j]=j;
    }
}
}
fr(i,n){
    fr(j,m){
        cout<<v[i][j]<<" ";
    }
    cout<<'\n';
}

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}