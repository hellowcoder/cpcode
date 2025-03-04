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
vector<lli>prime(1e5+23,1);
vector<lli>s;
void primee(vector<lli>& prime ,lli x){    //nlog(log(n))  prime harmonic series...
    for(lli i=2;i*i<=x;i++){
      if(prime[i]){
         for(lli j=i*i;j<=x;j+=i)
         prime[j]=0;
      }
    }
 }

 
 void print(vector<lli>&s){
    frs(i,2,1e5){
        if(prime[i]){
            s.psb(i);
        }
    }
 }

lli getting(lli k,vector<lli>&s){
    lli ans=1,n=k,index=0;
  while(s[index]*s[index]<=n){
        lli div=s[index];
        if(k%div==0){
           lli count=0;
           while(k%div==0){
              count++;
              k/=div;
           }
           if(count&1){
            ans*=div;
           }
        }
        index++;
    }
    if(k>1)ans*=k;
    return ans;
}

void solve(){
lli n,k;cin>>n>>k;get(v,n);
fr(i,n){
    v[i]=getting(v[i],s);
    //cout<<v[i]<<" ";
}
set<lli>s;lli count=0;
s.insert(v[0]);
frs(i,1,n){
 if(s.find(v[i])!=s.end()){
    count++;
    s.clear();
    s.insert(v[i]);

 }else{
    s.insert(v[i]);
 }
}
if(s.find(v.back())!=s.end()){
    count++;
}
cout<<count<<'\n';
}

int32_t main(){
fastio;
primee(prime,1e5+1);
prime[0]=prime[1]=0;
print(s);

lli tt;cin>>tt;
while(tt--){
solve();
}
}