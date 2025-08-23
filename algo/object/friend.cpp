//Author: sandeep172918
//Date: 2025-08-23 11:20

#include <bits/stdc++.h>
using namespace std;

class c2;
class c1{
 private:
  int a=1,b,c;
  public:
   friend int get_a(class c1,class c2);
   friend class fr;
};

class fr{
  public:
   void get_a(c1 a){
     cout<<a.a<<'\n';
   }
};


class c2{
  private:
   int a=2;
   public:
    friend int get_a(class c1,class c2);
};

int get_a(c1 a,c2 b){
   return a.a+b.a;
}

int32_t main(){
    c1 a;
    c2 b;
    fr f;
cout<<get_a(a,b)<<'\n';
f.get_a(a);
}