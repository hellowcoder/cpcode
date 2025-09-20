// #include <bits/stdc++.h>
// using namespace std;
// #define lli long long int

// class calcu{
//  private:
//  lli a,b;
//  public:
//   int add(lli a,lli b);
//   int multiply(lli a,lli b);
// };
// int calcu::add(lli a,lli b){
//     return a+b;
// }
// int calcu::multiply(lli a,lli b){
//     return a*b;
// }

// int add(int a,int b){
//     return a+b;
// }
// int main(){
// int (*ftr)(int,int);
// ftr=&add;
// cout<<ftr(2,4)<<'\n';


// }
#include <iostream>
using namespace std;

class test {
    int a;
  public:
   void set_a(int x){
     a=x;
   }
   int get_a(){
    return a;
   }
};

class derv:public test{
  int b;
  public:
   void set_b(int x){
     b=x;
   }
   int get_b(){
    return b;
   }
};



int main() {
   test tt,*p;
   derv d,*dd;
   p=&d;
   dd=&d;
  
   ((derv *)p)->set_b(571823);
   cout<<((derv *)p)->get_b()<<'\n';
}


