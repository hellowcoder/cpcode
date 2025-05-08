//Author: sandeep172918
//Date: 2025-04-24 22:36

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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli x,k;cin>>x>>k;
get(a,x);get(b,x);
lli c=count(all(b),-1);
if(c==x){
    lli mini=mne(a);
    lli maxi=mxe(a);
    lli check=k+mini-maxi+1;
    check>=0?cout<<check:cout<<"0";
    cout<<'\n';return;
}
lli sum=-123276;map<lli,lli>m;
fr(i,0,x-1){
  if(b[i]!=-1){
    sum=a[i]+b[i];
    m[sum]++;
    if(m.size()==2){
        cout<<"0\n";return;
    }
  }
}
//cout<<sum<<" ";
fr(i,0,x-1){
    if(b[i]==-1){
        lli check=sum-a[i];
        if(check<0 || check>k){
            cout<<"0\n";return;
        }
    }
}
cout<<"1\n";


}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}