//Author: sandeep172918
//Date: 2025-10-11 10:22

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define pr pair<lli,lli>
#define vll vector<lli>
#define vbl vector<bool>
#define vpr vector<pr>
#define vvll vector<vector<lli>>
#define get(v,n) vll v(n);fr(i,n)cin>>v[i]
#define ff first
#define ss second
#define bitc(x) __builtin_popcountll(x)
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
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
bool check(lli per,lli maxi){
   
    return per>maxi;
} 

void solve(){
lli n,k;cin>>n;
get(v,n);
map<lli,lli>m;
fr(i,n){
    m[v[i]]++;
}
lli ans=0;
lli side=0;
vll temp;
lli maxi=0;
for(auto &it:m){
 if(it.ss&1LL){
   ans+=((it.ff)*(it.ss-1));
   side+=(it.ss-1);
   if(it.ss-1){
    maxi=max(maxi,it.ff);
   }
   temp.psb(it.ff);
 }else{
    ans+=((it.ff)*it.ss);
    side+=(it.ss);
    maxi=max(maxi,it.ff);
 }
}
if(ans==0){  //convexity
    cout<<"0\n";
    return;
}
if(temp.size())
        rsrt(temp);


n=temp.size();
fr(i,n){
    lli per=ans+(i==(n-1) ? 0 : temp[i+1]);
   // maxi=max(maxi,temp[i]);
    if(check(per,temp[i])){
        side++;
        cout<<per+temp[i]<<'\n'; //1 and 2
      //  side+=2;
        return;
    }
}
if(side==2)cout<<"0\n";
else cout<<ans<<'\n'; // 0 

}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}