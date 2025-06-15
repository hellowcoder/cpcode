//Author: sandeep172918
//Date: 2025-06-11 12:29

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
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<lli>fac(1e6+7);
void precompute() {  //computing factorial
    fac[0] =1;
    frs(i,1,1e6+1)
        fac[i]= (fac[i-1]*i)% MOD;
}
//binary search lagale bete
void solve(){
lli n,k;cin>>n;
get(v,n);
lli mini=mne(v);
lli counti=count(all(v),mini);
if(counti<2){
    cout<<"0\n";
    return;
}
fr(i,n){
    if((mini&v[i]) != mini){
        cout<<"0\n";
        return;
    }
}
lli ans=(counti*(counti-1))%MOD;
ans=ans*fac[n-2];
cout<<ans%MOD<<'\n';

}

int32_t main(){
fastio;
precompute();
lli tt;cin>>tt;
while(tt--){
solve();
}
}