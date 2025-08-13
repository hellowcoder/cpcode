//Author: sandeep172918
//Date: 2025-05-05 00:11

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v,n) frs(i,0,n-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
vector<lli>prime(1e6+1,1);
vector<lli>pri,pref;
void primee(vector<lli>& prime ,lli x){    //nlog(log(n))  prime harmonic series...
    for(lli i=2;i*i<=x;i++){
      if(prime[i]){
         for(lli j=i*i;j<=x;j+=i)
         prime[j]=0;
      }
    }
 }
 void print(){
  fr(i,1e6){
    if(prime[i])pri.psb(i);
  }
  lli k=pri.size();
  pref.resize(k);
  pref[0]=pri[0];
  frs(i,1,k-1){
   pref[i]=pref[i-1]+pri[i];
  }
 }

void solve(){
lli x;cin>>x;get(v,x);
lli check=accumulate(all(v),0LL);
if(pref[x-1]<=check)cout<<"0\n";
else{

}
}

int32_t main(){
fastio;
primee(prime,1e6);
prime[0]=prime[1]=0;
print();
lli tt;cin>>tt;
while(tt--){
solve();
}
}