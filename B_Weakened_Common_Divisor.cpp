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

void primefac(vector<lli>&v,lli a){
    lli k=a;
    for(int i=2;i*i<=k;i++){
        if(a%i==0){
            v.psb(i);
            while((a%i)==0){
              a/=i;
            }
        }
    }
    if(a>1){
        v.psb(a);
    }
}


void solve(){
take(lli,x);vector<pair<lli,lli>>v(x-1);
lli a,b;cin>>a>>b;
fr(i,x-1)cin>>v[i].ff>>v[i].ss;
vector<lli>check;lli ans=-1;
primefac(check,a);primefac(check,b);
srt(check);
for(auto &k:check){
    bool c=true;
     fr(i,x-1){
        if((v[i].ff%k!=0) && (v[i].ss%k!=0)){
            c=false;
            break;
        }
     }
    if(c){
     ans=k;
     break;
    }
}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
solve();
}