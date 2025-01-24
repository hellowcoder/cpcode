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

void solve(){
lli n;cin>>n;vec(pos,n);vec(tim,n);fr(i,n)cin>>pos[i];fr(i,n)cin>>tim[i];vec(total,n);
double low=mne(pos),high=mxe(pos),ans=0;
// fr(i,n){
//     lli timed=abs(pos[i])+tim[i];

// }


while(high-low>=1e-9){
  double mid=(low+high)/2.0;
  double maxt=0.0;
  fr(i,n){
    double timed=abs(pos[i]-mid)+tim[i];
    maxt=max(maxt,timed);

  }
  double l=0.0,r=0.0;
  for(lli i=low;i<mid;i++){
    double k= abs(pos[i]-(mid-1e-9))+tim[i];
    l=max(l,k);
  }
  for(lli i=mid+1;i<=high;i++){
    double k= abs(pos[i]-(mid+1e-9))+tim[i];
    r=max(r,k);
  }
  //if(r==l)ans=mid;
  if(r>l){
   // ans=mid;
    high=mid-1e-9;
  }else{
    ans=mid;
    low=mid+1e-9;
  }
}
cout<<ans<<'\n';
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}