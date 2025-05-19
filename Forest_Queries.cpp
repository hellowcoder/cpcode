//Author: sandeep172918
//Date: 2025-05-08 20:08

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y,0));
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
lli n,q;cin>>n>>q;vec2(v,n+1,n+1);vec2(pre,n+1,n+1);
frs(i,1,n){
    frs(j,1,n){
        char c;cin>>c;
        if(c=='*')v[i][j]=1;
    }
}
frs(i,1,n){
    frs(j,1,n){
        pre[i][j]=v[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
       // cout<<pre[i][j]<<" ";
    }//cout<<'\n';
}
while(q--){
    lli i,j,u,v;cin>>i>>j>>u>>v;//cout<<i<<j<<u<<v;
    cout<<pre[u][v]-pre[i-1][v]-pre[u][j-1]+pre[i-1][j-1]<<'\n';
}
}

int32_t main(){
fastio;
solve();
}