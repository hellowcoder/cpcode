//Author: sandeep172918
//Date: 2025-04-07 23:49
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);fr(i,n){cin>>v[i];v[i]--;}
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
lli x;cin>>x;get(v,x) 
get(v1,x)
map<lli,lli>m;lli count=0,index=-1;
fr(i,x){                                                                
    m[v[i]]=v1[i];
    if(v[i]==v1[i]){
        count++;
        index=i;
    }
}
fr(i,x){
    if(m[v1[i]]!=v[i]){cout<<"-1\n";return;}
}
vec(pre,x,-1);  //it will give me index where i was present earlier....
fr(i,x){
    pre[v[i]]=i;
}
vec(pos,x,-1);  //
vector<bool>boli(x,false);
if(x&1){
    if(count!=1){cout<<"-1\n";return;}
    pos[x/2]=index;
    fr(i,x){
        if(pos[i]!=-1){
            
        }
    }
 
 }
else{
if(!count){cout<<"-1\n";return;}

 }
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}