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

vector<lli> prime(lli x){
    vector<lli>ans;
    for(lli i=2;i*i<=x;i++){
        if(x%i==0){
           ans.psb(i);
           while(x%i==0){
              x/=i;
           }
        }
    }
    if(x>1)ans.psb(x);
    return ans;
}
lli counter(lli y,lli k){
    lli count=0;
    while(y>1){
        count++;
        y=y/k;
    }
    return count;
}
lli binpow(lli a,lli b) {
    lli res=1;
    while(b>0) {
        if (b&1)
            res=(res*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return res;
}
void solve(){
take(lli,x);take(lli,y);lli pro=1;
vector<lli>k=prime(x);

vector<pair<lli,lli>>p;
for(auto & i:k){
    //cout<<i<<" "<<y<<" ";
   lli a=counter(y,i);
   //cout<<counter<<'\n';
   a=(a*(a+1)/2);
   p.push_back({i,a});
 }

for(auto &i:p){
   pro=(pro%MOD)*((binpow(i.ff,i.ss))%MOD);
   pro%=MOD;
}
cout<<pro%MOD<<'\n';
//cout<<counter(64,2);
}
int main(){
fastio;
solve();
}