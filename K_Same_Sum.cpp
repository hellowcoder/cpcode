//Author: sandeep172918
//Date: 2025-09-23 00:40

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
 

class SegmentTree {
    std::vector<lli> tree, lazy;
    lli n;

    void build(const std::vector<lli>& a, lli node, lli l, lli r) {
        if (l == r) {
            tree[node] = a[l];
        } else {
            lli mid = l + (r - l) / 2;
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
        if (r < ql || l > qr) {
            return;
        }
        if (ql <= l && r <= qr) {
            lazy[node] += val;
            push(node, l, r);
            return;
        }
        lli mid = l + (r - l) / 2;
        update_range(2 * node, l, mid, ql, qr, val);
        update_range(2 * node + 1, mid + 1, r, ql, qr, val);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    lli query(lli node, lli l, lli r, lli ql, lli qr) {
        push(node, l, r);
        if (r < ql || l > qr) {
            return 0;
        }
        if (ql <= l && r <= qr) {
            return tree[node];
        }
        lli mid = l + (r - l) / 2;
        return query(2 * node, l, mid, ql, qr) + query(2 * node + 1, mid + 1, r, ql, qr);
    }

public:
    SegmentTree(const std::vector<lli>& a) {
        n = a.size();
        tree.assign(4 * n, 0);
        lazy.assign(4 * n, 0);
        build(a, 1, 0, n - 1);
    }

    void update_point(lli idx, lli val) {  // 0 based
        lli current_val = query_range(idx, idx);
        lli delta = val - current_val;
        update_range(1, 0, n - 1, idx, idx, delta);
    }

    void update_range(lli l, lli r, lli val) {  //0 based
        update_range(1, 0, n - 1, l, r, val);
    }

    lli query_range(lli l, lli r) {  // 0 3
        return query(1, 0, n - 1, l, r);
    }
};

void solve(){
lli n,k;cin>>n>>k;
//get(v,n);

}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}