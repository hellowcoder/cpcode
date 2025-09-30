#include<bits/stdc++.h>
using namespace std;
#define lli long long int

struct node{
    lli sum;
    node(){
        sum=0;
    }
};

class Segment_tree{
  private:
   vector<node>t;
   vector<lli>V;
   lli N;
   void build(lli id,lli l,lli r){
    if(l==r){
        t[id].sum=V[l];
        return;
    }
    lli mid=(l+r)/2;
    build(2*id,l,mid);
    build(2*id+1,mid+1,r);
    t[id]=merge(t[2*id],t[2*id+1]);
   }

   node merge(node a,node b){
    node temp;
    temp.sum=a.sum+b.sum;
    return temp;
   }

   void updat(lli id,lli l,lli r,lli pos,lli val){
    if(pos<l || pos>r)return;
    if(l==r){
       t[id].sum=val;
       return;
    }

    lli mid=(l+r)/2;
    updat(2*id,l,mid,pos,val);
    updat(2*id+1,mid+1,r,pos,val);
    t[id]=merge(t[2*id],t[2*id+1]);  

   }

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

   void update(lli pos,lli val){
     updat(1,0,N-1,pos,val);
   }
   lli query(lli l,lli r){
     node ans=qury(1,0,N-1,l,r);
      return ans.sum;
   }

};



int main(){
     
     lli n,k;cin>>n>>k;
     vector<lli>v(n);
     for(int i=0;i<n;i++)cin>>v[i];
     Segment_tree st(v);
     while(k--){
        lli t;cin>>t;
        if(t==1){
            lli l,r;cin>>l>>r;l--;r--;
            cout<<st.query(l,r)<<'\n';
        }else{
           lli pos,val;cin>>pos>>val;
           pos--;
           st.update(pos,val);
        }
     }
     

    return 0;
}