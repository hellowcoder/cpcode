//Author: sandeep172918
//Date: 2025-04-10 17:27
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
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
Trie t;

void solve(){
char c;cin>>c;lli x;cin>>x;

if(c=='+'){
 t.insert(x);
}
else if(c=='-'){
  t.delet(x);
}else{
  cout<<t.maxi(x)<<'\n';
}

}

int32_t main(){
fastio;
lli tt;cin>>tt;

while(tt--){
solve();
}
}
