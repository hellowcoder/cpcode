//Author: sandeep172918
//Date: 2025-06-23 11:54

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
#define ff first
#define ss second
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//max(a,b)=(a+b+abs(a-b))/2
//binary search lagale bete
void solve(){
lli n,k;cin>>n>>k;
get(v,n);
vector<lli>maxi(n+1,-1e18);
maxi[0]=0;
fr(i,n){
    lli sum=0;
    frs(j,i,n-1){
      sum+= v[j];
      maxi[j-i+1]=max(maxi[j-i+1],sum);
    }
}
vector<lli>ans(n+1,0);
fr(i,n+1){
    lli best=0;
    fr(j,n+1){
        best=max(best,maxi[j]+min(i,j)*k);
    }
    ans[i]=best;
}
out(ans)<<" ";
cout<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}