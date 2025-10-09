//Author: sandeep172918
//Date: 2025-10-06 22:24

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

const lli N=2e6+1;

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
            bit[i]+=val;
    } 

    lli query(lli i){
        lli sum=0;
        for (++i;i>0;i-=(i& -i))
            sum+=bit[i];
        return sum;
    }

    lli range_query(lli l,lli r) {
        return query(r)-query(l-1);
    }
    
     lli kth(lli k){ 
        lli idx=0, bitt=1;
        while((bitt<<1)<=n) bitt<<=1;
        for(lli step=bitt; step; step>>=1){
            lli nxt=idx+step;
            if(nxt<=n && bit[nxt]<k){ k-=bit[nxt]; idx=nxt; }
        }
        return idx+1;
    }
};


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
        temp.sum=min(a.sum,b.sum);
        return temp;
    }


    void build(lli id,lli l,lli r){
        if(l==r){
            t[id].sum=v[l];
            t[id].lazy=0;
            return;
        }
        lli mid=(l+r)/2;
        build(2*id,l,mid);
        build(2*id+1,mid+1,r);
        t[id]=merge(t[2*id],t[2*id+1]);
    }
    
    void apply(lli id,lli l,lli r){
         t[id].sum+=t[id].lazy;
         return;
    }

    void push(lli id,lli l,lli r){
        if(t[id].lazy !=0){
           apply(id,l,r);
           if(l!=r){
           t[2*id].lazy+=t[id].lazy;
           t[2*id+1].lazy+=t[id].lazy;
           }
        }
        t[id].lazy=0;
    }

    void update(lli id,lli l,lli r,lli lq,lli rq,lli val){
      push(id,l,r);
      if(rq<l || r<lq){
        return;
      }
      if(lq<=l && r<=rq){
        t[id].lazy+=val;
        push(id,l,r);
        return;
      }
      lli mid=(l+r)/2;
      update(2*id,l,mid,lq,rq,val);
      update(2*id+1,mid+1,r,lq,rq,val);
      t[id]=merge(t[2*id],t[2*id+1]);
    }
    
    lli query(lli id,lli l,lli r){
      push(id,l,r);
      if(t[id].sum>0)return -1;
      if(l==r)return l;
      lli mid=(l+r)/2;
      lli ans=query(2*id,l,mid);
      if(ans==-1)ans=query(2*id+1,mid+1,r);
      return ans;
    }
};



void solve(){
lli n,k,A,D;
cin>>A>>D;
cin>>n;
get(a,n);
get(d,n);
cin>>k;

vll freq(N);
FenwickTree ft(N+1);


fr(i,n){
    lli score=max(a[i]-A,0LL)+max(d[i]-D,0LL);
    freq[score]++;
     ft.update(score,1);
   // st.insert({score,i});
}
frs(i,1,N-1){
    freq[i]+=freq[i-1];
}
fr(i,N)freq[i]-=i;

Segment_Tree sw(freq);

while(k--){
    lli id,aa,dd;
    cin>>id>>aa>>dd;
    id--;
   // st.erase({curr[id],id});
    lli prev=max(a[id]-A,0LL)+max(d[id]-D,0LL);
    ft.update(prev,-1);
    a[id]=aa;
    d[id]=dd;
    lli neww=max(a[id]-A,0LL)+max(d[id]-D,0LL);
    ft.update(neww,1);

    if(prev>neww) sw.update(1,0,N-1,neww,prev-1,1);  //increasing value of neww by  1  so range will handle prefix sum
    else if(neww>prev)sw.update(1,0,N-1,prev,neww-1,-1);
    lli ind=sw.query(1,0,N-1);
    cout<<ft.query(ind)<<'\n';



    //st.insert({curr[id],id});
   
}
}

int32_t main(){
fastio;
lli tt=1;
while(tt--){
solve();
}
}