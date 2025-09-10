#include <bits/stdc++.h>
using namespace std;
#define lli long long int

class base{
private:
 lli x;
 public:
  base(lli y){  // if it is not paramatrised no need called explicitly
   this->x=y;
    cout<<"Base constructor callled\n";
  }
  ~base(){
    cout<<"Base Destructor called\n";
  }
};

class derived1:public base{
  private:
 lli x;
 public:
  derived1(lli y):base(y){
    
   this->x=y;
    cout<<"Derived1 constructor callled\n";
  }
  ~derived1(){
    cout<<"Derived1 Destructor callede\n";
  }
};

// class derived2:public base{
// private:
//  lli x;
//  public:
//   derived2(lli y):base(y){
//    this->x=y;
//     cout<<"Derived2 constructor callled\n";
//   }
//   ~derived2(){
//     cout<<"Derived2 Destructor callede\n";
//   }
// };
int main(){
 derived1 d1(1);
// derived2 d2(1);
}