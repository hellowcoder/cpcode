//Author: sandeep172918
//Date: 2025-08-24 20:45

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
#define vb vector<bool>
#define vp vector<pr>
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

void bfss(map<lli,vll,greater<lli>>&m,lli level,vll &ans){
  if(level==1)return;

  lli prev=ans.back();
  for(auto &it:m[level-1]){
    cout<<"? "<<prev<<"2 "<<prev<<' '<<it<<'\n';
    cout.flush();
    lli curr;cin>>curr;
    if(curr==2){
       ans.psb(it);
       bfss(m,level-1,ans);
       break;
    }
  }
}
 
void solve(){
lli n;cin>>n;

vll v(n+1);

lli maxx=0,max_ind=-1;
frs(j,1,n){
    cout<<"? ";
    cout<<j<<' ';
    cout<<n<<' ';
    frs(i,1,n)cout<<i<<' ';
  cout.flush();
  cin>>v[j];
  if(v[j]>=maxx){
    maxx=v[j];
    max_ind=j;
  }
  
}
map<lli,vll,greater<lli>>m;
frs(i,1,n){
  m[v[i]].psb(i);
}

vll ans;
ans.push_back(max_ind);

bfss(m,maxx,ans);


cout<<"! ";
cout<<ans.size()<<' ';
out(ans);

cout.flush();
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}