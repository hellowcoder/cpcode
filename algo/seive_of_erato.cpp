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
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void print(vector<lli>&spf,lli x){
    for(lli i=2;i*i<=x;i++){
        if(spf[i]==i){
            for(lli j=i*i;j<=x;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
} 

void solve3(){    //prime factorisation....
   lli x;cin>>x;
   vec(spf,x+1);
   fr(i,x+1){
    spf[i]=i;
   }
   print(spf,x);
   while(x-1){
      cout<<spf[x]<<'\n';
      x/=spf[x];
   }

}

   

void primee(vector<lli>& prime ,lli x){    //nlog(log(n))  prime harmonic series...
   for(lli i=2;i*i<=x;i++){
     if(prime[i]){
        for(lli j=i*i;j<=x;j+=i)
        prime[j]=0;
     }
   }
}

void solve(){
    lli x;cin>>x;
    vector<lli>prime(x+1,1);
    prime[0]=prime[1]=0;
     
     primee(prime,x);
    frs(i,2,x+1){
      if(prime[i]) cout<<i<<'\n';
    }
}

void solve2(){
    lli x;cin>>x;
    for(lli i=2;i*i<=x;i++){
       
        if(x%i==0){
           cout<<i<<'\n';
           while(x%i==0){
              x/=i;
           }
        }
    }
    if(x!=1) cout<<x<<'\n';
}

//.................................................................................................................................
int main(){
fastio;
//solve();  //prime numbers
//solve2();  //printing prime factors..
solve3(); //printing prime factorisation  using smallest prime factor;
}
//....................................................................................................................................
