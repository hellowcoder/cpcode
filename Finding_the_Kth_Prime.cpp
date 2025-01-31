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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
vector<lli>isprime(1e8,1);
vector<lli>v(5e6+1,0);
void primee(vector<lli>&isprime){
   for(lli i=2;i*i<=1e8;i++){
      if(isprime[i]){
        for(lli j=i*i;j<=1e8;j+=i){
            isprime[j]=0;
        }
      }
   }
}

void l(vector<lli>&is){
    for(lli i=2;i<1e8;i++){
        if(is[i]){
            is[i]+=is[i-1];
            v[is[i]]=i;
        }else{
            is[i]+=is[i-1];
        }

    }
}

void solve(){
lli x;cin>>x;
cout<<v[x]<<'\n';
}

int main(){
fastio;
isprime[0]=isprime[1]=0;
primee(isprime);
l(isprime);
lli tt;cin>>tt;
while(tt--){
solve();
}
}