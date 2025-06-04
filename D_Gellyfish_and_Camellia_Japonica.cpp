//Author: sandeep172918
//Date: 2025-05-31 21:32

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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//binary search lagale bete
void solve(){
lli x,k;cin>>x>>k;

vec(v,x+1,0);
frs(i,1,x)cin>>v[i];

vec2(a,k,3);
fr(i,k){
    cin>>a[i][0]>>a[i][1]>>a[i][2];
}

auto ans=v;
rfr(i,k-1,0){
   lli t=ans[a[i][2]];
   ans[a[i][2]]=0;
  ans[a[i][0]]=max(ans[a[i][0]],t);
  ans[a[i][1]]=max(ans[a[i][1]],t);

}
auto temp=ans;
fr(i,k){
  temp[a[i][2]]=min(temp[a[i][0]],temp[a[i][1]]);
}
if(temp==v){
    frs(i,1,x)cout<<ans[i]<<" ";
    cout<<'\n';
}
else cout<<"-1\n";
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}