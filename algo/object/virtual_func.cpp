//Author: sandeep172918
//Date: 2025-08-05 18:56

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
using namespace std;

class base{
  private:
   lli x;
   string name;
  public:
   virtual void called ()= 0;
   virtual void bye(){
    cout<<"hi i am megatraon\n";
   }

   void print(){
    cout<<"Hello World\n";
   }

};

class derived : public base{
  public:
   void called  () override {
    cout<<"called\n";
   }
   void bye() override {
     cout<<"bye\n";
   }
//    void print(){
//     cout<<"Hi World\n";
//    }
};

class derived2 : public base{
  public:
   void called() override{
    cout<<"called2\n";
   }
   void bye() override {
     cout<<"bye2\n";
   }
};

void solve(){
derived hi;
derived2 hi2;
hi.print();
hi.bye();
hi.called();
hi2.print();
hi2.bye();
hi2.called();
}

int32_t main(){
solve();
}