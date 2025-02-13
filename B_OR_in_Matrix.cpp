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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
take(lli,x);take(lli,y);
vector<vector<lli>>v(x,vector<lli>(y)),ans(x,vector<lli>(y));
fr(i,x){
    fr(j,y){
        cin>>v[i][j];
        if(v[i][j]==0){
            fr(a,x)ans[a][j]=7; //all column;
            fr(b,y)ans[i][b]=7; //all row;
        }
    }
}
// fr(i,x){
//     fr(j,y){
//         cout<<ans[i][j]<<" ";
//     }cout<<'\n';
// }
fr(i,x){
    fr(j,y){
        if(ans[i][j]==7)ans[i][j]=0;
        else ans[i][j]=1;
       
    }
}
// fr(i,x){
//     fr(j,y){
//         cout<<ans[i][j]<<" ";
//     }cout<<'\n';
// }
fr(i,x){
    fr(j,y){
        lli sum=1;
        if(v[i][j]==1){
            sum=0;
             fr(a,x)sum+=ans[a][j];
             fr(b,y)sum+=ans[i][b];
        }
        if(sum==0){
            no;return;
        }
    }
}
yes;
fr(i,x){
    fr(j,y){
        cout<<ans[i][j]<<" ";
    }cout<<'\n';
}
}

int main(){
fastio;
solve();
}