//Author: sandeep172918
//Date: 2025-05-26 20:13

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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
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
string s;cin>>s;
lli a=count(all(s),'0');
lli b=x-a;
//cout<<a<<" "<<b<<'\n';
lli c=max(a,b);
lli d=min(a,b);
lli e=c-d;
e/=2;
e-=k;

if(e==0)yes;
else if(e>0){
  no;
}else{
  e=abs(e);
  if(e%2==0  && d>=(e/2))yes;
  else no;
}
// if(c<0){
//     no;return;
// }
// if(c==d)yes;
// else no;
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}