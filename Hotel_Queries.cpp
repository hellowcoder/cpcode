

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
const lli N=2e5+7;

struct node{
    lli sum;
    node():sum(0){}

};

node t[4*N];
lli n;
vector<lli>v(N);

node merge(node a,node b){
    node ans;
    ans.sum=max(a.sum,b.sum);
    return ans;
}

void build(lli ind,lli l,lli r){  //ind teling prop and l,r telling for which it is responsible 
  if(l==r){ //leaf node
     t[ind].sum=v[l];
     return;
  } 
  lli mid=(l+r)/2;
  build(2*ind,l,mid);
  build(2*ind+1,mid+1,r);
  t[ind]= merge(t[2*ind],t[2*ind+1]);
}

void update(lli ind,lli l,lli r,lli pos,lli val){
 if(pos<l || pos>r)return;
 if(l==r){
    t[ind].sum-=val;
    return;
 }
   lli mid=(l+r)/2;
  update(2*ind,l,mid,pos,val);
  update(2*ind+1,mid+1,r,pos,val);
  t[ind]= merge(t[2*ind],t[2*ind+1]);

}

lli query(lli ind,lli l,lli r,lli req){
     if(t[ind].sum < req)return 0;
     if(l==r){
         return l;
     }
     lli mid=(l+r)/2;
     if(t[2*ind].sum>=req){
        return query(2*ind,l,mid,req);
     }else{
       return query(2*ind+1,mid+1,r,req);
     }
}

int main(){
    lli k;cin>>n>>k;
   
    for(int i=1;i<=n;i++){
      cin>>v[i];
    }
    build(1,1,n);
    for(int i=0;i<k;i++){
      lli req;cin>>req;
      lli ans=query(1,1,n,req);
      cout<<ans<<' ';
      if(ans)update(1,1,n,ans,req);
    }
    return 0;

}