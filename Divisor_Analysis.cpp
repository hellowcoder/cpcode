//Author: sandeep172918
//Date: 2025-09-03 16:11

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define pr pair<lli,lli>
#define vll vector<lli>
#define vbl vector<bool>
#define vpr vector<pr>
#define vvll vector<vector<lli>>
#define get(v,n) vll v(n);fr(i,n)cin>>v[i]
#define ff first
#define ss second
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 struct mint{
     int x;
  
     mint (){ x = 0;}
     mint (int32_t xx){ x = xx % MOD; if (x < 0) x += MOD;}
     mint (long long xx){ x = xx % MOD; if (x < 0) x += MOD;}
  
     int val(){
         return x;
     }
     mint &operator++(){
         x++;
         if (x == MOD) x = 0;
         return *this;
     }
     mint &operator--(){
         if (x == 0) x = MOD;
         x--;
         return *this;
     }
     mint operator++(int32_t){
         mint result = *this;
         ++*this;
         return result;
     }
     
     mint operator--(int32_t){
         mint result = *this;
         --*this;
         return result;
     }
     mint& operator+=(const mint &b){
         x += b.x;
         if (x >= MOD) x -= MOD;
         return *this;
     }
     mint& operator-=(const mint &b){
         x -= b.x;
         if (x < 0) x += MOD;
         return *this;
     }
     mint& operator*=(const mint &b){
         long long z = x;
         z *= b.x;
         z %= MOD;
         x = (int)z;
         return *this;
     }
     mint operator+() const {
         return *this;
     }
     mint operator-() const {
         return mint() - *this;
     }
     mint operator/=(const mint &b){
         return *this = *this * b.inv();
     }
     mint power(long long n) const {
         mint ok = *this, r = 1;
         while (n){
             if (n & 1){
                 r *= ok;
             }
             ok *= ok;
             n >>= 1;
         }
         return r;
     }
     mint inv() const {
         return power(MOD - 2);
     }
     friend mint operator+(const mint& a, const mint& b){ return mint(a) += b;}
     friend mint operator-(const mint& a, const mint& b){ return mint(a) -= b;}
     friend mint operator*(const mint& a, const mint& b){ return mint(a) *= b;}
     friend mint operator/(const mint& a, const mint& b){ return mint(a) /= b;}
     friend bool operator==(const mint& a, const mint& b){ return a.x == b.x;}
     friend bool operator!=(const mint& a, const mint& b){ return a.x != b.x;}
    //  mint power(mint a, long long n){
    //      return a.power(n);
    //  }
     friend ostream &operator<<(ostream &os, const mint &m) {
         os << m.x;
         return os;
     }
     explicit operator bool() const {
         return x != 0;
     }
 };
  
 // Remember to check MOD
 
void solve(){
lli n;cin>>n;
map<lli,lli>m;
fr(i,n){
 lli a,b;cin>>a>>b;
 m[a]=b;
}
//number
mint num=1;
lli d=1;
for(auto &it:m){
    mint k=it.ss+1;
 num*=k;
// d*=(it.ss+1);
}
cout<<num<<' ';
//sum
mint sum=1;
for(auto &it: m){
    mint a=1;
    lli k=it.ss+1;
    mint r=it.ff;
    sum*=((r.power(k)-1)/(r-1));
}
cout<<sum<<' ';
//prod
mint numb=1,numb2=1;
bool bol=false;
for(auto &it:m){
   mint base=it.ff;
   lli e=it.ss;
   if(e&1)bol=true;
   numb*=(base.power(e));
   numb2*=(base.power(e/2));
}
d=num.val();
mint ans=1;
if(bol)ans=numb2;
ans*=numb.power(d/2);

cout<<ans;
}

int32_t main(){
fastio;
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}
