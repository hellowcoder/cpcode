//Author: sandeep172918
//Date: 2025-10-18 22:43

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
map<lli,vll>m; 
bool check(lli mid,vll &v){
    lli n=v.size();
    // lli maxi=0;
    // pr c={-mid,0LL};
    auto it = m.lower_bound(-mid);
    if(it==m.end())return false;
    lli check=it->second.size();
    lli cc=0;
  for(auto &ind : it->second){
    lli c=0;
    frs(i,ind,n-2){
        lli k=abs(v[i]-v[i+1]);
        lli x=v[i+1];
        x=min(x,k);
        if(x>mid){
          c++;
          break;
        }
    }
    rfr(i,ind,1){
        lli k=abs(v[i]-v[i-1]);
        lli x=v[i-1];
        x=min(x,k);
        if(x>mid){
         c++;
         break;
        }
    }
    if(c)cc++;
  }
    return cc<check;
}

void solve(){
lli n,k;cin>>n;
get(v,n);
m.clear();

fr(i,n){
  //  p[i]={-v[i],i};
    m[-v[i]].psb(i);
}

lli low=0;
lli high=mxe(v);
while(low<=high){
    lli mid=(low+high)/2;
    if(check(mid,v)){
      high=mid-1;
    }else low=mid+1;
}
cout<<low<<'\n';
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
fr(i,tt){
    cout<<"Case #"<<i+1<<": ";
    solve();
}
}