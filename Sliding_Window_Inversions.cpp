//Author: sandeep172918
//Date: 2025-08-10 23:02

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
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

//max(a,b)=(a+b+abs(a-b))/2
//binary search lagale bete
// four stage of dp  
//  --think in term of index i,j whatever 
 //   --find bse case --  
//   -- find relation  
//   -- good to go
//chicken nugget formula 
//   -- max number which can be written in form of ax+by where __gcd(x,y)=1 id x*y-x-y 
//  -- total(x-1)(y-1)/2 numbers can be written in that form
 


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

    lli range_query(lli l,lli r) {       //just put what you want in 0 based like 0,n-1
        return query(r)-query(l-1);
    }
};
 
void solve(){
lli n,k;cin>>n>>k;
get(v,n);

vector<lli>vc=v;
srt(vc);
lli cnt=0;
auto find = [&](lli x)-> lli {
  return (lower_bound(all(vc),x)-vc.begin());
};


FenwickTree sg(n);

auto add=[&](lli x)-> void{
    x=find(x);
   sg.update(x,1);
   cnt+=sg.range_query(x+1,n-1);

};
auto remove=[&](lli x)-> void{
    x=find(x);
  sg.update(x,-1);
  cnt-=sg.range_query(0,x-1);

};
fr(i,n){
    add(v[i]);
    if(i>=k)remove(v[i-k]);
    if(i>=k-1)cout<<cnt<<' ';
}

}

int32_t main(){
fastio;
solve();
}