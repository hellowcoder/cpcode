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

vector<lli>spf(1e6+7),divisor(1e6+7,1);

void print(){
    fr(i,1e6+1+7){
      spf[i]=i;
    }
    for(lli i=2;i*i<=1e6+7;i++){
        if(spf[i]==i){
            for(lli j=i*i;j<=1e6+7;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
} 

void divi(){
   
    fr1(i,1e6+7){
         lli ans=1,count=1;
        lli k=i;
      while(k-1){
          lli s=spf[k];
          count=0;
          while(k%s==0){
              count++;
              k/=s;
          }
          ans*=count;
      }
      divisor[i]=ans;
    }
}

void solve(){    
   lli x;cin>>x;
   cout<<divisor[x]<<'\n';

}



int main(){
fastio;
print();
divi();
lli tt;cin>>tt;
while(tt--){
solve();
}
}