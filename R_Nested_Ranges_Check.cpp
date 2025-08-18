//Author: sandeep172918
//Date: 2025-08-16 22:40

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
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//max(a,b)=(a+b+abs(a-b))/2
//min(a,b)=(a+b-abs(a-b))/2

//binary search lagale bete

// four stage of dp  
//  --think in term of index i,j whatever 
 //   --find bse case --  
//   -- find relation  
//   -- good to go
 
//chicken nugget formula 
//   -- max number which can be written in form of ax+by where __gcd(x,y)=1 id x*y-x-y 
//  -- total(x-1)(y-1)/2 numbers can be written in that form
 
 
 
void solve(){
lli n,k;cin>>n;
vector<pair<pr,lli>>v(n);
fr(i,n){
    cin>>v[i].ff.ff>>v[i].ff.ss;
    v[i].ss=i;
}
sort(all(v),[](const auto& a,const auto& b){
    if(a.ff.ff==b.ff.ff) return a.ff.ss>b.ff.ss;
    return a.ff.ff<b.ff.ff;
});

vector<lli>a(n);
//fr(i,n)cout<<v[i].ff.ff<<v[i].ff.ss<<'\n';
lli r=1e18;
rfr(i,n-1,0){
   if(v[i].ff.ss>=r){
    a[v[i].ss]=1;

   }
   else {
    a[v[i].ss]=0;
   }
    
    r=min(r,v[i].ff.ss);
}
out(a)<<' ';
cout<<'\n';

lli l=-1e18;
fr(i,n){
    if(v[i].ff.ss<=l){
        a[v[i].ss]=1;
    }else{
        a[v[i].ss]=0;
    }
    l=max(l,v[i].ff.ss);
}
out(a)<<' ';

}

int32_t main(){
fastio;
lli tt=1;
// cin>>tt;
while(tt--){
solve();
}
}