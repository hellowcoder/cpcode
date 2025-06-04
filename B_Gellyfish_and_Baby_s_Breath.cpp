//Author: sandeep172918
//Date: 2025-05-31 20:19

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
const int MOD=998244353;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//binary search lagale bete
lli power(lli x,lli y,lli p=MOD) {
    lli res=1;
    x=x%p;
    while (y>0) {
        if (y&1) res=(res * x)% p;
        x = (x * x)% p;
        y >>= 1;
    }
    return res%p;
}
void solve(){
lli x;cin>>x;
get(p,x);
get(q,x);
lli max1=p[0];
lli max2=q[0];
lli max1i=0;
lli max2i=0;
cout<<(power(2,p[0])+power(2,q[0]))%MOD<<" ";
frs(i,1,x-1){
  if(p[i]>max1){
    max1=p[i];
    max1i=i;
  }
  if(q[i]>max2){
    max2=q[i];
    max2i=i;
  }
  lli option1 = (power(2,p[max1i])+power(2,q[i-max1i]))%MOD;
  lli option2 = (power(2,p[max2i])+power(2,q[i-max2i]))%MOD;
  cout<<max(option1,option2)<<" ";
}
cout<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}