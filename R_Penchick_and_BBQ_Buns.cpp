//Author: sandeep172918
//Date: 2025-03-05 18:01
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
lli x;
cin>>x;
lli l=1;
if(x%2){
    if(x<27) cout<<"-1"<<endl;
       else{
          cout<<"13 2 2 3 3 4 4 5 5 13 1 6 6 7 7 8 8 9 9 10 10 11 11 12 12 13 1 ";
          for(int i=14 ;i<=x/2;i++){
            cout<<i<<" "<<i<<" ";
          }cout<<endl;
       }
       }
else{
       fr(i,x/2){
          cout<<l<<" "<<l<<" ";
          l++;
       }cout<<endl;
    
    }
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}