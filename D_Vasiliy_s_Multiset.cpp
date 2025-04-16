#include <bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

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
    for(lli i=30;i>=0;i--){
        lli chek=(x>>i)&1;
        if(!node->iscontain(chek))
              node->put(chek,new Node);
       
        node=node->aage(chek);
        node->badho();
    }
   
  }
  void delet(lli x){
    vector<lli>bits;
    vector<Node*>child;
    Node* node=root;
    for(lli i=30;i>=0;i--){
        lli check=(x>>i)&1;
        node=node->aage(check);
        bits.push_back(check);
        child.push_back(node);
        
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
    for(lli i=30;i>=0;i--){
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