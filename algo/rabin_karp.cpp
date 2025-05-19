//Author: sandeep172918
//Date: 2025-04-26 15:42

#include <bits/stdc++.h>
#define lli long long int
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define fr(i,n) for(lli i=0;i<n;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);fr(i,0,n-1)cin>>v[i]
#define out(v,n) fr(i,0,n-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
lli hashed(string s,lli st){
 lli ans=1;
 fr(i,s.size()){
  ans*=((s[i]-'a'+1)*(1LL<<st));
   st--;
 }
 return ans;
}
bool rabin(string text,string k){
    lli n=text.size();
    lli m=k.size();
    lli pre=hashed(k,n-1);
    fr(i,n-m){
        string sub=text.substr(i,m);
        lli check=hashed(sub,n-1);
        if(check==pre){
           if(sub==k)return true;
            
        }
    }
return false;
}
void solve(){
string k,text;cin>>text>>k;
cout<<bool(rabin(text,k))<<'\n';
}

int32_t main(){
fastio;
solve();
}