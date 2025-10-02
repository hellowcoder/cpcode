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
    lli lazy_set;
    lli lazy_add;
    node(){
        sum=0;
        lazy_set=0;
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
        temp.sum=a.sum+b.sum;
        return temp;
    }


    void build(lli id,lli l,lli r){
        if(l==r){
            t[id].sum=v[l];
            t[id].lazy_set=0;
            t[id].lazy_add=0;
            return;
        }
        lli mid=(l+r)/2;
        build(2*id,l,mid);
        build(2*id+1,mid+1,r);
        t[id]=merge(t[2*id],t[2*id+1]);
    }
    
   void push_down(lli id,lli child){
     if(t[id].lazy_set){
        t[child].lazy_set=t[id].lazy_set;
         t[id].lazy_add=0;
     }else{
        if(t[child].lazy_set)t[child].lazy_set+=t[id].lazy_add;
        else t[child].lazy_add+=t[id].lazy_add;
        // t[id].lazy_set=0;
     }
   }

    void push(lli id,lli l,lli r){
       if(t[id].lazy_set==0 && t[id].lazy_add==0)return;
       if(l!=r){
         push_down(id,2*id);
         push_down(id,2*id+1);
       }
       if(t[id].lazy_set){
          t[id].sum=(r-l+1)*t[id].lazy_set;

       }
        t[id].sum+=(r-l+1)*t[id].lazy_add;
       
       
         t[id].lazy_add=0;
         t[id].lazy_set=0;
    }

    void update(lli id,lli l,lli r,lli lq,lli rq,lli val,lli type){
      push(id,l,r);
      if(rq<l || r<lq){
        return;
      }
      if(lq<=l && r<=rq){
        if(type==0){
            t[id].lazy_set=val;
            t[id].lazy_add=0;
        }else{
            t[id].lazy_add+=val;
        }
        
        push(id,l,r);
        return;
      }
      lli mid=(l+r)/2;
      update(2*id,l,mid,lq,rq,val,type);
      update(2*id+1,mid+1,r,lq,rq,val,type);
      t[id]=merge(t[2*id],t[2*id+1]);
    }
    
    node query(lli id,lli l,lli r,lli lq,lli rq){
      push(id,l,r);
      if(rq<l || r<lq){
        return node();
      }
      if(lq<=l && r<=rq){
        return t[id];
      }
      lli mid=(l+r)/2;
      return merge(query(2*id,l,mid,lq,rq),query(2*id+1,mid+1,r,lq,rq));
    }
    lli quer(lli l,lli r){
        node ans=query(1,0,n-1,l,r);
        return ans.sum;
    }
};



void solve(){
lli n,k;cin>>n>>k;
get(v,n);
Segment_Tree sq(v);
while(k--){
    lli t;cin>>t;
    lli l,r,val;
    cin>>l>>r;
    l--;
    r--;
    if(t==3){
        cout<<sq.quer(l,r)<<'\n';
    }
    else if(t==2){
        cin>>val;
        sq.update(1,0,n-1,l,r,val,0);
    }else{
        cin>>val;
        sq.update(1,0,n-1,l,r,val,1);
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