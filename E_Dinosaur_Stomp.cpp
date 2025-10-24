//Author: sandeep172918
//Date: 2025-10-01 13:40

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
 
class Segment_Tree{
   struct node{
    lli sum;
    lli lazy_add;
    node(){
        sum=0;
        lazy_add=0;
    }
   };

   vector<node>t;
   vector<lli>v;
   lli n;
   public:
    Segment_Tree(vector<lli>&a){
       n=a.size(); 
       v=a;
       t.resize(4*n+1);
       build(1,0,n-1);

    }
  
    node merge(node a,node b){ //isme lazy nhi sochna hota
        node temp;
        temp.sum=max(a.sum,b.sum);
        return temp;
    }


    void build(lli id,lli l,lli r){
        if(l==r){
            t[id].sum=v[l];
            t[id].lazy_add=0;
            return;
        }
        lli mid=(l+r)/2;
        build(2*id,l,mid);
        build(2*id+1,mid+1,r);
        t[id]=merge(t[2*id],t[2*id+1]);
    }
    
   void push_down(lli id,lli child){
    
        t[child].lazy_add+=t[id].lazy_add;

     }
   

    void push(lli id,lli l,lli r){
       if(t[id].lazy_add){
        t[id].sum+=t[id].lazy_add;
       if(l!=r){
         push_down(id,2*id);
         push_down(id,2*id+1);
       }
       
        t[id].lazy_add=0;
    }
    }

    void update(lli id,lli l,lli r,lli lq,lli rq,lli val){
      push(id,l,r);
      if(rq<l || r<lq){
        return;
      }
      if(lq<=l && r<=rq){
        t[id].lazy_add+=val;
        push(id,l,r);
        return;
      }
      lli mid=(l+r)/2;
      update(2*id,l,mid,lq,rq,val);
      update(2*id+1,mid+1,r,lq,rq,val);
      t[id]=merge(t[2*id],t[2*id+1]);
    }
    
    lli query(){
    return t[1].sum;
    }
};



void solve(){
lli n,k;cin>>n>>k;
get(v,n);
vll t;
lli curr=0;
fr(i,k){
    curr+=v[i];
}
t.psb(curr);
frs(i,k,n-1){
    curr-=v[i-k];
    curr+=v[i];
    t.psb(curr);
}
Segment_Tree sq(t);

lli ans=1e18;
fr(i,n){
  lli high=min((lli)t.size()-1,i);
 lli low=max(0LL,i-k+1);



 sq.update(1,0,n-1,low,high,-1*v[i]);

 
 ans=min(ans,sq.query());
 sq.update(1,0,n-1,low,high,v[i]);

}
cout<<ans<<'\n';

}

int32_t main(){
fastio;
lli tt=1;

while(tt--){
solve();
}
}