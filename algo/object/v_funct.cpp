#include <bits/stdc++.h>

using namespace std;

class base {
public:
    void vfunc() {
        cout << "this is base vfunc\n";
    }
};

class derived : public base {
public:
    virtual void vfunc() {
        cout << "this is derived vfunc\n";
    }
};

int main() {
    base a;
    base *p;
    derived d1;
    derived d2;
    derived* dd;
    p = &a;
    p->vfunc();

    p = &d1;
    p->vfunc();

    p = &d2;
    p->vfunc();

    d1.vfunc();
    d2.vfunc();

   
    return 0;
}