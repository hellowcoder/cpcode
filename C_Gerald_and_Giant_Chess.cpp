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
lli x,y,k;cin>>x>>y>>k;//if(x==1){cout<<"0";return;}
vector<vector<lli>>v(x,vector<lli>(y,-1));
// fr(i,x){
//     fr(j,y){
//         char c;cin>>c;
//         if(c=='*') v[i][j]=0;
//         else v[i][j]=-1;
//     }
// }
fr(i,k){
    lli a,b;cin>>a>>b;
    a--;b--;
    v[a][b]=0;
}
if(x==1 && y==1){if(v[0][0]==0)cout<<'0';else cout<<'1';return;}
if(v[x-1][y-1]==0 || (v[x-2][y-1]==0 && v[x-1][y-2]==0)) cout<<'0';    //pre obeservation
else{
    v[x-1][y-1]=0; 
    if(v[x-1][y-2] !=0) v[x-1][y-2]=1;
    if(v[x-2][y-1] !=0) v[x-2][y-1]=1;
    for(lli i=y-3;i>=0;i--){   //last column
      if(v[x-1][i]==0) continue;
      else{
         v[x-1][i]=v[x-1][i+1];
      }
      for(lli i=x-3;i>=0;i--){   //last row
      if(v[i][y-1]==0) continue;
      else{
         v[i][y-1]=v[i+1][y-1];
      }

    }
 }

for(lli i=x-2;i>=0;i--){   //dp
    for(lli j=y-2;j>=0;j--){
         if(v[i][j]==0) continue;
         else{
            v[i][j]=(v[i+1][j]+v[i][j+1])%MOD;
         }
         //cout<<v[i][j]<<" ";
    } //cout<<'\n';
}
// fr(i,x){
//     fr(j,x){
//         cout<<v[i][j]<<" ";
//     }cout<<'\n';
// }
cout<<v[0][0]%MOD<<'\n';
}
}

int main(){
fastio;
solve();
}