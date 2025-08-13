//Author: sandeep172918
//Date: 2025-08-12 22:22

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
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
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
get(v,7);
vector<lli>vv(14);
lli sum=accumulate(all(v),0);

if(n<=sum){
    lli mini=1e9;
    lli curr=0;
    lli i=0,j=0;
    while(i<n && j<n){
      curr+=v[i++];
        while(curr>n){
            curr-=v[j++];
        }
     mini=min(mini,i-j+1);
    }
    cout<<mini<<'\n';
    return;
}

fr(i,14){
    vv[i]=v[i%7];
}
lli maxi=0;
lli curr=0;
fr(i,7){
    maxi+=vv[i];
}
cout<<maxi<<" ";
curr=maxi;
frs(i,7,13){
    curr-=vv[i-7];
    curr+=vv[i];
    maxi=max(maxi,curr);
}
cout<<maxi<<" ";
lli maxiii=(n*7)/maxi;
lli check=maxiii%7;
cout<<maxiii<<' ';
cout<<check<<"\n";

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}