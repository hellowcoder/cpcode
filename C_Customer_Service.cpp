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
lli x;cin>>x;vec2(v,x,x);vec2(pre,x,x);vec(prefix,x);
fr(i,x)fr(j,x)cin>>v[i][j];
pre=v;
fr(i,x){
   
   for(lli j=x-2;j>=0;j--){
         pre[i][j]+=pre[i][j+1];
}
}
// fr(i,x){
//     fr(j,x){
//         cout<<pre[i][j]<<' ';
//     }cout<<'\n';
// }

for(lli j=x-1;j>=0;j--){
    lli mex=1e18,mex2=0;
    lli index=-1,index2=-1;
    lli count=0;
    fr(i,x){
        mex=min(mex,pre[i][j]);
        if(mex==pre[i][j])index=i;
    }
    fr(i,x){
        if(pre[i][j]==mex){
           count++;
         mex2=max(mex2,pre[i][j-1]);
         if(mex2==pre[i][j-1])index2=i;
        }
    }
  // cout<<mex<<'\n';
   prefix[j]=mex;
    if(count==1){
          fr(l,x){
        pre[index][l]=1e18;
    }
    }
    else{
      fr(l,x){
        pre[index2][l]=1e18;
    }
    }
}
prefix[0]=0;
reverse(all(prefix));
srt(prefix);
lli ans=0;
fr(i,x){
    if(prefix[i]!=i){
        cout<<i<<'\n';return;
    }
}
cout<<x<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}