//Author: sandeep172918
//Date: 2025-08-06 19:28

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
#define out(v) frs(i,0,v.size()-1)cout<<v[i]
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
#define ff first
#define ss second
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;

lli frog(lli ind,lli k,vector<lli>&h){
    if(ind==0)return 0;
    lli mini=1e18;
    frs(i,1,k){
        if(ind-i >=0){
            lli jump=frog(ind-i,k,h)+abs(h[ind]-h[ind-i]);
            mini=min(mini,jump);
        }
    }
    return mini;
}
 
void solve(){
lli n,k;cin>>n>>k;
get(v,n);
vector<lli>dp(n,1e18);
dp[0]=0;
fr(i,n){
   
    frs(j,1,k){
        if((i-j)<0)continue;
        dp[i]=min(dp[i],dp[i-j]+abs(v[i]-v[i-j]));
    }
}
cout<<dp[n-1]<<'\n';
//cout<<frog(n-1,k,v);
}

int32_t main(){
fastio;
//solve();
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}