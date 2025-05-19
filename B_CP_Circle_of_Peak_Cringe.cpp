//Author: sandeep172918
//Date: 2025-05-12 19:23

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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

//binary search lagale bete

 bool check(vector<lli>&v){
   lli n=v.size();
   fr(i,n){
    lli curr=v[i];
    lli next=v[(i+1)%n];
    lli prev=v[(i-1+n)%n];
    if(!((curr>next && curr>prev) ||  (curr<next && curr<prev)))return false;
   }
   return true;
 }
void solve(){
lli x;cin>>x;get(v,x);
srt(v);
vec(ans,x,0);
lli k=0,j=x/2;
fr(i,x){
    if(i&1){
        ans[i]=v[j++];
    }else ans[i]=v[k++];
}
if(check(ans)){
    yes;
out(ans,x)<<" ";
cout<<'\n';
}else no;
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}