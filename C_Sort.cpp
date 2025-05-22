//Author: sandeep172918
//Date: 2025-05-21 07:39

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//binary search lagale bete
void solve(){
lli x,k;cin>>x>>k;
string s,s2;cin>>s>>s2;
vec2(v,x+1,26);
vec2(v2,x+1,26);
fr(i,x){
   fr(j,26){
    
     v[i+1][j]=(v[i][j]+ (s[i]-'a'==j));
     v2[i+1][j]=(v2[i][j]+ (s2[i]-'a'==j));
       }
}
// fr(i,26){
//     cout<<v[4][i]<<" ";
   
// }cout<<'\n';
// fr(i,26) cout<<v2[4][i]<<" ";
// cout<<'\n';
while(k--){
lli l,r;cin>>l>>r;
l--;
lli sum=0,ans=0;
fr(i,26){
    sum=(v[r][i]-v[l][i]);
    sum-=(v2[r][i]-v2[l][i]);
    if(sum>0)ans+=sum;
}
cout<<ans<<'\n';
}

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}