//Author: sandeep172918
//Date: 2025-03-29 20:08
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
lli x;cin>>x;
vector<lli>even,odd;
lli maxi=0;
fr(i,x){
    lli a;cin>>a;
    if(a&1){
        odd.psb(a);
    }else even.psb(a);
    maxi=max(maxi,a);
}

// lli e=even.size(),o=odd.size();
// while(even.size() && odd.size()){
//     lli ev=even.back(),od=odd.back();
//     even.pop_back();odd.pop_back();
//     lli check=ev+od;
//     odd.psb(check);
    // // lli rem=min(ev,od);
    // // check+=rem;
    // // if(rem&1){
    // //     odd.pop_back();
    // // }else{
    // //     even.pop_back();
    // // }
    // if(check&1){
    //     odd.psb(check);
    // }else{
    //     even.psb(check);
    // }
if(!(even.size() && odd.size())){
    cout<<maxi<<'\n';
}else{
    cout<<accumulate(all(even),0LL)+accumulate(all(odd),0LL)-odd.size()+1<<'\n';
}
}



int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}