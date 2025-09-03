//Author: sandeep172918
//Date: 2025-08-28 15:22

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

struct node{
    lli val;
    vll def;
};


void solve(){
lli n,k=0,c=0;cin>>n;
vector<node>v(n);
fr(i,n)cin>>v[i].val;
while(v.size()>1){
    vector<node>nxt_rnd;
    for(lli i=0;i<v.size()-1;i+=2){
         auto a=v[i],b=v[i+1];
         k++;
        if(a.val<b.val){
           a.def.push_back(b.val);
           
           nxt_rnd.push_back(a);
        }else{
           b.def.push_back(a.val);
           nxt_rnd.push_back(b);
        }
    }
    if(v.size()&1)nxt_rnd.push_back(v.back());
    v=nxt_rnd;
}
auto smallest=v[0];
cout<<"smallest "<<smallest.val<<'\n';
lli secnd=1e18;
for(lli &it:smallest.def)secnd=min(secnd,it),c++;
cout<<"SEcond smallest "<<secnd<<'\n';
cout<<"number of compare "<<k<<' '<<c<<'\n';

}

int32_t main(){
fastio;
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}