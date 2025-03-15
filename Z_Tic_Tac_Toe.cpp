//Author: sandeep172918
//Date: 2025-03-07 13:45
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
vector<string>s(11);
fr(i,11)getline(cin,s[i]);
lli x,y;cin>>x>>y;
//fr(i,11)cout<<s[i]<<'\n';
//cout<<s[3];
x--;y--;
x%=3;y%=3;
x*=3;y*=3;
if(x==3)x=4;
if(x==6)x=8;
if(y==3)y=4;
if(y==6)y=8;
bool booli=true;
//cout<<x<<y;
for(lli i=x;i<x+3;i++){
    for(lli j=y;j<y+3;j++){
        if(s[i][j]=='.'){
            booli=false;
            s[i][j]='!';
        }
    }
}
if(booli){
    fr(i,11){
        fr(j,11){
            if(s[i][j]=='.')s[i][j]='!';
        }
    }
}
fr(i,11)cout<<s[i]<<'\n';
}

int32_t main(){
fastio;
solve();
}