//Author: sandeep172918
//Date: 2025-09-21 14:35

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
 
struct Node{
    Node* store[2];
    lli count=0;
    Node(){
      store[0]=nullptr;
      store[1]=nullptr;
     }
 
   bool iscontain(lli x){
      return store[x]!=nullptr;
   }
   void put(lli x,Node* root){
     store[x]=root;
   }
   Node* aage(lli x){
    return store[x];
   }
   void badho(){
    count++;
   }
   void decres(){
    count--;
   }

};
class Trie{
private:
    Node* root;
public:
  Trie(){
    root =new Node();
  }
  void insert(lli x){
    Node* node=root;
    for(lli i=32;i>=0;i--){
        lli chek=(x>>i)&1;
        if(!node->iscontain(chek))
              node->put(chek,new Node);
        node->store[chek]->badho();
        node=node->aage(chek);
        
    }
   
  }
  void delet(lli x){
    vector<lli>bits;
    vector<Node*>child;
    Node* node=root;
    for(lli i=32;i>=0;i--){
        lli check=(x>>i)&1;
        bits.push_back(check);
        child.push_back(node->aage(check));
        node=node->aage(check);
    }
    for(auto &it:child){
        it->decres();
    }
    for(lli i=child.size()-1;i>=0;i--){
        Node* a=child[i];
        if(a->count==0){
            Node* parent;
           if(i==0) parent= root;
              else parent=child[i-1];
           parent->store[bits[i]]=nullptr;
           delete a;
        }else break;
    }
}

lli maxi(lli x){
    Node* node=root;
    lli ans=0;
    for(lli i=32;i>=0;i--){
        lli chek=(x>>i)&1;
        lli opo=1-chek;
        if(node->iscontain(opo)){
            ans|=(1LL<<i);
            node=node->aage(opo);

        }else{
            node=node->aage(chek);
        }
    }
    return ans;
}
 

};



void solve(){
lli n,k;cin>>n>>k;
//get(v,n);

}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}