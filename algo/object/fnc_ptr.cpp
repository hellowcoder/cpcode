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

class X {
public:
    int a;
    void print(int b) {
        cout << "b = " << b << endl;
    }
};

int main() {
   X x;
   int (X::*ptr);
   ptr=&X::a;
   void (X::*fptr)(int);
   fptr=&X::print;
   x.*ptr=2;
   (x.*fptr)(10);
   
}


