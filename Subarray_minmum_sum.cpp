//Author: sandeep172918
//Date: 2025-10-27 20:02

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
     
  
 

     
     lli query(lli id,lli l,lli r,lli lq,lli rq){
     //  push(id,l,r);
       if(rq<l || r<lq){
         return 1e18;
       }
       if(lq<=l && r<=rq){
         return t[id].sum;
       }
       lli mid=(l+r)/2;
       return min(query(2*id,l,mid,lq,rq),query(2*id+1,mid+1,r,lq,rq));
     }
     lli quer(lli l,lli r){
         lli ans=query(1,0,n-1,l,r);
         return ans;
     }
 };



 map<lli,vll>m;



lli divi(Segment_Tree &st,lli l,lli r){
   if(l>r)return 0;
   lli mini=st.quer(l,r);
   auto &it=m[mini];
   lli mid=lower_bound(all(it),l)-it.begin();
   mid=it[mid];
   lli left=mid-l+1;
   lli right=r-mid+1;

   lli contr=mini*left*right;

   return contr+divi(st,l,mid-1)+divi(st,mid+1,r);

}

 
void solve(){
lli n,k;cin>>n;

get(v,n);
Segment_Tree st(v);
k=divi(st,0,n-1);
cout<<k<<'\n';


}

int32_t main(){
fastio;
lli tt=1;
while(tt--){
solve();
}
}