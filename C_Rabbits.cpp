//Author: sandeep172918
//Date: 2025-09-20 21:42

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
lli n,k;cin>>n;
string s;
cin>>s;
vll zind;
fr(i,n){
    if(s[i]=='0')zind.push_back(i);
}
k=zind.size();
if(!k){
    yes;
    return;
}
vll l(n,0);
vll r(n,0);
for(lli &ind:zind){
    if(ind==0 || s[ind-1]=='0' || (ind>=2 && s[ind-1]=='1'  && s[ind-2]=='0'))l[ind]=1;
    if(ind==(n-1) || s[ind+1]=='0' || (ind+2<n && s[ind+1]=='1'  && s[ind+2]=='0'))r[ind]=1;

}
lli i=0;
out(l); //
out(r); //
while(i<k){
 lli j=i;
 while(((j+1)<k) && zind[j+1]==(zind[j]+2)  &&  s[zind[j]+1]=='1')j++;  //only one gap allowed
 cout<<i<<' '<<j<<'\n'; //
 lli check=zind[i];
 lli curr=0;
 if(l[check])curr=1;
 else if(r[check])curr=2;
 else if(l[check] && r[check])curr=3;
 if(!curr){
    no;return;
 }
 frs(x,i+1,j){
   lli ii=zind[x];
   lli next=0;
   if((curr==1 || curr==3) && r[ii])next=2;
   if((curr==2 || curr==3) && l[ii])next=1;
   if(curr==3 && r[ii]  &&  l[ii])next=3;

   curr=next;
   if(!curr){
    no;
    return;
   }
 }
 i=j+1;
}
yes;
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}