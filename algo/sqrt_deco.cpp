//Author: sandeep172918
//Date: 2025-05-16 20:54

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second

using namespace std;
const int inf=1e18;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
lli n,len;
vector<lli>a,b;

void pre(){
  len = (lli)sqrt (n + .0) + 1; // size of the block and the number of blocks
  b.assign(len,inf);
 // b.assign(len,0);
  fr(i,n) 
  b[i/len]=min(b[i/len],a[i]);
 // b[i/len]+=a[i];

}

lli query(lli l, lli r){
    lli ans=inf;
    //lli sum=0;
    lli i=l;
    while(i<=r){
       if (i % len == 0 && i + len - 1 <= r) {
            // if the whole block starting at i belongs to [l, r]
            //sum += b[i / len];
           ans=min(ans,b[i/len]);
            i+=len;
        }
        else {
            //sum += a[i];
            ans=min(ans,a[i]);
            i++;
        }
    }
}

//point update

void update(lli i,lli val){  //o(len)
//  lli delta=val-a[i];
//  b[i/len]+=delta;
 
 a[i]=val;
 lli block=i/val;
 b[block]=inf;
 frs(j,block*len,min(n-1,(block+1)*len-1))
      b[block]=min(a[j],b[block]);
}

void solve(){
cin>>n;lli q;cin>>q;
a.resize(n);
fr(i,n)cin>>a[i];
pre();

while(q--){
    lli type,l,r;cin>>type>>l>>r;
    if(type==1){
        update(l,r);
    }
    else cout<<query(l,r)<<'\n';
}


}

int32_t main(){
fastio;

solve();
}
