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
#define take(x) lli x;cin>>x
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
lli MAXN=1e6;
vector<lli>fac(MAXN+1),inv(MAXN+1);
//computing x^y % p using binary exponentiation
lli power(lli x,lli y,lli p=MOD) {
    lli res=1;
    x=x%p;
    while (y>0) {
        if (y&1) res=(res * x)% p;
        x = (x * x)% p;
        y >>= 1;
    }
    return res;
}
void precompute() {  //computing factorial
    fac[0] =1;
    fr1(i,MAXN)
        fac[i]= (fac[i-1]*i)% MOD;

    inv[MAXN]= power(fac[MAXN],MOD-2,MOD); //inverse of fac[MAXN] using fermat theorem
    for (int i=MAXN-1; i>= 0;i--)
        inv[i]=(inv[i+1] * (i+1))% MOD;
}
lli nCr(int n, int r) {  //ncr....
    if (n<r || r<0) return 0;
    return fac[n] * inv[r]% MOD * inv[n-r]% MOD;
}


void solve(){
   
    
    cout << nCr(10, 2) << endl; 
    cout << nCr(1000, 500) << endl;  
     cout<<nCr(1,0)<<'\n';
    cout<<nCr(0,0)<<'\n';
}

int32_t main(){
fastio;
precompute();
solve();
}





