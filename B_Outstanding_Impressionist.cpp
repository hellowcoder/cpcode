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
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
vector<lli>pre(400001,0);
lli x;cin>>x;vector<pair<lli,lli>>v(x);fr(i,x){lli a,b;cin>>a>>b;v[i]={a,b};if(a==b){pre[a]++;}}string a;
fr(i,x){
    if(v[i].ff==v[i].ss){
        if(pre[v[i].ff]>=2) a+='0';
        else a+='1'; 
        }
    else{
     bool boolo =true;
       for(lli j=v[i].ff;j<=v[i].ss;j++){
        if(pre[j]==0){
            a+='1';
            boolo=false;
            break;
        }
       }
       if(boolo){
        a+='0';
       }

    }

  
}
cout<<a<<'\n';
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}