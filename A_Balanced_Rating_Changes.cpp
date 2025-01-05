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
#define nl <<'\n'
using namespace std;
const int MOD=1e9+7;

void solve(){
lli n;cin>>n;vec(v,n);lli odd=0,sum=0;fr(i,n){cin>>v[i];sum+=(v[i]/2);if((abs(v[i]))%2)odd++;}
fr(i,n){
  if(!(v[i]%2)) cout<<v[i]/2 nl;
  else{
    if(sum==0) cout<<v[i]/2 nl;
    else if(sum>0){
        if(v[i]<0) {cout<<v[i]/2-1 nl;sum--;}
        else cout<<v[i]/2 nl;
    }else{
        if(v[i]>0) {cout<<v[i]/2+1 nl;sum++;}
        else cout<<v[i]/2 nl;
    }
  }
}
}

int main(){
fastio;
//lli tt;cin>>tt;
//while(tt--){
solve();
//}
}