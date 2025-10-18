//Author: sandeep172918
//Date: 2025-10-17 18:55

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
 
lli score(lli src,vll &p,vll& val,lli k){
    lli n=p.size();
    vll vis(n,0);
    lli maxi=0;
    lli curr=0;
    while(k && !vis[src]){
        maxi=max(maxi,curr+val[src]*k);
        vis[src]=1;
        
        curr+=val[src];
        src=p[src];
        k--;
      //  cout<<maxi<<' ';
    }
    return maxi;
}

void solve(){
lli n,k,a,b,s;cin>>n>>k>>b>>s;
b--;
s--;


get(v,n);
fr(i,n)v[i]--;
get(val,n);
lli sum1=score(b,v,val,k);
lli sum2=score(s,v,val,k);
// vll bb,ss;
// bb.psb(val[b]);
// lli check=b;
// b=v[b];
// while(b!=check){
//     bb.psb(val[b]);
//     b=v[b];
// }
// check=s;
// ss.psb(val[s]);
// s=v[s];
// while(s!=check){
//     ss.psb(val[s]);
//     s=v[s];
// }
// out(bb);
// out(ss);
// lli sum1=0,sum2=0;
// lli curr=0,curr2=0;
// fr(i,k){
//   sum1=max(sum1,bb[i]*(k-i)+curr);
//   sum2=max(sum2,ss[i]*(k-i)+curr2);

//   curr+=bb[i];
//   curr2+=ss[i];
// }
if(sum1>sum2)cout<<"Bodya\n";
else if(sum2>sum1)cout<<"Sasha\n";
else cout<<"Draw\n";

}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}