//Author: sandeep172918
//Date: 2025-07-31 21:08

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
#define out(v) frs(i,0,v.size()-1)cout<<v[i]
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
#define ff first
#define ss second
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//max(a,b)=(a+b+abs(a-b))/2
//binary search lagale bete
// four stage of dp  --think in term of index i,j whatever --find bse case --  -- find relation  -- good to go
//chicken nugget formula  max number which can be written in form of ax+by where __gcd(x,y)=1 id x*y-x-y 
//                            and total(x-1)(y-1)/2 numbers can be written in that form

class FenwickTree{
private:
    vector<lli>bit;
    lli n;

public:
    FenwickTree(lli size){
        n=size+1;
        bit.assign(n,0);
    }

    void update(lli i,lli val){
        for(++i;i<n;i+=(i& -i))
            bit[i]+=val;
    } 

    lli query(lli i){
        lli sum=0;
        for (++i;i>0;i-=(i& -i))
            sum+=bit[i];
        return sum;
    }

    lli range_query(lli l,lli r) {
        return query(r)-query(l-1);
    }
};


// lli inversion(vector<lli>&v){
//   lli n=v.size();
//   FenwickTree ft(n);
//   vector<lli>temp(n);
//   temp=v;
//   srt(temp);
//   map<lli,lli>rank;
//   fr(i,n){
//     rank[temp[i]]=i;
//   }
//   lli ans=0;
//   rfr(i,n-1,0){
//     lli index=rank[v[i]];
//     ans+=ft.query(index-1);  //counting number of eleemnt less than v[i]
//     ft.update(index,1);  // increasing number of that index;
//   }
//   return ans;
// }


void solve(){
lli n,k=0;cin>>n;
get(v,n);
vector<lli>prefix(n,0),suffix(n,0);
FenwickTree ft(n+1),ft2(n+1);
rfr(i,n-1,0){
 suffix[i]=ft.query(v[i]-1);
 ft.update(v[i],1);
}
// out(suffix)<<" ";
// cout<<'\n';
fr(i,n){
    prefix[i]=i-ft2.query(v[i]);
    ft2.update(v[i],1);
}
// out(prefix)<<" ";
// cout<<'\n';
lli ans=accumulate(all(suffix),0LL);
fr(i,n){
    lli check=(n-(i+1))-suffix[i]-prefix[i];
    if(check<0)k+=check;
}
cout<<ans+k<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}