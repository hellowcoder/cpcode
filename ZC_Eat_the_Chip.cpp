//Author: sandeep172918
//Date: 2025-03-07 13:17
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli n,m,xa,ya,xb,yb;cin>>n>>m>>xa>>ya>>xb>>yb;
lli x=abs(xa-xb),y=abs(ya-yb);string ans="";
if(x&1){  //alice or draw;;;
 
  if(xa>=xb) ans="Draw";
  else{
    // ans="LODE";
    if(y>=x-1)ans="Draw";
    else if(yb>ya && m>yb)ans="Draw";
    else if(yb<ya && yb>1) ans="Draw";
    else if(ya==yb && (yb>3 || (m-yb)>1))ans="Draw";
    else ans="Alice";

  }
}else{  //bob or draw;;;;
  if(xa>=xb) ans="Draw";
  else{
       lli k=x/2;//number of moves
      //  if(ya>yb)ans="Draw";
      //  else{
        //  if(y<=x)ans="Bob"; //concern needed
        //  else ans="Draw";
        if(y>=x)ans="Draw";
        else if(ya>yb && m>ya)ans="Draw";
        else if(ya<yb && ya>1) ans="Draw";
        else if(ya==yb && (ya>3 || (m-ya)>1))ans="Draw";
        else ans="Bob";
       
  }
}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}