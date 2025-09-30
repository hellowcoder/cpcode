//Author: sandeep172918
//Date: 2025-09-30 11:13

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
const int maxx=1e5+1;
struct node{
  lli val;
  lli f;
  node(){
    val=1e9;
    f=0;
  }
};

vector<node>t(4*maxx);
vll v(4*maxx);

node merge(node a,node b){
    node temp;
    temp.val=min(a.val,b.val);
    if(temp.val==a.val)temp.f+=a.f;
    if(temp.val==b.val)temp.f+=b.f;
    return temp;
}

void build(lli ind,lli l,lli r){
    if(l==r){
        t[ind].val=v[l];
        t[ind].f=1;
        return;
    }
    lli mid=(l+r)/2;
    build(2*ind,l,mid);
    build(2*ind+1,mid+1,r);
    t[ind]=merge(t[2*ind],t[2*ind+1]);
}

void update(lli ind,lli l,lli r,lli pos,lli val){
    if(pos<l || pos>r){
        return;
    }
    if(l==r){
        t[ind].val=val;
        return;
    }
    lli mid=(l+r)/2;
    update(2*ind,l,mid,pos,val);
    update(2*ind+1,mid+1,r,pos,val);
    t[ind]=merge(t[2*ind],t[2*ind+1]);
}

node query(lli ind,lli l,lli r,lli lq,lli rq){
    if(r<lq || l>rq){
        return node();
    }
    if(lq<=l && r<=rq){
        return t[ind];
    }
    lli mid=(l+r)/2;
    return merge(query(2*ind,l,mid,lq,rq),query(2*ind+1,mid+1,r,lq,rq));
}


void solve(){
lli n,k;cin>>n>>k;
fr(i,n)cin>>v[i];
build(1,0,n-1);

while(k--){
    lli t,a,b;cin>>t>>a>>b;
    if(t==1){
        update(1,0,n-1,a,b);
    }else{
        node ans=query(1,0,n-1,a,b-1);
        cout<<ans.val<<' '<<ans.f<<'\n';
    }
}


}

int32_t main(){
fastio;
lli tt=1;
while(tt--){
solve();
}
}