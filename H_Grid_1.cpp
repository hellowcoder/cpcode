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
#define take(lli,x) lli x;cin>>x
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
lli n,m;cin>>n>>m;//if(x==1){cout<<"0";return;}
vector<vector<lli>>v(n,vector<lli>(m));
fr(i,n){
    fr(j,m){
        char c;cin>>c;
        if(c=='#') v[i][j]=0;
        else v[i][j]=-1;
    }
}
if(n==1 && m==1){if(v[0][0]==0)cout<<'0';else cout<<'1';return;}
if(v[n-1][m-1]==0 || (v[n-2][m-1]==0 && v[n-1][m-2]==0)) cout<<'0';    //pre obeservation
else{
    v[n-1][m-1]=0; 
       if(v[n-1][m-2] !=0) v[n-1][m-2]=1;
       if(v[n-2][m-1] !=0) v[n-2][m-1]=1;
    for(lli i=m-3;i>=0;i--){   //last column
      if(v[n-1][i]==0) continue;
      else{
         v[n-1][i]=v[n-1][i+1];
      }
      for(lli i=n-3;i>=0;i--){   //last row
      if(v[i][m-1]==0) continue;
      else{
         v[i][m-1]=v[i+1][m-1];
      }

    }
 }

for(lli i=n-2;i>=0;i--){   //dp
    for(lli j=m-2;j>=0;j--){
         if(v[i][j]==0) continue;
         else{
            v[i][j]=(v[i+1][j]+v[i][j+1])%MOD;
         }
         //cout<<v[i][j]<<" ";
    } //cout<<'\n';
}
// fr(i,n){
//     fr(j,m){
//         cout<<v[i][j]<<" ";
//     }cout<<'\n';
// }
if(v[0][0]==(-1))cout<<"0";
else
cout<<v[0][0]%MOD<<'\n';
}
}

int main(){
fastio;
solve();
}