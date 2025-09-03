//Author: sandeep172918 //Date: 2025-09-03 20:54
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

struct SegTree {
    lli n;
    vector<lli> st;
    
    SegTree(vector<lli> &v) {
        n = v.size();
        st.assign(4*n, 0);
        build(1,0,n-1,v);
    }
    
    void build(lli p, lli l, lli r, vector<lli> &v) {
        if(l==r){
            st[p]=v[l];
            return;
        }
        lli mid=(l+r)/2;
        build(p*2,l,mid,v);
        build(p*2+1,mid+1,r,v);
        
        // Calculate the level of this segment in the tree
        // Level 0 = leaves, Level 1 = parents of leaves, etc.
        lli len = r - l + 1;
        lli level = 0;
        lli temp = n;
        while(temp > len) {
            temp = (temp + 1) / 2;
            level++;
        }
        
        // Level 0 (leaves): no operation needed
        // Level 1: max operation (combines adjacent elements with max)
        // Level 2: min operation  
        // Level 3: max operation, etc.
        if(level % 2 == 1)
            st[p] = max(st[p*2], st[p*2+1]);
        else
            st[p] = min(st[p*2], st[p*2+1]);
    }
    
    void update(lli p, lli l, lli r, lli idx, lli val){
        if(l==r){
            st[p]=val;
            return;
        }
        lli mid=(l+r)/2;
        if(idx<=mid) update(p*2,l,mid,idx,val);
        else update(p*2+1,mid+1,r,idx,val);
        
        // Same level calculation as in build
        lli len = r - l + 1;
        lli level = 0;
        lli temp = n;
        while(temp > len) {
            temp = (temp + 1) / 2;
            level++;
        }
        
        if(level % 2 == 1)
            st[p] = max(st[p*2], st[p*2+1]);
        else
            st[p] = min(st[p*2], st[p*2+1]);
    }
    
    lli query_root(){ return st[1]; }
};

void solve(){
    lli n,k;cin>>n>>k;
    get(v,n);
    SegTree sg(v);
    cout<<sg.query_root()<<' ';
    fr(i,k){
        lli a,b;cin>>a>>b;
        a--;
        sg.update(1,0,n-1,a,b);
        cout<<sg.query_root()<<' '; 
    }
    cout<<'\n';
}

int32_t main(){
    fastio;
    lli tt=1;
    cin>>tt;
    while(tt--){
        solve();
    }
}