//Author: sandeep172918
//Date: 2025-08-10 18:34

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
// four stage of dp  
//  --think in term of index i,j whatever 
 //   --find bse case --  
//   -- find relation  
//   -- good to go
//chicken nugget formula 
//   -- max number which can be written in form of ax+by where __gcd(x,y)=1 id x*y-x-y 
//  -- total(x-1)(y-1)/2 numbers can be written in that form
 
 
 
 class SegmentTree {
     vector<lli> tree, lazy;
     lli n;
 
     void build(vector<lli>& a, lli node, lli l, lli r) {
         if (l == r) {
             tree[node] = a[l];
         } else {
             lli mid = (l + r) / 2;
             build(a, 2 * node, l, mid);
             build(a, 2 * node + 1, mid + 1, r);
             tree[node] = tree[2 * node] + tree[2 * node + 1];
         }
     }
 
     void push(lli node, lli l, lli r) {
         if (lazy[node] != 0) {
             tree[node] += (r - l + 1) * lazy[node];
             if (l != r) {
                 lazy[2 * node] += lazy[node];
                 lazy[2 * node + 1] += lazy[node];
             }
             lazy[node] = 0;
         }
     }
 
     void update_range(lli node, lli l, lli r, lli ql, lli qr, lli val) {
         push(node, l, r);
         if (r < ql || l > qr) return;
         if (ql <= l && r <= qr) {
             lazy[node] += val;
             push(node, l, r);
             return;
         }
         lli mid = (l + r) / 2;
         update_range(2 * node, l, mid, ql, qr, val);
         update_range(2 * node + 1, mid + 1, r, ql, qr, val);
         tree[node] = tree[2 * node] + tree[2 * node + 1];
     }
 
     void update_point(lli node, lli l, lli r, lli idx, lli val) {
         push(node, l, r);
         if (l == r) {
             tree[node] = val;
             return;
         }
         lli mid = (l + r) / 2;
         if (idx <= mid) update_point(2 * node, l, mid, idx, val);
         else update_point(2 * node + 1, mid + 1, r, idx, val);
         tree[node] = tree[2 * node] + tree[2 * node + 1];
     }
 
     lli query(lli node, lli l, lli r, lli ql, lli qr) {
         push(node, l, r);
         if (r < ql || l > qr) return 0;
         if (ql <= l && r <= qr) return tree[node];
         lli mid = (l + r) / 2;
         return query(2 * node, l, mid, ql, qr) + query(2 * node + 1, mid + 1, r, ql, qr);
     }
 
 public:
     SegmentTree(vector<lli>& a) {
         n = a.size();
         tree.assign(4 * n, 0);
         lazy.assign(4 * n, 0);
         build(a, 1, 0, n - 1);
     }
 
     void update_point(lli idx, lli val) {
         update_point(1, 0, n - 1, idx, val);
     }
 
     void update_range(lli l, lli r, lli val) {
         update_range(1, 0, n - 1, l, r, val);
     }
 
     lli query_range(lli l, lli r) {
         return query(1, 0, n - 1, l, r);
     }
 };
 
 
 
 
void solve(){
lli n,k;cin>>n>>k;
get(v,n);
SegmentTree  st(v);
while(k--){
    lli type,l,r,i,val;
    cin>>type;
    if(type==1){
        cin>>i>>val;
        st.update_point(i,val);
    }else{
        cin>>l>>r;
        cout<<st.query_range(l-1,r-1)<<'\n';
    }
}
}

int32_t main(){
fastio;
solve();
}