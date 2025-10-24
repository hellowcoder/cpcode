//Author: sandeep172918
//Date: 2025-10-24 20:32

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
 
bool part(lli x,lli mid){
     lli check=x/mid;
     if(check==3 && (x%mid==0))return true;
     if(check>=4)return true;
     return false;

}

bool check(lli mid,vll &v,lli k){
    lli n=v.size();
    lli curr=0;
    fr(i,n){
       if(v[i]%mid){ 
        if(part(v[i],mid))continue;
        else curr++;
       }
    }
    return curr<=k;
}



void solve(){
lli n,k;cin>>n>>k;
get(v,n);
lli ans=1;
srt(v);
map<lli,lli>m;
fr(i,n){
    m[v[i]]++;

}


frs(i,2,n){
 lli count=upper_bound(all(v),4*i-1)-v.begin();
 // remove 2 one 1 one
 count-=m[3*i];
 count-=m[2*i];
 count-=m[i];

 if(count<=k)ans=max(ans,i);
}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}