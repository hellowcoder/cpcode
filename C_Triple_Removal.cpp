
//Author: sandeep172918
//Date: 2025-10-03 20:41

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
 
void solve(){
lli n,k;cin>>n>>k;
get(v,n);
vll zero,one;
vvll f(n+1,vll(2,0));


fr(i,n){
    if(v[i]==1)one.psb(i);
    else zero.psb(i);
}



frs(i,1,n){
 f[i][0]=f[i-1][0]+(v[i-1]==0);
 f[i][1]=f[i-1][1]+(v[i-1]==1);
}



vll temp(n,0);
for(lli i=0;i<one.size();i+=3){
   if((i+2) > (one.size()-1)) break;
   lli mini=one[i+1]-one[i];
   mini=min(mini,one[i+2]-one[i+1]);
   temp[one[i]]=mini;
}
vll pre_one(n+1,0);
vll pre_z(n+1,0);


frs(i,1,n){
    pre_one[i]=pre_one[i-1]+temp[i-1];
}

temp=vll(n,0);
for(lli i=0;i<zero.size();i+=3){
   if((i+2) > (zero.size()-1)) break;
   lli mini=zero[i+1]-zero[i];
   mini=min(mini,zero[i+2]-zero[i+1]);
   temp[zero[i]]=mini;
}

frs(i,1,n){
    pre_z[i]=pre_z[i-1]+temp[i-1];
}


while(k--){
 lli l,r;cin>>l>>r;l--;
 lli z=f[r][0]-f[l][0];
 lli o=f[r][1]-f[l][1];

 cout<<z<<' '<<o<<' ';
 if(z%3 || o%3){
    no1;
    continue;
 }
 //one
 
//  lli low=upper_bound(all(one),l)-one.begin();
//  lli high=upper_bound(all(one),r-1)-one.begin();
//  lli low=pre_one[l];
//  lli high=pre_one[r];
 lli oo=pre_one[r]-pre_one[l];
 //zero
 
//  low=lower_bound(all(zero),l)-zero.begin();
//  high=upper_bound(all(zero),r-1)-zero.begin();
// low=pre_z[l];
// high=pre_z[r];
 lli zz=pre_z[r]-pre_z[l];
//  if(zz>oo){
//     cout<<zz+o/3<<'\n';
//  }else{
//     cout<<oo+z/3<<'\n';
// }
 cout<<min(oo+z/3,zz+o/3)<<'\n';
}
out(pre_one);
out(pre_z);
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}