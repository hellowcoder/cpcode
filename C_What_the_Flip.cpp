//Author: sandeep172918
//Date: 2025-08-24 11:05
// code-- B87678
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
#define vb vector<bool>
#define vp vector<pr>
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
    vector<lli> fac, inv;

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
    math() : LIM(0) {}  // initially no factorial memory

    // ---------- Lightweight Functions ----------
    static inline lli gcd(lli a, lli b){ return b ? gcd(b, a % b) : a; }
    static inline lli lcm(lli a, lli b){ return a / gcd(a,b) * b; }

    // sum of digits (single number)
    static inline lli digit_sum(lli n){
        lli s = 0;
        while(n){ s += n % 10; n /= 10; }
        return s;
    }

    // sum of digits from 1..n (O(log10 n))
    static inline lli sum_of_digits_1_to_n(lli n){
        if(n <= 0) return 0;
        __int128 ans = 0;
        for(lli f = 1; f <= n; f *= 10){
            lli higher = n / (f*10);
            lli curr   = (n / f) % 10;
            lli lower  = n % f;

            ans += (__int128)higher * 45 * f;
            ans += (__int128)curr * (curr-1)/2 * f;
            ans += (__int128)curr * (lower+1);
        }
        return (lli)ans;
    }

    // total digit count when writing 1..n
   static inline lli count_d_1_to_n(lli x){
       lli ans=0;
       for(lli i=1;i<=x;i*=10){
        ans+=(x-i+1);
       }
       return ans;
   }

    // ---------- Heavy Factorial Section ----------
    void precompute(lli limit){
        LIM = limit;
        fac.assign(LIM+1, 0);
        inv.assign(LIM+1, 0);

        fac[0] = 1;
        for(lli i=1; i<=LIM; i++) fac[i] = (fac[i-1] * i) % MOD;
        inv[LIM] = mod_pow(fac[LIM], MOD-2, MOD);
        for(lli i=LIM; i>=1; i--) inv[i-1] = (inv[i] * i) % MOD;
    }

    lli nCr(lli n, lli r) const {
        if(r < 0 || n < 0 || r > n) return 0;
        if(n > LIM) return 0; // not precomputed
        return fac[n] * inv[r] % MOD * inv[n-r] % MOD;
    }
    lli power(lli n,lli m){
        return mod_pow(n,m);
    }
};
// global declaration
math m;



void solve(){
lli n,k;cin>>n;
bool is_prev_t=false;
lli ans=2;
lli maxi=n/3;
lli t1=(n+1)/2;
lli t2=n-t1;
ans+=(m.nCr(t2,maxi)*m.power(2,maxi));
ans+=t1;


cout<<ans%MOD<<'\n';
}

int32_t main(){
fastio;
m.precompute(1e5);
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}