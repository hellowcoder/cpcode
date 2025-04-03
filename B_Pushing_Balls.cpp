//Author: sandeep172918
//Date: 2025-03-23 11:21

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,x,y) vector<vector<char>>v(x,vector<char>(y));
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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli n,m;cin>>n>>m;
vec2(v,n,m);
fr(i,n){
    fr(j,m)cin>>v[i][j];
}
// fr(i,n){
//     fr(j,m)cout<<v[i][j]<<" ";
//     cout<<'\n';
// }

for(lli i=n-1;i>=0;i--){
   
    for(lli j=m-1;j>=0;j--){
        if(v[i][j]=='1'){
            bool r=false,c=false;
           for(lli k=i-1;k>=0;k--){
            if(v[k][j]=='0'){c=true;break;}
           }
           for(lli k=j-1;k>=0;k--){
            if(v[i][k]=='0'){r=true;break;}
           }
          
           if(c==true && r==true){
            no;return;
           }
        }
    }
   
}
yes;
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}