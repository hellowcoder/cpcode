//Author: sandeep172918
//Date: 2025-10-07 22:50

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

struct Node {
    vector<pair<lli,lli>> v;
    lli cnt = 0;
};

struct SegTree {
    lli n;
    vector<Node> t;
    vector<lli> a;

    SegTree(vector<lli> &arr) {
        a = arr;
        n = a.size();
        t.resize(4*n);
        build(1,0,n-1);
    }

    Node merge(Node &L, Node &R) {
        Node res;
        res.cnt = L.cnt + R.cnt;

        // merge gcd map
        vector<pair<lli,lli>> tmp;
        for (auto [g1,c1]:L.v)
            for (auto [g2,c2]:R.v){
                lli g = gcd(g1,g2);
                if (g>1) res.cnt += 1LL*c1*c2;
            }

        // build compressed gcd list for res
        map<lli,lli> mp;
        for (auto [g,c]:L.v) mp[g]+=c;
        for (auto [g,c]:R.v) {
            map<lli,lli> nxt;
            for (auto [gg,cc]:mp)
                nxt[gcd(gg,g)] += cc;
            for (auto [k,vv]:nxt) mp[k]+=vv;
        }
        for (auto [g,c]:mp) res.v.push_back({g,c});
        return res;
    }

    void build(lli node,lli l,lli r){
        if(l==r){
            t[node].v={{a[l],1}};
            t[node].cnt=(a[l]>1);
            return;
        }
        lli mid=(l+r)/2;
        build(node*2,l,mid);
        build(node*2+1,mid+1,r);
        t[node]=merge(t[node*2],t[node*2+1]);
    }

    void update(lli node,lli l,lli r,lli idx,lli val){
        if(l==r){
            a[l]=val;
            t[node].v={{val,1}};
            t[node].cnt=(val>1);
            return;
        }
        lli mid=(l+r)/2;
        if(idx<=mid) update(node*2,l,mid,idx,val);
        else update(node*2+1,mid+1,r,idx,val);
        t[node]=merge(t[node*2],t[node*2+1]);
    }

    Node query(lli node,lli l,lli r,lli ql,lli qr){
        if(qr<l || ql>r) return Node();
        if(ql<=l && r<=qr) return t[node];
        lli mid=(l+r)/2;
        Node L=query(node*2,l,mid,ql,qr);
        Node R=query(node*2+1,mid+1,r,ql,qr);
        return merge(L,R);
    }
};

void solve(){
lli n,k;cin>>n>>k;
get(v,n);
SegTree sw(v);
while(k--){
    lli t,a,b;cin>>t>>a>>b;a--;
    if(t==1){
       sw.update(1,0,n-1,a,b);
    }else{
        b--;
        cout<<sw.query(1,0,n-1,a,b).cnt<<'\n';
    }
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