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
lli x,y;cin>>x>>y;vec2(a,x,y);vec2(b,x,y);vec(sumrow,x);vec(sumcol,y);
fr(i,x){
    fr(j,y){
        cin>>a[i][j];
    }
}
fr(i,x){
    fr(j,y){
        cin>>b[i][j];
    }
}
fr(i,x){
   lli sum=0;
   
    fr(j,y){
       sum+=a[i][j];
    }
   sumrow[i]=sum;
}
fr(j,y){
   lli sum=0;
   
    fr(i,x){
       sum+=a[i][j];
    }
   sumcol[j]=sum;
}
// fr(i,x){
//     fr(j,y){
//         cout<<suma[i][j]<<" ";
//     }cout<<'\n';
// }
// fr(i,x){
//     cout<<sumrow[i]<<'\n';
// }
// fr(i,y){
//     cout<<sumcol[i]<<'\n';
// }
fr(i,x){
    fr(j,y){
        if(a[i][j]==b[i][j])continue;
        else{
           if(b[i][j]==0){
               if(sumrow[i]%2==0   || sumcol[j]%2==0) continue;
               else {cout<<"No\n";return;}
           }
            if(b[i][j]==1){
               if(sumrow[i]%2==1   || sumcol[j]%2==1) continue;
               else {cout<<"No\n";return;}
           }
        }
    }
}
cout<<"Yes\n";
}

int32_t main(){
fastio;
solve();
}