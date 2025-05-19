//Author: sandeep172918
//Date: 2025-05-08 23:20

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

//binary search lagale bete
void solve(){
lli n,q;cin>>n>>q;
vec(v,n+1,0);
frs(i,1,n)cin>>v[i];
const int mx=(lli)log2(n)+1;
vec2(st,n+1,mx);
frs(i,1,n){
    st[i][0]=v[i];
}
frs(k,1,mx-1){
    frs(i,1,n){
        if(i+(1<<(k-1))>n)
        st[i][k]=min(st[i][k-1],(lli)1e18);
        else
        st[i][k]=min(st[i][k-1],st[i+(1<<(k-1))][k-1]);
            
        
    }
}
while(q--){
    lli a,b;cin>>a>>b;
    lli ch=b-a+1;
    lli ans=1e18;
    rfr(i,mx,0){
        if((1<<i)<=ch){
          ans=min(ans,st[a][i]);
          ch-=(1<<i);
          a+=(1<<i);
        }
    }
    cout<<ans<<'\n';
}

}

int32_t main(){
fastio;
solve();
}