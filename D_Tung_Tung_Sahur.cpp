//Author: sandeep172918
//Date: 2025-04-16 20:42
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
#define get(v,n) vec(v,n,0);fr(i,n)cin>>v[i]
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
string p,s;cin>>p>>s;
string check1="",check2="";
vect(fr1);vect(fr2);
lli i=0;
while(i<p.size()){
    char c=p[i];
    lli count=0;
    while(p[i]==c){
        count++;
        i++;
    } 
    check1+=c;
    fr1.psb(count);
}
i=0;
while(i<s.size()){
    char c=s[i];
    lli count=0;
    while(s[i]==c){
        count++;
        i++;
    } 
    check2+=c;
    fr2.psb(count);
}
// cout<<check1<<" "<<check2<<'\n';
// for(lli &i:fr1)cout<<i<<" ";cout<<'\n';
// for(lli &i:fr2)cout<<i<<" ";cout<<'\n';
if(check1.size()!=check2.size()){no;return;}
fr(i,check1.size()){
   if(check1[i]!=check2[i]){no;return;}
   if(!(fr2[i]>=fr1[i] && fr2[i]<=2*fr1[i])){no;return;}
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