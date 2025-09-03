//Author: sandeep172918
//Date: 2025-09-02 23:47

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
 

 class math {
    lli LIM;
    vector<lli> fac, inv,spf;
    vector<bool> isprime;
    // --- fast pow (modular exponentiation) ---
    static inline lli mod_pow(lli a, lli e, lli m=MOD){
        lli r = 1 % m;
        a %= m;
        while(e){
            if(e & 1) r = (__int128)r * a % m;
            a = (__int128)a * a % m;
            e >>= 1;
        }
        return r;
    }

public:
    math() : LIM(0) {}



    // ---------- Miller-Rabin + Pollard-Rho ----------
    static inline lli mulmod(lli a, lli b, lli mod){
        return (__int128)a * b % mod;
    }

    static lli powmod(lli a, lli d, lli mod){
        lli r = 1;
        while(d){
            if(d & 1) r = mulmod(r, a, mod);
            a = mulmod(a, a, mod);
            d >>= 1;
        }
        return r;
    }

    static bool isPrime(lli n){
        if(n < 2) return false;
        for(lli p : {2,3,5,7,11,13,17,19,23,29,31,37})
            if(n % p == 0) return n == p;
        lli d = n-1, s = 0;
        while((d & 1) == 0){ d >>= 1; ++s; }
        for(lli a : {2,325,9375,28178,450775,9780504,1795265022}){
            if(a % n == 0) continue;
            lli x = powmod(a, d, n);
            if(x == 1 || x == n-1) continue;
            bool composite = true;
            for(int r=1; r<s; r++){
                x = mulmod(x, x, n);
                if(x == n-1){ composite = false; break; }
            }
            if(composite) return false;
        }
        return true;
    }
    


};
// global declaration
math m;

//max(a,b)=(a+b+abs(a-b))/2
//min(a,b)=(a+b-abs(a-b))/2

//chicken nugget formula 
//   -- max number which can be written in form of ax+by where __gcd(x,y)=1 id x*y-x-y 
//  -- total(x-1)(y-1)/2 numbers can be written in that form 






void solve(){
lli n,k;cin>>n;
if(m.isPrime(n))yes;
else no;

}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}