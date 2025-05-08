//Author: sandeep172918
//Date: 2025-04-22 10:47

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);fr(i,0,n-1)cin>>v[i]
#define out(v,n) fr(i,0,n-1)cout<<v[i]
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
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

bool check(vector<lli>&v){
  lli k=v.size();
  vector<lli>suff_sum(k),min_suff_sum(k);
  suff_sum=min_suff_sum=v;
  rfr(i,k-2,0){
    suff_sum[i]=suff_sum[i+1]+v[i];
    min_suff_sum[i]=min(min_suff_sum[i+1],suff_sum[i]);
  }
  lli s=0;
  fr(i,0,k-3){
    s+=v[i];
    if(s<0)continue;
    if(suff_sum[i+1]>=min_suff_sum[i+2])return true;

  }
  return false;
}

void solve(){
lli x,k;cin>>x>>k;
get(v,x);
lli sum=0;
fr(i,0,x-1){
   if(v[i]>k)v[i]=-1;
   else v[i]=1;
}
lli a,b;a=1e18;b=-1e18;
fr(i,0,x-1){
    sum+=v[i];
    if(sum>=0){
        a=i;break;
    }
}
sum=0;

rfr(i,x-1,0){
  sum+=v[i];
  if(sum>=0){
    b=i;
    break;
  }
}
//cout<<"la";
if(b-a>1){yes;return;}   
//cout<<"hi";
if(check(v)){yes;return;}
//cout<<"hello";
reverse(all(v));
if(check(v)){yes;return;}
no;
}




int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}