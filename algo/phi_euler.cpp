
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

//individual based upto 1e14
lli phi_c(lli x){
    if(x==1)return 0;
    lli pre=x;
   for(lli i=2;i*i<=x;i++){
     if(x%i==0){
        pre=pre-pre/i;
        while(x%i==0)x/=i;
     }
   }
   if(x>1)pre=pre-pre/x;
   return pre;
}

//query based
vector<lli>phi(1e6+1);

void phi_q(){    //same idea like sum of divisor......;
    iota(all(phi),0);
    frs(i,2,1e6+1){
         if(phi[i]==i){
            for(lli j=i;j<=1e6;j+=i){
                phi[j]=phi[j]-phi[j]/i;
            }
         }
    }

    
}

void solve(){
lli n;cin>>n;
cout<<phi[n]<<'\n';
}

int32_t main(){
fastio;
phi_q();
lli tt;cin>>tt;
while(tt--){
solve();
}
}