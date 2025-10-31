//Author: sandeep172918
//Date: 2025-10-28 20:23

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
 class FenwickTree{
 private:
     vector<lli>bit;
     lli n;
 
 public:
     FenwickTree(lli size){
         n=size+1;
         bit.assign(n,0);
     }
 
     void update(lli i,lli val){
         for(++i;i<n;i+=(i& -i))
             bit[i]=max(val,bit[i]);
     } 
 
     lli query(lli i){
         lli sum=0;
         for (++i;i>0;i-=(i& -i))
             sum=max(bit[i],sum);
         return sum;
     }
 
    //  lli range_query(lli l,lli r) {
    //      return query(r)-query(l-1);
    //  }
     
    //   lli kth(lli k){ 
    //      lli idx=0, bitt=1;
    //      while((bitt<<1)<=n) bitt<<=1;
    //      for(lli step=bitt; step; step>>=1){
    //          lli nxt=idx+step;
    //          if(nxt<=n && bit[nxt]<k){ k-=bit[nxt]; idx=nxt; }
    //      }
    //      return idx+1;
    //  }
 };
// void solve(){
// lli n,k;cin>>n;
// get(v,n);
// get(c,n);
// vll dp(n,0),dp2(n,0);

// frs(i,1,n-1){
//   if(v[i]>=v[i-1]){
//     dp[i]=dp[i-1];
//     continue;
//   }  

//   //itself checnhe
  

//   rfr(j,i-1,0){
//     if(v[j]>v[i]){
//         dp[i]+=c[j];
//     }else{
//         dp[i]+=dp[j];
//         break;
//     }
//   }
//   dp[i]=min(dp[i],c[i]+dp[i-1]);

// }

// rfr(i,n-2,0){
//   if(v[i]<=v[i+1]){
//     dp2[i]=dp2[i+1];
//     continue;
//   }  
//   frs(j,i+1,n-1){
//     if(v[j]<v[i]){
//         dp2[i]+=c[j];
//     }else{
//         dp2[i]+=dp2[j];
//         break;
//     }
//   }
//   dp2[i]=min(dp2[i],c[i]+dp2[i+1]);

// }

// cout<<min(dp[n-1],dp2[0])<<'\n';

// }
class Segment_Tree{
   struct node{
    lli sum;
    lli lazy;
    node(){
        sum=0;
        lazy=0;
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
            //t[id].lazy=0;
            return;
        }
        lli mid=(l+r)/2;
        build(2*id,l,mid);
        build(2*id+1,mid+1,r);
        t[id]=merge(t[2*id],t[2*id+1]);
    }
    
    // void apply(lli id,lli l,lli r){
    //      t[id].sum+=((r-l+1)*t[id].lazy);
    //      return;
    // }

    // void push(lli id,lli l,lli r){
    //     if(t[id].lazy !=0){
    //        apply(id,l,r);
    //        t[2*id].lazy+=t[id].lazy;
    //        t[2*id+1].lazy+=t[id].lazy;
    //     }
    //     t[id].lazy=0;
    // }

    void update(lli id,lli l,lli r,lli lq,lli rq,lli val){
     // push(id,l,r);
      if(rq<l || r<lq){
        return;
      }
      if(lq<=l && r<=rq){
         t[id].sum=max(t[id].sum,val);
        return;
      }
      lli mid=(l+r)/2;
      update(2*id,l,mid,lq,rq,val);
      update(2*id+1,mid+1,r,lq,rq,val);
      t[id]=merge(t[2*id],t[2*id+1]);
    }
    
    node query(lli id,lli l,lli r,lli lq,lli rq){
     // push(id,l,r);
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
    lli n;cin>>n;
  get(v,n);
  get(c,n);
  vll t;
  map<lli,lli>m;
  fr(i,n)m[v[i]]++;
  for(auto &it:m){
    t.psb(it.ff);
  }
  srt(t);
  vll tt(t.size(),0);
  FenwickTree ft(t.size());
  Segment_Tree st(tt);
  lli maxi=0;
  fr(i,n){
   lli ind=lower_bound(all(t),v[i])-t.begin();
  // lli curr=ft.query(ind)+c[i];
   lli curr=st.quer(0,ind)+c[i];
  // ft.update(ind,curr);
   st.update(1,0,t.size()-1,ind,ind,curr);
   maxi=max(maxi,curr);
   
  }
  cout<<accumulate(all(c),0LL)-maxi<<'\n';
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}