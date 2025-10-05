//Author: sandeep172918
//Date: 2025-10-04 23:31

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define pr pair<lli,lli>
#define vll vector<lli>
#define vbl vector<bool>
#define vpr vector<pr>
#define vvll vector<vector<lli>>
#define get(v,n) vll v(n);fr(i,n)cin>>v[i]
#define ff first
#define ss second
#define bitc(x) __builtin_popcountll(x)
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
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 vll v(101,10000);
 void pre(){
fr(i,101){
    fr(ft,8){
       fr(tn,11){
         fr(sx,18){
            fr(thr,35){
                lli sum=i*1+ft*15+tn*10+sx*6+thr*3;
                if(sum<=100){
                    v[sum]=min(v[sum],i+ft+tn+sx+thr);
                }
            }
         }
       }
    }
}
 }
void solve(){
lli n,k;cin>>n;

if(n<=100){
    cout<<v[n]<<'\n';
}else{
    k=(n-75)/15;
    lli ans=k;
    n-=(k*15);
    ans+=v[n];
    cout<<ans<<'\n';
}
}

int32_t main(){
fastio;
pre();
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}