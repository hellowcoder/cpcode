#include <bits/stdc++.h>
using namespace std;
#define lli long long int

class bse{
    public:
    int a;
};
class der:virtual public bse{
    public:
    int b;
    void show(){
        cout<<a<<'\n';
    }
};
class der2:virtual public bse{
    public:
    int c;
     void show(){
        cout<<a<<'\n';
    }
};
class der3:public der,public der2{
    public:
    int sum;
};

int main(){
 der d;
 der2 d2;
 d.a=1;
 d.show();
 d2.a=2;
 d2.show();
 d.b=10;
 d2.c=11;
 der3 d3;
 d3.a;
 lli z=d.b+d.a+d2.c;
 cout<<z<<'\n';
}
//classic diamond inheritance problem;
//    bse
//    /  \
//  der  der2
//    \  /
//    der3

// What happens without virtual?

// der inherits from bse → it has its own copy of bse::a.

// der2 inherits from bse → it also has its own copy of bse::a.

// When der3 inherits from both der and der2, it ends up with two separate copies of bse inside it.

// So in der3, there are two a variables (one from the der branch and one from the der2 branch).
