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
#define yes cout<<"YES \n"
#define no cout<<"NO\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
vector<lli>prime(1e6+1,1);

void primee(){    //nlog(log(n))  prime harmonic series...
   
   for(lli i=2;i*i<=1e6;i++){
     if(prime[i]){
        for(lli j=i*i;j<=1e6;j+=i)
        prime[j]=0;
     }
   }
}

void solve(){
    lli x;cin>>x;
    
    lli k=sqrt(x);
    if(k*k==x && prime[k])yes;
    else no;
   
}

int main(){
fastio;

prime[0]=0;prime[1]=0;
primee();

lli tt;cin>>tt;
while(tt--){
solve();
}
}