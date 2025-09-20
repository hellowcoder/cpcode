//Author: sandeep172918
//Date: 2025-09-07 21:05

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
 
void solve(){
lli n,k;cin>>n>>k;
get(v,n);
lli mex=0,mex2=-1;
vll fq(n+1,0);
fr(i,n){
    if(v[i]<=n)
    fq[v[i]]++;
}
while(fq[mex])mex++;
fr(i,mex){
    if(fq[i]>=2){
        mex2=i;
        break;
    }
}
if(k==1){
     lli sum=0;
     lli curr=0;
     fr(i,mex){
      if(fq[i]==1){
        curr++;
        sum+=i;
      }
     }
     cout<<(n-curr)*mex+sum<<'\n';

    return;
}

lli ans=0;
if(mex2 != -1){

    lli prev=mex2*(mex2-1)/2;
    lli check=n-mex2;
    
      if(k&1){
        ans=prev+check*(mex2+1);

      }else{
        ans=prev+check*mex2;
      }
  
}else{
  lli prev=mex*(mex-1)/2; //itne to ayenge hi ayenge
  lli check=n-mex;
    if(check==0)ans=prev;
    else if(check==1)ans=prev+mex;
    else{
    if(k&1){
        ans=prev+check*mex;
    }else{
        ans=prev+check*(mex+1);
    }
}
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