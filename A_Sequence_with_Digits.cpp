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
lli mindigi(lli a){
    lli k=9;
    while(a){
        lli l=a%10;
        if(l==0) return l;
        a/=10;
        k=min(k,l);
        
    }
    return k;
}
lli maxdigi(lli a){
    lli k=0;
    while(a){
        lli l=a%10;
        if(l==9) return l;
        a/=10;
        k=max(k,l);
        
    }
    return k;
}
void solve(){
lli y;lli x;cin>>x>>y;
//cout<<mindigi(x)<<" "<<maxdigi(x)<<'\n';
fr(i,y-1){
  lli l=x+mindigi(x)*maxdigi(x);
  if(l==x) break;
  x=l;

  
}
cout<<x<<'\n';
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}