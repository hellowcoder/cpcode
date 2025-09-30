//Author: sandeep172918
//Date: 2025-09-26 15:51

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
    lli l,r;
    vll v;
    node(lli i,lli x){
        l=i;r=i;
        v={x};
    }
    node(){
        l=-1;
        r=-1;
        v={};
    }
};

map<lli,vll>m;

class Segment_tree{
  private:
   vector<node>t;
   vector<lli>V;
   lli N;
   void build(lli id,lli l,lli r){
    if(l==r){ //leaf node
        t[id].l=l;
        t[id].r=r;
        t[id].v={V[l]};
        return;
    }
    lli mid=(l+r)/2;
    build(2*id,l,mid);
    build(2*id+1,mid+1,r);
    t[id]=merge(t[2*id],t[2*id+1]);
   }
   
   lli fre(lli x,lli l,lli r){
     auto &it=m[x];
     return upper_bound(all(it),r)-upper_bound(all(it),l-1);
   }

   
   node merge(node a,node b){
    if(a.l==-1)return b;
    if(b.r==-1)return a;
    node temp;
    temp.l=a.l;
    temp.r=b.r;
    set<lli>st;
    lli len=(temp.r-temp.l+1)/3+1;
    for(lli &it: a.v){
      if(fre(it,temp.l,temp.r)>=len)st.insert(it);
    }
    for(lli &it: b.v){
       if(fre(it,temp.l,temp.r)>=len)st.insert(it);
    }
    for(auto &it:st) temp.v.psb(it);
    return temp;
   }

//    void updat(lli id,lli l,lli r,lli pos,lli val){
//     if(pos<l || pos>r)return;
//     if(l==r){
//        t[id].sum=val;
//        return;
//     }

//     lli mid=(l+r)/2;
//     updat(2*id,l,mid,pos,val);
//     updat(2*id+1,mid+1,r,pos,val);
//     t[id]=merge(t[2*id],t[2*id+1]);  

//    }

    node qury(lli id,lli l,lli r,lli lq,lli rq){
    if(rq<l || lq>r)return node();
    if(l>=lq && r<=rq)return t[id];
    lli mid=(l+r)/2;
    return merge(qury(2*id,l,mid,lq,rq),qury(2*id+1,mid+1,r,lq,rq));
   }

   public:

    Segment_tree(vector<lli>&v){
     
    
    N=v.size();
    V.resize(N);
    t.resize(4*N+1);
    V=v;
    build(1,0,N-1);
   } 

//    void update(lli pos,lli val){
//      updat(1,0,N-1,pos,val);
//    }
   vll query(lli l,lli r){
     node ans=qury(1,0,N-1,l,r);
      return  ans.v;
   }

};


void solve(){
lli n,k;cin>>n>>k;
m.clear();
vll v(n);
fr(i,n){
    cin>>v[i];
    m[v[i]].psb(i);
}
Segment_tree st(v);
while(k--){
  lli l,r;cin>>l>>r;
  vll ans=st.query(l-1,r-1);
  if(ans.size()){
    out(ans);
  }else{
    cout<<"-1\n";
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