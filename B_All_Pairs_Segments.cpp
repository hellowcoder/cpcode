//Author: sandeep172918
//Date: 2025-05-24 19:18

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
#define out(v,n) frs(i,0,n-1)cout<<v[i]
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
lli x,k=0,q;cin>>x>>q;
get(v,x);get(w,q);
vector<lli>c(x);
map<lli,lli>m;
// m[x+1]++;c[0]=x-1;
// lli curr=x-2;
// frs(i,1,(x+1)/2-1){
//     c[i]=c[i-1]+curr;
//     curr-=2;
//     m[c[i]]++;
// }
// rfr(i,x-1,(x+1)/2){
//     c[i]=c[k++];
//     m[c[i]]++;
// }
// out(c,x)<<" ";
// cout<<'\n';
fr(i,x){
    k=(i+1)*(x-i)-1;
    m[k]++;
}
frs(i,1,x-1){
    k=i*(x-i);
    m[k]+=(v[i]-v[i-1]-1);
}
fr(i,q)cout<<m[w[i]]<<" ";
cout<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}