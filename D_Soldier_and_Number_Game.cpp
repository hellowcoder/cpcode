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
vector<lli>fact(5000001);
vector<lli>isprime(5000001,0);
vector<lli>arr(5000001,0);

void pre(vector<lli>&isprime,vector<lli>&arr){
frs(i,2,5000001){
        if(isprime[i] == 0){
            for(lli j=i; j<=5000000; j += i){
                lli v = j;
                while(v % i == 0){
                    v /= i;
                    arr[j]++;
                }
                isprime[j] = 1;
            }
        }
    }
}


void solve(){
lli a,b;cin>>a>>b;lli ans=0;

ans=arr[a]-arr[b];
cout<<ans<<'\n';
}

int main(){
fastio;

pre(isprime,arr);
for(lli i=1;i<arr.size();i++){
    arr[i]+=arr[i-1];
}
lli tt;cin>>tt;
while(tt--){
solve();
}
}