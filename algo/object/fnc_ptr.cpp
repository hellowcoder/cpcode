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
    // ptr is a pointer to an integer member of class X.
    // It's initialized to point to member 'a'.
    int X::*ptr = &X::a;

    // fptr is a pointer to a member function of class X that takes an int
    // and returns void. It's initialized to point to the 'print' function.
    void (X::*fptr)(int) = &X::print;

    // Create an object of class X
    X Object;

    // Use the pointer-to-member operator (.*) to assign a value to 'a'
    // for the 'Object' instance.
    Object.*ptr = 10;
    cout << "a = " << Object.*ptr << endl;

    // Use the pointer-to-member operator (.*) to call the 'print' function
    // on the 'Object' instance with the argument 20.
    (Object.*fptr)(20);

    return 0;
}