//Author: sandeep172918
//Date: 2025-05-02 22:21

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v,n) frs(i,0,n-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli n,k;cin>>n>>k;
//cout<<__builtin_popcount(k)<<'\n';
if(k==0){
    if(n==1)cout<<"-1\n";
    else if(n&1){
        cout<<n+3<<'\n'; //1+2+3+1+1+1+1+1+1...`    eswaq   
    }else cout<<n<<'\n';
}else if(k==1){
    if(n&1)cout<<n<<'\n';
    else cout<<n+3<<'\n'; // 2 3 1 1 1 1 1
}else{
   lli c=__builtin_popcount(k);
   if(n<=c){
      cout<<k<<'\n';
   }else{
     if((n-c)&1)cout<<k+n-c+1<<'\n'; // 1 to be adjusted in that k term 
     else cout<<k+n-c<<'\n';
   }
}
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}