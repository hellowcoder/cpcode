//Author: sandeep172918
//Date: 2025-05-24 09:53

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
// lli score(lli x,lli &c,vector<lli>&v,vector<bool>&used){
//     if(x==0){
//       if(v.size()>0){
//         if(used[x+1])return -1e16;
//         else return v[x];
//       }
//       return v[x];
//     }
//     lli pick=INT_MIN;
//     lli non_pick=INT_MIN;
//     if(x>0 && x<v.size()-1){
//         if(!used[x+1]){
//              used[x]=true;
//             pick=max(v[x],score(x-2,c,v,used));
//             c++;
//         }
//     }
//     return max(pick,non_pick)+c;
// }

void solve(){
lli x;cin>>x;
lli v,e=0,o=0;
frs(i,1,x){
  cin>>v;
  if(i&1){
    o=max(o,v);

  }
  else e=max(e,v);
}
o+=(x+1)/2;
e+=(x/2);
cout<<max(o,e)<<'\n';



}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}