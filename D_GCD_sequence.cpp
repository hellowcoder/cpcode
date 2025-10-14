//Author: sandeep172918
//Date: 2025-10-14 21:33

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
lli n,k;cin>>n;
get(v,n);

vll t;
frs(i,1,n-1){
    t.psb(__gcd(v[i-1],v[i]));
}
lli ind=-1;
frs(i,1,n-2){
  if(t[i-1]>t[i]){
   ind=i;
   break;
  }
}
// out(v);
// out(t);
if(ind==-1){
    yes;
   // cout<<"hi\n";
}
else{
    vll c=v;
    vll cc=v;
    cc.erase(cc.begin()+ind-1);
    c.erase(c.begin()+ind);
    v.erase(v.begin()+ind+1);
    t.clear();
    vll tt;
    vll ttt;
    frs(i,1,n-2){
    t.psb(__gcd(v[i-1],v[i]));
    tt.psb(__gcd(c[i-1],c[i]));
    ttt.psb(__gcd(cc[i-1],cc[i]));

    }
    // out(v);
    // out(c);
    // out(t);
    // out(tt);cout<<n<<'\n';
    // cout<<v.size()<<' '<<tt.size()<<'\n';
    bool bol1=true;
    bool bol2=true;
    bool bol3=true;
    frs(i,1,n-3){
       if(t[i-1]>t[i]){
       // cout<"hi\n";
        bol1=false;
       }
       if(tt[i-1]>tt[i]){
        bol2=false;
       }
        if(ttt[i-1]>ttt[i]){
        bol3=false;
       }
    }
    if(bol1 || bol2 || bol3)yes;
    else no;

}
}



int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}