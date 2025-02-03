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
#define yes cout<<"Yes\n"
#define no cout<<"No \n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

lli mexi(vector<lli>&v){
    vector<bool>vis(INT_MAX,false);
    for(auto &i:v){
        if(i<INT_MAX){
            vis[i]=true;
        }
    }
    lli res=0;
    while(vis[res]){
        res++;
    }
    return res;
}

void solve(){
take(lli,n);get(v,n);
if(n==1){if(v[0]==0)no;else yes;return;}
lli mex= mexi(v);
//cout<<mex<<" ";
lli mini=mne(v);
if(mex==0){
    yes;return;
}
 if(count(all(v),mex+1)==1) {yes;return;}
if(v[0]==mini || v.back()==mini){
   
}else no;
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}