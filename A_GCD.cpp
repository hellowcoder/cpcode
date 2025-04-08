//Author: sandeep172918
//Date: 2025-04-04 20:06
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);fr(i,n)cin>>v[i]
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
vec(prime,1e5+2,1);
void primee(vector<lli>& prime ,lli x){    //nlog(log(n))  prime harmonic series...
    for(lli i=2;i*i<=x;i++){
      if(prime[i]){
         for(lli j=i*i;j<=x;j+=i)
         prime[j]=0;
      }
    }
 }
 

void solve(){
lli x,k;cin>>x>>k;
get(v,x);
vect(ve);
bool boli=false;
lli counti=0;
fr(i,x){
    if(v[i]%k==0){
        counti++;
        ve.psb(v[i]/k);
    }
    
}
if(ve.size()==0)cout<<"-1\n";
else{
    lli check=ve[0];
    frs(i,1,ve.size()){
        check=__gcd(check,ve[i]);
    }
    if(check==1)cout<<counti<<'\n';
    else cout<<"-1\n";
}
}

int32_t main(){
fastio;
primee(prime,1e5+1);
prime[0]=prime[1]=0;
lli tt;cin>>tt;
while(tt--){
solve();
}
}