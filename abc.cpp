

#include <bits/stdc++.h>

#define lli long long int

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;
const int MOD=1e9+7;
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
math m;


void solve(){
lli n;cin>>n;
bool bol=m.isPrime(n);
if(bol)yes;
else no;
}

int32_t main(){
fastio;
lli tt=1;
while(tt--){
solve();
}
}