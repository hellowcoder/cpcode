//Author: sandeep172918
//Date: 2025-03-19 19:03
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
#define rfr(i,x) for(lli i=x-1;i>=0;i--)
using namespace std;
const int MOD=1e9+7;
lli inf=1e18;
vec2(cost,60,60);

void precal(){
   fr(i,60){
    fr(j,60){
        cost[i][j]=inf;
    }
   }
   cost[0][0]=0;
   fr(x,60){
    lli k=1LL<<x;
    rfr(i,60){
        rfr(j,60){
            if(i>=x)cost[i][j]=min(cost[i][j],cost[i-x][j]+k);
            if(j>=x)cost[i][j]=min(cost[i][j],cost[i][j-x]+k);
        }
    }
   }
}

void solve(){
lli x,y;cin>>x>>y;
lli ans=inf;
fr(i,60){
    //lli k=y;
    fr(j,60){
      if(x>>i == y>>j){
       ans=min(ans,cost[i][j]);
      }
      //k/=2;
    }
   
   // x/=2;
}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
precal();
lli tt;cin>>tt;
while(tt--){
solve();
}
}