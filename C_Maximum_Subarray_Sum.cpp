//Author: sandeep172918
//Date: 2025-05-10 21:44

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v,n) frs(i,0,n-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

//binary search lagale bete
void solve(){
lli x,k;cin>>x>>k;
string s;cin>>s;get(v,x);
fr(i,x){
    if(s[i]=='0')v[i]=-1e12;
}
//lli cs=0,ms=0;
// vect(ind);
// fr(i,x){
//     if(v[i]==-1e12){
//         ind.psb(i);
//         continue;
//     }
//     cs+=v[i];
//     ms=max(cs,ms);
//     if(cs<0){
//         cs=0;
//         ind.clear();
//     }
// }
// if(count(all(s),'0')==0){
//     if(ms==k){
//         yes;
//         out(v,x)<<" ";
//         cout<<'\n';
//         return;
//     }
//     else{
//         no;return;
//     }
// }
// if(ms>k){
//     no;return;
// }
// // fr(i,ind.size()){
// //     cout<<ind[i]<<" ";
// // }cout<<"*\n";
// if(ms==k){
//     yes;
//         out(v,x)<<" ";
//         cout<<'\n';
//         return;
// }
// lli c=k-ms;
// cout<<"hi\n";
vec(pref,x+1,0);vec(suff,x+1,0);
frs(i,1,x){
    pref[i]=max(0LL,pref[i-1]+v[i-1]);
}
rfr(i,x-1,0){
    suff[i]=max(suff[i+1]+v[i],0LL);
}
if(mxe(suff)>k || mxe(pref)>k){
    no;return;
}
//cout<<"hi\n";
fr(i,x){
    if(s[i]=='0'){
        v[i]=k-pref[i]-suff[i+1];
        yes;
        out(v,x)<<" ";
        cout<<'\n';return;
    }
}
if(mxe(pref)!=k){
    no;return;
}
yes;
out(v,x)<<" ";
cout<<'\n';

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}