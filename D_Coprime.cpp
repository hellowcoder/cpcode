#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

const lli N=1e6;


void solve(){
lli x;cin>>x;lli maxs=0;
vector<lli>pre(1001,0);
fr(i,x){
lli a;cin>>a;
pre[a]=i+1;
}
frs(i,1,1001){
    frs(j,1,1001){
        lli sum=0;
        if(i==j){
            if(i!=1) continue;
        }
        
        lli k=__gcd(i,j);
        if(k==1){
          if(pre[i]&& pre[j]){
            maxs=max(maxs,pre[i]+pre[j]);
          }
        }

    }
  }
  if(!maxs)cout<<"-1\n";
  else
  cout<<maxs<<'\n';
}



int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}