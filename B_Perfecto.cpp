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
vector<lli>pre(500007,0);
void prc(){
    fr1(i,500000){
        lli k=i*(i+1)/2;
        lli s=sqrt(k);
        if(s*s==k)pre[i]=1;
    }
}

void solve(){
lli x;cin>>x;vec(v,x+1);
if(pre[x])cout<<"-1\n";
else{
    fr1(i,x){
        v[i]=i;
    }
    fr1(i,x){
        if(pre[i]){
          swap(v[i],v[i+1]);
        }
    }
    fr1(i,x)cout<<v[i]<<" ";
    cout<<'\n';
}
}

int32_t main(){
fastio;
prc();
lli tt;cin>>tt;
while(tt--){
solve();
}
}